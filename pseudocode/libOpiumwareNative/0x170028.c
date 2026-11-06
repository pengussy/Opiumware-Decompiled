/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x170028:d850a98113
 */

long * FUN_00170028(long *param_1,undefined2 param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  ulong *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong unaff_x23;
  int unaff_w24;
  undefined1 auVar13 [16];
  long lStack_b8;
  long *plStack_b0;
  undefined2 uStack_a8;
  ulong uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  char cStack_89;
  long lStack_88;
  long *plStack_80;
  undefined2 uStack_78;
  ulong uStack_70;
/* stripping the watermark breaks the license */
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar11 = *param_1;
  plVar8 = param_1;
  puVar9 = param_3;
  if (lVar11 == 0) {
LAB_00170320:
    param_3 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
      return plVar8;
    }
  }
  else {
    __ZNSt3__15mutex4lockEv(lVar11 + 0x28);
    lVar10 = *param_1;
    if ((*(char *)(lVar10 + 0xb8) == '\x01') && (*(char *)(lVar10 + 0xbb) != '\x01')) {
      *(undefined2 *)(lVar10 + 0xb9) = 0x100;
      *(undefined1 *)(lVar10 + 0xbb) = 1;
      uVar3 = *(uint *)(lVar10 + 0xdc);
      unaff_x23 = (ulong)uVar3;
      __ZNSt3__15mutex6unlockEv(lVar11 + 0x28);
      plVar8 = (long *)__ZNSt3__118condition_variable10notify_allEv(*param_1 + 0x68);
      unaff_x20 = param_3;
      if (uVar3 != 0) {
        unaff_x23 = *param_3;
        uStack_58 = (undefined7)param_3[1];
        uStack_51 = (undefined1)*(undefined8 *)((long)param_3 + 0xf);
        uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)param_3 + 0xf) >> 8);
/* found on a paste site? it was re-uploaded illegally */
        cVar4 = *(char *)((long)param_3 + 0x17);
        unaff_w24 = (int)cVar4;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
        if (*param_1 == 0) {
          if (cVar4 < '\0') {
            if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar8 = (long *)(*(code *)PTR___ZdlPv_01f20590)(unaff_x23);
              return plVar8;
            }
            goto LAB_00170350;
          }
        }
        else {
          unaff_x20 = (ulong *)func_0x001e7bc4();
          plVar8 = (long *)param_1[1];
          lVar10 = param_1[1];
          lVar11 = *param_1;
          if (plVar8 != (long *)0x0) {
/* reversing this took months of machine time */
            plVar8[1] = plVar8[1] + 1;
          }
          uStack_98 = uStack_58;
          uStack_91 = uStack_51;
          uStack_90 = uStack_50;
          uStack_58 = 0;
          uStack_51 = 0;
          uStack_50 = 0;
          lStack_b8 = lVar11;
          plStack_b0 = plVar8;
          uStack_a8 = param_2;
          uStack_a0 = unaff_x23;
          cStack_89 = cVar4;
          __ZNSt3__15mutex4lockEv(unaff_x20 + 6);
          uVar12 = unaff_x20[1];
          uVar7 = unaff_x20[2];
          lVar2 = 0;
          if (uVar7 != uVar12) {
            lVar2 = (uVar7 - uVar12) * 0x10 + -1;
          }
          if (lVar2 == unaff_x20[5] + unaff_x20[4]) {
            func_0x0012d4cc(unaff_x20);
            uVar12 = unaff_x20[1];
            uVar7 = unaff_x20[2];
          }
          if (uVar7 == uVar12) {
            unaff_x23 = 0;
          }
          else {
            unaff_x23 = *(long *)(uVar12 + (unaff_x20[5] + unaff_x20[4] >> 7) * 8) +
                        (unaff_x20[5] + unaff_x20[4] & 0x7f) * 0x20;
          }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if (plVar8 != (long *)0x0) {
            plVar8[1] = plVar8[1] + 1;
          }
          uStack_68 = CONCAT17(uStack_91,uStack_98);
          uStack_70 = uStack_a0;
          uStack_60 = CONCAT17(cStack_89,uStack_90);
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_91 = 0;
          uStack_90 = 0;
          cStack_89 = '\0';
          *(undefined8 *)(unaff_x23 + 0x18) = 0;
          lStack_88 = lVar11;
          plStack_80 = plVar8;
          uStack_78 = param_2;
          puVar5 = (undefined8 *)__Znwm(0x38);
          *puVar5 = &UNK_01dbf780;
          puVar5[2] = lVar10;
          puVar5[1] = lVar11;
          if (plVar8 == (long *)0x0) {
            *(undefined2 *)(puVar5 + 3) = param_2;
            puVar5[5] = uStack_68;
            puVar5[4] = uStack_70;
            puVar5[6] = uStack_60;
            *(undefined8 **)(unaff_x23 + 0x18) = puVar5;
          }
          else {
            plVar1 = plVar8 + 1;
            *plVar1 = *plVar1 + 1;
            *(undefined2 *)(puVar5 + 3) = param_2;
            puVar5[5] = uStack_68;
            puVar5[4] = uStack_70;
            puVar5[6] = uStack_60;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            *(undefined8 **)(unaff_x23 + 0x18) = puVar5;
            LOAcquire();
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
            lVar11 = *plVar1;
            *plVar1 = lVar11 + -1;
            LORelease();
            if (lVar11 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          unaff_x20[5] = unaff_x20[5] + 1;
          plVar8 = (long *)__ZNSt3__15mutex6unlockEv(unaff_x20 + 6);
          if (cStack_89 < '\0') {
            plVar8 = (long *)__ZdlPv(uStack_a0);
          }
          plVar1 = plStack_b0;
          if (plStack_b0 != (long *)0x0) {
            LOAcquire();
            lVar11 = plStack_b0[1];
            plStack_b0[1] = lVar11 + -1;
            LORelease();
            if (lVar11 == 0) {
              (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
              plVar8 = (long *)__ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            }
          }
        }
      }
      goto LAB_00170320;
    }
/* unlicensed copy if this notice is missing */
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar8 = (long *)(*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(lVar11 + 0x28);
      return plVar8;
    }
  }
LAB_00170350:
  uVar6 = ___stack_chk_fail();
  __ZNSt3__15mutex6unlockEv(param_3 + 6);
  func_0x001704b4(&lStack_b8);
  uVar6 = __Unwind_Resume(uVar6);
  func_0x001704b4(&lStack_b8);
  uVar6 = __Unwind_Resume(uVar6);
  if (unaff_w24 < 0) {
    __ZdlPv(unaff_x23);
  }
  auVar13 = __Unwind_Resume(uVar6);
  lVar11 = __ZNSt3__16chrono12steady_clock3nowEv();
  uVar12 = *puVar9;
  if ((long)uVar12 <= lVar11) {
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  lVar11 = __ZNSt3__16chrono12steady_clock3nowEv();
  uVar12 = uVar12 - lVar11;
  if ((long)uVar12 < 1) goto code_r0x00170494;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar7 = __ZNSt3__16chrono12system_clock3nowEv();
  if (uVar7 == 0) {
    lVar11 = 0;
code_r0x00170480:
    lVar11 = lVar11 + uVar12;
  }
  else {
    if ((long)uVar7 < 1) {
      if (0xffdf3b645a1cac08 < uVar7) goto code_r0x00170464;
      lVar11 = -0x8000000000000000;
// WM - more drops soon - github.com/pengussy
      goto code_r0x00170480;
    }
    if (uVar7 < 0x20c49ba5e353f8) {
code_r0x00170464:
      lVar11 = uVar7 * 1000;
      if (lVar11 <= (long)(uVar12 ^ 0x7fffffffffffffff)) goto code_r0x00170480;
    }
    else {
      lVar11 = 0x7fffffffffffffff;
      if (0x7ffffffffffffffe < (long)(uVar12 ^ 0x7fffffffffffffff)) goto code_r0x00170480;
    }
    lVar11 = 0x7fffffffffffffff;
  }
  __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
            (auVar13._0_8_,auVar13._8_8_,lVar11);
  __ZNSt3__16chrono12steady_clock3nowEv();
code_r0x00170494:
  lVar11 = __ZNSt3__16chrono12steady_clock3nowEv();
  return (long *)(ulong)((long)*puVar9 <= lVar11);
}

