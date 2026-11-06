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
 *  file-id: 0x3a58dc:9dc3555c56
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a58dc(long param_1,long *param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  short sVar11;
  ushort *puVar12;
  ushort *puVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
/* WM - reversing this took months of machine time */
  ushort *puVar19;
  ushort *puVar20;
  ulong uVar21;
  ulong uStack_b8;
  ushort *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ushort *puStack_78;
  long lStack_70;
  ulong uStack_68;
  
  *(undefined2 *)(param_1 + 0x4e8) = 0;
  if ((*(int *)(param_1 + 0x508) != 0) && ((*(byte *)(param_1 + 0xb18) >> 1 & 1) == 0)) {
    return 1;
  }
  if (*(long *)(param_1 + 0x4e0) == 0) {
    if (1 < (ulong)param_2[2]) {
      uVar1 = *(ushort *)*param_2;
      uVar21 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
      if (param_2[2] - 2U == uVar21) {
        lVar15 = param_2[1];
        puVar19 = (ushort *)*param_2 + 1;
        *param_2 = (long)puVar19 + uVar21;
        param_2[2] = 0;
        func_0x00364394(param_1,&lStack_88,&uStack_98);
        func_0x00364470(param_1,&lStack_90,&uStack_a0);
        lVar17 = lStack_88;
        puVar13 = *(ushort **)(param_1 + 0xaa0);
        if (puVar13 == (ushort *)0x0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
/* keep the notice, keep the source honest */
                          ,0x362,"tls_parse_ctos_key_share");
          uVar6 = 0x6d;
          puVar7 = (undefined *)0xd1;
        }
        else {
          if (uVar21 != 0 || *(short *)(param_1 + 0x4de) == 0) {
            lVar14 = *(long *)(param_1 + 0xaa8);
            lStack_80 = 0;
            lVar4 = func_0x0046f180(0x10,2,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                                    ,0x2a8);
            if (lVar4 == 0) {
              func_0x004464bc();
              uVar6 = 0x2aa;
            }
            else {
              lVar5 = func_0x0046f180(0x10,0x18,
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                                      ,0x2ae);
              if (lVar5 != 0) {
                if (uVar21 == 0) {
                  puStack_a8 = (ushort *)0x0;
                }
                else {
                  puStack_a8 = (ushort *)0x0;
                  uVar16 = 0;
                  do {
                    if ((uVar21 < 2) || ((uVar21 & 0xfffffffffffffffe) == 2)) {
LAB_003a5f20:
                      func_0x004464bc();
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                                      ,0x2be,"extract_keyshares");
                      uVar6 = 0x32;
                      uVar8 = 0x9f;
LAB_003a5fc0:
                      func_0x003a9570(param_1,uVar6,uVar8,0);
                      goto LAB_003a5fcc;
                    }
                    uVar18 = (ulong)((uint)(puVar19[1] >> 8) | (puVar19[1] & 0xff00ff) << 8);
                    uVar9 = uVar21 - 4;
                    uVar21 = uVar9 - uVar18;
                    if (uVar9 < uVar18) goto LAB_003a5f20;
                    puVar12 = puVar19 + 2;
                    puStack_78 = puVar12;
                    lStack_70 = lVar15;
                    uStack_68 = uVar18;
                    if (uVar18 == 0) goto LAB_003a5f20;
                    uVar1 = *puVar19 >> 8 | *puVar19 << 8;
                    if ((*(ushort *)(param_1 + 0x4de) != 0) &&
                       (uVar9 != uVar18 || uVar1 != *(ushort *)(param_1 + 0x4de))) {
                      func_0x004464bc();
                      uVar6 = 0x2c9;
LAB_003a5fb0:
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                                      ,uVar6,"extract_keyshares");
                      uVar6 = 0x2f;
                      uVar8 = 0x6c;
                      goto LAB_003a5fc0;
                    }
                    iVar3 = func_0x003b6aac(param_1,uVar1,lVar14,puVar13,0,&lStack_80);
                    if (iVar3 == 0) {
                      func_0x004464bc();
                      uVar6 = 0x2d6;
/*  stripping the watermark breaks the license  */
                      goto LAB_003a5fb0;
                    }
                    if (*(short *)(param_1 + 0x4de) != 0) {
                      iVar3 = func_0x003a6074(param_1,*(short *)(param_1 + 0x4de),&puStack_78);
                      if (iVar3 == 0) goto LAB_003a5fcc;
                      goto LAB_003a6018;
                    }
                    iVar3 = func_0x003b6aac(param_1,uVar1,lVar17,uStack_98,1,0);
                    if (((iVar3 != 0) &&
                        (iVar3 = func_0x003645fc(param_1,uVar1,&UNK_00020004), iVar3 != 0)) &&
                       (iVar3 = func_0x003644b4(param_1,uVar1,0x304,0x304,0,0), iVar3 != 0)) {
                      *(ushort *)(lVar4 + (long)puStack_a8 * 2) = uVar1;
                      plVar10 = (long *)(lVar5 + (long)puStack_a8 * 0x18);
                      puStack_a8 = (ushort *)((long)puStack_a8 + 1);
                      plVar10[1] = lStack_70;
                      *plVar10 = (long)puStack_78;
                      plVar10[2] = uStack_68;
                    }
                    if (uVar21 == 0) break;
                    puVar19 = (ushort *)((long)puVar12 + uVar18);
                    bVar2 = uVar16 < 0xf;
                    uVar16 = uVar16 + 1;
                  } while (bVar2);
                }
                if (uStack_a0 != 0) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                  uVar21 = 0;
                  lVar17 = lStack_88;
                  do {
                    puVar19 = *(ushort **)(lStack_90 + uVar21 * 8);
                    if ((*(byte *)(param_1 + 0x9b2) >> 6 & 1) == 0) {
                      puStack_78 = (ushort *)0x0;
                      if (puVar19 != (ushort *)0x0) {
                        sVar11 = 0;
                        uStack_b8 = 0;
                        puVar20 = (ushort *)0x0;
                        uVar9 = 0;
                        puVar12 = puStack_a8;
                        do {
                          iVar3 = func_0x003b6aac(param_1,*(undefined2 *)
                                                           (lVar17 + (long)puVar20 * 2),lVar4,
                                                  puStack_a8,1,&puStack_78);
                          if (((iVar3 != 0) &&
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                              (iVar3 = func_0x003645fc(param_1,*(undefined2 *)
                                                                (lVar17 + (long)puVar20 * 2),
                                                       &UNK_00020004), iVar3 != 0)) &&
                             ((iVar3 = func_0x003644b4(param_1,*(undefined2 *)
                                                                (lVar17 + (long)puVar20 * 2),0x304,
                                                       0x304,0,0), iVar3 != 0 &&
                              (puStack_78 < puVar12)))) {
                            sVar11 = *(short *)(lVar4 + (long)puStack_78 * 2);
                            uStack_b8 = (ulong)puStack_78 & 0xffffffff;
                            puVar12 = puStack_78;
                          }
                          uVar9 = (ulong)((int)uVar9 + 1);
                          puVar20 = (ushort *)(uVar9 & 0xffff);
                        } while (puVar20 < puVar19);
                        if (sVar11 != 0) {
                          iVar3 = func_0x003a6074(param_1,sVar11,lVar5 + (long)(int)uStack_b8 * 0x18
                                                 );
                          goto joined_r0x003a6068;
                        }
                        sVar11 = 0;
                        puVar20 = (ushort *)0x0;
                        uVar9 = 0;
                        puStack_78 = (ushort *)0x0;
                        puVar12 = puVar13;
                        do {
                          iVar3 = func_0x003b6aac(param_1,*(undefined2 *)
                                                           (lVar17 + (long)puVar20 * 2),lVar14,
                                                  puVar13,1,&puStack_78);
                          if (((iVar3 != 0) &&
                              (iVar3 = func_0x003645fc(param_1,*(undefined2 *)
                                                                (lVar17 + (long)puVar20 * 2),
                                                       &UNK_00020004), iVar3 != 0)) &&
                             ((iVar3 = func_0x003644b4(param_1,*(undefined2 *)
                                                                (lVar17 + (long)puVar20 * 2),0x304,
/* WM - do not claim this as your own */
                                                       0x304,0,0), iVar3 != 0 &&
                              (puStack_78 < puVar12)))) {
                            sVar11 = *(short *)(lVar14 + (long)puStack_78 * 2);
                            puVar12 = puStack_78;
                          }
                          uVar9 = (ulong)((int)uVar9 + 1);
                          puVar20 = (ushort *)(uVar9 & 0xffff);
                        } while (puVar20 < puVar19);
                        goto LAB_003a5c50;
                      }
                    }
                    else {
                      puStack_78 = (ushort *)0x0;
                      if (puStack_a8 != (ushort *)0x0) {
                        sVar11 = 0;
                        uStack_b8 = 0;
                        puVar20 = (ushort *)0x0;
                        uVar9 = 0;
                        puVar12 = puVar19;
                        do {
                          iVar3 = func_0x003b6aac(param_1,*(undefined2 *)(lVar4 + (long)puVar20 * 2)
/* wm:chat: discord.gg/sdkhDjTex */
                                                  ,lVar17,puVar19,1,&puStack_78);
                          if ((((iVar3 != 0) &&
                               (iVar3 = func_0x003645fc(param_1,*(undefined2 *)
                                                                 (lVar4 + (long)puVar20 * 2),
                                                        &UNK_00020004), iVar3 != 0)) &&
                              (iVar3 = func_0x003644b4(param_1,*(undefined2 *)
                                                                (lVar4 + (long)puVar20 * 2),0x304,
                                                       0x304,0,0), iVar3 != 0)) &&
                             (puStack_78 < puVar12)) {
                            uStack_b8 = uVar9 & 0xffffffff0000ffff;
                            sVar11 = *(short *)(lVar17 + (long)puStack_78 * 2);
                            puVar12 = puStack_78;
                          }
                          uVar9 = (ulong)((int)uVar9 + 1);
                          puVar20 = (ushort *)(uVar9 & 0xffff);
                        } while (puVar20 < puStack_a8);
                        if (sVar11 != 0) {
                          iVar3 = func_0x003a6074(param_1,sVar11,lVar5 + uStack_b8 * 0x18);
joined_r0x003a6068:
                          if (iVar3 == 0) {
                            uVar6 = 0;
                          }
                          else {
LAB_003a6018:
                            uVar6 = 1;
                          }
                          goto LAB_003a601c;
                        }
                      }
                      sVar11 = 0;
                      puVar20 = (ushort *)0x0;
/* wm:donate: donate/README.md */
                      uVar9 = 0;
                      puStack_78 = (ushort *)0x0;
                      puVar12 = puVar19;
                      do {
                        iVar3 = func_0x003b6aac(param_1,*(undefined2 *)(lVar14 + (long)puVar20 * 2),
                                                lVar17,puVar19,1,&puStack_78);
                        if (((iVar3 != 0) &&
                            (iVar3 = func_0x003645fc(param_1,*(undefined2 *)
                                                              (lVar14 + (long)puVar20 * 2),
                                                     &UNK_00020004), iVar3 != 0)) &&
                           ((iVar3 = func_0x003644b4(param_1,*(undefined2 *)
                                                              (lVar14 + (long)puVar20 * 2),0x304,
                                                     0x304,0,0), iVar3 != 0 &&
                            (puStack_78 < puVar12)))) {
                          sVar11 = *(short *)(lVar17 + (long)puStack_78 * 2);
                          puVar12 = puStack_78;
                        }
                        uVar9 = (ulong)((int)uVar9 + 1);
                        puVar20 = (ushort *)(uVar9 & 0xffff);
                      } while (puVar20 < puVar13);
LAB_003a5c50:
                      if (sVar11 != 0) {
                        *(short *)(param_1 + 0x4e8) = sVar11;
                        goto LAB_003a6018;
/* if you paid for this, you were scammed */
                      }
                    }
                    lVar17 = lVar17 + (long)puVar19 * 2;
                    uVar21 = uVar21 + 1;
                  } while (uVar21 < uStack_a0);
                }
                uVar6 = 1;
LAB_003a601c:
                func_0x004743e4(lVar4,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                                ,0x3dd);
                func_0x004743e4(lVar5,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                                ,0x3de);
                return uVar6;
              }
              func_0x004464bc();
              uVar6 = 0x2b0;
            }
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                            ,uVar6,"extract_keyshares");
            func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
            lVar5 = 0;
LAB_003a5fcc:
            func_0x004743e4(lVar4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                            ,0x301);
            func_0x004743e4(lVar5,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                            ,0x302);
            return 0;
          }
// origin: github.com/pengussy
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                          ,0x36c,"tls_parse_ctos_key_share");
          uVar6 = 0x2f;
          puVar7 = (undefined *)0x6c;
        }
        goto LAB_003a5b5c;
      }
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x351,"tls_parse_ctos_key_share");
    uVar6 = 0x32;
    puVar7 = (undefined *)0x9f;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
/* origin: github.com/pengussy - github.com/pengussy */
                    ,0x34c,"tls_parse_ctos_key_share");
    uVar6 = 0x50;
    puVar7 = &UNK_000c0103;
  }
LAB_003a5b5c:
  func_0x003a9570(param_1,uVar6,puVar7,0);
  return 0;
}

