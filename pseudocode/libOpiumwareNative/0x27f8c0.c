/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x27f8c0:dd0a8ae00d
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0027fd54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0027fd58) */
/* WARNING: Removing unreachable block (ram,0x0027fd5c) */
/* WARNING: Removing unreachable block (ram,0x0027fd68) */

void FUN_0027f8c0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  long lVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined *puVar12;
  undefined *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined *unaff_x28;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
// WM - donate: donate/README.md
  undefined1 auVar23 [16];
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
/* found on a paste site? it was re-uploaded illegally */
  undefined8 uStack_270;
  undefined1 auStack_268 [128];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  puVar16 = auStack_68 + 0x58;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  auVar23 = func_0x01a1a0a0(uRam0000000001f26358);
  lVar10 = lRam0000000002093200;
  lVar6 = auVar23._0_8_;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  uStack_2a0 = 0;
  auVar23 = func_0x01a1a060(lRam0000000002093200,auVar23._8_8_,&uStack_2d0,auStack_f0,0x10);
  if (auVar23._0_8_ != 0) {
    unaff_x23 = *plStack_2c0;
    do {
      uVar19 = auVar23._8_8_;
      unaff_x24 = 0;
      do {
        if (*plStack_2c0 != unaff_x23) {
          _objc_enumerationMutation(lVar10);
          uVar19 = extraout_x1_03;
        }
        func_0x01a1a960(lVar6,uVar19,*(undefined8 *)(lStack_2c8 + unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
        uVar19 = extraout_x1_02;
      } while (auVar23._0_8_ != unaff_x24);
      auVar23 = func_0x01a1a060(lVar10,extraout_x1_02,&uStack_2d0,auStack_f0,0x10);
      unaff_x22 = (undefined *)0x0;
    } while (auVar23._0_8_ != 0);
  }
  if (lRam0000000002093200 == 0) {
    auVar23 = _objc_alloc_init(uRam0000000001f26308);
  }
  else {
    func_0x01a1a900();
    auVar23._8_8_ = extraout_x1_04;
    auVar23._0_8_ = lRam0000000002093200;
  }
  lRam0000000002093200 = auVar23._0_8_;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  puStack_300 = (undefined8 *)0x0;
  uStack_1e8 = *(undefined8 *)PTR__NSWindowWillCloseNotification_01f200b0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  uStack_1e0 = *(undefined8 *)PTR__NSWindowWillEnterFullScreenNotification_01f200b8;
  uStack_1d8 = *(undefined8 *)PTR__NSWindowDidEnterFullScreenNotification_01f20078;
  uStack_1d0 = *(undefined8 *)PTR__NSWindowWillExitFullScreenNotification_01f200c0;
  uStack_1c8 = *(undefined8 *)PTR__NSWindowDidExitFullScreenNotification_01f20080;
  uStack_1c0 = *(undefined8 *)PTR__NSWindowDidMoveNotification_01f20090;
  uStack_1b8 = *(undefined8 *)PTR__NSWindowDidResizeNotification_01f200a8;
  uStack_1b0 = *(undefined8 *)PTR__NSWindowDidBecomeKeyNotification_01f20050;
  uStack_1a8 = *(undefined8 *)PTR__NSWindowDidBecomeMainNotification_01f20058;
  uStack_1a0 = *(undefined8 *)PTR__NSWindowDidResignKeyNotification_01f20098;
  uStack_198 = *(undefined8 *)PTR__NSWindowDidResignMainNotification_01f200a0;
  uStack_190 = *(undefined8 *)PTR__NSWindowDidChangeScreenNotification_01f20068;
  uStack_188 = *(undefined8 *)PTR__NSWindowDidMiniaturizeNotification_01f20088;
  uStack_180 = *(undefined8 *)PTR__NSWindowDidDeminiaturizeNotification_01f20070;
  uStack_178 = *(undefined8 *)PTR__NSWindowDidChangeBackingPropertiesNotification_01f20060;
  ppuVar15 = &PTR_s_setStencilAttachmentPixelFormat__01f26000;
  auVar23 = func_0x01a19d40(uRam0000000001f26360,auVar23._8_8_,&uStack_1e8,0xf);
/* WM - more drops soon - github.com/pengussy */
  puVar12 = auVar23._0_8_;
  auVar23 = func_0x01a1a060(puVar12,auVar23._8_8_,&uStack_310,auStack_170,0x10);
  uVar19 = auVar23._8_8_;
  lVar10 = auVar23._0_8_;
  if (lVar10 != 0) {
    unaff_x28 = (undefined *)*puStack_300;
    unaff_x22 = &UNK_01dc1518;
    do {
      lVar13 = 0;
      do {
        if ((undefined *)*puStack_300 != unaff_x28) {
          _objc_enumerationMutation(puVar12);
        }
        unaff_x24 = *(long *)(lStack_308 + lVar13 * 8);
        auVar23 = func_0x01a1a5a0(uRam0000000001f26368);
        auVar23 = func_0x01a19ca0(lVar6,auVar23._8_8_,unaff_x24,param_5,auVar23._0_8_,&UNK_01dc1518)
        ;
        uVar19 = auVar23._8_8_;
        if (auVar23._0_8_ != 0) {
          func_0x01a19c80(lRam0000000002093200,uVar19,auVar23._0_8_);
          uVar19 = extraout_x1_05;
        }
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
      auVar23 = func_0x01a1a060(puVar12,uVar19,&uStack_310,auStack_170,0x10);
      uVar19 = auVar23._8_8_;
      lVar10 = auVar23._0_8_;
      unaff_x23 = 0;
    } while (lVar10 != 0);
  }
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_348 = 0;
/* proprietary - see LICENSE - do not sell */
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_288 = *(undefined8 *)PTR__NSApplicationDidBecomeActiveNotification_01f20030;
  uStack_280 = *(undefined8 *)PTR__NSApplicationDidResignActiveNotification_01f20040;
  uStack_278 = *(undefined8 *)PTR__NSApplicationDidHideNotification_01f20038;
  uStack_270 = *(undefined8 *)PTR__NSApplicationDidUnhideNotification_01f20048;
  auVar23 = func_0x01a19d40(uRam0000000001f26360,uVar19,&uStack_288,4);
  lVar10 = auVar23._0_8_;
  lVar13 = func_0x01a1a060(lVar10,auVar23._8_8_,&uStack_350,auStack_268,0x10);
  puVar17 = PTR__NSApp_01f20028;
  if (lVar13 != 0) {
    ppuVar15 = (undefined **)*plStack_340;
    puVar12 = &UNK_01dc1538;
    do {
      lVar14 = 0;
      do {
        if ((undefined **)*plStack_340 != ppuVar15) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x23 = *(long *)(lStack_348 + lVar14 * 8);
        unaff_x24 = *(long *)puVar17;
        auVar23 = func_0x01a1a5a0(uRam0000000001f26368);
        auVar23 = func_0x01a19ca0(lVar6,auVar23._8_8_,unaff_x23,unaff_x24,auVar23._0_8_,
// WM - keep the notice, keep the source honest
                                  &UNK_01dc1538);
        uVar19 = auVar23._8_8_;
        if (auVar23._0_8_ != 0) {
          func_0x01a19c80(lRam0000000002093200,uVar19,auVar23._0_8_);
          uVar19 = extraout_x1_06;
        }
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      lVar13 = func_0x01a1a060(lVar10,uVar19,&uStack_350,auStack_268,0x10);
      unaff_x22 = (undefined *)0x0;
      unaff_x28 = puVar17;
    } while (lVar13 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  puVar17 = &DAT_0027fcc0;
  auVar23 = ___stack_chk_fail();
  lVar14 = auVar23._8_8_;
  puVar4 = &uStack_350;
  lVar13 = auVar23._0_8_;
  while( true ) {
    *(undefined **)((long)puVar4 + -0x50) = unaff_x28;
    *(undefined ***)((long)puVar4 + -0x48) = ppuVar15;
    *(long *)((long)puVar4 + -0x40) = unaff_x24;
    *(long *)((long)puVar4 + -0x38) = unaff_x23;
    *(undefined **)((long)puVar4 + -0x30) = unaff_x22;
    *(undefined **)((long)puVar4 + -0x28) = puVar12;
    *(long *)((long)puVar4 + -0x20) = lVar10;
    *(long *)((long)puVar4 + -0x18) = lVar6;
    *(undefined1 **)((long)puVar4 + -0x10) = puVar16;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
    *(undefined **)((long)puVar4 + -8) = puVar17;
    puVar16 = (undefined1 *)((long)puVar4 + -0x10);
    *(undefined8 *)((long)puVar4 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_01f20200;
    lVar11 = lVar13;
    if (lVar13 == 0) break;
    *(undefined8 *)((long)puVar4 + -0xf8) = 0;
    *(undefined8 *)((long)puVar4 + -0x100) = 0;
    *(undefined8 *)((long)puVar4 + -0xe8) = 0;
    *(undefined8 *)((long)puVar4 + -0xf0) = 0;
    *(undefined8 *)((long)puVar4 + -0x118) = 0;
    *(undefined8 *)((long)puVar4 + -0x120) = 0;
    *(undefined8 *)((long)puVar4 + -0x108) = 0;
    *(undefined8 *)((long)puVar4 + -0x110) = 0;
    auVar23 = func_0x01a1b620();
    puVar12 = auVar23._0_8_;
    puVar8 = (undefined *)
             func_0x01a1a060(puVar12,auVar23._8_8_,(undefined1 *)((long)puVar4 + -0x120),
/*  unlicensed copy if this notice is missing  */
                             (undefined1 *)((long)puVar4 + -0xd8),0x10);
    lVar6 = lVar13;
    lVar10 = lVar14;
    if (puVar8 == (undefined *)0x0) {
      lVar9 = func_0x01a1a520(lVar13);
      lVar11 = 0;
      if ((lVar14 != 0) && (lVar9 != 0)) goto code_r0x0027fd9c;
      break;
    }
    unaff_x23 = **(long **)((long)puVar4 + -0x110);
    unaff_x24 = 0;
    if (**(long **)((long)puVar4 + -0x110) != unaff_x23) {
      _objc_enumerationMutation(puVar12);
    }
    puVar1 = (undefined8 *)((long)puVar4 + -0x118);
    puVar17 = &UNK_0027fd58;
    puVar4 = (undefined8 *)((long)puVar4 + -0x120);
    lVar13 = *(long *)*puVar1;
    unaff_x22 = puVar8;
  }
  goto code_r0x0027fdc4;
  while (lVar14 = func_0x01a1b640(lVar14), lVar14 != 0) {
code_r0x0027fd9c:
    lVar10 = func_0x01a1a520(lVar13);
    if (lVar14 == lVar10) {
      lVar11 = lVar13;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      lVar10 = lVar14;
      goto code_r0x0027fdc4;
    }
  }
  lVar11 = 0;
  lVar10 = lVar14;
code_r0x0027fdc4:
  if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)puVar4 + -0x58)) {
    return;
  }
  ___stack_chk_fail(lVar11);
  *(undefined8 *)((long)puVar4 + -0x180) = unaff_d11;
  *(undefined8 *)((long)puVar4 + -0x178) = unaff_d10;
  *(undefined8 *)((long)puVar4 + -0x170) = unaff_d9;
  *(undefined8 *)((long)puVar4 + -0x168) = unaff_d8;
  *(long *)((long)puVar4 + -0x160) = unaff_x24;
  *(long *)((long)puVar4 + -0x158) = unaff_x23;
  *(undefined **)((long)puVar4 + -0x150) = unaff_x22;
  *(undefined **)((long)puVar4 + -0x148) = puVar12;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  *(long *)((long)puVar4 + -0x140) = lVar10;
  *(long *)((long)puVar4 + -0x138) = lVar6;
  *(undefined1 **)((long)puVar4 + -0x130) = puVar16;
  *(undefined **)((long)puVar4 + -0x128) = &DAT_0027fdfc;
  if (((lRam0000000002093260 != 0 && lRam0000000002093228 != 0) && (cRam0000000002093214 == '\x01'))
     && (lRam0000000002057db8 == lRam0000000002093230 && cRam0000000002093212 == '\0')) {
    lVar10 = func_0x0027f554(uRam0000000002093250);
    if ((lVar10 != 0) && (lVar6 = func_0x01a1b700(lVar10), lVar6 != lRam0000000002093248)) {
      func_0x01a1b700(lVar10);
      lVar6 = _objc_retain();
      auVar23 = func_0x01a1a860(lRam0000000002093260);
      if (auVar23._0_8_ != 0) {
        func_0x01a1a920(auVar23._0_8_,auVar23._8_8_,lRam0000000002093260);
      }
      lRam0000000002093270 = 0;
      uRam0000000002093298 = *(undefined8 *)(PTR__NSZeroSize_01f20100 + 8);
      uRam0000000002093290 = *(undefined8 *)PTR__NSZeroSize_01f20100;
      _objc_release(lRam0000000002093248);
      bRam0000000002093213 = 0;
      lRam0000000002093248 = lVar6;
      FUN_0027f8c0(lVar6);
    }
    if (lVar10 != lRam0000000002093258) {
      lVar10 = _objc_retain(lVar10);
      _objc_release(lRam0000000002093258);
      lRam0000000002093258 = lVar10;
    }
    if ((((bRam0000000002093213 & 1) == 0) &&
        (uVar7 = func_0x01a1a420(*(undefined8 *)PTR__NSApp_01f20028), (uVar7 & 1) == 0)) &&
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
       ((iVar5 = func_0x01a1a4a0(lRam0000000002093248), iVar5 != 0 &&
        (((uVar7 = func_0x01a1a480(lRam0000000002093248), (uVar7 & 1) == 0 &&
          (lRam0000000002093258 != 0)) && (iVar5 = func_0x01a1a440(), iVar5 == 0)))))) {
      uVar18 = func_0x01a19de0(lRam0000000002093258);
      uVar21 = param_2;
      uVar20 = param_3;
      uVar22 = param_4;
      auVar23 = func_0x01a1a520(lRam0000000002093258);
      uVar19 = auVar23._8_8_;
      if (auVar23._0_8_ != 0) {
        auVar23 = func_0x01a1b640(uRam0000000002093250);
        uVar2 = uRam0000000002093250;
        uVar19 = auVar23._8_8_;
        if (auVar23._0_8_ != 0) {
          uVar19 = func_0x01a19de0(uRam0000000002093250);
          auVar23 = func_0x01a1a520(lRam0000000002093258);
          uVar18 = func_0x01a19fc0(uVar19,uVar21,uVar2,auVar23._8_8_,auVar23._0_8_);
          uVar19 = extraout_x1;
          param_2 = uVar21;
          param_3 = uVar20;
          param_4 = uVar22;
        }
      }
      lVar10 = lRam0000000002093248;
      func_0x01a19fe0(uVar18,param_2,lRam0000000002093258,uVar19,0);
      uVar20 = func_0x01a1a000(lVar10);
      uVar19 = param_3;
      uVar21 = param_4;
      iVar5 = _NSIsEmptyRect();
      if (iVar5 == 0) {
        func_0x01a19da0(uRam0000000001f26370);
        func_0x01a1ae80(uRam0000000001f26370,extraout_x1_00,1);
        func_0x01a1a240(lRam0000000002093260);
        auVar23 = _NSEqualRects();
        if ((auVar23._0_8_ & 1) == 0) {
          func_0x01a1af60(uVar20,param_2,lRam0000000002093260,auVar23._8_8_,0);
          uVar19 = param_3;
/* wm:no support for modified copies */
          uVar21 = param_4;
        }
        uVar20 = func_0x01a19d80(lRam0000000002093248);
        func_0x01a19f40(lRam0000000002093260);
        func_0x01a1a520();
        func_0x01a1ad20(uVar20);
        func_0x01a19f40(lRam0000000002093260);
        func_0x01a1a520();
        lVar6 = func_0x01a19f60();
        lVar10 = lRam0000000002093228;
        if (lVar6 != lRam0000000002093228) {
          func_0x01a19f40(lRam0000000002093260);
          auVar23 = func_0x01a1a520();
          func_0x01a1ace0(auVar23._0_8_,auVar23._8_8_,lVar10);
        }
        func_0x01a19f00(uRam0000000001f26370);
        lVar10 = func_0x01a1a580(lRam0000000002093260);
        lVar6 = func_0x01a1a580(lRam0000000002093248);
        if (lVar10 != lVar6) {
          auVar23 = func_0x01a1a580(lRam0000000002093248);
          func_0x01a1b060(lRam0000000002093260,auVar23._8_8_,auVar23._0_8_);
        }
        lVar10 = func_0x01a1a860(lRam0000000002093260);
        if (lVar10 == lRam0000000002093248) {
          uVar7 = func_0x01a1a4a0(lRam0000000002093260);
          lVar10 = lRam0000000002093260;
          if ((uVar7 & 1) == 0) {
            auVar23 = func_0x01a1b720(lRam0000000002093248);
            func_0x01a1a840(lVar10,auVar23._8_8_,1,auVar23._0_8_);
          }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        else {
          auVar23 = func_0x01a1a860();
          uVar20 = auVar23._8_8_;
          if (auVar23._0_8_ != 0) {
            func_0x01a1a920(auVar23._0_8_,uVar20,lRam0000000002093260);
            uVar20 = extraout_x1_01;
          }
          lRam0000000002093270 = 0;
          uRam0000000002093298 = *(undefined8 *)(PTR__NSZeroSize_01f20100 + 8);
          uRam0000000002093290 = *(undefined8 *)PTR__NSZeroSize_01f20100;
          func_0x01a19c40(lRam0000000002093248,uVar20,lRam0000000002093260,1);
        }
        *(undefined8 *)((long)puVar4 + -0x160) = *(undefined8 *)((long)puVar4 + -0x170);
        *(undefined8 *)((long)puVar4 + -0x158) = *(undefined8 *)((long)puVar4 + -0x168);
        *(undefined8 *)((long)puVar4 + -0x150) = *(undefined8 *)((long)puVar4 + -0x150);
        *(undefined8 *)((long)puVar4 + -0x148) = *(undefined8 *)((long)puVar4 + -0x148);
        *(undefined8 *)((long)puVar4 + -0x140) = *(undefined8 *)((long)puVar4 + -0x140);
        *(undefined8 *)((long)puVar4 + -0x138) = *(undefined8 *)((long)puVar4 + -0x138);
        *(undefined8 *)((long)puVar4 + -0x130) = *(undefined8 *)((long)puVar4 + -0x130);
        *(undefined8 *)((long)puVar4 + -0x128) = *(undefined8 *)((long)puVar4 + -0x128);
        if (((bRam0000000002093278 & 1) == 0) &&
           (iVar5 = ___cxa_guard_acquire(0x2093278), iVar5 != 0)) {
          func_0x00280234();
          ___cxa_guard_release(0x2093278);
        }
        if ((lRam0000000002093260 != 0) &&
           ((pcRam00000000020932a0 != (code *)0x0 && pcRam00000000020932a8 != (code *)0x0) &&
            pcRam00000000020932b0 != (code *)0x0)) {
          lVar10 = func_0x01a1b720();
          func_0x01a1a240(lRam0000000002093260);
          if ((0 < lVar10) &&
             (((lRam0000000002093270 != lVar10 ||
/* WM - if you paid for this, you were scammed */
               (uVar7 = _NSEqualSizes(uRam0000000002093290,uRam0000000002093298,uVar19,uVar21),
               (uVar7 & 1) == 0)) &&
              (lVar6 = (*pcRam00000000020932a8)(0,0,uVar19,uVar21), pcVar3 = pcRam00000000020932b0,
              lVar6 != 0)))) {
            uVar20 = (*pcRam00000000020932a0)();
            iRam0000000002057db0 = (*pcVar3)(uVar20,lVar10,lVar6);
            _CFRelease(lVar6);
            if (iRam0000000002057db0 == 0) {
              lRam0000000002093270 = lVar10;
              uRam0000000002093290 = uVar19;
              uRam0000000002093298 = uVar21;
              return;
            }
          }
        }
        return;
      }
    }
  }
  iVar5 = func_0x01a1a4a0(lRam0000000002093260);
  if (iVar5 == 0) {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a1a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_01f201e0)(lRam0000000002093260,PTR_s_orderOut__01f25d38,0);
  return;
}

