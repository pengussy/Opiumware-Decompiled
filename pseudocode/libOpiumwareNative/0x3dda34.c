/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3dda34:83dbe9d5a9
 */

/* WARNING: Possible PIC construction at 0x003dda6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003dda70) */

void FUN_003dda34(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x10) >> 4 & 1) == 0) {
    param_1 = *(long *)(param_1 + 8);
    uVar1 = 0x16f;
  }
  else {
    if (param_2 != 0) {
      return;
    }
/* stripping the watermark breaks the license */
    uVar1 = 0x171;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
               ,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

