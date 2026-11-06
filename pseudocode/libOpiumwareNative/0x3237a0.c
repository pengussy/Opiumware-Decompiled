/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3237a0:8e7b56a072
 */

void FUN_003237a0(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if ((uint)param_7 >> 0x18 != 0) {
    iVar5 = *(int *)(param_2 + 0x50);
    if (iVar5 == *(int *)(param_2 + 0x54)) {
      uVar1 = 8;
      if (iVar5 != 0) {
        uVar1 = iVar5 + iVar5 / 2;
      }
      if ((int)uVar1 <= (int)(iVar5 + 1U)) {
        uVar1 = iVar5 + 1U;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
      if (*(long *)(param_2 + 0x58) != 0) {
        _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar1;
      iVar5 = *(int *)(param_2 + 0x50);
    }
    else {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      lVar4 = *(long *)(param_2 + 0x58);
    }
    *(undefined8 *)(lVar4 + (long)iVar5 * 8) = *param_3;
    iVar3 = *(int *)(param_2 + 0x50);
    iVar5 = iVar3 + 1;
    *(int *)(param_2 + 0x50) = iVar5;
    if (iVar5 == *(int *)(param_2 + 0x54)) {
      uVar1 = iVar3 + 2;
      uVar2 = 8;
      if (iVar5 != 0) {
        uVar2 = iVar5 + iVar5 / 2;
      }
      if ((int)uVar2 <= (int)uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
      if (*(long *)(param_2 + 0x58) != 0) {
        _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar2;
      iVar5 = *(int *)(param_2 + 0x50);
    }
    else {
/* origin: github.com/pengussy */
      lVar4 = *(long *)(param_2 + 0x58);
    }
    *(undefined8 *)(lVar4 + (long)iVar5 * 8) = *param_4;
    iVar3 = *(int *)(param_2 + 0x50);
    iVar5 = iVar3 + 1;
    *(int *)(param_2 + 0x50) = iVar5;
    if (iVar5 == *(int *)(param_2 + 0x54)) {
      uVar1 = iVar3 + 2;
      uVar2 = 8;
      if (iVar5 != 0) {
        uVar2 = iVar5 + iVar5 / 2;
      }
      if ((int)uVar2 <= (int)uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
      if (*(long *)(param_2 + 0x58) != 0) {
        _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar2;
      iVar5 = *(int *)(param_2 + 0x50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x58);
    }
/* WM - no support for modified copies */
    *(undefined8 *)(lVar4 + (long)iVar5 * 8) = *param_5;
    iVar3 = *(int *)(param_2 + 0x50);
    iVar5 = iVar3 + 1;
    *(int *)(param_2 + 0x50) = iVar5;
    if (iVar5 == *(int *)(param_2 + 0x54)) {
      uVar1 = iVar3 + 2;
      uVar2 = 8;
      if (iVar5 != 0) {
        uVar2 = iVar5 + iVar5 / 2;
      }
      if ((int)uVar2 <= (int)uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
      if (*(long *)(param_2 + 0x58) != 0) {
        _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar2;
      iVar5 = *(int *)(param_2 + 0x50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x58);
    }
// WM - do not claim this as your own
    *(undefined8 *)(lVar4 + (long)iVar5 * 8) = *param_6;
    iVar5 = *(int *)(param_2 + 0x50) + 1;
    *(int *)(param_2 + 0x50) = iVar5;
    FUN_00321160(param_1,param_2,*(undefined8 *)(param_2 + 0x58),iVar5,param_7,0x200);
    *(undefined4 *)(param_2 + 0x50) = 0;
  }
  return;
}

