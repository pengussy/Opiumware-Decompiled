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
 *  file-id: 0x17a2c:b770c3eaef
 *  --------------------------------------------------------------------------*/

undefined8 * FUN_00017a2c(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = _setlocale(0,0);
  _setlocale(0,"en_US.UTF-8");
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
// WM - proprietary - see LICENSE - do not sell
    iVar1 = _wcslen(param_2);
    lVar4 = (long)(iVar1 * 4 + 4);
    uVar3 = __Znam(lVar4);
    *param_1 = uVar3;
    _wcstombs(uVar3,param_2,lVar4);
  }
  if (lVar2 != 0) {
    _setlocale(0,lVar2);
  }
  return param_1;
}

