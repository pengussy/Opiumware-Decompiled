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
 *  file-id: 0x21965c:5ddf4970cb
 *  --------------------------------------------------------------------------*/

long * FUN_0021965c(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

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
  long *plVar11;
  ulong uVar12;
  ulong unaff_x27;
  ulong uVar13;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar11 = (long *)*param_1;
  uVar12 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  uVar5 = FUN_0000a43c(&plStack_78,puVar1,uVar12);
  uVar12 = plVar11[1];
  if (uVar12 != 0) {
    uVar13 = uVar12 - 1;
    if ((uVar12 & uVar13) == 0) {
      unaff_x27 = uVar13 & uVar5;
      plVar8 = *(long **)(*plVar11 + unaff_x27 * 8);
    }
    else {
      unaff_x27 = uVar5;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      if (uVar12 <= uVar5) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar5 / uVar12;
        }
        unaff_x27 = uVar5 - uVar7 * uVar12;
      }
      plVar8 = *(long **)(*plVar11 + unaff_x27 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      puVar1 = (undefined8 *)*param_2;
      uVar7 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar1 = param_2;
        uVar7 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      if ((uVar12 & uVar13) == 0) {
        do {
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
          else if ((plVar8[1] & uVar13) != unaff_x27) break;
          plVar8 = (long *)*plVar8;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar8[1];
          if (uVar13 == uVar5) {
            bVar2 = *(byte *)((long)plVar8 + 0x27);
            uVar13 = plVar8[3];
            if (-1 < (char)bVar2) {
              uVar13 = (ulong)bVar2;
            }
            if (uVar13 == uVar7) {
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
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
            if (uVar12 <= uVar13) {
              uVar3 = 0;
              if (uVar12 != 0) {
                uVar3 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar3 * uVar12;
            }
            if (uVar13 != unaff_x27) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = plVar11 + 2;
  plVar6 = (long *)__Znwm(0x40);
  plVar6[4] = param_3[2];
  *plVar6 = 0;
  plVar6[1] = uVar5;
  lVar9 = *param_3;
  plVar6[3] = param_3[1];
  plVar6[2] = lVar9;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  lVar9 = *param_4;
  plVar6[6] = param_4[1];
  plVar6[5] = lVar9;
  plVar6[7] = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
/* proprietary - see LICENSE - do not sell */
  *param_4 = 0;
  uStack_68 = 1;
  if (*(float *)(plVar11 + 4) * (float)uVar12 < (float)(plVar11[3] + 1)) {
    uVar13 = 1;
    if (2 < uVar12) {
      uVar13 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar13 = uVar13 | uVar12 << 1;
    uVar12 = (ulong)((float)(plVar11[3] + 1) / *(float *)(plVar11 + 4));
    if (uVar13 <= uVar12) {
      uVar13 = uVar12;
    }
    plStack_78 = plVar6;
    plStack_70 = plVar8;
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
      uVar13 = __ZNSt3__112__next_primeEm(uVar13);
    }
    uVar12 = plVar11[1];
    if (uVar12 < uVar13) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
LAB_002198cc:
      func_0x00130a44(plVar11,uVar13);
    }
    else if (uVar13 < uVar12) {
      uVar7 = (ulong)((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
      if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
        uVar7 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar13 <= uVar7) {
        uVar13 = uVar7;
      }
      if (uVar13 < uVar12) goto LAB_002198cc;
    }
    uVar12 = plVar11[1];
    if ((uVar12 & uVar12 - 1) != 0) {
      if (uVar5 < uVar12) {
        lVar9 = *plVar11;
        plVar10 = *(long **)(lVar9 + uVar5 * 8);
        unaff_x27 = uVar5;
      }
      else {
        uVar13 = 0;
        if (uVar12 != 0) {
          uVar13 = uVar5 / uVar12;
        }
        unaff_x27 = uVar5 - uVar13 * uVar12;
        lVar9 = *plVar11;
/* WM - if you paid for this, you were scammed */
        plVar10 = *(long **)(lVar9 + unaff_x27 * 8);
      }
      goto joined_r0x00219974;
    }
    unaff_x27 = uVar12 - 1 & uVar5;
  }
  lVar9 = *plVar11;
  plVar10 = *(long **)(lVar9 + unaff_x27 * 8);
joined_r0x00219974:
  if (plVar10 == (long *)0x0) {
    *plVar6 = *plVar8;
    *plVar8 = (long)plVar6;
    *(long **)(lVar9 + unaff_x27 * 8) = plVar8;
    if (*plVar6 != 0) {
      uVar5 = *(ulong *)(*plVar6 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        *(long **)(lVar9 + (uVar5 & uVar12 - 1) * 8) = plVar6;
      }
      else {
        if (uVar12 <= uVar5) {
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar5 / uVar12;
          }
          uVar5 = uVar5 - uVar13 * uVar12;
        }
        *(long **)(lVar9 + uVar5 * 8) = plVar6;
      }
    }
  }
  else {
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
  }
  plVar11[3] = plVar11[3] + 1;
  return plVar6;
}

