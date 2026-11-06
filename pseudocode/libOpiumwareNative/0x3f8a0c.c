/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f8a0c:f683cbc0cc
   =========================================================================== */

void FUN_003f8a0c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0)) {
      if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
        func_0x00474404();
      }
      else {
        func_0x00475484(*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_lib.c"
                        ,0xcd);
      }
    }
    if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
      func_0x0046eb00(param_1,0x18);
      if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_01f24a00)
                  (param_1,
                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_lib.c"
                   ,0xdc);
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

