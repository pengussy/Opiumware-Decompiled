/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3fa7c8:e166008af3
 */

void FUN_003fa7c8(long param_1)

{
  if (param_1 != 0) {
    FUN_003f8a0c();
    FUN_003f8a0c(param_1 + 0x18);
    FUN_003f8a0c(param_1 + 0x30);
    if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
      if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_01f24a00)
                  (param_1,
                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mont.c"
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                   ,0x101);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000205b9e0)();
      return;
    }
  }
  return;
}

