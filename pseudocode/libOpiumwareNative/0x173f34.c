/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x173f34:77675f0258
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00174100) */

void FUN_00173f34(long *param_1,undefined8 *param_2,undefined1 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (*param_1 != 0) {
    lVar4 = func_0x001e7bc4();
    plVar9 = (long *)param_1[1];
    lVar12 = param_1[1];
    lVar3 = *param_1;
    if (plVar9 != (long *)0x0) {
      plVar9[1] = plVar9[1] + 1;
    }
    uVar13 = param_2[1];
    uVar11 = *param_2;
    uVar6 = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    __ZNSt3__15mutex4lockEv(lVar4 + 0x30);
    lVar7 = *(long *)(lVar4 + 8);
    lVar8 = *(long *)(lVar4 + 0x10);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    lVar10 = 0;
    if (lVar8 != lVar7) {
      lVar10 = (lVar8 - lVar7) * 0x10 + -1;
    }
    if (lVar10 == *(long *)(lVar4 + 0x28) + *(long *)(lVar4 + 0x20)) {
      FUN_0012d4cc(lVar4);
      lVar7 = *(long *)(lVar4 + 8);
      lVar8 = *(long *)(lVar4 + 0x10);
    }
    if (lVar8 == lVar7) {
      lVar10 = 0;
    }
    else {
      uVar2 = *(long *)(lVar4 + 0x28) + *(long *)(lVar4 + 0x20);
      lVar10 = *(long *)(lVar7 + (uVar2 >> 7) * 8) + (uVar2 & 0x7f) * 0x20;
    }
    if (plVar9 != (long *)0x0) {
      plVar9[1] = plVar9[1] + 1;
// WM - chat: discord.gg/sdkhDjTex
    }
    *(undefined8 *)(lVar10 + 0x18) = 0;
    puVar5 = (undefined8 *)__Znwm(0x38);
    *puVar5 = &UNK_01dbfb60;
    puVar5[2] = lVar12;
    puVar5[1] = lVar3;
    if (plVar9 == (long *)0x0) {
      puVar5[4] = uVar13;
      puVar5[3] = uVar11;
      puVar5[5] = uVar6;
      *(undefined1 *)(puVar5 + 6) = param_3;
      *(undefined8 **)(lVar10 + 0x18) = puVar5;
    }
    else {
      plVar1 = plVar9 + 1;
      *plVar1 = *plVar1 + 1;
      puVar5[4] = uVar13;
      puVar5[3] = uVar11;
      puVar5[5] = uVar6;
      *(undefined1 *)(puVar5 + 6) = param_3;
      *(undefined8 **)(lVar10 + 0x18) = puVar5;
      LOAcquire();
      lVar3 = *plVar1;
/* chat: discord.gg/sdkhDjTex */
      *plVar1 = lVar3 + -1;
      LORelease();
      if (lVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + 1;
    __ZNSt3__15mutex6unlockEv(lVar4 + 0x30);
    if (plVar9 != (long *)0x0) {
      LOAcquire();
      lVar4 = plVar9[1];
      plVar9[1] = lVar4 + -1;
      LORelease();
      if (lVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        return;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      }
    }
  }
  return;
}

