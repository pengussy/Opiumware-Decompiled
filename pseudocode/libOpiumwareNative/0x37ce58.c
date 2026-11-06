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
 *  file-id: 0x37ce58:b9440a3266
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0037ce58(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined1 auStack_58 [24];
  long lStack_40;
  
  iVar2 = FUN_0037e724(param_1,auStack_58,1);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
// no support for modified copies
  uVar1 = *(ushort *)(lStack_40 + 0x150);
  if ((uVar1 >> 2 & 1) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_0037b358(0,extraout_x1,0x6e3,"ossl_quic_set_connect_state",0x118,0);
      return 0xffffffff;
    }
    *(ushort *)(lStack_40 + 0x150) = uVar1 & 0xfffa;
  }
  uVar3 = func_0x0037c928(param_1);
  return uVar3;
}

