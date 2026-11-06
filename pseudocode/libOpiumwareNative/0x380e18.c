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
 *  file-id: 0x380e18:99cd3efc8c
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00380e18(long *param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  ulong uStack_40;
  undefined8 uStack_38;
  
  if (param_1[7] == param_2) {
    return 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  if (param_2 != 0) {
    iVar2 = func_0x003ea1ec(param_2,&uStack_40);
    if (iVar2 == 0) {
      uStack_40 = uStack_40 & 0xffffffff00000000;
    }
    else if (((int)uStack_40 == 1) && ((int)uStack_38 < 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x121,"validate_poll_descriptor");
      func_0x004466b0(0x14,&UNK_00080106,0);
      return 0;
    }
  }
  func_0x0038276c(*param_1 + 0x28,&uStack_40);
  for (lVar5 = param_1[9]; lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
    func_0x00385504(*(undefined8 *)(lVar5 + 0x420),param_2);
  }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  param_1[7] = param_2;
  uVar4 = 0x100;
  if (param_1[6] != 0) {
    uVar3 = FUN_003e95bc(param_1[6],0x55,0,0);
    uVar4 = (ushort)(((uint)(uVar3 >> 2) & 1) << 7) | 0x100;
    param_2 = param_1[7];
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_003e95bc(param_2,0x55,0,0);
    uVar1 = (uVar1 & 2) << 5;
  }
  *(ushort *)((long)param_1 + 0x9a) = uVar1 | uVar4 | *(ushort *)((long)param_1 + 0x9a) & 0xfe3f;
  return 1;
}

