/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x16dfd4:68d39764e5
 */

long * FUN_0016dfd4(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  
  plVar7 = (long *)*param_1;
  iVar1 = *param_2;
  uVar9 = (ulong)iVar1;
  uVar8 = plVar7[1];
  if (uVar8 != 0) {
    uVar2 = uVar8 - 1;
    if ((uVar8 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar9;
      plVar3 = *(long **)(*plVar7 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          uVar5 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar5 * uVar8;
      }
      plVar3 = *(long **)(*plVar7 + unaff_x24 * 8);
    }
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if ((uVar8 & uVar2) == 0) {
        do {
          if (plVar3[1] == uVar9) {
            if ((int)plVar3[2] == iVar1) {
              return plVar3;
            }
          }
          else if ((plVar3[1] & uVar2) != unaff_x24) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar3[1];
          if (uVar2 == uVar9) {
            if ((int)plVar3[2] == iVar1) {
              return plVar3;
            }
          }
          else {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
            if (uVar8 <= uVar2) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar2 / uVar8;
              }
              uVar2 = uVar2 - uVar5 * uVar8;
            }
            if (uVar2 != unaff_x24) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  plVar3 = (long *)__Znwm(0x18);
  *plVar3 = 0;
  plVar3[1] = uVar9;
  lVar4 = plVar7[3];
  *(undefined4 *)(plVar3 + 2) = *(undefined4 *)*param_4;
  *(undefined4 *)((long)plVar3 + 0x14) = 0;
  if (*(float *)(plVar7 + 4) * (float)uVar8 < (float)(lVar4 + 1)) {
    uVar2 = 1;
    if (2 < uVar8) {
      uVar2 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar2 = uVar2 | uVar8 << 1;
    uVar5 = (ulong)((float)(lVar4 + 1) / *(float *)(plVar7 + 4));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
/* wm:if you paid for this, you were scammed */
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = __ZNSt3__112__next_primeEm(uVar2);
      uVar8 = plVar7[1];
    }
    if (uVar8 < uVar2) {
LAB_0016e178:
      func_0x00130a44(plVar7,uVar2);
    }
    else if (uVar2 < uVar8) {
      uVar5 = (ulong)((float)(ulong)plVar7[3] / *(float *)(plVar7 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        uVar5 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      if (uVar2 < uVar8) goto LAB_0016e178;
    }
    uVar8 = plVar7[1];
    if ((uVar8 & uVar8 - 1) != 0) {
      if (uVar9 < uVar8) {
        lVar4 = *plVar7;
        plVar6 = *(long **)(lVar4 + uVar9 * 8);
        unaff_x24 = uVar9;
      }
      else {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar9 / uVar8;
/* do not claim this as your own - github.com/pengussy */
        }
        unaff_x24 = uVar9 - uVar2 * uVar8;
        lVar4 = *plVar7;
        plVar6 = *(long **)(lVar4 + unaff_x24 * 8);
      }
      goto joined_r0x0016e220;
    }
    unaff_x24 = uVar8 - 1 & uVar9;
  }
  lVar4 = *plVar7;
  plVar6 = *(long **)(lVar4 + unaff_x24 * 8);
joined_r0x0016e220:
  if (plVar6 == (long *)0x0) {
    plVar6 = plVar7 + 2;
    *plVar3 = *plVar6;
    *plVar6 = (long)plVar3;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar6;
    if (*plVar3 != 0) {
      uVar9 = *(ulong *)(*plVar3 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
/* chat: discord.gg/sdkhDjTex */
        *(long **)(lVar4 + (uVar9 & uVar8 - 1) * 8) = plVar3;
      }
      else {
        if (uVar8 <= uVar9) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar9 / uVar8;
          }
          uVar9 = uVar9 - uVar2 * uVar8;
        }
        *(long **)(lVar4 + uVar9 * 8) = plVar3;
      }
    }
  }
  else {
    *plVar3 = *plVar6;
    *plVar6 = (long)plVar3;
  }
  plVar7[3] = plVar7[3] + 1;
  return plVar3;
}

