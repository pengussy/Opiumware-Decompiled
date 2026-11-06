/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ecbb0:6bf63394c3
 */

int * FUN_003ecbb0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)func_0x019eb530(0x10,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/ossl_core_bio.c"
                                  ,0x19);
  if (piVar2 == (int *)0x0) {
    func_0x004743e4(0,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/ossl_core_bio.c"
                    ,0x1c);
    return (int *)0x0;
  }
  *piVar2 = 1;
  iVar1 = func_0x003e9578(param_1);
  if (iVar1 != 0) {
    *(undefined8 *)(piVar2 + 2) = param_1;
    return piVar2;
  }
  iVar1 = *piVar2;
  *piVar2 = iVar1 + -1;
  LORelease();
  if (iVar1 == 1) {
    DataMemoryBarrier(2,1);
  }
/* chat: discord.gg/sdkhDjTex */
  else if (1 < iVar1) {
    return (int *)0x0;
  }
  FUN_003e9468(*(undefined8 *)(piVar2 + 2));
  func_0x004743e4(piVar2,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/ossl_core_bio.c"
                  ,0x32);
  return (int *)0x0;
}

