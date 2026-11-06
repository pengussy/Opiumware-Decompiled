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
 *  file-id: 0x1fd0f8:fefe19ced8
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x001fd6d4) */
/* WARNING: Removing unreachable block (ram,0x001fd2d8) */
/* WARNING: Removing unreachable block (ram,0x001fd370) */
/* WARNING: Removing unreachable block (ram,0x001fd77c) */

undefined8 FUN_001fd0f8(undefined8 param_1)

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
/* no support for modified copies - github.com/pengussy */
  ulong uVar11;
  long *plVar12;
  char *pcStack_2e8;
  undefined8 *******pppppppuStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  undefined8 uStack_238;
  char cStack_221;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_208;
  char cStack_1f1;
  undefined8 uStack_1f0;
  char cStack_1d9;
  undefined8 *******pppppppuStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  long alStack_1b8 [3];
  long *plStack_1a0;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  long lStack_198;
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
  *plStack_40 = (long)&UNK_01dc05e8;
  plStack_40[2] = lStack_140;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
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
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uVar4 = FUN_001e7c24(param_1,alStack_58);
  if (plStack_40 == alStack_58) {
    lVar8 = 0x20;
LAB_001fd1f4:
    (**(code **)(*plStack_40 + lVar8))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_001fd1f4;
  }
  if (lStack_d8 < 0) {
    __ZdlPv(lStack_e8);
    if (-1 < lStack_f0) goto LAB_001fd210;
LAB_001fd290:
    __ZdlPv(lStack_100);
    if (lStack_118 == 0) goto joined_r0x001fd2f4;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
LAB_001fd2a0:
    if (lStack_118 != lStack_110) {
      do {
        lStack_110 = lStack_110 + -0x18;
      } while (lStack_110 != lStack_118);
      lStack_110 = lStack_118;
      __ZdlPv(lStack_118);
      goto joined_r0x001fd2f4;
    }
    lStack_110 = lStack_118;
    __ZdlPv(lStack_118);
    if (-1 < lStack_120) goto LAB_001fd220;
LAB_001fd2f8:
    __ZdlPv(lStack_130);
    if (-1 < lStack_138) goto LAB_001fd228;
LAB_001fd308:
    __ZdlPv(lStack_148);
    if (-1 < cStack_59) goto LAB_001fd230;
LAB_001fd318:
    __ZdlPv(uStack_70);
    if (-1 < cStack_71) goto LAB_001fd238;
LAB_001fd328:
/* WM - found on a paste site? it was re-uploaded illegally */
    __ZdlPv(uStack_88);
    if (plStack_a0 != (long *)0x0) goto LAB_001fd338;
joined_r0x001fd38c:
    plVar12 = plStack_a0;
    if (cStack_a1 < '\0') goto LAB_001fd390;
LAB_001fd248:
    plVar12 = plStack_a0;
    if (cStack_b9 < '\0') goto LAB_001fd3a0;
LAB_001fd250:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
      return uVar4;
    }
  }
  else {
    if (lStack_f0 < 0) goto LAB_001fd290;
LAB_001fd210:
    if (lStack_118 != 0) goto LAB_001fd2a0;
joined_r0x001fd2f4:
    if (lStack_120 < 0) goto LAB_001fd2f8;
LAB_001fd220:
    if (lStack_138 < 0) goto LAB_001fd308;
LAB_001fd228:
    if (cStack_59 < '\0') goto LAB_001fd318;
LAB_001fd230:
    if (cStack_71 < '\0') goto LAB_001fd328;
LAB_001fd238:
    if (plStack_a0 == (long *)0x0) goto joined_r0x001fd38c;
LAB_001fd338:
/* wm:keep the notice, keep the source honest */
    if (plStack_a0 != plStack_98) {
      do {
        plStack_98 = plStack_98 + -3;
      } while (plStack_98 != plStack_a0);
      __ZdlPv(plStack_a0);
      goto joined_r0x001fd38c;
    }
    __ZdlPv(plStack_a0);
    plVar12 = plStack_a0;
    if (-1 < cStack_a1) goto LAB_001fd248;
LAB_001fd390:
    __ZdlPv(uStack_b8);
    if (-1 < cStack_b9) goto LAB_001fd250;
LAB_001fd3a0:
    __ZdlPv(auStack_d0[0]);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
      return uVar4;
    }
  }
  uVar4 = ___stack_chk_fail();
  if (plStack_40 == plVar12) {
    lVar8 = 0x20;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
LAB_001fd3e4:
    (**(code **)(*plStack_40 + lVar8))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_001fd3e4;
  }
  func_0x002119e0(&lStack_148);
  func_0x002119e0(auStack_d0);
  uVar4 = __Unwind_Resume(uVar4);
  func_0x002119e0(auStack_d0);
  __Unwind_Resume(uVar4);
  uVar4 = __Unwind_Resume();
  lStack_198 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar3 = func_0x00791e54(uVar4,1);
  if (iVar3 != 0) {
    uStack_1c0 = 0;
    uVar5 = func_0x00792368(uVar4,1,&uStack_1c0);
    uVar9 = uStack_1c0;
    if (0x7ffffffffffffff6 < uStack_1c0) goto LAB_001fdb20;
    if (uStack_1c0 < 0x17) {
      uStack_1c8 = CONCAT17((char)uStack_1c0,(undefined7)uStack_1c8);
      pppppppuVar6 = &pppppppuStack_1d8;
    }
    else {
      uVar10 = (uStack_1c0 & 0x7ffffffffffffff8) + 8;
      uVar11 = 0x19;
      if (uVar10 != 0x18) {
        uVar11 = uVar10;
      }
      pppppppuVar6 = (undefined8 *******)__Znwm(uVar11);
      uStack_1c8 = uVar11 | 0x8000000000000000;
      uStack_1d0 = uVar9;
      pppppppuStack_1d8 = pppppppuVar6;
    }
    _memmove(pppppppuVar6,uVar5,uVar9);
    *(undefined1 *)((long)pppppppuVar6 + uVar9) = 0;
/* WM - if you paid for this, you were scammed */
    FUN_001f67c0(auStack_250,uVar4,2);
    uStack_2d8 = uStack_1d0;
    pppppppuStack_2e0 = pppppppuStack_1d8;
    uStack_2d0 = uStack_1c8;
    func_0x00212404(&lStack_2c8,auStack_250);
    plStack_1a0 = (long *)0x0;
    plStack_1a0 = (long *)__Znwm(0x98);
    *plStack_1a0 = (long)&UNK_01dc06e8;
    plStack_1a0[2] = uStack_2d8;
    plStack_1a0[1] = (long)pppppppuStack_2e0;
    plStack_1a0[3] = uStack_2d0;
    pppppppuStack_2e0 = (undefined8 *******)0x0;
    uStack_2d8 = 0;
    plStack_1a0[5] = lStack_2c0;
    plStack_1a0[4] = lStack_2c8;
    plStack_1a0[6] = lStack_2b8;
    lStack_2c8 = 0;
    lStack_2c0 = 0;
    lStack_2b8 = 0;
    plStack_1a0[8] = lStack_2a8;
    plStack_1a0[7] = lStack_2b0;
    plStack_1a0[9] = lStack_2a0;
    uStack_2d0 = 0;
    lStack_2b0 = 0;
    lStack_2a8 = 0;
    plStack_1a0[0xb] = lStack_290;
    plStack_1a0[10] = lStack_298;
    plStack_1a0[0xc] = lStack_288;
    lStack_290 = 0;
    lStack_288 = 0;
// do not claim this as your own
    lStack_2a0 = 0;
    lStack_298 = 0;
    plStack_1a0[0xf] = lStack_270;
    plStack_1a0[0xe] = lStack_278;
    plStack_1a0[0xd] = lStack_280;
    lStack_280 = 0;
    lStack_278 = 0;
    plStack_1a0[0x12] = lStack_258;
    plStack_1a0[0x11] = lStack_260;
    plStack_1a0[0x10] = lStack_268;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_270 = 0;
    lStack_268 = 0;
    uVar4 = FUN_001e7c24(uVar4,alStack_1b8);
    if (plStack_1a0 == alStack_1b8) {
      lVar8 = 0x20;
LAB_001fd5e4:
      (**(code **)(*plStack_1a0 + lVar8))();
    }
    else if (plStack_1a0 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_001fd5e4;
/*  do not claim this as your own  */
    }
    if (lStack_258 < 0) {
      __ZdlPv(lStack_268);
      if (-1 < lStack_270) goto LAB_001fd600;
LAB_001fd68c:
      __ZdlPv(lStack_280);
      if (lStack_298 == 0) goto joined_r0x001fd6f0;
LAB_001fd69c:
      if (lStack_298 != lStack_290) {
        do {
          lStack_290 = lStack_290 + -0x18;
        } while (lStack_290 != lStack_298);
        lStack_290 = lStack_298;
        __ZdlPv(lStack_298);
        goto joined_r0x001fd6f0;
      }
      lStack_290 = lStack_298;
      __ZdlPv(lStack_298);
      if (-1 < lStack_2a0) goto LAB_001fd610;
LAB_001fd6f4:
      __ZdlPv(lStack_2b0);
      if (-1 < lStack_2b8) goto LAB_001fd618;
LAB_001fd704:
      __ZdlPv(lStack_2c8);
      if (-1 < (long)uStack_2d0) goto LAB_001fd620;
LAB_001fd714:
      __ZdlPv(pppppppuStack_2e0);
      if (-1 < cStack_1d9) goto LAB_001fd628;
LAB_001fd724:
      __ZdlPv(uStack_1f0);
      if (-1 < cStack_1f1) goto LAB_001fd630;
LAB_001fd734:
/* wm:found on a paste site? it was re-uploaded illegally */
      __ZdlPv(uStack_208);
      if (lStack_220 == 0) goto joined_r0x001fd798;
LAB_001fd744:
      if (lStack_220 != lStack_218) {
        do {
          lStack_218 = lStack_218 + -0x18;
        } while (lStack_218 != lStack_220);
        __ZdlPv(lStack_220);
        goto joined_r0x001fd798;
      }
      __ZdlPv(lStack_220);
      if (-1 < cStack_221) goto LAB_001fd640;
LAB_001fd79c:
      __ZdlPv(uStack_238);
      if (-1 < cStack_239) goto LAB_001fd648;
LAB_001fd7ac:
      __ZdlPv(auStack_250[0]);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_198) {
        return uVar4;
      }
    }
    else {
      if (lStack_270 < 0) goto LAB_001fd68c;
LAB_001fd600:
      if (lStack_298 != 0) goto LAB_001fd69c;
joined_r0x001fd6f0:
      if (lStack_2a0 < 0) goto LAB_001fd6f4;
LAB_001fd610:
      if (lStack_2b8 < 0) goto LAB_001fd704;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
LAB_001fd618:
      if ((long)uStack_2d0 < 0) goto LAB_001fd714;
LAB_001fd620:
      if (cStack_1d9 < '\0') goto LAB_001fd724;
LAB_001fd628:
      if (cStack_1f1 < '\0') goto LAB_001fd734;
LAB_001fd630:
      if (lStack_220 != 0) goto LAB_001fd744;
joined_r0x001fd798:
      if (cStack_221 < '\0') goto LAB_001fd79c;
LAB_001fd640:
      if (cStack_239 < '\0') goto LAB_001fd7ac;
LAB_001fd648:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_198) {
        return uVar4;
      }
    }
    ___stack_chk_fail();
  }
  pbVar7 = (byte *)(*pcRam0000000002075d20)();
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  if ((*pbVar7 & 1) == 0) {
    func_0x019d774c();
  }
  pcStack_2e8 = (char *)(*pcRam0000000002075d08)();
  if (*pcStack_2e8 == '\x01') {
    uVar1 = (byte)pcStack_2e8[1] ^ 0x99871f9b;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xd9aa6dab;
    pcStack_2e8[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x58;
    uVar9 = (((ulong)(byte)pcStack_2e8[1] ^ 0x4daadaba1f454e10) << 0x11 | 0x9b55) +
            0x9e3779b97f4a7c15;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_2e8[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_2e8[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_2e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
/* more drops soon - github.com/pengussy - github.com/pengussy */
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_2e8[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_2e8[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_2e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_2e8[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_2e8[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_2e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
// WM - no support for modified copies
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_2e8[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_2e8[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_2e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_2e8[6] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_2e8[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_2e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
/* WM - keep the notice, keep the source honest */
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_2e8[7] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_2e8[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
    *pcStack_2e8 = '\0';
  }
  pcStack_2e8 = pcStack_2e8 + 8;
  uVar5 = func_0x0011ab24(&pcStack_2e8);
  func_0x007a1ba8(uVar4,1,uVar5);
LAB_001fdb20:
  FUN_0000aa50();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1fdb28);
  (*pcVar2)();
}
// more drops soon - github.com/pengussy

