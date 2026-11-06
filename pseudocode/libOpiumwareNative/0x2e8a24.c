/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2e8a24:9b61df015a
   =========================================================================== */

ulong FUN_002e8a24(undefined4 *param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5,
                  int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong *puVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong *puVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  long lVar31;
  uint *puVar32;
  ulong *puVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  uint uStack_64;
  
  lVar28 = *(long *)(param_2 + 8);
  uVar29 = (ulong)*(uint *)(param_2 + 0x2c);
  if (param_4 < (long *)(lVar28 + uVar29)) {
    return 0;
  }
  uVar20 = (int)param_4 - (int)lVar28;
  uVar24 = uVar20;
  if (*(uint *)(param_2 + 0x2c) < uVar20) {
// WM - keep the notice, keep the source honest
    do {
      iVar7 = func_0x002e5a54(param_2,lVar28 + uVar29,param_5,uVar20,6,0);
      uVar24 = iVar7 + (int)uVar29;
      uVar29 = (ulong)uVar24;
    } while (uVar24 < uVar20);
    lVar28 = *(long *)(param_2 + 8);
    uVar24 = (int)param_4 - (int)lVar28;
  }
  *(uint *)(param_2 + 0x2c) = uVar20;
  uVar20 = *(uint *)(param_2 + 0x114);
  lVar27 = *(long *)(param_2 + 0x70);
  uVar29 = (ulong)(*param_4 * -0x30e4432340650000) >>
           ((ulong)(uint)-*(int *)(param_2 + 0x108) & 0x3f);
  uVar23 = *(uint *)(lVar27 + uVar29 * 4);
  if (0xffe < uVar20) {
    uVar20 = 0xfff;
  }
  lVar19 = *(long *)(param_2 + 0x80);
  uVar4 = -1 << (ulong)(*(int *)(param_2 + 0x104) - 1U & 0x1f);
  uVar6 = ~uVar4;
  uVar1 = 0;
  if (uVar6 <= uVar24) {
    uVar1 = uVar24 - uVar6;
  }
  uVar5 = 1 << (ulong)(*(uint *)(param_2 + 0x100) & 0x1f);
  uVar2 = uVar24 - uVar5;
  if (uVar24 - *(uint *)(param_2 + 0x1c) <= uVar5 || *(int *)(param_2 + 0x28) != 0) {
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  uVar5 = uVar2;
  if (uVar2 < 2) {
    uVar5 = 1;
  }
/* WM - proprietary - see LICENSE - do not sell */
  uVar3 = *(uint *)(param_2 + 0x10c);
  uVar25 = (ulong)(param_8 - 1U);
  if (0xfffffffc < param_7) {
    uVar17 = 0;
    goto LAB_002e9014;
  }
  uVar9 = uVar24 - *(int *)(param_2 + 0x18);
  puVar26 = (ulong *)((long)param_4 + 4);
  uVar35 = (ulong)param_7;
  if (param_7 == 3) {
    uVar12 = *param_6 - 1;
  }
  else {
    uVar12 = param_6[uVar35];
  }
  puVar33 = (ulong *)((long)param_5 + -7);
  puVar21 = (ulong *)((long)param_5 + -3);
  puVar16 = (ulong *)((long)param_5 + -1);
  iVar7 = (int)puVar26;
  if (uVar12 - 1 < uVar9) {
    uVar17 = 0;
    if (uVar2 <= uVar24 - uVar12) {
      piVar13 = (int *)((long)param_4 - (ulong)uVar12);
      if (*piVar13 == (int)*param_4) {
        puVar10 = (ulong *)((long)puVar26 - (ulong)uVar12);
        puVar18 = puVar26;
        if (puVar26 < puVar33) {
          if (*puVar10 == *puVar26) {
            iVar15 = 0;
            puVar18 = (ulong *)((long)param_4 + 0xc);
            puVar10 = (ulong *)(piVar13 + 3);
            do {
              if (puVar33 <= puVar18) goto joined_r0x002e8c50;
// WM - watermarked copy - do not remove
              uVar17 = *puVar10;
              uVar30 = *puVar18;
              iVar15 = iVar15 + 8;
              puVar18 = puVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar17 == uVar30);
            uVar30 = uVar30 ^ uVar17;
            uVar17 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            iVar15 = iVar15 + (int)((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
          }
          else {
            uVar17 = *puVar26 ^ *puVar10;
            uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            iVar15 = (int)((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
          }
        }
        else {
joined_r0x002e8c50:
          if (puVar18 < puVar21) {
            if ((int)*puVar10 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar10 = (ulong *)((long)puVar10 + 4);
/* do not claim this as your own */
            }
          }
          if (puVar18 < puVar16) {
            if ((short)*puVar10 == (short)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 2);
              puVar10 = (ulong *)((long)puVar10 + 2);
            }
          }
          if (puVar18 < param_5) {
            if ((char)*puVar10 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          iVar15 = (int)puVar18 - iVar7;
        }
        uVar12 = iVar15 + 4;
        if (uVar12 <= param_8 - 1U) goto LAB_002e8d10;
        uVar25 = (ulong)uVar12;
        uVar17 = 1;
        *param_1 = 1;
        param_1[1] = uVar12;
        if (uVar20 < uVar12 || (ulong *)((long)param_4 + uVar25) == param_5) {
          return 1;
        }
      }
    }
  }
  else {
LAB_002e8d10:
    uVar17 = 0;
  }
  if (uVar35 + 1 == 3) {
    uVar12 = *param_6 - 1;
    if (*param_6 - 2U < uVar9) goto LAB_002e8d4c;
LAB_002e8d34:
    uVar36 = 0;
  }
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  else {
    uVar12 = param_6[uVar35 + 1];
    if (uVar9 <= uVar12 - 1) goto LAB_002e8d34;
LAB_002e8d4c:
    uVar36 = 0;
    if (uVar2 <= uVar24 - uVar12) {
      piVar13 = (int *)((long)param_4 - (ulong)uVar12);
      if ((int)*param_4 == *piVar13) {
        puVar10 = (ulong *)((long)puVar26 - (ulong)uVar12);
        puVar18 = puVar26;
        if (puVar26 < puVar33) {
          if (*puVar10 == *puVar26) {
            iVar15 = 0;
            puVar18 = (ulong *)((long)param_4 + 0xc);
            puVar10 = (ulong *)(piVar13 + 3);
            do {
              if (puVar33 <= puVar18) goto joined_r0x002e8de0;
              uVar22 = *puVar10;
              uVar30 = *puVar18;
/* wm:proprietary - see LICENSE - do not sell */
              iVar15 = iVar15 + 8;
              puVar18 = puVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar22 == uVar30);
            uVar30 = uVar30 ^ uVar22;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            iVar15 = iVar15 + (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
          else {
            uVar30 = *puVar26 ^ *puVar10;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            iVar15 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
        }
        else {
joined_r0x002e8de0:
          if (puVar18 < puVar21) {
            if ((int)*puVar10 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
// more drops soon - github.com/pengussy
              puVar10 = (ulong *)((long)puVar10 + 4);
            }
          }
          if (puVar18 < puVar16) {
            if ((short)*puVar10 == (short)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 2);
              puVar10 = (ulong *)((long)puVar10 + 2);
            }
          }
          if (puVar18 < param_5) {
            if ((char)*puVar10 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          iVar15 = (int)puVar18 - iVar7;
        }
// WM - chat: discord.gg/sdkhDjTex
        uVar36 = iVar15 + 4;
      }
    }
  }
  uVar30 = (ulong)uVar36;
  if (uVar25 < uVar30) {
    param_1[uVar17 * 2] = 2;
    (param_1 + uVar17 * 2)[1] = uVar36;
    uVar17 = (ulong)((int)uVar17 + 1);
    if (uVar20 < uVar36 || (ulong *)((long)param_4 + uVar30) == param_5) {
      return uVar17;
    }
    uVar25 = uVar30;
    if (uVar35 != 1) goto LAB_002e8ed4;
LAB_002e8ea8:
    uVar12 = *param_6 - 1;
    if (*param_6 - 2U < uVar9) goto LAB_002e8ee4;
LAB_002e8ebc:
    uVar9 = 0;
  }
  else {
    if (uVar35 == 1) goto LAB_002e8ea8;
LAB_002e8ed4:
    uVar12 = param_6[uVar35 + 2];
    if (uVar9 <= uVar12 - 1) goto LAB_002e8ebc;
LAB_002e8ee4:
    uVar9 = 0;
    if (uVar2 <= uVar24 - uVar12) {
      piVar13 = (int *)((long)param_4 - (ulong)uVar12);
      if ((int)*param_4 == *piVar13) {
        puVar10 = (ulong *)((long)puVar26 - (ulong)uVar12);
        if (puVar26 < puVar33) {
/* WM - watermarked copy - do not remove */
          if (*puVar10 == *puVar26) {
            iVar15 = 0;
            puVar10 = (ulong *)(piVar13 + 3);
            puVar26 = (ulong *)((long)param_4 + 0xc);
            do {
              if (puVar33 <= puVar26) goto joined_r0x002e8f78;
              uVar30 = *puVar10;
              uVar35 = *puVar26;
              iVar15 = iVar15 + 8;
              puVar10 = puVar10 + 1;
              puVar26 = puVar26 + 1;
            } while (uVar30 == uVar35);
            uVar35 = uVar35 ^ uVar30;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            iVar15 = iVar15 + (int)((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
          }
          else {
            uVar35 = *puVar26 ^ *puVar10;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            iVar15 = (int)((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
          }
        }
        else {
joined_r0x002e8f78:
          if (puVar26 < puVar21) {
            if ((int)*puVar10 == (int)*puVar26) {
// WM - if you paid for this, you were scammed
              puVar26 = (ulong *)((long)puVar26 + 4);
              puVar10 = (ulong *)((long)puVar10 + 4);
            }
          }
          if (puVar26 < puVar16) {
            if ((short)*puVar10 == (short)*puVar26) {
              puVar10 = (ulong *)((long)puVar10 + 2);
              puVar26 = (ulong *)((long)puVar26 + 2);
            }
          }
          if (puVar26 < param_5) {
            if ((char)*puVar10 == (char)*puVar26) {
              puVar26 = (ulong *)((long)puVar26 + 1);
            }
          }
          iVar15 = (int)puVar26 - iVar7;
        }
        uVar9 = iVar15 + 4;
      }
    }
  }
  uVar35 = (ulong)uVar9;
  if (uVar25 < uVar35) {
    param_1[uVar17 * 2] = 3;
    (param_1 + uVar17 * 2)[1] = uVar9;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    uVar17 = (ulong)((int)uVar17 + 1);
    uVar25 = uVar35;
    if (uVar20 < uVar9 || (ulong *)((long)param_4 + uVar35) == param_5) {
      return uVar17;
    }
  }
LAB_002e9014:
  puVar11 = (uint *)(lVar19 + (ulong)((uVar24 & (uVar4 ^ 0xffffffff)) << 1) * 4);
  puVar14 = puVar11 + 1;
  iVar7 = uVar24 + 9;
  *(uint *)(lVar27 + uVar29 * 4) = uVar24;
  if (uVar5 <= uVar23) {
    uVar35 = 0;
    uVar29 = 0;
    iVar15 = 1 << (ulong)(uVar3 & 0x1f);
    iVar8 = iVar7;
    do {
      uVar30 = uVar35;
      if (uVar29 <= uVar35) {
        uVar30 = uVar29;
      }
      lVar27 = lVar28 + (ulong)uVar23;
      puVar26 = (ulong *)(lVar27 + uVar30);
      puVar16 = (ulong *)((long)param_4 + uVar30);
      if (puVar16 < (ulong *)((long)param_5 + -7)) {
        if (*puVar26 == *puVar16) {
          lVar31 = 0;
          puVar21 = (ulong *)((long)param_4 + uVar30 + 8);
          puVar26 = (ulong *)(lVar28 + 8 + uVar30 + uVar23);
          do {
            if ((ulong *)((long)param_5 + -7) <= puVar21) goto LAB_002e911c;
            uVar34 = *puVar26;
            uVar22 = *puVar21;
            lVar31 = lVar31 + 8;
            puVar21 = puVar21 + 1;
            puVar26 = puVar26 + 1;
          } while (uVar34 == uVar22);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar22 = uVar22 ^ uVar34;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = lVar31 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
        }
        else {
          uVar22 = *puVar16 ^ *puVar26;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
        }
        uVar22 = uVar22 + uVar30;
      }
      else {
        puVar21 = puVar16;
LAB_002e911c:
        if (puVar21 < (ulong *)((long)param_5 + -3)) {
          if ((int)*puVar26 == (int)*puVar21) {
            puVar21 = (ulong *)((long)puVar21 + 4);
            puVar26 = (ulong *)((long)puVar26 + 4);
          }
        }
        if (puVar21 < (ulong *)((long)param_5 + -1)) {
          if ((short)*puVar26 == (short)*puVar21) {
            puVar21 = (ulong *)((long)puVar21 + 2);
            puVar26 = (ulong *)((long)puVar26 + 2);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          }
        }
        if (puVar21 < param_5) {
          if ((char)*puVar26 == (char)*puVar21) {
            puVar21 = (ulong *)((long)puVar21 + 1);
          }
        }
        uVar22 = (long)puVar21 + (uVar30 - (long)puVar16);
      }
      iVar7 = iVar8;
      if (uVar25 < uVar22) {
        iVar7 = uVar23 + (int)uVar22;
        if (uVar22 <= iVar8 - uVar23) {
          iVar7 = iVar8;
        }
        param_1[uVar17 * 2] = (uVar24 + 3) - uVar23;
        (param_1 + uVar17 * 2)[1] = (int)uVar22;
        uVar17 = (ulong)((int)uVar17 + 1);
        uVar25 = uVar22;
        if (0x1000 < uVar22 || (ulong *)((long)param_4 + uVar22) == param_5) break;
      }
      puVar32 = (uint *)(lVar19 + (ulong)((uVar23 & uVar6) << 1) * 4);
/* WM - stripping the watermark breaks the license */
      if (*(byte *)(lVar27 + uVar22) < *(byte *)((long)param_4 + uVar22)) {
        *puVar11 = uVar23;
        if (uVar23 <= uVar1) {
          puVar11 = &uStack_64;
          break;
        }
        puVar11 = puVar32 + 1;
        uVar35 = uVar22;
        puVar32 = puVar11;
      }
      else {
        *puVar14 = uVar23;
        if (uVar23 <= uVar1) {
          puVar14 = &uStack_64;
          break;
        }
        puVar14 = puVar32;
        uVar29 = uVar22;
      }
      iVar15 = iVar15 + -1;
      if (iVar15 == 0) break;
      uVar23 = *puVar32;
      iVar8 = iVar7;
    } while (uVar5 <= uVar23);
  }
  *puVar14 = 0;
  *puVar11 = 0;
  *(int *)(param_2 + 0x2c) = iVar7 + -8;
  return uVar17;
}

