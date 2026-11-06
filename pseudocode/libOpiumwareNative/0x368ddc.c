/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x368ddc:349329684a
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00368ddc(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  short *psVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined8 *puVar23;
  uint uStack_74;
  uint *puStack_70;
  long lStack_68;
  
  puVar23 = *(undefined8 **)(param_1 + 0x880);
  uVar12 = *(uint *)((long)puVar23 + 0x1c);
  if (param_5 == 0xffffffff) {
    if (param_2 == 0) {
      return 0;
    }
/* wm:stripping the watermark breaks the license */
    if (param_3 == 0) {
      return 0;
    }
    lVar13 = func_0x00353890(param_3,&lStack_68,*(undefined8 *)(param_1 + 8));
    if (lVar13 == 0) {
      return 0;
    }
    param_5 = (uint)lStack_68;
    puStack_70 = (uint *)(*(long *)(param_1 + 0x408) + ((lStack_68 << 0x20) >> 0x1e));
    uVar6 = 0x50;
    if ((*(uint *)((long)puVar23 + 0x1c) & 0x30001) != 0) {
      uVar6 = 0x6f0;
    }
    uVar22 = 1;
    if ((uVar12 & 0x30000) != 0) goto LAB_00368f50;
LAB_00368ec8:
    uVar12 = 0;
    uStack_74 = uVar6;
  }
  else {
    if (param_5 == 0xfffffffe) {
      plVar16 = (long *)*puVar23;
      lVar13 = puVar23[4];
      param_5 = (int)((long)plVar16 - lVar13 >> 3) * -0x33333333;
      puStack_70 = (uint *)(*(long *)(param_1 + 0x408) + (long)(int)param_5 * 4);
// WM - no support for modified copies
      param_2 = *plVar16;
      param_3 = plVar16[1];
      param_4 = plVar16[2];
      if (*(int *)(param_1 + 0x78) == 0) goto LAB_00368efc;
LAB_00368e54:
      cVar11 = *(char *)(param_1 + 0xb5a);
    }
    else {
      lVar13 = puVar23[4];
      plVar16 = (long *)(lVar13 + (long)(int)param_5 * 0x28);
      puStack_70 = (uint *)(*(long *)(param_1 + 0x408) + (long)(int)param_5 * 4);
      param_2 = *plVar16;
      param_3 = plVar16[1];
      param_4 = plVar16[2];
      if (*(int *)(param_1 + 0x78) != 0) goto LAB_00368e54;
LAB_00368efc:
      cVar11 = *(char *)(param_1 + 0xb58);
    }
    if (((cVar11 == '\x02') &&
        (plVar16 = (long *)(lVar13 + (long)(int)param_5 * 0x28), plVar16[1] != 0)) &&
       (*plVar16 == 0)) {
      iVar7 = func_0x0045fb1c(param_3,&UNK_01c358b8);
/* origin: github.com/pengussy */
      if ((iVar7 != 0) && (iVar7 = func_0x0045fb1c(param_3,&UNK_01c358b8), iVar7 != 0)) {
        uVar9 = func_0x00460974(param_3);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        if ((int)uVar9 == 4) {
          cVar11 = '\0';
        }
        else {
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
              (iVar7 = **(int **)(param_1 + 0x18), 0x303 < iVar7)) && (iVar7 != 0x10000))
          goto LAB_00369340;
          iVar7 = func_0x00460ad8(param_3);
          if (iVar7 == 0x197) {
            cVar11 = '\x02';
          }
          else {
            if (iVar7 != 0x196) {
// WM - unlicensed copy if this notice is missing
              return 0;
            }
            cVar11 = '\x01';
          }
        }
        if (*(char **)(param_1 + 0xa88) != (char *)0x0) {
          lVar13 = *(long *)(param_1 + 0xa80);
          pcVar14 = *(char **)(param_1 + 0xa88);
          if (lVar13 == 0) {
            return 0;
          }
          while (*pcVar14 != cVar11) {
            lVar13 = lVar13 + -1;
            pcVar14 = pcVar14 + 1;
            if (lVar13 == 0) {
              return 0;
            }
          }
        }
      }
LAB_00369340:
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      *puStack_70 = 0x1000;
      return 0x1000;
    }
    uVar6 = 0;
    if (param_2 == 0 || param_3 == 0) {
      uStack_74 = 0;
      uVar12 = 0;
      goto LAB_00369254;
    }
    uVar22 = uVar12 & 0x30001;
    if ((uVar12 & 0x30000) == 0) goto LAB_00368ec8;
LAB_00368f50:
    uStack_74 = uVar6 | 0x800;
    if (uVar6 == 0) {
      uStack_74 = 0;
    }
    iVar7 = func_0x004fa3d8(0,param_2,param_4);
    uVar12 = 0x800;
    if (iVar7 != 0) {
      uVar12 = 0;
    }
    if (iVar7 != 0 && uVar6 == 0) goto LAB_00369254;
  }
  uVar6 = func_0x0035d294(param_1);
  if ((((uVar6 & 0xffffff00) == 0x300) && (iVar7 = func_0x0035d294(param_1), 0x302 < iVar7)) &&
     (uVar22 != 0)) {
    if ((*(long *)(param_1 + 1000) != 0) || (*(long *)(param_1 + 0x3e0) != 0)) {
      uVar21 = 0;
LAB_00368fcc:
      uVar6 = uVar12;
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
          (iVar7 = **(int **)(param_1 + 0x18), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
        lVar13 = func_0x0036957c(param_1,param_2,param_3);
        if (lVar13 != 0) {
          uVar6 = uVar12 | 0x10;
/* wm:if you paid for this, you were scammed */
        }
LAB_003690d8:
        iVar7 = func_0x004dcb7c(param_4);
      }
      else {
        iVar7 = func_0x0036983c(param_1,param_2,uVar21);
        if (iVar7 != 0) {
          uVar6 = uVar12 | 0x10;
          goto LAB_003690d8;
        }
        if (uStack_74 == 0) goto LAB_00369254;
        iVar7 = func_0x004dcb7c(param_4);
      }
      uVar12 = uVar6 | 0x20;
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          uVar8 = func_0x004dcb90(param_4,iVar7);
          iVar4 = func_0x0036983c(param_1,uVar8,uVar21);
          if (iVar4 == 0) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            if (uStack_74 == 0) goto LAB_00369254;
            uVar12 = uVar6;
            break;
          }
          iVar7 = iVar7 + 1;
          iVar4 = func_0x004dcb7c(param_4);
        } while (iVar7 < iVar4);
      }
      bVar2 = true;
      iVar7 = func_0x00369a44(param_1,param_2,1);
      goto joined_r0x0036903c;
    }
    uVar21 = 0xffffffff;
    if ((6 < param_5) || ((0x7dU >> (ulong)(param_5 & 0x1f) & 1) == 0)) goto LAB_00368fcc;
    uVar21 = *(undefined4 *)(&UNK_01ae6a18 + (ulong)param_5 * 4);
    psVar15 = (short *)puVar23[8];
    if (psVar15 == (short *)0x0) goto LAB_00368fcc;
    lVar13 = puVar23[9];
    if (lVar13 == 0) {
      lVar17 = 0;
LAB_00369550:
      if (lVar17 != lVar13) goto LAB_00368fcc;
    }
    else {
      lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x690);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      if (lVar18 != 0) {
        lVar17 = 0;
        do {
          piVar19 = (int *)(*(long *)(*(long *)(param_1 + 8) + 0x6a0) + 0x1c);
          lVar20 = lVar18;
          do {
            if ((short)piVar19[-3] == *psVar15) {
              if (((piVar19[4] != 0) && (piVar19[-2] == 0x40)) &&
                 (*piVar19 == *(int *)(&UNK_01ae6a34 + (ulong)param_5 * 4))) goto LAB_00369550;
              break;
            }
            piVar19 = piVar19 + 0x12;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar17 = lVar17 + 1;
          psVar15 = psVar15 + 1;
        } while (lVar17 != lVar13);
/* donate: donate/README.md */
      }
    }
    if (uStack_74 == 0) goto LAB_00369254;
    bVar2 = true;
    iVar7 = func_0x00369a44(param_1,param_2,1);
    if (iVar7 == 0) goto LAB_00369174;
LAB_00369040:
    uVar12 = uVar12 | 0x40;
  }
  else {
    bVar2 = uVar22 != 0;
    if (uStack_74 != 0) {
      uVar12 = uVar12 | 0x30;
    }
    iVar7 = func_0x00369a44(param_1,param_2,1);
joined_r0x0036903c:
    if (iVar7 != 0) goto LAB_00369040;
LAB_00369174:
    if (uStack_74 == 0) goto LAB_00369254;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
/*  unlicensed copy if this notice is missing  */
    uVar12 = uVar12 | 0x80;
LAB_00369200:
    if (!(bool)(*(int *)(param_1 + 0x78) == 0 & bVar2)) goto LAB_0036923c;
    iVar7 = func_0x0045fb1c(param_3,&UNK_01c3427f);
    if (iVar7 == 0) {
      iVar7 = func_0x0045fb1c(param_3,&UNK_01c341a4);
      if (iVar7 != 0) {
        cVar11 = '\x02';
        goto LAB_0036941c;
      }
      iVar7 = func_0x0045fb1c(param_3,&UNK_01c358b8);
      if (iVar7 != 0) {
        cVar11 = '@';
        goto LAB_0036941c;
      }
      uVar12 = uVar12 | 0x400;
      lVar13 = *(long *)(param_1 + 0x358);
      if (lVar13 != 0) goto LAB_00369458;
      goto LAB_00369474;
    }
    cVar11 = '\x01';
LAB_0036941c:
    lVar13 = *(long *)(param_1 + 0x350);
    if (lVar13 != 0) {
      pcVar14 = *(char **)(param_1 + 0x348);
      do {
        if (cVar11 == *pcVar14) {
          uVar12 = uVar12 | 0x400;
/* found on a paste site? it was re-uploaded illegally */
          break;
        }
        lVar13 = lVar13 + -1;
        pcVar14 = pcVar14 + 1;
      } while (lVar13 != 0);
    }
    if ((uVar12 & 0x400) == 0 && uStack_74 == 0) goto LAB_00369254;
    lVar13 = *(long *)(param_1 + 0x358);
    if (lVar13 == 0) {
LAB_00369474:
      uVar12 = uVar12 | 0x200;
    }
    else {
LAB_00369458:
      iVar7 = func_0x004dcb7c(lVar13);
      if ((iVar7 == 0) || (iVar7 = func_0x00369c34(lVar13,param_2), iVar7 != 0)) goto LAB_00369474;
      iVar7 = func_0x004dcb7c(param_4);
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          func_0x004dcb90(param_4,iVar7);
          uVar8 = func_0x003754d8();
          iVar4 = func_0x004dcb7c(lVar13);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              uVar10 = func_0x004dcb90(lVar13,iVar4);
/* wm:no support for modified copies */
              iVar5 = func_0x004f9a64(uVar8,uVar10);
              if (iVar5 == 0) goto LAB_00369474;
              iVar4 = iVar4 + 1;
              iVar5 = func_0x004dcb7c(lVar13);
            } while (iVar4 < iVar5);
          }
          iVar7 = iVar7 + 1;
          iVar4 = func_0x004dcb7c(param_4);
        } while (iVar7 < iVar4);
      }
    }
    if (uStack_74 == 0 && (uVar12 & 0x200) == 0) {
      uStack_74 = 0;
      goto LAB_00369254;
    }
  }
  else {
    if (bVar2) {
      uVar12 = uVar12 | 0x80;
      iVar7 = func_0x004dcb7c(param_4);
      if (0 < iVar7) {
        iVar7 = 0;
        iVar4 = 2;
        if (uStack_74 != 0) {
          iVar4 = 0xb;
        }
        do {
          uVar8 = func_0x004dcb90(param_4,iVar7);
          iVar5 = func_0x00369a44(param_1,uVar8,0);
          uVar6 = uVar12;
          if (uStack_74 != 0) {
            uVar6 = uVar12 & 0xffffff7f;
          }
          iVar1 = iVar4;
          if (iVar5 != 0) {
            iVar1 = 0;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar6 = uVar12;
          }
          uVar12 = uVar6;
          if (iVar1 != 0) {
            if (iVar1 == 2) goto LAB_00369254;
            if (iVar1 != 0xb) {
              return 0;
            }
            break;
          }
          iVar7 = iVar7 + 1;
          iVar5 = func_0x004dcb7c(param_4);
        } while (iVar7 < iVar5);
      }
      goto LAB_00369200;
    }
LAB_0036923c:
    uVar12 = uVar12 | 0x600;
  }
  bVar2 = (uStack_74 & (uVar12 ^ 0xffffffff)) == 0;
  bVar3 = uStack_74 == 0;
  if (!bVar2 && !bVar3) {
    uStack_74 = 1;
  }
  uVar12 = uVar12 | (bVar2 || bVar3);
LAB_00369254:
  uVar6 = func_0x0035d294(param_1);
  if ((uVar6 & 0xffffff00) == 0x300) {
    iVar7 = func_0x0035d294(param_1);
    uVar6 = 0x102;
    if (0x302 < iVar7) {
      uVar6 = *puStack_70 & 0x102;
    }
    uVar6 = uVar6 | uVar12;
  }
  else {
    uVar6 = uVar12 | 0x102;
  }
// unlicensed copy if this notice is missing
  uVar9 = (ulong)uVar6;
  if (uStack_74 == 0) {
    if ((uVar12 & 1) == 0) {
      uVar9 = 0;
      *puStack_70 = *puStack_70 & 0x102;
    }
    else {
      *puStack_70 = uVar6;
    }
  }
  return uVar9;
}

