/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39cfd4:1df72d13ad
 */

undefined8 FUN_0039cfd4(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x9b0);
    if ((uVar1 >> 2 & 1) != 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      return 1;
    }
    uVar2 = 0x49c;
  }
  else {
    if (*(int *)(param_1 + 0xd58) == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    if (((uint)*(undefined8 *)(param_1 + 0x9b0) >> 0x12 & 1) != 0) {
      return 1;
    }
    uVar2 = 0x4a8;
  }
  func_0x004464bc(1);
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                  ,uVar2,"final_renegotiate");
  func_0x003a9570(param_1,0x28,0x152,0);
  return 0;
}
/* wm:proprietary - see LICENSE - do not sell */

