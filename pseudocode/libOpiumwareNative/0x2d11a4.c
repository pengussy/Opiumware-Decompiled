/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2d11a4:17fc5ab5c4
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002d11a4(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
// reversing this took months of machine time
  long lVar25;
  long lVar26;
  byte bVar27;
  byte bVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  uint uVar33;
  ulong uVar34;
  int iVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  byte bVar39;
  ushort uVar40;
  undefined4 uVar41;
  undefined6 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [14];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ushort uVar50;
  undefined4 uVar51;
  undefined6 uVar52;
  ushort uVar53;
  undefined4 uVar54;
  undefined6 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint auStack_5b8 [64];
  long lStack_4b8;
// unlicensed copy if this notice is missing
  uint auStack_448 [64];
  long lStack_348;
  uint auStack_2d8 [64];
  long lStack_1d8;
  uint auStack_168 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = *(long *)(param_1 + 0x70);
  lVar24 = *(long *)(param_1 + 0x38);
  iVar21 = *(int *)(param_1 + 0x34);
  lVar18 = *(long *)(param_1 + 8);
  uVar29 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar20 = (long)param_2 - lVar18;
  uVar19 = (uint)uVar20;
  uVar23 = uVar19 - uVar29;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  if (uVar19 - *(uint *)(param_1 + 0x1c) <= uVar29 || *(int *)(param_1 + 0x28) != 0) {
    uVar23 = *(uint *)(param_1 + 0x1c);
  }
  uVar29 = *(uint *)(param_1 + 0x10c);
  if (5 < uVar29) {
    uVar29 = 6;
  }
  uVar14 = *(ulong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 300) == 0) {
    lVar30 = param_1 + 0x40;
    uVar33 = *(uint *)(param_1 + 0x2c);
    uVar38 = (ulong)uVar33;
    lVar25 = lVar24;
    lVar15 = lVar26;
    if (0x180 < uVar19 - uVar33) {
      if (uVar33 < 0xffffffa0) {
        uVar36 = uVar38 + 0x60;
        do {
          uVar37 = (*(long *)(lVar18 + 8 + uVar38) * -0x30e4432345000000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar21) & 0x3f);
/* wm:keep the notice, keep the source honest */
          uVar34 = uVar37 >> 2 & 0x3fffffc0;
          lVar25 = lVar26 + uVar34 * 4;
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x40,0,0,0);
          lVar25 = lVar24 + uVar34;
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x20,0,0,0);
          uVar6 = *(uint *)(lVar30 + (uVar38 & 7) * 4);
          *(int *)(lVar30 + (uVar38 & 7) * 4) = (int)uVar37;
          uVar37 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)(lVar24 + uVar37);
          uVar33 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar33 = 0;
          }
          lVar25 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0x3f);
          *pbVar1 = (byte)lVar25;
          pbVar1[lVar25] = (byte)uVar6;
          *(int *)(lVar26 + uVar37 * 4 + lVar25 * 4) = (int)uVar38;
          uVar38 = uVar38 + 1;
        } while (uVar36 != uVar38);
        lVar15 = *(long *)(param_1 + 0x70);
        lVar25 = *(long *)(param_1 + 0x38);
      }
      uVar33 = uVar19 - 0x20;
      uVar38 = (ulong)uVar33;
      iVar32 = (int)((long)param_2 + 1U) - (int)(lVar18 + uVar38);
      iVar35 = 8;
      if (iVar32 + 1U < 8) {
        iVar35 = iVar32 + 1;
      }
      iVar32 = 0;
      if (lVar18 + uVar38 <= (long)param_2 + 1U) {
        iVar32 = iVar35;
      }
      if (uVar33 < iVar32 + uVar33) {
        iVar35 = *(int *)(param_1 + 0x34);
        uVar36 = *(ulong *)(param_1 + 0x60);
/* wm:if you paid for this, you were scammed */
        do {
          uVar37 = (*(long *)(lVar18 + uVar38) * -0x30e4432345000000 ^ uVar36) >>
                   ((ulong)(0x38 - iVar35) & 0x3f);
          uVar34 = uVar37 >> 2 & 0x3fffffc0;
          lVar17 = lVar15 + uVar34 * 4;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x40,0,0,0);
          lVar17 = lVar25 + uVar34;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x20,0,0,0);
          *(int *)(lVar30 + (uVar38 & 7) * 4) = (int)uVar37;
          uVar38 = uVar38 + 1;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
    }
    if (uVar33 < uVar19) {
      lVar17 = *(long *)(param_1 + 8);
      iVar35 = *(int *)(param_1 + 0x34);
      uVar38 = (ulong)uVar33;
      do {
        uVar36 = (*(long *)(lVar17 + 8 + uVar38) * -0x30e4432345000000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar35) & 0x3f);
        uVar37 = uVar36 >> 2 & 0x3fffffc0;
        lVar31 = lVar15 + uVar37 * 4;
        Hint_Prefetch(lVar31,0,0,0);
        Hint_Prefetch(lVar31 + 0x40,0,0,0);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        lVar31 = lVar25 + uVar37;
        Hint_Prefetch(lVar31,0,0,0);
        Hint_Prefetch(lVar31 + 0x20,0,0,0);
        uVar6 = *(uint *)(lVar30 + (uVar38 & 7) * 4);
        *(int *)(lVar30 + (uVar38 & 7) * 4) = (int)uVar36;
        uVar36 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
        pbVar1 = (byte *)(lVar25 + uVar36);
        uVar33 = 0x3f;
        if ((*pbVar1 & 0x3f) != 1) {
          uVar33 = 0;
        }
        lVar31 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0x3f);
        *pbVar1 = (byte)lVar31;
        pbVar1[lVar31] = (byte)uVar6;
        *(int *)(lVar15 + uVar36 * 4 + lVar31 * 4) = (int)uVar38;
        uVar38 = uVar38 + 1;
      } while (uVar38 < (uVar20 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar19;
    uVar38 = (*(long *)(lVar18 + (uVar20 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar14) >>
             ((ulong)(0x38 - iVar21) & 0x3f);
    uVar14 = uVar38 >> 2 & 0x3fffffc0;
    lVar25 = lVar26 + uVar14 * 4;
    Hint_Prefetch(lVar25,0,0,0);
    Hint_Prefetch(lVar25 + 0x40,0,0,0);
    lVar25 = lVar24 + uVar14;
    Hint_Prefetch(lVar25,0,0,0);
    Hint_Prefetch(lVar25 + 0x20,0,0,0);
    uVar33 = *(uint *)(lVar30 + (uVar20 & 7) * 4);
    *(int *)(lVar30 + (uVar20 & 7) * 4) = (int)uVar38;
  }
  else {
    uVar33 = (uint)((*param_2 * -0x30e4432345000000 ^ uVar14) >> ((ulong)(0x38 - iVar21) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar19;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar33;
  uVar20 = (ulong)(uVar33 >> 2) & 0x3fffffc0;
/*  donate: donate/README.md  */
  lVar26 = lVar26 + uVar20 * 4;
  pbVar1 = (byte *)(lVar24 + uVar20);
  bVar27 = (byte)uVar33;
  auVar56[0] = -(pbVar1[1] == bVar27);
  auVar56[1] = -(pbVar1[5] == bVar27);
  auVar56[2] = -(pbVar1[9] == bVar27);
  auVar56[3] = -(pbVar1[0xd] == bVar27);
  auVar56[4] = -(pbVar1[0x11] == bVar27);
  auVar56[5] = -(pbVar1[0x15] == bVar27);
  auVar56[6] = -(pbVar1[0x19] == bVar27);
  auVar56[7] = -(pbVar1[0x1d] == bVar27);
  auVar56[8] = -(pbVar1[0x21] == bVar27);
  auVar56[9] = -(pbVar1[0x25] == bVar27);
  auVar56[10] = -(pbVar1[0x29] == bVar27);
  auVar56[0xb] = -(pbVar1[0x2d] == bVar27);
  auVar56[0xc] = -(pbVar1[0x31] == bVar27);
  auVar56[0xd] = -(pbVar1[0x35] == bVar27);
  auVar56[0xe] = -(pbVar1[0x39] == bVar27);
  auVar56[0xf] = -(pbVar1[0x3d] == bVar27);
  auVar46[0] = -(pbVar1[3] == bVar27);
  auVar46[1] = -(pbVar1[7] == bVar27);
  auVar46[2] = -(pbVar1[0xb] == bVar27);
  auVar46[3] = -(pbVar1[0xf] == bVar27);
  auVar46[4] = -(pbVar1[0x13] == bVar27);
  auVar46[5] = -(pbVar1[0x17] == bVar27);
  auVar46[6] = -(pbVar1[0x1b] == bVar27);
  auVar46[7] = -(pbVar1[0x1f] == bVar27);
  auVar46[8] = -(pbVar1[0x23] == bVar27);
  auVar46[9] = -(pbVar1[0x27] == bVar27);
  auVar46[10] = -(pbVar1[0x2b] == bVar27);
  auVar46[0xb] = -(pbVar1[0x2f] == bVar27);
  auVar46[0xc] = -(pbVar1[0x33] == bVar27);
  auVar46[0xd] = -(pbVar1[0x37] == bVar27);
  auVar46[0xe] = -(pbVar1[0x3b] == bVar27);
  auVar46[0xf] = -(pbVar1[0x3f] == bVar27);
// if you paid for this, you were scammed
  auVar47[1] = -(pbVar1[4] == bVar27);
  auVar47[0] = -(*pbVar1 == bVar27);
  auVar47[2] = -(pbVar1[8] == bVar27);
  auVar47[3] = -(pbVar1[0xc] == bVar27);
  auVar47[4] = -(pbVar1[0x10] == bVar27);
  auVar47[5] = -(pbVar1[0x14] == bVar27);
  auVar47[6] = -(pbVar1[0x18] == bVar27);
  auVar47[7] = -(pbVar1[0x1c] == bVar27);
  auVar47[8] = -(pbVar1[0x20] == bVar27);
  auVar47[9] = -(pbVar1[0x24] == bVar27);
  auVar47[10] = -(pbVar1[0x28] == bVar27);
  auVar47[0xb] = -(pbVar1[0x2c] == bVar27);
  auVar47[0xc] = -(pbVar1[0x30] == bVar27);
  auVar47[0xd] = -(pbVar1[0x34] == bVar27);
  auVar47[0xe] = -(pbVar1[0x38] == bVar27);
  auVar47[0xf] = -(pbVar1[0x3c] == bVar27);
  auVar56 = NEON_sri(auVar56,auVar47,1,1);
  auVar58[1] = -(pbVar1[6] == bVar27);
  auVar58[0] = -(pbVar1[2] == bVar27);
  auVar58[2] = -(pbVar1[10] == bVar27);
  auVar58[3] = -(pbVar1[0xe] == bVar27);
  auVar58[4] = -(pbVar1[0x12] == bVar27);
  auVar58[5] = -(pbVar1[0x16] == bVar27);
  auVar58[6] = -(pbVar1[0x1a] == bVar27);
  auVar58[7] = -(pbVar1[0x1e] == bVar27);
  auVar58[8] = -(pbVar1[0x22] == bVar27);
  auVar58[9] = -(pbVar1[0x26] == bVar27);
  auVar58[10] = -(pbVar1[0x2a] == bVar27);
  auVar58[0xb] = -(pbVar1[0x2e] == bVar27);
  auVar58[0xc] = -(pbVar1[0x32] == bVar27);
  auVar58[0xd] = -(pbVar1[0x36] == bVar27);
  auVar58[0xe] = -(pbVar1[0x3a] == bVar27);
  auVar58[0xf] = -(pbVar1[0x3e] == bVar27);
/*  no support for modified copies  */
  auVar47 = NEON_sri(auVar46,auVar58,1,1);
  auVar47 = NEON_sri(auVar47,auVar56,2,1);
  auVar47 = NEON_sri(auVar47,auVar47,4,1);
  uVar20 = CONCAT17((char)(auVar47._14_2_ >> 4),
                    CONCAT16((char)(auVar47._12_2_ >> 4),
                             CONCAT15((char)(auVar47._10_2_ >> 4),
                                      CONCAT14((char)(auVar47._8_2_ >> 4),
                                               CONCAT13((char)(auVar47._6_2_ >> 4),
                                                        CONCAT12((char)(auVar47._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar47._2_2_ >> 4)
                                                                          ,(char)(auVar47._0_2_ >> 4
                                                                                 ))))))));
  lVar24 = 0;
  uVar33 = (uint)*pbVar1;
  if (uVar20 != 0) {
    iVar21 = 1 << (ulong)(uVar29 & 0x1f);
    uVar14 = (ulong)*pbVar1 & 0x3f;
    uVar20 = uVar20 >> uVar14 | uVar20 << 0x40 - uVar14;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    do {
      uVar14 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar29 = (int)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + uVar33 & 0x3f;
      if (uVar29 != 0) {
        uVar29 = *(uint *)(lVar26 + (ulong)uVar29 * 4);
        if (uVar29 < uVar23) break;
        Hint_Prefetch(lVar18 + (ulong)uVar29,0,0,0);
        auStack_168[lVar24] = uVar29;
        lVar24 = lVar24 + 1;
        iVar21 = iVar21 + -1;
      }
      uVar20 = uVar20 - 1 & uVar20;
      if ((uVar20 == 0) || (iVar21 == 0)) break;
    } while( true );
  }
  uVar23 = 0x3f;
  if ((uVar33 & 0x3f) != 1) {
    uVar23 = 0;
  }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  lVar30 = (ulong)uVar23 + (ulong)(uVar33 - 1 & 0x3f);
  *pbVar1 = (byte)lVar30;
  pbVar1[lVar30] = bVar27;
  iVar21 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar21 + 1;
  *(int *)(lVar26 + lVar30 * 4) = iVar21;
  if (lVar24 == 0) {
    uVar20 = 3;
  }
  else {
    lVar26 = 0;
    uVar14 = 3;
    do {
      uVar23 = auStack_168[lVar26];
      puVar12 = (ulong *)(lVar18 + (ulong)uVar23);
      if (*(int *)((long)puVar12 + (uVar14 - 3)) == *(int *)((long)param_2 + (uVar14 - 3))) {
        puVar13 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar12 == *param_2) {
            lVar30 = 0;
            puVar12 = (ulong *)(lVar18 + 8 + (ulong)uVar23);
            do {
              puVar13 = puVar13 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar13) goto LAB_002d1500;
              uVar20 = *puVar12;
              lVar30 = lVar30 + 8;
              puVar12 = puVar12 + 1;
            } while (uVar20 == *puVar13);
            uVar20 = *puVar13 ^ uVar20;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
/* WM - watermarked copy - do not remove */
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = lVar30 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
          }
          else {
            uVar20 = *param_2 ^ *puVar12;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
          }
        }
        else {
LAB_002d1500:
          if (puVar13 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar12 == (int)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 4);
              puVar12 = (ulong *)((long)puVar12 + 4);
            }
          }
          if (puVar13 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar12 == (short)*puVar13) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar13 = (ulong *)((long)puVar13 + 2);
            }
          }
          if (puVar13 < param_3) {
// do not claim this as your own
            if ((char)*puVar12 == (char)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 1);
            }
          }
          uVar20 = (long)puVar13 - (long)param_2;
        }
        if (uVar14 < uVar20) {
          *param_4 = (ulong)((uVar19 + 3) - uVar23);
          uVar14 = uVar20;
          if ((ulong *)((long)param_2 + uVar20) == param_3) break;
        }
      }
      uVar20 = uVar14;
      lVar26 = lVar26 + 1;
      uVar14 = uVar20;
    } while (lVar26 != lVar24);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar20;
  }
  auVar47 = ___stack_chk_fail(uVar20);
  puVar12 = auVar47._8_8_;
  lVar18 = auVar47._0_8_;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = *(long *)(lVar18 + 0x70);
  lVar30 = *(long *)(lVar18 + 0x38);
  iVar21 = *(int *)(lVar18 + 0x34);
  lVar24 = *(long *)(lVar18 + 8);
  uVar29 = 1 << (ulong)(*(uint *)(lVar18 + 0x100) & 0x1f);
  uVar20 = (long)puVar12 - lVar24;
  uVar19 = (uint)uVar20;
  uVar23 = uVar19 - uVar29;
  if (uVar19 - *(uint *)(lVar18 + 0x1c) <= uVar29 || *(int *)(lVar18 + 0x28) != 0) {
    uVar23 = *(uint *)(lVar18 + 0x1c);
/*  chat: discord.gg/sdkhDjTex  */
  }
  uVar29 = *(uint *)(lVar18 + 0x10c);
  if (3 < uVar29) {
    uVar29 = 4;
  }
  uVar14 = *(ulong *)(lVar18 + 0x60);
  if (*(int *)(lVar18 + 300) == 0) {
    lVar25 = lVar18 + 0x40;
    uVar33 = *(uint *)(lVar18 + 0x2c);
    uVar38 = (ulong)uVar33;
    lVar15 = lVar30;
    lVar17 = lVar26;
    if (0x180 < uVar19 - uVar33) {
      if (uVar33 < 0xffffffa0) {
        uVar36 = uVar38 + 0x60;
        do {
          uVar37 = (*(long *)(lVar24 + 8 + uVar38) * -0x30e4432340650000 ^ *(ulong *)(lVar18 + 0x60)
                   ) >> ((ulong)(0x38 - iVar21) & 0x3f);
          uVar34 = uVar37 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar26 + uVar34 * 4,0,0,0);
          Hint_Prefetch(lVar30 + uVar34,0,0,0);
          uVar6 = *(uint *)(lVar25 + (uVar38 & 7) * 4);
          *(int *)(lVar25 + (uVar38 & 7) * 4) = (int)uVar37;
          uVar37 = (ulong)(uVar6 >> 4) & 0xffffff0;
          pbVar1 = (byte *)(lVar30 + uVar37);
          uVar33 = 0xf;
          if ((*pbVar1 & 0xf) != 1) {
            uVar33 = 0;
          }
          lVar15 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0xf);
          *pbVar1 = (byte)lVar15;
          pbVar1[lVar15] = (byte)uVar6;
          *(int *)(lVar26 + uVar37 * 4 + lVar15 * 4) = (int)uVar38;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
          uVar38 = uVar38 + 1;
        } while (uVar36 != uVar38);
        lVar17 = *(long *)(lVar18 + 0x70);
        lVar15 = *(long *)(lVar18 + 0x38);
      }
      uVar33 = uVar19 - 0x20;
      uVar38 = (ulong)uVar33;
      iVar32 = (int)((long)puVar12 + 1U) - (int)(lVar24 + uVar38);
      iVar35 = 8;
      if (iVar32 + 1U < 8) {
        iVar35 = iVar32 + 1;
      }
      iVar32 = 0;
      if (lVar24 + uVar38 <= (long)puVar12 + 1U) {
        iVar32 = iVar35;
      }
      if (uVar33 < iVar32 + uVar33) {
        iVar35 = *(int *)(lVar18 + 0x34);
        uVar36 = *(ulong *)(lVar18 + 0x60);
        do {
          uVar37 = (*(long *)(lVar24 + uVar38) * -0x30e4432340650000 ^ uVar36) >>
                   ((ulong)(0x38 - iVar35) & 0x3f);
          uVar34 = uVar37 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar17 + uVar34 * 4,0,0,0);
          Hint_Prefetch(lVar15 + uVar34,0,0,0);
          *(int *)(lVar25 + (uVar38 & 7) * 4) = (int)uVar37;
          uVar38 = uVar38 + 1;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
    }
    if (uVar33 < uVar19) {
      lVar31 = *(long *)(lVar18 + 8);
      iVar35 = *(int *)(lVar18 + 0x34);
      uVar38 = (ulong)uVar33;
      do {
        uVar36 = (*(long *)(lVar31 + 8 + uVar38) * -0x30e4432340650000 ^ *(ulong *)(lVar18 + 0x60))
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                 >> ((ulong)(0x38 - iVar35) & 0x3f);
        uVar37 = uVar36 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar17 + uVar37 * 4,0,0,0);
        Hint_Prefetch(lVar15 + uVar37,0,0,0);
        uVar6 = *(uint *)(lVar25 + (uVar38 & 7) * 4);
        *(int *)(lVar25 + (uVar38 & 7) * 4) = (int)uVar36;
        uVar36 = (ulong)(uVar6 >> 4) & 0xffffff0;
        pbVar1 = (byte *)(lVar15 + uVar36);
        uVar33 = 0xf;
        if ((*pbVar1 & 0xf) != 1) {
          uVar33 = 0;
        }
        lVar3 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0xf);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar6;
        *(int *)(lVar17 + uVar36 * 4 + lVar3 * 4) = (int)uVar38;
        uVar38 = uVar38 + 1;
      } while (uVar38 < (uVar20 & 0xffffffff));
    }
    *(uint *)(lVar18 + 0x2c) = uVar19;
    uVar38 = (*(long *)(lVar24 + (uVar20 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar14) >>
             ((ulong)(0x38 - iVar21) & 0x3f);
    uVar14 = uVar38 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar26 + uVar14 * 4,0,0,0);
    Hint_Prefetch(lVar30 + uVar14,0,0,0);
    uVar33 = *(uint *)(lVar25 + (uVar20 & 7) * 4);
    *(int *)(lVar25 + (uVar20 & 7) * 4) = (int)uVar38;
  }
  else {
    uVar33 = (uint)((*puVar12 * -0x30e4432340650000 ^ uVar14) >> ((ulong)(0x38 - iVar21) & 0x3f));
    *(uint *)(lVar18 + 0x2c) = uVar19;
  }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  *(uint *)(lVar18 + 0x68) = *(int *)(lVar18 + 0x68) + uVar33;
  uVar20 = (ulong)(uVar33 >> 4) & 0xffffff0;
  lVar26 = lVar26 + uVar20 * 4;
  pauVar2 = (undefined1 (*) [16])(lVar30 + uVar20);
  bVar27 = (*pauVar2)[0];
  auVar47 = *pauVar2;
  bVar28 = (byte)uVar33;
  bVar39 = auVar47[0];
  uVar40 = CONCAT11(-(auVar47[9] == bVar28),-(auVar47[8] == bVar28));
  uVar41 = CONCAT13(-(auVar47[0xb] == bVar28),CONCAT12(-(auVar47[10] == bVar28),uVar40));
  uVar42 = CONCAT15(-(auVar47[0xd] == bVar28),CONCAT14(-(auVar47[0xc] == bVar28),uVar41));
  uVar20 = CONCAT17((char)(CONCAT17(-(auVar47[0xf] == bVar28),
                                    CONCAT16(-(auVar47[0xe] == bVar28),uVar42)) >> 0x34),
                    CONCAT16((char)((uint6)uVar42 >> 0x24),
                             CONCAT15((char)((uint)uVar41 >> 0x14),
                                      CONCAT14((char)(uVar40 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar47[7] == bVar28),
                                                                        -(auVar47[6] == bVar28)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar47[
                                                  5] == bVar28),-(auVar47[4] == bVar28)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar47[3] == bVar28),
                                                                           -(auVar47[2] == bVar28))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar47[1] == bVar28),
                                                                           -(bVar39 == bVar28)) >> 4
/* wm:origin: github.com/pengussy */
                                                                 ))))))));
  uVar14 = (ulong)bVar27 & 0xf;
  uVar20 = (uVar20 >> uVar14 * 4 | uVar20 << uVar14 * -4 + 0x40) & 0x8888888888888888;
  if (uVar20 != 0) {
    lVar30 = 0;
    iVar21 = 1 << (ulong)(uVar29 & 0x1f);
    do {
      uVar14 = (uVar20 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar29 = (int)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + (bVar27 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar29 != 0) {
        uVar29 = *(uint *)(lVar26 + (ulong)uVar29 * 4);
        if (uVar29 < uVar23) goto code_r0x002d198c;
        Hint_Prefetch(lVar24 + (ulong)uVar29,0,0,0);
        auStack_2d8[lVar30] = uVar29;
        lVar30 = lVar30 + 1;
        iVar21 = iVar21 + -1;
      }
      uVar20 = uVar20 - 1 & uVar20;
      if ((uVar20 == 0) || (iVar21 == 0)) goto code_r0x002d198c;
    } while( true );
  }
  lVar30 = 0;
code_r0x002d198c:
  uVar23 = 0xf;
  if ((bVar39 & 0xf) != 1) {
    uVar23 = 0;
  }
  lVar25 = (ulong)uVar23 + (ulong)(bVar39 - 1 & 0xf);
  (*pauVar2)[0] = (char)lVar25;
  (*pauVar2)[lVar25] = bVar28;
  iVar21 = *(int *)(lVar18 + 0x2c);
  *(int *)(lVar18 + 0x2c) = iVar21 + 1;
  *(int *)(lVar26 + lVar25 * 4) = iVar21;
  if (lVar30 == 0) {
    uVar20 = 3;
  }
/* WM - chat: discord.gg/sdkhDjTex */
  else {
    lVar26 = 0;
    uVar14 = 3;
    do {
      uVar23 = auStack_2d8[lVar26];
      puVar13 = (ulong *)(lVar24 + (ulong)uVar23);
      if (*(int *)((long)puVar13 + (uVar14 - 3)) == *(int *)((long)puVar12 + (uVar14 - 3))) {
        puVar16 = puVar12;
        if (puVar12 < (ulong *)((long)param_3 + -7)) {
          if (*puVar13 == *puVar12) {
            lVar18 = 0;
            puVar13 = (ulong *)(lVar24 + 8 + (ulong)uVar23);
            do {
              puVar16 = puVar16 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar16) goto code_r0x002d1a7c;
              uVar20 = *puVar13;
              lVar18 = lVar18 + 8;
              puVar13 = puVar13 + 1;
            } while (uVar20 == *puVar16);
            uVar20 = *puVar16 ^ uVar20;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = lVar18 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
          }
          else {
            uVar20 = *puVar12 ^ *puVar13;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
/*  unlicensed copy if this notice is missing  */
            uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
          }
        }
        else {
code_r0x002d1a7c:
          if (puVar16 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar13 == (int)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar16 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar13 == (short)*puVar16) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar16 = (ulong *)((long)puVar16 + 2);
            }
          }
          if (puVar16 < param_3) {
            if ((char)*puVar13 == (char)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 1);
            }
          }
          uVar20 = (long)puVar16 - (long)puVar12;
        }
        if (uVar14 < uVar20) {
          *param_4 = (ulong)((uVar19 + 3) - uVar23);
          uVar14 = uVar20;
          if ((ulong *)((long)puVar12 + uVar20) == param_3) break;
        }
      }
      uVar20 = uVar14;
      lVar26 = lVar26 + 1;
      uVar14 = uVar20;
    } while (lVar26 != lVar30);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_1d8) {
    return uVar20;
  }
  auVar47 = ___stack_chk_fail(uVar20);
  puVar12 = auVar47._8_8_;
  lVar18 = auVar47._0_8_;
  lStack_348 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = *(long *)(lVar18 + 0x70);
  lVar30 = *(long *)(lVar18 + 0x38);
  iVar21 = *(int *)(lVar18 + 0x34);
  lVar24 = *(long *)(lVar18 + 8);
  uVar29 = 1 << (ulong)(*(uint *)(lVar18 + 0x100) & 0x1f);
  uVar20 = (long)puVar12 - lVar24;
  uVar19 = (uint)uVar20;
  uVar23 = uVar19 - uVar29;
  if (uVar19 - *(uint *)(lVar18 + 0x1c) <= uVar29 || *(int *)(lVar18 + 0x28) != 0) {
    uVar23 = *(uint *)(lVar18 + 0x1c);
  }
  uVar29 = *(uint *)(lVar18 + 0x10c);
  if (4 < uVar29) {
    uVar29 = 5;
  }
  uVar14 = *(ulong *)(lVar18 + 0x60);
  if (*(int *)(lVar18 + 300) == 0) {
    lVar25 = lVar18 + 0x40;
    uVar33 = *(uint *)(lVar18 + 0x2c);
    uVar38 = (ulong)uVar33;
    lVar15 = lVar30;
    lVar17 = lVar26;
// WM - reversing this took months of machine time
    if (0x180 < uVar19 - uVar33) {
      if (uVar33 < 0xffffffa0) {
        uVar36 = uVar38 + 0x60;
        do {
          uVar37 = (*(long *)(lVar24 + 8 + uVar38) * -0x30e4432340650000 ^ *(ulong *)(lVar18 + 0x60)
                   ) >> ((ulong)(0x38 - iVar21) & 0x3f);
          uVar34 = uVar37 >> 3 & 0x1fffffe0;
          lVar15 = lVar26 + uVar34 * 4;
          Hint_Prefetch(lVar15,0,0,0);
          Hint_Prefetch(lVar15 + 0x40,0,0,0);
          Hint_Prefetch(lVar30 + uVar34,0,0,0);
          uVar6 = *(uint *)(lVar25 + (uVar38 & 7) * 4);
          *(int *)(lVar25 + (uVar38 & 7) * 4) = (int)uVar37;
          uVar37 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
          pbVar1 = (byte *)(lVar30 + uVar37);
          uVar33 = 0x1f;
          if ((*pbVar1 & 0x1f) != 1) {
            uVar33 = 0;
          }
/* WM - donate: donate/README.md */
          lVar15 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0x1f);
          *pbVar1 = (byte)lVar15;
          pbVar1[lVar15] = (byte)uVar6;
          *(int *)(lVar26 + uVar37 * 4 + lVar15 * 4) = (int)uVar38;
          uVar38 = uVar38 + 1;
        } while (uVar36 != uVar38);
        lVar17 = *(long *)(lVar18 + 0x70);
        lVar15 = *(long *)(lVar18 + 0x38);
      }
      uVar33 = uVar19 - 0x20;
      uVar38 = (ulong)uVar33;
      iVar32 = (int)((long)puVar12 + 1U) - (int)(lVar24 + uVar38);
      iVar35 = 8;
      if (iVar32 + 1U < 8) {
        iVar35 = iVar32 + 1;
      }
      iVar32 = 0;
      if (lVar24 + uVar38 <= (long)puVar12 + 1U) {
        iVar32 = iVar35;
/* WM - if you paid for this, you were scammed */
      }
      if (uVar33 < iVar32 + uVar33) {
        iVar35 = *(int *)(lVar18 + 0x34);
        uVar36 = *(ulong *)(lVar18 + 0x60);
        do {
          uVar37 = (*(long *)(lVar24 + uVar38) * -0x30e4432340650000 ^ uVar36) >>
                   ((ulong)(0x38 - iVar35) & 0x3f);
          uVar34 = uVar37 >> 3 & 0x1fffffe0;
          lVar31 = lVar17 + uVar34 * 4;
          Hint_Prefetch(lVar31,0,0,0);
          Hint_Prefetch(lVar31 + 0x40,0,0,0);
          Hint_Prefetch(lVar15 + uVar34,0,0,0);
          *(int *)(lVar25 + (uVar38 & 7) * 4) = (int)uVar37;
          uVar38 = uVar38 + 1;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
    }
    if (uVar33 < uVar19) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      lVar31 = *(long *)(lVar18 + 8);
      iVar35 = *(int *)(lVar18 + 0x34);
      uVar38 = (ulong)uVar33;
      do {
        uVar36 = (*(long *)(lVar31 + 8 + uVar38) * -0x30e4432340650000 ^ *(ulong *)(lVar18 + 0x60))
                 >> ((ulong)(0x38 - iVar35) & 0x3f);
        uVar37 = uVar36 >> 3 & 0x1fffffe0;
        lVar3 = lVar17 + uVar37 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        Hint_Prefetch(lVar15 + uVar37,0,0,0);
        uVar6 = *(uint *)(lVar25 + (uVar38 & 7) * 4);
        *(int *)(lVar25 + (uVar38 & 7) * 4) = (int)uVar36;
        uVar36 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
        pbVar1 = (byte *)(lVar15 + uVar36);
        uVar33 = 0x1f;
        if ((*pbVar1 & 0x1f) != 1) {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar33 = 0;
        }
        lVar3 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0x1f);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar6;
        *(int *)(lVar17 + uVar36 * 4 + lVar3 * 4) = (int)uVar38;
        uVar38 = uVar38 + 1;
      } while (uVar38 < (uVar20 & 0xffffffff));
    }
    *(uint *)(lVar18 + 0x2c) = uVar19;
    uVar38 = (*(long *)(lVar24 + (uVar20 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar14) >>
             ((ulong)(0x38 - iVar21) & 0x3f);
    uVar14 = uVar38 >> 3 & 0x1fffffe0;
    lVar15 = lVar26 + uVar14 * 4;
    Hint_Prefetch(lVar15,0,0,0);
    Hint_Prefetch(lVar15 + 0x40,0,0,0);
    Hint_Prefetch(lVar30 + uVar14,0,0,0);
    uVar33 = *(uint *)(lVar25 + (uVar20 & 7) * 4);
    *(int *)(lVar25 + (uVar20 & 7) * 4) = (int)uVar38;
  }
  else {
    uVar33 = (uint)((*puVar12 * -0x30e4432340650000 ^ uVar14) >> ((ulong)(0x38 - iVar21) & 0x3f));
    *(uint *)(lVar18 + 0x2c) = uVar19;
  }
  *(uint *)(lVar18 + 0x68) = *(int *)(lVar18 + 0x68) + uVar33;
  uVar20 = (ulong)(uVar33 >> 3) & 0x1fffffe0;
  lVar26 = lVar26 + uVar20 * 4;
  pbVar1 = (byte *)(lVar30 + uVar20);
  bVar27 = *pbVar1;
  bVar28 = (byte)uVar33;
  uVar50 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)pbVar1));
  uVar51 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 4)),uVar50));
  uVar52 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 8)),uVar51));
  uVar53 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x10)));
  uVar54 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x14)),uVar53));
  uVar55 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x18)),uVar54));
  uVar40 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 2)));
  uVar41 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 6)),uVar40));
  uVar42 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 10)),uVar41));
  uVar43 = CONCAT17(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0xe)),uVar42));
  auVar44._0_10_ =
       CONCAT19(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x12)),uVar43));
  auVar44[10] = -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x16));
  auVar44[0xb] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar45[0xc] = -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x1a));
  auVar45._0_12_ = auVar44;
  auVar45[0xd] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar48[0xe] = -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x1e));
  auVar48._0_14_ = auVar45;
  auVar48[0xf] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar20 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar28 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                                             CONCAT16(-(bVar28 ==
                                                       (byte)*(undefined2 *)(pbVar1 + 0x1c)),uVar55)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar55 >> 0x26),
                                      CONCAT15((char)((uint)uVar54 >> 0x16),
                                               CONCAT14((char)(uVar53 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar28 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar28 ==
                                                            (byte)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar52)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar52 >> 0x26),
                                                           CONCAT11((char)((uint)uVar51 >> 0x16),
                                                                    (char)(uVar50 >> 6)))))))),
                    CONCAT17((char)(auVar48._14_2_ >> 6),
                             CONCAT16((char)(auVar45._12_2_ >> 6),
                                      CONCAT15((char)(auVar44._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar44._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar43 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar42 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar41 >> 0x16),(char)(uVar40 >> 6)))))))),4,1);
  uVar20 = (uVar20 >> ((ulong)bVar27 & 0x1f) * 2 | uVar20 << ((ulong)bVar27 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar20 != 0) {
    lVar30 = 0;
    iVar21 = 1 << (ulong)(uVar29 & 0x1f);
    do {
      uVar14 = (uVar20 << 1 & 0xcccccccccccccccc) >> 2 | (uVar20 << 1 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
/*  if you paid for this, you were scammed  */
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar29 = (int)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + (bVar27 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar29 != 0) {
        uVar29 = *(uint *)(lVar26 + (ulong)uVar29 * 4);
        if (uVar29 < uVar23) goto code_r0x002d1f00;
        Hint_Prefetch(lVar24 + (ulong)uVar29,0,0,0);
        auStack_448[lVar30] = uVar29;
        lVar30 = lVar30 + 1;
        iVar21 = iVar21 + -1;
      }
      uVar20 = uVar20 - 1 & uVar20;
      if ((uVar20 == 0) || (iVar21 == 0)) goto code_r0x002d1f00;
    } while( true );
  }
  lVar30 = 0;
/*  thanks for reading - discord.gg/sdkhDjTex  */
code_r0x002d1f00:
  uVar23 = 0x1f;
  if ((bVar27 & 0x1f) != 1) {
    uVar23 = 0;
  }
  lVar25 = (ulong)uVar23 + (ulong)(bVar27 - 1 & 0x1f);
  *pbVar1 = (byte)lVar25;
  pbVar1[lVar25] = bVar28;
  iVar21 = *(int *)(lVar18 + 0x2c);
  *(int *)(lVar18 + 0x2c) = iVar21 + 1;
  *(int *)(lVar26 + lVar25 * 4) = iVar21;
  if (lVar30 == 0) {
    uVar20 = 3;
  }
  else {
    lVar26 = 0;
    uVar14 = 3;
    do {
      uVar23 = auStack_448[lVar26];
      puVar13 = (ulong *)(lVar24 + (ulong)uVar23);
      if (*(int *)((long)puVar13 + (uVar14 - 3)) == *(int *)((long)puVar12 + (uVar14 - 3))) {
        puVar16 = puVar12;
        if (puVar12 < (ulong *)((long)param_3 + -7)) {
          if (*puVar13 == *puVar12) {
            lVar18 = 0;
            puVar13 = (ulong *)(lVar24 + 8 + (ulong)uVar23);
            do {
              puVar16 = puVar16 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar16) goto code_r0x002d1ff0;
              uVar20 = *puVar13;
              lVar18 = lVar18 + 8;
              puVar13 = puVar13 + 1;
            } while (uVar20 == *puVar16);
            uVar20 = *puVar16 ^ uVar20;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
// more drops soon - github.com/pengussy
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = lVar18 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
          }
          else {
            uVar20 = *puVar12 ^ *puVar13;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
          }
        }
        else {
code_r0x002d1ff0:
          if (puVar16 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar13 == (int)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar16 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar13 == (short)*puVar16) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar16 = (ulong *)((long)puVar16 + 2);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            }
          }
          if (puVar16 < param_3) {
            if ((char)*puVar13 == (char)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 1);
            }
          }
          uVar20 = (long)puVar16 - (long)puVar12;
        }
        if (uVar14 < uVar20) {
          *param_4 = (ulong)((uVar19 + 3) - uVar23);
          uVar14 = uVar20;
          if ((ulong *)((long)puVar12 + uVar20) == param_3) break;
        }
      }
      uVar20 = uVar14;
      lVar26 = lVar26 + 1;
      uVar14 = uVar20;
    } while (lVar26 != lVar30);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_348) {
    return uVar20;
  }
  auVar47 = ___stack_chk_fail(uVar20);
  puVar12 = auVar47._8_8_;
  lVar18 = auVar47._0_8_;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = *(long *)(lVar18 + 0x70);
  lVar30 = *(long *)(lVar18 + 0x38);
  iVar21 = *(int *)(lVar18 + 0x34);
  lVar24 = *(long *)(lVar18 + 8);
  uVar29 = 1 << (ulong)(*(uint *)(lVar18 + 0x100) & 0x1f);
  uVar20 = (long)puVar12 - lVar24;
  uVar19 = (uint)uVar20;
  uVar23 = uVar19 - uVar29;
  if (uVar19 - *(uint *)(lVar18 + 0x1c) <= uVar29 || *(int *)(lVar18 + 0x28) != 0) {
    uVar23 = *(uint *)(lVar18 + 0x1c);
  }
  uVar29 = *(uint *)(lVar18 + 0x10c);
  if (5 < uVar29) {
    uVar29 = 6;
  }
  uVar14 = *(ulong *)(lVar18 + 0x60);
  if (*(int *)(lVar18 + 300) == 0) {
    lVar25 = lVar18 + 0x40;
    uVar33 = *(uint *)(lVar18 + 0x2c);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    uVar38 = (ulong)uVar33;
    lVar15 = lVar30;
    lVar17 = lVar26;
    if (0x180 < uVar19 - uVar33) {
      if (uVar33 < 0xffffffa0) {
        uVar36 = uVar38 + 0x60;
        do {
          uVar37 = (*(long *)(lVar24 + 8 + uVar38) * -0x30e4432340650000 ^ *(ulong *)(lVar18 + 0x60)
                   ) >> ((ulong)(0x38 - iVar21) & 0x3f);
          uVar34 = uVar37 >> 2 & 0x3fffffc0;
          lVar15 = lVar26 + uVar34 * 4;
          Hint_Prefetch(lVar15,0,0,0);
          Hint_Prefetch(lVar15 + 0x40,0,0,0);
          lVar15 = lVar30 + uVar34;
          Hint_Prefetch(lVar15,0,0,0);
          Hint_Prefetch(lVar15 + 0x20,0,0,0);
          uVar6 = *(uint *)(lVar25 + (uVar38 & 7) * 4);
          *(int *)(lVar25 + (uVar38 & 7) * 4) = (int)uVar37;
          uVar37 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)(lVar30 + uVar37);
/* found on a paste site? it was re-uploaded illegally */
          uVar33 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar33 = 0;
          }
          lVar15 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0x3f);
          *pbVar1 = (byte)lVar15;
          pbVar1[lVar15] = (byte)uVar6;
          *(int *)(lVar26 + uVar37 * 4 + lVar15 * 4) = (int)uVar38;
          uVar38 = uVar38 + 1;
        } while (uVar36 != uVar38);
        lVar17 = *(long *)(lVar18 + 0x70);
        lVar15 = *(long *)(lVar18 + 0x38);
      }
      uVar33 = uVar19 - 0x20;
      uVar38 = (ulong)uVar33;
      iVar32 = (int)((long)puVar12 + 1U) - (int)(lVar24 + uVar38);
      iVar35 = 8;
      if (iVar32 + 1U < 8) {
        iVar35 = iVar32 + 1;
/* watermarked copy - do not remove - github.com/pengussy */
      }
      iVar32 = 0;
      if (lVar24 + uVar38 <= (long)puVar12 + 1U) {
        iVar32 = iVar35;
      }
      if (uVar33 < iVar32 + uVar33) {
        iVar35 = *(int *)(lVar18 + 0x34);
        uVar36 = *(ulong *)(lVar18 + 0x60);
        do {
          uVar37 = (*(long *)(lVar24 + uVar38) * -0x30e4432340650000 ^ uVar36) >>
                   ((ulong)(0x38 - iVar35) & 0x3f);
          uVar34 = uVar37 >> 2 & 0x3fffffc0;
          lVar31 = lVar17 + uVar34 * 4;
          Hint_Prefetch(lVar31,0,0,0);
          Hint_Prefetch(lVar31 + 0x40,0,0,0);
          lVar31 = lVar15 + uVar34;
          Hint_Prefetch(lVar31,0,0,0);
          Hint_Prefetch(lVar31 + 0x20,0,0,0);
          *(int *)(lVar25 + (uVar38 & 7) * 4) = (int)uVar37;
          uVar38 = uVar38 + 1;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      }
    }
    if (uVar33 < uVar19) {
      lVar31 = *(long *)(lVar18 + 8);
      iVar35 = *(int *)(lVar18 + 0x34);
      uVar38 = (ulong)uVar33;
      do {
        uVar36 = (*(long *)(lVar31 + 8 + uVar38) * -0x30e4432340650000 ^ *(ulong *)(lVar18 + 0x60))
                 >> ((ulong)(0x38 - iVar35) & 0x3f);
        uVar37 = uVar36 >> 2 & 0x3fffffc0;
        lVar3 = lVar17 + uVar37 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar15 + uVar37;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar6 = *(uint *)(lVar25 + (uVar38 & 7) * 4);
        *(int *)(lVar25 + (uVar38 & 7) * 4) = (int)uVar36;
        uVar36 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
        pbVar1 = (byte *)(lVar15 + uVar36);
        uVar33 = 0x3f;
        if ((*pbVar1 & 0x3f) != 1) {
          uVar33 = 0;
        }
        lVar3 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0x3f);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar6;
        *(int *)(lVar17 + uVar36 * 4 + lVar3 * 4) = (int)uVar38;
        uVar38 = uVar38 + 1;
      } while (uVar38 < (uVar20 & 0xffffffff));
    }
    *(uint *)(lVar18 + 0x2c) = uVar19;
    uVar38 = (*(long *)(lVar24 + (uVar20 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar14) >>
// WM - do not claim this as your own
             ((ulong)(0x38 - iVar21) & 0x3f);
    uVar14 = uVar38 >> 2 & 0x3fffffc0;
    lVar15 = lVar26 + uVar14 * 4;
    Hint_Prefetch(lVar15,0,0,0);
    Hint_Prefetch(lVar15 + 0x40,0,0,0);
    lVar15 = lVar30 + uVar14;
    Hint_Prefetch(lVar15,0,0,0);
    Hint_Prefetch(lVar15 + 0x20,0,0,0);
    uVar33 = *(uint *)(lVar25 + (uVar20 & 7) * 4);
    *(int *)(lVar25 + (uVar20 & 7) * 4) = (int)uVar38;
  }
  else {
    uVar33 = (uint)((*puVar12 * -0x30e4432340650000 ^ uVar14) >> ((ulong)(0x38 - iVar21) & 0x3f));
    *(uint *)(lVar18 + 0x2c) = uVar19;
  }
  *(uint *)(lVar18 + 0x68) = *(int *)(lVar18 + 0x68) + uVar33;
  uVar20 = (ulong)(uVar33 >> 2) & 0x3fffffc0;
  lVar26 = lVar26 + uVar20 * 4;
  pbVar1 = (byte *)(lVar30 + uVar20);
  bVar27 = (byte)uVar33;
  auVar57[0] = -(pbVar1[1] == bVar27);
  auVar57[1] = -(pbVar1[5] == bVar27);
/* no support for modified copies - github.com/pengussy */
  auVar57[2] = -(pbVar1[9] == bVar27);
  auVar57[3] = -(pbVar1[0xd] == bVar27);
  auVar57[4] = -(pbVar1[0x11] == bVar27);
  auVar57[5] = -(pbVar1[0x15] == bVar27);
  auVar57[6] = -(pbVar1[0x19] == bVar27);
  auVar57[7] = -(pbVar1[0x1d] == bVar27);
  auVar57[8] = -(pbVar1[0x21] == bVar27);
  auVar57[9] = -(pbVar1[0x25] == bVar27);
  auVar57[10] = -(pbVar1[0x29] == bVar27);
  auVar57[0xb] = -(pbVar1[0x2d] == bVar27);
  auVar57[0xc] = -(pbVar1[0x31] == bVar27);
  auVar57[0xd] = -(pbVar1[0x35] == bVar27);
  auVar57[0xe] = -(pbVar1[0x39] == bVar27);
  auVar57[0xf] = -(pbVar1[0x3d] == bVar27);
  auVar49[0] = -(pbVar1[3] == bVar27);
  auVar49[1] = -(pbVar1[7] == bVar27);
/* stripping the watermark breaks the license - github.com/pengussy */
  auVar49[2] = -(pbVar1[0xb] == bVar27);
  auVar49[3] = -(pbVar1[0xf] == bVar27);
  auVar49[4] = -(pbVar1[0x13] == bVar27);
  auVar49[5] = -(pbVar1[0x17] == bVar27);
  auVar49[6] = -(pbVar1[0x1b] == bVar27);
  auVar49[7] = -(pbVar1[0x1f] == bVar27);
  auVar49[8] = -(pbVar1[0x23] == bVar27);
  auVar49[9] = -(pbVar1[0x27] == bVar27);
  auVar49[10] = -(pbVar1[0x2b] == bVar27);
  auVar49[0xb] = -(pbVar1[0x2f] == bVar27);
  auVar49[0xc] = -(pbVar1[0x33] == bVar27);
  auVar49[0xd] = -(pbVar1[0x37] == bVar27);
  auVar49[0xe] = -(pbVar1[0x3b] == bVar27);
  auVar49[0xf] = -(pbVar1[0x3f] == bVar27);
  auVar10[1] = -(pbVar1[4] == bVar27);
  auVar10[0] = -(*pbVar1 == bVar27);
  auVar10[2] = -(pbVar1[8] == bVar27);
  auVar10[3] = -(pbVar1[0xc] == bVar27);
  auVar10[4] = -(pbVar1[0x10] == bVar27);
  auVar10[5] = -(pbVar1[0x14] == bVar27);
  auVar10[6] = -(pbVar1[0x18] == bVar27);
/* donate: donate/README.md */
  auVar10[7] = -(pbVar1[0x1c] == bVar27);
  auVar10[8] = -(pbVar1[0x20] == bVar27);
  auVar10[9] = -(pbVar1[0x24] == bVar27);
  auVar10[10] = -(pbVar1[0x28] == bVar27);
  auVar10[0xb] = -(pbVar1[0x2c] == bVar27);
  auVar10[0xc] = -(pbVar1[0x30] == bVar27);
  auVar10[0xd] = -(pbVar1[0x34] == bVar27);
  auVar10[0xe] = -(pbVar1[0x38] == bVar27);
  auVar10[0xf] = -(pbVar1[0x3c] == bVar27);
  auVar58 = NEON_sri(auVar57,auVar10,1,1);
  auVar11[1] = -(pbVar1[6] == bVar27);
  auVar11[0] = -(pbVar1[2] == bVar27);
  auVar11[2] = -(pbVar1[10] == bVar27);
  auVar11[3] = -(pbVar1[0xe] == bVar27);
  auVar11[4] = -(pbVar1[0x12] == bVar27);
  auVar11[5] = -(pbVar1[0x16] == bVar27);
  auVar11[6] = -(pbVar1[0x1a] == bVar27);
/*  proprietary - see LICENSE - do not sell  */
  auVar11[7] = -(pbVar1[0x1e] == bVar27);
  auVar11[8] = -(pbVar1[0x22] == bVar27);
  auVar11[9] = -(pbVar1[0x26] == bVar27);
  auVar11[10] = -(pbVar1[0x2a] == bVar27);
  auVar11[0xb] = -(pbVar1[0x2e] == bVar27);
  auVar11[0xc] = -(pbVar1[0x32] == bVar27);
  auVar11[0xd] = -(pbVar1[0x36] == bVar27);
  auVar11[0xe] = -(pbVar1[0x3a] == bVar27);
  auVar11[0xf] = -(pbVar1[0x3e] == bVar27);
  auVar47 = NEON_sri(auVar49,auVar11,1,1);
  auVar47 = NEON_sri(auVar47,auVar58,2,1);
  auVar47 = NEON_sri(auVar47,auVar47,4,1);
  uVar20 = CONCAT17((char)(auVar47._14_2_ >> 4),
                    CONCAT16((char)(auVar47._12_2_ >> 4),
                             CONCAT15((char)(auVar47._10_2_ >> 4),
                                      CONCAT14((char)(auVar47._8_2_ >> 4),
                                               CONCAT13((char)(auVar47._6_2_ >> 4),
                                                        CONCAT12((char)(auVar47._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar47._2_2_ >> 4)
                                                                          ,(char)(auVar47._0_2_ >> 4
                                                                                 ))))))));
// WM - thanks for reading - discord.gg/sdkhDjTex
  lVar30 = 0;
  uVar33 = (uint)*pbVar1;
  if (uVar20 != 0) {
    iVar21 = 1 << (ulong)(uVar29 & 0x1f);
    uVar14 = (ulong)*pbVar1 & 0x3f;
    uVar20 = uVar20 >> uVar14 | uVar20 << 0x40 - uVar14;
    do {
      uVar14 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar29 = (int)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + uVar33 & 0x3f;
      if (uVar29 != 0) {
        uVar29 = *(uint *)(lVar26 + (ulong)uVar29 * 4);
        if (uVar29 < uVar23) break;
        Hint_Prefetch(lVar24 + (ulong)uVar29,0,0,0);
        auStack_5b8[lVar30] = uVar29;
        lVar30 = lVar30 + 1;
        iVar21 = iVar21 + -1;
      }
      uVar20 = uVar20 - 1 & uVar20;
      if ((uVar20 == 0) || (iVar21 == 0)) break;
    } while( true );
  }
  uVar23 = 0x3f;
  if ((uVar33 & 0x3f) != 1) {
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    uVar23 = 0;
  }
  lVar25 = (ulong)uVar23 + (ulong)(uVar33 - 1 & 0x3f);
  *pbVar1 = (byte)lVar25;
  pbVar1[lVar25] = bVar27;
  iVar21 = *(int *)(lVar18 + 0x2c);
  *(int *)(lVar18 + 0x2c) = iVar21 + 1;
  *(int *)(lVar26 + lVar25 * 4) = iVar21;
  if (lVar30 == 0) {
    uVar20 = 3;
  }
  else {
    lVar26 = 0;
    uVar14 = 3;
    do {
      uVar23 = auStack_5b8[lVar26];
      puVar13 = (ulong *)(lVar24 + (ulong)uVar23);
      if (*(int *)((long)puVar13 + (uVar14 - 3)) == *(int *)((long)puVar12 + (uVar14 - 3))) {
        puVar16 = puVar12;
        if (puVar12 < (ulong *)((long)param_3 + -7)) {
          if (*puVar13 == *puVar12) {
            lVar18 = 0;
            puVar13 = (ulong *)(lVar24 + 8 + (ulong)uVar23);
            do {
              puVar16 = puVar16 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar16) goto code_r0x002d2578;
              uVar20 = *puVar13;
              lVar18 = lVar18 + 8;
              puVar13 = puVar13 + 1;
            } while (uVar20 == *puVar16);
            uVar20 = *puVar16 ^ uVar20;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = lVar18 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
          }
          else {
            uVar20 = *puVar12 ^ *puVar13;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
          }
        }
        else {
code_r0x002d2578:
          if (puVar16 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar13 == (int)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          if (puVar16 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar13 == (short)*puVar16) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar16 = (ulong *)((long)puVar16 + 2);
            }
          }
          if (puVar16 < param_3) {
            if ((char)*puVar13 == (char)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 1);
            }
          }
          uVar20 = (long)puVar16 - (long)puVar12;
        }
        if (uVar14 < uVar20) {
          *param_4 = (ulong)((uVar19 + 3) - uVar23);
          uVar14 = uVar20;
          if ((ulong *)((long)puVar12 + uVar20) == param_3) break;
        }
      }
// WM - if you paid for this, you were scammed
      uVar20 = uVar14;
      lVar26 = lVar26 + 1;
      uVar14 = uVar20;
    } while (lVar26 != lVar30);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_4b8) {
    return uVar20;
  }
  auVar47 = ___stack_chk_fail(uVar20);
  puVar12 = auVar47._8_8_;
  lVar24 = auVar47._0_8_;
  lVar30 = *(long *)(lVar24 + 0x80);
  uVar33 = 1 << (ulong)(*(uint *)(lVar24 + 0x104) & 0x1f);
  lVar26 = *(long *)(lVar24 + 8);
  lVar18 = *(long *)(lVar24 + 0x10);
  uVar6 = 1 << (ulong)(*(uint *)(lVar24 + 0x100) & 0x1f);
  uVar29 = *(uint *)(lVar24 + 0x18);
  uVar22 = (uint)((long)puVar12 - lVar26);
  uVar19 = *(uint *)(lVar24 + 0x2c);
  uVar20 = (ulong)uVar19;
  uVar23 = uVar22 - uVar6;
  if (uVar22 - *(uint *)(lVar24 + 0x1c) <= uVar6 || *(int *)(lVar24 + 0x28) != 0) {
    uVar23 = *(uint *)(lVar24 + 0x1c);
/* wm:watermarked copy - do not remove */
  }
  uVar6 = 0;
  if (uVar33 <= uVar22) {
    uVar6 = uVar22 - uVar33;
  }
  uVar5 = *(uint *)(lVar24 + 0x10c);
  lVar25 = *(long *)(lVar24 + 0x70);
  uVar8 = ~(-1 << (ulong)(*(uint *)(lVar24 + 0x104) & 0x1f));
  uVar9 = 0x20 - *(int *)(lVar24 + 0x108);
  if (*(int *)(lVar24 + 300) == 0) {
    if (uVar19 < uVar22) {
      do {
        uVar19 = (uint)(*(int *)(lVar26 + uVar20) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
        *(undefined4 *)(lVar30 + (ulong)((uint)uVar20 & uVar8) * 4) =
             *(undefined4 *)(lVar25 + (ulong)uVar19 * 4);
        *(uint *)(lVar25 + (ulong)uVar19 * 4) = (uint)uVar20;
        uVar20 = uVar20 + 1;
      } while (uVar20 < ((long)puVar12 - lVar26 & 0xffffffffU));
    }
  }
  else if (uVar19 < uVar22) {
    uVar7 = (uint)(*(int *)(lVar26 + uVar20) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
    *(undefined4 *)(lVar30 + (ulong)(uVar19 & uVar8) * 4) =
         *(undefined4 *)(lVar25 + (ulong)uVar7 * 4);
    *(uint *)(lVar25 + (ulong)uVar7 * 4) = uVar19;
  }
  *(uint *)(lVar24 + 0x2c) = uVar22;
  uVar20 = *puVar12;
  uVar19 = *(uint *)(lVar25 + (ulong)((uint)((int)uVar20 * -0x61c8864f) >> (ulong)(uVar9 & 0x1f)) *
                              4);
  if (uVar19 < uVar23) {
    uVar14 = 3;
  }
  else {
    iVar21 = 1 << (ulong)(uVar5 & 0x1f);
    uVar14 = 3;
    do {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      uVar38 = (ulong)uVar19;
      if (uVar19 < uVar29) {
        piVar4 = (int *)(lVar18 + uVar38);
        if (*piVar4 == (int)uVar20) {
          lVar24 = func_0x002ad924((int *)((long)puVar12 + 4),piVar4 + 1,param_3,
                                   lVar18 + (ulong)uVar29,lVar26 + (ulong)uVar29);
          uVar38 = lVar24 + 4;
          goto joined_r0x002d2a54;
        }
      }
      else {
        puVar13 = (ulong *)(lVar26 + uVar38);
        if (*(int *)((long)puVar13 + (uVar14 - 3)) == *(int *)((long)puVar12 + (uVar14 - 3))) {
          puVar16 = puVar12;
          if (puVar12 < (ulong *)((long)param_3 + -7)) {
            if (*puVar13 == *puVar12) {
// WM - no support for modified copies
              lVar24 = 0;
              puVar13 = (ulong *)(lVar26 + 8 + uVar38);
              do {
                puVar16 = puVar16 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar16) goto code_r0x002d29fc;
                uVar38 = *puVar13;
                lVar24 = lVar24 + 8;
                puVar13 = puVar13 + 1;
              } while (uVar38 == *puVar16);
              uVar38 = *puVar16 ^ uVar38;
              uVar38 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
              uVar38 = (uVar38 & 0xcccccccccccccccc) >> 2 | (uVar38 & 0x3333333333333333) << 2;
              uVar38 = (uVar38 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar38 = (uVar38 & 0xff00ff00ff00ff00) >> 8 | (uVar38 & 0xff00ff00ff00ff) << 8;
              uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
              uVar38 = lVar24 + ((ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3);
            }
            else {
              uVar38 = *puVar12 ^ *puVar13;
              uVar38 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
/*  found on a paste site? it was re-uploaded illegally  */
              uVar38 = (uVar38 & 0xcccccccccccccccc) >> 2 | (uVar38 & 0x3333333333333333) << 2;
              uVar38 = (uVar38 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar38 = (uVar38 & 0xff00ff00ff00ff00) >> 8 | (uVar38 & 0xff00ff00ff00ff) << 8;
              uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
              uVar38 = (ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3;
            }
          }
          else {
code_r0x002d29fc:
            if (puVar16 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar13 == (int)*puVar16) {
                puVar13 = (ulong *)((long)puVar13 + 4);
                puVar16 = (ulong *)((long)puVar16 + 4);
              }
            }
            if (puVar16 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar13 == (short)*puVar16) {
                puVar13 = (ulong *)((long)puVar13 + 2);
                puVar16 = (ulong *)((long)puVar16 + 2);
              }
            }
            if (puVar16 < param_3) {
              if ((char)*puVar13 == (char)*puVar16) {
                puVar16 = (ulong *)((long)puVar16 + 1);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
              }
            }
            uVar38 = (long)puVar16 - (long)puVar12;
          }
joined_r0x002d2a54:
          if (uVar14 < uVar38) {
            *param_4 = (ulong)((uVar22 + 3) - uVar19);
            uVar14 = uVar38;
            if ((ulong *)((long)puVar12 + uVar38) == param_3) {
              return uVar38;
            }
          }
        }
      }
      if ((uVar19 <= uVar6) || (iVar21 = iVar21 + -1, iVar21 == 0)) {
        return uVar14;
      }
      uVar19 = *(uint *)(lVar30 + (ulong)(uVar19 & uVar33 - 1) * 4);
    } while (uVar23 <= uVar19);
  }
  return uVar14;
}

