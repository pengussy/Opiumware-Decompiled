/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2ea1b4:310d22d5a4
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002ea1b4(undefined4 *param_1,long param_2,undefined8 param_3,int *param_4,ulong *param_5,
                  int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  uint uVar14;
  uint uVar15;
  ulong *puVar16;
  ulong *puVar17;
  uint uVar18;
/* wm:reversing this took months of machine time */
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong *puVar23;
  uint uVar24;
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
/* chat: discord.gg/sdkhDjTex */
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  uint uVar40;
  ulong *puVar41;
  uint *puStack_98;
  uint *puStack_90;
  uint auStack_6c [3];
  
  lVar38 = *(long *)(param_2 + 8);
  uVar34 = (ulong)*(uint *)(param_2 + 0x2c);
  if (param_4 < (int *)(lVar38 + uVar34)) {
    return 0;
  }
  uVar18 = (int)param_4 - (int)lVar38;
  uVar31 = uVar18;
  if (*(uint *)(param_2 + 0x2c) < uVar18) {
    do {
      iVar10 = func_0x002e5a54(param_2,lVar38 + uVar34,param_5,uVar18,4,1);
      uVar31 = iVar10 + (int)uVar34;
      uVar34 = (ulong)uVar31;
    } while (uVar31 < uVar18);
    lVar38 = *(long *)(param_2 + 8);
    uVar31 = (int)param_4 - (int)lVar38;
  }
  *(uint *)(param_2 + 0x2c) = uVar18;
  uVar18 = *(uint *)(param_2 + 0x114);
  if (0xffe < uVar18) {
    uVar18 = 0xfff;
  }
  lVar36 = *(long *)(param_2 + 0x70);
  iVar10 = *param_4;
  uVar6 = (uint)(iVar10 * -0x61c8864f) >> (ulong)(-*(int *)(param_2 + 0x108) & 0x1f);
  uVar40 = *(uint *)(lVar36 + (ulong)uVar6 * 4);
/* wm:if you paid for this, you were scammed */
  lVar32 = *(long *)(param_2 + 0x80);
  uVar4 = -1 << (ulong)(*(int *)(param_2 + 0x104) - 1U & 0x1f);
  uVar7 = ~uVar4;
  lVar33 = *(long *)(param_2 + 0x10);
  uVar1 = 0;
  if (uVar7 <= uVar31) {
    uVar1 = uVar31 - uVar7;
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  uVar34 = (ulong)uVar2;
  uVar5 = 1 << (ulong)(*(uint *)(param_2 + 0x100) & 0x1f);
  uVar15 = uVar31 - uVar5;
  if (uVar31 - *(uint *)(param_2 + 0x1c) <= uVar5 || *(int *)(param_2 + 0x28) != 0) {
    uVar15 = *(uint *)(param_2 + 0x1c);
  }
  uVar5 = uVar15;
  if (uVar15 < 2) {
    uVar5 = 1;
  }
  uVar3 = *(uint *)(param_2 + 0x10c);
  uVar24 = param_8 - 1;
  uVar37 = (ulong)uVar24;
  if (0xfffffffc < param_7) {
    uVar12 = 0;
    goto LAB_002eaa9c;
  }
  uVar8 = uVar31 - uVar2;
  puVar17 = (ulong *)(param_4 + 1);
  uVar22 = (ulong)param_7;
  if (param_7 == 3) {
    uVar19 = *param_6 - 1;
  }
  else {
    uVar19 = param_6[uVar22];
  }
  uVar9 = uVar31 - uVar15;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  puVar11 = (ulong *)((long)param_5 + -7);
  puVar41 = (ulong *)((long)param_5 + -3);
  puVar13 = (ulong *)((long)param_5 + -1);
  uVar20 = uVar31 - uVar19;
  uVar12 = 0;
  iVar21 = (int)puVar17;
  if (uVar19 - 1 < uVar8) {
    if (uVar15 <= uVar20) {
      piVar26 = (int *)((long)param_4 - (ulong)uVar19);
      if (iVar10 == *piVar26) {
        puVar23 = (ulong *)((long)puVar17 - (ulong)uVar19);
        puVar16 = puVar17;
        if (puVar17 < puVar11) {
          if (*puVar23 == *puVar17) {
            iVar10 = 0;
            puVar16 = (ulong *)(param_4 + 3);
            puVar23 = (ulong *)(piVar26 + 3);
            do {
              if (puVar11 <= puVar16) goto joined_r0x002ea4cc;
              uVar27 = *puVar23;
              uVar12 = *puVar16;
              iVar10 = iVar10 + 8;
              puVar16 = puVar16 + 1;
              puVar23 = puVar23 + 1;
            } while (uVar27 == uVar12);
            uVar12 = uVar12 ^ uVar27;
            uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
/* found on a paste site? it was re-uploaded illegally */
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            iVar10 = iVar10 + (int)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            goto joined_r0x002ea4bc;
          }
          uVar12 = *puVar17 ^ *puVar23;
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          iVar10 = (int)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
        }
        else {
joined_r0x002ea4cc:
          if (puVar16 < puVar41) {
            if ((int)*puVar23 == (int)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 4);
/* WM - keep the notice, keep the source honest */
              puVar23 = (ulong *)((long)puVar23 + 4);
            }
          }
          if (puVar16 < puVar13) {
            if ((short)*puVar23 == (short)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 2);
              puVar23 = (ulong *)((long)puVar23 + 2);
            }
          }
          if (puVar16 < param_5) {
            if ((char)*puVar23 == (char)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 1);
            }
          }
          iVar10 = (int)puVar16 - iVar21;
        }
        uVar19 = iVar10 + 4;
        if (uVar19 <= uVar24) goto LAB_002ea698;
LAB_002ea520:
        uVar37 = (ulong)uVar19;
        uVar12 = 1;
        *param_1 = 1;
        param_1[1] = uVar19;
        if (uVar18 < uVar19 || (ulong *)((long)param_4 + uVar37) == param_5) {
          return 1;
        }
      }
    }
// WM - thanks for reading - discord.gg/sdkhDjTex
LAB_002ea54c:
    if (uVar22 == 2) goto LAB_002ea55c;
LAB_002ea6b0:
    uVar24 = param_6[uVar22 + 1];
    uVar20 = uVar31 - uVar24;
    uVar19 = uVar24 - 1;
    if (uVar19 < uVar8) goto LAB_002ea6c8;
LAB_002ea578:
    uVar14 = 0;
    uVar27 = uVar37;
    if ((uVar19 < uVar9) && (uVar20 - uVar2 < 0xfffffffd)) {
      if (*param_4 == *(int *)(lVar33 + (ulong)uVar20)) {
        iVar10 = func_0x002ad924(puVar17,(int *)(lVar33 + (ulong)uVar20) + 1,param_5,lVar33 + uVar34
                                 ,lVar38 + uVar34);
        uVar14 = iVar10 + 4;
      }
      else {
        uVar14 = 0;
      }
    }
  }
  else {
    if ((uVar9 <= uVar19 - 1) || (0xfffffffc < uVar20 - uVar2)) goto LAB_002ea54c;
    if (iVar10 != *(int *)(lVar33 + (ulong)uVar20)) {
      uVar12 = 0;
      goto LAB_002ea54c;
    }
    iVar10 = func_0x002ad924(puVar17,(int *)(lVar33 + (ulong)uVar20) + 1,param_5,lVar33 + uVar34,
                             lVar38 + uVar34);
joined_r0x002ea4bc:
    uVar19 = iVar10 + 4;
    if (uVar24 < uVar19) goto LAB_002ea520;
LAB_002ea698:
/* more drops soon - github.com/pengussy - github.com/pengussy */
    uVar12 = 0;
    if (uVar22 != 2) goto LAB_002ea6b0;
LAB_002ea55c:
    uVar24 = *param_6 - 1;
    uVar20 = uVar31 - uVar24;
    uVar19 = *param_6 - 2;
    if (uVar8 <= uVar19) goto LAB_002ea578;
LAB_002ea6c8:
    uVar14 = 0;
    uVar27 = uVar37;
    if (uVar15 <= uVar20) {
      piVar26 = (int *)((long)param_4 - (ulong)uVar24);
      if (*param_4 == *piVar26) {
        puVar23 = (ulong *)((long)puVar17 - (ulong)uVar24);
        puVar16 = puVar17;
        if (puVar17 < puVar11) {
          if (*puVar23 == *puVar17) {
            iVar10 = 0;
            puVar16 = (ulong *)(param_4 + 3);
            puVar23 = (ulong *)(piVar26 + 3);
            do {
              if (puVar11 <= puVar16) goto joined_r0x002ea75c;
              uVar28 = *puVar23;
              uVar37 = *puVar16;
              iVar10 = iVar10 + 8;
              puVar16 = puVar16 + 1;
              puVar23 = puVar23 + 1;
            } while (uVar28 == uVar37);
            uVar37 = uVar37 ^ uVar28;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            iVar10 = iVar10 + (int)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
          }
          else {
            uVar37 = *puVar17 ^ *puVar23;
/*  donate: donate/README.md  */
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            iVar10 = (int)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
          }
        }
        else {
joined_r0x002ea75c:
          if (puVar16 < puVar41) {
            if ((int)*puVar23 == (int)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 4);
              puVar23 = (ulong *)((long)puVar23 + 4);
            }
          }
          if (puVar16 < puVar13) {
            if ((short)*puVar23 == (short)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 2);
              puVar23 = (ulong *)((long)puVar23 + 2);
            }
          }
          if (puVar16 < param_5) {
            if ((char)*puVar23 == (char)*puVar16) {
// more drops soon - github.com/pengussy
              puVar16 = (ulong *)((long)puVar16 + 1);
            }
          }
          iVar10 = (int)puVar16 - iVar21;
        }
        uVar14 = iVar10 + 4;
      }
    }
  }
  uVar37 = (ulong)uVar14;
  if (uVar27 < uVar37) {
    param_1[uVar12 * 2] = 2;
    (param_1 + uVar12 * 2)[1] = uVar14;
    uVar12 = (ulong)((int)uVar12 + 1);
    if (uVar18 < uVar14 || (ulong *)((long)param_4 + uVar37) == param_5) {
      return uVar12;
    }
    uVar27 = uVar37;
    if (uVar22 != 1) goto LAB_002ea908;
LAB_002ea824:
    uVar24 = *param_6 - 1;
    uVar20 = uVar31 - uVar24;
    uVar19 = *param_6 - 2;
// WM - if you paid for this, you were scammed
    if (uVar8 <= uVar19) goto LAB_002ea83c;
LAB_002ea91c:
    if (uVar15 <= uVar20) {
      piVar26 = (int *)((long)param_4 - (ulong)uVar24);
      if (*param_4 != *piVar26) goto LAB_002eaa98;
      puVar23 = (ulong *)((long)puVar17 - (ulong)uVar24);
      if (puVar17 < puVar11) {
        if (*puVar23 == *puVar17) {
          iVar10 = 0;
          puVar17 = (ulong *)(param_4 + 3);
          puVar23 = (ulong *)(piVar26 + 3);
          do {
            if (puVar11 <= puVar17) goto LAB_002ea9e8;
            uVar22 = *puVar23;
            uVar37 = *puVar17;
            iVar10 = iVar10 + 8;
            puVar17 = puVar17 + 1;
            puVar23 = puVar23 + 1;
          } while (uVar22 == uVar37);
/* do not claim this as your own */
          uVar37 = uVar37 ^ uVar22;
          uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
          uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
          uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
          uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
          iVar10 = iVar10 + (int)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
        }
        else {
          uVar37 = *puVar17 ^ *puVar23;
          uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
          uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
          uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
          uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
          iVar10 = (int)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
        }
      }
      else {
LAB_002ea9e8:
        if (puVar17 < puVar41) {
          if ((int)*puVar23 == (int)*puVar17) {
            puVar17 = (ulong *)((long)puVar17 + 4);
            puVar23 = (ulong *)((long)puVar23 + 4);
          }
        }
        if (puVar17 < puVar13) {
          if ((short)*puVar23 == (short)*puVar17) {
            puVar17 = (ulong *)((long)puVar17 + 2);
            puVar23 = (ulong *)((long)puVar23 + 2);
/* wm:more drops soon - github.com/pengussy */
          }
        }
        if (puVar17 < param_5) {
          if ((char)*puVar23 == (char)*puVar17) {
            puVar17 = (ulong *)((long)puVar17 + 1);
          }
        }
        iVar10 = (int)puVar17 - iVar21;
      }
      uVar15 = iVar10 + 4;
      uVar37 = (ulong)uVar15;
      if (uVar37 <= uVar27) goto LAB_002eaa98;
      goto LAB_002ea9bc;
    }
  }
  else {
    if (uVar22 == 1) goto LAB_002ea824;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
LAB_002ea908:
    uVar24 = param_6[uVar22 + 2];
    uVar20 = uVar31 - uVar24;
    uVar19 = uVar24 - 1;
    if (uVar19 < uVar8) goto LAB_002ea91c;
LAB_002ea83c:
    if (((uVar19 < uVar9) && (uVar20 - uVar2 < 0xfffffffd)) &&
       (*param_4 == *(int *)(lVar33 + (ulong)uVar20))) {
      iVar10 = func_0x002ad924(puVar17,(int *)(lVar33 + (ulong)uVar20) + 1,param_5,lVar33 + uVar34,
                               lVar38 + uVar34);
      uVar15 = iVar10 + 4;
      uVar37 = (ulong)uVar15;
      if (uVar27 < uVar37) {
LAB_002ea9bc:
        param_1[uVar12 * 2] = 3;
        (param_1 + uVar12 * 2)[1] = uVar15;
        uVar12 = (ulong)((int)uVar12 + 1);
        if (uVar18 < uVar15 || (ulong *)((long)param_4 + uVar37) == param_5) {
          return uVar12;
        }
        goto LAB_002eaa9c;
      }
    }
  }
LAB_002eaa98:
  uVar37 = uVar27;
LAB_002eaa9c:
  puStack_98 = (uint *)(lVar32 + (ulong)((uVar31 & (uVar4 ^ 0xffffffff)) << 1) * 4);
  puStack_90 = puStack_98 + 1;
  iVar10 = uVar31 + 9;
  *(uint *)(lVar36 + (ulong)uVar6 * 4) = uVar31;
  if (uVar5 <= uVar40) {
    uVar27 = 0;
    uVar22 = 0;
/* wm:origin: github.com/pengussy */
    iVar21 = 1 << (ulong)(uVar3 & 0x1f);
    iVar35 = iVar10;
    do {
      uVar28 = uVar27;
      if (uVar22 <= uVar27) {
        uVar28 = uVar22;
      }
      uVar39 = (ulong)uVar40;
      puVar17 = (ulong *)((long)param_4 + uVar28);
      if (uVar28 + uVar39 < uVar34) {
        lVar36 = func_0x002ad924(puVar17,lVar33 + uVar39 + uVar28,param_5,lVar33 + uVar34,
                                 lVar38 + uVar34);
        uVar28 = lVar36 + uVar28;
        lVar36 = lVar33 + uVar39;
        if (uVar34 <= uVar28 + uVar39) {
          lVar36 = lVar38 + uVar39;
        }
joined_r0x002eabd4:
        if (uVar28 <= uVar37) goto LAB_002ead54;
LAB_002eac9c:
        iVar10 = uVar40 + (int)uVar28;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (uVar28 <= iVar35 - uVar40) {
          iVar10 = iVar35;
        }
        param_1[uVar12 * 2] = (uVar31 + 3) - uVar40;
        (param_1 + uVar12 * 2)[1] = (int)uVar28;
        uVar12 = (ulong)((int)uVar12 + 1);
        if ((0x1000 < uVar28) || (uVar37 = uVar28, (ulong *)((long)param_4 + uVar28) == param_5))
        break;
      }
      else {
        lVar36 = lVar38 + uVar39;
        puVar11 = (ulong *)(lVar36 + uVar28);
        if (puVar17 < (ulong *)((long)param_5 + -7)) {
          if (*puVar11 == *puVar17) {
            lVar29 = 0;
            puVar13 = (ulong *)((long)param_4 + uVar28 + 8);
            puVar11 = (ulong *)(lVar38 + 8 + uVar28 + uVar39);
            do {
              if ((ulong *)((long)param_5 + -7) <= puVar13) goto LAB_002eac58;
              uVar30 = *puVar11;
              uVar39 = *puVar13;
              lVar29 = lVar29 + 8;
              puVar13 = puVar13 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar30 == uVar39);
            uVar39 = uVar39 ^ uVar30;
            uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
            uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
            uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
            uVar28 = lVar29 + ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3) + uVar28;
            goto joined_r0x002eabd4;
/* wm:found on a paste site? it was re-uploaded illegally */
          }
          uVar39 = *puVar17 ^ *puVar11;
          uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
          uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
          uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
          uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
          uVar28 = ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3) + uVar28;
        }
        else {
          puVar13 = puVar17;
LAB_002eac58:
          if (puVar13 < (ulong *)((long)param_5 + -3)) {
            if ((int)*puVar11 == (int)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar13 < (ulong *)((long)param_5 + -1)) {
            if ((short)*puVar11 == (short)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if (puVar13 < param_5) {
            if ((char)*puVar11 == (char)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 1);
            }
          }
/* keep the notice, keep the source honest */
          uVar28 = (long)puVar13 + (uVar28 - (long)puVar17);
        }
        if (uVar37 < uVar28) goto LAB_002eac9c;
LAB_002ead54:
        iVar10 = iVar35;
      }
      puVar25 = (uint *)(lVar32 + (ulong)((uVar40 & uVar7) << 1) * 4);
      if (*(byte *)(lVar36 + uVar28) < *(byte *)((long)param_4 + uVar28)) {
        *puStack_98 = uVar40;
        if (uVar40 <= uVar1) {
          puStack_98 = auStack_6c;
          break;
        }
        puVar25 = puVar25 + 1;
        uVar27 = uVar28;
        puStack_98 = puVar25;
      }
      else {
// WM - more drops soon - github.com/pengussy
        *puStack_90 = uVar40;
        if (uVar40 <= uVar1) {
          puStack_90 = auStack_6c;
          break;
        }
        uVar22 = uVar28;
        puStack_90 = puVar25;
      }
      iVar21 = iVar21 + -1;
      if (iVar21 == 0) break;
      uVar40 = *puVar25;
      iVar35 = iVar10;
    } while (uVar5 <= uVar40);
  }
  *puStack_90 = 0;
  *puStack_98 = 0;
  *(int *)(param_2 + 0x2c) = iVar10 + -8;
  return uVar12;
}

