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
 *  file-id: 0x2dd910:9d34dfb0a2
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002dd910(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  byte *pbVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  undefined8 *extraout_x8;
/*  watermarked copy - do not remove  */
  ulong uVar19;
  ulong extraout_x9;
  ulong uVar20;
  ulong extraout_x10;
  uint uVar21;
  ulong uVar22;
  ulong extraout_x11;
  ulong uVar23;
  ulong extraout_x12;
  long lVar24;
  long extraout_x13;
  long lVar25;
  long lVar26;
  long extraout_x14;
  byte bVar27;
  int iVar28;
  int extraout_w15;
  int iVar29;
  int extraout_w16;
  ulong uVar30;
  uint uVar31;
  uint extraout_w17;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  ulong *puVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  uint *puVar36;
  uint *puVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint auStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar29 = -0x61c8864f;
  lVar26 = *(long *)(param_1 + 0x70);
  lVar24 = *(long *)(param_1 + 0x38);
  iVar28 = *(int *)(param_1 + 0x34);
  puVar36 = *(uint **)(param_1 + 8);
  uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar35 = (long)param_2 - (long)puVar36;
  uVar21 = (uint)uVar35;
  uVar15 = uVar21 - uVar10;
  if (uVar21 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x28) != 0) {
    uVar15 = *(uint *)(param_1 + 0x1c);
  }
  uVar23 = (ulong)uVar15;
  uVar15 = *(uint *)(param_1 + 0x10c);
  puVar18 = *(undefined8 **)(param_1 + 0xf8);
  bVar9 = 5 < uVar15;
  uVar10 = uVar15 - 6;
  if (bVar9) {
    uVar15 = 6;
  }
  uVar31 = (uint)*(undefined8 *)(param_1 + 0x60);
  uVar19 = (ulong)(uint)(1 << (ulong)(uVar15 & 0x1f));
  uVar6 = (int)*param_2 * -0x61c8864f;
  uVar22 = (ulong)(uVar6 >> (ulong)(0x22U - *(int *)(puVar18 + 0x21) & 0x1f));
/*  origin: github.com/pengussy  */
  Hint_Prefetch(puVar18[0xe] + uVar22 * 0x10,0,0,0);
  uVar15 = 1 << (ulong)(uVar10 & 0x1f);
  if (!bVar9 || uVar10 == 0) {
    uVar15 = 0;
  }
  uVar20 = (ulong)uVar15;
  lVar25 = lVar24;
  lVar34 = lVar26;
  puVar37 = puVar36;
  if (*(int *)(param_1 + 300) == 0) {
    lVar11 = param_1 + 0x40;
    uVar15 = *(uint *)(param_1 + 0x2c);
    puVar13 = (uint *)(ulong)uVar15;
    iVar33 = -0x61c8864f;
    if (0x180 < uVar21 - uVar15) goto LAB_002ddf88;
    iVar33 = -0x61c8864f;
    if (uVar21 <= uVar15) goto LAB_002ddacc;
    goto LAB_002dda28;
  }
  uVar15 = (uVar6 ^ uVar31) >> (ulong)(0x18U - iVar28 & 0x1f);
  *(uint *)(param_1 + 0x2c) = uVar21;
  do {
    iVar28 = (int)uVar19;
    *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar15;
    uVar30 = (ulong)(uVar15 >> 2) & 0x3fffffc0;
    lVar34 = lVar34 + uVar30 * 4;
    pbVar2 = (byte *)(lVar25 + uVar30);
    bVar27 = (byte)uVar15;
    auVar40[0] = -(pbVar2[1] == bVar27);
    auVar40[1] = -(pbVar2[5] == bVar27);
    auVar40[2] = -(pbVar2[9] == bVar27);
    auVar40[3] = -(pbVar2[0xd] == bVar27);
    auVar40[4] = -(pbVar2[0x11] == bVar27);
    auVar40[5] = -(pbVar2[0x15] == bVar27);
    auVar40[6] = -(pbVar2[0x19] == bVar27);
    auVar40[7] = -(pbVar2[0x1d] == bVar27);
    auVar40[8] = -(pbVar2[0x21] == bVar27);
    auVar40[9] = -(pbVar2[0x25] == bVar27);
// keep the notice, keep the source honest
    auVar40[10] = -(pbVar2[0x29] == bVar27);
    auVar40[0xb] = -(pbVar2[0x2d] == bVar27);
    auVar40[0xc] = -(pbVar2[0x31] == bVar27);
    auVar40[0xd] = -(pbVar2[0x35] == bVar27);
    auVar40[0xe] = -(pbVar2[0x39] == bVar27);
    auVar40[0xf] = -(pbVar2[0x3d] == bVar27);
    auVar38[0] = -(pbVar2[3] == bVar27);
    auVar38[1] = -(pbVar2[7] == bVar27);
    auVar38[2] = -(pbVar2[0xb] == bVar27);
    auVar38[3] = -(pbVar2[0xf] == bVar27);
    auVar38[4] = -(pbVar2[0x13] == bVar27);
    auVar38[5] = -(pbVar2[0x17] == bVar27);
    auVar38[6] = -(pbVar2[0x1b] == bVar27);
    auVar38[7] = -(pbVar2[0x1f] == bVar27);
    auVar38[8] = -(pbVar2[0x23] == bVar27);
    auVar38[9] = -(pbVar2[0x27] == bVar27);
    auVar38[10] = -(pbVar2[0x2b] == bVar27);
    auVar38[0xb] = -(pbVar2[0x2f] == bVar27);
    auVar38[0xc] = -(pbVar2[0x33] == bVar27);
    auVar38[0xd] = -(pbVar2[0x37] == bVar27);
    auVar38[0xe] = -(pbVar2[0x3b] == bVar27);
    auVar38[0xf] = -(pbVar2[0x3f] == bVar27);
    auVar39[1] = -(pbVar2[4] == bVar27);
    auVar39[0] = -(*pbVar2 == bVar27);
    auVar39[2] = -(pbVar2[8] == bVar27);
    auVar39[3] = -(pbVar2[0xc] == bVar27);
    auVar39[4] = -(pbVar2[0x10] == bVar27);
    auVar39[5] = -(pbVar2[0x14] == bVar27);
    auVar39[6] = -(pbVar2[0x18] == bVar27);
    auVar39[7] = -(pbVar2[0x1c] == bVar27);
    auVar39[8] = -(pbVar2[0x20] == bVar27);
    auVar39[9] = -(pbVar2[0x24] == bVar27);
    auVar39[10] = -(pbVar2[0x28] == bVar27);
    auVar39[0xb] = -(pbVar2[0x2c] == bVar27);
    auVar39[0xc] = -(pbVar2[0x30] == bVar27);
// no support for modified copies
    auVar39[0xd] = -(pbVar2[0x34] == bVar27);
    auVar39[0xe] = -(pbVar2[0x38] == bVar27);
    auVar39[0xf] = -(pbVar2[0x3c] == bVar27);
    auVar40 = NEON_sri(auVar40,auVar39,1,1);
    auVar8[1] = -(pbVar2[6] == bVar27);
    auVar8[0] = -(pbVar2[2] == bVar27);
    auVar8[2] = -(pbVar2[10] == bVar27);
    auVar8[3] = -(pbVar2[0xe] == bVar27);
    auVar8[4] = -(pbVar2[0x12] == bVar27);
    auVar8[5] = -(pbVar2[0x16] == bVar27);
    auVar8[6] = -(pbVar2[0x1a] == bVar27);
    auVar8[7] = -(pbVar2[0x1e] == bVar27);
    auVar8[8] = -(pbVar2[0x22] == bVar27);
    auVar8[9] = -(pbVar2[0x26] == bVar27);
    auVar8[10] = -(pbVar2[0x2a] == bVar27);
    auVar8[0xb] = -(pbVar2[0x2e] == bVar27);
    auVar8[0xc] = -(pbVar2[0x32] == bVar27);
    auVar8[0xd] = -(pbVar2[0x36] == bVar27);
    auVar8[0xe] = -(pbVar2[0x3a] == bVar27);
    auVar8[0xf] = -(pbVar2[0x3e] == bVar27);
    auVar39 = NEON_sri(auVar38,auVar8,1,1);
    auVar39 = NEON_sri(auVar39,auVar40,2,1);
    auVar39 = NEON_sri(auVar39,auVar39,4,1);
    uVar30 = CONCAT17((char)(auVar39._14_2_ >> 4),
                      CONCAT16((char)(auVar39._12_2_ >> 4),
                               CONCAT15((char)(auVar39._10_2_ >> 4),
                                        CONCAT14((char)(auVar39._8_2_ >> 4),
                                                 CONCAT13((char)(auVar39._6_2_ >> 4),
                                                          CONCAT12((char)(auVar39._4_2_ >> 4),
                                                                   CONCAT11((char)(auVar39._2_2_ >>
                                                                                  4),(char)(auVar39.
                                                  _0_2_ >> 4))))))));
/* unlicensed copy if this notice is missing */
    lVar24 = 0;
    uVar15 = (uint)*pbVar2;
    if (uVar30 != 0) {
      uVar7 = (ulong)*pbVar2 & 0x3f;
      uVar30 = uVar30 >> uVar7 | uVar30 << 0x40 - uVar7;
      do {
        iVar28 = (int)uVar19;
        uVar7 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar10 = (int)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) + uVar15 & 0x3f;
        if (uVar10 != 0) {
          uVar10 = *(uint *)(lVar34 + (ulong)uVar10 * 4);
          if (uVar10 < (uint)uVar23) break;
          Hint_Prefetch((long)puVar37 + (ulong)uVar10,0,0,0);
          auStack_170[lVar24] = uVar10;
          lVar24 = lVar24 + 1;
          uVar19 = (ulong)(iVar28 - 1);
        }
        iVar28 = (int)uVar19;
        uVar30 = uVar30 - 1 & uVar30;
        if ((uVar30 == 0) || (iVar28 == 0)) break;
      } while( true );
    }
    uVar10 = 0x3f;
    if ((uVar15 & 0x3f) != 1) {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      uVar10 = 0;
    }
    lVar26 = (ulong)uVar10 + (ulong)(uVar15 - 1 & 0x3f);
    *pbVar2 = (byte)lVar26;
    pbVar2[lVar26] = bVar27;
    iVar29 = *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x2c) = iVar29 + 1;
    *(int *)(lVar34 + lVar26 * 4) = iVar29;
    iVar29 = (int)uVar35;
    if (lVar24 == 0) {
      uVar23 = 3;
    }
    else {
      lVar26 = 0;
      uVar19 = 3;
      do {
        uVar15 = auStack_170[lVar26];
        puVar17 = (ulong *)((long)puVar37 + (ulong)uVar15);
        if (*(int *)((long)puVar17 + (uVar19 - 3)) == *(int *)((long)param_2 + (uVar19 - 3))) {
          puVar32 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar17 == *param_2) {
              lVar34 = 0;
              puVar17 = (ulong *)((long)puVar37 + (ulong)uVar15 + 8);
              do {
                puVar32 = puVar32 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar32) goto LAB_002ddcb4;
                uVar23 = *puVar17;
                lVar34 = lVar34 + 8;
// unlicensed copy if this notice is missing
                puVar17 = puVar17 + 1;
              } while (uVar23 == *puVar32);
              uVar23 = *puVar32 ^ uVar23;
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar23 = lVar34 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
            }
            else {
              uVar23 = *param_2 ^ *puVar17;
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
            }
          }
          else {
/* WM - stripping the watermark breaks the license */
LAB_002ddcb4:
            if (puVar32 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar17 == (int)*puVar32) {
                puVar32 = (ulong *)((long)puVar32 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar32 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar17 == (short)*puVar32) {
                puVar32 = (ulong *)((long)puVar32 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
            if (puVar32 < param_3) {
              if ((char)*puVar17 == (char)*puVar32) {
                puVar32 = (ulong *)((long)puVar32 + 1);
              }
            }
            uVar23 = (long)puVar32 - (long)param_2;
          }
          if (uVar19 < uVar23) {
            *param_4 = (ulong)((iVar29 + 3) - uVar15);
            uVar19 = uVar23;
            if ((ulong *)((long)param_2 + uVar23) == param_3) break;
          }
        }
        lVar26 = lVar26 + 1;
        uVar23 = uVar19;
      } while (lVar26 != lVar24);
    }
    uVar4 = *puVar18;
// if you paid for this, you were scammed
    lVar24 = puVar18[1];
    puVar13 = (uint *)(puVar18[0xe] + (uVar22 & 0xffffffff) * 0x10);
    Hint_Prefetch(lVar24 + (ulong)*puVar13,0,0,0);
    Hint_Prefetch(lVar24 + (ulong)puVar13[1],0,0,0);
    uVar10 = puVar13[3];
    Hint_Prefetch(lVar24 + (ulong)puVar13[2],0,0,0);
    puVar37 = (uint *)(puVar18[0x10] + (ulong)(uVar10 >> 8) * 4);
    iVar33 = ((int)uVar4 - (int)lVar24) - uVar5;
    Hint_Prefetch(puVar37,0,0,0);
    uVar15 = iVar28 + (int)uVar20;
    uVar21 = uVar15;
    if (2 < uVar15) {
      uVar21 = 3;
    }
    uVar19 = (ulong)uVar21;
    if (uVar15 == 0) {
LAB_002ddf68:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar23;
      }
    }
    else {
      puVar14 = puVar13;
      do {
        puVar13 = puVar14 + 1;
        uVar6 = *puVar14;
        uVar22 = (ulong)uVar6;
        if (uVar6 == 0) {
          uVar20 = uVar23;
          goto LAB_002ddf10;
        }
        if (*(int *)(lVar24 + uVar22) == (int)*param_2) {
          lVar26 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar24 + uVar22) + 1,param_3,
                                   uVar4,(long)puVar36 + (ulong)uVar5);
          uVar20 = lVar26 + 4;
          if (uVar23 < uVar20) {
            *param_4 = (ulong)((iVar29 + iVar33 + 3) - uVar6);
            uVar23 = uVar20;
/* reversing this took months of machine time */
            if ((ulong *)((long)param_2 + uVar20) == param_3) goto LAB_002ddf10;
          }
        }
        uVar19 = uVar19 - 1;
        puVar14 = puVar13;
      } while (uVar19 != 0);
      uVar10 = uVar10 & 0xff;
      uVar6 = uVar15 - uVar21;
      if (uVar10 <= uVar15 - uVar21) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) goto LAB_002ddf68;
      uVar35 = (ulong)uVar6;
      lVar26 = uVar35 << 2;
      puVar13 = puVar37;
      do {
        Hint_Prefetch(lVar24 + (ulong)*puVar13,0,0,0);
        lVar26 = lVar26 + -4;
        puVar13 = puVar13 + 1;
      } while (lVar26 != 0);
      puVar13 = (uint *)((long)param_2 + 4);
      uVar19 = *param_2;
      uVar15 = iVar29 + iVar33 + 3;
      uVar22 = (ulong)uVar15;
      puVar14 = puVar37;
      do {
        puVar37 = puVar14 + 1;
        uVar10 = *puVar14;
        piVar3 = (int *)(lVar24 + (ulong)uVar10);
        if (*piVar3 == (int)uVar19) {
          lVar26 = func_0x002ad924(puVar13,piVar3 + 1,param_3,uVar4,(long)puVar36 + (ulong)uVar5);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
          uVar20 = lVar26 + 4;
          if (uVar23 < uVar20) {
            *param_4 = (ulong)(uVar15 - uVar10);
            uVar23 = uVar20;
            if ((ulong *)((long)param_2 + uVar20) == param_3) break;
          }
        }
        uVar10 = (int)uVar35 - 1;
        uVar35 = (ulong)uVar10;
        uVar20 = uVar23;
        puVar14 = puVar37;
      } while (uVar10 != 0);
LAB_002ddf10:
      uVar35 = uVar22;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar20;
      }
    }
// more drops soon - github.com/pengussy
    auVar39 = ___stack_chk_fail();
    lVar11 = auVar39._8_8_;
    param_1 = auVar39._0_8_;
    puVar18 = extraout_x8;
    uVar19 = extraout_x9;
    uVar20 = extraout_x10;
    uVar22 = extraout_x11;
    uVar23 = extraout_x12;
    lVar25 = extraout_x13;
    lVar34 = extraout_x14;
    iVar33 = extraout_w16;
    uVar31 = extraout_w17;
    iVar28 = extraout_w15;
LAB_002ddf88:
    iVar29 = iVar33;
    lVar24 = lVar25;
    lVar26 = lVar34;
    if ((uint)puVar13 < 0xffffffa0) {
      puVar14 = puVar13 + 0x18;
      do {
        uVar15 = (*(int *)((long)(puVar37 + 2) + (long)puVar13) * iVar29 ^ *(uint *)(param_1 + 0x60)
                 ) >> (ulong)(0x18U - iVar28 & 0x1f);
        uVar30 = (ulong)(uVar15 >> 2 & 0x3fffffc0);
        lVar24 = lVar34 + uVar30 * 4;
        Hint_Prefetch(lVar24,0,0,0);
        Hint_Prefetch(lVar24 + 0x40,0,0,0);
        lVar24 = lVar25 + uVar30;
        Hint_Prefetch(lVar24,0,0,0);
        Hint_Prefetch(lVar24 + 0x20,0,0,0);
        uVar10 = *(uint *)(lVar11 + ((ulong)puVar13 & 7) * 4);
        *(uint *)(lVar11 + ((ulong)puVar13 & 7) * 4) = uVar15;
        uVar30 = (ulong)(uVar10 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar25 + uVar30);
        uVar15 = 0x3f;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
        if ((*pbVar2 & 0x3f) != 1) {
          uVar15 = 0;
        }
        lVar24 = (ulong)uVar15 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar24;
        pbVar2[lVar24] = (byte)uVar10;
        *(int *)(lVar34 + uVar30 * 4 + lVar24 * 4) = (int)puVar13;
        puVar13 = (uint *)((long)puVar13 + 1);
      } while (puVar14 != puVar13);
      lVar26 = *(long *)(param_1 + 0x70);
      lVar24 = *(long *)(param_1 + 0x38);
      puVar37 = puVar36;
    }
    uVar15 = (uint)uVar35 - 0x20;
    puVar13 = (uint *)(ulong)uVar15;
    iVar16 = (int)((long)param_2 + 1U) - (int)((long)puVar37 + (long)puVar13);
    iVar33 = 8;
    if (iVar16 + 1U < 8) {
      iVar33 = iVar16 + 1;
    }
    iVar16 = 0;
    if ((ulong)((long)puVar37 + (long)puVar13) <= (long)param_2 + 1U) {
      iVar16 = iVar33;
    }
    if (uVar15 < iVar16 + uVar15) {
      iVar33 = *(int *)(param_1 + 0x34);
      uVar10 = *(uint *)(param_1 + 0x60);
/*  chat: discord.gg/sdkhDjTex  */
      puVar14 = puVar13;
      do {
        uVar21 = (*(int *)((long)puVar37 + (long)puVar14) * iVar29 ^ uVar10) >>
                 (ulong)(0x18U - iVar33 & 0x1f);
        uVar30 = (ulong)(uVar21 >> 2 & 0x3fffffc0);
        lVar12 = lVar26 + uVar30 * 4;
        Hint_Prefetch(lVar12,0,0,0);
        Hint_Prefetch(lVar12 + 0x40,0,0,0);
        lVar12 = lVar24 + uVar30;
        Hint_Prefetch(lVar12,0,0,0);
        Hint_Prefetch(lVar12 + 0x20,0,0,0);
        *(uint *)(lVar11 + ((ulong)puVar14 & 7) * 4) = uVar21;
        puVar14 = (uint *)((long)puVar14 + 1);
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    iVar33 = iVar29;
    if (uVar15 < (uint)uVar35) {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
LAB_002dda28:
      iVar29 = iVar33;
      lVar12 = *(long *)(param_1 + 8);
      iVar33 = *(int *)(param_1 + 0x34);
      do {
        uVar15 = (*(int *)(lVar12 + 8 + (long)puVar13) * iVar29 ^ *(uint *)(param_1 + 0x60)) >>
                 (ulong)(0x18U - iVar33 & 0x1f);
        uVar30 = (ulong)(uVar15 >> 2 & 0x3fffffc0);
        lVar1 = lVar26 + uVar30 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar24 + uVar30;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x20,0,0,0);
        uVar10 = *(uint *)(lVar11 + ((ulong)puVar13 & 7) * 4);
        *(uint *)(lVar11 + ((ulong)puVar13 & 7) * 4) = uVar15;
        uVar30 = (ulong)(uVar10 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar24 + uVar30);
/* WM - chat: discord.gg/sdkhDjTex */
        uVar15 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar15 = 0;
        }
        lVar1 = (ulong)uVar15 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar1;
        pbVar2[lVar1] = (byte)uVar10;
        *(int *)(lVar26 + uVar30 * 4 + lVar1 * 4) = (int)puVar13;
        puVar13 = (uint *)((long)puVar13 + 1);
      } while (puVar13 < (uint *)(uVar35 & 0xffffffff));
    }
LAB_002ddacc:
    *(int *)(param_1 + 0x2c) = (int)uVar35;
    uVar10 = (*(int *)((long)puVar37 + (uVar35 & 0xffffffff) + 8) * iVar29 ^ uVar31) >>
             (ulong)(0x18U - iVar28 & 0x1f);
    uVar30 = (ulong)(uVar10 >> 2 & 0x3fffffc0);
    lVar24 = lVar34 + uVar30 * 4;
    Hint_Prefetch(lVar24,0,0,0);
    Hint_Prefetch(lVar24 + 0x40,0,0,0);
    lVar24 = lVar25 + uVar30;
    Hint_Prefetch(lVar24,0,0,0);
    Hint_Prefetch(lVar24 + 0x20,0,0,0);
    uVar15 = *(uint *)(lVar11 + (uVar35 & 7) * 4);
    *(uint *)(lVar11 + (uVar35 & 7) * 4) = uVar10;
  } while( true );
}

