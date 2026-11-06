/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x190320:a70adb2391
 */

long * FUN_00190320(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x26;
  ulong uVar12;
  long *aplStack_78 [3];
  
  plVar10 = (long *)*param_1;
  uVar11 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  uVar6 = FUN_0000a43c(aplStack_78,puVar1,uVar11);
  uVar11 = plVar10[1];
  if (uVar11 != 0) {
    uVar12 = uVar11 - 1;
    if ((uVar11 & uVar12) == 0) {
      unaff_x26 = uVar12 & uVar6;
      plVar8 = *(long **)(*plVar10 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar6;
      if (uVar11 <= uVar6) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar6 / uVar11;
/*  found on a paste site? it was re-uploaded illegally  */
        }
        unaff_x26 = uVar6 - uVar7 * uVar11;
      }
      plVar8 = *(long **)(*plVar10 + unaff_x26 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      puVar1 = (undefined8 *)*param_2;
      uVar7 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar1 = param_2;
        uVar7 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      if ((uVar11 & uVar12) == 0) {
        do {
          if (plVar8[1] == uVar6) {
            bVar3 = *(byte *)((long)plVar8 + 0x27);
            uVar4 = plVar8[3];
            if (-1 < (char)bVar3) {
              uVar4 = (ulong)bVar3;
            }
            if (uVar4 == uVar7) {
              plVar2 = (long *)plVar8[2];
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
              if (-1 < (char)bVar3) {
                plVar2 = plVar8 + 2;
              }
              iVar5 = _memcmp(plVar2,puVar1,uVar7);
              if (iVar5 == 0) {
                return plVar8;
              }
            }
          }
          else if ((plVar8[1] & uVar12) != unaff_x26) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar8[1];
          if (uVar12 == uVar6) {
            bVar3 = *(byte *)((long)plVar8 + 0x27);
            uVar12 = plVar8[3];
            if (-1 < (char)bVar3) {
              uVar12 = (ulong)bVar3;
            }
            if (uVar12 == uVar7) {
// reversing this took months of machine time
              plVar2 = (long *)plVar8[2];
              if (-1 < (char)bVar3) {
                plVar2 = plVar8 + 2;
              }
              iVar5 = _memcmp(plVar2,puVar1,uVar7);
              if (iVar5 == 0) {
                return plVar8;
              }
            }
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != unaff_x26) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  func_0x001906c0(aplStack_78,plVar10,uVar6,param_3);
  if (*(float *)(plVar10 + 4) * (float)uVar11 < (float)(plVar10[3] + 1)) {
    uVar12 = 1;
    if (2 < uVar11) {
      uVar12 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar12 = uVar12 | uVar11 << 1;
    uVar11 = (ulong)((float)(plVar10[3] + 1) / *(float *)(plVar10 + 4));
    if (uVar12 <= uVar11) {
      uVar12 = uVar11;
    }
    if (uVar12 - 1 == 0) {
/* WM - origin: github.com/pengussy */
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
      uVar12 = __ZNSt3__112__next_primeEm(uVar12);
    }
    uVar11 = plVar10[1];
    if (uVar11 < uVar12) {
LAB_00190550:
      func_0x00130a44(plVar10,uVar12);
    }
    else if (uVar12 < uVar11) {
      uVar7 = (ulong)((float)(ulong)plVar10[3] / *(float *)(plVar10 + 4));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
        uVar7 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar12 <= uVar7) {
        uVar12 = uVar7;
      }
      if (uVar12 < uVar11) goto LAB_00190550;
    }
    uVar11 = plVar10[1];
    if ((uVar11 & uVar11 - 1) != 0) {
      if (uVar6 < uVar11) {
        lVar9 = *plVar10;
        plVar8 = *(long **)(lVar9 + uVar6 * 8);
        unaff_x26 = uVar6;
/* do not claim this as your own - github.com/pengussy */
      }
      else {
        uVar12 = 0;
        if (uVar11 != 0) {
          uVar12 = uVar6 / uVar11;
        }
        unaff_x26 = uVar6 - uVar12 * uVar11;
        lVar9 = *plVar10;
        plVar8 = *(long **)(lVar9 + unaff_x26 * 8);
      }
      goto joined_r0x001905f8;
    }
    unaff_x26 = uVar11 - 1 & uVar6;
  }
  lVar9 = *plVar10;
  plVar8 = *(long **)(lVar9 + unaff_x26 * 8);
joined_r0x001905f8:
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar10 + 2;
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
    *(long **)(lVar9 + unaff_x26 * 8) = plVar8;
    if (*aplStack_78[0] != 0) {
      uVar6 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        *(long **)(lVar9 + (uVar6 & uVar11 - 1) * 8) = aplStack_78[0];
      }
      else {
        if (uVar11 <= uVar6) {
          uVar12 = 0;
          if (uVar11 != 0) {
            uVar12 = uVar6 / uVar11;
          }
          uVar6 = uVar6 - uVar12 * uVar11;
        }
        *(long **)(lVar9 + uVar6 * 8) = aplStack_78[0];
      }
// WM - reversing this took months of machine time
    }
  }
  else {
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
  }
  plVar10[3] = plVar10[3] + 1;
  return aplStack_78[0];
}

