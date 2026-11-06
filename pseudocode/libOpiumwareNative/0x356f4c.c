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
 *  file-id: 0x356f4c:9b4996fc22
 *  --------------------------------------------------------------------------*/

bool FUN_00356f4c(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = *param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    iVar2 = func_0x004762b4(param_2,"+automatic");
    if (iVar2 == 0) {
      return true;
    }
    iVar2 = func_0x004762b4(param_2,"automatic");
    if (iVar2 == 0) {
      return true;
    }
    uVar1 = *param_1;
  }
  if (((uVar1 & 1) != 0) && (iVar2 = _strcmp(param_2,"auto"), iVar2 == 0)) {
    return true;
  }
  lVar3 = _strchr(param_2,0x3a);
  if (lVar3 != 0) {
    return false;
  }
  if (*(long *)(param_1 + 6) != 0) {
    iVar2 = func_0x0035bca0(*(long *)(param_1 + 6),0x5c,0,param_2);
    return 0 < iVar2;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return true;
  }
  iVar2 = func_0x0035990c(*(long *)(param_1 + 8),0x5c,0,param_2);
  return 0 < iVar2;
}
/* more drops soon - github.com/pengussy */

