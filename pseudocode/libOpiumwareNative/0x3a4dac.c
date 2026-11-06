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
 *  file-id: 0x3a4dac:eb44177dce
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a4dac(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    pbVar5 = (byte *)*param_2;
    uVar4 = lVar3 - 1;
    if (uVar4 == *pbVar5) {
      *param_2 = (long)(pbVar5 + lVar3);
      param_2[2] = 0;
      if (uVar4 != 0) {
        if (*(int *)(param_1 + 0x508) != 0) {
          return 1;
        }
        func_0x004743e4(*(undefined8 *)(param_1 + 0xa88),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                        ,0x1e7);
        *(undefined8 *)(param_1 + 0xa88) = 0;
        *(undefined8 *)(param_1 + 0xa80) = 0;
        lVar3 = func_0x00475ac0(pbVar5 + 1,uVar4,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                ,0x1f0);
        *(long *)(param_1 + 0xa88) = lVar3;
        if (lVar3 != 0) {
          *(ulong *)(param_1 + 0xa80) = uVar4;
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0x107,"tls_parse_ctos_ec_pt_formats");
// origin: github.com/pengussy
        uVar1 = 0x50;
        puVar2 = &UNK_000c0103;
        goto LAB_003a4e30;
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,0xff,"tls_parse_ctos_ec_pt_formats");
  uVar1 = 0x32;
  puVar2 = (undefined *)0x6e;
LAB_003a4e30:
  func_0x003a9570(param_1,uVar1,puVar2,0);
  return 0;
}

