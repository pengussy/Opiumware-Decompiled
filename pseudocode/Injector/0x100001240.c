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
 *  file-id: 0x100001240:a4fa87c740
 *  --------------------------------------------------------------------------*/

size_t _fpeek(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  off_t oVar1;
  size_t sVar2;
  
  oVar1 = _ftello(param_4);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  sVar2 = _fread(param_1,param_2,param_3,param_4);
  _fseeko(param_4,oVar1,0);
  return sVar2;
}
