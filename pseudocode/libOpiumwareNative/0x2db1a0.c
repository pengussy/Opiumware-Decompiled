/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2db1a0:a0b8e84ada
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002db1a0(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar13;
  uint uVar14;
/* do not claim this as your own - github.com/pengussy */
  ulong *puVar15;
  uint uVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  undefined8 *puVar28;
  byte bVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  ulong uVar37;
  ulong *puVar38;
  ulong uVar39;
  long lVar40;
/* if you paid for this, you were scammed */
  uint *puVar41;
  uint uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint auStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar32 = *(long *)(param_1 + 0x70);
  lVar31 = *(long *)(param_1 + 0x38);
  iVar6 = *(int *)(param_1 + 0x34);
  lVar40 = *(long *)(param_1 + 8);
  uVar27 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar24 = (long)param_2 - lVar40;
  uVar23 = (uint)uVar24;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  uVar16 = uVar23 - uVar27;
  if (uVar23 - *(uint *)(param_1 + 0x1c) <= uVar27 || *(int *)(param_1 + 0x28) != 0) {
    uVar16 = *(uint *)(param_1 + 0x1c);
  }
  uVar27 = *(uint *)(param_1 + 0x10c);
  if (5 < uVar27) {
    uVar27 = 6;
  }
  uVar33 = *(ulong *)(param_1 + 0x60);
  iVar25 = 1 << (ulong)(uVar27 & 0x1f);
  puVar28 = *(undefined8 **)(param_1 + 0xf8);
  uVar30 = *param_2 * -0x30e4432340650000 >> ((ulong)(0x38 - *(int *)((long)puVar28 + 0x34)) & 0x3f)
  ;
  uVar18 = uVar30 >> 2 & 0x3fffffc0;
  pbVar1 = (byte *)(puVar28[7] + uVar18);
  lVar13 = puVar28[0xe] + uVar18 * 4;
  Hint_Prefetch(lVar13,0,0,0);
  Hint_Prefetch(lVar13 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  if (*(int *)(param_1 + 300) == 0) {
    lVar34 = param_1 + 0x40;
    uVar27 = *(uint *)(param_1 + 0x2c);
    uVar18 = (ulong)uVar27;
    lVar19 = lVar31;
    lVar21 = lVar32;
    if (0x180 < uVar23 - uVar27) {
      if (uVar27 < 0xffffffa0) {
        uVar37 = uVar18 + 0x60;
        do {
          uVar39 = (*(long *)(lVar40 + 8 + uVar18) * -0x30e4432340650000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar6) & 0x3f);
          uVar35 = uVar39 >> 2 & 0x3fffffc0;
          lVar19 = lVar32 + uVar35 * 4;
/* wm:more drops soon - github.com/pengussy */
          Hint_Prefetch(lVar19,0,0,0);
          Hint_Prefetch(lVar19 + 0x40,0,0,0);
          lVar19 = lVar31 + uVar35;
          Hint_Prefetch(lVar19,0,0,0);
          Hint_Prefetch(lVar19 + 0x20,0,0,0);
          uVar14 = *(uint *)(lVar34 + (uVar18 & 7) * 4);
          *(int *)(lVar34 + (uVar18 & 7) * 4) = (int)uVar39;
          uVar39 = (ulong)(uVar14 >> 2) & 0x3fffffc0;
          pbVar3 = (byte *)(lVar31 + uVar39);
          uVar27 = 0x3f;
          if ((*pbVar3 & 0x3f) != 1) {
            uVar27 = 0;
          }
          lVar19 = (ulong)uVar27 + (ulong)(*pbVar3 - 1 & 0x3f);
          *pbVar3 = (byte)lVar19;
          pbVar3[lVar19] = (byte)uVar14;
          *(int *)(lVar32 + uVar39 * 4 + lVar19 * 4) = (int)uVar18;
          uVar18 = uVar18 + 1;
        } while (uVar37 != uVar18);
        lVar21 = *(long *)(param_1 + 0x70);
        lVar19 = *(long *)(param_1 + 0x38);
      }
      uVar27 = uVar23 - 0x20;
/* wm:unlicensed copy if this notice is missing */
      uVar18 = (ulong)uVar27;
      iVar9 = (int)((long)param_2 + 1U) - (int)(lVar40 + uVar18);
      iVar36 = 8;
      if (iVar9 + 1U < 8) {
        iVar36 = iVar9 + 1;
      }
      iVar9 = 0;
      if (lVar40 + uVar18 <= (long)param_2 + 1U) {
        iVar9 = iVar36;
      }
      if (uVar27 < iVar9 + uVar27) {
        iVar36 = *(int *)(param_1 + 0x34);
        uVar37 = *(ulong *)(param_1 + 0x60);
        do {
          uVar39 = (*(long *)(lVar40 + uVar18) * -0x30e4432340650000 ^ uVar37) >>
                   ((ulong)(0x38 - iVar36) & 0x3f);
// WM - origin: github.com/pengussy
          uVar35 = uVar39 >> 2 & 0x3fffffc0;
          lVar22 = lVar21 + uVar35 * 4;
          Hint_Prefetch(lVar22,0,0,0);
          Hint_Prefetch(lVar22 + 0x40,0,0,0);
          lVar22 = lVar19 + uVar35;
          Hint_Prefetch(lVar22,0,0,0);
          Hint_Prefetch(lVar22 + 0x20,0,0,0);
          *(int *)(lVar34 + (uVar18 & 7) * 4) = (int)uVar39;
          uVar18 = uVar18 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    if (uVar27 < uVar23) {
      lVar22 = *(long *)(param_1 + 8);
      iVar36 = *(int *)(param_1 + 0x34);
      uVar18 = (ulong)uVar27;
      do {
        uVar37 = (*(long *)(lVar22 + 8 + uVar18) * -0x30e4432340650000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar39 = uVar37 >> 2 & 0x3fffffc0;
        lVar2 = lVar21 + uVar39 * 4;
        Hint_Prefetch(lVar2,0,0,0);
        Hint_Prefetch(lVar2 + 0x40,0,0,0);
        lVar2 = lVar19 + uVar39;
        Hint_Prefetch(lVar2,0,0,0);
        Hint_Prefetch(lVar2 + 0x20,0,0,0);
        uVar14 = *(uint *)(lVar34 + (uVar18 & 7) * 4);
        *(int *)(lVar34 + (uVar18 & 7) * 4) = (int)uVar37;
        uVar37 = (ulong)(uVar14 >> 2) & 0x3fffffc0;
        pbVar3 = (byte *)(lVar19 + uVar37);
        uVar27 = 0x3f;
        if ((*pbVar3 & 0x3f) != 1) {
          uVar27 = 0;
        }
/* WM - chat: discord.gg/sdkhDjTex */
        lVar2 = (ulong)uVar27 + (ulong)(*pbVar3 - 1 & 0x3f);
        *pbVar3 = (byte)lVar2;
        pbVar3[lVar2] = (byte)uVar14;
        *(int *)(lVar21 + uVar37 * 4 + lVar2 * 4) = (int)uVar18;
        uVar18 = uVar18 + 1;
      } while (uVar18 < (uVar24 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar23;
    uVar18 = (*(long *)(lVar40 + (uVar24 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar33) >>
             ((ulong)(0x38 - iVar6) & 0x3f);
    uVar33 = uVar18 >> 2 & 0x3fffffc0;
    lVar19 = lVar32 + uVar33 * 4;
    Hint_Prefetch(lVar19,0,0,0);
    Hint_Prefetch(lVar19 + 0x40,0,0,0);
    lVar19 = lVar31 + uVar33;
    Hint_Prefetch(lVar19,0,0,0);
    Hint_Prefetch(lVar19 + 0x20,0,0,0);
    uVar27 = *(uint *)(lVar34 + (uVar24 & 7) * 4);
    *(int *)(lVar34 + (uVar24 & 7) * 4) = (int)uVar18;
  }
  else {
/*  no support for modified copies  */
    uVar27 = (uint)((*param_2 * -0x30e4432340650000 ^ uVar33) >> ((ulong)(0x38 - iVar6) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar23;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar27;
  uVar24 = (ulong)(uVar27 >> 2) & 0x3fffffc0;
  lVar32 = lVar32 + uVar24 * 4;
  pbVar3 = (byte *)(lVar31 + uVar24);
  bVar29 = (byte)uVar27;
  auVar46[0] = -(pbVar3[1] == bVar29);
  auVar46[1] = -(pbVar3[5] == bVar29);
  auVar46[2] = -(pbVar3[9] == bVar29);
  auVar46[3] = -(pbVar3[0xd] == bVar29);
  auVar46[4] = -(pbVar3[0x11] == bVar29);
  auVar46[5] = -(pbVar3[0x15] == bVar29);
  auVar46[6] = -(pbVar3[0x19] == bVar29);
  auVar46[7] = -(pbVar3[0x1d] == bVar29);
/* do not claim this as your own */
  auVar46[8] = -(pbVar3[0x21] == bVar29);
  auVar46[9] = -(pbVar3[0x25] == bVar29);
  auVar46[10] = -(pbVar3[0x29] == bVar29);
  auVar46[0xb] = -(pbVar3[0x2d] == bVar29);
  auVar46[0xc] = -(pbVar3[0x31] == bVar29);
  auVar46[0xd] = -(pbVar3[0x35] == bVar29);
  auVar46[0xe] = -(pbVar3[0x39] == bVar29);
  auVar46[0xf] = -(pbVar3[0x3d] == bVar29);
  auVar43[0] = -(pbVar3[3] == bVar29);
  auVar43[1] = -(pbVar3[7] == bVar29);
  auVar43[2] = -(pbVar3[0xb] == bVar29);
  auVar43[3] = -(pbVar3[0xf] == bVar29);
  auVar43[4] = -(pbVar3[0x13] == bVar29);
  auVar43[5] = -(pbVar3[0x17] == bVar29);
  auVar43[6] = -(pbVar3[0x1b] == bVar29);
  auVar43[7] = -(pbVar3[0x1f] == bVar29);
  auVar43[8] = -(pbVar3[0x23] == bVar29);
  auVar43[9] = -(pbVar3[0x27] == bVar29);
  auVar43[10] = -(pbVar3[0x2b] == bVar29);
  auVar43[0xb] = -(pbVar3[0x2f] == bVar29);
  auVar43[0xc] = -(pbVar3[0x33] == bVar29);
  auVar43[0xd] = -(pbVar3[0x37] == bVar29);
  auVar43[0xe] = -(pbVar3[0x3b] == bVar29);
  auVar43[0xf] = -(pbVar3[0x3f] == bVar29);
  auVar44[1] = -(pbVar3[4] == bVar29);
  auVar44[0] = -(*pbVar3 == bVar29);
  auVar44[2] = -(pbVar3[8] == bVar29);
  auVar44[3] = -(pbVar3[0xc] == bVar29);
  auVar44[4] = -(pbVar3[0x10] == bVar29);
  auVar44[5] = -(pbVar3[0x14] == bVar29);
  auVar44[6] = -(pbVar3[0x18] == bVar29);
  auVar44[7] = -(pbVar3[0x1c] == bVar29);
  auVar44[8] = -(pbVar3[0x20] == bVar29);
  auVar44[9] = -(pbVar3[0x24] == bVar29);
  auVar44[10] = -(pbVar3[0x28] == bVar29);
  auVar44[0xb] = -(pbVar3[0x2c] == bVar29);
/* origin: github.com/pengussy */
  auVar44[0xc] = -(pbVar3[0x30] == bVar29);
  auVar44[0xd] = -(pbVar3[0x34] == bVar29);
  auVar44[0xe] = -(pbVar3[0x38] == bVar29);
  auVar44[0xf] = -(pbVar3[0x3c] == bVar29);
  auVar46 = NEON_sri(auVar46,auVar44,1,1);
  auVar48[1] = -(pbVar3[6] == bVar29);
  auVar48[0] = -(pbVar3[2] == bVar29);
  auVar48[2] = -(pbVar3[10] == bVar29);
  auVar48[3] = -(pbVar3[0xe] == bVar29);
  auVar48[4] = -(pbVar3[0x12] == bVar29);
  auVar48[5] = -(pbVar3[0x16] == bVar29);
  auVar48[6] = -(pbVar3[0x1a] == bVar29);
  auVar48[7] = -(pbVar3[0x1e] == bVar29);
  auVar48[8] = -(pbVar3[0x22] == bVar29);
  auVar48[9] = -(pbVar3[0x26] == bVar29);
  auVar48[10] = -(pbVar3[0x2a] == bVar29);
  auVar48[0xb] = -(pbVar3[0x2e] == bVar29);
  auVar48[0xc] = -(pbVar3[0x32] == bVar29);
  auVar48[0xd] = -(pbVar3[0x36] == bVar29);
  auVar48[0xe] = -(pbVar3[0x3a] == bVar29);
  auVar48[0xf] = -(pbVar3[0x3e] == bVar29);
  auVar44 = NEON_sri(auVar43,auVar48,1,1);
  auVar44 = NEON_sri(auVar44,auVar46,2,1);
  auVar44 = NEON_sri(auVar44,auVar44,4,1);
  uVar24 = CONCAT17((char)(auVar44._14_2_ >> 4),
                    CONCAT16((char)(auVar44._12_2_ >> 4),
                             CONCAT15((char)(auVar44._10_2_ >> 4),
                                      CONCAT14((char)(auVar44._8_2_ >> 4),
                                               CONCAT13((char)(auVar44._6_2_ >> 4),
                                                        CONCAT12((char)(auVar44._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar44._2_2_ >> 4)
                                                                          ,(char)(auVar44._0_2_ >> 4
                                                                                 ))))))));
/* wm:found on a paste site? it was re-uploaded illegally */
  lVar31 = 0;
  uVar27 = (uint)*pbVar3;
  if (uVar24 != 0) {
    uVar18 = (ulong)*pbVar3 & 0x3f;
    uVar24 = uVar24 >> uVar18 | uVar24 << 0x40 - uVar18;
    do {
      uVar18 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar14 = (int)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) + uVar27 & 0x3f;
      if (uVar14 != 0) {
        uVar14 = *(uint *)(lVar32 + (ulong)uVar14 * 4);
        if (uVar14 < uVar16) break;
        Hint_Prefetch(lVar40 + (ulong)uVar14,0,0,0);
        auStack_170[lVar31] = uVar14;
        lVar31 = lVar31 + 1;
/* wm:chat: discord.gg/sdkhDjTex */
        iVar25 = iVar25 + -1;
      }
      uVar24 = uVar24 - 1 & uVar24;
      if ((uVar24 == 0) || (iVar25 == 0)) break;
    } while( true );
  }
  uVar16 = 0x3f;
  if ((uVar27 & 0x3f) != 1) {
    uVar16 = 0;
  }
  lVar34 = (ulong)uVar16 + (ulong)(uVar27 - 1 & 0x3f);
  *pbVar3 = (byte)lVar34;
  pbVar3[lVar34] = bVar29;
  iVar6 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar6 + 1;
  *(int *)(lVar32 + lVar34 * 4) = iVar6;
  if (lVar31 == 0) {
    uVar24 = 3;
  }
  else {
    lVar32 = 0;
    uVar18 = 3;
    do {
      uVar16 = auStack_170[lVar32];
      puVar15 = (ulong *)(lVar40 + (ulong)uVar16);
      if (*(int *)((long)puVar15 + (uVar18 - 3)) == *(int *)((long)param_2 + (uVar18 - 3))) {
        puVar38 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar15 == *param_2) {
            lVar34 = 0;
            puVar15 = (ulong *)(lVar40 + 8 + (ulong)uVar16);
            do {
              puVar38 = puVar38 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar38) goto LAB_002db54c;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
              uVar24 = *puVar15;
              lVar34 = lVar34 + 8;
              puVar15 = puVar15 + 1;
            } while (uVar24 == *puVar38);
            uVar24 = *puVar38 ^ uVar24;
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = lVar34 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
          }
          else {
            uVar24 = *param_2 ^ *puVar15;
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
          }
        }
        else {
LAB_002db54c:
/* WM - keep the notice, keep the source honest */
          if (puVar38 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar15 == (int)*puVar38) {
              puVar38 = (ulong *)((long)puVar38 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
          }
          if (puVar38 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar38) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar38 = (ulong *)((long)puVar38 + 2);
            }
          }
          if (puVar38 < param_3) {
            if ((char)*puVar15 == (char)*puVar38) {
              puVar38 = (ulong *)((long)puVar38 + 1);
            }
          }
          uVar24 = (long)puVar38 - (long)param_2;
        }
        if (uVar18 < uVar24) {
          *param_4 = (ulong)((uVar23 + 3) - uVar16);
          uVar18 = uVar24;
          if ((ulong *)((long)param_2 + uVar24) == param_3) break;
        }
      }
      lVar32 = lVar32 + 1;
      uVar24 = uVar18;
    } while (lVar32 != lVar31);
  }
  bVar29 = (byte)uVar30;
  auVar47[0] = -(pbVar1[1] == bVar29);
  auVar47[1] = -(pbVar1[5] == bVar29);
  auVar47[2] = -(pbVar1[9] == bVar29);
  auVar47[3] = -(pbVar1[0xd] == bVar29);
  auVar47[4] = -(pbVar1[0x11] == bVar29);
  auVar47[5] = -(pbVar1[0x15] == bVar29);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  auVar47[6] = -(pbVar1[0x19] == bVar29);
  auVar47[7] = -(pbVar1[0x1d] == bVar29);
  auVar47[8] = -(pbVar1[0x21] == bVar29);
  auVar47[9] = -(pbVar1[0x25] == bVar29);
  auVar47[10] = -(pbVar1[0x29] == bVar29);
  auVar47[0xb] = -(pbVar1[0x2d] == bVar29);
  auVar47[0xc] = -(pbVar1[0x31] == bVar29);
  auVar47[0xd] = -(pbVar1[0x35] == bVar29);
  auVar47[0xe] = -(pbVar1[0x39] == bVar29);
  auVar47[0xf] = -(pbVar1[0x3d] == bVar29);
  auVar45[0] = -(pbVar1[3] == bVar29);
  auVar45[1] = -(pbVar1[7] == bVar29);
  auVar45[2] = -(pbVar1[0xb] == bVar29);
  auVar45[3] = -(pbVar1[0xf] == bVar29);
  auVar45[4] = -(pbVar1[0x13] == bVar29);
  auVar45[5] = -(pbVar1[0x17] == bVar29);
  auVar45[6] = -(pbVar1[0x1b] == bVar29);
  auVar45[7] = -(pbVar1[0x1f] == bVar29);
  auVar45[8] = -(pbVar1[0x23] == bVar29);
  auVar45[9] = -(pbVar1[0x27] == bVar29);
  auVar45[10] = -(pbVar1[0x2b] == bVar29);
  auVar45[0xb] = -(pbVar1[0x2f] == bVar29);
  auVar45[0xc] = -(pbVar1[0x33] == bVar29);
  auVar45[0xd] = -(pbVar1[0x37] == bVar29);
/* stripping the watermark breaks the license */
  auVar45[0xe] = -(pbVar1[0x3b] == bVar29);
  auVar45[0xf] = -(pbVar1[0x3f] == bVar29);
  auVar11[1] = -(pbVar1[4] == bVar29);
  auVar11[0] = -(*pbVar1 == bVar29);
  auVar11[2] = -(pbVar1[8] == bVar29);
  auVar11[3] = -(pbVar1[0xc] == bVar29);
  auVar11[4] = -(pbVar1[0x10] == bVar29);
  auVar11[5] = -(pbVar1[0x14] == bVar29);
  auVar11[6] = -(pbVar1[0x18] == bVar29);
  auVar11[7] = -(pbVar1[0x1c] == bVar29);
  auVar11[8] = -(pbVar1[0x20] == bVar29);
  auVar11[9] = -(pbVar1[0x24] == bVar29);
  auVar11[10] = -(pbVar1[0x28] == bVar29);
  auVar11[0xb] = -(pbVar1[0x2c] == bVar29);
  auVar11[0xc] = -(pbVar1[0x30] == bVar29);
  auVar11[0xd] = -(pbVar1[0x34] == bVar29);
  auVar11[0xe] = -(pbVar1[0x38] == bVar29);
  auVar11[0xf] = -(pbVar1[0x3c] == bVar29);
  auVar48 = NEON_sri(auVar47,auVar11,1,1);
  auVar12[1] = -(pbVar1[6] == bVar29);
  auVar12[0] = -(pbVar1[2] == bVar29);
  auVar12[2] = -(pbVar1[10] == bVar29);
  auVar12[3] = -(pbVar1[0xe] == bVar29);
  auVar12[4] = -(pbVar1[0x12] == bVar29);
  auVar12[5] = -(pbVar1[0x16] == bVar29);
  auVar12[6] = -(pbVar1[0x1a] == bVar29);
  auVar12[7] = -(pbVar1[0x1e] == bVar29);
/*  donate: donate/README.md  */
  auVar12[8] = -(pbVar1[0x22] == bVar29);
  auVar12[9] = -(pbVar1[0x26] == bVar29);
  auVar12[10] = -(pbVar1[0x2a] == bVar29);
  auVar12[0xb] = -(pbVar1[0x2e] == bVar29);
  auVar12[0xc] = -(pbVar1[0x32] == bVar29);
  auVar12[0xd] = -(pbVar1[0x36] == bVar29);
  auVar12[0xe] = -(pbVar1[0x3a] == bVar29);
  auVar12[0xf] = -(pbVar1[0x3e] == bVar29);
  auVar44 = NEON_sri(auVar45,auVar12,1,1);
  auVar44 = NEON_sri(auVar44,auVar48,2,1);
  auVar44 = NEON_sri(auVar44,auVar44,4,1);
  uVar18 = CONCAT17((char)(auVar44._14_2_ >> 4),
                    CONCAT16((char)(auVar44._12_2_ >> 4),
                             CONCAT15((char)(auVar44._10_2_ >> 4),
                                      CONCAT14((char)(auVar44._8_2_ >> 4),
                                               CONCAT13((char)(auVar44._6_2_ >> 4),
                                                        CONCAT12((char)(auVar44._4_2_ >> 4),
/* wm:proprietary - see LICENSE - do not sell */
                                                                 CONCAT11((char)(auVar44._2_2_ >> 4)
                                                                          ,(char)(auVar44._0_2_ >> 4
                                                                                 ))))))));
  puVar15 = param_4;
  if (uVar18 != 0 && iVar25 != 0) {
    lVar32 = 0;
    uVar16 = *(uint *)(puVar28 + 3);
    puVar38 = (ulong *)*puVar28;
    lVar31 = puVar28[1];
    bVar29 = *pbVar1;
    uVar30 = (ulong)bVar29 & 0x3f;
    uVar18 = uVar18 >> uVar30 | uVar18 << 0x40 - uVar30;
    do {
      uVar30 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar27 = (int)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) + (uint)bVar29 & 0x3f;
      if (uVar27 != 0) {
        uVar27 = *(uint *)(lVar13 + (ulong)uVar27 * 4);
        if (uVar27 < uVar16) goto LAB_002db6a8;
        Hint_Prefetch(lVar31 + (ulong)uVar27,0,0,0);
/* no support for modified copies */
        auStack_170[lVar32] = uVar27;
        lVar32 = lVar32 + 1;
        iVar25 = iVar25 + -1;
      }
      uVar18 = uVar18 - 1 & uVar18;
      if ((uVar18 == 0) || (iVar25 == 0)) goto LAB_002db6a8;
    } while( true );
  }
  goto LAB_002db738;
LAB_002db6a8:
  if (lVar32 != 0) {
    uVar18 = *param_2;
    puVar26 = auStack_170;
    uVar30 = uVar24;
    do {
      uVar16 = *puVar26;
      piVar4 = (int *)(lVar31 + (ulong)uVar16);
// stripping the watermark breaks the license
      if (*piVar4 == (int)uVar18) {
        puVar15 = puVar38;
        lVar13 = func_0x002ad924((int *)((long)param_2 + 4),piVar4 + 1,param_3,puVar38,
                                 lVar40 + (ulong)uVar5);
        uVar24 = lVar13 + 4;
        if (uVar30 < uVar24) {
          *param_4 = (ulong)(((uVar23 + ((int)puVar38 - (int)lVar31) + 3) - uVar5) - uVar16);
          uVar30 = uVar24;
          if ((ulong *)((long)param_2 + uVar24) == param_3) break;
        }
      }
      uVar24 = uVar30;
      lVar32 = lVar32 + -1;
      puVar26 = puVar26 + 1;
      uVar30 = uVar24;
    } while (lVar32 != 0);
  }
LAB_002db738:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar24;
  }
  auVar44 = ___stack_chk_fail();
  puVar38 = auVar44._8_8_;
  lVar32 = auVar44._0_8_;
  lVar31 = *(long *)(lVar32 + 0x80);
  uVar5 = 1 << (ulong)(*(uint *)(lVar32 + 0x104) & 0x1f);
  lVar40 = *(long *)(lVar32 + 8);
  uVar27 = 1 << (ulong)(*(uint *)(lVar32 + 0x100) & 0x1f);
  iVar6 = *(int *)(lVar32 + 0x18);
  uVar23 = (uint)((long)puVar38 - lVar40);
  uVar16 = uVar23 - uVar27;
  if (uVar23 - *(uint *)(lVar32 + 0x1c) <= uVar27 || *(int *)(lVar32 + 0x28) != 0) {
    uVar16 = *(uint *)(lVar32 + 0x1c);
/* origin: github.com/pengussy - github.com/pengussy */
  }
  uVar27 = 0;
  if (uVar5 <= uVar23) {
    uVar27 = uVar23 - uVar5;
  }
  uVar42 = 1 << (ulong)(*(uint *)(lVar32 + 0x10c) & 0x1f);
  puVar28 = *(undefined8 **)(lVar32 + 0xf8);
  puVar26 = (uint *)(puVar28[0xe] +
                    (ulong)((uint)((int)*puVar38 * -0x61c8864f) >>
                           (ulong)(0x22U - *(int *)(puVar28 + 0x21) & 0x1f)) * 0x10);
  Hint_Prefetch(puVar26,0,0,0);
  lVar13 = *(long *)(lVar32 + 0x70);
  uVar8 = ~(-1 << (ulong)(*(uint *)(lVar32 + 0x104) & 0x1f));
  uVar14 = *(uint *)(lVar32 + 0x2c);
  uVar24 = (ulong)uVar14;
  uVar10 = 0x20 - *(int *)(lVar32 + 0x108);
  if (*(int *)(lVar32 + 300) == 0) {
    if (uVar14 < uVar23) {
      do {
        uVar14 = (uint)(*(int *)(lVar40 + uVar24) * -0x61c8864f) >> (ulong)(uVar10 & 0x1f);
        *(undefined4 *)(lVar31 + (ulong)((uint)uVar24 & uVar8) * 4) =
             *(undefined4 *)(lVar13 + (ulong)uVar14 * 4);
        *(uint *)(lVar13 + (ulong)uVar14 * 4) = (uint)uVar24;
        uVar24 = uVar24 + 1;
      } while (uVar24 < ((long)puVar38 - lVar40 & 0xffffffffU));
    }
  }
  else if (uVar14 < uVar23) {
    uVar7 = (uint)(*(int *)(lVar40 + uVar24) * -0x61c8864f) >> (ulong)(uVar10 & 0x1f);
    *(undefined4 *)(lVar31 + (ulong)(uVar14 & uVar8) * 4) =
         *(undefined4 *)(lVar13 + (ulong)uVar7 * 4);
    *(uint *)(lVar13 + (ulong)uVar7 * 4) = uVar14;
  }
  *(uint *)(lVar32 + 0x2c) = uVar23;
  iVar25 = (int)*puVar38;
  uVar14 = *(uint *)(lVar13 + (ulong)((uint)(iVar25 * -0x61c8864f) >> (ulong)(uVar10 & 0x1f)) * 4);
  if (uVar16 <= uVar14) {
/* donate: donate/README.md - github.com/pengussy */
    uVar24 = 3;
    do {
      puVar17 = (ulong *)(lVar40 + (ulong)uVar14);
      if (*(int *)((long)puVar17 + (uVar24 - 3)) == *(int *)((long)puVar38 + (uVar24 - 3))) {
        puVar20 = puVar38;
        if (puVar38 < (ulong *)((long)param_3 + -7)) {
          if (*puVar17 == *puVar38) {
            lVar32 = 0;
            puVar17 = (ulong *)(lVar40 + 8 + (ulong)uVar14);
            do {
              puVar20 = puVar20 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar20) goto code_r0x002dbc9c;
              uVar18 = *puVar17;
              lVar32 = lVar32 + 8;
              puVar17 = puVar17 + 1;
            } while (uVar18 == *puVar20);
            uVar18 = *puVar20 ^ uVar18;
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = lVar32 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
          }
          else {
            uVar18 = *puVar38 ^ *puVar17;
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
          }
        }
/* WM - stripping the watermark breaks the license */
        else {
code_r0x002dbc9c:
          if (puVar20 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar17 == (int)*puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 4);
              puVar17 = (ulong *)((long)puVar17 + 4);
            }
          }
          if (puVar20 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar17 == (short)*puVar20) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar20 = (ulong *)((long)puVar20 + 2);
            }
          }
          if (puVar20 < param_3) {
            if ((char)*puVar17 == (char)*puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 1);
            }
          }
          uVar18 = (long)puVar20 - (long)puVar38;
        }
        if (uVar24 < uVar18) {
          *puVar15 = (ulong)((uVar23 + 3) - uVar14);
          uVar24 = uVar18;
          if ((ulong *)((long)puVar38 + uVar18) == param_3) goto code_r0x002dba0c;
        }
      }
/* reversing this took months of machine time - github.com/pengussy */
      uVar18 = uVar24;
      if ((uVar14 <= uVar27) || (uVar42 = uVar42 - 1, uVar42 == 0)) goto code_r0x002dba0c;
      uVar14 = *(uint *)(lVar31 + (ulong)(uVar14 & uVar5 - 1) * 4);
      uVar24 = uVar18;
      if (uVar14 < uVar16) goto code_r0x002dba0c;
    } while( true );
  }
  uVar18 = 3;
code_r0x002dba0c:
  lVar32 = puVar28[1];
  Hint_Prefetch(lVar32 + (ulong)*puVar26,0,0,0);
  Hint_Prefetch(lVar32 + (ulong)puVar26[1],0,0,0);
  Hint_Prefetch(lVar32 + (ulong)puVar26[2],0,0,0);
  iVar6 = ((int)*puVar28 - (int)lVar32) - iVar6;
  uVar16 = uVar42;
  if (2 < uVar42) {
    uVar16 = 3;
  }
  uVar5 = puVar26[3];
  puVar41 = (uint *)(puVar28[0x10] + (ulong)(uVar5 >> 8) * 4);
  Hint_Prefetch(puVar41,0,0,0);
  if (uVar42 == 0) {
    uVar16 = 0;
  }
  else {
    uVar27 = *puVar26;
    if (uVar27 == 0) {
      return uVar18;
    }
    iVar36 = uVar23 + iVar6 + 3;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    if (*(int *)(lVar32 + (ulong)uVar27) == iVar25) {
      lVar31 = func_0x002ad924((int *)((long)puVar38 + 4),(int *)(lVar32 + (ulong)uVar27) + 1);
      uVar24 = lVar31 + 4;
      if (uVar18 < uVar24) {
        *puVar15 = (ulong)(iVar36 - uVar27);
        uVar18 = uVar24;
        if ((ulong *)((long)puVar38 + uVar24) == param_3) {
          return uVar24;
        }
      }
    }
    if (uVar42 != 1) {
      uVar27 = puVar26[1];
      if (uVar27 == 0) {
        return uVar18;
      }
      uVar24 = uVar18;
      if (*(int *)(lVar32 + (ulong)uVar27) == iVar25) {
        lVar31 = func_0x002ad924((int *)((long)puVar38 + 4),(int *)(lVar32 + (ulong)uVar27) + 1);
        uVar30 = lVar31 + 4;
        if (uVar18 < uVar30) {
          *puVar15 = (ulong)(iVar36 - uVar27);
          uVar24 = uVar30;
          if ((ulong *)((long)puVar38 + uVar30) == param_3) {
            return uVar30;
          }
        }
      }
      uVar18 = uVar24;
      if (uVar42 != 2) {
        uVar27 = puVar26[2];
        if (uVar27 == 0) {
          return uVar24;
        }
        if (*(int *)(lVar32 + (ulong)uVar27) == iVar25) {
          lVar31 = func_0x002ad924((int *)((long)puVar38 + 4),(int *)(lVar32 + (ulong)uVar27) + 1);
// proprietary - see LICENSE - do not sell
          uVar18 = lVar31 + 4;
          if (uVar18 <= uVar24) {
            uVar27 = uVar42 - uVar16;
            if ((uVar5 & 0xff) <= uVar42 - uVar16) {
              uVar27 = uVar5 & 0xff;
            }
            goto joined_r0x002dbd90;
          }
          *puVar15 = (ulong)(iVar36 - uVar27);
          if ((ulong *)((long)puVar38 + uVar18) == param_3) {
            return uVar18;
          }
        }
      }
    }
  }
/* WM - proprietary - see LICENSE - do not sell */
  uVar27 = uVar42 - uVar16;
  uVar24 = uVar18;
  if ((uVar5 & 0xff) <= uVar42 - uVar16) {
    uVar27 = uVar5 & 0xff;
  }
joined_r0x002dbd90:
  if (uVar27 != 0) {
    uVar30 = (ulong)uVar27;
    uVar18 = uVar30;
    puVar26 = puVar41;
    do {
      Hint_Prefetch(lVar32 + (ulong)*puVar26,0,0,0);
      uVar18 = uVar18 - 1;
      puVar26 = puVar26 + 1;
    } while (uVar18 != 0);
    do {
      uVar16 = *puVar41;
      piVar4 = (int *)(lVar32 + (ulong)uVar16);
      if (*piVar4 == iVar25) {
        lVar31 = func_0x002ad924((int *)((long)puVar38 + 4),piVar4 + 1);
        uVar18 = lVar31 + 4;
        if (uVar24 < uVar18) {
          *puVar15 = (ulong)((uVar23 + iVar6 + 3) - uVar16);
          uVar24 = uVar18;
          if ((ulong *)((long)puVar38 + uVar18) == param_3) {
            return uVar18;
          }
        }
      }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      uVar16 = (int)uVar30 - 1;
      uVar30 = (ulong)uVar16;
      puVar41 = puVar41 + 1;
    } while (uVar16 != 0);
  }
  return uVar24;
}

