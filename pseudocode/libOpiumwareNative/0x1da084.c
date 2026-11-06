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
 *  file-id: 0x1da084:add2028a1b
 *  --------------------------------------------------------------------------*/

long FUN_001da084(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  bool bVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
/* thanks for reading - discord.gg/sdkhDjTex */
  undefined8 uVar26;
  undefined1 auVar27 [16];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_78;
  char cStack_70;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
LAB_001da0d0:
  do {
    plStack_50 = (long *)0x0;
    cStack_70 = '\x01';
    lStack_78 = param_1;
    __ZNSt3__15mutex4lockEv(param_1);
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
      do {
        if (*(long *)(param_1 + 0x98) != 0) goto LAB_001da114;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
                  (param_1 + 0x40,&lStack_78);
      } while (*(char *)(param_1 + 0xa0) != '\x01');
    }
    if (*(long *)(param_1 + 0x98) == 0) {
      if (cStack_70 == '\x01') {
        __ZNSt3__15mutex6unlockEv(lStack_78);
      }
      bVar15 = true;
      if (plStack_50 != alStack_68) goto LAB_001da28c;
LAB_001da0bc:
      lVar18 = 0x20;
LAB_001da0c0:
      lVar18 = (**(code **)(*plStack_50 + lVar18))();
    }
    else {
LAB_001da114:
/*  donate: donate/README.md  */
      plVar17 = plStack_50;
      uVar16 = *(ulong *)(param_1 + 0x90);
      lVar18 = *(long *)(*(long *)(param_1 + 0x78) + (uVar16 >> 7) * 8);
      plStack_50 = (long *)0x0;
      if (plVar17 == alStack_68) {
        lVar10 = 0x20;
LAB_001da16c:
        (**(code **)(*plVar17 + lVar10))();
      }
      else if (plVar17 != (long *)0x0) {
        lVar10 = 0x28;
        goto LAB_001da16c;
      }
      plVar17 = (long *)(lVar18 + (uVar16 & 0x7f) * 0x20);
      plStack_50 = (long *)plVar17[3];
      if (plStack_50 == (long *)0x0) {
        plStack_50 = (long *)0x0;
      }
      else if (plStack_50 == plVar17) {
        plStack_50 = alStack_68;
        (**(code **)(*(long *)plVar17[3] + 0x18))((long *)plVar17[3],alStack_68);
      }
      else {
        plVar17[3] = 0;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      }
      uVar16 = *(ulong *)(param_1 + 0x90);
      plVar17 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + (uVar16 >> 7) * 8) +
                        (uVar16 & 0x7f) * 0x20);
      plVar5 = (long *)plVar17[3];
      if (plVar5 == plVar17) {
        lVar18 = 0x20;
LAB_001da1f0:
        (**(code **)(*plVar5 + lVar18))();
        uVar16 = *(ulong *)(param_1 + 0x90);
      }
      else if (plVar5 != (long *)0x0) {
        lVar18 = 0x28;
        goto LAB_001da1f0;
      }
      *(ulong *)(param_1 + 0x90) = uVar16 + 1;
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
      if (0xff < uVar16 + 1) {
        __ZdlPv(**(undefined8 **)(param_1 + 0x78));
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 8;
        *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -0x80;
      }
      if (cStack_70 == '\x01') {
        __ZNSt3__15mutex6unlockEv(lStack_78);
      }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      if (plStack_50 == (long *)0x0) goto LAB_001da0d0;
      (**(code **)(*plStack_50 + 0x30))();
      bVar15 = false;
      if (plStack_50 == alStack_68) goto LAB_001da0bc;
LAB_001da28c:
      lVar18 = 0;
      if (plStack_50 != (long *)0x0) {
        lVar18 = 0x28;
        goto LAB_001da0c0;
      }
    }
  } while (!bVar15);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return lVar18;
  }
  uVar6 = ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar18 = 0x20;
LAB_001da31c:
    (**(code **)(*plStack_50 + lVar18))();
  }
  else if (plStack_50 != (long *)0x0) {
    lVar18 = 0x28;
    goto LAB_001da31c;
/* donate: donate/README.md */
  }
  auVar27 = __Unwind_Resume(uVar6);
  plVar17 = auVar27._0_8_;
  lVar18 = *plVar17;
  lVar10 = plVar17[1];
  lVar20 = lVar10 - lVar18;
  uVar16 = (lVar20 >> 3) + 1;
  if (uVar16 >> 0x3d != 0) {
    FUN_0000abb4();
code_r0x001da4f8:
    uVar6 = func_0x0000a888();
    func_0x0015716c(&lStack_108);
    lVar18 = __Unwind_Resume(uVar6);
    __ZNSt3__15mutex4lockEv();
    *(undefined1 *)(lVar18 + 0xa0) = 1;
    __ZNSt3__15mutex6unlockEv(lVar18);
    __ZNSt3__118condition_variable10notify_allEv(lVar18 + 0x40);
    plVar17 = *(long **)(lVar18 + 0xa8);
    plVar5 = *(long **)(lVar18 + 0xb0);
    if (plVar17 != plVar5) {
      do {
        if (*plVar17 != 0) {
          __ZNSt3__16thread4joinEv(plVar17);
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar5);
      plVar17 = *(long **)(lVar18 + 0xa8);
    }
    if (plVar17 != (long *)0x0) {
      plVar9 = *(long **)(lVar18 + 0xb0);
      plVar5 = plVar17;
      if (plVar17 != plVar9) {
        do {
          plVar9 = (long *)__ZNSt3__16threadD1Ev(plVar9 + -1);
        } while (plVar9 != plVar17);
        plVar5 = *(long **)(lVar18 + 0xa8);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      }
      *(long **)(lVar18 + 0xb0) = plVar17;
      __ZdlPv(plVar5);
    }
    func_0x001571bc(lVar18 + 0x70);
    __ZNSt3__118condition_variableD1Ev(lVar18 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x01a171d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar18 = (*(code *)PTR___ZNSt3__15mutexD1Ev_01f24600)(lVar18);
    return lVar18;
  }
  plStack_e8 = plVar17 + 2;
  uVar13 = *plStack_e8 - lVar18 >> 2;
  if (uVar13 <= uVar16) {
    uVar13 = uVar16;
  }
  if (0x7ffffffffffffff7 < (ulong)(*plStack_e8 - lVar18)) {
    uVar13 = 0x1fffffffffffffff;
  }
  if (uVar13 == 0) {
    lVar7 = 0;
  }
/* WM - keep the notice, keep the source honest */
  else {
    if (uVar13 >> 0x3d != 0) goto code_r0x001da4f8;
    lVar7 = __Znwm(uVar13 << 3);
  }
  lVar1 = lVar7 + lVar20;
  lVar2 = lVar7 + uVar13 * 8;
  lStack_108 = lVar7;
  lStack_100 = lVar1;
  lStack_f8 = lVar1;
  lStack_f0 = lVar2;
  FUN_001d9f40(lVar1,auVar27._8_8_);
  puVar8 = (undefined8 *)*plVar17;
  puVar3 = (undefined8 *)plVar17[1];
  puVar19 = (undefined8 *)(lVar1 - ((long)puVar3 - (long)puVar8));
  lVar4 = (long)puVar3 - (long)puVar8;
  if (lVar4 == 0) goto code_r0x001da4c0;
  uVar16 = lVar4 - 8;
  puVar11 = puVar19;
  if ((uVar16 < 0x98) ||
     ((puVar19 < (undefined8 *)((long)puVar8 + (uVar16 & 0xfffffffffffffff8) + 8) &&
      (puVar8 < (undefined8 *)
                ((((uVar16 & 0xfffffffffffffff8) + lVar10) - (lVar4 + lVar18)) + lVar7 + 8))))) {
code_r0x001da498:
    do {
      *puVar11 = *puVar8;
      puVar14 = puVar8 + 1;
      *puVar8 = 0;
      puVar8 = puVar14;
      puVar11 = puVar11 + 1;
    } while (puVar14 != puVar3);
  }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  else {
    uVar16 = (uVar16 >> 3) + 1;
    uVar12 = uVar16 & 0x3ffffffffffffff8;
    puVar11 = puVar8 + 4;
    puVar14 = (undefined8 *)(lVar20 + (lVar4 >> 3) * -8 + lVar7 + 0x20);
    uVar13 = uVar12;
    do {
      uVar6 = puVar11[-4];
      uVar22 = puVar11[-1];
      uVar21 = puVar11[-2];
      uVar24 = puVar11[1];
      uVar23 = *puVar11;
      uVar26 = puVar11[3];
      uVar25 = puVar11[2];
      puVar14[-3] = puVar11[-3];
      puVar14[-4] = uVar6;
      puVar14[-1] = uVar22;
      puVar14[-2] = uVar21;
      puVar11[-3] = 0;
      puVar11[-4] = 0;
      puVar11[-1] = 0;
      puVar11[-2] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
/* wm:unlicensed copy if this notice is missing */
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar14[1] = uVar24;
      *puVar14 = uVar23;
      puVar14[3] = uVar26;
      puVar14[2] = uVar25;
      uVar13 = uVar13 - 8;
      puVar11 = puVar11 + 8;
      puVar14 = puVar14 + 8;
    } while (uVar13 != 0);
    puVar8 = puVar8 + uVar12;
    puVar11 = puVar19 + uVar12;
    if (uVar16 != uVar12) goto code_r0x001da498;
  }
  do {
    lVar18 = __ZNSt3__16threadD1Ev();
  } while ((undefined8 *)(lVar18 + 8) != puVar3);
  puVar8 = (undefined8 *)*plVar17;
/* wm:stripping the watermark breaks the license */
code_r0x001da4c0:
  *plVar17 = (long)puVar19;
  plVar17[1] = lVar1 + 8;
  plVar17[2] = lVar2;
  if (puVar8 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  return lVar1 + 8;
}

