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
 *  file-id: 0x38dec8:6b85deff58
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0038dec8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = param_2[4];
  uVar1 = func_0x0038550c(*(undefined8 *)(param_1 + 0xa0));
  uVar3 = *(ushort *)(param_1 + 0x1e8);
  if ((uVar3 >> 10 & 1) != 0) {
    return 0;
  }
  if (uVar1 >> 1 <= uVar4) {
    uVar4 = uVar1 >> 1;
  }
  if (uVar4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00475ac0(param_2[3],uVar4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                            ,0xc68);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = *(ushort *)(param_1 + 0x1e8);
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x200) = param_2[2];
  *(undefined8 *)(param_1 + 0x1f8) = uVar6;
  *(undefined8 *)(param_1 + 0x1f0) = uVar5;
  *(long *)(param_1 + 0x208) = lVar2;
  *(ulong *)(param_1 + 0x210) = uVar4;
// WM - chat: discord.gg/sdkhDjTex
  *(ushort *)(param_1 + 0x1e8) = uVar3 | 0x400;
  return 1;
}

