/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x27ac78:4fe4ee9d99
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0027aea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0027aea8) */
/* WARNING: Removing unreachable block (ram,0x0027aec0) */

void FUN_0027ac78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
/*  more drops soon - github.com/pengussy  */
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  puVar1 = &uStack_130;
  puVar10 = auStack_e8 + 0xd8;
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar2 = func_0x0027ee18();
  if (iVar2 == 0) {
    iRam0000000002093174 = iRam0000000002093174 + 1;
    uVar5 = 0;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (lRam0000000002097038 != 0) {
      if (*(long *)(lRam0000000001f26750 + lRam0000000002097038) == 0) {
        func_0x00108ab4();
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
    }
    func_0x002496b4(uVar5);
    _objc_sync_enter(param_1);
    _objc_getAssociatedObject(param_1,0x2093170);
    unaff_x21 = func_0x01a1a020();
    _objc_setAssociatedObject(param_1,0x2093170,0,1);
    _objc_sync_exit(param_1);
    plVar3 = (long *)(*pcRam000000000207a0e8)();
    unaff_x22 = *plVar3;
    *plVar3 = 0;
    auVar11 = func_0x01a1a040(unaff_x21);
    if (auVar11._0_8_ == 0) {
      if (unaff_x22 != 0) {
        lVar6 = func_0x01a1a160(param_1);
        func_0x01a1b660(unaff_x22);
        lVar8 = func_0x01a1a160();
        if (lVar6 == lVar8) {
          FUN_0027b3fc(param_1,unaff_x22);
        }
      }
    }
    else {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
// WM - more drops soon - github.com/pengussy
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar6 = func_0x01a1a060(unaff_x21,auVar11._8_8_,&uStack_130,auStack_e8,0x10);
      if (lVar6 != 0) {
        lVar8 = *plStack_120;
        do {
          lVar9 = 0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(unaff_x21);
            }
            uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
            lVar4 = func_0x01a1a160(param_1);
            func_0x01a1b660(uVar7);
            auVar11 = func_0x01a1a160();
            uVar5 = auVar11._8_8_;
            if (lVar4 == auVar11._0_8_) {
              auVar11 = FUN_0027b3fc(param_1,uVar7);
              uVar5 = auVar11._8_8_;
              if ((auVar11._0_8_ & 1) != 0) goto LAB_0027ae8c;
            }
            lVar9 = lVar9 + 1;
          } while (lVar6 != lVar9);
          lVar6 = func_0x01a1a060(unaff_x21,uVar5,&uStack_130,auStack_e8,0x10);
        } while (lVar6 != 0);
      }
    }
LAB_0027ae8c:
    _objc_release(unaff_x21);
    _objc_release(unaff_x22);
    unaff_x30 = 0x27aea8;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
/* do not claim this as your own - github.com/pengussy */
  }
  else {
    if (*(long *)PTR____stack_chk_guard_01f20200 != uStack_68) {
      uVar5 = ___stack_chk_fail();
      _objc_sync_exit(param_1);
      __Unwind_Resume(uVar5);
      auVar11 = __Unwind_Resume();
      uVar5 = auVar11._0_8_;
      func_0x0027dde8(uVar5,param_3);
      lVar6 = _object_getClass(uVar5);
      __ZNSt3__15mutex4lockEv(0x2057d30);
      while (lVar6 != 0) {
        for (plVar3 = plRam00000000020931a0; plVar3 != plRam00000000020931a8; plVar3 = plVar3 + 3) {
          if ((plVar3[1] == auVar11._8_8_) && (*plVar3 == lVar6)) {
            UNRECOVERED_JUMPTABLE = (code *)plVar3[2];
            __ZNSt3__15mutex6unlockEv(0x2057d30);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0027afb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(uVar5,auVar11._8_8_,param_3);
            return;
          }
        }
        lVar6 = _class_getSuperclass();
      }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      goto code_r0x01a171b4;
    }
    puVar1 = (undefined8 *)register0x00000008;
    puVar10 = unaff_x29;
  }
  *(long *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(long *)((long)puVar1 + -0x20) = unaff_x20;
  *(undefined8 *)((long)puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)((long)puVar1 + -0x10) = puVar10;
  *(undefined8 *)((long)puVar1 + -8) = unaff_x30;
  lVar6 = _object_getClass();
  __ZNSt3__15mutex4lockEv(0x2057d30);
  while (lVar6 != 0) {
    for (plVar3 = plRam00000000020931a0; plVar3 != plRam00000000020931a8; plVar3 = plVar3 + 3) {
      if ((plVar3[1] == param_2) && (*plVar3 == lVar6)) {
        *(long *)((long)puVar1 + -0x38) = plVar3[2];
        __ZNSt3__15mutex6unlockEv(0x2057d30);
        if (*(code **)((long)puVar1 + -0x38) == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0027b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((long)puVar1 + -0x38))(param_1,param_2);
        return;
// WM - keep the notice, keep the source honest
      }
    }
    lVar6 = _class_getSuperclass();
  }
code_r0x01a171b4:
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(0x2057d30);
  return;
}

