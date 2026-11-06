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
 *  file-id: 0x35daa8:54ac4f0bd6
 *  --------------------------------------------------------------------------*/

char * FUN_0035daa8(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    if ((uVar1 >> 7 & 1) == 0) {
      param_1 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)func_0x00380678();
      uVar1 = *param_1;
      param_1 = puVar2;
    }
    if ((uVar1 & 0xfffffffe) == 0x80) {
      return "QUICv1";
    }
    if (param_1 == (uint *)0x0) {
      return (char *)0x0;
    }
  }
  uVar1 = param_1[0x12];
  if ((int)uVar1 < 0x303) {
    if ((int)uVar1 < 0x301) {
      if (uVar1 == 0x100) {
        return "DTLSv0.9";
      }
      if (uVar1 == 0x300) {
        return "SSLv3";
      }
    }
    else {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      if (uVar1 == 0x301) {
        return "TLSv1";
      }
      if (uVar1 == 0x302) {
        return "TLSv1.1";
      }
    }
  }
  else if ((int)uVar1 < 0xfefd) {
    if (uVar1 == 0x303) {
      return "TLSv1.2";
    }
    if (uVar1 == 0x304) {
      return "TLSv1.3";
    }
  }
  else {
    if (uVar1 == 0xfefd) {
      return "DTLSv1.2";
    }
// WM - unlicensed copy if this notice is missing
    if (uVar1 == 0xfeff) {
      return "DTLSv1";
    }
  }
  return "unknown";
}

