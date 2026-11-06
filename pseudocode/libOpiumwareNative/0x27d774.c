/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x27d774:b16c53b8d3
 */

bool FUN_0027d774(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar3 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      lVar6 = *param_1;
      if (*(ulong *)(param_2[-1] + 0x30) < *(ulong *)(lVar6 + 0x30)) {
/* if you paid for this, you were scammed */
        *param_1 = param_2[-1];
        param_2[-1] = lVar6;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      lVar6 = *param_1;
      lVar9 = param_1[1];
      uVar10 = *(ulong *)(lVar9 + 0x30);
      uVar3 = *(ulong *)(lVar6 + 0x30);
      lVar4 = param_2[-1];
      if (uVar3 <= uVar10) {
        if (uVar10 <= *(ulong *)(lVar4 + 0x30)) {
          return true;
        }
        param_1[1] = lVar4;
        param_2[-1] = lVar9;
        lVar6 = *param_1;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (*(ulong *)(param_1[1] + 0x30) < *(ulong *)(lVar6 + 0x30)) {
          *param_1 = param_1[1];
          param_1[1] = lVar6;
          return true;
        }
        return true;
      }
      if (*(ulong *)(lVar4 + 0x30) < uVar10) {
        *param_1 = lVar4;
        param_2[-1] = lVar6;
        return true;
      }
      *param_1 = lVar9;
      param_1[1] = lVar6;
      if (*(ulong *)(param_2[-1] + 0x30) < uVar3) {
        param_1[1] = param_2[-1];
/* unlicensed copy if this notice is missing - github.com/pengussy */
        param_2[-1] = lVar6;
        return true;
      }
      return true;
    }
    if (uVar3 == 4) {
      lVar6 = *param_1;
      lVar9 = param_1[1];
      uVar11 = *(ulong *)(lVar9 + 0x30);
      uVar3 = *(ulong *)(lVar6 + 0x30);
      lVar4 = param_1[2];
      uVar10 = *(ulong *)(lVar4 + 0x30);
      if (uVar11 < uVar3) {
        if (uVar10 < uVar11) {
          *param_1 = lVar4;
        }
        else {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          *param_1 = lVar9;
          param_1[1] = lVar6;
          if (uVar3 <= uVar10) {
            lVar12 = param_2[-1];
            lVar6 = lVar4;
            if (*(ulong *)(lVar4 + 0x30) <= *(ulong *)(lVar12 + 0x30)) {
              return true;
            }
            goto LAB_0027da40;
          }
          param_1[1] = lVar4;
        }
        param_1[2] = lVar6;
        lVar12 = param_2[-1];
        if (*(ulong *)(lVar6 + 0x30) <= *(ulong *)(lVar12 + 0x30)) {
          return true;
        }
      }
      else {
        if (uVar10 < uVar11) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
          param_1[1] = lVar4;
          param_1[2] = lVar9;
          if (uVar10 < uVar3) {
            *param_1 = lVar4;
            param_1[1] = lVar6;
            lVar12 = param_2[-1];
            lVar6 = lVar9;
            if (*(ulong *)(lVar9 + 0x30) <= *(ulong *)(lVar12 + 0x30)) {
              return true;
            }
            goto LAB_0027da40;
          }
        }
        else {
          lVar9 = lVar4;
        }
        lVar12 = param_2[-1];
        lVar6 = lVar9;
        if (*(ulong *)(lVar9 + 0x30) <= *(ulong *)(lVar12 + 0x30)) {
          return true;
        }
      }
LAB_0027da40:
      param_1[2] = lVar12;
      param_2[-1] = lVar6;
      lVar6 = param_1[1];
      lVar9 = param_1[2];
      uVar3 = *(ulong *)(lVar9 + 0x30);
      if (*(ulong *)(lVar6 + 0x30) <= uVar3) {
        return true;
      }
      param_1[1] = lVar9;
      param_1[2] = lVar6;
      lVar6 = *param_1;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      if (uVar3 < *(ulong *)(lVar6 + 0x30)) {
        *param_1 = lVar9;
        param_1[1] = lVar6;
        return true;
      }
      return true;
    }
    if (uVar3 == 5) {
      func_0x0027d5d8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
      return true;
    }
  }
  lVar4 = param_1[2];
  lVar6 = *param_1;
  lVar9 = param_1[1];
  uVar11 = *(ulong *)(lVar9 + 0x30);
  uVar3 = *(ulong *)(lVar6 + 0x30);
  uVar10 = *(ulong *)(lVar4 + 0x30);
  if (uVar11 < uVar3) {
    if (uVar10 < uVar11) {
      *param_1 = lVar4;
    }
    else {
      *param_1 = lVar9;
      param_1[1] = lVar6;
      if (uVar3 <= uVar10) goto LAB_0027d95c;
      param_1[1] = lVar4;
    }
    param_1[2] = lVar6;
  }
  else if (uVar10 < uVar11) {
    param_1[1] = lVar4;
    param_1[2] = lVar9;
    if (uVar10 < uVar3) {
      *param_1 = lVar4;
      param_1[1] = lVar6;
    }
  }
/*  more drops soon - github.com/pengussy  */
LAB_0027d95c:
  if (param_1 + 3 != param_2) {
    lVar6 = 0;
    iVar8 = 0;
    plVar1 = param_1 + 3;
    plVar7 = param_1 + 2;
    do {
      plVar5 = plVar1;
      lVar9 = *plVar5;
      uVar3 = *(ulong *)(lVar9 + 0x30);
      if (uVar3 < *(ulong *)(*plVar7 + 0x30)) {
        *plVar5 = *plVar7;
        lVar4 = lVar6;
        do {
          lVar12 = *(long *)((long)param_1 + lVar4 + 8);
          if (*(ulong *)(lVar12 + 0x30) <= uVar3) {
            *(long *)((long)param_1 + lVar4 + 0x10) = lVar9;
            goto joined_r0x0027d984;
          }
          *(long *)((long)param_1 + lVar4 + 0x10) = lVar12;
          bVar2 = lVar4 != -8;
          lVar4 = lVar4 + -8;
        } while (bVar2);
        *param_1 = lVar9;
joined_r0x0027d984:
// if you paid for this, you were scammed
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return plVar5 + 1 == param_2;
        }
      }
      lVar6 = lVar6 + 8;
      plVar1 = plVar5 + 1;
      plVar7 = plVar5;
    } while (plVar5 + 1 != param_2);
  }
  return true;
}

