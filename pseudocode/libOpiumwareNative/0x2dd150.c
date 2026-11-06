/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2dd150:32e914175a
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002dd150(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  byte *pbVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong *puVar13;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  undefined8 *puVar14;
  undefined8 *extraout_x8;
  ulong uVar15;
  ulong extraout_x9;
  ulong uVar16;
  ulong extraout_x10;
  uint uVar17;
  ulong uVar18;
  ulong extraout_x11;
  ulong uVar19;
  ulong extraout_x12;
  long lVar20;
  long extraout_x13;
  long lVar21;
  long lVar22;
  long extraout_x14;
  byte bVar23;
  int iVar24;
  int extraout_w15;
  int iVar25;
  int extraout_w16;
  ulong uVar26;
  uint extraout_w17;
  ulong *puVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  uint *puVar32;
  uint *puVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
// chat: discord.gg/sdkhDjTex
  uint *puVar37;
  ushort uVar38;
  undefined4 uVar39;
  undefined6 uVar40;
  ushort uVar41;
  undefined4 uVar42;
  undefined6 uVar43;
  ushort uVar44;
  undefined4 uVar45;
  undefined6 uVar46;
  undefined1 auVar47 [16];
  uint auStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar25 = -0x61c8864f;
  lVar22 = *(long *)(param_1 + 0x70);
  lVar20 = *(long *)(param_1 + 0x38);
  iVar24 = *(int *)(param_1 + 0x34);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  lVar34 = *(long *)(param_1 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar36 = (long)param_2 - lVar34;
  uVar35 = (uint)uVar36;
  uVar9 = uVar35 - uVar31;
  if (uVar35 - *(uint *)(param_1 + 0x1c) <= uVar31 || *(int *)(param_1 + 0x28) != 0) {
    uVar9 = *(uint *)(param_1 + 0x1c);
  }
  uVar19 = (ulong)uVar9;
  uVar9 = *(uint *)(param_1 + 0x10c);
  puVar14 = *(undefined8 **)(param_1 + 0xf8);
  bVar8 = 4 < uVar9;
  uVar31 = uVar9 - 5;
  if (bVar8) {
    uVar9 = 5;
  }
  uVar17 = (uint)*(undefined8 *)(param_1 + 0x60);
  uVar15 = (ulong)(uint)(1 << (ulong)(uVar9 & 0x1f));
  uVar7 = (int)*param_2 * -0x61c8864f;
  uVar18 = (ulong)(uVar7 >> (ulong)(0x22U - *(int *)(puVar14 + 0x21) & 0x1f));
  Hint_Prefetch(puVar14[0xe] + uVar18 * 0x10,0,0,0);
  uVar9 = 1 << (ulong)(uVar31 & 0x1f);
  if (!bVar8 || uVar31 == 0) {
/*  unlicensed copy if this notice is missing  */
    uVar9 = 0;
  }
  uVar16 = (ulong)uVar9;
  lVar21 = lVar20;
  lVar29 = lVar22;
  uVar9 = uVar35;
  if (*(int *)(param_1 + 300) == 0) {
    lVar10 = param_1 + 0x40;
    uVar31 = *(uint *)(param_1 + 0x2c);
    puVar33 = (uint *)(ulong)uVar31;
    iVar28 = -0x61c8864f;
    if (0x180 < uVar35 - uVar31) goto LAB_002dd7cc;
    goto LAB_002dd260;
  }
  uVar9 = (uVar7 ^ uVar17) >> (ulong)(0x18U - iVar24 & 0x1f);
  *(uint *)(param_1 + 0x2c) = uVar35;
  do {
    iVar24 = (int)uVar15;
    *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar9;
    uVar26 = (ulong)(uVar9 >> 3) & 0x1fffffe0;
    lVar29 = lVar29 + uVar26 * 4;
    pbVar2 = (byte *)(lVar21 + uVar26);
    bVar6 = *pbVar2;
    bVar23 = (byte)uVar9;
    uVar41 = CONCAT11(-(bVar23 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                      -(bVar23 == (byte)*(undefined2 *)pbVar2));
    uVar42 = CONCAT13(-(bVar23 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                      CONCAT12(-(bVar23 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar41));
    uVar43 = CONCAT15(-(bVar23 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                      CONCAT14(-(bVar23 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar42));
    uVar44 = CONCAT11(-(bVar23 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                      -(bVar23 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
    uVar45 = CONCAT13(-(bVar23 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                      CONCAT12(-(bVar23 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar44));
    uVar46 = CONCAT15(-(bVar23 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                      CONCAT14(-(bVar23 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar45));
    uVar38 = CONCAT11(-(bVar23 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                      -(bVar23 == (byte)*(undefined2 *)(pbVar2 + 0x12)));
    uVar39 = CONCAT13(-(bVar23 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8)),
                      CONCAT12(-(bVar23 == (byte)*(undefined2 *)(pbVar2 + 0x16)),uVar38));
    uVar40 = CONCAT15(-(bVar23 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8)),
                      CONCAT14(-(bVar23 == (byte)*(undefined2 *)(pbVar2 + 0x1a)),uVar39));
    uVar26 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar23 ==
                                                (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8))
                                               ,CONCAT16(-(bVar23 ==
                                                          (byte)*(undefined2 *)(pbVar2 + 0x1c)),
                                                         uVar46)) >> 0x36),
                               CONCAT16((char)((uint6)uVar46 >> 0x26),
                                        CONCAT15((char)((uint)uVar45 >> 0x16),
                                                 CONCAT14((char)(uVar44 >> 6),
                                                          CONCAT13((char)(CONCAT17(-(bVar23 ==
                                                                                    (byte)((ushort)*
                                                  (undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar23 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar43)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar43 >> 0x26),
                                                           CONCAT11((char)((uint)uVar42 >> 0x16),
                                                                    (char)(uVar41 >> 6)))))))),
                      CONCAT17((char)(CONCAT17(-(bVar23 ==
                                                (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8))
                                               ,CONCAT16(-(bVar23 ==
                                                          (byte)*(undefined2 *)(pbVar2 + 0x1e)),
                                                         uVar40)) >> 0x36),
                               CONCAT16((char)((uint6)uVar40 >> 0x26),
                                        CONCAT15((char)((uint)uVar39 >> 0x16),
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                 CONCAT14((char)(uVar38 >> 6),
                                                          CONCAT13((char)(CONCAT11(-(bVar23 ==
                                                                                    (byte)((ushort)*
                                                  (undefined2 *)(pbVar2 + 0xe) >> 8)),
                                                  -(bVar23 == (byte)*(undefined2 *)(pbVar2 + 0xe)))
                                                  >> 6),CONCAT12((char)(CONCAT11(-(bVar23 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 10) >> 8)),
                                                  -(bVar23 == (byte)*(undefined2 *)(pbVar2 + 10)))
                                                  >> 6),CONCAT11((char)(CONCAT11(-(bVar23 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 6) >> 8)),
                                                  -(bVar23 == (byte)*(undefined2 *)(pbVar2 + 6))) >>
                                                  6),(char)(CONCAT11(-(bVar23 ==
                                                                      (byte)((ushort)*(undefined2 *)
                                                                                      (pbVar2 + 2)
                                                                            >> 8)),
                                                                     -(bVar23 ==
                                                                      (byte)*(undefined2 *)
                                                                             (pbVar2 + 2))) >> 6))))
                                                  )))),4,1);
    uVar26 = (uVar26 >> ((ulong)bVar6 & 0x1f) * 2 | uVar26 << ((ulong)bVar6 & 0x1f) * -2 + 0x40) &
             0x5555555555555555;
    if (uVar26 != 0) {
      lVar20 = 0;
      do {
        iVar24 = (int)uVar15;
        uVar30 = (uVar26 << 1 & 0xcccccccccccccccc) >> 2 | (uVar26 << 1 & 0x3333333333333333) << 2;
        uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
        uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
        uVar9 = (int)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) + (bVar6 & 0x7f) * 2 >> 1 & 0x1f;
        if (uVar9 != 0) {
          uVar9 = *(uint *)(lVar29 + (ulong)uVar9 * 4);
          if (uVar9 < (uint)uVar19) goto LAB_002dd3f4;
          Hint_Prefetch(lVar34 + (ulong)uVar9,0,0,0);
          auStack_170[lVar20] = uVar9;
          lVar20 = lVar20 + 1;
/* WM - if you paid for this, you were scammed */
          uVar15 = (ulong)(iVar24 - 1);
        }
        iVar24 = (int)uVar15;
        uVar26 = uVar26 - 1 & uVar26;
        if ((uVar26 == 0) || (iVar24 == 0)) goto LAB_002dd3f4;
      } while( true );
    }
    lVar20 = 0;
LAB_002dd3f4:
    uVar9 = 0x1f;
    if ((bVar6 & 0x1f) != 1) {
      uVar9 = 0;
    }
    lVar22 = (ulong)uVar9 + (ulong)(bVar6 - 1 & 0x1f);
    *pbVar2 = (byte)lVar22;
    pbVar2[lVar22] = bVar23;
    iVar25 = *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x2c) = iVar25 + 1;
    *(int *)(lVar29 + lVar22 * 4) = iVar25;
    if (lVar20 == 0) {
      uVar19 = 3;
    }
    else {
      lVar22 = 0;
      uVar15 = 3;
      do {
        uVar9 = auStack_170[lVar22];
        puVar13 = (ulong *)(lVar34 + (ulong)uVar9);
        if (*(int *)((long)puVar13 + (uVar15 - 3)) == *(int *)((long)param_2 + (uVar15 - 3))) {
          puVar27 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
/* thanks for reading - discord.gg/sdkhDjTex */
            if (*puVar13 == *param_2) {
              lVar29 = 0;
              puVar13 = (ulong *)(lVar34 + 8 + (ulong)uVar9);
              do {
                puVar27 = puVar27 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar27) goto LAB_002dd4ec;
                uVar19 = *puVar13;
                lVar29 = lVar29 + 8;
                puVar13 = puVar13 + 1;
              } while (uVar19 == *puVar27);
              uVar19 = *puVar27 ^ uVar19;
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = lVar29 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
            }
            else {
/* stripping the watermark breaks the license */
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
LAB_002dd4ec:
            if (puVar27 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar13 == (int)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 4);
                puVar13 = (ulong *)((long)puVar13 + 4);
              }
            }
            if (puVar27 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar13 == (short)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 2);
                puVar13 = (ulong *)((long)puVar13 + 2);
              }
            }
            if (puVar27 < param_3) {
              if ((char)*puVar13 == (char)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 1);
/*  do not claim this as your own  */
              }
            }
            uVar19 = (long)puVar27 - (long)param_2;
          }
          if (uVar15 < uVar19) {
            *param_4 = (ulong)((uVar35 + 3) - uVar9);
            uVar15 = uVar19;
            if ((ulong *)((long)param_2 + uVar19) == param_3) break;
          }
        }
        lVar22 = lVar22 + 1;
        uVar19 = uVar15;
      } while (lVar22 != lVar20);
    }
    uVar4 = *puVar14;
    lVar20 = puVar14[1];
    puVar33 = (uint *)(puVar14[0xe] + (uVar18 & 0xffffffff) * 0x10);
    Hint_Prefetch(lVar20 + (ulong)*puVar33,0,0,0);
    Hint_Prefetch(lVar20 + (ulong)puVar33[1],0,0,0);
// proprietary - see LICENSE - do not sell
    uVar7 = puVar33[3];
    Hint_Prefetch(lVar20 + (ulong)puVar33[2],0,0,0);
    puVar37 = (uint *)(puVar14[0x10] + (ulong)(uVar7 >> 8) * 4);
    iVar25 = ((int)uVar4 - (int)lVar20) - uVar5;
    Hint_Prefetch(puVar37,0,0,0);
    uVar31 = iVar24 + (int)uVar16;
    uVar17 = uVar31;
    if (2 < uVar31) {
      uVar17 = 3;
    }
    uVar15 = (ulong)uVar17;
    if (uVar31 == 0) {
LAB_002dd7ac:
      uVar9 = 0;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar19;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      }
    }
    else {
      puVar32 = puVar33;
      do {
        puVar33 = puVar32 + 1;
        uVar9 = *puVar32;
        if (uVar9 == 0) {
          uVar18 = uVar19;
          goto LAB_002dd750;
        }
        if (*(int *)(lVar20 + (ulong)uVar9) == (int)*param_2) {
          lVar22 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar20 + (ulong)uVar9) + 1,
                                   param_3,uVar4,lVar34 + (ulong)uVar5);
          uVar18 = lVar22 + 4;
          if (uVar19 < uVar18) {
            *param_4 = (ulong)((uVar35 + iVar25 + 3) - uVar9);
            uVar19 = uVar18;
            if ((ulong *)((long)param_2 + uVar18) == param_3) goto LAB_002dd750;
          }
        }
        uVar15 = uVar15 - 1;
/* WM - unlicensed copy if this notice is missing */
        puVar32 = puVar33;
      } while (uVar15 != 0);
      uVar7 = uVar7 & 0xff;
      uVar9 = uVar31 - uVar17;
      if (uVar7 <= uVar31 - uVar17) {
        uVar9 = uVar7;
      }
      uVar15 = (ulong)uVar9;
      if (uVar9 == 0) goto LAB_002dd7ac;
      lVar22 = uVar15 << 2;
      puVar33 = puVar37;
      do {
        Hint_Prefetch(lVar20 + (ulong)*puVar33,0,0,0);
        lVar22 = lVar22 + -4;
        puVar33 = puVar33 + 1;
      } while (lVar22 != 0);
      puVar33 = (uint *)((long)param_2 + 4);
      uVar16 = *param_2;
      do {
        uVar9 = (uint)uVar15;
        uVar31 = *puVar37;
        piVar3 = (int *)(lVar20 + (ulong)uVar31);
        if (*piVar3 == (int)uVar16) {
          lVar22 = func_0x002ad924(puVar33,piVar3 + 1,param_3,uVar4,lVar34 + (ulong)uVar5);
          uVar18 = lVar22 + 4;
          if (uVar19 < uVar18) {
            *param_4 = (ulong)((uVar35 + iVar25 + 3) - uVar31);
            uVar19 = uVar18;
            if ((ulong *)((long)param_2 + uVar18) == param_3) break;
          }
        }
        uVar31 = uVar9 - 1;
        uVar15 = (ulong)uVar31;
/* if you paid for this, you were scammed - github.com/pengussy */
        uVar9 = 0;
        uVar18 = uVar19;
        puVar37 = puVar37 + 1;
      } while (uVar31 != 0);
LAB_002dd750:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar18;
      }
    }
    auVar47 = ___stack_chk_fail();
    lVar10 = auVar47._8_8_;
    param_1 = auVar47._0_8_;
    puVar14 = extraout_x8;
    uVar15 = extraout_x9;
    uVar16 = extraout_x10;
    uVar18 = extraout_x11;
    uVar19 = extraout_x12;
    lVar21 = extraout_x13;
    lVar29 = extraout_x14;
    uVar17 = extraout_w17;
    iVar24 = extraout_w15;
    iVar28 = extraout_w16;
LAB_002dd7cc:
    iVar25 = iVar28;
    lVar20 = lVar21;
    lVar22 = lVar29;
    if ((uint)puVar33 < 0xffffffa0) {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      puVar37 = puVar33 + 0x18;
      do {
        uVar9 = (*(int *)(lVar34 + 8 + (long)puVar33) * iVar25 ^ *(uint *)(param_1 + 0x60)) >>
                (ulong)(0x18U - iVar24 & 0x1f);
        uVar26 = (ulong)(uVar9 >> 3 & 0x1fffffe0);
        lVar20 = lVar29 + uVar26 * 4;
        Hint_Prefetch(lVar20,0,0,0);
        Hint_Prefetch(lVar20 + 0x40,0,0,0);
        Hint_Prefetch(lVar21 + uVar26,0,0,0);
        uVar31 = *(uint *)(lVar10 + ((ulong)puVar33 & 7) * 4);
        *(uint *)(lVar10 + ((ulong)puVar33 & 7) * 4) = uVar9;
        uVar26 = (ulong)(uVar31 >> 3) & 0x1fffffe0;
        pbVar2 = (byte *)(lVar21 + uVar26);
        uVar9 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
          uVar9 = 0;
        }
        lVar20 = (ulong)uVar9 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar20;
        pbVar2[lVar20] = (byte)uVar31;
        *(int *)(lVar29 + uVar26 * 4 + lVar20 * 4) = (int)puVar33;
        puVar33 = (uint *)((long)puVar33 + 1);
      } while (puVar37 != puVar33);
      lVar22 = *(long *)(param_1 + 0x70);
      lVar20 = *(long *)(param_1 + 0x38);
      uVar9 = uVar35;
    }
/* wm:reversing this took months of machine time */
    uVar31 = uVar9 - 0x20;
    uVar26 = (ulong)uVar31;
    iVar12 = (int)((long)param_2 + 1U) - (int)(lVar34 + uVar26);
    iVar28 = 8;
    if (iVar12 + 1U < 8) {
      iVar28 = iVar12 + 1;
    }
    iVar12 = 0;
    if (lVar34 + uVar26 <= (long)param_2 + 1U) {
      iVar12 = iVar28;
    }
    if (uVar31 < iVar12 + uVar31) {
      iVar28 = *(int *)(param_1 + 0x34);
      uVar9 = *(uint *)(param_1 + 0x60);
      do {
        uVar7 = (*(int *)(lVar34 + uVar26) * iVar25 ^ uVar9) >> (ulong)(0x18U - iVar28 & 0x1f);
        uVar30 = (ulong)(uVar7 >> 3 & 0x1fffffe0);
        lVar11 = lVar22 + uVar30 * 4;
        Hint_Prefetch(lVar11,0,0,0);
        Hint_Prefetch(lVar11 + 0x40,0,0,0);
        Hint_Prefetch(lVar20 + uVar30,0,0,0);
        *(uint *)(lVar10 + (uVar26 & 7) * 4) = uVar7;
        uVar26 = uVar26 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      uVar9 = uVar35;
    }
    else {
    }
LAB_002dd260:
// WM - no support for modified copies
    if (uVar31 < uVar9) {
      lVar11 = *(long *)(param_1 + 8);
      iVar28 = *(int *)(param_1 + 0x34);
      uVar26 = (ulong)uVar31;
      do {
        uVar9 = (*(int *)(lVar11 + 8 + uVar26) * iVar25 ^ *(uint *)(param_1 + 0x60)) >>
                (ulong)(0x18U - iVar28 & 0x1f);
        uVar30 = (ulong)(uVar9 >> 3 & 0x1fffffe0);
        lVar1 = lVar22 + uVar30 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        Hint_Prefetch(lVar20 + uVar30,0,0,0);
        uVar31 = *(uint *)(lVar10 + (uVar26 & 7) * 4);
        *(uint *)(lVar10 + (uVar26 & 7) * 4) = uVar9;
        uVar30 = (ulong)(uVar31 >> 3) & 0x1fffffe0;
        pbVar2 = (byte *)(lVar20 + uVar30);
        uVar9 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
          uVar9 = 0;
        }
        lVar1 = (ulong)uVar9 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar1;
        pbVar2[lVar1] = (byte)uVar31;
        *(int *)(lVar22 + uVar30 * 4 + lVar1 * 4) = (int)uVar26;
        uVar26 = uVar26 + 1;
      } while (uVar26 < (uVar36 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar35;
    uVar31 = (*(int *)(lVar34 + (uVar36 & 0xffffffff) + 8) * iVar25 ^ uVar17) >>
             (ulong)(0x18U - iVar24 & 0x1f);
    uVar26 = (ulong)(uVar31 >> 3 & 0x1fffffe0);
/* watermarked copy - do not remove */
    lVar20 = lVar29 + uVar26 * 4;
    Hint_Prefetch(lVar20,0,0,0);
    Hint_Prefetch(lVar20 + 0x40,0,0,0);
    Hint_Prefetch(lVar21 + uVar26,0,0,0);
    uVar9 = *(uint *)(lVar10 + (uVar36 & 7) * 4);
    *(uint *)(lVar10 + (uVar36 & 7) * 4) = uVar31;
  } while( true );
}

