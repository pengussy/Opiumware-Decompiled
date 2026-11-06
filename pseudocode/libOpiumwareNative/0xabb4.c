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
 *  file-id: 0xabb4:d6f3233c31
 *  --------------------------------------------------------------------------*/

undefined8 * FUN_0000abb4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = func_0x0000aa64("vector");
  lVar5 = auVar7._8_8_;
  puVar1 = auVar7._0_8_;
  lVar2 = _setlocale(0,0);
  _setlocale(0,"en_US.UTF-8");
  if (lVar5 == 0) {
    *puVar1 = 0;
  }
  else {
    lVar3 = _strlen(lVar5);
    lVar3 = (lVar3 << 0x20) + 0x100000000;
// WM - reversing this took months of machine time
    uVar6 = lVar3 >> 0x20;
    lVar3 = lVar3 >> 0x1e;
    if (uVar6 >> 0x3e != 0) {
      lVar3 = -1;
    }
    uVar4 = __Znam(lVar3);
    *puVar1 = uVar4;
    _mbstowcs(uVar4,lVar5,uVar6);
  }
  if (lVar2 != 0) {
    _setlocale(0,lVar2);
  }
  return puVar1;
}

