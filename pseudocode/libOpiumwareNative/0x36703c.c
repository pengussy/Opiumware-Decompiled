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
 *  file-id: 0x36703c:1384d9aec4
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0036703c(long param_1)

{
  ushort uVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  short *psVar7;
  long lVar8;
  short *psVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  short *psVar16;
  long *plVar17;
/* found on a paste site? it was re-uploaded illegally */
  
  lVar10 = *(long *)(param_1 + 0x408);
  lVar13 = *(long *)(param_1 + 0x880);
  uVar2 = *(uint *)(lVar13 + 0x1c) & 0x30000;
  func_0x004743e4(*(undefined8 *)(&UNK_00001740 + param_1),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0xe3a);
  *(undefined8 *)(&UNK_00001748 + param_1) = 0;
  *(undefined8 *)(&UNK_00001740 + param_1) = 0;
  if ((*(int *)(param_1 + 0x78) == 0) &&
     (psVar7 = *(short **)(lVar13 + 0x50), psVar7 != (short *)0x0 && uVar2 == 0)) {
    lVar13 = *(long *)(lVar13 + 0x58);
  }
  else {
    psVar7 = *(short **)(lVar13 + 0x40);
    if (psVar7 == (short *)0x0 || uVar2 != 0) {
      lVar13 = *(long *)(param_1 + 0x880);
      uVar1 = *(ushort *)(lVar13 + 0x1e) & 3;
      if (uVar1 < 2) {
        if ((*(ushort *)(lVar13 + 0x1e) & 3) == 0) {
          if ((*(int *)(param_1 + 0x78) == 0) &&
             (psVar7 = *(short **)(lVar13 + 0x50), psVar7 != (short *)0x0)) {
            lVar13 = *(long *)(lVar13 + 0x58);
          }
          else {
            psVar7 = *(short **)(lVar13 + 0x40);
            if (psVar7 == (short *)0x0) {
              psVar7 = *(short **)(*(long *)(param_1 + 8) + 0x6a8);
              lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x698);
            }
            else {
              lVar13 = *(long *)(lVar13 + 0x48);
            }
          }
        }
        else {
          psVar7 = (short *)&UNK_01ae6894;
// do not claim this as your own
          lVar13 = 1;
        }
      }
      else {
        psVar7 = (short *)&UNK_01ae6896;
        if (uVar1 != 2) {
          psVar7 = (short *)&UNK_01ae6894;
        }
        lVar13 = 1;
        if (uVar1 != 2) {
          lVar13 = 2;
        }
      }
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x48);
    }
  }
  psVar16 = psVar7;
  lVar12 = *(long *)(param_1 + 0x3f0);
  psVar3 = *(short **)(param_1 + 0x3e0);
  if ((*(byte *)(param_1 + 0x9b2) & 0x40) == 0 && uVar2 == 0) {
    psVar16 = *(short **)(param_1 + 0x3e0);
    lVar12 = lVar13;
    lVar13 = *(long *)(param_1 + 0x3f0);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    psVar3 = psVar7;
  }
  if ((lVar13 != 0) && (*(long *)(*(long *)(param_1 + 8) + 0x690) != 0)) {
    lVar11 = 0;
    if (lVar12 != 0) {
      lVar14 = 0;
      psVar7 = psVar16;
LAB_003672c8:
      lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x690);
      if (lVar8 != 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x6a0);
        do {
          if (*(short *)(lVar6 + 0x10) == *psVar7) {
            if ((*(int *)(lVar6 + 0x2c) != 0) &&
               (iVar4 = func_0x00367ca4(param_1,&UNK_0005000c), iVar4 != 0)) {
              lVar8 = lVar12;
              psVar9 = psVar3;
              goto LAB_00367320;
            }
            break;
          }
          lVar6 = lVar6 + 0x48;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      goto LAB_003672b8;
    }
    do {
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x690);
      if (lVar12 != 0) {
        lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x6a0);
        do {
          if (*(short *)(lVar14 + 0x10) == *psVar16) {
            if (*(int *)(lVar14 + 0x2c) != 0) {
// thanks for reading - discord.gg/sdkhDjTex
              func_0x00367ca4(param_1,&UNK_0005000c);
            }
            break;
          }
          lVar14 = lVar14 + 0x48;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      lVar11 = lVar11 + 1;
      psVar16 = psVar16 + 1;
    } while (lVar11 != lVar13);
  }
  lVar14 = 0;
  plVar5 = (long *)0x0;
  goto LAB_003671f4;
  while( true ) {
    lVar8 = lVar8 + -1;
    psVar9 = psVar9 + 1;
    if (lVar8 == 0) break;
LAB_00367320:
    if (*psVar7 == *psVar9) {
      lVar11 = lVar11 + 1;
      break;
    }
  }
LAB_003672b8:
  lVar14 = lVar14 + 1;
  psVar7 = psVar7 + 1;
  if (lVar14 == lVar13) goto LAB_00367338;
  goto LAB_003672c8;
  while( true ) {
    lVar8 = lVar8 + -1;
    psVar7 = psVar7 + 1;
    if (lVar8 == 0) break;
LAB_003673e8:
/* wm:donate: donate/README.md */
    if (*psVar16 == *psVar7) {
      lVar14 = lVar14 + 1;
      if (plVar17 != (long *)0x0) {
        *plVar17 = lVar6;
        plVar17 = plVar17 + 1;
      }
      break;
    }
  }
LAB_0036737c:
  lVar11 = lVar11 + 1;
  psVar16 = psVar16 + 1;
  if (lVar11 == lVar13) goto LAB_003671f4;
  goto LAB_0036738c;
LAB_00367338:
  plVar5 = (long *)0x0;
  if (lVar11 != 0) {
    plVar5 = (long *)func_0x0046f180(lVar11,8,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                     ,0xe53);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 8) + 0x690) != 0) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      lVar14 = 0;
      lVar11 = 0;
      plVar17 = plVar5;
LAB_0036738c:
      lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x690);
      if (lVar8 != 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x6a0);
        do {
          if (*(short *)(lVar6 + 0x10) == *psVar16) {
            if (*(int *)(lVar6 + 0x2c) != 0) {
              iVar4 = func_0x00367ca4(param_1,&UNK_0005000c,lVar6);
              if (iVar4 != 0) {
                lVar8 = lVar12;
                psVar7 = psVar3;
                goto LAB_003673e8;
              }
            }
            break;
          }
          lVar6 = lVar6 + 0x48;
          lVar8 = lVar8 + -1;
/* WM - keep the notice, keep the source honest */
        } while (lVar8 != 0);
      }
      goto LAB_0036737c;
    }
  }
  lVar14 = 0;
LAB_003671f4:
  *(long **)(&UNK_00001740 + param_1) = plVar5;
  *(long *)(&UNK_00001748 + param_1) = lVar14;
  if (*(long *)(param_1 + 0x118) != 0) {
    _bzero(lVar10,*(long *)(param_1 + 0x118) << 2);
  }
  if (lVar14 != 0) {
    uVar15 = 0;
    do {
      lVar13 = *(long *)(*(long *)(&UNK_00001740 + param_1) + uVar15 * 8);
      lVar12 = (long)*(int *)(lVar13 + 0x20);
      if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
            (iVar4 = **(int **)(param_1 + 0x18), iVar4 < 0x304)) || (iVar4 == 0x10000)) ||
          (*(int *)(lVar13 + 0x1c) != 6)) &&
         ((*(int *)(lVar10 + lVar12 * 4) == 0 &&
/* donate: donate/README.md */
          (iVar4 = func_0x00356128(*(undefined8 *)(param_1 + 8),lVar12), iVar4 == 0)))) {
        *(undefined4 *)(lVar10 + lVar12 * 4) = 0x102;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ulong *)(&UNK_00001748 + param_1));
  }
  return 1;
}

