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
 *  file-id: 0x2e92dc:792356f307
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002e92dc(int *param_1,long param_2,uint *param_3,ulong *param_4,ulong *param_5,
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
  int iVar11;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  int iVar12;
  ulong *puVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong *puVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  uint *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong *puVar33;
  long lVar34;
/*  watermarked copy - do not remove  */
  ulong uVar35;
  ulong *puVar36;
  ulong uVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  uint *puStack_a0;
  uint *puStack_98;
  uint auStack_6c [3];
  
  lVar38 = *(long *)(param_2 + 8);
  uVar35 = (ulong)*(uint *)(param_2 + 0x2c);
  if (param_4 < (ulong *)(lVar38 + uVar35)) {
    return 0;
  }
  uVar37 = (long)param_4 - lVar38;
  uVar20 = (uint)uVar37;
// WM - chat: discord.gg/sdkhDjTex
  if (*(uint *)(param_2 + 0x2c) < uVar20) {
    do {
      iVar10 = func_0x002e5a54(param_2,lVar38 + uVar35,param_5,uVar37,3,1);
      uVar1 = iVar10 + (int)uVar35;
      uVar35 = (ulong)uVar1;
    } while (uVar1 < uVar20);
    lVar38 = *(long *)(param_2 + 8);
    uVar37 = (long)param_4 - lVar38;
  }
  *(uint *)(param_2 + 0x2c) = uVar20;
  uVar20 = *(uint *)(param_2 + 0x114);
  if (0xffe < uVar20) {
    uVar20 = 0xfff;
  }
  lVar26 = *(long *)(param_2 + 0x70);
  uVar24 = (uint)*param_4;
  uVar7 = uVar24 * -0x61c8864f >> (ulong)(-*(int *)(param_2 + 0x108) & 0x1f);
  uVar39 = *(uint *)(lVar26 + (ulong)uVar7 * 4);
  lVar34 = *(long *)(param_2 + 0x80);
  uVar5 = -1 << (ulong)(*(int *)(param_2 + 0x104) - 1U & 0x1f);
  uVar8 = ~uVar5;
  lVar22 = *(long *)(param_2 + 0x10);
  uVar40 = (uint)uVar37;
  uVar1 = 0;
  if (uVar8 <= uVar40) {
    uVar1 = uVar40 - uVar8;
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar35 = (ulong)uVar3;
  uVar6 = 1 << (ulong)(*(uint *)(param_2 + 0x100) & 0x1f);
  uVar2 = uVar40 - uVar6;
  if (uVar40 - *(uint *)(param_2 + 0x1c) <= uVar6 || *(int *)(param_2 + 0x28) != 0) {
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  uVar6 = uVar2;
/* origin: github.com/pengussy */
  if (uVar2 < 2) {
    uVar6 = 1;
  }
  uVar4 = *(uint *)(param_2 + 0x10c);
  uVar25 = param_8 - 1;
  uVar14 = (ulong)uVar25;
  if (param_7 < 0xfffffffd) {
    uVar16 = uVar40 - uVar3;
    puVar18 = (ulong *)((long)param_4 + 3);
    uVar30 = (ulong)param_7;
    if (param_7 == 3) {
      uVar21 = *param_6 - 1;
    }
    else {
      uVar21 = param_6[uVar30];
    }
    uVar9 = uVar40 - uVar2;
    puVar36 = (ulong *)((long)param_5 + -7);
    puVar13 = (ulong *)((long)param_5 + -3);
    puVar33 = (ulong *)((long)param_5 + -1);
    uVar15 = uVar40 - uVar21;
    iVar10 = (int)puVar18;
    if (uVar21 - 1 < uVar16) {
      uVar32 = 0;
      if (uVar2 <= uVar15) {
// WM - unlicensed copy if this notice is missing
        puVar27 = (uint *)((long)param_4 - (ulong)uVar21);
        if (((*puVar27 ^ uVar24) & 0xffffff) == 0) {
          puVar23 = (ulong *)((long)puVar18 - (ulong)uVar21);
          puVar17 = puVar18;
          if (puVar18 < puVar36) {
            if (*puVar23 == *puVar18) {
              iVar11 = 0;
              puVar17 = (ulong *)((long)param_4 + 0xb);
              puVar23 = (ulong *)((long)puVar27 + 0xb);
              do {
                if (puVar36 <= puVar17) goto joined_r0x002ea19c;
                uVar28 = *puVar23;
                uVar32 = *puVar17;
                iVar11 = iVar11 + 8;
                puVar17 = puVar17 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar28 == uVar32);
              uVar32 = uVar32 ^ uVar28;
              uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              iVar11 = iVar11 + (int)((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
            }
            else {
              uVar32 = *puVar18 ^ *puVar23;
              uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              iVar11 = (int)((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
            }
            goto joined_r0x002e9694;
          }
joined_r0x002ea19c:
          if (puVar17 < puVar13) {
/* chat: discord.gg/sdkhDjTex */
            if ((uint)*puVar23 == (uint)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar23 = (ulong *)((long)puVar23 + 4);
            }
          }
          if (puVar17 < puVar33) {
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
          uVar24 = ((int)puVar17 - iVar10) + 3;
          if (uVar24 <= uVar25) goto LAB_002e9820;
LAB_002e9698:
          uVar14 = (ulong)uVar24;
          uVar32 = 1;
          *param_1 = 1;
/* wm:origin: github.com/pengussy */
          param_1[1] = uVar24;
          if (uVar20 < uVar24 || (ulong *)((long)param_4 + uVar14) == param_5) {
            return 1;
          }
        }
      }
joined_r0x002e96cc:
      if (uVar30 == 2) goto LAB_002e96d0;
LAB_002e9838:
      uVar24 = param_6[uVar30 + 1];
      uVar21 = uVar40 - uVar24;
      uVar25 = uVar24 - 1;
      if (uVar25 < uVar16) goto LAB_002e984c;
LAB_002e96e8:
      uVar15 = 0;
      if ((uVar25 < uVar9) && (uVar21 - uVar3 < 0xfffffffd)) {
        if (((*(uint *)(lVar22 + (ulong)uVar21) ^ (uint)*param_4) & 0xffffff) == 0) {
          iVar11 = func_0x002ad924(puVar18,(long)(lVar22 + (ulong)uVar21) + 3,param_5,
                                   lVar22 + uVar35,lVar38 + uVar35);
          uVar15 = iVar11 + 3;
        }
        else {
          uVar15 = 0;
        }
      }
    }
    else {
      uVar32 = 0;
      if ((uVar9 <= uVar21 - 1) || (0xfffffffc < uVar15 - uVar3)) goto joined_r0x002e96cc;
      if (((*(uint *)(lVar22 + (ulong)uVar15) ^ uVar24) & 0xffffff) == 0) {
        iVar11 = func_0x002ad924(puVar18,(long)(lVar22 + (ulong)uVar15) + 3,param_5,lVar22 + uVar35,
                                 lVar38 + uVar35);
joined_r0x002e9694:
        uVar24 = iVar11 + 3;
        if (uVar25 < uVar24) goto LAB_002e9698;
LAB_002e9820:
        uVar32 = 0;
        goto joined_r0x002e96cc;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      }
      uVar32 = 0;
      if (uVar30 != 2) goto LAB_002e9838;
LAB_002e96d0:
      uVar24 = *param_6 - 1;
      uVar21 = uVar40 - uVar24;
      uVar25 = *param_6 - 2;
      if (uVar16 <= uVar25) goto LAB_002e96e8;
LAB_002e984c:
      uVar15 = 0;
      if (uVar2 <= uVar21) {
        puVar27 = (uint *)((long)param_4 - (ulong)uVar24);
        if (((*puVar27 ^ (uint)*param_4) & 0xffffff) == 0) {
          puVar23 = (ulong *)((long)puVar18 - (ulong)uVar24);
          puVar17 = puVar18;
          if (puVar18 < puVar36) {
            if (*puVar23 == *puVar18) {
/* wm:donate: donate/README.md */
              iVar11 = 0;
              puVar17 = (ulong *)((long)param_4 + 0xb);
              puVar23 = (ulong *)((long)puVar27 + 0xb);
              do {
                if (puVar36 <= puVar17) goto joined_r0x002e98e4;
                uVar29 = *puVar23;
                uVar28 = *puVar17;
                iVar11 = iVar11 + 8;
                puVar17 = puVar17 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar29 == uVar28);
              uVar28 = uVar28 ^ uVar29;
              uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
              uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
              uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
              uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
              iVar11 = iVar11 + (int)((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
            }
            else {
              uVar28 = *puVar18 ^ *puVar23;
              uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
              uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
              uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
              uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
              iVar11 = (int)((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
            }
          }
          else {
joined_r0x002e98e4:
            if (puVar17 < puVar13) {
              if ((uint)*puVar23 == (uint)*puVar17) {
                puVar17 = (ulong *)((long)puVar17 + 4);
                puVar23 = (ulong *)((long)puVar23 + 4);
              }
            }
            if (puVar17 < puVar33) {
/*  unlicensed copy if this notice is missing  */
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
          uVar15 = iVar11 + 3;
        }
      }
    }
    uVar28 = (ulong)uVar15;
    if (uVar14 < uVar28) {
      param_1[uVar32 * 2] = 2;
      (param_1 + uVar32 * 2)[1] = uVar15;
      uVar32 = (ulong)((int)uVar32 + 1);
      if (uVar20 < uVar15 || (ulong *)((long)param_4 + uVar28) == param_5) {
        return uVar32;
      }
      uVar14 = uVar28;
      if (uVar30 != 1) goto LAB_002e9a1c;
LAB_002e99b4:
      uVar24 = *param_6 - 1;
      uVar21 = uVar40 - uVar24;
      uVar25 = *param_6 - 2;
      if (uVar16 <= uVar25) goto LAB_002e99cc;
LAB_002e9a30:
      uVar16 = 0;
      if (uVar2 <= uVar21) {
        puVar27 = (uint *)((long)param_4 - (ulong)uVar24);
        if (((*puVar27 ^ (uint)*param_4) & 0xffffff) == 0) {
          puVar23 = (ulong *)((long)puVar18 - (ulong)uVar24);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          if (puVar18 < puVar36) {
            if (*puVar23 == *puVar18) {
              iVar11 = 0;
              puVar18 = (ulong *)((long)param_4 + 0xb);
              puVar23 = (ulong *)((long)puVar27 + 0xb);
              do {
                if (puVar36 <= puVar18) goto LAB_002e9ac4;
                uVar28 = *puVar23;
                uVar30 = *puVar18;
                iVar11 = iVar11 + 8;
                puVar18 = puVar18 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar28 == uVar30);
              uVar30 = uVar30 ^ uVar28;
              uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
              uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
              uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
              uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
              iVar11 = iVar11 + (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
            }
            else {
              uVar30 = *puVar18 ^ *puVar23;
              uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
              uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
              uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
/*  no support for modified copies  */
              uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
              iVar11 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
            }
          }
          else {
LAB_002e9ac4:
            if (puVar18 < puVar13) {
              if ((uint)*puVar23 == (uint)*puVar18) {
                puVar18 = (ulong *)((long)puVar18 + 4);
                puVar23 = (ulong *)((long)puVar23 + 4);
              }
            }
            if (puVar18 < puVar33) {
              if ((short)*puVar23 == (short)*puVar18) {
                puVar18 = (ulong *)((long)puVar18 + 2);
                puVar23 = (ulong *)((long)puVar23 + 2);
              }
            }
            if (puVar18 < param_5) {
              if ((char)*puVar23 == (char)*puVar18) {
                puVar18 = (ulong *)((long)puVar18 + 1);
              }
            }
            iVar11 = (int)puVar18 - iVar10;
          }
          uVar16 = iVar11 + 3;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        }
      }
    }
    else {
      if (uVar30 == 1) goto LAB_002e99b4;
LAB_002e9a1c:
      uVar24 = param_6[uVar30 + 2];
      uVar21 = uVar40 - uVar24;
      uVar25 = uVar24 - 1;
      if (uVar25 < uVar16) goto LAB_002e9a30;
LAB_002e99cc:
      uVar16 = 0;
      if ((uVar25 < uVar9) && (uVar21 - uVar3 < 0xfffffffd)) {
        if (((*(uint *)(lVar22 + (ulong)uVar21) ^ (uint)*param_4) & 0xffffff) == 0) {
          iVar10 = func_0x002ad924(puVar18,(long)(lVar22 + (ulong)uVar21) + 3,param_5,
                                   lVar22 + uVar35,lVar38 + uVar35);
          uVar16 = iVar10 + 3;
        }
        else {
          uVar16 = 0;
        }
      }
    }
    uVar30 = (ulong)uVar16;
    if (uVar14 < uVar30) {
      param_1[uVar32 * 2] = 3;
      (param_1 + uVar32 * 2)[1] = uVar16;
      uVar32 = (ulong)((int)uVar32 + 1);
      uVar14 = uVar30;
/* origin: github.com/pengussy - github.com/pengussy */
      if (uVar20 < uVar16 || (ulong *)((long)param_4 + uVar30) == param_5) {
        return uVar32;
      }
    }
  }
  else {
    uVar32 = 0;
  }
  if (uVar14 < 3) {
    lVar19 = *(long *)(param_2 + 0x78);
    uVar30 = (ulong)*param_3;
    uVar28 = *param_4;
    uVar24 = 0x20 - *(int *)(param_2 + 0x30);
    if (*param_3 < uVar40) {
      do {
        *(int *)(lVar19 + (ulong)((uint)(*(int *)(lVar38 + uVar30) * 0x35a7bd00) >>
                                 (ulong)(uVar24 & 0x1f)) * 4) = (int)uVar30;
        uVar30 = uVar30 + 1;
      } while ((uVar37 & 0xffffffff) != uVar30);
    }
    *param_3 = uVar40;
    uVar24 = *(uint *)(lVar19 + (ulong)((uint)uVar28 * 0x35a7bd00 >> (ulong)(uVar24 & 0x1f)) * 4);
    uVar37 = (ulong)uVar24;
    if (uVar24 < uVar6 || uVar40 - uVar24 >> 0x12 != 0) {
    }
    else {
      if (uVar24 < uVar3) {
        uVar37 = func_0x002ad924(param_4,lVar22 + uVar37,param_5,lVar22 + uVar35,lVar38 + uVar35);
      }
      else {
        puVar18 = (ulong *)(lVar38 + uVar37);
        puVar13 = param_4;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        if (param_4 < (ulong *)((long)param_5 + -7)) {
          if (*puVar18 == *param_4) {
            lVar19 = 0;
            puVar18 = (ulong *)(uVar37 + lVar38);
            do {
              puVar18 = puVar18 + 1;
              puVar13 = puVar13 + 1;
              if ((ulong *)((long)param_5 + -7) <= puVar13) goto LAB_002e9d50;
              lVar19 = lVar19 + 8;
            } while (*puVar18 == *puVar13);
            uVar37 = *puVar13 ^ *puVar18;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = lVar19 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
          }
          else {
            uVar37 = *param_4 ^ *puVar18;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
          }
/* wm:keep the notice, keep the source honest */
        }
        else {
LAB_002e9d50:
          if (puVar13 < (ulong *)((long)param_5 + -3)) {
            if ((uint)*puVar18 == (uint)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 4);
              puVar18 = (ulong *)((long)puVar18 + 4);
            }
            if (puVar13 < (ulong *)((long)param_5 + -1)) goto LAB_002e9dc0;
          }
          else if (puVar13 < (ulong *)((long)param_5 + -1)) {
LAB_002e9dc0:
            if ((short)*puVar18 == (short)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          }
          if (puVar13 < param_5) {
            if ((char)*puVar18 == (char)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 1);
            }
          }
          uVar37 = (long)puVar13 - (long)param_4;
        }
      }
      if (2 < uVar37) {
        *param_1 = (uVar40 - uVar24) + 3;
        param_1[1] = (int)uVar37;
        if (uVar20 < uVar37 || (ulong *)((long)param_4 + uVar37) == param_5) {
          iVar10 = uVar40 + 1;
          uVar32 = 1;
          goto LAB_002e9e78;
        }
        uVar32 = 1;
        uVar14 = uVar37;
      }
    }
  }
  puStack_a0 = (uint *)(lVar34 + (ulong)((uVar40 & (uVar5 ^ 0xffffffff)) << 1) * 4);
  puStack_98 = puStack_a0 + 1;
  iVar10 = uVar40 + 9;
  *(uint *)(lVar26 + (ulong)uVar7 * 4) = uVar40;
  if (uVar6 <= uVar39) {
    uVar30 = 0;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    uVar37 = 0;
    iVar11 = 1 << (ulong)(uVar4 & 0x1f);
    iVar12 = iVar10;
    do {
      uVar28 = uVar30;
      if (uVar37 <= uVar30) {
        uVar28 = uVar37;
      }
      uVar29 = (ulong)uVar39;
      puVar18 = (ulong *)((long)param_4 + uVar28);
      if (uVar28 + uVar29 < uVar35) {
        lVar26 = func_0x002ad924(puVar18,lVar22 + uVar29 + uVar28,param_5,lVar22 + uVar35,
                                 lVar38 + uVar35);
        uVar28 = lVar26 + uVar28;
        lVar26 = lVar22 + uVar29;
        if (uVar35 <= uVar28 + uVar29) {
          lVar26 = lVar38 + uVar29;
        }
joined_r0x002e9f84:
        if (uVar14 < uVar28) goto LAB_002ea04c;
LAB_002ea108:
/*  chat: discord.gg/sdkhDjTex  */
        iVar10 = iVar12;
      }
      else {
        lVar26 = lVar38 + uVar29;
        puVar13 = (ulong *)(lVar26 + uVar28);
        if (puVar18 < (ulong *)((long)param_5 + -7)) {
          if (*puVar13 == *puVar18) {
            lVar19 = 0;
            puVar33 = (ulong *)((long)param_4 + uVar28 + 8);
            puVar13 = (ulong *)(lVar38 + 8 + uVar28 + uVar29);
            do {
              if ((ulong *)((long)param_5 + -7) <= puVar33) goto LAB_002ea004;
              uVar31 = *puVar13;
              uVar29 = *puVar33;
              lVar19 = lVar19 + 8;
              puVar33 = puVar33 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar31 == uVar29);
            uVar29 = uVar29 ^ uVar31;
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar28 = lVar19 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) + uVar28;
            goto joined_r0x002e9f84;
          }
          uVar29 = *puVar18 ^ *puVar13;
          uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar28 = ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) + uVar28;
        }
// WM - stripping the watermark breaks the license
        else {
          puVar33 = puVar18;
LAB_002ea004:
          if (puVar33 < (ulong *)((long)param_5 + -3)) {
            if ((uint)*puVar13 == (uint)*puVar33) {
              puVar33 = (ulong *)((long)puVar33 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar33 < (ulong *)((long)param_5 + -1)) {
            if ((short)*puVar13 == (short)*puVar33) {
              puVar33 = (ulong *)((long)puVar33 + 2);
              puVar13 = (ulong *)((long)puVar13 + 2);
            }
          }
          if (puVar33 < param_5) {
            if ((char)*puVar13 == (char)*puVar33) {
              puVar33 = (ulong *)((long)puVar33 + 1);
            }
          }
          uVar28 = (long)puVar33 + (uVar28 - (long)puVar18);
        }
        if (uVar28 <= uVar14) goto LAB_002ea108;
LAB_002ea04c:
        uVar14 = uVar28;
        iVar10 = uVar39 + (int)uVar14;
        if (uVar14 <= iVar12 - uVar39) {
          iVar10 = iVar12;
        }
        param_1[uVar32 * 2] = (uVar40 + 3) - uVar39;
        (param_1 + uVar32 * 2)[1] = (int)uVar14;
        uVar32 = (ulong)((int)uVar32 + 1);
        if ((0x1000 < uVar14) || (uVar28 = uVar14, (ulong *)((long)param_4 + uVar14) == param_5))
        break;
      }
      puVar27 = (uint *)(lVar34 + (ulong)((uVar39 & uVar8) << 1) * 4);
      if (*(byte *)(lVar26 + uVar28) < *(byte *)((long)param_4 + uVar28)) {
        *puStack_a0 = uVar39;
/*  donate: donate/README.md  */
        if (uVar39 <= uVar1) {
          puStack_a0 = auStack_6c;
          break;
        }
        puVar27 = puVar27 + 1;
        uVar30 = uVar28;
        puStack_a0 = puVar27;
      }
      else {
        *puStack_98 = uVar39;
        if (uVar39 <= uVar1) {
          puStack_98 = auStack_6c;
          break;
        }
        uVar37 = uVar28;
        puStack_98 = puVar27;
      }
      iVar11 = iVar11 + -1;
      if (iVar11 == 0) break;
/* unlicensed copy if this notice is missing */
      uVar39 = *puVar27;
      iVar12 = iVar10;
    } while (uVar6 <= uVar39);
  }
  *puStack_98 = 0;
  *puStack_a0 = 0;
  iVar10 = iVar10 + -8;
LAB_002e9e78:
  *(int *)(param_2 + 0x2c) = iVar10;
  return uVar32;
}

