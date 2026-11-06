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
 *  file-id: 0x345224:266eb28617
 *  --------------------------------------------------------------------------*/

long FUN_00345224(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  undefined1 auStack_78 [8];
  
  lStack_80 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar1 = _clock_gettime_nsec_np(8);
  uVar2 = func_0x01a19e40(param_1);
  _objc_sync_enter();
  dVar13 = (double)func_0x01a1a4e0(param_1);
  dVar15 = (double)uVar1 / 1000000000.0;
  if (1.0 < dVar15 - dVar13) {
    uVar3 = func_0x01a19d20(uRam0000000001f26308);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    auVar16 = func_0x01a19e20(param_1);
    uVar5 = auVar16._0_8_;
    lVar4 = func_0x01a1a060(uVar5,auVar16._8_8_,&uStack_1c0,auStack_100,0x10);
    if (lVar4 != 0) {
      lVar10 = *plStack_1b0;
/* donate: donate/README.md */
      do {
        lVar11 = 0;
        do {
          if (*plStack_1b0 != lVar10) {
            _objc_enumerationMutation(uVar5);
          }
          uVar8 = *(undefined8 *)(lStack_1b8 + lVar11 * 8);
          dVar13 = (double)func_0x01a1a500(uVar8);
          dVar14 = (double)func_0x01a1a4e0(param_1);
          uVar6 = extraout_x1;
          if (dVar14 < dVar13) {
            func_0x01a19c80(uVar3,extraout_x1,uVar8);
            uVar6 = extraout_x1_00;
          }
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = func_0x01a1a060(uVar5,uVar6,&uStack_1c0,auStack_100,0x10);
      } while (lVar4 != 0);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    auVar16 = func_0x01a1a640(uVar3);
    func_0x01a1aba0(param_1,auVar16._8_8_,auVar16._0_8_);
    func_0x01a1b000(dVar15,param_1);
  }
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  auVar16 = func_0x01a19e20(param_1);
  uVar3 = auVar16._0_8_;
  lVar4 = func_0x01a1a060(uVar3,auVar16._8_8_,&uStack_200,auStack_180,0x10);
  if (lVar4 != 0) {
    lVar10 = 0;
    lVar11 = *plStack_1f0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1f0 != lVar11) {
          _objc_enumerationMutation(uVar3);
        }
        lVar9 = *(long *)(lStack_1f8 + lVar12 * 8);
// WM - unlicensed copy if this notice is missing
        func_0x01a19e00(lVar9);
        auVar16 = func_0x01a1a560();
        uVar5 = auVar16._8_8_;
        if (param_3 <= auVar16._0_8_) {
          if (lVar10 != 0) {
            dVar13 = (double)func_0x01a1a500(lVar10);
            dVar14 = (double)func_0x01a1a500(lVar9);
            uVar5 = extraout_x1_01;
            if (dVar13 <= dVar14) goto LAB_003453d8;
          }
          lVar10 = lVar9;
        }
LAB_003453d8:
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      puVar7 = auStack_180;
      lVar4 = func_0x01a1a060(uVar3,uVar5,&uStack_200,puVar7,0x10);
    } while (lVar4 != 0);
    if (lVar10 != 0) {
      auVar16 = func_0x01a19e20(param_1);
      func_0x01a1a940(auVar16._0_8_,auVar16._8_8_,lVar10);
      func_0x01a1b020(dVar15,lVar10);
      _objc_sync_exit(uVar2);
      goto LAB_003454b8;
    }
/* keep the notice, keep the source honest */
  }
  _objc_sync_exit(uVar2);
  puVar7 = (undefined1 *)0x0;
  uVar2 = func_0x01a1a680(param_4,extraout_x1_02,param_3,0);
  auVar16 = _objc_alloc(uRam0000000001f263d0);
  lVar10 = func_0x01a1a2e0(auVar16._0_8_,auVar16._8_8_,uVar2);
LAB_003454b8:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_80) {
    return lVar10;
  }
  uVar5 = ___stack_chk_fail();
  _objc_sync_exit(uVar2);
  uVar5 = __Unwind_Resume(uVar5);
  _objc_sync_exit(uVar2);
  uVar5 = __Unwind_Resume(uVar5);
  _objc_sync_exit(uVar2);
  __Unwind_Resume(uVar5);
  uVar5 = __Unwind_Resume();
  _objc_sync_exit(uVar2);
  uVar5 = __Unwind_Resume(uVar5);
  _objc_sync_exit(uVar2);
  uVar5 = __Unwind_Resume(uVar5);
  _objc_sync_exit(uVar2);
  uVar5 = __Unwind_Resume(uVar5);
  _objc_sync_exit(uVar2);
  uVar5 = __Unwind_Resume(uVar5);
  _objc_sync_exit(uVar2);
  uVar5 = __Unwind_Resume(uVar5);
  _objc_sync_exit(uVar2);
  auVar16 = __Unwind_Resume(uVar5);
  uVar6 = auVar16._0_8_;
  puStack_208 = &DAT_003455b4;
  lStack_248 = 0;
  uStack_240 = uVar3;
  lStack_238 = lVar10;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  uStack_230 = param_1;
  uStack_228 = param_4;
  uStack_220 = uVar5;
  uStack_218 = uVar2;
  puStack_210 = auStack_78 + 0x68;
  auVar16 = func_0x01a1a700(puVar7,auVar16._8_8_,0x1f1fe88,0,&lStack_248);
  lVar4 = auVar16._0_8_;
  if (lVar4 == 0) {
    uVar2 = 0x1f1fea8;
  }
  else {
    auVar16 = func_0x01a1a6e0(lVar4,auVar16._8_8_,0x1f1fec8);
    lVar4 = func_0x01a1a6e0(lVar4,auVar16._8_8_,0x1f1fee8);
    if ((auVar16._0_8_ != 0) && (lVar4 != 0)) {
      uVar2 = func_0x01a1b6c0(uRam0000000001f263d8);
      auVar17 = func_0x01a19d60();
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,0);
      func_0x01a1b160(auVar17._0_8_,auVar17._8_8_,0);
      auVar17 = func_0x01a19d60(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,0);
/* wm:stripping the watermark breaks the license */
      func_0x01a1aec0(auVar17._0_8_,auVar17._8_8_,0x1d);
      auVar17 = func_0x01a19d60(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,0);
      func_0x01a1abe0(auVar17._0_8_,auVar17._8_8_,0);
      auVar17 = func_0x01a19d60(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,1);
      func_0x01a1b160(auVar17._0_8_,auVar17._8_8_,8);
      auVar17 = func_0x01a19d60(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,1);
      func_0x01a1aec0(auVar17._0_8_,auVar17._8_8_,0x1d);
      auVar17 = func_0x01a19d60(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,1);
      func_0x01a1abe0(auVar17._0_8_,auVar17._8_8_,0);
      auVar17 = func_0x01a19d60(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,2);
      func_0x01a1b160(auVar17._0_8_,auVar17._8_8_,0x10);
      auVar17 = func_0x01a19d60(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,2);
      func_0x01a1aec0(auVar17._0_8_,auVar17._8_8_,3);
      auVar17 = func_0x01a19d60(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,2);
      func_0x01a1abe0(auVar17._0_8_,auVar17._8_8_,0);
      auVar17 = func_0x01a1a540(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,0);
      func_0x01a1b3a0(auVar17._0_8_,auVar17._8_8_,1);
      auVar17 = func_0x01a1a540(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,0);
      func_0x01a1b380(auVar17._0_8_,auVar17._8_8_,1);
      auVar17 = func_0x01a1a540(uVar2);
      auVar17 = func_0x01a1a7c0(auVar17._0_8_,auVar17._8_8_,0);
      func_0x01a1b400(auVar17._0_8_,auVar17._8_8_,0x14);
// WM - chat: discord.gg/sdkhDjTex
      auVar17 = _objc_alloc_init(uRam0000000001f262d0);
      uVar3 = auVar17._0_8_;
      func_0x01a1b500(uVar3,auVar17._8_8_,auVar16._0_8_);
      func_0x01a1af00(uVar3,extraout_x1_03,lVar4);
      func_0x01a1b4e0(uVar3,extraout_x1_04,uVar2);
      func_0x01a1a260(uVar6);
      auVar16 = func_0x01a1aa40();
      func_0x01a1b1c0(uVar3,auVar16._8_8_,auVar16._0_8_);
      func_0x01a1a260(uVar6);
      uVar2 = func_0x01a19ec0();
      auVar16 = func_0x01a19ea0(uVar3);
      auVar16 = func_0x01a1a7c0(auVar16._0_8_,auVar16._8_8_,0);
      func_0x01a1b1a0(auVar16._0_8_,auVar16._8_8_,uVar2);
      auVar16 = func_0x01a19ea0(uVar3);
      auVar16 = func_0x01a1a7c0(auVar16._0_8_,auVar16._8_8_,0);
      func_0x01a1ab80(auVar16._0_8_,auVar16._8_8_,1);
      auVar16 = func_0x01a19ea0(uVar3);
      auVar16 = func_0x01a1a7c0(auVar16._0_8_,auVar16._8_8_,0);
      func_0x01a1b240(auVar16._0_8_,auVar16._8_8_,0);
// WM - no support for modified copies
      auVar16 = func_0x01a19ea0(uVar3);
      auVar16 = func_0x01a1a7c0(auVar16._0_8_,auVar16._8_8_,0);
      func_0x01a1b320(auVar16._0_8_,auVar16._8_8_,4);
      auVar16 = func_0x01a19ea0(uVar3);
      auVar16 = func_0x01a1a7c0(auVar16._0_8_,auVar16._8_8_,0);
      func_0x01a1ae20(auVar16._0_8_,auVar16._8_8_,5);
      auVar16 = func_0x01a19ea0(uVar3);
      auVar16 = func_0x01a1a7c0(auVar16._0_8_,auVar16._8_8_,0);
      func_0x01a1ab20(auVar16._0_8_,auVar16._8_8_,0);
      auVar16 = func_0x01a19ea0(uVar3);
      auVar16 = func_0x01a1a7c0(auVar16._0_8_,auVar16._8_8_,0);
      func_0x01a1b300(auVar16._0_8_,auVar16._8_8_,1);
      auVar16 = func_0x01a19ea0(uVar3);
      auVar16 = func_0x01a1a7c0(auVar16._0_8_,auVar16._8_8_,0);
      func_0x01a1ae00(auVar16._0_8_,auVar16._8_8_,5);
      func_0x01a1a260(uVar6);
      auVar16 = func_0x01a1a100();
      func_0x01a1ad60(uVar3,auVar16._8_8_,auVar16._0_8_);
      func_0x01a1a260(uVar6);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      auVar16 = func_0x01a1b5e0();
      func_0x01a1b340(uVar3,auVar16._8_8_,auVar16._0_8_);
      lVar4 = func_0x01a1a720(puVar7,extraout_x1_05,uVar3,&lStack_248);
      if (lStack_248 != 0) {
        _NSLog(0x1f1ff28);
      }
      return lVar4;
    }
    uVar2 = 0x1f1ff08;
  }
  _NSLog(uVar2);
  return 0;
}

