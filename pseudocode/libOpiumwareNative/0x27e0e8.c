/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x27e0e8:81ce562ddb
 */

/* WARNING: Removing unreachable block (ram,0x0027e354) */
/* WARNING: Removing unreachable block (ram,0x0027e364) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0027e0e8(long param_1,long param_2,ulong param_3,ulong param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 extraout_x1;
  uint uVar7;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined *puStack_150;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  long *plStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar9 = (long *)0x0;
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_100 = unaff_x20;
  uStack_108 = unaff_x21;
  if ((((0x4000 < param_4) || (uStack_108 = param_3, 0x4000 < param_3)) ||
      (uStack_100 = param_4, param_4 == 0)) ||
     (((param_3 == 0 || (param_2 == 0)) || ((param_1 == 0 || (param_5 == (long *)0x0))))))
  goto LAB_0027e298;
  _objc_release(param_5[1]);
  plVar9 = param_5 + 3;
  *param_5 = 0;
  param_5[1] = 0;
  if (*plVar9 != 0) {
    _CFRelease();
  }
  unaff_x22 = param_5 + 2;
  param_5[3] = 0;
  if (*unaff_x22 != 0) {
    _CVPixelBufferRelease();
  }
  param_5[4] = 0;
  param_5[2] = 0;
  param_5[5] = 0;
  uVar2 = uRam0000000002093218;
  uVar7 = (uint)*(byte *)(param_5 + 6);
  if (*(byte *)(param_5 + 6) == 1) {
    LOAcquire();
    LORelease();
    uVar2 = uRam0000000002093218 - 1;
    uVar7 = uRam0000000002093218;
  }
  uRam0000000002093218 = uVar2;
  *(undefined1 *)(param_5 + 6) = 0;
/*  chat: discord.gg/sdkhDjTex  */
  __ZNSt3__15mutex4lockEv(uVar7,0x2057dc8);
  if (((lRam0000000002093238 == param_1) && (plRam0000000002093280 != (long *)0x0)) &&
     ((*plRam0000000002093280 == param_2 &&
      ((plRam0000000002093280[4] == param_3 && (plRam0000000002093280[5] == param_4)))))) {
    plStack_d0 = plRam0000000002093280;
    plStack_c8 = plRam0000000002093288;
    plVar6 = plRam0000000002093280;
    if (plRam0000000002093288 != (long *)0x0) {
      plVar6 = (long *)plRam0000000002093288[1];
      plRam0000000002093288[1] = (long)plVar6 + 1;
    }
    __ZNSt3__15mutex6unlockEv(plVar6,0x2057dc8);
    if (2 < uRam0000000002093218) goto LAB_0027e264;
    uRam0000000002093218 = uRam0000000002093218 + 1;
    *(undefined1 *)(param_5 + 6) = 1;
    uStack_78 = *(undefined8 *)PTR__kCVPixelBufferPoolAllocationThresholdKey_01f200f0;
    uStack_70 = 0x1f1ff90;
    uVar5 = func_0x01a1a1a0(uRam0000000001f26310,extraout_x1,&uStack_70,&uStack_78,1);
    plVar6 = plStack_d0;
    uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_01f20160;
    iVar4 = _CVPixelBufferPoolCreatePixelBufferWithAuxAttributes
                      (uVar8,plStack_d0[2],uVar5,unaff_x22);
    if ((iVar4 == 0) &&
       (plStack_e0 = plVar9,
       iVar4 = _CVMetalTextureCacheCreateTextureFromImage
                         (uVar8,plVar6[3],*unaff_x22,0,0x50,param_3,param_4,0), iVar4 == 0)) {
      lVar3 = _CVMetalTextureGetTexture(*plVar9);
      *param_5 = lVar3;
      func_0x01a19ee0(plVar6[1]);
      lVar3 = _objc_retain();
      param_5[1] = lVar3;
      if ((*param_5 == 0) || (lVar3 == 0)) {
        func_0x0027e008(param_5);
        goto LAB_0027e264;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      }
      param_4 = 1;
      _objc_setAssociatedObject(lVar3,0x2093210,PTR____kCFBooleanTrue_01f20158,1);
      bVar1 = bRam0000000002093214;
      lVar3 = lRam0000000002057dc0;
      LOAcquire();
      bRam0000000002093214 = 1;
      LORelease();
      if ((bVar1 & 1) == 0) {
        LOAcquire();
        lRam0000000002057db8 = lRam0000000002057db8 + 1;
        LORelease();
      }
      plVar9 = (long *)((long)&MACH_HEADER.magic + 1);
      lRam0000000002057dc0 = lRam0000000002057dc0 + 1;
      param_5[4] = lRam0000000002057db8;
      param_5[5] = lVar3;
    }
    else {
      _objc_release(param_5[1]);
      *param_5 = 0;
      param_5[1] = 0;
      if (param_5[3] != 0) {
        _CFRelease();
      }
      *plVar9 = 0;
      if (*unaff_x22 != 0) {
        _CVPixelBufferRelease();
      }
      param_5[2] = 0;
// WM - stripping the watermark breaks the license
      param_5[4] = 0;
      param_5[5] = 0;
      if ((char)param_5[6] == '\x01') {
        LOAcquire();
        uRam0000000002093218 = uRam0000000002093218 - 1;
        LORelease();
      }
      plVar9 = (long *)0x0;
      *(undefined1 *)(param_5 + 6) = 0;
    }
  }
  else {
    if ((bRam0000000002093211 & 1) == 0) {
      bRam0000000002093211 = 1;
      unaff_x22 = (long *)((long)plRam0000000002093240 + 1);
      plRam0000000002093240 = unaff_x22;
      uVar5 = _objc_retain(param_1);
/* wm:donate: donate/README.md */
      uStack_98 = _objc_retain(param_2);
      puStack_c0 = PTR___NSConcreteStackBlock_01f201f0;
      uStack_b8 = _UNK_01adb7e0;
      pcStack_b0 = FUN_0027ee40;
      puStack_a8 = &UNK_01dc1438;
      uStack_a0 = uVar5;
      uStack_90 = param_3;
      uStack_88 = param_4;
      plStack_80 = unaff_x22;
      _dispatch_async(PTR___dispatch_main_q_01f20220,&puStack_c0);
    }
    plStack_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    __ZNSt3__15mutex6unlockEv(0x2057dc8);
LAB_0027e264:
    plVar9 = (long *)0x0;
  }
  plVar6 = plStack_c8;
  uStack_100 = param_4;
  if (plStack_c8 != (long *)0x0) {
    LOAcquire();
    lVar3 = plStack_c8[1];
    plStack_c8[1] = lVar3 + -1;
    LORelease();
    if (lVar3 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
LAB_0027e298:
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
/* WM - watermarked copy - do not remove */
    return plVar9;
  }
  uVar5 = ___stack_chk_fail();
  func_0x0027dfac(&plStack_d0);
  uVar5 = __Unwind_Resume(uVar5);
  __ZNSt3__15mutex6unlockEv(0x2057dc8);
  uVar5 = __Unwind_Resume(uVar5);
  __ZNSt3__15mutex6unlockEv(0x2057dc8);
  plVar6 = (long *)__Unwind_Resume(uVar5);
  plVar9 = plVar6;
  if (plVar6 != (long *)0x0) {
    puStack_e8 = &SUB_0027e518;
    if (((plVar6[1] != 0) && (*plVar6 != 0)) && (plVar9 = (long *)0x0, plVar6[2] != 0)) {
      plStack_110 = unaff_x22;
      uStack_f8 = uVar5;
      lStack_f0 = (long)register0x00000008 + -0x10;
      uVar5 = _CVPixelBufferRetain();
      auVar10 = _CFRetain(plVar6[3]);
      uStack_120 = auVar10._0_8_;
      lStack_130 = plVar6[4];
      lStack_118 = plVar6[5];
      *(undefined1 *)(plVar6 + 6) = 0;
      puStack_150 = PTR___NSConcreteStackBlock_01f201f0;
      uStack_148 = _UNK_01adb7e8;
      puStack_140 = &DAT_0027e61c;
      puStack_138 = &UNK_01dc13f8;
      uStack_128 = uVar5;
      func_0x01a19c60(plVar6[1],auVar10._8_8_,&puStack_150);
      func_0x01a19f00(plVar6[1]);
      _objc_release(plVar6[1]);
      *plVar6 = 0;
      plVar6[1] = 0;
      if (plVar6[3] != 0) {
        _CFRelease();
      }
      plVar6[3] = 0;
/*  watermarked copy - do not remove  */
      plVar9 = (long *)0x0;
      if (plVar6[2] != 0) {
        plVar9 = (long *)_CVPixelBufferRelease();
      }
      plVar6[2] = 0;
      plVar6[4] = 0;
      plVar6[5] = 0;
      if ((char)plVar6[6] == '\x01') {
        LOAcquire();
        uRam0000000002093218 = uRam0000000002093218 - 1;
        LORelease();
      }
      *(undefined1 *)(plVar6 + 6) = 0;
    }
  }
  return plVar9;
}

