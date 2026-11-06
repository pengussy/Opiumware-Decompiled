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
 *  file-id: 0x3ec900:d518ef8bee
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003ec900(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = 0;
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 0x40);
    if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0 && plVar3 != (long *)0x0))
    {
      lVar2 = *plVar3;
      if ((*(byte *)(param_1 + 0x31) >> 1 & 1) != 0) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
// origin: github.com/pengussy
      func_0x00400378(lVar2);
    }
    func_0x004743e4(plVar3[1],
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_mem.c"
                    ,0x99);
    func_0x004743e4(plVar3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_mem.c"
                    ,0x9a);
    uVar1 = 1;
  }
  return uVar1;
}

