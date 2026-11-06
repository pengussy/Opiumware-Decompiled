/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2d06c4:f5a1f7aed3
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002d06c4(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
/* WM - if you paid for this, you were scammed */
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
  int iVar33;
  uint uVar34;
  ulong uVar35;
  int iVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  byte bVar40;
  ushort uVar41;
  undefined4 uVar42;
  undefined6 uVar43;
  undefined8 uVar44;
  undefined1 auVar45 [12];
  undefined1 auVar47 [14];
  undefined1 auVar49 [16];
  undefined1 auVar46 [12];
  undefined1 auVar48 [14];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ushort uVar52;
  undefined4 uVar53;
  undefined6 uVar54;
  ushort uVar55;
  undefined4 uVar56;
  undefined6 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  undefined1 auVar61 [16];
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
  lVar26 = *(long *)(param_1 + 0x70);
  lVar25 = *(long *)(param_1 + 0x38);
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
  if (3 < uVar30) {
    uVar30 = 4;
  }
  uVar15 = *(ulong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 300) == 0) {
    lVar31 = param_1 + 0x40;
    uVar34 = *(uint *)(param_1 + 0x2c);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar39 = (ulong)uVar34;
    lVar27 = lVar25;
    lVar16 = lVar26;
    if (0x180 < uVar20 - uVar34) {
      if (uVar34 < 0xffffffa0) {
        uVar37 = uVar39 + 0x60;
        do {
          uVar38 = (*(long *)(lVar19 + 8 + uVar39) * -0x30e4432345000000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar35 = uVar38 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar26 + uVar35 * 4,0,0,0);
          Hint_Prefetch(lVar25 + uVar35,0,0,0);
          uVar6 = *(uint *)(lVar31 + (uVar39 & 7) * 4);
          *(int *)(lVar31 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar38 = (ulong)(uVar6 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar25 + uVar38);
          uVar34 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar34 = 0;
          }
          lVar27 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0xf);
          *pbVar2 = (byte)lVar27;
          pbVar2[lVar27] = (byte)uVar6;
// WM - origin: github.com/pengussy
          *(int *)(lVar26 + uVar38 * 4 + lVar27 * 4) = (int)uVar39;
          uVar39 = uVar39 + 1;
        } while (uVar37 != uVar39);
        lVar16 = *(long *)(param_1 + 0x70);
        lVar27 = *(long *)(param_1 + 0x38);
      }
      uVar34 = uVar20 - 0x20;
      uVar39 = (ulong)uVar34;
      iVar33 = (int)((long)param_2 + 1U) - (int)(lVar19 + uVar39);
      iVar36 = 8;
      if (iVar33 + 1U < 8) {
        iVar36 = iVar33 + 1;
      }
      iVar33 = 0;
      if (lVar19 + uVar39 <= (long)param_2 + 1U) {
        iVar33 = iVar36;
      }
      if (uVar34 < iVar33 + uVar34) {
        iVar36 = *(int *)(param_1 + 0x34);
        uVar37 = *(ulong *)(param_1 + 0x60);
        do {
          uVar38 = (*(long *)(lVar19 + uVar39) * -0x30e4432345000000 ^ uVar37) >>
                   ((ulong)(0x38 - iVar36) & 0x3f);
          uVar35 = uVar38 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar16 + uVar35 * 4,0,0,0);
          Hint_Prefetch(lVar27 + uVar35,0,0,0);
          *(int *)(lVar31 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar39 = uVar39 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
/* wm:proprietary - see LICENSE - do not sell */
      }
    }
    if (uVar34 < uVar20) {
      lVar18 = *(long *)(param_1 + 8);
      iVar36 = *(int *)(param_1 + 0x34);
      uVar39 = (ulong)uVar34;
      do {
        uVar37 = (*(long *)(lVar18 + 8 + uVar39) * -0x30e4432345000000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar38 = uVar37 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar16 + uVar38 * 4,0,0,0);
        Hint_Prefetch(lVar27 + uVar38,0,0,0);
        uVar6 = *(uint *)(lVar31 + (uVar39 & 7) * 4);
        *(int *)(lVar31 + (uVar39 & 7) * 4) = (int)uVar37;
        uVar37 = (ulong)(uVar6 >> 4) & 0xffffff0;
        pbVar2 = (byte *)(lVar27 + uVar37);
        uVar34 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar34 = 0;
        }
        lVar32 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar32;
        pbVar2[lVar32] = (byte)uVar6;
        *(int *)(lVar16 + uVar37 * 4 + lVar32 * 4) = (int)uVar39;
        uVar39 = uVar39 + 1;
      } while (uVar39 < (uVar21 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar20;
    uVar39 = (*(long *)(lVar19 + (uVar21 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
// WM - do not claim this as your own
    uVar15 = uVar39 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar26 + uVar15 * 4,0,0,0);
    Hint_Prefetch(lVar25 + uVar15,0,0,0);
    uVar34 = *(uint *)(lVar31 + (uVar21 & 7) * 4);
    *(int *)(lVar31 + (uVar21 & 7) * 4) = (int)uVar39;
  }
  else {
    uVar34 = (uint)((*param_2 * -0x30e4432345000000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar20;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar34;
  uVar21 = (ulong)(uVar34 >> 4) & 0xffffff0;
  lVar26 = lVar26 + uVar21 * 4;
  pauVar1 = (undefined1 (*) [16])(lVar25 + uVar21);
  bVar29 = (*pauVar1)[0];
  auVar61 = *pauVar1;
  bVar28 = (byte)uVar34;
  bVar40 = auVar61[0];
  uVar41 = CONCAT11(-(auVar61[9] == bVar28),-(auVar61[8] == bVar28));
  uVar42 = CONCAT13(-(auVar61[0xb] == bVar28),CONCAT12(-(auVar61[10] == bVar28),uVar41));
  uVar43 = CONCAT15(-(auVar61[0xd] == bVar28),CONCAT14(-(auVar61[0xc] == bVar28),uVar42));
  uVar21 = CONCAT17((char)(CONCAT17(-(auVar61[0xf] == bVar28),
                                    CONCAT16(-(auVar61[0xe] == bVar28),uVar43)) >> 0x34),
                    CONCAT16((char)((uint6)uVar43 >> 0x24),
                             CONCAT15((char)((uint)uVar42 >> 0x14),
                                      CONCAT14((char)(uVar41 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar61[7] == bVar28),
                                                                        -(auVar61[6] == bVar28)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar61[
                                                  5] == bVar28),-(auVar61[4] == bVar28)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar61[3] == bVar28),
                                                                           -(auVar61[2] == bVar28))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar61[1] == bVar28),
                                                                           -(bVar40 == bVar28)) >> 4
/* if you paid for this, you were scammed - github.com/pengussy */
                                                                 ))))))));
  uVar15 = (ulong)bVar29 & 0xf;
  uVar21 = (uVar21 >> uVar15 * 4 | uVar21 << uVar15 * -4 + 0x40) & 0x8888888888888888;
  if (uVar21 != 0) {
    lVar25 = 0;
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    do {
      uVar15 = (uVar21 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + (bVar29 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar26 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) goto LAB_002d0914;
        Hint_Prefetch(lVar19 + (ulong)uVar30,0,0,0);
        auStack_168[lVar25] = uVar30;
        lVar25 = lVar25 + 1;
        iVar22 = iVar22 + -1;
/* WM - more drops soon - github.com/pengussy */
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) goto LAB_002d0914;
    } while( true );
  }
  lVar25 = 0;
LAB_002d0914:
  uVar24 = 0xf;
  if ((bVar40 & 0xf) != 1) {
    uVar24 = 0;
  }
  lVar31 = (ulong)uVar24 + (ulong)(bVar40 - 1 & 0xf);
  (*pauVar1)[0] = (char)lVar31;
  (*pauVar1)[lVar31] = bVar28;
  iVar22 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar22 + 1;
  *(int *)(lVar26 + lVar31 * 4) = iVar22;
  if (lVar25 == 0) {
    uVar21 = 3;
  }
  else {
    lVar26 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_168[lVar26];
      puVar13 = (ulong *)(lVar19 + (ulong)uVar24);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      if (*(int *)((long)puVar13 + (uVar15 - 3)) == *(int *)((long)param_2 + (uVar15 - 3))) {
        puVar14 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar13 == *param_2) {
            lVar31 = 0;
            puVar13 = (ulong *)(lVar19 + 8 + (ulong)uVar24);
            do {
              puVar14 = puVar14 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar14) goto LAB_002d0a04;
              uVar21 = *puVar13;
              lVar31 = lVar31 + 8;
              puVar13 = puVar13 + 1;
            } while (uVar21 == *puVar14);
            uVar21 = *puVar14 ^ uVar21;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
/* wm:keep the notice, keep the source honest */
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
        }
        else {
LAB_002d0a04:
          if (puVar14 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar13 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)param_3 + -1)) {
/* thanks for reading - discord.gg/sdkhDjTex */
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
/* WM - keep the notice, keep the source honest */
      lVar26 = lVar26 + 1;
      uVar15 = uVar21;
    } while (lVar26 != lVar25);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar21;
  }
  auVar61 = ___stack_chk_fail(uVar21);
  puVar13 = auVar61._8_8_;
  lVar19 = auVar61._0_8_;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = *(long *)(lVar19 + 0x70);
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
    lVar27 = lVar19 + 0x40;
    uVar34 = *(uint *)(lVar19 + 0x2c);
    uVar39 = (ulong)uVar34;
    lVar16 = lVar31;
    lVar18 = lVar26;
    if (0x180 < uVar20 - uVar34) {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (uVar34 < 0xffffffa0) {
        uVar37 = uVar39 + 0x60;
        do {
          uVar38 = (*(long *)(lVar25 + 8 + uVar39) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar35 = uVar38 >> 3 & 0x1fffffe0;
          lVar16 = lVar26 + uVar35 * 4;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x40,0,0,0);
          Hint_Prefetch(lVar31 + uVar35,0,0,0);
          uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar38 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar31 + uVar38);
          uVar34 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar34 = 0;
          }
          lVar16 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0x1f);
          *pbVar2 = (byte)lVar16;
          pbVar2[lVar16] = (byte)uVar6;
          *(int *)(lVar26 + uVar38 * 4 + lVar16 * 4) = (int)uVar39;
          uVar39 = uVar39 + 1;
        } while (uVar37 != uVar39);
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar34 = uVar20 - 0x20;
      uVar39 = (ulong)uVar34;
      iVar33 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar39);
      iVar36 = 8;
/* stripping the watermark breaks the license - github.com/pengussy */
      if (iVar33 + 1U < 8) {
        iVar36 = iVar33 + 1;
      }
      iVar33 = 0;
      if (lVar25 + uVar39 <= (long)puVar13 + 1U) {
        iVar33 = iVar36;
      }
      if (uVar34 < iVar33 + uVar34) {
        iVar36 = *(int *)(lVar19 + 0x34);
        uVar37 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar38 = (*(long *)(lVar25 + uVar39) * -0x30e4432345000000 ^ uVar37) >>
                   ((ulong)(0x38 - iVar36) & 0x3f);
          uVar35 = uVar38 >> 3 & 0x1fffffe0;
          lVar32 = lVar18 + uVar35 * 4;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x40,0,0,0);
          Hint_Prefetch(lVar16 + uVar35,0,0,0);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar39 = uVar39 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
      }
    }
    if (uVar34 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar36 = *(int *)(lVar19 + 0x34);
      uVar39 = (ulong)uVar34;
      do {
        uVar37 = (*(long *)(lVar32 + 8 + uVar39) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar38 = uVar37 >> 3 & 0x1fffffe0;
// WM - found on a paste site? it was re-uploaded illegally
        lVar3 = lVar18 + uVar38 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        Hint_Prefetch(lVar16 + uVar38,0,0,0);
        uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
        *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar37;
        uVar37 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
        pbVar2 = (byte *)(lVar16 + uVar37);
        uVar34 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
          uVar34 = 0;
        }
        lVar3 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar6;
        *(int *)(lVar18 + uVar37 * 4 + lVar3 * 4) = (int)uVar39;
        uVar39 = uVar39 + 1;
      } while (uVar39 < (uVar21 & 0xffffffff));
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar39 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar39 >> 3 & 0x1fffffe0;
    lVar16 = lVar26 + uVar15 * 4;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x40,0,0,0);
    Hint_Prefetch(lVar31 + uVar15,0,0,0);
    uVar34 = *(uint *)(lVar27 + (uVar21 & 7) * 4);
    *(int *)(lVar27 + (uVar21 & 7) * 4) = (int)uVar39;
  }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  else {
    uVar34 = (uint)((*puVar13 * -0x30e4432345000000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar34;
  uVar21 = (ulong)(uVar34 >> 3) & 0x1fffffe0;
  lVar26 = lVar26 + uVar21 * 4;
  pbVar2 = (byte *)(lVar31 + uVar21);
  bVar29 = *pbVar2;
  bVar28 = (byte)uVar34;
  uVar52 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)pbVar2));
  uVar53 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar52));
  uVar54 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar53));
  uVar55 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar56 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar55));
// WM - watermarked copy - do not remove
  uVar57 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar56));
  uVar41 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar42 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar41));
  uVar43 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar42));
  uVar44 = CONCAT17(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar43));
  auVar45._0_10_ =
       CONCAT19(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar44));
  auVar45[10] = -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar45[0xb] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar47[0xc] = -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar47._0_12_ = auVar45;
  auVar47[0xd] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar61[0xe] = -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar61._0_14_ = auVar47;
  auVar61[0xf] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar21 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar28 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar28 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar57)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar57 >> 0x26),
                                      CONCAT15((char)((uint)uVar56 >> 0x16),
                                               CONCAT14((char)(uVar55 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar28 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar28 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar54)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar54 >> 0x26),
                                                           CONCAT11((char)((uint)uVar53 >> 0x16),
                                                                    (char)(uVar52 >> 6)))))))),
/* WM - proprietary - see LICENSE - do not sell */
                    CONCAT17((char)(auVar61._14_2_ >> 6),
                             CONCAT16((char)(auVar47._12_2_ >> 6),
                                      CONCAT15((char)(auVar45._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar45._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar44 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar43 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar42 >> 0x16),(char)(uVar41 >> 6)))))))),4,1);
  uVar21 = (uVar21 >> ((ulong)bVar29 & 0x1f) * 2 | uVar21 << ((ulong)bVar29 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar21 != 0) {
    lVar31 = 0;
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    do {
      uVar15 = (uVar21 << 1 & 0xcccccccccccccccc) >> 2 | (uVar21 << 1 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + (bVar29 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar26 + (ulong)uVar30 * 4);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        if (uVar30 < uVar24) goto LAB_002d0e88;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_2d8[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) goto LAB_002d0e88;
    } while( true );
  }
  lVar31 = 0;
LAB_002d0e88:
  uVar24 = 0x1f;
  if ((bVar29 & 0x1f) != 1) {
    uVar24 = 0;
  }
  lVar27 = (ulong)uVar24 + (ulong)(bVar29 - 1 & 0x1f);
  *pbVar2 = (byte)lVar27;
  pbVar2[lVar27] = bVar28;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar26 + lVar27 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
  else {
    lVar26 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_2d8[lVar26];
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
            do {
              puVar17 = puVar17 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar17) goto LAB_002d0f78;
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
// unlicensed copy if this notice is missing
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
LAB_002d0f78:
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
// WM - donate: donate/README.md
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
      lVar26 = lVar26 + 1;
      uVar15 = uVar21;
    } while (lVar26 != lVar31);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_1d8) {
    return uVar21;
  }
  auVar61 = ___stack_chk_fail(uVar21);
  puVar13 = auVar61._8_8_;
  lVar19 = auVar61._0_8_;
  lStack_348 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = *(long *)(lVar19 + 0x70);
  lVar31 = *(long *)(lVar19 + 0x38);
  iVar22 = *(int *)(lVar19 + 0x34);
  lVar25 = *(long *)(lVar19 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar19 + 0x100) & 0x1f);
/* keep the notice, keep the source honest - github.com/pengussy */
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
    lVar27 = lVar19 + 0x40;
    uVar34 = *(uint *)(lVar19 + 0x2c);
    uVar39 = (ulong)uVar34;
    lVar16 = lVar31;
    lVar18 = lVar26;
    if (0x180 < uVar20 - uVar34) {
      if (uVar34 < 0xffffffa0) {
/* WM - watermarked copy - do not remove */
        uVar37 = uVar39 + 0x60;
        do {
          uVar38 = (*(long *)(lVar25 + 8 + uVar39) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar35 = uVar38 >> 2 & 0x3fffffc0;
          lVar16 = lVar26 + uVar35 * 4;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x40,0,0,0);
          lVar16 = lVar31 + uVar35;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x20,0,0,0);
          uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar38 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar31 + uVar38);
          uVar34 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar34 = 0;
          }
          lVar16 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar16;
          pbVar2[lVar16] = (byte)uVar6;
          *(int *)(lVar26 + uVar38 * 4 + lVar16 * 4) = (int)uVar39;
          uVar39 = uVar39 + 1;
        } while (uVar37 != uVar39);
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar34 = uVar20 - 0x20;
      uVar39 = (ulong)uVar34;
      iVar33 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar39);
      iVar36 = 8;
      if (iVar33 + 1U < 8) {
        iVar36 = iVar33 + 1;
      }
      iVar33 = 0;
/* wm:more drops soon - github.com/pengussy */
      if (lVar25 + uVar39 <= (long)puVar13 + 1U) {
        iVar33 = iVar36;
      }
      if (uVar34 < iVar33 + uVar34) {
        iVar36 = *(int *)(lVar19 + 0x34);
        uVar37 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar38 = (*(long *)(lVar25 + uVar39) * -0x30e4432345000000 ^ uVar37) >>
                   ((ulong)(0x38 - iVar36) & 0x3f);
          uVar35 = uVar38 >> 2 & 0x3fffffc0;
          lVar32 = lVar18 + uVar35 * 4;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x40,0,0,0);
          lVar32 = lVar16 + uVar35;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x20,0,0,0);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar39 = uVar39 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
      }
    }
    if (uVar34 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar36 = *(int *)(lVar19 + 0x34);
      uVar39 = (ulong)uVar34;
      do {
        uVar37 = (*(long *)(lVar32 + 8 + uVar39) * -0x30e4432345000000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar38 = uVar37 >> 2 & 0x3fffffc0;
        lVar3 = lVar18 + uVar38 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar16 + uVar38;
/* keep the notice, keep the source honest */
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
        *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar37;
        uVar37 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar16 + uVar37);
        uVar34 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar34 = 0;
        }
        lVar3 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar6;
        *(int *)(lVar18 + uVar37 * 4 + lVar3 * 4) = (int)uVar39;
        uVar39 = uVar39 + 1;
      } while (uVar39 < (uVar21 & 0xffffffff));
    }
/*  do not claim this as your own  */
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar39 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar39 >> 2 & 0x3fffffc0;
    lVar16 = lVar26 + uVar15 * 4;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x40,0,0,0);
    lVar16 = lVar31 + uVar15;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x20,0,0,0);
    uVar34 = *(uint *)(lVar27 + (uVar21 & 7) * 4);
    *(int *)(lVar27 + (uVar21 & 7) * 4) = (int)uVar39;
  }
  else {
    uVar34 = (uint)((*puVar13 * -0x30e4432345000000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar34;
  uVar21 = (ulong)(uVar34 >> 2) & 0x3fffffc0;
  lVar26 = lVar26 + uVar21 * 4;
  pbVar2 = (byte *)(lVar31 + uVar21);
  bVar29 = (byte)uVar34;
  auVar58[0] = -(pbVar2[1] == bVar29);
  auVar58[1] = -(pbVar2[5] == bVar29);
  auVar58[2] = -(pbVar2[9] == bVar29);
  auVar58[3] = -(pbVar2[0xd] == bVar29);
  auVar58[4] = -(pbVar2[0x11] == bVar29);
  auVar58[5] = -(pbVar2[0x15] == bVar29);
  auVar58[6] = -(pbVar2[0x19] == bVar29);
  auVar58[7] = -(pbVar2[0x1d] == bVar29);
  auVar58[8] = -(pbVar2[0x21] == bVar29);
  auVar58[9] = -(pbVar2[0x25] == bVar29);
  auVar58[10] = -(pbVar2[0x29] == bVar29);
  auVar58[0xb] = -(pbVar2[0x2d] == bVar29);
  auVar58[0xc] = -(pbVar2[0x31] == bVar29);
  auVar58[0xd] = -(pbVar2[0x35] == bVar29);
  auVar58[0xe] = -(pbVar2[0x39] == bVar29);
  auVar58[0xf] = -(pbVar2[0x3d] == bVar29);
  auVar49[0] = -(pbVar2[3] == bVar29);
  auVar49[1] = -(pbVar2[7] == bVar29);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  auVar49[2] = -(pbVar2[0xb] == bVar29);
  auVar49[3] = -(pbVar2[0xf] == bVar29);
  auVar49[4] = -(pbVar2[0x13] == bVar29);
  auVar49[5] = -(pbVar2[0x17] == bVar29);
  auVar49[6] = -(pbVar2[0x1b] == bVar29);
  auVar49[7] = -(pbVar2[0x1f] == bVar29);
  auVar49[8] = -(pbVar2[0x23] == bVar29);
  auVar49[9] = -(pbVar2[0x27] == bVar29);
  auVar49[10] = -(pbVar2[0x2b] == bVar29);
  auVar49[0xb] = -(pbVar2[0x2f] == bVar29);
  auVar49[0xc] = -(pbVar2[0x33] == bVar29);
  auVar49[0xd] = -(pbVar2[0x37] == bVar29);
  auVar49[0xe] = -(pbVar2[0x3b] == bVar29);
  auVar49[0xf] = -(pbVar2[0x3f] == bVar29);
  auVar59[1] = -(pbVar2[4] == bVar29);
  auVar59[0] = -(*pbVar2 == bVar29);
  auVar59[2] = -(pbVar2[8] == bVar29);
  auVar59[3] = -(pbVar2[0xc] == bVar29);
  auVar59[4] = -(pbVar2[0x10] == bVar29);
  auVar59[5] = -(pbVar2[0x14] == bVar29);
  auVar59[6] = -(pbVar2[0x18] == bVar29);
  auVar59[7] = -(pbVar2[0x1c] == bVar29);
  auVar59[8] = -(pbVar2[0x20] == bVar29);
// WM - stripping the watermark breaks the license
  auVar59[9] = -(pbVar2[0x24] == bVar29);
  auVar59[10] = -(pbVar2[0x28] == bVar29);
  auVar59[0xb] = -(pbVar2[0x2c] == bVar29);
  auVar59[0xc] = -(pbVar2[0x30] == bVar29);
  auVar59[0xd] = -(pbVar2[0x34] == bVar29);
  auVar59[0xe] = -(pbVar2[0x38] == bVar29);
  auVar59[0xf] = -(pbVar2[0x3c] == bVar29);
  auVar59 = NEON_sri(auVar58,auVar59,1,1);
  auVar11[1] = -(pbVar2[6] == bVar29);
  auVar11[0] = -(pbVar2[2] == bVar29);
  auVar11[2] = -(pbVar2[10] == bVar29);
  auVar11[3] = -(pbVar2[0xe] == bVar29);
  auVar11[4] = -(pbVar2[0x12] == bVar29);
  auVar11[5] = -(pbVar2[0x16] == bVar29);
  auVar11[6] = -(pbVar2[0x1a] == bVar29);
  auVar11[7] = -(pbVar2[0x1e] == bVar29);
  auVar11[8] = -(pbVar2[0x22] == bVar29);
  auVar11[9] = -(pbVar2[0x26] == bVar29);
  auVar11[10] = -(pbVar2[0x2a] == bVar29);
  auVar11[0xb] = -(pbVar2[0x2e] == bVar29);
  auVar11[0xc] = -(pbVar2[0x32] == bVar29);
  auVar11[0xd] = -(pbVar2[0x36] == bVar29);
  auVar11[0xe] = -(pbVar2[0x3a] == bVar29);
  auVar11[0xf] = -(pbVar2[0x3e] == bVar29);
  auVar61 = NEON_sri(auVar49,auVar11,1,1);
  auVar61 = NEON_sri(auVar61,auVar59,2,1);
  auVar61 = NEON_sri(auVar61,auVar61,4,1);
/*  stripping the watermark breaks the license  */
  uVar21 = CONCAT17((char)(auVar61._14_2_ >> 4),
                    CONCAT16((char)(auVar61._12_2_ >> 4),
                             CONCAT15((char)(auVar61._10_2_ >> 4),
                                      CONCAT14((char)(auVar61._8_2_ >> 4),
                                               CONCAT13((char)(auVar61._6_2_ >> 4),
                                                        CONCAT12((char)(auVar61._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar61._2_2_ >> 4)
                                                                          ,(char)(auVar61._0_2_ >> 4
                                                                                 ))))))));
  lVar31 = 0;
  uVar34 = (uint)*pbVar2;
  if (uVar21 != 0) {
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    uVar15 = (ulong)*pbVar2 & 0x3f;
    uVar21 = uVar21 >> uVar15 | uVar21 << 0x40 - uVar15;
    do {
      uVar15 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + uVar34 & 0x3f;
      if (uVar30 != 0) {
// donate: donate/README.md
        uVar30 = *(uint *)(lVar26 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) break;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_448[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) break;
    } while( true );
  }
  uVar24 = 0x3f;
  if ((uVar34 & 0x3f) != 1) {
    uVar24 = 0;
  }
  lVar27 = (ulong)uVar24 + (ulong)(uVar34 - 1 & 0x3f);
  *pbVar2 = (byte)lVar27;
  pbVar2[lVar27] = bVar29;
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar26 + lVar27 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
  else {
    lVar26 = 0;
    uVar15 = 3;
/*  watermarked copy - do not remove  */
    do {
      uVar24 = auStack_448[lVar26];
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
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
        }
        else {
LAB_002d1500:
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
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
      lVar26 = lVar26 + 1;
      uVar15 = uVar21;
    } while (lVar26 != lVar31);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_348) {
    return uVar21;
  }
  auVar61 = ___stack_chk_fail(uVar21);
  puVar13 = auVar61._8_8_;
  lVar19 = auVar61._0_8_;
/* watermarked copy - do not remove - github.com/pengussy */
  lStack_4b8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = *(long *)(lVar19 + 0x70);
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
    lVar27 = lVar19 + 0x40;
    uVar34 = *(uint *)(lVar19 + 0x2c);
    uVar39 = (ulong)uVar34;
    lVar16 = lVar31;
/* no support for modified copies - github.com/pengussy */
    lVar18 = lVar26;
    if (0x180 < uVar20 - uVar34) {
      if (uVar34 < 0xffffffa0) {
        uVar37 = uVar39 + 0x60;
        do {
          uVar38 = (*(long *)(lVar25 + 8 + uVar39) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar35 = uVar38 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar26 + uVar35 * 4,0,0,0);
          Hint_Prefetch(lVar31 + uVar35,0,0,0);
          uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar38 = (ulong)(uVar6 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar31 + uVar38);
          uVar34 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar34 = 0;
          }
          lVar16 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0xf);
          *pbVar2 = (byte)lVar16;
          pbVar2[lVar16] = (byte)uVar6;
          *(int *)(lVar26 + uVar38 * 4 + lVar16 * 4) = (int)uVar39;
          uVar39 = uVar39 + 1;
        } while (uVar37 != uVar39);
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar34 = uVar20 - 0x20;
      uVar39 = (ulong)uVar34;
      iVar33 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar39);
      iVar36 = 8;
      if (iVar33 + 1U < 8) {
        iVar36 = iVar33 + 1;
      }
      iVar33 = 0;
      if (lVar25 + uVar39 <= (long)puVar13 + 1U) {
        iVar33 = iVar36;
// no support for modified copies
      }
      if (uVar34 < iVar33 + uVar34) {
        iVar36 = *(int *)(lVar19 + 0x34);
        uVar37 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar38 = (*(long *)(lVar25 + uVar39) * -0x30e4432340650000 ^ uVar37) >>
                   ((ulong)(0x38 - iVar36) & 0x3f);
          uVar35 = uVar38 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar18 + uVar35 * 4,0,0,0);
          Hint_Prefetch(lVar16 + uVar35,0,0,0);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar39 = uVar39 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
      }
    }
    if (uVar34 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar36 = *(int *)(lVar19 + 0x34);
      uVar39 = (ulong)uVar34;
// WM - if you paid for this, you were scammed
      do {
        uVar37 = (*(long *)(lVar32 + 8 + uVar39) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar38 = uVar37 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar18 + uVar38 * 4,0,0,0);
        Hint_Prefetch(lVar16 + uVar38,0,0,0);
        uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
        *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar37;
        uVar37 = (ulong)(uVar6 >> 4) & 0xffffff0;
        pbVar2 = (byte *)(lVar16 + uVar37);
        uVar34 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar34 = 0;
        }
        lVar3 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar6;
        *(int *)(lVar18 + uVar37 * 4 + lVar3 * 4) = (int)uVar39;
        uVar39 = uVar39 + 1;
      } while (uVar39 < (uVar21 & 0xffffffff));
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar39 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar39 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar26 + uVar15 * 4,0,0,0);
    Hint_Prefetch(lVar31 + uVar15,0,0,0);
    uVar34 = *(uint *)(lVar27 + (uVar21 & 7) * 4);
    *(int *)(lVar27 + (uVar21 & 7) * 4) = (int)uVar39;
  }
  else {
    uVar34 = (uint)((*puVar13 * -0x30e4432340650000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  }
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar34;
  uVar21 = (ulong)(uVar34 >> 4) & 0xffffff0;
  lVar26 = lVar26 + uVar21 * 4;
  pauVar1 = (undefined1 (*) [16])(lVar31 + uVar21);
  bVar29 = (*pauVar1)[0];
  auVar61 = *pauVar1;
  bVar28 = (byte)uVar34;
  bVar40 = auVar61[0];
  uVar41 = CONCAT11(-(auVar61[9] == bVar28),-(auVar61[8] == bVar28));
  uVar42 = CONCAT13(-(auVar61[0xb] == bVar28),CONCAT12(-(auVar61[10] == bVar28),uVar41));
  uVar43 = CONCAT15(-(auVar61[0xd] == bVar28),CONCAT14(-(auVar61[0xc] == bVar28),uVar42));
  uVar21 = CONCAT17((char)(CONCAT17(-(auVar61[0xf] == bVar28),
                                    CONCAT16(-(auVar61[0xe] == bVar28),uVar43)) >> 0x34),
                    CONCAT16((char)((uint6)uVar43 >> 0x24),
                             CONCAT15((char)((uint)uVar42 >> 0x14),
                                      CONCAT14((char)(uVar41 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar61[7] == bVar28),
                                                                        -(auVar61[6] == bVar28)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar61[
                                                  5] == bVar28),-(auVar61[4] == bVar28)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar61[3] == bVar28),
                                                                           -(auVar61[2] == bVar28))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar61[1] == bVar28),
                                                                           -(bVar40 == bVar28)) >> 4
                                                                 ))))))));
  uVar15 = (ulong)bVar29 & 0xf;
  uVar21 = (uVar21 >> uVar15 * 4 | uVar21 << uVar15 * -4 + 0x40) & 0x8888888888888888;
  if (uVar21 != 0) {
    lVar31 = 0;
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    do {
      uVar15 = (uVar21 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
// WM - unlicensed copy if this notice is missing
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + (bVar29 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar26 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) goto code_r0x002d198c;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_5b8[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) goto code_r0x002d198c;
    } while( true );
  }
  lVar31 = 0;
code_r0x002d198c:
  uVar24 = 0xf;
  if ((bVar40 & 0xf) != 1) {
    uVar24 = 0;
  }
  lVar27 = (ulong)uVar24 + (ulong)(bVar40 - 1 & 0xf);
  (*pauVar1)[0] = (char)lVar27;
  (*pauVar1)[lVar27] = bVar28;
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar26 + lVar27 * 4) = iVar22;
  if (lVar31 == 0) {
/*  unlicensed copy if this notice is missing  */
    uVar21 = 3;
  }
  else {
    lVar26 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_5b8[lVar26];
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
/* WM - chat: discord.gg/sdkhDjTex */
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
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)puVar13 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar26 = lVar26 + 1;
      uVar15 = uVar21;
    } while (lVar26 != lVar31);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_4b8) {
    return uVar21;
  }
  auVar61 = ___stack_chk_fail(uVar21);
  puVar13 = auVar61._8_8_;
  lVar19 = auVar61._0_8_;
  lStack_628 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = *(long *)(lVar19 + 0x70);
  lVar31 = *(long *)(lVar19 + 0x38);
  iVar22 = *(int *)(lVar19 + 0x34);
  lVar25 = *(long *)(lVar19 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar19 + 0x100) & 0x1f);
  uVar21 = (long)puVar13 - lVar25;
  uVar20 = (uint)uVar21;
/* more drops soon - github.com/pengussy - github.com/pengussy */
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
    lVar27 = lVar19 + 0x40;
    uVar34 = *(uint *)(lVar19 + 0x2c);
    uVar39 = (ulong)uVar34;
    lVar16 = lVar31;
    lVar18 = lVar26;
    if (0x180 < uVar20 - uVar34) {
      if (uVar34 < 0xffffffa0) {
        uVar37 = uVar39 + 0x60;
        do {
          uVar38 = (*(long *)(lVar25 + 8 + uVar39) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar35 = uVar38 >> 3 & 0x1fffffe0;
          lVar16 = lVar26 + uVar35 * 4;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x40,0,0,0);
          Hint_Prefetch(lVar31 + uVar35,0,0,0);
          uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar38 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar31 + uVar38);
          uVar34 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
/* more drops soon - github.com/pengussy */
            uVar34 = 0;
          }
          lVar16 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0x1f);
          *pbVar2 = (byte)lVar16;
          pbVar2[lVar16] = (byte)uVar6;
          *(int *)(lVar26 + uVar38 * 4 + lVar16 * 4) = (int)uVar39;
          uVar39 = uVar39 + 1;
        } while (uVar37 != uVar39);
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar34 = uVar20 - 0x20;
      uVar39 = (ulong)uVar34;
      iVar33 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar39);
      iVar36 = 8;
      if (iVar33 + 1U < 8) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        iVar36 = iVar33 + 1;
      }
      iVar33 = 0;
      if (lVar25 + uVar39 <= (long)puVar13 + 1U) {
        iVar33 = iVar36;
      }
      if (uVar34 < iVar33 + uVar34) {
        iVar36 = *(int *)(lVar19 + 0x34);
        uVar37 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar38 = (*(long *)(lVar25 + uVar39) * -0x30e4432340650000 ^ uVar37) >>
                   ((ulong)(0x38 - iVar36) & 0x3f);
          uVar35 = uVar38 >> 3 & 0x1fffffe0;
          lVar32 = lVar18 + uVar35 * 4;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x40,0,0,0);
          Hint_Prefetch(lVar16 + uVar35,0,0,0);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar39 = uVar39 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
      }
    }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    if (uVar34 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar36 = *(int *)(lVar19 + 0x34);
      uVar39 = (ulong)uVar34;
      do {
        uVar37 = (*(long *)(lVar32 + 8 + uVar39) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar38 = uVar37 >> 3 & 0x1fffffe0;
        lVar3 = lVar18 + uVar38 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        Hint_Prefetch(lVar16 + uVar38,0,0,0);
        uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
        *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar37;
        uVar37 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
        pbVar2 = (byte *)(lVar16 + uVar37);
        uVar34 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
          uVar34 = 0;
        }
        lVar3 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar3;
// WM - thanks for reading - discord.gg/sdkhDjTex
        pbVar2[lVar3] = (byte)uVar6;
        *(int *)(lVar18 + uVar37 * 4 + lVar3 * 4) = (int)uVar39;
        uVar39 = uVar39 + 1;
      } while (uVar39 < (uVar21 & 0xffffffff));
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar39 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar39 >> 3 & 0x1fffffe0;
    lVar16 = lVar26 + uVar15 * 4;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x40,0,0,0);
    Hint_Prefetch(lVar31 + uVar15,0,0,0);
    uVar34 = *(uint *)(lVar27 + (uVar21 & 7) * 4);
    *(int *)(lVar27 + (uVar21 & 7) * 4) = (int)uVar39;
  }
  else {
    uVar34 = (uint)((*puVar13 * -0x30e4432340650000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar34;
  uVar21 = (ulong)(uVar34 >> 3) & 0x1fffffe0;
  lVar26 = lVar26 + uVar21 * 4;
  pbVar2 = (byte *)(lVar31 + uVar21);
  bVar29 = *pbVar2;
  bVar28 = (byte)uVar34;
  uVar52 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)pbVar2));
  uVar53 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar52));
  uVar54 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar53));
  uVar55 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar56 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar55));
  uVar57 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar56));
/* no support for modified copies */
  uVar41 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar42 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar41));
  uVar43 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar42));
  uVar44 = CONCAT17(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar43));
  auVar46._0_10_ =
       CONCAT19(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar44));
  auVar46[10] = -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar46[0xb] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar48[0xc] = -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar48._0_12_ = auVar46;
  auVar48[0xd] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar50[0xe] = -(bVar28 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar50._0_14_ = auVar48;
  auVar50[0xf] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar21 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar28 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar28 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar57)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar57 >> 0x26),
                                      CONCAT15((char)((uint)uVar56 >> 0x16),
                                               CONCAT14((char)(uVar55 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar28 ==
                                                                                  (byte)((ushort)*(
/* found on a paste site? it was re-uploaded illegally */
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar28 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar54)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar54 >> 0x26),
                                                           CONCAT11((char)((uint)uVar53 >> 0x16),
                                                                    (char)(uVar52 >> 6)))))))),
                    CONCAT17((char)(auVar50._14_2_ >> 6),
                             CONCAT16((char)(auVar48._12_2_ >> 6),
                                      CONCAT15((char)(auVar46._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar46._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar44 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar43 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar42 >> 0x16),(char)(uVar41 >> 6)))))))),4,1);
  uVar21 = (uVar21 >> ((ulong)bVar29 & 0x1f) * 2 | uVar21 << ((ulong)bVar29 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar21 != 0) {
    lVar31 = 0;
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    do {
      uVar15 = (uVar21 << 1 & 0xcccccccccccccccc) >> 2 | (uVar21 << 1 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + (bVar29 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar26 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) goto LAB_002d1f00;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_728[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
        iVar22 = iVar22 + -1;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) goto LAB_002d1f00;
    } while( true );
  }
  lVar31 = 0;
LAB_002d1f00:
  uVar24 = 0x1f;
  if ((bVar29 & 0x1f) != 1) {
    uVar24 = 0;
  }
  lVar27 = (ulong)uVar24 + (ulong)(bVar29 - 1 & 0x1f);
  *pbVar2 = (byte)lVar27;
  pbVar2[lVar27] = bVar28;
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar26 + lVar27 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  else {
    lVar26 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_728[lVar26];
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
            do {
              puVar17 = puVar17 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar17) goto LAB_002d1ff0;
              uVar21 = *puVar14;
              lVar19 = lVar19 + 8;
              puVar14 = puVar14 + 1;
            } while (uVar21 == *puVar17);
            uVar21 = *puVar17 ^ uVar21;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
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
LAB_002d1ff0:
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
/* WM - unlicensed copy if this notice is missing */
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)puVar13 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar26 = lVar26 + 1;
      uVar15 = uVar21;
    } while (lVar26 != lVar31);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_628) {
    return uVar21;
  }
  auVar61 = ___stack_chk_fail(uVar21);
  puVar13 = auVar61._8_8_;
  lVar19 = auVar61._0_8_;
  lStack_798 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar26 = *(long *)(lVar19 + 0x70);
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
    lVar27 = lVar19 + 0x40;
// found on a paste site? it was re-uploaded illegally
    uVar34 = *(uint *)(lVar19 + 0x2c);
    uVar39 = (ulong)uVar34;
    lVar16 = lVar31;
    lVar18 = lVar26;
    if (0x180 < uVar20 - uVar34) {
      if (uVar34 < 0xffffffa0) {
        uVar37 = uVar39 + 0x60;
        do {
          uVar38 = (*(long *)(lVar25 + 8 + uVar39) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60)
                   ) >> ((ulong)(0x38 - iVar22) & 0x3f);
          uVar35 = uVar38 >> 2 & 0x3fffffc0;
          lVar16 = lVar26 + uVar35 * 4;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x40,0,0,0);
          lVar16 = lVar31 + uVar35;
          Hint_Prefetch(lVar16,0,0,0);
          Hint_Prefetch(lVar16 + 0x20,0,0,0);
          uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar38 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar31 + uVar38);
          uVar34 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar34 = 0;
          }
          lVar16 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar16;
          pbVar2[lVar16] = (byte)uVar6;
          *(int *)(lVar26 + uVar38 * 4 + lVar16 * 4) = (int)uVar39;
          uVar39 = uVar39 + 1;
        } while (uVar37 != uVar39);
/*  no support for modified copies  */
        lVar18 = *(long *)(lVar19 + 0x70);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      uVar34 = uVar20 - 0x20;
      uVar39 = (ulong)uVar34;
      iVar33 = (int)((long)puVar13 + 1U) - (int)(lVar25 + uVar39);
      iVar36 = 8;
      if (iVar33 + 1U < 8) {
        iVar36 = iVar33 + 1;
      }
      iVar33 = 0;
      if (lVar25 + uVar39 <= (long)puVar13 + 1U) {
        iVar33 = iVar36;
      }
      if (uVar34 < iVar33 + uVar34) {
        iVar36 = *(int *)(lVar19 + 0x34);
        uVar37 = *(ulong *)(lVar19 + 0x60);
        do {
          uVar38 = (*(long *)(lVar25 + uVar39) * -0x30e4432340650000 ^ uVar37) >>
                   ((ulong)(0x38 - iVar36) & 0x3f);
          uVar35 = uVar38 >> 2 & 0x3fffffc0;
          lVar32 = lVar18 + uVar35 * 4;
/* stripping the watermark breaks the license */
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x40,0,0,0);
          lVar32 = lVar16 + uVar35;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x20,0,0,0);
          *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar38;
          uVar39 = uVar39 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
      }
    }
    if (uVar34 < uVar20) {
      lVar32 = *(long *)(lVar19 + 8);
      iVar36 = *(int *)(lVar19 + 0x34);
      uVar39 = (ulong)uVar34;
      do {
        uVar37 = (*(long *)(lVar32 + 8 + uVar39) * -0x30e4432340650000 ^ *(ulong *)(lVar19 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar38 = uVar37 >> 2 & 0x3fffffc0;
        lVar3 = lVar18 + uVar38 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar16 + uVar38;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar6 = *(uint *)(lVar27 + (uVar39 & 7) * 4);
        *(int *)(lVar27 + (uVar39 & 7) * 4) = (int)uVar37;
        uVar37 = (ulong)(uVar6 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar16 + uVar37);
        uVar34 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
          uVar34 = 0;
        }
        lVar3 = (ulong)uVar34 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar6;
        *(int *)(lVar18 + uVar37 * 4 + lVar3 * 4) = (int)uVar39;
        uVar39 = uVar39 + 1;
      } while (uVar39 < (uVar21 & 0xffffffff));
    }
    *(uint *)(lVar19 + 0x2c) = uVar20;
    uVar39 = (*(long *)(lVar25 + (uVar21 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar15) >>
             ((ulong)(0x38 - iVar22) & 0x3f);
    uVar15 = uVar39 >> 2 & 0x3fffffc0;
    lVar16 = lVar26 + uVar15 * 4;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x40,0,0,0);
    lVar16 = lVar31 + uVar15;
    Hint_Prefetch(lVar16,0,0,0);
    Hint_Prefetch(lVar16 + 0x20,0,0,0);
    uVar34 = *(uint *)(lVar27 + (uVar21 & 7) * 4);
    *(int *)(lVar27 + (uVar21 & 7) * 4) = (int)uVar39;
  }
  else {
    uVar34 = (uint)((*puVar13 * -0x30e4432340650000 ^ uVar15) >> ((ulong)(0x38 - iVar22) & 0x3f));
    *(uint *)(lVar19 + 0x2c) = uVar20;
  }
  *(uint *)(lVar19 + 0x68) = *(int *)(lVar19 + 0x68) + uVar34;
  uVar21 = (ulong)(uVar34 >> 2) & 0x3fffffc0;
  lVar26 = lVar26 + uVar21 * 4;
  pbVar2 = (byte *)(lVar31 + uVar21);
  bVar29 = (byte)uVar34;
  auVar60[0] = -(pbVar2[1] == bVar29);
  auVar60[1] = -(pbVar2[5] == bVar29);
  auVar60[2] = -(pbVar2[9] == bVar29);
  auVar60[3] = -(pbVar2[0xd] == bVar29);
  auVar60[4] = -(pbVar2[0x11] == bVar29);
/* wm:do not claim this as your own */
  auVar60[5] = -(pbVar2[0x15] == bVar29);
  auVar60[6] = -(pbVar2[0x19] == bVar29);
  auVar60[7] = -(pbVar2[0x1d] == bVar29);
  auVar60[8] = -(pbVar2[0x21] == bVar29);
  auVar60[9] = -(pbVar2[0x25] == bVar29);
  auVar60[10] = -(pbVar2[0x29] == bVar29);
  auVar60[0xb] = -(pbVar2[0x2d] == bVar29);
  auVar60[0xc] = -(pbVar2[0x31] == bVar29);
  auVar60[0xd] = -(pbVar2[0x35] == bVar29);
  auVar60[0xe] = -(pbVar2[0x39] == bVar29);
  auVar60[0xf] = -(pbVar2[0x3d] == bVar29);
  auVar51[0] = -(pbVar2[3] == bVar29);
  auVar51[1] = -(pbVar2[7] == bVar29);
  auVar51[2] = -(pbVar2[0xb] == bVar29);
  auVar51[3] = -(pbVar2[0xf] == bVar29);
  auVar51[4] = -(pbVar2[0x13] == bVar29);
  auVar51[5] = -(pbVar2[0x17] == bVar29);
  auVar51[6] = -(pbVar2[0x1b] == bVar29);
  auVar51[7] = -(pbVar2[0x1f] == bVar29);
  auVar51[8] = -(pbVar2[0x23] == bVar29);
  auVar51[9] = -(pbVar2[0x27] == bVar29);
  auVar51[10] = -(pbVar2[0x2b] == bVar29);
  auVar51[0xb] = -(pbVar2[0x2f] == bVar29);
/* wm:no support for modified copies */
  auVar51[0xc] = -(pbVar2[0x33] == bVar29);
  auVar51[0xd] = -(pbVar2[0x37] == bVar29);
  auVar51[0xe] = -(pbVar2[0x3b] == bVar29);
  auVar51[0xf] = -(pbVar2[0x3f] == bVar29);
  auVar10[1] = -(pbVar2[4] == bVar29);
  auVar10[0] = -(*pbVar2 == bVar29);
  auVar10[2] = -(pbVar2[8] == bVar29);
  auVar10[3] = -(pbVar2[0xc] == bVar29);
  auVar10[4] = -(pbVar2[0x10] == bVar29);
  auVar10[5] = -(pbVar2[0x14] == bVar29);
  auVar10[6] = -(pbVar2[0x18] == bVar29);
  auVar10[7] = -(pbVar2[0x1c] == bVar29);
  auVar10[8] = -(pbVar2[0x20] == bVar29);
  auVar10[9] = -(pbVar2[0x24] == bVar29);
  auVar10[10] = -(pbVar2[0x28] == bVar29);
  auVar10[0xb] = -(pbVar2[0x2c] == bVar29);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  auVar10[0xc] = -(pbVar2[0x30] == bVar29);
  auVar10[0xd] = -(pbVar2[0x34] == bVar29);
  auVar10[0xe] = -(pbVar2[0x38] == bVar29);
  auVar10[0xf] = -(pbVar2[0x3c] == bVar29);
  auVar59 = NEON_sri(auVar60,auVar10,1,1);
  auVar12[1] = -(pbVar2[6] == bVar29);
  auVar12[0] = -(pbVar2[2] == bVar29);
  auVar12[2] = -(pbVar2[10] == bVar29);
  auVar12[3] = -(pbVar2[0xe] == bVar29);
  auVar12[4] = -(pbVar2[0x12] == bVar29);
  auVar12[5] = -(pbVar2[0x16] == bVar29);
  auVar12[6] = -(pbVar2[0x1a] == bVar29);
  auVar12[7] = -(pbVar2[0x1e] == bVar29);
  auVar12[8] = -(pbVar2[0x22] == bVar29);
  auVar12[9] = -(pbVar2[0x26] == bVar29);
  auVar12[10] = -(pbVar2[0x2a] == bVar29);
  auVar12[0xb] = -(pbVar2[0x2e] == bVar29);
  auVar12[0xc] = -(pbVar2[0x32] == bVar29);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  auVar12[0xd] = -(pbVar2[0x36] == bVar29);
  auVar12[0xe] = -(pbVar2[0x3a] == bVar29);
  auVar12[0xf] = -(pbVar2[0x3e] == bVar29);
  auVar61 = NEON_sri(auVar51,auVar12,1,1);
  auVar61 = NEON_sri(auVar61,auVar59,2,1);
  auVar61 = NEON_sri(auVar61,auVar61,4,1);
  uVar21 = CONCAT17((char)(auVar61._14_2_ >> 4),
                    CONCAT16((char)(auVar61._12_2_ >> 4),
                             CONCAT15((char)(auVar61._10_2_ >> 4),
                                      CONCAT14((char)(auVar61._8_2_ >> 4),
                                               CONCAT13((char)(auVar61._6_2_ >> 4),
                                                        CONCAT12((char)(auVar61._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar61._2_2_ >> 4)
                                                                          ,(char)(auVar61._0_2_ >> 4
                                                                                 ))))))));
  lVar31 = 0;
  uVar34 = (uint)*pbVar2;
  if (uVar21 != 0) {
    iVar22 = 1 << (ulong)(uVar30 & 0x1f);
    uVar15 = (ulong)*pbVar2 & 0x3f;
    uVar21 = uVar21 >> uVar15 | uVar21 << 0x40 - uVar15;
    do {
      uVar15 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + uVar34 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar26 + (ulong)uVar30 * 4);
        if (uVar30 < uVar24) break;
        Hint_Prefetch(lVar25 + (ulong)uVar30,0,0,0);
        auStack_898[lVar31] = uVar30;
        lVar31 = lVar31 + 1;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        iVar22 = iVar22 + -1;
      }
      uVar21 = uVar21 - 1 & uVar21;
      if ((uVar21 == 0) || (iVar22 == 0)) break;
    } while( true );
  }
  uVar24 = 0x3f;
  if ((uVar34 & 0x3f) != 1) {
    uVar24 = 0;
  }
  lVar27 = (ulong)uVar24 + (ulong)(uVar34 - 1 & 0x3f);
  *pbVar2 = (byte)lVar27;
  pbVar2[lVar27] = bVar29;
  iVar22 = *(int *)(lVar19 + 0x2c);
  *(int *)(lVar19 + 0x2c) = iVar22 + 1;
  *(int *)(lVar26 + lVar27 * 4) = iVar22;
  if (lVar31 == 0) {
    uVar21 = 3;
  }
  else {
    lVar26 = 0;
    uVar15 = 3;
    do {
      uVar24 = auStack_898[lVar26];
/*  found on a paste site? it was re-uploaded illegally  */
      puVar14 = (ulong *)(lVar25 + (ulong)uVar24);
      if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
        puVar17 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *puVar13) {
            lVar19 = 0;
            puVar14 = (ulong *)(lVar25 + 8 + (ulong)uVar24);
            do {
              puVar17 = puVar17 + 1;
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
/* proprietary - see LICENSE - do not sell */
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
// watermarked copy - do not remove
        if (uVar15 < uVar21) {
          *param_4 = (ulong)((uVar20 + 3) - uVar24);
          uVar15 = uVar21;
          if ((ulong *)((long)puVar13 + uVar21) == param_3) break;
        }
      }
      uVar21 = uVar15;
      lVar26 = lVar26 + 1;
      uVar15 = uVar21;
    } while (lVar26 != lVar31);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_798) {
    return uVar21;
  }
  auVar61 = ___stack_chk_fail(uVar21);
  puVar13 = auVar61._8_8_;
  lVar25 = auVar61._0_8_;
  lVar31 = *(long *)(lVar25 + 0x80);
  uVar34 = 1 << (ulong)(*(uint *)(lVar25 + 0x104) & 0x1f);
  lVar26 = *(long *)(lVar25 + 8);
  lVar19 = *(long *)(lVar25 + 0x10);
  uVar6 = 1 << (ulong)(*(uint *)(lVar25 + 0x100) & 0x1f);
  uVar30 = *(uint *)(lVar25 + 0x18);
  uVar23 = (uint)((long)puVar13 - lVar26);
  uVar20 = *(uint *)(lVar25 + 0x2c);
  uVar21 = (ulong)uVar20;
  uVar24 = uVar23 - uVar6;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  if (uVar23 - *(uint *)(lVar25 + 0x1c) <= uVar6 || *(int *)(lVar25 + 0x28) != 0) {
    uVar24 = *(uint *)(lVar25 + 0x1c);
  }
  uVar6 = 0;
  if (uVar34 <= uVar23) {
    uVar6 = uVar23 - uVar34;
  }
  uVar5 = *(uint *)(lVar25 + 0x10c);
  lVar27 = *(long *)(lVar25 + 0x70);
  uVar8 = ~(-1 << (ulong)(*(uint *)(lVar25 + 0x104) & 0x1f));
  uVar9 = 0x20 - *(int *)(lVar25 + 0x108);
  if (*(int *)(lVar25 + 300) == 0) {
    if (uVar20 < uVar23) {
      do {
        uVar20 = (uint)(*(int *)(lVar26 + uVar21) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
        *(undefined4 *)(lVar31 + (ulong)((uint)uVar21 & uVar8) * 4) =
/*  thanks for reading - discord.gg/sdkhDjTex  */
             *(undefined4 *)(lVar27 + (ulong)uVar20 * 4);
        *(uint *)(lVar27 + (ulong)uVar20 * 4) = (uint)uVar21;
        uVar21 = uVar21 + 1;
      } while (uVar21 < ((long)puVar13 - lVar26 & 0xffffffffU));
    }
  }
  else if (uVar20 < uVar23) {
    uVar7 = (uint)(*(int *)(lVar26 + uVar21) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
    *(undefined4 *)(lVar31 + (ulong)(uVar20 & uVar8) * 4) =
         *(undefined4 *)(lVar27 + (ulong)uVar7 * 4);
    *(uint *)(lVar27 + (ulong)uVar7 * 4) = uVar20;
  }
  *(uint *)(lVar25 + 0x2c) = uVar23;
  uVar21 = *puVar13;
  uVar20 = *(uint *)(lVar27 + (ulong)((uint)((int)uVar21 * -0x61c8864f) >> (ulong)(uVar9 & 0x1f)) *
                              4);
  if (uVar20 < uVar24) {
    uVar15 = 3;
  }
  else {
    iVar22 = 1 << (ulong)(uVar5 & 0x1f);
    uVar15 = 3;
    do {
      uVar39 = (ulong)uVar20;
      if (uVar20 < uVar30) {
        piVar4 = (int *)(lVar19 + uVar39);
        if (*piVar4 == (int)uVar21) {
          lVar25 = func_0x002ad924((int *)((long)puVar13 + 4),piVar4 + 1,param_3,
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                                   lVar19 + (ulong)uVar30,lVar26 + (ulong)uVar30);
          uVar39 = lVar25 + 4;
          goto joined_r0x002d2a54;
        }
      }
      else {
        puVar14 = (ulong *)(lVar26 + uVar39);
        if (*(int *)((long)puVar14 + (uVar15 - 3)) == *(int *)((long)puVar13 + (uVar15 - 3))) {
          puVar17 = puVar13;
          if (puVar13 < (ulong *)((long)param_3 + -7)) {
            if (*puVar14 == *puVar13) {
              lVar25 = 0;
              puVar14 = (ulong *)(lVar26 + 8 + uVar39);
              do {
                puVar17 = puVar17 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar17) goto code_r0x002d29fc;
                uVar39 = *puVar14;
                lVar25 = lVar25 + 8;
                puVar14 = puVar14 + 1;
              } while (uVar39 == *puVar17);
              uVar39 = *puVar17 ^ uVar39;
              uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
              uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
/* WM - do not claim this as your own */
              uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
              uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
              uVar39 = lVar25 + ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
            }
            else {
              uVar39 = *puVar13 ^ *puVar14;
              uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
              uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
              uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
              uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
              uVar39 = (ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3;
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
// stripping the watermark breaks the license
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
            uVar39 = (long)puVar17 - (long)puVar13;
          }
joined_r0x002d2a54:
          if (uVar15 < uVar39) {
            *param_4 = (ulong)((uVar23 + 3) - uVar20);
            uVar15 = uVar39;
/* WM - no support for modified copies */
            if ((ulong *)((long)puVar13 + uVar39) == param_3) {
              return uVar39;
            }
          }
        }
      }
      if ((uVar20 <= uVar6) || (iVar22 = iVar22 + -1, iVar22 == 0)) {
        return uVar15;
      }
      uVar20 = *(uint *)(lVar31 + (ulong)(uVar20 & uVar34 - 1) * 4);
    } while (uVar24 <= uVar20);
  }
  return uVar15;
}

