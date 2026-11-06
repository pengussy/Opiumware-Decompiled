/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x27dab0:7db4a99cf0
 */

long * FUN_0027dab0(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  
/* wm:donate: donate/README.md */
  if (param_1 != param_2) {
    uVar4 = (long)param_2 - (long)param_1 >> 3;
    if (1 < (long)uVar4) {
      uVar5 = uVar4 - 2 >> 1;
      uVar8 = uVar5;
      do {
        if (uVar8 <= uVar5) {
          uVar15 = (uVar8 & 0x3fffffffffffffff) << 1 | 1;
          uVar12 = uVar8 * 2 + 2;
          uVar9 = uVar15;
          if ((uVar12 < uVar4) &&
             (uVar9 = uVar12,
             *(ulong *)(param_1[uVar12] + 0x30) <= *(ulong *)(param_1[uVar15] + 0x30))) {
            uVar9 = uVar15;
          }
          lVar14 = param_1[uVar9];
          lVar11 = param_1[uVar8];
          uVar12 = *(ulong *)(lVar11 + 0x30);
          if (uVar12 <= *(ulong *)(lVar14 + 0x30)) {
            uVar15 = uVar8;
            do {
              uVar10 = uVar9;
              param_1[uVar15] = lVar14;
              if ((long)uVar5 < (long)uVar10) break;
              uVar2 = uVar10 << 1 | 1;
              uVar15 = uVar10 * 2 + 2;
              uVar9 = uVar2;
              if (((long)uVar15 < (long)uVar4) &&
// watermarked copy - do not remove
                 (uVar9 = uVar15,
                 *(ulong *)(param_1[uVar15] + 0x30) <= *(ulong *)(param_1[uVar2] + 0x30))) {
                uVar9 = uVar2;
              }
              lVar14 = param_1[uVar9];
              uVar15 = uVar10;
            } while (uVar12 <= *(ulong *)(lVar14 + 0x30));
            param_1[uVar10] = lVar11;
          }
        }
        bVar1 = 0 < (long)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar1);
    }
    plVar6 = param_2;
    if (param_2 != param_3) {
      if ((long)uVar4 < 2) {
        lVar11 = *param_1;
        do {
          lVar14 = *plVar6;
          if (*(ulong *)(lVar14 + 0x30) < *(ulong *)(lVar11 + 0x30)) {
            *plVar6 = lVar11;
            *param_1 = lVar14;
            lVar11 = lVar14;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != param_3);
      }
      else {
        do {
/* WM - chat: discord.gg/sdkhDjTex */
          lVar11 = *plVar6;
          uVar8 = *(ulong *)(lVar11 + 0x30);
          if (uVar8 < *(ulong *)(*param_1 + 0x30)) {
            *plVar6 = *param_1;
            *param_1 = lVar11;
            if ((long)param_2 - (long)param_1 == 0x10) {
              uVar5 = 1;
              lVar14 = param_1[1];
              uVar12 = *(ulong *)(lVar14 + 0x30);
            }
            else {
              uVar5 = 1;
              if (*(ulong *)(param_1[1] + 0x30) < *(ulong *)(param_1[2] + 0x30)) {
                uVar5 = 2;
              }
              lVar14 = param_1[uVar5];
              uVar12 = *(ulong *)(lVar14 + 0x30);
            }
            if (uVar8 <= uVar12) {
              uVar12 = 0;
              do {
                uVar15 = uVar5;
                param_1[uVar12] = lVar14;
                if ((long)(uVar4 - 2 >> 1) < (long)uVar15) break;
/* WM - donate: donate/README.md */
                uVar9 = uVar15 << 1 | 1;
                uVar12 = uVar15 * 2 + 2;
                uVar5 = uVar9;
                if (((long)uVar12 < (long)uVar4) &&
                   (uVar5 = uVar12,
                   *(ulong *)(param_1[uVar12] + 0x30) <= *(ulong *)(param_1[uVar9] + 0x30))) {
                  uVar5 = uVar9;
                }
                lVar14 = param_1[uVar5];
                uVar12 = uVar15;
              } while (uVar8 <= *(ulong *)(lVar14 + 0x30));
              param_1[uVar15] = lVar11;
            }
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != param_3);
      }
    }
    param_3 = plVar6;
    if (1 < (long)uVar4) {
      do {
        lVar11 = *param_1;
        uVar5 = uVar4 - 2 >> 1;
        plVar6 = param_1;
        uVar8 = 0;
        do {
          while( true ) {
// WM - no support for modified copies
            plVar7 = plVar6 + uVar8 + 1;
            uVar15 = uVar8 << 1 | 1;
            uVar12 = uVar8 * 2 + 2;
            if ((long)uVar12 < (long)uVar4) break;
            *plVar6 = *plVar7;
            plVar6 = plVar7;
            uVar8 = uVar15;
            if ((long)uVar5 < (long)uVar15) goto LAB_0027dd6c;
          }
          lVar14 = uVar8 + 2;
          lVar3 = uVar8 + 1;
          uVar8 = uVar12;
          plVar13 = plVar6 + lVar14;
          if (*(ulong *)(plVar6[lVar14] + 0x30) <= *(ulong *)(plVar6[lVar3] + 0x30)) {
            uVar8 = uVar15;
            plVar13 = plVar7;
          }
          plVar7 = plVar13;
          *plVar6 = *plVar7;
          plVar6 = plVar7;
        } while ((long)uVar8 <= (long)uVar5);
LAB_0027dd6c:
        param_2 = param_2 + -1;
        if (plVar7 == param_2) {
/* WM - more drops soon - github.com/pengussy */
          *plVar7 = lVar11;
        }
        else {
          *plVar7 = *param_2;
          *param_2 = lVar11;
          lVar11 = (long)plVar7 + (8 - (long)param_1) >> 3;
          if (1 < lVar11) {
            uVar8 = lVar11 - 2U >> 1;
            lVar14 = param_1[uVar8];
            lVar11 = *plVar7;
            uVar5 = *(ulong *)(lVar11 + 0x30);
            plVar6 = param_1 + uVar8;
            if (*(ulong *)(lVar14 + 0x30) < uVar5) {
              do {
                plVar13 = plVar6;
                *plVar7 = lVar14;
/* donate: donate/README.md - github.com/pengussy */
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1 >> 1;
                lVar14 = param_1[uVar8];
                plVar7 = plVar13;
                plVar6 = param_1 + uVar8;
              } while (*(ulong *)(lVar14 + 0x30) < uVar5);
              *plVar13 = lVar11;
            }
          }
        }
        bVar1 = 2 < (long)uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar1);
    }
  }
  return param_3;
}

