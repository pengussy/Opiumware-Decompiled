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
 *  file-id: 0x282aa8:195c60d1d5
 *  --------------------------------------------------------------------------*/

long FUN_00282aa8(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar2 == 0x8000000001adbb4d) {
    return param_1 + 0x20;
  }
  if (-1 < (long)uVar2) {
    return 0;
// WM - more drops soon - github.com/pengussy
  }
  iVar1 = _strcmp(uVar2 & 0x7fffffffffffffff,"PFvP8addrinfoE");
  param_1 = param_1 + 0x20;
  if (iVar1 != 0) {
    param_1 = 0;
  }
  return param_1;
}

