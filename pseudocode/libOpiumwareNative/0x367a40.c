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
 *  file-id: 0x367a40:2462f02d17
 *  --------------------------------------------------------------------------*/

long * FUN_00367a40(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)func_0x019eb5a0(0x10,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                   ,0x1399);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((param_1[0x4b] == 0) && (param_1[0x4a] != 0)) {
    iVar1 = func_0x0036dcf0(plVar2);
    if (iVar1 != 0) {
      return plVar2;
    }
    lVar3 = 0;
  }
  else {
    lVar3 = func_0x0045cd38(*param_1,"HMAC",param_1[0x91]);
    if (lVar3 != 0) {
      lVar4 = func_0x0045c3d0(lVar3);
      *plVar2 = lVar4;
      if (lVar4 != 0) {
        func_0x0045d0c0(lVar3);
        return plVar2;
      }
    }
  }
  func_0x0045c4a8(*plVar2);
  func_0x0045d0c0(lVar3);
  func_0x004743e4(plVar2,
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x13ae);
  return (long *)0x0;
}

