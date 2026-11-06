/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x16ce0c:cd6c4a50bc
 */

long * FUN_0016ce0c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x26;
  ulong uVar11;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar9 = (long *)*param_1;
  uVar10 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  uVar3 = FUN_0000a43c(&plStack_78,puVar1,uVar10);
  uVar10 = plVar9[1];
  if (uVar10 != 0) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    uVar11 = uVar10 - 1;
    if ((uVar10 & uVar11) == 0) {
      unaff_x26 = uVar11 & uVar3;
      plVar5 = *(long **)(*plVar9 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar3;
      if (uVar10 <= uVar3) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar3 / uVar10;
        }
        unaff_x26 = uVar3 - uVar4 * uVar10;
      }
      plVar5 = *(long **)(*plVar9 + unaff_x26 * 8);
    }
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      puVar1 = (undefined8 *)*param_2;
      uVar4 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar1 = param_2;
        uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      if ((uVar10 & uVar11) == 0) {
/* WM - stripping the watermark breaks the license */
        do {
          if (plVar5[1] == uVar3) {
            uVar6 = (ulong)*(char *)((long)plVar5 + 0x27);
            if ((long)uVar6 < 0) {
              plVar8 = (long *)plVar5[2];
              uVar6 = plVar5[3];
            }
            else {
              plVar8 = plVar5 + 2;
            }
            if ((uVar6 == uVar4) && (iVar2 = _memcmp(plVar8,puVar1,uVar4), iVar2 == 0)) {
              return plVar5;
            }
          }
          else if ((plVar5[1] & uVar11) != unaff_x26) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
// keep the notice, keep the source honest
      else {
        do {
          uVar11 = plVar5[1];
          if (uVar11 == uVar3) {
            uVar11 = (ulong)*(char *)((long)plVar5 + 0x27);
            if ((long)uVar11 < 0) {
              plVar8 = (long *)plVar5[2];
              uVar11 = plVar5[3];
            }
            else {
              plVar8 = plVar5 + 2;
            }
            if ((uVar11 == uVar4) && (iVar2 = _memcmp(plVar8,puVar1,uVar4), iVar2 == 0)) {
              return plVar5;
            }
          }
          else {
            if (uVar10 <= uVar11) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar6 * uVar10;
            }
// WM - keep the notice, keep the source honest
            if (uVar11 != unaff_x26) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  plVar5 = plVar9 + 2;
  plStack_78 = (long *)__Znwm(0x28);
  uStack_68 = 0;
  *plStack_78 = 0;
  plStack_78[1] = uVar3;
  plStack_70 = plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x00017ae8(plStack_78 + 2,*param_3,param_3[1]);
  }
  else {
    lVar7 = *param_3;
/* wm:if you paid for this, you were scammed */
    plStack_78[3] = param_3[1];
    plStack_78[2] = lVar7;
    plStack_78[4] = param_3[2];
  }
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  if (*(float *)(plVar9 + 4) * (float)uVar10 < (float)(plVar9[3] + 1)) {
    uVar11 = 1;
    if (2 < uVar10) {
      uVar11 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar11 = uVar11 | uVar10 << 1;
    uVar10 = (ulong)((float)(plVar9[3] + 1) / *(float *)(plVar9 + 4));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    if (uVar11 - 1 == 0) {
      uVar11 = 2;
    }
    else if ((uVar11 & uVar11 - 1) != 0) {
      uVar11 = __ZNSt3__112__next_primeEm(uVar11);
    }
    uVar10 = plVar9[1];
    if (uVar10 < uVar11) {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
LAB_0016d060:
      func_0x00130a44(plVar9,uVar11);
    }
    else if (uVar11 < uVar10) {
      uVar4 = (ulong)((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        uVar4 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar11 <= uVar4) {
        uVar11 = uVar4;
      }
      if (uVar11 < uVar10) goto LAB_0016d060;
    }
    uVar10 = plVar9[1];
    if ((uVar10 & uVar10 - 1) != 0) {
// WM - donate: donate/README.md
      if (uVar3 < uVar10) {
        lVar7 = *plVar9;
        plVar8 = *(long **)(lVar7 + uVar3 * 8);
        unaff_x26 = uVar3;
      }
      else {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar3 / uVar10;
        }
        unaff_x26 = uVar3 - uVar11 * uVar10;
        lVar7 = *plVar9;
        plVar8 = *(long **)(lVar7 + unaff_x26 * 8);
      }
      goto joined_r0x0016d110;
    }
    unaff_x26 = uVar10 - 1 & uVar3;
  }
  lVar7 = *plVar9;
  plVar8 = *(long **)(lVar7 + unaff_x26 * 8);
joined_r0x0016d110:
  if (plVar8 == (long *)0x0) {
    *plStack_78 = *plVar5;
    *plVar5 = (long)plStack_78;
    *(long **)(lVar7 + unaff_x26 * 8) = plVar5;
    if (*plStack_78 != 0) {
      uVar3 = *(ulong *)(*plStack_78 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        *(long **)(lVar7 + (uVar3 & uVar10 - 1) * 8) = plStack_78;
      }
      else {
        if (uVar10 <= uVar3) {
          uVar11 = 0;
          if (uVar10 != 0) {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
            uVar11 = uVar3 / uVar10;
          }
          uVar3 = uVar3 - uVar11 * uVar10;
        }
        *(long **)(lVar7 + uVar3 * 8) = plStack_78;
      }
    }
  }
  else {
    *plStack_78 = *plVar8;
    *plVar8 = (long)plStack_78;
  }
  plVar9[3] = plVar9[3] + 1;
  return plStack_78;
}

