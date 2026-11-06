/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1fcdc8:49f7dc4900
 */

/* WARNING: Removing unreachable block (ram,0x001fd6d4) */
/* WARNING: Removing unreachable block (ram,0x001fd2d8) */
/* WARNING: Removing unreachable block (ram,0x001fcfa8) */
/* WARNING: Removing unreachable block (ram,0x001fd040) */
/* WARNING: Removing unreachable block (ram,0x001fd370) */
/* WARNING: Removing unreachable block (ram,0x001fd77c) */

undefined8 FUN_001fcdc8(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  char *pcStack_438;
  undefined8 *******pppppppuStack_430;
  ulong uStack_428;
  ulong uStack_420;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  undefined8 uStack_388;
  char cStack_371;
  long lStack_370;
  long lStack_368;
  undefined8 uStack_358;
  char cStack_341;
  undefined8 uStack_340;
  char cStack_329;
  undefined8 *******pppppppuStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  long alStack_308 [3];
  long *plStack_2f0;
  long lStack_2e8;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  undefined8 uStack_208;
  char cStack_1f1;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1d8;
  char cStack_1c1;
  undefined8 uStack_1c0;
  char cStack_1a9;
  long alStack_1a8 [3];
  long *plStack_190;
  long lStack_188;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 uStack_b8;
  char cStack_a1;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_88;
  char cStack_71;
/* WM - no support for modified copies */
  undefined8 uStack_70;
  char cStack_59;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  FUN_001f67c0(auStack_d0,param_1,1);
  func_0x00212404(&lStack_148,auStack_d0);
  plStack_40 = (long *)0x0;
  plStack_40 = (long *)__Znwm(0x80);
  *plStack_40 = (long)&UNK_01dc04e8;
  plStack_40[2] = lStack_140;
  plStack_40[1] = lStack_148;
  plStack_40[3] = lStack_138;
  lStack_148 = 0;
  lStack_140 = 0;
  plStack_40[5] = lStack_128;
  plStack_40[4] = lStack_130;
  plStack_40[6] = lStack_120;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  plStack_40[8] = lStack_110;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  plStack_40[7] = lStack_118;
  plStack_40[9] = lStack_108;
  lStack_118 = 0;
  lStack_110 = 0;
  plStack_40[0xc] = lStack_f0;
  plStack_40[0xb] = lStack_f8;
  plStack_40[10] = lStack_100;
  lStack_108 = 0;
  lStack_100 = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  plStack_40[0xf] = lStack_d8;
  plStack_40[0xe] = lStack_e0;
  plStack_40[0xd] = lStack_e8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uVar4 = FUN_001e7c24(param_1,alStack_58);
  if (plStack_40 == alStack_58) {
    lVar8 = 0x20;
LAB_001fcec4:
    (**(code **)(*plStack_40 + lVar8))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_001fcec4;
  }
  if (lStack_d8 < 0) {
    __ZdlPv(lStack_e8);
    if (-1 < lStack_f0) goto LAB_001fcee0;
LAB_001fcf60:
    __ZdlPv(lStack_100);
    if (lStack_118 == 0) goto joined_r0x001fcfc4;
LAB_001fcf70:
    if (lStack_118 != lStack_110) {
/* wm:watermarked copy - do not remove */
      do {
        lStack_110 = lStack_110 + -0x18;
      } while (lStack_110 != lStack_118);
      lStack_110 = lStack_118;
      __ZdlPv(lStack_118);
      goto joined_r0x001fcfc4;
    }
    lStack_110 = lStack_118;
    __ZdlPv(lStack_118);
    if (-1 < lStack_120) goto LAB_001fcef0;
LAB_001fcfc8:
    __ZdlPv(lStack_130);
    if (-1 < lStack_138) goto LAB_001fcef8;
LAB_001fcfd8:
    __ZdlPv(lStack_148);
    if (-1 < cStack_59) goto LAB_001fcf00;
LAB_001fcfe8:
    __ZdlPv(uStack_70);
    if (-1 < cStack_71) goto LAB_001fcf08;
LAB_001fcff8:
    __ZdlPv(uStack_88);
    if (plStack_a0 != (long *)0x0) goto LAB_001fd008;
joined_r0x001fd05c:
    plVar12 = plStack_a0;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    if (cStack_a1 < '\0') goto LAB_001fd060;
LAB_001fcf18:
    plVar12 = plStack_a0;
    if (cStack_b9 < '\0') goto LAB_001fd070;
LAB_001fcf20:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
      return uVar4;
    }
  }
  else {
    if (lStack_f0 < 0) goto LAB_001fcf60;
LAB_001fcee0:
    if (lStack_118 != 0) goto LAB_001fcf70;
joined_r0x001fcfc4:
    if (lStack_120 < 0) goto LAB_001fcfc8;
LAB_001fcef0:
    if (lStack_138 < 0) goto LAB_001fcfd8;
LAB_001fcef8:
    if (cStack_59 < '\0') goto LAB_001fcfe8;
LAB_001fcf00:
    if (cStack_71 < '\0') goto LAB_001fcff8;
LAB_001fcf08:
    if (plStack_a0 == (long *)0x0) goto joined_r0x001fd05c;
LAB_001fd008:
    if (plStack_a0 != plStack_98) {
/* WM - reversing this took months of machine time */
      do {
        plStack_98 = plStack_98 + -3;
      } while (plStack_98 != plStack_a0);
      __ZdlPv(plStack_a0);
      goto joined_r0x001fd05c;
    }
    __ZdlPv(plStack_a0);
    plVar12 = plStack_a0;
    if (-1 < cStack_a1) goto LAB_001fcf18;
LAB_001fd060:
    __ZdlPv(uStack_b8);
    if (-1 < cStack_b9) goto LAB_001fcf20;
LAB_001fd070:
    __ZdlPv(auStack_d0[0]);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
      return uVar4;
    }
  }
// WM - unlicensed copy if this notice is missing
  uVar4 = ___stack_chk_fail();
  if (plStack_40 == plVar12) {
    lVar8 = 0x20;
LAB_001fd0b4:
    (**(code **)(*plStack_40 + lVar8))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_001fd0b4;
  }
  func_0x002119e0(&lStack_148);
  func_0x002119e0(auStack_d0);
  uVar4 = __Unwind_Resume(uVar4);
  func_0x002119e0(auStack_d0);
  __Unwind_Resume(uVar4);
  uVar4 = __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_01f20200;
  FUN_001f67c0(auStack_220,uVar4,1);
// unlicensed copy if this notice is missing
  func_0x00212404(&lStack_298,auStack_220);
  plStack_190 = (long *)0x0;
  plStack_190 = (long *)__Znwm(0x80);
  *plStack_190 = (long)&UNK_01dc05e8;
  plStack_190[2] = lStack_290;
  plStack_190[1] = lStack_298;
  plStack_190[3] = lStack_288;
  lStack_298 = 0;
  lStack_290 = 0;
  plStack_190[5] = lStack_278;
  plStack_190[4] = lStack_280;
  plStack_190[6] = lStack_270;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  plStack_190[8] = lStack_260;
  plStack_190[7] = lStack_268;
  plStack_190[9] = lStack_258;
  lStack_268 = 0;
  lStack_260 = 0;
  plStack_190[0xc] = lStack_240;
  plStack_190[0xb] = lStack_248;
  plStack_190[10] = lStack_250;
  lStack_258 = 0;
  lStack_250 = 0;
  lStack_248 = 0;
  lStack_240 = 0;
  plStack_190[0xf] = lStack_228;
  plStack_190[0xe] = lStack_230;
  plStack_190[0xd] = lStack_238;
  lStack_238 = 0;
  lStack_230 = 0;
  lStack_228 = 0;
  uVar4 = FUN_001e7c24(uVar4,alStack_1a8);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (plStack_190 == alStack_1a8) {
    lVar8 = 0x20;
code_r0x001fd1f4:
    (**(code **)(*plStack_190 + lVar8))();
  }
  else if (plStack_190 != (long *)0x0) {
    lVar8 = 0x28;
    goto code_r0x001fd1f4;
  }
  if (lStack_228 < 0) {
    __ZdlPv(lStack_238);
    if (-1 < lStack_240) goto code_r0x001fd210;
code_r0x001fd290:
    __ZdlPv(lStack_250);
    if (lStack_268 == 0) goto joined_r0x001fd2f4;
code_r0x001fd2a0:
    if (lStack_268 != lStack_260) {
      do {
        lStack_260 = lStack_260 + -0x18;
      } while (lStack_260 != lStack_268);
      lStack_260 = lStack_268;
      __ZdlPv(lStack_268);
      goto joined_r0x001fd2f4;
    }
    lStack_260 = lStack_268;
// WM - thanks for reading - discord.gg/sdkhDjTex
    __ZdlPv(lStack_268);
    if (-1 < lStack_270) goto code_r0x001fd220;
code_r0x001fd2f8:
    __ZdlPv(lStack_280);
    if (-1 < lStack_288) goto code_r0x001fd228;
code_r0x001fd308:
    __ZdlPv(lStack_298);
    if (-1 < cStack_1a9) goto code_r0x001fd230;
code_r0x001fd318:
    __ZdlPv(uStack_1c0);
    if (-1 < cStack_1c1) goto code_r0x001fd238;
code_r0x001fd328:
    __ZdlPv(uStack_1d8);
    if (plStack_1f0 != (long *)0x0) goto code_r0x001fd338;
joined_r0x001fd244:
    plVar12 = plStack_1f0;
    if (cStack_1f1 < '\0') goto code_r0x001fd390;
// found on a paste site? it was re-uploaded illegally
code_r0x001fd248:
    plVar12 = plStack_1f0;
    if (cStack_209 < '\0') goto code_r0x001fd3a0;
code_r0x001fd250:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_188) {
      return uVar4;
    }
  }
  else {
    if (lStack_240 < 0) goto code_r0x001fd290;
code_r0x001fd210:
    if (lStack_268 != 0) goto code_r0x001fd2a0;
joined_r0x001fd2f4:
    if (lStack_270 < 0) goto code_r0x001fd2f8;
code_r0x001fd220:
    if (lStack_288 < 0) goto code_r0x001fd308;
code_r0x001fd228:
    if (cStack_1a9 < '\0') goto code_r0x001fd318;
code_r0x001fd230:
    if (cStack_1c1 < '\0') goto code_r0x001fd328;
code_r0x001fd238:
    if (plStack_1f0 == (long *)0x0) goto joined_r0x001fd244;
code_r0x001fd338:
    if (plStack_1f0 != plStack_1e8) {
      do {
        plStack_1e8 = plStack_1e8 + -3;
      } while (plStack_1e8 != plStack_1f0);
      __ZdlPv(plStack_1f0);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      goto joined_r0x001fd244;
    }
    __ZdlPv(plStack_1f0);
    plVar12 = plStack_1f0;
    if (-1 < cStack_1f1) goto code_r0x001fd248;
code_r0x001fd390:
    __ZdlPv(uStack_208);
    if (-1 < cStack_209) goto code_r0x001fd250;
code_r0x001fd3a0:
    __ZdlPv(auStack_220[0]);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_188) {
      return uVar4;
    }
  }
  uVar4 = ___stack_chk_fail();
  if (plStack_190 == plVar12) {
    lVar8 = 0x20;
code_r0x001fd3e4:
    (**(code **)(*plStack_190 + lVar8))();
  }
  else if (plStack_190 != (long *)0x0) {
    lVar8 = 0x28;
    goto code_r0x001fd3e4;
  }
  func_0x002119e0(&lStack_298);
  func_0x002119e0(auStack_220);
  uVar4 = __Unwind_Resume(uVar4);
  func_0x002119e0(auStack_220);
  __Unwind_Resume(uVar4);
/* chat: discord.gg/sdkhDjTex */
  uVar4 = __Unwind_Resume();
  lStack_2e8 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar3 = func_0x00791e54(uVar4,1);
  if (iVar3 != 0) {
    uStack_310 = 0;
    uVar5 = func_0x00792368(uVar4,1,&uStack_310);
    uVar9 = uStack_310;
    if (0x7ffffffffffffff6 < uStack_310) goto LAB_001fdb20;
    if (uStack_310 < 0x17) {
      uStack_318 = CONCAT17((char)uStack_310,(undefined7)uStack_318);
      pppppppuVar6 = &pppppppuStack_328;
    }
    else {
      uVar10 = (uStack_310 & 0x7ffffffffffffff8) + 8;
      uVar11 = 0x19;
      if (uVar10 != 0x18) {
        uVar11 = uVar10;
      }
      pppppppuVar6 = (undefined8 *******)__Znwm(uVar11);
      uStack_318 = uVar11 | 0x8000000000000000;
      uStack_320 = uVar9;
      pppppppuStack_328 = pppppppuVar6;
    }
    _memmove(pppppppuVar6,uVar5,uVar9);
    *(undefined1 *)((long)pppppppuVar6 + uVar9) = 0;
    FUN_001f67c0(auStack_3a0,uVar4,2);
    uStack_428 = uStack_320;
    pppppppuStack_430 = pppppppuStack_328;
    uStack_420 = uStack_318;
    func_0x00212404(&lStack_418,auStack_3a0);
    plStack_2f0 = (long *)0x0;
    plStack_2f0 = (long *)__Znwm(0x98);
    *plStack_2f0 = (long)&UNK_01dc06e8;
    plStack_2f0[2] = uStack_428;
    plStack_2f0[1] = (long)pppppppuStack_430;
    plStack_2f0[3] = uStack_420;
/* WM - if you paid for this, you were scammed */
    pppppppuStack_430 = (undefined8 *******)0x0;
    uStack_428 = 0;
    plStack_2f0[5] = lStack_410;
    plStack_2f0[4] = lStack_418;
    plStack_2f0[6] = lStack_408;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_408 = 0;
    plStack_2f0[8] = lStack_3f8;
    plStack_2f0[7] = lStack_400;
    plStack_2f0[9] = lStack_3f0;
    uStack_420 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    plStack_2f0[0xb] = lStack_3e0;
    plStack_2f0[10] = lStack_3e8;
    plStack_2f0[0xc] = lStack_3d8;
    lStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    lStack_3e8 = 0;
    plStack_2f0[0xf] = lStack_3c0;
    plStack_2f0[0xe] = lStack_3c8;
    plStack_2f0[0xd] = lStack_3d0;
    lStack_3d0 = 0;
    lStack_3c8 = 0;
    plStack_2f0[0x12] = lStack_3a8;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    plStack_2f0[0x11] = lStack_3b0;
    plStack_2f0[0x10] = lStack_3b8;
    lStack_3b0 = 0;
    lStack_3a8 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    uVar4 = FUN_001e7c24(uVar4,alStack_308);
    if (plStack_2f0 == alStack_308) {
      lVar8 = 0x20;
LAB_001fd5e4:
      (**(code **)(*plStack_2f0 + lVar8))();
    }
    else if (plStack_2f0 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_001fd5e4;
    }
    if (lStack_3a8 < 0) {
      __ZdlPv(lStack_3b8);
      if (-1 < lStack_3c0) goto LAB_001fd600;
LAB_001fd68c:
      __ZdlPv(lStack_3d0);
// donate: donate/README.md
      if (lStack_3e8 == 0) goto joined_r0x001fd6f0;
LAB_001fd69c:
      if (lStack_3e8 != lStack_3e0) {
        do {
          lStack_3e0 = lStack_3e0 + -0x18;
        } while (lStack_3e0 != lStack_3e8);
        lStack_3e0 = lStack_3e8;
        __ZdlPv(lStack_3e8);
        goto joined_r0x001fd6f0;
      }
      lStack_3e0 = lStack_3e8;
      __ZdlPv(lStack_3e8);
      if (-1 < lStack_3f0) goto LAB_001fd610;
LAB_001fd6f4:
      __ZdlPv(lStack_400);
      if (-1 < lStack_408) goto LAB_001fd618;
LAB_001fd704:
      __ZdlPv(lStack_418);
      if (-1 < (long)uStack_420) goto LAB_001fd620;
LAB_001fd714:
      __ZdlPv(pppppppuStack_430);
      if (-1 < cStack_329) goto LAB_001fd628;
LAB_001fd724:
      __ZdlPv(uStack_340);
      if (-1 < cStack_341) goto LAB_001fd630;
LAB_001fd734:
      __ZdlPv(uStack_358);
      if (lStack_370 == 0) goto joined_r0x001fd798;
LAB_001fd744:
      if (lStack_370 != lStack_368) {
        do {
          lStack_368 = lStack_368 + -0x18;
        } while (lStack_368 != lStack_370);
        __ZdlPv(lStack_370);
        goto joined_r0x001fd798;
      }
      __ZdlPv(lStack_370);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      if (-1 < cStack_371) goto LAB_001fd640;
LAB_001fd79c:
      __ZdlPv(uStack_388);
      if (-1 < cStack_389) goto LAB_001fd648;
LAB_001fd7ac:
      __ZdlPv(auStack_3a0[0]);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_2e8) {
        return uVar4;
      }
    }
    else {
      if (lStack_3c0 < 0) goto LAB_001fd68c;
LAB_001fd600:
      if (lStack_3e8 != 0) goto LAB_001fd69c;
joined_r0x001fd6f0:
      if (lStack_3f0 < 0) goto LAB_001fd6f4;
LAB_001fd610:
      if (lStack_408 < 0) goto LAB_001fd704;
LAB_001fd618:
      if ((long)uStack_420 < 0) goto LAB_001fd714;
LAB_001fd620:
      if (cStack_329 < '\0') goto LAB_001fd724;
LAB_001fd628:
      if (cStack_341 < '\0') goto LAB_001fd734;
LAB_001fd630:
      if (lStack_370 != 0) goto LAB_001fd744;
joined_r0x001fd798:
      if (cStack_371 < '\0') goto LAB_001fd79c;
LAB_001fd640:
      if (cStack_389 < '\0') goto LAB_001fd7ac;
LAB_001fd648:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_2e8) {
        return uVar4;
      }
    }
    ___stack_chk_fail();
  }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  pbVar7 = (byte *)(*pcRam0000000002075d20)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019d774c();
  }
  pcStack_438 = (char *)(*pcRam0000000002075d08)();
  if (*pcStack_438 == '\x01') {
    uVar1 = (byte)pcStack_438[1] ^ 0x99871f9b;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xd9aa6dab;
    pcStack_438[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x58;
    uVar9 = (((ulong)(byte)pcStack_438[1] ^ 0x4daadaba1f454e10) << 0x11 | 0x9b55) +
            0x9e3779b97f4a7c15;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_438[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_438[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_438[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_438[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_438[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_438[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_438[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
/*  chat: discord.gg/sdkhDjTex  */
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_438[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_438[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_438[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_438[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_438[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_438[6] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_438[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_438[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
/* more drops soon - github.com/pengussy - github.com/pengussy */
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_438[7] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_438[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
    *pcStack_438 = '\0';
  }
  pcStack_438 = pcStack_438 + 8;
  uVar5 = func_0x0011ab24(&pcStack_438);
  func_0x007a1ba8(uVar4,1,uVar5);
LAB_001fdb20:
  FUN_0000aa50();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1fdb28);
  (*pcVar2)();
}

