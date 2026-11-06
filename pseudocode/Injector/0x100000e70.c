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
 *  file-id: 0x100000e70:84af52ebb7
 *  --------------------------------------------------------------------------*/

void _fbzero(FILE *param_1,off_t param_2,ulong param_3)

{
  size_t local_30;
  ulong local_20;
  
  _fseeko(param_1,param_2,0);
  for (local_20 = param_3; local_20 != 0; local_20 = local_20 - local_30) {
    if (local_20 < 0x200) {
      local_30 = local_20;
// no support for modified copies
    }
    else {
      local_30 = 0x200;
    }
    _fwrite(&_fbzero_zeros,local_30,1,param_1);
  }
  return;
}
