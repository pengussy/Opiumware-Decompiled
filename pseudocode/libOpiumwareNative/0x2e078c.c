/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2e078c:9d10059519
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002e078c(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  byte *pbVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
/*  keep the notice, keep the source honest  */
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 *extraout_x8;
  ulong uVar18;
  ulong extraout_x9;
  ulong uVar19;
  ulong extraout_x10;
  uint uVar20;
  ulong uVar21;
  ulong extraout_x11;
  ulong uVar22;
  ulong extraout_x12;
  long lVar23;
  long extraout_x13;
  long lVar24;
  long lVar25;
  long extraout_x14;
  long lVar26;
  byte bVar27;
  int iVar28;
  int extraout_w15;
  long lVar29;
  ulong uVar30;
  long extraout_x16;
  ulong uVar31;
  ulong extraout_x17;
// donate: donate/README.md
  ulong *puVar32;
  ulong uVar33;
  int iVar34;
  ulong uVar35;
  ulong uVar36;
  uint *puVar37;
  uint *puVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint auStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar29 = -0x30e4432340650000;
  lVar25 = *(long *)(param_1 + 0x70);
  lVar23 = *(long *)(param_1 + 0x38);
  iVar28 = *(int *)(param_1 + 0x34);
  puVar37 = *(uint **)(param_1 + 8);
  uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar36 = (long)param_2 - (long)puVar37;
  uVar20 = (uint)uVar36;
  uVar14 = uVar20 - uVar9;
/* if you paid for this, you were scammed */
  if (uVar20 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x28) != 0) {
    uVar14 = *(uint *)(param_1 + 0x1c);
  }
  uVar22 = (ulong)uVar14;
  uVar14 = *(uint *)(param_1 + 0x10c);
  puVar17 = *(undefined8 **)(param_1 + 0xf8);
  bVar8 = 5 < uVar14;
  uVar9 = uVar14 - 6;
  if (bVar8) {
    uVar14 = 6;
  }
  uVar31 = *(ulong *)(param_1 + 0x60);
  uVar18 = (ulong)(uint)(1 << (ulong)(uVar14 & 0x1f));
  uVar21 = *param_2 * -0x30e4432340650000 >> ((ulong)(0x42 - *(int *)(puVar17 + 0x21)) & 0x3f);
  Hint_Prefetch(puVar17[0xe] + uVar21 * 0x10,0,0,0);
  uVar14 = 1 << (ulong)(uVar9 & 0x1f);
  if (!bVar8 || uVar9 == 0) {
    uVar14 = 0;
  }
  uVar19 = (ulong)uVar14;
  lVar24 = lVar23;
  lVar26 = lVar25;
  puVar38 = puVar37;
  if (*(int *)(param_1 + 300) == 0) {
    lVar10 = param_1 + 0x40;
    uVar14 = *(uint *)(param_1 + 0x2c);
    puVar12 = (uint *)(ulong)uVar14;
    if (0x180 < uVar20 - uVar14) goto LAB_002e0e08;
    if (uVar20 <= uVar14) goto LAB_002e094c;
    goto LAB_002e08a8;
  }
  uVar31 = (*param_2 * -0x30e4432340650000 ^ uVar31) >> ((ulong)(0x38 - iVar28) & 0x3f);
  *(uint *)(param_1 + 0x2c) = uVar20;
  do {
    iVar28 = (int)uVar18;
    *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (uint)uVar31;
    uVar30 = (ulong)((uint)uVar31 >> 2) & 0x3fffffc0;
/* WM - if you paid for this, you were scammed */
    lVar26 = lVar26 + uVar30 * 4;
    pbVar2 = (byte *)(lVar24 + uVar30);
    bVar27 = (byte)uVar31;
    auVar41[0] = -(pbVar2[1] == bVar27);
    auVar41[1] = -(pbVar2[5] == bVar27);
    auVar41[2] = -(pbVar2[9] == bVar27);
    auVar41[3] = -(pbVar2[0xd] == bVar27);
    auVar41[4] = -(pbVar2[0x11] == bVar27);
    auVar41[5] = -(pbVar2[0x15] == bVar27);
    auVar41[6] = -(pbVar2[0x19] == bVar27);
    auVar41[7] = -(pbVar2[0x1d] == bVar27);
    auVar41[8] = -(pbVar2[0x21] == bVar27);
    auVar41[9] = -(pbVar2[0x25] == bVar27);
    auVar41[10] = -(pbVar2[0x29] == bVar27);
    auVar41[0xb] = -(pbVar2[0x2d] == bVar27);
    auVar41[0xc] = -(pbVar2[0x31] == bVar27);
    auVar41[0xd] = -(pbVar2[0x35] == bVar27);
    auVar41[0xe] = -(pbVar2[0x39] == bVar27);
    auVar41[0xf] = -(pbVar2[0x3d] == bVar27);
    auVar39[0] = -(pbVar2[3] == bVar27);
    auVar39[1] = -(pbVar2[7] == bVar27);
    auVar39[2] = -(pbVar2[0xb] == bVar27);
    auVar39[3] = -(pbVar2[0xf] == bVar27);
    auVar39[4] = -(pbVar2[0x13] == bVar27);
    auVar39[5] = -(pbVar2[0x17] == bVar27);
    auVar39[6] = -(pbVar2[0x1b] == bVar27);
    auVar39[7] = -(pbVar2[0x1f] == bVar27);
    auVar39[8] = -(pbVar2[0x23] == bVar27);
    auVar39[9] = -(pbVar2[0x27] == bVar27);
    auVar39[10] = -(pbVar2[0x2b] == bVar27);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    auVar39[0xb] = -(pbVar2[0x2f] == bVar27);
    auVar39[0xc] = -(pbVar2[0x33] == bVar27);
    auVar39[0xd] = -(pbVar2[0x37] == bVar27);
    auVar39[0xe] = -(pbVar2[0x3b] == bVar27);
    auVar39[0xf] = -(pbVar2[0x3f] == bVar27);
    auVar40[1] = -(pbVar2[4] == bVar27);
    auVar40[0] = -(*pbVar2 == bVar27);
    auVar40[2] = -(pbVar2[8] == bVar27);
    auVar40[3] = -(pbVar2[0xc] == bVar27);
    auVar40[4] = -(pbVar2[0x10] == bVar27);
    auVar40[5] = -(pbVar2[0x14] == bVar27);
    auVar40[6] = -(pbVar2[0x18] == bVar27);
    auVar40[7] = -(pbVar2[0x1c] == bVar27);
    auVar40[8] = -(pbVar2[0x20] == bVar27);
    auVar40[9] = -(pbVar2[0x24] == bVar27);
    auVar40[10] = -(pbVar2[0x28] == bVar27);
    auVar40[0xb] = -(pbVar2[0x2c] == bVar27);
    auVar40[0xc] = -(pbVar2[0x30] == bVar27);
    auVar40[0xd] = -(pbVar2[0x34] == bVar27);
    auVar40[0xe] = -(pbVar2[0x38] == bVar27);
    auVar40[0xf] = -(pbVar2[0x3c] == bVar27);
    auVar41 = NEON_sri(auVar41,auVar40,1,1);
    auVar7[1] = -(pbVar2[6] == bVar27);
/* wm:reversing this took months of machine time */
    auVar7[0] = -(pbVar2[2] == bVar27);
    auVar7[2] = -(pbVar2[10] == bVar27);
    auVar7[3] = -(pbVar2[0xe] == bVar27);
    auVar7[4] = -(pbVar2[0x12] == bVar27);
    auVar7[5] = -(pbVar2[0x16] == bVar27);
    auVar7[6] = -(pbVar2[0x1a] == bVar27);
    auVar7[7] = -(pbVar2[0x1e] == bVar27);
    auVar7[8] = -(pbVar2[0x22] == bVar27);
    auVar7[9] = -(pbVar2[0x26] == bVar27);
    auVar7[10] = -(pbVar2[0x2a] == bVar27);
    auVar7[0xb] = -(pbVar2[0x2e] == bVar27);
    auVar7[0xc] = -(pbVar2[0x32] == bVar27);
    auVar7[0xd] = -(pbVar2[0x36] == bVar27);
    auVar7[0xe] = -(pbVar2[0x3a] == bVar27);
    auVar7[0xf] = -(pbVar2[0x3e] == bVar27);
    auVar40 = NEON_sri(auVar39,auVar7,1,1);
    auVar40 = NEON_sri(auVar40,auVar41,2,1);
    auVar40 = NEON_sri(auVar40,auVar40,4,1);
    uVar31 = CONCAT17((char)(auVar40._14_2_ >> 4),
                      CONCAT16((char)(auVar40._12_2_ >> 4),
                               CONCAT15((char)(auVar40._10_2_ >> 4),
                                        CONCAT14((char)(auVar40._8_2_ >> 4),
                                                 CONCAT13((char)(auVar40._6_2_ >> 4),
                                                          CONCAT12((char)(auVar40._4_2_ >> 4),
                                                                   CONCAT11((char)(auVar40._2_2_ >>
                                                                                  4),(char)(auVar40.
                                                  _0_2_ >> 4))))))));
    lVar23 = 0;
    uVar14 = (uint)*pbVar2;
    if (uVar31 != 0) {
      uVar30 = (ulong)*pbVar2 & 0x3f;
      uVar31 = uVar31 >> uVar30 | uVar31 << 0x40 - uVar30;
      do {
        iVar28 = (int)uVar18;
        uVar30 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
        uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
        uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
/* keep the notice, keep the source honest */
        uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
        uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
        uVar9 = (int)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) + uVar14 & 0x3f;
        if (uVar9 != 0) {
          uVar9 = *(uint *)(lVar26 + (ulong)uVar9 * 4);
          if (uVar9 < (uint)uVar22) break;
          Hint_Prefetch((long)puVar38 + (ulong)uVar9,0,0,0);
          auStack_170[lVar23] = uVar9;
          lVar23 = lVar23 + 1;
          uVar18 = (ulong)(iVar28 - 1);
        }
        iVar28 = (int)uVar18;
        uVar31 = uVar31 - 1 & uVar31;
        if ((uVar31 == 0) || (iVar28 == 0)) break;
      } while( true );
    }
    uVar9 = 0x3f;
    if ((uVar14 & 0x3f) != 1) {
      uVar9 = 0;
    }
    lVar25 = (ulong)uVar9 + (ulong)(uVar14 - 1 & 0x3f);
    *pbVar2 = (byte)lVar25;
    pbVar2[lVar25] = bVar27;
    iVar34 = *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x2c) = iVar34 + 1;
    *(int *)(lVar26 + lVar25 * 4) = iVar34;
    iVar34 = (int)uVar36;
    if (lVar23 == 0) {
      uVar22 = 3;
    }
    else {
      lVar25 = 0;
      uVar18 = 3;
      do {
        uVar14 = auStack_170[lVar25];
        puVar16 = (ulong *)((long)puVar38 + (ulong)uVar14);
/* origin: github.com/pengussy */
        if (*(int *)((long)puVar16 + (uVar18 - 3)) == *(int *)((long)param_2 + (uVar18 - 3))) {
          puVar32 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar16 == *param_2) {
              lVar29 = 0;
              puVar16 = (ulong *)((long)puVar38 + (ulong)uVar14 + 8);
              do {
                puVar32 = puVar32 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar32) goto LAB_002e0b34;
                uVar22 = *puVar16;
                lVar29 = lVar29 + 8;
                puVar16 = puVar16 + 1;
              } while (uVar22 == *puVar32);
              uVar22 = *puVar32 ^ uVar22;
              uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
              uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
              uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
/* wm:found on a paste site? it was re-uploaded illegally */
              uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
              uVar22 = lVar29 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
            }
            else {
              uVar22 = *param_2 ^ *puVar16;
              uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
              uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
              uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
              uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
              uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
            }
          }
          else {
LAB_002e0b34:
            if (puVar32 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar16 == (int)*puVar32) {
                puVar32 = (ulong *)((long)puVar32 + 4);
                puVar16 = (ulong *)((long)puVar16 + 4);
              }
            }
            if (puVar32 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar16 == (short)*puVar32) {
/* origin: github.com/pengussy - github.com/pengussy */
                puVar32 = (ulong *)((long)puVar32 + 2);
                puVar16 = (ulong *)((long)puVar16 + 2);
              }
            }
            if (puVar32 < param_3) {
              if ((char)*puVar16 == (char)*puVar32) {
                puVar32 = (ulong *)((long)puVar32 + 1);
              }
            }
            uVar22 = (long)puVar32 - (long)param_2;
          }
          if (uVar18 < uVar22) {
            *param_4 = (ulong)((iVar34 + 3) - uVar14);
            uVar18 = uVar22;
            if ((ulong *)((long)param_2 + uVar22) == param_3) break;
          }
        }
        lVar25 = lVar25 + 1;
        uVar22 = uVar18;
      } while (lVar25 != lVar23);
// WM - watermarked copy - do not remove
    }
    uVar4 = *puVar17;
    lVar23 = puVar17[1];
    puVar12 = (uint *)(puVar17[0xe] + uVar21 * 0x10);
    Hint_Prefetch(lVar23 + (ulong)*puVar12,0,0,0);
    Hint_Prefetch(lVar23 + (ulong)puVar12[1],0,0,0);
    uVar9 = puVar12[3];
    Hint_Prefetch(lVar23 + (ulong)puVar12[2],0,0,0);
    puVar38 = (uint *)(puVar17[0x10] + (ulong)(uVar9 >> 8) * 4);
    iVar15 = ((int)uVar4 - (int)lVar23) - uVar5;
    Hint_Prefetch(puVar38,0,0,0);
    uVar14 = iVar28 + (int)uVar19;
    uVar20 = uVar14;
    if (2 < uVar14) {
      uVar20 = 3;
    }
    uVar18 = (ulong)uVar20;
    if (uVar14 == 0) {
LAB_002e0de8:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar22;
      }
    }
    else {
      puVar13 = puVar12;
      do {
        puVar12 = puVar13 + 1;
        uVar6 = *puVar13;
        uVar21 = (ulong)uVar6;
        if (uVar6 == 0) {
          uVar31 = uVar22;
          goto LAB_002e0d90;
        }
        if (*(int *)(lVar23 + uVar21) == (int)*param_2) {
          lVar25 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar23 + uVar21) + 1,param_3,
                                   uVar4,(long)puVar37 + (ulong)uVar5);
/* thanks for reading - discord.gg/sdkhDjTex */
          uVar31 = lVar25 + 4;
          if (uVar22 < uVar31) {
            *param_4 = (ulong)((iVar34 + iVar15 + 3) - uVar6);
            uVar22 = uVar31;
            if ((ulong *)((long)param_2 + uVar31) == param_3) goto LAB_002e0d90;
          }
        }
        uVar18 = uVar18 - 1;
        puVar13 = puVar12;
      } while (uVar18 != 0);
      uVar9 = uVar9 & 0xff;
      uVar6 = uVar14 - uVar20;
      if (uVar9 <= uVar14 - uVar20) {
        uVar6 = uVar9;
      }
      if (uVar6 == 0) goto LAB_002e0de8;
      uVar36 = (ulong)uVar6;
      lVar25 = uVar36 << 2;
      puVar12 = puVar38;
      do {
        Hint_Prefetch(lVar23 + (ulong)*puVar12,0,0,0);
        lVar25 = lVar25 + -4;
        puVar12 = puVar12 + 1;
      } while (lVar25 != 0);
      puVar12 = (uint *)((long)param_2 + 4);
      uVar18 = *param_2;
      uVar14 = iVar34 + iVar15 + 3;
      uVar21 = (ulong)uVar14;
      puVar13 = puVar38;
      do {
        puVar38 = puVar13 + 1;
        uVar9 = *puVar13;
/* watermarked copy - do not remove - github.com/pengussy */
        piVar3 = (int *)(lVar23 + (ulong)uVar9);
        if (*piVar3 == (int)uVar18) {
          lVar25 = func_0x002ad924(puVar12,piVar3 + 1,param_3,uVar4,(long)puVar37 + (ulong)uVar5);
          uVar31 = lVar25 + 4;
          if (uVar22 < uVar31) {
            *param_4 = (ulong)(uVar14 - uVar9);
            uVar22 = uVar31;
            if ((ulong *)((long)param_2 + uVar31) == param_3) break;
          }
        }
        uVar9 = (int)uVar36 - 1;
        uVar36 = (ulong)uVar9;
        uVar31 = uVar22;
        puVar13 = puVar38;
      } while (uVar9 != 0);
LAB_002e0d90:
      uVar36 = uVar21;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar31;
      }
    }
    auVar40 = ___stack_chk_fail();
    lVar10 = auVar40._8_8_;
    param_1 = auVar40._0_8_;
    puVar17 = extraout_x8;
    uVar18 = extraout_x9;
    uVar19 = extraout_x10;
    uVar21 = extraout_x11;
    uVar22 = extraout_x12;
    lVar24 = extraout_x13;
    lVar26 = extraout_x14;
    lVar29 = extraout_x16;
    uVar31 = extraout_x17;
    iVar28 = extraout_w15;
LAB_002e0e08:
    lVar23 = lVar24;
/* WM - reversing this took months of machine time */
    lVar25 = lVar26;
    if ((uint)puVar12 < 0xffffffa0) {
      puVar13 = puVar12 + 0x18;
      do {
        uVar30 = (*(long *)((long)(puVar38 + 2) + (long)puVar12) * lVar29 ^
                 *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar28) & 0x3f);
        uVar33 = uVar30 >> 2 & 0x3fffffc0;
        lVar23 = lVar26 + uVar33 * 4;
        Hint_Prefetch(lVar23,0,0,0);
        Hint_Prefetch(lVar23 + 0x40,0,0,0);
        lVar23 = lVar24 + uVar33;
        Hint_Prefetch(lVar23,0,0,0);
        Hint_Prefetch(lVar23 + 0x20,0,0,0);
        uVar9 = *(uint *)(lVar10 + ((ulong)puVar12 & 7) * 4);
        *(int *)(lVar10 + ((ulong)puVar12 & 7) * 4) = (int)uVar30;
        uVar30 = (ulong)(uVar9 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar24 + uVar30);
        uVar14 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar14 = 0;
        }
        lVar23 = (ulong)uVar14 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar23;
        pbVar2[lVar23] = (byte)uVar9;
        *(int *)(lVar26 + uVar30 * 4 + lVar23 * 4) = (int)puVar12;
/* do not claim this as your own */
        puVar12 = (uint *)((long)puVar12 + 1);
      } while (puVar13 != puVar12);
      lVar25 = *(long *)(param_1 + 0x70);
      lVar23 = *(long *)(param_1 + 0x38);
      puVar38 = puVar37;
    }
    uVar14 = (uint)uVar36 - 0x20;
    puVar12 = (uint *)(ulong)uVar14;
    iVar15 = (int)((long)param_2 + 1U) - (int)((long)puVar38 + (long)puVar12);
    iVar34 = 8;
    if (iVar15 + 1U < 8) {
      iVar34 = iVar15 + 1;
    }
    iVar15 = 0;
    if ((ulong)((long)puVar38 + (long)puVar12) <= (long)param_2 + 1U) {
      iVar15 = iVar34;
    }
    if (uVar14 < iVar15 + uVar14) {
      iVar34 = *(int *)(param_1 + 0x34);
      uVar30 = *(ulong *)(param_1 + 0x60);
      puVar13 = puVar12;
      do {
        uVar33 = (*(long *)((long)puVar38 + (long)puVar13) * lVar29 ^ uVar30) >>
                 ((ulong)(0x38 - iVar34) & 0x3f);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
        uVar35 = uVar33 >> 2 & 0x3fffffc0;
        lVar11 = lVar25 + uVar35 * 4;
        Hint_Prefetch(lVar11,0,0,0);
        Hint_Prefetch(lVar11 + 0x40,0,0,0);
        lVar11 = lVar23 + uVar35;
        Hint_Prefetch(lVar11,0,0,0);
        Hint_Prefetch(lVar11 + 0x20,0,0,0);
        *(int *)(lVar10 + ((ulong)puVar13 & 7) * 4) = (int)uVar33;
        puVar13 = (uint *)((long)puVar13 + 1);
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    if (uVar14 < (uint)uVar36) {
LAB_002e08a8:
      lVar11 = *(long *)(param_1 + 8);
      iVar34 = *(int *)(param_1 + 0x34);
      do {
        uVar30 = (*(long *)(lVar11 + 8 + (long)puVar12) * lVar29 ^ *(ulong *)(param_1 + 0x60)) >>
                 ((ulong)(0x38 - iVar34) & 0x3f);
        uVar33 = uVar30 >> 2 & 0x3fffffc0;
        lVar1 = lVar25 + uVar33 * 4;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar23 + uVar33;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x20,0,0,0);
        uVar9 = *(uint *)(lVar10 + ((ulong)puVar12 & 7) * 4);
        *(int *)(lVar10 + ((ulong)puVar12 & 7) * 4) = (int)uVar30;
        uVar30 = (ulong)(uVar9 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar23 + uVar30);
        uVar14 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar14 = 0;
        }
        lVar1 = (ulong)uVar14 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar1;
        pbVar2[lVar1] = (byte)uVar9;
        *(int *)(lVar25 + uVar30 * 4 + lVar1 * 4) = (int)puVar12;
        puVar12 = (uint *)((long)puVar12 + 1);
      } while (puVar12 < (uint *)(uVar36 & 0xffffffff));
    }
LAB_002e094c:
    *(int *)(param_1 + 0x2c) = (int)uVar36;
    uVar30 = (*(long *)((long)puVar38 + (uVar36 & 0xffffffff) + 8) * lVar29 ^ uVar31) >>
             ((ulong)(0x38 - iVar28) & 0x3f);
    uVar31 = uVar30 >> 2 & 0x3fffffc0;
    lVar23 = lVar26 + uVar31 * 4;
    Hint_Prefetch(lVar23,0,0,0);
    Hint_Prefetch(lVar23 + 0x40,0,0,0);
    lVar23 = lVar24 + uVar31;
    Hint_Prefetch(lVar23,0,0,0);
    Hint_Prefetch(lVar23 + 0x20,0,0,0);
    uVar31 = (ulong)*(uint *)(lVar10 + (uVar36 & 7) * 4);
    *(int *)(lVar10 + (uVar36 & 7) * 4) = (int)uVar30;
  } while( true );
}

