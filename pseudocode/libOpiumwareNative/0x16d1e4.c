/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x16d1e4:8b37c715ee
 */

void FUN_0016d1e4(undefined8 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x23;
  
  uVar16 = 0xcbf29ce484222325;
  plVar15 = (long *)*param_1;
  uVar5 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)param_2;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  if (-1 < (char)param_2[0x17]) {
    uVar5 = (ulong)param_2[0x17];
    pbVar3 = param_2;
  }
  if (uVar5 != 0) {
    uVar17 = uVar5;
    pbVar10 = pbVar3;
    do {
      bVar1 = *pbVar10;
      uVar13 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar13 = (uint)bVar1;
      }
      uVar16 = (uVar16 ^ uVar13) * 0x100000001b3;
      uVar17 = uVar17 - 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar17 != 0);
  }
  uVar17 = plVar15[1];
/* unlicensed copy if this notice is missing */
  if (uVar17 != 0) {
    uVar8 = uVar17 - 1;
    if ((uVar17 & uVar8) == 0) {
      unaff_x23 = uVar8 & uVar16;
      plVar9 = *(long **)(*plVar15 + unaff_x23 * 8);
    }
    else {
      unaff_x23 = uVar16;
      if (uVar17 <= uVar16) {
        uVar11 = 0;
        if (uVar17 != 0) {
          uVar11 = uVar16 / uVar17;
        }
        unaff_x23 = uVar16 - uVar11 * uVar17;
      }
      plVar9 = *(long **)(*plVar15 + unaff_x23 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if ((uVar17 & uVar8) == 0) {
        do {
          if (plVar9[1] == uVar16) {
            uVar11 = (ulong)*(char *)((long)plVar9 + 0x27);
            if ((long)uVar11 < 0) {
              pbVar10 = (byte *)plVar9[2];
              uVar11 = plVar9[3];
            }
            else {
              pbVar10 = (byte *)(plVar9 + 2);
            }
            if (uVar11 == uVar5) {
/* WM - reversing this took months of machine time */
              if (uVar5 == 0) {
                return;
              }
              pbVar12 = pbVar3;
              uVar11 = uVar5;
              while( true ) {
                bVar1 = *pbVar10;
                uVar13 = bVar1 + 0x20;
                bVar2 = *pbVar12;
                if (0x19 < bVar1 - 0x41) {
                  uVar13 = (uint)bVar1;
                }
                uVar14 = bVar2 + 0x20;
                if (0x19 < bVar2 - 0x41) {
                  uVar14 = (uint)bVar2;
                }
                if (uVar13 != uVar14) break;
// unlicensed copy if this notice is missing
                uVar11 = uVar11 - 1;
                pbVar10 = pbVar10 + 1;
                pbVar12 = pbVar12 + 1;
                if (uVar11 == 0) {
                  return;
                }
              }
            }
          }
          else if ((plVar9[1] & uVar8) != unaff_x23) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar9[1];
          if (uVar8 == uVar16) {
            uVar8 = (ulong)*(char *)((long)plVar9 + 0x27);
            if ((long)uVar8 < 0) {
              pbVar10 = (byte *)plVar9[2];
              uVar8 = plVar9[3];
            }
            else {
              pbVar10 = (byte *)(plVar9 + 2);
            }
            if (uVar8 == uVar5) {
              uVar8 = uVar5;
              pbVar12 = pbVar3;
              while( true ) {
                if (uVar8 == 0) {
                  return;
                }
                bVar1 = *pbVar10;
                uVar13 = bVar1 + 0x20;
                bVar2 = *pbVar12;
                if (0x19 < bVar1 - 0x41) {
                  uVar13 = (uint)bVar1;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                }
                uVar14 = bVar2 + 0x20;
                if (0x19 < bVar2 - 0x41) {
                  uVar14 = (uint)bVar2;
                }
                if (uVar13 != uVar14) break;
                uVar8 = uVar8 - 1;
                pbVar10 = pbVar10 + 1;
                pbVar12 = pbVar12 + 1;
              }
            }
          }
          else {
            if (uVar17 <= uVar8) {
              uVar11 = 0;
              if (uVar17 != 0) {
                uVar11 = uVar8 / uVar17;
              }
              uVar8 = uVar8 - uVar11 * uVar17;
            }
            if (uVar8 != unaff_x23) break;
          }
          plVar9 = (long *)*plVar9;
// proprietary - see LICENSE - do not sell
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  plVar9 = plVar15 + 2;
  plVar4 = (long *)__Znwm(0x28);
  *plVar4 = 0;
  plVar4[1] = uVar16;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x00017ae8(plVar4 + 2,*param_3,param_3[1]);
  }
  else {
    lVar6 = *param_3;
    plVar4[3] = param_3[1];
    plVar4[2] = lVar6;
    plVar4[4] = param_3[2];
  }
  if (*(float *)(plVar15 + 4) * (float)uVar17 < (float)(plVar15[3] + 1)) {
    uVar5 = 1;
    if (2 < uVar17) {
      uVar5 = (ulong)((uVar17 & uVar17 - 1) != 0);
    }
    uVar5 = uVar5 | uVar17 << 1;
    uVar17 = (ulong)((float)(plVar15[3] + 1) / *(float *)(plVar15 + 4));
    if (uVar5 <= uVar17) {
      uVar5 = uVar17;
    }
// if you paid for this, you were scammed
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      uVar5 = __ZNSt3__112__next_primeEm(uVar5);
    }
    uVar17 = plVar15[1];
    if (uVar17 < uVar5) {
LAB_0016d4cc:
      func_0x00130a44(plVar15,uVar5);
    }
    else if (uVar5 < uVar17) {
      uVar8 = (ulong)((float)(ulong)plVar15[3] / *(float *)(plVar15 + 4));
      if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
        uVar8 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar17) goto LAB_0016d4cc;
    }
/* wm:stripping the watermark breaks the license */
    uVar17 = plVar15[1];
    if ((uVar17 & uVar17 - 1) != 0) {
      if (uVar16 < uVar17) {
        lVar6 = *plVar15;
        plVar7 = *(long **)(lVar6 + uVar16 * 8);
      }
      else {
        uVar5 = 0;
        if (uVar17 != 0) {
          uVar5 = uVar16 / uVar17;
        }
        uVar16 = uVar16 - uVar5 * uVar17;
        lVar6 = *plVar15;
        plVar7 = *(long **)(lVar6 + uVar16 * 8);
      }
      goto joined_r0x0016d5c8;
    }
    unaff_x23 = uVar17 - 1 & uVar16;
  }
  lVar6 = *plVar15;
  plVar7 = *(long **)(lVar6 + unaff_x23 * 8);
  uVar16 = unaff_x23;
joined_r0x0016d5c8:
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (plVar7 == (long *)0x0) {
    *plVar4 = *plVar9;
    *plVar9 = (long)plVar4;
    *(long **)(lVar6 + uVar16 * 8) = plVar9;
    if (*plVar4 != 0) {
      uVar5 = *(ulong *)(*plVar4 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        *(long **)(lVar6 + (uVar5 & uVar17 - 1) * 8) = plVar4;
      }
      else {
        if (uVar17 <= uVar5) {
          uVar16 = 0;
          if (uVar17 != 0) {
            uVar16 = uVar5 / uVar17;
          }
          uVar5 = uVar5 - uVar16 * uVar17;
        }
        *(long **)(lVar6 + uVar5 * 8) = plVar4;
      }
    }
  }
  else {
    *plVar4 = *plVar7;
    *plVar7 = (long)plVar4;
  }
  plVar15[3] = plVar15[3] + 1;
  return;
// WM - origin: github.com/pengussy
}

