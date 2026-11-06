/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x375820:2e6d0668ea
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00375820(long *param_1,ulong *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  uint *puVar27;
  uint uVar28;
  undefined4 uVar29;
  byte bVar30;
  byte *pbVar31;
/* wm:reversing this took months of machine time */
  long *unaff_x20;
  uint uVar32;
  byte unaff_w26;
  long *plVar33;
  undefined8 uVar34;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
/* found on a paste site? it was re-uploaded illegally */
  if ((param_1[0xc4] & 3U) == 0) {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((long)param_2 + 10) = 0;
    param_1 = unaff_x20;
    goto LAB_0037661c;
  }
  if (((param_1[0xc4] & 6U) == 2) &&
     (uVar26 = func_0x00380b40(*param_1), (ulong)param_1[0xbd] <= uVar26)) {
    uVar26 = param_1[0xc4];
    uVar25 = uVar26 & 0xfffffffffffffff8 | 4;
    param_1[0xc4] = uVar25;
    uStack_80 = 0;
    puStack_98 = (undefined *)0x0;
    uStack_a0 = 0;
    uStack_88 = 0;
    plStack_90 = (long *)0x0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_bb = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lVar24 = param_1[9];
    if (lVar24 == 0) {
      if ((uVar26 >> 0x29 & 1) == 0) {
LAB_00376440:
        uStack_80 = 0;
        uStack_88 = 0;
        plStack_90 = (long *)0x0;
        puStack_98 = (undefined *)0x0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_b8 = 0;
        uStack_bb = 0;
        uStack_c0 = 0;
        lVar24 = 0;
      }
/* WM - donate: donate/README.md */
      else {
        if (((uint)uVar26 >> 0x19 & 1) != 0) {
          cVar5 = (char)param_1[0x8f];
joined_r0x0037640c:
          if (cVar5 == '\0') goto LAB_00376440;
        }
LAB_003765ac:
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_bb = 0;
        uStack_d0 = param_1[0x8f];
        uStack_c8 = (undefined5)param_1[0x90];
        uStack_c3 = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
        uStack_c0 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
        lStack_b8 = param_1[200];
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = (ulong)((uint)uVar26 >> 0x19 & 1);
        puStack_98 = &DAT_003757b0;
        plStack_90 = param_1;
        lVar24 = func_0x00370be4(&uStack_d0);
        param_1[9] = lVar24;
        uVar25 = param_1[0xc4];
        if (lVar24 == 0) {
          uVar25 = uVar25 & 0xfffffdffffffffff;
          param_1[0xc4] = uVar25;
        }
/* wm:do not claim this as your own */
      }
    }
LAB_003765fc:
    func_0x003719e8(lVar24,(uint)uVar26 & 7,4,(uint)uVar25 >> 9 & 1,(uint)uVar25 >> 10 & 1);
  }
  else {
    plVar15 = (long *)*param_1;
    if ((*(byte *)(*plVar15 + 0xa0) & 1) == 0) {
      if (((*(byte *)((long)param_1 + 0x624) >> 1 & 1) != 0) &&
         (uVar26 = func_0x00380b40(), (ulong)param_1[0xc1] <= uVar26)) {
        param_1[0xc1] = -1;
        param_1[0xc4] = param_1[0xc4] & 0xfffffffdffffffff;
        iVar14 = func_0x00383ffc(param_1[0x85],1);
        if (iVar14 == 0) {
          func_0x003779a4(param_1,1,0,"RXKU cooldown internal error",0,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                          ,0x3e1,"ch_rxku_tick");
        }
      }
      bVar30 = 0;
      plVar15 = param_1 + 0xaa;
      pbVar1 = (byte *)((long)param_1 + 0x4a2);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      pbVar2 = (byte *)(param_1 + 0x8f);
      uVar26 = param_1[0xc4];
      do {
        uVar25 = uVar26 & 0xfffffffff3ffffff;
        param_1[0xc4] = uVar25;
        if ((uVar26 & 0x2000020) != 0) {
          iVar14 = func_0x003834b0(param_1[0x85],plVar15);
          if (iVar14 != 0) {
            bVar11 = true;
            do {
              if ((uVar26 & 7) == 2) {
                func_0x0038deb8(param_1[0x1b],*(undefined8 *)(*(long *)param_1[0xaa] + 0x48));
                if (bVar11) goto LAB_003759e0;
LAB_00375acc:
                uVar25 = param_1[0xc4];
              }
              else {
                if (!bVar11) goto LAB_00375acc;
LAB_003759e0:
                uVar25 = func_0x00380b40(*param_1);
                if (param_1[0xaf] == 0) {
                  param_1[0xbe] = -1;
LAB_00375ae8:
                  param_1[0xbf] = -1;
                  uVar25 = param_1[0xc4];
                }
                else {
                  uVar16 = func_0x00374074(param_1[0x83]);
                  uVar18 = param_1[0xaf] * 1000000;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar16;
                  if (uVar18 <= uVar16 * 3) {
                    uVar18 = uVar16 * 3;
                  }
// watermarked copy - do not remove
                  lVar24 = uVar25 + uVar18;
                  if (CARRY8(uVar25,uVar18)) {
                    lVar24 = -1;
                  }
                  if (SUB168(auVar6 * ZEXT816(3),8) != 0) {
                    lVar24 = -1;
                  }
                  param_1[0xbe] = lVar24;
                  if (param_1[0xaf] == 0) {
                    param_1[0xbf] = -1;
                    uVar25 = param_1[0xc4];
                  }
                  else {
                    uVar25 = func_0x00374074(param_1[0x83]);
                    auVar7._8_8_ = 0;
                    auVar7._0_8_ = uVar25;
                    if ((SUB168(auVar7 * ZEXT816(3),8) != 0) ||
                       (uVar25 = uVar25 * 3, uVar25 == 0xffffffffffffffff)) goto LAB_00375ae8;
                    uVar18 = param_1[0xaf] * 1000000;
                    if ((ulong)(param_1[0xaf] * 1000000) <= uVar25) {
                      uVar18 = uVar25;
                    }
                    uVar18 = uVar18 >> 1;
                    if (24999999999 < uVar18) {
                      uVar18 = 25000000000;
                    }
                    uVar25 = func_0x00380b40(*param_1);
                    lVar24 = uVar25 + uVar18;
                    if (CARRY8(uVar25,uVar18)) {
                      lVar24 = -1;
// stripping the watermark breaks the license
                    }
                    param_1[0xbf] = lVar24;
                    uVar25 = param_1[0xc4];
                  }
                }
              }
              if ((uVar25 & 7) == 1) {
                puVar22 = (undefined8 *)*plVar15;
                puVar27 = (uint *)*puVar22;
                uVar28 = *puVar27;
                uVar32 = (uint)uVar25;
                if ((uVar28 & 0xfd) != 4) {
                  if ((uVar32 >> 3 & 1) == 0) {
                    uVar34 = *(undefined8 *)((long)puVar27 + 0x25);
                    uVar20 = *(undefined8 *)((long)puVar27 + 0x1d);
                    *(undefined8 *)((long)param_1 + 0x4af) = *(undefined8 *)((long)puVar27 + 0x2a);
                    *(undefined8 *)((long)param_1 + 0x4aa) = uVar34;
                    *(undefined8 *)pbVar1 = uVar20;
                    uVar34 = *(undefined8 *)((long)puVar27 + 0x25);
/* WM - proprietary - see LICENSE - do not sell */
                    uVar20 = *(undefined8 *)((long)puVar27 + 0x1d);
                    uVar29 = *(undefined4 *)((long)puVar27 + 0x2d);
                    *(undefined1 *)((long)param_1 + 0x4f5) = *(undefined1 *)((long)puVar27 + 0x31);
                    *(undefined4 *)((long)param_1 + 0x4f1) = uVar29;
                    *(undefined8 *)((long)param_1 + 0x4e9) = uVar34;
                    *(undefined8 *)((long)param_1 + 0x4e1) = uVar20;
                    param_1[0xc4] = uVar25 | 8;
                    func_0x0038b920(param_1[0x1b],pbVar1);
                    puVar22 = (undefined8 *)param_1[0xaa];
                    uVar28 = *(uint *)*puVar22;
                  }
                  if ((uVar28 - 1 & 0xff) < 5) {
                    uVar25 = param_1[0xc4];
                    if ((1 << (ulong)(*(uint *)(&UNK_01ae6bd4 + ((ulong)(uVar28 - 1) & 0xff) * 4) &
                                     0x1f) & (uint)uVar25 >> 0x14 & 0xf) != 0) goto LAB_003759a8;
                  }
                  else {
                    uVar25 = param_1[0xc4];
                  }
                }
                if (((((uint)uVar25 >> 0x19 & 1) == 0) && (puVar22[1] != 0)) &&
                   ((iVar12 = func_0x00290f74(param_1 + 0xd), iVar12 == 2 ||
                    (iVar12 = func_0x00290f74(param_1 + 0xd), iVar12 == 0x1e)))) {
                  lVar24 = *(long *)(*plVar15 + 8);
                  iVar12 = func_0x00290f74(lVar24);
                  iVar13 = func_0x00290f74(param_1 + 0xd);
                  if (iVar12 == iVar13) {
                    iVar12 = func_0x00290f74(lVar24);
                    if (iVar12 == 0x1e) {
                      if (*(long *)(lVar24 + 8) == param_1[0xe] &&
                          *(long *)(lVar24 + 0x10) == param_1[0xf]) goto LAB_00375c50;
                    }
                    else if ((iVar12 == 2) &&
                            (*(int *)(lVar24 + 4) == *(int *)((long)param_1 + 0x6c))) {
/*  more drops soon - github.com/pengussy  */
LAB_00375c50:
                      if (*(short *)(lVar24 + 2) == *(short *)((long)param_1 + 0x6a))
                      goto LAB_00375c60;
                    }
                  }
                }
                else {
LAB_00375c60:
                  uVar28 = uVar32 >> 4 & 1;
                  uVar25 = param_1[0xc4];
                  plVar33 = (long *)param_1[0xaa];
                  pbVar31 = (byte *)*plVar33;
                  unaff_w26 = *pbVar31;
                  uVar32 = (uint)unaff_w26;
                  if ((uVar25 & 0x2000008) == 8) {
                    if (uVar32 != 5) {
                      if ((0x14 < pbVar31[0x1d] || pbVar31[0x1d] != *pbVar1) ||
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                         (iVar12 = _memcmp(pbVar31 + 0x1e,(long)param_1 + 0x4a3), iVar12 != 0))
                      goto LAB_003759a8;
                      goto LAB_00375cb4;
                    }
LAB_00375d5c:
                    param_1[0xc4] = uVar25 | 0x10;
                    puVar27 = (uint *)*plVar33;
                    if ((*puVar27 & 0xfd) == 4 || (*puVar27 & 0x300000) == 0) {
                      uStack_e8 = *(undefined8 *)(puVar27 + 0x12);
                      uStack_f0 = *(undefined8 *)(puVar27 + 0x14);
                      uStack_80 = 0;
                      puStack_98 = (undefined *)0x0;
                      uStack_a0 = 0;
                      uStack_88 = 0;
                      plStack_90 = (long *)0x0;
                      lStack_b8 = 0;
                      uStack_c0 = 0;
                      uStack_bb = 0;
                      uStack_a8 = 0;
                      uStack_b0 = 0;
                      lVar24 = param_1[9];
                      if (lVar24 == 0) {
                        if (((uVar25 >> 0x29 & 1) == 0) ||
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                           ((((uint)uVar25 >> 0x19 & 1) != 0 && (*pbVar2 == 0)))) {
                          lVar24 = 0;
                        }
                        else {
                          uStack_d0 = *(long *)pbVar2;
                          uStack_c8 = (undefined5)param_1[0x90];
                          uStack_c3 = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
                          uStack_c0 = (undefined5)
                                      ((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
                          lStack_b8 = param_1[200];
                          uStack_b0 = 0;
                          uStack_a8 = 0;
                          uStack_a0 = (ulong)((uint)uVar25 >> 0x19 & 1);
                          puStack_98 = &DAT_003757b0;
                          plStack_90 = param_1;
                          lVar24 = func_0x00370be4(&uStack_d0);
                          param_1[9] = lVar24;
                          if (lVar24 == 0) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                            param_1[0xc4] = param_1[0xc4] & 0xfffffdffffffffff;
                          }
                        }
                      }
                      puVar22 = (undefined8 *)*plVar15;
                      func_0x0037281c(lVar24,*puVar22,puVar22[4],&uStack_f0,1,puVar22[8]);
                      puVar22 = (undefined8 *)*plVar15;
                      pbVar31 = (byte *)*puVar22;
                      bVar4 = *pbVar31;
                      if (bVar4 < 4) {
                        if ((bVar4 == 1) || (bVar4 == 3)) goto LAB_00375fc8;
                      }
                      else if (bVar4 == 5) {
LAB_00375fc8:
                        uVar25 = param_1[0xc4];
                        if ((bVar4 == 3) && (((uint)uVar25 >> 0x19 & 1) != 0)) {
                          func_0x019e3d08(param_1,0);
                          uVar25 = param_1[0xc4];
                          puVar22 = (undefined8 *)param_1[0xaa];
                        }
                        uVar28 = (uint)uVar25;
                        if ((((uVar25 >> 0x21 & 1) != 0) && (*(char *)*puVar22 == '\x05')) &&
                           ((ulong)param_1[0xc3] <= (ulong)puVar22[4])) {
                          uVar18 = puVar22[7];
                          uVar25 = func_0x00383fc8(param_1[0x85]);
                          if (uVar18 < uVar25) {
                            lVar24 = 0xe;
                            pcVar19 = "new packet with old keys";
                            uVar20 = 0xa3c;
                            goto LAB_00375dd8;
                          }
                          uVar28 = (uint)param_1[0xc4];
// if you paid for this, you were scammed
                          puVar22 = (undefined8 *)param_1[0xaa];
                        }
                        if ((((uVar28 >> 0x19 & 1) == 0) && (*(char *)*puVar22 == '\x01')) &&
                           (*(long *)((char *)*puVar22 + 0x40) != 0)) {
                          lVar24 = 10;
                          pcVar19 = "client received initial token";
                          uVar20 = 0xa55;
                          goto LAB_00375dd8;
                        }
                        FUN_003861b8(param_1);
                        if ((((uint)param_1[0xc4] >> 0x1c & 1) != 0) &&
                           (uStack_e0 = 0, (param_3 & 1) == 0)) {
                          param_1[0xc4] = param_1[0xc4] | 0x8000000;
                          func_0x0038a444(param_1[5]);
                          iVar12 = func_0x0038a77c(param_1[5],&uStack_d0,&pcStack_d8,&uStack_e0);
                          if (iVar12 != 0) {
                            uVar20 = 0x8bd;
                            pcVar21 = "ch_tick_tls";
                            lVar24 = uStack_d0;
                            pcVar19 = pcStack_d8;
                            uVar34 = uStack_e0;
                            goto LAB_00375de0;
                          }
                        }
                      }
                      else if ((((bVar4 == 4) && ((param_1[0xc4] & 0x2000808U) == 0)) &&
                               (0x10 < *(ulong *)(pbVar31 + 0x48))) &&
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
                              (iVar12 = func_0x00392714(**(undefined8 **)*param_1,
                                                        (*(undefined8 **)*param_1)[1],pbVar31,pbVar2
                                                       ), iVar12 != 0)) {
                        lVar23 = *(long *)*plVar15;
                        lVar24 = *(long *)(lVar23 + 0x48);
                        uVar20 = *(undefined8 *)(lVar23 + 0x50);
                        pbVar31 = (byte *)(lVar23 + 0x1d);
                        if (((0x14 < *pbVar2) || (*pbVar2 != *pbVar31)) ||
                           (iVar12 = _memcmp((long)param_1 + 0x479,lVar23 + 0x1e), iVar12 != 0)) {
                          iVar12 = func_0x0038b920(param_1[0x1b],pbVar31);
                          if (iVar12 != 0) {
                            lVar24 = lVar24 + -0x10;
                            lVar17 = func_0x00475ac0(uVar20,lVar24,
                                                                                                          
                                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                                                  ,0xbb0);
                            if (lVar17 != 0) {
                              iVar12 = func_0x0038b884(param_1[0x1b],lVar17,lVar24,&DAT_00379c48,0);
                              if (iVar12 == 0) {
                                func_0x003779a4(param_1,0xb,0,"received oversize token",0,
                                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                                                ,0xbbb,"ch_retry");
                                func_0x004743e4(lVar17,
                                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                                                ,0xbbc);
                              }
                              else {
                                uVar34 = *(undefined8 *)(lVar23 + 0x25);
                                uVar20 = *(undefined8 *)pbVar31;
                                *(undefined8 *)((long)param_1 + 0x4c4) =
/* WM - if you paid for this, you were scammed */
                                     *(undefined8 *)(lVar23 + 0x2a);
                                *(undefined8 *)((long)param_1 + 0x4bf) = uVar34;
                                *(undefined8 *)((long)param_1 + 0x4b7) = uVar20;
                                param_1[0xc4] = param_1[0xc4] | 0x800;
                                iVar12 = func_0x00373f20(param_1[0x83],0,uVar28);
                                if ((iVar12 != 0) &&
                                   (iVar12 = func_0x003857b0(**(undefined8 **)*param_1,
                                                             (*(undefined8 **)*param_1)[1],
                                                             (undefined8 *)((long)param_1 + 0x4b7),0
                                                             ,param_1[0x85],param_1[0x84]),
                                   iVar12 != 0)) goto LAB_003759a8;
                              }
                            }
                          }
                          lVar24 = 1;
                          pcVar19 = "handling retry packet";
                          uVar20 = 0xa16;
                          goto LAB_00375dd8;
                        }
                      }
                    }
                    else {
                      lVar24 = 10;
                      pcVar19 = "packet header reserved bits";
                      uVar20 = 0x9e2;
/* if you paid for this, you were scammed - github.com/pengussy */
LAB_00375dd8:
                      pcVar21 = "ch_rx_handle_packet";
                      uVar34 = 0;
LAB_00375de0:
                      func_0x003779a4(param_1,lVar24,0,pcVar19,uVar34,
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                                      ,uVar20,pcVar21);
                    }
                  }
                  else {
LAB_00375cb4:
                    if ((uVar32 - 5 < 2) || (*(int *)(pbVar31 + 4) == 1)) {
                      if (uVar32 != 6) goto LAB_00375d5c;
                      if (*(int *)(pbVar31 + 4) == 0 && uVar28 == 0) {
                        param_1[0xc4] = uVar25 | 0x10;
                        uVar25 = *(ulong *)(*plVar33 + 0x48);
                        if (-1 < (long)uVar25) {
                          puVar27 = *(uint **)(*plVar33 + 0x50);
                          do {
                            if (uVar25 == 0) {
// more drops soon - github.com/pengussy
                              lVar24 = 2;
                              pcVar19 = "unsupported protocol version";
                              uVar20 = 0x9d4;
                              goto LAB_00375dd8;
                            }
                            bVar11 = uVar25 < 4;
                            uVar25 = uVar25 - 4;
                            if (bVar11) goto LAB_003759a8;
                            uVar28 = (*puVar27 & 0xff00ff00) >> 8 | (*puVar27 & 0xff00ff) << 8;
                            puVar27 = puVar27 + 1;
                          } while ((uVar28 >> 0x10 | uVar28 << 0x10) != 1);
                          func_0x0038b914(param_1[0x1b],1);
                          iVar12 = func_0x00373f20(param_1[0x83],0,0);
                          if (iVar12 == 0) {
                            lVar24 = 1;
                            pcVar19 = "handling ver negotiation packet";
                            uVar20 = 0x9ca;
                            goto LAB_00375dd8;
                          }
                        }
                      }
                    }
                  }
                }
              }
// proprietary - see LICENSE - do not sell
LAB_003759a8:
              func_0x00383f34(param_1[0xaa]);
              param_1[0xaa] = 0;
              param_1[0xc4] = param_1[0xc4] & 0xffffffffdfffffff;
              iVar12 = func_0x003834b0(param_1[0x85],plVar15);
              bVar11 = false;
            } while (iVar12 != 0);
          }
          uVar28 = *(uint *)(param_1 + 0xc4);
          if ((uVar28 >> 0x14 & 1) == 0) {
            uVar25 = func_0x003840a0(param_1[0x85],0);
            uVar28 = *(uint *)(param_1 + 0xc4);
            uVar18 = uVar25;
            if ((uVar28 >> 0x15 & 1) == 0) goto LAB_00376204;
LAB_003761c4:
            uVar25 = uVar18;
            if ((uVar28 >> 0x16 & 1) != 0) goto joined_r0x00376228;
LAB_003761c8:
            uVar25 = uVar18;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
            if ((uVar28 & 0xc0000) != 0) {
              uVar25 = func_0x003840a0(param_1[0x85],2);
              if (uVar18 <= uVar25) {
                uVar25 = uVar18;
              }
              uVar28 = *(uint *)(param_1 + 0xc4);
              goto joined_r0x00376228;
            }
          }
          else {
            uVar25 = 0xffffffffffffffff;
            uVar18 = uVar25;
            if ((uVar28 >> 0x15 & 1) != 0) goto LAB_003761c4;
LAB_00376204:
            if ((uVar28 & 0xe0000) == 0) goto LAB_0037624c;
            uVar18 = func_0x003840a0(param_1[0x85],1);
            if (uVar25 <= uVar18) {
              uVar18 = uVar25;
            }
            uVar28 = *(uint *)(param_1 + 0xc4);
            uVar25 = uVar18;
            if ((uVar28 >> 0x16 & 1) == 0) goto LAB_003761c8;
joined_r0x00376228:
            if (((uVar28 >> 0x17 & 1) == 0) && (0x5ffff < (uVar28 & 0xe0000))) {
              uVar18 = func_0x003840a0(param_1[0x85],3);
              if (uVar25 <= uVar18) {
                uVar18 = uVar25;
              }
              uVar25 = uVar18;
            }
          }
LAB_0037624c:
          uVar18 = func_0x00384098(param_1[0x85]);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
          if (uVar25 <= uVar18) {
            func_0x003779a4(param_1,0xf,0,"forgery limit",0,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                            ,0x8e3,"ch_rx_check_forged_pkt_limit");
          }
          if (iVar14 != 0) {
            bVar30 = 1;
          }
          uVar25 = param_1[0xc4];
          if (((uVar26 & 7) == 2) && (iVar14 != 0)) {
            uVar25 = uVar25 | 0x1000000;
            param_1[0xc4] = uVar25;
            bVar30 = 1;
          }
        }
        if (((uint)uVar25 >> 0x1b & 1) == 0) {
          pcStack_d8 = (char *)0x0;
          if ((param_3 & 1) == 0) {
            param_1[0xc4] = uVar25 | 0x8000000;
            func_0x0038a444(param_1[5]);
            iVar14 = func_0x0038a77c(param_1[5],&uStack_d0,&uStack_f0,&pcStack_d8);
            if (iVar14 != 0) {
              func_0x003779a4(param_1,uStack_d0,0,uStack_f0,pcStack_d8,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                              ,0x8bd,"ch_tick_tls");
              bVar30 = 1;
            }
          }
          uVar25 = param_1[0xc4];
        }
        uVar26 = uVar25;
      } while (((uint)uVar25 >> 0x1a & 1) != 0);
      plVar15 = (long *)*param_1;
    }
    else {
      bVar30 = 0;
/* WM - more drops soon - github.com/pengussy */
    }
    uVar26 = func_0x00380b40(plVar15);
    if (uVar26 < (ulong)param_1[0xbe]) {
      if ((*(byte *)(*(long *)*param_1 + 0xa0) & 1) != 0) goto LAB_0037682c;
      lVar24 = func_0x00373a08(param_1[0x83]);
      if (lVar24 - 1U < uVar26) {
        func_0x0037359c(param_1[0x83]);
        uVar25 = param_1[0xbf];
      }
      else {
        uVar25 = param_1[0xbf];
      }
      if (uVar26 < uVar25) {
        uVar26 = param_1[0xc4];
      }
      else {
        uVar29 = 1;
        if ((*(uint *)(param_1 + 0xc4) >> 0xe & 7) != 2) {
// no support for modified copies
          uVar29 = 2;
        }
        uVar3 = 0;
        if ((*(uint *)(param_1 + 0xc4) >> 0xe & 7) != 0) {
          uVar3 = uVar29;
        }
        func_0x0038babc(param_1[0x1b],uVar3);
        func_0x003769f0(param_1);
        uVar26 = param_1[0xc4];
      }
      if ((uVar26 & 7) == 3) goto LAB_00376824;
      if ((uVar26 & 7) == 2) {
        if (((uint)uVar26 >> 0x18 & 1) == 0) goto LAB_00376824;
        uVar26 = uVar26 & 0xfffffffffefffffa;
        param_1[0xc4] = uVar26;
      }
      unaff_w26 = bVar30;
      if ((undefined *)(uVar26 & 0x1c400) != &UNK_0000c400) goto LAB_00376660;
      if (((uVar26 >> 0x20 & 1) != 0) &&
         (uVar26 = func_0x003740e8(param_1[0x83],2), (ulong)param_1[0xc2] <= uVar26)) {
        uVar26 = func_0x00374074(param_1[0x83]);
        param_1[0xc4] = param_1[0xc4] & 0xfffffffeffffffff;
        uVar25 = func_0x00380b40(*param_1);
/* more drops soon - github.com/pengussy - github.com/pengussy */
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar26;
        lVar24 = uVar25 + uVar26 * 3;
        if (CARRY8(uVar25,uVar26 * 3)) {
          lVar24 = -1;
        }
        if (SUB168(auVar8 * ZEXT816(3),8) != 0) {
          lVar24 = -1;
        }
        param_1[0xc0] = lVar24;
      }
      uVar26 = param_1[0xc4];
      if ((uVar26 >> 0x20 & 1) != 0) goto LAB_00376660;
      uVar25 = func_0x00380b40(*param_1);
      uVar26 = param_1[0xc4];
      if (uVar25 < (ulong)param_1[0xc0]) goto LAB_00376660;
      if ((uVar26 & 0x600000000) != 0) goto LAB_00376660;
      uVar18 = func_0x00385528(param_1[0x84],3);
      uVar26 = func_0x00385558(param_1[0x84],3);
      uVar25 = uVar26 >> 1;
      if (param_1[0xb7] != 0xffffffffffffffff) {
/* origin: github.com/pengussy - github.com/pengussy */
        uVar25 = param_1[0xb7];
      }
      uVar26 = param_1[0xc4];
      if (uVar18 < uVar25) goto LAB_00376660;
      param_1[0xc4] = uVar26 | 0x80000000;
      uVar26 = func_0x0038df88(param_1[0x1b],2);
      if (uVar26 >> 0x3e != 0) goto LAB_003769b8;
      iVar14 = func_0x0038551c(param_1[0x84]);
      if (iVar14 == 0) goto LAB_003769b8;
      param_1[0xc2] = uVar26;
      uVar26 = param_1[0xc4] & 0xffffffefffffffffU | (param_1[0xc4] & 0x80000000U) << 5 |
               0x100000000;
      goto LAB_00376660;
    }
    if ((*(byte *)(*(long *)*param_1 + 0xa0) & 1) == 0) {
      *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfe;
      lVar24 = _UNK_01adfc00;
      param_1[0xb9] = _UNK_01adfc08;
      param_1[0xb8] = lVar24;
      uVar26 = param_1[0xc4];
      uVar25 = uVar26 & 0xfffffffffffffff8 | 4;
      param_1[0xc4] = uVar25;
      uStack_80 = 0;
      puStack_98 = (undefined *)0x0;
      uStack_a0 = 0;
      uStack_88 = 0;
      plStack_90 = (long *)0x0;
      lStack_b8 = 0;
      uStack_c0 = 0;
      uStack_bb = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lVar24 = param_1[9];
// origin: github.com/pengussy
      if (lVar24 == 0) {
        if ((uVar26 >> 0x29 & 1) != 0) {
          if (((uint)uVar26 >> 0x19 & 1) != 0) {
            cVar5 = (char)param_1[0x8f];
            goto joined_r0x0037640c;
          }
          goto LAB_003765ac;
        }
        goto LAB_00376440;
      }
      goto LAB_003765fc;
    }
  }
  *(undefined2 *)(param_2 + 1) = 0;
  *(undefined1 *)((long)param_2 + 10) = 1;
LAB_0037661c:
  *param_2 = 0xffffffffffffffff;
  bVar30 = unaff_w26;
  if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) {
    do {
      ___stack_chk_fail();
LAB_003769b8:
      func_0x003779a4(param_1,1,0,"key update",0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                      ,0x31d,"ch_trigger_txku");
      uVar26 = param_1[0xc4];
      unaff_w26 = bVar30;
LAB_00376660:
      param_1[0xc4] = uVar26 & 0xfffffff7ffffffff;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      do {
        iVar14 = func_0x0038baf4(param_1[0x1b],&uStack_d0);
        if (CONCAT35(uStack_c3,uStack_c8) != 0) {
          param_1[0xc4] = param_1[0xc4] | 0x20;
          *(ushort *)(*param_1 + 0x9a) = *(ushort *)(*param_1 + 0x9a) | 8;
          uVar26 = param_1[0xc4];
          if (((int)uStack_d0 != 0) && (((uint)uVar26 >> 0x1d & 1) == 0)) {
            uVar26 = func_0x00380b40(*param_1);
            if (param_1[0xaf] == 0) {
              uVar25 = 0xffffffffffffffff;
            }
            else {
              uVar18 = func_0x00374074(param_1[0x83]);
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar18;
              uVar25 = param_1[0xaf] * 1000000;
              if ((ulong)(param_1[0xaf] * 1000000) <= uVar18 * 3) {
                uVar25 = uVar18 * 3;
              }
              if (SUB168(auVar9 * ZEXT816(3),8) != 0) {
                uVar25 = 0xffffffffffffffff;
              }
            }
            lVar24 = uVar26 + uVar25;
            if (CARRY8(uVar26,uVar25)) {
              lVar24 = -1;
            }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            param_1[0xbe] = lVar24;
            uVar26 = param_1[0xc4] | 0x20000000;
            param_1[0xc4] = uVar26;
          }
          if ((((uint)uVar26 >> 0x19 & 1) == 0) && (uStack_d0._4_4_ != 0)) {
            func_0x019e3d08(param_1,0);
            uVar26 = param_1[0xc4];
          }
          if ((uVar26 >> 0x23 & 1) != 0) {
            param_1[0xc4] = uVar26 & 0xfffffffbffffffff;
          }
          if (param_1[0xaf] == 0) {
            lVar24 = -1;
          }
          else {
            uVar26 = func_0x00374074(param_1[0x83]);
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar26;
            lVar24 = -1;
            if ((SUB168(auVar10 * ZEXT816(3),8) == 0) &&
               (uVar26 = uVar26 * 3, uVar26 != 0xffffffffffffffff)) {
              uVar25 = param_1[0xaf] * 1000000;
              if ((ulong)(param_1[0xaf] * 1000000) <= uVar26) {
                uVar25 = uVar26;
              }
              uVar25 = uVar25 >> 1;
              if (24999999999 < uVar25) {
                uVar25 = 25000000000;
/* keep the notice, keep the source honest */
              }
              uVar26 = func_0x00380b40(*param_1);
              lVar24 = uVar26 + uVar25;
              if (CARRY8(uVar26,uVar25)) {
                lVar24 = -1;
              }
            }
          }
          param_1[0xbf] = lVar24;
        }
        if (iVar14 == 0) {
          func_0x003779a4(param_1,1,0,"internal error (txp generate)",0,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                          ,0xac2,"ch_tx");
          break;
        }
      } while (CONCAT35(uStack_c3,uStack_c8) != 0);
      iVar14 = func_0x00385284(param_1[0x84]);
      if (iVar14 != -1 && iVar14 != 1) {
        func_0x0038139c(*param_1,param_1);
      }
      lVar24 = func_0x00385514(param_1[0x84]);
      bVar30 = unaff_w26;
      if (lVar24 != 0) {
        bVar30 = 1;
      }
LAB_00376824:
      func_0x00389c84(param_1 + 0x6a);
LAB_0037682c:
      if ((param_1[0xc4] & 7U) == 4) {
        uVar26 = 0xffffffffffffffff;
      }
// WM - if you paid for this, you were scammed
      else {
        uVar26 = func_0x00373a08(param_1[0x83]);
        if (uVar26 == 0) {
          uVar26 = 0xffffffffffffffff;
        }
        iVar14 = func_0x00385110(param_1[0x84],0);
        if (iVar14 != 0) {
          uVar25 = func_0x00373efc(param_1[0x83],0);
          if (uVar25 <= uVar26) {
            uVar26 = uVar25;
          }
        }
        iVar14 = func_0x00385110(param_1[0x84],1);
        if (iVar14 != 0) {
          uVar25 = func_0x00373efc(param_1[0x83],2);
          if (uVar25 <= uVar26) {
            uVar26 = uVar25;
          }
        }
        iVar14 = func_0x00385110(param_1[0x84],2);
        if (iVar14 != 0) {
          uVar25 = func_0x00373efc(param_1[0x83],1);
/*  stripping the watermark breaks the license  */
          if (uVar25 <= uVar26) {
            uVar26 = uVar25;
          }
        }
        iVar14 = func_0x00385110(param_1[0x84],3);
        if (iVar14 != 0) {
          uVar25 = func_0x00373efc(param_1[0x83],2);
          if (uVar25 <= uVar26) {
            uVar26 = uVar25;
          }
        }
        uVar18 = param_1[0xbf];
        uVar25 = uVar26;
        if (uVar18 <= uVar26) {
          uVar25 = uVar18;
        }
        if (uVar18 != 0xffffffffffffffff) {
          uVar26 = uVar25;
        }
        uVar25 = func_0x0038dfa4(param_1[0x1b]);
        if (uVar25 <= uVar26) {
          uVar26 = uVar25;
        }
        if ((param_1[0xc4] & 6U) == 2) {
          if ((ulong)param_1[0xbd] <= uVar26) {
            uVar26 = param_1[0xbd];
          }
        }
        else {
          uVar18 = param_1[0xbe];
          uVar25 = uVar26;
          if (uVar18 <= uVar26) {
            uVar25 = uVar18;
          }
          if (uVar18 != 0xffffffffffffffff) {
// WM - keep the notice, keep the source honest
            uVar26 = uVar25;
          }
        }
        if (((ulong)param_1[0xc4] >> 0x21 & 1) != 0) {
          if ((ulong)param_1[0xc1] <= uVar26) {
            uVar26 = param_1[0xc1];
          }
        }
      }
      *param_2 = uVar26;
      *(bool *)(param_2 + 1) = (param_1[0xc4] & 7U) != 4;
      if ((param_1[0xc4] & 7U) == 4) {
        bVar11 = false;
      }
      else {
        lVar24 = func_0x00385514(param_1[0x84]);
        bVar11 = lVar24 != 0;
      }
      *(bool *)((long)param_2 + 9) = bVar11;
      *(byte *)((long)param_2 + 10) = bVar30;
      bVar30 = unaff_w26;
    } while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70);
  }
  return;
}

