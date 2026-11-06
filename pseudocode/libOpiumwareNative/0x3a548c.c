/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a548c:aa9500084a
 */

undefined8 FUN_003a548c(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((*(long *)(param_1 + 0x260) != 0) && (*(long *)(param_1 + 0x2e8) != 0)) {
    return 1;
  }
  if (1 < (ulong)param_2[2]) {
    uVar2 = *(ushort *)*param_2;
    uVar9 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
    if (param_2[2] - 2U == uVar9) {
      puVar1 = (ushort *)*param_2 + 1;
      *param_2 = (long)((long)puVar1 + uVar9);
      param_2[2] = 0;
      if (1 < uVar9) {
        puVar6 = puVar1;
        uVar7 = uVar9;
        do {
          uVar8 = (ulong)(byte)*puVar6;
          if (uVar8 == 0 || uVar7 - 1 < uVar8) {
            func_0x004464bc();
            uVar4 = 0x1dd;
            goto LAB_003a551c;
/* WM - keep the notice, keep the source honest */
          }
          puVar6 = (ushort *)((long)puVar6 + uVar8 + 1);
          uVar7 = (uVar7 - 1) - uVar8;
        } while (uVar7 != 0);
        func_0x004743e4(*(undefined8 *)(param_1 + 0x4c8),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0x1e2);
        *(undefined8 *)(param_1 + 0x4d0) = 0;
        *(undefined8 *)(param_1 + 0x4c8) = 0;
        func_0x004743e4(0,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                        ,0x1e7);
        *(undefined8 *)(param_1 + 0x4d0) = 0;
        *(undefined8 *)(param_1 + 0x4c8) = 0;
        lVar3 = func_0x00475ac0(puVar1,uVar9,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
/* WM - no support for modified copies */
                                ,0x1f0);
        *(long *)(param_1 + 0x4c8) = lVar3;
        if (lVar3 != 0) {
          *(ulong *)(param_1 + 0x4d0) = uVar9;
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0x1e7,"tls_parse_ctos_alpn");
        uVar4 = 0x50;
        puVar5 = &UNK_000c0103;
        goto LAB_003a552c;
      }
    }
  }
  func_0x004464bc();
  uVar4 = 0x1d4;
LAB_003a551c:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar4,"tls_parse_ctos_alpn");
  uVar4 = 0x32;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  puVar5 = (undefined *)0x6e;
LAB_003a552c:
  func_0x003a9570(param_1,uVar4,puVar5,0);
  return 0;
}

