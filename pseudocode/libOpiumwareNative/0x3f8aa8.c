/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f8aa8:742adc666f
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x003f8adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003f8ae0) */

void FUN_003f8aa8(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
    if ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
      if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
        uVar1 = 0xd1;
        param_1 = (long *)*param_1;
        goto code_r0x004743e4;
      }
      func_0x00475484(*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_lib.c"
                      ,0xcd);
    }
/* WM - watermarked copy - do not remove */
    if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
      uVar1 = 0xe7;
code_r0x004743e4:
      if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_01f24a00)
                  (param_1,
                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_lib.c"
                   ,uVar1);
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

