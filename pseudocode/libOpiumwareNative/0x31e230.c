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
 *  file-id: 0x31e230:79f392f8c9
 *  --------------------------------------------------------------------------*/

void FUN_0031e230(float param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = lRam00000000020973e0;
  if (param_2 == 0) {
    *(undefined4 *)(&UNK_000014e8 + lRam00000000020973e0) = 0;
    if (*(long *)(&UNK_000014d0 + lVar1) == 0) {
      return;
    }
  }
  else {
    uVar2 = NEON_fminnm(*(float *)(&UNK_000014e8 + lRam00000000020973e0) + ABS(param_1) * 0.7,
                        0x3f333333);
    *(undefined4 *)(&UNK_000014e8 + lRam00000000020973e0) = uVar2;
    if (*(long *)(&UNK_000014d0 + lVar1) == param_2) {
/* WM - unlicensed copy if this notice is missing */
      return;
    }
  }
  if ((char)(&UNK_0000286c)[lVar1] < '\0') {
    func_0x002fd6a4("[io] LockWheelingWindow() \"%s\"\n");
  }
  *(long *)(&UNK_000014d0 + lVar1) = param_2;
  *(undefined8 *)(&UNK_000014d8 + lVar1) = *(undefined8 *)(lVar1 + 0x100);
  if (param_2 == 0) {
    *(undefined4 *)(&UNK_000014e0 + lVar1) = 0xffffffff;
    *(undefined8 *)(&UNK_000014f4 + lVar1) = 0;
    return;
  }
  return;
}

