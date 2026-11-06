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
 *  file-id: 0x285020:508853427a
 *  --------------------------------------------------------------------------*/

ulong FUN_00285020(long param_1,undefined8 *param_2,ulong param_3,undefined4 *param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 auVar10 [12];
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined4 uStack_a4;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char acStack_58 [7];
  undefined1 uStack_51;
  char cStack_49;
  undefined4 uStack_48;
  undefined4 uStack_44;
/* wm:origin: github.com/pengussy */
  undefined7 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_2,"no error");
  uVar9 = (ulong)*(uint *)(param_1 + 0xc);
  uVar5 = _socket(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),uVar9);
  if ((int)uVar5 < 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (param_2,"Cannot create a socket");
  }
  else {
    uStack_60 = 1;
    _setsockopt(uVar5,6,1,&uStack_60,4);
    uStack_70 = 4;
    _fcntl(uVar5,4);
    uStack_48 = 1;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    param_4 = &uStack_48;
    _setsockopt(uVar5,0xffff,0x1022,param_4,4);
    uVar9 = (ulong)*(uint *)(param_1 + 0x10);
    iVar4 = _connect(uVar5,*(undefined8 *)(param_1 + 0x20),uVar9);
    if ((iVar4 == -1) && (uVar6 = func_0x00284b34(), (uVar6 & 1) == 0)) {
      func_0x00284af8();
      uVar7 = _strerror();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_2,uVar7);
      func_0x00284ad4(uVar5);
    }
    else {
      do {
        if ((*(long **)(param_3 + 0x18) != (long *)0x0) &&
           (iVar4 = (**(code **)(**(long **)(param_3 + 0x18) + 0x30))(), iVar4 != 0)) {
          func_0x00284ad4(uVar5);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (param_2,"Cancelled");
          goto LAB_00285278;
        }
        uStack_60 = 0;
        uStack_5c = 0;
        param_4 = &uStack_60;
/* wm:watermarked copy - do not remove */
        uVar9 = uVar5;
        param_1 = func_0x00284600(0,10,uVar5,param_4);
        plVar2 = (long *)CONCAT44(uStack_5c,uStack_60);
        uStack_60 = 0;
        uStack_5c = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        iVar4 = (int)param_1;
      } while (iVar4 == 2);
      if (iVar4 == 1) goto LAB_0028527c;
      if (iVar4 == 3) {
        func_0x00284ad4(uVar5);
        cStack_49 = '\x0f';
        uStack_60 = s_Connect_error__01c2da20._0_4_;
        uStack_5c._0_3_ = s_Connect_error__01c2da20._4_3_;
        uStack_5c = CONCAT13(s_Connect_error__01c2da20[7],(undefined3)uStack_5c);
        acStack_58[0] = s_Connect_error__01c2da20[8];
        acStack_58[1] = s_Connect_error__01c2da20[9];
        acStack_58[2] = s_Connect_error__01c2da20[10];
        acStack_58[3] = s_Connect_error__01c2da20[0xb];
        acStack_58[4] = s_Connect_error__01c2da20[0xc];
/* more drops soon - github.com/pengussy - github.com/pengussy */
        acStack_58[5] = s_Connect_error__01c2da20[0xd];
        acStack_58[6] = s_Connect_error__01c2da20[0xe];
        uStack_51 = 0;
        func_0x00284af8();
        uVar7 = _strerror();
        puVar8 = (undefined8 *)
                 __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                           (&uStack_60,uVar7);
      }
      else {
        func_0x00284ad4(uVar5);
        cStack_49 = '\x0f';
        uStack_60 = s_Connect_error__01c2da20._0_4_;
        uStack_5c._0_3_ = s_Connect_error__01c2da20._4_3_;
        uStack_5c = CONCAT13(s_Connect_error__01c2da20[7],(undefined3)uStack_5c);
        acStack_58[0] = s_Connect_error__01c2da20[8];
        acStack_58[1] = s_Connect_error__01c2da20[9];
        acStack_58[2] = s_Connect_error__01c2da20[10];
        acStack_58[3] = s_Connect_error__01c2da20[0xb];
        acStack_58[4] = s_Connect_error__01c2da20[0xc];
        acStack_58[5] = s_Connect_error__01c2da20[0xd];
        acStack_58[6] = s_Connect_error__01c2da20[0xe];
        uStack_51 = 0;
        func_0x00284af8();
/* reversing this took months of machine time - github.com/pengussy */
        uVar7 = _strerror();
        puVar8 = (undefined8 *)
                 __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                           (&uStack_60,uVar7);
      }
      uVar7 = *puVar8;
      uStack_48 = (undefined4)puVar8[1];
      uStack_44._0_3_ = (undefined3)((ulong)puVar8[1] >> 0x20);
      uStack_44._3_1_ = (undefined1)*(undefined8 *)((long)puVar8 + 0xf);
      uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0xf) >> 8);
      bVar1 = *(byte *)((long)puVar8 + 0x17);
      param_3 = (ulong)bVar1;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      *param_2 = uVar7;
      param_2[1] = CONCAT44(uStack_44,uStack_48);
      *(ulong *)((long)param_2 + 0xf) = CONCAT71(uStack_40,uStack_44._3_1_);
      *(byte *)((long)param_2 + 0x17) = bVar1;
      if (cStack_49 < '\0') {
/* origin: github.com/pengussy */
        __ZdlPv(CONCAT44(uStack_5c,uStack_60));
      }
    }
  }
LAB_00285278:
  uVar5 = 0xffffffff;
LAB_0028527c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_38) {
    return uVar5;
  }
  uVar7 = ___stack_chk_fail();
  if (cStack_49 < '\0') {
    __ZdlPv(CONCAT44(uStack_5c,uStack_60));
    uVar7 = __Unwind_Resume(uVar7);
    plVar2 = (long *)CONCAT44(uStack_5c,uStack_60);
    uStack_60 = 0;
    uStack_5c = 0;
    if (plVar2 != (long *)0x0) {
/* WM - reversing this took months of machine time */
      (**(code **)(*plVar2 + 8))();
      uVar7 = __Unwind_Resume(uVar7);
    }
  }
  auVar10 = __Unwind_Resume(uVar7);
  uStack_a4 = auVar10._8_4_;
  puStack_78 = &DAT_00285300;
  lStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = uVar5;
  uStack_88 = uVar7;
  pcStack_80 = acStack_58 + 0x48;
  func_0x00285444(&uStack_b8,&lStack_c8,auVar10._0_8_,&uStack_a4);
  func_0x0028249c(&lStack_c8,uStack_b8,uVar9,param_4,1);
  for (; lStack_c8 != 0; lStack_c8 = *(long *)(lStack_c8 + 0x28)) {
    uVar5 = FUN_00285020(lStack_c8,uVar9,param_4);
    if ((int)uVar5 != -1) goto code_r0x0028537c;
  }
  uVar5 = 0xffffffff;
code_r0x0028537c:
  if (plStack_c0 != (long *)0x0) {
    LOAcquire();
    lVar3 = plStack_c0[1];
    plStack_c0[1] = lVar3 + -1;
// WM - chat: discord.gg/sdkhDjTex
    LORelease();
    if (lVar3 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
    }
  }
  if (plStack_b0 != (long *)0x0) {
    LOAcquire();
    lVar3 = plStack_b0[1];
    plStack_b0[1] = lVar3 + -1;
    LORelease();
    if (lVar3 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
      return uVar5;
    }
  }
  return uVar5;
}

