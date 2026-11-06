/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a2900:241ce2f056
 */

undefined8 FUN_003a2900(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  
  if (1 < (ulong)param_2[2]) {
    uVar2 = *(ushort *)*param_2;
    uVar4 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
    if (param_2[2] - 2U == uVar4) {
      puVar1 = (ushort *)*param_2 + 1;
      *param_2 = (long)puVar1 + uVar4;
      param_2[2] = 0;
      func_0x004743e4(*(undefined8 *)(param_1 + 0xb28),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                      ,0x1e7);
      *(undefined8 *)(param_1 + 0xb30) = 0;
      *(long *)(param_1 + 0xb28) = 0;
      if (uVar4 == 0) {
        return 1;
      }
      lVar3 = func_0x00475ac0(puVar1,uVar4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                              ,0x1f0);
      *(long *)(param_1 + 0xb28) = lVar3;
      if (lVar3 != 0) {
        *(ulong *)(param_1 + 0xb30) = uVar4;
        return 1;
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,0x91b,"tls_parse_stoc_cookie");
  func_0x003a9570(param_1,0x32,0x9f,0);
  return 0;
// WM - if you paid for this, you were scammed
}

