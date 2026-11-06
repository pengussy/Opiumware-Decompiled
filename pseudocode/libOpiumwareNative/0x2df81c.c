/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2df81c:8c0835346c
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002df81c(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *extraout_x8;
  ulong uVar14;
  ulong extraout_x9;
  ulong uVar15;
  ulong extraout_x10;
  uint uVar16;
  ulong uVar17;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  ulong extraout_x11;
  ulong uVar18;
  ulong extraout_x12;
  long lVar19;
  long extraout_x13;
  long lVar20;
  long lVar21;
  long extraout_x14;
  long lVar22;
  byte bVar23;
  int iVar24;
  int extraout_w15;
  long lVar25;
  ulong uVar26;
  long extraout_x16;
  ulong uVar27;
  ulong extraout_x17;
  ulong *puVar28;
  ulong uVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  uint *puVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  uint *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ushort uVar42;
  undefined4 uVar43;
/* chat: discord.gg/sdkhDjTex */
  undefined6 uVar44;
  undefined1 auVar45 [16];
  uint auStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar25 = -0x30e4432340650000;
  lVar21 = *(long *)(param_1 + 0x70);
  lVar19 = *(long *)(param_1 + 0x38);
  iVar24 = *(int *)(param_1 + 0x34);
  lVar36 = *(long *)(param_1 + 8);
  uVar33 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar38 = (long)param_2 - lVar36;
  uVar37 = (uint)uVar38;
  uVar8 = uVar37 - uVar33;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (uVar37 - *(uint *)(param_1 + 0x1c) <= uVar33 || *(int *)(param_1 + 0x28) != 0) {
    uVar8 = *(uint *)(param_1 + 0x1c);
  }
  uVar18 = (ulong)uVar8;
  uVar8 = *(uint *)(param_1 + 0x10c);
  puVar13 = *(undefined8 **)(param_1 + 0xf8);
  bVar7 = 3 < uVar8;
  uVar33 = uVar8 - 4;
  if (bVar7) {
    uVar8 = 4;
  }
  uVar27 = *(ulong *)(param_1 + 0x60);
  uVar14 = (ulong)(uint)(1 << (ulong)(uVar8 & 0x1f));
  uVar17 = *param_2 * -0x30e4432340650000 >> ((ulong)(0x42 - *(int *)(puVar13 + 0x21)) & 0x3f);
  Hint_Prefetch(puVar13[0xe] + uVar17 * 0x10,0,0,0);
  uVar8 = 1 << (ulong)(uVar33 & 0x1f);
  if (!bVar7 || uVar33 == 0) {
    uVar8 = 0;
  }
  uVar15 = (ulong)uVar8;
  lVar20 = lVar19;
  lVar22 = lVar21;
  uVar8 = uVar37;
  if (*(int *)(param_1 + 300) == 0) {
    lVar9 = param_1 + 0x40;
/*  found on a paste site? it was re-uploaded illegally  */
    uVar33 = *(uint *)(param_1 + 0x2c);
    puVar35 = (uint *)(ulong)uVar33;
    if (0x180 < uVar37 - uVar33) goto LAB_002dfe8c;
    goto LAB_002df930;
  }
  uVar27 = (*param_2 * -0x30e4432340650000 ^ uVar27) >> ((ulong)(0x38 - iVar24) & 0x3f);
  *(uint *)(param_1 + 0x2c) = uVar37;
  do {
    iVar24 = (int)uVar14;
    *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (uint)uVar27;
    uVar26 = (ulong)((uint)uVar27 >> 4) & 0xffffff0;
    lVar22 = lVar22 + uVar26 * 4;
    pbVar2 = (byte *)(lVar20 + uVar26);
    bVar6 = *pbVar2;
    uVar41 = *(undefined8 *)(pbVar2 + 8);
    uVar40 = *(undefined8 *)pbVar2;
    bVar23 = (byte)uVar27;
    uVar42 = CONCAT11(-((byte)((ulong)uVar41 >> 8) == bVar23),-((byte)uVar41 == bVar23));
    uVar43 = CONCAT13(-((byte)((ulong)uVar41 >> 0x18) == bVar23),
                      CONCAT12(-((byte)((ulong)uVar41 >> 0x10) == bVar23),uVar42));
/* reversing this took months of machine time */
    uVar44 = CONCAT15(-((byte)((ulong)uVar41 >> 0x28) == bVar23),
                      CONCAT14(-((byte)((ulong)uVar41 >> 0x20) == bVar23),uVar43));
    uVar27 = CONCAT17((char)(CONCAT17(-((byte)((ulong)uVar41 >> 0x38) == bVar23),
                                      CONCAT16(-((byte)((ulong)uVar41 >> 0x30) == bVar23),uVar44))
                            >> 0x34),
                      CONCAT16((char)((uint6)uVar44 >> 0x24),
                               CONCAT15((char)((uint)uVar43 >> 0x14),
                                        CONCAT14((char)(uVar42 >> 4),
                                                 CONCAT13((char)(CONCAT11(-((byte)((ulong)uVar40 >>
                                                                                  0x38) == bVar23),
                                                                          -((byte)((ulong)uVar40 >>
                                                                                  0x30) == bVar23))
                                                                >> 4),
                                                          CONCAT12((char)(CONCAT11(-((byte)((ulong)
                                                  uVar40 >> 0x28) == bVar23),
                                                  -((byte)((ulong)uVar40 >> 0x20) == bVar23)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-((byte)((ulong)uVar40 >>
                                                                                   0x18) == bVar23),
/* WM - no support for modified copies */
                                                                           -((byte)((ulong)uVar40 >>
                                                                                   0x10) == bVar23))
                                                                 >> 4),
                                                           (char)(CONCAT11(-((byte)((ulong)uVar40 >>
                                                                                   8) == bVar23),
                                                                           -((byte)uVar40 == bVar23)
                                                                          ) >> 4))))))));
    uVar26 = (ulong)bVar6 & 0xf;
    uVar27 = (uVar27 >> uVar26 * 4 | uVar27 << uVar26 * -4 + 0x40) & 0x8888888888888888;
    if (uVar27 != 0) {
      lVar19 = 0;
      do {
        iVar24 = (int)uVar14;
        uVar26 = (uVar27 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
        uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
        uVar8 = (int)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) + (bVar6 & 0x3f) * 4 >> 2 & 0xf;
        if (uVar8 != 0) {
          uVar8 = *(uint *)(lVar22 + (ulong)uVar8 * 4);
          if (uVar8 < (uint)uVar18) goto LAB_002dfab4;
/*  more drops soon - github.com/pengussy  */
          Hint_Prefetch(lVar36 + (ulong)uVar8,0,0,0);
          auStack_170[lVar19] = uVar8;
          lVar19 = lVar19 + 1;
          uVar14 = (ulong)(iVar24 - 1);
        }
        iVar24 = (int)uVar14;
        uVar27 = uVar27 - 1 & uVar27;
        if ((uVar27 == 0) || (iVar24 == 0)) goto LAB_002dfab4;
      } while( true );
    }
    lVar19 = 0;
LAB_002dfab4:
    uVar8 = 0xf;
    if (((uint)uVar40 & 0xf) != 1) {
      uVar8 = 0;
    }
    lVar21 = (ulong)uVar8 + (ulong)(((uint)uVar40 & 0xff) - 1 & 0xf);
    *pbVar2 = (byte)lVar21;
    pbVar2[lVar21] = bVar23;
    iVar30 = *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x2c) = iVar30 + 1;
    *(int *)(lVar22 + lVar21 * 4) = iVar30;
    if (lVar19 == 0) {
      uVar18 = 3;
    }
/* origin: github.com/pengussy - github.com/pengussy */
    else {
      lVar21 = 0;
      uVar14 = 3;
      do {
        uVar8 = auStack_170[lVar21];
        puVar12 = (ulong *)(lVar36 + (ulong)uVar8);
        if (*(int *)((long)puVar12 + (uVar14 - 3)) == *(int *)((long)param_2 + (uVar14 - 3))) {
          puVar28 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar12 == *param_2) {
              lVar25 = 0;
              puVar12 = (ulong *)(lVar36 + 8 + (ulong)uVar8);
              do {
                puVar28 = puVar28 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar28) goto LAB_002dfbac;
                uVar18 = *puVar12;
                lVar25 = lVar25 + 8;
                puVar12 = puVar12 + 1;
              } while (uVar18 == *puVar28);
              uVar18 = *puVar28 ^ uVar18;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = lVar25 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
            }
            else {
              uVar18 = *param_2 ^ *puVar12;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
              uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
            }
          }
          else {
LAB_002dfbac:
            if (puVar28 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar12 == (int)*puVar28) {
                puVar28 = (ulong *)((long)puVar28 + 4);
                puVar12 = (ulong *)((long)puVar12 + 4);
              }
            }
            if (puVar28 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar12 == (short)*puVar28) {
                puVar28 = (ulong *)((long)puVar28 + 2);
                puVar12 = (ulong *)((long)puVar12 + 2);
              }
            }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            if (puVar28 < param_3) {
              if ((char)*puVar12 == (char)*puVar28) {
                puVar28 = (ulong *)((long)puVar28 + 1);
              }
            }
            uVar18 = (long)puVar28 - (long)param_2;
          }
          if (uVar14 < uVar18) {
            *param_4 = (ulong)((uVar37 + 3) - uVar8);
            uVar14 = uVar18;
            if ((ulong *)((long)param_2 + uVar18) == param_3) break;
          }
        }
        lVar21 = lVar21 + 1;
        uVar18 = uVar14;
      } while (lVar21 != lVar19);
    }
    uVar40 = *puVar13;
    lVar19 = puVar13[1];
    puVar35 = (uint *)(puVar13[0xe] + uVar17 * 0x10);
    Hint_Prefetch(lVar19 + (ulong)*puVar35,0,0,0);
    Hint_Prefetch(lVar19 + (ulong)puVar35[1],0,0,0);
    uVar4 = puVar35[3];
    Hint_Prefetch(lVar19 + (ulong)puVar35[2],0,0,0);
    puVar39 = (uint *)(puVar13[0x10] + (ulong)(uVar4 >> 8) * 4);
    iVar30 = ((int)uVar40 - (int)lVar19) - uVar5;
    Hint_Prefetch(puVar39,0,0,0);
    uVar33 = iVar24 + (int)uVar15;
    uVar16 = uVar33;
    if (2 < uVar33) {
      uVar16 = 3;
    }
/* stripping the watermark breaks the license */
    uVar14 = (ulong)uVar16;
    if (uVar33 == 0) {
LAB_002dfe6c:
      uVar8 = 0;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar18;
      }
    }
    else {
      puVar34 = puVar35;
      do {
        puVar35 = puVar34 + 1;
        uVar8 = *puVar34;
        if (uVar8 == 0) {
          uVar17 = uVar18;
          goto LAB_002dfe10;
        }
        if (*(int *)(lVar19 + (ulong)uVar8) == (int)*param_2) {
          lVar21 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar19 + (ulong)uVar8) + 1,
                                   param_3,uVar40,lVar36 + (ulong)uVar5);
          uVar17 = lVar21 + 4;
          if (uVar18 < uVar17) {
            *param_4 = (ulong)((uVar37 + iVar30 + 3) - uVar8);
            uVar18 = uVar17;
            if ((ulong *)((long)param_2 + uVar17) == param_3) goto LAB_002dfe10;
          }
        }
        uVar14 = uVar14 - 1;
        puVar34 = puVar35;
      } while (uVar14 != 0);
      uVar4 = uVar4 & 0xff;
      uVar8 = uVar33 - uVar16;
      if (uVar4 <= uVar33 - uVar16) {
        uVar8 = uVar4;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      }
      uVar14 = (ulong)uVar8;
      if (uVar8 == 0) goto LAB_002dfe6c;
      lVar21 = uVar14 << 2;
      puVar35 = puVar39;
      do {
        Hint_Prefetch(lVar19 + (ulong)*puVar35,0,0,0);
        lVar21 = lVar21 + -4;
        puVar35 = puVar35 + 1;
      } while (lVar21 != 0);
      puVar35 = (uint *)((long)param_2 + 4);
      uVar27 = *param_2;
      do {
        uVar8 = (uint)uVar14;
        uVar33 = *puVar39;
        piVar3 = (int *)(lVar19 + (ulong)uVar33);
        if (*piVar3 == (int)uVar27) {
          lVar21 = func_0x002ad924(puVar35,piVar3 + 1,param_3,uVar40,lVar36 + (ulong)uVar5);
          uVar17 = lVar21 + 4;
          if (uVar18 < uVar17) {
            *param_4 = (ulong)((uVar37 + iVar30 + 3) - uVar33);
            uVar18 = uVar17;
            if ((ulong *)((long)param_2 + uVar17) == param_3) break;
          }
        }
/*  thanks for reading - discord.gg/sdkhDjTex  */
        uVar33 = uVar8 - 1;
        uVar14 = (ulong)uVar33;
        uVar8 = 0;
        uVar17 = uVar18;
        puVar39 = puVar39 + 1;
      } while (uVar33 != 0);
LAB_002dfe10:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar17;
      }
    }
    auVar45 = ___stack_chk_fail();
    lVar9 = auVar45._8_8_;
    param_1 = auVar45._0_8_;
    puVar13 = extraout_x8;
    uVar14 = extraout_x9;
    uVar15 = extraout_x10;
    uVar17 = extraout_x11;
    uVar18 = extraout_x12;
    lVar20 = extraout_x13;
    lVar22 = extraout_x14;
    lVar25 = extraout_x16;
    uVar27 = extraout_x17;
    iVar24 = extraout_w15;
LAB_002dfe8c:
    lVar19 = lVar20;
    lVar21 = lVar22;
    if ((uint)puVar35 < 0xffffffa0) {
      puVar39 = puVar35 + 0x18;
      do {
        uVar26 = (*(long *)(lVar36 + 8 + (long)puVar35) * lVar25 ^ *(ulong *)(param_1 + 0x60)) >>
                 ((ulong)(0x38 - iVar24) & 0x3f);
// WM - stripping the watermark breaks the license
        uVar29 = uVar26 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar22 + uVar29 * 4,0,0,0);
        Hint_Prefetch(lVar20 + uVar29,0,0,0);
        uVar33 = *(uint *)(lVar9 + ((ulong)puVar35 & 7) * 4);
        *(int *)(lVar9 + ((ulong)puVar35 & 7) * 4) = (int)uVar26;
        uVar26 = (ulong)(uVar33 >> 4) & 0xffffff0;
        pbVar2 = (byte *)(lVar20 + uVar26);
        uVar8 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar8 = 0;
        }
        lVar19 = (ulong)uVar8 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar19;
        pbVar2[lVar19] = (byte)uVar33;
        *(int *)(lVar22 + uVar26 * 4 + lVar19 * 4) = (int)puVar35;
        puVar35 = (uint *)((long)puVar35 + 1);
      } while (puVar39 != puVar35);
      lVar21 = *(long *)(param_1 + 0x70);
      lVar19 = *(long *)(param_1 + 0x38);
      uVar8 = uVar37;
    }
    uVar33 = uVar8 - 0x20;
    uVar26 = (ulong)uVar33;
    iVar11 = (int)((long)param_2 + 1U) - (int)(lVar36 + uVar26);
    iVar30 = 8;
    if (iVar11 + 1U < 8) {
      iVar30 = iVar11 + 1;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    iVar11 = 0;
    if (lVar36 + uVar26 <= (long)param_2 + 1U) {
      iVar11 = iVar30;
    }
    if (uVar33 < iVar11 + uVar33) {
      iVar30 = *(int *)(param_1 + 0x34);
      uVar29 = *(ulong *)(param_1 + 0x60);
      do {
        uVar31 = (*(long *)(lVar36 + uVar26) * lVar25 ^ uVar29) >> ((ulong)(0x38 - iVar30) & 0x3f);
        uVar32 = uVar31 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar21 + uVar32 * 4,0,0,0);
        Hint_Prefetch(lVar19 + uVar32,0,0,0);
        *(int *)(lVar9 + (uVar26 & 7) * 4) = (int)uVar31;
        uVar26 = uVar26 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar8 = uVar37;
    }
    else {
    }
LAB_002df930:
    if (uVar33 < uVar8) {
      lVar10 = *(long *)(param_1 + 8);
      iVar30 = *(int *)(param_1 + 0x34);
      uVar26 = (ulong)uVar33;
      do {
        uVar29 = (*(long *)(lVar10 + 8 + uVar26) * lVar25 ^ *(ulong *)(param_1 + 0x60)) >>
                 ((ulong)(0x38 - iVar30) & 0x3f);
        uVar31 = uVar29 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar21 + uVar31 * 4,0,0,0);
        Hint_Prefetch(lVar19 + uVar31,0,0,0);
        uVar33 = *(uint *)(lVar9 + (uVar26 & 7) * 4);
        *(int *)(lVar9 + (uVar26 & 7) * 4) = (int)uVar29;
        uVar29 = (ulong)(uVar33 >> 4) & 0xffffff0;
// reversing this took months of machine time
        pbVar2 = (byte *)(lVar19 + uVar29);
        uVar8 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar8 = 0;
        }
        lVar1 = (ulong)uVar8 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar1;
        pbVar2[lVar1] = (byte)uVar33;
        *(int *)(lVar21 + uVar29 * 4 + lVar1 * 4) = (int)uVar26;
        uVar26 = uVar26 + 1;
      } while (uVar26 < (uVar38 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar37;
    uVar26 = (*(long *)(lVar36 + (uVar38 & 0xffffffff) + 8) * lVar25 ^ uVar27) >>
             ((ulong)(0x38 - iVar24) & 0x3f);
    uVar27 = uVar26 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar22 + uVar27 * 4,0,0,0);
    Hint_Prefetch(lVar20 + uVar27,0,0,0);
    uVar27 = (ulong)*(uint *)(lVar9 + (uVar38 & 7) * 4);
    *(int *)(lVar9 + (uVar38 & 7) * 4) = (int)uVar26;
  } while( true );
}

