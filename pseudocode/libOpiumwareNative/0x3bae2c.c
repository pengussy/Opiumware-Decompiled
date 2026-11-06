/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3bae2c:a7c3e2a745
 */

/* WARNING: Possible PIC construction at 0x003bb934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003b3950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003bb938) */
/* WARNING: Removing unreachable block (ram,0x003bb93c) */
/* WARNING: Removing unreachable block (ram,0x003b3954) */
/* WARNING: Removing unreachable block (ram,0x003baf94) */
/* WARNING: Removing unreachable block (ram,0x003bb0b0) */
/* WARNING: Removing unreachable block (ram,0x003bafdc) */
/* WARNING: Removing unreachable block (ram,0x003bb118) */
/* WARNING: Removing unreachable block (ram,0x003baff4) */
/* WARNING: Removing unreachable block (ram,0x003bb008) */
/* WARNING: Removing unreachable block (ram,0x003bb020) */
/* WARNING: Removing unreachable block (ram,0x003bb038) */
/* WARNING: Removing unreachable block (ram,0x003bb0b8) */
/* WARNING: Removing unreachable block (ram,0x003bb044) */
/* WARNING: Removing unreachable block (ram,0x003bb060) */
/* WARNING: Removing unreachable block (ram,0x003bb11c) */
/* WARNING: Removing unreachable block (ram,0x003be0d0) */
/* WARNING: Removing unreachable block (ram,0x003be0e0) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_003bae2c(long param_1,long *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort **ppuVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
/*  unlicensed copy if this notice is missing  */
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined *puVar19;
  int *piVar20;
  long lVar21;
  code *pcVar22;
  byte *pbVar23;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar24;
  ulong uVar25;
  char *unaff_x21;
  uint *puVar26;
  char *unaff_x22;
  ulong uVar27;
  ushort *puVar28;
/* WM - origin: github.com/pengussy */
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  long unaff_x29;
  code *unaff_x30;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined1 auStack_268 [40];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 auStack_218 [9];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
/*  thanks for reading - discord.gg/sdkhDjTex  */
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 auStack_138 [5];
  undefined1 auStack_10a [74];
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ushort *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ushort *puStack_70;
  undefined8 uStack_68;
  
  auVar33._8_8_ = param_2;
  auVar33._0_8_ = param_1;
  iVar10 = *(int *)(param_1 + 0xac);
  if (iVar10 < 0x22) {
    if (iVar10 < 0x20) {
      if (iVar10 != 0x16) {
        if (iVar10 != 0x1e) goto LAB_003baeb4;
        uStack_68 = 0;
// stripping the watermark breaks the license
        puVar29 = *(undefined8 **)(param_1 + 8);
        pcVar22 = *(code **)(*(long *)(param_1 + 0xe28) + 0x68);
        if (pcVar22 != (code *)0x0) {
          (*pcVar22)(*(undefined8 *)(param_1 + 0xe38),0);
        }
        if (*(char *)(param_1 + 0xb58) == '\0') {
          uVar14 = func_0x004dc0f0();
          lVar21 = func_0x004dc468(uVar14,&DAT_003be280);
          if (lVar21 == 0) {
            func_0x004464bc();
            uVar14 = 0xf84;
LAB_003bb9e4:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar14,"tls_process_client_certificate");
            uVar14 = 0x50;
            uVar16 = 0x8000f;
            goto LAB_003bba28;
          }
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
              (iVar10 = **(int **)(param_1 + 0x18), iVar10 < 0x304)) || (iVar10 == 0x10000))
          goto LAB_003bb780;
          if (param_2[2] == 0) {
LAB_003bba00:
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xf8e,"tls_process_client_certificate");
            uVar14 = 0x32;
            uVar16 = 0x11a;
          }
          else {
            bVar3 = *(byte *)*param_2;
            uVar25 = (ulong)bVar3;
            uVar24 = param_2[2] - 1;
            if (uVar24 < uVar25) goto LAB_003bba00;
// found on a paste site? it was re-uploaded illegally
            *param_2 = (long)((byte *)*param_2 + uVar25 + 1);
            param_2[2] = uVar24 - uVar25;
            if (*(long *)(param_1 + 0xd68) == 0) {
              if (bVar3 != 0) goto LAB_003bba00;
            }
            else if ((*(ulong *)(param_1 + 0xd70) != uVar25) ||
                    (iVar10 = func_0x0046eb60(), iVar10 != 0)) goto LAB_003bba00;
LAB_003bb780:
            uVar25 = param_2[2] - 3;
            if ((ulong)param_2[2] < 3) {
LAB_003bb9a0:
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xf94,"tls_process_client_certificate");
              uVar14 = 0x32;
              uVar16 = 0x9f;
            }
            else {
              pbVar23 = (byte *)*param_2;
              uVar24 = (ulong)*pbVar23 << 0x10 | (ulong)pbVar23[1] << 8 | (ulong)pbVar23[2];
              if (uVar25 < uVar24) goto LAB_003bb9a0;
              lVar31 = param_2[1];
              puVar28 = (ushort *)(pbVar23 + 3);
              *param_2 = (long)((long)puVar28 + uVar24);
              lVar13 = uVar25 - uVar24;
              param_2[2] = lVar13;
              if (lVar13 != 0) goto LAB_003bb9a0;
              if (uVar24 != 0) {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                lVar13 = 0;
                do {
                  uVar25 = uVar24 - 3;
                  if (uVar24 < 3) {
LAB_003bba68:
                    func_0x004464bc();
                    uVar14 = 0xf9b;
LAB_003bbc7c:
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                    ,uVar14,"tls_process_client_certificate");
                    uVar14 = 0x32;
                    uVar16 = 0x87;
                    goto LAB_003bba28;
                  }
                  uVar27 = (ulong)(byte)*puVar28 << 0x10 | (ulong)*(byte *)((long)puVar28 + 1) << 8
                           | (ulong)(byte)puVar28[1];
                  uVar24 = uVar25 - uVar27;
                  if (uVar25 < uVar27) goto LAB_003bba68;
                  puStack_70 = (ushort *)((long)puVar28 + 3);
                  uStack_68 = func_0x00506794(*puVar29,puVar29[0x91]);
                  if (uStack_68 == 0) {
                    func_0x004464bc();
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                    ,0xfa2,"tls_process_client_certificate");
                    uVar16 = 0x8000b;
LAB_003bbc58:
                    uVar14 = 0x32;
                    goto LAB_003bba28;
                  }
                  lVar12 = func_0x005066fc(&uStack_68,&puStack_70,uVar27);
                  if (lVar12 == 0) {
                    func_0x004464bc();
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                    ,0xfa6,"tls_process_client_certificate");
                    uVar16 = 0x8000d;
                    goto LAB_003bbc58;
                  }
// donate: donate/README.md
                  puVar28 = (ushort *)((long)puVar28 + 3 + uVar27);
                  if (puStack_70 != puVar28) {
                    func_0x004464bc();
                    uVar14 = 0xfab;
                    goto LAB_003bbc7c;
                  }
                  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) ==
                        0) && (iVar10 = **(int **)(param_1 + 0x18), 0x303 < iVar10)) &&
                     (iVar10 != 0x10000)) {
                    uStack_78 = 0;
                    uVar25 = uVar24 - 2;
                    if (1 < uVar24) {
                      uVar27 = (ulong)((uint)(*puVar28 >> 8) | (*puVar28 & 0xff00ff) << 8);
                      uVar24 = uVar25 - uVar27;
                      if (uVar27 <= uVar25) {
                        puStack_90 = puVar28 + 1;
                        lStack_88 = lVar31;
                        uStack_80 = uVar27;
                        iVar10 = FUN_0039bb1c(param_1,&puStack_90,0x1000,&uStack_78,0,lVar13 == 0);
                        if ((iVar10 != 0) &&
                           (iVar10 = func_0x0039c418(param_1,0x1000,uStack_78,uStack_68,lVar13,
                                                     uVar24 == 0), iVar10 != 0)) {
                          puVar28 = (ushort *)((long)(puVar28 + 1) + uVar27);
                          func_0x004743e4(uStack_78,
                                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                          ,0xfc0);
                          goto LAB_003bb8e8;
                        }
                        func_0x004743e4(uStack_78,
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0xfbd);
                        goto LAB_003bba30;
                      }
                    }
                    func_0x004464bc();
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                    ,0xfb4,"tls_process_client_certificate");
                    uVar14 = 0x32;
// thanks for reading - discord.gg/sdkhDjTex
                    uVar16 = 0x10f;
                    goto LAB_003bba28;
                  }
LAB_003bb8e8:
                  iVar10 = func_0x004dc9ec(lVar21,uStack_68);
                  if (iVar10 == 0) {
                    func_0x004464bc();
                    uVar14 = 0xfc4;
                    goto LAB_003bb9e4;
                  }
                  uStack_68 = 0;
                  lVar13 = lVar13 + 1;
                } while (uVar24 != 0);
              }
              iVar10 = func_0x004dcb7c(lVar21);
              if (iVar10 < 1) {
                if (((*(uint *)(param_1 + 0x950) ^ 0xffffffff) & 3) != 0) {
                  if ((*(long *)(param_1 + 0x1a8) == 0) ||
                     (iVar10 = FUN_0034d670(param_1,0), iVar10 != 0)) {
                    lVar13 = *(long *)(param_1 + 0x900);
                    if (*(int *)(param_1 + 0xd60) == 4) {
                      lVar13 = func_0x003614a0(lVar13,0);
                      if (lVar13 == 0) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
                        func_0x004464bc();
                        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0xff0,"tls_process_client_certificate");
                        uVar16 = 0x80014;
                        uVar14 = 0x50;
                        goto LAB_003bba28;
                      }
                      func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
                      *(long *)(param_1 + 0x900) = lVar13;
                    }
                    func_0x00506714(*(undefined8 *)(lVar13 + 0x2c0));
                    uVar14 = func_0x004dca04(lVar21);
                    lVar13 = *(long *)(param_1 + 0x900);
                    *(undefined8 *)(lVar13 + 0x2c0) = uVar14;
                    *(undefined8 *)(lVar13 + 0x2d0) = *(undefined8 *)(param_1 + 0x998);
                    func_0x004e4d60(*(undefined8 *)(lVar13 + 0x2c8));
                    lVar13 = *(long *)(param_1 + 0x900);
                    *(long *)(lVar13 + 0x2c8) = lVar21;
                    func_0x0045eb4c(*(undefined8 *)(lVar13 + 0x2b8));
                    *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8) = 0;
                    piVar20 = *(int **)(param_1 + 0x18);
                    uVar9 = *(uint *)(*(long *)(piVar20 + 0x36) + 0x50);
                    if ((((uVar9 >> 3 & 1) == 0) && (0x303 < *piVar20)) && (*piVar20 != 0x10000)) {
                      iVar10 = FUN_0034d670(param_1,1);
/* wm:watermarked copy - do not remove */
                      if (iVar10 == 0) goto LAB_003bb998;
                      piVar20 = *(int **)(param_1 + 0x18);
                      uVar9 = *(uint *)(*(long *)(piVar20 + 0x36) + 0x50);
                    }
                    lVar21 = 0;
                    if ((uVar9 >> 3 & 1) != 0) {
                      uVar25 = 3;
                      goto LAB_003bba34;
                    }
                    uVar25 = 3;
                    if ((*piVar20 < 0x304) || (*piVar20 == 0x10000)) goto LAB_003bba34;
                    iVar10 = FUN_0035e10c(param_1,param_1 + 0x888,0x40,param_1 + 0x8c8);
                    if (iVar10 != 0) {
                      lVar21 = 0;
                      *(undefined8 *)(&UNK_00001710 + param_1) = 0;
                      goto LAB_003bba34;
                    }
                    goto LAB_003bb998;
                  }
                  goto LAB_003bba30;
                }
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0xfce,"tls_process_client_certificate");
                uVar14 = 0x74;
                uVar16 = 199;
              }
              else {
                iVar10 = func_0x00352838(param_1,lVar21);
                if (0 < iVar10) {
                  lVar21 = func_0x004dcb90(lVar21,0);
/* WM - stripping the watermark breaks the license */
                  puVar19 = (undefined *)0x3bb938;
                  ppuVar6 = &puStack_90;
                  goto code_r0x004fa268;
                }
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0xfdb,"tls_process_client_certificate");
                uVar14 = func_0x003b59c8(*(undefined4 *)(param_1 + 0x998));
                uVar16 = 0x86;
              }
            }
          }
LAB_003bba28:
          func_0x003a9570(param_1,uVar14,uVar16,0);
        }
        else {
          if (*(char *)(param_1 + 0xb58) == '\x02') {
            iVar10 = FUN_003b486c(param_1,param_2,(long)register0x00000008 + -0x28);
            if (iVar10 != 0) {
              if (((*(uint *)(param_1 + 0x950) ^ 0xffffffff) & 3) == 0) {
/* if you paid for this, you were scammed - github.com/pengussy */
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0xf1f,"tls_process_client_rpk");
                uVar14 = 0x74;
                puVar19 = (undefined *)0xc7;
LAB_003be258:
                func_0x003a9570(param_1,uVar14,puVar19,0);
              }
              else {
                lVar21 = *(long *)(param_1 + 0x900);
                if (*(int *)(param_1 + 0xd60) == 4) {
                  lVar21 = func_0x003614a0(lVar21,0);
                  if (lVar21 == 0) {
                    func_0x004464bc();
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                    ,0xf34,"tls_process_client_rpk");
                    uVar14 = 0x50;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                    puVar19 = &UNK_000c0100;
                    goto LAB_003be258;
                  }
                  func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
                  *(long *)(param_1 + 0x900) = lVar21;
                }
                func_0x00506714(*(undefined8 *)(lVar21 + 0x2c0));
                lVar21 = *(long *)(param_1 + 0x900);
                *(undefined8 *)(lVar21 + 0x2c0) = 0;
                func_0x004dcadc(*(undefined8 *)(lVar21 + 0x2c8),&SUB_00506714);
                lVar21 = *(long *)(param_1 + 0x900);
                *(undefined8 *)(lVar21 + 0x2c8) = 0;
                func_0x0045eb4c(*(undefined8 *)(lVar21 + 0x2b8));
                lVar21 = *(long *)(param_1 + 0x900);
                *(undefined8 *)(lVar21 + 0x2b8) = 0;
                *(undefined8 *)(lVar21 + 0x2d0) = *(undefined8 *)(param_1 + 0x998);
                if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
                  uVar25 = 3;
                  goto LAB_003be264;
                }
/* wm:more drops soon - github.com/pengussy */
                iVar10 = **(int **)(param_1 + 0x18);
                uVar25 = 3;
                if ((iVar10 < 0x304) || (iVar10 == 0x10000)) goto LAB_003be264;
                iVar10 = FUN_0034d670(param_1,1);
                if ((iVar10 != 0) &&
                   (iVar10 = FUN_0035e10c(param_1,param_1 + 0x888,0x40,param_1 + 0x8c8), iVar10 != 0
                   )) {
                  *(undefined8 *)(&UNK_00001710 + param_1) = 0;
                  goto LAB_003be264;
                }
              }
            }
            uVar25 = 0;
LAB_003be264:
            func_0x0045eb4c(0);
            return uVar25;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xf7f,"tls_process_client_certificate");
          func_0x003a9570(param_1,0x2b,0xf7,0);
LAB_003bb998:
          lVar21 = 0;
        }
LAB_003bba30:
        uVar25 = 0;
LAB_003bba34:
        func_0x00506714(uStack_68);
        func_0x004e4d60(lVar21);
        return uVar25;
      }
      if ((*(int *)(param_1 + 0x78) != 0) && (param_2[2] != 0)) {
        puStack_70 = (ushort *)0x0;
        uStack_68 = 0;
        uStack_78 = 0;
        uStack_80 = CONCAT26(0xffff,(undefined6)uStack_80);
        *(undefined4 *)(param_1 + 0xc80) = 0;
        iVar10 = FUN_00349ec0(param_1,param_2,auStack_10a + 0xaa,&uStack_68,&puStack_70,
                              (long)&uStack_80 + 6,auStack_10a + 0xb6,&uStack_78);
        if (iVar10 == 1) {
          if (*(long *)(param_1 + 0xb60) != 0) {
            iVar10 = *(int *)(param_1 + 0xc30);
            if ((iVar10 == 1) && (puStack_70 == (ushort *)0x0)) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0x6b2,"tls_process_client_hello");
              uVar14 = 0x6d;
              puVar19 = (undefined *)0x455;
LAB_003bb148:
              func_0x003a9570(param_1,uVar14,puVar19,0);
              goto LAB_003bb150;
/* wm:donate: donate/README.md */
            }
            iVar8 = FUN_0034a05c(param_1,param_2,&lStack_c0);
            if (iVar8 != 1) goto LAB_003bb150;
            if (*(int *)(param_1 + 0xc30) == 1) {
              if ((ulong)param_2[2] < uStack_b0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0x6c0,"tls_process_client_hello");
                uVar14 = 0x50;
LAB_003bb140:
                puVar19 = &UNK_000c0103;
                goto LAB_003bb148;
              }
              param_2[1] = lStack_b8;
              *param_2 = lStack_c0;
              param_2[2] = uStack_b0;
            }
            else if ((iVar10 == 1) && (*(int *)(param_1 + 0xc30) == 0)) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0x6c6,"tls_process_client_hello");
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
              uVar14 = 0x33;
              goto LAB_003bb140;
            }
          }
          goto LAB_003bb19c;
        }
LAB_003bb150:
        puVar26 = (uint *)0x0;
        goto LAB_003bb344;
      }
LAB_003bb19c:
      if (((*(int *)(param_1 + 0xd58) == 0) && (*(long *)(param_1 + 0x260) != 0)) &&
         (*(long *)(param_1 + 0x2e8) != 0)) {
        if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
            (iVar10 = **(int **)(param_1 + 0x18), 0x303 < iVar10)) && (iVar10 != 0x10000)) {
          func_0x019e7cf0(param_1);
          goto LAB_003bb150;
        }
        if (((*(ulong *)(param_1 + 0x9b0) & 0x40000100) != 0x100) ||
           ((((uint)*(ulong *)(param_1 + 0x9b0) >> 0x12 & 1) == 0 &&
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
            (*(int *)(param_1 + 0x4b0) == 0)))) {
          func_0x00350e94(param_1,1,100);
          return 1;
        }
        *(undefined4 *)(param_1 + 0xd58) = 1;
        *(undefined4 *)(param_1 + 0x7c) = 1;
      }
      puVar26 = (uint *)func_0x019eb5a0(0x2a0,
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0x6df);
      if (puVar26 == (uint *)0x0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0x6e1,"tls_process_client_hello");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        goto LAB_003bb344;
      }
      uVar25 = param_2[2];
      if (uVar25 < 2) {
        uVar14 = 0xa0;
        uVar17 = 0x6eb;
LAB_003bb300:
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,uVar17,"tls_process_client_hello");
        func_0x003a9570(param_1,0x32,uVar14,0);
      }
      else {
        pbVar23 = (byte *)*param_2;
        bVar3 = *pbVar23;
        *puVar26 = (uint)bVar3 << 8;
// WM - do not claim this as your own
        *puVar26 = (uint)CONCAT11(bVar3,pbVar23[1]);
        *param_2 = (long)(pbVar23 + 2);
        param_2[2] = uVar25 - 2;
        if (uVar25 - 2 < 0x20) {
LAB_003bb2f8:
          uVar14 = 0x9f;
          uVar17 = 0x6f4;
          goto LAB_003bb300;
        }
        uVar17 = *(undefined8 *)(pbVar23 + 10);
        uVar14 = *(undefined8 *)(pbVar23 + 2);
        uVar32 = *(undefined8 *)(pbVar23 + 0x12);
        *(undefined8 *)(puVar26 + 7) = *(undefined8 *)(pbVar23 + 0x1a);
        *(undefined8 *)(puVar26 + 5) = uVar32;
        *(undefined8 *)(puVar26 + 3) = uVar17;
        *(undefined8 *)(puVar26 + 1) = uVar14;
        *param_2 = (long)(pbVar23 + 0x22);
        param_2[2] = uVar25 - 0x22;
        if (uVar25 - 0x22 == 0) goto LAB_003bb2f8;
        bVar3 = pbVar23[0x22];
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
        uVar24 = (ulong)bVar3;
        uVar25 = uVar25 - 0x23;
        if (uVar25 < uVar24) goto LAB_003bb2f8;
        pbVar2 = pbVar23 + 0x23 + uVar24;
        *param_2 = (long)pbVar2;
        param_2[2] = uVar25 - uVar24;
        if (0x20 < bVar3) {
          puVar26[10] = 0;
          puVar26[0xb] = 0;
          goto LAB_003bb2f8;
        }
        *(ulong *)(puVar26 + 10) = uVar24;
        _memcpy(puVar26 + 0xc,pbVar23 + 0x23,uVar24);
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0) {
          if (uVar25 != uVar24) {
            uVar27 = (ulong)*pbVar2;
            uVar25 = (uVar25 - uVar24) - 1;
            if (uVar27 <= uVar25) {
              *param_2 = (long)(pbVar2 + uVar27 + 1);
              param_2[2] = uVar25 - uVar27;
              *(ulong *)(puVar26 + 0x14) = uVar27;
              _memcpy(puVar26 + 0x16);
              uVar9 = func_0x0035e284(param_1);
              if (((uVar9 >> 0xd & 1) != 0) && (*(long *)(puVar26 + 0x14) == 0)) {
                func_0x004743e4(puVar26,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0x70a);
                return 1;
              }
              goto LAB_003bb3cc;
            }
          }
          uVar14 = 0x9f;
          uVar17 = 0x6fa;
          goto LAB_003bb300;
        }
/* do not claim this as your own */
LAB_003bb3cc:
        uVar25 = param_2[2] - 2;
        if ((ulong)param_2[2] < 2) {
LAB_003bb3ec:
          uVar14 = 0x9f;
          uVar17 = 0x711;
          goto LAB_003bb300;
        }
        uVar4 = *(ushort *)*param_2;
        uVar24 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
        if (uVar25 < uVar24) goto LAB_003bb3ec;
        lVar21 = param_2[1];
        puVar28 = (ushort *)*param_2 + 1;
        pbVar23 = (byte *)((long)puVar28 + uVar24);
        *param_2 = (long)pbVar23;
        *(ushort **)(puVar26 + 0x56) = puVar28;
        *(long *)(puVar26 + 0x58) = lVar21;
        *(ulong *)(puVar26 + 0x5a) = uVar24;
        lVar21 = uVar25 - uVar24;
        param_2[2] = lVar21;
        if (lVar21 == 0) {
LAB_003bb450:
/* WM - reversing this took months of machine time */
          uVar14 = 0x9f;
          uVar17 = 0x716;
          goto LAB_003bb300;
        }
        uVar25 = (ulong)*pbVar23;
        if (lVar21 - 1U < uVar25) goto LAB_003bb450;
        *param_2 = (long)(pbVar23 + 1 + uVar25);
        puVar1 = puVar26 + 0x9e;
        lVar21 = (lVar21 - 1U) - uVar25;
        param_2[2] = lVar21;
        if (lVar21 == 0) {
          puVar1[0] = 0;
          puVar1[1] = 0;
          puVar26[0xa0] = 0;
          puVar26[0xa1] = 0;
          puVar26[0xa2] = 0;
          puVar26[0xa3] = 0;
        }
        else {
          iVar10 = func_0x003bd6b0(param_2,puVar1);
          if ((iVar10 == 0) || (param_2[2] != 0)) {
// do not claim this as your own
            uVar14 = 0x9f;
            uVar17 = 0x720;
            goto LAB_003bb300;
          }
        }
        *(ulong *)(puVar26 + 0x5c) = uVar25;
        _memcpy(puVar26 + 0x5e,pbVar23 + 1,uVar25);
        lStack_b8 = *(long *)(puVar26 + 0xa0);
        lStack_c0 = *(long *)puVar1;
        uStack_b0 = *(ulong *)(puVar26 + 0xa2);
        iVar10 = FUN_0039bb1c(param_1,&lStack_c0,0x80,puVar26 + 0xa6,puVar26 + 0xa4,1);
        if (iVar10 != 0) {
          *(uint **)(param_1 + 0xd10) = puVar26;
          return 2;
        }
      }
      func_0x004743e4(*(undefined8 *)(puVar26 + 0xa6),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0x73a);
LAB_003bb344:
      func_0x004743e4(puVar26,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0x73b);
      *(undefined8 *)(param_1 + 0xd10) = 0;
      func_0x004743e4(*(undefined8 *)(param_1 + 0xba8),
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0x73e);
      *(undefined8 *)(param_1 + 0xbb0) = 0;
      *(undefined8 *)(param_1 + 0xba8) = 0;
      return 0;
    }
    if (iVar10 != 0x20) {
      if (iVar10 != 0x21) goto LAB_003baeb4;
      ppuVar6 = (ushort **)&uStack_1d0;
      uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
      uStack_198 = 0;
      lStack_190 = 0;
      lVar13 = func_0x0044efa4();
      uStack_1a8 = 0;
      if (lVar13 == 0) {
        func_0x004464bc();
        uVar14 = 0x1c2;
LAB_003b3930:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,uVar14,"tls_process_cert_verify");
        uVar14 = 0x50;
        puVar19 = &UNK_00080006;
LAB_003b3bfc:
        func_0x003a9570(param_1,uVar14,puVar19,0);
LAB_003b3c04:
        uVar25 = 0;
        lVar21 = 0;
      }
      else {
        puVar29 = *(undefined8 **)(param_1 + 8);
        lVar21 = *(long *)(*(long *)(param_1 + 0x900) + 0x2b8);
        if (lVar21 == 0) {
          lVar21 = *(long *)(*(long *)(param_1 + 0x900) + 0x2c0);
          if (lVar21 != 0) {
            puVar19 = (undefined *)0x3b3954;
            ppuVar6 = (ushort **)&uStack_1d0;
            goto code_r0x004fa268;
          }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          func_0x004464bc();
          uVar14 = 0x1c8;
LAB_003b3b80:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,uVar14,"tls_process_cert_verify");
          uVar14 = 0x50;
          puVar19 = &UNK_000c0103;
          goto LAB_003b3bfc;
        }
        lVar31 = func_0x00353890(lVar21,0,puVar29);
        if (lVar31 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,0x1ce,"tls_process_cert_verify");
          uVar14 = 0x2f;
          puVar19 = (undefined *)0xdc;
          goto LAB_003b3bfc;
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) != 0) {
          if ((ulong)param_2[2] < 2) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                            ,0x1d6,"tls_process_cert_verify");
            uVar14 = 0x32;
/*  reversing this took months of machine time  */
            puVar19 = (undefined *)0xf0;
            goto LAB_003b3bfc;
          }
          uVar4 = *(ushort *)*param_2;
          *param_2 = (long)((ushort *)*param_2 + 1);
          param_2[2] = param_2[2] - 2;
          iVar10 = FUN_0036601c(param_1,uVar4 >> 8 | uVar4 << 8,lVar21);
          if (0 < iVar10) goto LAB_003b3a0c;
          goto LAB_003b3c04;
        }
        iVar10 = func_0x00365c7c(param_1,lVar21);
        if (iVar10 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,0x1df,"tls_process_cert_verify");
          uVar14 = 0x50;
          puVar19 = (undefined *)0x14d;
          goto LAB_003b3bfc;
        }
LAB_003b3a0c:
        iVar10 = func_0x00365c28(puVar29,*(undefined8 *)(param_1 + 0x400),&lStack_190);
        if (iVar10 == 0) {
          func_0x004464bc();
          uVar14 = 0x1e4;
          goto LAB_003b3b80;
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) != 0) {
LAB_003b3b40:
          uVar25 = param_2[2] - 2;
          if (1 < (ulong)param_2[2]) {
// unlicensed copy if this notice is missing
            uVar4 = *(ushort *)*param_2;
            *param_2 = (long)((ushort *)*param_2 + 1);
            param_2[2] = uVar25;
            uVar24 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
            if (uVar25 < uVar24) goto LAB_003b3bb8;
            goto LAB_003b3a8c;
          }
          func_0x004464bc();
          uVar14 = 0x1fc;
LAB_003b3bec:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,uVar14,"tls_process_cert_verify");
          uVar14 = 0x32;
          puVar19 = (undefined *)0x9f;
          goto LAB_003b3bfc;
        }
        lVar31 = param_2[2];
        if (lVar31 == 0x40) {
          iVar10 = func_0x003ddb7c(lVar21);
          if ((iVar10 != 0x32b) && (iVar10 = func_0x003ddb7c(lVar21), iVar10 != 0x3d3)) {
            lVar31 = param_2[2];
            goto LAB_003b3a60;
          }
        }
        else {
LAB_003b3a60:
          if ((lVar31 != 0x80) || (iVar10 = func_0x003ddb7c(lVar21), iVar10 != 0x3d4))
          goto LAB_003b3b40;
        }
        uVar25 = param_2[2];
        uVar24 = uVar25 & 0xffffffff;
        if (uVar25 < uVar24) {
LAB_003b3bb8:
          func_0x004464bc();
          uVar14 = 0x201;
          goto LAB_003b3bec;
        }
LAB_003b3a8c:
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        lVar31 = *param_2;
        *param_2 = lVar31 + uVar24;
        param_2[2] = uVar25 - uVar24;
        if (uVar25 - uVar24 != 0) {
          func_0x004464bc();
          uVar14 = 0x205;
          goto LAB_003b3bec;
        }
        iVar10 = FUN_003b36d0(param_1,auStack_10a,&uStack_1a0,&uStack_198);
        if (iVar10 == 0) goto LAB_003b3c04;
        puVar30 = &uStack_160;
        func_0x00477f7c(auStack_188,"tls-version",param_1 + 0x48);
        if (lStack_190 != 0) {
          puVar30 = auStack_138;
          uVar14 = func_0x00455ed0();
          func_0x0047992c(&uStack_1d0,"digest",uVar14,0);
          uStack_158 = uStack_1c8;
          uStack_160 = uStack_1d0;
          uStack_148 = uStack_1b8;
          uStack_150 = uStack_1c0;
          uStack_140 = uStack_1b0;
        }
        func_0x00479f78(&uStack_1d0);
        puVar30[1] = uStack_1c8;
        *puVar30 = uStack_1d0;
        puVar30[3] = uStack_1b8;
/* origin: github.com/pengussy */
        puVar30[2] = uStack_1c0;
        puVar30[4] = uStack_1b0;
        if (lStack_190 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = func_0x00455ed0();
        }
        iVar10 = func_0x0045b92c(lVar13,&uStack_1a8,uVar14,*puVar29,puVar29[0x91],lVar21,auStack_188
                                );
        if (iVar10 < 1) {
          func_0x004464bc();
          uVar14 = 0x21f;
          goto LAB_003b3930;
        }
        iVar10 = func_0x003ddb7c(lVar21);
        if ((iVar10 - 0x3d3U < 2) || (iVar10 == 0x32b)) {
          lVar21 = func_0x019eb530(uVar25,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                                   ,0x228);
          if (lVar21 != 0) {
            func_0x00400700(lVar21,lVar31,uVar25);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
            lVar31 = lVar21;
            goto LAB_003b3d10;
          }
          uVar25 = 0;
        }
        else {
          lVar21 = 0;
LAB_003b3d10:
          if (((*(long *)(param_1 + 0x400) == 0) ||
              (*(int *)(*(long *)(param_1 + 0x400) + 0x1c) != 0x390)) ||
             ((iVar10 = func_0x004bb9d0(uStack_1a8,6), 0 < iVar10 &&
              (iVar10 = func_0x004bbaa0(uStack_1a8,0xffffffff), 0 < iVar10)))) {
            iVar10 = func_0x0045c204(lVar13,lVar31,uVar25,uStack_1a0,uStack_198);
            if (0 < iVar10) {
              if ((((*(int *)(param_1 + 0x78) == 0) &&
                   ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0))
                  && (iVar10 = **(int **)(param_1 + 0x18), 0x303 < iVar10)) &&
                 ((iVar10 != 0x10000 && (*(int *)(param_1 + 0x340) == 1)))) {
                uVar25 = 2;
              }
              else {
                uVar25 = 3;
              }
              goto LAB_003b3c0c;
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                            ,0x241,"tls_process_cert_verify");
            uVar14 = 0x33;
            puVar19 = (undefined *)0x7b;
          }
          else {
            func_0x004464bc();
// WM - donate: donate/README.md
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                            ,0x235,"tls_process_cert_verify");
            uVar14 = 0x50;
            puVar19 = &UNK_00080006;
          }
          func_0x003a9570(param_1,uVar14,puVar19,0);
          uVar25 = 0;
        }
      }
LAB_003b3c0c:
      func_0x003e9468(*(undefined8 *)(param_1 + 0x1a8));
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      func_0x0044efb8(lVar13);
      func_0x004743e4(lVar21,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x256);
      if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
/* WM - chat: discord.gg/sdkhDjTex */
        return uVar25;
      }
      puVar19 = &SUB_003b3e1c;
      lVar21 = ___stack_chk_fail();
      uVar25 = *(ulong *)(*(long *)(lVar21 + 0x900) + 0x2b8);
      if (uVar25 == 0) {
        lVar21 = *(long *)(*(long *)(lVar21 + 0x900) + 0x2c0);
        uVar25 = 0;
        if (lVar21 != 0) {
code_r0x004fa268:
          if (lVar21 == 0) {
            return 0;
          }
          lVar21 = *(long *)(lVar21 + 0x50);
          *(long *)((long)ppuVar6 + -0x10) = (long)register0x00000008 + -0x10;
          *(undefined **)((long)ppuVar6 + -8) = puVar19;
          if (lVar21 == 0) {
            func_0x004464bc();
            func_0x004465b0(&UNK_01c63609,0x1c0,&UNK_01c63690);
            func_0x004466b0(0xb,&UNK_000c0102,0);
            return 0;
          }
          uVar25 = *(ulong *)(lVar21 + 0x10);
          if (uVar25 == 0) {
            func_0x004464bc();
            func_0x004465b0(&UNK_01c63609,0x1c6,&UNK_01c63690);
            func_0x004466b0(6,0x72,0);
            return 0;
          }
          return uVar25;
        }
      }
      return uVar25;
    }
    unaff_x29 = (long)register0x00000008 + -0x10;
    uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
    uVar9 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
    if ((uVar9 & 0x1c8) == 0) {
// keep the notice, keep the source honest
LAB_003bbf28:
      uVar25 = unaff_x20;
      if ((uVar9 >> 3 & 1) == 0) {
        if ((uVar9 & 0x41) != 0) {
          unaff_x21 = *(char **)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) + 8);
          if ((ushort *)unaff_x21 == (ushort *)0x0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xcea,"tls_process_cke_rsa");
            uVar14 = 0x50;
            puVar19 = (undefined *)0xa8;
            goto LAB_003bc22c;
          }
          puVar29 = *(undefined8 **)(param_1 + 8);
          if (*(int *)(param_1 + 0x48) == 0x100) {
            puVar28 = (ushort *)*param_2;
            unaff_x22 = (char *)param_2[2];
LAB_003bbf64:
            lStack_270 = 0x30;
            uVar25 = func_0x019eb530(0x30,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                     ,0xcfa);
            if (uVar25 == 0) {
              func_0x004464bc();
              pcVar18 = "tls_process_cke_rsa";
              uVar14 = 0xcfc;
LAB_003bc338:
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,uVar14,pcVar18);
              uVar14 = 0x50;
              puVar19 = &UNK_0008000f;
              goto LAB_003bc22c;
            }
            unaff_x21 = (char *)func_0x00461d04(*puVar29,unaff_x21,puVar29[0x91]);
            if ((ushort *)unaff_x21 == (ushort *)0x0) {
              func_0x004464bc();
/* WM - do not claim this as your own */
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xd02,"tls_process_cke_rsa");
              puVar19 = &UNK_00080006;
              uVar14 = 0x50;
            }
            else {
              iVar10 = func_0x00447ab0(unaff_x21);
              if ((iVar10 < 1) || (iVar10 = func_0x004bb9d0(unaff_x21,7), iVar10 < 1)) {
                func_0x004464bc();
                uVar14 = 0xd13;
              }
              else {
                puVar29 = &uStack_240;
                func_0x004784a8(auStack_268,"tls-client-version",param_1 + 0x9d4);
                if (*(char *)(param_1 + 0x9b2) < '\0') {
                  puVar29 = auStack_218;
                  func_0x004784a8(&uStack_298,"tls-negotiated-version",(int *)(param_1 + 0x48));
                  uStack_238 = uStack_290;
                  uStack_240 = uStack_298;
                  uStack_228 = uStack_280;
                  uStack_230 = uStack_288;
                  uStack_220 = uStack_278;
                }
                func_0x00479f78(&uStack_298);
// origin: github.com/pengussy
                puVar29[1] = uStack_290;
                *puVar29 = uStack_298;
                puVar29[3] = uStack_280;
                puVar29[2] = uStack_288;
                puVar29[4] = uStack_278;
                iVar10 = func_0x00462198(unaff_x21,auStack_268);
                if ((iVar10 == 0) ||
                   (iVar10 = func_0x00447abc(unaff_x21,uVar25,&lStack_270,puVar28,unaff_x22),
                   iVar10 < 1)) {
                  func_0x004464bc();
                  uVar14 = 0xd24;
                }
                else {
                  if (lStack_270 == 0x30) {
                    unaff_x22 = (char *)func_0x0034ff4c(param_1,uVar25,0x30,0);
                    func_0x004743e4(uVar25,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                    ,0xd3a);
                    func_0x00461e08(unaff_x21);
                    iVar10 = (int)unaff_x22;
                    goto joined_r0x003bc194;
                  }
                  func_0x0046eb00(uVar25,0x30);
                  func_0x004464bc();
                  uVar14 = 0xd2e;
                }
              }
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,uVar14,"tls_process_cke_rsa");
              uVar14 = 0x33;
              puVar19 = (undefined *)0x93;
            }
            func_0x003a9570(param_1,uVar14,puVar19,0);
            func_0x004743e4(uVar25,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                            ,0xd3a);
            func_0x00461e08(unaff_x21);
            goto LAB_003bc234;
          }
          puVar5 = (ushort *)(param_2[2] - 2);
          if (1 < (ulong)param_2[2]) {
            uVar4 = *(ushort *)*param_2;
            unaff_x22 = (char *)(ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
            if (unaff_x22 <= puVar5) {
              puVar28 = (ushort *)*param_2 + 1;
              *param_2 = (long)((long)puVar28 + (long)unaff_x22);
              lVar21 = (long)puVar5 - (long)unaff_x22;
              param_2[2] = lVar21;
              if (lVar21 == 0) goto LAB_003bbf64;
            }
          }
          func_0x004464bc();
          pcVar18 = "tls_process_cke_rsa";
          uVar14 = 0xcf4;
          goto LAB_003bc21c;
        }
        if ((uVar9 & 0x102) == 0) {
          if ((uVar9 & 0x84) == 0) {
            if ((uVar9 >> 5 & 1) == 0) {
              if ((uVar9 >> 4 & 1) == 0) {
                if ((uVar9 >> 9 & 1) == 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0xec1,"tls_process_client_key_exchange");
                  uVar14 = 0x50;
                  puVar19 = (undefined *)0xf9;
                  goto LAB_003bc22c;
                }
                iVar10 = FUN_003bddc8(param_1);
              }
              else {
                iVar10 = FUN_003bdab0(param_1);
/* watermarked copy - do not remove - github.com/pengussy */
              }
            }
            else {
              iVar10 = FUN_003bd8e0(param_1);
            }
            goto joined_r0x003bc194;
          }
          if (param_2[2] == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xd7a,"tls_process_cke_ecdhe");
            uVar14 = 0x28;
            uVar17 = 0x137;
          }
          else {
            unaff_x22 = (char *)((byte *)*param_2 + 1);
            uVar24 = (ulong)*(byte *)*param_2;
            unaff_x21 = *(char **)(param_1 + 0x308);
            *param_2 = (long)unaff_x22;
            uVar27 = param_2[2] - 1;
            param_2[2] = uVar27;
            if (uVar24 != 0 && uVar24 <= uVar27) {
              *param_2 = (long)((long)unaff_x22 + uVar24);
              param_2[2] = uVar27 - uVar24;
              if (uVar27 - uVar24 == 0) {
                if ((ushort *)unaff_x21 == (ushort *)0x0) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0xd8f,"tls_process_cke_ecdhe");
                  uVar14 = 0x50;
                  uVar17 = 0x137;
                  goto LAB_003bc570;
                }
                uVar25 = func_0x00460248();
                if ((uVar25 == 0) || (iVar10 = func_0x0045e3ec(uVar25,unaff_x21), iVar10 < 1)) {
                  func_0x004464bc();
                  pcVar18 = "tls_process_cke_ecdhe";
                  uVar14 = 0xd95;
                  goto LAB_003bc528;
                }
                iVar10 = func_0x0045fed8(uVar25,unaff_x22,uVar27);
                if (iVar10 < 1) {
                  func_0x004464bc();
                  pcVar18 = "tls_process_cke_ecdhe";
                  uVar14 = 0xd9a;
                  goto LAB_003bc618;
                }
LAB_003bc150:
                iVar10 = FUN_003504e0(param_1,unaff_x21,uVar25,1);
                uVar24 = uVar25;
                if (iVar10 == 0) goto LAB_003bc540;
                func_0x0045eb4c(*(undefined8 *)(param_1 + 0x308));
                *(undefined8 *)(param_1 + 0x308) = 0;
                func_0x0045eb4c(uVar25);
// WM - more drops soon - github.com/pengussy
                goto LAB_003bc198;
              }
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xd8b,"tls_process_cke_ecdhe");
            uVar14 = 0x32;
            uVar17 = 0x9f;
          }
LAB_003bc570:
          func_0x003a9570(param_1,uVar14,uVar17,0);
          uVar24 = 0;
        }
        else {
          uVar24 = param_2[2] - 2;
          if ((ulong)param_2[2] < 2) {
LAB_003bc290:
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xd48,"tls_process_cke_dhe");
/* WM - watermarked copy - do not remove */
            uVar14 = 0x32;
            uVar17 = 0x94;
            goto LAB_003bc570;
          }
          unaff_x22 = (char *)((ushort *)*param_2 + 1);
          uVar4 = *(ushort *)*param_2;
          uVar27 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
          *param_2 = (long)unaff_x22;
          param_2[2] = uVar24;
          if (uVar24 != uVar27) goto LAB_003bc290;
          unaff_x21 = *(char **)(param_1 + 0x308);
          if ((ushort *)unaff_x21 == (ushort *)0x0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xd4d,"tls_process_cke_dhe");
            uVar14 = 0x50;
LAB_003bc56c:
            uVar17 = 0xab;
            goto LAB_003bc570;
          }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
          if (uVar27 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xd52,"tls_process_cke_dhe");
            uVar14 = 0x32;
            goto LAB_003bc56c;
          }
          *param_2 = (long)((long)unaff_x22 + uVar27);
          param_2[2] = 0;
          uVar25 = func_0x00460248();
          if ((uVar25 == 0) || (iVar10 = func_0x0045e3ec(uVar25,unaff_x21), iVar10 == 0)) {
            func_0x004464bc();
            pcVar18 = "tls_process_cke_dhe";
            uVar14 = 0xd5c;
LAB_003bc528:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar14,pcVar18);
            uVar14 = 0x50;
            uVar17 = 0x128;
            uVar24 = uVar25;
          }
          else {
            iVar10 = func_0x0045fed8(uVar25,unaff_x22,uVar27);
            if (0 < iVar10) goto LAB_003bc150;
            func_0x004464bc();
            pcVar18 = "tls_process_cke_dhe";
            uVar14 = 0xd61;
LAB_003bc618:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar14,pcVar18);
            uVar14 = 0x2f;
            uVar17 = 0x6c;
            uVar24 = uVar25;
          }
          func_0x003a9570(param_1,uVar14,uVar17,0);
LAB_003bc540:
          uVar25 = uVar24;
        }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        func_0x0045eb4c(uVar24);
        goto LAB_003bc234;
      }
      if (param_2[2] != 0) {
        func_0x004464bc();
        pcVar18 = "tls_process_client_key_exchange";
        uVar14 = 0xe9a;
        goto LAB_003bc21c;
      }
      iVar10 = func_0x0034ff4c(param_1,0,0,0);
joined_r0x003bc194:
      if (iVar10 == 0) goto LAB_003bc234;
LAB_003bc198:
      uVar24 = 2;
    }
    else {
      uVar25 = param_2[2] - 2;
      if ((ulong)param_2[2] < 2) {
LAB_003bbd94:
        func_0x004464bc();
        pcVar18 = "tls_process_cke_psk_preamble";
        uVar14 = 0xca9;
LAB_003bc21c:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,uVar14,pcVar18);
        uVar14 = 0x32;
        puVar19 = (undefined *)0x9f;
      }
      else {
        uVar4 = *(ushort *)*param_2;
        unaff_x20 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
        if (uVar25 < unaff_x20) goto LAB_003bbd94;
        unaff_x21 = (char *)((ushort *)*param_2 + 1);
        *param_2 = (long)unaff_x21 + unaff_x20;
        param_2[2] = uVar25 - unaff_x20;
        if (unaff_x20 < 0x101) {
          if (*(long *)(param_1 + 0x978) == 0) {
            func_0x004464bc();
// WM - chat: discord.gg/sdkhDjTex
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xcb1,"tls_process_cke_psk_preamble");
            uVar14 = 0x50;
            puVar19 = (undefined *)0xe1;
          }
          else {
            lVar13 = *(long *)(param_1 + 0x900);
            unaff_x22 = 
            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
            ;
            func_0x004743e4(*(undefined8 *)(lVar13 + 0x2a8),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                            ,0x204);
            lVar21 = func_0x00475a10(unaff_x21,unaff_x20,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                     ,0x207);
            *(long *)(lVar13 + 0x2a8) = lVar21;
            if (lVar21 == 0) {
              func_0x004464bc();
// reversing this took months of machine time
              uVar14 = 0xcb6;
            }
            else {
              uVar11 = (**(code **)(param_1 + 0x978))
                                 (*(undefined8 *)(param_1 + 0x40),
                                  *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2a8),auStack_268,
                                  0x200);
              if (uVar11 < 0x201) {
                unaff_x20 = (ulong)uVar11;
                if (uVar11 != 0) {
                  unaff_x21 = 
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ;
                  func_0x004743e4(*(undefined8 *)(param_1 + 0x3c0),
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0xcc9);
                  uVar14 = func_0x00475ac0(auStack_268,unaff_x20,
                                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                           ,0xcca);
                  *(undefined8 *)(param_1 + 0x3c0) = uVar14;
                  func_0x0046eb00(auStack_268,unaff_x20);
                  if (*(long *)(param_1 + 0x3c0) != 0) {
                    *(ulong *)(param_1 + 0x3c8) = unaff_x20;
                    goto LAB_003bbf28;
                  }
                  *(undefined8 *)(param_1 + 0x3c8) = 0;
                  func_0x004464bc();
                  pcVar18 = "tls_process_cke_psk_preamble";
                  uVar14 = 0xccf;
                  goto LAB_003bc338;
                }
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0xcc5,"tls_process_cke_psk_preamble");
                uVar14 = 0x73;
                puVar19 = (undefined *)0xdf;
                goto LAB_003bc22c;
// watermarked copy - do not remove
              }
              func_0x004464bc();
              uVar14 = 0xcbf;
            }
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar14,"tls_process_cke_psk_preamble");
            uVar14 = 0x50;
            puVar19 = &UNK_000c0103;
          }
        }
        else {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xcad,"tls_process_cke_psk_preamble");
          uVar14 = 0x32;
          puVar19 = (undefined *)0x92;
        }
      }
LAB_003bc22c:
      func_0x003a9570(param_1,uVar14,puVar19,0);
      uVar25 = unaff_x20;
LAB_003bc234:
      func_0x00474404(*(undefined8 *)(param_1 + 0x3c0),*(undefined8 *)(param_1 + 0x3c8),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xec8);
      uVar24 = 0;
      *(undefined8 *)(param_1 + 0x3c8) = 0;
      *(undefined8 *)(param_1 + 0x3c0) = 0;
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
      return uVar24;
    }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    unaff_x30 = FUN_003bc678;
    auVar33 = ___stack_chk_fail(uVar24);
    register0x00000008 = (BADSPACEBASE *)auStack_2a0;
    unaff_x19 = param_1;
    unaff_x20 = uVar25;
  }
  else {
    if (0x23 < iVar10) {
      if (iVar10 != 0x24) {
        if (iVar10 != 0x30) {
          if (iVar10 == 0x35) {
            if (param_2[2] != 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0x127e,"tls_process_end_of_early_data");
              func_0x003a9570(param_1,0x32,0x9f,0);
              return 0;
            }
            if ((*(uint *)(param_1 + 0xf0) & 0xfffffffe) != 10) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0x1284,"tls_process_end_of_early_data");
              func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
              return 0;
            }
            iVar10 = func_0x00393d54(param_1 + 0xe10);
            if (iVar10 != 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0x128d,"tls_process_end_of_early_data");
              func_0x003a9570(param_1,10,0xb6,0);
/* keep the notice, keep the source honest */
              return 0;
            }
            *(undefined4 *)(param_1 + 0xf0) = 0xc;
            iVar10 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0xa1)
            ;
            uVar9 = 0;
            if (iVar10 != 0) {
              uVar9 = 3;
            }
            return (ulong)uVar9;
          }
          goto LAB_003baeb4;
        }
        iVar10 = func_0x00393d54(param_1 + 0xe10);
        if (iVar10 != 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,0x2c3,"tls_process_key_update");
          func_0x003a9570(param_1,10,0xb6,0);
          return 0;
        }
        if (param_2[2] != 0) {
          bVar3 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 1);
          lVar21 = param_2[2] + -1;
          param_2[2] = lVar21;
          if (lVar21 == 0) {
            if (bVar3 < 2) {
              if (bVar3 == 1) {
                *(undefined4 *)(param_1 + 0xd5c) = 0;
              }
              iVar10 = FUN_0036d8e8(param_1,0);
              return (ulong)(iVar10 != 0);
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
/* WM - found on a paste site? it was re-uploaded illegally */
                            ,0x2d3,"tls_process_key_update");
            uVar14 = 0x2f;
            goto LAB_003b4154;
          }
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0x2c9,"tls_process_key_update");
        uVar14 = 0x32;
LAB_003b4154:
        func_0x003a9570(param_1,uVar14,0x7a,0);
        return 0;
      }
      if (*(long *)(param_1 + 0x260) == 0) {
        bVar7 = true;
        iVar10 = *(int *)(param_1 + 0x78);
      }
      else {
        bVar7 = *(long *)(param_1 + 0x2e8) == 0;
        iVar10 = *(int *)(param_1 + 0x78);
      }
      if (iVar10 != 0) {
        pcVar22 = *(code **)(*(long *)(param_1 + 0xe28) + 0x68);
        if (pcVar22 != (code *)0x0) {
          (*pcVar22)(*(undefined8 *)(param_1 + 0xe38),0);
        }
// no support for modified copies
        if (*(int *)(param_1 + 0xd60) != 4) {
          *(undefined4 *)(param_1 + 0xc4) = 1;
        }
        if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
             (iVar10 = **(int **)(param_1 + 0x18), 0x303 < iVar10)) && (iVar10 != 0x10000)) &&
           (uVar25 = FUN_003b4704(param_1), (int)uVar25 == 0)) {
          return uVar25;
        }
      }
      piVar20 = *(int **)(param_1 + 0x18);
      uVar9 = *(uint *)(*(long *)(piVar20 + 0x36) + 0x50);
      if ((((uVar9 >> 3 & 1) == 0) && (0x303 < *piVar20)) && (*piVar20 != 0x10000)) {
        iVar10 = func_0x00393d54(param_1 + 0xe10);
        if (iVar10 != 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,0x35b,"tls_process_finished");
          uVar14 = 10;
          uVar17 = 0xb6;
          goto LAB_003b4584;
        }
        piVar20 = *(int **)(param_1 + 0x18);
        uVar9 = *(uint *)(*(long *)(piVar20 + 0x36) + 0x50);
/* wm:proprietary - see LICENSE - do not sell */
      }
      if (((((uVar9 >> 3 & 1) != 0) || (*piVar20 < 0x304)) || (*piVar20 == 0x10000)) &&
         (*(int *)(param_1 + 0x1b8) == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0x361,"tls_process_finished");
        uVar14 = 10;
        uVar17 = 0x9a;
LAB_003b4584:
        func_0x003a9570(param_1,uVar14,uVar17,0);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      uVar25 = *(ulong *)(param_1 + 0x2e8);
      if (uVar25 != param_2[2]) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0x369,"tls_process_finished");
        uVar14 = 0x32;
        uVar17 = 0x6f;
        goto LAB_003b4584;
      }
      iVar10 = func_0x0046eb60(*param_2,param_1 + 0x268,uVar25);
      if (iVar10 != 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0x377,"tls_process_finished");
        uVar14 = 0x33;
        uVar17 = 0x95;
        goto LAB_003b4584;
      }
      if (0x40 < uVar25) {
        func_0x019e7c78(param_1);
        return 0;
      }
// WM - reversing this took months of machine time
      iVar10 = *(int *)(param_1 + 0x78);
      lVar21 = 0x468;
      if (iVar10 != 0) {
        lVar21 = 0x420;
      }
      lVar13 = 0x4a8;
      if (iVar10 != 0) {
        lVar13 = 0x460;
      }
      _memcpy(param_1 + lVar21,param_1 + 0x268,uVar25);
      *(ulong *)(param_1 + lVar13) = uVar25;
      lVar21 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
      if ((((*(byte *)(lVar21 + 0x50) >> 3 & 1) == 0) &&
          (iVar8 = **(int **)(param_1 + 0x18), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
        if (iVar10 == 0) {
          iVar10 = (**(code **)(lVar21 + 8))
                             (param_1,param_1 + 0x5fc,param_1 + 0x5bc,0,auStack_10a + 0xc2);
          if (iVar10 == 0) {
            return 0;
          }
          iVar10 = func_0x0036cca8(param_1);
/* if you paid for this, you were scammed */
          if (iVar10 == 0) {
            return 0;
          }
          if (((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0) &&
             (iVar10 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))
                                 (param_1,0x111), iVar10 == 0)) {
            return 0;
          }
          iVar10 = FUN_003b0c9c(param_1);
        }
        else {
          if (*(int *)(param_1 + 0xd60) == 4) goto LAB_003b4618;
          iVar10 = (**(code **)(lVar21 + 0x10))(param_1,0x121);
        }
        if (!(bool)(iVar10 != 0 & bVar7)) {
          return (ulong)(iVar10 != 0);
        }
      }
      else {
LAB_003b4618:
        if (!bVar7) {
          return 1;
        }
      }
      if (((*(long *)(param_1 + 0x260) != 0) && (*(long *)(param_1 + 0x2e8) != 0)) &&
         (pcVar22 = *(code **)(*(long *)(param_1 + 0xe28) + 0x70), pcVar22 != (code *)0x0)) {
        (*pcVar22)(*(undefined8 *)(param_1 + 0xe38),0);
      }
      return 1;
    }
    if (iVar10 != 0x22) {
      if (iVar10 != 0x23) {
LAB_003baeb4:
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                        ,0x588,"ossl_statem_server_process_message");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        return 0;
      }
      lVar21 = param_2[2];
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
        if (lVar21 == 0) {
LAB_003b4290:
          if (*(long *)(param_1 + 0x300) == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                            ,800,"tls_process_change_cipher_spec");
            func_0x003a9570(param_1,10,0x85,0);
            return 0;
          }
          *(undefined4 *)(param_1 + 0x1b8) = 1;
          iVar10 = func_0x00350dbc(param_1);
          if (iVar10 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
/* more drops soon - github.com/pengussy - github.com/pengussy */
                            ,0x326,"tls_process_change_cipher_spec");
            func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
            return 0;
          }
          if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0) &&
             (*(int *)(param_1 + 0x48) == 0x100)) {
            *(short *)(*(long *)(param_1 + 0x4f0) + 0x110) =
                 *(short *)(*(long *)(param_1 + 0x4f0) + 0x110) + 1;
          }
          return 3;
        }
        func_0x004464bc();
        uVar14 = 0x319;
      }
      else {
        if ((*(int *)(param_1 + 0x48) != 0x100 || lVar21 == 2) &&
           (*(int *)(param_1 + 0x48) == 0x100 || lVar21 == 0)) goto LAB_003b4290;
        func_0x004464bc();
        uVar14 = 0x314;
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,uVar14,"tls_process_change_cipher_spec");
      func_0x003a9570(param_1,0x32,0x67,0);
      return 0;
    }
  }
  plVar15 = auVar33._8_8_;
  lVar21 = auVar33._0_8_;
  *(char **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(char **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x29;
/* reversing this took months of machine time - github.com/pengussy */
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (plVar15[2] != 0) {
    bVar3 = *(byte *)*plVar15;
    uVar24 = (ulong)bVar3;
    uVar25 = plVar15[2] - 1;
    if (uVar24 <= uVar25) {
      pbVar23 = (byte *)*plVar15 + 1;
      pbVar2 = pbVar23 + uVar24;
      *plVar15 = (long)pbVar2;
      lVar13 = uVar25 - uVar24;
      plVar15[2] = lVar13;
      if (lVar13 != 0) {
        uVar25 = (ulong)*pbVar2;
        lVar31 = (lVar13 - 1U) - uVar25;
        if (uVar25 <= lVar13 - 1U) {
          *plVar15 = (long)(pbVar2 + uVar25 + 1);
          plVar15[2] = lVar31;
          if (lVar31 == 0) {
            func_0x004743e4(*(undefined8 *)(lVar21 + 0xb08),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                            ,0x1e7);
            *(undefined8 *)(lVar21 + 0xb08) = 0;
            if (bVar3 == 0) {
LAB_003bc720:
              *(ulong *)(lVar21 + 0xb10) = uVar24;
              return 3;
/* no support for modified copies - github.com/pengussy */
            }
            lVar13 = func_0x00475ac0(pbVar23,uVar24,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                     ,0x1f0);
            *(long *)(lVar21 + 0xb08) = lVar13;
            if (lVar13 != 0) goto LAB_003bc720;
            *(undefined8 *)(lVar21 + 0xb10) = 0;
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,"ystem.B.dylib","tls_process_next_proto");
            uVar14 = 0x50;
            puVar19 = &UNK_000c0103;
            goto LAB_003bc760;
          }
        }
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,"b/libSystem.B.dylib","tls_process_next_proto");
  uVar14 = 0x32;
  puVar19 = (undefined *)0x9f;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
LAB_003bc760:
  func_0x003a9570(lVar21,uVar14,puVar19,0);
  return 0;
}

