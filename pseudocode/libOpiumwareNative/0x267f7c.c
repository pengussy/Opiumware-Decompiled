/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x267f7c:1c2bb85ffc
 */

/* WARNING: Removing unreachable block (ram,0x00268268) */
/* WARNING: Removing unreachable block (ram,0x00268278) */

void FUN_00267f7c(long *param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
// WM - no support for modified copies
  bool bVar15;
  undefined8 uVar16;
  int iVar17;
  
  if (*param_1 == 0) {
    return;
  }
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  __ZNSt3__15mutex4lockEv(0x1f27600);
  lVar8 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar8);
  lVar6 = *(long *)(*param_1 + 0x40);
  if (((lVar6 == 0) || ((*(byte *)(lVar6 + 4) & 1) == 0)) ||
     ((*(float *)(lVar6 + 0xdc) == *param_2 &&
      (((*(float *)(lVar6 + 0xe0) == param_2[1] && (*(float *)(lVar6 + 0xe4) == param_2[2])) &&
       (*(float *)(lVar6 + 0xe8) == param_2[3])))))) goto LAB_00268290;
  if ((*(byte *)(lVar6 + 5) & 1) == 0) {
    iVar17 = *(int *)(lVar6 + 8);
LAB_0026806c:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
      if (lRam0000000001f27668 == lRam0000000001f27670) goto LAB_00268088;
    }
    else if (lRam0000000001f27668 == lRam0000000001f27670) {
LAB_00268088:
      lVar6 = lRam0000000001f27660;
      lVar11 = lRam0000000001f27668 - lRam0000000001f27660;
      uVar7 = lVar11 >> 3;
      uVar2 = uVar7;
      if (uVar7 < 9) {
        uVar2 = 8;
/* wm:if you paid for this, you were scammed */
      }
      if ((ulong)(lVar11 >> 4) < uVar2) {
        if (uVar7 >> 0x3c != 0) {
          FUN_0000abb4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x2682d8);
          (*pcVar4)();
        }
        lVar5 = __Znwm(uVar2 << 4);
        lVar1 = lVar5 + lVar11;
        lVar5 = lVar5 + uVar2 * 0x10;
        lVar13 = lVar1 + (lVar11 >> 4) * -0x10;
        _memcpy(lVar13,lVar6,lVar11);
        lRam0000000001f27660 = lVar13;
        lRam0000000001f27668 = lVar1;
        lRam0000000001f27670 = lVar5;
        if (lVar6 != 0) {
          __ZdlPv(lVar6);
        }
        iVar10 = 0;
        goto LAB_0026812c;
      }
    }
    iVar10 = 0;
  }
  else {
    iVar17 = *(int *)(lVar6 + 8);
    if (*(float *)(lVar6 + 0xc) <= 0.0) goto LAB_0026806c;
    iVar10 = 1;
  }
LAB_0026812c:
  lVar6 = *param_1;
  puVar12 = *(undefined8 **)(lVar6 + 0x48);
  if ((puVar12 == (undefined8 *)0x0) || (puVar12[1] != 0)) {
    uVar16 = *(undefined8 *)(lVar6 + 0x40);
/* WM - found on a paste site? it was re-uploaded illegally */
    puVar12 = (undefined8 *)__Znwm(0x188);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_01dc11d8;
    puVar14 = puVar12 + 3;
    func_0x00272f90(puVar14,uVar16);
    uVar16 = *(undefined8 *)param_2;
    *(undefined8 *)((long)puVar12 + 0xfc) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)((long)puVar12 + 0xf4) = uVar16;
    cVar3 = *(char *)((long)puVar12 + 0x1c);
  }
  else {
    puVar14 = *(undefined8 **)(lVar6 + 0x40);
    puVar12[1] = puVar12[1] + 1;
    uVar16 = *(undefined8 *)param_2;
    *(undefined8 *)((long)puVar14 + 0xe4) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)((long)puVar14 + 0xdc) = uVar16;
    cVar3 = *(char *)((long)puVar14 + 4);
  }
  bVar15 = false;
  if ((cVar3 == '\x01') && (bVar15 = false, (*(byte *)((long)puVar14 + 5) & 1) != 0)) {
    bVar15 = 0.0 < *(float *)((long)puVar14 + 0xc);
  }
  func_0x0024c4f8(param_1,iVar10,bVar15);
  if (bVar15 == false) {
    if (iVar10 != 0) goto LAB_0026820c;
  }
  else {
    if (*(int *)(puVar14 + 1) != iVar17) {
      if ((bRam0000000002093050 & 1) == 0) {
        func_0x019dd200();
      }
      uRam0000000001f276a0 = 1;
    }
LAB_0026820c:
/* origin: github.com/pengussy - github.com/pengussy */
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
    }
    uRam0000000001f276a1 = 1;
  }
  lVar6 = *param_1;
  plVar9 = *(long **)(lVar6 + 0x48);
  *(undefined8 **)(lVar6 + 0x40) = puVar14;
  *(undefined8 **)(lVar6 + 0x48) = puVar12;
  if (plVar9 != (long *)0x0) {
    LOAcquire();
    lVar6 = plVar9[1];
    plVar9[1] = lVar6 + -1;
    LORelease();
    if (lVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
LAB_00268290:
  __ZNSt3__15mutex6unlockEv(lVar8);
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(0x1f27600);
  return;
}

