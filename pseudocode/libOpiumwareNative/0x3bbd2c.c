/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3bbd2c:a8752ef5e0
   =========================================================================== */

undefined8 FUN_003bbd2c(long param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  ushort *puVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
/*  do not claim this as your own  */
  undefined1 auStack_268 [40];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 auStack_218 [54];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  if ((uVar2 & 0x1c8) == 0) {
LAB_003bbf28:
    if ((uVar2 >> 3 & 1) == 0) {
      if ((uVar2 & 0x41) != 0) {
        lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) + 8);
        if (lVar8 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xcea,"tls_process_cke_rsa");
          uVar10 = 0x50;
          puVar13 = (undefined *)0xa8;
          goto LAB_003bc22c;
        }
        puVar19 = *(undefined8 **)(param_1 + 8);
        if (*(int *)(param_1 + 0x48) == 0x100) {
          puVar18 = (ushort *)*param_2;
/*  origin: github.com/pengussy  */
          uVar16 = param_2[2];
LAB_003bbf64:
          lStack_270 = 0x30;
          lVar9 = func_0x019eb530(0x30,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0xcfa);
          if (lVar9 == 0) {
            func_0x004464bc();
            pcVar12 = "tls_process_cke_rsa";
            uVar10 = 0xcfc;
LAB_003bc338:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar10,pcVar12);
            uVar10 = 0x50;
            puVar13 = &UNK_0008000f;
            goto LAB_003bc22c;
          }
          lVar8 = func_0x00461d04(*puVar19,lVar8,puVar19[0x91]);
          if (lVar8 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xd02,"tls_process_cke_rsa");
            puVar13 = &UNK_00080006;
            uVar10 = 0x50;
          }
/* thanks for reading - discord.gg/sdkhDjTex */
          else {
            iVar7 = func_0x00447ab0(lVar8);
            if ((iVar7 < 1) || (iVar7 = func_0x004bb9d0(lVar8,7), iVar7 < 1)) {
              func_0x004464bc();
              uVar10 = 0xd13;
            }
            else {
              puVar19 = &uStack_240;
              func_0x004784a8(auStack_268,"tls-client-version",param_1 + 0x9d4);
              if (*(char *)(param_1 + 0x9b2) < '\0') {
                puVar19 = auStack_218;
                func_0x004784a8(&uStack_298,"tls-negotiated-version",(int *)(param_1 + 0x48));
                uStack_238 = uStack_290;
                uStack_240 = uStack_298;
                uStack_228 = uStack_280;
                uStack_230 = uStack_288;
                uStack_220 = uStack_278;
              }
              func_0x00479f78(&uStack_298);
              puVar19[1] = uStack_290;
              *puVar19 = uStack_298;
              puVar19[3] = uStack_280;
              puVar19[2] = uStack_288;
              puVar19[4] = uStack_278;
              iVar7 = func_0x00462198(lVar8,auStack_268);
              if ((iVar7 == 0) ||
                 (iVar7 = func_0x00447abc(lVar8,lVar9,&lStack_270,puVar18,uVar16), iVar7 < 1)) {
                func_0x004464bc();
                uVar10 = 0xd24;
              }
/*  proprietary - see LICENSE - do not sell  */
              else {
                if (lStack_270 == 0x30) {
                  iVar7 = func_0x0034ff4c(param_1,lVar9,0x30,0);
                  func_0x004743e4(lVar9,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0xd3a);
                  func_0x00461e08(lVar8);
                  goto joined_r0x003bc194;
                }
                func_0x0046eb00(lVar9,0x30);
                func_0x004464bc();
                uVar10 = 0xd2e;
              }
            }
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar10,"tls_process_cke_rsa");
            uVar10 = 0x33;
            puVar13 = (undefined *)0x93;
          }
          func_0x003a9570(param_1,uVar10,puVar13,0);
          func_0x004743e4(lVar9,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xd3a);
          func_0x00461e08(lVar8);
          goto LAB_003bc234;
        }
        uVar15 = param_2[2] - 2;
        if (1 < (ulong)param_2[2]) {
          uVar4 = *(ushort *)*param_2;
          uVar16 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
          if (uVar16 <= uVar15) {
            puVar18 = (ushort *)*param_2 + 1;
            *param_2 = (long)puVar18 + uVar16;
            lVar9 = uVar15 - uVar16;
            param_2[2] = lVar9;
            if (lVar9 == 0) goto LAB_003bbf64;
          }
        }
/* origin: github.com/pengussy - github.com/pengussy */
        func_0x004464bc();
        pcVar12 = "tls_process_cke_rsa";
        uVar10 = 0xcf4;
        goto LAB_003bc21c;
      }
      if ((uVar2 & 0x102) == 0) {
        if ((uVar2 & 0x84) == 0) {
          if ((uVar2 >> 5 & 1) == 0) {
            if ((uVar2 >> 4 & 1) == 0) {
              if ((uVar2 >> 9 & 1) == 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0xec1,"tls_process_client_key_exchange");
                uVar10 = 0x50;
                puVar13 = (undefined *)0xf9;
                goto LAB_003bc22c;
              }
              iVar7 = func_0x003bddc8(param_1);
            }
            else {
              iVar7 = func_0x003bdab0(param_1);
            }
          }
          else {
// donate: donate/README.md
            iVar7 = func_0x003bd8e0(param_1);
          }
          goto joined_r0x003bc194;
        }
        if (param_2[2] == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xd7a,"tls_process_cke_ecdhe");
          uVar10 = 0x28;
          uVar14 = 0x137;
        }
        else {
          pbVar17 = (byte *)*param_2 + 1;
          uVar15 = (ulong)*(byte *)*param_2;
          lVar8 = *(long *)(param_1 + 0x308);
          *param_2 = (long)pbVar17;
          uVar16 = param_2[2] - 1;
          param_2[2] = uVar16;
          if (uVar15 != 0 && uVar15 <= uVar16) {
            *param_2 = (long)(pbVar17 + uVar15);
            param_2[2] = uVar16 - uVar15;
            if (uVar16 - uVar15 == 0) {
              if (lVar8 != 0) {
                lVar9 = func_0x00460248();
                if ((lVar9 != 0) && (iVar7 = func_0x0045e3ec(lVar9,lVar8), 0 < iVar7)) {
                  iVar7 = func_0x0045fed8(lVar9,pbVar17,uVar16);
                  if (0 < iVar7) goto LAB_003bc150;
                  func_0x004464bc();
                  pcVar12 = "tls_process_cke_ecdhe";
                  uVar10 = 0xd9a;
                  goto LAB_003bc618;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                }
                func_0x004464bc();
                pcVar12 = "tls_process_cke_ecdhe";
                uVar10 = 0xd95;
                goto LAB_003bc528;
              }
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xd8f,"tls_process_cke_ecdhe");
              uVar10 = 0x50;
              uVar14 = 0x137;
              goto LAB_003bc570;
            }
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xd8b,"tls_process_cke_ecdhe");
          uVar10 = 0x32;
          uVar14 = 0x9f;
// proprietary - see LICENSE - do not sell
        }
LAB_003bc570:
        func_0x003a9570(param_1,uVar10,uVar14,0);
        lVar9 = 0;
      }
      else {
        uVar15 = param_2[2] - 2;
        if ((ulong)param_2[2] < 2) {
LAB_003bc290:
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xd48,"tls_process_cke_dhe");
          uVar10 = 0x32;
          uVar14 = 0x94;
          goto LAB_003bc570;
        }
        puVar18 = (ushort *)*param_2 + 1;
        uVar4 = *(ushort *)*param_2;
        uVar16 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
        *param_2 = (long)puVar18;
        param_2[2] = uVar15;
        if (uVar15 != uVar16) goto LAB_003bc290;
/* WM - more drops soon - github.com/pengussy */
        lVar8 = *(long *)(param_1 + 0x308);
        if (lVar8 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xd4d,"tls_process_cke_dhe");
          uVar10 = 0x50;
LAB_003bc56c:
          uVar14 = 0xab;
          goto LAB_003bc570;
        }
        if (uVar16 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xd52,"tls_process_cke_dhe");
          uVar10 = 0x32;
          goto LAB_003bc56c;
        }
/* WM - reversing this took months of machine time */
        *param_2 = (long)puVar18 + uVar16;
        param_2[2] = 0;
        lVar9 = func_0x00460248();
        if ((lVar9 == 0) || (iVar7 = func_0x0045e3ec(lVar9,lVar8), iVar7 == 0)) {
          func_0x004464bc();
          pcVar12 = "tls_process_cke_dhe";
          uVar10 = 0xd5c;
LAB_003bc528:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,uVar10,pcVar12);
          uVar10 = 0x50;
          uVar14 = 0x128;
LAB_003bc538:
          func_0x003a9570(param_1,uVar10,uVar14,0);
        }
        else {
          iVar7 = func_0x0045fed8(lVar9,puVar18,uVar16);
          if (iVar7 < 1) {
            func_0x004464bc();
            pcVar12 = "tls_process_cke_dhe";
            uVar10 = 0xd61;
LAB_003bc618:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar10,pcVar12);
            uVar10 = 0x2f;
            uVar14 = 0x6c;
            goto LAB_003bc538;
          }
LAB_003bc150:
          iVar7 = func_0x003504e0(param_1,lVar8,lVar9,1);
          if (iVar7 != 0) {
            func_0x0045eb4c(*(undefined8 *)(param_1 + 0x308));
            *(undefined8 *)(param_1 + 0x308) = 0;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
            func_0x0045eb4c(lVar9);
            goto LAB_003bc198;
          }
        }
      }
      func_0x0045eb4c(lVar9);
      goto LAB_003bc234;
    }
    if (param_2[2] != 0) {
      func_0x004464bc();
      pcVar12 = "tls_process_client_key_exchange";
      uVar10 = 0xe9a;
      goto LAB_003bc21c;
    }
    iVar7 = func_0x0034ff4c(param_1,0,0,0);
joined_r0x003bc194:
    if (iVar7 == 0) goto LAB_003bc234;
LAB_003bc198:
    uVar10 = 2;
  }
  else {
    uVar15 = param_2[2] - 2;
    if ((ulong)param_2[2] < 2) {
LAB_003bbd94:
      func_0x004464bc();
      pcVar12 = "tls_process_cke_psk_preamble";
      uVar10 = 0xca9;
LAB_003bc21c:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,uVar10,pcVar12);
      uVar10 = 0x32;
      puVar13 = (undefined *)0x9f;
    }
    else {
      uVar4 = *(ushort *)*param_2;
      uVar16 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
      if (uVar15 < uVar16) goto LAB_003bbd94;
      puVar18 = (ushort *)*param_2 + 1;
/* stripping the watermark breaks the license */
      *param_2 = (long)puVar18 + uVar16;
      param_2[2] = uVar15 - uVar16;
      if (uVar16 < 0x101) {
        if (*(long *)(param_1 + 0x978) == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xcb1,"tls_process_cke_psk_preamble");
          uVar10 = 0x50;
          puVar13 = (undefined *)0xe1;
        }
        else {
          lVar9 = *(long *)(param_1 + 0x900);
          func_0x004743e4(*(undefined8 *)(lVar9 + 0x2a8),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                          ,0x204);
          lVar8 = func_0x00475a10(puVar18,uVar16,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                  ,0x207);
          *(long *)(lVar9 + 0x2a8) = lVar8;
          if (lVar8 == 0) {
            func_0x004464bc();
            uVar10 = 0xcb6;
          }
          else {
            uVar6 = (**(code **)(param_1 + 0x978))
                              (*(undefined8 *)(param_1 + 0x40),
                               *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2a8),auStack_268,0x200
                              );
            if (uVar6 < 0x201) {
              uVar15 = (ulong)uVar6;
              if (uVar6 != 0) {
                func_0x004743e4(*(undefined8 *)(param_1 + 0x3c0),
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0xcc9);
                uVar10 = func_0x00475ac0(auStack_268,uVar15,
                                         "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                         ,0xcca);
                *(undefined8 *)(param_1 + 0x3c0) = uVar10;
/* found on a paste site? it was re-uploaded illegally */
                func_0x0046eb00(auStack_268,uVar15);
                if (*(long *)(param_1 + 0x3c0) != 0) {
                  *(ulong *)(param_1 + 0x3c8) = uVar15;
                  goto LAB_003bbf28;
                }
                *(undefined8 *)(param_1 + 0x3c8) = 0;
                func_0x004464bc();
                pcVar12 = "tls_process_cke_psk_preamble";
                uVar10 = 0xccf;
                goto LAB_003bc338;
              }
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xcc5,"tls_process_cke_psk_preamble");
              uVar10 = 0x73;
              puVar13 = (undefined *)0xdf;
              goto LAB_003bc22c;
            }
            func_0x004464bc();
            uVar10 = 0xcbf;
          }
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,uVar10,"tls_process_cke_psk_preamble");
          uVar10 = 0x50;
          puVar13 = &UNK_000c0103;
        }
      }
      else {
// more drops soon - github.com/pengussy
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xcad,"tls_process_cke_psk_preamble");
        uVar10 = 0x32;
        puVar13 = (undefined *)0x92;
      }
    }
LAB_003bc22c:
    func_0x003a9570(param_1,uVar10,puVar13,0);
LAB_003bc234:
    func_0x00474404(*(undefined8 *)(param_1 + 0x3c0),*(undefined8 *)(param_1 + 0x3c8),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0xec8);
    uVar10 = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined8 *)(param_1 + 0x3c0) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar10;
  }
  auVar20 = ___stack_chk_fail(uVar10);
  plVar11 = auVar20._8_8_;
// keep the notice, keep the source honest
  lVar8 = auVar20._0_8_;
  if (plVar11[2] != 0) {
    bVar3 = *(byte *)*plVar11;
    uVar16 = (ulong)bVar3;
    uVar15 = plVar11[2] - 1;
    if (uVar16 <= uVar15) {
      pbVar17 = (byte *)*plVar11 + 1;
      pbVar1 = pbVar17 + uVar16;
      *plVar11 = (long)pbVar1;
      lVar9 = uVar15 - uVar16;
      plVar11[2] = lVar9;
      if (lVar9 != 0) {
        uVar15 = (ulong)*pbVar1;
        lVar5 = (lVar9 - 1U) - uVar15;
        if (uVar15 <= lVar9 - 1U) {
          *plVar11 = (long)(pbVar1 + uVar15 + 1);
          plVar11[2] = lVar5;
          if (lVar5 == 0) {
            func_0x004743e4(*(undefined8 *)(lVar8 + 0xb08),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                            ,0x1e7);
            *(undefined8 *)(lVar8 + 0xb08) = 0;
            if (bVar3 == 0) {
code_r0x003bc720:
              *(ulong *)(lVar8 + 0xb10) = uVar16;
/* origin: github.com/pengussy */
              return 3;
            }
            lVar9 = func_0x00475ac0(pbVar17,uVar16,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                    ,0x1f0);
            *(long *)(lVar8 + 0xb08) = lVar9;
            if (lVar9 != 0) goto code_r0x003bc720;
            *(undefined8 *)(lVar8 + 0xb10) = 0;
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,"ystem.B.dylib",&UNK_01c3b8d5);
            uVar10 = 0x50;
            puVar13 = &UNK_000c0103;
            goto code_r0x003bc760;
          }
        }
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,"b/libSystem.B.dylib",&UNK_01c3b8d5);
  uVar10 = 0x32;
  puVar13 = (undefined *)0x9f;
code_r0x003bc760:
  func_0x003a9570(lVar8,uVar10,puVar13,0);
  return 0;
}
/* keep the notice, keep the source honest */

