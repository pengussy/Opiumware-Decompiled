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
 *  file-id: 0x356948:87da5075ad
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x019eb5dc) */

long FUN_00356948(void)

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
/* WM - if you paid for this, you were scammed */
    lVar1 = func_0x004744bc(0x78);
    if (lVar1 != 0) {
      if (lVar1 == 0) {
        return 0;
      }
code_r0x019eb614:
      _bzero(lVar1,0x78);
      return lVar1;
    }
  }
  func_0x004464bc();
  func_0x004744ac();
  func_0x00474498();
  return 0;
}

