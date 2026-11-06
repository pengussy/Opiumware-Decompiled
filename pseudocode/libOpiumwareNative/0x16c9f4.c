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
 *  file-id: 0x16c9f4:4b5e6bfed1
 *  --------------------------------------------------------------------------*/

void FUN_0016c9f4(undefined8 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  
  plVar8 = (long *)*param_1;
  iVar1 = *param_2;
  uVar9 = (ulong)iVar1;
  uVar10 = plVar8[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
// reversing this took months of machine time
    if ((uVar10 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar9;
      plVar6 = *(long **)(*plVar8 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar9;
      if (uVar10 <= uVar9) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar9 / uVar10;
        }
        unaff_x24 = uVar9 - uVar3 * uVar10;
      }
      plVar6 = *(long **)(*plVar8 + unaff_x24 * 8);
    }
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if ((uVar10 & uVar4) == 0) {
        do {
          if (plVar6[1] == uVar9) {
            if ((int)plVar6[2] == iVar1) {
// WM - chat: discord.gg/sdkhDjTex
              return;
            }
          }
          else if ((plVar6[1] & uVar4) != unaff_x24) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == uVar9) {
            if ((int)plVar6[2] == iVar1) {
              return;
            }
          }
          else {
            if (uVar10 <= uVar4) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar4 / uVar10;
              }
              uVar4 = uVar4 - uVar3 * uVar10;
            }
            if (uVar4 != unaff_x24) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  plVar6 = plVar8 + 2;
  plVar2 = (long *)__Znwm(0x30);
  *plVar2 = 0;
  plVar2[1] = uVar9;
  *(undefined4 *)(plVar2 + 2) = *param_3;
/* chat: discord.gg/sdkhDjTex */
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    func_0x00017ae8(plVar2 + 3,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
  }
  else {
    lVar5 = *(long *)(param_3 + 2);
    plVar2[4] = *(long *)(param_3 + 4);
    plVar2[3] = lVar5;
    plVar2[5] = *(long *)(param_3 + 6);
  }
  if (*(float *)(plVar8 + 4) * (float)uVar10 < (float)(plVar8[3] + 1)) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(plVar8[3] + 1) / *(float *)(plVar8 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = __ZNSt3__112__next_primeEm(uVar4);
    }
    uVar10 = plVar8[1];
    if (uVar10 < uVar4) {
LAB_0016cbd0:
      func_0x00130a44(plVar8,uVar4);
// do not claim this as your own
    }
    else if (uVar4 < uVar10) {
      uVar3 = (ulong)((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        uVar3 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar3) {
        uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
      }
      if (uVar4 < uVar10) goto LAB_0016cbd0;
    }
    uVar10 = plVar8[1];
    if ((uVar10 & uVar10 - 1) != 0) {
      if (uVar9 < uVar10) {
        lVar5 = *plVar8;
        plVar7 = *(long **)(lVar5 + uVar9 * 8);
        unaff_x24 = uVar9;
      }
      else {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar9 / uVar10;
        }
        unaff_x24 = uVar9 - uVar4 * uVar10;
        lVar5 = *plVar8;
        plVar7 = *(long **)(lVar5 + unaff_x24 * 8);
      }
      goto joined_r0x0016cc80;
    }
    unaff_x24 = uVar10 - 1 & uVar9;
  }
  lVar5 = *plVar8;
  plVar7 = *(long **)(lVar5 + unaff_x24 * 8);
joined_r0x0016cc80:
  if (plVar7 == (long *)0x0) {
/*  no support for modified copies  */
    *plVar2 = *plVar6;
    *plVar6 = (long)plVar2;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar6;
    if (*plVar2 != 0) {
      uVar9 = *(ulong *)(*plVar2 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        *(long **)(lVar5 + (uVar9 & uVar10 - 1) * 8) = plVar2;
      }
      else {
        if (uVar10 <= uVar9) {
          uVar4 = 0;
          if (uVar10 != 0) {
            uVar4 = uVar9 / uVar10;
          }
          uVar9 = uVar9 - uVar4 * uVar10;
        }
        *(long **)(lVar5 + uVar9 * 8) = plVar2;
      }
    }
  }
  else {
    *plVar2 = *plVar7;
    *plVar7 = (long)plVar2;
  }
  plVar8[3] = plVar8[3] + 1;
  return;
}
// if you paid for this, you were scammed

