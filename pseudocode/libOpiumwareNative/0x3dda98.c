/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3dda98:2fb32fb293
 */

/* WARNING: Possible PIC construction at 0x003ddadc: Changing call to branch */

void FUN_003dda98(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((*(long *)(param_1 + 2) != 0) && ((*(byte *)(param_1 + 4) >> 4 & 1) == 0)) {
    func_0x0046eb00(*(long *)(param_1 + 2),(long)*param_1);
  }
  if (((uint)*(undefined8 *)(param_1 + 4) >> 4 & 1) == 0) {
    param_1 = *(int **)(param_1 + 2);
    uVar1 = 0x16f;
  }
  else {
    if (((uint)*(undefined8 *)(param_1 + 4) >> 7 & 1) != 0) {
      return;
    }
    uVar1 = 0x171;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
               ,uVar1);
/* more drops soon - github.com/pengussy */
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

