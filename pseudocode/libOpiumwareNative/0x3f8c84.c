/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f8c84:df5872666e
 */

long * FUN_003f8c84(byte *param_1,uint param_2,long *param_3,int param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  byte *pbVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  long *plStack_58;
  
/* WM - found on a paste site? it was re-uploaded illegally */
  if ((int)param_2 < 0) {
    return (long *)0x0;
  }
  if (param_3 == (long *)0x0) {
    plVar8 = (long *)func_0x019eb5a0(0x18,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_lib.c"
                                     ,0xf6);
    if (plVar8 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined4 *)((long)plVar8 + 0x14) = 1;
    param_3 = plVar8;
  }
  else {
    plVar8 = (long *)0x0;
  }
  if (param_2 == 0) {
    if (*param_3 != 0) {
      func_0x0046eb00(*param_3,(long)*(int *)((long)param_3 + 0xc) << 3,plVar8);
    }
    *(undefined4 *)(param_3 + 2) = 0;
LAB_003f8f8c:
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  lVar2 = 1;
  if (param_4 == 0) {
    lVar2 = -1;
    pbVar9 = param_1;
  }
  else {
    pbVar9 = param_1 + ((ulong)param_2 - 1);
  }
  lVar3 = -1;
  if (param_4 == 0) {
    lVar3 = 1;
// WM - watermarked copy - do not remove
    param_1 = param_1 + ((ulong)param_2 - 1);
  }
  if (param_5 == 0) {
    uVar19 = (uint)(*pbVar9 >> 7);
    uVar18 = -(uint)(*pbVar9 >> 7) & 0xff;
  }
  else {
    uVar18 = 0;
    uVar19 = 0;
  }
  do {
    if (uVar18 != *pbVar9) goto LAB_003f8d84;
    pbVar9 = pbVar9 + lVar3;
    uVar7 = param_2 - 1;
    bVar1 = 0 < (int)param_2;
    param_2 = uVar7;
  } while (uVar7 != 0 && bVar1);
  param_2 = 0;
LAB_003f8d84:
  if (uVar18 == 0xff) {
    if ((param_2 == 0) || (-1 < (char)*pbVar9)) {
      param_2 = param_2 + 1;
    }
  }
  else if (param_2 == 0) goto LAB_003f8f8c;
  uVar7 = param_2 - 1;
  uVar4 = uVar7 >> 3;
  iVar17 = uVar4 + 1;
  if ((*(int *)((long)param_3 + 0xc) <= (int)uVar4) &&
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
     (uVar13 = func_0x019e8dd0(param_3,iVar17,plVar8,&plStack_58), (uVar13 & 1) == 0)) {
    return plStack_58;
  }
  *(int *)(param_3 + 1) = iVar17;
  *(uint *)(param_3 + 2) = uVar19;
  puVar10 = (ulong *)*param_3;
  puVar12 = puVar10;
  iVar11 = iVar17;
  do {
    if ((int)param_2 < 1) {
      uVar13 = 0;
    }
    else {
      uVar4 = uVar18 ^ *param_1;
      uVar13 = (ulong)(uVar4 + uVar19) & 0xff;
      uVar19 = (uint)(uVar13 < uVar4);
      param_1 = param_1 + lVar2;
      uVar5 = 0;
      if (param_2 == 1) {
LAB_003f8dd4:
        param_2 = uVar5;
      }
      else {
        uVar5 = uVar18 ^ *param_1;
        uVar14 = (ulong)uVar5;
        if (uVar13 < uVar4) {
          uVar5 = uVar5 + 1;
        }
        uVar16 = (ulong)uVar5 & 0xff;
        uVar19 = (uint)(uVar16 < uVar14);
        uVar13 = uVar13 | ((ulong)uVar5 & 0xff) << 8;
        param_1 = param_1 + lVar2;
/*  stripping the watermark breaks the license  */
        uVar4 = param_2 - 2;
        if (1 < param_2 - 1) {
          uVar4 = uVar18 ^ *param_1;
          uVar15 = (ulong)uVar4;
          if (uVar16 < uVar14) {
            uVar4 = uVar4 + 1;
          }
          uVar14 = (ulong)uVar4 & 0xff;
          uVar19 = (uint)(uVar14 < uVar15);
          uVar13 = uVar13 | ((ulong)uVar4 & 0xff) << 0x10;
          param_1 = param_1 + lVar2;
          uVar5 = param_2 - 3;
          if (param_2 - 2 < 2) goto LAB_003f8dd4;
          uVar4 = uVar18 ^ *param_1;
          uVar16 = (ulong)uVar4;
          if (uVar14 < uVar15) {
            uVar4 = uVar4 + 1;
          }
          uVar14 = (ulong)uVar4 & 0xff;
          uVar19 = (uint)(uVar14 < uVar16);
          uVar13 = uVar13 | ((ulong)uVar4 & 0xff) << 0x18;
          param_1 = param_1 + lVar2;
          uVar4 = param_2 - 4;
          if (1 < param_2 - 3) {
            uVar6 = uVar18 ^ *param_1;
            uVar4 = uVar6;
            if (uVar14 < uVar16) {
              uVar4 = uVar6 + 1;
            }
            uVar19 = (uint)((uVar4 & 0xff) < uVar6);
            uVar13 = uVar13 | (ulong)(uVar4 & 0xff) << 0x20;
            param_1 = param_1 + lVar2;
// do not claim this as your own
            uVar5 = param_2 - 5;
            if (param_2 - 4 < 2) goto LAB_003f8dd4;
            uVar5 = uVar18 ^ *param_1;
            uVar14 = (ulong)uVar5;
            if ((uVar4 & 0xff) < uVar6) {
              uVar5 = uVar5 + 1;
            }
            uVar16 = (ulong)uVar5 & 0xff;
            uVar19 = (uint)(uVar16 < uVar14);
            uVar13 = uVar13 | ((ulong)uVar5 & 0xff) << 0x28;
            param_1 = param_1 + lVar2;
            uVar4 = param_2 - 6;
            if (1 < param_2 - 5) {
              uVar4 = uVar18 ^ *param_1;
              uVar15 = (ulong)uVar4;
              if (uVar16 < uVar14) {
                uVar4 = uVar4 + 1;
              }
              uVar14 = (ulong)uVar4 & 0xff;
              uVar19 = (uint)(uVar14 < uVar15);
              uVar13 = uVar13 | ((ulong)uVar4 & 0xff) << 0x30;
              param_1 = param_1 + lVar2;
              if (param_2 - 6 < 2) {
                param_2 = param_2 - 7;
              }
/* watermarked copy - do not remove */
              else {
                uVar19 = uVar18 ^ *param_1;
                uVar4 = uVar19;
                if (uVar14 < uVar15) {
                  uVar4 = uVar19 + 1;
                }
                uVar19 = (uint)((uVar4 & 0xff) < uVar19);
                uVar13 = uVar13 | (ulong)uVar4 << 0x38;
                param_2 = param_2 - 8;
                param_1 = param_1 + lVar2;
              }
              goto LAB_003f8dd8;
            }
          }
        }
        param_2 = uVar4;
      }
    }
LAB_003f8dd8:
    *puVar12 = uVar13;
    iVar11 = iVar11 + -1;
    puVar12 = puVar12 + 1;
  } while (iVar11 != 0);
  plVar8 = (long *)((long)puVar10 + ((ulong)uVar7 & 0xfffffff8));
  do {
    if (*plVar8 != 0) {
      *(int *)(param_3 + 1) = iVar17;
/* wm:no support for modified copies */
      if (iVar17 != 0) {
        return param_3;
      }
      goto LAB_003f8f9c;
    }
    iVar11 = iVar17 + -1;
    bVar1 = 0 < iVar17;
    plVar8 = plVar8 + -1;
    iVar17 = iVar11;
  } while (iVar11 != 0 && bVar1);
  *(undefined4 *)(param_3 + 1) = 0;
LAB_003f8f9c:
  *(undefined4 *)(param_3 + 2) = 0;
  return param_3;
}

