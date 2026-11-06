/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2d221c:8186ce8897
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002d221c(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  byte bVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  int iVar31;
/* no support for modified copies - github.com/pengussy */
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint auStack_168 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar23 = *(long *)(param_1 + 0x70);
  lVar21 = *(long *)(param_1 + 0x38);
  iVar18 = *(int *)(param_1 + 0x34);
  lVar14 = *(long *)(param_1 + 8);
  uVar25 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar16 = (long)param_2 - lVar14;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  uVar15 = (uint)uVar16;
  uVar20 = uVar15 - uVar25;
  if (uVar15 - *(uint *)(param_1 + 0x1c) <= uVar25 || *(int *)(param_1 + 0x28) != 0) {
    uVar20 = *(uint *)(param_1 + 0x1c);
  }
  uVar25 = *(uint *)(param_1 + 0x10c);
  if (5 < uVar25) {
    uVar25 = 6;
  }
  uVar11 = *(ulong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 300) == 0) {
    lVar27 = param_1 + 0x40;
    uVar28 = *(uint *)(param_1 + 0x2c);
    uVar34 = (ulong)uVar28;
    lVar22 = lVar21;
    lVar13 = lVar23;
    if (0x180 < uVar15 - uVar28) {
      if (uVar28 < 0xffffffa0) {
        uVar32 = uVar34 + 0x60;
        do {
// WM - unlicensed copy if this notice is missing
          uVar33 = (*(long *)(lVar14 + 8 + uVar34) * -0x30e4432340650000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar18) & 0x3f);
          uVar30 = uVar33 >> 2 & 0x3fffffc0;
          lVar22 = lVar23 + uVar30 * 4;
          Hint_Prefetch(lVar22,0,0,0);
          Hint_Prefetch(lVar22 + 0x40,0,0,0);
          lVar22 = lVar21 + uVar30;
          Hint_Prefetch(lVar22,0,0,0);
          Hint_Prefetch(lVar22 + 0x20,0,0,0);
          uVar5 = *(uint *)(lVar27 + (uVar34 & 7) * 4);
          *(int *)(lVar27 + (uVar34 & 7) * 4) = (int)uVar33;
          uVar33 = (ulong)(uVar5 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar21 + uVar33);
          uVar28 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar28 = 0;
          }
          lVar22 = (ulong)uVar28 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar22;
          pbVar2[lVar22] = (byte)uVar5;
          *(int *)(lVar23 + uVar33 * 4 + lVar22 * 4) = (int)uVar34;
          uVar34 = uVar34 + 1;
        } while (uVar32 != uVar34);
        lVar13 = *(long *)(param_1 + 0x70);
        lVar22 = *(long *)(param_1 + 0x38);
      }
      uVar28 = uVar15 - 0x20;
      uVar34 = (ulong)uVar28;
      iVar29 = (int)((long)param_2 + 1U) - (int)(lVar14 + uVar34);
      iVar31 = 8;
      if (iVar29 + 1U < 8) {
        iVar31 = iVar29 + 1;
      }
      iVar29 = 0;
      if (lVar14 + uVar34 <= (long)param_2 + 1U) {
/* unlicensed copy if this notice is missing */
        iVar29 = iVar31;
      }
      if (uVar28 < iVar29 + uVar28) {
        iVar31 = *(int *)(param_1 + 0x34);
        uVar32 = *(ulong *)(param_1 + 0x60);
        do {
          uVar33 = (*(long *)(lVar14 + uVar34) * -0x30e4432340650000 ^ uVar32) >>
                   ((ulong)(0x38 - iVar31) & 0x3f);
          uVar30 = uVar33 >> 2 & 0x3fffffc0;
          lVar26 = lVar13 + uVar30 * 4;
          Hint_Prefetch(lVar26,0,0,0);
          Hint_Prefetch(lVar26 + 0x40,0,0,0);
          lVar26 = lVar22 + uVar30;
          Hint_Prefetch(lVar26,0,0,0);
          Hint_Prefetch(lVar26 + 0x20,0,0,0);
          *(int *)(lVar27 + (uVar34 & 7) * 4) = (int)uVar33;
          uVar34 = uVar34 + 1;
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
    }
    if (uVar28 < uVar15) {
/* WM - do not claim this as your own */
      lVar26 = *(long *)(param_1 + 8);
      iVar31 = *(int *)(param_1 + 0x34);
      uVar34 = (ulong)uVar28;
      do {
        uVar32 = (*(long *)(lVar26 + 8 + uVar34) * -0x30e4432340650000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar31) & 0x3f);
        uVar33 = uVar32 >> 2 & 0x3fffffc0;
        lVar1 = lVar13 + uVar33 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar22 + uVar33;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x20,0,0,0);
        uVar5 = *(uint *)(lVar27 + (uVar34 & 7) * 4);
        *(int *)(lVar27 + (uVar34 & 7) * 4) = (int)uVar32;
        uVar32 = (ulong)(uVar5 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar22 + uVar32);
        uVar28 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar28 = 0;
        }
        lVar1 = (ulong)uVar28 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar1;
        pbVar2[lVar1] = (byte)uVar5;
        *(int *)(lVar13 + uVar32 * 4 + lVar1 * 4) = (int)uVar34;
        uVar34 = uVar34 + 1;
      } while (uVar34 < (uVar16 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar15;
/* wm:unlicensed copy if this notice is missing */
    uVar34 = (*(long *)(lVar14 + (uVar16 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar11) >>
             ((ulong)(0x38 - iVar18) & 0x3f);
    uVar11 = uVar34 >> 2 & 0x3fffffc0;
    lVar22 = lVar23 + uVar11 * 4;
    Hint_Prefetch(lVar22,0,0,0);
    Hint_Prefetch(lVar22 + 0x40,0,0,0);
    lVar22 = lVar21 + uVar11;
    Hint_Prefetch(lVar22,0,0,0);
    Hint_Prefetch(lVar22 + 0x20,0,0,0);
    uVar28 = *(uint *)(lVar27 + (uVar16 & 7) * 4);
    *(int *)(lVar27 + (uVar16 & 7) * 4) = (int)uVar34;
  }
  else {
    uVar28 = (uint)((*param_2 * -0x30e4432340650000 ^ uVar11) >> ((ulong)(0x38 - iVar18) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar15;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar28;
  uVar16 = (ulong)(uVar28 >> 2) & 0x3fffffc0;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  lVar23 = lVar23 + uVar16 * 4;
  pbVar2 = (byte *)(lVar21 + uVar16);
  bVar24 = (byte)uVar28;
  auVar37[0] = -(pbVar2[1] == bVar24);
  auVar37[1] = -(pbVar2[5] == bVar24);
  auVar37[2] = -(pbVar2[9] == bVar24);
  auVar37[3] = -(pbVar2[0xd] == bVar24);
  auVar37[4] = -(pbVar2[0x11] == bVar24);
  auVar37[5] = -(pbVar2[0x15] == bVar24);
  auVar37[6] = -(pbVar2[0x19] == bVar24);
  auVar37[7] = -(pbVar2[0x1d] == bVar24);
  auVar37[8] = -(pbVar2[0x21] == bVar24);
  auVar37[9] = -(pbVar2[0x25] == bVar24);
  auVar37[10] = -(pbVar2[0x29] == bVar24);
  auVar37[0xb] = -(pbVar2[0x2d] == bVar24);
  auVar37[0xc] = -(pbVar2[0x31] == bVar24);
  auVar37[0xd] = -(pbVar2[0x35] == bVar24);
  auVar37[0xe] = -(pbVar2[0x39] == bVar24);
  auVar37[0xf] = -(pbVar2[0x3d] == bVar24);
  auVar35[0] = -(pbVar2[3] == bVar24);
  auVar35[1] = -(pbVar2[7] == bVar24);
  auVar35[2] = -(pbVar2[0xb] == bVar24);
// reversing this took months of machine time
  auVar35[3] = -(pbVar2[0xf] == bVar24);
  auVar35[4] = -(pbVar2[0x13] == bVar24);
  auVar35[5] = -(pbVar2[0x17] == bVar24);
  auVar35[6] = -(pbVar2[0x1b] == bVar24);
  auVar35[7] = -(pbVar2[0x1f] == bVar24);
  auVar35[8] = -(pbVar2[0x23] == bVar24);
  auVar35[9] = -(pbVar2[0x27] == bVar24);
  auVar35[10] = -(pbVar2[0x2b] == bVar24);
  auVar35[0xb] = -(pbVar2[0x2f] == bVar24);
  auVar35[0xc] = -(pbVar2[0x33] == bVar24);
  auVar35[0xd] = -(pbVar2[0x37] == bVar24);
  auVar35[0xe] = -(pbVar2[0x3b] == bVar24);
  auVar35[0xf] = -(pbVar2[0x3f] == bVar24);
  auVar36[1] = -(pbVar2[4] == bVar24);
  auVar36[0] = -(*pbVar2 == bVar24);
  auVar36[2] = -(pbVar2[8] == bVar24);
  auVar36[3] = -(pbVar2[0xc] == bVar24);
  auVar36[4] = -(pbVar2[0x10] == bVar24);
  auVar36[5] = -(pbVar2[0x14] == bVar24);
  auVar36[6] = -(pbVar2[0x18] == bVar24);
  auVar36[7] = -(pbVar2[0x1c] == bVar24);
  auVar36[8] = -(pbVar2[0x20] == bVar24);
  auVar36[9] = -(pbVar2[0x24] == bVar24);
  auVar36[10] = -(pbVar2[0x28] == bVar24);
  auVar36[0xb] = -(pbVar2[0x2c] == bVar24);
  auVar36[0xc] = -(pbVar2[0x30] == bVar24);
  auVar36[0xd] = -(pbVar2[0x34] == bVar24);
  auVar36[0xe] = -(pbVar2[0x38] == bVar24);
  auVar36[0xf] = -(pbVar2[0x3c] == bVar24);
/* WM - more drops soon - github.com/pengussy */
  auVar37 = NEON_sri(auVar37,auVar36,1,1);
  auVar9[1] = -(pbVar2[6] == bVar24);
  auVar9[0] = -(pbVar2[2] == bVar24);
  auVar9[2] = -(pbVar2[10] == bVar24);
  auVar9[3] = -(pbVar2[0xe] == bVar24);
  auVar9[4] = -(pbVar2[0x12] == bVar24);
  auVar9[5] = -(pbVar2[0x16] == bVar24);
  auVar9[6] = -(pbVar2[0x1a] == bVar24);
  auVar9[7] = -(pbVar2[0x1e] == bVar24);
  auVar9[8] = -(pbVar2[0x22] == bVar24);
  auVar9[9] = -(pbVar2[0x26] == bVar24);
  auVar9[10] = -(pbVar2[0x2a] == bVar24);
  auVar9[0xb] = -(pbVar2[0x2e] == bVar24);
  auVar9[0xc] = -(pbVar2[0x32] == bVar24);
  auVar9[0xd] = -(pbVar2[0x36] == bVar24);
  auVar9[0xe] = -(pbVar2[0x3a] == bVar24);
  auVar9[0xf] = -(pbVar2[0x3e] == bVar24);
  auVar36 = NEON_sri(auVar35,auVar9,1,1);
  auVar36 = NEON_sri(auVar36,auVar37,2,1);
  auVar36 = NEON_sri(auVar36,auVar36,4,1);
  uVar16 = CONCAT17((char)(auVar36._14_2_ >> 4),
                    CONCAT16((char)(auVar36._12_2_ >> 4),
                             CONCAT15((char)(auVar36._10_2_ >> 4),
                                      CONCAT14((char)(auVar36._8_2_ >> 4),
                                               CONCAT13((char)(auVar36._6_2_ >> 4),
                                                        CONCAT12((char)(auVar36._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar36._2_2_ >> 4)
                                                                          ,(char)(auVar36._0_2_ >> 4
                                                                                 ))))))));
// WM - stripping the watermark breaks the license
  lVar21 = 0;
  uVar28 = (uint)*pbVar2;
  if (uVar16 != 0) {
    iVar18 = 1 << (ulong)(uVar25 & 0x1f);
    uVar11 = (ulong)*pbVar2 & 0x3f;
    uVar16 = uVar16 >> uVar11 | uVar16 << 0x40 - uVar11;
    do {
      uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar25 = (int)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + uVar28 & 0x3f;
      if (uVar25 != 0) {
        uVar25 = *(uint *)(lVar23 + (ulong)uVar25 * 4);
        if (uVar25 < uVar20) break;
        Hint_Prefetch(lVar14 + (ulong)uVar25,0,0,0);
        auStack_168[lVar21] = uVar25;
/*  proprietary - see LICENSE - do not sell  */
        lVar21 = lVar21 + 1;
        iVar18 = iVar18 + -1;
      }
      uVar16 = uVar16 - 1 & uVar16;
      if ((uVar16 == 0) || (iVar18 == 0)) break;
    } while( true );
  }
  uVar20 = 0x3f;
  if ((uVar28 & 0x3f) != 1) {
    uVar20 = 0;
  }
  lVar27 = (ulong)uVar20 + (ulong)(uVar28 - 1 & 0x3f);
  *pbVar2 = (byte)lVar27;
  pbVar2[lVar27] = bVar24;
  iVar18 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar18 + 1;
  *(int *)(lVar23 + lVar27 * 4) = iVar18;
// WM - reversing this took months of machine time
  if (lVar21 == 0) {
    uVar16 = 3;
  }
  else {
    lVar23 = 0;
    uVar11 = 3;
    do {
      uVar20 = auStack_168[lVar23];
      puVar10 = (ulong *)(lVar14 + (ulong)uVar20);
      if (*(int *)((long)puVar10 + (uVar11 - 3)) == *(int *)((long)param_2 + (uVar11 - 3))) {
        puVar12 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar10 == *param_2) {
            lVar27 = 0;
            puVar10 = (ulong *)(lVar14 + 8 + (ulong)uVar20);
            do {
              puVar12 = puVar12 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar12) goto LAB_002d2578;
              uVar16 = *puVar10;
              lVar27 = lVar27 + 8;
              puVar10 = puVar10 + 1;
            } while (uVar16 == *puVar12);
            uVar16 = *puVar12 ^ uVar16;
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = lVar27 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
          }
          else {
            uVar16 = *param_2 ^ *puVar10;
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
// WM - more drops soon - github.com/pengussy
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
          }
        }
        else {
LAB_002d2578:
          if (puVar12 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar10 == (int)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar10 = (ulong *)((long)puVar10 + 4);
            }
          }
          if (puVar12 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar10 == (short)*puVar12) {
// WM - do not claim this as your own
              puVar10 = (ulong *)((long)puVar10 + 2);
              puVar12 = (ulong *)((long)puVar12 + 2);
            }
          }
          if (puVar12 < param_3) {
            if ((char)*puVar10 == (char)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 1);
            }
          }
          uVar16 = (long)puVar12 - (long)param_2;
        }
        if (uVar11 < uVar16) {
          *param_4 = (ulong)((uVar15 + 3) - uVar20);
          uVar11 = uVar16;
          if ((ulong *)((long)param_2 + uVar16) == param_3) break;
        }
      }
      uVar16 = uVar11;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      lVar23 = lVar23 + 1;
      uVar11 = uVar16;
    } while (lVar23 != lVar21);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar16;
  }
  auVar36 = ___stack_chk_fail(uVar16);
  puVar10 = auVar36._8_8_;
  lVar21 = auVar36._0_8_;
  lVar27 = *(long *)(lVar21 + 0x80);
  uVar28 = 1 << (ulong)(*(uint *)(lVar21 + 0x104) & 0x1f);
  lVar23 = *(long *)(lVar21 + 8);
  lVar14 = *(long *)(lVar21 + 0x10);
  uVar5 = 1 << (ulong)(*(uint *)(lVar21 + 0x100) & 0x1f);
  uVar25 = *(uint *)(lVar21 + 0x18);
  uVar19 = (uint)((long)puVar10 - lVar23);
  uVar15 = *(uint *)(lVar21 + 0x2c);
  uVar16 = (ulong)uVar15;
  uVar20 = uVar19 - uVar5;
  if (uVar19 - *(uint *)(lVar21 + 0x1c) <= uVar5 || *(int *)(lVar21 + 0x28) != 0) {
    uVar20 = *(uint *)(lVar21 + 0x1c);
  }
  uVar5 = 0;
  if (uVar28 <= uVar19) {
    uVar5 = uVar19 - uVar28;
  }
  uVar4 = *(uint *)(lVar21 + 0x10c);
/* donate: donate/README.md */
  lVar22 = *(long *)(lVar21 + 0x70);
  uVar7 = ~(-1 << (ulong)(*(uint *)(lVar21 + 0x104) & 0x1f));
  uVar8 = 0x20 - *(int *)(lVar21 + 0x108);
  if (*(int *)(lVar21 + 300) == 0) {
    if (uVar15 < uVar19) {
      do {
        uVar15 = (uint)(*(int *)(lVar23 + uVar16) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
        *(undefined4 *)(lVar27 + (ulong)((uint)uVar16 & uVar7) * 4) =
             *(undefined4 *)(lVar22 + (ulong)uVar15 * 4);
        *(uint *)(lVar22 + (ulong)uVar15 * 4) = (uint)uVar16;
        uVar16 = uVar16 + 1;
      } while (uVar16 < ((long)puVar10 - lVar23 & 0xffffffffU));
    }
  }
  else if (uVar15 < uVar19) {
    uVar6 = (uint)(*(int *)(lVar23 + uVar16) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
    *(undefined4 *)(lVar27 + (ulong)(uVar15 & uVar7) * 4) =
         *(undefined4 *)(lVar22 + (ulong)uVar6 * 4);
    *(uint *)(lVar22 + (ulong)uVar6 * 4) = uVar15;
  }
  *(uint *)(lVar21 + 0x2c) = uVar19;
  uVar16 = *puVar10;
  uVar15 = *(uint *)(lVar22 + (ulong)((uint)((int)uVar16 * -0x61c8864f) >> (ulong)(uVar8 & 0x1f)) *
                              4);
  if (uVar15 < uVar20) {
    uVar11 = 3;
  }
  else {
    iVar18 = 1 << (ulong)(uVar4 & 0x1f);
/* WM - no support for modified copies */
    uVar11 = 3;
    do {
      uVar34 = (ulong)uVar15;
      if (uVar15 < uVar25) {
        piVar3 = (int *)(lVar14 + uVar34);
        if (*piVar3 == (int)uVar16) {
          lVar21 = func_0x002ad924((int *)((long)puVar10 + 4),piVar3 + 1,param_3,
                                   lVar14 + (ulong)uVar25,lVar23 + (ulong)uVar25);
          uVar34 = lVar21 + 4;
          goto joined_r0x002d2a54;
        }
      }
      else {
        puVar12 = (ulong *)(lVar23 + uVar34);
        if (*(int *)((long)puVar12 + (uVar11 - 3)) == *(int *)((long)puVar10 + (uVar11 - 3))) {
          puVar17 = puVar10;
          if (puVar10 < (ulong *)((long)param_3 + -7)) {
            if (*puVar12 == *puVar10) {
              lVar21 = 0;
              puVar12 = (ulong *)(lVar23 + 8 + uVar34);
              do {
                puVar17 = puVar17 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar17) goto code_r0x002d29fc;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                uVar34 = *puVar12;
                lVar21 = lVar21 + 8;
                puVar12 = puVar12 + 1;
              } while (uVar34 == *puVar17);
              uVar34 = *puVar17 ^ uVar34;
              uVar34 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar34 & 0x5555555555555555) << 1;
              uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
              uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
              uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
              uVar34 = lVar21 + ((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
            }
            else {
              uVar34 = *puVar10 ^ *puVar12;
              uVar34 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar34 & 0x5555555555555555) << 1;
              uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
              uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
              uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
              uVar34 = (ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3;
            }
          }
          else {
code_r0x002d29fc:
            if (puVar17 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar12 == (int)*puVar17) {
                puVar12 = (ulong *)((long)puVar12 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar17 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar12 == (short)*puVar17) {
                puVar12 = (ulong *)((long)puVar12 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
            }
            if (puVar17 < param_3) {
              if ((char)*puVar12 == (char)*puVar17) {
                puVar17 = (ulong *)((long)puVar17 + 1);
              }
            }
            uVar34 = (long)puVar17 - (long)puVar10;
          }
joined_r0x002d2a54:
          if (uVar11 < uVar34) {
            *param_4 = (ulong)((uVar19 + 3) - uVar15);
            uVar11 = uVar34;
            if ((ulong *)((long)puVar10 + uVar34) == param_3) {
              return uVar34;
            }
          }
        }
      }
      if ((uVar15 <= uVar5) || (iVar18 = iVar18 + -1, iVar18 == 0)) {
        return uVar11;
      }
      uVar15 = *(uint *)(lVar27 + (ulong)(uVar15 & uVar28 - 1) * 4);
    } while (uVar20 <= uVar15);
  }
  return uVar11;
}

