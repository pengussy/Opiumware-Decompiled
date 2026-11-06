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
 *  file-id: 0x287550:8fa698e9bc
 *  --------------------------------------------------------------------------*/

long FUN_00287550(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  do {
    lVar1 = param_1;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_01f20200;
    lVar2 = func_0x0029144c();
    unaff_x22 = (undefined8 *)(lVar2 + 0x388);
/* WM - stripping the watermark breaks the license */
    *(undefined8 *)(lVar2 + 0x398) = 0;
    *(undefined8 *)(lVar2 + 0x390) = 0;
    *unaff_x22 = 0;
    *(undefined8 *)(lVar2 + 0x3b0) = 0;
    *(undefined8 *)(lVar2 + 0x3a8) = 0;
    *(undefined8 **)(lVar2 + 0x3a0) = (undefined8 *)(lVar2 + 0x3a8);
    func_0x002904b8(lVar2 + 0x3b8,0,0,0,UNK_01adc20f,UNK_01adc20e);
    *(undefined8 *)(lVar1 + 0x3d8) = 0;
    *(undefined8 *)(lVar1 + 0x3d0) = 0;
    *(undefined8 *)(lVar1 + 1000) = 0;
    *(undefined8 *)(lVar1 + 0x3e0) = 0;
    *(undefined8 *)(lVar1 + 0x3c8) = 0;
    *(undefined8 *)(lVar1 + 0x3c0) = 0;
    *(undefined1 *)(lVar1 + 0x407) = 6;
    *(undefined4 *)(lVar1 + 0x3f0) = 0x54535953;
    *(undefined2 *)(lVar1 + 0x3f4) = 0x4d45;
    *(undefined1 *)(lVar1 + 0x3f6) = 0;
    *(undefined1 *)(lVar1 + 0x41f) = 7;
    *(undefined4 *)(lVar1 + 0x408) = 0x41464544;
    *(undefined4 *)(lVar1 + 0x40b) = 0x544c5541;
    *(undefined1 *)(lVar1 + 0x40f) = 0;
    *(undefined2 *)(lVar1 + 0x420) = 0;
    *(undefined8 *)(lVar1 + 0x428) = 0;
    *(undefined8 *)(lVar1 + 0x438) = 0;
    *(undefined8 *)(lVar1 + 0x430) = 0;
    *(undefined1 *)(lVar1 + 0x440) = 0;
    *(undefined8 *)(lVar1 + 0x448) = 0x32aaaba7;
// WM - chat: discord.gg/sdkhDjTex
    *(undefined8 *)(lVar1 + 0x458) = 0;
    *(undefined8 *)(lVar1 + 0x450) = 0;
    *(undefined8 *)(lVar1 + 0x468) = 0;
    *(undefined8 *)(lVar1 + 0x460) = 0;
    *(undefined8 *)(lVar1 + 0x478) = 0;
    *(undefined8 *)(lVar1 + 0x470) = 0;
    *(undefined8 *)(lVar1 + 0x480) = 0;
    unaff_x23 = (long *)(lVar1 + 0x488);
    *(undefined8 *)(lVar1 + 0x4a0) = 0;
    *(undefined1 *)(lVar1 + 0x4a8) = 0;
    *(undefined8 *)(lVar1 + 0x4b0) = 0;
    *(undefined8 *)(lVar1 + 0x4b8) = 0x32aaaba7;
    *(undefined8 *)(lVar1 + 0x4c8) = 0;
    *(undefined8 *)(lVar1 + 0x4c0) = 0;
    *(undefined8 *)(lVar1 + 0x4d8) = 0;
    *(undefined8 *)(lVar1 + 0x4d0) = 0;
    *(undefined8 *)(lVar1 + 0x4e8) = 0;
    *(undefined8 *)(lVar1 + 0x4e0) = 0;
    *(undefined8 *)(lVar1 + 0x4f0) = 0;
    *(undefined1 *)(lVar1 + 0x4f8) = 1;
    *(undefined8 *)(lVar1 + 0x4fc) = 0x100002710;
    *(undefined8 *)(lVar1 + 0x508) = 0x32aaaba7;
    *(undefined8 *)(lVar1 + 0x518) = 0;
    *(undefined8 *)(lVar1 + 0x510) = 0;
    *(undefined8 *)(lVar1 + 0x528) = 0;
    *(undefined8 *)(lVar1 + 0x520) = 0;
    *(undefined8 *)(lVar1 + 0x538) = 0;
    *(undefined8 *)(lVar1 + 0x530) = 0;
    *(undefined8 *)(lVar1 + 0x540) = 0;
    *(undefined8 *)(lVar1 + 0x548) = 0x3cb0b1bb;
/* watermarked copy - do not remove - github.com/pengussy */
    *(undefined8 *)(lVar1 + 0x558) = 0;
    *(undefined8 *)(lVar1 + 0x550) = 0;
    *(undefined8 *)(lVar1 + 0x568) = 0;
    *(undefined8 *)(lVar1 + 0x560) = 0;
    *(undefined8 *)(lVar1 + 0x570) = 0;
    *(undefined4 *)(lVar1 + 0x578) = 0x3c;
    *(undefined1 *)(lVar1 + 0x57c) = 1;
    *(undefined4 *)(lVar1 + 0x580) = 0xffffffff;
    unaff_x24 = (undefined8 *)(lVar1 + 0x588);
    *(undefined8 *)(lVar1 + 0x598) = 0;
    *(undefined8 *)(lVar1 + 0x590) = 0;
    *unaff_x24 = 0;
    *(undefined4 *)(lVar1 + 0x5a0) = 2;
    unaff_x21 = (undefined8 *)(lVar1 + 0x5a8);
    *(undefined8 *)(lVar1 + 0x5b0) = 0;
    *unaff_x21 = 0;
    *(undefined8 *)(lVar1 + 0x5b8) = 0;
    *(undefined1 *)(lVar1 + 0x5c0) = 1;
    *(undefined **)((long)register0x00000008 + -0x68) = &UNK_01dc1a28;
    *(long *)((long)register0x00000008 + -0x60) = lVar1;
    *(long **)((long)register0x00000008 + -0x50) = (long *)((long)register0x00000008 + -0x68);
    func_0x002924a0(lVar1,(undefined1 *)((long)register0x00000008 + -0x68));
    plVar3 = *(long **)((long)register0x00000008 + -0x50);
    if (plVar3 == (long *)((long)register0x00000008 + -0x68)) {
      lVar2 = 0x20;
LAB_00287724:
      (**(code **)(*plVar3 + lVar2))();
    }
    else if (plVar3 != (long *)0x0) {
      lVar2 = 0x28;
      goto LAB_00287724;
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x48)) {
      return lVar1;
    }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    unaff_x20 = ___stack_chk_fail();
    plVar3 = *(long **)((long)register0x00000008 + -0x50);
    if (plVar3 == (long *)((long)register0x00000008 + -0x68)) {
      lVar2 = 0x20;
LAB_0028778c:
      (**(code **)(*plVar3 + lVar2))();
    }
    else if (plVar3 != (long *)0x0) {
      lVar2 = 0x28;
      goto LAB_0028778c;
    }
    func_0x0000e1a8(unaff_x21);
    if (*(char *)(lVar1 + 0x59f) < '\0') {
      __ZdlPv(*unaff_x24);
    }
    __ZNSt3__118condition_variableD1Ev(lVar1 + 0x548);
    __ZNSt3__15mutexD1Ev(lVar1 + 0x508);
    __ZNSt3__15mutexD1Ev(lVar1 + 0x4b8);
    __ZNSt3__16threadD1Ev(lVar1 + 0x4b0);
    plVar3 = *(long **)(lVar1 + 0x4a0);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    if (plVar3 == unaff_x23) {
      lVar2 = 0x20;
LAB_002877ec:
      (**(code **)(*plVar3 + lVar2))();
    }
    else if (plVar3 != (long *)0x0) {
      lVar2 = 0x28;
      goto LAB_002877ec;
    }
    __ZNSt3__15mutexD1Ev(lVar1 + 0x448);
    func_0x00173224(lVar1 + 0x3c0);
    func_0x001085ac(lVar1 + 0x3a0);
    if (*(char *)(lVar1 + 0x39f) < '\0') {
      __ZdlPv(*unaff_x22);
    }
    func_0x0029169c(lVar1);
    unaff_x30 = &SUB_00287838;
    param_1 = __Unwind_Resume(unaff_x20);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x19 = lVar1;
  } while( true );
}

