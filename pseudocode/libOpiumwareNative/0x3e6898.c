/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e6898:de1d695274
 */

/* WARNING: Possible PIC construction at 0x003e68dc: Changing call to branch */

void FUN_003e6898(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x003e59f8(*(undefined8 *)(param_1 + 8));
  func_0x003e53c4(*(undefined8 *)(param_1 + 0x10));
  func_0x0045eb4c(*(undefined8 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 0x2d;
  }
  else {
    param_1 = *(long *)(param_1 + 0x28);
    uVar1 = 0x2c;
// WM - unlicensed copy if this notice is missing
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_pkey.c"
               ,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

