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
 *  file-id: 0x389c84:7866e8afcb
 *  --------------------------------------------------------------------------*/

void FUN_00389c84(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  while( true ) {
    plVar4 = (long *)param_1[7];
    if (plVar4 == param_1 + 6) {
      plVar4 = (long *)plVar4[1];
    }
    if (plVar4 == param_1 + 6) break;
    plVar3 = plVar4 + -4;
    plVar1 = (long *)plVar4[-3];
    if (plVar1 != (long *)0x0) {
      lVar2 = *plVar3;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      *plVar3 = 0;
      plVar4[-3] = 0;
    }
    plVar1 = (long *)plVar4[-1];
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar4[-2];
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      plVar4[-2] = 0;
      plVar4[-1] = 0;
    }
    plVar1 = (long *)plVar4[1];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    if (plVar1 != (long *)0x0) {
      lVar2 = *plVar4;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      *plVar4 = 0;
      plVar4[1] = 0;
    }
    FUN_00388994(plVar4[10]);
    plVar4[10] = 0;
    FUN_00385df4(plVar4[0xb]);
    plVar4[0xb] = 0;
    func_0x0046e40c(*param_1,plVar3);
    func_0x004743e4(plVar3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_stream_map.c"
                    ,0xc2);
  }
  return;
}

