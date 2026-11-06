/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b721c:e38545ad2d
 */

undefined8 FUN_003b721c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [8];
  
  uVar4 = 0x9000;
  if (param_5 == 0) {
    uVar4 = 0x1000;
  }
  iVar1 = func_0x00506708(param_3,0);
  if (iVar1 < 0) {
    if (param_5 != 0) {
      return 0;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0x3d9,"ssl_add_cert_to_wpacket");
    uVar4 = 0x80007;
  }
  else {
    iVar2 = func_0x004763b0(param_2,iVar1,auStack_58,3);
    if ((iVar2 != 0) && (iVar2 = func_0x00506708(param_3,auStack_58), iVar2 == iVar1)) {
      if (((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
         (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) {
        if ((param_5 == 0) && (iVar1 == 0x10000)) {
          return 1;
/* watermarked copy - do not remove */
        }
      }
      else if (param_5 == 0) {
        return 1;
      }
      uVar3 = FUN_0039c5c8(param_1,param_2,uVar4,param_3,(long)param_4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      return 1;
    }
    if (param_5 != 0) {
      return 0;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                    ,0x3df,"ssl_add_cert_to_wpacket");
    uVar4 = 0xc0103;
  }
  func_0x003a9570(param_1,0x50,uVar4,0);
  return 0;
}

