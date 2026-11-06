/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2d173c:07d4e07b88
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002d173c(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  undefined1 (*pauVar1) [16];
  byte *pbVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  int iVar31;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uint uVar32;
  ulong uVar33;
  int iVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  byte bVar38;
  ushort uVar39;
  undefined4 uVar40;
  undefined6 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [14];
  undefined1 auVar45 [16];
  ushort uVar46;
  undefined4 uVar47;
  undefined6 uVar48;
  ushort uVar49;
  undefined4 uVar50;
  undefined6 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint auStack_448 [64];
  long lStack_348;
  uint auStack_2d8 [64];
  long lStack_1d8;
  uint auStack_168 [64];
  long lStack_68;
/* wm:origin: github.com/pengussy */
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar24 = *(long *)(param_1 + 0x70);
  lVar23 = *(long *)(param_1 + 0x38);
  iVar20 = *(int *)(param_1 + 0x34);
  lVar17 = *(long *)(param_1 + 8);
  uVar28 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar19 = (long)param_2 - lVar17;
  uVar18 = (uint)uVar19;
  uVar22 = uVar18 - uVar28;
  if (uVar18 - *(uint *)(param_1 + 0x1c) <= uVar28 || *(int *)(param_1 + 0x28) != 0) {
    uVar22 = *(uint *)(param_1 + 0x1c);
  }
  uVar28 = *(uint *)(param_1 + 0x10c);
  if (3 < uVar28) {
    uVar28 = 4;
  }
  uVar13 = *(ulong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 300) == 0) {
    lVar29 = param_1 + 0x40;
    uVar32 = *(uint *)(param_1 + 0x2c);
    uVar37 = (ulong)uVar32;
    lVar25 = lVar23;
    lVar14 = lVar24;
    if (0x180 < uVar18 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar35 = uVar37 + 0x60;
        do {
          uVar36 = (*(long *)(lVar17 + 8 + uVar37) * -0x30e4432340650000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar33 = uVar36 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar24 + uVar33 * 4,0,0,0);
          Hint_Prefetch(lVar23 + uVar33,0,0,0);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          uVar6 = *(uint *)(lVar29 + (uVar37 & 7) * 4);
          *(int *)(lVar29 + (uVar37 & 7) * 4) = (int)uVar36;
          uVar36 = (ulong)(uVar6 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar23 + uVar36);
          uVar32 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar32 = 0;
          }
          lVar25 = (ulong)uVar32 + (ulong)(*pbVar2 - 1 & 0xf);
          *pbVar2 = (byte)lVar25;
          pbVar2[lVar25] = (byte)uVar6;
          *(int *)(lVar24 + uVar36 * 4 + lVar25 * 4) = (int)uVar37;
          uVar37 = uVar37 + 1;
        } while (uVar35 != uVar37);
        lVar14 = *(long *)(param_1 + 0x70);
        lVar25 = *(long *)(param_1 + 0x38);
      }
      uVar32 = uVar18 - 0x20;
      uVar37 = (ulong)uVar32;
      iVar31 = (int)((long)param_2 + 1U) - (int)(lVar17 + uVar37);
      iVar34 = 8;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      if (iVar31 + 1U < 8) {
        iVar34 = iVar31 + 1;
      }
      iVar31 = 0;
      if (lVar17 + uVar37 <= (long)param_2 + 1U) {
        iVar31 = iVar34;
      }
      if (uVar32 < iVar31 + uVar32) {
        iVar34 = *(int *)(param_1 + 0x34);
        uVar35 = *(ulong *)(param_1 + 0x60);
        do {
          uVar36 = (*(long *)(lVar17 + uVar37) * -0x30e4432340650000 ^ uVar35) >>
                   ((ulong)(0x38 - iVar34) & 0x3f);
          uVar33 = uVar36 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar14 + uVar33 * 4,0,0,0);
          Hint_Prefetch(lVar25 + uVar33,0,0,0);
          *(int *)(lVar29 + (uVar37 & 7) * 4) = (int)uVar36;
          uVar37 = uVar37 + 1;
          iVar31 = iVar31 + -1;
        } while (iVar31 != 0);
      }
    }
    if (uVar32 < uVar18) {
      lVar16 = *(long *)(param_1 + 8);
      iVar34 = *(int *)(param_1 + 0x34);
      uVar37 = (ulong)uVar32;
      do {
        uVar35 = (*(long *)(lVar16 + 8 + uVar37) * -0x30e4432340650000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar34) & 0x3f);
/* watermarked copy - do not remove - github.com/pengussy */
        uVar36 = uVar35 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar14 + uVar36 * 4,0,0,0);
        Hint_Prefetch(lVar25 + uVar36,0,0,0);
        uVar6 = *(uint *)(lVar29 + (uVar37 & 7) * 4);
        *(int *)(lVar29 + (uVar37 & 7) * 4) = (int)uVar35;
        uVar35 = (ulong)(uVar6 >> 4) & 0xffffff0;
        pbVar2 = (byte *)(lVar25 + uVar35);
        uVar32 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar32 = 0;
        }
        lVar30 = (ulong)uVar32 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar30;
        pbVar2[lVar30] = (byte)uVar6;
        *(int *)(lVar14 + uVar35 * 4 + lVar30 * 4) = (int)uVar37;
        uVar37 = uVar37 + 1;
      } while (uVar37 < (uVar19 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar18;
    uVar37 = (*(long *)(lVar17 + (uVar19 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar13) >>
             ((ulong)(0x38 - iVar20) & 0x3f);
    uVar13 = uVar37 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar24 + uVar13 * 4,0,0,0);
    Hint_Prefetch(lVar23 + uVar13,0,0,0);
    uVar32 = *(uint *)(lVar29 + (uVar19 & 7) * 4);
    *(int *)(lVar29 + (uVar19 & 7) * 4) = (int)uVar37;
  }
  else {
    uVar32 = (uint)((*param_2 * -0x30e4432340650000 ^ uVar13) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar18;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar32;
  uVar19 = (ulong)(uVar32 >> 4) & 0xffffff0;
  lVar24 = lVar24 + uVar19 * 4;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  pauVar1 = (undefined1 (*) [16])(lVar23 + uVar19);
  bVar27 = (*pauVar1)[0];
  auVar54 = *pauVar1;
  bVar26 = (byte)uVar32;
  bVar38 = auVar54[0];
  uVar39 = CONCAT11(-(auVar54[9] == bVar26),-(auVar54[8] == bVar26));
  uVar40 = CONCAT13(-(auVar54[0xb] == bVar26),CONCAT12(-(auVar54[10] == bVar26),uVar39));
  uVar41 = CONCAT15(-(auVar54[0xd] == bVar26),CONCAT14(-(auVar54[0xc] == bVar26),uVar40));
  uVar19 = CONCAT17((char)(CONCAT17(-(auVar54[0xf] == bVar26),
                                    CONCAT16(-(auVar54[0xe] == bVar26),uVar41)) >> 0x34),
                    CONCAT16((char)((uint6)uVar41 >> 0x24),
                             CONCAT15((char)((uint)uVar40 >> 0x14),
                                      CONCAT14((char)(uVar39 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar54[7] == bVar26),
                                                                        -(auVar54[6] == bVar26)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar54[
                                                  5] == bVar26),-(auVar54[4] == bVar26)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar54[3] == bVar26),
// do not claim this as your own
                                                                           -(auVar54[2] == bVar26))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar54[1] == bVar26),
                                                                           -(bVar38 == bVar26)) >> 4
                                                                 ))))))));
  uVar13 = (ulong)bVar27 & 0xf;
  uVar19 = (uVar19 >> uVar13 * 4 | uVar19 << uVar13 * -4 + 0x40) & 0x8888888888888888;
  if (uVar19 != 0) {
    lVar23 = 0;
    iVar20 = 1 << (ulong)(uVar28 & 0x1f);
    do {
      uVar13 = (uVar19 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar28 = (int)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + (bVar27 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar28 != 0) {
        uVar28 = *(uint *)(lVar24 + (ulong)uVar28 * 4);
        if (uVar28 < uVar22) goto LAB_002d198c;
        Hint_Prefetch(lVar17 + (ulong)uVar28,0,0,0);
        auStack_168[lVar23] = uVar28;
        lVar23 = lVar23 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      if ((uVar19 == 0) || (iVar20 == 0)) goto LAB_002d198c;
    } while( true );
  }
  lVar23 = 0;
LAB_002d198c:
  uVar22 = 0xf;
  if ((bVar38 & 0xf) != 1) {
    uVar22 = 0;
  }
  lVar29 = (ulong)uVar22 + (ulong)(bVar38 - 1 & 0xf);
  (*pauVar1)[0] = (char)lVar29;
  (*pauVar1)[lVar29] = bVar26;
  iVar20 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar20 + 1;
// keep the notice, keep the source honest
  *(int *)(lVar24 + lVar29 * 4) = iVar20;
  if (lVar23 == 0) {
    uVar19 = 3;
  }
  else {
    lVar24 = 0;
    uVar13 = 3;
    do {
      uVar22 = auStack_168[lVar24];
      puVar11 = (ulong *)(lVar17 + (ulong)uVar22);
      if (*(int *)((long)puVar11 + (uVar13 - 3)) == *(int *)((long)param_2 + (uVar13 - 3))) {
        puVar12 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar11 == *param_2) {
            lVar29 = 0;
            puVar11 = (ulong *)(lVar17 + 8 + (ulong)uVar22);
            do {
              puVar12 = puVar12 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar12) goto LAB_002d1a7c;
              uVar19 = *puVar11;
              lVar29 = lVar29 + 8;
              puVar11 = puVar11 + 1;
            } while (uVar19 == *puVar12);
            uVar19 = *puVar12 ^ uVar19;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = lVar29 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
          }
          else {
// WM - do not claim this as your own
            uVar19 = *param_2 ^ *puVar11;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
          }
        }
        else {
LAB_002d1a7c:
          if (puVar12 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar11 == (int)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar12 < (ulong *)((long)param_3 + -1)) {
// thanks for reading - discord.gg/sdkhDjTex
            if ((short)*puVar11 == (short)*puVar12) {
              puVar11 = (ulong *)((long)puVar11 + 2);
              puVar12 = (ulong *)((long)puVar12 + 2);
            }
          }
          if (puVar12 < param_3) {
            if ((char)*puVar11 == (char)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 1);
            }
          }
          uVar19 = (long)puVar12 - (long)param_2;
        }
        if (uVar13 < uVar19) {
          *param_4 = (ulong)((uVar18 + 3) - uVar22);
          uVar13 = uVar19;
          if ((ulong *)((long)param_2 + uVar19) == param_3) break;
        }
      }
      uVar19 = uVar13;
      lVar24 = lVar24 + 1;
      uVar13 = uVar19;
    } while (lVar24 != lVar23);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar19;
  }
  auVar54 = ___stack_chk_fail(uVar19);
  puVar11 = auVar54._8_8_;
  lVar17 = auVar54._0_8_;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar24 = *(long *)(lVar17 + 0x70);
  lVar29 = *(long *)(lVar17 + 0x38);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  iVar20 = *(int *)(lVar17 + 0x34);
  lVar23 = *(long *)(lVar17 + 8);
  uVar28 = 1 << (ulong)(*(uint *)(lVar17 + 0x100) & 0x1f);
  uVar19 = (long)puVar11 - lVar23;
  uVar18 = (uint)uVar19;
  uVar22 = uVar18 - uVar28;
  if (uVar18 - *(uint *)(lVar17 + 0x1c) <= uVar28 || *(int *)(lVar17 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar17 + 0x1c);
  }
  uVar28 = *(uint *)(lVar17 + 0x10c);
  if (4 < uVar28) {
    uVar28 = 5;
  }
  uVar13 = *(ulong *)(lVar17 + 0x60);
  if (*(int *)(lVar17 + 300) == 0) {
    lVar25 = lVar17 + 0x40;
    uVar32 = *(uint *)(lVar17 + 0x2c);
    uVar37 = (ulong)uVar32;
    lVar14 = lVar29;
    lVar16 = lVar24;
    if (0x180 < uVar18 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar35 = uVar37 + 0x60;
/* no support for modified copies */
        do {
          uVar36 = (*(long *)(lVar23 + 8 + uVar37) * -0x30e4432340650000 ^ *(ulong *)(lVar17 + 0x60)
                   ) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar33 = uVar36 >> 3 & 0x1fffffe0;
          lVar14 = lVar24 + uVar33 * 4;
          Hint_Prefetch(lVar14,0,0,0);
          Hint_Prefetch(lVar14 + 0x40,0,0,0);
          Hint_Prefetch(lVar29 + uVar33,0,0,0);
          uVar6 = *(uint *)(lVar25 + (uVar37 & 7) * 4);
          *(int *)(lVar25 + (uVar37 & 7) * 4) = (int)uVar36;
          uVar36 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar29 + uVar36);
          uVar32 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar32 = 0;
          }
          lVar14 = (ulong)uVar32 + (ulong)(*pbVar2 - 1 & 0x1f);
          *pbVar2 = (byte)lVar14;
          pbVar2[lVar14] = (byte)uVar6;
          *(int *)(lVar24 + uVar36 * 4 + lVar14 * 4) = (int)uVar37;
          uVar37 = uVar37 + 1;
        } while (uVar35 != uVar37);
        lVar16 = *(long *)(lVar17 + 0x70);
        lVar14 = *(long *)(lVar17 + 0x38);
      }
      uVar32 = uVar18 - 0x20;
      uVar37 = (ulong)uVar32;
      iVar31 = (int)((long)puVar11 + 1U) - (int)(lVar23 + uVar37);
// unlicensed copy if this notice is missing
      iVar34 = 8;
      if (iVar31 + 1U < 8) {
        iVar34 = iVar31 + 1;
      }
      iVar31 = 0;
      if (lVar23 + uVar37 <= (long)puVar11 + 1U) {
        iVar31 = iVar34;
      }
      if (uVar32 < iVar31 + uVar32) {
        iVar34 = *(int *)(lVar17 + 0x34);
        uVar35 = *(ulong *)(lVar17 + 0x60);
        do {
          uVar36 = (*(long *)(lVar23 + uVar37) * -0x30e4432340650000 ^ uVar35) >>
                   ((ulong)(0x38 - iVar34) & 0x3f);
          uVar33 = uVar36 >> 3 & 0x1fffffe0;
          lVar30 = lVar16 + uVar33 * 4;
          Hint_Prefetch(lVar30,0,0,0);
          Hint_Prefetch(lVar30 + 0x40,0,0,0);
          Hint_Prefetch(lVar14 + uVar33,0,0,0);
          *(int *)(lVar25 + (uVar37 & 7) * 4) = (int)uVar36;
          uVar37 = uVar37 + 1;
          iVar31 = iVar31 + -1;
        } while (iVar31 != 0);
      }
    }
    if (uVar32 < uVar18) {
      lVar30 = *(long *)(lVar17 + 8);
      iVar34 = *(int *)(lVar17 + 0x34);
      uVar37 = (ulong)uVar32;
      do {
        uVar35 = (*(long *)(lVar30 + 8 + uVar37) * -0x30e4432340650000 ^ *(ulong *)(lVar17 + 0x60))
                 >> ((ulong)(0x38 - iVar34) & 0x3f);
// WM - thanks for reading - discord.gg/sdkhDjTex
        uVar36 = uVar35 >> 3 & 0x1fffffe0;
        lVar3 = lVar16 + uVar36 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        Hint_Prefetch(lVar14 + uVar36,0,0,0);
        uVar6 = *(uint *)(lVar25 + (uVar37 & 7) * 4);
        *(int *)(lVar25 + (uVar37 & 7) * 4) = (int)uVar35;
        uVar35 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
        pbVar2 = (byte *)(lVar14 + uVar35);
        uVar32 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
          uVar32 = 0;
        }
        lVar3 = (ulong)uVar32 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar6;
        *(int *)(lVar16 + uVar35 * 4 + lVar3 * 4) = (int)uVar37;
        uVar37 = uVar37 + 1;
      } while (uVar37 < (uVar19 & 0xffffffff));
    }
    *(uint *)(lVar17 + 0x2c) = uVar18;
    uVar37 = (*(long *)(lVar23 + (uVar19 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar13) >>
             ((ulong)(0x38 - iVar20) & 0x3f);
    uVar13 = uVar37 >> 3 & 0x1fffffe0;
    lVar14 = lVar24 + uVar13 * 4;
    Hint_Prefetch(lVar14,0,0,0);
    Hint_Prefetch(lVar14 + 0x40,0,0,0);
    Hint_Prefetch(lVar29 + uVar13,0,0,0);
    uVar32 = *(uint *)(lVar25 + (uVar19 & 7) * 4);
    *(int *)(lVar25 + (uVar19 & 7) * 4) = (int)uVar37;
/*  watermarked copy - do not remove  */
  }
  else {
    uVar32 = (uint)((*puVar11 * -0x30e4432340650000 ^ uVar13) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(lVar17 + 0x2c) = uVar18;
  }
  *(uint *)(lVar17 + 0x68) = *(int *)(lVar17 + 0x68) + uVar32;
  uVar19 = (ulong)(uVar32 >> 3) & 0x1fffffe0;
  lVar24 = lVar24 + uVar19 * 4;
  pbVar2 = (byte *)(lVar29 + uVar19);
  bVar27 = *pbVar2;
  bVar26 = (byte)uVar32;
  uVar46 = CONCAT11(-(bVar26 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar26 == (byte)*(undefined2 *)pbVar2));
  uVar47 = CONCAT13(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar46));
  uVar48 = CONCAT15(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar47));
  uVar49 = CONCAT11(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar50 = CONCAT13(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar49));
  uVar51 = CONCAT15(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar50));
  uVar39 = CONCAT11(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar40 = CONCAT13(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar39));
  uVar41 = CONCAT15(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar40));
  uVar42 = CONCAT17(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar41));
  auVar43._0_10_ =
       CONCAT19(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar42));
  auVar43[10] = -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x16));
// WM - stripping the watermark breaks the license
  auVar43[0xb] = -(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar44[0xc] = -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar44._0_12_ = auVar43;
  auVar44[0xd] = -(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar54[0xe] = -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar54._0_14_ = auVar44;
  auVar54[0xf] = -(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar19 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar26 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar26 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar51)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar51 >> 0x26),
                                      CONCAT15((char)((uint)uVar50 >> 0x16),
                                               CONCAT14((char)(uVar49 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar26 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar26 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar48)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar48 >> 0x26),
                                                           CONCAT11((char)((uint)uVar47 >> 0x16),
                                                                    (char)(uVar46 >> 6)))))))),
                    CONCAT17((char)(auVar54._14_2_ >> 6),
                             CONCAT16((char)(auVar44._12_2_ >> 6),
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                                      CONCAT15((char)(auVar43._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar43._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar42 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar41 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar40 >> 0x16),(char)(uVar39 >> 6)))))))),4,1);
  uVar19 = (uVar19 >> ((ulong)bVar27 & 0x1f) * 2 | uVar19 << ((ulong)bVar27 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar19 != 0) {
    lVar29 = 0;
    iVar20 = 1 << (ulong)(uVar28 & 0x1f);
    do {
      uVar13 = (uVar19 << 1 & 0xcccccccccccccccc) >> 2 | (uVar19 << 1 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
/* WM - watermarked copy - do not remove */
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar28 = (int)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + (bVar27 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar28 != 0) {
        uVar28 = *(uint *)(lVar24 + (ulong)uVar28 * 4);
        if (uVar28 < uVar22) goto LAB_002d1f00;
        Hint_Prefetch(lVar23 + (ulong)uVar28,0,0,0);
        auStack_2d8[lVar29] = uVar28;
        lVar29 = lVar29 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      if ((uVar19 == 0) || (iVar20 == 0)) goto LAB_002d1f00;
    } while( true );
  }
  lVar29 = 0;
LAB_002d1f00:
  uVar22 = 0x1f;
  if ((bVar27 & 0x1f) != 1) {
    uVar22 = 0;
  }
  lVar25 = (ulong)uVar22 + (ulong)(bVar27 - 1 & 0x1f);
  *pbVar2 = (byte)lVar25;
  pbVar2[lVar25] = bVar26;
  iVar20 = *(int *)(lVar17 + 0x2c);
  *(int *)(lVar17 + 0x2c) = iVar20 + 1;
  *(int *)(lVar24 + lVar25 * 4) = iVar20;
  if (lVar29 == 0) {
    uVar19 = 3;
  }
  else {
    lVar24 = 0;
    uVar13 = 3;
    do {
      uVar22 = auStack_2d8[lVar24];
/*  unlicensed copy if this notice is missing  */
      puVar12 = (ulong *)(lVar23 + (ulong)uVar22);
      if (*(int *)((long)puVar12 + (uVar13 - 3)) == *(int *)((long)puVar11 + (uVar13 - 3))) {
        puVar15 = puVar11;
        if (puVar11 < (ulong *)((long)param_3 + -7)) {
          if (*puVar12 == *puVar11) {
            lVar17 = 0;
            puVar12 = (ulong *)(lVar23 + 8 + (ulong)uVar22);
            do {
              puVar15 = puVar15 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar15) goto LAB_002d1ff0;
              uVar19 = *puVar12;
              lVar17 = lVar17 + 8;
              puVar12 = puVar12 + 1;
            } while (uVar19 == *puVar15);
            uVar19 = *puVar15 ^ uVar19;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = lVar17 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
          }
          else {
            uVar19 = *puVar11 ^ *puVar12;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
          }
        }
        else {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
LAB_002d1ff0:
          if (puVar15 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar12 == (int)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 4);
              puVar12 = (ulong *)((long)puVar12 + 4);
            }
          }
          if (puVar15 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar12 == (short)*puVar15) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar15 = (ulong *)((long)puVar15 + 2);
            }
          }
          if (puVar15 < param_3) {
            if ((char)*puVar12 == (char)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
          }
          uVar19 = (long)puVar15 - (long)puVar11;
        }
        if (uVar13 < uVar19) {
          *param_4 = (ulong)((uVar18 + 3) - uVar22);
          uVar13 = uVar19;
          if ((ulong *)((long)puVar11 + uVar19) == param_3) break;
        }
      }
      uVar19 = uVar13;
      lVar24 = lVar24 + 1;
      uVar13 = uVar19;
    } while (lVar24 != lVar29);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_1d8) {
    return uVar19;
  }
/* wm:no support for modified copies */
  auVar54 = ___stack_chk_fail(uVar19);
  puVar11 = auVar54._8_8_;
  lVar17 = auVar54._0_8_;
  lStack_348 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar24 = *(long *)(lVar17 + 0x70);
  lVar29 = *(long *)(lVar17 + 0x38);
  iVar20 = *(int *)(lVar17 + 0x34);
  lVar23 = *(long *)(lVar17 + 8);
  uVar28 = 1 << (ulong)(*(uint *)(lVar17 + 0x100) & 0x1f);
  uVar19 = (long)puVar11 - lVar23;
  uVar18 = (uint)uVar19;
  uVar22 = uVar18 - uVar28;
  if (uVar18 - *(uint *)(lVar17 + 0x1c) <= uVar28 || *(int *)(lVar17 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar17 + 0x1c);
  }
  uVar28 = *(uint *)(lVar17 + 0x10c);
  if (5 < uVar28) {
    uVar28 = 6;
  }
  uVar13 = *(ulong *)(lVar17 + 0x60);
  if (*(int *)(lVar17 + 300) == 0) {
    lVar25 = lVar17 + 0x40;
    uVar32 = *(uint *)(lVar17 + 0x2c);
    uVar37 = (ulong)uVar32;
    lVar14 = lVar29;
    lVar16 = lVar24;
    if (0x180 < uVar18 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar35 = uVar37 + 0x60;
        do {
          uVar36 = (*(long *)(lVar23 + 8 + uVar37) * -0x30e4432340650000 ^ *(ulong *)(lVar17 + 0x60)
                   ) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar33 = uVar36 >> 2 & 0x3fffffc0;
// if you paid for this, you were scammed
          lVar14 = lVar24 + uVar33 * 4;
          Hint_Prefetch(lVar14,0,0,0);
          Hint_Prefetch(lVar14 + 0x40,0,0,0);
          lVar14 = lVar29 + uVar33;
          Hint_Prefetch(lVar14,0,0,0);
          Hint_Prefetch(lVar14 + 0x20,0,0,0);
          uVar6 = *(uint *)(lVar25 + (uVar37 & 7) * 4);
          *(int *)(lVar25 + (uVar37 & 7) * 4) = (int)uVar36;
          uVar36 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar29 + uVar36);
          uVar32 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar32 = 0;
          }
          lVar14 = (ulong)uVar32 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar14;
          pbVar2[lVar14] = (byte)uVar6;
          *(int *)(lVar24 + uVar36 * 4 + lVar14 * 4) = (int)uVar37;
          uVar37 = uVar37 + 1;
        } while (uVar35 != uVar37);
        lVar16 = *(long *)(lVar17 + 0x70);
        lVar14 = *(long *)(lVar17 + 0x38);
      }
      uVar32 = uVar18 - 0x20;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      uVar37 = (ulong)uVar32;
      iVar31 = (int)((long)puVar11 + 1U) - (int)(lVar23 + uVar37);
      iVar34 = 8;
      if (iVar31 + 1U < 8) {
        iVar34 = iVar31 + 1;
      }
      iVar31 = 0;
      if (lVar23 + uVar37 <= (long)puVar11 + 1U) {
        iVar31 = iVar34;
      }
      if (uVar32 < iVar31 + uVar32) {
        iVar34 = *(int *)(lVar17 + 0x34);
        uVar35 = *(ulong *)(lVar17 + 0x60);
        do {
          uVar36 = (*(long *)(lVar23 + uVar37) * -0x30e4432340650000 ^ uVar35) >>
                   ((ulong)(0x38 - iVar34) & 0x3f);
          uVar33 = uVar36 >> 2 & 0x3fffffc0;
          lVar30 = lVar16 + uVar33 * 4;
          Hint_Prefetch(lVar30,0,0,0);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          Hint_Prefetch(lVar30 + 0x40,0,0,0);
          lVar30 = lVar14 + uVar33;
          Hint_Prefetch(lVar30,0,0,0);
          Hint_Prefetch(lVar30 + 0x20,0,0,0);
          *(int *)(lVar25 + (uVar37 & 7) * 4) = (int)uVar36;
          uVar37 = uVar37 + 1;
          iVar31 = iVar31 + -1;
        } while (iVar31 != 0);
      }
    }
    if (uVar32 < uVar18) {
      lVar30 = *(long *)(lVar17 + 8);
      iVar34 = *(int *)(lVar17 + 0x34);
      uVar37 = (ulong)uVar32;
      do {
        uVar35 = (*(long *)(lVar30 + 8 + uVar37) * -0x30e4432340650000 ^ *(ulong *)(lVar17 + 0x60))
                 >> ((ulong)(0x38 - iVar34) & 0x3f);
        uVar36 = uVar35 >> 2 & 0x3fffffc0;
        lVar3 = lVar16 + uVar36 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar14 + uVar36;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar6 = *(uint *)(lVar25 + (uVar37 & 7) * 4);
        *(int *)(lVar25 + (uVar37 & 7) * 4) = (int)uVar35;
        uVar35 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
/* donate: donate/README.md */
        pbVar2 = (byte *)(lVar14 + uVar35);
        uVar32 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar32 = 0;
        }
        lVar3 = (ulong)uVar32 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar6;
        *(int *)(lVar16 + uVar35 * 4 + lVar3 * 4) = (int)uVar37;
        uVar37 = uVar37 + 1;
      } while (uVar37 < (uVar19 & 0xffffffff));
    }
    *(uint *)(lVar17 + 0x2c) = uVar18;
    uVar37 = (*(long *)(lVar23 + (uVar19 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar13) >>
             ((ulong)(0x38 - iVar20) & 0x3f);
    uVar13 = uVar37 >> 2 & 0x3fffffc0;
    lVar14 = lVar24 + uVar13 * 4;
    Hint_Prefetch(lVar14,0,0,0);
    Hint_Prefetch(lVar14 + 0x40,0,0,0);
    lVar14 = lVar29 + uVar13;
    Hint_Prefetch(lVar14,0,0,0);
    Hint_Prefetch(lVar14 + 0x20,0,0,0);
    uVar32 = *(uint *)(lVar25 + (uVar19 & 7) * 4);
    *(int *)(lVar25 + (uVar19 & 7) * 4) = (int)uVar37;
  }
  else {
    uVar32 = (uint)((*puVar11 * -0x30e4432340650000 ^ uVar13) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(lVar17 + 0x2c) = uVar18;
  }
  *(uint *)(lVar17 + 0x68) = *(int *)(lVar17 + 0x68) + uVar32;
  uVar19 = (ulong)(uVar32 >> 2) & 0x3fffffc0;
  lVar24 = lVar24 + uVar19 * 4;
  pbVar2 = (byte *)(lVar29 + uVar19);
  bVar27 = (byte)uVar32;
  auVar52[0] = -(pbVar2[1] == bVar27);
/*  proprietary - see LICENSE - do not sell  */
  auVar52[1] = -(pbVar2[5] == bVar27);
  auVar52[2] = -(pbVar2[9] == bVar27);
  auVar52[3] = -(pbVar2[0xd] == bVar27);
  auVar52[4] = -(pbVar2[0x11] == bVar27);
  auVar52[5] = -(pbVar2[0x15] == bVar27);
  auVar52[6] = -(pbVar2[0x19] == bVar27);
  auVar52[7] = -(pbVar2[0x1d] == bVar27);
  auVar52[8] = -(pbVar2[0x21] == bVar27);
  auVar52[9] = -(pbVar2[0x25] == bVar27);
  auVar52[10] = -(pbVar2[0x29] == bVar27);
  auVar52[0xb] = -(pbVar2[0x2d] == bVar27);
  auVar52[0xc] = -(pbVar2[0x31] == bVar27);
  auVar52[0xd] = -(pbVar2[0x35] == bVar27);
  auVar52[0xe] = -(pbVar2[0x39] == bVar27);
  auVar52[0xf] = -(pbVar2[0x3d] == bVar27);
  auVar45[0] = -(pbVar2[3] == bVar27);
  auVar45[1] = -(pbVar2[7] == bVar27);
  auVar45[2] = -(pbVar2[0xb] == bVar27);
  auVar45[3] = -(pbVar2[0xf] == bVar27);
  auVar45[4] = -(pbVar2[0x13] == bVar27);
  auVar45[5] = -(pbVar2[0x17] == bVar27);
  auVar45[6] = -(pbVar2[0x1b] == bVar27);
  auVar45[7] = -(pbVar2[0x1f] == bVar27);
  auVar45[8] = -(pbVar2[0x23] == bVar27);
/* WM - donate: donate/README.md */
  auVar45[9] = -(pbVar2[0x27] == bVar27);
  auVar45[10] = -(pbVar2[0x2b] == bVar27);
  auVar45[0xb] = -(pbVar2[0x2f] == bVar27);
  auVar45[0xc] = -(pbVar2[0x33] == bVar27);
  auVar45[0xd] = -(pbVar2[0x37] == bVar27);
  auVar45[0xe] = -(pbVar2[0x3b] == bVar27);
  auVar45[0xf] = -(pbVar2[0x3f] == bVar27);
  auVar53[1] = -(pbVar2[4] == bVar27);
  auVar53[0] = -(*pbVar2 == bVar27);
  auVar53[2] = -(pbVar2[8] == bVar27);
  auVar53[3] = -(pbVar2[0xc] == bVar27);
  auVar53[4] = -(pbVar2[0x10] == bVar27);
  auVar53[5] = -(pbVar2[0x14] == bVar27);
  auVar53[6] = -(pbVar2[0x18] == bVar27);
  auVar53[7] = -(pbVar2[0x1c] == bVar27);
  auVar53[8] = -(pbVar2[0x20] == bVar27);
  auVar53[9] = -(pbVar2[0x24] == bVar27);
  auVar53[10] = -(pbVar2[0x28] == bVar27);
  auVar53[0xb] = -(pbVar2[0x2c] == bVar27);
/*  do not claim this as your own  */
  auVar53[0xc] = -(pbVar2[0x30] == bVar27);
  auVar53[0xd] = -(pbVar2[0x34] == bVar27);
  auVar53[0xe] = -(pbVar2[0x38] == bVar27);
  auVar53[0xf] = -(pbVar2[0x3c] == bVar27);
  auVar53 = NEON_sri(auVar52,auVar53,1,1);
  auVar10[1] = -(pbVar2[6] == bVar27);
  auVar10[0] = -(pbVar2[2] == bVar27);
  auVar10[2] = -(pbVar2[10] == bVar27);
  auVar10[3] = -(pbVar2[0xe] == bVar27);
  auVar10[4] = -(pbVar2[0x12] == bVar27);
  auVar10[5] = -(pbVar2[0x16] == bVar27);
  auVar10[6] = -(pbVar2[0x1a] == bVar27);
  auVar10[7] = -(pbVar2[0x1e] == bVar27);
  auVar10[8] = -(pbVar2[0x22] == bVar27);
  auVar10[9] = -(pbVar2[0x26] == bVar27);
  auVar10[10] = -(pbVar2[0x2a] == bVar27);
/* thanks for reading - discord.gg/sdkhDjTex */
  auVar10[0xb] = -(pbVar2[0x2e] == bVar27);
  auVar10[0xc] = -(pbVar2[0x32] == bVar27);
  auVar10[0xd] = -(pbVar2[0x36] == bVar27);
  auVar10[0xe] = -(pbVar2[0x3a] == bVar27);
  auVar10[0xf] = -(pbVar2[0x3e] == bVar27);
  auVar54 = NEON_sri(auVar45,auVar10,1,1);
  auVar54 = NEON_sri(auVar54,auVar53,2,1);
  auVar54 = NEON_sri(auVar54,auVar54,4,1);
  uVar19 = CONCAT17((char)(auVar54._14_2_ >> 4),
                    CONCAT16((char)(auVar54._12_2_ >> 4),
                             CONCAT15((char)(auVar54._10_2_ >> 4),
                                      CONCAT14((char)(auVar54._8_2_ >> 4),
                                               CONCAT13((char)(auVar54._6_2_ >> 4),
                                                        CONCAT12((char)(auVar54._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar54._2_2_ >> 4)
                                                                          ,(char)(auVar54._0_2_ >> 4
                                                                                 ))))))));
  lVar29 = 0;
  uVar32 = (uint)*pbVar2;
  if (uVar19 != 0) {
    iVar20 = 1 << (ulong)(uVar28 & 0x1f);
    uVar13 = (ulong)*pbVar2 & 0x3f;
    uVar19 = uVar19 >> uVar13 | uVar19 << 0x40 - uVar13;
    do {
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
/*  origin: github.com/pengussy  */
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar28 = (int)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + uVar32 & 0x3f;
      if (uVar28 != 0) {
        uVar28 = *(uint *)(lVar24 + (ulong)uVar28 * 4);
        if (uVar28 < uVar22) break;
        Hint_Prefetch(lVar23 + (ulong)uVar28,0,0,0);
        auStack_448[lVar29] = uVar28;
        lVar29 = lVar29 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      if ((uVar19 == 0) || (iVar20 == 0)) break;
    } while( true );
  }
  uVar22 = 0x3f;
  if ((uVar32 & 0x3f) != 1) {
    uVar22 = 0;
  }
  lVar25 = (ulong)uVar22 + (ulong)(uVar32 - 1 & 0x3f);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  *pbVar2 = (byte)lVar25;
  pbVar2[lVar25] = bVar27;
  iVar20 = *(int *)(lVar17 + 0x2c);
  *(int *)(lVar17 + 0x2c) = iVar20 + 1;
  *(int *)(lVar24 + lVar25 * 4) = iVar20;
  if (lVar29 == 0) {
    uVar19 = 3;
  }
  else {
    lVar24 = 0;
    uVar13 = 3;
    do {
      uVar22 = auStack_448[lVar24];
      puVar12 = (ulong *)(lVar23 + (ulong)uVar22);
      if (*(int *)((long)puVar12 + (uVar13 - 3)) == *(int *)((long)puVar11 + (uVar13 - 3))) {
        puVar15 = puVar11;
        if (puVar11 < (ulong *)((long)param_3 + -7)) {
          if (*puVar12 == *puVar11) {
            lVar17 = 0;
            puVar12 = (ulong *)(lVar23 + 8 + (ulong)uVar22);
            do {
              puVar15 = puVar15 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar15) goto LAB_002d2578;
              uVar19 = *puVar12;
              lVar17 = lVar17 + 8;
              puVar12 = puVar12 + 1;
            } while (uVar19 == *puVar15);
            uVar19 = *puVar15 ^ uVar19;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = lVar17 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
          }
          else {
            uVar19 = *puVar11 ^ *puVar12;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
/* WM - keep the notice, keep the source honest */
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
          }
        }
        else {
LAB_002d2578:
          if (puVar15 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar12 == (int)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 4);
              puVar12 = (ulong *)((long)puVar12 + 4);
            }
          }
          if (puVar15 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar12 == (short)*puVar15) {
              puVar12 = (ulong *)((long)puVar12 + 2);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              puVar15 = (ulong *)((long)puVar15 + 2);
            }
          }
          if (puVar15 < param_3) {
            if ((char)*puVar12 == (char)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
          }
          uVar19 = (long)puVar15 - (long)puVar11;
        }
        if (uVar13 < uVar19) {
          *param_4 = (ulong)((uVar18 + 3) - uVar22);
          uVar13 = uVar19;
          if ((ulong *)((long)puVar11 + uVar19) == param_3) break;
        }
      }
      uVar19 = uVar13;
      lVar24 = lVar24 + 1;
      uVar13 = uVar19;
// WM - keep the notice, keep the source honest
    } while (lVar24 != lVar29);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_348) {
    return uVar19;
  }
  auVar54 = ___stack_chk_fail(uVar19);
  puVar11 = auVar54._8_8_;
  lVar23 = auVar54._0_8_;
  lVar29 = *(long *)(lVar23 + 0x80);
  uVar32 = 1 << (ulong)(*(uint *)(lVar23 + 0x104) & 0x1f);
  lVar24 = *(long *)(lVar23 + 8);
  lVar17 = *(long *)(lVar23 + 0x10);
  uVar6 = 1 << (ulong)(*(uint *)(lVar23 + 0x100) & 0x1f);
  uVar28 = *(uint *)(lVar23 + 0x18);
  uVar21 = (uint)((long)puVar11 - lVar24);
  uVar18 = *(uint *)(lVar23 + 0x2c);
  uVar19 = (ulong)uVar18;
  uVar22 = uVar21 - uVar6;
  if (uVar21 - *(uint *)(lVar23 + 0x1c) <= uVar6 || *(int *)(lVar23 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar23 + 0x1c);
  }
  uVar6 = 0;
  if (uVar32 <= uVar21) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    uVar6 = uVar21 - uVar32;
  }
  uVar5 = *(uint *)(lVar23 + 0x10c);
  lVar25 = *(long *)(lVar23 + 0x70);
  uVar8 = ~(-1 << (ulong)(*(uint *)(lVar23 + 0x104) & 0x1f));
  uVar9 = 0x20 - *(int *)(lVar23 + 0x108);
  if (*(int *)(lVar23 + 300) == 0) {
    if (uVar18 < uVar21) {
      do {
        uVar18 = (uint)(*(int *)(lVar24 + uVar19) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
        *(undefined4 *)(lVar29 + (ulong)((uint)uVar19 & uVar8) * 4) =
             *(undefined4 *)(lVar25 + (ulong)uVar18 * 4);
        *(uint *)(lVar25 + (ulong)uVar18 * 4) = (uint)uVar19;
        uVar19 = uVar19 + 1;
      } while (uVar19 < ((long)puVar11 - lVar24 & 0xffffffffU));
    }
  }
  else if (uVar18 < uVar21) {
    uVar7 = (uint)(*(int *)(lVar24 + uVar19) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
// WM - if you paid for this, you were scammed
    *(undefined4 *)(lVar29 + (ulong)(uVar18 & uVar8) * 4) =
         *(undefined4 *)(lVar25 + (ulong)uVar7 * 4);
    *(uint *)(lVar25 + (ulong)uVar7 * 4) = uVar18;
  }
  *(uint *)(lVar23 + 0x2c) = uVar21;
  uVar19 = *puVar11;
  uVar18 = *(uint *)(lVar25 + (ulong)((uint)((int)uVar19 * -0x61c8864f) >> (ulong)(uVar9 & 0x1f)) *
                              4);
  if (uVar18 < uVar22) {
    uVar13 = 3;
  }
  else {
    iVar20 = 1 << (ulong)(uVar5 & 0x1f);
    uVar13 = 3;
    do {
      uVar37 = (ulong)uVar18;
      if (uVar18 < uVar28) {
        piVar4 = (int *)(lVar17 + uVar37);
        if (*piVar4 == (int)uVar19) {
          lVar23 = func_0x002ad924((int *)((long)puVar11 + 4),piVar4 + 1,param_3,
                                   lVar17 + (ulong)uVar28,lVar24 + (ulong)uVar28);
          uVar37 = lVar23 + 4;
          goto joined_r0x002d2a54;
        }
      }
      else {
        puVar12 = (ulong *)(lVar24 + uVar37);
        if (*(int *)((long)puVar12 + (uVar13 - 3)) == *(int *)((long)puVar11 + (uVar13 - 3))) {
          puVar15 = puVar11;
/* if you paid for this, you were scammed - github.com/pengussy */
          if (puVar11 < (ulong *)((long)param_3 + -7)) {
            if (*puVar12 == *puVar11) {
              lVar23 = 0;
              puVar12 = (ulong *)(lVar24 + 8 + uVar37);
              do {
                puVar15 = puVar15 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar15) goto code_r0x002d29fc;
                uVar37 = *puVar12;
                lVar23 = lVar23 + 8;
                puVar12 = puVar12 + 1;
              } while (uVar37 == *puVar15);
              uVar37 = *puVar15 ^ uVar37;
              uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
              uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
              uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
              uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
              uVar37 = lVar23 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
            }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
            else {
              uVar37 = *puVar11 ^ *puVar12;
              uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
              uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
              uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
              uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
              uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
            }
          }
          else {
code_r0x002d29fc:
            if (puVar15 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar12 == (int)*puVar15) {
                puVar12 = (ulong *)((long)puVar12 + 4);
                puVar15 = (ulong *)((long)puVar15 + 4);
              }
            }
            if (puVar15 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar12 == (short)*puVar15) {
                puVar12 = (ulong *)((long)puVar12 + 2);
                puVar15 = (ulong *)((long)puVar15 + 2);
              }
            }
            if (puVar15 < param_3) {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
              if ((char)*puVar12 == (char)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 1);
              }
            }
            uVar37 = (long)puVar15 - (long)puVar11;
          }
joined_r0x002d2a54:
          if (uVar13 < uVar37) {
            *param_4 = (ulong)((uVar21 + 3) - uVar18);
            uVar13 = uVar37;
            if ((ulong *)((long)puVar11 + uVar37) == param_3) {
              return uVar37;
            }
          }
        }
      }
      if ((uVar18 <= uVar6) || (iVar20 = iVar20 + -1, iVar20 == 0)) {
        return uVar13;
      }
      uVar18 = *(uint *)(lVar29 + (ulong)(uVar18 & uVar32 - 1) * 4);
    } while (uVar22 <= uVar18);
  }
  return uVar13;
}

