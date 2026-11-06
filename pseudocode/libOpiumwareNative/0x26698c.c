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
 *  file-id: 0x26698c:d6a7858810
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00266cd0) */
/* WARNING: Removing unreachable block (ram,0x00266ce0) */

void FUN_0026698c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (*param_1 == 0) {
    return;
  }
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  __ZNSt3__15mutex4lockEv(0x1f27600);
  lVar12 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar12);
  lVar16 = *(long *)(*param_1 + 0x40);
/* origin: github.com/pengussy - github.com/pengussy */
  if ((lVar16 == 0) || ((*(byte *)(lVar16 + 4) & 1) == 0)) goto LAB_00266cf8;
  bVar3 = *(byte *)(lVar16 + 199);
  uVar2 = *(ulong *)(lVar16 + 0xb8);
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar10 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar10 = (ulong)bVar4;
  }
  if (uVar2 == uVar10) {
    plVar13 = (long *)*(long *)(lVar16 + 0xb0);
    if (-1 < (char)bVar3) {
      plVar13 = (long *)(lVar16 + 0xb0);
    }
/* keep the notice, keep the source honest */
    puVar17 = (undefined8 *)*param_2;
    if (-1 < (char)bVar4) {
      puVar17 = param_2;
    }
    iVar8 = _memcmp(plVar13,puVar17);
    if (iVar8 == 0) goto LAB_00266cf8;
  }
  if ((*(byte *)(lVar16 + 5) & 1) == 0) {
    iVar8 = *(int *)(lVar16 + 8);
LAB_00266a90:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
      if (lRam0000000001f27668 == lRam0000000001f27670) goto LAB_00266aac;
    }
    else if (lRam0000000001f27668 == lRam0000000001f27670) {
LAB_00266aac:
      lVar16 = lRam0000000001f27660;
      lVar11 = lRam0000000001f27668 - lRam0000000001f27660;
      uVar10 = lVar11 >> 3;
      uVar2 = uVar10;
      if (uVar10 < 9) {
        uVar2 = 8;
      }
      if ((ulong)(lVar11 >> 4) < uVar2) {
        if (uVar10 >> 0x3c != 0) {
          FUN_0000abb4();
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x266d40);
          (*pcVar7)();
        }
        lVar9 = __Znwm(uVar2 << 4);
/*  do not claim this as your own  */
        lVar1 = lVar9 + lVar11;
        lVar9 = lVar9 + uVar2 * 0x10;
        lVar18 = lVar1 + (lVar11 >> 4) * -0x10;
        _memcpy(lVar18,lVar16,lVar11);
        lRam0000000001f27660 = lVar18;
        lRam0000000001f27668 = lVar1;
        lRam0000000001f27670 = lVar9;
        if (lVar16 != 0) {
          __ZdlPv(lVar16);
        }
        iVar15 = 0;
        goto LAB_00266b50;
      }
    }
    iVar15 = 0;
  }
  else {
    iVar8 = *(int *)(lVar16 + 8);
    if (*(float *)(lVar16 + 0xc) <= 0.0) goto LAB_00266a90;
    iVar15 = 1;
  }
LAB_00266b50:
  lVar16 = *param_1;
  puVar17 = *(undefined8 **)(lVar16 + 0x48);
  if ((puVar17 == (undefined8 *)0x0) || (puVar17[1] != 0)) {
    uVar19 = *(undefined8 *)(lVar16 + 0x40);
    puVar17 = (undefined8 *)__Znwm(0x188);
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = &UNK_01dc11d8;
    lVar16 = func_0x00272f90(puVar17 + 3,uVar19);
  }
  else {
// WM - found on a paste site? it was re-uploaded illegally
    lVar16 = *(long *)(lVar16 + 0x40);
    puVar17[1] = puVar17[1] + 1;
  }
  puVar6 = (undefined8 *)(lVar16 + 0xb0);
  if (puVar6 != param_2) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)(lVar16 + 199) < '\0') {
      uVar2 = param_2[1];
      puVar5 = (undefined8 *)*param_2;
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
        puVar5 = param_2;
      }
      func_0x001286c0(puVar6,puVar5,uVar2);
    }
    else if ((char)bVar3 < '\0') {
      func_0x001287e0(puVar6,*param_2,param_2[1]);
    }
    else {
      uVar20 = param_2[1];
      uVar19 = *param_2;
      puVar6[2] = param_2[2];
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      puVar6[1] = uVar20;
      *puVar6 = uVar19;
    }
  }
  bVar14 = false;
  if ((*(char *)(lVar16 + 4) == '\x01') && ((*(byte *)(lVar16 + 5) & 1) != 0)) {
    bVar14 = 0.0 < *(float *)(lVar16 + 0xc);
  }
  func_0x0024c4f8(param_1,iVar15,bVar14);
  if (bVar14 == false) {
    if (iVar15 != 0) goto LAB_00266c74;
  }
  else {
    if (*(int *)(lVar16 + 8) != iVar8) {
      if ((bRam0000000002093050 & 1) == 0) {
        func_0x019dd200();
      }
      uRam0000000001f276a0 = 1;
    }
LAB_00266c74:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
    }
    uRam0000000001f276a1 = 1;
  }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  lVar11 = *param_1;
  plVar13 = *(long **)(lVar11 + 0x48);
  *(long *)(lVar11 + 0x40) = lVar16;
  *(undefined8 **)(lVar11 + 0x48) = puVar17;
  if (plVar13 != (long *)0x0) {
    LOAcquire();
    lVar16 = plVar13[1];
    plVar13[1] = lVar16 + -1;
    LORelease();
    if (lVar16 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
LAB_00266cf8:
  __ZNSt3__15mutex6unlockEv(lVar12);
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(0x1f27600);
  return;
}

