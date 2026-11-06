# Coverage — what is lifted, what is only mapped

Two very different things live in this repo, and it matters which one you are reading:

* **Mapped** (100 %): every function of every shipped binary has an address, a size, an
  instruction count, its plaintext string references and its import/callee edges.
  That is `data/*.tsv` and `data/callgraph.json`.
* **Lifted** (subset): Ghidra C pseudocode per function in `pseudocode/`. Decompiler output,
  not source, not buildable.

## Numbers

| Metric | Value |
| --- | --- |
| `libOpiumwareNative.dylib` functions (`LC_FUNCTION_STARTS`) | **68,338** |
| …linear-disassembled (capstone sweep of every function range) | **68,338** / 6,832,345 instructions |
| …lifted to C by Ghidra | **45,722 = 66.9 %** of all functions, **99.87 % of the app code** — 2,000 browsable + 43,722 in `pseudocode/libOpiumwareNative_bulk.tar.xz` |
| …of the 9,083 app-region functions (`0x1000–0x400000`) | **9,071 lifted = 99.87 %** (the 12 missing are the >20 KB monsters) |
| …measured in instructions | **2,660,472 / 6,832,345 = 38.9 %** of all instructions — **88.4 %** of app-region instructions (918,112 / 1,038,127), **30.1 %** of library instructions (1,742,360 / 5,794,218) |
| …still to do (all library, ≤20 KB) | 22,576 functions — resumable, see the command below |
| …functions that reference a plaintext string | 2,621 / 15,375 = 17.0 % |
| …skipped by policy (single functions > 20 KB) | 40 |
| Plaintext string references (from code) | 43,132 refs / 22,878 unique strings |
| Plaintext coverage of `__TEXT,__cstring` | **1,305,910 / 1,347,660 B = 96.9 %** (41,123 strings; 19,139 unreferenced) |
| fmix64 materialisations in `__text` / with the per-byte transform / resolved to a record | 4,747 / 1,041 / 851 |
| TLS records decrypted (distinct strings) | **1,232 (723)** |
| Functions that reference at least one plaintext string | 15,375 |
| Import call edges / unique imports | 59,958 / 758 |
| Call-graph edges | 232,513 |
| Functions in the app-code region `0x1000–0x400000` | 9,083 (1,038,127 instructions) |
| Functions referencing executor keywords | 4,680 |
| `libAccountManager.dylib` functions lifted | **144 / 144 (100 %)** |
| `Injector` functions lifted | **43 / 43 (100 %)** |

## Why the dylib is not 100 % lifted

The target is a 34.6 MB, fully stripped, static-link soup whose `__TEXT,__text` is 27.3 MB.
Two walls, in order:

1. **Ghidra's stock pipeline does not fit.** Auto-analysis runs the decompiler over all 68k
   functions (`Decompiler Parameter ID`, `Decompiler Switch Analysis`, `Call Convention ID`).
   On the 2 GB / 2-core sandbox used for this work that is OOM-killed every time (measured:
   killed at 1.7 GB, 1.3 GB and 1.0 GB heap, during analysis, 3–8 minutes in).
2. **So the lifting is done without analysis.** Import with `-noanalysis`, disable every analyzer
   (needed because script-driven disassembly otherwise queues change-driven analysis and OOMs),
   then for
   each function range from `LC_FUNCTION_STARTS`: define the plaintext strings it references as
   ASCII data, disassemble inside the known boundary with
   `DisassembleCommand(body, body, followFlow=true)`, `createFunction`, `decompileFunction`,
   write one `.c` file. Measured ~13 functions/second on small bodies, ~1/second once the
   bodies get large; the run that produced this repo stopped on a 2,100 s budget after 10,521
   functions with memory flat at ~1.3 GB. The run is resumable — the candidate list is already in
   `data/functions.tsv` order.

Trade-offs of the no-analysis route, stated plainly:

* no parameter/return type recovery — prototypes are `undefined8 FUN_xxx(undefined8, …)`;
  you read the code, not a signature;
* no data-type propagation, so structs show as `long *` + offsets (which is what most of the
  obfuscated code looks like anyway);
* symbol names are gone (stripped binary); callees appear as `FUN_<addr>` — cross-reference them
  against `data/functions.tsv`;
* functions larger than 20 KB are skipped: they blow the memory budget. 40 functions are affected,
  including the biggest ones (117 KB at `0x46494`, 62 KB at `0x1ac81c`, 50 KB at `0x1bb9d0`).
  These are Luau VM / DXC front-end bodies, i.e. library code, not app logic. They are still
  fully present in `data/functions.tsv` and `disassembly/`.

What you *do* get per file: real strings inline (`"Unable to create container builder from
dxil.dll…"`), correct control flow, correct call targets, and grep-able structure. For the app
code that is enough to read intent; for the Luau/curl/OpenSSL bulk it is not worth reading at all.

The practical consequence: **the parts a human would actually read are lifted almost completely.**
Of the 9,083 functions in the app-code region, 9,071 have a `.c` file. What is left unmapped in
C is the library bulk (Luau VM, curl, OpenSSL, DXC/SPIRV-Cross) where addresses are the only
identity anyway and where the mapping tables (`data/functions.tsv`) are more useful than C.

## Reading the pseudocode names

| Binary | File name | Meaning |
| --- | --- | --- |
| `libOpiumwareNative.dylib` | `pseudocode/libOpiumwareNative/0x11a58c.c` | function at VA 0x11a58c (stripped, so address is the only identity) |
| `Injector` | `pseudocode/Injector/0x100002440.c` | real symbol: `insert_dylib()` |
| `libAccountManager.dylib` | `pseudocode/libAccountManager/0x00000a80.c` | VA 0xa80 = the main interpose/hook routine |

Both small binaries were lifted with **full** Ghidra analysis; their file names are the real
symbol addresses and the bodies keep whatever comments the decompiler emitted.

## Known gaps (deliberate)

1. **Encrypted strings — solved, with a known residue.** Everything interesting (`https://…`, Lua
   names, error text) is decrypted at runtime from a TLS buffer. The cipher is transliterated and
   verified, the table is `__DATA,__thread_data` (2,461 records), and the site→record pairing is a
   static lookup through the `offset` field of the `__thread_vars` tuples.
   **1,232 records decrypted, 723 distinct strings, 13,795 chars** in
   `data/strings_decrypted.tsv`. Residue: ~190 sites point into `__thread_bss`, where the
   ciphertext only exists at run time, and ~1,230 records need live VM state that a static harness
   cannot supply. Consequence: the fn names in `opiumware.d.luau` and the docs remain the reliable
   source for the API surface, not the C.
2. **Rust/`Decompiler` and Swift/UI binaries** are documented from symbols, strings, source paths
   and bundled resources, not lifted. Rust and Swift decompilation is mostly
   noise without type info; the interesting parts (HTTP routes, provider keys, cookie flows) are
   visible in the string/symbol layer.
3. **`LuauLSP`** is upstream open source; nothing was lifted.

## Reproducing / extending

The tooling that produced these files is **not** part of this repository. What it did, in order:

1. **Mapping (~1 min).** Walk `LC_FUNCTION_STARTS` for all 68,338 function ranges, run a capstone
   linear sweep over `__TEXT,__text`, resolve string and import references per function. Rebuilds
   `data/functions.tsv`, `data/strings.tsv`, `data/imports.tsv`, `data/callgraph.json`.
2. **Lifting (slow).** Ghidra 12.2 headless, `-noanalysis`, with every analyzer disabled, then per
   function: define the plaintext strings it references as ASCII data, disassemble inside the known
   boundary, `createFunction`, `decompileFunction`, write one `.c` per function. The run is
   resumable — skip any address whose `.c` already exists and run again until the list is
   exhausted. This repository stopped at 45,722 of 68,338 functions.
3. **Strings.** Transliterate the per-byte cipher, locate the TLS table, resolve each decrypt site
   to its record through the `__thread_vars` tuple offsets, and run the binary's own instructions
   for each record under Unicorn. Writes `data/strings_decrypted.tsv`.

With a machine of 8 GB or more, dropping `-noanalysis` and running the stock pipeline instead gives
real prototypes and structs, at roughly 50x the wall clock.

## Watermark

Every file in `pseudocode/` (45,909 `.c`), both files in `disassembly/` and every table in `data/`
carries the watermark described in `README.md` and `LICENSE`: a header block plus the same notice
repeated inside the body at irregular, per-file intervals, with a `file-id` derived from the file
name and its content. Both the header layout and the in-body phrasings vary from file to file, so
removing the header alone leaves the internal notices behind.
