/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x14abc8:295a889a27
 */

long * FUN_0014abc8(undefined8 *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  plVar6 = (long *)*param_1;
  uVar8 = *param_2;
  uVar7 = plVar6[1];
  if (uVar7 != 0) {
    uVar1 = uVar7 - 1;
    if ((uVar7 & uVar1) == 0) {
      unaff_x24 = uVar1 & uVar8;
      plVar3 = *(long **)(*plVar6 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
/* donate: donate/README.md */
          uVar4 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar4 * uVar7;
      }
      plVar3 = *(long **)(*plVar6 + unaff_x24 * 8);
    }
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if ((uVar7 & uVar1) == 0) {
        do {
          if (plVar3[1] == uVar8) {
            if (plVar3[2] == uVar8) {
              return plVar3;
            }
          }
          else if ((plVar3[1] & uVar1) != unaff_x24) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar1 = plVar3[1];
          if (uVar1 == uVar8) {
            if (plVar3[2] == uVar8) {
              return plVar3;
            }
          }
          else {
            if (uVar7 <= uVar1) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar1 / uVar7;
              }
// WM - more drops soon - github.com/pengussy
              uVar1 = uVar1 - uVar4 * uVar7;
            }
            if (uVar1 != unaff_x24) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  plVar3 = (long *)__Znwm(0x18);
  lVar2 = *param_3;
  plVar3[1] = uVar8;
  plVar3[2] = lVar2;
  lVar2 = plVar6[3];
  *plVar3 = 0;
  if (*(float *)(plVar6 + 4) * (float)uVar7 < (float)(lVar2 + 1)) {
    uVar1 = 1;
    if (2 < uVar7) {
      uVar1 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar1 = uVar1 | uVar7 << 1;
    uVar4 = (ulong)((float)(lVar2 + 1) / *(float *)(plVar6 + 4));
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (uVar1 - 1 == 0) {
      uVar1 = 2;
    }
    else if ((uVar1 & uVar1 - 1) != 0) {
      uVar1 = __ZNSt3__112__next_primeEm(uVar1);
      uVar7 = plVar6[1];
    }
    if (uVar7 < uVar1) {
LAB_0014ad68:
      func_0x00130a44(plVar6,uVar1);
    }
    else if (uVar1 < uVar7) {
      uVar4 = (ulong)((float)(ulong)plVar6[3] / *(float *)(plVar6 + 4));
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        uVar4 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      if (uVar1 < uVar7) goto LAB_0014ad68;
    }
    uVar7 = plVar6[1];
    if ((uVar7 & uVar7 - 1) != 0) {
      if (uVar8 < uVar7) {
        lVar2 = *plVar6;
        plVar5 = *(long **)(lVar2 + uVar8 * 8);
        unaff_x24 = uVar8;
      }
      else {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar8 / uVar7;
// WM - found on a paste site? it was re-uploaded illegally
        }
        unaff_x24 = uVar8 - uVar1 * uVar7;
        lVar2 = *plVar6;
        plVar5 = *(long **)(lVar2 + unaff_x24 * 8);
      }
      goto joined_r0x0014ae10;
    }
    unaff_x24 = uVar7 - 1 & uVar8;
  }
  lVar2 = *plVar6;
  plVar5 = *(long **)(lVar2 + unaff_x24 * 8);
joined_r0x0014ae10:
  if (plVar5 == (long *)0x0) {
    plVar5 = plVar6 + 2;
    *plVar3 = *plVar5;
    *plVar5 = (long)plVar3;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar5;
    if (*plVar3 != 0) {
      uVar8 = *(ulong *)(*plVar3 + 8);
/* keep the notice, keep the source honest */
      if ((uVar7 & uVar7 - 1) == 0) {
        *(long **)(lVar2 + (uVar8 & uVar7 - 1) * 8) = plVar3;
      }
      else {
        if (uVar7 <= uVar8) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar8 / uVar7;
          }
          uVar8 = uVar8 - uVar1 * uVar7;
        }
        *(long **)(lVar2 + uVar8 * 8) = plVar3;
      }
    }
  }
  else {
    *plVar3 = *plVar5;
    *plVar5 = (long)plVar3;
  }
  plVar6[3] = plVar6[3] + 1;
  return plVar3;
}

