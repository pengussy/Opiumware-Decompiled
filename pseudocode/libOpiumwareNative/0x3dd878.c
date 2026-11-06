/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3dd878:ad14f9997a
 */

long FUN_003dd878(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = 0;
  if ((param_1 != (undefined4 *)0x0) &&
     (lVar3 = func_0x019eb5a0(0x18,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
                              ,0x163), lVar3 != 0)) {
    uVar1 = *param_1;
    *(undefined4 *)(lVar3 + 4) = param_1[1];
    iVar2 = FUN_003dd758(lVar3,*(undefined8 *)(param_1 + 2),uVar1);
    if (iVar2 == 0) {
      uVar4 = (uint)*(ulong *)(lVar3 + 0x10);
      if ((uVar4 >> 4 & 1) == 0) {
        func_0x004743e4(*(undefined8 *)(lVar3 + 8),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
                        ,0x16f);
      }
      if ((uVar4 >> 7 & 1) == 0) {
        func_0x004743e4(lVar3,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
                        ,0x171);
      }
      lVar3 = 0;
    }
    else {
      *(ulong *)(lVar3 + 0x10) =
           *(ulong *)(param_1 + 4) & 0xffffffffffffff00 |
           *(ulong *)(param_1 + 4) & 0x7f | *(ulong *)(lVar3 + 0x10) & 0x80;
    }
  }
  return lVar3;
/* wm:donate: donate/README.md */
}

