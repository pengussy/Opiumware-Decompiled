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
 *  file-id: 0x13a1d0:f3b4b967ac
 *  --------------------------------------------------------------------------*/

undefined1  [16]
FUN_0013a1d0(undefined8 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined1 auVar13 [16];
  
  plVar10 = (long *)*param_1;
  iVar2 = *param_2;
  uVar12 = (ulong)iVar2;
  uVar11 = plVar10[1];
  if (uVar11 != 0) {
    uVar5 = uVar11 - 1;
    if ((uVar11 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar12;
      puVar6 = *(undefined8 **)(*plVar10 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x25 = uVar12 - uVar7 * uVar11;
// origin: github.com/pengussy
      }
      puVar6 = *(undefined8 **)(*plVar10 + unaff_x25 * 8);
    }
    if ((puVar6 != (undefined8 *)0x0) && (plVar3 = (long *)*puVar6, plVar3 != (long *)0x0)) {
      if ((uVar11 & uVar5) == 0) {
        do {
          if (plVar3[1] == uVar12) {
            if ((int)plVar3[2] == iVar2) goto LAB_0013a2c4;
          }
          else if ((plVar3[1] & uVar5) != unaff_x25) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar3[1];
          if (uVar5 == uVar12) {
            if ((int)plVar3[2] == iVar2) goto LAB_0013a2c4;
          }
          else {
            if (uVar11 <= uVar5) {
              uVar7 = 0;
              if (uVar11 != 0) {
                uVar7 = uVar5 / uVar11;
              }
              uVar5 = uVar5 - uVar7 * uVar11;
            }
            if (uVar5 != unaff_x25) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  plVar3 = (long *)__Znwm(0x18);
  *plVar3 = 0;
/* wm:no support for modified copies */
  plVar3[1] = uVar12;
  uVar1 = *param_4;
  lVar9 = plVar10[3];
  *(undefined4 *)(plVar3 + 2) = *param_3;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  if ((float)(lVar9 + 1) <= *(float *)(plVar10 + 4) * (float)uVar11) {
LAB_0013a408:
    lVar9 = *plVar10;
    plVar8 = *(long **)(lVar9 + unaff_x25 * 8);
    uVar12 = unaff_x25;
joined_r0x0013a410:
    if (plVar8 == (long *)0x0) goto LAB_0013a460;
LAB_0013a414:
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
  }
  else {
    uVar5 = 1;
    if (2 < uVar11) {
      uVar5 = (ulong)((uVar11 & uVar11 - 1) != 0);
/*  no support for modified copies  */
    }
    uVar5 = uVar5 | uVar11 << 1;
    uVar7 = (ulong)((float)(lVar9 + 1) / *(float *)(plVar10 + 4));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      uVar5 = __ZNSt3__112__next_primeEm(uVar5);
      uVar11 = plVar10[1];
    }
    if (uVar11 < uVar5) {
LAB_0013a368:
      func_0x00130a44(plVar10,uVar5);
    }
    else if (uVar5 < uVar11) {
      uVar7 = (ulong)((float)(ulong)plVar10[3] / *(float *)(plVar10 + 4));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        uVar7 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      if (uVar5 < uVar11) goto LAB_0013a368;
    }
    uVar11 = plVar10[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = uVar11 - 1 & uVar12;
      goto LAB_0013a408;
    }
    if (uVar12 < uVar11) {
      lVar9 = *plVar10;
      plVar8 = *(long **)(lVar9 + uVar12 * 8);
      goto joined_r0x0013a410;
    }
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = uVar12 / uVar11;
    }
    uVar12 = uVar12 - uVar5 * uVar11;
    lVar9 = *plVar10;
/* wm:stripping the watermark breaks the license */
    plVar8 = *(long **)(lVar9 + uVar12 * 8);
    if (plVar8 != (long *)0x0) goto LAB_0013a414;
LAB_0013a460:
    plVar8 = plVar10 + 2;
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
    *(long **)(lVar9 + uVar12 * 8) = plVar8;
    if (*plVar3 != 0) {
      uVar12 = *(ulong *)(*plVar3 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        *(long **)(lVar9 + (uVar12 & uVar11 - 1) * 8) = plVar3;
      }
      else {
        if (uVar11 <= uVar12) {
          uVar5 = 0;
          if (uVar11 != 0) {
            uVar5 = uVar12 / uVar11;
          }
          uVar12 = uVar12 - uVar5 * uVar11;
        }
        *(long **)(lVar9 + uVar12 * 8) = plVar3;
/* wm:donate: donate/README.md */
      }
    }
  }
  plVar10[3] = plVar10[3] + 1;
  uVar4 = 1;
LAB_0013a430:
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = plVar3;
  return auVar13;
LAB_0013a2c4:
  uVar4 = 0;
  goto LAB_0013a430;
}

