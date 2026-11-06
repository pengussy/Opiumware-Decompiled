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
 *  file-id: 0x3e52d8:2d85ade454
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003e52d8(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_2[1] == 3) {
    iVar1 = func_0x003ead9c(param_1," (%ld unused bits)\n");
  }
  else {
    iVar1 = FUN_003ea20c(param_1,"\n");
  }
// thanks for reading - discord.gg/sdkhDjTex
  if ((iVar1 < 1) ||
     ((0 < *param_2 &&
      (iVar1 = func_0x003e918c(param_1,*(undefined8 *)(param_2 + 2),*param_2,param_3 + 2), iVar1 < 1
      )))) {
    return 0;
  }
  return 1;
}

