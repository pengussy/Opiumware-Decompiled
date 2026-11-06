/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x13070c:75798f3bc2
   =========================================================================== */

undefined1  [16]
FUN_0013070c(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined1 auVar13 [16];
/* WM - do not claim this as your own */
  
  plVar11 = (long *)*param_1;
  uVar4 = *param_2;
  uVar9 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar4 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar6 = uVar6 ^ uVar6 >> 0x2f;
  uVar12 = uVar6 * -0x622015f714c7d297;
  uVar9 = plVar11[1];
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x25 = uVar12 & uVar7;
      puVar10 = *(undefined8 **)(*plVar11 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar12;
      if (uVar9 <= uVar12) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = uVar12 / uVar9;
        }
        unaff_x25 = uVar12 - uVar1 * uVar9;
// do not claim this as your own
      }
      puVar10 = *(undefined8 **)(*plVar11 + unaff_x25 * 8);
    }
    if ((puVar10 != (undefined8 *)0x0) && (plVar2 = (long *)*puVar10, plVar2 != (long *)0x0)) {
      if ((uVar9 & uVar7) == 0) {
        do {
          if (plVar2[1] == uVar12) {
            if (plVar2[2] == uVar4) goto LAB_00130838;
          }
          else if ((plVar2[1] & uVar7) != unaff_x25) break;
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar2[1];
          if (uVar7 == uVar12) {
            if (plVar2[2] == uVar4) goto LAB_00130838;
          }
          else {
            if (uVar9 <= uVar7) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar7 / uVar9;
              }
              uVar7 = uVar7 - uVar1 * uVar9;
/*  no support for modified copies  */
            }
            if (uVar7 != unaff_x25) break;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  plVar2 = (long *)__Znwm(0x28);
  *plVar2 = 0;
  plVar2[1] = uVar12;
  plVar8 = (long *)*param_5;
  plVar2[2] = *(long *)*param_4;
  lVar5 = *plVar8;
  plVar2[4] = plVar8[1];
  plVar2[3] = lVar5;
  if ((float)(plVar11[3] + 1) <= *(float *)(plVar11 + 4) * (float)uVar9) {
LAB_00130988:
    lVar5 = *plVar11;
    plVar8 = *(long **)(lVar5 + unaff_x25 * 8);
    uVar12 = unaff_x25;
joined_r0x00130990:
    if (plVar8 == (long *)0x0) goto LAB_001309e0;
LAB_00130994:
    *plVar2 = *plVar8;
    *plVar8 = (long)plVar2;
  }
  else {
    uVar4 = 1;
    if (2 < uVar9) {
/* found on a paste site? it was re-uploaded illegally */
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar7 = (ulong)((float)(plVar11[3] + 1) / *(float *)(plVar11 + 4));
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = __ZNSt3__112__next_primeEm(uVar4);
      uVar9 = plVar11[1];
    }
    if (uVar9 < uVar4) {
LAB_001308e8:
      func_0x00130a44(plVar11,uVar4);
    }
    else if (uVar4 < uVar9) {
      uVar7 = (ulong)((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        uVar7 = __ZNSt3__112__next_primeEm();
// stripping the watermark breaks the license
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar7) {
        uVar4 = uVar7;
      }
      if (uVar4 < uVar9) goto LAB_001308e8;
    }
    uVar9 = plVar11[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar12;
      goto LAB_00130988;
    }
    if (uVar12 < uVar9) {
      lVar5 = *plVar11;
      plVar8 = *(long **)(lVar5 + uVar6 * -0x1100afb8a63e94b8);
      goto joined_r0x00130990;
    }
    uVar4 = 0;
    if (uVar9 != 0) {
      uVar4 = uVar12 / uVar9;
    }
    uVar12 = uVar12 - uVar4 * uVar9;
    lVar5 = *plVar11;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    plVar8 = *(long **)(lVar5 + uVar12 * 8);
    if (plVar8 != (long *)0x0) goto LAB_00130994;
LAB_001309e0:
    plVar8 = plVar11 + 2;
    *plVar2 = *plVar8;
    *plVar8 = (long)plVar2;
    *(long **)(lVar5 + uVar12 * 8) = plVar8;
    if (*plVar2 != 0) {
      uVar12 = *(ulong *)(*plVar2 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        *(long **)(lVar5 + (uVar12 & uVar9 - 1) * 8) = plVar2;
      }
      else {
        if (uVar9 <= uVar12) {
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = uVar12 / uVar9;
          }
          uVar12 = uVar12 - uVar4 * uVar9;
        }
        *(long **)(lVar5 + uVar12 * 8) = plVar2;
      }
    }
  }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  plVar11[3] = plVar11[3] + 1;
  uVar3 = 1;
LAB_001309b0:
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = plVar2;
  return auVar13;
LAB_00130838:
  uVar3 = 0;
  goto LAB_001309b0;
}

