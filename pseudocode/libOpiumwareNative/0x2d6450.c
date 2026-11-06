/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2d6450:a733570ba2
   =========================================================================== */

void FUN_002d6450(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  int iVar18;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  ulong *puVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint auStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar22 = *(ulong **)(param_1 + 0x70);
  lVar21 = *(long *)(param_1 + 0x38);
  iVar18 = *(int *)(param_1 + 0x34);
  puVar8 = *(ulong **)(param_1 + 8);
// no support for modified copies
  puVar10 = *(ulong **)(param_1 + 0x10);
  uVar24 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar25 = *(uint *)(param_1 + 0x18);
  uVar16 = (long)param_2 - (long)puVar8;
  uVar15 = (uint)uVar16;
  uVar20 = uVar15 - uVar24;
  if (uVar15 - *(uint *)(param_1 + 0x1c) <= uVar24 || *(int *)(param_1 + 0x28) != 0) {
    uVar20 = *(uint *)(param_1 + 0x1c);
  }
  uVar24 = *(uint *)(param_1 + 0x10c);
  if (5 < uVar24) {
    uVar24 = 6;
  }
  uVar27 = *(ulong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 300) == 0) {
    lVar33 = param_1 + 0x40;
    uVar11 = *(uint *)(param_1 + 0x2c);
    uVar6 = (ulong)uVar11;
    puVar9 = puVar22;
    lVar34 = lVar21;
    if (0x180 < uVar15 - uVar11) {
      if (uVar11 < 0xffffffa0) {
        uVar28 = uVar6 + 0x60;
        do {
          uVar29 = (*(long *)((long)puVar8 + uVar6 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar18) & 0x3f);
          uVar14 = uVar29 >> 2 & 0x3fffffc0;
          lVar34 = (long)puVar22 + uVar14 * 4;
          Hint_Prefetch(lVar34,0,0,0);
          Hint_Prefetch(lVar34 + 0x40,0,0,0);
          lVar34 = lVar21 + uVar14;
/* donate: donate/README.md */
          Hint_Prefetch(lVar34,0,0,0);
          Hint_Prefetch(lVar34 + 0x20,0,0,0);
          uVar32 = *(uint *)(lVar33 + (uVar6 & 7) * 4);
          *(int *)(lVar33 + (uVar6 & 7) * 4) = (int)uVar29;
          uVar29 = (ulong)(uVar32 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar21 + uVar29);
          uVar11 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar11 = 0;
          }
          lVar34 = (ulong)uVar11 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar34;
          pbVar2[lVar34] = (byte)uVar32;
          *(int *)((long)puVar22 + lVar34 * 4 + uVar29 * 4) = (int)uVar6;
          uVar6 = uVar6 + 1;
        } while (uVar28 != uVar6);
        puVar9 = *(ulong **)(param_1 + 0x70);
        lVar34 = *(long *)(param_1 + 0x38);
      }
      uVar11 = uVar15 - 0x20;
      uVar6 = (ulong)uVar11;
      iVar12 = (int)((long)param_2 + 1U) - (int)((long)puVar8 + uVar6);
      iVar31 = 8;
      if (iVar12 + 1U < 8) {
        iVar31 = iVar12 + 1;
      }
      iVar12 = 0;
      if ((long)puVar8 + uVar6 <= (long)param_2 + 1U) {
        iVar12 = iVar31;
      }
// WM - watermarked copy - do not remove
      if (uVar11 < iVar12 + uVar11) {
        iVar31 = *(int *)(param_1 + 0x34);
        uVar29 = *(ulong *)(param_1 + 0x60);
        uVar28 = uVar6;
        do {
          uVar14 = (*(long *)((long)puVar8 + uVar28) * -0x30e4432340650000 ^ uVar29) >>
                   ((ulong)(0x38 - iVar31) & 0x3f);
          uVar30 = uVar14 >> 2 & 0x3fffffc0;
          lVar26 = (long)puVar9 + uVar30 * 4;
          Hint_Prefetch(lVar26,0,0,0);
          Hint_Prefetch(lVar26 + 0x40,0,0,0);
          lVar26 = lVar34 + uVar30;
          Hint_Prefetch(lVar26,0,0,0);
          Hint_Prefetch(lVar26 + 0x20,0,0,0);
          *(int *)(lVar33 + (uVar28 & 7) * 4) = (int)uVar14;
          uVar28 = uVar28 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
/* WM - proprietary - see LICENSE - do not sell */
    }
    if (uVar11 < uVar15) {
      lVar26 = *(long *)(param_1 + 8);
      iVar31 = *(int *)(param_1 + 0x34);
      do {
        uVar28 = (*(long *)(lVar26 + 8 + uVar6) * -0x30e4432340650000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar31) & 0x3f);
        uVar29 = uVar28 >> 2 & 0x3fffffc0;
        lVar1 = (long)puVar9 + uVar29 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar34 + uVar29;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x20,0,0,0);
        uVar32 = *(uint *)(lVar33 + (uVar6 & 7) * 4);
        *(int *)(lVar33 + (uVar6 & 7) * 4) = (int)uVar28;
        uVar28 = (ulong)(uVar32 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar34 + uVar28);
        uVar11 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar11 = 0;
        }
        lVar1 = (ulong)uVar11 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar1;
        pbVar2[lVar1] = (byte)uVar32;
        *(int *)((long)puVar9 + lVar1 * 4 + uVar28 * 4) = (int)uVar6;
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uVar16 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar15;
    puVar7 = *(ulong **)((long)puVar8 + (uVar16 & 0xffffffff) + 8);
// more drops soon - github.com/pengussy
    uVar6 = ((long)puVar7 * -0x30e4432340650000 ^ uVar27) >> ((ulong)(0x38 - iVar18) & 0x3f);
    uVar27 = uVar6 >> 2 & 0x3fffffc0;
    lVar34 = (long)puVar22 + uVar27 * 4;
    Hint_Prefetch(lVar34,0,0,0);
    Hint_Prefetch(lVar34 + 0x40,0,0,0);
    lVar34 = lVar21 + uVar27;
    Hint_Prefetch(lVar34,0,0,0);
    Hint_Prefetch(lVar34 + 0x20,0,0,0);
    uVar11 = *(uint *)(lVar33 + (uVar16 & 7) * 4);
    *(int *)(lVar33 + (uVar16 & 7) * 4) = (int)uVar6;
  }
  else {
    uVar11 = (uint)((*param_2 * -0x30e4432340650000 ^ uVar27) >> ((ulong)(0x38 - iVar18) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar15;
    puVar7 = param_2;
    puVar9 = param_4;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar11;
  uVar16 = (ulong)(uVar11 >> 2) & 0x3fffffc0;
  pbVar2 = (byte *)(lVar21 + uVar16);
  bVar23 = (byte)uVar11;
/* WM - stripping the watermark breaks the license */
  auVar37[0] = -(pbVar2[1] == bVar23);
  auVar37[1] = -(pbVar2[5] == bVar23);
  auVar37[2] = -(pbVar2[9] == bVar23);
  auVar37[3] = -(pbVar2[0xd] == bVar23);
  auVar37[4] = -(pbVar2[0x11] == bVar23);
  auVar37[5] = -(pbVar2[0x15] == bVar23);
  auVar37[6] = -(pbVar2[0x19] == bVar23);
  auVar37[7] = -(pbVar2[0x1d] == bVar23);
  auVar37[8] = -(pbVar2[0x21] == bVar23);
  auVar37[9] = -(pbVar2[0x25] == bVar23);
  auVar37[10] = -(pbVar2[0x29] == bVar23);
  auVar37[0xb] = -(pbVar2[0x2d] == bVar23);
  auVar37[0xc] = -(pbVar2[0x31] == bVar23);
  auVar37[0xd] = -(pbVar2[0x35] == bVar23);
  auVar37[0xe] = -(pbVar2[0x39] == bVar23);
  auVar37[0xf] = -(pbVar2[0x3d] == bVar23);
  auVar35[0] = -(pbVar2[3] == bVar23);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  auVar35[1] = -(pbVar2[7] == bVar23);
  auVar35[2] = -(pbVar2[0xb] == bVar23);
  auVar35[3] = -(pbVar2[0xf] == bVar23);
  auVar35[4] = -(pbVar2[0x13] == bVar23);
  auVar35[5] = -(pbVar2[0x17] == bVar23);
  auVar35[6] = -(pbVar2[0x1b] == bVar23);
  auVar35[7] = -(pbVar2[0x1f] == bVar23);
  auVar35[8] = -(pbVar2[0x23] == bVar23);
  auVar35[9] = -(pbVar2[0x27] == bVar23);
  auVar35[10] = -(pbVar2[0x2b] == bVar23);
  auVar35[0xb] = -(pbVar2[0x2f] == bVar23);
  auVar35[0xc] = -(pbVar2[0x33] == bVar23);
  auVar35[0xd] = -(pbVar2[0x37] == bVar23);
  auVar35[0xe] = -(pbVar2[0x3b] == bVar23);
  auVar35[0xf] = -(pbVar2[0x3f] == bVar23);
  auVar36[1] = -(pbVar2[4] == bVar23);
  auVar36[0] = -(*pbVar2 == bVar23);
  auVar36[2] = -(pbVar2[8] == bVar23);
  auVar36[3] = -(pbVar2[0xc] == bVar23);
  auVar36[4] = -(pbVar2[0x10] == bVar23);
  auVar36[5] = -(pbVar2[0x14] == bVar23);
  auVar36[6] = -(pbVar2[0x18] == bVar23);
  auVar36[7] = -(pbVar2[0x1c] == bVar23);
  auVar36[8] = -(pbVar2[0x20] == bVar23);
  auVar36[9] = -(pbVar2[0x24] == bVar23);
/*  if you paid for this, you were scammed  */
  auVar36[10] = -(pbVar2[0x28] == bVar23);
  auVar36[0xb] = -(pbVar2[0x2c] == bVar23);
  auVar36[0xc] = -(pbVar2[0x30] == bVar23);
  auVar36[0xd] = -(pbVar2[0x34] == bVar23);
  auVar36[0xe] = -(pbVar2[0x38] == bVar23);
  auVar36[0xf] = -(pbVar2[0x3c] == bVar23);
  auVar37 = NEON_sri(auVar37,auVar36,1,1);
  auVar5[1] = -(pbVar2[6] == bVar23);
  auVar5[0] = -(pbVar2[2] == bVar23);
  auVar5[2] = -(pbVar2[10] == bVar23);
  auVar5[3] = -(pbVar2[0xe] == bVar23);
  auVar5[4] = -(pbVar2[0x12] == bVar23);
  auVar5[5] = -(pbVar2[0x16] == bVar23);
  auVar5[6] = -(pbVar2[0x1a] == bVar23);
  auVar5[7] = -(pbVar2[0x1e] == bVar23);
  auVar5[8] = -(pbVar2[0x22] == bVar23);
  auVar5[9] = -(pbVar2[0x26] == bVar23);
  auVar5[10] = -(pbVar2[0x2a] == bVar23);
  auVar5[0xb] = -(pbVar2[0x2e] == bVar23);
  auVar5[0xc] = -(pbVar2[0x32] == bVar23);
  auVar5[0xd] = -(pbVar2[0x36] == bVar23);
  auVar5[0xe] = -(pbVar2[0x3a] == bVar23);
  auVar5[0xf] = -(pbVar2[0x3e] == bVar23);
  auVar36 = NEON_sri(auVar35,auVar5,1,1);
  auVar36 = NEON_sri(auVar36,auVar37,2,1);
  auVar36 = NEON_sri(auVar36,auVar36,4,1);
  uVar27 = CONCAT17((char)(auVar36._14_2_ >> 4),
                    CONCAT16((char)(auVar36._12_2_ >> 4),
                             CONCAT15((char)(auVar36._10_2_ >> 4),
                                      CONCAT14((char)(auVar36._8_2_ >> 4),
                                               CONCAT13((char)(auVar36._6_2_ >> 4),
                                                        CONCAT12((char)(auVar36._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar36._2_2_ >> 4)
                                                                          ,(char)(auVar36._0_2_ >> 4
                                                                                 ))))))));
/* no support for modified copies - github.com/pengussy */
  lVar21 = 0;
  uVar11 = (uint)*pbVar2;
  if (uVar27 != 0) {
    iVar18 = 1 << (ulong)(uVar24 & 0x1f);
    uVar6 = (ulong)*pbVar2 & 0x3f;
    uVar27 = uVar27 >> uVar6 | uVar27 << 0x40 - uVar6;
    do {
      uVar6 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar24 = (int)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + uVar11 & 0x3f;
      if (uVar24 != 0) {
        uVar24 = *(uint *)((long)puVar22 + (ulong)uVar24 * 4 + uVar16 * 4);
        if (uVar24 < uVar20) break;
        puVar7 = puVar10;
        if (uVar25 <= uVar24) {
/* wm:proprietary - see LICENSE - do not sell */
          puVar7 = puVar8;
        }
        Hint_Prefetch((long)puVar7 + (ulong)uVar24,0,0,0);
        auStack_170[lVar21] = uVar24;
        lVar21 = lVar21 + 1;
        iVar18 = iVar18 + -1;
      }
      uVar27 = uVar27 - 1 & uVar27;
      if ((uVar27 == 0) || (iVar18 == 0)) break;
    } while( true );
  }
  uVar20 = 0x3f;
  if ((uVar11 & 0x3f) != 1) {
    uVar20 = 0;
  }
  lVar33 = (ulong)uVar20 + (ulong)(uVar11 - 1 & 0x3f);
  *pbVar2 = (byte)lVar33;
  pbVar2[lVar33] = bVar23;
  iVar18 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar18 + 1;
  *(int *)((long)puVar22 + lVar33 * 4 + uVar16 * 4) = iVar18;
  if (lVar21 == 0) {
    uVar16 = 3;
  }
  else {
    lVar33 = 0;
    uVar27 = 3;
    do {
      uVar20 = auStack_170[lVar33];
/* WM - chat: discord.gg/sdkhDjTex */
      uVar16 = (ulong)uVar20;
      if (uVar20 < uVar25) {
        if (*(int *)((long)puVar10 + uVar16) == (int)*param_2) {
          puVar9 = (ulong *)((long)puVar10 + (ulong)uVar25);
          auVar36 = func_0x002ad924((int *)((long)param_2 + 4),(int *)((long)puVar10 + uVar16) + 1,
                                    param_3,puVar9,(long)puVar8 + (ulong)uVar25);
          puVar7 = auVar36._8_8_;
          uVar16 = auVar36._0_8_ + 4;
          goto joined_r0x002d68cc;
        }
      }
      else {
        puVar22 = (ulong *)((long)puVar8 + uVar16);
        if (*(int *)((long)puVar22 + (uVar27 - 3)) == *(int *)((long)param_2 + (uVar27 - 3))) {
          puVar17 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar22 == *param_2) {
              lVar34 = 0;
              puVar22 = (ulong *)((long)puVar8 + uVar16 + 8);
              do {
                puVar17 = puVar17 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar17) goto LAB_002d6824;
                uVar16 = *puVar22;
                lVar34 = lVar34 + 8;
                puVar22 = puVar22 + 1;
              } while (uVar16 == *puVar17);
              uVar16 = *puVar17 ^ uVar16;
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = lVar34 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
            }
            else {
              uVar16 = *param_2 ^ *puVar22;
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
            }
          }
          else {
LAB_002d6824:
            if (puVar17 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar22 == (int)*puVar17) {
                puVar17 = (ulong *)((long)puVar17 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
              }
            }
            if (puVar17 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar22 == (short)*puVar17) {
                puVar22 = (ulong *)((long)puVar22 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
/* wm:donate: donate/README.md */
            if (puVar17 < param_3) {
              if ((char)*puVar22 == (char)*puVar17) {
                puVar17 = (ulong *)((long)puVar17 + 1);
              }
            }
            uVar16 = (long)puVar17 - (long)param_2;
          }
joined_r0x002d68cc:
          if (uVar27 < uVar16) {
            *param_4 = (ulong)((uVar15 + 3) - uVar20);
            uVar27 = uVar16;
            if ((ulong *)((long)param_2 + uVar16) == param_3) break;
          }
        }
      }
      uVar16 = uVar27;
      lVar33 = lVar33 + 1;
      uVar27 = uVar16;
    } while (lVar33 != lVar21);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  auVar36 = ___stack_chk_fail(uVar16,puVar7);
  puVar8 = auVar36._8_8_;
  lVar21 = auVar36._0_8_;
  lVar33 = *(long *)(lVar21 + 0x80);
  uVar24 = 1 << (ulong)(*(uint *)(lVar21 + 0x104) & 0x1f);
  lVar34 = *(long *)(lVar21 + 8);
  uVar15 = 1 << (ulong)(*(uint *)(lVar21 + 0x100) & 0x1f);
  iVar18 = *(int *)(lVar21 + 0x18);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  uVar11 = (uint)((long)puVar8 - lVar34);
  uVar25 = *(uint *)(lVar21 + 0x2c);
  uVar16 = (ulong)uVar25;
  uVar20 = uVar11 - uVar15;
  if (uVar11 - *(uint *)(lVar21 + 0x1c) <= uVar15 || *(int *)(lVar21 + 0x28) != 0) {
    uVar20 = *(uint *)(lVar21 + 0x1c);
  }
  uVar15 = 0;
  if (uVar24 <= uVar11) {
    uVar15 = uVar11 - uVar24;
  }
  iVar31 = 1 << (ulong)(*(uint *)(lVar21 + 0x10c) & 0x1f);
  puVar19 = *(undefined8 **)(lVar21 + 0xf8);
  lVar26 = *(long *)(lVar21 + 0x70);
  uVar32 = ~(-1 << (ulong)(*(uint *)(lVar21 + 0x104) & 0x1f));
  uVar4 = 0x20 - *(int *)(lVar21 + 0x108);
  if (*(int *)(lVar21 + 300) == 0) {
    if (uVar25 < uVar11) {
      do {
        uVar25 = (uint)(*(int *)(lVar34 + uVar16) * -0x61c8864f) >> (ulong)(uVar4 & 0x1f);
        *(undefined4 *)(lVar33 + (ulong)((uint)uVar16 & uVar32) * 4) =
             *(undefined4 *)(lVar26 + (ulong)uVar25 * 4);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        *(uint *)(lVar26 + (ulong)uVar25 * 4) = (uint)uVar16;
        uVar16 = uVar16 + 1;
      } while (uVar16 < ((long)puVar8 - lVar34 & 0xffffffffU));
    }
  }
  else if (uVar25 < uVar11) {
    uVar3 = (uint)(*(int *)(lVar34 + uVar16) * -0x61c8864f) >> (ulong)(uVar4 & 0x1f);
    *(undefined4 *)(lVar33 + (ulong)(uVar25 & uVar32) * 4) =
         *(undefined4 *)(lVar26 + (ulong)uVar3 * 4);
    *(uint *)(lVar26 + (ulong)uVar3 * 4) = uVar25;
  }
  *(uint *)(lVar21 + 0x2c) = uVar11;
  iVar12 = (int)*puVar8;
  uVar25 = *(uint *)(lVar26 + (ulong)((uint)(iVar12 * -0x61c8864f) >> (ulong)(uVar4 & 0x1f)) * 4);
  if (uVar25 < uVar20) {
    uVar27 = 3;
/* stripping the watermark breaks the license */
code_r0x002d6ba8:
    uVar25 = 1 << (ulong)(*(uint *)((long)puVar19 + 0x104) & 0x1f);
    lVar21 = puVar19[1];
    uVar24 = (int)*puVar19 - (int)lVar21;
    uVar20 = 0;
    if (uVar25 <= uVar24) {
      uVar20 = uVar24 - uVar25;
    }
    if (iVar31 != 0) {
      uVar15 = *(uint *)(puVar19 + 3);
      uVar32 = *(uint *)(puVar19[0xe] +
                        (ulong)((uint)(iVar12 * -0x61c8864f) >>
                               (ulong)(-*(int *)(puVar19 + 0x21) & 0x1f)) * 4);
      if (uVar15 <= uVar32) {
        lVar33 = puVar19[0x10];
        do {
          iVar31 = iVar31 + -1;
          piVar13 = (int *)(lVar21 + (ulong)uVar32);
          if (*piVar13 == iVar12) {
            lVar34 = func_0x002ad924((int *)((long)puVar8 + 4),piVar13 + 1);
            uVar16 = lVar34 + 4;
            if (uVar27 < uVar16) {
              *puVar9 = (ulong)((uVar11 + uVar24 + 3) - (iVar18 + uVar32));
              uVar27 = uVar16;
// WM - if you paid for this, you were scammed
              if ((ulong *)((long)puVar8 + uVar16) == param_3) {
                return;
              }
            }
          }
          if (uVar32 <= uVar20) {
            return;
          }
          if (iVar31 == 0) {
            return;
          }
          uVar32 = *(uint *)(lVar33 + (ulong)(uVar32 & uVar25 - 1) * 4);
        } while (uVar15 <= uVar32);
        return;
      }
    }
    return;
  }
  uVar16 = 3;
  if ((ulong *)((long)param_3 + -7) <= puVar8) {
    do {
      piVar13 = (int *)(lVar34 + (ulong)uVar25);
      if (*(int *)((long)piVar13 + (uVar16 - 3)) == *(int *)((long)puVar8 + (uVar16 - 3))) {
        puVar10 = puVar8;
        if (puVar8 < (ulong *)((long)param_3 + -3)) {
          lVar21 = 4;
          if (*piVar13 != iVar12) {
            lVar21 = 0;
          }
          piVar13 = (int *)((long)piVar13 + lVar21);
          puVar10 = (ulong *)((long)puVar8 + lVar21);
        }
        if (puVar10 < (ulong *)((long)param_3 + -1)) {
          if ((short)*piVar13 == (short)*puVar10) {
/* WM - donate: donate/README.md */
            puVar10 = (ulong *)((long)puVar10 + 2);
            piVar13 = (int *)((long)piVar13 + 2);
          }
        }
        if (puVar10 < param_3) {
          if ((char)*piVar13 == (char)*puVar10) {
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          uVar27 = (long)puVar10 - (long)puVar8;
        }
        else {
          uVar27 = (long)puVar10 - (long)puVar8;
        }
        if (uVar16 < uVar27) {
          *puVar9 = (ulong)((uVar11 + 3) - uVar25);
          uVar16 = uVar27;
          if (puVar10 == param_3) goto code_r0x002d6ba8;
        }
      }
      uVar27 = uVar16;
      if ((uVar25 <= uVar15) || (iVar31 = iVar31 + -1, iVar31 == 0)) goto code_r0x002d6ba8;
      uVar25 = *(uint *)(lVar33 + (ulong)(uVar25 & uVar24 - 1) * 4);
      uVar16 = uVar27;
      if (uVar25 < uVar20) goto code_r0x002d6ba8;
    } while( true );
  }
/* keep the notice, keep the source honest - github.com/pengussy */
  do {
    puVar10 = (ulong *)(lVar34 + (ulong)uVar25);
    if (*(int *)((long)puVar10 + (uVar16 - 3)) == *(int *)((long)puVar8 + (uVar16 - 3))) {
      if (*puVar10 == *puVar8) {
        lVar21 = 0;
        do {
          puVar22 = (ulong *)((long)puVar8 + lVar21 + 8);
          if ((ulong *)((long)param_3 + -7) <= puVar22) {
            piVar13 = (int *)((long)puVar10 + lVar21 + 8);
            if (puVar22 < (ulong *)((long)param_3 + -3)) {
              if (*piVar13 == (int)*puVar22) {
                puVar22 = (ulong *)((long)puVar8 + lVar21 + 0xc);
                piVar13 = (int *)((long)puVar10 + lVar21 + 0xc);
              }
            }
            if (puVar22 < (ulong *)((long)param_3 + -1)) {
              if ((short)*piVar13 == (short)*puVar22) {
                puVar22 = (ulong *)((long)puVar22 + 2);
                piVar13 = (int *)((long)piVar13 + 2);
              }
            }
            if (puVar22 < param_3) {
              if ((char)*piVar13 == (char)*puVar22) {
                puVar22 = (ulong *)((long)puVar22 + 1);
              }
            }
            uVar27 = (long)puVar22 - (long)puVar8;
/* found on a paste site? it was re-uploaded illegally */
            goto joined_r0x002d6db0;
          }
          uVar27 = *(ulong *)((long)puVar10 + lVar21 + 8);
          lVar21 = lVar21 + 8;
        } while (uVar27 == *puVar22);
        uVar27 = *puVar22 ^ uVar27;
        uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
        uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
        uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
        uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
        uVar27 = lVar21 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
      }
      else {
        uVar27 = *puVar8 ^ *puVar10;
        uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
/* watermarked copy - do not remove - github.com/pengussy */
        uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
        uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
        uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
        uVar27 = (ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3;
      }
joined_r0x002d6db0:
      if (uVar16 < uVar27) {
        *puVar9 = (ulong)((uVar11 + 3) - uVar25);
        uVar16 = uVar27;
        if ((ulong *)((long)puVar8 + uVar27) == param_3) goto code_r0x002d6ba8;
      }
    }
    uVar27 = uVar16;
    if ((uVar25 <= uVar15) || (iVar31 = iVar31 + -1, iVar31 == 0)) goto code_r0x002d6ba8;
    uVar25 = *(uint *)(lVar33 + (ulong)(uVar25 & uVar24 - 1) * 4);
    uVar16 = uVar27;
    if (uVar25 < uVar20) goto code_r0x002d6ba8;
  } while( true );
/* wm:origin: github.com/pengussy */
}

