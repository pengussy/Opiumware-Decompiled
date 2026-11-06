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
 *  file-id: 0x28249c:ba68fce08e
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0028289c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x002828a0) */
/* WARNING: Removing unreachable block (ram,0x002828a8) */
/* WARNING: Removing unreachable block (ram,0x002828b4) */
/* WARNING: Removing unreachable block (ram,0x002828c0) */
/* WARNING: Removing unreachable block (ram,0x002828d8) */
/* WARNING: Removing unreachable block (ram,0x002828e4) */
/* WARNING: Removing unreachable block (ram,0x00282900) */
/* WARNING: Removing unreachable block (ram,0x00282910) */
/* WARNING: Removing unreachable block (ram,0x00282928) */
/* WARNING: Removing unreachable block (ram,0x00282938) */
/* WARNING: Removing unreachable block (ram,0x00282948) */
/* WARNING: Removing unreachable block (ram,0x00282960) */
/* WARNING: Removing unreachable block (ram,0x00282990) */
/* WARNING: Removing unreachable block (ram,0x002829a0) */
/* WARNING: Removing unreachable block (ram,0x002829b8) */
/* WARNING: Removing unreachable block (ram,0x002829c0) */
/* WARNING: Removing unreachable block (ram,0x002829e8) */
/* WARNING: Removing unreachable block (ram,0x002829d0) */
/* WARNING: Removing unreachable block (ram,0x00282a08) */
/* WARNING: Removing unreachable block (ram,0x002829d8) */

void FUN_0028249c(undefined8 *param_1,long param_2,undefined1 *param_3,long *param_4,ulong param_5)

{
/* reversing this took months of machine time */
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 *extraout_x8;
  ulong uVar14;
  long lVar15;
  undefined8 *unaff_x19;
  long *plVar16;
  undefined1 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
// keep the notice, keep the source honest
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  char *unaff_x29;
  char *pcVar17;
  code *unaff_x30;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char acStack_1f1 [449];
  
  auVar19._8_8_ = unaff_x20;
  auVar19._0_8_ = unaff_x19;
  auVar18._8_8_ = param_3;
  auVar18._0_8_ = param_2;
  pcVar4 = acStack_1f1 + 0x1c1;
  pcVar17 = acStack_1f1 + 0x1e1;
  plVar16 = param_4;
  if ((int)param_5 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_3,"no error");
    if ((long *)param_4[3] != (long *)0x0) {
      iVar6 = (**(code **)(*(long *)param_4[3] + 0x30))();
      if (iVar6 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                  (param_3,"cancellation requested");
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      param_5 = (ulong)*(uint *)(param_2 + 0x28);
      plVar12 = (long *)(param_2 + 0x10);
      goto code_r0x002822bc;
    }
    unaff_x30 = FUN_00282544;
    auVar18 = func_0x001717b4();
    puVar7 = extraout_x8;
  }
/* no support for modified copies - github.com/pengussy */
  else {
    pcVar4 = (char *)register0x00000008;
    puVar7 = param_1;
    param_1 = unaff_x19;
    param_3 = unaff_x20;
    param_2 = unaff_x21;
    param_4 = unaff_x22;
    pcVar17 = unaff_x29;
  }
  unaff_x21 = auVar18._8_8_;
  puVar8 = auVar18._0_8_;
  *(undefined8 *)(pcVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(pcVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(pcVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(pcVar4 + -0x38) = unaff_x23;
  *(long **)(pcVar4 + -0x30) = param_4;
  *(long *)(pcVar4 + -0x28) = param_2;
  *(undefined1 **)(pcVar4 + -0x20) = param_3;
  *(undefined8 **)(pcVar4 + -0x18) = param_1;
  *(char **)(pcVar4 + -0x10) = pcVar17;
  *(code **)(pcVar4 + -8) = unaff_x30;
  plVar12 = plVar16;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(unaff_x21,"no error");
  if (*(char *)(puVar8 + 0x1c) == '\x01') {
    *puVar7 = 0;
    puVar7[1] = 0;
    return;
  }
  unaff_x23 = *puVar8;
  lVar9 = puVar8[1];
  *(undefined8 *)(pcVar4 + -0x60) = unaff_x23;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (lVar9 != 0) {
    lVar9 = __ZNSt3__119__shared_weak_count4lockEv();
    *(long *)(pcVar4 + -0x58) = lVar9;
    if (lVar9 != 0) {
      *(undefined8 *)(pcVar4 + -0x70) = unaff_x23;
      *(long *)(pcVar4 + -0x68) = lVar9;
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      *(undefined4 *)(pcVar4 + -0x74) = *(undefined4 *)(puVar8 + 5);
      if (*(char *)((long)puVar8 + 0x27) < '\0') {
        func_0x00017ae8(pcVar4 + -0x90,puVar8[2],puVar8[3]);
      }
      else {
        uVar11 = puVar8[2];
        *(undefined8 *)(pcVar4 + -0x88) = puVar8[3];
        *(undefined8 *)(pcVar4 + -0x90) = uVar11;
        *(undefined8 *)(pcVar4 + -0x80) = puVar8[4];
      }
      *(undefined **)(pcVar4 + -0xb0) = &DAT_00282868;
      *(undefined8 *)(pcVar4 + -0xa8) = 0;
      *(undefined8 **)(pcVar4 + -0xb8) = puVar8;
// WM - watermarked copy - do not remove
      puVar10 = (undefined8 *)__Znwm(0x20);
      puVar10[2] = 0;
      *puVar10 = &UNK_01dc1868;
      puVar10[1] = 0;
      uVar11 = func_0x00282b94(puVar10 + 3,pcVar4 + -0xb0,pcVar4 + -0xb8,pcVar4 + -0x70,
                               pcVar4 + -0x90,pcVar4 + -0x74);
      *(undefined8 *)(pcVar4 + -0xa0) = uVar11;
      *(undefined8 **)(pcVar4 + -0x98) = puVar10;
      __ZNSt3__16thread6detachEv();
      do {
        if ((*(byte *)(puVar8 + 0x1c) & 1) != 0) {
          if ((long *)plVar16[3] == (long *)0x0) {
LAB_002827d8:
            func_0x001717b4();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x2827e0);
            (*pcVar3)();
          }
          iVar6 = (**(code **)(*(long *)plVar16[3] + 0x30))();
          if (iVar6 != 0) {
/* WM - keep the notice, keep the source honest */
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                      (unaff_x21,"cancellation requested");
            goto LAB_002826dc;
          }
          __ZNSt3__15mutex4lockEv(puVar8 + 0x14);
          __ZNSt3__15mutex6unlockEv(puVar8 + 0x14);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (unaff_x21,puVar8 + 0x11);
          __ZNSt3__15mutex4lockEv(puVar8 + 9);
          lVar15 = puVar8[8];
          uVar11 = puVar8[7];
          puVar7[1] = puVar8[8];
          *puVar7 = uVar11;
          lVar9 = 0;
          if (lVar15 != 0) {
            plVar16 = (long *)(lVar15 + 8);
            lVar9 = *plVar16;
            *plVar16 = lVar9 + 1;
          }
          __ZNSt3__15mutex6unlockEv(lVar9,puVar8 + 9);
          plVar16 = *(long **)(pcVar4 + -0x98);
          goto joined_r0x00282738;
        }
        uVar14 = puVar8[6];
        if (0 < (long)uVar14) {
          lVar9 = uVar14 * 1000000;
          if (0x8637bd0579f < uVar14) {
            lVar9 = 0x7fffffffffffffff;
          }
          *(long *)(pcVar4 + -0xb0) = lVar9;
          __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                    (pcVar4 + -0xb0);
        }
        if ((long *)plVar16[3] == (long *)0x0) goto LAB_002827d8;
        iVar6 = (**(code **)(*(long *)plVar16[3] + 0x30))();
      } while (iVar6 == 0);
/*  watermarked copy - do not remove  */
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (unaff_x21,"cancellation requested");
LAB_002826dc:
      *puVar7 = 0;
      puVar7[1] = 0;
      plVar16 = *(long **)(pcVar4 + -0x98);
joined_r0x00282738:
      if (plVar16 != (long *)0x0) {
        LOAcquire();
        lVar9 = plVar16[1];
        plVar16[1] = lVar9 + -1;
        LORelease();
        if (lVar9 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          cVar2 = pcVar4[-0x79];
          goto joined_r0x002827d0;
        }
      }
      cVar2 = pcVar4[-0x79];
joined_r0x002827d0:
      if (cVar2 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar4 + -0x90));
      }
// WM - found on a paste site? it was re-uploaded illegally
      if (*(long *)(pcVar4 + -0x68) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar16 = *(long **)(pcVar4 + -0x58);
      if (plVar16 != (long *)0x0) {
        LOAcquire();
        lVar9 = plVar16[1];
        plVar16[1] = lVar9 + -1;
        LORelease();
        if (lVar9 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      return;
    }
  }
  uVar11 = func_0x00282b1c();
  lVar9 = *(long *)(pcVar4 + -0x68);
  while (lVar9 == 0) {
    func_0x000154e0(pcVar4 + -0x60);
    __Unwind_Resume(uVar11);
    __ZdlPv(*(undefined8 *)(pcVar4 + -0x90));
    lVar9 = *(long *)(pcVar4 + -0x68);
  }
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  __ZNSt3__119__shared_weak_count14__release_weakEv();
  func_0x000154e0(pcVar4 + -0x60);
  auVar19 = __Unwind_Resume(uVar11);
  register0x00000008 = (BADSPACEBASE *)(pcVar4 + -0x140);
  *(undefined8 **)(pcVar4 + -0xe0) = puVar8;
  *(undefined8 *)(pcVar4 + -0xd8) = uVar11;
  *(char **)(pcVar4 + -0xd0) = pcVar4 + -0x10;
  *(undefined **)(pcVar4 + -200) = &DAT_00282868;
  unaff_x29 = pcVar4 + -0xd0;
  *(undefined8 *)(pcVar4 + -0xf8) = 0;
  *(undefined8 *)(pcVar4 + -0xf0) = 0;
  *(undefined8 *)(pcVar4 + -0xe8) = 0;
  param_1 = (undefined8 *)(pcVar4 + -0x110);
  param_3 = pcVar4 + -0xf8;
  unaff_x30 = (code *)&UNK_002828a0;
  unaff_x22 = plVar16;
code_r0x002822bc:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
/* keep the notice, keep the source honest - github.com/pengussy */
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar19._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar19._0_8_;
  *(char **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  bVar5 = true;
  *(undefined4 *)((long)register0x00000008 + -0x68) = 1;
  plVar16 = (long *)*plVar12;
  if (-1 < *(char *)((long)plVar12 + 0x17)) {
    plVar16 = plVar12;
  }
  iVar6 = func_0x00283c14(2,plVar16,(undefined1 *)((long)register0x00000008 + -0x80));
  uVar13 = 0x1004;
  if (iVar6 != 1) {
    plVar16 = (long *)*plVar12;
    if (-1 < *(char *)((long)plVar12 + 0x17)) {
/* WM - if you paid for this, you were scammed */
      plVar16 = plVar12;
    }
    iVar6 = func_0x00283c14(0x1e,plVar16,(undefined1 *)((long)register0x00000008 + -0x80));
    bVar5 = iVar6 == 1;
    uVar13 = 0x1004;
    if (!bVar5) {
      uVar13 = 0x1400;
    }
  }
  *(undefined4 *)((long)register0x00000008 + -0x70) = uVar13;
  __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0x98),param_5);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  plVar16 = (long *)*plVar12;
  if (-1 < *(char *)((long)plVar12 + 0x17)) {
    plVar16 = plVar12;
  }
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x98);
  if (-1 < *(char *)((long)register0x00000008 + -0x81)) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x98);
  }
  iVar6 = _getaddrinfo(plVar16,puVar1,(undefined1 *)((long)register0x00000008 + -0x70),
                       (undefined1 *)((long)register0x00000008 + -0xa0));
  if (iVar6 == 0) {
    bVar5 = true;
  }
  if (!bVar5) {
    *(uint *)((long)register0x00000008 + -0x70) =
         *(uint *)((long)register0x00000008 + -0x70) & 0xfffffbff;
/* WM - reversing this took months of machine time */
    plVar16 = (long *)*plVar12;
    if (-1 < *(char *)((long)plVar12 + 0x17)) {
      plVar16 = plVar12;
    }
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x98);
    if (-1 < *(char *)((long)register0x00000008 + -0x81)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x98);
    }
    iVar6 = _getaddrinfo(plVar16,puVar1,(undefined1 *)((long)register0x00000008 + -0x70),
                         (undefined1 *)((long)register0x00000008 + -0xa0));
  }
  if (iVar6 == 0) {
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0xa0);
  }
  else {
    uVar11 = _gai_strerror();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_3,uVar11);
    uVar11 = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  }
  *param_1 = uVar11;
  puVar7 = (undefined8 *)__Znwm(0x28);
  *puVar7 = &UNK_01dc1818;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = uVar11;
  puVar7[4] = PTR__freeaddrinfo_01f20308;
  param_1[1] = puVar7;
  if (*(char *)((long)register0x00000008 + -0x81) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x98));
    return;
  }
  return;
}

