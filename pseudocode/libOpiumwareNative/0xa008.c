/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xa008:37c0be85f2
   =========================================================================== */

long * FUN_0000a008(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  ulong uVar14;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar12 = (long *)*param_1;
  uVar13 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
/* wm:origin: github.com/pengussy */
    uVar13 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  uVar6 = FUN_0000a43c(&plStack_68,puVar2,uVar13 << 2);
  uVar13 = plVar12[1];
  if (uVar13 != 0) {
    uVar14 = uVar13 - 1;
    if ((uVar13 & uVar14) == 0) {
      unaff_x25 = uVar14 & uVar6;
      plVar9 = *(long **)(*plVar12 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar6;
      if (uVar13 <= uVar6) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = uVar6 / uVar13;
        }
        unaff_x25 = uVar6 - uVar8 * uVar13;
      }
      plVar9 = *(long **)(*plVar12 + unaff_x25 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if ((uVar13 & uVar14) == 0) {
        do {
          if (plVar9[1] == uVar6) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
            bVar3 = *(byte *)((long)plVar9 + 0x27);
            uVar8 = plVar9[3];
            if (-1 < (char)bVar3) {
              uVar8 = (ulong)bVar3;
            }
            bVar4 = *(byte *)((long)param_2 + 0x17);
            uVar1 = param_2[1];
            if (-1 < (char)bVar4) {
              uVar1 = (ulong)bVar4;
            }
            if (uVar8 == uVar1) {
              if (uVar8 == 0) {
                return plVar9;
              }
              puVar2 = (undefined8 *)*param_2;
              if (-1 < (char)bVar4) {
                puVar2 = param_2;
              }
              plVar7 = (long *)plVar9[2];
              if (-1 < (char)bVar3) {
                plVar7 = plVar9 + 2;
              }
              iVar5 = _wmemcmp(plVar7,puVar2);
              if (iVar5 == 0) {
                return plVar9;
              }
            }
          }
          else if ((plVar9[1] & uVar14) != unaff_x25) break;
// WM - stripping the watermark breaks the license
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar9[1];
          if (uVar14 == uVar6) {
            bVar3 = *(byte *)((long)plVar9 + 0x27);
            uVar14 = plVar9[3];
            if (-1 < (char)bVar3) {
              uVar14 = (ulong)bVar3;
            }
            bVar4 = *(byte *)((long)param_2 + 0x17);
            uVar8 = param_2[1];
            if (-1 < (char)bVar4) {
              uVar8 = (ulong)bVar4;
            }
            if (uVar14 == uVar8) {
              if (uVar14 == 0) {
                return plVar9;
              }
              puVar2 = (undefined8 *)*param_2;
              if (-1 < (char)bVar4) {
                puVar2 = param_2;
              }
              plVar7 = (long *)plVar9[2];
              if (-1 < (char)bVar3) {
                plVar7 = plVar9 + 2;
              }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              iVar5 = _wmemcmp(plVar7,puVar2);
              if (iVar5 == 0) {
                return plVar9;
              }
            }
          }
          else {
            if (uVar13 <= uVar14) {
              uVar8 = 0;
              if (uVar13 != 0) {
                uVar8 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar8 * uVar13;
            }
            if (uVar14 != unaff_x25) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  plVar9 = plVar12 + 2;
  plVar7 = (long *)__Znwm(0x28);
  plVar7[4] = param_3[2];
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  *plVar7 = 0;
  plVar7[1] = uVar6;
  lVar10 = *param_3;
  plVar7[3] = param_3[1];
  plVar7[2] = lVar10;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_58 = 1;
  if (*(float *)(plVar12 + 4) * (float)uVar13 < (float)(plVar12[3] + 1)) {
    uVar14 = 1;
    if (2 < uVar13) {
      uVar14 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar14 = uVar14 | uVar13 << 1;
    uVar13 = (ulong)((float)(plVar12[3] + 1) / *(float *)(plVar12 + 4));
    if (uVar14 <= uVar13) {
      uVar14 = uVar13;
/* reversing this took months of machine time */
    }
    plStack_68 = plVar7;
    plStack_60 = plVar9;
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      uVar14 = __ZNSt3__112__next_primeEm(uVar14);
    }
    uVar13 = plVar12[1];
    if (uVar13 < uVar14) {
LAB_0000a27c:
      func_0x0000a8b0(plVar12,uVar14);
    }
    else if (uVar14 < uVar13) {
      uVar8 = (ulong)((float)(ulong)plVar12[3] / *(float *)(plVar12 + 4));
      if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
        uVar8 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar14 <= uVar8) {
        uVar14 = uVar8;
      }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      if (uVar14 < uVar13) goto LAB_0000a27c;
    }
    uVar13 = plVar12[1];
    if ((uVar13 & uVar13 - 1) != 0) {
      if (uVar6 < uVar13) {
        lVar10 = *plVar12;
        plVar11 = *(long **)(lVar10 + uVar6 * 8);
        unaff_x25 = uVar6;
      }
      else {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar6 / uVar13;
        }
        unaff_x25 = uVar6 - uVar14 * uVar13;
        lVar10 = *plVar12;
        plVar11 = *(long **)(lVar10 + unaff_x25 * 8);
      }
      goto joined_r0x0000a324;
    }
    unaff_x25 = uVar13 - 1 & uVar6;
  }
  lVar10 = *plVar12;
  plVar11 = *(long **)(lVar10 + unaff_x25 * 8);
/* wm:unlicensed copy if this notice is missing */
joined_r0x0000a324:
  if (plVar11 == (long *)0x0) {
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar10 + unaff_x25 * 8) = plVar9;
    if (*plVar7 != 0) {
      uVar6 = *(ulong *)(*plVar7 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar6 = uVar6 & uVar13 - 1;
      }
      else if (uVar13 <= uVar6) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar6 / uVar13;
        }
        uVar6 = uVar6 - uVar14 * uVar13;
      }
      *(long **)(*plVar12 + uVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar11;
    *plVar11 = (long)plVar7;
  }
  plVar12[3] = plVar12[3] + 1;
  return plVar7;
}

