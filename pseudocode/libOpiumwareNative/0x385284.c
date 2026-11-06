/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x385284:3cfa163158
   =========================================================================== */

void FUN_00385284(long param_1)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uStack_570;
  undefined1 auStack_568 [8];
  undefined8 uStack_560;
  long alStack_558 [158];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  plVar11 = *(long **)(param_1 + 0x388);
  if (plVar11 == (long *)0x0) {
/* reversing this took months of machine time - github.com/pengussy */
    uVar5 = 1;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x350) == 0) goto LAB_003854e4;
    lVar10 = 0;
    do {
      uVar9 = 0;
      plVar7 = alStack_558;
      do {
        lVar6 = plVar11[2];
        plVar7[-2] = (long)(plVar11 + 0x1f);
        plVar7[-1] = lVar6;
        plVar7[2] = 0;
        iVar4 = func_0x00290f74(plVar11 + 4);
        plVar2 = (long *)0x0;
        if (iVar4 != 0) {
          plVar2 = plVar11 + 4;
        }
        *plVar7 = (long)plVar2;
        iVar4 = func_0x00290f74((long)plVar11 + 0x8c);
        lVar6 = 0;
        if (iVar4 != 0) {
          lVar6 = (long)plVar11 + 0x8c;
        }
        plVar7[1] = lVar6;
        uVar1 = uVar9 + 1;
        plVar11 = (long *)*plVar11;
        plVar7 = plVar7 + 5;
        bVar3 = uVar9 < 0x1f;
        uVar9 = uVar1;
      } while (plVar11 != (long *)0x0 && bVar3);
// donate: donate/README.md
      func_0x00446890();
      iVar4 = FUN_003e9d54(*(undefined8 *)(param_1 + 0x350),auStack_568,0x28,uVar1,0,&uStack_570);
      if ((iVar4 != 0) && (uStack_570 == 0)) {
        func_0x00446a74();
        break;
      }
      if (iVar4 == 0) {
        func_0x00445ba8();
        iVar4 = func_0x003eab20();
        if (iVar4 == 0) goto LAB_003854e0;
        func_0x004468d8();
        break;
      }
      func_0x00446a74();
      if (uStack_570 != 0) {
        uVar9 = 0;
        puVar12 = &uStack_560;
        do {
          if (*(code **)(param_1 + 1000) != (code *)0x0) {
            (**(code **)(param_1 + 1000))
                      (1,1,0x200,puVar12[-1],*puVar12,*(undefined8 *)(param_1 + 0x3f8),
                       *(undefined8 *)(param_1 + 0x3f0));
          }
          plVar7 = *(long **)(param_1 + 0x388);
          lVar6 = *plVar7;
          plVar11 = (long *)plVar7[1];
          *(long *)(param_1 + 0x388) = lVar6;
          if (*(long **)(param_1 + 0x390) == plVar7) {
            *(long **)(param_1 + 0x390) = plVar11;
          }
          if (plVar11 != (long *)0x0) {
            *plVar11 = lVar6;
          }
          if (lVar6 != 0) {
            *(long **)(lVar6 + 8) = plVar11;
          }
/* origin: github.com/pengussy */
          *(long *)(param_1 + 0x398) = *(long *)(param_1 + 0x398) + -1;
          *plVar7 = 0;
          plVar7[1] = 0;
          *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) - plVar7[2];
          *(long *)(param_1 + 0x3a0) = *(long *)(param_1 + 0x3a0) + -1;
          puVar8 = *(undefined8 **)(param_1 + 0x378);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = plVar7;
          }
          *plVar7 = 0;
          plVar7[1] = (long)puVar8;
          *(long **)(param_1 + 0x378) = plVar7;
          if (*(long *)(param_1 + 0x370) == 0) {
            *(long **)(param_1 + 0x370) = plVar7;
          }
          *(long *)(param_1 + 0x380) = *(long *)(param_1 + 0x380) + 1;
          uVar9 = uVar9 + 1;
          puVar12 = puVar12 + 5;
        } while (uVar9 < uStack_570);
      }
      lVar10 = uStack_570 + lVar10;
      plVar11 = *(long **)(param_1 + 0x388);
    } while (plVar11 != (long *)0x0);
    uVar5 = 1;
    if (lVar10 == 0) {
      uVar5 = 0xffffffff;
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
      return;
    }
  }
  do {
    ___stack_chk_fail(uVar5);
LAB_003854e0:
    func_0x00446a74();
LAB_003854e4:
/* wm:if you paid for this, you were scammed */
    uVar5 = 0xfffffffe;
  } while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_68);
  return;
}

