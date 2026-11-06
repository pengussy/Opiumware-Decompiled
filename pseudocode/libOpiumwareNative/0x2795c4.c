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
 *  file-id: 0x2795c4:a886bafa0d
 *  --------------------------------------------------------------------------*/

bool FUN_002795c4(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar3 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
/* WM - chat: discord.gg/sdkhDjTex */
    if (uVar3 == 2) {
      lVar5 = *param_1;
      if (*(ulong *)(param_2[-1] + 0x50) < *(ulong *)(lVar5 + 0x50)) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar5;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      lVar5 = *param_1;
      lVar9 = param_1[1];
      uVar10 = *(ulong *)(lVar9 + 0x50);
      uVar3 = *(ulong *)(lVar5 + 0x50);
      lVar6 = param_2[-1];
      if (uVar3 <= uVar10) {
        if (uVar10 <= *(ulong *)(lVar6 + 0x50)) {
          return true;
        }
        param_1[1] = lVar6;
        param_2[-1] = lVar9;
        lVar5 = *param_1;
        if (*(ulong *)(param_1[1] + 0x50) < *(ulong *)(lVar5 + 0x50)) {
          *param_1 = param_1[1];
          param_1[1] = lVar5;
          return true;
        }
        return true;
      }
      if (*(ulong *)(lVar6 + 0x50) < uVar10) {
        *param_1 = lVar6;
        param_2[-1] = lVar5;
        return true;
      }
      *param_1 = lVar9;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      param_1[1] = lVar5;
      if (*(ulong *)(param_2[-1] + 0x50) < uVar3) {
        param_1[1] = param_2[-1];
        param_2[-1] = lVar5;
        return true;
      }
      return true;
    }
    if (uVar3 == 4) {
      lVar5 = *param_1;
      lVar9 = param_1[1];
      uVar11 = *(ulong *)(lVar9 + 0x50);
      uVar3 = *(ulong *)(lVar5 + 0x50);
      lVar6 = param_1[2];
      uVar10 = *(ulong *)(lVar6 + 0x50);
      if (uVar11 < uVar3) {
        if (uVar10 < uVar11) {
          *param_1 = lVar6;
        }
        else {
          *param_1 = lVar9;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          param_1[1] = lVar5;
          if (uVar3 <= uVar10) {
            lVar12 = param_2[-1];
            lVar5 = lVar6;
            if (*(ulong *)(lVar6 + 0x50) <= *(ulong *)(lVar12 + 0x50)) {
              return true;
            }
            goto LAB_0027988c;
          }
          param_1[1] = lVar6;
        }
        param_1[2] = lVar5;
        lVar12 = param_2[-1];
        if (*(ulong *)(lVar5 + 0x50) <= *(ulong *)(lVar12 + 0x50)) {
          return true;
        }
      }
      else {
        if (uVar10 < uVar11) {
/* wm:proprietary - see LICENSE - do not sell */
          param_1[1] = lVar6;
          param_1[2] = lVar9;
          if (uVar10 < uVar3) {
            *param_1 = lVar6;
            param_1[1] = lVar5;
            lVar12 = param_2[-1];
            lVar5 = lVar9;
            if (*(ulong *)(lVar9 + 0x50) <= *(ulong *)(lVar12 + 0x50)) {
              return true;
            }
            goto LAB_0027988c;
          }
        }
        else {
          lVar9 = lVar6;
        }
        lVar12 = param_2[-1];
        lVar5 = lVar9;
        if (*(ulong *)(lVar9 + 0x50) <= *(ulong *)(lVar12 + 0x50)) {
          return true;
        }
      }
LAB_0027988c:
      param_1[2] = lVar12;
      param_2[-1] = lVar5;
      lVar5 = param_1[1];
// thanks for reading - discord.gg/sdkhDjTex
      lVar9 = param_1[2];
      uVar3 = *(ulong *)(lVar9 + 0x50);
      if (*(ulong *)(lVar5 + 0x50) <= uVar3) {
        return true;
      }
      param_1[1] = lVar9;
      param_1[2] = lVar5;
      lVar5 = *param_1;
      if (uVar3 < *(ulong *)(lVar5 + 0x50)) {
        *param_1 = lVar9;
        param_1[1] = lVar5;
        return true;
      }
      return true;
    }
    if (uVar3 == 5) {
      func_0x00279428(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  lVar6 = param_1[2];
  lVar5 = *param_1;
  lVar9 = param_1[1];
  uVar11 = *(ulong *)(lVar9 + 0x50);
  uVar3 = *(ulong *)(lVar5 + 0x50);
  uVar10 = *(ulong *)(lVar6 + 0x50);
  if (uVar11 < uVar3) {
    if (uVar10 < uVar11) {
      *param_1 = lVar6;
    }
    else {
      *param_1 = lVar9;
      param_1[1] = lVar5;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (uVar3 <= uVar10) goto LAB_002797a8;
      param_1[1] = lVar6;
    }
    param_1[2] = lVar5;
  }
  else if (uVar10 < uVar11) {
    param_1[1] = lVar6;
    param_1[2] = lVar9;
    if (uVar10 < uVar3) {
      *param_1 = lVar6;
      param_1[1] = lVar5;
    }
  }
LAB_002797a8:
  if (param_1 + 3 != param_2) {
    lVar5 = 0;
    iVar7 = 0;
    plVar1 = param_1 + 3;
    plVar8 = param_1 + 2;
/* watermarked copy - do not remove */
    do {
      plVar4 = plVar1;
      lVar9 = *plVar4;
      uVar3 = *(ulong *)(lVar9 + 0x50);
      if (uVar3 < *(ulong *)(*plVar8 + 0x50)) {
        *plVar4 = *plVar8;
        lVar6 = lVar5;
        do {
          lVar12 = *(long *)((long)param_1 + lVar6 + 8);
          if (*(ulong *)(lVar12 + 0x50) <= uVar3) {
            *(long *)((long)param_1 + lVar6 + 0x10) = lVar9;
            goto joined_r0x002797d0;
          }
          *(long *)((long)param_1 + lVar6 + 0x10) = lVar12;
          bVar2 = lVar6 != -8;
          lVar6 = lVar6 + -8;
        } while (bVar2);
        *param_1 = lVar9;
joined_r0x002797d0:
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return plVar4 + 1 == param_2;
// reversing this took months of machine time
        }
      }
      lVar5 = lVar5 + 8;
      plVar1 = plVar4 + 1;
      plVar8 = plVar4;
    } while (plVar4 + 1 != param_2);
  }
  return true;
}

