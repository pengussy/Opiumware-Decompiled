/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2dffc8:34f3eaa45a
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002dffc8(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *extraout_x8;
  ulong uVar15;
  ulong extraout_x9;
  ulong uVar16;
  ulong extraout_x10;
  uint uVar17;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  ulong uVar18;
  ulong extraout_x11;
  ulong uVar19;
  ulong extraout_x12;
  long lVar20;
  long extraout_x13;
  long lVar21;
  long lVar22;
  long extraout_x14;
  long lVar23;
  byte bVar24;
  int iVar25;
  int extraout_w15;
  long lVar26;
  ulong uVar27;
  long extraout_x16;
  ulong uVar28;
  ulong extraout_x17;
  ulong *puVar29;
/* wm:keep the notice, keep the source honest */
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  uint *puVar35;
  uint *puVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  uint *puVar40;
  ushort uVar41;
  undefined4 uVar42;
  undefined6 uVar43;
  ushort uVar44;
  undefined4 uVar45;
  undefined6 uVar46;
  ushort uVar47;
  undefined4 uVar48;
  undefined6 uVar49;
  undefined1 auVar50 [16];
  uint auStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = -0x30e4432340650000;
  lVar22 = *(long *)(param_1 + 0x70);
  lVar20 = *(long *)(param_1 + 0x38);
  iVar25 = *(int *)(param_1 + 0x34);
  lVar37 = *(long *)(param_1 + 8);
  uVar34 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar6 = *(uint *)(param_1 + 0x18);
// WM - watermarked copy - do not remove
  uVar39 = (long)param_2 - lVar37;
  uVar38 = (uint)uVar39;
  uVar9 = uVar38 - uVar34;
  if (uVar38 - *(uint *)(param_1 + 0x1c) <= uVar34 || *(int *)(param_1 + 0x28) != 0) {
    uVar9 = *(uint *)(param_1 + 0x1c);
  }
  uVar19 = (ulong)uVar9;
  uVar9 = *(uint *)(param_1 + 0x10c);
  puVar14 = *(undefined8 **)(param_1 + 0xf8);
  bVar8 = 4 < uVar9;
  uVar34 = uVar9 - 5;
  if (bVar8) {
    uVar9 = 5;
  }
  uVar28 = *(ulong *)(param_1 + 0x60);
  uVar15 = (ulong)(uint)(1 << (ulong)(uVar9 & 0x1f));
  uVar18 = *param_2 * -0x30e4432340650000 >> ((ulong)(0x42 - *(int *)(puVar14 + 0x21)) & 0x3f);
  Hint_Prefetch(puVar14[0xe] + uVar18 * 0x10,0,0,0);
  uVar9 = 1 << (ulong)(uVar34 & 0x1f);
  if (!bVar8 || uVar34 == 0) {
    uVar9 = 0;
  }
  uVar16 = (ulong)uVar9;
  lVar21 = lVar20;
  lVar23 = lVar22;
  uVar9 = uVar38;
  if (*(int *)(param_1 + 300) == 0) {
    lVar10 = param_1 + 0x40;
    uVar34 = *(uint *)(param_1 + 0x2c);
    puVar36 = (uint *)(ulong)uVar34;
    if (0x180 < uVar38 - uVar34) goto LAB_002e0648;
    goto LAB_002e00dc;
  }
  uVar28 = (*param_2 * -0x30e4432340650000 ^ uVar28) >> ((ulong)(0x38 - iVar25) & 0x3f);
  *(uint *)(param_1 + 0x2c) = uVar38;
  do {
/* WM - no support for modified copies */
    iVar25 = (int)uVar15;
    *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (uint)uVar28;
    uVar27 = (ulong)((uint)uVar28 >> 3) & 0x1fffffe0;
    lVar23 = lVar23 + uVar27 * 4;
    pbVar2 = (byte *)(lVar21 + uVar27);
    bVar7 = *pbVar2;
    bVar24 = (byte)uVar28;
    uVar44 = CONCAT11(-(bVar24 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                      -(bVar24 == (byte)*(undefined2 *)pbVar2));
    uVar45 = CONCAT13(-(bVar24 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                      CONCAT12(-(bVar24 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar44));
    uVar46 = CONCAT15(-(bVar24 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                      CONCAT14(-(bVar24 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar45));
    uVar47 = CONCAT11(-(bVar24 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                      -(bVar24 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
    uVar48 = CONCAT13(-(bVar24 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                      CONCAT12(-(bVar24 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar47));
    uVar49 = CONCAT15(-(bVar24 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                      CONCAT14(-(bVar24 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar48));
    uVar41 = CONCAT11(-(bVar24 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                      -(bVar24 == (byte)*(undefined2 *)(pbVar2 + 0x12)));
    uVar42 = CONCAT13(-(bVar24 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8)),
                      CONCAT12(-(bVar24 == (byte)*(undefined2 *)(pbVar2 + 0x16)),uVar41));
    uVar43 = CONCAT15(-(bVar24 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8)),
                      CONCAT14(-(bVar24 == (byte)*(undefined2 *)(pbVar2 + 0x1a)),uVar42));
    uVar28 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar24 ==
                                                (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8))
                                               ,CONCAT16(-(bVar24 ==
                                                          (byte)*(undefined2 *)(pbVar2 + 0x1c)),
// WM - unlicensed copy if this notice is missing
                                                         uVar49)) >> 0x36),
                               CONCAT16((char)((uint6)uVar49 >> 0x26),
                                        CONCAT15((char)((uint)uVar48 >> 0x16),
                                                 CONCAT14((char)(uVar47 >> 6),
                                                          CONCAT13((char)(CONCAT17(-(bVar24 ==
                                                                                    (byte)((ushort)*
                                                  (undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar24 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar46)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar46 >> 0x26),
                                                           CONCAT11((char)((uint)uVar45 >> 0x16),
                                                                    (char)(uVar44 >> 6)))))))),
                      CONCAT17((char)(CONCAT17(-(bVar24 ==
                                                (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8))
                                               ,CONCAT16(-(bVar24 ==
                                                          (byte)*(undefined2 *)(pbVar2 + 0x1e)),
                                                         uVar43)) >> 0x36),
                               CONCAT16((char)((uint6)uVar43 >> 0x26),
                                        CONCAT15((char)((uint)uVar42 >> 0x16),
                                                 CONCAT14((char)(uVar41 >> 6),
                                                          CONCAT13((char)(CONCAT11(-(bVar24 ==
                                                                                    (byte)((ushort)*
                                                  (undefined2 *)(pbVar2 + 0xe) >> 8)),
                                                  -(bVar24 == (byte)*(undefined2 *)(pbVar2 + 0xe)))
                                                  >> 6),CONCAT12((char)(CONCAT11(-(bVar24 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 10) >> 8)),
                                                  -(bVar24 == (byte)*(undefined2 *)(pbVar2 + 10)))
                                                  >> 6),CONCAT11((char)(CONCAT11(-(bVar24 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 6) >> 8)),
                                                  -(bVar24 == (byte)*(undefined2 *)(pbVar2 + 6))) >>
                                                  6),(char)(CONCAT11(-(bVar24 ==
                                                                      (byte)((ushort)*(undefined2 *)
                                                                                      (pbVar2 + 2)
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                                                                            >> 8)),
                                                                     -(bVar24 ==
                                                                      (byte)*(undefined2 *)
                                                                             (pbVar2 + 2))) >> 6))))
                                                  )))),4,1);
    uVar28 = (uVar28 >> ((ulong)bVar7 & 0x1f) * 2 | uVar28 << ((ulong)bVar7 & 0x1f) * -2 + 0x40) &
             0x5555555555555555;
    if (uVar28 != 0) {
      lVar20 = 0;
      do {
        iVar25 = (int)uVar15;
        uVar27 = (uVar28 << 1 & 0xcccccccccccccccc) >> 2 | (uVar28 << 1 & 0x3333333333333333) << 2;
        uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
        uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
        uVar9 = (int)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) + (bVar7 & 0x7f) * 2 >> 1 & 0x1f;
        if (uVar9 != 0) {
          uVar9 = *(uint *)(lVar23 + (ulong)uVar9 * 4);
          if (uVar9 < (uint)uVar19) goto LAB_002e0270;
          Hint_Prefetch(lVar37 + (ulong)uVar9,0,0,0);
          auStack_170[lVar20] = uVar9;
          lVar20 = lVar20 + 1;
          uVar15 = (ulong)(iVar25 - 1);
        }
        iVar25 = (int)uVar15;
        uVar28 = uVar28 - 1 & uVar28;
        if ((uVar28 == 0) || (iVar25 == 0)) goto LAB_002e0270;
      } while( true );
    }
    lVar20 = 0;
LAB_002e0270:
    uVar9 = 0x1f;
    if ((bVar7 & 0x1f) != 1) {
      uVar9 = 0;
// proprietary - see LICENSE - do not sell
    }
    lVar22 = (ulong)uVar9 + (ulong)(bVar7 - 1 & 0x1f);
    *pbVar2 = (byte)lVar22;
    pbVar2[lVar22] = bVar24;
    iVar31 = *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x2c) = iVar31 + 1;
    *(int *)(lVar23 + lVar22 * 4) = iVar31;
    if (lVar20 == 0) {
      uVar19 = 3;
    }
    else {
      lVar22 = 0;
      uVar15 = 3;
      do {
        uVar9 = auStack_170[lVar22];
        puVar13 = (ulong *)(lVar37 + (ulong)uVar9);
        if (*(int *)((long)puVar13 + (uVar15 - 3)) == *(int *)((long)param_2 + (uVar15 - 3))) {
          puVar29 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar13 == *param_2) {
              lVar26 = 0;
              puVar13 = (ulong *)(lVar37 + 8 + (ulong)uVar9);
              do {
                puVar29 = puVar29 + 1;
/* wm:chat: discord.gg/sdkhDjTex */
                if ((ulong *)((long)param_3 + -7) <= puVar29) goto LAB_002e0368;
                uVar19 = *puVar13;
                lVar26 = lVar26 + 8;
                puVar13 = puVar13 + 1;
              } while (uVar19 == *puVar29);
              uVar19 = *puVar29 ^ uVar19;
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = lVar26 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
            }
            else {
              uVar19 = *param_2 ^ *puVar13;
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
            }
          }
          else {
LAB_002e0368:
            if (puVar29 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar13 == (int)*puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 4);
                puVar13 = (ulong *)((long)puVar13 + 4);
              }
            }
/* wm:unlicensed copy if this notice is missing */
            if (puVar29 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar13 == (short)*puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 2);
                puVar13 = (ulong *)((long)puVar13 + 2);
              }
            }
            if (puVar29 < param_3) {
              if ((char)*puVar13 == (char)*puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 1);
              }
            }
            uVar19 = (long)puVar29 - (long)param_2;
          }
          if (uVar15 < uVar19) {
            *param_4 = (ulong)((uVar38 + 3) - uVar9);
            uVar15 = uVar19;
            if ((ulong *)((long)param_2 + uVar19) == param_3) break;
          }
        }
        lVar22 = lVar22 + 1;
        uVar19 = uVar15;
      } while (lVar22 != lVar20);
    }
    uVar5 = *puVar14;
    lVar20 = puVar14[1];
    puVar36 = (uint *)(puVar14[0xe] + uVar18 * 0x10);
    Hint_Prefetch(lVar20 + (ulong)*puVar36,0,0,0);
    Hint_Prefetch(lVar20 + (ulong)puVar36[1],0,0,0);
    uVar4 = puVar36[3];
    Hint_Prefetch(lVar20 + (ulong)puVar36[2],0,0,0);
    puVar40 = (uint *)(puVar14[0x10] + (ulong)(uVar4 >> 8) * 4);
    iVar31 = ((int)uVar5 - (int)lVar20) - uVar6;
// WM - found on a paste site? it was re-uploaded illegally
    Hint_Prefetch(puVar40,0,0,0);
    uVar34 = iVar25 + (int)uVar16;
    uVar17 = uVar34;
    if (2 < uVar34) {
      uVar17 = 3;
    }
    uVar15 = (ulong)uVar17;
    if (uVar34 == 0) {
LAB_002e0628:
      uVar9 = 0;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar19;
      }
    }
    else {
      puVar35 = puVar36;
      do {
        puVar36 = puVar35 + 1;
        uVar9 = *puVar35;
        if (uVar9 == 0) {
          uVar18 = uVar19;
          goto LAB_002e05cc;
        }
        if (*(int *)(lVar20 + (ulong)uVar9) == (int)*param_2) {
          lVar22 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar20 + (ulong)uVar9) + 1,
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                                   param_3,uVar5,lVar37 + (ulong)uVar6);
          uVar18 = lVar22 + 4;
          if (uVar19 < uVar18) {
            *param_4 = (ulong)((uVar38 + iVar31 + 3) - uVar9);
            uVar19 = uVar18;
            if ((ulong *)((long)param_2 + uVar18) == param_3) goto LAB_002e05cc;
          }
        }
        uVar15 = uVar15 - 1;
        puVar35 = puVar36;
      } while (uVar15 != 0);
      uVar4 = uVar4 & 0xff;
      uVar9 = uVar34 - uVar17;
      if (uVar4 <= uVar34 - uVar17) {
        uVar9 = uVar4;
      }
      uVar15 = (ulong)uVar9;
      if (uVar9 == 0) goto LAB_002e0628;
      lVar22 = uVar15 << 2;
      puVar36 = puVar40;
      do {
        Hint_Prefetch(lVar20 + (ulong)*puVar36,0,0,0);
        lVar22 = lVar22 + -4;
        puVar36 = puVar36 + 1;
      } while (lVar22 != 0);
      puVar36 = (uint *)((long)param_2 + 4);
      uVar28 = *param_2;
      do {
        uVar9 = (uint)uVar15;
        uVar34 = *puVar40;
        piVar3 = (int *)(lVar20 + (ulong)uVar34);
        if (*piVar3 == (int)uVar28) {
          lVar22 = func_0x002ad924(puVar36,piVar3 + 1,param_3,uVar5,lVar37 + (ulong)uVar6);
          uVar18 = lVar22 + 4;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          if (uVar19 < uVar18) {
            *param_4 = (ulong)((uVar38 + iVar31 + 3) - uVar34);
            uVar19 = uVar18;
            if ((ulong *)((long)param_2 + uVar18) == param_3) break;
          }
        }
        uVar34 = uVar9 - 1;
        uVar15 = (ulong)uVar34;
        uVar9 = 0;
        uVar18 = uVar19;
        puVar40 = puVar40 + 1;
      } while (uVar34 != 0);
LAB_002e05cc:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar18;
      }
    }
    auVar50 = ___stack_chk_fail();
    lVar10 = auVar50._8_8_;
    param_1 = auVar50._0_8_;
    puVar14 = extraout_x8;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar15 = extraout_x9;
    uVar16 = extraout_x10;
    uVar18 = extraout_x11;
    uVar19 = extraout_x12;
    lVar21 = extraout_x13;
    lVar23 = extraout_x14;
    lVar26 = extraout_x16;
    uVar28 = extraout_x17;
    iVar25 = extraout_w15;
LAB_002e0648:
    lVar20 = lVar21;
    lVar22 = lVar23;
    if ((uint)puVar36 < 0xffffffa0) {
      puVar40 = puVar36 + 0x18;
      do {
        uVar27 = (*(long *)(lVar37 + 8 + (long)puVar36) * lVar26 ^ *(ulong *)(param_1 + 0x60)) >>
                 ((ulong)(0x38 - iVar25) & 0x3f);
        uVar30 = uVar27 >> 3 & 0x1fffffe0;
        lVar20 = lVar23 + uVar30 * 4;
        Hint_Prefetch(lVar20,0,0,0);
        Hint_Prefetch(lVar20 + 0x40,0,0,0);
        Hint_Prefetch(lVar21 + uVar30,0,0,0);
        uVar34 = *(uint *)(lVar10 + ((ulong)puVar36 & 7) * 4);
        *(int *)(lVar10 + ((ulong)puVar36 & 7) * 4) = (int)uVar27;
        uVar27 = (ulong)(uVar34 >> 3) & 0x1fffffe0;
// WM - more drops soon - github.com/pengussy
        pbVar2 = (byte *)(lVar21 + uVar27);
        uVar9 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
          uVar9 = 0;
        }
        lVar20 = (ulong)uVar9 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar20;
        pbVar2[lVar20] = (byte)uVar34;
        *(int *)(lVar23 + uVar27 * 4 + lVar20 * 4) = (int)puVar36;
        puVar36 = (uint *)((long)puVar36 + 1);
      } while (puVar40 != puVar36);
      lVar22 = *(long *)(param_1 + 0x70);
      lVar20 = *(long *)(param_1 + 0x38);
      uVar9 = uVar38;
    }
    uVar34 = uVar9 - 0x20;
    uVar27 = (ulong)uVar34;
    iVar12 = (int)((long)param_2 + 1U) - (int)(lVar37 + uVar27);
    iVar31 = 8;
    if (iVar12 + 1U < 8) {
      iVar31 = iVar12 + 1;
    }
    iVar12 = 0;
    if (lVar37 + uVar27 <= (long)param_2 + 1U) {
      iVar12 = iVar31;
    }
    if (uVar34 < iVar12 + uVar34) {
      iVar31 = *(int *)(param_1 + 0x34);
      uVar30 = *(ulong *)(param_1 + 0x60);
      do {
        uVar32 = (*(long *)(lVar37 + uVar27) * lVar26 ^ uVar30) >> ((ulong)(0x38 - iVar31) & 0x3f);
        uVar33 = uVar32 >> 3 & 0x1fffffe0;
        lVar11 = lVar22 + uVar33 * 4;
        Hint_Prefetch(lVar11,0,0,0);
        Hint_Prefetch(lVar11 + 0x40,0,0,0);
        Hint_Prefetch(lVar20 + uVar33,0,0,0);
/*  chat: discord.gg/sdkhDjTex  */
        *(int *)(lVar10 + (uVar27 & 7) * 4) = (int)uVar32;
        uVar27 = uVar27 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      uVar9 = uVar38;
    }
    else {
    }
LAB_002e00dc:
    if (uVar34 < uVar9) {
      lVar11 = *(long *)(param_1 + 8);
      iVar31 = *(int *)(param_1 + 0x34);
      uVar27 = (ulong)uVar34;
      do {
        uVar30 = (*(long *)(lVar11 + 8 + uVar27) * lVar26 ^ *(ulong *)(param_1 + 0x60)) >>
                 ((ulong)(0x38 - iVar31) & 0x3f);
        uVar32 = uVar30 >> 3 & 0x1fffffe0;
        lVar1 = lVar22 + uVar32 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        Hint_Prefetch(lVar20 + uVar32,0,0,0);
        uVar34 = *(uint *)(lVar10 + (uVar27 & 7) * 4);
        *(int *)(lVar10 + (uVar27 & 7) * 4) = (int)uVar30;
        uVar30 = (ulong)(uVar34 >> 3) & 0x1fffffe0;
        pbVar2 = (byte *)(lVar20 + uVar30);
        uVar9 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
          uVar9 = 0;
        }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        lVar1 = (ulong)uVar9 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar1;
        pbVar2[lVar1] = (byte)uVar34;
        *(int *)(lVar22 + uVar30 * 4 + lVar1 * 4) = (int)uVar27;
        uVar27 = uVar27 + 1;
      } while (uVar27 < (uVar39 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar38;
    uVar27 = (*(long *)(lVar37 + (uVar39 & 0xffffffff) + 8) * lVar26 ^ uVar28) >>
             ((ulong)(0x38 - iVar25) & 0x3f);
    uVar28 = uVar27 >> 3 & 0x1fffffe0;
    lVar20 = lVar23 + uVar28 * 4;
    Hint_Prefetch(lVar20,0,0,0);
    Hint_Prefetch(lVar20 + 0x40,0,0,0);
    Hint_Prefetch(lVar21 + uVar28,0,0,0);
    uVar28 = (ulong)*(uint *)(lVar10 + (uVar39 & 7) * 4);
    *(int *)(lVar10 + (uVar39 & 7) * 4) = (int)uVar27;
  } while( true );
}

