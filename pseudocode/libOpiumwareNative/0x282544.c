/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x282544:6aedfe92f5
 */

/* WARNING: Removing unreachable block (ram,0x00282a08) */
/* WARNING: Removing unreachable block (ram,0x00282938) */
/* WARNING: Removing unreachable block (ram,0x00282948) */

void FUN_00282544(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
/*  reversing this took months of machine time  */
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_3,"no error");
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar5 = *param_2;
    uStack_60 = uVar5;
    if ((param_2[1] == 0) ||
       (uStack_58 = (long *)__ZNSt3__119__shared_weak_count4lockEv(), uStack_58 == (long *)0x0)) {
      uVar5 = func_0x00282b1c();
      while (plStack_68 == (long *)0x0) {
        func_0x000154e0(&uStack_60);
        __Unwind_Resume(uVar5);
// chat: discord.gg/sdkhDjTex
        __ZdlPv(uStack_90);
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      func_0x000154e0(&uStack_60);
      auVar10 = __Unwind_Resume(uVar5);
      lVar8 = auVar10._0_8_;
      puStack_c8 = &DAT_00282868;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      puStack_e0 = param_2;
      uStack_d8 = uVar5;
      lStack_d0 = (long)register0x00000008 + -0x10;
      func_0x002822bc(&uStack_110,lVar8,lVar2,param_5,&uStack_f8);
      if ((auVar10._8_8_[1] != 0) &&
         (plVar6 = (long *)__ZNSt3__119__shared_weak_count4lockEv(), plVar4 = plStack_108,
         plVar6 != (long *)0x0)) {
        if (*auVar10._8_8_ != 0) {
          lVar2 = 0;
          if (plStack_108 != (long *)0x0) {
            lVar2 = plStack_108[1];
            plStack_108[1] = lVar2 + 1;
          }
/*  more drops soon - github.com/pengussy  */
          __ZNSt3__15mutex4lockEv(lVar2,lVar8 + 0x48);
          plVar9 = *(long **)(lVar8 + 0x40);
          *(long **)(lVar8 + 0x40) = plVar4;
          *(undefined8 *)(lVar8 + 0x38) = uStack_110;
          if (plVar9 != (long *)0x0) {
            LOAcquire();
            lVar2 = plVar9[1];
            plVar9[1] = lVar2 + -1;
            LORelease();
            if (lVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          __ZNSt3__15mutex6unlockEv(lVar8 + 0x48);
          __ZNSt3__15mutex4lockEv(lVar8 + 0xa0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar8 + 0x88,&uStack_f8);
          __ZNSt3__15mutex6unlockEv(lVar8 + 0xa0);
          *(undefined1 *)(lVar8 + 0xe0) = 1;
          if (plVar6 == (long *)0x0) goto code_r0x002829b8;
        }
        LOAcquire();
        lVar2 = plVar6[1];
        plVar6[1] = lVar2 + -1;
        LORelease();
        if (lVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))();
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
code_r0x002829b8:
      if (plStack_108 != (long *)0x0) {
// WM - stripping the watermark breaks the license
        LOAcquire();
        lVar2 = plStack_108[1];
        plStack_108[1] = lVar2 + -1;
        LORelease();
        if (lVar2 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
        }
      }
      return;
    }
    uStack_58[2] = uStack_58[2] + 1;
    uStack_74 = *(undefined4 *)(param_2 + 5);
    uStack_70 = uVar5;
    plStack_68 = uStack_58;
    if (*(char *)((long)param_2 + 0x27) < '\0') {
      func_0x00017ae8(&uStack_90,param_2[2],param_2[3]);
    }
    else {
      uStack_88 = param_2[3];
      uStack_90 = param_2[2];
      lStack_80 = param_2[4];
    }
    puStack_b0 = &DAT_00282868;
    uStack_a8 = 0;
    puStack_b8 = param_2;
    plVar4 = (long *)__Znwm(0x20);
    plVar4[2] = 0;
    *plVar4 = (long)&UNK_01dc1868;
    plVar4[1] = 0;
    uStack_a0 = func_0x00282b94(plVar4 + 3,&puStack_b0,&puStack_b8,&uStack_70,&uStack_90,&uStack_74)
    ;
    plStack_98 = plVar4;
    __ZNSt3__16thread6detachEv();
    do {
      if ((*(byte *)(param_2 + 0x1c) & 1) != 0) {
        if (*(long **)(param_4 + 0x18) == (long *)0x0) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
LAB_002827d8:
          func_0x001717b4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x2827e0);
          (*pcVar1)();
        }
        iVar3 = (**(code **)(**(long **)(param_4 + 0x18) + 0x30))();
        if (iVar3 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (param_3,"cancellation requested");
          goto LAB_002826dc;
        }
        __ZNSt3__15mutex4lockEv(param_2 + 0x14);
        __ZNSt3__15mutex6unlockEv(param_2 + 0x14);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_3,param_2 + 0x11);
        __ZNSt3__15mutex4lockEv(param_2 + 9);
        lVar8 = param_2[8];
        uVar5 = param_2[7];
/*  stripping the watermark breaks the license  */
        param_1[1] = param_2[8];
        *param_1 = uVar5;
        lVar2 = 0;
        if (lVar8 != 0) {
          plVar4 = (long *)(lVar8 + 8);
          lVar2 = *plVar4;
          *plVar4 = lVar2 + 1;
        }
        __ZNSt3__15mutex6unlockEv(lVar2,param_2 + 9);
        plVar4 = plStack_98;
        goto joined_r0x00282738;
      }
      uVar7 = param_2[6];
      if (0 < (long)uVar7) {
        puStack_b0 = (undefined *)(uVar7 * 1000000);
        if (0x8637bd0579f < uVar7) {
          puStack_b0 = (undefined *)0x7fffffffffffffff;
        }
        __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                  (&puStack_b0);
      }
      if (*(long **)(param_4 + 0x18) == (long *)0x0) goto LAB_002827d8;
      iVar3 = (**(code **)(**(long **)(param_4 + 0x18) + 0x30))();
    } while (iVar3 == 0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (param_3,"cancellation requested");
LAB_002826dc:
    *param_1 = 0;
/* WM - more drops soon - github.com/pengussy */
    param_1[1] = 0;
    plVar4 = plStack_98;
joined_r0x00282738:
    plStack_98 = plVar4;
    if (plVar4 != (long *)0x0) {
      LOAcquire();
      lVar2 = plVar4[1];
      plVar4[1] = lVar2 + -1;
      LORelease();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    if (plStack_68 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar4 = uStack_58;
    if (uStack_58 != (long *)0x0) {
      LOAcquire();
      lVar2 = uStack_58[1];
      uStack_58[1] = lVar2 + -1;
      LORelease();
      if (lVar2 == 0) {
        (**(code **)(*uStack_58 + 0x10))(uStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}
/* more drops soon - github.com/pengussy */

