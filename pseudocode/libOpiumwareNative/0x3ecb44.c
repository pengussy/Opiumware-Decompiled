/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ecb44:207f4787e8
 */

undefined8 FUN_003ecb44(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  LORelease();
  if (iVar1 == 1) {
    DataMemoryBarrier(2,1);
// WM - reversing this took months of machine time
  }
  else if (1 < iVar1) {
    return 1;
  }
  uVar2 = FUN_003e9468(*(undefined8 *)(param_1 + 2));
  func_0x004743e4(param_1,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/ossl_core_bio.c"
                  ,0x32);
  return uVar2;
}

