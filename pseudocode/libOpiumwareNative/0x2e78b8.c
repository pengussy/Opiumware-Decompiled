/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x2e78b8:7ffdc4051c
 *  --------------------------------------------------------------------------*/

ulong FUN_002e78b8(undefined4 *param_1,long param_2,undefined8 param_3,int *param_4,ulong *param_5,
                  int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ulong *puVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  uint *puVar33;
  ulong *puVar34;
// WM - donate: donate/README.md
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  uint uStack_64;
  
  lVar28 = *(long *)(param_2 + 8);
  uVar29 = (ulong)*(uint *)(param_2 + 0x2c);
  if (param_4 < (int *)(lVar28 + uVar29)) {
    return 0;
  }
  uVar21 = (int)param_4 - (int)lVar28;
  uVar25 = uVar21;
  if (*(uint *)(param_2 + 0x2c) < uVar21) {
    do {
      iVar8 = func_0x002e5a54(param_2,lVar28 + uVar29,param_5,uVar21,4,0);
      uVar25 = iVar8 + (int)uVar29;
      uVar29 = (ulong)uVar25;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    } while (uVar25 < uVar21);
    lVar28 = *(long *)(param_2 + 8);
    uVar25 = (int)param_4 - (int)lVar28;
  }
  *(uint *)(param_2 + 0x2c) = uVar21;
  uVar21 = *(uint *)(param_2 + 0x114);
  lVar27 = *(long *)(param_2 + 0x70);
  uVar6 = (uint)(*param_4 * -0x61c8864f) >> (ulong)(-*(int *)(param_2 + 0x108) & 0x1f);
  uVar24 = *(uint *)(lVar27 + (ulong)uVar6 * 4);
  if (0xffe < uVar21) {
    uVar21 = 0xfff;
  }
  lVar20 = *(long *)(param_2 + 0x80);
  uVar4 = -1 << (ulong)(*(int *)(param_2 + 0x104) - 1U & 0x1f);
  uVar7 = ~uVar4;
  uVar1 = 0;
  if (uVar7 <= uVar25) {
    uVar1 = uVar25 - uVar7;
  }
  uVar5 = 1 << (ulong)(*(uint *)(param_2 + 0x100) & 0x1f);
  uVar2 = uVar25 - uVar5;
  if (uVar25 - *(uint *)(param_2 + 0x1c) <= uVar5 || *(int *)(param_2 + 0x28) != 0) {
// WM - more drops soon - github.com/pengussy
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  uVar5 = uVar2;
  if (uVar2 < 2) {
    uVar5 = 1;
  }
  uVar3 = *(uint *)(param_2 + 0x10c);
  uVar29 = (ulong)(param_8 - 1U);
  if (0xfffffffc < param_7) {
    uVar18 = 0;
    goto LAB_002e7ea4;
  }
  uVar10 = uVar25 - *(int *)(param_2 + 0x18);
  puVar26 = (ulong *)(param_4 + 1);
  uVar36 = (ulong)param_7;
  if (param_7 == 3) {
    uVar13 = *param_6 - 1;
  }
  else {
    uVar13 = param_6[uVar36];
  }
  puVar34 = (ulong *)((long)param_5 + -7);
  puVar22 = (ulong *)((long)param_5 + -3);
  puVar17 = (ulong *)((long)param_5 + -1);
  iVar8 = (int)puVar26;
  if (uVar13 - 1 < uVar10) {
    uVar18 = 0;
    if (uVar2 <= uVar25 - uVar13) {
      piVar14 = (int *)((long)param_4 - (ulong)uVar13);
      if (*param_4 == *piVar14) {
        puVar11 = (ulong *)((long)puVar26 - (ulong)uVar13);
        puVar19 = puVar26;
        if (puVar26 < puVar34) {
          if (*puVar11 == *puVar26) {
            iVar16 = 0;
            puVar19 = (ulong *)(param_4 + 3);
/*  proprietary - see LICENSE - do not sell  */
            puVar11 = (ulong *)(piVar14 + 3);
            do {
              if (puVar34 <= puVar19) goto joined_r0x002e7ae0;
              uVar18 = *puVar11;
              uVar30 = *puVar19;
              iVar16 = iVar16 + 8;
              puVar19 = puVar19 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar18 == uVar30);
            uVar30 = uVar30 ^ uVar18;
            uVar18 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            iVar16 = iVar16 + (int)((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
          }
          else {
            uVar18 = *puVar26 ^ *puVar11;
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            iVar16 = (int)((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
          }
        }
        else {
joined_r0x002e7ae0:
          if (puVar19 < puVar22) {
            if ((int)*puVar11 == (int)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          }
          if (puVar19 < puVar17) {
            if ((short)*puVar11 == (short)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if (puVar19 < param_5) {
            if ((char)*puVar11 == (char)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 1);
            }
          }
          iVar16 = (int)puVar19 - iVar8;
        }
        uVar13 = iVar16 + 4;
        if (uVar13 <= param_8 - 1U) goto LAB_002e7ba0;
        uVar29 = (ulong)uVar13;
        uVar18 = 1;
        *param_1 = 1;
        param_1[1] = uVar13;
        if (uVar21 < uVar13 || (ulong *)((long)param_4 + uVar29) == param_5) {
          return 1;
        }
      }
    }
  }
  else {
LAB_002e7ba0:
    uVar18 = 0;
  }
/* WM - no support for modified copies */
  if (uVar36 + 1 == 3) {
    uVar13 = *param_6 - 1;
    if (*param_6 - 2U < uVar10) goto LAB_002e7bdc;
LAB_002e7bc4:
    uVar37 = 0;
  }
  else {
    uVar13 = param_6[uVar36 + 1];
    if (uVar10 <= uVar13 - 1) goto LAB_002e7bc4;
LAB_002e7bdc:
    uVar37 = 0;
    if (uVar2 <= uVar25 - uVar13) {
      piVar14 = (int *)((long)param_4 - (ulong)uVar13);
      if (*param_4 == *piVar14) {
        puVar11 = (ulong *)((long)puVar26 - (ulong)uVar13);
        puVar19 = puVar26;
        if (puVar26 < puVar34) {
          if (*puVar11 == *puVar26) {
            iVar16 = 0;
            puVar19 = (ulong *)(param_4 + 3);
            puVar11 = (ulong *)(piVar14 + 3);
            do {
              if (puVar34 <= puVar19) goto joined_r0x002e7c70;
              uVar31 = *puVar11;
              uVar30 = *puVar19;
              iVar16 = iVar16 + 8;
              puVar19 = puVar19 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar31 == uVar30);
            uVar30 = uVar30 ^ uVar31;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            iVar16 = iVar16 + (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
          else {
            uVar30 = *puVar26 ^ *puVar11;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            iVar16 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
        }
        else {
joined_r0x002e7c70:
          if (puVar19 < puVar22) {
/* donate: donate/README.md - github.com/pengussy */
            if ((int)*puVar11 == (int)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar19 < puVar17) {
            if ((short)*puVar11 == (short)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if (puVar19 < param_5) {
            if ((char)*puVar11 == (char)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 1);
            }
          }
          iVar16 = (int)puVar19 - iVar8;
        }
        uVar37 = iVar16 + 4;
      }
    }
  }
  uVar30 = (ulong)uVar37;
  if (uVar29 < uVar30) {
    param_1[uVar18 * 2] = 2;
    (param_1 + uVar18 * 2)[1] = uVar37;
    uVar18 = (ulong)((int)uVar18 + 1);
    if (uVar21 < uVar37 || (ulong *)((long)param_4 + uVar30) == param_5) {
      return uVar18;
    }
/* WM - if you paid for this, you were scammed */
    uVar29 = uVar30;
    if (uVar36 != 1) goto LAB_002e7d64;
LAB_002e7d38:
    uVar13 = *param_6 - 1;
    if (*param_6 - 2U < uVar10) goto LAB_002e7d74;
LAB_002e7d4c:
    uVar10 = 0;
  }
  else {
    if (uVar36 == 1) goto LAB_002e7d38;
LAB_002e7d64:
    uVar13 = param_6[uVar36 + 2];
    if (uVar10 <= uVar13 - 1) goto LAB_002e7d4c;
LAB_002e7d74:
    uVar10 = 0;
    if (uVar2 <= uVar25 - uVar13) {
      piVar14 = (int *)((long)param_4 - (ulong)uVar13);
      if (*param_4 == *piVar14) {
        puVar11 = (ulong *)((long)puVar26 - (ulong)uVar13);
        if (puVar26 < puVar34) {
          if (*puVar11 == *puVar26) {
            iVar16 = 0;
            puVar11 = (ulong *)(piVar14 + 3);
            puVar26 = (ulong *)(param_4 + 3);
            do {
              if (puVar34 <= puVar26) goto joined_r0x002e7e08;
              uVar30 = *puVar11;
              uVar36 = *puVar26;
              iVar16 = iVar16 + 8;
              puVar11 = puVar11 + 1;
              puVar26 = puVar26 + 1;
            } while (uVar30 == uVar36);
            uVar36 = uVar36 ^ uVar30;
            uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
/* WM - watermarked copy - do not remove */
            uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
            uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
            uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
            iVar16 = iVar16 + (int)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
          }
          else {
            uVar36 = *puVar26 ^ *puVar11;
            uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
            uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
            uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
            uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
            iVar16 = (int)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
          }
        }
        else {
joined_r0x002e7e08:
          if (puVar26 < puVar22) {
            if ((int)*puVar11 == (int)*puVar26) {
              puVar26 = (ulong *)((long)puVar26 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar26 < puVar17) {
            if ((short)*puVar11 == (short)*puVar26) {
              puVar11 = (ulong *)((long)puVar11 + 2);
              puVar26 = (ulong *)((long)puVar26 + 2);
            }
// chat: discord.gg/sdkhDjTex
          }
          if (puVar26 < param_5) {
            if ((char)*puVar11 == (char)*puVar26) {
              puVar26 = (ulong *)((long)puVar26 + 1);
            }
          }
          iVar16 = (int)puVar26 - iVar8;
        }
        uVar10 = iVar16 + 4;
      }
    }
  }
  uVar36 = (ulong)uVar10;
  if (uVar29 < uVar36) {
    param_1[uVar18 * 2] = 3;
    (param_1 + uVar18 * 2)[1] = uVar10;
    uVar18 = (ulong)((int)uVar18 + 1);
    uVar29 = uVar36;
    if (uVar21 < uVar10 || (ulong *)((long)param_4 + uVar36) == param_5) {
      return uVar18;
    }
  }
LAB_002e7ea4:
  puVar12 = (uint *)(lVar20 + (ulong)((uVar25 & (uVar4 ^ 0xffffffff)) << 1) * 4);
  puVar15 = puVar12 + 1;
  iVar8 = uVar25 + 9;
  *(uint *)(lVar27 + (ulong)uVar6 * 4) = uVar25;
  if (uVar5 <= uVar24) {
    uVar30 = 0;
    uVar36 = 0;
    iVar16 = 1 << (ulong)(uVar3 & 0x1f);
    iVar9 = iVar8;
    do {
      uVar31 = uVar30;
      if (uVar36 <= uVar30) {
/* reversing this took months of machine time */
        uVar31 = uVar36;
      }
      lVar27 = lVar28 + (ulong)uVar24;
      puVar26 = (ulong *)(lVar27 + uVar31);
      puVar17 = (ulong *)((long)param_4 + uVar31);
      if (puVar17 < (ulong *)((long)param_5 + -7)) {
        if (*puVar26 == *puVar17) {
          lVar32 = 0;
          puVar22 = (ulong *)((long)param_4 + uVar31 + 8);
          puVar26 = (ulong *)(lVar28 + 8 + uVar31 + uVar24);
          do {
            if ((ulong *)((long)param_5 + -7) <= puVar22) goto LAB_002e7fac;
            uVar35 = *puVar26;
            uVar23 = *puVar22;
            lVar32 = lVar32 + 8;
            puVar22 = puVar22 + 1;
            puVar26 = puVar26 + 1;
          } while (uVar35 == uVar23);
          uVar23 = uVar23 ^ uVar35;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = lVar32 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
        }
        else {
          uVar23 = *puVar17 ^ *puVar26;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
        }
        uVar23 = uVar23 + uVar31;
      }
      else {
        puVar22 = puVar17;
LAB_002e7fac:
        if (puVar22 < (ulong *)((long)param_5 + -3)) {
          if ((int)*puVar26 == (int)*puVar22) {
            puVar22 = (ulong *)((long)puVar22 + 4);
            puVar26 = (ulong *)((long)puVar26 + 4);
          }
        }
/*  keep the notice, keep the source honest  */
        if (puVar22 < (ulong *)((long)param_5 + -1)) {
          if ((short)*puVar26 == (short)*puVar22) {
            puVar22 = (ulong *)((long)puVar22 + 2);
            puVar26 = (ulong *)((long)puVar26 + 2);
          }
        }
        if (puVar22 < param_5) {
          if ((char)*puVar26 == (char)*puVar22) {
            puVar22 = (ulong *)((long)puVar22 + 1);
          }
        }
        uVar23 = (long)puVar22 + (uVar31 - (long)puVar17);
      }
      iVar8 = iVar9;
      if (uVar29 < uVar23) {
        iVar8 = uVar24 + (int)uVar23;
        if (uVar23 <= iVar9 - uVar24) {
          iVar8 = iVar9;
        }
        param_1[uVar18 * 2] = (uVar25 + 3) - uVar24;
        (param_1 + uVar18 * 2)[1] = (int)uVar23;
        uVar18 = (ulong)((int)uVar18 + 1);
        uVar29 = uVar23;
        if (0x1000 < uVar23 || (ulong *)((long)param_4 + uVar23) == param_5) break;
      }
      puVar33 = (uint *)(lVar20 + (ulong)((uVar24 & uVar7) << 1) * 4);
      if (*(byte *)(lVar27 + uVar23) < *(byte *)((long)param_4 + uVar23)) {
        *puVar12 = uVar24;
        if (uVar24 <= uVar1) {
          puVar12 = &uStack_64;
          break;
        }
/* wm:stripping the watermark breaks the license */
        puVar12 = puVar33 + 1;
        uVar30 = uVar23;
        puVar33 = puVar12;
      }
      else {
        *puVar15 = uVar24;
        if (uVar24 <= uVar1) {
          puVar15 = &uStack_64;
          break;
        }
        puVar15 = puVar33;
        uVar36 = uVar23;
      }
      iVar16 = iVar16 + -1;
      if (iVar16 == 0) break;
      uVar24 = *puVar33;
      iVar9 = iVar8;
    } while (uVar5 <= uVar24);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  }
  *puVar15 = 0;
  *puVar12 = 0;
  *(int *)(param_2 + 0x2c) = iVar8 + -8;
  return uVar18;
}

