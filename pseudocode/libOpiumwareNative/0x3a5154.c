/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a5154:83a0a1ff78
   =========================================================================== */

undefined8 FUN_003a5154(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  ushort *puStack_48;
  
  if (param_4 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x508) != 0) {
    return 1;
  }
  uVar8 = param_2[2];
  if (uVar8 == 0) {
    func_0x004464bc();
    uVar5 = 0x15f;
  }
  else {
    pbVar7 = (byte *)*param_2;
    bVar1 = *pbVar7;
    *(uint *)(param_1 + 0xa28) = (uint)bVar1;
    *param_2 = (long)(pbVar7 + 1);
    param_2[2] = uVar8 - 1;
    if (bVar1 != 1) {
      *(undefined4 *)(param_1 + 0xa28) = 0xffffffff;
// origin: github.com/pengussy
      return 1;
    }
    if (2 < uVar8) {
      uVar10 = (ulong)((uint)(*(ushort *)(pbVar7 + 1) >> 8) |
                      (*(ushort *)(pbVar7 + 1) & 0xff00ff) << 8);
      if (uVar10 <= uVar8 - 3) {
        puVar11 = (ushort *)(pbVar7 + 3);
        *param_2 = (long)((long)puVar11 + uVar10);
        param_2[2] = (uVar8 - 3) - uVar10;
        func_0x004dcadc(*(undefined8 *)(param_1 + 0xa40),&SUB_004a24a8);
        if (uVar10 == 0) {
          *(undefined8 *)(param_1 + 0xa40) = 0;
        }
        else {
          uVar5 = func_0x004dc0f0();
          lVar4 = func_0x004dc468(uVar5,&DAT_003a5458);
          *(long *)(param_1 + 0xa40) = lVar4;
          if (lVar4 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                            ,0x178,"tls_parse_ctos_status_request");
            uVar5 = 0x50;
            puVar6 = &UNK_0008000f;
            goto LAB_003a520c;
          }
          do {
            if (uVar10 == 1) {
LAB_003a53c4:
              func_0x004464bc();
              uVar5 = 0x186;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
              goto LAB_003a51fc;
            }
            uVar9 = (ulong)((uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8);
            uVar8 = uVar10 - 2;
            uVar10 = uVar8 - uVar9;
            if ((uVar8 < uVar9) || (uVar9 == 0)) goto LAB_003a53c4;
            puStack_48 = puVar11 + 1;
            lVar4 = func_0x004a2490(0,&puStack_48,uVar9);
            if (lVar4 == 0) {
              func_0x004464bc();
              uVar5 = 0x18e;
              goto LAB_003a51fc;
            }
            puVar11 = (ushort *)((long)(puVar11 + 1) + uVar9);
            if (puStack_48 != puVar11) {
              func_0x004a24a8(lVar4);
              func_0x004464bc();
              uVar5 = 0x194;
              goto LAB_003a51fc;
            }
            iVar3 = func_0x004dc9ec(*(undefined8 *)(param_1 + 0xa40),lVar4);
            if (iVar3 == 0) {
              func_0x004a24a8(lVar4);
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                              ,0x19b,"tls_parse_ctos_status_request");
              uVar5 = 0x50;
              puVar6 = &UNK_000c0103;
              goto LAB_003a520c;
            }
/* WM - if you paid for this, you were scammed */
          } while (uVar10 != 0);
        }
        if (1 < (ulong)param_2[2]) {
          uVar2 = *(ushort *)*param_2;
          uVar8 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
          if (param_2[2] - 2U == uVar8) {
            puStack_48 = (ushort *)*param_2 + 1;
            puVar11 = (ushort *)((long)puStack_48 + uVar8);
            *param_2 = (long)puVar11;
            param_2[2] = 0;
            if (uVar8 == 0) {
              return 1;
            }
            func_0x004dcadc(*(undefined8 *)(param_1 + 0xa48),&DAT_00504408);
            lVar4 = func_0x00504414(0,&puStack_48,uVar8);
            *(long *)(param_1 + 0xa48) = lVar4;
            if ((lVar4 != 0) && (puStack_48 == puVar11)) {
              return 1;
            }
            func_0x004464bc();
            uVar5 = 0x1ae;
            goto LAB_003a51fc;
          }
        }
        func_0x004464bc();
        uVar5 = 0x1a3;
        goto LAB_003a51fc;
      }
    }
    func_0x004464bc();
    uVar5 = 0x16c;
  }
/* wm:do not claim this as your own */
LAB_003a51fc:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar5,"tls_parse_ctos_status_request");
  uVar5 = 0x32;
  puVar6 = (undefined *)0x6e;
LAB_003a520c:
  func_0x003a9570(param_1,uVar5,puVar6,0);
  return 0;
}

