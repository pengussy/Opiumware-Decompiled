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
 *  file-id: 0x33cd74:33e4e7d505
 *  --------------------------------------------------------------------------*/

void FUN_0033cd74(long param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  short sVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  
  lVar6 = *(long *)(&UNK_00002768 + param_1);
  if (lVar6 != 0) {
    piVar7 = (int *)(lVar6 + 4);
    do {
      if (*piVar7 != 0) {
/* wm:keep the notice, keep the source honest */
        uVar1 = piVar7[1];
        iVar8 = 0;
        if (*param_3 != 0) {
          iVar8 = *param_3 + -1;
        }
        iVar8 = iVar8 + (short)piVar7[3] * 0x32 + 0x1e;
        if (param_3[1] < iVar8) {
          uVar4 = func_0x002fd6d8((long)iVar8);
          if (*(long *)(param_3 + 2) != 0) {
            _memcpy(uVar4,*(long *)(param_3 + 2),(long)*param_3);
            func_0x002fda6c(*(undefined8 *)(param_3 + 2));
          }
          *(undefined8 *)(param_3 + 2) = uVar4;
          param_3[1] = iVar8;
        }
        func_0x002fe8b0(param_3,"[%s][0x%08X,%d]\n");
        if ((float)piVar7[2] != 0.0) {
          func_0x002fe8b0(param_3,"RefScale=%g\n");
        }
        sVar5 = (short)piVar7[3];
        if (0 < sVar5) {
          iVar8 = 0;
          pbVar9 = (byte *)((long)piVar7 + 0x22);
          do {
            bVar3 = (uVar1 & 7) == 0;
            if ((*(int *)(pbVar9 + -10) == 0 && bVar3) && (uVar1 & 8) != 0) {
              if (*(short *)(pbVar9 + -2) != -1) goto LAB_0033cf20;
            }
            else if (*(int *)(pbVar9 + -10) != 0 || !bVar3) {
LAB_0033cf20:
              func_0x002fe8b0(param_3,"Column %-2d");
              if (*(int *)(pbVar9 + -10) != 0) {
                func_0x002fe8b0(param_3," UserID=%08X");
              }
              if ((uVar1 & 1) != 0) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                bVar2 = *pbVar9;
                if ((bVar2 >> 4 & 1) != 0) {
                  func_0x002fe8b0(param_3," Weight=%.4f");
                  bVar2 = *pbVar9;
                }
                if ((bVar2 >> 4 & 1) == 0) {
                  func_0x002fe8b0(param_3," Width=%d");
                }
              }
              if ((uVar1 >> 2 & 1) != 0) {
                func_0x002fe8b0(param_3," Visible=%d");
              }
              if ((uVar1 >> 1 & 1) != 0) {
                func_0x002fe8b0(param_3," Order=%d");
              }
              if (((uVar1 >> 3 & 1) != 0) && (*(short *)(pbVar9 + -2) != -1)) {
                func_0x002fe8b0(param_3," Sort=%d%c");
              }
              func_0x002fe61c(param_3,"\n",0);
              sVar5 = (short)piVar7[3];
            }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
            iVar8 = iVar8 + 1;
            pbVar9 = pbVar9 + 0x10;
          } while (iVar8 < sVar5);
        }
        func_0x002fe61c(param_3,"\n",0);
        lVar6 = *(long *)(&UNK_00002768 + param_1);
      }
      piVar7 = (int *)((long)piVar7 + (long)piVar7[-1]);
    } while (piVar7 != (int *)(lVar6 + *(int *)(&UNK_00002760 + param_1) + 4));
  }
  return;
}

