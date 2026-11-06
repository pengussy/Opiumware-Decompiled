# Donate & community

This repo is free and stays free. If it saved you time, or you just want to hang out and
talk about reversing macOS/Roblox targets, the two useful links are below.

## Discord (preferred)

**[discord.gg/sdkhDjTex](https://discord.gg/sdkhDjTex)**

Scan or click:

![Discord invite QR](discord_qr.png)

Ask questions about the analysis, report mistakes in the tables, or share your own lifts.
Discord is faster than GitHub issues for anything exploratory.

## GitHub

[pengussy](https://github.com/pengussy) — follow for the next decompilation drop.

## What "donate" actually pays for

Not servers, not licenses. It pays for the machine time this takes: the dylib here is
34.6 MB of fully stripped ARM64 with 68,338 functions, and the sandbox that produced this
repo only had 2 GB of RAM — which is why "only" 10.5k functions are lifted. A machine with
8 GB+ lifts the rest with prototypes and structs instead of `undefined8`.

There is no payment link in this repo on purpose: ask in Discord if you want one, so it can
stay in one place and stay honest.

## Credit

Layout and spirit: [pengussy/Hydrogen-Decompiled](https://github.com/pengussy/Hydrogen-Decompiled).
Different target, same idea — publish the map, not the binary.
