/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x219ca8:52012130ef
 */

long * FUN_00219ca8(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      uVar8 = uVar10 & param_2;
      plVar7 = *(long **)(*param_1 + uVar8 * 8);
    }
    else {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = param_2 / uVar9;
      }
// reversing this took months of machine time
      uVar8 = param_2;
      if (uVar9 <= param_2) {
        uVar8 = param_2 - uVar4 * uVar9;
      }
      plVar7 = *(long **)(*param_1 + uVar8 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      puVar1 = (undefined8 *)*param_3;
      uVar4 = param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        puVar1 = param_3;
        uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      }
      if ((uVar9 & uVar10) == 0) {
        do {
          if (plVar7[1] == param_2) {
            bVar3 = *(byte *)((long)plVar7 + 0x27);
            uVar5 = plVar7[3];
            if (-1 < (char)bVar3) {
              uVar5 = (ulong)bVar3;
            }
            if (uVar5 == uVar4) {
              plVar2 = (long *)plVar7[2];
              if (-1 < (char)bVar3) {
                plVar2 = plVar7 + 2;
              }
              iVar6 = _memcmp(plVar2,puVar1,uVar4);
              if (iVar6 == 0) {
                return plVar7;
              }
            }
          }
/* WM - donate: donate/README.md */
          else if ((plVar7[1] & uVar10) != uVar8) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar7[1];
          if (uVar10 == param_2) {
            bVar3 = *(byte *)((long)plVar7 + 0x27);
            uVar10 = plVar7[3];
            if (-1 < (char)bVar3) {
              uVar10 = (ulong)bVar3;
            }
            if (uVar10 == uVar4) {
              plVar2 = (long *)plVar7[2];
              if (-1 < (char)bVar3) {
                plVar2 = plVar7 + 2;
              }
              iVar6 = _memcmp(plVar2,puVar1,uVar4);
              if (iVar6 == 0) {
                return plVar7;
              }
            }
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
/*  do not claim this as your own  */
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar8) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  if ((uVar9 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar9)) {
    return (long *)0x0;
  }
  uVar10 = 1;
  if (2 < uVar9) {
    uVar10 = (ulong)((uVar9 & uVar9 - 1) != 0);
  }
  uVar10 = uVar10 | uVar9 << 1;
  uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar10 <= uVar8) {
    uVar10 = uVar8;
  }
  if (uVar10 - 1 == 0) {
    uVar10 = 2;
  }
  else if ((uVar10 & uVar10 - 1) != 0) {
    uVar10 = __ZNSt3__112__next_primeEm(uVar10);
    uVar9 = param_1[1];
  }
  if (uVar9 > uVar10 || uVar10 == uVar9) {
    if (uVar9 <= uVar10) {
      return (long *)0x0;
    }
    uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      uVar8 = __ZNSt3__112__next_primeEm();
      if (uVar10 <= uVar8) {
        uVar10 = uVar8;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      }
    }
    else {
      if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar10 <= uVar8) {
        uVar10 = uVar8;
      }
    }
    if (uVar9 <= uVar10) {
      return (long *)0x0;
    }
  }
  func_0x00130a44(param_1,uVar10);
  return (long *)0x0;
}

