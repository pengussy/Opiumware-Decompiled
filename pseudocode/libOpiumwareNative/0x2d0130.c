/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2d0130:b644079e2c
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002d0130(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  ulong uVar36;
  int iVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  byte bVar41;
  ushort uVar42;
  undefined4 uVar43;
  undefined6 uVar44;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  undefined8 uVar45;
  undefined1 auVar46 [12];
  undefined1 auVar48 [14];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar47 [12];
  undefined1 auVar49 [14];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  ushort uVar56;
  undefined4 uVar57;
  undefined6 uVar58;
  ushort uVar59;
  undefined4 uVar60;
  undefined6 uVar61;
/* no support for modified copies */
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  uint auStack_a08 [64];
  long lStack_908;
  uint auStack_898 [64];
  long lStack_798;
  uint auStack_728 [64];
  long lStack_628;
  uint auStack_5b8 [64];
  long lStack_4b8;
  uint auStack_448 [64];
  long lStack_348;
  uint auStack_2d8 [64];
  long lStack_1d8;
  uint auStack_168 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(param_1 + 0x70);
  lVar25 = *(long *)(param_1 + 0x38);
/* wm:more drops soon - github.com/pengussy */
  iVar22 = *(int *)(param_1 + 0x34);
  lVar19 = *(long *)(param_1 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar21 = (long)param_2 - lVar19;
  uVar20 = (uint)uVar21;
  uVar24 = uVar20 - uVar30;
  if (uVar20 - *(uint *)(param_1 + 0x1c) <= uVar30 || *(int *)(param_1 + 0x28) != 0) {
    uVar24 = *(uint *)(param_1 + 0x1c);
  }
  uVar30 = *(uint *)(param_1 + 0x10c);
  if (5 < uVar30) {
    uVar30 = 6;
  }
  uVar35 = (uint)*(undefined8 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 300) == 0) {
    lVar31 = param_1 + 0x40;
    uVar33 = *(uint *)(param_1 + 0x2c);
    uVar15 = (ulong)uVar33;
    lVar26 = lVar25;
    lVar16 = lVar27;
    if (0x180 < uVar20 - uVar33) {
      if (uVar33 < 0xffffffa0) {
        uVar40 = uVar15 + 0x60;
        do {
          uVar33 = (*(int *)(lVar19 + 8 + uVar15) * -0x61c8864f ^ *(uint *)(param_1 + 0x60)) >>
                   (ulong)(0x18U - iVar22 & 0x1f);
          uVar38 = (ulong)(uVar33 >> 2 & 0x3fffffc0);
          lVar26 = lVar27 + uVar38 * 4;
          Hint_Prefetch(lVar26,0,0,0);
          Hint_Prefetch(lVar26 + 0x40,0,0,0);
          lVar26 = lVar25 + uVar38;
// keep the notice, keep the source honest
          Hint_Prefetch(lVar26,0,0,0);
          Hint_Prefetch(lVar26 + 0x20,0,0,0);
          uVar23 = *(uint *)(lVar31 + (uVar15 & 7) * 4);
          *(uint *)(lVar31 + (uVar15 & 7) * 4) = uVar33;
          uVar38 = (ulong)(uVar23 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)(lVar25 + uVar38);
          uVar33 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar33 = 0;
          }
          lVar26 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0x3f);
          *pbVar1 = (byte)lVar26;
          pbVar1[lVar26] = (byte)uVar23;
          *(int *)(lVar27 + uVar38 * 4 + lVar26 * 4) = (int)uVar15;
          uVar15 = uVar15 + 1;
        } while (uVar40 != uVar15);
        lVar16 = *(long *)(param_1 + 0x70);
        lVar26 = *(long *)(param_1 + 0x38);
      }
      uVar33 = uVar20 - 0x20;
/* more drops soon - github.com/pengussy */
      uVar15 = (ulong)uVar33;
      iVar34 = (int)((long)param_2 + 1U) - (int)(lVar19 + uVar15);
      iVar37 = 8;
      if (iVar34 + 1U < 8) {
        iVar37 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar19 + uVar15 <= (long)param_2 + 1U) {
        iVar34 = iVar37;
      }
      if (uVar33 < iVar34 + uVar33) {
        iVar37 = *(int *)(param_1 + 0x34);
        uVar23 = *(uint *)(param_1 + 0x60);
        do {
          uVar5 = (*(int *)(lVar19 + uVar15) * -0x61c8864f ^ uVar23) >>
                  (ulong)(0x18U - iVar37 & 0x1f);
          uVar40 = (ulong)(uVar5 >> 2 & 0x3fffffc0);
          lVar18 = lVar16 + uVar40 * 4;
          Hint_Prefetch(lVar18,0,0,0);
          Hint_Prefetch(lVar18 + 0x40,0,0,0);
          lVar18 = lVar26 + uVar40;
          Hint_Prefetch(lVar18,0,0,0);
          Hint_Prefetch(lVar18 + 0x20,0,0,0);
          *(uint *)(lVar31 + (uVar15 & 7) * 4) = uVar5;
          uVar15 = uVar15 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar33 < uVar20) {
      lVar18 = *(long *)(param_1 + 8);
      iVar37 = *(int *)(param_1 + 0x34);
      uVar15 = (ulong)uVar33;
      do {
/* wm:unlicensed copy if this notice is missing */
        uVar33 = (*(int *)(lVar18 + 8 + uVar15) * -0x61c8864f ^ *(uint *)(param_1 + 0x60)) >>
                 (ulong)(0x18U - iVar37 & 0x1f);
        uVar40 = (ulong)(uVar33 >> 2 & 0x3fffffc0);
        lVar32 = lVar16 + uVar40 * 4;
        Hint_Prefetch(lVar32,0,0,0);
        Hint_Prefetch(lVar32 + 0x40,0,0,0);
        lVar32 = lVar26 + uVar40;
        Hint_Prefetch(lVar32,0,0,0);
        Hint_Prefetch(lVar32 + 0x20,0,0,0);
        uVar23 = *(uint *)(lVar31 + (uVar15 & 7) * 4);
        *(uint *)(lVar31 + (uVar15 & 7) * 4) = uVar33;
        uVar40 = (ulong)(uVar23 >> 2) & 0x3fffffc0;
        pbVar1 = (byte *)(lVar26 + uVar40);
        uVar33 = 0x3f;
        if ((*pbVar1 & 0x3f) != 1) {
          uVar33 = 0;
        }
        lVar32 = (ulong)uVar33 + (ulong)(*pbVar1 - 1 & 0x3f);
/* wm:origin: github.com/pengussy */
        *pbVar1 = (byte)lVar32;
        pbVar1[lVar32] = (byte)uVar23;
        *(int *)(lVar16 + uVar40 * 4 + lVar32 * 4) = (int)uVar15;
        uVar15 = uVar15 + 1;
      } while (uVar15 < (uVar21 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar20;
    uVar33 = (*(int *)(lVar19 + (uVar21 & 0xffffffff) + 8) * -0x61c8864f ^ uVar35) >>
             (ulong)(0x18U - iVar22 & 0x1f);
    uVar15 = (ulong)(uVar33 >> 2 & 0x3fffffc0);
    lVar26 = lVar27 + uVar15 * 4;
    Hint_Prefetch(lVar26,0,0,0);
    Hint_Prefetch(lVar26 + 0x40,0,0,0);
    lVar26 = lVar25 + uVar15;
    Hint_Prefetch(lVar26,0,0,0);
    Hint_Prefetch(lVar26 + 0x20,0,0,0);
    uVar35 = *(uint *)(lVar31 + (uVar21 & 7) * 4);
    *(uint *)(lVar31 + (uVar21 & 7) * 4) = uVar33;
  }
  else {
/* WM - watermarked copy - do not remove */
    uVar35 = ((int)*param_2 * -0x61c8864f ^ uVar35) >> (ulong)(0x18U - iVar22 & 0x1f);
    *(uint *)(param_1 + 0x2c) = uVar20;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar35;
  uVar21 = (ulong)(uVar35 >> 2) & 0x3fffffc0;
  lVar27 = lVar27 + uVar21 * 4;
  pbVar1 = (byte *)(lVar25 + uVar21);
  bVar28 = (byte)uVar35;
  auVar62[0] = -(pbVar1[1] == bVar28);
  auVar62[1] = -(pbVar1[5] == bVar28);
  auVar62[2] = -(pbVar1[9] == bVar28);
  auVar62[3] = -(pbVar1[0xd] == bVar28);
  auVar62[4] = -(pbVar1[0x11] == bVar28);
  auVar62[5] = -(pbVar1[0x15] == bVar28);
  auVar62[6] = -(pbVar1[0x19] == bVar28);
  auVar62[7] = -(pbVar1[0x1d] == bVar28);
  auVar62[8] = -(pbVar1[0x21] == bVar28);
  auVar62[9] = -(pbVar1[0x25] == bVar28);
  auVar62[10] = -(pbVar1[0x29] == bVar28);
  auVar62[0xb] = -(pbVar1[0x2d] == bVar28);
  auVar62[0xc] = -(pbVar1[0x31] == bVar28);
  auVar62[0xd] = -(pbVar1[0x35] == bVar28);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  auVar62[0xe] = -(pbVar1[0x39] == bVar28);
  auVar62[0xf] = -(pbVar1[0x3d] == bVar28);
  auVar50[0] = -(pbVar1[3] == bVar28);
  auVar50[1] = -(pbVar1[7] == bVar28);
  auVar50[2] = -(pbVar1[0xb] == bVar28);
  auVar50[3] = -(pbVar1[0xf] == bVar28);
  auVar50[4] = -(pbVar1[0x13] == bVar28);
  auVar50[5] = -(pbVar1[0x17] == bVar28);
  auVar50[6] = -(pbVar1[0x1b] == bVar28);
  auVar50[7] = -(pbVar1[0x1f] == bVar28);
  auVar50[8] = -(pbVar1[0x23] == bVar28);
  auVar50[9] = -(pbVar1[0x27] == bVar28);
  auVar50[10] = -(pbVar1[0x2b] == bVar28);
  auVar50[0xb] = -(pbVar1[0x2f] == bVar28);
  auVar50[0xc] = -(pbVar1[0x33] == bVar28);
  auVar50[0xd] = -(pbVar1[0x37] == bVar28);
  auVar50[0xe] = -(pbVar1[0x3b] == bVar28);
  auVar50[0xf] = -(pbVar1[0x3f] == bVar28);
  auVar51[1] = -(pbVar1[4] == bVar28);
  auVar51[0] = -(*pbVar1 == bVar28);
  auVar51[2] = -(pbVar1[8] == bVar28);
  auVar51[3] = -(pbVar1[0xc] == bVar28);
  auVar51[4] = -(pbVar1[0x10] == bVar28);
  auVar51[5] = -(pbVar1[0x14] == bVar28);
  auVar51[6] = -(pbVar1[0x18] == bVar28);
  auVar51[7] = -(pbVar1[0x1c] == bVar28);
  auVar51[8] = -(pbVar1[0x20] == bVar28);
  auVar51[9] = -(pbVar1[0x24] == bVar28);
  auVar51[10] = -(pbVar1[0x28] == bVar28);
  auVar51[0xb] = -(pbVar1[0x2c] == bVar28);
  auVar51[0xc] = -(pbVar1[0x30] == bVar28);
  auVar51[0xd] = -(pbVar1[0x34] == bVar28);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  auVar51[0xe] = -(pbVar1[0x38] == bVar28);
  auVar51[0xf] = -(pbVar1[0x3c] == bVar28);
  auVar62 = NEON_sri(auVar62,auVar51,1,1);
  auVar64[1] = -(pbVar1[6] == bVar28);
  auVar64[0] = -(pbVar1[2] == bVar28);
  auVar64[2] = -(pbVar1[10] == bVar28);
  auVar64[3] = -(pbVar1[0xe] == bVar28);
  auVar64[4] = -(pbVar1[0x12] == bVar28);
  auVar64[5] = -(pbVar1[0x16] == bVar28);
  auVar64[6] = -(pbVar1[0x1a] == bVar28);
  auVar64[7] = -(pbVar1[0x1e] == bVar28);
  auVar64[8] = -(pbVar1[0x22] == bVar28);
  auVar64[9] = -(pbVar1[0x26] == bVar28);
  auVar64[10] = -(pbVar1[0x2a] == bVar28);
  auVar64[0xb] = -(pbVar1[0x2e] == bVar28);
  auVar64[0xc] = -(pbVar1[0x32] == bVar28);
  auVar64[0xd] = -(pbVar1[0x36] == bVar28);
  auVar64[0xe] = -(pbVar1[0x3a] == bVar28);
  auVar64[0xf] = -(pbVar1[0x3e] == bVar28);
  auVar51 = NEON_sri(auVar50,auVar64,1,1);
  auVar51 = NEON_sri(auVar51,auVar62,2,1);
  auVar51 = NEON_sri(auVar51,auVar51,4,1);
  uVar21 = CONCAT17((char)(auVar51._14_2_ >> 4),
                    CONCAT16((char)(auVar51._12_2_ >> 4),
                             CONCAT15((char)(auVar51._10_2_ >> 4),
                                      CONCAT14((char)(auVar51._8_2_ >> 4),
                                               CONCAT13((char)(auVar51._6_2_ >> 4),
                                                        CONCAT12((char)(auVar51._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar51._2_2_ >> 4)
                                                                          ,(char)(auVar51._0_2_ >> 4
                                                                                 ))))))));
/* WM - chat: discord.gg/sdkhDjTex */
  lVar25 = 0;
  uVar35 = (uint)*pbVar1;
  if (uVar21 != 0) {
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    uVar15 = (ulong)*pbVar1 & 0x3f;
    uVar21 = uVar21 >> uVar15 | uVar21 << 0x40 - uVar15;
    do {
      uVar15 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + uVar35 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar27 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) break;
        Hint_Prefetch(lVar19 + (ulong)uVar30,0,0,0);
        auStack_168[lVar25] = uVar30;
        lVar25 = lVar25 + 1;
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
// WM - reversing this took months of machine time
      if ((uVar21 == 0) || (iVar22 == 0)) break;
    } while( true );
  }
  uVar24 = 0x3f;
  if ((uVar35 & 0x3f) != 1) {
    uVar24 = 0;
  }
  lVar31 = (ulong)uVar24 + (ulong)(uVar35 - 1 & 0x3f);
  *pbVar1 = (byte)lVar31;
  pbVar1[lVar31] = bVar28;
  iVar22 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar22 + 1;
  *(int *)(lVar27 + lVar31 * 4) = iVar22;
  if (lVar25 == 0) {
    uVar21 = 3;
  }
  else {
    lVar27 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_168[lVar27];
      puVar13 = (ulong *)(lVar19 + (ulong)uVar24);
      if (*(int *)((long)puVar13 + (uVar15 - 3)) == *(int *)((long)param_2 + (uVar15 - 3))) {
        puVar14 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar13 == *param_2) {
            lVar31 = 0;
            puVar13 = (ulong *)(lVar19 + 8 + (ulong)uVar24);
            do {
              puVar14 = puVar14 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar14) goto LAB_002d0488;
/* wm:found on a paste site? it was re-uploaded illegally */
              uVar21 = *puVar13;
              lVar31 = lVar31 + 8;
              puVar13 = puVar13 + 1;
            } while (uVar21 == *puVar14);
            uVar21 = *puVar14 ^ uVar21;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar31 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *param_2 ^ *puVar13;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
          }
// do not claim this as your own
        }
        else {
LAB_002d0488:
          if (puVar14 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar13 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar13 == (short)*puVar14) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar14 = (ulong *)((long)puVar14 + 2);
            }
          }
          if (puVar14 < param_3) {
            if ((char)*puVar13 == (char)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
          }
          uVar21 = (long)puVar14 - (long)param_2;
        }
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)param_2 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar27 = lVar27 + 1;
      uVar15 = uVar21;
    } while (lVar27 != lVar25);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar21;
  }
  auVar51 = ___stack_chk_fail(uVar21);
  puVar13 = auVar51._8_8_;
/* if you paid for this, you were scammed */
  lVar19 = auVar51._0_8_;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar19 + 0x70);
  lVar31 = *(long *)(lVar19 + 0x38);
  iVar22 = *(int *)(lVar19 + 0x34);
  lVar25 = *(long *)(lVar19 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar19 + 0x100) & 0x1f);
  uVar21 = (long)puVar13 - lVar25;
  uVar20 = (uint)uVar21;
  uVar24 = uVar20 - uVar30;
  if (uVar20 - *(uint *)(lVar19 + 0x1c) <= uVar30 || *(int *)(lVar19 + 0x28) != 0) {
    uVar24 = *(uint *)(lVar19 + 0x1c);
  }
  uVar30 = *(uint *)(lVar19 + 0x10c);
  if (3 < uVar30) {
    uVar30 = 4;
  }
  uVar15 = *(ulong *)(lVar19 + 0x60);
  if (*(int *)(lVar19 + 300) == 0) {
    lVar26 = lVar19 + 0x40;
    uVar35 = *(uint *)(lVar19 + 0x2c);
    uVar40 = (ulong)uVar35;
    lVar16 = lVar31;
    lVar18 = lVar27;
    if (0x180 < uVar20 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar38 = uVar40 + 0x60;
        do {
          uVar39 = (*(long *)(lVar25 + 8 + uVar40) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar36 = uVar39 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar27 + uVar36 * 4,0,0,0);
          Hint_Prefetch(lVar31 + uVar36,0,0,0);
/* unlicensed copy if this notice is missing - github.com/pengussy */
          uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar39 = (ulong)(uVar33 >> 4) & 0xffffff0;
          pbVar1 = (byte *)(lVar31 + uVar39);
          uVar35 = 0xf;
          if ((*pbVar1 & 0xf) != 1) {
            uVar35 = 0;
          }
          lVar16 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0xf);
          *pbVar1 = (byte)lVar16;
          pbVar1[lVar16] = (byte)uVar33;
          *(int *)(lVar27 + uVar39 * 4 + lVar16 * 4) = (int)uVar40;
          uVar40 = uVar40 + 1;
        } while (uVar38 != uVar40);
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar35 = uVar20 - 0x20;
      uVar40 = (ulong)uVar35;
      iVar34 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar40);
      iVar37 = 8;
      if (iVar34 + 1U < 8) {
        iVar37 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar25 + uVar40 <= (long)puVar13 + 1U) {
        iVar34 = iVar37;
      }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      if (uVar35 < iVar34 + uVar35) {
        iVar37 = *(int *)(lVar19 + 0x34);
        uVar38 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar39 = (*(long *)(lVar25 + uVar40) * -0x30e4432345000000 ^ uVar38) >>
                   ((ulong)(0x38 - iVar37) & 0x3f);
          uVar36 = uVar39 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar18 + uVar36 * 4,0,0,0);
          Hint_Prefetch(lVar16 + uVar36,0,0,0);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar40 = uVar40 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar35 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar37 = *(int *)(lVar19 + 0x34);
      uVar40 = (ulong)uVar35;
      do {
        uVar38 = (*(long *)(lVar32 + 8 + uVar40) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar37) & 0x3f);
        uVar39 = uVar38 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar18 + uVar39 * 4,0,0,0);
        Hint_Prefetch(lVar16 + uVar39,0,0,0);
        uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
        *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar38;
        uVar38 = (ulong)(uVar33 >> 4) & 0xffffff0;
        pbVar1 = (byte *)(lVar16 + uVar38);
        uVar35 = 0xf;
        if ((*pbVar1 & 0xf) != 1) {
          uVar35 = 0;
        }
        lVar3 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0xf);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar33;
        *(int *)(lVar18 + uVar38 * 4 + lVar3 * 4) = (int)uVar40;
/*  watermarked copy - do not remove  */
        uVar40 = uVar40 + 1;
      } while (uVar40 < (uVar21 & 0xffffffff));
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar40 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar40 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar27 + uVar15 * 4,0,0,0);
    Hint_Prefetch(lVar31 + uVar15,0,0,0);
    uVar35 = *(uint *)(lVar26 + (uVar21 & 7) * 4);
    *(int *)(lVar26 + (uVar21 & 7) * 4) = (int)uVar40;
  }
  else {
    uVar35 = (uint)((*puVar13 * -0x30e4432345000000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar35;
  uVar21 = (ulong)(uVar35 >> 4) & 0xffffff0;
  lVar27 = lVar27 + uVar21 * 4;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  pauVar2 = (undefined1 (*) [16])(lVar31 + uVar21);
  bVar28 = (*pauVar2)[0];
  auVar51 = *pauVar2;
  bVar29 = (byte)uVar35;
  bVar41 = auVar51[0];
  uVar42 = CONCAT11(-(auVar51[9] == bVar29),-(auVar51[8] == bVar29));
  uVar43 = CONCAT13(-(auVar51[0xb] == bVar29),CONCAT12(-(auVar51[10] == bVar29),uVar42));
  uVar44 = CONCAT15(-(auVar51[0xd] == bVar29),CONCAT14(-(auVar51[0xc] == bVar29),uVar43));
  uVar21 = CONCAT17((char)(CONCAT17(-(auVar51[0xf] == bVar29),
                                    CONCAT16(-(auVar51[0xe] == bVar29),uVar44)) >> 0x34),
                    CONCAT16((char)((uint6)uVar44 >> 0x24),
                             CONCAT15((char)((uint)uVar43 >> 0x14),
                                      CONCAT14((char)(uVar42 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar51[7] == bVar29),
                                                                        -(auVar51[6] == bVar29)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar51[
                                                  5] == bVar29),-(auVar51[4] == bVar29)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar51[3] == bVar29),
                                                                           -(auVar51[2] == bVar29))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar51[1] == bVar29),
                                                                           -(bVar41 == bVar29)) >> 4
                                                                 ))))))));
  uVar15 = (ulong)bVar28 & 0xf;
  uVar21 = (uVar21 >> uVar15 * 4 | uVar21 << uVar15 * -4 + 0x40) & 0x8888888888888888;
  if (uVar21 != 0) {
    lVar31 = 0;
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    do {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      uVar15 = (uVar21 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + (bVar28 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar27 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) goto code_r0x002d0914;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_2d8[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) goto code_r0x002d0914;
    } while( true );
  }
/* reversing this took months of machine time - github.com/pengussy */
  lVar31 = 0;
code_r0x002d0914:
  uVar24 = 0xf;
  if ((bVar41 & 0xf) != 1) {
    uVar24 = 0;
  }
  lVar26 = (ulong)uVar24 + (ulong)(bVar41 - 1 & 0xf);
  (*pauVar2)[0] = (char)lVar26;
  (*pauVar2)[lVar26] = bVar29;
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar27 + lVar26 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
  else {
    lVar27 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_2d8[lVar27];
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
// WM - found on a paste site? it was re-uploaded illegally
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
            do {
              puVar17 = puVar17 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar17) goto code_r0x002d0a04;
              uVar21 = *puVar14;
              lVar19 = lVar19 + 8;
              puVar14 = puVar14 + 1;
            } while (uVar21 == *puVar17);
            uVar21 = *puVar17 ^ uVar21;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar19 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *puVar13 ^ *puVar14;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
          }
        }
        else {
code_r0x002d0a04:
          if (puVar17 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar14 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar14 = (ulong *)((long)puVar14 + 4);
            }
          }
          if (puVar17 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar14 == (short)*puVar17) {
              puVar14 = (ulong *)((long)puVar14 + 2);
// if you paid for this, you were scammed
              puVar17 = (ulong *)((long)puVar17 + 2);
            }
          }
          if (puVar17 < param_3) {
            if ((char)*puVar14 == (char)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          uVar21 = (long)puVar17 - (long)puVar13;
        }
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)puVar13 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar27 = lVar27 + 1;
      uVar15 = uVar21;
    } while (lVar27 != lVar31);
  }
/* do not claim this as your own */
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_1d8) {
    return uVar21;
  }
  auVar51 = ___stack_chk_fail(uVar21);
  puVar13 = auVar51._8_8_;
  lVar19 = auVar51._0_8_;
  lStack_348 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar19 + 0x70);
  lVar31 = *(long *)(lVar19 + 0x38);
  iVar22 = *(int *)(lVar19 + 0x34);
  lVar25 = *(long *)(lVar19 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar19 + 0x100) & 0x1f);
  uVar21 = (long)puVar13 - lVar25;
  uVar20 = (uint)uVar21;
  uVar24 = uVar20 - uVar30;
  if (uVar20 - *(uint *)(lVar19 + 0x1c) <= uVar30 || *(int *)(lVar19 + 0x28) != 0) {
    uVar24 = *(uint *)(lVar19 + 0x1c);
  }
  uVar30 = *(uint *)(lVar19 + 0x10c);
  if (4 < uVar30) {
    uVar30 = 5;
  }
  uVar15 = *(ulong *)(lVar19 + 0x60);
  if (*(int *)(lVar19 + 300) == 0) {
    lVar26 = lVar19 + 0x40;
    uVar35 = *(uint *)(lVar19 + 0x2c);
    uVar40 = (ulong)uVar35;
// WM - no support for modified copies
    lVar16 = lVar31;
    lVar18 = lVar27;
    if (0x180 < uVar20 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar38 = uVar40 + 0x60;
        do {
          uVar39 = (*(long *)(lVar25 + 8 + uVar40) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar36 = uVar39 >> 3 & 0x1fffffe0;
          lVar16 = lVar27 + uVar36 * 4;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x40,0,0,0);
          Hint_Prefetch(lVar31 + uVar36,0,0,0);
          uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar39 = (ulong)(uVar33 >> 3) & 0x1fffffe0;
          pbVar1 = (byte *)(lVar31 + uVar39);
          uVar35 = 0x1f;
          if ((*pbVar1 & 0x1f) != 1) {
            uVar35 = 0;
          }
          lVar16 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0x1f);
          *pbVar1 = (byte)lVar16;
          pbVar1[lVar16] = (byte)uVar33;
          *(int *)(lVar27 + uVar39 * 4 + lVar16 * 4) = (int)uVar40;
          uVar40 = uVar40 + 1;
        } while (uVar38 != uVar40);
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar35 = uVar20 - 0x20;
      uVar40 = (ulong)uVar35;
      iVar34 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar40);
// more drops soon - github.com/pengussy
      iVar37 = 8;
      if (iVar34 + 1U < 8) {
        iVar37 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar25 + uVar40 <= (long)puVar13 + 1U) {
        iVar34 = iVar37;
      }
      if (uVar35 < iVar34 + uVar35) {
        iVar37 = *(int *)(lVar19 + 0x34);
        uVar38 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar39 = (*(long *)(lVar25 + uVar40) * -0x30e4432345000000 ^ uVar38) >>
                   ((ulong)(0x38 - iVar37) & 0x3f);
          uVar36 = uVar39 >> 3 & 0x1fffffe0;
          lVar32 = lVar18 + uVar36 * 4;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x40,0,0,0);
          Hint_Prefetch(lVar16 + uVar36,0,0,0);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar40 = uVar40 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar35 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar37 = *(int *)(lVar19 + 0x34);
      uVar40 = (ulong)uVar35;
      do {
        uVar38 = (*(long *)(lVar32 + 8 + uVar40) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar37) & 0x3f);
        uVar39 = uVar38 >> 3 & 0x1fffffe0;
        lVar3 = lVar18 + uVar39 * 4;
        Hint_Prefetch(lVar3,0,0,0);
// WM - watermarked copy - do not remove
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        Hint_Prefetch(lVar16 + uVar39,0,0,0);
        uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
        *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar38;
        uVar38 = (ulong)(uVar33 >> 3) & 0x1fffffe0;
        pbVar1 = (byte *)(lVar16 + uVar38);
        uVar35 = 0x1f;
        if ((*pbVar1 & 0x1f) != 1) {
          uVar35 = 0;
        }
        lVar3 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0x1f);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar33;
        *(int *)(lVar18 + uVar38 * 4 + lVar3 * 4) = (int)uVar40;
        uVar40 = uVar40 + 1;
      } while (uVar40 < (uVar21 & 0xffffffff));
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar40 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar40 >> 3 & 0x1fffffe0;
    lVar16 = lVar27 + uVar15 * 4;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x40,0,0,0);
    Hint_Prefetch(lVar31 + uVar15,0,0,0);
    uVar35 = *(uint *)(lVar26 + (uVar21 & 7) * 4);
    *(int *)(lVar26 + (uVar21 & 7) * 4) = (int)uVar40;
  }
  else {
    uVar35 = (uint)((*puVar13 * -0x30e4432345000000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
// reversing this took months of machine time
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar35;
  uVar21 = (ulong)(uVar35 >> 3) & 0x1fffffe0;
  lVar27 = lVar27 + uVar21 * 4;
  pbVar1 = (byte *)(lVar31 + uVar21);
  bVar28 = *pbVar1;
  bVar29 = (byte)uVar35;
  uVar56 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)pbVar1));
  uVar57 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 4)),uVar56));
  uVar58 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 8)),uVar57));
  uVar59 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x10)));
  uVar60 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x14)),uVar59));
  uVar61 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x18)),uVar60));
  uVar42 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 2)));
  uVar43 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 6)),uVar42));
  uVar44 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 10)),uVar43));
  uVar45 = CONCAT17(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0xe)),uVar44));
  auVar46._0_10_ =
       CONCAT19(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x12)),uVar45));
  auVar46[10] = -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x16));
  auVar46[0xb] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar48[0xc] = -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x1a));
  auVar48._0_12_ = auVar46;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  auVar48[0xd] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar52[0xe] = -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x1e));
  auVar52._0_14_ = auVar48;
  auVar52[0xf] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar21 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar29 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar29 ==
                                                       (byte)*(undefined2 *)(pbVar1 + 0x1c)),uVar61)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar61 >> 0x26),
                                      CONCAT15((char)((uint)uVar60 >> 0x16),
                                               CONCAT14((char)(uVar59 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar29 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar29 ==
                                                            (byte)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar58)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar58 >> 0x26),
                                                           CONCAT11((char)((uint)uVar57 >> 0x16),
                                                                    (char)(uVar56 >> 6)))))))),
                    CONCAT17((char)(auVar52._14_2_ >> 6),
                             CONCAT16((char)(auVar48._12_2_ >> 6),
                                      CONCAT15((char)(auVar46._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar46._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar45 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar44 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar43 >> 0x16),(char)(uVar42 >> 6)))))))),4,1);
  uVar21 = (uVar21 >> ((ulong)bVar28 & 0x1f) * 2 | uVar21 << ((ulong)bVar28 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar21 != 0) {
    lVar31 = 0;
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
/* more drops soon - github.com/pengussy - github.com/pengussy */
    do {
      uVar15 = (uVar21 << 1 & 0xcccccccccccccccc) >> 2 | (uVar21 << 1 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + (bVar28 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar27 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) goto code_r0x002d0e88;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_448[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) goto code_r0x002d0e88;
    } while( true );
  }
  lVar31 = 0;
code_r0x002d0e88:
  uVar24 = 0x1f;
  if ((bVar28 & 0x1f) != 1) {
    uVar24 = 0;
  }
  lVar26 = (ulong)uVar24 + (ulong)(bVar28 - 1 & 0x1f);
  *pbVar1 = (byte)lVar26;
  pbVar1[lVar26] = bVar29;
  iVar22 = *(int *)(lVar19 + 0x2c);
/* origin: github.com/pengussy */
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar27 + lVar26 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
  else {
    lVar27 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_448[lVar27];
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
            do {
              puVar17 = puVar17 + 1;
/* wm:reversing this took months of machine time */
              if ((ulong *)((long)param_3 + -7) <= puVar17) goto code_r0x002d0f78;
              uVar21 = *puVar14;
              lVar19 = lVar19 + 8;
              puVar14 = puVar14 + 1;
            } while (uVar21 == *puVar17);
            uVar21 = *puVar17 ^ uVar21;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar19 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *puVar13 ^ *puVar14;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
          }
        }
        else {
code_r0x002d0f78:
          if (puVar17 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar14 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
/* stripping the watermark breaks the license - github.com/pengussy */
              puVar14 = (ulong *)((long)puVar14 + 4);
            }
          }
          if (puVar17 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar14 == (short)*puVar17) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar17 = (ulong *)((long)puVar17 + 2);
            }
          }
          if (puVar17 < param_3) {
            if ((char)*puVar14 == (char)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          uVar21 = (long)puVar17 - (long)puVar13;
        }
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)puVar13 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar27 = lVar27 + 1;
      uVar15 = uVar21;
    } while (lVar27 != lVar31);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_348) {
    return uVar21;
  }
// WM - origin: github.com/pengussy
  auVar51 = ___stack_chk_fail(uVar21);
  puVar13 = auVar51._8_8_;
  lVar19 = auVar51._0_8_;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar19 + 0x70);
  lVar31 = *(long *)(lVar19 + 0x38);
  iVar22 = *(int *)(lVar19 + 0x34);
  lVar25 = *(long *)(lVar19 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar19 + 0x100) & 0x1f);
  uVar21 = (long)puVar13 - lVar25;
  uVar20 = (uint)uVar21;
  uVar24 = uVar20 - uVar30;
  if (uVar20 - *(uint *)(lVar19 + 0x1c) <= uVar30 || *(int *)(lVar19 + 0x28) != 0) {
    uVar24 = *(uint *)(lVar19 + 0x1c);
  }
  uVar30 = *(uint *)(lVar19 + 0x10c);
  if (5 < uVar30) {
    uVar30 = 6;
  }
  uVar15 = *(ulong *)(lVar19 + 0x60);
  if (*(int *)(lVar19 + 300) == 0) {
    lVar26 = lVar19 + 0x40;
    uVar35 = *(uint *)(lVar19 + 0x2c);
    uVar40 = (ulong)uVar35;
    lVar16 = lVar31;
    lVar18 = lVar27;
    if (0x180 < uVar20 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar38 = uVar40 + 0x60;
        do {
          uVar39 = (*(long *)(lVar25 + 8 + uVar40) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar36 = uVar39 >> 2 & 0x3fffffc0;
          lVar16 = lVar27 + uVar36 * 4;
          Hint_Prefetch(lVar16,0,0,0);
// WM - do not claim this as your own
          Hint_Prefetch(lVar16 + 0x40,0,0,0);
          lVar16 = lVar31 + uVar36;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x20,0,0,0);
          uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar39 = (ulong)(uVar33 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)(lVar31 + uVar39);
          uVar35 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar35 = 0;
          }
          lVar16 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0x3f);
          *pbVar1 = (byte)lVar16;
          pbVar1[lVar16] = (byte)uVar33;
          *(int *)(lVar27 + uVar39 * 4 + lVar16 * 4) = (int)uVar40;
          uVar40 = uVar40 + 1;
        } while (uVar38 != uVar40);
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar35 = uVar20 - 0x20;
      uVar40 = (ulong)uVar35;
      iVar34 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar40);
      iVar37 = 8;
      if (iVar34 + 1U < 8) {
/*  if you paid for this, you were scammed  */
        iVar37 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar25 + uVar40 <= (long)puVar13 + 1U) {
        iVar34 = iVar37;
      }
      if (uVar35 < iVar34 + uVar35) {
        iVar37 = *(int *)(lVar19 + 0x34);
        uVar38 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar39 = (*(long *)(lVar25 + uVar40) * -0x30e4432345000000 ^ uVar38) >>
                   ((ulong)(0x38 - iVar37) & 0x3f);
          uVar36 = uVar39 >> 2 & 0x3fffffc0;
          lVar32 = lVar18 + uVar36 * 4;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x40,0,0,0);
          lVar32 = lVar16 + uVar36;
/* wm:stripping the watermark breaks the license */
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x20,0,0,0);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar40 = uVar40 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar35 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar37 = *(int *)(lVar19 + 0x34);
      uVar40 = (ulong)uVar35;
      do {
        uVar38 = (*(long *)(lVar32 + 8 + uVar40) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar37) & 0x3f);
        uVar39 = uVar38 >> 2 & 0x3fffffc0;
        lVar3 = lVar18 + uVar39 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar16 + uVar39;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
        *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar38;
        uVar38 = (ulong)(uVar33 >> 2) & 0x3fffffc0;
        pbVar1 = (byte *)(lVar16 + uVar38);
        uVar35 = 0x3f;
        if ((*pbVar1 & 0x3f) != 1) {
          uVar35 = 0;
        }
        lVar3 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0x3f);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar33;
        *(int *)(lVar18 + uVar38 * 4 + lVar3 * 4) = (int)uVar40;
/* WM - do not claim this as your own */
        uVar40 = uVar40 + 1;
      } while (uVar40 < (uVar21 & 0xffffffff));
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar40 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar40 >> 2 & 0x3fffffc0;
    lVar16 = lVar27 + uVar15 * 4;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x40,0,0,0);
    lVar16 = lVar31 + uVar15;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x20,0,0,0);
    uVar35 = *(uint *)(lVar26 + (uVar21 & 7) * 4);
    *(int *)(lVar26 + (uVar21 & 7) * 4) = (int)uVar40;
  }
  else {
    uVar35 = (uint)((*puVar13 * -0x30e4432345000000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar35;
  uVar21 = (ulong)(uVar35 >> 2) & 0x3fffffc0;
  lVar27 = lVar27 + uVar21 * 4;
  pbVar1 = (byte *)(lVar31 + uVar21);
  bVar28 = (byte)uVar35;
  auVar63[0] = -(pbVar1[1] == bVar28);
  auVar63[1] = -(pbVar1[5] == bVar28);
  auVar63[2] = -(pbVar1[9] == bVar28);
  auVar63[3] = -(pbVar1[0xd] == bVar28);
  auVar63[4] = -(pbVar1[0x11] == bVar28);
  auVar63[5] = -(pbVar1[0x15] == bVar28);
  auVar63[6] = -(pbVar1[0x19] == bVar28);
// watermarked copy - do not remove
  auVar63[7] = -(pbVar1[0x1d] == bVar28);
  auVar63[8] = -(pbVar1[0x21] == bVar28);
  auVar63[9] = -(pbVar1[0x25] == bVar28);
  auVar63[10] = -(pbVar1[0x29] == bVar28);
  auVar63[0xb] = -(pbVar1[0x2d] == bVar28);
  auVar63[0xc] = -(pbVar1[0x31] == bVar28);
  auVar63[0xd] = -(pbVar1[0x35] == bVar28);
  auVar63[0xe] = -(pbVar1[0x39] == bVar28);
  auVar63[0xf] = -(pbVar1[0x3d] == bVar28);
  auVar53[0] = -(pbVar1[3] == bVar28);
  auVar53[1] = -(pbVar1[7] == bVar28);
  auVar53[2] = -(pbVar1[0xb] == bVar28);
  auVar53[3] = -(pbVar1[0xf] == bVar28);
  auVar53[4] = -(pbVar1[0x13] == bVar28);
  auVar53[5] = -(pbVar1[0x17] == bVar28);
  auVar53[6] = -(pbVar1[0x1b] == bVar28);
  auVar53[7] = -(pbVar1[0x1f] == bVar28);
  auVar53[8] = -(pbVar1[0x23] == bVar28);
  auVar53[9] = -(pbVar1[0x27] == bVar28);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  auVar53[10] = -(pbVar1[0x2b] == bVar28);
  auVar53[0xb] = -(pbVar1[0x2f] == bVar28);
  auVar53[0xc] = -(pbVar1[0x33] == bVar28);
  auVar53[0xd] = -(pbVar1[0x37] == bVar28);
  auVar53[0xe] = -(pbVar1[0x3b] == bVar28);
  auVar53[0xf] = -(pbVar1[0x3f] == bVar28);
  auVar9[1] = -(pbVar1[4] == bVar28);
  auVar9[0] = -(*pbVar1 == bVar28);
  auVar9[2] = -(pbVar1[8] == bVar28);
  auVar9[3] = -(pbVar1[0xc] == bVar28);
  auVar9[4] = -(pbVar1[0x10] == bVar28);
  auVar9[5] = -(pbVar1[0x14] == bVar28);
  auVar9[6] = -(pbVar1[0x18] == bVar28);
  auVar9[7] = -(pbVar1[0x1c] == bVar28);
  auVar9[8] = -(pbVar1[0x20] == bVar28);
  auVar9[9] = -(pbVar1[0x24] == bVar28);
  auVar9[10] = -(pbVar1[0x28] == bVar28);
  auVar9[0xb] = -(pbVar1[0x2c] == bVar28);
  auVar9[0xc] = -(pbVar1[0x30] == bVar28);
  auVar9[0xd] = -(pbVar1[0x34] == bVar28);
  auVar9[0xe] = -(pbVar1[0x38] == bVar28);
  auVar9[0xf] = -(pbVar1[0x3c] == bVar28);
  auVar64 = NEON_sri(auVar63,auVar9,1,1);
  auVar11[1] = -(pbVar1[6] == bVar28);
  auVar11[0] = -(pbVar1[2] == bVar28);
  auVar11[2] = -(pbVar1[10] == bVar28);
  auVar11[3] = -(pbVar1[0xe] == bVar28);
  auVar11[4] = -(pbVar1[0x12] == bVar28);
  auVar11[5] = -(pbVar1[0x16] == bVar28);
  auVar11[6] = -(pbVar1[0x1a] == bVar28);
  auVar11[7] = -(pbVar1[0x1e] == bVar28);
  auVar11[8] = -(pbVar1[0x22] == bVar28);
  auVar11[9] = -(pbVar1[0x26] == bVar28);
  auVar11[10] = -(pbVar1[0x2a] == bVar28);
  auVar11[0xb] = -(pbVar1[0x2e] == bVar28);
  auVar11[0xc] = -(pbVar1[0x32] == bVar28);
  auVar11[0xd] = -(pbVar1[0x36] == bVar28);
/* wm:if you paid for this, you were scammed */
  auVar11[0xe] = -(pbVar1[0x3a] == bVar28);
  auVar11[0xf] = -(pbVar1[0x3e] == bVar28);
  auVar51 = NEON_sri(auVar53,auVar11,1,1);
  auVar51 = NEON_sri(auVar51,auVar64,2,1);
  auVar51 = NEON_sri(auVar51,auVar51,4,1);
  uVar21 = CONCAT17((char)(auVar51._14_2_ >> 4),
                    CONCAT16((char)(auVar51._12_2_ >> 4),
                             CONCAT15((char)(auVar51._10_2_ >> 4),
                                      CONCAT14((char)(auVar51._8_2_ >> 4),
                                               CONCAT13((char)(auVar51._6_2_ >> 4),
                                                        CONCAT12((char)(auVar51._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar51._2_2_ >> 4)
                                                                          ,(char)(auVar51._0_2_ >> 4
                                                                                 ))))))));
  lVar31 = 0;
  uVar35 = (uint)*pbVar1;
  if (uVar21 != 0) {
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    uVar15 = (ulong)*pbVar1 & 0x3f;
    uVar21 = uVar21 >> uVar15 | uVar21 << 0x40 - uVar15;
    do {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      uVar15 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + uVar35 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar27 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) break;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_5b8[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) break;
    } while( true );
  }
  uVar24 = 0x3f;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if ((uVar35 & 0x3f) != 1) {
    uVar24 = 0;
  }
  lVar26 = (ulong)uVar24 + (ulong)(uVar35 - 1 & 0x3f);
  *pbVar1 = (byte)lVar26;
  pbVar1[lVar26] = bVar28;
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar27 + lVar26 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
  else {
    lVar27 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_5b8[lVar27];
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
/* no support for modified copies - github.com/pengussy */
            do {
              puVar17 = puVar17 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar17) goto LAB_002d1500;
              uVar21 = *puVar14;
              lVar19 = lVar19 + 8;
              puVar14 = puVar14 + 1;
            } while (uVar21 == *puVar17);
            uVar21 = *puVar17 ^ uVar21;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar19 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *puVar13 ^ *puVar14;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
          }
/*  keep the notice, keep the source honest  */
        }
        else {
LAB_002d1500:
          if (puVar17 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar14 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar14 = (ulong *)((long)puVar14 + 4);
            }
          }
          if (puVar17 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar14 == (short)*puVar17) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar17 = (ulong *)((long)puVar17 + 2);
            }
          }
          if (puVar17 < param_3) {
            if ((char)*puVar14 == (char)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          uVar21 = (long)puVar17 - (long)puVar13;
        }
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)puVar13 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar27 = lVar27 + 1;
      uVar15 = uVar21;
    } while (lVar27 != lVar31);
  }
/* WM - more drops soon - github.com/pengussy */
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_4b8) {
    return uVar21;
  }
  auVar51 = ___stack_chk_fail(uVar21);
  puVar13 = auVar51._8_8_;
  lVar19 = auVar51._0_8_;
  lStack_628 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar19 + 0x70);
  lVar31 = *(long *)(lVar19 + 0x38);
  iVar22 = *(int *)(lVar19 + 0x34);
  lVar25 = *(long *)(lVar19 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar19 + 0x100) & 0x1f);
  uVar21 = (long)puVar13 - lVar25;
  uVar20 = (uint)uVar21;
  uVar24 = uVar20 - uVar30;
  if (uVar20 - *(uint *)(lVar19 + 0x1c) <= uVar30 || *(int *)(lVar19 + 0x28) != 0) {
    uVar24 = *(uint *)(lVar19 + 0x1c);
  }
  uVar30 = *(uint *)(lVar19 + 0x10c);
  if (3 < uVar30) {
    uVar30 = 4;
  }
  uVar15 = *(ulong *)(lVar19 + 0x60);
  if (*(int *)(lVar19 + 300) == 0) {
    lVar26 = lVar19 + 0x40;
    uVar35 = *(uint *)(lVar19 + 0x2c);
    uVar40 = (ulong)uVar35;
    lVar16 = lVar31;
    lVar18 = lVar27;
/* keep the notice, keep the source honest */
    if (0x180 < uVar20 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar38 = uVar40 + 0x60;
        do {
          uVar39 = (*(long *)(lVar25 + 8 + uVar40) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar36 = uVar39 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar27 + uVar36 * 4,0,0,0);
          Hint_Prefetch(lVar31 + uVar36,0,0,0);
          uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar39 = (ulong)(uVar33 >> 4) & 0xffffff0;
          pbVar1 = (byte *)(lVar31 + uVar39);
          uVar35 = 0xf;
          if ((*pbVar1 & 0xf) != 1) {
            uVar35 = 0;
          }
/*  donate: donate/README.md  */
          lVar16 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0xf);
          *pbVar1 = (byte)lVar16;
          pbVar1[lVar16] = (byte)uVar33;
          *(int *)(lVar27 + uVar39 * 4 + lVar16 * 4) = (int)uVar40;
          uVar40 = uVar40 + 1;
        } while (uVar38 != uVar40);
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar35 = uVar20 - 0x20;
      uVar40 = (ulong)uVar35;
      iVar34 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar40);
      iVar37 = 8;
      if (iVar34 + 1U < 8) {
        iVar37 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar25 + uVar40 <= (long)puVar13 + 1U) {
        iVar34 = iVar37;
      }
      if (uVar35 < iVar34 + uVar35) {
        iVar37 = *(int *)(lVar19 + 0x34);
        uVar38 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar39 = (*(long *)(lVar25 + uVar40) * -0x30e4432340650000 ^ uVar38) >>
                   ((ulong)(0x38 - iVar37) & 0x3f);
          uVar36 = uVar39 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar18 + uVar36 * 4,0,0,0);
          Hint_Prefetch(lVar16 + uVar36,0,0,0);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar40 = uVar40 + 1;
/* WM - unlicensed copy if this notice is missing */
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar35 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar37 = *(int *)(lVar19 + 0x34);
      uVar40 = (ulong)uVar35;
      do {
        uVar38 = (*(long *)(lVar32 + 8 + uVar40) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar37) & 0x3f);
        uVar39 = uVar38 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar18 + uVar39 * 4,0,0,0);
        Hint_Prefetch(lVar16 + uVar39,0,0,0);
        uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
        *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar38;
        uVar38 = (ulong)(uVar33 >> 4) & 0xffffff0;
        pbVar1 = (byte *)(lVar16 + uVar38);
/* stripping the watermark breaks the license */
        uVar35 = 0xf;
        if ((*pbVar1 & 0xf) != 1) {
          uVar35 = 0;
        }
        lVar3 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0xf);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar33;
        *(int *)(lVar18 + uVar38 * 4 + lVar3 * 4) = (int)uVar40;
        uVar40 = uVar40 + 1;
      } while (uVar40 < (uVar21 & 0xffffffff));
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar40 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar40 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar27 + uVar15 * 4,0,0,0);
    Hint_Prefetch(lVar31 + uVar15,0,0,0);
    uVar35 = *(uint *)(lVar26 + (uVar21 & 7) * 4);
    *(int *)(lVar26 + (uVar21 & 7) * 4) = (int)uVar40;
  }
  else {
    uVar35 = (uint)((*puVar13 * -0x30e4432340650000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar35;
  uVar21 = (ulong)(uVar35 >> 4) & 0xffffff0;
  lVar27 = lVar27 + uVar21 * 4;
  pauVar2 = (undefined1 (*) [16])(lVar31 + uVar21);
  bVar28 = (*pauVar2)[0];
  auVar51 = *pauVar2;
  bVar29 = (byte)uVar35;
  bVar41 = auVar51[0];
  uVar42 = CONCAT11(-(auVar51[9] == bVar29),-(auVar51[8] == bVar29));
  uVar43 = CONCAT13(-(auVar51[0xb] == bVar29),CONCAT12(-(auVar51[10] == bVar29),uVar42));
  uVar44 = CONCAT15(-(auVar51[0xd] == bVar29),CONCAT14(-(auVar51[0xc] == bVar29),uVar43));
  uVar21 = CONCAT17((char)(CONCAT17(-(auVar51[0xf] == bVar29),
                                    CONCAT16(-(auVar51[0xe] == bVar29),uVar44)) >> 0x34),
                    CONCAT16((char)((uint6)uVar44 >> 0x24),
                             CONCAT15((char)((uint)uVar43 >> 0x14),
                                      CONCAT14((char)(uVar42 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar51[7] == bVar29),
                                                                        -(auVar51[6] == bVar29)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar51[
                                                  5] == bVar29),-(auVar51[4] == bVar29)) >> 4),
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                  CONCAT11((char)(CONCAT11(-(auVar51[3] == bVar29),
                                                                           -(auVar51[2] == bVar29))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar51[1] == bVar29),
                                                                           -(bVar41 == bVar29)) >> 4
                                                                 ))))))));
  uVar15 = (ulong)bVar28 & 0xf;
  uVar21 = (uVar21 >> uVar15 * 4 | uVar21 << uVar15 * -4 + 0x40) & 0x8888888888888888;
  if (uVar21 != 0) {
    lVar31 = 0;
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    do {
      uVar15 = (uVar21 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + (bVar28 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar27 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) goto code_r0x002d198c;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_728[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
/* WM - origin: github.com/pengussy */
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) goto code_r0x002d198c;
    } while( true );
  }
  lVar31 = 0;
code_r0x002d198c:
  uVar24 = 0xf;
  if ((bVar41 & 0xf) != 1) {
    uVar24 = 0;
  }
  lVar26 = (ulong)uVar24 + (ulong)(bVar41 - 1 & 0xf);
  (*pauVar2)[0] = (char)lVar26;
  (*pauVar2)[lVar26] = bVar29;
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar27 + lVar26 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
  else {
    lVar27 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_728[lVar27];
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
            do {
              puVar17 = puVar17 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar17) goto code_r0x002d1a7c;
// unlicensed copy if this notice is missing
              uVar21 = *puVar14;
              lVar19 = lVar19 + 8;
              puVar14 = puVar14 + 1;
            } while (uVar21 == *puVar17);
            uVar21 = *puVar17 ^ uVar21;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar19 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *puVar13 ^ *puVar14;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
          }
        }
        else {
code_r0x002d1a7c:
          if (puVar17 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar14 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar14 = (ulong *)((long)puVar14 + 4);
            }
          }
          if (puVar17 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar14 == (short)*puVar17) {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar17 = (ulong *)((long)puVar17 + 2);
            }
          }
          if (puVar17 < param_3) {
            if ((char)*puVar14 == (char)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          uVar21 = (long)puVar17 - (long)puVar13;
        }
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)puVar13 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar27 = lVar27 + 1;
      uVar15 = uVar21;
    } while (lVar27 != lVar31);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_628) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    return uVar21;
  }
  auVar51 = ___stack_chk_fail(uVar21);
  puVar13 = auVar51._8_8_;
  lVar19 = auVar51._0_8_;
  lStack_798 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar19 + 0x70);
  lVar31 = *(long *)(lVar19 + 0x38);
  iVar22 = *(int *)(lVar19 + 0x34);
  lVar25 = *(long *)(lVar19 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar19 + 0x100) & 0x1f);
  uVar21 = (long)puVar13 - lVar25;
  uVar20 = (uint)uVar21;
  uVar24 = uVar20 - uVar30;
  if (uVar20 - *(uint *)(lVar19 + 0x1c) <= uVar30 || *(int *)(lVar19 + 0x28) != 0) {
    uVar24 = *(uint *)(lVar19 + 0x1c);
  }
  uVar30 = *(uint *)(lVar19 + 0x10c);
  if (4 < uVar30) {
    uVar30 = 5;
  }
  uVar15 = *(ulong *)(lVar19 + 0x60);
  if (*(int *)(lVar19 + 300) == 0) {
    lVar26 = lVar19 + 0x40;
    uVar35 = *(uint *)(lVar19 + 0x2c);
    uVar40 = (ulong)uVar35;
    lVar16 = lVar31;
    lVar18 = lVar27;
    if (0x180 < uVar20 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar38 = uVar40 + 0x60;
        do {
          uVar39 = (*(long *)(lVar25 + 8 + uVar40) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60)
/* do not claim this as your own - github.com/pengussy */
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar36 = uVar39 >> 3 & 0x1fffffe0;
          lVar16 = lVar27 + uVar36 * 4;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x40,0,0,0);
          Hint_Prefetch(lVar31 + uVar36,0,0,0);
          uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar39 = (ulong)(uVar33 >> 3) & 0x1fffffe0;
          pbVar1 = (byte *)(lVar31 + uVar39);
          uVar35 = 0x1f;
          if ((*pbVar1 & 0x1f) != 1) {
            uVar35 = 0;
          }
          lVar16 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0x1f);
          *pbVar1 = (byte)lVar16;
          pbVar1[lVar16] = (byte)uVar33;
          *(int *)(lVar27 + uVar39 * 4 + lVar16 * 4) = (int)uVar40;
          uVar40 = uVar40 + 1;
        } while (uVar38 != uVar40);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar35 = uVar20 - 0x20;
      uVar40 = (ulong)uVar35;
      iVar34 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar40);
      iVar37 = 8;
      if (iVar34 + 1U < 8) {
        iVar37 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar25 + uVar40 <= (long)puVar13 + 1U) {
        iVar34 = iVar37;
      }
      if (uVar35 < iVar34 + uVar35) {
        iVar37 = *(int *)(lVar19 + 0x34);
        uVar38 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar39 = (*(long *)(lVar25 + uVar40) * -0x30e4432340650000 ^ uVar38) >>
                   ((ulong)(0x38 - iVar37) & 0x3f);
          uVar36 = uVar39 >> 3 & 0x1fffffe0;
          lVar32 = lVar18 + uVar36 * 4;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x40,0,0,0);
          Hint_Prefetch(lVar16 + uVar36,0,0,0);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar40 = uVar40 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar35 < uVar20) {
/* WM - reversing this took months of machine time */
      lVar32 = *(long *)(lVar19 + 8);
      iVar37 = *(int *)(lVar19 + 0x34);
      uVar40 = (ulong)uVar35;
      do {
        uVar38 = (*(long *)(lVar32 + 8 + uVar40) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar37) & 0x3f);
        uVar39 = uVar38 >> 3 & 0x1fffffe0;
        lVar3 = lVar18 + uVar39 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        Hint_Prefetch(lVar16 + uVar39,0,0,0);
        uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
        *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar38;
        uVar38 = (ulong)(uVar33 >> 3) & 0x1fffffe0;
        pbVar1 = (byte *)(lVar16 + uVar38);
        uVar35 = 0x1f;
        if ((*pbVar1 & 0x1f) != 1) {
          uVar35 = 0;
        }
        lVar3 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0x1f);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar33;
/* donate: donate/README.md - github.com/pengussy */
        *(int *)(lVar18 + uVar38 * 4 + lVar3 * 4) = (int)uVar40;
        uVar40 = uVar40 + 1;
      } while (uVar40 < (uVar21 & 0xffffffff));
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar40 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar40 >> 3 & 0x1fffffe0;
    lVar16 = lVar27 + uVar15 * 4;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x40,0,0,0);
    Hint_Prefetch(lVar31 + uVar15,0,0,0);
    uVar35 = *(uint *)(lVar26 + (uVar21 & 7) * 4);
    *(int *)(lVar26 + (uVar21 & 7) * 4) = (int)uVar40;
  }
  else {
    uVar35 = (uint)((*puVar13 * -0x30e4432340650000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
// WM - keep the notice, keep the source honest
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar35;
  uVar21 = (ulong)(uVar35 >> 3) & 0x1fffffe0;
  lVar27 = lVar27 + uVar21 * 4;
  pbVar1 = (byte *)(lVar31 + uVar21);
  bVar28 = *pbVar1;
  bVar29 = (byte)uVar35;
  uVar56 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)pbVar1));
  uVar57 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 4)),uVar56));
  uVar58 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 8)),uVar57));
  uVar59 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x10)));
  uVar60 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x14)),uVar59));
  uVar61 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x18)),uVar60));
  uVar42 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 2)));
  uVar43 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 6)),uVar42));
  uVar44 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 10)),uVar43));
  uVar45 = CONCAT17(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0xe)),uVar44));
  auVar47._0_10_ =
       CONCAT19(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x12)),uVar45));
  auVar47[10] = -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x16));
  auVar47[0xb] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar49[0xc] = -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x1a));
  auVar49._0_12_ = auVar47;
  auVar49[0xd] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar54[0xe] = -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x1e));
/*  reversing this took months of machine time  */
  auVar54._0_14_ = auVar49;
  auVar54[0xf] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar21 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar29 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar29 ==
                                                       (byte)*(undefined2 *)(pbVar1 + 0x1c)),uVar61)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar61 >> 0x26),
                                      CONCAT15((char)((uint)uVar60 >> 0x16),
                                               CONCAT14((char)(uVar59 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar29 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar29 ==
                                                            (byte)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar58)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar58 >> 0x26),
                                                           CONCAT11((char)((uint)uVar57 >> 0x16),
                                                                    (char)(uVar56 >> 6)))))))),
                    CONCAT17((char)(auVar54._14_2_ >> 6),
                             CONCAT16((char)(auVar49._12_2_ >> 6),
                                      CONCAT15((char)(auVar47._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar47._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar45 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar44 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar43 >> 0x16),(char)(uVar42 >> 6)))))))),4,1);
  uVar21 = (uVar21 >> ((ulong)bVar28 & 0x1f) * 2 | uVar21 << ((ulong)bVar28 & 0x1f) * -2 + 0x40) &
// origin: github.com/pengussy
           0x5555555555555555;
  if (uVar21 != 0) {
    lVar31 = 0;
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    do {
      uVar15 = (uVar21 << 1 & 0xcccccccccccccccc) >> 2 | (uVar21 << 1 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + (bVar28 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar27 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) goto code_r0x002d1f00;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_898[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      if ((uVar21 == 0) || (iVar22 == 0)) goto code_r0x002d1f00;
    } while( true );
  }
  lVar31 = 0;
code_r0x002d1f00:
  uVar24 = 0x1f;
  if ((bVar28 & 0x1f) != 1) {
    uVar24 = 0;
  }
  lVar26 = (ulong)uVar24 + (ulong)(bVar28 - 1 & 0x1f);
  *pbVar1 = (byte)lVar26;
  pbVar1[lVar26] = bVar29;
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar27 + lVar26 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
  else {
    lVar27 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_898[lVar27];
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
            do {
              puVar17 = puVar17 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar17) goto code_r0x002d1ff0;
              uVar21 = *puVar14;
              lVar19 = lVar19 + 8;
              puVar14 = puVar14 + 1;
// chat: discord.gg/sdkhDjTex
            } while (uVar21 == *puVar17);
            uVar21 = *puVar17 ^ uVar21;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar19 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *puVar13 ^ *puVar14;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
          }
        }
        else {
code_r0x002d1ff0:
          if (puVar17 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar14 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar14 = (ulong *)((long)puVar14 + 4);
            }
          }
          if (puVar17 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar14 == (short)*puVar17) {
/* chat: discord.gg/sdkhDjTex */
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar17 = (ulong *)((long)puVar17 + 2);
            }
          }
          if (puVar17 < param_3) {
            if ((char)*puVar14 == (char)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          uVar21 = (long)puVar17 - (long)puVar13;
        }
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)puVar13 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar27 = lVar27 + 1;
      uVar15 = uVar21;
    } while (lVar27 != lVar31);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_798) {
/* origin: github.com/pengussy - github.com/pengussy */
    return uVar21;
  }
  auVar51 = ___stack_chk_fail(uVar21);
  puVar13 = auVar51._8_8_;
  lVar19 = auVar51._0_8_;
  lStack_908 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar19 + 0x70);
  lVar31 = *(long *)(lVar19 + 0x38);
  iVar22 = *(int *)(lVar19 + 0x34);
  lVar25 = *(long *)(lVar19 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar19 + 0x100) & 0x1f);
  uVar21 = (long)puVar13 - lVar25;
  uVar20 = (uint)uVar21;
  uVar24 = uVar20 - uVar30;
  if (uVar20 - *(uint *)(lVar19 + 0x1c) <= uVar30 || *(int *)(lVar19 + 0x28) != 0) {
    uVar24 = *(uint *)(lVar19 + 0x1c);
  }
  uVar30 = *(uint *)(lVar19 + 0x10c);
  if (5 < uVar30) {
    uVar30 = 6;
  }
  uVar15 = *(ulong *)(lVar19 + 0x60);
  if (*(int *)(lVar19 + 300) == 0) {
    lVar26 = lVar19 + 0x40;
    uVar35 = *(uint *)(lVar19 + 0x2c);
    uVar40 = (ulong)uVar35;
    lVar16 = lVar31;
    lVar18 = lVar27;
    if (0x180 < uVar20 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar38 = uVar40 + 0x60;
        do {
          uVar39 = (*(long *)(lVar25 + 8 + uVar40) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
/* proprietary - see LICENSE - do not sell */
          uVar36 = uVar39 >> 2 & 0x3fffffc0;
          lVar16 = lVar27 + uVar36 * 4;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x40,0,0,0);
          lVar16 = lVar31 + uVar36;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x20,0,0,0);
          uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar39 = (ulong)(uVar33 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)(lVar31 + uVar39);
          uVar35 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar35 = 0;
          }
          lVar16 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0x3f);
          *pbVar1 = (byte)lVar16;
          pbVar1[lVar16] = (byte)uVar33;
          *(int *)(lVar27 + uVar39 * 4 + lVar16 * 4) = (int)uVar40;
          uVar40 = uVar40 + 1;
        } while (uVar38 != uVar40);
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar35 = uVar20 - 0x20;
      uVar40 = (ulong)uVar35;
      iVar34 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar40);
      iVar37 = 8;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      if (iVar34 + 1U < 8) {
        iVar37 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar25 + uVar40 <= (long)puVar13 + 1U) {
        iVar34 = iVar37;
      }
      if (uVar35 < iVar34 + uVar35) {
        iVar37 = *(int *)(lVar19 + 0x34);
        uVar38 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar39 = (*(long *)(lVar25 + uVar40) * -0x30e4432340650000 ^ uVar38) >>
                   ((ulong)(0x38 - iVar37) & 0x3f);
          uVar36 = uVar39 >> 2 & 0x3fffffc0;
          lVar32 = lVar18 + uVar36 * 4;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x40,0,0,0);
          lVar32 = lVar16 + uVar36;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x20,0,0,0);
          *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar39;
          uVar40 = uVar40 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar35 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar37 = *(int *)(lVar19 + 0x34);
      uVar40 = (ulong)uVar35;
      do {
        uVar38 = (*(long *)(lVar32 + 8 + uVar40) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar37) & 0x3f);
        uVar39 = uVar38 >> 2 & 0x3fffffc0;
/* wm:donate: donate/README.md */
        lVar3 = lVar18 + uVar39 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar16 + uVar39;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar33 = *(uint *)(lVar26 + (uVar40 & 7) * 4);
        *(int *)(lVar26 + (uVar40 & 7) * 4) = (int)uVar38;
        uVar38 = (ulong)(uVar33 >> 2) & 0x3fffffc0;
        pbVar1 = (byte *)(lVar16 + uVar38);
        uVar35 = 0x3f;
        if ((*pbVar1 & 0x3f) != 1) {
          uVar35 = 0;
        }
        lVar3 = (ulong)uVar35 + (ulong)(*pbVar1 - 1 & 0x3f);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar33;
        *(int *)(lVar18 + uVar38 * 4 + lVar3 * 4) = (int)uVar40;
        uVar40 = uVar40 + 1;
      } while (uVar40 < (uVar21 & 0xffffffff));
/* wm:chat: discord.gg/sdkhDjTex */
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar40 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar40 >> 2 & 0x3fffffc0;
    lVar16 = lVar27 + uVar15 * 4;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x40,0,0,0);
    lVar16 = lVar31 + uVar15;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x20,0,0,0);
    uVar35 = *(uint *)(lVar26 + (uVar21 & 7) * 4);
    *(int *)(lVar26 + (uVar21 & 7) * 4) = (int)uVar40;
  }
  else {
    uVar35 = (uint)((*puVar13 * -0x30e4432340650000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar35;
  uVar21 = (ulong)(uVar35 >> 2) & 0x3fffffc0;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  lVar27 = lVar27 + uVar21 * 4;
  pbVar1 = (byte *)(lVar31 + uVar21);
  bVar28 = (byte)uVar35;
  auVar65[0] = -(pbVar1[1] == bVar28);
  auVar65[1] = -(pbVar1[5] == bVar28);
  auVar65[2] = -(pbVar1[9] == bVar28);
  auVar65[3] = -(pbVar1[0xd] == bVar28);
  auVar65[4] = -(pbVar1[0x11] == bVar28);
  auVar65[5] = -(pbVar1[0x15] == bVar28);
  auVar65[6] = -(pbVar1[0x19] == bVar28);
  auVar65[7] = -(pbVar1[0x1d] == bVar28);
  auVar65[8] = -(pbVar1[0x21] == bVar28);
  auVar65[9] = -(pbVar1[0x25] == bVar28);
  auVar65[10] = -(pbVar1[0x29] == bVar28);
  auVar65[0xb] = -(pbVar1[0x2d] == bVar28);
  auVar65[0xc] = -(pbVar1[0x31] == bVar28);
  auVar65[0xd] = -(pbVar1[0x35] == bVar28);
  auVar65[0xe] = -(pbVar1[0x39] == bVar28);
  auVar65[0xf] = -(pbVar1[0x3d] == bVar28);
  auVar55[0] = -(pbVar1[3] == bVar28);
  auVar55[1] = -(pbVar1[7] == bVar28);
  auVar55[2] = -(pbVar1[0xb] == bVar28);
  auVar55[3] = -(pbVar1[0xf] == bVar28);
// found on a paste site? it was re-uploaded illegally
  auVar55[4] = -(pbVar1[0x13] == bVar28);
  auVar55[5] = -(pbVar1[0x17] == bVar28);
  auVar55[6] = -(pbVar1[0x1b] == bVar28);
  auVar55[7] = -(pbVar1[0x1f] == bVar28);
  auVar55[8] = -(pbVar1[0x23] == bVar28);
  auVar55[9] = -(pbVar1[0x27] == bVar28);
  auVar55[10] = -(pbVar1[0x2b] == bVar28);
  auVar55[0xb] = -(pbVar1[0x2f] == bVar28);
  auVar55[0xc] = -(pbVar1[0x33] == bVar28);
  auVar55[0xd] = -(pbVar1[0x37] == bVar28);
  auVar55[0xe] = -(pbVar1[0x3b] == bVar28);
  auVar55[0xf] = -(pbVar1[0x3f] == bVar28);
  auVar10[1] = -(pbVar1[4] == bVar28);
  auVar10[0] = -(*pbVar1 == bVar28);
  auVar10[2] = -(pbVar1[8] == bVar28);
  auVar10[3] = -(pbVar1[0xc] == bVar28);
  auVar10[4] = -(pbVar1[0x10] == bVar28);
  auVar10[5] = -(pbVar1[0x14] == bVar28);
  auVar10[6] = -(pbVar1[0x18] == bVar28);
  auVar10[7] = -(pbVar1[0x1c] == bVar28);
  auVar10[8] = -(pbVar1[0x20] == bVar28);
  auVar10[9] = -(pbVar1[0x24] == bVar28);
  auVar10[10] = -(pbVar1[0x28] == bVar28);
  auVar10[0xb] = -(pbVar1[0x2c] == bVar28);
  auVar10[0xc] = -(pbVar1[0x30] == bVar28);
  auVar10[0xd] = -(pbVar1[0x34] == bVar28);
  auVar10[0xe] = -(pbVar1[0x38] == bVar28);
  auVar10[0xf] = -(pbVar1[0x3c] == bVar28);
  auVar64 = NEON_sri(auVar65,auVar10,1,1);
  auVar12[1] = -(pbVar1[6] == bVar28);
  auVar12[0] = -(pbVar1[2] == bVar28);
  auVar12[2] = -(pbVar1[10] == bVar28);
  auVar12[3] = -(pbVar1[0xe] == bVar28);
/*  unlicensed copy if this notice is missing  */
  auVar12[4] = -(pbVar1[0x12] == bVar28);
  auVar12[5] = -(pbVar1[0x16] == bVar28);
  auVar12[6] = -(pbVar1[0x1a] == bVar28);
  auVar12[7] = -(pbVar1[0x1e] == bVar28);
  auVar12[8] = -(pbVar1[0x22] == bVar28);
  auVar12[9] = -(pbVar1[0x26] == bVar28);
  auVar12[10] = -(pbVar1[0x2a] == bVar28);
  auVar12[0xb] = -(pbVar1[0x2e] == bVar28);
  auVar12[0xc] = -(pbVar1[0x32] == bVar28);
  auVar12[0xd] = -(pbVar1[0x36] == bVar28);
  auVar12[0xe] = -(pbVar1[0x3a] == bVar28);
  auVar12[0xf] = -(pbVar1[0x3e] == bVar28);
  auVar51 = NEON_sri(auVar55,auVar12,1,1);
  auVar51 = NEON_sri(auVar51,auVar64,2,1);
  auVar51 = NEON_sri(auVar51,auVar51,4,1);
  uVar21 = CONCAT17((char)(auVar51._14_2_ >> 4),
                    CONCAT16((char)(auVar51._12_2_ >> 4),
                             CONCAT15((char)(auVar51._10_2_ >> 4),
                                      CONCAT14((char)(auVar51._8_2_ >> 4),
                                               CONCAT13((char)(auVar51._6_2_ >> 4),
                                                        CONCAT12((char)(auVar51._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar51._2_2_ >> 4)
                                                                          ,(char)(auVar51._0_2_ >> 4
                                                                                 ))))))));
  lVar31 = 0;
  uVar35 = (uint)*pbVar1;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  if (uVar21 != 0) {
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    uVar15 = (ulong)*pbVar1 & 0x3f;
    uVar21 = uVar21 >> uVar15 | uVar21 << 0x40 - uVar15;
    do {
      uVar15 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + uVar35 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar27 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) break;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_a08[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) break;
/* watermarked copy - do not remove */
    } while( true );
  }
  uVar24 = 0x3f;
  if ((uVar35 & 0x3f) != 1) {
    uVar24 = 0;
  }
  lVar26 = (ulong)uVar24 + (ulong)(uVar35 - 1 & 0x3f);
  *pbVar1 = (byte)lVar26;
  pbVar1[lVar26] = bVar28;
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar27 + lVar26 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
  else {
    lVar27 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_a08[lVar27];
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
            do {
              puVar17 = puVar17 + 1;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
              if ((ulong *)((long)param_3 + -7) <= puVar17) goto LAB_002d2578;
              uVar21 = *puVar14;
              lVar19 = lVar19 + 8;
              puVar14 = puVar14 + 1;
            } while (uVar21 == *puVar17);
            uVar21 = *puVar17 ^ uVar21;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar19 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *puVar13 ^ *puVar14;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
          }
        }
        else {
LAB_002d2578:
          if (puVar17 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar14 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar14 = (ulong *)((long)puVar14 + 4);
            }
          }
          if (puVar17 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar14 == (short)*puVar17) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar17 = (ulong *)((long)puVar17 + 2);
            }
          }
          if (puVar17 < param_3) {
            if ((char)*puVar14 == (char)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          uVar21 = (long)puVar17 - (long)puVar13;
        }
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)puVar13 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar27 = lVar27 + 1;
      uVar15 = uVar21;
    } while (lVar27 != lVar31);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_908) {
// donate: donate/README.md
    return uVar21;
  }
  auVar51 = ___stack_chk_fail(uVar21);
  puVar13 = auVar51._8_8_;
  lVar25 = auVar51._0_8_;
  lVar31 = *(long *)(lVar25 + 0x80);
  uVar35 = 1 << (ulong)(*(uint *)(lVar25 + 0x104) & 0x1f);
  lVar27 = *(long *)(lVar25 + 8);
  lVar19 = *(long *)(lVar25 + 0x10);
  uVar33 = 1 << (ulong)(*(uint *)(lVar25 + 0x100) & 0x1f);
  uVar30 = *(uint *)(lVar25 + 0x18);
  uVar23 = (uint)((long)puVar13 - lVar27);
  uVar20 = *(uint *)(lVar25 + 0x2c);
  uVar21 = (ulong)uVar20;
  uVar24 = uVar23 - uVar33;
  if (uVar23 - *(uint *)(lVar25 + 0x1c) <= uVar33 || *(int *)(lVar25 + 0x28) != 0) {
    uVar24 = *(uint *)(lVar25 + 0x1c);
  }
  uVar33 = 0;
  if (uVar35 <= uVar23) {
    uVar33 = uVar23 - uVar35;
  }
  uVar5 = *(uint *)(lVar25 + 0x10c);
  lVar26 = *(long *)(lVar25 + 0x70);
  uVar7 = ~(-1 << (ulong)(*(uint *)(lVar25 + 0x104) & 0x1f));
  uVar8 = 0x20 - *(int *)(lVar25 + 0x108);
  if (*(int *)(lVar25 + 300) == 0) {
    if (uVar20 < uVar23) {
/*  thanks for reading - discord.gg/sdkhDjTex  */
      do {
        uVar20 = (uint)(*(int *)(lVar27 + uVar21) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
        *(undefined4 *)(lVar31 + (ulong)((uint)uVar21 & uVar7) * 4) =
             *(undefined4 *)(lVar26 + (ulong)uVar20 * 4);
        *(uint *)(lVar26 + (ulong)uVar20 * 4) = (uint)uVar21;
        uVar21 = uVar21 + 1;
      } while (uVar21 < ((long)puVar13 - lVar27 & 0xffffffffU));
    }
  }
  else if (uVar20 < uVar23) {
    uVar6 = (uint)(*(int *)(lVar27 + uVar21) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
    *(undefined4 *)(lVar31 + (ulong)(uVar20 & uVar7) * 4) =
         *(undefined4 *)(lVar26 + (ulong)uVar6 * 4);
    *(uint *)(lVar26 + (ulong)uVar6 * 4) = uVar20;
  }
  *(uint *)(lVar25 + 0x2c) = uVar23;
  uVar21 = *puVar13;
  uVar20 = *(uint *)(lVar26 + (ulong)((uint)((int)uVar21 * -0x61c8864f) >> (ulong)(uVar8 & 0x1f)) *
                              4);
  if (uVar20 < uVar24) {
    uVar15 = 3;
  }
  else {
    iVar22 = 1 << (ulong)(uVar5 & 0x1f);
    uVar15 = 3;
    do {
      uVar40 = (ulong)uVar20;
      if (uVar20 < uVar30) {
/* donate: donate/README.md */
        piVar4 = (int *)(lVar19 + uVar40);
        if (*piVar4 == (int)uVar21) {
          lVar25 = func_0x002ad924((int *)((long)puVar13 + 4),piVar4 + 1,param_3,
                                   lVar19 + (ulong)uVar30,lVar27 + (ulong)uVar30);
          uVar40 = lVar25 + 4;
          goto joined_r0x002d2a54;
        }
      }
      else {
        puVar14 = (ulong *)(lVar27 + uVar40);
        if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
          puVar17 = puVar13;
          if (puVar13 < (ulong *)((long)param_3 + -7)) {
            if (*puVar14 == *puVar13) {
              lVar25 = 0;
              puVar14 = (ulong *)(lVar27 + 8 + uVar40);
              do {
                puVar17 = puVar17 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar17) goto code_r0x002d29fc;
                uVar40 = *puVar14;
                lVar25 = lVar25 + 8;
                puVar14 = puVar14 + 1;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
              } while (uVar40 == *puVar17);
              uVar40 = *puVar17 ^ uVar40;
              uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
              uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2;
              uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
              uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 | (uVar40 & 0xffff0000ffff) << 0x10;
              uVar40 = lVar25 + ((ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3);
            }
            else {
              uVar40 = *puVar13 ^ *puVar14;
              uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
              uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2;
              uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
              uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 | (uVar40 & 0xffff0000ffff) << 0x10;
              uVar40 = (ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3;
            }
          }
          else {
code_r0x002d29fc:
            if (puVar17 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar14 == (int)*puVar17) {
                puVar14 = (ulong *)((long)puVar14 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar17 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar14 == (short)*puVar17) {
                puVar14 = (ulong *)((long)puVar14 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
            if (puVar17 < param_3) {
              if ((char)*puVar14 == (char)*puVar17) {
                puVar17 = (ulong *)((long)puVar17 + 1);
              }
            }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
            uVar40 = (long)puVar17 - (long)puVar13;
          }
joined_r0x002d2a54:
          if (uVar15 < uVar40) {
            *param_4 = (ulong)((uVar23 + 3) - uVar20);
            uVar15 = uVar40;
            if ((ulong *)((long)puVar13 + uVar40) == param_3) {
              return uVar40;
            }
          }
        }
      }
      if ((uVar20 <= uVar33) || (iVar22 = iVar22 + -1, iVar22 == 0)) {
        return uVar15;
      }
      uVar20 = *(uint *)(lVar31 + (ulong)(uVar20 & uVar35 - 1) * 4);
    } while (uVar24 <= uVar20);
  }
  return uVar15;
}

