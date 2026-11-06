/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x265090:587dc378e0
 */

/* WARNING: Removing unreachable block (ram,0x0026534c) */
/* WARNING: Removing unreachable block (ram,0x0026535c) */

void FUN_00265090(long *param_1,float *param_2)

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
/* wm:if you paid for this, you were scammed */
  lVar8 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar8);
  lVar6 = *(long *)(*param_1 + 0x40);
  if (((lVar6 == 0) || ((*(byte *)(lVar6 + 4) & 1) == 0)) || (*(float *)(lVar6 + 0x84) == *param_2))
  goto LAB_00265374;
  if ((*(byte *)(lVar6 + 5) & 1) == 0) {
    iVar17 = *(int *)(lVar6 + 8);
LAB_00265150:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
      if (lRam0000000001f27668 == lRam0000000001f27670) goto LAB_0026516c;
    }
    else if (lRam0000000001f27668 == lRam0000000001f27670) {
LAB_0026516c:
      lVar6 = lRam0000000001f27660;
      lVar11 = lRam0000000001f27668 - lRam0000000001f27660;
      uVar7 = lVar11 >> 3;
      uVar2 = uVar7;
      if (uVar7 < 9) {
        uVar2 = 8;
      }
      if ((ulong)(lVar11 >> 4) < uVar2) {
        if (uVar7 >> 0x3c != 0) {
          FUN_0000abb4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x2653bc);
          (*pcVar4)();
        }
        lVar5 = __Znwm(uVar2 << 4);
        lVar1 = lVar5 + lVar11;
        lVar5 = lVar5 + uVar2 * 0x10;
        lVar13 = lVar1 + (lVar11 >> 4) * -0x10;
        _memcpy(lVar13,lVar6,lVar11);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        lRam0000000001f27660 = lVar13;
        lRam0000000001f27668 = lVar1;
        lRam0000000001f27670 = lVar5;
        if (lVar6 != 0) {
          __ZdlPv(lVar6);
        }
        iVar10 = 0;
        goto LAB_00265210;
      }
    }
    iVar10 = 0;
  }
  else {
    iVar17 = *(int *)(lVar6 + 8);
    if (*(float *)(lVar6 + 0xc) <= 0.0) goto LAB_00265150;
    iVar10 = 1;
  }
LAB_00265210:
  lVar6 = *param_1;
  puVar12 = *(undefined8 **)(lVar6 + 0x48);
  if ((puVar12 == (undefined8 *)0x0) || (puVar12[1] != 0)) {
    uVar16 = *(undefined8 *)(lVar6 + 0x40);
    puVar12 = (undefined8 *)__Znwm(0x188);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_01dc11d8;
    puVar14 = puVar12 + 3;
    func_0x00272f90(puVar14,uVar16);
    *(float *)((long)puVar12 + 0x9c) = *param_2;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    cVar3 = *(char *)((long)puVar12 + 0x1c);
  }
  else {
    puVar14 = *(undefined8 **)(lVar6 + 0x40);
    puVar12[1] = puVar12[1] + 1;
    *(float *)((long)puVar14 + 0x84) = *param_2;
    cVar3 = *(char *)((long)puVar14 + 4);
  }
  bVar15 = false;
  if ((cVar3 == '\x01') && (bVar15 = false, (*(byte *)((long)puVar14 + 5) & 1) != 0)) {
    bVar15 = 0.0 < *(float *)((long)puVar14 + 0xc);
  }
  func_0x0024c4f8(param_1,iVar10,bVar15);
  if (bVar15 == false) {
    if (iVar10 != 0) goto LAB_002652f0;
  }
  else {
    if (*(int *)(puVar14 + 1) != iVar17) {
      if ((bRam0000000002093050 & 1) == 0) {
/* WM - do not claim this as your own */
        func_0x019dd200();
      }
      uRam0000000001f276a0 = 1;
    }
LAB_002652f0:
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
LAB_00265374:
  __ZNSt3__15mutex6unlockEv(lVar8);
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(0x1f27600);
  return;
}

