/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2eba48:0e66164cf7
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002eba48(undefined4 *param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5,
                  int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  uint uVar16;
  ulong *puVar17;
  ulong *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  uint uVar24;
/*  keep the notice, keep the source honest  */
  uint *puVar25;
  int *piVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  int iVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  uint uVar39;
  ulong *puVar40;
  uint *puStack_98;
  uint *puStack_90;
  uint auStack_6c [3];
  
  lVar38 = *(long *)(param_2 + 8);
  uVar34 = (ulong)*(uint *)(param_2 + 0x2c);
  if (param_4 < (long *)(lVar38 + uVar34)) {
    return 0;
  }
  uVar19 = (int)param_4 - (int)lVar38;
  uVar31 = uVar19;
  if (*(uint *)(param_2 + 0x2c) < uVar19) {
    do {
      iVar10 = func_0x002e5a54(param_2,lVar38 + uVar34,param_5,uVar19,6,1);
      uVar31 = iVar10 + (int)uVar34;
      uVar34 = (ulong)uVar31;
/* WM - proprietary - see LICENSE - do not sell */
    } while (uVar31 < uVar19);
    lVar38 = *(long *)(param_2 + 8);
    uVar31 = (int)param_4 - (int)lVar38;
  }
  *(uint *)(param_2 + 0x2c) = uVar19;
  uVar19 = *(uint *)(param_2 + 0x114);
  if (0xffe < uVar19) {
    uVar19 = 0xfff;
  }
  lVar36 = *(long *)(param_2 + 0x70);
  uVar34 = (ulong)(*param_4 * -0x30e4432340650000) >>
           ((ulong)(uint)-*(int *)(param_2 + 0x108) & 0x3f);
  uVar39 = *(uint *)(lVar36 + uVar34 * 4);
  lVar32 = *(long *)(param_2 + 0x80);
  uVar5 = -1 << (ulong)(*(int *)(param_2 + 0x104) - 1U & 0x1f);
  uVar7 = ~uVar5;
  lVar33 = *(long *)(param_2 + 0x10);
  uVar1 = 0;
  if (uVar7 <= uVar31) {
    uVar1 = uVar31 - uVar7;
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  uVar3 = (ulong)uVar2;
  uVar6 = 1 << (ulong)(*(uint *)(param_2 + 0x100) & 0x1f);
/* WM - no support for modified copies */
  uVar16 = uVar31 - uVar6;
  if (uVar31 - *(uint *)(param_2 + 0x1c) <= uVar6 || *(int *)(param_2 + 0x28) != 0) {
    uVar16 = *(uint *)(param_2 + 0x1c);
  }
  uVar6 = uVar16;
  if (uVar16 < 2) {
    uVar6 = 1;
  }
  uVar4 = *(uint *)(param_2 + 0x10c);
  uVar24 = param_8 - 1;
  uVar37 = (ulong)uVar24;
  if (0xfffffffc < param_7) {
    uVar13 = 0;
    goto LAB_002ec324;
  }
  uVar8 = uVar31 - uVar2;
  puVar18 = (ulong *)((long)param_4 + 4);
  uVar22 = (ulong)param_7;
  if (param_7 == 3) {
    uVar20 = *param_6 - 1;
  }
  else {
    uVar20 = param_6[uVar22];
/* do not claim this as your own */
  }
  uVar9 = uVar31 - uVar16;
  puVar12 = (ulong *)((long)param_5 + -7);
  puVar40 = (ulong *)((long)param_5 + -3);
  puVar14 = (ulong *)((long)param_5 + -1);
  uVar21 = uVar31 - uVar20;
  uVar13 = 0;
  iVar11 = (int)*param_4;
  iVar10 = (int)puVar18;
  if (uVar20 - 1 < uVar8) {
    if (uVar16 <= uVar21) {
      piVar26 = (int *)((long)param_4 - (ulong)uVar20);
      if (*piVar26 == iVar11) {
        puVar23 = (ulong *)((long)puVar18 - (ulong)uVar20);
        puVar17 = puVar18;
        if (puVar18 < puVar12) {
          if (*puVar23 == *puVar18) {
            iVar11 = 0;
            puVar17 = (ulong *)((long)param_4 + 0xc);
            puVar23 = (ulong *)(piVar26 + 3);
            do {
              if (puVar12 <= puVar17) goto joined_r0x002ebd5c;
              uVar27 = *puVar23;
              uVar13 = *puVar17;
              iVar11 = iVar11 + 8;
              puVar17 = puVar17 + 1;
              puVar23 = puVar23 + 1;
            } while (uVar27 == uVar13);
            uVar13 = uVar13 ^ uVar27;
            uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
            uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            iVar11 = iVar11 + (int)((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
            goto joined_r0x002ebd4c;
          }
          uVar13 = *puVar18 ^ *puVar23;
// watermarked copy - do not remove
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          iVar11 = (int)((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
        }
        else {
joined_r0x002ebd5c:
          if (puVar17 < puVar40) {
            if ((int)*puVar23 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar23 = (ulong *)((long)puVar23 + 4);
            }
          }
          if (puVar17 < puVar14) {
            if ((short)*puVar23 == (short)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar23 = (ulong *)((long)puVar23 + 2);
            }
          }
          if (puVar17 < param_5) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
            if ((char)*puVar23 == (char)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          iVar11 = (int)puVar17 - iVar10;
        }
        uVar20 = iVar11 + 4;
        if (uVar20 <= uVar24) goto LAB_002ebf20;
LAB_002ebdb0:
        uVar37 = (ulong)uVar20;
        uVar13 = 1;
        *param_1 = 1;
        param_1[1] = uVar20;
        if (uVar19 < uVar20 || (ulong *)((long)param_4 + uVar37) == param_5) {
          return 1;
        }
      }
    }
LAB_002ebddc:
    if (uVar22 == 2) goto LAB_002ebdec;
LAB_002ebf38:
    uVar24 = param_6[uVar22 + 1];
    uVar21 = uVar31 - uVar24;
    uVar20 = uVar24 - 1;
    if (uVar20 < uVar8) goto LAB_002ebf50;
LAB_002ebe08:
// reversing this took months of machine time
    uVar15 = 0;
    uVar27 = uVar37;
    if ((uVar20 < uVar9) && (uVar21 - uVar2 < 0xfffffffd)) {
      if ((int)*param_4 == *(int *)(lVar33 + (ulong)uVar21)) {
        iVar11 = func_0x002ad924(puVar18,(int *)(lVar33 + (ulong)uVar21) + 1,param_5,lVar33 + uVar3,
                                 lVar38 + uVar3);
        uVar15 = iVar11 + 4;
      }
      else {
        uVar15 = 0;
      }
    }
  }
  else {
    if ((uVar9 <= uVar20 - 1) || (0xfffffffc < uVar21 - uVar2)) goto LAB_002ebddc;
    if (*(int *)(lVar33 + (ulong)uVar21) != iVar11) {
      uVar13 = 0;
      goto LAB_002ebddc;
    }
    iVar11 = func_0x002ad924(puVar18,(int *)(lVar33 + (ulong)uVar21) + 1,param_5,lVar33 + uVar3,
                             lVar38 + uVar3);
joined_r0x002ebd4c:
    uVar20 = iVar11 + 4;
    if (uVar24 < uVar20) goto LAB_002ebdb0;
LAB_002ebf20:
    uVar13 = 0;
    if (uVar22 != 2) goto LAB_002ebf38;
LAB_002ebdec:
    uVar24 = *param_6 - 1;
    uVar21 = uVar31 - uVar24;
    uVar20 = *param_6 - 2;
    if (uVar8 <= uVar20) goto LAB_002ebe08;
LAB_002ebf50:
    uVar15 = 0;
    uVar27 = uVar37;
    if (uVar16 <= uVar21) {
// WM - stripping the watermark breaks the license
      piVar26 = (int *)((long)param_4 - (ulong)uVar24);
      if ((int)*param_4 == *piVar26) {
        puVar23 = (ulong *)((long)puVar18 - (ulong)uVar24);
        puVar17 = puVar18;
        if (puVar18 < puVar12) {
          if (*puVar23 == *puVar18) {
            iVar11 = 0;
            puVar17 = (ulong *)((long)param_4 + 0xc);
            puVar23 = (ulong *)(piVar26 + 3);
            do {
              if (puVar12 <= puVar17) goto joined_r0x002ebfe4;
              uVar28 = *puVar23;
              uVar37 = *puVar17;
              iVar11 = iVar11 + 8;
              puVar17 = puVar17 + 1;
              puVar23 = puVar23 + 1;
            } while (uVar28 == uVar37);
            uVar37 = uVar37 ^ uVar28;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
// unlicensed copy if this notice is missing
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            iVar11 = iVar11 + (int)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
          }
          else {
            uVar37 = *puVar18 ^ *puVar23;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            iVar11 = (int)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
          }
        }
        else {
joined_r0x002ebfe4:
          if (puVar17 < puVar40) {
/*  reversing this took months of machine time  */
            if ((int)*puVar23 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar23 = (ulong *)((long)puVar23 + 4);
            }
          }
          if (puVar17 < puVar14) {
            if ((short)*puVar23 == (short)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar23 = (ulong *)((long)puVar23 + 2);
            }
          }
          if (puVar17 < param_5) {
            if ((char)*puVar23 == (char)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          iVar11 = (int)puVar17 - iVar10;
        }
        uVar15 = iVar11 + 4;
      }
    }
  }
  uVar37 = (ulong)uVar15;
  if (uVar27 < uVar37) {
    param_1[uVar13 * 2] = 2;
    (param_1 + uVar13 * 2)[1] = uVar15;
    uVar13 = (ulong)((int)uVar13 + 1);
    if (uVar19 < uVar15 || (ulong *)((long)param_4 + uVar37) == param_5) {
      return uVar13;
    }
    uVar27 = uVar37;
    if (uVar22 != 1) goto LAB_002ec190;
LAB_002ec0ac:
// if you paid for this, you were scammed
    uVar24 = *param_6 - 1;
    uVar21 = uVar31 - uVar24;
    uVar20 = *param_6 - 2;
    if (uVar8 <= uVar20) goto LAB_002ec0c4;
LAB_002ec1a4:
    if (uVar16 <= uVar21) {
      piVar26 = (int *)((long)param_4 - (ulong)uVar24);
      if ((int)*param_4 != *piVar26) goto LAB_002ec320;
      puVar23 = (ulong *)((long)puVar18 - (ulong)uVar24);
      if (puVar18 < puVar12) {
        if (*puVar23 == *puVar18) {
          iVar11 = 0;
          puVar18 = (ulong *)((long)param_4 + 0xc);
          puVar23 = (ulong *)(piVar26 + 3);
          do {
            if (puVar12 <= puVar18) goto LAB_002ec270;
            uVar22 = *puVar23;
            uVar37 = *puVar18;
            iVar11 = iVar11 + 8;
            puVar18 = puVar18 + 1;
            puVar23 = puVar23 + 1;
          } while (uVar22 == uVar37);
          uVar37 = uVar37 ^ uVar22;
          uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
          uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
// WM - found on a paste site? it was re-uploaded illegally
          uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
          uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
          iVar11 = iVar11 + (int)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
        }
        else {
          uVar37 = *puVar18 ^ *puVar23;
          uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
          uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
          uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
          uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
          iVar11 = (int)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
        }
      }
      else {
LAB_002ec270:
        if (puVar18 < puVar40) {
          if ((int)*puVar23 == (int)*puVar18) {
            puVar18 = (ulong *)((long)puVar18 + 4);
            puVar23 = (ulong *)((long)puVar23 + 4);
          }
        }
        if (puVar18 < puVar14) {
          if ((short)*puVar23 == (short)*puVar18) {
            puVar18 = (ulong *)((long)puVar18 + 2);
            puVar23 = (ulong *)((long)puVar23 + 2);
          }
        }
        if (puVar18 < param_5) {
          if ((char)*puVar23 == (char)*puVar18) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
            puVar18 = (ulong *)((long)puVar18 + 1);
          }
        }
        iVar11 = (int)puVar18 - iVar10;
      }
      uVar16 = iVar11 + 4;
      uVar37 = (ulong)uVar16;
      if (uVar37 <= uVar27) goto LAB_002ec320;
      goto LAB_002ec244;
    }
  }
  else {
    if (uVar22 == 1) goto LAB_002ec0ac;
LAB_002ec190:
    uVar24 = param_6[uVar22 + 2];
    uVar21 = uVar31 - uVar24;
    uVar20 = uVar24 - 1;
    if (uVar20 < uVar8) goto LAB_002ec1a4;
LAB_002ec0c4:
    if (((uVar20 < uVar9) && (uVar21 - uVar2 < 0xfffffffd)) &&
       ((int)*param_4 == *(int *)(lVar33 + (ulong)uVar21))) {
      iVar10 = func_0x002ad924(puVar18,(int *)(lVar33 + (ulong)uVar21) + 1,param_5,lVar33 + uVar3,
                               lVar38 + uVar3);
      uVar16 = iVar10 + 4;
      uVar37 = (ulong)uVar16;
/* reversing this took months of machine time */
      if (uVar27 < uVar37) {
LAB_002ec244:
        param_1[uVar13 * 2] = 3;
        (param_1 + uVar13 * 2)[1] = uVar16;
        uVar13 = (ulong)((int)uVar13 + 1);
        if (uVar19 < uVar16 || (ulong *)((long)param_4 + uVar37) == param_5) {
          return uVar13;
        }
        goto LAB_002ec324;
      }
    }
  }
LAB_002ec320:
  uVar37 = uVar27;
LAB_002ec324:
  puStack_98 = (uint *)(lVar32 + (ulong)((uVar31 & (uVar5 ^ 0xffffffff)) << 1) * 4);
  puStack_90 = puStack_98 + 1;
  iVar10 = uVar31 + 9;
  *(uint *)(lVar36 + uVar34 * 4) = uVar31;
  if (uVar6 <= uVar39) {
    uVar22 = 0;
    uVar34 = 0;
    iVar11 = 1 << (ulong)(uVar4 & 0x1f);
    iVar35 = iVar10;
    do {
      uVar27 = uVar22;
      if (uVar34 <= uVar22) {
        uVar27 = uVar34;
      }
      uVar28 = (ulong)uVar39;
      puVar18 = (ulong *)((long)param_4 + uVar27);
      if (uVar27 + uVar28 < uVar3) {
/* wm:proprietary - see LICENSE - do not sell */
        lVar36 = func_0x002ad924(puVar18,lVar33 + uVar28 + uVar27,param_5,lVar33 + uVar3,
                                 lVar38 + uVar3);
        uVar27 = lVar36 + uVar27;
        lVar36 = lVar33 + uVar28;
        if (uVar3 <= uVar27 + uVar28) {
          lVar36 = lVar38 + uVar28;
        }
joined_r0x002ec45c:
        if (uVar27 <= uVar37) goto LAB_002ec5dc;
LAB_002ec524:
        iVar10 = uVar39 + (int)uVar27;
        if (uVar27 <= iVar35 - uVar39) {
          iVar10 = iVar35;
        }
        param_1[uVar13 * 2] = (uVar31 + 3) - uVar39;
        (param_1 + uVar13 * 2)[1] = (int)uVar27;
        uVar13 = (ulong)((int)uVar13 + 1);
        if ((0x1000 < uVar27) || (uVar37 = uVar27, (ulong *)((long)param_4 + uVar27) == param_5))
        break;
      }
      else {
        lVar36 = lVar38 + uVar28;
        puVar12 = (ulong *)(lVar36 + uVar27);
        if (puVar18 < (ulong *)((long)param_5 + -7)) {
          if (*puVar12 == *puVar18) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
            lVar29 = 0;
            puVar14 = (ulong *)((long)param_4 + uVar27 + 8);
            puVar12 = (ulong *)(lVar38 + 8 + uVar27 + uVar28);
            do {
              if ((ulong *)((long)param_5 + -7) <= puVar14) goto LAB_002ec4e0;
              uVar30 = *puVar12;
              uVar28 = *puVar14;
              lVar29 = lVar29 + 8;
              puVar14 = puVar14 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar30 == uVar28);
            uVar28 = uVar28 ^ uVar30;
            uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            uVar27 = lVar29 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3) + uVar27;
            goto joined_r0x002ec45c;
          }
          uVar28 = *puVar18 ^ *puVar12;
          uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
          uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
          uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
          uVar27 = ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3) + uVar27;
        }
/* WM - origin: github.com/pengussy */
        else {
          puVar14 = puVar18;
LAB_002ec4e0:
          if (puVar14 < (ulong *)((long)param_5 + -3)) {
            if ((int)*puVar12 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar12 = (ulong *)((long)puVar12 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)param_5 + -1)) {
            if ((short)*puVar12 == (short)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar12 = (ulong *)((long)puVar12 + 2);
            }
          }
          if (puVar14 < param_5) {
            if ((char)*puVar12 == (char)*puVar14) {
/* WM - if you paid for this, you were scammed */
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
          }
          uVar27 = (long)puVar14 + (uVar27 - (long)puVar18);
        }
        if (uVar37 < uVar27) goto LAB_002ec524;
LAB_002ec5dc:
        iVar10 = iVar35;
      }
      puVar25 = (uint *)(lVar32 + (ulong)((uVar39 & uVar7) << 1) * 4);
      if (*(byte *)(lVar36 + uVar27) < *(byte *)((long)param_4 + uVar27)) {
        *puStack_98 = uVar39;
        if (uVar39 <= uVar1) {
          puStack_98 = auStack_6c;
          break;
        }
        puVar25 = puVar25 + 1;
        uVar22 = uVar27;
        puStack_98 = puVar25;
      }
      else {
        *puStack_90 = uVar39;
        if (uVar39 <= uVar1) {
          puStack_90 = auStack_6c;
          break;
        }
        uVar34 = uVar27;
        puStack_90 = puVar25;
      }
      iVar11 = iVar11 + -1;
      if (iVar11 == 0) break;
      uVar39 = *puVar25;
      iVar35 = iVar10;
    } while (uVar6 <= uVar39);
  }
  *puStack_90 = 0;
  *puStack_98 = 0;
// origin: github.com/pengussy
  *(int *)(param_2 + 0x2c) = iVar10 + -8;
  return uVar13;
}

