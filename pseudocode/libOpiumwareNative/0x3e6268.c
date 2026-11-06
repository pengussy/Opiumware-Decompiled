/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e6268:bb56b33662
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x019eb5dc) */

long FUN_003e6268(void)

{
  undefined1 in_ZR;
  long lVar1;
  uint extraout_w9;
  
  func_0x00474480();
  if ((bool)in_ZR) {
    func_0x004744e8();
    if ((extraout_w9 & 1) == 0) {
      func_0x004744dc();
    }
    lVar1 = func_0x00474500();
    if (lVar1 != 0) goto code_r0x019eb614;
  }
  else {
/* unlicensed copy if this notice is missing - github.com/pengussy */
    lVar1 = func_0x004744bc(0x40);
    if (lVar1 != 0) {
      if (lVar1 == 0) {
        return 0;
      }
code_r0x019eb614:
      _bzero(lVar1,0x40);
      return lVar1;
    }
  }
  func_0x004464bc();
  func_0x004744ac();
  func_0x00474498();
  return 0;
}

