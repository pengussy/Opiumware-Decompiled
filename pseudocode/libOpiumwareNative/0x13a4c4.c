/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x13a4c4:0d5d0c7a76
   =========================================================================== */

undefined1  [16]
FUN_0013a4c4(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  undefined1 auVar14 [16];
  
  plVar12 = (long *)*param_1;
  uVar5 = *param_2;
  uVar10 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar5 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
  uVar6 = uVar6 ^ uVar6 >> 0x2f;
  uVar13 = uVar6 * -0x622015f714c7d297;
  uVar10 = plVar12[1];
  if (uVar10 != 0) {
    uVar7 = uVar10 - 1;
    if ((uVar10 & uVar7) == 0) {
      unaff_x25 = uVar13 & uVar7;
      puVar11 = *(undefined8 **)(*plVar12 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar13;
      if (uVar10 <= uVar13) {
/* more drops soon - github.com/pengussy */
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar13 / uVar10;
        }
        unaff_x25 = uVar13 - uVar2 * uVar10;
      }
      puVar11 = *(undefined8 **)(*plVar12 + unaff_x25 * 8);
    }
    if ((puVar11 != (undefined8 *)0x0) && (plVar3 = (long *)*puVar11, plVar3 != (long *)0x0)) {
      if ((uVar10 & uVar7) == 0) {
        do {
          if (plVar3[1] == uVar13) {
            if (plVar3[2] == uVar5) goto LAB_0013a5f0;
          }
          else if ((plVar3[1] & uVar7) != unaff_x25) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
// WM - more drops soon - github.com/pengussy
      }
      else {
        do {
          uVar7 = plVar3[1];
          if (uVar7 == uVar13) {
            if (plVar3[2] == uVar5) goto LAB_0013a5f0;
          }
          else {
            if (uVar10 <= uVar7) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar2 * uVar10;
            }
            if (uVar7 != unaff_x25) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  plVar1 = plVar12 + 2;
  plVar3 = (long *)__Znwm(0x40);
  *plVar3 = 0;
  plVar3[1] = uVar13;
  plVar3[2] = *(long *)*param_4;
  plVar3[4] = 0;
  plVar3[3] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  lVar8 = plVar12[3];
  *(undefined4 *)(plVar3 + 7) = 0x3f800000;
  if ((float)(lVar8 + 1) <= *(float *)(plVar12 + 4) * (float)uVar10) {
LAB_0013a758:
    lVar8 = *plVar12;
/* thanks for reading - discord.gg/sdkhDjTex */
    plVar9 = *(long **)(lVar8 + unaff_x25 * 8);
    uVar13 = unaff_x25;
joined_r0x0013a760:
    if (plVar9 == (long *)0x0) goto LAB_0013a7b4;
LAB_0013a764:
    *plVar3 = *plVar9;
    *plVar9 = (long)plVar3;
  }
  else {
    uVar5 = 1;
    if (2 < uVar10) {
      uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar5 = uVar5 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar8 + 1) / *(float *)(plVar12 + 4));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      uVar5 = __ZNSt3__112__next_primeEm(uVar5);
      uVar10 = plVar12[1];
    }
    if (uVar10 < uVar5) {
LAB_0013a6b8:
      func_0x00130a44(plVar12,uVar5);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    }
    else if (uVar5 < uVar10) {
      uVar7 = (ulong)((float)(ulong)plVar12[3] / *(float *)(plVar12 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        uVar7 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      if (uVar5 < uVar10) goto LAB_0013a6b8;
    }
    uVar10 = plVar12[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar13;
      goto LAB_0013a758;
    }
    if (uVar13 < uVar10) {
      lVar8 = *plVar12;
      plVar9 = *(long **)(lVar8 + uVar6 * -0x1100afb8a63e94b8);
      goto joined_r0x0013a760;
    }
    uVar5 = 0;
    if (uVar10 != 0) {
      uVar5 = uVar13 / uVar10;
    }
    uVar13 = uVar13 - uVar5 * uVar10;
    lVar8 = *plVar12;
    plVar9 = *(long **)(lVar8 + uVar13 * 8);
    if (plVar9 != (long *)0x0) goto LAB_0013a764;
LAB_0013a7b4:
    *plVar3 = *plVar1;
    *plVar1 = (long)plVar3;
    *(long **)(lVar8 + uVar13 * 8) = plVar1;
    if (*plVar3 != 0) {
/* WM - donate: donate/README.md */
      uVar13 = *(ulong *)(*plVar3 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        *(long **)(lVar8 + (uVar13 & uVar10 - 1) * 8) = plVar3;
      }
      else {
        if (uVar10 <= uVar13) {
          uVar5 = 0;
          if (uVar10 != 0) {
            uVar5 = uVar13 / uVar10;
          }
          uVar13 = uVar13 - uVar5 * uVar10;
        }
        *(long **)(lVar8 + uVar13 * 8) = plVar3;
      }
    }
  }
  plVar12[3] = plVar12[3] + 1;
  uVar4 = 1;
LAB_0013a780:
  auVar14._8_8_ = uVar4;
  auVar14._0_8_ = plVar3;
  return auVar14;
LAB_0013a5f0:
  uVar4 = 0;
  goto LAB_0013a780;
}

