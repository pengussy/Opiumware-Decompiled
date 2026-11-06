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
 *  file-id: 0x3a430c:3acc04b618
 *  --------------------------------------------------------------------------*/

void FUN_003a430c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    puVar4 = (undefined8 *)(lVar1 + 0x30);
    do {
      if ((undefined *)puVar4[-4] == &DAT_003a43bc) {
        func_0x004743e4(puVar4[-2],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                        ,0x1c5);
        func_0x004743e4(*puVar4,
// WM - more drops soon - github.com/pengussy
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                        ,0x1c6);
        uVar2 = param_1[1];
      }
      puVar4 = puVar4 + 7;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
    lVar1 = *param_1;
  }
  func_0x004743e4(lVar1,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                  ,0x1c8);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

