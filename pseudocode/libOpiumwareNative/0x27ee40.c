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
 *  file-id: 0x27ee40:33cd047fe7
 *  --------------------------------------------------------------------------*/

void FUN_0027ee40(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar3 = *(long *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  lVar9 = *(long *)(param_1 + 0x38);
  lVar13 = *(long *)(param_1 + 0x40);
  __ZNSt3__15mutex4lockEv(0x2057dc8);
  lVar5 = lRam0000000002093240;
  cVar1 = cRam0000000002093211;
  __ZNSt3__15mutex6unlockEv(0x2057dc8);
  if (lVar13 != lVar5 || cVar1 == '\0') goto LAB_0027f418;
  lVar5 = func_0x0027f554(lVar3);
  plStack_e8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  plVar7 = plStack_e0;
  if (lVar5 != 0) {
    if (lRam0000000002093260 == 0) {
      auVar15 = _objc_alloc(uRam0000000001f26328);
      auVar15 = func_0x01a1a320(0,0,0x3ff0000000000000,0x3ff0000000000000,auVar15._0_8_,
                                auVar15._8_8_,0x80,2,0);
      lRam0000000002093260 = auVar15._0_8_;
      plVar7 = plStack_e0;
      if (lRam0000000002093260 == 0) goto LAB_0027f238;
      func_0x01a1b1e0(lRam0000000002093260,auVar15._8_8_,0);
      func_0x01a1b180(lRam0000000002093260,extraout_x1,0);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x01a1afa0(lRam0000000002093260,extraout_x1_00,0);
      auVar15 = func_0x01a19e80(uRam0000000001f26330);
      func_0x01a1ab60(lRam0000000002093260,auVar15._8_8_,auVar15._0_8_);
      func_0x01a1afe0(lRam0000000002093260,extraout_x1_01,1);
      func_0x01a1afc0(lRam0000000002093260,extraout_x1_02,0);
      func_0x01a1ab40(lRam0000000002093260,extraout_x1_03,2);
      func_0x01a1ac80(lRam0000000002093260,extraout_x1_04,0x140);
      _objc_alloc(uRam0000000001f26318);
      uVar6 = func_0x01a1a360(0,0,0x3ff0000000000000,0x3ff0000000000000);
      auVar15 = func_0x01a1a520(uRam0000000001f26338);
      uVar12 = auVar15._0_8_;
      func_0x01a1b180(uVar12,auVar15._8_8_,0);
      func_0x01a1ad00(uVar12,extraout_x1_05,*(undefined8 *)PTR__kCAGravityResize_01f20198);
      func_0x01a19e80(uRam0000000001f26330);
      auVar15 = func_0x01a19b80();
      func_0x01a1ab60(uVar12,auVar15._8_8_,auVar15._0_8_);
      func_0x01a1b040(uVar6,extraout_x1_06,uVar12);
/* thanks for reading - discord.gg/sdkhDjTex */
      func_0x01a1b540(uVar6,extraout_x1_07,1);
      func_0x01a1acc0(lRam0000000002093260,extraout_x1_08,uVar6);
      _objc_release(uVar6);
      func_0x01a1b2e0(lRam0000000002093260,extraout_x1_09,0);
      func_0x01a1b6a0(0x3fa1111111111111,uRam0000000001f26340,extraout_x1_10,1,&UNK_01dc1488);
      uRam0000000002093268 = _objc_retain();
      auVar15 = func_0x01a1a5c0(uRam0000000001f26348);
      func_0x01a19cc0(auVar15._0_8_,auVar15._8_8_,uRam0000000002093268,
                      *(undefined8 *)PTR__NSRunLoopCommonModes_01f20140);
    }
    plVar7 = (long *)__Znwm(0x48);
    plVar11 = plVar7 + 1;
    *plVar11 = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_01dc14b8;
    plVar14 = plVar7 + 3;
    plVar7[4] = 0;
    *plVar14 = 0;
    plVar7[6] = 0;
    plVar7[5] = 0;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plStack_d8 = plVar14;
    plStack_d0 = plVar7;
    lVar8 = _objc_retain(uVar10);
    *plVar14 = lVar8;
    auVar15 = func_0x01a1a6a0(uVar10);
    plVar7[4] = auVar15._0_8_;
    plVar7[7] = lVar2;
    plVar7[8] = lVar9;
    uStack_b8 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_01f200f8;
    auVar15 = func_0x01a1a780(uRam0000000001f26350,auVar15._8_8_,lVar2);
    uStack_90 = auVar15._0_8_;
    uStack_b0 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_01f200d0;
    auVar15 = func_0x01a1a780(uRam0000000001f26350,auVar15._8_8_,lVar9);
    uStack_88 = auVar15._0_8_;
/* wm:reversing this took months of machine time */
    uStack_a8 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_01f200e8;
    uStack_80 = 0x1f1ffa8;
    uStack_a0 = *(undefined8 *)PTR__kCVPixelBufferMetalCompatibilityKey_01f200e0;
    uStack_98 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_01f200d8;
    puStack_78 = PTR____kCFBooleanTrue_01f20158;
    puStack_70 = PTR____NSDictionary0__struct_01f20150;
    auVar15 = func_0x01a1a1a0(uRam0000000001f26310,auVar15._8_8_,&uStack_90,&uStack_b8,5);
    uStack_c8 = *(undefined8 *)PTR__kCVMetalTextureUsage_01f200c8;
    uStack_c0 = 0x1f1ffc0;
    uVar6 = func_0x01a1a1a0(uRam0000000001f26310,auVar15._8_8_,&uStack_c0,&uStack_c8,1);
    if (plVar7[4] == 0) {
LAB_0027f1d8:
      LOAcquire();
      lVar2 = *plVar11;
      *plVar11 = lVar2 + -1;
      LORelease();
      if (lVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      plVar7 = (long *)0x0;
// WM - proprietary - see LICENSE - do not sell
      plVar14 = (long *)0x0;
    }
    else {
      uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_01f20160;
      iVar4 = _CVPixelBufferPoolCreate(uVar12,0,auVar15._0_8_,plVar7 + 5);
      if ((iVar4 != 0) ||
         (iVar4 = _CVMetalTextureCacheCreate(uVar12,0,uVar10,uVar6,plVar7 + 6), iVar4 != 0))
      goto LAB_0027f1d8;
    }
    plVar11 = plStack_e0;
    plStack_e8 = plVar14;
    if (plStack_e0 != (long *)0x0) {
      LOAcquire();
      lVar2 = plStack_e0[1];
      plStack_e0[1] = lVar2 + -1;
      LORelease();
      if (lVar2 == 0) {
        lVar2 = *plStack_e0;
        plStack_e0 = plVar7;
        (**(code **)(lVar2 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        plVar7 = plStack_e0;
      }
    }
  }
LAB_0027f238:
  plStack_e0 = plVar7;
  __ZNSt3__15mutex4lockEv(0x2057dc8);
  plVar7 = plStack_e8;
// WM - origin: github.com/pengussy
  lVar2 = lRam0000000002093248;
  lVar9 = lRam0000000002057db8;
  if ((lVar13 == lRam0000000002093240) && (cRam0000000002093211 = '\0', plStack_e8 != (long *)0x0))
  {
    lVar9 = func_0x01a1b700(lVar5);
    if (lVar2 != lVar9) {
      if (lRam0000000002093228 != 0) {
        _CGImageRelease();
      }
      lRam0000000002093228 = 0;
      lRam0000000002093230 = 0;
      uRam0000000002093220 = 0;
      func_0x01a19f40(lRam0000000002093260);
      auVar15 = func_0x01a1a520();
      func_0x01a1ace0(auVar15._0_8_,auVar15._8_8_,0);
      iVar4 = func_0x01a1a4a0(lRam0000000002093260);
      if (iVar4 != 0) {
        func_0x01a1a820(lRam0000000002093260,extraout_x1_11,0);
      }
      auVar15 = func_0x01a1a860(lRam0000000002093260);
      if (auVar15._0_8_ != 0) {
        func_0x01a1a920(auVar15._0_8_,auVar15._8_8_,lRam0000000002093260);
      }
      uRam0000000002093270 = 0;
      uRam0000000002093298 = *(undefined8 *)(PTR__NSZeroSize_01f20100 + 8);
      uRam0000000002093290 = *(undefined8 *)PTR__NSZeroSize_01f20100;
      _objc_release(lRam0000000002093248);
      func_0x01a1b700(lVar5);
      lRam0000000002093248 = _objc_retain();
      uRam0000000002093212 = 0;
      func_0x0027f8c0();
    }
    if (lRam0000000002093250 != lVar3) {
      _objc_release();
      lRam0000000002093250 = _objc_retain(lVar3);
    }
/* donate: donate/README.md - github.com/pengussy */
    if (lRam0000000002093258 != lVar5) {
      _objc_release();
      lRam0000000002093258 = _objc_retain(lVar5);
    }
    plVar14 = plStack_e0;
    plVar11 = plRam0000000002093288;
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    plRam0000000002093280 = plVar7;
    plRam0000000002093288 = plVar14;
    if (plVar11 != (long *)0x0) {
      LOAcquire();
      lVar2 = plVar11[1];
      plVar11[1] = lVar2 + -1;
      LORelease();
      if (lVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    LOAcquire();
    LORelease();
    lVar9 = lRam0000000002057db8 + 1;
    lRam0000000002093238 = lVar3;
    if (lRam0000000002093228 != 0) {
      lRam0000000002093230 = lRam0000000002057db8 + 1;
    }
  }
/*  thanks for reading - discord.gg/sdkhDjTex  */
  lRam0000000002057db8 = lVar9;
  __ZNSt3__15mutex6unlockEv(0x2057dc8);
  plVar7 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    LOAcquire();
    lVar3 = plStack_e0[1];
    plStack_e0[1] = lVar3 + -1;
    LORelease();
    if (lVar3 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_0027f418:
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return;
  }
  uVar10 = ___stack_chk_fail();
  func_0x0027dfac(&plStack_e8);
  uVar10 = __Unwind_Resume(uVar10);
  func_0x0027dfac(&plStack_d8);
  func_0x0027dfac(&plStack_e8);
  uVar10 = __Unwind_Resume(uVar10);
  __ZNSt3__15mutex6unlockEv(0x2057dc8);
  func_0x0027dfac(&plStack_e8);
  __Unwind_Resume(uVar10);
  uVar10 = __Unwind_Resume();
  func_0x0027dfac(&plStack_e8);
  auVar15 = __Unwind_Resume(uVar10);
  __Block_object_assign(auVar15._0_8_ + 0x20,*(undefined8 *)(auVar15._8_8_ + 0x20),3);
                    /* WARNING: Could not recover jumptable at 0x01a16bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_01f24218)
            (auVar15._0_8_ + 0x28,*(undefined8 *)(auVar15._8_8_ + 0x28),3);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  return;
}

