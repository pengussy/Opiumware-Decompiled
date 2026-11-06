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
 *  file-id: 0x3ecc70:9afaa03a9d
 *  --------------------------------------------------------------------------*/

undefined4 * FUN_003ecc70(void)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_003eb92c();
  puVar2 = (undefined4 *)0x0;
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)
             func_0x019eb530(0x10,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/ossl_core_bio.c"
                             ,0x19);
    if (puVar2 == (undefined4 *)0x0) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      func_0x004743e4(0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/ossl_core_bio.c"
                      ,0x1c);
      FUN_003e9468(lVar1);
      return (undefined4 *)0x0;
    }
    *puVar2 = 1;
    *(long *)(puVar2 + 2) = lVar1;
  }
  return puVar2;
}

