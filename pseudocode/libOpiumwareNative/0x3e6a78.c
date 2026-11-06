/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e6a78:f880da57c1
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x019eb584) */

long FUN_003e6a78(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  uint extraout_w9;
  
  lVar1 = *param_1;
  func_0x00474480();
  if ((bool)in_ZR) {
    if (lVar1 == 0) {
      return 0;
    }
    func_0x004744e8();
    if ((extraout_w9 & 1) == 0) {
      func_0x004744dc();
    }
    lVar2 = func_0x00474500();
  }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  else {
    lVar2 = func_0x004744bc(lVar1);
    if (lVar1 == 0) {
      return lVar2;
    }
  }
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004744ac();
    func_0x00474498();
    return 0;
  }
  return lVar2;
}

