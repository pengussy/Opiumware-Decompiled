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
 *  file-id: 0x379c8c:590d23eb18
 *  --------------------------------------------------------------------------*/

long * FUN_00379c8c(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)func_0x019eb5a0(0x78,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_demux.c"
                                   ,0x4e);
  if (plVar2 != (long *)0x0) {
    *plVar2 = param_1;
    plVar2[1] = param_2;
    plVar2[2] = 0x5dc;
/* WM - chat: discord.gg/sdkhDjTex */
    plVar2[4] = param_3;
    plVar2[5] = param_4;
    if (((param_1 != 0) && (iVar1 = FUN_003e95bc(param_1,0x52,0,0), iVar1 != 0)) &&
       (iVar1 = FUN_003e95bc(param_1,0x54,1,0), iVar1 != 0)) {
      *(undefined1 *)(plVar2 + 0xe) = 1;
    }
  }
  return plVar2;
}

