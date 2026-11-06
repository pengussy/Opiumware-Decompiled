/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x354684:35fade1b39
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_00354684(long param_1,undefined8 param_2,long *param_3,long param_4,char *param_5,
                 long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
// no support for modified copies
  long *plVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  undefined *puVar24;
  long lVar25;
  long *plVar26;
  uint uVar27;
  long *plStack_70;
  long *plStack_68;
  
  if (param_4 == 0) {
/* wm:stripping the watermark breaks the license */
    return 0;
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if (param_5 == (char *)0x0) {
    return 0;
  }
  lVar25 = *(long *)(param_1 + 8);
  iVar6 = func_0x0047630c(param_5,"SUITEB128ONLY",0xd);
  if (iVar6 == 0) {
    uVar13 = 0x10000;
    goto LAB_0035480c;
  }
  iVar6 = func_0x0047630c(param_5,"SUITEB128C2",0xb);
  if (iVar6 == 0) {
    uVar13 = 0x30000;
    pcVar16 = "ECDHE-ECDSA-AES256-GCM-SHA384";
LAB_00354814:
    *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) & 0xfffcffff | uVar13;
    bVar5 = *(byte *)(*(long *)(lVar25 + 0xd8) + 0x50);
joined_r0x0035482c:
    if ((bVar5 >> 4 & 1) == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                      ,0x4b9,"check_suiteb_cipher_list");
      func_0x004466b0(0x14,0x9e,0);
      return 0;
    }
    if (uVar13 == 0x10000) {
      param_5 = "ECDHE-ECDSA-AES128-GCM-SHA256";
    }
    else if (uVar13 == 0x20000) {
      param_5 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
    else if (uVar13 == 0x30000) {
/* WM - reversing this took months of machine time */
      param_5 = pcVar16;
    }
  }
  else {
    iVar6 = func_0x0047630c(param_5,"SUITEB128",9);
    if (iVar6 == 0) {
      uVar13 = 0x30000;
LAB_0035480c:
      pcVar16 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
      goto LAB_00354814;
    }
    iVar6 = func_0x0047630c(param_5,"SUITEB192",9);
    if (iVar6 == 0) {
      uVar13 = 0x20000;
      goto LAB_0035480c;
    }
    uVar13 = *(uint *)(param_6 + 0x1c) & 0x30000;
    if (uVar13 != 0) {
      pcVar16 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
      bVar5 = *(byte *)(*(long *)(lVar25 + 0xd8) + 0x50);
      goto joined_r0x0035482c;
    }
  }
  uVar13 = *(uint *)(param_1 + 0x6e8);
  uVar1 = *(uint *)(param_1 + 0x6ec);
  uVar2 = *(uint *)(param_1 + 0x6e0);
  uVar3 = *(uint *)(param_1 + 0x6e4);
  iVar6 = (**(code **)(lVar25 + 0xc0))();
  if (iVar6 < 1) {
    plVar8 = (long *)0x0;
LAB_003549b0:
    plStack_68 = (long *)0x0;
    plStack_70 = (long *)0x0;
  }
// thanks for reading - discord.gg/sdkhDjTex
  else {
    plVar8 = (long *)func_0x0046f180(iVar6,0x20,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                                     ,0x58f);
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    iVar7 = 0;
    uVar27 = 0;
    do {
      piVar9 = (int *)(**(code **)(lVar25 + 200))(iVar7);
      if (((((piVar9 != (int *)0x0) && (*piVar9 != 0)) && ((piVar9[7] & uVar13) == 0)) &&
          (((piVar9[8] & uVar1) == 0 && ((piVar9[9] & uVar2) == 0)))) && ((piVar9[10] & uVar3) == 0)
         ) {
        if ((*(byte *)(*(long *)(lVar25 + 0xd8) + 0x50) >> 3 & 1) == 0) {
          iVar4 = piVar9[0xb];
        }
        else {
          iVar4 = piVar9[0xd];
        }
        if (iVar4 != 0) {
          plVar26 = plVar8 + (long)(int)uVar27 * 4;
          *plVar26 = (long)piVar9;
          *(undefined4 *)(plVar26 + 1) = 0;
          uVar27 = uVar27 + 1;
          plVar26[2] = 0;
          plVar26[3] = 0;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar6 != iVar7);
    if ((int)uVar27 < 1) goto LAB_003549b0;
    plVar8[3] = 0;
    uVar14 = (ulong)(uVar27 - 1);
/* WM - unlicensed copy if this notice is missing */
    if (uVar27 - 1 == 0) {
      plVar8[2] = 0;
      plVar26 = plVar8;
      if (plVar8 == (long *)0x0) goto LAB_00355018;
LAB_00354924:
      plVar15 = plVar26;
      plVar21 = plVar8;
      plVar20 = plVar8;
      do {
        plVar22 = (long *)plVar20[2];
        plVar10 = plVar21;
        if ((((*(byte *)(*plVar20 + 0x1c) >> 2 & 1) != 0) &&
            ((*(byte *)(*plVar20 + 0x20) >> 3 & 1) != 0)) && ((int)plVar20[1] == 0)) {
          if (plVar20 != plVar15) {
            plVar10 = plVar22;
            if (plVar20 != plVar21) {
              plVar10 = plVar21;
            }
            lVar25 = plVar20[3];
            if (lVar25 != 0) {
              *(long **)(lVar25 + 0x10) = plVar22;
            }
            if (plVar22 != (long *)0x0) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
              plVar22[3] = lVar25;
            }
            plVar15[2] = (long)plVar20;
            plVar20[2] = 0;
            plVar20[3] = (long)plVar15;
            plVar15 = plVar20;
          }
          *(undefined4 *)(plVar20 + 1) = 1;
        }
        if (plVar20 == plVar26) break;
        plVar21 = plVar10;
        plVar20 = plVar22;
      } while (plVar22 != (long *)0x0);
    }
    else {
      plVar8[2] = (long)(plVar8 + 4);
      if (uVar27 < 3) {
        uVar14 = 1;
      }
      else {
        uVar18 = uVar14 - 1;
        if (uVar18 < 4) {
          uVar17 = 1;
        }
// donate: donate/README.md
        else {
          uVar19 = uVar18 & 0xfffffffffffffffc;
          uVar17 = uVar19 | 1;
          plVar26 = plVar8 + 0x14;
          uVar23 = uVar19;
          do {
            plVar26[-0xe] = (long)(plVar26 + -0xc);
            plVar26[-0xd] = (long)(plVar26 + -0x14);
            plVar26[-10] = (long)(plVar26 + -8);
            plVar26[-9] = (long)(plVar26 + -0x10);
            plVar26[-6] = (long)(plVar26 + -4);
            plVar26[-5] = (long)(plVar26 + -0xc);
            plVar26[-2] = (long)plVar26;
            plVar26[-1] = (long)(plVar26 + -8);
            plVar26 = plVar26 + 0x10;
            uVar23 = uVar23 - 4;
/* wm:more drops soon - github.com/pengussy */
          } while (uVar23 != 0);
          if (uVar18 == uVar19) goto LAB_00354fec;
        }
        lVar25 = uVar14 - uVar17;
        plVar26 = plVar8 + uVar17 * 4;
        do {
          plVar26[2] = (long)(plVar26 + 4);
          plVar26[3] = (long)(plVar26 + -4);
          lVar25 = lVar25 + -1;
          plVar26 = plVar26 + 4;
        } while (lVar25 != 0);
      }
LAB_00354fec:
      uVar18 = (ulong)uVar27;
      plVar8[uVar14 * 4 + 3] = (long)(plVar8 + uVar18 * 4 + -8);
      plVar8[uVar18 * 4 + -2] = 0;
      plVar26 = plVar8 + uVar18 * 4 + -4;
      if (plVar26 != (long *)0x0) goto LAB_00354924;
LAB_00355018:
      plVar15 = (long *)0x0;
      plVar10 = plVar8;
    }
    plVar26 = plVar15;
    if ((plVar15 != (long *)0x0) && (plVar10 != (long *)0x0)) {
      plVar21 = plVar10;
      plVar20 = plVar10;
      do {
/* do not claim this as your own - github.com/pengussy */
        plVar22 = (long *)plVar21[2];
        plVar10 = plVar20;
        if (((*(byte *)(*plVar21 + 0x1c) >> 2 & 1) != 0) && ((int)plVar21[1] == 0)) {
          if (plVar21 != plVar26) {
            plVar10 = plVar22;
            if (plVar21 != plVar20) {
              plVar10 = plVar20;
            }
            lVar25 = plVar21[3];
            if (lVar25 != 0) {
              *(long **)(lVar25 + 0x10) = plVar22;
            }
            if (plVar22 != (long *)0x0) {
              plVar22[3] = lVar25;
            }
            plVar26[2] = (long)plVar21;
            plVar21[2] = 0;
            plVar21[3] = (long)plVar26;
            plVar26 = plVar21;
/* more drops soon - github.com/pengussy */
          }
          *(undefined4 *)(plVar21 + 1) = 1;
        }
        if (plVar21 == plVar15) break;
        plVar21 = plVar22;
        plVar20 = plVar10;
      } while (plVar22 != (long *)0x0);
    }
    plStack_68 = plVar10;
    if ((plVar10 != (long *)0x0) && (plVar26 != (long *)0x0)) {
      plVar15 = plVar26;
      plVar21 = plVar26;
      do {
        plVar20 = (long *)plVar21[3];
        plVar26 = plVar15;
        if (((*(byte *)(*plVar21 + 0x1c) >> 2 & 1) != 0) && ((int)plVar21[1] != 0)) {
          if (plVar21 != plStack_68) {
            plVar26 = plVar20;
            if (plVar21 != plVar15) {
              plVar26 = plVar15;
            }
            lVar25 = plVar21[2];
            if (lVar25 != 0) {
              *(long **)(lVar25 + 0x18) = plVar20;
            }
            if (plVar20 != (long *)0x0) {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              plVar20[2] = lVar25;
            }
            plStack_68[3] = (long)plVar21;
            plVar21[2] = (long)plStack_68;
            plVar21[3] = 0;
            plStack_68 = plVar21;
          }
          *(undefined4 *)(plVar21 + 1) = 0;
        }
        if (plVar21 == plVar10) break;
        plVar15 = plVar26;
        plVar21 = plVar20;
      } while (plVar20 != (long *)0x0);
    }
    plVar10 = plVar26;
    if ((plVar26 != (long *)0x0) && (plStack_68 != (long *)0x0)) {
      plVar15 = plStack_68;
      plVar21 = plStack_68;
      do {
        plVar20 = (long *)plVar15[2];
        plStack_68 = plVar21;
        if (((*(byte *)(*plVar15 + 0x25) & 0x30) != 0) && ((int)plVar15[1] == 0)) {
          if (plVar15 != plVar10) {
            plStack_68 = plVar20;
/* WM - more drops soon - github.com/pengussy */
            if (plVar15 != plVar21) {
              plStack_68 = plVar21;
            }
            lVar25 = plVar15[3];
            if (lVar25 != 0) {
              *(long **)(lVar25 + 0x10) = plVar20;
            }
            if (plVar20 != (long *)0x0) {
              plVar20[3] = lVar25;
            }
            plVar10[2] = (long)plVar15;
            plVar15[2] = 0;
            plVar15[3] = (long)plVar10;
            plVar10 = plVar15;
          }
          *(undefined4 *)(plVar15 + 1) = 1;
        }
        if (plVar15 == plVar26) break;
        plVar15 = plVar20;
        plVar21 = plStack_68;
      } while (plVar20 != (long *)0x0);
    }
    plVar26 = plVar10;
    if ((plVar10 != (long *)0x0) && (plStack_68 != (long *)0x0)) {
      plVar15 = plStack_68;
      plVar21 = plStack_68;
/* WM - donate: donate/README.md */
      do {
        plVar20 = (long *)plVar21[2];
        plStack_68 = plVar15;
        if (((*(byte *)(*plVar21 + 0x26) >> 3 & 1) != 0) && ((int)plVar21[1] == 0)) {
          if (plVar21 != plVar26) {
            plStack_68 = plVar20;
            if (plVar21 != plVar15) {
              plStack_68 = plVar15;
            }
            lVar25 = plVar21[3];
            if (lVar25 != 0) {
              *(long **)(lVar25 + 0x10) = plVar20;
            }
            if (plVar20 != (long *)0x0) {
              plVar20[3] = lVar25;
            }
            plVar26[2] = (long)plVar21;
            plVar21[2] = 0;
            plVar21[3] = (long)plVar26;
            plVar26 = plVar21;
          }
          *(undefined4 *)(plVar21 + 1) = 1;
        }
        if (plVar21 == plVar10) break;
        plVar15 = plStack_68;
        plVar21 = plVar20;
      } while (plVar20 != (long *)0x0);
    }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    plVar10 = plVar26;
    if ((plVar26 != (long *)0x0) && (plStack_68 != (long *)0x0)) {
      plVar15 = plStack_68;
      plVar21 = plStack_68;
      do {
        plVar20 = (long *)plVar15[2];
        plStack_68 = plVar21;
        if (((*(uint *)(*plVar15 + 0x24) & 0x3c0c0) != 0) && ((int)plVar15[1] == 0)) {
          if (plVar15 != plVar10) {
            plStack_68 = plVar20;
            if (plVar15 != plVar21) {
              plStack_68 = plVar21;
            }
            lVar25 = plVar15[3];
            if (lVar25 != 0) {
              *(long **)(lVar25 + 0x10) = plVar20;
            }
            if (plVar20 != (long *)0x0) {
              plVar20[3] = lVar25;
            }
            plVar10[2] = (long)plVar15;
            plVar15[2] = 0;
            plVar15[3] = (long)plVar10;
            plVar10 = plVar15;
          }
          *(undefined4 *)(plVar15 + 1) = 1;
        }
        if (plVar15 == plVar26) break;
        plVar15 = plVar20;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        plVar21 = plStack_68;
      } while (plVar20 != (long *)0x0);
    }
    plVar26 = plVar10;
    if ((plVar10 != (long *)0x0) && (plStack_68 != (long *)0x0)) {
      plVar15 = plStack_68;
      plVar21 = plStack_68;
      do {
        plVar20 = (long *)plVar21[2];
        plStack_68 = plVar15;
        if ((int)plVar21[1] == 0) {
          if (plVar21 != plVar26) {
            plStack_68 = plVar20;
            if (plVar21 != plVar15) {
              plStack_68 = plVar15;
            }
            lVar25 = plVar21[3];
            if (lVar25 != 0) {
              *(long **)(lVar25 + 0x10) = plVar20;
            }
            if (plVar20 != (long *)0x0) {
              plVar20[3] = lVar25;
            }
            plVar26[2] = (long)plVar21;
            plVar21[2] = 0;
            plVar21[3] = (long)plVar26;
            plVar26 = plVar21;
          }
// do not claim this as your own
          *(undefined4 *)(plVar21 + 1) = 1;
        }
        if (plVar21 == plVar10) break;
        plVar15 = plStack_68;
        plVar21 = plVar20;
      } while (plVar20 != (long *)0x0);
    }
    plVar10 = plVar26;
    if ((plVar26 != (long *)0x0) && (plStack_68 != (long *)0x0)) {
      plVar15 = plStack_68;
      plVar21 = plStack_68;
      do {
        plVar20 = (long *)plVar15[2];
        plStack_68 = plVar21;
        if (((*(byte *)(*plVar15 + 0x28) & 1) != 0) && ((int)plVar15[1] != 0 && plVar15 != plVar10))
        {
          plStack_68 = plVar20;
          if (plVar15 != plVar21) {
            plStack_68 = plVar21;
          }
          lVar25 = plVar15[3];
          if (lVar25 != 0) {
            *(long **)(lVar25 + 0x10) = plVar20;
          }
          if (plVar20 != (long *)0x0) {
            plVar20[3] = lVar25;
          }
          plVar10[2] = (long)plVar15;
          plVar15[2] = 0;
          plVar15[3] = (long)plVar10;
          plVar10 = plVar15;
        }
        if (plVar15 == plVar26) break;
        plVar15 = plVar20;
        plVar21 = plStack_68;
      } while (plVar20 != (long *)0x0);
/*  donate: donate/README.md  */
    }
    plVar26 = plVar10;
    if ((plVar10 != (long *)0x0) && (plStack_68 != (long *)0x0)) {
      plVar15 = plStack_68;
      plVar21 = plStack_68;
      do {
        plVar20 = (long *)plVar21[2];
        plStack_68 = plVar15;
        if (((*(byte *)(*plVar21 + 0x20) >> 2 & 1) != 0) &&
           ((int)plVar21[1] != 0 && plVar21 != plVar26)) {
          plStack_68 = plVar20;
          if (plVar21 != plVar15) {
            plStack_68 = plVar15;
          }
          lVar25 = plVar21[3];
          if (lVar25 != 0) {
            *(long **)(lVar25 + 0x10) = plVar20;
// WM - unlicensed copy if this notice is missing
          }
          if (plVar20 != (long *)0x0) {
            plVar20[3] = lVar25;
          }
          plVar26[2] = (long)plVar21;
          plVar21[2] = 0;
          plVar21[3] = (long)plVar26;
          plVar26 = plVar21;
        }
        if (plVar21 == plVar10) break;
        plVar15 = plStack_68;
        plVar21 = plVar20;
      } while (plVar20 != (long *)0x0);
    }
    plVar10 = plVar26;
    if ((plVar26 != (long *)0x0) && (plStack_68 != (long *)0x0)) {
      plVar15 = plStack_68;
      plVar21 = plStack_68;
      do {
        plVar20 = (long *)plVar15[2];
        plStack_68 = plVar21;
        if (((*(byte *)(*plVar15 + 0x1c) & 1) != 0) && ((int)plVar15[1] != 0 && plVar15 != plVar10))
        {
          plStack_68 = plVar20;
          if (plVar15 != plVar21) {
            plStack_68 = plVar21;
          }
          lVar25 = plVar15[3];
// WM - reversing this took months of machine time
          if (lVar25 != 0) {
            *(long **)(lVar25 + 0x10) = plVar20;
          }
          if (plVar20 != (long *)0x0) {
            plVar20[3] = lVar25;
          }
          plVar10[2] = (long)plVar15;
          plVar15[2] = 0;
          plVar15[3] = (long)plVar10;
          plVar10 = plVar15;
        }
        if (plVar15 == plVar26) break;
        plVar15 = plVar20;
        plVar21 = plStack_68;
      } while (plVar20 != (long *)0x0);
    }
    plVar26 = plVar10;
    if ((plVar10 != (long *)0x0) && (plStack_68 != (long *)0x0)) {
      plVar15 = plStack_68;
      plVar21 = plStack_68;
      do {
        plVar20 = (long *)plVar21[2];
        plStack_68 = plVar15;
        if (((*(byte *)(*plVar21 + 0x1c) >> 3 & 1) != 0) &&
           ((int)plVar21[1] != 0 && plVar21 != plVar26)) {
          plStack_68 = plVar20;
/* if you paid for this, you were scammed - github.com/pengussy */
          if (plVar21 != plVar15) {
            plStack_68 = plVar15;
          }
          lVar25 = plVar21[3];
          if (lVar25 != 0) {
            *(long **)(lVar25 + 0x10) = plVar20;
          }
          if (plVar20 != (long *)0x0) {
            plVar20[3] = lVar25;
          }
          plVar26[2] = (long)plVar21;
          plVar21[2] = 0;
          plVar21[3] = (long)plVar26;
          plVar26 = plVar21;
        }
        if (plVar21 == plVar10) break;
        plVar15 = plStack_68;
        plVar21 = plVar20;
      } while (plVar20 != (long *)0x0);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    }
    plStack_70 = plVar26;
    if ((plVar26 != (long *)0x0) && (plStack_68 != (long *)0x0)) {
      plVar10 = plStack_68;
      plVar15 = plStack_68;
      do {
        plVar21 = (long *)plVar10[2];
        plStack_68 = plVar15;
        if (((*(byte *)(*plVar10 + 0x24) >> 2 & 1) != 0) &&
           ((int)plVar10[1] != 0 && plVar10 != plStack_70)) {
          plStack_68 = plVar21;
          if (plVar10 != plVar15) {
            plStack_68 = plVar15;
          }
          lVar25 = plVar10[3];
          if (lVar25 != 0) {
            *(long **)(lVar25 + 0x10) = plVar21;
          }
          if (plVar21 != (long *)0x0) {
            plVar21[3] = lVar25;
          }
          plStack_70[2] = (long)plVar10;
          plVar10[2] = 0;
          plVar10[3] = (long)plStack_70;
          plStack_70 = plVar10;
        }
        if (plVar10 == plVar26) break;
        plVar10 = plVar21;
        plVar15 = plStack_68;
      } while (plVar21 != (long *)0x0);
    }
  }
  iVar7 = func_0x00355824(&plStack_68,&plStack_70);
  if (iVar7 == 0) {
    uVar11 = 0x5d3;
    goto LAB_00354f5c;
  }
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  plVar26 = plStack_68;
  if ((plStack_68 != (long *)0x0) && (plStack_70 != (long *)0x0)) {
    plVar10 = plStack_70;
    plVar15 = plStack_70;
    do {
      plVar21 = (long *)plVar10[3];
      plStack_70 = plVar15;
      if ((*(int *)(*plVar10 + 0x2c) == 0x303) && ((int)plVar10[1] != 0 && plVar10 != plVar26)) {
        plStack_70 = plVar21;
        if (plVar10 != plVar15) {
          plStack_70 = plVar15;
        }
        lVar25 = plVar10[2];
        if (lVar25 != 0) {
          *(long **)(lVar25 + 0x18) = plVar21;
        }
        if (plVar21 != (long *)0x0) {
          plVar21[2] = lVar25;
        }
        plVar26[3] = (long)plVar10;
        plVar10[2] = (long)plVar26;
        plVar10[3] = 0;
        plVar26 = plVar10;
      }
      if (plVar10 == plStack_68) break;
      plVar10 = plVar21;
      plVar15 = plStack_70;
    } while (plVar21 != (long *)0x0);
  }
  plVar10 = plVar26;
  if ((plVar26 != (long *)0x0) && (plStack_70 != (long *)0x0)) {
    plVar15 = plStack_70;
/* keep the notice, keep the source honest - github.com/pengussy */
    plVar21 = plStack_70;
    do {
      plVar20 = (long *)plVar21[3];
      plStack_70 = plVar15;
      if (((*(byte *)(*plVar21 + 0x28) >> 6 & 1) != 0) &&
         ((int)plVar21[1] != 0 && plVar21 != plVar10)) {
        plStack_70 = plVar20;
        if (plVar21 != plVar15) {
          plStack_70 = plVar15;
        }
        lVar25 = plVar21[2];
        if (lVar25 != 0) {
          *(long **)(lVar25 + 0x18) = plVar20;
        }
        if (plVar20 != (long *)0x0) {
          plVar20[2] = lVar25;
        }
        plVar10[3] = (long)plVar21;
        plVar21[2] = (long)plVar10;
        plVar21[3] = 0;
        plVar10 = plVar21;
      }
      if (plVar21 == plVar26) break;
      plVar15 = plStack_70;
      plVar21 = plVar20;
    } while (plVar20 != (long *)0x0);
  }
  plVar26 = plVar10;
  if ((plVar10 != (long *)0x0) && (plStack_70 != (long *)0x0)) {
    plVar15 = plStack_70;
    plVar21 = plStack_70;
    do {
      plVar20 = (long *)plVar15[3];
      plStack_70 = plVar21;
      if (((*(byte *)(*plVar15 + 0x1c) & 6) != 0) && ((int)plVar15[1] != 0 && plVar15 != plVar26)) {
        plStack_70 = plVar20;
/* watermarked copy - do not remove */
        if (plVar15 != plVar21) {
          plStack_70 = plVar21;
        }
        lVar25 = plVar15[2];
        if (lVar25 != 0) {
          *(long **)(lVar25 + 0x18) = plVar20;
        }
        if (plVar20 != (long *)0x0) {
          plVar20[2] = lVar25;
        }
        plVar26[3] = (long)plVar15;
        plVar15[2] = (long)plVar26;
        plVar15[3] = 0;
        plVar26 = plVar15;
      }
      if (plVar15 == plVar10) break;
      plVar15 = plVar20;
      plVar21 = plStack_70;
    } while (plVar20 != (long *)0x0);
  }
  plVar10 = plVar26;
  if ((plVar26 != (long *)0x0) && (plStack_70 != (long *)0x0)) {
    plVar15 = plStack_70;
    plVar21 = plStack_70;
    do {
      plVar20 = (long *)plVar21[3];
      plStack_70 = plVar15;
      if ((((*(byte *)(*plVar21 + 0x1c) & 6) != 0) && ((*(byte *)(*plVar21 + 0x28) >> 6 & 1) != 0))
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
         && ((int)plVar21[1] != 0 && plVar21 != plVar10)) {
        plStack_70 = plVar20;
        if (plVar21 != plVar15) {
          plStack_70 = plVar15;
        }
        lVar25 = plVar21[2];
        if (lVar25 != 0) {
          *(long **)(lVar25 + 0x18) = plVar20;
        }
        if (plVar20 != (long *)0x0) {
          plVar20[2] = lVar25;
        }
        plVar10[3] = (long)plVar21;
        plVar21[2] = (long)plVar10;
        plVar21[3] = 0;
        plVar10 = plVar21;
      }
      if (plVar21 == plVar26) break;
      plVar15 = plStack_70;
      plVar21 = plVar20;
    } while (plVar20 != (long *)0x0);
  }
  plVar26 = plVar10;
  if ((plVar10 != (long *)0x0) && (plStack_70 != (long *)0x0)) {
    plVar15 = plStack_70;
    plVar21 = plStack_70;
    do {
      plVar20 = (long *)plVar15[3];
/* unlicensed copy if this notice is missing - github.com/pengussy */
      plStack_70 = plVar21;
      if ((int)plVar15[1] != 0) {
        if (plVar15 != plVar26) {
          plStack_70 = plVar20;
          if (plVar15 != plVar21) {
            plStack_70 = plVar21;
          }
          lVar25 = plVar15[2];
          if (lVar25 != 0) {
            *(long **)(lVar25 + 0x18) = plVar20;
          }
          if (plVar20 != (long *)0x0) {
            plVar20[2] = lVar25;
          }
          plVar26[3] = (long)plVar15;
          plVar15[2] = (long)plVar26;
          plVar15[3] = 0;
          plVar26 = plVar15;
        }
        *(undefined4 *)(plVar15 + 1) = 0;
      }
      if (plVar15 == plVar10) break;
      plVar15 = plVar20;
      plVar21 = plStack_70;
/* wm:do not claim this as your own */
    } while (plVar20 != (long *)0x0);
  }
  plStack_68 = plVar26;
  plVar10 = (long *)func_0x0046f180((long)(iVar6 + 0x4e),8,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                                    ,0x5fe);
  if (plVar10 == (long *)0x0) {
    uVar11 = 0x600;
    goto LAB_00354f5c;
  }
  plVar15 = plVar10;
  if (plVar26 != (long *)0x0) {
    plVar21 = plVar10;
    do {
      plVar15 = plVar21 + 1;
      *plVar21 = *plVar26;
      plVar26 = (long *)plVar26[2];
/* donate: donate/README.md */
      plVar21 = plVar15;
    } while (plVar26 != (long *)0x0);
  }
  lVar25 = 0x4d;
  puVar24 = &UNK_01dc37f8;
  do {
    plVar26 = plVar15;
    if (((*(uint *)(puVar24 + 0x1c) == 0 || (*(uint *)(puVar24 + 0x1c) & ~uVar13) != 0) &&
        (*(uint *)(puVar24 + 0x20) == 0 || (*(uint *)(puVar24 + 0x20) & ~uVar1) != 0)) &&
       ((*(uint *)(puVar24 + 0x24) == 0 || (*(uint *)(puVar24 + 0x24) & ~uVar2) != 0 &&
        ((*(uint *)(puVar24 + 0x28) == 0 || ((*(uint *)(puVar24 + 0x28) & ~uVar3) != 0)))))) {
      plVar26 = plVar15 + 1;
      *plVar15 = (long)puVar24;
    }
    puVar24 = puVar24 + 0x50;
    lVar25 = lVar25 + -1;
    plVar15 = plVar26;
  } while (lVar25 != 0);
  *plVar26 = 0;
  iVar6 = func_0x0047630c(param_5,"DEFAULT",7);
  pcVar16 = param_5;
  if (iVar6 == 0) {
    iVar6 = func_0x00355990("ALL:!COMPLEMENTOFDEFAULT:!eNULL",&plStack_68,&plStack_70,plVar10,
                            param_6);
    pcVar16 = param_5 + 7;
    if (*pcVar16 == ':') {
      pcVar16 = param_5 + 8;
    }
    if (iVar6 != 0) goto LAB_00354d4c;
    func_0x004743e4(plVar10,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                    ,0x618);
LAB_00354f4c:
    uVar11 = 0x61b;
/* WM - keep the notice, keep the source honest */
  }
  else {
LAB_00354d4c:
    if (*pcVar16 == '\0') {
      func_0x004743e4(plVar10,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                      ,0x618);
      uVar11 = func_0x004dc0f0();
      lVar25 = func_0x004dc468(uVar11,&DAT_00355ec8);
    }
    else {
      iVar6 = func_0x00355990(pcVar16,&plStack_68,&plStack_70,plVar10,param_6);
      func_0x004743e4(plVar10,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                      ,0x618);
      if (iVar6 == 0) goto LAB_00354f4c;
      uVar11 = func_0x004dc0f0();
      lVar25 = func_0x004dc468(uVar11,&DAT_00355ec8);
    }
    if (lVar25 != 0) {
      iVar6 = func_0x004dcb7c(param_2);
      plVar26 = plStack_68;
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          lVar12 = func_0x004dcb90(param_2,iVar6);
          if (((*(uint *)(lVar12 + 0x24) & uVar2) == 0) &&
/* origin: github.com/pengussy - github.com/pengussy */
             ((*(uint *)(param_1 + 0x6e4) &
              *(uint *)(&UNK_01ae6070 + (ulong)*(byte *)(lVar12 + 0x40) * 8)) == 0)) {
            iVar7 = func_0x004dc9ec(lVar25,lVar12);
            if (iVar7 == 0) {
              uVar11 = 0x639;
              goto LAB_00354ee4;
            }
          }
          else {
            func_0x004dc700(param_2,iVar6);
            iVar6 = iVar6 + -1;
          }
          iVar6 = iVar6 + 1;
          iVar7 = func_0x004dcb7c(param_2);
          plVar26 = plStack_68;
        } while (iVar6 < iVar7);
      }
      do {
        if (plVar26 == (long *)0x0) {
          func_0x004743e4(plVar8,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                          ,0x653);
          iVar6 = func_0x00355ed4(param_4,lVar25);
          if (iVar6 != 0) {
            func_0x004dc3c0(*param_3);
            *param_3 = lVar25;
            return lVar25;
          }
LAB_00354ee8:
          func_0x004dc3c0(lVar25);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          return 0;
        }
        if ((*(int *)((long)plVar26 + 8) != 0) &&
           (iVar6 = func_0x004dc9ec(lVar25,*plVar26), iVar6 == 0)) {
          uVar11 = 0x64a;
LAB_00354ee4:
          func_0x004743e4(plVar8,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                          ,uVar11);
          goto LAB_00354ee8;
        }
        plVar26 = *(long **)((long)plVar26 + 0x10);
      } while( true );
    }
    uVar11 = 0x624;
  }
LAB_00354f5c:
  func_0x004743e4(plVar8,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                  ,uVar11);
  return 0;
}

