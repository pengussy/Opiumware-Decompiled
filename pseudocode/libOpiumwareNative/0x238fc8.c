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
 *  file-id: 0x238fc8:02804bd448
 *  --------------------------------------------------------------------------*/

long * FUN_00238fc8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x26;
  ulong uVar12;
  long *plStack_78;
/* thanks for reading - discord.gg/sdkhDjTex */
  long *plStack_70;
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
/* wm:origin: github.com/pengussy */
      plVar8 = *(long **)(*plVar10 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar5;
      if (uVar11 <= uVar5) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar5 / uVar11;
        }
        unaff_x26 = uVar5 - uVar7 * uVar11;
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
/* donate: donate/README.md - github.com/pengussy */
          if (plVar8[1] == uVar5) {
            bVar2 = *(byte *)((long)plVar8 + 0x27);
            uVar3 = plVar8[3];
            if (-1 < (char)bVar2) {
              uVar3 = (ulong)bVar2;
            }
            if (uVar3 == uVar7) {
              plVar6 = (long *)plVar8[2];
              if (-1 < (char)bVar2) {
                plVar6 = plVar8 + 2;
              }
              iVar4 = _memcmp(plVar6,puVar1,uVar7);
              if (iVar4 == 0) {
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
          if (uVar12 == uVar5) {
            bVar2 = *(byte *)((long)plVar8 + 0x27);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
            uVar12 = plVar8[3];
            if (-1 < (char)bVar2) {
              uVar12 = (ulong)bVar2;
            }
            if (uVar12 == uVar7) {
              plVar6 = (long *)plVar8[2];
              if (-1 < (char)bVar2) {
                plVar6 = plVar8 + 2;
              }
              iVar4 = _memcmp(plVar6,puVar1,uVar7);
              if (iVar4 == 0) {
                return plVar8;
              }
            }
          }
          else {
            if (uVar11 <= uVar12) {
              uVar3 = 0;
              if (uVar11 != 0) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                uVar3 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar3 * uVar11;
            }
            if (uVar12 != unaff_x26) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = plVar10 + 2;
  plVar6 = (long *)__Znwm(0x38);
  uStack_68 = 0;
  *plVar6 = 0;
  plVar6[1] = uVar5;
  plStack_78 = plVar6;
  plStack_70 = plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x00017ae8(plVar6 + 2,*param_3,param_3[1]);
  }
  else {
    lVar9 = *param_3;
    plVar6[3] = param_3[1];
// proprietary - see LICENSE - do not sell
    plVar6[2] = lVar9;
    plVar6[4] = param_3[2];
  }
  *(int *)(plVar6 + 6) = (int)param_3[4];
  plVar6[5] = param_3[3];
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
LAB_00239240:
/* donate: donate/README.md */
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
      if (uVar12 < uVar11) goto LAB_00239240;
    }
    uVar11 = plVar10[1];
    if ((uVar11 & uVar11 - 1) != 0) {
      if (uVar5 < uVar11) {
        lVar9 = *plVar10;
        plVar6 = *(long **)(lVar9 + uVar5 * 8);
        unaff_x26 = uVar5;
      }
      else {
        uVar12 = 0;
/* WM - no support for modified copies */
        if (uVar11 != 0) {
          uVar12 = uVar5 / uVar11;
        }
        unaff_x26 = uVar5 - uVar12 * uVar11;
        lVar9 = *plVar10;
        plVar6 = *(long **)(lVar9 + unaff_x26 * 8);
      }
      goto joined_r0x002392f0;
    }
    unaff_x26 = uVar11 - 1 & uVar5;
  }
  lVar9 = *plVar10;
  plVar6 = *(long **)(lVar9 + unaff_x26 * 8);
joined_r0x002392f0:
  if (plVar6 == (long *)0x0) {
    *plStack_78 = *plVar8;
    *plVar8 = (long)plStack_78;
    *(long **)(lVar9 + unaff_x26 * 8) = plVar8;
    if (*plStack_78 != 0) {
      uVar5 = *(ulong *)(*plStack_78 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        *(long **)(lVar9 + (uVar5 & uVar11 - 1) * 8) = plStack_78;
      }
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      else {
        if (uVar11 <= uVar5) {
          uVar12 = 0;
          if (uVar11 != 0) {
            uVar12 = uVar5 / uVar11;
          }
          uVar5 = uVar5 - uVar12 * uVar11;
        }
        *(long **)(lVar9 + uVar5 * 8) = plStack_78;
      }
    }
  }
  else {
    *plStack_78 = *plVar6;
    *plVar6 = (long)plStack_78;
  }
// unlicensed copy if this notice is missing
  plVar10[3] = plVar10[3] + 1;
  return plStack_78;
}

