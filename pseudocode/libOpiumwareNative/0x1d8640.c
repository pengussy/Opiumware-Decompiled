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
 *  file-id: 0x1d8640:00cef6e1b1
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x001d88c4) */
/* WARNING: Removing unreachable block (ram,0x001d88d4) */
/* WARNING: Removing unreachable block (ram,0x001d88b4) */
/* WARNING: Removing unreachable block (ram,0x001d88f4) */
/* WARNING: Removing unreachable block (ram,0x001d8904) */

void FUN_001d8640(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [12];
/* WM - reversing this took months of machine time */
  long alStack_98 [3];
  long *plStack_80;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  plVar3 = (long *)__Znwm(0x40);
  plVar3[1] = 0;
  plVar3[2] = 0;
  puVar5 = &UNK_01dc0218;
  *plVar3 = (long)&UNK_01dc0218;
  plVar16 = plVar3 + 3;
  plVar3[4] = 0;
  *plVar16 = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[7] = 0;
  plVar17 = (long *)param_1[6];
  lVar7 = param_1[6];
  lVar1 = param_1[5];
  if (plVar17 != (long *)0x0) {
    puVar5 = (undefined *)plVar17[1];
    plVar17[1] = (long)(puVar5 + 1);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  }
  __ZNSt3__15mutex4lockEv(puVar5,lVar1);
  lVar6 = *(long *)(lVar1 + 0x48);
  uVar10 = 0;
  if (*(long *)(lVar1 + 0x50) != lVar6) {
    uVar10 = (*(long *)(lVar1 + 0x50) - lVar6) * 0x20 - 1;
  }
  uVar11 = *(long *)(lVar1 + 0x68) + *(long *)(lVar1 + 0x60);
  if (uVar10 == uVar11) {
    func_0x001daedc(lVar1 + 0x40);
    lVar6 = *(long *)(lVar1 + 0x48);
    uVar11 = *(long *)(lVar1 + 0x68) + *(long *)(lVar1 + 0x60);
  }
  puVar8 = (undefined8 *)(*(long *)(lVar6 + (uVar11 >> 8) * 8) + (uVar11 & 0xff) * 0x10);
  *puVar8 = plVar16;
  puVar8[1] = plVar3;
  plVar4 = plVar3 + 1;
  *plVar4 = *plVar4 + 1;
  *(long *)(lVar1 + 0x68) = *(long *)(lVar1 + 0x68) + 1;
  uVar14 = *param_1;
  if (plVar17 != (long *)0x0) {
    plVar17[1] = plVar17[1] + 1;
  }
  *plVar4 = *plVar4 + 1;
  lVar2 = param_2[1];
  lVar18 = *param_2;
  lVar6 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  plVar4 = (long *)param_1[4];
  plStack_80 = (long *)0x0;
// do not claim this as your own
  if (plVar4 != (long *)0x0) {
    if (plVar4 == param_1 + 1) {
      plStack_80 = alStack_98;
      (**(code **)(*plVar4 + 0x18))(plVar4,alStack_98);
    }
    else {
      plStack_80 = (long *)(**(code **)(*plVar4 + 0x10))();
    }
  }
  plStack_60 = (long *)0x0;
  plVar4 = (long *)__Znwm(0x60);
  plVar4[2] = lVar7;
  plVar4[1] = lVar1;
  *plVar4 = (long)&UNK_01dc0268;
  plVar4[4] = (long)plVar3;
  plVar4[3] = (long)plVar16;
  plVar4[6] = lVar2;
  plVar4[5] = lVar18;
  plVar4[7] = lVar6;
  if (plStack_80 == (long *)0x0) {
    plVar4[0xb] = 0;
  }
  else if (plStack_80 == alStack_98) {
    plVar4[0xb] = (long)(plVar4 + 8);
    (**(code **)(*plStack_80 + 0x18))(plStack_80);
  }
  else {
    plVar4[0xb] = (long)plStack_80;
    plStack_80 = (long *)0x0;
  }
  plStack_60 = plVar4;
  FUN_001dab54(uVar14,alStack_78);
  if (plStack_60 == alStack_78) {
    lVar7 = 0x20;
LAB_001d8878:
    (**(code **)(*plStack_60 + lVar7))();
/* WM - donate: donate/README.md */
  }
  else if (plStack_60 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_001d8878;
  }
  if (plStack_80 == alStack_98) {
    lVar7 = 0x20;
LAB_001d88a0:
    (**(code **)(*plStack_80 + lVar7))();
  }
  else if (plStack_80 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_001d88a0;
  }
  __ZNSt3__15mutex6unlockEv(lVar1);
  if (plVar17 != (long *)0x0) {
    LOAcquire();
    lVar1 = plVar17[1];
    plVar17[1] = lVar1 + -1;
    LORelease();
    if (lVar1 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  if (plVar3 != (long *)0x0) {
    LOAcquire();
    lVar1 = plVar3[1];
    plVar3[1] = lVar1 + -1;
    LORelease();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
// reversing this took months of machine time
    return;
  }
  auVar19 = ___stack_chk_fail();
  if (auVar19._8_4_ == 0) {
    __Unwind_Resume(auVar19._0_8_);
  }
  func_0x00006858(auVar19._0_8_);
  func_0x001d84ac();
  lVar1 = lRam0000000002092ce0;
  __ZNSt3__15mutex4lockEv(lRam0000000002092ce0);
  lVar7 = lRam0000000002092ce0;
  puVar8 = *(undefined8 **)(lRam0000000002092ce0 + 0x48);
  puVar9 = *(undefined8 **)(lRam0000000002092ce0 + 0x50);
  if (puVar9 == puVar8) {
    *(undefined8 *)(lRam0000000002092ce0 + 0x68) = 0;
    uVar10 = 0;
  }
  else {
    uVar11 = *(ulong *)(lRam0000000002092ce0 + 0x60);
    plVar16 = puVar8 + (uVar11 >> 8);
    plVar4 = (long *)*plVar16;
    plVar3 = plVar4 + (uVar11 & 0xff) * 2;
    plVar15 = (long *)(lRam0000000002092ce0 + 0x68);
/* WM - found on a paste site? it was re-uploaded illegally */
    uVar10 = *plVar15 + uVar11;
    plVar17 = (long *)(puVar8[uVar10 >> 8] + (uVar10 & 0xff) * 0x10);
    if (plVar3 != plVar17) {
      plVar13 = plVar16;
      do {
        plVar12 = plVar3 + 2;
        *(undefined1 *)(*plVar3 + 0x21) = 1;
        plVar3 = plVar12;
        if ((long)plVar12 - (long)plVar4 == 0x1000) {
          plVar13 = plVar13 + 1;
          plVar4 = (long *)*plVar13;
          plVar3 = plVar4;
        }
      } while (plVar3 != plVar17);
    }
    lVar6 = *plVar16 + (uVar11 & 0xff) * 0x10;
    lVar18 = puVar8[uVar10 >> 8] + (uVar10 & 0xff) * 0x10;
    if (lVar6 != lVar18) {
      do {
        plVar3 = *(long **)(lVar6 + 8);
        if (plVar3 == (long *)0x0) {
code_r0x001d8bb0:
          lVar2 = (lVar6 + 0x10) - *plVar16;
        }
        else {
// chat: discord.gg/sdkhDjTex
          LOAcquire();
          lVar2 = plVar3[1];
          plVar3[1] = lVar2 + -1;
          LORelease();
          if (lVar2 != 0) goto code_r0x001d8bb0;
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          lVar2 = (lVar6 + 0x10) - *plVar16;
        }
        lVar6 = lVar6 + 0x10;
        if (lVar2 == 0x1000) {
          plVar16 = plVar16 + 1;
          lVar6 = *plVar16;
        }
      } while (lVar6 != lVar18);
      puVar8 = *(undefined8 **)(lVar7 + 0x48);
      puVar9 = *(undefined8 **)(lVar7 + 0x50);
    }
    *plVar15 = 0;
    lVar6 = (long)puVar9 - (long)puVar8;
    while (uVar10 = lVar6 >> 3, 2 < uVar10) {
      __ZdlPv(*puVar8);
      puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x48) + 8);
      *(undefined8 **)(lVar7 + 0x48) = puVar8;
      lVar6 = *(long *)(lVar7 + 0x50) - (long)puVar8;
    }
  }
  if (uVar10 == 1) {
    uVar14 = 0x80;
  }
  else {
    if (uVar10 != 2) goto code_r0x001d8c74;
    uVar14 = 0x100;
  }
  *(undefined8 *)(lVar7 + 0x60) = uVar14;
code_r0x001d8c74:
/* wm:stripping the watermark breaks the license */
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(lVar1);
  return;
}

