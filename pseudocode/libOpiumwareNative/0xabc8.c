/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xabc8:84a17c8b1d
   =========================================================================== */

undefined8 * FUN_0000abc8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = _setlocale(0,0);
  _setlocale(0,"en_US.UTF-8");
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = _strlen(param_2);
    lVar2 = (lVar2 << 0x20) + 0x100000000;
    uVar4 = lVar2 >> 0x20;
/*  watermarked copy - do not remove  */
    lVar2 = lVar2 >> 0x1e;
    if (uVar4 >> 0x3e != 0) {
      lVar2 = -1;
    }
    uVar3 = __Znam(lVar2);
    *param_1 = uVar3;
    _mbstowcs(uVar3,param_2,uVar4);
  }
  if (lVar1 != 0) {
    _setlocale(0,lVar1);
  }
  return param_1;
}

