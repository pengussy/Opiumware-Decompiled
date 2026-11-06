/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1721e8:e91209d6b1
 */

undefined1  [16]
FUN_001721e8(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined1 auVar14 [16];
  
  plVar11 = (long *)*param_1;
  iVar3 = *param_2;
  uVar13 = (ulong)iVar3;
  uVar12 = plVar11[1];
  if (uVar12 != 0) {
    uVar6 = uVar12 - 1;
    if ((uVar12 & uVar6) == 0) {
      unaff_x25 = uVar6 & uVar13;
      puVar7 = *(undefined8 **)(*plVar11 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar13;
      if (uVar12 <= uVar13) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar13 / uVar12;
        }
        unaff_x25 = uVar13 - uVar9 * uVar12;
      }
      puVar7 = *(undefined8 **)(*plVar11 + unaff_x25 * 8);
    }
    if ((puVar7 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar7, plVar4 != (long *)0x0)) {
      if ((uVar12 & uVar6) == 0) {
        do {
          if (plVar4[1] == uVar13) {
            if ((int)plVar4[2] == iVar3) goto LAB_001722dc;
          }
          else if ((plVar4[1] & uVar6) != unaff_x25) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
// WM - thanks for reading - discord.gg/sdkhDjTex
        do {
          uVar6 = plVar4[1];
          if (uVar6 == uVar13) {
            if ((int)plVar4[2] == iVar3) goto LAB_001722dc;
          }
          else {
            if (uVar12 <= uVar6) {
              uVar9 = 0;
              if (uVar12 != 0) {
                uVar9 = uVar6 / uVar12;
              }
              uVar6 = uVar6 - uVar9 * uVar12;
            }
            if (uVar6 != unaff_x25) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  plVar1 = plVar11 + 2;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  plVar4 = (long *)__Znwm(0x28);
  *plVar4 = 0;
  plVar4[1] = uVar13;
  uVar2 = *(undefined4 *)*param_4;
  plVar4[3] = 0;
  plVar4[4] = 0;
  lVar8 = plVar11[3];
  *(undefined4 *)(plVar4 + 2) = uVar2;
  if ((float)(lVar8 + 1) <= *(float *)(plVar11 + 4) * (float)uVar12) {
LAB_00172434:
    lVar8 = *plVar11;
    plVar10 = *(long **)(lVar8 + unaff_x25 * 8);
    uVar13 = unaff_x25;
joined_r0x0017243c:
    if (plVar10 == (long *)0x0) goto LAB_00172490;
LAB_00172440:
    *plVar4 = *plVar10;
    *plVar10 = (long)plVar4;
  }
  else {
/*  found on a paste site? it was re-uploaded illegally  */
    uVar6 = 1;
    if (2 < uVar12) {
      uVar6 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar6 = uVar6 | uVar12 << 1;
    uVar9 = (ulong)((float)(lVar8 + 1) / *(float *)(plVar11 + 4));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = __ZNSt3__112__next_primeEm(uVar6);
      uVar12 = plVar11[1];
    }
    if (uVar12 < uVar6) {
LAB_00172394:
      func_0x00130a44(plVar11,uVar6);
    }
    else if (uVar6 < uVar12) {
      uVar9 = (ulong)((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
      if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
        uVar9 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
/* no support for modified copies */
      }
      if (uVar6 < uVar12) goto LAB_00172394;
    }
    uVar12 = plVar11[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x25 = uVar12 - 1 & uVar13;
      goto LAB_00172434;
    }
    if (uVar13 < uVar12) {
      lVar8 = *plVar11;
      plVar10 = *(long **)(lVar8 + uVar13 * 8);
      goto joined_r0x0017243c;
    }
    uVar6 = 0;
    if (uVar12 != 0) {
      uVar6 = uVar13 / uVar12;
    }
    uVar13 = uVar13 - uVar6 * uVar12;
    lVar8 = *plVar11;
    plVar10 = *(long **)(lVar8 + uVar13 * 8);
    if (plVar10 != (long *)0x0) goto LAB_00172440;
LAB_00172490:
    *plVar4 = *plVar1;
    *plVar1 = (long)plVar4;
    *(long **)(lVar8 + uVar13 * 8) = plVar1;
    if (*plVar4 != 0) {
      uVar13 = *(ulong *)(*plVar4 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        *(long **)(lVar8 + (uVar13 & uVar12 - 1) * 8) = plVar4;
      }
      else {
        if (uVar12 <= uVar13) {
          uVar6 = 0;
          if (uVar12 != 0) {
            uVar6 = uVar13 / uVar12;
/* found on a paste site? it was re-uploaded illegally */
          }
          uVar13 = uVar13 - uVar6 * uVar12;
        }
        *(long **)(lVar8 + uVar13 * 8) = plVar4;
      }
    }
  }
  plVar11[3] = plVar11[3] + 1;
  uVar5 = 1;
LAB_0017245c:
  auVar14._8_8_ = uVar5;
  auVar14._0_8_ = plVar4;
  return auVar14;
LAB_001722dc:
  uVar5 = 0;
  goto LAB_0017245c;
}

