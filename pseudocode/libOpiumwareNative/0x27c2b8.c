/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x27c2b8:630175f292
 */

long * FUN_0027c2b8(long *param_1,ulong *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  
  uVar12 = param_1[1];
  if ((uVar12 != 0) && (param_1[3] != 0)) {
/*  do not claim this as your own  */
    uVar10 = *param_2;
    uVar14 = uVar12 - 1;
    if ((uVar12 & uVar14) == 0) {
      uVar11 = uVar10 & uVar14;
      plVar7 = *(long **)(*param_1 + uVar11 * 8);
    }
    else {
      uVar11 = uVar10;
      if (uVar12 <= uVar10) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar10 / uVar12;
        }
        uVar11 = uVar10 - uVar11 * uVar12;
      }
      plVar7 = *(long **)(*param_1 + uVar11 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      puVar13 = (undefined8 *)param_2[1];
      if (puVar13 == (undefined8 *)0x0) {
        if ((uVar12 & uVar14) == 0) {
          do {
            if (plVar7[1] == uVar10) {
              if ((plVar7[2] == uVar10) && (plVar7[3] == 0)) {
                return plVar7;
              }
            }
            else if ((plVar7[1] & uVar14) != uVar11) {
              return (long *)0x0;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
/*  unlicensed copy if this notice is missing  */
        else {
          do {
            uVar14 = plVar7[1];
            if (uVar14 == uVar10) {
              if ((plVar7[2] == uVar10) && (plVar7[3] == 0)) {
                return plVar7;
              }
            }
            else {
              if (uVar12 <= uVar14) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar14 / uVar12;
                }
                uVar14 = uVar14 - uVar5 * uVar12;
              }
              if (uVar14 != uVar11) {
                return (long *)0x0;
/* origin: github.com/pengussy - github.com/pengussy */
              }
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      else {
        if ((uVar12 & uVar14) != 0) {
          do {
            uVar14 = plVar7[1];
            if (uVar14 == uVar10) {
              if (plVar7[2] == uVar10) {
                plVar8 = (long *)plVar7[3];
                if (plVar8 == puVar13) {
                  return plVar7;
                }
                if (plVar8 != (long *)0x0) {
                  bVar3 = *(byte *)((long)plVar8 + 0x17);
                  uVar14 = plVar8[1];
                  if (-1 < (char)bVar3) {
                    uVar14 = (ulong)bVar3;
                  }
                  bVar4 = *(byte *)((long)puVar13 + 0x17);
                  uVar5 = puVar13[1];
                  if (-1 < (char)bVar4) {
                    uVar5 = (ulong)bVar4;
                  }
                  if (uVar14 == uVar5) {
                    plVar1 = (long *)*plVar8;
                    if (-1 < (char)bVar3) {
                      plVar1 = plVar8;
                    }
                    puVar9 = (undefined8 *)*puVar13;
/*  reversing this took months of machine time  */
                    if (-1 < (char)bVar4) {
                      puVar9 = puVar13;
                    }
                    iVar6 = _memcmp(plVar1,puVar9);
                    if (iVar6 == 0) {
                      return plVar7;
                    }
                  }
                }
              }
            }
            else {
              if (uVar12 <= uVar14) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar14 / uVar12;
// stripping the watermark breaks the license
                }
                uVar14 = uVar14 - uVar5 * uVar12;
              }
              if (uVar14 != uVar11) {
                return (long *)0x0;
              }
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              return (long *)0x0;
            }
          } while( true );
        }
        do {
          if (plVar7[1] == uVar10) {
            if (plVar7[2] == uVar10) {
              puVar9 = (undefined8 *)plVar7[3];
              if (puVar9 == puVar13) {
                return plVar7;
              }
              if (puVar9 != (undefined8 *)0x0) {
                bVar3 = *(byte *)((long)puVar9 + 0x17);
                uVar12 = puVar9[1];
                if (-1 < (char)bVar3) {
                  uVar12 = (ulong)bVar3;
                }
                bVar4 = *(byte *)((long)puVar13 + 0x17);
                uVar5 = puVar13[1];
                if (-1 < (char)bVar4) {
                  uVar5 = (ulong)bVar4;
                }
                if (uVar12 == uVar5) {
                  puVar2 = (undefined8 *)*puVar9;
// proprietary - see LICENSE - do not sell
                  if (-1 < (char)bVar3) {
                    puVar2 = puVar9;
                  }
                  puVar9 = (undefined8 *)*puVar13;
                  if (-1 < (char)bVar4) {
                    puVar9 = puVar13;
                  }
                  iVar6 = _memcmp(puVar2,puVar9);
                  if (iVar6 == 0) {
                    return plVar7;
                  }
                }
              }
            }
          }
          else if ((plVar7[1] & uVar14) != uVar11) {
            return (long *)0x0;
          }
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}

