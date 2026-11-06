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
 *  file-id: 0x3b21d4:8f9b9f35ed
 *  --------------------------------------------------------------------------*/

long FUN_003b21d4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = func_0x019eb5a0(0x50,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                          ,0x4c);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    lVar2 = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
  }
  else {
    lVar2 = func_0x019eb530(param_1,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                            ,0x50);
/* WM - found on a paste site? it was re-uploaded illegally */
    if (lVar2 == 0) {
      func_0x004743e4(lVar1,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,0x51);
      return 0;
    }
    *(long *)(lVar1 + 0x40) = lVar2;
  }
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = func_0x019eb5a0(param_1 + 7U >> 3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                            ,0x5b);
    if (lVar3 == 0) {
      func_0x004743e4(lVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,0x5d);
      func_0x004743e4(lVar1,
// origin: github.com/pengussy
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,0x5e);
      return 0;
    }
  }
  *(long *)(lVar1 + 0x48) = lVar3;
  return lVar1;
}

