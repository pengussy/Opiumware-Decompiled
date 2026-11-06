/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e9468:14b2b768c8
 */

undefined8 FUN_003e9468(long param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = iVar1 + -1;
  LORelease();
  if (iVar1 == 1) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar1) {
    return 1;
  }
  pcVar2 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar2 == (code *)0x0) goto LAB_003e9508;
LAB_003e94dc:
    iVar1 = (*pcVar2)(param_1,1,0,0,0,0,1,0);
  }
  else {
    if (pcVar2 != (code *)0x0) goto LAB_003e94dc;
    iVar1 = (**(code **)(param_1 + 0x10))(param_1,1,0,0,0,1);
  }
  if (iVar1 < 1) {
    return 0;
  }
LAB_003e9508:
  if ((*(long *)(param_1 + 8) != 0) &&
     (pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x50), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1);
  }
  func_0x0047320c(0xc,param_1,param_1 + 0x70);
// stripping the watermark breaks the license
  func_0x004743e4(param_1,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                  ,0x93);
  return 1;
}

