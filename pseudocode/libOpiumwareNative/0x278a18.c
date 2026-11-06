/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x278a18:e3f8c3d98c
 */

void FUN_00278a18(long *param_1,long *param_2,long param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
// thanks for reading - discord.gg/sdkhDjTex
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  
  do {
    plVar12 = param_1;
LAB_00278a44:
    param_1 = plVar12;
    uVar4 = (long)param_2 - (long)param_1 >> 3;
    if (uVar4 - 2 == 0 || (long)uVar4 < 2) {
      if (uVar4 < 2) {
        return;
      }
      if (uVar4 == 2) {
        lVar6 = *param_1;
        if (*(ulong *)(param_2[-1] + 0x50) < *(ulong *)(lVar6 + 0x50)) {
          *param_1 = param_2[-1];
/* donate: donate/README.md */
          param_2[-1] = lVar6;
          return;
        }
        return;
      }
    }
    else {
      if (uVar4 == 3) {
        lVar6 = *param_1;
        lVar5 = param_1[1];
        uVar9 = *(ulong *)(lVar5 + 0x50);
        uVar4 = *(ulong *)(lVar6 + 0x50);
        lVar13 = param_2[-1];
        if (uVar9 < uVar4) {
          if (*(ulong *)(lVar13 + 0x50) < uVar9) {
            *param_1 = lVar13;
          }
          else {
            *param_1 = lVar5;
            param_1[1] = lVar6;
            if (uVar4 <= *(ulong *)(param_2[-1] + 0x50)) {
              return;
            }
            param_1[1] = param_2[-1];
          }
          param_2[-1] = lVar6;
          return;
        }
        if (uVar9 <= *(ulong *)(lVar13 + 0x50)) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          return;
        }
        param_1[1] = lVar13;
        param_2[-1] = lVar5;
        lVar6 = *param_1;
        if (*(ulong *)(param_1[1] + 0x50) < *(ulong *)(lVar6 + 0x50)) {
          *param_1 = param_1[1];
          param_1[1] = lVar6;
          return;
        }
        return;
      }
      if (uVar4 == 4) {
        lVar6 = *param_1;
        lVar5 = param_1[1];
        uVar16 = *(ulong *)(lVar5 + 0x50);
        uVar4 = *(ulong *)(lVar6 + 0x50);
        lVar13 = param_1[2];
        uVar9 = *(ulong *)(lVar13 + 0x50);
        if (uVar16 < uVar4) {
          if (uVar9 < uVar16) {
            *param_1 = lVar13;
          }
          else {
            *param_1 = lVar5;
            param_1[1] = lVar6;
            if (uVar4 <= uVar9) {
              lVar8 = param_2[-1];
              lVar6 = lVar13;
              if (*(ulong *)(lVar13 + 0x50) <= *(ulong *)(lVar8 + 0x50)) {
                return;
              }
              goto LAB_002793c0;
            }
            param_1[1] = lVar13;
          }
// proprietary - see LICENSE - do not sell
          param_1[2] = lVar6;
          lVar8 = param_2[-1];
          if (*(ulong *)(lVar6 + 0x50) <= *(ulong *)(lVar8 + 0x50)) {
            return;
          }
        }
        else {
          if (uVar9 < uVar16) {
            param_1[1] = lVar13;
            param_1[2] = lVar5;
            if (uVar9 < uVar4) {
              *param_1 = lVar13;
              param_1[1] = lVar6;
              lVar8 = param_2[-1];
              lVar6 = lVar5;
              if (*(ulong *)(lVar5 + 0x50) <= *(ulong *)(lVar8 + 0x50)) {
                return;
              }
              goto LAB_002793c0;
            }
          }
          else {
            lVar5 = lVar13;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
          }
          lVar8 = param_2[-1];
          lVar6 = lVar5;
          if (*(ulong *)(lVar5 + 0x50) <= *(ulong *)(lVar8 + 0x50)) {
            return;
          }
        }
LAB_002793c0:
        param_1[2] = lVar8;
        param_2[-1] = lVar6;
        lVar6 = param_1[1];
        lVar5 = param_1[2];
        uVar4 = *(ulong *)(lVar5 + 0x50);
        if (*(ulong *)(lVar6 + 0x50) <= uVar4) {
          return;
        }
        param_1[1] = lVar5;
        param_1[2] = lVar6;
        lVar6 = *param_1;
        if (uVar4 < *(ulong *)(lVar6 + 0x50)) {
          *param_1 = lVar5;
          param_1[1] = lVar6;
          return;
        }
        return;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      }
      if (uVar4 == 5) {
        plVar12 = param_1 + 1;
        plVar7 = param_1 + 2;
        plVar19 = param_1 + 3;
        lVar5 = *plVar12;
        lVar13 = *param_1;
        uVar9 = *(ulong *)(lVar5 + 0x50);
        uVar4 = *(ulong *)(lVar13 + 0x50);
        lVar6 = *plVar7;
        if (uVar9 < uVar4) {
          if (*(ulong *)(lVar6 + 0x50) < uVar9) {
            *param_1 = lVar6;
          }
          else {
            *param_1 = lVar5;
            *plVar12 = lVar13;
            lVar6 = *plVar7;
            if (uVar4 <= *(ulong *)(lVar6 + 0x50)) goto code_r0x002794c8;
            *plVar12 = lVar6;
          }
          *plVar7 = lVar13;
          lVar6 = lVar13;
code_r0x002794c8:
          lVar5 = *plVar19;
          if (*(ulong *)(lVar6 + 0x50) <= *(ulong *)(lVar5 + 0x50)) goto code_r0x00279540;
        }
        else if (*(ulong *)(lVar6 + 0x50) < uVar9) {
          *plVar12 = lVar6;
          *plVar7 = lVar5;
          lVar13 = *param_1;
          lVar6 = lVar5;
          if (*(ulong *)(lVar13 + 0x50) <= *(ulong *)(*plVar12 + 0x50)) goto code_r0x002794c8;
/* wm:stripping the watermark breaks the license */
          *param_1 = *plVar12;
          *plVar12 = lVar13;
          lVar6 = *plVar7;
          lVar5 = *plVar19;
          if (*(ulong *)(lVar6 + 0x50) <= *(ulong *)(lVar5 + 0x50)) goto code_r0x00279540;
        }
        else {
          lVar5 = *plVar19;
          if (*(ulong *)(lVar6 + 0x50) <= *(ulong *)(lVar5 + 0x50)) goto code_r0x00279540;
        }
        *plVar7 = lVar5;
        *plVar19 = lVar6;
        lVar6 = *plVar12;
        if (*(ulong *)(*plVar7 + 0x50) < *(ulong *)(lVar6 + 0x50)) {
          *plVar12 = *plVar7;
          *plVar7 = lVar6;
          lVar6 = *param_1;
          if (*(ulong *)(*plVar12 + 0x50) < *(ulong *)(lVar6 + 0x50)) {
            *param_1 = *plVar12;
            *plVar12 = lVar6;
          }
        }
code_r0x00279540:
        lVar6 = param_2[-1];
/* no support for modified copies */
        lVar5 = *plVar19;
        if (*(ulong *)(lVar6 + 0x50) < *(ulong *)(lVar5 + 0x50)) {
          *plVar19 = lVar6;
          param_2[-1] = lVar5;
          lVar6 = *plVar7;
          if (*(ulong *)(*plVar19 + 0x50) < *(ulong *)(lVar6 + 0x50)) {
            *plVar7 = *plVar19;
            *plVar19 = lVar6;
            lVar6 = *plVar12;
            if (*(ulong *)(*plVar7 + 0x50) < *(ulong *)(lVar6 + 0x50)) {
              *plVar12 = *plVar7;
              *plVar7 = lVar6;
              lVar6 = *param_1;
              if (*(ulong *)(*plVar12 + 0x50) < *(ulong *)(lVar6 + 0x50)) {
                *param_1 = *plVar12;
                *plVar12 = lVar6;
              }
            }
          }
        }
/* WM - found on a paste site? it was re-uploaded illegally */
        return;
      }
    }
    if ((long)uVar4 < 0x18) {
      plVar12 = param_1 + 1;
      if ((param_4 & 1) == 0) {
        if (!(param_1 == param_2 || plVar12 == param_2)) {
          do {
            plVar7 = plVar12;
            lVar6 = *param_1;
            lVar5 = param_1[1];
            uVar4 = *(ulong *)(lVar5 + 0x50);
            if (uVar4 < *(ulong *)(lVar6 + 0x50)) {
              plVar12 = plVar7;
              do {
                *plVar12 = lVar6;
                lVar6 = plVar12[-2];
                plVar12 = plVar12 + -1;
              } while (uVar4 < *(ulong *)(lVar6 + 0x50));
              *plVar12 = lVar5;
            }
            plVar12 = plVar7 + 1;
            param_1 = plVar7;
          } while (plVar7 + 1 != param_2);
          return;
        }
        return;
      }
      if (param_1 == param_2 || plVar12 == param_2) {
        return;
      }
      lVar6 = 0;
      plVar7 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        return;
      }
      uVar16 = uVar4 - 2 >> 1;
      uVar9 = uVar16;
      goto LAB_002790b4;
    }
    plVar12 = param_1 + (uVar4 >> 1);
    lVar6 = param_2[-1];
    uVar9 = *(ulong *)(lVar6 + 0x50);
    if (uVar4 < 0x81) {
      lVar13 = *param_1;
      lVar5 = *plVar12;
      uVar16 = *(ulong *)(lVar13 + 0x50);
      uVar4 = *(ulong *)(lVar5 + 0x50);
      if (uVar16 < uVar4) {
        if (uVar9 < uVar16) {
          *plVar12 = lVar6;
        }
        else {
          *plVar12 = lVar13;
          *param_1 = lVar5;
          if (uVar4 <= *(ulong *)(param_2[-1] + 0x50)) goto LAB_00278c08;
          *param_1 = param_2[-1];
        }
        param_2[-1] = lVar5;
      }
      else if (uVar9 < uVar16) {
        *param_1 = lVar6;
        param_2[-1] = lVar13;
        lVar6 = *plVar12;
/* wm:chat: discord.gg/sdkhDjTex */
        if (*(ulong *)(*param_1 + 0x50) < *(ulong *)(lVar6 + 0x50)) {
          *plVar12 = *param_1;
          *param_1 = lVar6;
          goto joined_r0x00278d3c;
        }
      }
LAB_00278c08:
      if ((param_4 & 1) == 0) goto LAB_00278d40;
LAB_00278c10:
      lVar6 = *param_1;
      uVar4 = *(ulong *)(lVar6 + 0x50);
    }
    else {
      lVar13 = *plVar12;
      lVar5 = *param_1;
      uVar16 = *(ulong *)(lVar13 + 0x50);
      uVar4 = *(ulong *)(lVar5 + 0x50);
      if (uVar16 < uVar4) {
        if (uVar9 < uVar16) {
          *param_1 = lVar6;
        }
        else {
          *param_1 = lVar13;
/* wm:more drops soon - github.com/pengussy */
          *plVar12 = lVar5;
          if (uVar4 <= *(ulong *)(param_2[-1] + 0x50)) goto LAB_00278b84;
          *plVar12 = param_2[-1];
        }
        param_2[-1] = lVar5;
      }
      else if (uVar9 < uVar16) {
        *plVar12 = lVar6;
        param_2[-1] = lVar13;
        lVar6 = *param_1;
        if (*(ulong *)(*plVar12 + 0x50) < *(ulong *)(lVar6 + 0x50)) {
          *param_1 = *plVar12;
          *plVar12 = lVar6;
        }
      }
LAB_00278b84:
      lVar5 = plVar12[-1];
      lVar6 = param_1[1];
      uVar9 = *(ulong *)(lVar5 + 0x50);
      uVar4 = *(ulong *)(lVar6 + 0x50);
      lVar13 = param_2[-2];
      if (uVar9 < uVar4) {
        if (*(ulong *)(lVar13 + 0x50) < uVar9) {
          param_1[1] = lVar13;
        }
        else {
          param_1[1] = lVar5;
          plVar12[-1] = lVar6;
          if (uVar4 <= *(ulong *)(param_2[-2] + 0x50)) goto LAB_00278c3c;
          plVar12[-1] = param_2[-2];
        }
        param_2[-2] = lVar6;
      }
      else if (*(ulong *)(lVar13 + 0x50) < uVar9) {
/* WM - more drops soon - github.com/pengussy */
        plVar12[-1] = lVar13;
        param_2[-2] = lVar5;
        lVar6 = param_1[1];
        if (*(ulong *)(plVar12[-1] + 0x50) < *(ulong *)(lVar6 + 0x50)) {
          param_1[1] = plVar12[-1];
          plVar12[-1] = lVar6;
        }
      }
LAB_00278c3c:
      lVar5 = plVar12[1];
      lVar6 = param_1[2];
      uVar9 = *(ulong *)(lVar5 + 0x50);
      uVar4 = *(ulong *)(lVar6 + 0x50);
      lVar13 = param_2[-3];
      if (uVar9 < uVar4) {
        if (*(ulong *)(lVar13 + 0x50) < uVar9) {
          param_1[2] = lVar13;
        }
        else {
          param_1[2] = lVar5;
          plVar12[1] = lVar6;
          if (uVar4 <= *(ulong *)(param_2[-3] + 0x50)) goto LAB_00278cc0;
          plVar12[1] = param_2[-3];
        }
        param_2[-3] = lVar6;
// WM - watermarked copy - do not remove
      }
      else if (*(ulong *)(lVar13 + 0x50) < uVar9) {
        plVar12[1] = lVar13;
        param_2[-3] = lVar5;
        lVar6 = param_1[2];
        if (*(ulong *)(plVar12[1] + 0x50) < *(ulong *)(lVar6 + 0x50)) {
          param_1[2] = plVar12[1];
          plVar12[1] = lVar6;
        }
      }
LAB_00278cc0:
      lVar6 = plVar12[-1];
      lVar5 = *plVar12;
      uVar16 = *(ulong *)(lVar5 + 0x50);
      uVar4 = *(ulong *)(lVar6 + 0x50);
      lVar13 = plVar12[1];
      uVar9 = *(ulong *)(lVar13 + 0x50);
      if (uVar16 < uVar4) {
        if (uVar9 < uVar16) {
          plVar12[-1] = lVar13;
          plVar12[1] = lVar6;
        }
        else {
          plVar12[-1] = lVar5;
          *plVar12 = lVar6;
          lVar5 = lVar6;
          if (uVar9 < uVar4) {
            *plVar12 = lVar13;
            plVar12[1] = lVar6;
            lVar5 = lVar13;
          }
        }
      }
      else if (uVar9 < uVar16) {
        *plVar12 = lVar13;
        plVar12[1] = lVar5;
        lVar5 = lVar13;
/*  watermarked copy - do not remove  */
        if (uVar9 < uVar4) {
          plVar12[-1] = lVar13;
          *plVar12 = lVar6;
          lVar5 = lVar6;
        }
      }
      lVar6 = *param_1;
      *param_1 = lVar5;
      *plVar12 = lVar6;
joined_r0x00278d3c:
      if ((param_4 & 1) != 0) goto LAB_00278c10;
LAB_00278d40:
      lVar6 = *param_1;
      uVar4 = *(ulong *)(lVar6 + 0x50);
      if (uVar4 <= *(ulong *)(param_1[-1] + 0x50)) {
        plVar12 = param_1;
        if (uVar4 < *(ulong *)(param_2[-1] + 0x50)) {
          do {
            plVar12 = plVar12 + 1;
          } while (*(ulong *)(*plVar12 + 0x50) <= uVar4);
        }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        else {
          do {
            plVar12 = plVar12 + 1;
            if (param_2 <= plVar12) break;
          } while (*(ulong *)(*plVar12 + 0x50) <= uVar4);
        }
        plVar7 = param_2;
        if (plVar12 < param_2) {
          do {
            plVar7 = plVar7 + -1;
          } while (uVar4 < *(ulong *)(*plVar7 + 0x50));
        }
        if (plVar12 < plVar7) {
          lVar5 = *plVar12;
          lVar13 = *plVar7;
          do {
// WM - found on a paste site? it was re-uploaded illegally
            *plVar12 = lVar13;
            *plVar7 = lVar5;
            do {
              plVar12 = plVar12 + 1;
              lVar5 = *plVar12;
            } while (*(ulong *)(lVar5 + 0x50) <= uVar4);
            do {
              plVar7 = plVar7 + -1;
              lVar13 = *plVar7;
            } while (uVar4 < *(ulong *)(lVar13 + 0x50));
          } while (plVar12 < plVar7);
        }
        plVar7 = plVar12 + -1;
        if (param_1 != plVar7) {
          *param_1 = *plVar7;
        }
        param_4 = 0;
        *plVar7 = lVar6;
        param_3 = param_3 + -1;
        goto LAB_00278a44;
/*  donate: donate/README.md  */
      }
    }
    param_3 = param_3 + -1;
    lVar5 = 0;
    do {
      lVar13 = *(long *)((long)param_1 + lVar5 + 8);
      lVar5 = lVar5 + 8;
    } while (*(ulong *)(lVar13 + 0x50) < uVar4);
    plVar12 = (long *)((long)param_1 + lVar5);
    plVar7 = param_2;
    if (lVar5 == 8) {
      do {
        if (plVar7 <= plVar12) break;
        plVar7 = plVar7 + -1;
      } while (uVar4 <= *(ulong *)(*plVar7 + 0x50));
    }
    else {
      do {
        plVar7 = plVar7 + -1;
      } while (uVar4 <= *(ulong *)(*plVar7 + 0x50));
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    if (plVar12 < plVar7) {
      lVar5 = *plVar7;
      plVar14 = plVar12;
      plVar17 = plVar7;
      do {
        *plVar14 = lVar5;
        *plVar17 = lVar13;
        do {
          plVar19 = plVar14;
          plVar14 = plVar19 + 1;
          lVar13 = *plVar14;
        } while (*(ulong *)(lVar13 + 0x50) < uVar4);
        do {
          plVar17 = plVar17 + -1;
          lVar5 = *plVar17;
        } while (uVar4 <= *(ulong *)(lVar5 + 0x50));
      } while (plVar14 < plVar17);
    }
    else {
      plVar19 = plVar12 + -1;
/* WM - origin: github.com/pengussy */
    }
    if (param_1 != plVar19) {
      *param_1 = *plVar19;
    }
    *plVar19 = lVar6;
    if (plVar12 < plVar7) goto LAB_00278e4c;
    uVar4 = func_0x002795c4(param_1,plVar19);
    iVar3 = func_0x002795c4(plVar19 + 1,param_2);
    if (iVar3 == 0) goto code_r0x00278e48;
    param_2 = plVar19;
    if ((uVar4 & 1) != 0) {
      return;
    }
  } while( true );
LAB_00279040:
  plVar19 = plVar12;
  lVar5 = plVar7[1];
  uVar4 = *(ulong *)(lVar5 + 0x50);
  if (uVar4 < *(ulong *)(*plVar7 + 0x50)) {
    plVar7[1] = *plVar7;
    lVar13 = lVar6;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    plVar12 = param_1;
    if (plVar7 != param_1) {
      do {
        plVar12 = (long *)((long)param_1 + lVar13);
        if (*(ulong *)(plVar12[-1] + 0x50) <= uVar4) goto LAB_00279028;
        *plVar12 = plVar12[-1];
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
      plVar12 = param_1;
    }
LAB_00279028:
    *plVar12 = lVar5;
  }
  plVar12 = plVar19 + 1;
  lVar6 = lVar6 + 8;
  plVar7 = plVar19;
  if (plVar12 == param_2) {
    return;
  }
  goto LAB_00279040;
LAB_002790b4:
  do {
    if (uVar9 <= uVar16) {
      uVar18 = (uVar9 & 0x3fffffffffffffff) << 1 | 1;
      uVar15 = uVar9 * 2 + 2;
      uVar10 = uVar18;
      if ((uVar15 < uVar4) &&
         (uVar10 = uVar15, *(ulong *)(param_1[uVar15] + 0x50) <= *(ulong *)(param_1[uVar18] + 0x50))
         ) {
        uVar10 = uVar18;
      }
      lVar5 = param_1[uVar10];
      lVar6 = param_1[uVar9];
      uVar15 = *(ulong *)(lVar6 + 0x50);
/*  reversing this took months of machine time  */
      if (uVar15 <= *(ulong *)(lVar5 + 0x50)) {
        uVar18 = uVar9;
        do {
          uVar11 = uVar10;
          param_1[uVar18] = lVar5;
          if ((long)uVar16 < (long)uVar11) break;
          uVar2 = (uVar11 & 0x3fffffffffffffff) << 1 | 1;
          uVar18 = uVar11 * 2 + 2;
          uVar10 = uVar2;
          if (((long)uVar18 < (long)uVar4) &&
             (uVar10 = uVar18,
             *(ulong *)(param_1[uVar18] + 0x50) <= *(ulong *)(param_1[uVar2] + 0x50))) {
            uVar10 = uVar2;
          }
          lVar5 = param_1[uVar10];
          uVar18 = uVar11;
        } while (uVar15 <= *(ulong *)(lVar5 + 0x50));
        param_1[uVar11] = lVar6;
      }
    }
    bVar1 = 0 < (long)uVar9;
    uVar9 = uVar9 - 1;
  } while (bVar1);
  do {
    lVar6 = *param_1;
    uVar16 = uVar4 - 2 >> 1;
    plVar12 = param_1;
    uVar9 = 0;
    do {
      while( true ) {
        plVar7 = plVar12 + uVar9 + 1;
        uVar18 = uVar9 << 1 | 1;
/* WM - unlicensed copy if this notice is missing */
        uVar15 = uVar9 * 2 + 2;
        if ((long)uVar15 < (long)uVar4) break;
        *plVar12 = *plVar7;
        plVar12 = plVar7;
        uVar9 = uVar18;
        if ((long)uVar16 < (long)uVar18) goto LAB_002791f4;
      }
      lVar5 = uVar9 + 2;
      lVar13 = uVar9 + 1;
      uVar9 = uVar15;
      plVar19 = plVar12 + lVar5;
      if (*(ulong *)(plVar12[lVar5] + 0x50) <= *(ulong *)(plVar12[lVar13] + 0x50)) {
        uVar9 = uVar18;
        plVar19 = plVar7;
      }
      plVar7 = plVar19;
      *plVar12 = *plVar7;
      plVar12 = plVar7;
    } while ((long)uVar9 <= (long)uVar16);
LAB_002791f4:
    param_2 = param_2 + -1;
    if (plVar7 == param_2) {
/* stripping the watermark breaks the license */
      *plVar7 = lVar6;
    }
    else {
      *plVar7 = *param_2;
      *param_2 = lVar6;
      lVar6 = (long)plVar7 + (8 - (long)param_1) >> 3;
      if (1 < lVar6) {
        uVar9 = lVar6 - 2U >> 1;
        lVar5 = param_1[uVar9];
        lVar6 = *plVar7;
        uVar16 = *(ulong *)(lVar6 + 0x50);
        plVar12 = param_1 + uVar9;
        if (*(ulong *)(lVar5 + 0x50) < uVar16) {
          do {
            plVar19 = plVar12;
            *plVar7 = lVar5;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            lVar5 = param_1[uVar9];
            plVar7 = plVar19;
            plVar12 = param_1 + uVar9;
          } while (*(ulong *)(lVar5 + 0x50) < uVar16);
          *plVar19 = lVar6;
        }
      }
    }
    bVar1 = (long)uVar4 < 3;
    uVar4 = uVar4 - 1;
    if (bVar1) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      return;
    }
  } while( true );
code_r0x00278e48:
  plVar12 = plVar19 + 1;
  if ((uVar4 & 1) == 0) {
LAB_00278e4c:
    FUN_00278a18(param_1,plVar19,param_3,param_4 & 1);
    param_4 = 0;
    plVar12 = plVar19 + 1;
  }
  goto LAB_00278a44;
}

