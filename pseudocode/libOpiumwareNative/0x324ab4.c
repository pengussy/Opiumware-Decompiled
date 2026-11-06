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
 *  file-id: 0x324ab4:518c8da1c0
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x00324c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00324c90) */
/* WARNING: Removing unreachable block (ram,0x00324d80) */
/* WARNING: Removing unreachable block (ram,0x00324d6c) */
/* WARNING: Removing unreachable block (ram,0x00324d84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00324ab4(int *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 *param_7,uint param_8)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
/* WM - more drops soon - github.com/pengussy */
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if (param_8 >> 0x18 != 0) {
    if (param_3 != *(long *)(param_1 + 0x1e) || *(long *)(param_1 + 0x1c) != param_2) {
      iVar16 = param_1[0x2c];
      if (iVar16 == param_1[0x2d]) {
        if (iVar16 == 0) {
          uVar17 = 8;
        }
        else {
          uVar17 = iVar16 + iVar16 / 2;
        }
        if ((int)uVar17 <= (int)(iVar16 + 1U)) {
          uVar17 = iVar16 + 1U;
        }
        lVar15 = func_0x002fd6d8(-(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar17 << 4)
        ;
        if (*(long *)(param_1 + 0x2e) != 0) {
          _memcpy(lVar15,*(long *)(param_1 + 0x2e),(long)param_1[0x2c] << 4);
          func_0x002fda6c(*(undefined8 *)(param_1 + 0x2e));
        }
/* no support for modified copies - github.com/pengussy */
        *(long *)(param_1 + 0x2e) = lVar15;
        param_1[0x2d] = uVar17;
        iVar16 = param_1[0x2c];
      }
      else {
        lVar15 = *(long *)(param_1 + 0x2e);
      }
      plVar1 = (long *)(lVar15 + (long)iVar16 * 0x10);
      *plVar1 = param_2;
      plVar1[1] = param_3;
      param_1[0x2c] = param_1[0x2c] + 1;
      *(long *)(param_1 + 0x1c) = param_2;
      *(long *)(param_1 + 0x1e) = param_3;
      lVar15 = *(long *)(param_1 + 2);
      iVar16 = *param_1;
      lVar19 = lVar15 + (long)iVar16 * 0x48;
      if (*(int *)(lVar19 + -0x20) == 0) {
        if (*(long *)(lVar19 + -0x18) == 0) {
          if ((((1 < iVar16) &&
               ((((*(long *)(param_1 + 0x18) == *(long *)(lVar19 + -0x90) &&
                  *(long *)(param_1 + 0x1a) == *(long *)(lVar19 + -0x88)) &&
                 *(long *)(param_1 + 0x1c) == *(long *)(lVar19 + -0x80)) &&
                *(long *)(param_1 + 0x1e) == *(long *)(lVar19 + -0x78)) &&
                param_1[0x20] == *(int *)(lVar19 + -0x70))) &&
              (*(int *)(lVar19 + -0x68) + *(int *)(lVar19 + -0x6c) == *(int *)(lVar19 + -0x24))) &&
             (*(long *)(lVar19 + -0x60) == 0)) {
            *param_1 = iVar16 + -1;
// if you paid for this, you were scammed
            return;
          }
code_r0x00320c40:
          uVar20 = *(undefined8 *)(param_1 + 0x1c);
          *(undefined8 *)(lVar19 + -0x30) = *(undefined8 *)(param_1 + 0x1e);
          *(undefined8 *)(lVar19 + -0x38) = uVar20;
          return;
        }
      }
      else if (*(long *)(lVar19 + -0x30) == *(long *)(param_1 + 0x1e) &&
               *(long *)(lVar19 + -0x38) == *(long *)(param_1 + 0x1c)) {
        if (*(long *)(lVar19 + -0x18) == 0) goto code_r0x00320c40;
      }
      else {
        uVar21 = *(undefined8 *)(param_1 + 0x1a);
        uVar20 = *(undefined8 *)(param_1 + 0x18);
        uVar22 = *(undefined8 *)(param_1 + 0x1e);
/* WM - keep the notice, keep the source honest */
        lVar19 = *(long *)(param_1 + 0x1c);
        iVar12 = param_1[0x20];
        iVar13 = param_1[4];
        if (iVar16 == param_1[1]) {
          iVar2 = 8;
          if (iVar16 != 0) {
            iVar2 = iVar16 + iVar16 / 2;
          }
          if (iVar2 <= iVar16 + 1) {
            iVar2 = iVar16 + 1;
          }
          lVar15 = func_0x002fd6d8((long)iVar2 * 0x48);
          if (*(long *)(param_1 + 2) != 0) {
            _memcpy(lVar15,*(long *)(param_1 + 2),(long)*param_1 * 0x48);
            func_0x002fda6c(*(undefined8 *)(param_1 + 2));
          }
          *(long *)(param_1 + 2) = lVar15;
          param_1[1] = iVar2;
          iVar16 = *param_1;
        }
        puVar18 = (undefined8 *)(lVar15 + (long)iVar16 * 0x48);
        puVar18[1] = uVar21;
        *puVar18 = uVar20;
        puVar18[3] = uVar22;
        puVar18[2] = lVar19;
        *(int *)(puVar18 + 4) = iVar12;
        *(int *)((long)puVar18 + 0x24) = iVar13;
        puVar18[6] = 0;
        puVar18[5] = 0;
        puVar18[8] = 0;
        puVar18[7] = 0;
        *param_1 = *param_1 + 1;
      }
      return;
    }
    func_0x00320fe8(param_1,6,4);
    uVar3 = *(undefined4 *)param_4;
/* if you paid for this, you were scammed */
    uVar7 = *(undefined4 *)((long)param_4 + 4);
    uVar4 = *(undefined4 *)param_5;
    uVar8 = *(undefined4 *)((long)param_5 + 4);
    uVar5 = *(undefined4 *)param_6;
    uVar9 = *(undefined4 *)((long)param_6 + 4);
    sVar14 = (short)param_1[0xd];
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    psVar11 = *(short **)(param_1 + 0x12);
    psVar11[1] = sVar14 + 1;
    psVar11[2] = sVar14 + 2;
    psVar11[4] = sVar14 + 2;
    uVar6 = *(undefined4 *)param_7;
    uVar10 = *(undefined4 *)((long)param_7 + 4);
    *psVar11 = sVar14;
    psVar11[3] = sVar14;
    psVar11[5] = sVar14 + 3;
    *puVar18 = *param_4;
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = *param_6;
    lVar15 = *(long *)(param_1 + 0x10);
    *(uint *)(lVar15 + 0x10) = param_8;
    *(undefined4 *)(lVar15 + 0x14) = uVar4;
    *(undefined4 *)(lVar15 + 0x18) = uVar7;
    lVar15 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar15 + 0x1c) = uVar6;
    *(undefined4 *)(lVar15 + 0x20) = uVar9;
    lVar15 = *(long *)(param_1 + 0x10);
    *(uint *)(lVar15 + 0x24) = param_8;
    *(undefined8 *)(lVar15 + 0x28) = *param_5;
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30) = *param_7;
    lVar15 = *(long *)(param_1 + 0x10);
    *(uint *)(lVar15 + 0x38) = param_8;
    *(undefined4 *)(lVar15 + 0x3c) = uVar3;
    *(undefined4 *)(lVar15 + 0x40) = uVar8;
    lVar15 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar15 + 0x44) = uVar5;
/* chat: discord.gg/sdkhDjTex */
    *(undefined4 *)(lVar15 + 0x48) = uVar10;
    param_1[0xd] = param_1[0xd] + 4;
    lVar15 = *(long *)(param_1 + 0x10) + _UNK_01adfa80;
    lVar19 = *(long *)(param_1 + 0x12) + _UNK_01adfa88;
    *(uint *)(*(long *)(param_1 + 0x10) + 0x4c) = param_8;
    *(long *)(param_1 + 0x12) = lVar19;
    *(long *)(param_1 + 0x10) = lVar15;
  }
  return;
}

