/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2dc9a8:4cda64daab
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002dc9a8(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
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
/* WM - proprietary - see LICENSE - do not sell */
  ulong extraout_x12;
  long lVar23;
  long extraout_x13;
  long lVar24;
  long extraout_x14;
  byte bVar25;
  int iVar26;
  int extraout_w15;
  int iVar27;
  int extraout_w16;
  ulong uVar28;
  uint extraout_w17;
  ulong *puVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  uint *puVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  ushort uVar39;
/* proprietary - see LICENSE - do not sell */
  undefined4 uVar40;
  undefined6 uVar41;
  undefined1 auVar42 [16];
  uint auStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar27 = -0x61c8864f;
  lVar24 = *(long *)(param_1 + 0x70);
  lVar23 = *(long *)(param_1 + 0x38);
  iVar26 = *(int *)(param_1 + 0x34);
  lVar32 = *(long *)(param_1 + 8);
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar34 = (long)param_2 - lVar32;
  uVar33 = (uint)uVar34;
  uVar10 = uVar33 - uVar6;
  if (uVar33 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x28) != 0) {
    uVar10 = *(uint *)(param_1 + 0x1c);
  }
  uVar22 = (ulong)uVar10;
  uVar10 = *(uint *)(param_1 + 0x10c);
  puVar17 = *(undefined8 **)(param_1 + 0xf8);
  bVar9 = 3 < uVar10;
  uVar6 = uVar10 - 4;
  if (bVar9) {
    uVar10 = 4;
  }
  uVar20 = (uint)*(undefined8 *)(param_1 + 0x60);
  uVar18 = (ulong)(uint)(1 << (ulong)(uVar10 & 0x1f));
  uVar7 = (int)*param_2 * -0x61c8864f;
  uVar21 = (ulong)(uVar7 >> (ulong)(0x22U - *(int *)(puVar17 + 0x21) & 0x1f));
/* chat: discord.gg/sdkhDjTex */
  puVar12 = (uint *)(uVar21 * 0x10);
  Hint_Prefetch(puVar17[0xe] + (long)puVar12,0,0,0);
  uVar10 = 1 << (ulong)(uVar6 & 0x1f);
  if (!bVar9 || uVar6 == 0) {
    uVar10 = 0;
  }
  uVar19 = (ulong)uVar10;
  lVar31 = lVar24;
  uVar10 = uVar33;
  if (*(int *)(param_1 + 300) == 0) {
    lVar11 = param_1 + 0x40;
    puVar12 = (uint *)(ulong)*(uint *)(param_1 + 0x2c);
    lVar36 = lVar23;
    iVar30 = -0x61c8864f;
    if (0x180 < uVar33 - *(uint *)(param_1 + 0x2c)) goto LAB_002dd014;
    goto LAB_002dcab8;
  }
  uVar10 = (uVar7 ^ uVar20) >> (ulong)(0x18U - iVar26 & 0x1f);
  *(uint *)(param_1 + 0x2c) = uVar33;
  do {
    iVar26 = (int)uVar18;
    *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar10;
    uVar28 = (ulong)(uVar10 >> 4) & 0xffffff0;
    lVar31 = lVar31 + uVar28 * 4;
    pbVar2 = (byte *)(lVar23 + uVar28);
    bVar5 = *pbVar2;
    uVar38 = *(undefined8 *)(pbVar2 + 8);
    uVar37 = *(undefined8 *)pbVar2;
    bVar25 = (byte)uVar10;
    uVar39 = CONCAT11(-((byte)((ulong)uVar38 >> 8) == bVar25),-((byte)uVar38 == bVar25));
    uVar40 = CONCAT13(-((byte)((ulong)uVar38 >> 0x18) == bVar25),
                      CONCAT12(-((byte)((ulong)uVar38 >> 0x10) == bVar25),uVar39));
    uVar41 = CONCAT15(-((byte)((ulong)uVar38 >> 0x28) == bVar25),
                      CONCAT14(-((byte)((ulong)uVar38 >> 0x20) == bVar25),uVar40));
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    uVar28 = CONCAT17((char)(CONCAT17(-((byte)((ulong)uVar38 >> 0x38) == bVar25),
                                      CONCAT16(-((byte)((ulong)uVar38 >> 0x30) == bVar25),uVar41))
                            >> 0x34),
                      CONCAT16((char)((uint6)uVar41 >> 0x24),
                               CONCAT15((char)((uint)uVar40 >> 0x14),
                                        CONCAT14((char)(uVar39 >> 4),
                                                 CONCAT13((char)(CONCAT11(-((byte)((ulong)uVar37 >>
                                                                                  0x38) == bVar25),
                                                                          -((byte)((ulong)uVar37 >>
                                                                                  0x30) == bVar25))
                                                                >> 4),
                                                          CONCAT12((char)(CONCAT11(-((byte)((ulong)
                                                  uVar37 >> 0x28) == bVar25),
                                                  -((byte)((ulong)uVar37 >> 0x20) == bVar25)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-((byte)((ulong)uVar37 >>
                                                                                   0x18) == bVar25),
                                                                           -((byte)((ulong)uVar37 >>
                                                                                   0x10) == bVar25))
                                                                 >> 4),
                                                           (char)(CONCAT11(-((byte)((ulong)uVar37 >>
                                                                                   8) == bVar25),
                                                                           -((byte)uVar37 == bVar25)
                                                                          ) >> 4))))))));
    uVar8 = (ulong)bVar5 & 0xf;
    uVar28 = (uVar28 >> uVar8 * 4 | uVar28 << uVar8 * -4 + 0x40) & 0x8888888888888888;
// WM - thanks for reading - discord.gg/sdkhDjTex
    if (uVar28 != 0) {
      lVar24 = 0;
      do {
        iVar26 = (int)uVar18;
        uVar8 = (uVar28 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar10 = (int)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + (bVar5 & 0x3f) * 4 >> 2 & 0xf;
        if (uVar10 != 0) {
          uVar10 = *(uint *)(lVar31 + (ulong)uVar10 * 4);
          puVar12 = (uint *)(ulong)uVar10;
          if (uVar10 < (uint)uVar22) goto LAB_002dcc3c;
          Hint_Prefetch(lVar32 + (long)puVar12,0,0,0);
          auStack_170[lVar24] = uVar10;
          lVar24 = lVar24 + 1;
          uVar18 = (ulong)(iVar26 - 1);
        }
        iVar26 = (int)uVar18;
        puVar12 = (uint *)(uVar28 - 1);
        uVar28 = (ulong)puVar12 & uVar28;
        if ((uVar28 == 0) || (iVar26 == 0)) goto LAB_002dcc3c;
      } while( true );
    }
    lVar24 = 0;
LAB_002dcc3c:
    uVar10 = 0xf;
// thanks for reading - discord.gg/sdkhDjTex
    if (((uint)uVar37 & 0xf) != 1) {
      uVar10 = 0;
    }
    lVar23 = (ulong)uVar10 + (ulong)(((uint)uVar37 & 0xff) - 1 & 0xf);
    *pbVar2 = (byte)lVar23;
    pbVar2[lVar23] = bVar25;
    iVar27 = *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x2c) = iVar27 + 1;
    *(int *)(lVar31 + lVar23 * 4) = iVar27;
    if (lVar24 == 0) {
      uVar22 = 3;
    }
    else {
      lVar23 = 0;
      uVar18 = 3;
      puVar12 = auStack_170;
      do {
        uVar10 = puVar12[lVar23];
        puVar16 = (ulong *)(lVar32 + (ulong)uVar10);
        if (*(int *)((long)puVar16 + (uVar18 - 3)) == *(int *)((long)param_2 + (uVar18 - 3))) {
          puVar29 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar16 == *param_2) {
              lVar31 = 0;
              puVar16 = (ulong *)(lVar32 + 8 + (ulong)uVar10);
/*  donate: donate/README.md  */
              do {
                puVar29 = puVar29 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar29) goto LAB_002dcd34;
                uVar22 = *puVar16;
                lVar31 = lVar31 + 8;
                puVar16 = puVar16 + 1;
              } while (uVar22 == *puVar29);
              uVar22 = *puVar29 ^ uVar22;
              uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
              uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
              uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
              uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
              uVar22 = lVar31 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
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
/*  if you paid for this, you were scammed  */
          else {
LAB_002dcd34:
            if (puVar29 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar16 == (int)*puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 4);
                puVar16 = (ulong *)((long)puVar16 + 4);
              }
            }
            if (puVar29 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar16 == (short)*puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 2);
                puVar16 = (ulong *)((long)puVar16 + 2);
              }
            }
            if (puVar29 < param_3) {
              if ((char)*puVar16 == (char)*puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 1);
              }
            }
            uVar22 = (long)puVar29 - (long)param_2;
          }
          if (uVar18 < uVar22) {
            *param_4 = (ulong)((uVar33 + 3) - uVar10);
            uVar18 = uVar22;
            if ((ulong *)((long)param_2 + uVar22) == param_3) break;
          }
        }
        lVar23 = lVar23 + 1;
        uVar22 = uVar18;
      } while (lVar23 != lVar24);
    }
/* if you paid for this, you were scammed - github.com/pengussy */
    uVar37 = *puVar17;
    lVar24 = puVar17[1];
    puVar14 = (uint *)(puVar17[0xe] + (uVar21 & 0xffffffff) * 0x10);
    Hint_Prefetch(lVar24 + (ulong)*puVar14,0,0,0);
    Hint_Prefetch(lVar24 + (ulong)puVar14[1],0,0,0);
    uVar7 = puVar14[3];
    Hint_Prefetch(lVar24 + (ulong)puVar14[2],0,0,0);
    puVar35 = (uint *)(puVar17[0x10] + (ulong)(uVar7 >> 8) * 4);
    iVar27 = ((int)uVar37 - (int)lVar24) - uVar4;
    Hint_Prefetch(puVar35,0,0,0);
    uVar6 = iVar26 + (int)uVar19;
    uVar20 = uVar6;
    if (2 < uVar6) {
      uVar20 = 3;
    }
    uVar18 = (ulong)uVar20;
    if (uVar6 == 0) {
LAB_002dcff4:
// keep the notice, keep the source honest
      uVar10 = 0;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar22;
      }
    }
    else {
      do {
        uVar10 = *puVar14;
        if (uVar10 == 0) {
          uVar21 = uVar22;
          goto LAB_002dcf98;
        }
        if (*(int *)(lVar24 + (ulong)uVar10) == (int)*param_2) {
          puVar12 = (uint *)(lVar32 + (ulong)uVar4);
          lVar23 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar24 + (ulong)uVar10) + 1,
                                   param_3,uVar37);
          uVar21 = lVar23 + 4;
          if (uVar22 < uVar21) {
            *param_4 = (ulong)((uVar33 + iVar27 + 3) - uVar10);
            uVar22 = uVar21;
            if ((ulong *)((long)param_2 + uVar21) == param_3) goto LAB_002dcf98;
          }
        }
        uVar18 = uVar18 - 1;
        puVar14 = puVar14 + 1;
      } while (uVar18 != 0);
      uVar7 = uVar7 & 0xff;
      uVar10 = uVar6 - uVar20;
      if (uVar7 <= uVar6 - uVar20) {
        uVar10 = uVar7;
      }
      uVar18 = (ulong)uVar10;
// WM - proprietary - see LICENSE - do not sell
      if (uVar10 == 0) goto LAB_002dcff4;
      lVar23 = uVar18 << 2;
      puVar14 = puVar35;
      do {
        Hint_Prefetch(lVar24 + (ulong)*puVar14,0,0,0);
        lVar23 = lVar23 + -4;
        puVar14 = puVar14 + 1;
      } while (lVar23 != 0);
      uVar19 = *param_2;
      do {
        uVar10 = (uint)uVar18;
        uVar6 = *puVar35;
        piVar3 = (int *)(lVar24 + (ulong)uVar6);
        if (*piVar3 == (int)uVar19) {
          puVar12 = (uint *)(lVar32 + (ulong)uVar4);
          lVar23 = func_0x002ad924((int *)((long)param_2 + 4),piVar3 + 1,param_3,uVar37);
          uVar21 = lVar23 + 4;
          if (uVar22 < uVar21) {
            *param_4 = (ulong)((uVar33 + iVar27 + 3) - uVar6);
            uVar22 = uVar21;
            if ((ulong *)((long)param_2 + uVar21) == param_3) break;
          }
        }
        uVar6 = uVar10 - 1;
        uVar18 = (ulong)uVar6;
        uVar10 = 0;
        uVar21 = uVar22;
        puVar35 = puVar35 + 1;
      } while (uVar6 != 0);
/* unlicensed copy if this notice is missing - github.com/pengussy */
LAB_002dcf98:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar21;
      }
    }
    auVar42 = ___stack_chk_fail();
    lVar11 = auVar42._8_8_;
    param_1 = auVar42._0_8_;
    puVar17 = extraout_x8;
    uVar18 = extraout_x9;
    uVar19 = extraout_x10;
    uVar21 = extraout_x11;
    uVar22 = extraout_x12;
    lVar23 = extraout_x13;
    lVar31 = extraout_x14;
    uVar20 = extraout_w17;
    iVar26 = extraout_w15;
    iVar30 = extraout_w16;
LAB_002dd014:
    iVar27 = iVar30;
    lVar24 = lVar31;
    lVar36 = lVar23;
    if ((uint)puVar12 < 0xffffffa0) {
/* WM - if you paid for this, you were scammed */
      puVar14 = puVar12 + 0x18;
      do {
        uVar10 = (*(int *)(lVar32 + 8 + (long)puVar12) * iVar27 ^ *(uint *)(param_1 + 0x60)) >>
                 (ulong)(0x18U - iVar26 & 0x1f);
        uVar28 = (ulong)(uVar10 >> 4 & 0xffffff0);
        Hint_Prefetch(lVar31 + uVar28 * 4,0,0,0);
        Hint_Prefetch(lVar23 + uVar28,0,0,0);
        uVar6 = *(uint *)(lVar11 + ((ulong)puVar12 & 7) * 4);
        *(uint *)(lVar11 + ((ulong)puVar12 & 7) * 4) = uVar10;
        uVar28 = (ulong)(uVar6 >> 4) & 0xffffff0;
        pbVar2 = (byte *)(lVar23 + uVar28);
        uVar10 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar10 = 0;
        }
        lVar24 = (ulong)uVar10 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar24;
        pbVar2[lVar24] = (byte)uVar6;
        *(int *)(lVar31 + uVar28 * 4 + lVar24 * 4) = (int)puVar12;
        puVar12 = (uint *)((long)puVar12 + 1);
      } while (puVar14 != puVar12);
      lVar24 = *(long *)(param_1 + 0x70);
      lVar36 = *(long *)(param_1 + 0x38);
      uVar10 = uVar33;
    }
    uVar6 = uVar10 - 0x20;
    puVar12 = (uint *)(ulong)uVar6;
    iVar15 = (int)((long)param_2 + 1U) - (int)(lVar32 + (long)puVar12);
    iVar30 = 8;
    if (iVar15 + 1U < 8) {
      iVar30 = iVar15 + 1;
    }
    iVar15 = 0;
    if ((ulong)(lVar32 + (long)puVar12) <= (long)param_2 + 1U) {
      iVar15 = iVar30;
    }
    if (uVar6 < iVar15 + uVar6) {
      iVar30 = *(int *)(param_1 + 0x34);
/* wm:keep the notice, keep the source honest */
      uVar10 = *(uint *)(param_1 + 0x60);
      puVar14 = puVar12;
      do {
        uVar6 = (*(int *)(lVar32 + (long)puVar14) * iVar27 ^ uVar10) >>
                (ulong)(0x18U - iVar30 & 0x1f);
        uVar28 = (ulong)(uVar6 >> 4 & 0xffffff0);
        Hint_Prefetch(lVar24 + uVar28 * 4,0,0,0);
        Hint_Prefetch(lVar36 + uVar28,0,0,0);
        *(uint *)(lVar11 + ((ulong)puVar14 & 7) * 4) = uVar6;
        puVar14 = (uint *)((long)puVar14 + 1);
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      uVar10 = uVar33;
    }
    else {
    }
LAB_002dcab8:
    if ((uint)puVar12 < uVar10) {
      lVar13 = *(long *)(param_1 + 8);
      iVar30 = *(int *)(param_1 + 0x34);
      do {
        uVar10 = (*(int *)(lVar13 + 8 + (long)puVar12) * iVar27 ^ *(uint *)(param_1 + 0x60)) >>
                 (ulong)(0x18U - iVar30 & 0x1f);
        uVar28 = (ulong)(uVar10 >> 4 & 0xffffff0);
        Hint_Prefetch(lVar24 + uVar28 * 4,0,0,0);
        Hint_Prefetch(lVar36 + uVar28,0,0,0);
        uVar6 = *(uint *)(lVar11 + ((ulong)puVar12 & 7) * 4);
        *(uint *)(lVar11 + ((ulong)puVar12 & 7) * 4) = uVar10;
/* WM - chat: discord.gg/sdkhDjTex */
        uVar28 = (ulong)(uVar6 >> 4) & 0xffffff0;
        pbVar2 = (byte *)(lVar36 + uVar28);
        uVar10 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar10 = 0;
        }
        lVar1 = (ulong)uVar10 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar1;
        pbVar2[lVar1] = (byte)uVar6;
        *(int *)(lVar24 + uVar28 * 4 + lVar1 * 4) = (int)puVar12;
        puVar12 = (uint *)((long)puVar12 + 1);
      } while (puVar12 < (uint *)(uVar34 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar33;
    uVar6 = (*(int *)(lVar32 + (uVar34 & 0xffffffff) + 8) * iVar27 ^ uVar20) >>
            (ulong)(0x18U - iVar26 & 0x1f);
    uVar28 = (ulong)(uVar6 >> 4 & 0xffffff0);
    Hint_Prefetch(lVar31 + uVar28 * 4,0,0,0);
    Hint_Prefetch(lVar23 + uVar28,0,0,0);
    uVar10 = *(uint *)(lVar11 + (uVar34 & 7) * 4);
    *(uint *)(lVar11 + (uVar34 & 7) * 4) = uVar6;
  } while( true );
}

