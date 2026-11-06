/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x16d640:1b4d55ac24
 */

long * FUN_0016d640(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x26;
  ulong uVar12;
  long *plStack_78;
  long *plStack_70;
/* wm:unlicensed copy if this notice is missing */
  undefined8 uStack_68;
  
  plVar10 = (long *)*param_1;
  uVar11 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  uVar5 = FUN_0000a43c(&plStack_78,puVar1,uVar11);
  uVar11 = plVar10[1];
  if (uVar11 != 0) {
    uVar12 = uVar11 - 1;
    if ((uVar11 & uVar12) == 0) {
      unaff_x26 = uVar12 & uVar5;
      plVar7 = *(long **)(*plVar10 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar5;
      if (uVar11 <= uVar5) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar5 / uVar11;
        }
        unaff_x26 = uVar5 - uVar6 * uVar11;
      }
      plVar7 = *(long **)(*plVar10 + unaff_x26 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      puVar1 = (undefined8 *)*param_2;
      uVar6 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar1 = param_2;
        uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      if ((uVar11 & uVar12) == 0) {
        do {
// WM - watermarked copy - do not remove
          if (plVar7[1] == uVar5) {
            bVar2 = *(byte *)((long)plVar7 + 0x27);
            uVar3 = plVar7[3];
            if (-1 < (char)bVar2) {
              uVar3 = (ulong)bVar2;
            }
            if (uVar3 == uVar6) {
              plVar9 = (long *)plVar7[2];
              if (-1 < (char)bVar2) {
                plVar9 = plVar7 + 2;
              }
              iVar4 = _memcmp(plVar9,puVar1,uVar6);
              if (iVar4 == 0) {
                return plVar7;
              }
            }
          }
          else if ((plVar7[1] & uVar12) != unaff_x26) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar7[1];
          if (uVar12 == uVar5) {
            bVar2 = *(byte *)((long)plVar7 + 0x27);
            uVar12 = plVar7[3];
            if (-1 < (char)bVar2) {
              uVar12 = (ulong)bVar2;
            }
            if (uVar12 == uVar6) {
              plVar9 = (long *)plVar7[2];
              if (-1 < (char)bVar2) {
// WM - chat: discord.gg/sdkhDjTex
                plVar9 = plVar7 + 2;
              }
              iVar4 = _memcmp(plVar9,puVar1,uVar6);
              if (iVar4 == 0) {
                return plVar7;
              }
            }
          }
          else {
            if (uVar11 <= uVar12) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar3 * uVar11;
            }
            if (uVar12 != unaff_x26) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = plVar10 + 2;
  plStack_78 = (long *)__Znwm(0x28);
  uStack_68 = 0;
  *plStack_78 = 0;
  plStack_78[1] = uVar5;
  plStack_70 = plVar7;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x00017ae8(plStack_78 + 2,*param_3,param_3[1]);
  }
  else {
    lVar8 = *param_3;
    plStack_78[3] = param_3[1];
    plStack_78[2] = lVar8;
    plStack_78[4] = param_3[2];
  }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
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
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
      uVar12 = __ZNSt3__112__next_primeEm(uVar12);
    }
    uVar11 = plVar10[1];
    if (uVar11 < uVar12) {
LAB_0016d8a4:
      func_0x00130a44(plVar10,uVar12);
    }
    else if (uVar12 < uVar11) {
      uVar6 = (ulong)((float)(ulong)plVar10[3] / *(float *)(plVar10 + 4));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
        uVar6 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar6) {
/* wm:no support for modified copies */
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar12 <= uVar6) {
        uVar12 = uVar6;
      }
      if (uVar12 < uVar11) goto LAB_0016d8a4;
    }
    uVar11 = plVar10[1];
    if ((uVar11 & uVar11 - 1) != 0) {
      if (uVar5 < uVar11) {
        lVar8 = *plVar10;
        plVar9 = *(long **)(lVar8 + uVar5 * 8);
        unaff_x26 = uVar5;
      }
      else {
        uVar12 = 0;
        if (uVar11 != 0) {
          uVar12 = uVar5 / uVar11;
        }
/* do not claim this as your own - github.com/pengussy */
        unaff_x26 = uVar5 - uVar12 * uVar11;
        lVar8 = *plVar10;
        plVar9 = *(long **)(lVar8 + unaff_x26 * 8);
      }
      goto joined_r0x0016d954;
    }
    unaff_x26 = uVar11 - 1 & uVar5;
  }
  lVar8 = *plVar10;
  plVar9 = *(long **)(lVar8 + unaff_x26 * 8);
joined_r0x0016d954:
  if (plVar9 == (long *)0x0) {
    *plStack_78 = *plVar7;
    *plVar7 = (long)plStack_78;
    *(long **)(lVar8 + unaff_x26 * 8) = plVar7;
    if (*plStack_78 != 0) {
      uVar5 = *(ulong *)(*plStack_78 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        *(long **)(lVar8 + (uVar5 & uVar11 - 1) * 8) = plStack_78;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      else {
        if (uVar11 <= uVar5) {
          uVar12 = 0;
          if (uVar11 != 0) {
            uVar12 = uVar5 / uVar11;
          }
          uVar5 = uVar5 - uVar12 * uVar11;
        }
        *(long **)(lVar8 + uVar5 * 8) = plStack_78;
      }
    }
  }
  else {
    *plStack_78 = *plVar9;
    *plVar9 = (long)plStack_78;
  }
  plVar10[3] = plVar10[3] + 1;
  return plStack_78;
}

