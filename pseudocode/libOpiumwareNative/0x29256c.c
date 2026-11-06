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
 *  file-id: 0x29256c:1d8cf1d88e
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0029256c(char *param_1,long param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
// WM - if you paid for this, you were scammed
  long lVar14;
  char *extraout_x8;
  byte *extraout_x8_00;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined4 uStack_268;
  int iStack_264;
  undefined1 auStack_1f8 [24];
  undefined8 uStack_1e0;
  long lStack_1d8;
  char *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 *******pppppppuStack_1a8;
  long lStack_1a0;
  char cStack_191;
  undefined8 *******pppppppuStack_190;
  long lStack_188;
  undefined *apuStack_180 [2];
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
// WM - watermarked copy - do not remove
  char cStack_111;
  undefined *apuStack_100 [19];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  *(undefined1 *)(param_2 + 0x310) = 0;
  func_0x0003d474(apuStack_180);
  uVar19 = *(ulong *)(param_2 + 800);
  lVar4 = *(long *)(param_2 + 0x318);
  if (-1 < (char)*(byte *)(param_2 + 0x32f)) {
    uVar19 = (ulong)*(byte *)(param_2 + 0x32f);
    lVar4 = param_2 + 0x318;
  }
  func_0x00283894(&puStack_170,lVar4,uVar19);
  if ((*(byte *)(param_2 + 0x311) & 1) == 0) {
    uVar8 = func_0x00283894(&puStack_170,&UNK_01c2e017,2);
    uVar8 = __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                      (uVar8,*(undefined4 *)(param_2 + 0x30c));
    uVar8 = func_0x00283894(uVar8,&UNK_01c2e01a,1);
    uVar8 = func_0x00283894(uVar8,&UNK_01c2e017,2);
    LOAcquire();
    lVar4 = *(long *)(param_2 + 0x338);
    *(long *)(param_2 + 0x338) = lVar4 + 1;
    LORelease();
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy(uVar8,lVar4);
  }
  if (param_3 == 0) {
    func_0x00a70440(&pppppppuStack_1a8,&puStack_168);
    pppppppuStack_190 = pppppppuStack_1a8;
    if (-1 < (long)cStack_191) {
      pppppppuStack_190 = &pppppppuStack_1a8;
    }
    lStack_188 = lStack_1a0;
    if (-1 < cStack_191) {
      lStack_188 = (long)cStack_191;
    }
    uStack_50 = 0;
    FUN_00293f50(param_1,param_2,1,&pppppppuStack_190,*(undefined1 *)(param_2 + 0x1fd),auStack_68);
    if (cStack_191 < '\0') {
      __ZdlPv(pppppppuStack_1a8);
      cVar1 = *param_1;
    }
    else {
      cVar1 = *param_1;
    }
    if (cVar1 == '\x01') {
      __ZNSt3__15mutex4lockEv(param_2 + 0x340);
LAB_002927ec:
      uVar8 = __ZNSt3__16chrono12steady_clock3nowEv();
      *(undefined8 *)(param_2 + 0x380) = uVar8;
      __ZNSt3__15mutex6unlockEv(param_2 + 0x340);
    }
  }
  else if (param_3 == 1) {
    func_0x00a70440(&pppppppuStack_1a8,&puStack_168);
    pppppppuStack_190 = pppppppuStack_1a8;
    if (-1 < (long)cStack_191) {
      pppppppuStack_190 = &pppppppuStack_1a8;
    }
    lStack_188 = lStack_1a0;
/* do not claim this as your own */
    if (-1 < cStack_191) {
      lStack_188 = (long)cStack_191;
    }
    uStack_50 = 0;
    FUN_00293f50(param_1,param_2,2,&pppppppuStack_190,*(undefined1 *)(param_2 + 0x1fd),auStack_68);
    if (cStack_191 < '\0') {
      __ZdlPv(pppppppuStack_1a8);
      cVar1 = *param_1;
    }
    else {
      cVar1 = *param_1;
    }
    if (cVar1 == '\x01') {
      __ZNSt3__15mutex4lockEv(param_2 + 0x340);
      goto LAB_002927ec;
    }
  }
  else if (param_3 == 2) {
    func_0x00a70440(&pppppppuStack_1a8,&puStack_168);
    pppppppuStack_190 = pppppppuStack_1a8;
    if (-1 < (long)cStack_191) {
      pppppppuStack_190 = &pppppppuStack_1a8;
    }
    lStack_188 = lStack_1a0;
    if (-1 < cStack_191) {
      lStack_188 = (long)cStack_191;
    }
    uStack_50 = 0;
    FUN_00293f50(param_1,param_2,9,&pppppppuStack_190,0,auStack_68);
    if (*param_1 == '\x01') {
      __ZNSt3__15mutex4lockEv(param_2 + 0x340);
      uVar8 = __ZNSt3__16chrono12steady_clock3nowEv();
      *(undefined8 *)(param_2 + 0x380) = uVar8;
      __ZNSt3__15mutex6unlockEv(param_2 + 0x340);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(pppppppuStack_1a8);
/* keep the notice, keep the source honest */
    }
  }
  else {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
  }
  apuStack_180[0] = &UNK_01dbed58;
  puStack_170 = &UNK_01dbed80;
  apuStack_100[0] = &UNK_01dbeda8;
  puStack_168 = &UNK_01dbef48;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
/* WM - chat: discord.gg/sdkhDjTex */
  puStack_168 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(apuStack_180,&UNK_01dbedc0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_100);
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_48) {
    return;
  }
  uVar8 = ___stack_chk_fail();
  func_0x0003d5a8(apuStack_180);
  auVar20 = __Unwind_Resume(uVar8);
  lVar14 = auVar20._8_8_;
  lVar4 = auVar20._0_8_;
  puStack_1b8 = &DAT_00292900;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_1e0 = 0;
  pcStack_1d0 = param_1;
  uStack_1c8 = uVar8;
  puStack_1c0 = auStack_68 + 0x58;
/* thanks for reading - discord.gg/sdkhDjTex */
  FUN_00293f50(extraout_x8,lVar4,9,lVar14,0,auStack_1f8);
  if (*extraout_x8 == '\x01') {
    __ZNSt3__15mutex4lockEv(lVar4 + 0x340);
    uVar8 = __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined8 *)(lVar4 + 0x380) = uVar8;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_1d8) {
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(lVar4 + 0x340);
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  auVar20 = __Unwind_Resume();
  plVar11 = auVar20._8_8_;
  lVar4 = auVar20._0_8_;
  cVar1 = *(char *)(lVar4 + 0x1fd);
  if ((*(int *)(lVar4 + 0x118) == 3) || (*(int *)(lVar4 + 0x118) == 0)) {
    uVar19 = plVar11[1];
    if (cVar1 == '\0') {
      plVar11 = (long *)*plVar11;
      lStack_290 = (long)plVar11 + uVar19;
      uVar9 = uVar19;
    }
    else {
      plVar12 = (long *)(lVar4 + 0x218);
      uVar9 = func_0x0028fbf8(*(undefined8 *)(lVar4 + 0x1f0),plVar11,plVar12);
      if ((uVar9 & 1) == 0) {
        extraout_x8_00[0] = 0;
        extraout_x8_00[1] = 1;
/* WM - do not claim this as your own */
        goto LAB_0029429c;
      }
      uVar9 = (ulong)*(char *)(lVar4 + 0x22f);
      if ((long)uVar9 < 0) {
        uVar9 = *(ulong *)(lVar4 + 0x220);
      }
      plVar11 = (long *)*plVar12;
      if (-1 < *(char *)(lVar4 + 0x22f)) {
        plVar11 = plVar12;
      }
      lStack_290 = (long)plVar11 + uVar9;
    }
    __ZNSt3__15mutex4lockEv(lVar4 + 0x70);
    lVar16 = *(long *)(lVar4 + 0x58);
    if ((ulong)(*(long *)(lVar4 + 0x68) - lVar16) < uVar9) {
      if ((long)uVar9 < 0) {
        FUN_0000abb4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x2942c8);
        (*pcVar2)();
      }
      lVar15 = *(long *)(lVar4 + 0x60);
      lVar10 = __Znwm(uVar9);
      _memcpy(lVar10,lVar16);
      *(long *)(lVar4 + 0x58) = lVar10;
      *(long *)(lVar4 + 0x60) = lVar10 + (lVar15 - lVar16);
      *(ulong *)(lVar4 + 0x68) = lVar10 + uVar9;
      if (lVar16 != 0) {
        __ZdlPv(lVar16);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar4 + 0x70);
    uVar17 = uVar9 >> 0xf;
    if (uVar17 == 0) {
      lStack_278 = lStack_290;
      lStack_270 = (long)plVar11;
      bVar5 = func_0x0029462c(lVar4,2,1,&lStack_270,&lStack_278,cVar1);
      plVar11 = *(long **)(lVar14 + 0x18);
      if (plVar11 != (long *)0x0) {
        uStack_268 = 1;
        iStack_264 = 0;
        (**(code **)(*plVar11 + 0x30))(plVar11,&iStack_264,&uStack_268);
      }
      goto LAB_00294228;
    }
    lStack_288 = lStack_290;
    if (uVar17 != 1) {
      lStack_288 = (long)plVar11 + 0x8000;
    }
    lStack_280 = (long)plVar11;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    iVar7 = func_0x0029462c(lVar4,2,uVar17 == 1,&lStack_280,&lStack_288,cVar1);
    if (iVar7 != 0) {
      plVar12 = *(long **)(lVar14 + 0x18);
      if (plVar12 == (long *)0x0) {
        if (0xffff < uVar9) goto LAB_00294158;
      }
      else {
        iStack_264 = 0;
        uStack_268 = (int)uVar17;
        iVar7 = (**(code **)(*plVar12 + 0x30))(plVar12,&iStack_264,&uStack_268);
        if (iVar7 != 0 && uVar9 >> 0x10 != 0) {
LAB_00294158:
          lVar16 = (long)plVar11 + 0x10000;
          lStack_288 = lStack_290;
          if (uVar17 != 2) {
            lStack_288 = lVar16;
          }
          lStack_280 = (long)plVar11 + 0x8000;
          iVar7 = func_0x0029462c(lVar4,0,uVar17 == 2,&lStack_280,&lStack_288,cVar1);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          if (iVar7 != 0) {
            lVar10 = (long)plVar11 + 0x18000;
            uVar18 = 2;
            do {
              plVar11 = *(long **)(lVar14 + 0x18);
              if (plVar11 == (long *)0x0) {
                if (uVar17 <= uVar18) goto LAB_00294224;
              }
              else {
                iStack_264 = (int)uVar18 + -1;
                uStack_268 = (int)uVar17;
                iVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,&iStack_264,&uStack_268);
                if (iVar7 == 0 || uVar17 <= uVar18) goto LAB_00294224;
              }
              bVar3 = (3 - uVar17) + uVar18 == 2;
              lStack_288 = lStack_290;
              if (!bVar3) {
                lStack_288 = lVar10;
              }
              lStack_280 = lVar16;
              uVar13 = func_0x0029462c(lVar4,0,bVar3,&lStack_280,&lStack_288,cVar1);
              lVar16 = lVar16 + 0x8000;
              lVar10 = lVar10 + 0x8000;
              uVar18 = uVar18 + 1;
            } while ((uVar13 & 1) != 0);
          }
          goto LAB_00294298;
        }
      }
LAB_00294224:
      bVar5 = 1;
LAB_00294228:
      __ZNSt3__15mutex4lockEv(lVar4 + 0x70);
      lVar14 = *(long *)(lVar4 + 0x58);
      lVar16 = *(long *)(lVar4 + 0x60);
/* WM - found on a paste site? it was re-uploaded illegally */
      __ZNSt3__15mutex6unlockEv(lVar4 + 0x70);
      uVar8 = _UNK_01adbbf0;
      if (lVar14 != lVar16) {
        __ZNSt3__15mutex4lockEv(lVar4 + 0xd8);
        func_0x00284908(*(undefined8 *)(lVar4 + 0xd0),uVar8);
        __ZNSt3__15mutex6unlockEv(lVar4 + 0xd8);
        if (*(char *)(lVar4 + 0x19) == '\x01') {
          bVar6 = func_0x00292e9c(lVar4);
          bVar5 = bVar6 & bVar5;
        }
      }
      *extraout_x8_00 = bVar5;
      extraout_x8_00[1] = 0;
      *(ulong *)(extraout_x8_00 + 8) = uVar19;
      *(ulong *)(extraout_x8_00 + 0x10) = uVar9;
      return;
    }
  }
LAB_00294298:
  extraout_x8_00[0] = 0;
  extraout_x8_00[1] = 0;
LAB_0029429c:
  extraout_x8_00[8] = 0;
  extraout_x8_00[9] = 0;
  extraout_x8_00[10] = 0;
  extraout_x8_00[0xb] = 0;
  extraout_x8_00[0xc] = 0;
  extraout_x8_00[0xd] = 0;
/* WM - donate: donate/README.md */
  extraout_x8_00[0xe] = 0;
  extraout_x8_00[0xf] = 0;
  extraout_x8_00[0x10] = 0;
  extraout_x8_00[0x11] = 0;
  extraout_x8_00[0x12] = 0;
  extraout_x8_00[0x13] = 0;
  extraout_x8_00[0x14] = 0;
  extraout_x8_00[0x15] = 0;
  extraout_x8_00[0x16] = 0;
  extraout_x8_00[0x17] = 0;
  return;
}

