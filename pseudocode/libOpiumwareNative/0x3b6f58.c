/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3b6f58:baf0813f7d
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b6f58(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  iVar1 = func_0x019eba0c(param_3,2);
  if (iVar1 == 0) {
    func_0x004464bc();
    uVar5 = 0xaab;
  }
  else {
    if (((param_2 != 0) && ((*(byte *)(param_1 + 0x9b1) >> 1 & 1) == 0)) &&
       (iVar1 = func_0x004dcb7c(param_2), 0 < iVar1)) {
      iVar1 = 0;
      do {
        lVar4 = func_0x004dcb90(param_2,iVar1);
        if (lVar4 == 0) {
LAB_003b7070:
          func_0x004464bc();
          uVar5 = 0xabc;
          goto LAB_003b7088;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        }
        iVar2 = func_0x00504488(lVar4,0);
        if (((iVar2 < 0) || (iVar3 = func_0x004763b0(param_3,iVar2,auStack_48,2), iVar3 == 0)) ||
           (iVar3 = func_0x00504488(lVar4,auStack_48), iVar3 != iVar2)) goto LAB_003b7070;
        iVar1 = iVar1 + 1;
        iVar2 = func_0x004dcb7c(param_2);
      } while (iVar1 < iVar2);
    }
    iVar1 = func_0x00476494(param_3);
    if (iVar1 != 0) {
      return 1;
    }
    func_0x004464bc();
    uVar5 = 0xac3;
  }
LAB_003b7088:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                  ,uVar5,"construct_ca_names");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

