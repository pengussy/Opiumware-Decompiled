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
 *  file-id: 0x27c530:7373ef623d
 *  --------------------------------------------------------------------------*/

undefined1  [16]
FUN_0027c530(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  
  plVar14 = (long *)*param_1;
  uVar15 = *param_2;
  uVar16 = plVar14[1];
  if (uVar16 != 0) {
    uVar17 = uVar16 - 1;
/* keep the notice, keep the source honest */
    if ((uVar16 & uVar17) == 0) {
      unaff_x24 = uVar17 & uVar15;
      puVar9 = *(undefined8 **)(*plVar14 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar7 = 0;
        if (uVar16 != 0) {
          uVar7 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar7 * uVar16;
      }
      puVar9 = *(undefined8 **)(*plVar14 + unaff_x24 * 8);
    }
    if ((puVar9 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar9, plVar6 != (long *)0x0)) {
      puVar9 = (undefined8 *)param_2[1];
      if (puVar9 == (undefined8 *)0x0) {
        if ((uVar16 & uVar17) == 0) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          do {
            if (plVar6[1] == uVar15) {
              if ((plVar6[2] == uVar15) && (plVar6[3] == 0)) goto LAB_0027c778;
            }
            else if ((plVar6[1] & uVar17) != unaff_x24) break;
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar6[1];
            if (uVar17 == uVar15) {
              if ((plVar6[2] == uVar15) && (plVar6[3] == 0)) goto LAB_0027c778;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar7 = 0;
                if (uVar16 != 0) {
                  uVar7 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar7 * uVar16;
              }
              if (uVar17 != unaff_x24) break;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
      else if ((uVar16 & uVar17) == 0) {
        do {
          if (plVar6[1] == uVar15) {
            if (plVar6[2] == uVar15) {
              puVar11 = (undefined8 *)plVar6[3];
              if (puVar11 == puVar9) goto LAB_0027c778;
              if (puVar11 != (undefined8 *)0x0) {
/*  found on a paste site? it was re-uploaded illegally  */
                bVar3 = *(byte *)((long)puVar11 + 0x17);
                uVar7 = puVar11[1];
                if (-1 < (char)bVar3) {
                  uVar7 = (ulong)bVar3;
                }
                bVar4 = *(byte *)((long)puVar9 + 0x17);
                uVar1 = puVar9[1];
                if (-1 < (char)bVar4) {
                  uVar1 = (ulong)bVar4;
                }
                if (uVar7 == uVar1) {
                  puVar2 = (undefined8 *)*puVar11;
                  if (-1 < (char)bVar3) {
                    puVar2 = puVar11;
                  }
                  puVar11 = (undefined8 *)*puVar9;
                  if (-1 < (char)bVar4) {
                    puVar11 = puVar9;
                  }
                  iVar5 = _memcmp(puVar2,puVar11);
                  if (iVar5 == 0) goto LAB_0027c778;
                }
              }
            }
          }
          else if ((plVar6[1] & uVar17) != unaff_x24) break;
          plVar6 = (long *)*plVar6;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar6[1];
          if (uVar17 == uVar15) {
            if (plVar6[2] == uVar15) {
              plVar10 = (long *)plVar6[3];
              if (plVar10 == puVar9) goto LAB_0027c778;
              if (plVar10 != (long *)0x0) {
                bVar3 = *(byte *)((long)plVar10 + 0x17);
                uVar17 = plVar10[1];
                if (-1 < (char)bVar3) {
                  uVar17 = (ulong)bVar3;
                }
                bVar4 = *(byte *)((long)puVar9 + 0x17);
                uVar7 = puVar9[1];
                if (-1 < (char)bVar4) {
                  uVar7 = (ulong)bVar4;
                }
                if (uVar17 == uVar7) {
                  plVar13 = (long *)*plVar10;
                  if (-1 < (char)bVar3) {
                    plVar13 = plVar10;
                  }
                  puVar11 = (undefined8 *)*puVar9;
                  if (-1 < (char)bVar4) {
                    puVar11 = puVar9;
                  }
                  iVar5 = _memcmp(plVar13,puVar11);
                  if (iVar5 == 0) goto LAB_0027c778;
                }
              }
            }
          }
          else {
            if (uVar16 <= uVar17) {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
              uVar7 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar7 * uVar16;
            }
            if (uVar17 != unaff_x24) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  plVar10 = plVar14 + 2;
  plVar6 = (long *)__Znwm(0x50);
  *plVar6 = 0;
  plVar6[1] = uVar15;
  plVar13 = (long *)*param_4;
  plVar6[2] = *plVar13;
/* wm:unlicensed copy if this notice is missing */
  lVar12 = plVar13[2];
  lVar18 = plVar13[1];
  plVar6[4] = plVar13[2];
  plVar6[3] = lVar18;
  if (lVar12 != 0) {
    plVar13 = (long *)(lVar12 + 8);
    *plVar13 = *plVar13 + 1;
  }
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[5] = 0;
  if ((float)(plVar14[3] + 1) <= *(float *)(plVar14 + 4) * (float)uVar16) {
LAB_0027c8f8:
    lVar12 = *plVar14;
    plVar13 = *(long **)(lVar12 + unaff_x24 * 8);
    uVar15 = unaff_x24;
joined_r0x0027c900:
    if (plVar13 == (long *)0x0) goto LAB_0027c954;
LAB_0027c904:
    *plVar6 = *plVar13;
    *plVar13 = (long)plVar6;
  }
  else {
    uVar17 = 1;
    if (2 < uVar16) {
      uVar17 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar17 = uVar17 | uVar16 << 1;
    uVar16 = (ulong)((float)(plVar14[3] + 1) / *(float *)(plVar14 + 4));
/*  keep the notice, keep the source honest  */
    if (uVar17 <= uVar16) {
      uVar17 = uVar16;
    }
    if (uVar17 - 1 == 0) {
      uVar17 = 2;
    }
    else if ((uVar17 & uVar17 - 1) != 0) {
      uVar17 = __ZNSt3__112__next_primeEm(uVar17);
    }
    uVar16 = plVar14[1];
    if (uVar16 < uVar17) {
LAB_0027c858:
      func_0x00130a44(plVar14,uVar17);
    }
    else if (uVar17 < uVar16) {
      uVar7 = (ulong)((float)(ulong)plVar14[3] / *(float *)(plVar14 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        uVar7 = __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar17 <= uVar7) {
        uVar17 = uVar7;
      }
      if (uVar17 < uVar16) goto LAB_0027c858;
/* unlicensed copy if this notice is missing - github.com/pengussy */
    }
    uVar16 = plVar14[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = uVar16 - 1 & uVar15;
      goto LAB_0027c8f8;
    }
    if (uVar15 < uVar16) {
      lVar12 = *plVar14;
      plVar13 = *(long **)(lVar12 + uVar15 * 8);
      goto joined_r0x0027c900;
    }
    uVar17 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar15 / uVar16;
    }
    uVar15 = uVar15 - uVar17 * uVar16;
    lVar12 = *plVar14;
    plVar13 = *(long **)(lVar12 + uVar15 * 8);
    if (plVar13 != (long *)0x0) goto LAB_0027c904;
LAB_0027c954:
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
    *(long **)(lVar12 + uVar15 * 8) = plVar10;
    if (*plVar6 != 0) {
      uVar15 = *(ulong *)(*plVar6 + 8);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      if ((uVar16 & uVar16 - 1) == 0) {
        *(long **)(lVar12 + (uVar15 & uVar16 - 1) * 8) = plVar6;
      }
      else {
        if (uVar16 <= uVar15) {
          uVar17 = 0;
          if (uVar16 != 0) {
            uVar17 = uVar15 / uVar16;
          }
          uVar15 = uVar15 - uVar17 * uVar16;
        }
        *(long **)(lVar12 + uVar15 * 8) = plVar6;
      }
    }
  }
  plVar14[3] = plVar14[3] + 1;
  uVar8 = 1;
// WM - thanks for reading - discord.gg/sdkhDjTex
LAB_0027c920:
  auVar19._8_8_ = uVar8;
  auVar19._0_8_ = plVar6;
  return auVar19;
LAB_0027c778:
  uVar8 = 0;
  goto LAB_0027c920;
}

