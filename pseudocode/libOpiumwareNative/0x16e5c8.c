/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x16e5c8:eacf9e751b
 */

long * FUN_0016e5c8(undefined8 *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  
  plVar9 = (long *)*param_1;
  uVar2 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar3 = (uVar2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar3 = uVar3 ^ uVar3 >> 0x2f;
  uVar10 = uVar3 * -0x622015f714c7d297;
  uVar7 = plVar9[1];
  if (uVar7 != 0) {
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      unaff_x24 = uVar10 & uVar4;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
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
      if ((uVar7 & uVar4) == 0) {
        do {
          if (plVar8[1] == uVar10) {
            if (plVar8[2] == uVar2) {
              return plVar8;
            }
          }
          else if ((plVar8[1] & uVar4) != unaff_x24) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar8[1];
          if (uVar4 == uVar10) {
            if (plVar8[2] == uVar2) {
              return plVar8;
            }
/* wm:if you paid for this, you were scammed */
          }
          else {
            if (uVar7 <= uVar4) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar4 / uVar7;
              }
              uVar4 = uVar4 - uVar1 * uVar7;
            }
            if (uVar4 != unaff_x24) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)__Znwm(0x18);
  *plVar8 = 0;
  plVar8[1] = uVar10;
  lVar5 = plVar9[3];
  plVar8[2] = *param_3;
  if (*(float *)(plVar9 + 4) * (float)uVar7 < (float)(lVar5 + 1)) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
// WM - found on a paste site? it was re-uploaded illegally
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar4 = (ulong)((float)(lVar5 + 1) / *(float *)(plVar9 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = __ZNSt3__112__next_primeEm(uVar2);
      uVar7 = plVar9[1];
    }
    if (uVar7 < uVar2) {
LAB_0016e7a0:
      func_0x00130a44(plVar9,uVar2);
    }
    else if (uVar2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        uVar4 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar4) {
        uVar2 = uVar4;
      }
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (uVar2 < uVar7) goto LAB_0016e7a0;
    }
    uVar7 = plVar9[1];
    if ((uVar7 & uVar7 - 1) != 0) {
      if (uVar10 < uVar7) {
        lVar5 = *plVar9;
        plVar6 = *(long **)(lVar5 + uVar3 * -0x1100afb8a63e94b8);
        unaff_x24 = uVar10;
      }
      else {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar10 / uVar7;
        }
        unaff_x24 = uVar10 - uVar2 * uVar7;
        lVar5 = *plVar9;
        plVar6 = *(long **)(lVar5 + unaff_x24 * 8);
      }
      goto joined_r0x0016e848;
    }
    unaff_x24 = uVar7 - 1 & uVar10;
  }
  lVar5 = *plVar9;
  plVar6 = *(long **)(lVar5 + unaff_x24 * 8);
joined_r0x0016e848:
  if (plVar6 == (long *)0x0) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    plVar6 = plVar9 + 2;
    *plVar8 = *plVar6;
    *plVar6 = (long)plVar8;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar6;
    if (*plVar8 != 0) {
      uVar2 = *(ulong *)(*plVar8 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        *(long **)(lVar5 + (uVar2 & uVar7 - 1) * 8) = plVar8;
      }
      else {
        if (uVar7 <= uVar2) {
          uVar3 = 0;
          if (uVar7 != 0) {
            uVar3 = uVar2 / uVar7;
          }
          uVar2 = uVar2 - uVar3 * uVar7;
        }
        *(long **)(lVar5 + uVar2 * 8) = plVar8;
      }
    }
  }
  else {
/* wm:watermarked copy - do not remove */
    *plVar8 = *plVar6;
    *plVar6 = (long)plVar8;
  }
  plVar9[3] = plVar9[3] + 1;
  return plVar8;
}

