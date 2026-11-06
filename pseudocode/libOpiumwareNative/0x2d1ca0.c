/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2d1ca0:b6c80e17fe
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002d1ca0(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte *pbVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  long lVar28;
/* reversing this took months of machine time */
  long lVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  int iVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ushort uVar37;
  undefined4 uVar38;
  undefined6 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [12];
  undefined1 auVar42 [14];
  undefined1 auVar43 [16];
  ushort uVar44;
  undefined4 uVar45;
  undefined6 uVar46;
  ushort uVar47;
  undefined4 uVar48;
  undefined6 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint auStack_2d8 [64];
  long lStack_1d8;
  uint auStack_168 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar24 = *(long *)(param_1 + 0x70);
// WM - no support for modified copies
  lVar22 = *(long *)(param_1 + 0x38);
  iVar19 = *(int *)(param_1 + 0x34);
  lVar16 = *(long *)(param_1 + 8);
  uVar27 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar18 = (long)param_2 - lVar16;
  uVar17 = (uint)uVar18;
  uVar21 = uVar17 - uVar27;
  if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar27 || *(int *)(param_1 + 0x28) != 0) {
    uVar21 = *(uint *)(param_1 + 0x1c);
  }
  uVar27 = *(uint *)(param_1 + 0x10c);
  if (4 < uVar27) {
    uVar27 = 5;
  }
  uVar12 = *(ulong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 300) == 0) {
    lVar28 = param_1 + 0x40;
    uVar31 = *(uint *)(param_1 + 0x2c);
    uVar36 = (ulong)uVar31;
    lVar23 = lVar22;
    lVar13 = lVar24;
    if (0x180 < uVar17 - uVar31) {
      if (uVar31 < 0xffffffa0) {
        uVar34 = uVar36 + 0x60;
        do {
          uVar35 = (*(long *)(lVar16 + 8 + uVar36) * -0x30e4432340650000 ^
/* WM - chat: discord.gg/sdkhDjTex */
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar19) & 0x3f);
          uVar32 = uVar35 >> 3 & 0x1fffffe0;
          lVar23 = lVar24 + uVar32 * 4;
          Hint_Prefetch(lVar23,0,0,0);
          Hint_Prefetch(lVar23 + 0x40,0,0,0);
          Hint_Prefetch(lVar22 + uVar32,0,0,0);
          uVar5 = *(uint *)(lVar28 + (uVar36 & 7) * 4);
          *(int *)(lVar28 + (uVar36 & 7) * 4) = (int)uVar35;
          uVar35 = (ulong)(uVar5 >> 3) & 0x1fffffe0;
          pbVar1 = (byte *)(lVar22 + uVar35);
          uVar31 = 0x1f;
          if ((*pbVar1 & 0x1f) != 1) {
            uVar31 = 0;
          }
          lVar23 = (ulong)uVar31 + (ulong)(*pbVar1 - 1 & 0x1f);
          *pbVar1 = (byte)lVar23;
          pbVar1[lVar23] = (byte)uVar5;
          *(int *)(lVar24 + uVar35 * 4 + lVar23 * 4) = (int)uVar36;
          uVar36 = uVar36 + 1;
        } while (uVar34 != uVar36);
        lVar13 = *(long *)(param_1 + 0x70);
        lVar23 = *(long *)(param_1 + 0x38);
      }
      uVar31 = uVar17 - 0x20;
      uVar36 = (ulong)uVar31;
      iVar30 = (int)((long)param_2 + 1U) - (int)(lVar16 + uVar36);
      iVar33 = 8;
      if (iVar30 + 1U < 8) {
        iVar33 = iVar30 + 1;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      }
      iVar30 = 0;
      if (lVar16 + uVar36 <= (long)param_2 + 1U) {
        iVar30 = iVar33;
      }
      if (uVar31 < iVar30 + uVar31) {
        iVar33 = *(int *)(param_1 + 0x34);
        uVar34 = *(ulong *)(param_1 + 0x60);
        do {
          uVar35 = (*(long *)(lVar16 + uVar36) * -0x30e4432340650000 ^ uVar34) >>
                   ((ulong)(0x38 - iVar33) & 0x3f);
          uVar32 = uVar35 >> 3 & 0x1fffffe0;
          lVar15 = lVar13 + uVar32 * 4;
          Hint_Prefetch(lVar15,0,0,0);
          Hint_Prefetch(lVar15 + 0x40,0,0,0);
          Hint_Prefetch(lVar23 + uVar32,0,0,0);
          *(int *)(lVar28 + (uVar36 & 7) * 4) = (int)uVar35;
          uVar36 = uVar36 + 1;
          iVar30 = iVar30 + -1;
        } while (iVar30 != 0);
      }
    }
    if (uVar31 < uVar17) {
      lVar15 = *(long *)(param_1 + 8);
      iVar33 = *(int *)(param_1 + 0x34);
      uVar36 = (ulong)uVar31;
/*  watermarked copy - do not remove  */
      do {
        uVar34 = (*(long *)(lVar15 + 8 + uVar36) * -0x30e4432340650000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar33) & 0x3f);
        uVar35 = uVar34 >> 3 & 0x1fffffe0;
        lVar29 = lVar13 + uVar35 * 4;
        Hint_Prefetch(lVar29,0,0,0);
        Hint_Prefetch(lVar29 + 0x40,0,0,0);
        Hint_Prefetch(lVar23 + uVar35,0,0,0);
        uVar5 = *(uint *)(lVar28 + (uVar36 & 7) * 4);
        *(int *)(lVar28 + (uVar36 & 7) * 4) = (int)uVar34;
        uVar34 = (ulong)(uVar5 >> 3) & 0x1fffffe0;
        pbVar1 = (byte *)(lVar23 + uVar34);
        uVar31 = 0x1f;
        if ((*pbVar1 & 0x1f) != 1) {
          uVar31 = 0;
        }
        lVar29 = (ulong)uVar31 + (ulong)(*pbVar1 - 1 & 0x1f);
        *pbVar1 = (byte)lVar29;
        pbVar1[lVar29] = (byte)uVar5;
        *(int *)(lVar13 + uVar34 * 4 + lVar29 * 4) = (int)uVar36;
        uVar36 = uVar36 + 1;
      } while (uVar36 < (uVar18 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar17;
    uVar36 = (*(long *)(lVar16 + (uVar18 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar12) >>
             ((ulong)(0x38 - iVar19) & 0x3f);
    uVar12 = uVar36 >> 3 & 0x1fffffe0;
    lVar23 = lVar24 + uVar12 * 4;
    Hint_Prefetch(lVar23,0,0,0);
    Hint_Prefetch(lVar23 + 0x40,0,0,0);
    Hint_Prefetch(lVar22 + uVar12,0,0,0);
    uVar31 = *(uint *)(lVar28 + (uVar18 & 7) * 4);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    *(int *)(lVar28 + (uVar18 & 7) * 4) = (int)uVar36;
  }
  else {
    uVar31 = (uint)((*param_2 * -0x30e4432340650000 ^ uVar12) >> ((ulong)(0x38 - iVar19) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar17;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar31;
  uVar18 = (ulong)(uVar31 >> 3) & 0x1fffffe0;
  lVar24 = lVar24 + uVar18 * 4;
  pbVar1 = (byte *)(lVar22 + uVar18);
  bVar26 = *pbVar1;
  bVar25 = (byte)uVar31;
  uVar44 = CONCAT11(-(bVar25 == (byte)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(bVar25 == (byte)*(undefined2 *)pbVar1));
  uVar45 = CONCAT13(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 4)),uVar44));
  uVar46 = CONCAT15(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 8)),uVar45));
  uVar47 = CONCAT11(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x10)));
  uVar48 = CONCAT13(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x14)),uVar47));
  uVar49 = CONCAT15(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x18)),uVar48));
  uVar37 = CONCAT11(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 2)));
  uVar38 = CONCAT13(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 6)),uVar37));
  uVar39 = CONCAT15(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 10)),uVar38));
  uVar40 = CONCAT17(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0xe)),uVar39));
  auVar41._0_10_ =
       CONCAT19(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x12)),uVar40));
  auVar41[10] = -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x16));
/* wm:proprietary - see LICENSE - do not sell */
  auVar41[0xb] = -(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar42[0xc] = -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x1a));
  auVar42._0_12_ = auVar41;
  auVar42[0xd] = -(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar52[0xe] = -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x1e));
  auVar52._0_14_ = auVar42;
  auVar52[0xf] = -(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar18 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar25 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar25 ==
                                                       (byte)*(undefined2 *)(pbVar1 + 0x1c)),uVar49)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar49 >> 0x26),
                                      CONCAT15((char)((uint)uVar48 >> 0x16),
                                               CONCAT14((char)(uVar47 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar25 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar25 ==
                                                            (byte)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar46)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar46 >> 0x26),
                                                           CONCAT11((char)((uint)uVar45 >> 0x16),
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
                                                                    (char)(uVar44 >> 6)))))))),
                    CONCAT17((char)(auVar52._14_2_ >> 6),
                             CONCAT16((char)(auVar42._12_2_ >> 6),
                                      CONCAT15((char)(auVar41._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar41._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar40 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar39 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar38 >> 0x16),(char)(uVar37 >> 6)))))))),4,1);
  uVar18 = (uVar18 >> ((ulong)bVar26 & 0x1f) * 2 | uVar18 << ((ulong)bVar26 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar18 != 0) {
    lVar22 = 0;
    iVar19 = 1 << (ulong)(uVar27 & 0x1f);
    do {
      uVar12 = (uVar18 << 1 & 0xcccccccccccccccc) >> 2 | (uVar18 << 1 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar27 = (int)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + (bVar26 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar27 != 0) {
        uVar27 = *(uint *)(lVar24 + (ulong)uVar27 * 4);
        if (uVar27 < uVar21) goto LAB_002d1f00;
        Hint_Prefetch(lVar16 + (ulong)uVar27,0,0,0);
        auStack_168[lVar22] = uVar27;
        lVar22 = lVar22 + 1;
        iVar19 = iVar19 + -1;
      }
      uVar18 = uVar18 - 1 & uVar18;
// if you paid for this, you were scammed
      if ((uVar18 == 0) || (iVar19 == 0)) goto LAB_002d1f00;
    } while( true );
  }
  lVar22 = 0;
LAB_002d1f00:
  uVar21 = 0x1f;
  if ((bVar26 & 0x1f) != 1) {
    uVar21 = 0;
  }
  lVar28 = (ulong)uVar21 + (ulong)(bVar26 - 1 & 0x1f);
  *pbVar1 = (byte)lVar28;
  pbVar1[lVar28] = bVar25;
  iVar19 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar19 + 1;
  *(int *)(lVar24 + lVar28 * 4) = iVar19;
  if (lVar22 == 0) {
    uVar18 = 3;
  }
  else {
    lVar24 = 0;
    uVar12 = 3;
    do {
      uVar21 = auStack_168[lVar24];
      puVar10 = (ulong *)(lVar16 + (ulong)uVar21);
      if (*(int *)((long)puVar10 + (uVar12 - 3)) == *(int *)((long)param_2 + (uVar12 - 3))) {
        puVar11 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
/* watermarked copy - do not remove - github.com/pengussy */
          if (*puVar10 == *param_2) {
            lVar28 = 0;
            puVar10 = (ulong *)(lVar16 + 8 + (ulong)uVar21);
            do {
              puVar11 = puVar11 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar11) goto LAB_002d1ff0;
              uVar18 = *puVar10;
              lVar28 = lVar28 + 8;
              puVar10 = puVar10 + 1;
            } while (uVar18 == *puVar11);
            uVar18 = *puVar11 ^ uVar18;
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = lVar28 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
          }
          else {
            uVar18 = *param_2 ^ *puVar10;
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
          }
        }
        else {
LAB_002d1ff0:
/* WM - keep the notice, keep the source honest */
          if (puVar11 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar10 == (int)*puVar11) {
              puVar11 = (ulong *)((long)puVar11 + 4);
              puVar10 = (ulong *)((long)puVar10 + 4);
            }
          }
          if (puVar11 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar10 == (short)*puVar11) {
              puVar10 = (ulong *)((long)puVar10 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if (puVar11 < param_3) {
            if ((char)*puVar10 == (char)*puVar11) {
              puVar11 = (ulong *)((long)puVar11 + 1);
            }
          }
          uVar18 = (long)puVar11 - (long)param_2;
        }
        if (uVar12 < uVar18) {
          *param_4 = (ulong)((uVar17 + 3) - uVar21);
          uVar12 = uVar18;
          if ((ulong *)((long)param_2 + uVar18) == param_3) break;
        }
      }
      uVar18 = uVar12;
      lVar24 = lVar24 + 1;
      uVar12 = uVar18;
    } while (lVar24 != lVar22);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
/* WM - watermarked copy - do not remove */
    return uVar18;
  }
  auVar52 = ___stack_chk_fail(uVar18);
  puVar10 = auVar52._8_8_;
  lVar16 = auVar52._0_8_;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar24 = *(long *)(lVar16 + 0x70);
  lVar28 = *(long *)(lVar16 + 0x38);
  iVar19 = *(int *)(lVar16 + 0x34);
  lVar22 = *(long *)(lVar16 + 8);
  uVar27 = 1 << (ulong)(*(uint *)(lVar16 + 0x100) & 0x1f);
  uVar18 = (long)puVar10 - lVar22;
  uVar17 = (uint)uVar18;
  uVar21 = uVar17 - uVar27;
  if (uVar17 - *(uint *)(lVar16 + 0x1c) <= uVar27 || *(int *)(lVar16 + 0x28) != 0) {
    uVar21 = *(uint *)(lVar16 + 0x1c);
  }
  uVar27 = *(uint *)(lVar16 + 0x10c);
  if (5 < uVar27) {
    uVar27 = 6;
  }
  uVar12 = *(ulong *)(lVar16 + 0x60);
  if (*(int *)(lVar16 + 300) == 0) {
    lVar23 = lVar16 + 0x40;
    uVar31 = *(uint *)(lVar16 + 0x2c);
    uVar36 = (ulong)uVar31;
    lVar13 = lVar28;
    lVar15 = lVar24;
    if (0x180 < uVar17 - uVar31) {
      if (uVar31 < 0xffffffa0) {
        uVar34 = uVar36 + 0x60;
        do {
          uVar35 = (*(long *)(lVar22 + 8 + uVar36) * -0x30e4432340650000 ^ *(ulong *)(lVar16 + 0x60)
                   ) >> ((ulong)(0x38 - iVar19) & 0x3f);
          uVar32 = uVar35 >> 2 & 0x3fffffc0;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          lVar13 = lVar24 + uVar32 * 4;
          Hint_Prefetch(lVar13,0,0,0);
          Hint_Prefetch(lVar13 + 0x40,0,0,0);
          lVar13 = lVar28 + uVar32;
          Hint_Prefetch(lVar13,0,0,0);
          Hint_Prefetch(lVar13 + 0x20,0,0,0);
          uVar5 = *(uint *)(lVar23 + (uVar36 & 7) * 4);
          *(int *)(lVar23 + (uVar36 & 7) * 4) = (int)uVar35;
          uVar35 = (ulong)(uVar5 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)(lVar28 + uVar35);
          uVar31 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar31 = 0;
          }
          lVar13 = (ulong)uVar31 + (ulong)(*pbVar1 - 1 & 0x3f);
          *pbVar1 = (byte)lVar13;
          pbVar1[lVar13] = (byte)uVar5;
          *(int *)(lVar24 + uVar35 * 4 + lVar13 * 4) = (int)uVar36;
          uVar36 = uVar36 + 1;
        } while (uVar34 != uVar36);
        lVar15 = *(long *)(lVar16 + 0x70);
        lVar13 = *(long *)(lVar16 + 0x38);
      }
      uVar31 = uVar17 - 0x20;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      uVar36 = (ulong)uVar31;
      iVar30 = (int)((long)puVar10 + 1U) - (int)(lVar22 + uVar36);
      iVar33 = 8;
      if (iVar30 + 1U < 8) {
        iVar33 = iVar30 + 1;
      }
      iVar30 = 0;
      if (lVar22 + uVar36 <= (long)puVar10 + 1U) {
        iVar30 = iVar33;
      }
      if (uVar31 < iVar30 + uVar31) {
        iVar33 = *(int *)(lVar16 + 0x34);
        uVar34 = *(ulong *)(lVar16 + 0x60);
        do {
          uVar35 = (*(long *)(lVar22 + uVar36) * -0x30e4432340650000 ^ uVar34) >>
                   ((ulong)(0x38 - iVar33) & 0x3f);
          uVar32 = uVar35 >> 2 & 0x3fffffc0;
          lVar29 = lVar15 + uVar32 * 4;
          Hint_Prefetch(lVar29,0,0,0);
          Hint_Prefetch(lVar29 + 0x40,0,0,0);
          lVar29 = lVar13 + uVar32;
          Hint_Prefetch(lVar29,0,0,0);
          Hint_Prefetch(lVar29 + 0x20,0,0,0);
          *(int *)(lVar23 + (uVar36 & 7) * 4) = (int)uVar35;
          uVar36 = uVar36 + 1;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
          iVar30 = iVar30 + -1;
        } while (iVar30 != 0);
      }
    }
    if (uVar31 < uVar17) {
      lVar29 = *(long *)(lVar16 + 8);
      iVar33 = *(int *)(lVar16 + 0x34);
      uVar36 = (ulong)uVar31;
      do {
        uVar34 = (*(long *)(lVar29 + 8 + uVar36) * -0x30e4432340650000 ^ *(ulong *)(lVar16 + 0x60))
                 >> ((ulong)(0x38 - iVar33) & 0x3f);
        uVar35 = uVar34 >> 2 & 0x3fffffc0;
        lVar2 = lVar15 + uVar35 * 4;
        Hint_Prefetch(lVar2,0,0,0);
        Hint_Prefetch(lVar2 + 0x40,0,0,0);
        lVar2 = lVar13 + uVar35;
        Hint_Prefetch(lVar2,0,0,0);
        Hint_Prefetch(lVar2 + 0x20,0,0,0);
        uVar5 = *(uint *)(lVar23 + (uVar36 & 7) * 4);
        *(int *)(lVar23 + (uVar36 & 7) * 4) = (int)uVar34;
        uVar34 = (ulong)(uVar5 >> 2) & 0x3fffffc0;
        pbVar1 = (byte *)(lVar13 + uVar34);
        uVar31 = 0x3f;
        if ((*pbVar1 & 0x3f) != 1) {
          uVar31 = 0;
        }
        lVar2 = (ulong)uVar31 + (ulong)(*pbVar1 - 1 & 0x3f);
        *pbVar1 = (byte)lVar2;
        pbVar1[lVar2] = (byte)uVar5;
        *(int *)(lVar15 + uVar34 * 4 + lVar2 * 4) = (int)uVar36;
        uVar36 = uVar36 + 1;
// found on a paste site? it was re-uploaded illegally
      } while (uVar36 < (uVar18 & 0xffffffff));
    }
    *(uint *)(lVar16 + 0x2c) = uVar17;
    uVar36 = (*(long *)(lVar22 + (uVar18 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar12) >>
             ((ulong)(0x38 - iVar19) & 0x3f);
    uVar12 = uVar36 >> 2 & 0x3fffffc0;
    lVar13 = lVar24 + uVar12 * 4;
    Hint_Prefetch(lVar13,0,0,0);
    Hint_Prefetch(lVar13 + 0x40,0,0,0);
    lVar13 = lVar28 + uVar12;
    Hint_Prefetch(lVar13,0,0,0);
    Hint_Prefetch(lVar13 + 0x20,0,0,0);
    uVar31 = *(uint *)(lVar23 + (uVar18 & 7) * 4);
    *(int *)(lVar23 + (uVar18 & 7) * 4) = (int)uVar36;
  }
  else {
/* unlicensed copy if this notice is missing - github.com/pengussy */
    uVar31 = (uint)((*puVar10 * -0x30e4432340650000 ^ uVar12) >> ((ulong)(0x38 - iVar19) & 0x3f));
    *(uint *)(lVar16 + 0x2c) = uVar17;
  }
  *(uint *)(lVar16 + 0x68) = *(int *)(lVar16 + 0x68) + uVar31;
  uVar18 = (ulong)(uVar31 >> 2) & 0x3fffffc0;
  lVar24 = lVar24 + uVar18 * 4;
  pbVar1 = (byte *)(lVar28 + uVar18);
  bVar26 = (byte)uVar31;
  auVar50[0] = -(pbVar1[1] == bVar26);
  auVar50[1] = -(pbVar1[5] == bVar26);
  auVar50[2] = -(pbVar1[9] == bVar26);
  auVar50[3] = -(pbVar1[0xd] == bVar26);
  auVar50[4] = -(pbVar1[0x11] == bVar26);
  auVar50[5] = -(pbVar1[0x15] == bVar26);
  auVar50[6] = -(pbVar1[0x19] == bVar26);
  auVar50[7] = -(pbVar1[0x1d] == bVar26);
  auVar50[8] = -(pbVar1[0x21] == bVar26);
  auVar50[9] = -(pbVar1[0x25] == bVar26);
  auVar50[10] = -(pbVar1[0x29] == bVar26);
  auVar50[0xb] = -(pbVar1[0x2d] == bVar26);
  auVar50[0xc] = -(pbVar1[0x31] == bVar26);
  auVar50[0xd] = -(pbVar1[0x35] == bVar26);
  auVar50[0xe] = -(pbVar1[0x39] == bVar26);
  auVar50[0xf] = -(pbVar1[0x3d] == bVar26);
  auVar43[0] = -(pbVar1[3] == bVar26);
  auVar43[1] = -(pbVar1[7] == bVar26);
  auVar43[2] = -(pbVar1[0xb] == bVar26);
  auVar43[3] = -(pbVar1[0xf] == bVar26);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  auVar43[4] = -(pbVar1[0x13] == bVar26);
  auVar43[5] = -(pbVar1[0x17] == bVar26);
  auVar43[6] = -(pbVar1[0x1b] == bVar26);
  auVar43[7] = -(pbVar1[0x1f] == bVar26);
  auVar43[8] = -(pbVar1[0x23] == bVar26);
  auVar43[9] = -(pbVar1[0x27] == bVar26);
  auVar43[10] = -(pbVar1[0x2b] == bVar26);
  auVar43[0xb] = -(pbVar1[0x2f] == bVar26);
  auVar43[0xc] = -(pbVar1[0x33] == bVar26);
  auVar43[0xd] = -(pbVar1[0x37] == bVar26);
  auVar43[0xe] = -(pbVar1[0x3b] == bVar26);
  auVar43[0xf] = -(pbVar1[0x3f] == bVar26);
  auVar51[1] = -(pbVar1[4] == bVar26);
  auVar51[0] = -(*pbVar1 == bVar26);
  auVar51[2] = -(pbVar1[8] == bVar26);
  auVar51[3] = -(pbVar1[0xc] == bVar26);
  auVar51[4] = -(pbVar1[0x10] == bVar26);
  auVar51[5] = -(pbVar1[0x14] == bVar26);
  auVar51[6] = -(pbVar1[0x18] == bVar26);
  auVar51[7] = -(pbVar1[0x1c] == bVar26);
  auVar51[8] = -(pbVar1[0x20] == bVar26);
  auVar51[9] = -(pbVar1[0x24] == bVar26);
  auVar51[10] = -(pbVar1[0x28] == bVar26);
  auVar51[0xb] = -(pbVar1[0x2c] == bVar26);
  auVar51[0xc] = -(pbVar1[0x30] == bVar26);
  auVar51[0xd] = -(pbVar1[0x34] == bVar26);
  auVar51[0xe] = -(pbVar1[0x38] == bVar26);
  auVar51[0xf] = -(pbVar1[0x3c] == bVar26);
  auVar51 = NEON_sri(auVar50,auVar51,1,1);
  auVar9[1] = -(pbVar1[6] == bVar26);
  auVar9[0] = -(pbVar1[2] == bVar26);
/* wm:reversing this took months of machine time */
  auVar9[2] = -(pbVar1[10] == bVar26);
  auVar9[3] = -(pbVar1[0xe] == bVar26);
  auVar9[4] = -(pbVar1[0x12] == bVar26);
  auVar9[5] = -(pbVar1[0x16] == bVar26);
  auVar9[6] = -(pbVar1[0x1a] == bVar26);
  auVar9[7] = -(pbVar1[0x1e] == bVar26);
  auVar9[8] = -(pbVar1[0x22] == bVar26);
  auVar9[9] = -(pbVar1[0x26] == bVar26);
  auVar9[10] = -(pbVar1[0x2a] == bVar26);
  auVar9[0xb] = -(pbVar1[0x2e] == bVar26);
  auVar9[0xc] = -(pbVar1[0x32] == bVar26);
  auVar9[0xd] = -(pbVar1[0x36] == bVar26);
  auVar9[0xe] = -(pbVar1[0x3a] == bVar26);
  auVar9[0xf] = -(pbVar1[0x3e] == bVar26);
  auVar52 = NEON_sri(auVar43,auVar9,1,1);
  auVar52 = NEON_sri(auVar52,auVar51,2,1);
  auVar52 = NEON_sri(auVar52,auVar52,4,1);
  uVar18 = CONCAT17((char)(auVar52._14_2_ >> 4),
                    CONCAT16((char)(auVar52._12_2_ >> 4),
                             CONCAT15((char)(auVar52._10_2_ >> 4),
                                      CONCAT14((char)(auVar52._8_2_ >> 4),
                                               CONCAT13((char)(auVar52._6_2_ >> 4),
                                                        CONCAT12((char)(auVar52._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar52._2_2_ >> 4)
                                                                          ,(char)(auVar52._0_2_ >> 4
                                                                                 ))))))));
  lVar28 = 0;
  uVar31 = (uint)*pbVar1;
  if (uVar18 != 0) {
    iVar19 = 1 << (ulong)(uVar27 & 0x1f);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    uVar12 = (ulong)*pbVar1 & 0x3f;
    uVar18 = uVar18 >> uVar12 | uVar18 << 0x40 - uVar12;
    do {
      uVar12 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar27 = (int)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + uVar31 & 0x3f;
      if (uVar27 != 0) {
        uVar27 = *(uint *)(lVar24 + (ulong)uVar27 * 4);
        if (uVar27 < uVar21) break;
        Hint_Prefetch(lVar22 + (ulong)uVar27,0,0,0);
        auStack_2d8[lVar28] = uVar27;
        lVar28 = lVar28 + 1;
        iVar19 = iVar19 + -1;
      }
      uVar18 = uVar18 - 1 & uVar18;
      if ((uVar18 == 0) || (iVar19 == 0)) break;
    } while( true );
  }
  uVar21 = 0x3f;
  if ((uVar31 & 0x3f) != 1) {
    uVar21 = 0;
  }
  lVar23 = (ulong)uVar21 + (ulong)(uVar31 - 1 & 0x3f);
  *pbVar1 = (byte)lVar23;
/*  chat: discord.gg/sdkhDjTex  */
  pbVar1[lVar23] = bVar26;
  iVar19 = *(int *)(lVar16 + 0x2c);
  *(int *)(lVar16 + 0x2c) = iVar19 + 1;
  *(int *)(lVar24 + lVar23 * 4) = iVar19;
  if (lVar28 == 0) {
    uVar18 = 3;
  }
  else {
    lVar24 = 0;
    uVar12 = 3;
    do {
      uVar21 = auStack_2d8[lVar24];
      puVar11 = (ulong *)(lVar22 + (ulong)uVar21);
      if (*(int *)((long)puVar11 + (uVar12 - 3)) == *(int *)((long)puVar10 + (uVar12 - 3))) {
        puVar14 = puVar10;
        if (puVar10 < (ulong *)((long)param_3 + -7)) {
          if (*puVar11 == *puVar10) {
/*  donate: donate/README.md  */
            lVar16 = 0;
            puVar11 = (ulong *)(lVar22 + 8 + (ulong)uVar21);
            do {
              puVar14 = puVar14 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar14) goto LAB_002d2578;
              uVar18 = *puVar11;
              lVar16 = lVar16 + 8;
              puVar11 = puVar11 + 1;
            } while (uVar18 == *puVar14);
            uVar18 = *puVar14 ^ uVar18;
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = lVar16 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
          }
          else {
            uVar18 = *puVar10 ^ *puVar11;
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
          }
        }
        else {
LAB_002d2578:
          if (puVar14 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar11 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar11 == (short)*puVar14) {
              puVar11 = (ulong *)((long)puVar11 + 2);
// WM - do not claim this as your own
              puVar14 = (ulong *)((long)puVar14 + 2);
            }
          }
          if (puVar14 < param_3) {
            if ((char)*puVar11 == (char)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
          }
          uVar18 = (long)puVar14 - (long)puVar10;
        }
        if (uVar12 < uVar18) {
          *param_4 = (ulong)((uVar17 + 3) - uVar21);
          uVar12 = uVar18;
          if ((ulong *)((long)puVar10 + uVar18) == param_3) break;
        }
      }
      uVar18 = uVar12;
      lVar24 = lVar24 + 1;
      uVar12 = uVar18;
    } while (lVar24 != lVar28);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_1d8) {
    return uVar18;
  }
  auVar52 = ___stack_chk_fail(uVar18);
  puVar10 = auVar52._8_8_;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  lVar22 = auVar52._0_8_;
  lVar28 = *(long *)(lVar22 + 0x80);
  uVar31 = 1 << (ulong)(*(uint *)(lVar22 + 0x104) & 0x1f);
  lVar24 = *(long *)(lVar22 + 8);
  lVar16 = *(long *)(lVar22 + 0x10);
  uVar5 = 1 << (ulong)(*(uint *)(lVar22 + 0x100) & 0x1f);
  uVar27 = *(uint *)(lVar22 + 0x18);
  uVar20 = (uint)((long)puVar10 - lVar24);
  uVar17 = *(uint *)(lVar22 + 0x2c);
  uVar18 = (ulong)uVar17;
  uVar21 = uVar20 - uVar5;
  if (uVar20 - *(uint *)(lVar22 + 0x1c) <= uVar5 || *(int *)(lVar22 + 0x28) != 0) {
    uVar21 = *(uint *)(lVar22 + 0x1c);
  }
  uVar5 = 0;
  if (uVar31 <= uVar20) {
    uVar5 = uVar20 - uVar31;
  }
  uVar4 = *(uint *)(lVar22 + 0x10c);
  lVar23 = *(long *)(lVar22 + 0x70);
  uVar7 = ~(-1 << (ulong)(*(uint *)(lVar22 + 0x104) & 0x1f));
  uVar8 = 0x20 - *(int *)(lVar22 + 0x108);
  if (*(int *)(lVar22 + 300) == 0) {
    if (uVar17 < uVar20) {
      do {
        uVar17 = (uint)(*(int *)(lVar24 + uVar18) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
        *(undefined4 *)(lVar28 + (ulong)((uint)uVar18 & uVar7) * 4) =
/*  unlicensed copy if this notice is missing  */
             *(undefined4 *)(lVar23 + (ulong)uVar17 * 4);
        *(uint *)(lVar23 + (ulong)uVar17 * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while (uVar18 < ((long)puVar10 - lVar24 & 0xffffffffU));
    }
  }
  else if (uVar17 < uVar20) {
    uVar6 = (uint)(*(int *)(lVar24 + uVar18) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
    *(undefined4 *)(lVar28 + (ulong)(uVar17 & uVar7) * 4) =
         *(undefined4 *)(lVar23 + (ulong)uVar6 * 4);
    *(uint *)(lVar23 + (ulong)uVar6 * 4) = uVar17;
  }
  *(uint *)(lVar22 + 0x2c) = uVar20;
  uVar18 = *puVar10;
  uVar17 = *(uint *)(lVar23 + (ulong)((uint)((int)uVar18 * -0x61c8864f) >> (ulong)(uVar8 & 0x1f)) *
                              4);
  if (uVar17 < uVar21) {
    uVar12 = 3;
  }
  else {
    iVar19 = 1 << (ulong)(uVar4 & 0x1f);
    uVar12 = 3;
    do {
      uVar36 = (ulong)uVar17;
      if (uVar17 < uVar27) {
        piVar3 = (int *)(lVar16 + uVar36);
        if (*piVar3 == (int)uVar18) {
          lVar22 = func_0x002ad924((int *)((long)puVar10 + 4),piVar3 + 1,param_3,
                                   lVar16 + (ulong)uVar27,lVar24 + (ulong)uVar27);
          uVar36 = lVar22 + 4;
          goto joined_r0x002d2a54;
        }
      }
// WM - stripping the watermark breaks the license
      else {
        puVar11 = (ulong *)(lVar24 + uVar36);
        if (*(int *)((long)puVar11 + (uVar12 - 3)) == *(int *)((long)puVar10 + (uVar12 - 3))) {
          puVar14 = puVar10;
          if (puVar10 < (ulong *)((long)param_3 + -7)) {
            if (*puVar11 == *puVar10) {
              lVar22 = 0;
              puVar11 = (ulong *)(lVar24 + 8 + uVar36);
              do {
                puVar14 = puVar14 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar14) goto code_r0x002d29fc;
                uVar36 = *puVar11;
                lVar22 = lVar22 + 8;
                puVar11 = puVar11 + 1;
              } while (uVar36 == *puVar14);
              uVar36 = *puVar14 ^ uVar36;
              uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
              uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
              uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
/* WM - stripping the watermark breaks the license */
              uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
              uVar36 = lVar22 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
            }
            else {
              uVar36 = *puVar10 ^ *puVar11;
              uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
              uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
              uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
              uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
              uVar36 = (ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3;
            }
          }
          else {
code_r0x002d29fc:
            if (puVar14 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar11 == (int)*puVar14) {
                puVar11 = (ulong *)((long)puVar11 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
            }
            if (puVar14 < (ulong *)((long)param_3 + -1)) {
/* wm:do not claim this as your own */
              if ((short)*puVar11 == (short)*puVar14) {
                puVar11 = (ulong *)((long)puVar11 + 2);
                puVar14 = (ulong *)((long)puVar14 + 2);
              }
            }
            if (puVar14 < param_3) {
              if ((char)*puVar11 == (char)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 1);
              }
            }
            uVar36 = (long)puVar14 - (long)puVar10;
          }
joined_r0x002d2a54:
          if (uVar12 < uVar36) {
            *param_4 = (ulong)((uVar20 + 3) - uVar17);
            uVar12 = uVar36;
            if ((ulong *)((long)puVar10 + uVar36) == param_3) {
              return uVar36;
            }
          }
        }
      }
/* no support for modified copies - github.com/pengussy */
      if ((uVar17 <= uVar5) || (iVar19 = iVar19 + -1, iVar19 == 0)) {
        return uVar12;
      }
      uVar17 = *(uint *)(lVar28 + (ulong)(uVar17 & uVar31 - 1) * 4);
    } while (uVar21 <= uVar17);
  }
  return uVar12;
}

