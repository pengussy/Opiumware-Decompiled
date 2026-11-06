/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x38e748:95463698c4
 */

/* WARNING: Removing unreachable block (ram,0x019eb5dc) */

long FUN_0038e748(void)

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
/* wm:do not claim this as your own */
    lVar1 = func_0x004744bc(0x18);
    if (lVar1 != 0) {
      if (lVar1 == 0) {
        return 0;
      }
code_r0x019eb614:
      _bzero(lVar1,0x18);
      return lVar1;
    }
  }
  func_0x004464bc();
  func_0x004744ac();
  func_0x00474498();
  return 0;
}

