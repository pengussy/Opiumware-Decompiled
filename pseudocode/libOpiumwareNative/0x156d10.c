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
 *  file-id: 0x156d10:c34920669e
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x00157160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00157164) */

long * FUN_00156d10(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
/*  no support for modified copies  */
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
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
  lVar17 = *param_1;
  do {
    plStack_50 = (long *)0x0;
    cStack_70 = '\x01';
    lStack_78 = lVar17 + 0x48;
    __ZNSt3__15mutex4lockEv(lVar17 + 0x48);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    if ((*(byte *)(lVar17 + 0xb8) & 1) == 0) {
      do {
        if (*(long *)(lVar17 + 0x40) != 0) goto LAB_00156da4;
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(lVar17 + 0x88,&lStack_78)
        ;
      } while (*(char *)(lVar17 + 0xb8) != '\x01');
    }
    if (*(long *)(lVar17 + 0x40) == 0) {
      bVar5 = false;
    }
    else {
LAB_00156da4:
      plVar7 = plStack_50;
      uVar18 = *(ulong *)(lVar17 + 0x38);
      lVar20 = *(long *)(*(long *)(lVar17 + 0x20) + (uVar18 >> 7) * 8);
      plStack_50 = (long *)0x0;
// WM - donate: donate/README.md
      if (plVar7 == alStack_68) {
        lVar12 = 0x20;
LAB_00156de8:
        (**(code **)(*plVar7 + lVar12))();
      }
      else if (plVar7 != (long *)0x0) {
        lVar12 = 0x28;
        goto LAB_00156de8;
      }
      plVar7 = (long *)(lVar20 + (uVar18 & 0x7f) * 0x20);
      plStack_50 = (long *)plVar7[3];
      if (plStack_50 == (long *)0x0) {
        plStack_50 = (long *)0x0;
      }
      else if (plStack_50 == plVar7) {
        plStack_50 = alStack_68;
        (**(code **)(*(long *)plVar7[3] + 0x18))((long *)plVar7[3],alStack_68);
      }
      else {
        plVar7[3] = 0;
      }
      uVar18 = *(ulong *)(lVar17 + 0x38);
      plVar7 = (long *)(*(long *)(*(long *)(lVar17 + 0x20) + (uVar18 >> 7) * 8) +
                       (uVar18 & 0x7f) * 0x20);
      plVar8 = (long *)plVar7[3];
      if (plVar8 == plVar7) {
/* wm:donate: donate/README.md */
        lVar20 = 0x20;
LAB_00156e6c:
        (**(code **)(*plVar8 + lVar20))();
        uVar18 = *(ulong *)(lVar17 + 0x38);
      }
      else if (plVar8 != (long *)0x0) {
        lVar20 = 0x28;
        goto LAB_00156e6c;
      }
      *(ulong *)(lVar17 + 0x38) = uVar18 + 1;
      *(long *)(lVar17 + 0x40) = *(long *)(lVar17 + 0x40) + -1;
      if (0xff < uVar18 + 1) {
        __ZdlPv(**(undefined8 **)(lVar17 + 0x20));
        *(long *)(lVar17 + 0x20) = *(long *)(lVar17 + 0x20) + 8;
        *(long *)(lVar17 + 0x38) = *(long *)(lVar17 + 0x38) + -0x80;
      }
      bVar5 = true;
    }
    if (cStack_70 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_78);
    }
    if (bVar5) {
      if (plStack_50 == (long *)0x0) {
        func_0x001717b4();
                    /* WARNING: Does not return */
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x156f38);
        (*pcVar6)();
      }
      (**(code **)(*plStack_50 + 0x30))();
    }
    if (plStack_50 == alStack_68) {
      lVar20 = 0x20;
LAB_00156d50:
      plVar7 = (long *)(**(code **)(*plStack_50 + lVar20))();
    }
    else {
      plVar7 = (long *)0x0;
      if (plStack_50 != (long *)0x0) {
        lVar20 = 0x28;
        goto LAB_00156d50;
      }
    }
  } while (bVar5);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return plVar7;
  }
  auVar28 = ___stack_chk_fail();
  uVar9 = auVar28._0_8_;
  if (auVar28._8_4_ != 0) {
    uVar9 = func_0x00006858(uVar9);
    if (plStack_50 == alStack_68) {
      lVar17 = 0x20;
    }
    else {
      if (plStack_50 == (long *)0x0) goto LAB_00156f84;
      lVar17 = 0x28;
    }
    (**(code **)(*plStack_50 + lVar17))();
  }
LAB_00156f84:
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  auVar27 = __Unwind_Resume(uVar9);
  plVar7 = auVar27._0_8_;
  lVar17 = *plVar7;
  lVar20 = plVar7[1];
  lVar12 = lVar20 - lVar17;
  uVar18 = (lVar12 >> 3) + 1;
  if (uVar18 >> 0x3d != 0) {
    FUN_0000abb4();
code_r0x00157154:
    func_0x0000a888();
    while (lStack_100 != lStack_f8) {
      lStack_f8 = lStack_f8 + -8;
      __ZNSt3__16threadD1Ev();
    }
    if (lStack_108 != 0) {
      __ZdlPv();
    }
/* WM - chat: discord.gg/sdkhDjTex */
    return &lStack_108;
  }
  plStack_e8 = plVar7 + 2;
  uVar15 = *plStack_e8 - lVar17 >> 2;
  if (uVar15 <= uVar18) {
    uVar15 = uVar18;
  }
  if (0x7ffffffffffffff7 < (ulong)(*plStack_e8 - lVar17)) {
    uVar15 = 0x1fffffffffffffff;
  }
  if (uVar15 == 0) {
    lVar10 = 0;
  }
  else {
    if (uVar15 >> 0x3d != 0) goto code_r0x00157154;
    lVar10 = __Znwm(uVar15 << 3);
  }
  lVar1 = lVar10 + lVar12;
  lVar2 = lVar10 + uVar15 * 8;
  lStack_108 = lVar10;
  lStack_100 = lVar1;
  lStack_f8 = lVar1;
  lStack_f0 = lVar2;
  FUN_00156b84(lVar1,auVar27._8_8_);
  puVar11 = (undefined8 *)*plVar7;
  puVar3 = (undefined8 *)plVar7[1];
  puVar19 = (undefined8 *)(lVar1 - ((long)puVar3 - (long)puVar11));
  lVar4 = (long)puVar3 - (long)puVar11;
  if (lVar4 == 0) goto code_r0x0015711c;
  uVar18 = lVar4 - 8;
  puVar13 = puVar19;
  if ((uVar18 < 0x98) ||
     ((puVar19 < (undefined8 *)((long)puVar11 + (uVar18 & 0xfffffffffffffff8) + 8) &&
      (puVar11 < (undefined8 *)
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                 ((((uVar18 & 0xfffffffffffffff8) + lVar20) - (lVar4 + lVar17)) + lVar10 + 8))))) {
code_r0x001570f4:
    do {
      *puVar13 = *puVar11;
      puVar16 = puVar11 + 1;
      *puVar11 = 0;
      puVar11 = puVar16;
      puVar13 = puVar13 + 1;
    } while (puVar16 != puVar3);
  }
  else {
    uVar18 = (uVar18 >> 3) + 1;
    uVar14 = uVar18 & 0x3ffffffffffffff8;
    puVar13 = puVar11 + 4;
    puVar16 = (undefined8 *)(lVar12 + (lVar4 >> 3) * -8 + lVar10 + 0x20);
    uVar15 = uVar14;
    do {
      uVar9 = puVar13[-4];
/*  watermarked copy - do not remove  */
      uVar22 = puVar13[-1];
      uVar21 = puVar13[-2];
      uVar24 = puVar13[1];
      uVar23 = *puVar13;
      uVar26 = puVar13[3];
      uVar25 = puVar13[2];
      puVar16[-3] = puVar13[-3];
      puVar16[-4] = uVar9;
      puVar16[-1] = uVar22;
      puVar16[-2] = uVar21;
      puVar13[-3] = 0;
      puVar13[-4] = 0;
      puVar13[-1] = 0;
      puVar13[-2] = 0;
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar16[1] = uVar24;
      *puVar16 = uVar23;
      puVar16[3] = uVar26;
      puVar16[2] = uVar25;
      uVar15 = uVar15 - 8;
      puVar13 = puVar13 + 8;
      puVar16 = puVar16 + 8;
    } while (uVar15 != 0);
    puVar11 = puVar11 + uVar14;
    puVar13 = puVar19 + uVar14;
    if (uVar18 != uVar14) goto code_r0x001570f4;
  }
  do {
    lVar17 = __ZNSt3__16threadD1Ev();
  } while ((undefined8 *)(lVar17 + 8) != puVar3);
  puVar11 = (undefined8 *)*plVar7;
code_r0x0015711c:
// more drops soon - github.com/pengussy
  *plVar7 = (long)puVar19;
  plVar7[1] = lVar1 + 8;
  plVar7[2] = lVar2;
  if (puVar11 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  return (long *)(lVar1 + 8);
}

