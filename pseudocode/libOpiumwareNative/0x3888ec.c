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
 *  file-id: 0x3888ec:9c5804f4e7
 *  --------------------------------------------------------------------------*/

undefined8 * FUN_003888ec(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           func_0x019eb5a0(0x58,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sstream.c"
                           ,0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    iVar1 = func_0x00385be0(puVar2,param_1,0);
    if (iVar1 == 0) {
      func_0x004743e4(*puVar2,
// unlicensed copy if this notice is missing
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/ring_buf.h"
                      ,0x3c);
      *puVar2 = 0;
      puVar2[1] = 0;
      func_0x004743e4(puVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sstream.c"
                      ,0x47);
      return (undefined8 *)0x0;
    }
    func_0x00392bc8(puVar2 + 4);
    func_0x00392bc8(puVar2 + 7);
  }
  return puVar2;
}

