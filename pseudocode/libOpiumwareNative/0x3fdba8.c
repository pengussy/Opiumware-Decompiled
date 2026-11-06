/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3fdba8:971c4f9bf4
   =========================================================================== */

void FUN_003fdba8(long param_1)

{
  if (param_1 != 0) {
    FUN_003f8aa8();
    FUN_003f8aa8(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_01f24a00)
                  (param_1,
                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_recp.c"
                   ,0x28);
/*  watermarked copy - do not remove  */
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

