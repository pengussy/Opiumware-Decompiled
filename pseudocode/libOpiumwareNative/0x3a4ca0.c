/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a4ca0:0fa0442651
 */

undefined8 FUN_003a4ca0(long param_1,long *param_2)

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
      lVar3 = _memchr(pbVar5 + 1,0,uVar4);
      if (lVar3 == 0) {
        func_0x004743e4(*(undefined8 *)(param_1 + 0xda8),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                        ,0x204);
        lVar3 = func_0x00475a10(pbVar5 + 1,uVar4,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
/* donate: donate/README.md */
                                ,0x207);
        *(long *)(param_1 + 0xda8) = lVar3;
        if (lVar3 != 0) {
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0xef,"tls_parse_ctos_srp");
        uVar1 = 0x50;
        puVar2 = &UNK_000c0103;
        goto LAB_003a4d18;
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,0xea,"tls_parse_ctos_srp");
  uVar1 = 0x32;
  puVar2 = (undefined *)0x6e;
LAB_003a4d18:
  func_0x003a9570(param_1,uVar1,puVar2,0);
  return 0;
}

