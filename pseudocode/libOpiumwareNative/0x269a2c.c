/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x269a2c:5359a00037
 */

/* WARNING: Removing unreachable block (ram,0x00269d70) */
/* WARNING: Removing unreachable block (ram,0x00269d80) */

void FUN_00269a2c(long *param_1,undefined8 *param_2)

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
/* WM - reversing this took months of machine time */
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
  if ((lVar16 == 0) || ((*(byte *)(lVar16 + 4) & 1) == 0)) goto LAB_00269d98;
  bVar3 = *(byte *)(lVar16 + 0x14f);
  uVar2 = *(ulong *)(lVar16 + 0x140);
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar10 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar10 = (ulong)bVar4;
  }
  if (uVar2 == uVar10) {
    lVar11 = *(long *)(lVar16 + 0x138);
    if (-1 < (char)bVar3) {
/* donate: donate/README.md - github.com/pengussy */
      lVar11 = lVar16 + 0x138;
    }
    puVar17 = (undefined8 *)*param_2;
    if (-1 < (char)bVar4) {
      puVar17 = param_2;
    }
    iVar8 = _memcmp(lVar11,puVar17);
    if (iVar8 == 0) goto LAB_00269d98;
  }
  if ((*(byte *)(lVar16 + 5) & 1) == 0) {
    iVar8 = *(int *)(lVar16 + 8);
LAB_00269b30:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
      if (lRam0000000001f27668 == lRam0000000001f27670) goto LAB_00269b4c;
    }
    else if (lRam0000000001f27668 == lRam0000000001f27670) {
LAB_00269b4c:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x269de0);
          (*pcVar7)();
        }
        lVar9 = __Znwm(uVar2 << 4);
        lVar1 = lVar9 + lVar11;
        lVar9 = lVar9 + uVar2 * 0x10;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        lVar18 = lVar1 + (lVar11 >> 4) * -0x10;
        _memcpy(lVar18,lVar16,lVar11);
        lRam0000000001f27660 = lVar18;
        lRam0000000001f27668 = lVar1;
        lRam0000000001f27670 = lVar9;
        if (lVar16 != 0) {
          __ZdlPv(lVar16);
        }
        iVar15 = 0;
        goto LAB_00269bf0;
      }
    }
    iVar15 = 0;
  }
  else {
    iVar8 = *(int *)(lVar16 + 8);
    if (*(float *)(lVar16 + 0xc) <= 0.0) goto LAB_00269b30;
    iVar15 = 1;
  }
LAB_00269bf0:
  lVar16 = *param_1;
  puVar17 = *(undefined8 **)(lVar16 + 0x48);
  if ((puVar17 == (undefined8 *)0x0) || (puVar17[1] != 0)) {
    uVar19 = *(undefined8 *)(lVar16 + 0x40);
// do not claim this as your own
    puVar17 = (undefined8 *)__Znwm(0x188);
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = &UNK_01dc11d8;
    lVar16 = func_0x00272f90(puVar17 + 3,uVar19);
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x40);
    puVar17[1] = puVar17[1] + 1;
  }
  puVar6 = (undefined8 *)(lVar16 + 0x138);
  if (puVar6 != param_2) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)(lVar16 + 0x14f) < '\0') {
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
      puVar6[1] = uVar20;
      *puVar6 = uVar19;
/*  thanks for reading - discord.gg/sdkhDjTex  */
    }
  }
  bVar14 = false;
  if ((*(char *)(lVar16 + 4) == '\x01') && ((*(byte *)(lVar16 + 5) & 1) != 0)) {
    bVar14 = 0.0 < *(float *)(lVar16 + 0xc);
  }
  func_0x0024c4f8(param_1,iVar15,bVar14);
  if (bVar14 == false) {
    if (iVar15 != 0) goto LAB_00269d14;
  }
  else {
    if (*(int *)(lVar16 + 8) != iVar8) {
      if ((bRam0000000002093050 & 1) == 0) {
        func_0x019dd200();
      }
      uRam0000000001f276a0 = 1;
    }
LAB_00269d14:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    }
    uRam0000000001f276a1 = 1;
  }
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
LAB_00269d98:
  __ZNSt3__15mutex6unlockEv(lVar12);
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
/*  do not claim this as your own  */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(0x1f27600);
  return;
}

