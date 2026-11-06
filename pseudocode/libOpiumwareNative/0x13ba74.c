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
 *  file-id: 0x13ba74:dbad468a9e
 *  --------------------------------------------------------------------------*/

long * FUN_0013ba74(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  
  plVar9 = (long *)*param_1;
  uVar2 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar4 = uVar4 ^ uVar4 >> 0x2f;
  uVar10 = uVar4 * -0x622015f714c7d297;
  uVar7 = plVar9[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
      unaff_x24 = uVar10 & uVar5;
      plVar8 = *(long **)(*plVar9 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar7 <= uVar10) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar10 / uVar7;
        }
        unaff_x24 = uVar10 - uVar1 * uVar7;
      }
      plVar8 = *(long **)(*plVar9 + unaff_x24 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((uVar7 & uVar5) == 0) {
/* reversing this took months of machine time */
        do {
          if (plVar8[1] == uVar10) {
            if (plVar8[2] == uVar2) {
              return plVar8;
            }
          }
          else if ((plVar8[1] & uVar5) != unaff_x24) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar8[1];
          if (uVar5 == uVar10) {
            if (plVar8[2] == uVar2) {
              return plVar8;
            }
          }
          else {
            if (uVar7 <= uVar5) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar1 * uVar7;
            }
            if (uVar5 != unaff_x24) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
/* WM - unlicensed copy if this notice is missing */
    }
  }
  plVar8 = (long *)__Znwm(0x20);
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[2] = *(long *)*param_4;
  lVar3 = plVar9[3];
  *(undefined1 *)(plVar8 + 3) = 0;
  if (*(float *)(plVar9 + 4) * (float)uVar7 < (float)(lVar3 + 1)) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar5 = (ulong)((float)(lVar3 + 1) / *(float *)(plVar9 + 4));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = __ZNSt3__112__next_primeEm(uVar2);
      uVar7 = plVar9[1];
    }
    if (uVar7 < uVar2) {
LAB_0013bc54:
      func_0x00130a44(plVar9,uVar2);
    }
    else if (uVar2 < uVar7) {
      uVar5 = (ulong)((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        uVar5 = __ZNSt3__112__next_primeEm();
/* origin: github.com/pengussy - github.com/pengussy */
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      if (uVar2 < uVar7) goto LAB_0013bc54;
    }
    uVar7 = plVar9[1];
    if ((uVar7 & uVar7 - 1) != 0) {
      if (uVar10 < uVar7) {
        lVar3 = *plVar9;
        plVar6 = *(long **)(lVar3 + uVar4 * -0x1100afb8a63e94b8);
        unaff_x24 = uVar10;
      }
      else {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar10 / uVar7;
        }
        unaff_x24 = uVar10 - uVar2 * uVar7;
        lVar3 = *plVar9;
        plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
      }
      goto joined_r0x0013bcfc;
    }
    unaff_x24 = uVar7 - 1 & uVar10;
  }
  lVar3 = *plVar9;
  plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
joined_r0x0013bcfc:
  if (plVar6 == (long *)0x0) {
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    plVar6 = plVar9 + 2;
    *plVar8 = *plVar6;
    *plVar6 = (long)plVar8;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar6;
    if (*plVar8 != 0) {
      uVar2 = *(ulong *)(*plVar8 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        *(long **)(lVar3 + (uVar2 & uVar7 - 1) * 8) = plVar8;
      }
      else {
        if (uVar7 <= uVar2) {
          uVar4 = 0;
          if (uVar7 != 0) {
            uVar4 = uVar2 / uVar7;
          }
          uVar2 = uVar2 - uVar4 * uVar7;
        }
        *(long **)(lVar3 + uVar2 * 8) = plVar8;
      }
    }
  }
  else {
    *plVar8 = *plVar6;
    *plVar6 = (long)plVar8;
  }
  plVar9[3] = plVar9[3] + 1;
  return plVar8;
}

