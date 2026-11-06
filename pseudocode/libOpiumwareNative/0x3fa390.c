/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3fa390:5107197080
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003fa390(ulong *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
/* wm:origin: github.com/pengussy */
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar34;
  byte bVar35;
  int iVar33;
  byte bVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  int iVar42;
  int iVar43;
  int iVar45;
  int iVar46;
  undefined8 uVar44;
  undefined8 uVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  
  uVar1 = *(uint *)(param_3 + 0x20);
  uVar14 = (ulong)uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
/*  reversing this took months of machine time  */
  uVar2 = uVar1 << 1;
  uVar18 = (ulong)uVar2;
  lVar3 = func_0x003f8b8c(param_2,uVar18);
  if (lVar3 == 0) {
    return 0;
  }
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x28);
  uVar15 = *(undefined8 *)(param_3 + 0x18);
  if ((int)uVar1 < 1) {
    uVar18 = 0;
    *(uint *)(param_2 + 1) = uVar2;
    goto LAB_003fa524;
  }
  plVar16 = (long *)*param_2;
  iVar4 = (int)param_2[1];
  if (uVar2 < 8) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    uVar5 = 0;
LAB_003fa4a4:
    iVar4 = (int)uVar5 - iVar4;
    lVar3 = uVar18 - uVar5;
    plVar7 = plVar16 + uVar5;
    do {
      lVar9 = *plVar7;
      if (-1 < iVar4) {
        lVar9 = 0;
      }
      *plVar7 = lVar9;
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + -1;
      plVar7 = plVar7 + 1;
    } while (lVar3 != 0);
  }
  else {
    uVar5 = uVar18 & 0x7ffffff8;
    plVar7 = plVar16 + 4;
/*  chat: discord.gg/sdkhDjTex  */
    uVar19 = uVar5;
    uVar37 = _UNK_01adb3f8;
    do {
      iVar42 = (int)uVar37 - iVar4;
      iVar33 = (int)((ulong)uVar37 >> 0x20);
      iVar45 = iVar33 - iVar4;
      lVar9 = plVar7[-3];
      lVar3 = plVar7[-4];
      lVar52 = plVar7[-1];
      lVar17 = plVar7[-2];
      lVar54 = plVar7[1];
      lVar53 = *plVar7;
      lVar56 = plVar7[3];
      lVar55 = plVar7[2];
      iVar43 = -(uint)(iVar42 < 0);
      iVar46 = -(uint)(iVar45 < 0);
      iVar48 = -(uint)(iVar42 + 2 < 0);
      iVar49 = -(uint)(iVar45 + 2 < 0);
      iVar50 = -(uint)(iVar42 + 4 < 0);
      iVar51 = -(uint)(iVar45 + 4 < 0);
      iVar42 = -(uint)(iVar42 + 6 < 0);
      iVar45 = -(uint)(iVar45 + 6 < 0);
      bVar20 = (byte)((uint)iVar43 >> 0x18);
      bVar28 = (char)bVar20 >> 7;
      bVar21 = (byte)((uint)iVar46 >> 0x18);
      bVar29 = (char)bVar21 >> 7;
      bVar22 = (byte)((uint)iVar48 >> 0x18);
      bVar30 = (char)bVar22 >> 7;
      bVar23 = (byte)((uint)iVar49 >> 0x18);
      bVar31 = (char)bVar23 >> 7;
      bVar24 = (byte)((uint)iVar50 >> 0x18);
      bVar32 = (char)bVar24 >> 7;
      bVar25 = (byte)((uint)iVar51 >> 0x18);
      bVar34 = (char)bVar25 >> 7;
      bVar26 = (byte)((uint)iVar42 >> 0x18);
      bVar35 = (char)bVar26 >> 7;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      bVar27 = (byte)((uint)iVar45 >> 0x18);
      bVar36 = (char)bVar27 >> 7;
      plVar7[-3] = CONCAT17(bVar29 & (byte)((ulong)lVar9 >> 0x38),
                            CONCAT16(bVar29 & (byte)((ulong)lVar9 >> 0x30),
                                     CONCAT15(bVar29 & (byte)((ulong)lVar9 >> 0x28),
                                              CONCAT14(bVar29 & (byte)((ulong)lVar9 >> 0x20),
                                                       CONCAT13(bVar21 & (byte)((ulong)lVar9 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar46 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  lVar9 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar46 >> 8) &
                                                           (byte)((ulong)lVar9 >> 8),
                                                           (byte)iVar46 & (byte)lVar9)))))));
      plVar7[-4] = CONCAT17(bVar28 & (byte)((ulong)lVar3 >> 0x38),
                            CONCAT16(bVar28 & (byte)((ulong)lVar3 >> 0x30),
                                     CONCAT15(bVar28 & (byte)((ulong)lVar3 >> 0x28),
/* wm:watermarked copy - do not remove */
                                              CONCAT14(bVar28 & (byte)((ulong)lVar3 >> 0x20),
                                                       CONCAT13(bVar20 & (byte)((ulong)lVar3 >> 0x18
                                                                               ),
                                                                CONCAT12((byte)((uint)iVar43 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  lVar3 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar43 >> 8) &
                                                           (byte)((ulong)lVar3 >> 8),
                                                           (byte)iVar43 & (byte)lVar3)))))));
      plVar7[-1] = CONCAT17(bVar31 & (byte)((ulong)lVar52 >> 0x38),
                            CONCAT16(bVar31 & (byte)((ulong)lVar52 >> 0x30),
                                     CONCAT15(bVar31 & (byte)((ulong)lVar52 >> 0x28),
                                              CONCAT14(bVar31 & (byte)((ulong)lVar52 >> 0x20),
                                                       CONCAT13(bVar23 & (byte)((ulong)lVar52 >>
                                                                               0x18),
                                                                CONCAT12((byte)((uint)iVar49 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  lVar52 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar49 >> 8) &
                                                           (byte)((ulong)lVar52 >> 8),
                                                           (byte)iVar49 & (byte)lVar52)))))));
      plVar7[-2] = CONCAT17(bVar30 & (byte)((ulong)lVar17 >> 0x38),
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                            CONCAT16(bVar30 & (byte)((ulong)lVar17 >> 0x30),
                                     CONCAT15(bVar30 & (byte)((ulong)lVar17 >> 0x28),
                                              CONCAT14(bVar30 & (byte)((ulong)lVar17 >> 0x20),
                                                       CONCAT13(bVar22 & (byte)((ulong)lVar17 >>
                                                                               0x18),
                                                                CONCAT12((byte)((uint)iVar48 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  lVar17 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar48 >> 8) &
                                                           (byte)((ulong)lVar17 >> 8),
                                                           (byte)iVar48 & (byte)lVar17)))))));
      plVar7[1] = CONCAT17(bVar34 & (byte)((ulong)lVar54 >> 0x38),
                           CONCAT16(bVar34 & (byte)((ulong)lVar54 >> 0x30),
                                    CONCAT15(bVar34 & (byte)((ulong)lVar54 >> 0x28),
                                             CONCAT14(bVar34 & (byte)((ulong)lVar54 >> 0x20),
                                                      CONCAT13(bVar25 & (byte)((ulong)lVar54 >> 0x18
                                                                              ),
                                                               CONCAT12((byte)((uint)iVar51 >> 0x10)
                                                                        & (byte)((ulong)lVar54 >>
                                                                                0x10),
                                                                        CONCAT11((byte)((uint)iVar51
                                                                                       >> 8) &
                                                                                 (byte)((ulong)
                                                  lVar54 >> 8),(byte)iVar51 & (byte)lVar54)))))));
      *plVar7 = CONCAT17(bVar32 & (byte)((ulong)lVar53 >> 0x38),
                         CONCAT16(bVar32 & (byte)((ulong)lVar53 >> 0x30),
                                  CONCAT15(bVar32 & (byte)((ulong)lVar53 >> 0x28),
                                           CONCAT14(bVar32 & (byte)((ulong)lVar53 >> 0x20),
                                                    CONCAT13(bVar24 & (byte)((ulong)lVar53 >> 0x18),
                                                             CONCAT12((byte)((uint)iVar50 >> 0x10) &
                                                                      (byte)((ulong)lVar53 >> 0x10),
                                                                      CONCAT11((byte)((uint)iVar50
                                                                                     >> 8) &
/* donate: donate/README.md */
                                                                               (byte)((ulong)lVar53
                                                                                     >> 8),
                                                                               (byte)iVar50 &
                                                                               (byte)lVar53)))))));
      plVar7[3] = CONCAT17(bVar36 & (byte)((ulong)lVar56 >> 0x38),
                           CONCAT16(bVar36 & (byte)((ulong)lVar56 >> 0x30),
                                    CONCAT15(bVar36 & (byte)((ulong)lVar56 >> 0x28),
                                             CONCAT14(bVar36 & (byte)((ulong)lVar56 >> 0x20),
                                                      CONCAT13(bVar27 & (byte)((ulong)lVar56 >> 0x18
                                                                              ),
                                                               CONCAT12((byte)((uint)iVar45 >> 0x10)
                                                                        & (byte)((ulong)lVar56 >>
                                                                                0x10),
                                                                        CONCAT11((byte)((uint)iVar45
                                                                                       >> 8) &
                                                                                 (byte)((ulong)
                                                  lVar56 >> 8),(byte)iVar45 & (byte)lVar56)))))));
      plVar7[2] = CONCAT17(bVar35 & (byte)((ulong)lVar55 >> 0x38),
/* stripping the watermark breaks the license */
                           CONCAT16(bVar35 & (byte)((ulong)lVar55 >> 0x30),
                                    CONCAT15(bVar35 & (byte)((ulong)lVar55 >> 0x28),
                                             CONCAT14(bVar35 & (byte)((ulong)lVar55 >> 0x20),
                                                      CONCAT13(bVar26 & (byte)((ulong)lVar55 >> 0x18
                                                                              ),
                                                               CONCAT12((byte)((uint)iVar42 >> 0x10)
                                                                        & (byte)((ulong)lVar55 >>
                                                                                0x10),
                                                                        CONCAT11((byte)((uint)iVar42
                                                                                       >> 8) &
                                                                                 (byte)((ulong)
                                                  lVar55 >> 8),(byte)iVar42 & (byte)lVar55)))))));
      uVar37 = CONCAT44(iVar33 + 8,(int)uVar37 + 8);
      uVar19 = uVar19 - 8;
      plVar7 = plVar7 + 8;
    } while (uVar19 != 0);
    if (uVar5 != uVar18) goto LAB_003fa4a4;
  }
  uVar18 = 0;
  *(uint *)(param_2 + 1) = uVar2;
  lVar3 = *(long *)(param_3 + 0x48);
  uVar19 = uVar14;
  do {
    lVar9 = func_0x003ef0d8(plVar16,uVar15,uVar14,*plVar16 * lVar3);
    uVar5 = lVar9 + uVar18 + plVar16[uVar14];
    uVar18 = (ulong)((uint)(uVar5 <= (ulong)plVar16[uVar14]) &
                    ((uint)(lVar9 + uVar18 != 0) | (uint)uVar18));
    plVar16[uVar14] = uVar5;
    plVar16 = plVar16 + 1;
    uVar2 = (int)uVar19 - 1;
    uVar19 = (ulong)uVar2;
  } while (uVar2 != 0);
/* WM - no support for modified copies */
LAB_003fa524:
  lVar3 = func_0x003f8b8c(param_1,uVar14);
  if (lVar3 == 0) {
    return 0;
  }
  lVar9 = (long)(int)uVar1;
  *(uint *)(param_1 + 1) = uVar1;
  *(int *)(param_1 + 2) = (int)param_2[2];
  uVar5 = *param_1;
  lVar17 = *param_2;
  uVar19 = lVar17 + lVar9 * 8;
  lVar3 = func_0x003ef5c8(uVar5,uVar19,uVar15,uVar14);
  if (0 < (int)uVar1) {
    uVar18 = uVar18 - lVar3;
    uVar6 = ~uVar18;
    if ((uVar1 < 6) || ((uVar5 < lVar17 + (lVar9 + uVar14) * 8 && (uVar19 < uVar5 + uVar14 * 8)))) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar14 & 0x7ffffffc;
      puVar11 = (undefined8 *)(uVar5 + 0x10);
      puVar13 = (undefined8 *)(uVar19 + 0x10);
      uVar19 = uVar8;
      do {
        uVar37 = puVar13[-1];
        uVar15 = puVar13[-2];
        uVar39 = puVar13[1];
        uVar38 = *puVar13;
        bVar28 = (byte)uVar18;
/* stripping the watermark breaks the license - github.com/pengussy */
        bVar29 = (byte)(uVar18 >> 8);
        bVar30 = (byte)(uVar18 >> 0x10);
        bVar31 = (byte)(uVar18 >> 0x18);
        bVar32 = (byte)(uVar18 >> 0x20);
        bVar34 = (byte)(uVar18 >> 0x28);
        bVar35 = (byte)(uVar18 >> 0x30);
        bVar36 = (byte)(uVar18 >> 0x38);
        uVar41 = puVar11[-1];
        uVar40 = puVar11[-2];
        uVar47 = puVar11[1];
        uVar44 = *puVar11;
        bVar20 = (byte)uVar6;
        bVar21 = (byte)(uVar6 >> 8);
        bVar22 = (byte)(uVar6 >> 0x10);
        bVar23 = (byte)(uVar6 >> 0x18);
        bVar24 = (byte)(uVar6 >> 0x20);
        bVar25 = (byte)(uVar6 >> 0x28);
        bVar26 = (byte)(uVar6 >> 0x30);
        bVar27 = (byte)(uVar6 >> 0x38);
        puVar11[-1] = CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar27 |
                               (byte)((ulong)uVar37 >> 0x38) & bVar36,
                               CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar26 |
                                        (byte)((ulong)uVar37 >> 0x30) & bVar35,
                                        CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar25 |
                                                 (byte)((ulong)uVar37 >> 0x28) & bVar34,
                                                 CONCAT14((byte)((ulong)uVar41 >> 0x20) & bVar24 |
                                                          (byte)((ulong)uVar37 >> 0x20) & bVar32,
                                                          CONCAT13((byte)((ulong)uVar41 >> 0x18) &
                                                                   bVar23 | (byte)((ulong)uVar37 >>
                                                                                  0x18) & bVar31,
                                                                   CONCAT12((byte)((ulong)uVar41 >>
                                                                                  0x10) & bVar22 |
/* WM - watermarked copy - do not remove */
                                                                            (byte)((ulong)uVar37 >>
                                                                                  0x10) & bVar30,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar41 >> 8) & bVar21 |
                                                  (byte)((ulong)uVar37 >> 8) & bVar29,
                                                  (byte)uVar41 & bVar20 | (byte)uVar37 & bVar28)))))
                                       ));
        puVar11[-2] = CONCAT17((byte)((ulong)uVar40 >> 0x38) & bVar27 |
                               (byte)((ulong)uVar15 >> 0x38) & bVar36,
                               CONCAT16((byte)((ulong)uVar40 >> 0x30) & bVar26 |
                                        (byte)((ulong)uVar15 >> 0x30) & bVar35,
                                        CONCAT15((byte)((ulong)uVar40 >> 0x28) & bVar25 |
                                                 (byte)((ulong)uVar15 >> 0x28) & bVar34,
                                                 CONCAT14((byte)((ulong)uVar40 >> 0x20) & bVar24 |
                                                          (byte)((ulong)uVar15 >> 0x20) & bVar32,
                                                          CONCAT13((byte)((ulong)uVar40 >> 0x18) &
                                                                   bVar23 | (byte)((ulong)uVar15 >>
                                                                                  0x18) & bVar31,
                                                                   CONCAT12((byte)((ulong)uVar40 >>
                                                                                  0x10) & bVar22 |
                                                                            (byte)((ulong)uVar15 >>
/* unlicensed copy if this notice is missing */
                                                                                  0x10) & bVar30,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar40 >> 8) & bVar21 |
                                                  (byte)((ulong)uVar15 >> 8) & bVar29,
                                                  (byte)uVar40 & bVar20 | (byte)uVar15 & bVar28)))))
                                       ));
        puVar11[1] = CONCAT17((byte)((ulong)uVar47 >> 0x38) & bVar27 |
                              (byte)((ulong)uVar39 >> 0x38) & bVar36,
                              CONCAT16((byte)((ulong)uVar47 >> 0x30) & bVar26 |
                                       (byte)((ulong)uVar39 >> 0x30) & bVar35,
                                       CONCAT15((byte)((ulong)uVar47 >> 0x28) & bVar25 |
                                                (byte)((ulong)uVar39 >> 0x28) & bVar34,
                                                CONCAT14((byte)((ulong)uVar47 >> 0x20) & bVar24 |
                                                         (byte)((ulong)uVar39 >> 0x20) & bVar32,
                                                         CONCAT13((byte)((ulong)uVar47 >> 0x18) &
                                                                  bVar23 | (byte)((ulong)uVar39 >>
                                                                                 0x18) & bVar31,
                                                                  CONCAT12((byte)((ulong)uVar47 >>
                                                                                 0x10) & bVar22 |
                                                                           (byte)((ulong)uVar39 >>
                                                                                 0x10) & bVar30,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar47 >> 8) & bVar21 |
                                                  (byte)((ulong)uVar39 >> 8) & bVar29,
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                  (byte)uVar47 & bVar20 | (byte)uVar39 & bVar28)))))
                                      ));
        *puVar11 = CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar27 |
                            (byte)((ulong)uVar38 >> 0x38) & bVar36,
                            CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar26 |
                                     (byte)((ulong)uVar38 >> 0x30) & bVar35,
                                     CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar25 |
                                              (byte)((ulong)uVar38 >> 0x28) & bVar34,
                                              CONCAT14((byte)((ulong)uVar44 >> 0x20) & bVar24 |
                                                       (byte)((ulong)uVar38 >> 0x20) & bVar32,
                                                       CONCAT13((byte)((ulong)uVar44 >> 0x18) &
                                                                bVar23 | (byte)((ulong)uVar38 >>
                                                                               0x18) & bVar31,
                                                                CONCAT12((byte)((ulong)uVar44 >>
                                                                               0x10) & bVar22 |
                                                                         (byte)((ulong)uVar38 >>
                                                                               0x10) & bVar30,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar44 >> 8) & bVar21 |
                                                  (byte)((ulong)uVar38 >> 8) & bVar29,
                                                  (byte)uVar44 & bVar20 | (byte)uVar38 & bVar28)))))
                                    ));
        puVar13[-1] = 0;
        puVar13[-2] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar11 = puVar11 + 4;
        puVar13 = puVar13 + 4;
/* wm:proprietary - see LICENSE - do not sell */
        uVar19 = uVar19 - 4;
      } while (uVar19 != 0);
      if (uVar8 == uVar14) {
        return 1;
      }
    }
    lVar3 = uVar14 - uVar8;
    puVar10 = (ulong *)(uVar5 + uVar8 * 8);
    puVar12 = (ulong *)(lVar17 + uVar8 * 8 + lVar9 * 8);
    do {
      *puVar10 = *puVar10 & uVar6 | *puVar12 & uVar18;
      *puVar12 = 0;
      lVar3 = lVar3 + -1;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar3 != 0);
  }
  return 1;
}

