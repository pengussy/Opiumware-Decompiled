/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x27f554:c3490ede1f
 */

/* WARNING: Possible PIC construction at 0x0027f5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0027f790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0027fd54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0027f794) */
/* WARNING: Removing unreachable block (ram,0x0027f5ec) */
/* WARNING: Removing unreachable block (ram,0x0027fd58) */
/* WARNING: Removing unreachable block (ram,0x0027fd5c) */
/* WARNING: Removing unreachable block (ram,0x0027fd68) */

void FUN_0027f554(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined **param_5)

{
  undefined8 *puVar1;
  undefined8 *****pppppuVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
/*  thanks for reading - discord.gg/sdkhDjTex  */
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar13;
  undefined8 extraout_x1_08;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **ppuVar14;
  undefined **unaff_x23;
  long lVar15;
  long lVar16;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined8 *****pppppuVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar22 [16];
  undefined8 uStack_480;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
/* WM - no support for modified copies */
  undefined8 *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [128];
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [128];
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined8 *****pppppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 ****ppppuStack_68;
  
  ppuVar6 = ppuRam0000000002093258;
  ppuVar8 = ppuRam0000000002093248;
  pppppuVar2 = (undefined8 *****)(auStack_e8 + 0xd8);
  ppppuStack_68 = *(undefined8 *****)PTR____stack_chk_guard_01f20200;
  lVar15 = 0x2093212;
  if ((((ppuRam0000000002093250 == param_5) && ((bRam0000000002093212 & 1) == 0)) &&
      (unaff_x20 = ppuVar6, unaff_x21 = ppuVar8,
      ppuRam0000000002093258 != (undefined **)0x0 && ppuRam0000000002093248 != (undefined **)0x0))
     && (((ppuVar7 = (undefined **)func_0x01a1b700(ppuRam0000000002093258), ppuVar7 == ppuVar8 &&
          (lVar12 = func_0x01a1a520(ppuVar6), param_5 != (undefined **)0x0)) && (lVar12 != 0)))) {
    unaff_x22 = param_5;
    do {
      ppuVar7 = (undefined **)func_0x01a1a520(ppuVar6);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      if (unaff_x22 == ppuVar7) {
        ppuVar7 = (undefined **)func_0x01a19f40(ppuVar8);
        if (ppuVar6 != ppuVar7) {
          auVar22 = func_0x01a19f40(ppuVar8);
          iVar5 = func_0x01a1a3c0(ppuVar6,auVar22._8_8_,auVar22._0_8_);
          if (iVar5 == 0) break;
        }
        ppuVar8 = ppuRam0000000002093258;
        goto LAB_0027f884;
      }
      unaff_x22 = (undefined **)func_0x01a1b640(unaff_x22);
    } while (unaff_x22 != (undefined **)0x0);
  }
  ppuVar6 = param_5;
  if ((ppuRam0000000002093248 == (undefined **)0x0) || ((bRam0000000002093212 & 1) != 0)) {
    if (param_5 != (undefined **)0x0) {
      ppuVar7 = param_5;
      ppuVar14 = unaff_x22;
      do {
        ppuVar8 = (undefined **)func_0x01a1a0c0(ppuVar7);
        uVar9 = _objc_opt_class(uRam0000000001f26318);
        uVar10 = _objc_opt_isKindOfClass(ppuVar8,uVar9);
        if ((((uVar10 & 1) != 0) &&
            (unaff_x22 = (undefined **)func_0x01a1b700(ppuVar8), unaff_x22 != (undefined **)0x0)) &&
           (ppuVar14 = unaff_x22, unaff_x22 != ppuRam0000000002093260)) {
          uVar9 = _objc_opt_class(uRam0000000001f26320);
          uVar10 = _objc_opt_isKindOfClass(unaff_x22,uVar9);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if ((((uVar10 & 1) == 0) && (ppuVar8 != (undefined **)0x0)) &&
             ((ppuVar11 = (undefined **)func_0x01a1b700(ppuVar8), ppuVar11 == unaff_x22 &&
              (lVar12 = func_0x01a1a520(ppuVar8), lVar12 != 0)))) {
            unaff_x23 = param_5;
            do {
              ppuVar11 = (undefined **)func_0x01a1a520(ppuVar8);
              if (unaff_x23 == ppuVar11) {
                ppuVar11 = (undefined **)func_0x01a19f40(unaff_x22);
                if (ppuVar8 != ppuVar11) {
                  auVar22 = func_0x01a19f40(unaff_x22);
                  uVar10 = func_0x01a1a3c0(ppuVar8,auVar22._8_8_,auVar22._0_8_);
                  if ((uVar10 & 1) == 0) break;
                }
                if ((unaff_x22 != ppuRam0000000002093248 && param_5 != ppuRam0000000002093250) &&
                    (ppuRam0000000002093248 != (undefined **)0x0 && (bRam0000000002093212 & 1) == 0)
                   ) {
                  ppuVar8 = (undefined **)0x0;
                }
                goto LAB_0027f884;
              }
              unaff_x23 = (undefined **)func_0x01a1b640(unaff_x23);
            } while (unaff_x23 != (undefined **)0x0);
          }
        }
        ppuVar7 = (undefined **)func_0x01a1b640(ppuVar7);
/* unlicensed copy if this notice is missing - github.com/pengussy */
        unaff_x22 = ppuVar14;
      } while (ppuVar7 != (undefined **)0x0);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    auVar22 = func_0x01a1b740(*(undefined8 *)PTR__NSApp_01f20028);
    unaff_x20 = auVar22._0_8_;
    auVar22 = func_0x01a1a060(unaff_x20,auVar22._8_8_,&uStack_130,auStack_e8,0x10);
    ppuVar8 = (undefined **)0x0;
    if (auVar22._0_8_ != 0) {
      unaff_x23 = (undefined **)*puStack_120;
      do {
        uVar9 = auVar22._8_8_;
        unaff_x21 = auVar22._0_8_;
        unaff_x27 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_120 != unaff_x23) {
            _objc_enumerationMutation(unaff_x20);
/* wm:origin: github.com/pengussy */
            uVar9 = extraout_x1_02;
          }
          unaff_x22 = *(undefined ***)(lStack_128 + (long)unaff_x27 * 8);
          if ((unaff_x22 != ppuRam0000000002093260) &&
             (iVar5 = func_0x01a1a4a0(unaff_x22), uVar9 = extraout_x1_03, iVar5 != 0)) {
            uVar9 = _objc_opt_class(uRam0000000001f26320);
            auVar22 = _objc_opt_isKindOfClass(unaff_x22,uVar9);
            uVar9 = auVar22._8_8_;
            if (((auVar22._0_8_ & 1) == 0) &&
               (((unaff_x22 == ppuRam0000000002093248 || ppuRam0000000002093248 == (undefined **)0x0
                 || ((bRam0000000002093212 & 1) != 0)) || (param_5 == ppuRam0000000002093250)))) {
              ppuVar8 = (undefined **)func_0x01a19f40(unaff_x22);
              puVar18 = (undefined *)0x27f794;
              puVar4 = &uStack_130;
              pppppuVar17 = pppppuVar2;
              goto code_r0x0027fcc0;
            }
          }
          unaff_x27 = (undefined **)((long)unaff_x27 + 1);
        } while (unaff_x21 != unaff_x27);
        auVar22 = func_0x01a1a060(unaff_x20,uVar9,&uStack_130,auStack_e8,0x10);
        ppuVar8 = (undefined **)0x0;
      } while (auVar22._0_8_ != 0);
    }
LAB_0027f884:
    if ((undefined8 ****)*(long *)PTR____stack_chk_guard_01f20200 == ppppuStack_68) {
      return;
    }
    uVar9 = ___stack_chk_fail(ppuVar8);
    pcStack_138 = FUN_0027f8c0;
// WM - origin: github.com/pengussy
    pppppuVar17 = &pppppuStack_140;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_01f20200;
    pppppuStack_140 = pppppuVar2;
    auVar22 = func_0x01a1a0a0(uRam0000000001f26358);
    lVar12 = lRam0000000002093200;
    ppuVar6 = auVar22._0_8_;
    lStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    puStack_3f0 = (undefined8 *)0x0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    auVar22 = func_0x01a1a060(lRam0000000002093200,auVar22._8_8_,&uStack_400,auStack_220,0x10);
    if (auVar22._0_8_ != 0) {
      unaff_x23 = (undefined **)*puStack_3f0;
      do {
        uVar13 = auVar22._8_8_;
        lVar15 = 0;
        do {
          if ((undefined **)*puStack_3f0 != unaff_x23) {
            _objc_enumerationMutation(lVar12);
            uVar13 = extraout_x1_05;
          }
          func_0x01a1a960(ppuVar6,uVar13,*(undefined8 *)(lStack_3f8 + lVar15 * 8));
          lVar15 = lVar15 + 1;
          uVar13 = extraout_x1_04;
        } while (auVar22._0_8_ != lVar15);
        auVar22 = func_0x01a1a060(lVar12,extraout_x1_04,&uStack_400,auStack_220,0x10);
        unaff_x22 = (undefined **)0x0;
      } while (auVar22._0_8_ != 0);
    }
    if (lRam0000000002093200 == 0) {
/* WM - if you paid for this, you were scammed */
      auVar22 = _objc_alloc_init(uRam0000000001f26308);
    }
    else {
      func_0x01a1a900();
      auVar22._8_8_ = extraout_x1_06;
      auVar22._0_8_ = lRam0000000002093200;
    }
    lRam0000000002093200 = auVar22._0_8_;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    lStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    puStack_430 = (undefined8 *)0x0;
    uStack_318 = *(undefined8 *)PTR__NSWindowWillCloseNotification_01f200b0;
    uStack_310 = *(undefined8 *)PTR__NSWindowWillEnterFullScreenNotification_01f200b8;
    uStack_308 = *(undefined8 *)PTR__NSWindowDidEnterFullScreenNotification_01f20078;
    uStack_300 = *(undefined8 *)PTR__NSWindowWillExitFullScreenNotification_01f200c0;
    uStack_2f8 = *(undefined8 *)PTR__NSWindowDidExitFullScreenNotification_01f20080;
    uStack_2f0 = *(undefined8 *)PTR__NSWindowDidMoveNotification_01f20090;
    uStack_2e8 = *(undefined8 *)PTR__NSWindowDidResizeNotification_01f200a8;
    uStack_2e0 = *(undefined8 *)PTR__NSWindowDidBecomeKeyNotification_01f20050;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    uStack_2d8 = *(undefined8 *)PTR__NSWindowDidBecomeMainNotification_01f20058;
    uStack_2d0 = *(undefined8 *)PTR__NSWindowDidResignKeyNotification_01f20098;
    uStack_2c8 = *(undefined8 *)PTR__NSWindowDidResignMainNotification_01f200a0;
    uStack_2c0 = *(undefined8 *)PTR__NSWindowDidChangeScreenNotification_01f20068;
    uStack_2b8 = *(undefined8 *)PTR__NSWindowDidMiniaturizeNotification_01f20088;
    uStack_2b0 = *(undefined8 *)PTR__NSWindowDidDeminiaturizeNotification_01f20070;
    uStack_2a8 = *(undefined8 *)PTR__NSWindowDidChangeBackingPropertiesNotification_01f20060;
    unaff_x27 = &PTR_s_setStencilAttachmentPixelFormat__01f26000;
    auVar22 = func_0x01a19d40(uRam0000000001f26360,auVar22._8_8_,&uStack_318,0xf);
    unaff_x21 = auVar22._0_8_;
    auVar22 = func_0x01a1a060(unaff_x21,auVar22._8_8_,&uStack_440,auStack_2a0,0x10);
    uVar13 = auVar22._8_8_;
    lVar12 = auVar22._0_8_;
    if (lVar12 != 0) {
      unaff_x28 = (undefined *)*puStack_430;
      unaff_x22 = (undefined **)&UNK_01dc1518;
      do {
        lVar16 = 0;
        do {
          if ((undefined *)*puStack_430 != unaff_x28) {
            _objc_enumerationMutation(unaff_x21);
          }
          lVar15 = *(long *)(lStack_438 + lVar16 * 8);
          auVar22 = func_0x01a1a5a0(uRam0000000001f26368);
          auVar22 = func_0x01a19ca0(ppuVar6,auVar22._8_8_,lVar15,uVar9,auVar22._0_8_,&UNK_01dc1518);
          uVar13 = auVar22._8_8_;
          if (auVar22._0_8_ != 0) {
            func_0x01a19c80(lRam0000000002093200,uVar13,auVar22._0_8_);
            uVar13 = extraout_x1_07;
          }
          lVar16 = lVar16 + 1;
        } while (lVar12 != lVar16);
        auVar22 = func_0x01a1a060(unaff_x21,uVar13,&uStack_440,auStack_2a0,0x10);
        uVar13 = auVar22._8_8_;
        lVar12 = auVar22._0_8_;
        unaff_x23 = (undefined **)0x0;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      } while (lVar12 != 0);
    }
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    lStack_478 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    puStack_470 = (undefined8 *)0x0;
    uStack_3b8 = *(undefined8 *)PTR__NSApplicationDidBecomeActiveNotification_01f20030;
    uStack_3b0 = *(undefined8 *)PTR__NSApplicationDidResignActiveNotification_01f20040;
    uStack_3a8 = *(undefined8 *)PTR__NSApplicationDidHideNotification_01f20038;
    uStack_3a0 = *(undefined8 *)PTR__NSApplicationDidUnhideNotification_01f20048;
    auVar22 = func_0x01a19d40(uRam0000000001f26360,uVar13,&uStack_3b8,4);
    unaff_x20 = auVar22._0_8_;
    lVar12 = func_0x01a1a060(unaff_x20,auVar22._8_8_,&uStack_480,auStack_398,0x10);
    puVar18 = PTR__NSApp_01f20028;
    if (lVar12 != 0) {
      unaff_x27 = (undefined **)*puStack_470;
      unaff_x21 = (undefined **)&UNK_01dc1538;
      do {
        lVar16 = 0;
        do {
          if ((undefined **)*puStack_470 != unaff_x27) {
            _objc_enumerationMutation(unaff_x20);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
          }
          unaff_x23 = *(undefined ***)(lStack_478 + lVar16 * 8);
          lVar15 = *(long *)puVar18;
          auVar22 = func_0x01a1a5a0(uRam0000000001f26368);
          auVar22 = func_0x01a19ca0(ppuVar6,auVar22._8_8_,unaff_x23,lVar15,auVar22._0_8_,
                                    &UNK_01dc1538);
          uVar9 = auVar22._8_8_;
          if (auVar22._0_8_ != 0) {
            func_0x01a19c80(lRam0000000002093200,uVar9,auVar22._0_8_);
            uVar9 = extraout_x1_08;
          }
          lVar16 = lVar16 + 1;
        } while (lVar12 != lVar16);
        lVar12 = func_0x01a1a060(unaff_x20,uVar9,&uStack_480,auStack_398,0x10);
        unaff_x22 = (undefined **)0x0;
        unaff_x28 = puVar18;
      } while (lVar12 != 0);
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_1a0) {
      return;
    }
    puVar18 = &SUB_0027fcc0;
    auVar22 = ___stack_chk_fail();
    param_5 = auVar22._8_8_;
    puVar4 = &uStack_480;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    ppuVar8 = auVar22._0_8_;
  }
  else {
    ppuVar8 = (undefined **)func_0x01a19f40();
    puVar18 = (undefined *)0x27f5ec;
    puVar4 = &uStack_130;
    pppppuVar17 = pppppuVar2;
  }
code_r0x0027fcc0:
  do {
    *(undefined **)((long)puVar4 + -0x50) = unaff_x28;
    *(undefined ***)((long)puVar4 + -0x48) = unaff_x27;
    *(long *)((long)puVar4 + -0x40) = lVar15;
    *(undefined ***)((long)puVar4 + -0x38) = unaff_x23;
    *(undefined ***)((long)puVar4 + -0x30) = unaff_x22;
    *(undefined ***)((long)puVar4 + -0x28) = unaff_x21;
    *(undefined ***)((long)puVar4 + -0x20) = unaff_x20;
    *(undefined ***)((long)puVar4 + -0x18) = ppuVar6;
    *(undefined8 ******)((long)puVar4 + -0x10) = pppppuVar17;
    *(undefined **)((long)puVar4 + -8) = puVar18;
    pppppuVar17 = (undefined8 *****)((long)puVar4 + -0x10);
    *(undefined8 *)((long)puVar4 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_01f20200;
    ppuVar7 = ppuVar8;
    if (ppuVar8 == (undefined **)0x0) goto code_r0x0027fdc4;
    *(undefined8 *)((long)puVar4 + -0xf8) = 0;
    *(undefined8 *)((long)puVar4 + -0x100) = 0;
    *(undefined8 *)((long)puVar4 + -0xe8) = 0;
    *(undefined8 *)((long)puVar4 + -0xf0) = 0;
    *(undefined8 *)((long)puVar4 + -0x118) = 0;
    *(undefined8 *)((long)puVar4 + -0x120) = 0;
    *(undefined8 *)((long)puVar4 + -0x108) = 0;
    *(undefined8 *)((long)puVar4 + -0x110) = 0;
// WM - unlicensed copy if this notice is missing
    auVar22 = func_0x01a1b620();
    unaff_x21 = auVar22._0_8_;
    ppuVar7 = (undefined **)
              func_0x01a1a060(unaff_x21,auVar22._8_8_,(undefined1 *)((long)puVar4 + -0x120),
                              (undefined1 *)((long)puVar4 + -0xd8),0x10);
    ppuVar6 = ppuVar8;
    unaff_x20 = param_5;
    if (ppuVar7 == (undefined **)0x0) {
      lVar12 = func_0x01a1a520(ppuVar8);
      ppuVar7 = (undefined **)0x0;
      if ((param_5 != (undefined **)0x0) && (lVar12 != 0)) break;
      goto code_r0x0027fdc4;
    }
    unaff_x23 = (undefined **)**(undefined8 **)((long)puVar4 + -0x110);
    lVar15 = 0;
    if ((undefined **)**(undefined8 **)((long)puVar4 + -0x110) != unaff_x23) {
      _objc_enumerationMutation(unaff_x21);
    }
    puVar1 = (undefined8 *)((long)puVar4 + -0x118);
    puVar18 = &UNK_0027fd58;
    puVar4 = (undefined8 *)((long)puVar4 + -0x120);
    ppuVar8 = *(undefined ***)*puVar1;
    unaff_x22 = ppuVar7;
  } while( true );
  while (param_5 = (undefined **)func_0x01a1b640(param_5), param_5 != (undefined **)0x0) {
    ppuVar7 = (undefined **)func_0x01a1a520(ppuVar8);
    if (param_5 == ppuVar7) {
      ppuVar7 = ppuVar8;
      unaff_x20 = param_5;
      goto code_r0x0027fdc4;
    }
  }
  ppuVar7 = (undefined **)0x0;
  unaff_x20 = param_5;
// WM - more drops soon - github.com/pengussy
code_r0x0027fdc4:
  if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)puVar4 + -0x58)) {
    return;
  }
  ___stack_chk_fail(ppuVar7);
  *(undefined8 *)((long)puVar4 + -0x180) = unaff_d11;
  *(undefined8 *)((long)puVar4 + -0x178) = unaff_d10;
  *(undefined8 *)((long)puVar4 + -0x170) = unaff_d9;
  *(undefined8 *)((long)puVar4 + -0x168) = unaff_d8;
  *(long *)((long)puVar4 + -0x160) = lVar15;
  *(undefined ***)((long)puVar4 + -0x158) = unaff_x23;
  *(undefined ***)((long)puVar4 + -0x150) = unaff_x22;
  *(undefined ***)((long)puVar4 + -0x148) = unaff_x21;
  *(undefined ***)((long)puVar4 + -0x140) = unaff_x20;
  *(undefined ***)((long)puVar4 + -0x138) = ppuVar6;
  *(undefined8 ******)((long)puVar4 + -0x130) = pppppuVar17;
  *(undefined **)((long)puVar4 + -0x128) = &DAT_0027fdfc;
  if (((ppuRam0000000002093260 != (undefined **)0x0 && lRam0000000002093228 != 0) &&
      (cRam0000000002093214 == '\x01')) &&
     (lRam0000000002057db8 == lRam0000000002093230 && bRam0000000002093212 == 0)) {
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    ppuVar8 = (undefined **)FUN_0027f554(ppuRam0000000002093250);
    if ((ppuVar8 != (undefined **)0x0) &&
       (ppuVar6 = (undefined **)func_0x01a1b700(ppuVar8), ppuVar6 != ppuRam0000000002093248)) {
      func_0x01a1b700(ppuVar8);
      ppuVar6 = (undefined **)_objc_retain();
      auVar22 = func_0x01a1a860(ppuRam0000000002093260);
      if (auVar22._0_8_ != 0) {
        func_0x01a1a920(auVar22._0_8_,auVar22._8_8_,ppuRam0000000002093260);
      }
      lRam0000000002093270 = 0;
      uRam0000000002093298 = *(undefined8 *)(PTR__NSZeroSize_01f20100 + 8);
      uRam0000000002093290 = *(undefined8 *)PTR__NSZeroSize_01f20100;
      _objc_release(ppuRam0000000002093248);
      bRam0000000002093213 = 0;
      ppuRam0000000002093248 = ppuVar6;
      FUN_0027f8c0(ppuVar6);
    }
    if (ppuVar8 != ppuRam0000000002093258) {
      ppuVar8 = (undefined **)_objc_retain(ppuVar8);
      _objc_release(ppuRam0000000002093258);
      ppuRam0000000002093258 = ppuVar8;
    }
    if ((((((bRam0000000002093213 & 1) == 0) &&
          (uVar10 = func_0x01a1a420(*(undefined8 *)PTR__NSApp_01f20028), (uVar10 & 1) == 0)) &&
         (iVar5 = func_0x01a1a4a0(ppuRam0000000002093248), iVar5 != 0)) &&
        ((uVar10 = func_0x01a1a480(ppuRam0000000002093248), (uVar10 & 1) == 0 &&
         (ppuRam0000000002093258 != (undefined **)0x0)))) && (iVar5 = func_0x01a1a440(), iVar5 == 0)
       ) {
// WM - proprietary - see LICENSE - do not sell
      uVar19 = func_0x01a19de0(ppuRam0000000002093258);
      uVar13 = param_2;
      uVar20 = param_3;
      uVar21 = param_4;
      auVar22 = func_0x01a1a520(ppuRam0000000002093258);
      uVar9 = auVar22._8_8_;
      if (auVar22._0_8_ != 0) {
        auVar22 = func_0x01a1b640(ppuRam0000000002093250);
        ppuVar8 = ppuRam0000000002093250;
        uVar9 = auVar22._8_8_;
        if (auVar22._0_8_ != 0) {
          uVar9 = func_0x01a19de0(ppuRam0000000002093250);
          auVar22 = func_0x01a1a520(ppuRam0000000002093258);
          uVar19 = func_0x01a19fc0(uVar9,uVar13,ppuVar8,auVar22._8_8_,auVar22._0_8_);
          uVar9 = extraout_x1;
          param_2 = uVar13;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
          param_3 = uVar20;
          param_4 = uVar21;
        }
      }
      ppuVar8 = ppuRam0000000002093248;
      func_0x01a19fe0(uVar19,param_2,ppuRam0000000002093258,uVar9,0);
      uVar20 = func_0x01a1a000(ppuVar8);
      uVar9 = param_3;
      uVar13 = param_4;
      iVar5 = _NSIsEmptyRect();
      if (iVar5 == 0) {
        func_0x01a19da0(uRam0000000001f26370);
        func_0x01a1ae80(uRam0000000001f26370,extraout_x1_00,1);
        func_0x01a1a240(ppuRam0000000002093260);
        auVar22 = _NSEqualRects();
        if ((auVar22._0_8_ & 1) == 0) {
/* thanks for reading - discord.gg/sdkhDjTex */
          func_0x01a1af60(uVar20,param_2,ppuRam0000000002093260,auVar22._8_8_,0);
          uVar9 = param_3;
          uVar13 = param_4;
        }
        uVar20 = func_0x01a19d80(ppuRam0000000002093248);
        func_0x01a19f40(ppuRam0000000002093260);
        func_0x01a1a520();
        func_0x01a1ad20(uVar20);
        func_0x01a19f40(ppuRam0000000002093260);
        func_0x01a1a520();
        lVar12 = func_0x01a19f60();
        lVar15 = lRam0000000002093228;
        if (lVar12 != lRam0000000002093228) {
          func_0x01a19f40(ppuRam0000000002093260);
          auVar22 = func_0x01a1a520();
          func_0x01a1ace0(auVar22._0_8_,auVar22._8_8_,lVar15);
        }
        func_0x01a19f00(uRam0000000001f26370);
        lVar15 = func_0x01a1a580(ppuRam0000000002093260);
        lVar12 = func_0x01a1a580(ppuRam0000000002093248);
        if (lVar15 != lVar12) {
          auVar22 = func_0x01a1a580(ppuRam0000000002093248);
          func_0x01a1b060(ppuRam0000000002093260,auVar22._8_8_,auVar22._0_8_);
        }
        ppuVar8 = (undefined **)func_0x01a1a860(ppuRam0000000002093260);
        if (ppuVar8 == ppuRam0000000002093248) {
          uVar10 = func_0x01a1a4a0(ppuRam0000000002093260);
          ppuVar8 = ppuRam0000000002093260;
          if ((uVar10 & 1) == 0) {
            auVar22 = func_0x01a1b720(ppuRam0000000002093248);
            func_0x01a1a840(ppuVar8,auVar22._8_8_,1,auVar22._0_8_);
          }
// WM - stripping the watermark breaks the license
        }
        else {
          auVar22 = func_0x01a1a860();
          uVar20 = auVar22._8_8_;
          if (auVar22._0_8_ != 0) {
            func_0x01a1a920(auVar22._0_8_,uVar20,ppuRam0000000002093260);
            uVar20 = extraout_x1_01;
          }
          lRam0000000002093270 = 0;
          uRam0000000002093298 = *(undefined8 *)(PTR__NSZeroSize_01f20100 + 8);
          uRam0000000002093290 = *(undefined8 *)PTR__NSZeroSize_01f20100;
          func_0x01a19c40(ppuRam0000000002093248,uVar20,ppuRam0000000002093260,1);
        }
        *(undefined8 *)((long)puVar4 + -0x160) = *(undefined8 *)((long)puVar4 + -0x170);
        *(undefined8 *)((long)puVar4 + -0x158) = *(undefined8 *)((long)puVar4 + -0x168);
        *(undefined8 *)((long)puVar4 + -0x150) = *(undefined8 *)((long)puVar4 + -0x150);
        *(undefined8 *)((long)puVar4 + -0x148) = *(undefined8 *)((long)puVar4 + -0x148);
        *(undefined8 *)((long)puVar4 + -0x140) = *(undefined8 *)((long)puVar4 + -0x140);
        *(undefined8 *)((long)puVar4 + -0x138) = *(undefined8 *)((long)puVar4 + -0x138);
        *(undefined8 *)((long)puVar4 + -0x130) = *(undefined8 *)((long)puVar4 + -0x130);
// no support for modified copies
        *(undefined8 *)((long)puVar4 + -0x128) = *(undefined8 *)((long)puVar4 + -0x128);
        if (((bRam0000000002093278 & 1) == 0) &&
           (iVar5 = ___cxa_guard_acquire(0x2093278), iVar5 != 0)) {
          FUN_00280234();
          ___cxa_guard_release(0x2093278);
        }
        if ((ppuRam0000000002093260 != (undefined **)0x0) &&
           ((pcRam00000000020932a0 != (code *)0x0 && pcRam00000000020932a8 != (code *)0x0) &&
            pcRam00000000020932b0 != (code *)0x0)) {
          lVar15 = func_0x01a1b720();
          func_0x01a1a240(ppuRam0000000002093260);
          if ((0 < lVar15) &&
             (((lRam0000000002093270 != lVar15 ||
               (uVar10 = _NSEqualSizes(uRam0000000002093290,uRam0000000002093298,uVar9,uVar13),
               (uVar10 & 1) == 0)) &&
              (lVar12 = (*pcRam00000000020932a8)(0,0,uVar9,uVar13), pcVar3 = pcRam00000000020932b0,
              lVar12 != 0)))) {
            uVar20 = (*pcRam00000000020932a0)();
            iRam0000000002057db0 = (*pcVar3)(uVar20,lVar15,lVar12);
            _CFRelease(lVar12);
            if (iRam0000000002057db0 == 0) {
              lRam0000000002093270 = lVar15;
              uRam0000000002093290 = uVar9;
              uRam0000000002093298 = uVar13;
              return;
/* wm:chat: discord.gg/sdkhDjTex */
            }
          }
        }
        return;
      }
    }
  }
  iVar5 = func_0x01a1a4a0(ppuRam0000000002093260);
  if (iVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a1a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_01f201e0)(ppuRam0000000002093260,PTR_s_orderOut__01f25d38,0);
  return;
}

