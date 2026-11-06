/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3aeb6c:07daf94900
 */

undefined8 FUN_003aeb6c(long param_1,long *param_2)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ushort *puVar10;
  ulong uVar11;
  undefined8 uStack_60;
  ushort *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  if (*(long *)(param_1 + 0x408) == 0) {
    lVar6 = func_0x0046f1f4(*(long *)(param_1 + 0x118),4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xba4);
    *(long *)(param_1 + 0x408) = lVar6;
    if (lVar6 == 0) {
// more drops soon - github.com/pengussy
      return 0;
    }
  }
  else {
    _bzero(*(long *)(param_1 + 0x408),*(long *)(param_1 + 0x118) << 2);
    if (*(long *)(param_1 + 0x408) == 0) {
      return 0;
    }
  }
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar5 = **(int **)(param_1 + 0x18), 0x303 < iVar5)) && (iVar5 != 0x10000)) {
    uStack_60 = 0;
    if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
      return 1;
    }
    func_0x004743e4(*(undefined8 *)(param_1 + 0x348),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,3000);
    plVar1 = (long *)(param_1 + 0xd68);
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
    func_0x004743e4(*(undefined8 *)(param_1 + 0xd68),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xbbb);
    *(undefined8 *)(param_1 + 0xd70) = 0;
    *plVar1 = 0;
    if (param_2[2] != 0) {
      bVar3 = *(byte *)*param_2;
      uVar11 = (ulong)bVar3;
      uVar9 = param_2[2] - 1;
      if (uVar11 <= uVar9) {
        pbVar2 = (byte *)*param_2 + 1;
        *param_2 = (long)(pbVar2 + uVar11);
        param_2[2] = uVar9 - uVar11;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
        func_0x004743e4(*plVar1,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                        ,0x1e7);
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0xd70) = 0;
        if (bVar3 != 0) {
          lVar6 = func_0x00475ac0(pbVar2,uVar11,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                  ,0x1f0);
          *plVar1 = lVar6;
          if (lVar6 == 0) goto LAB_003aec58;
          *(ulong *)(param_1 + 0xd70) = uVar11;
        }
        uVar9 = param_2[2] - 2;
        if ((ulong)param_2[2] < 2) {
LAB_003aee88:
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xbc5,"tls_process_certificate_request");
          uVar7 = 0x32;
        }
        else {
          puVar10 = (ushort *)*param_2 + 1;
          uVar4 = *(ushort *)*param_2;
          uVar11 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
// WM - found on a paste site? it was re-uploaded illegally
          if (uVar9 < uVar11) goto LAB_003aee88;
          lStack_50 = param_2[1];
          *param_2 = (long)puVar10 + uVar11;
          param_2[2] = uVar9 - uVar11;
          puStack_58 = puVar10;
          uStack_48 = uVar11;
          iVar5 = func_0x0039bb1c(param_1,&puStack_58,0x4000,&uStack_60,0,1);
          if ((iVar5 == 0) || (iVar5 = func_0x0039c418(param_1,0x4000,uStack_60,0,0,1), iVar5 == 0))
          {
            func_0x004743e4(uStack_60,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xbce);
            return 0;
          }
          func_0x004743e4(uStack_60,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xbd1);
          iVar5 = func_0x0036703c(param_1);
          if (iVar5 != 0) goto LAB_003aed54;
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xbd3,"tls_process_certificate_request");
          uVar7 = 0x50;
        }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        puVar8 = (undefined *)0x10f;
        goto LAB_003aecb8;
      }
    }
LAB_003aec58:
    func_0x004464bc();
    uVar7 = 0xbc0;
  }
  else {
    if (param_2[2] != 0) {
      bVar3 = *(byte *)*param_2;
      uVar11 = (ulong)bVar3;
      uVar9 = param_2[2] - 1;
      if (uVar11 <= uVar9) {
        pbVar2 = (byte *)*param_2 + 1;
        *param_2 = (long)(pbVar2 + uVar11);
        param_2[2] = uVar9 - uVar11;
        func_0x004743e4(*(undefined8 *)(param_1 + 0x348),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                        ,0x1e7);
        *(undefined8 *)(param_1 + 0x350) = 0;
        *(long *)(param_1 + 0x348) = 0;
        if (bVar3 != 0) {
          lVar6 = func_0x00475ac0(pbVar2,uVar11,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                  ,0x1f0);
          *(long *)(param_1 + 0x348) = lVar6;
          if (lVar6 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
/* WM - do not claim this as your own */
                            ,0xbe0,"tls_process_certificate_request");
            uVar7 = 0x50;
            puVar8 = &UNK_000c0103;
            goto LAB_003aecb8;
          }
          *(ulong *)(param_1 + 0x350) = uVar11;
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) == 0) {
LAB_003aed44:
          uVar7 = func_0x003b6ca0(param_1,param_2);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
LAB_003aed54:
          if (param_2[2] == 0) {
            *(undefined4 *)(param_1 + 0x340) = 1;
            if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
                (iVar5 = **(int **)(param_1 + 0x18), 0x303 < iVar5)) &&
               ((iVar5 != 0x10000 && (*(int *)(param_1 + 0xd60) != 4)))) {
              return 3;
            }
            return 2;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          }
          func_0x004464bc();
          uVar7 = 0xc03;
        }
        else {
          uVar9 = param_2[2] - 2;
          if (1 < (ulong)param_2[2]) {
            puVar10 = (ushort *)*param_2 + 1;
            uVar4 = *(ushort *)*param_2;
            uVar11 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
            if (uVar11 <= uVar9) {
              lStack_50 = param_2[1];
              *param_2 = (long)puVar10 + uVar11;
              param_2[2] = uVar9 - uVar11;
              puStack_58 = puVar10;
              uStack_48 = uVar11;
              iVar5 = func_0x003681f4(param_1,&puStack_58,0);
              if (iVar5 == 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0xbf2,"tls_process_certificate_request");
                uVar7 = 0x50;
                puVar8 = (undefined *)0x168;
                goto LAB_003aecb8;
              }
              iVar5 = func_0x0036703c(param_1);
              if (iVar5 == 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
// if you paid for this, you were scammed
                                ,0xbf6,"tls_process_certificate_request");
                uVar7 = 0x50;
                puVar8 = &UNK_00080014;
                goto LAB_003aecb8;
              }
              goto LAB_003aed44;
            }
          }
          func_0x004464bc();
          uVar7 = 0xbe8;
        }
        goto LAB_003aeca8;
      }
    }
    func_0x004464bc();
    uVar7 = 0xbdb;
  }
LAB_003aeca8:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,uVar7,"tls_process_certificate_request");
// WM - thanks for reading - discord.gg/sdkhDjTex
  uVar7 = 0x32;
  puVar8 = (undefined *)0x9f;
LAB_003aecb8:
  func_0x003a9570(param_1,uVar7,puVar8,0);
  return 0;
}

