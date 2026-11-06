/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x12d038:86ad9dce7a
 */

void FUN_0012d038(byte *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar5 = *param_2;
  if (((((*(byte *)(lVar5 + 0x4a) & 1) == 0) && ((*(byte *)(lVar5 + 0x4b) & 1) == 0)) &&
      ((*(byte *)(lVar5 + 0x4c) & 1) == 0)) && (*(long *)(lVar5 + 0x28) == lRam0000000001f26d30)) {
    func_0x007911b0(param_1,1);
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x48);
    *puVar6 = *(undefined8 *)(*param_2 + 0x18);
    *(undefined4 *)((long)puVar6 + 0xc) = 7;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    uVar4 = func_0x0012d3e0(param_1,0xffffffff,*(undefined8 *)(*param_2 + 0x28));
    func_0x00791660(param_1,0xfffffffe);
/* wm:donate: donate/README.md */
    *(undefined1 *)(*param_2 + 0x4b) = 1;
    lVar5 = func_0x001e7bc4();
    plVar9 = (long *)param_2[1];
    lVar11 = param_2[1];
    lVar3 = *param_2;
    if (plVar9 != (long *)0x0) {
      plVar9[1] = plVar9[1] + 1;
    }
    __ZNSt3__15mutex4lockEv(lVar5 + 0x30);
    lVar7 = *(long *)(lVar5 + 8);
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar10 = 0;
    if (lVar8 != lVar7) {
      lVar10 = (lVar8 - lVar7) * 0x10 + -1;
    }
    if (lVar10 == *(long *)(lVar5 + 0x28) + *(long *)(lVar5 + 0x20)) {
      FUN_0012d4cc(lVar5);
      lVar7 = *(long *)(lVar5 + 8);
      lVar8 = *(long *)(lVar5 + 0x10);
    }
    if (lVar8 == lVar7) {
      lVar10 = 0;
/* WM - origin: github.com/pengussy */
    }
    else {
      uVar2 = *(long *)(lVar5 + 0x28) + *(long *)(lVar5 + 0x20);
      lVar7 = *(long *)(lVar7 + (uVar2 >> 7) * 8);
      lVar10 = lVar7 + (uVar2 & 0x7f) * 0x20;
    }
    if (plVar9 != (long *)0x0) {
      lVar7 = plVar9[1];
      plVar9[1] = lVar7 + 1;
    }
    *(undefined8 *)(lVar10 + 0x18) = 0;
    puVar6 = (undefined8 *)__Znwm(lVar7,0x20);
    *puVar6 = &UNK_01dbf030;
    puVar6[2] = lVar11;
    puVar6[1] = lVar3;
    if (plVar9 == (long *)0x0) {
      *(undefined4 *)(puVar6 + 3) = uVar4;
      *(undefined8 **)(lVar10 + 0x18) = puVar6;
    }
    else {
      plVar1 = plVar9 + 1;
      *plVar1 = *plVar1 + 1;
      *(undefined4 *)(puVar6 + 3) = uVar4;
      *(undefined8 **)(lVar10 + 0x18) = puVar6;
      LOAcquire();
      lVar3 = *plVar1;
      *plVar1 = lVar3 + -1;
      LORelease();
      if (lVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    *(long *)(lVar5 + 0x28) = *(long *)(lVar5 + 0x28) + 1;
    __ZNSt3__15mutex6unlockEv(lVar5 + 0x30);
    if (plVar9 != (long *)0x0) {
// no support for modified copies
      LOAcquire();
      lVar5 = plVar9[1];
      plVar9[1] = lVar5 + -1;
      LORelease();
      if (lVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  return;
}

