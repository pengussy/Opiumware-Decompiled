/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x170808:1cf9a5a32a
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00170b84) */
/* WARNING: Removing unreachable block (ram,0x00170ba8) */

long FUN_00170808(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  undefined1 auVar12 [16];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  __ZNSt3__115recursive_mutex4lockEv(0x2092a48);
  lVar10 = lRam0000000001f26d30;
  plVar7 = param_1 + 1;
  lVar9 = *(long *)(*plVar7 + 8);
  lVar11 = *plVar7;
  __ZNSt3__15mutex4lockEv(lVar11 + 0x28);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  lVar6 = *plVar7;
  uVar8 = *(undefined8 *)(lVar6 + 0x10);
  uVar1 = *(undefined4 *)(lVar6 + 0xdc);
  uVar2 = *(undefined4 *)(lVar6 + 0xe4);
  __ZNSt3__15mutex6unlockEv(lVar11 + 0x28);
  if (lVar9 == lVar10) {
    lVar9 = param_1[4];
    uStack_90 = (undefined7)param_1[5];
    uStack_89 = (undefined1)*(undefined8 *)((long)param_1 + 0x2f);
    uStack_88 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x2f) >> 8);
    cVar3 = *(char *)((long)param_1 + 0x37);
    lVar10 = (long)cVar3;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[4] = 0;
    lVar6 = param_1[3];
    plStack_68 = (long *)__Znwm(0x28);
    *plStack_68 = (long)&UNK_01dbf830;
    plStack_68[1] = lVar9;
    plStack_68[2] = CONCAT17(uStack_89,uStack_90);
    *(ulong *)((long)plStack_68 + 0x17) = CONCAT71(uStack_88,uStack_89);
    *(char *)((long)plStack_68 + 0x1f) = cVar3;
    uStack_90 = 0;
    uStack_89 = 0;
    uStack_88 = 0;
    *(short *)(plStack_68 + 4) = (short)lVar6;
    param_1 = &lStack_80;
    func_0x00170bc4(uVar8,uVar2,&lStack_80,uVar1);
    if (plStack_68 == param_1) {
      lVar6 = 0x20;
    }
    else {
      if (plStack_68 == (long *)0x0) goto LAB_00170920;
      lVar6 = 0x28;
    }
/* WM - origin: github.com/pengussy */
    (**(code **)(*plStack_68 + lVar6))();
  }
LAB_00170920:
  func_0x00108250(plVar7,1);
  lStack_80 = 0;
  uStack_78 = 0;
  lVar11 = *plVar7;
  __ZNSt3__15mutex4lockEv(lVar11 + 0x28);
  lVar6 = *plVar7;
  uStack_78 = *(undefined8 *)(lVar6 + 0x20);
  lStack_80 = *(long *)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  lVar6 = *plVar7;
  plVar7 = *(long **)(lVar6 + 0x20);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  if (plVar7 != (long *)0x0) {
    LOAcquire();
    lVar6 = plVar7[1];
    plVar7[1] = lVar6 + -1;
    LORelease();
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar11 + 0x28);
  uVar8 = uStack_78;
  lVar6 = lStack_80;
  lStack_b8 = lStack_80;
  uStack_b0 = uStack_78;
  lStack_80 = 0;
  uStack_78 = 0;
  uVar5 = __Znwm(8);
  __ZNSt3__115__thread_structC1Ev();
  uStack_98 = uVar5;
  puStack_a0 = (undefined8 *)__Znwm(0x18);
  uStack_98 = 0;
  *puStack_a0 = uVar5;
  puStack_a0[2] = uVar8;
  puStack_a0[1] = lVar6;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uVar8 = _pthread_create(auStack_a8,0,&DAT_00171c10,puStack_a0);
  if ((int)uVar8 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc(uVar8,"thread constructor failed");
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x170a50);
    (*pcVar4)();
  }
// origin: github.com/pengussy
  __ZNSt3__16thread6detachEv(auStack_a8);
  __ZNSt3__16threadD1Ev(auStack_a8);
  lVar6 = __ZNSt3__115recursive_mutex6unlockEv(0x2092a48);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return lVar6;
  }
  uVar8 = ___stack_chk_fail();
  if (plStack_68 == param_1) {
    lVar6 = 0x20;
  }
  else {
    if (plStack_68 == (long *)0x0) goto LAB_00170b44;
    lVar6 = 0x28;
  }
  (**(code **)(*plStack_68 + lVar6))();
  __ZNSt3__115recursive_mutex6unlockEv(0x2092a48);
  uVar8 = __Unwind_Resume(uVar8);
  if ((int)lVar10 < 0) {
    __ZdlPv(lVar9);
    __ZNSt3__115recursive_mutex6unlockEv(0x2092a48);
    uVar8 = __Unwind_Resume(uVar8);
    __ZNSt3__16threadD1Ev(auStack_a8);
    func_0x000154e0(&lStack_b8);
    func_0x000154e0(&lStack_80);
  }
LAB_00170b44:
  __ZNSt3__115recursive_mutex6unlockEv(0x2092a48);
  auVar12 = __Unwind_Resume(uVar8);
  if (*(undefined **)(auVar12._8_8_ + 8) == &UNK_01ad92c1) {
    return auVar12._0_8_ + 8;
  }
  return 0;
}

