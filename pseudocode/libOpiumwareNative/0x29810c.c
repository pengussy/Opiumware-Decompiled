/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x29810c:58b63f3c09
 */

ulong FUN_0029810c(undefined2 *param_1,uint param_2,uint *param_3,ulong param_4,uint param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined2 uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  
  uVar13 = 0xb;
  if (param_2 != 0) {
    uVar13 = param_2;
  }
  uVar5 = (ulong)uVar13;
  if (4 < uVar13) {
    if (0xc < uVar13) {
/* do not claim this as your own - github.com/pengussy */
      return 0xffffffffffffffd4;
    }
    uVar8 = 0x20 - (int)LZCOUNT((int)param_4);
    uVar16 = 0x21 - (int)LZCOUNT(param_5);
    if (uVar16 <= uVar8) {
      uVar8 = uVar16;
    }
    if (uVar8 <= uVar13) {
      uVar17 = 0;
      uVar16 = 0;
      uVar8 = 0;
      uVar15 = 0xffff;
      if (param_6 == 0) {
        uVar15 = 1;
      }
      uVar14 = (ulong)(0x3e - uVar13);
      iVar3 = 1 << (ulong)(uVar13 & 0x1f);
      uVar18 = 0;
/* proprietary - see LICENSE - do not sell */
      if ((param_4 & 0xffffffff) != 0) {
        uVar18 = 0x4000000000000000 / (param_4 & 0xffffffff);
      }
      iVar21 = iVar3;
      do {
        uVar9 = param_3[uVar8];
        if (param_4 == uVar9) {
          return 0;
        }
        uVar19 = (uint)(param_4 >> (uVar5 & 0x3f));
        if (uVar9 == 0) {
          param_1[uVar8] = 0;
        }
        else if (uVar19 < uVar9) {
          uVar12 = uVar18 * uVar9;
          uVar10 = uVar12 >> (uVar14 & 0x3f);
          uVar9 = (uint)uVar10;
          if (((uVar10 & 0xfff8) == 0) &&
             ((ulong)*(uint *)(&UNK_01adc4c8 + (uVar10 & 0xffff) * 4) << (uVar14 - 0x14 & 0x3f) <
              uVar12 - ((uVar10 & 0xffff) << (uVar14 & 0x3f)))) {
            uVar9 = uVar9 + 1;
          }
          uVar1 = uVar9 & 0xffff;
          uVar2 = uVar1;
          uVar4 = uVar8;
          if (uVar1 <= uVar17) {
            uVar2 = uVar17;
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          param_1[uVar8] = (short)uVar9;
          iVar21 = iVar21 - uVar1;
          uVar17 = uVar2;
        }
        else {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
          param_1[uVar8] = uVar15;
          iVar21 = iVar21 + -1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 <= param_5);
      if (-iVar21 < (int)(short)param_1[uVar16] >> 1) {
        param_1[uVar16] = param_1[uVar16] + (short)iVar21;
      }
      else {
        uVar8 = 0;
        uVar12 = param_4 * 3 >> ((ulong)(uVar13 + 1) & 0x3f);
        uVar13 = param_5 + 1;
        uVar10 = (ulong)uVar13;
        puVar6 = param_3;
        uVar18 = uVar10;
        puVar11 = param_1;
        do {
          uVar16 = *puVar6;
          if (uVar16 == 0) {
            *puVar11 = 0;
          }
          else {
            if (uVar19 < uVar16) {
              if ((uint)uVar12 < uVar16) {
                *puVar11 = 0xfffe;
                goto LAB_00298290;
              }
              *puVar11 = 1;
            }
            else {
              *puVar11 = uVar15;
            }
            uVar8 = uVar8 + 1;
            param_4 = param_4 - uVar16;
          }
LAB_00298290:
/* WM - found on a paste site? it was re-uploaded illegally */
          puVar11 = puVar11 + 1;
          uVar18 = uVar18 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar18 != 0);
        uVar16 = iVar3 - uVar8;
        uVar18 = (ulong)uVar16;
        if (uVar16 != 0) {
          uVar20 = 0;
          if (uVar18 != 0) {
            uVar20 = param_4 / uVar18;
          }
          if ((uVar12 & 0xffffffff) < uVar20) {
            uVar18 = uVar10 & 7;
            uVar17 = 0;
            if ((ulong)(uVar16 * 2) != 0) {
              uVar17 = (uint)((param_4 * 3) / (ulong)(uVar16 * 2));
            }
            if (param_5 < 7) {
              lVar22 = 0;
            }
            else {
              lVar22 = 0;
              puVar6 = param_3 + 4;
/* unlicensed copy if this notice is missing - github.com/pengussy */
              psVar7 = param_1 + 4;
              do {
                if ((psVar7[-4] == -2) && (uVar16 = puVar6[-4], uVar16 <= uVar17)) {
                  psVar7[-4] = 1;
                  uVar8 = uVar8 + 1;
                  param_4 = param_4 - uVar16;
                }
                if ((psVar7[-3] == -2) && (uVar16 = puVar6[-3], uVar16 <= uVar17)) {
                  psVar7[-3] = 1;
                  uVar8 = uVar8 + 1;
                  param_4 = param_4 - uVar16;
                }
                if ((psVar7[-2] == -2) && (uVar16 = puVar6[-2], uVar16 <= uVar17)) {
                  psVar7[-2] = 1;
                  uVar8 = uVar8 + 1;
                  param_4 = param_4 - uVar16;
                }
                if ((psVar7[-1] == -2) && (uVar16 = puVar6[-1], uVar16 <= uVar17)) {
                  psVar7[-1] = 1;
                  uVar8 = uVar8 + 1;
                  param_4 = param_4 - uVar16;
                }
                if ((*psVar7 == -2) && (uVar16 = *puVar6, uVar16 <= uVar17)) {
                  *psVar7 = 1;
                  uVar8 = uVar8 + 1;
                  param_4 = param_4 - uVar16;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
                }
                if ((psVar7[1] == -2) && (uVar16 = puVar6[1], uVar16 <= uVar17)) {
                  psVar7[1] = 1;
                  uVar8 = uVar8 + 1;
                  param_4 = param_4 - uVar16;
                }
                if ((psVar7[2] == -2) && (uVar16 = puVar6[2], uVar16 <= uVar17)) {
                  psVar7[2] = 1;
                  uVar8 = uVar8 + 1;
                  param_4 = param_4 - uVar16;
                }
                if ((psVar7[3] == -2) && (uVar16 = puVar6[3], uVar16 <= uVar17)) {
                  psVar7[3] = 1;
                  uVar8 = uVar8 + 1;
                  param_4 = param_4 - uVar16;
                }
                lVar22 = lVar22 + -8;
                puVar6 = puVar6 + 8;
                psVar7 = psVar7 + 8;
              } while (-lVar22 != (uVar10 & 0xfffffff8));
              lVar22 = -lVar22;
            }
            if ((uVar13 & 7) != 0) {
              puVar6 = param_3 + lVar22;
              psVar7 = param_1 + lVar22;
              do {
                if ((*psVar7 == -2) && (uVar16 = *puVar6, uVar16 <= uVar17)) {
                  *psVar7 = 1;
                  uVar8 = uVar8 + 1;
                  param_4 = param_4 - uVar16;
                }
                puVar6 = puVar6 + 1;
                psVar7 = psVar7 + 1;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            uVar18 = (ulong)(iVar3 - uVar8);
          }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
          if (uVar8 == uVar13) {
            uVar14 = 0;
            uVar13 = 0;
            uVar8 = 0;
            do {
              uVar16 = param_3[uVar14];
              uVar17 = (uint)uVar14;
              if (param_3[uVar14] <= uVar8) {
                uVar16 = uVar8;
                uVar17 = uVar13;
              }
              uVar13 = uVar17;
              uVar14 = uVar14 + 1;
              uVar8 = uVar16;
            } while (uVar10 != uVar14);
            param_1[uVar13] = param_1[uVar13] + (short)uVar18;
            return uVar5;
          }
          if (param_4 == 0) {
            if ((int)uVar18 != 0) {
              uVar13 = 0;
              do {
                if (0 < (short)param_1[uVar13]) {
                  uVar18 = (ulong)((int)uVar18 - 1);
                  param_1[uVar13] = param_1[uVar13] + 1;
                }
/* wm:more drops soon - github.com/pengussy */
                uVar8 = 0;
                if (uVar13 != param_5) {
                  uVar8 = uVar13 + 1;
                }
                uVar13 = uVar8;
              } while ((int)uVar18 != 0);
            }
          }
          else {
            uVar13 = 0;
            uVar12 = ~(-1L << (uVar14 - 1 & 0x3f));
            uVar10 = 0;
            if ((param_4 & 0xffffffff) != 0) {
              uVar10 = ((uVar18 << (uVar14 & 0x3f)) + uVar12) / (param_4 & 0xffffffff);
            }
            do {
              uVar18 = uVar12;
              if (param_1[uVar13] == -2) {
                uVar18 = uVar12 + uVar10 * param_3[uVar13];
                uVar12 = uVar12 >> (uVar14 & 0x3f);
                uVar20 = uVar18 >> (uVar14 & 0x3f);
                if (uVar20 == uVar12) {
                  return 0xffffffffffffffff;
                }
                param_1[uVar13] = (short)uVar20 - (short)uVar12;
              }
              uVar13 = uVar13 + 1;
              uVar12 = uVar18;
            } while (uVar13 <= param_5);
          }
        }
      }
      return uVar5;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    }
  }
  return 0xffffffffffffffff;
}

