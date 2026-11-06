/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x27e8e4:ffe16cb341
   =========================================================================== */

void FUN_0027e8e4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  if (((lRam0000000002093260 != 0 && lRam0000000002093228 != 0) && (cRam0000000002093214 == '\x01'))
     && (lRam0000000002057db8 == lRam0000000002093230 && cRam0000000002093212 == '\0')) {
    lVar4 = func_0x0027f554(uRam0000000002093250);
    if ((lVar4 != 0) && (lVar5 = func_0x01a1b700(lVar4), lVar5 != lRam0000000002093248)) {
      func_0x01a1b700(lVar4);
      lVar5 = _objc_retain();
      auVar12 = func_0x01a1a860(lRam0000000002093260);
      if (auVar12._0_8_ != 0) {
        func_0x01a1a920(auVar12._0_8_,auVar12._8_8_,lRam0000000002093260);
      }
      lRam0000000002093270 = 0;
      uRam0000000002093298 = *(undefined8 *)(PTR__NSZeroSize_01f20100 + 8);
      uRam0000000002093290 = *(undefined8 *)PTR__NSZeroSize_01f20100;
      _objc_release(lRam0000000002093248);
      bRam0000000002093213 = 0;
      lRam0000000002093248 = lVar5;
      FUN_0027f8c0(lVar5);
    }
    if (lVar4 != lRam0000000002093258) {
      lVar4 = _objc_retain(lVar4);
/* wm:origin: github.com/pengussy */
      _objc_release(lRam0000000002093258);
      lRam0000000002093258 = lVar4;
    }
    if ((((bRam0000000002093213 & 1) == 0) &&
        (uVar6 = func_0x01a1a420(*(undefined8 *)PTR__NSApp_01f20028), (uVar6 & 1) == 0)) &&
       ((iVar3 = func_0x01a1a4a0(lRam0000000002093248), iVar3 != 0 &&
        (((uVar6 = func_0x01a1a480(lRam0000000002093248), (uVar6 & 1) == 0 &&
          (lRam0000000002093258 != 0)) && (iVar3 = func_0x01a1a440(), iVar3 == 0)))))) {
      uVar7 = func_0x01a19de0(lRam0000000002093258);
      uVar10 = param_2;
      uVar9 = param_3;
      uVar11 = param_4;
      auVar12 = func_0x01a1a520(lRam0000000002093258);
      uVar8 = auVar12._8_8_;
      if (auVar12._0_8_ != 0) {
        auVar12 = func_0x01a1b640(uRam0000000002093250);
        uVar1 = uRam0000000002093250;
        uVar8 = auVar12._8_8_;
        if (auVar12._0_8_ != 0) {
          uVar8 = func_0x01a19de0(uRam0000000002093250);
          auVar12 = func_0x01a1a520(lRam0000000002093258);
          uVar7 = func_0x01a19fc0(uVar8,uVar10,uVar1,auVar12._8_8_,auVar12._0_8_);
          uVar8 = extraout_x1;
          param_2 = uVar10;
          param_3 = uVar9;
          param_4 = uVar11;
        }
      }
      lVar4 = lRam0000000002093248;
      func_0x01a19fe0(uVar7,param_2,lRam0000000002093258,uVar8,0);
      uVar9 = func_0x01a1a000(lVar4);
      uVar8 = param_3;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      uVar10 = param_4;
      iVar3 = _NSIsEmptyRect();
      if (iVar3 == 0) {
        func_0x01a19da0(uRam0000000001f26370);
        func_0x01a1ae80(uRam0000000001f26370,extraout_x1_00,1);
        func_0x01a1a240(lRam0000000002093260);
        auVar12 = _NSEqualRects();
        if ((auVar12._0_8_ & 1) == 0) {
          func_0x01a1af60(uVar9,param_2,lRam0000000002093260,auVar12._8_8_,0);
          uVar8 = param_3;
          uVar10 = param_4;
        }
        uVar9 = func_0x01a19d80(lRam0000000002093248);
        func_0x01a19f40(lRam0000000002093260);
        func_0x01a1a520();
        func_0x01a1ad20(uVar9);
        func_0x01a19f40(lRam0000000002093260);
        func_0x01a1a520();
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        lVar5 = func_0x01a19f60();
        lVar4 = lRam0000000002093228;
        if (lVar5 != lRam0000000002093228) {
          func_0x01a19f40(lRam0000000002093260);
          auVar12 = func_0x01a1a520();
          func_0x01a1ace0(auVar12._0_8_,auVar12._8_8_,lVar4);
        }
        func_0x01a19f00(uRam0000000001f26370);
        lVar4 = func_0x01a1a580(lRam0000000002093260);
        lVar5 = func_0x01a1a580(lRam0000000002093248);
        if (lVar4 != lVar5) {
          auVar12 = func_0x01a1a580(lRam0000000002093248);
          func_0x01a1b060(lRam0000000002093260,auVar12._8_8_,auVar12._0_8_);
        }
        lVar4 = func_0x01a1a860(lRam0000000002093260);
        if (lVar4 == lRam0000000002093248) {
          uVar6 = func_0x01a1a4a0(lRam0000000002093260);
          lVar4 = lRam0000000002093260;
          if ((uVar6 & 1) == 0) {
            auVar12 = func_0x01a1b720(lRam0000000002093248);
            func_0x01a1a840(lVar4,auVar12._8_8_,1,auVar12._0_8_);
          }
        }
        else {
          auVar12 = func_0x01a1a860();
          uVar9 = auVar12._8_8_;
          if (auVar12._0_8_ != 0) {
            func_0x01a1a920(auVar12._0_8_,uVar9,lRam0000000002093260);
            uVar9 = extraout_x1_01;
// WM - origin: github.com/pengussy
          }
          lRam0000000002093270 = 0;
          uRam0000000002093298 = *(undefined8 *)(PTR__NSZeroSize_01f20100 + 8);
          uRam0000000002093290 = *(undefined8 *)PTR__NSZeroSize_01f20100;
          func_0x01a19c40(lRam0000000002093248,uVar9,lRam0000000002093260,1);
        }
        if (((bRam0000000002093278 & 1) == 0) &&
           (iVar3 = ___cxa_guard_acquire(0x2093278), iVar3 != 0)) {
          func_0x00280234();
          ___cxa_guard_release(0x2093278);
        }
        if ((lRam0000000002093260 != 0) &&
           ((pcRam00000000020932a0 != (code *)0x0 && pcRam00000000020932a8 != (code *)0x0) &&
            pcRam00000000020932b0 != (code *)0x0)) {
          lVar4 = func_0x01a1b720();
          func_0x01a1a240(lRam0000000002093260);
          if ((0 < lVar4) &&
             (((lRam0000000002093270 != lVar4 ||
               (uVar6 = _NSEqualSizes(uRam0000000002093290,uRam0000000002093298,uVar8,uVar10),
               (uVar6 & 1) == 0)) &&
              (lVar5 = (*pcRam00000000020932a8)(0,0,uVar8,uVar10), pcVar2 = pcRam00000000020932b0,
              lVar5 != 0)))) {
            uVar9 = (*pcRam00000000020932a0)();
            iRam0000000002057db0 = (*pcVar2)(uVar9,lVar4,lVar5);
            _CFRelease(lVar5);
            if (iRam0000000002057db0 == 0) {
              lRam0000000002093270 = lVar4;
              uRam0000000002093290 = uVar8;
              uRam0000000002093298 = uVar10;
              return;
            }
          }
        }
        return;
      }
    }
  }
  iVar3 = func_0x01a1a4a0(lRam0000000002093260);
/*  found on a paste site? it was re-uploaded illegally  */
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a1a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_01f201e0)(lRam0000000002093260,PTR_s_orderOut__01f25d38,0);
  return;
}

