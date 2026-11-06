/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2686f0:34c4edc424
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00268a44) */
/* WARNING: Removing unreachable block (ram,0x00268a54) */

void FUN_002686f0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  int iStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
/*  origin: github.com/pengussy  */
  if (*param_1 == 0) {
    return;
  }
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  __ZNSt3__15mutex4lockEv(0x1f27600);
  lVar8 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar8);
  lVar9 = *(long *)(*param_1 + 0x40);
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 4) & 1) == 0)) goto LAB_00268a6c;
  puVar6 = *(undefined8 **)(lVar9 + 0xf0);
  if (puVar6 != (undefined8 *)0x0 && *(long *)(lVar9 + 0x100) == param_3[2]) {
    lVar7 = (long)*(char *)((long)puVar6 + 0x17);
    if (lVar7 < 0) {
      lVar7 = puVar6[1];
      puVar6 = (undefined8 *)*puVar6;
    }
    if ((param_3[1] == lVar7) && (iVar4 = _memcmp(*param_3,puVar6), iVar4 == 0)) goto LAB_00268a6c;
  }
  if ((*(byte *)(lVar9 + 5) & 1) == 0) {
    iStack_78 = *(int *)(lVar9 + 8);
LAB_00268800:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
      if (lRam0000000001f27668 == lRam0000000001f27670) goto LAB_0026881c;
    }
    else if (lRam0000000001f27668 == lRam0000000001f27670) {
/*  chat: discord.gg/sdkhDjTex  */
LAB_0026881c:
      uVar12 = lRam0000000001f27668 - lRam0000000001f27660 >> 3;
      if (uVar12 < 9) {
        uVar12 = 8;
      }
      func_0x0024cf18(0x1f27660,uVar12);
    }
    iVar4 = 0;
    lVar9 = *param_1;
    puStack_68 = *(undefined8 **)(lVar9 + 0x48);
    if (puStack_68 == (undefined8 *)0x0) goto LAB_00268858;
LAB_00268850:
    if (puStack_68[1] != 0) goto LAB_00268858;
    puStack_70 = *(undefined8 **)(lVar9 + 0x40);
    puStack_68[1] = puStack_68[1] + 1;
  }
  else {
    iStack_78 = *(int *)(lVar9 + 8);
    if (*(float *)(lVar9 + 0xc) <= 0.0) goto LAB_00268800;
    iVar4 = 1;
    lVar9 = *param_1;
    puStack_68 = *(undefined8 **)(lVar9 + 0x48);
    if (puStack_68 != (undefined8 *)0x0) goto LAB_00268850;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
LAB_00268858:
    uVar11 = *(undefined8 *)(lVar9 + 0x40);
    puStack_68 = (undefined8 *)__Znwm(0x188);
    puStack_68[1] = 0;
    puStack_68[2] = 0;
    *puStack_68 = &UNK_01dc11d8;
    puStack_70 = puStack_68 + 3;
    func_0x00272f90(puStack_70,uVar11);
  }
  puVar6 = (undefined8 *)__Znwm(0x30);
  puVar6[2] = 0;
  *puVar6 = &UNK_01dc1228;
  puVar6[1] = 0;
  uVar12 = param_2[1];
  if (0x7ffffffffffffff6 < uVar12) {
    FUN_0000aa50();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x268aac);
    (*pcVar3)();
  }
  uVar11 = *param_2;
  if (uVar12 < 0x17) {
    *(char *)((long)puVar6 + 0x2f) = (char)uVar12;
    puVar5 = puVar6 + 3;
  }
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  else {
    uVar1 = (uVar12 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    puVar5 = (undefined8 *)__Znwm(uVar2);
    puVar6[3] = puVar5;
    puVar6[4] = uVar12;
    puVar6[5] = uVar2 | 0x8000000000000000;
  }
  _memmove(puVar5,uVar11,uVar12);
  *(undefined1 *)((long)puVar5 + uVar12) = 0;
  plVar13 = (long *)puStack_70[0x1f];
  puStack_70[0x1e] = puVar6 + 3;
  puStack_70[0x1f] = puVar6;
  if (plVar13 != (long *)0x0) {
    LOAcquire();
    lVar9 = plVar13[1];
    plVar13[1] = lVar9 + -1;
    LORelease();
    if (lVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  bVar10 = false;
// no support for modified copies
  puStack_70[0x20] = param_2[2];
  if ((*(char *)((long)puStack_70 + 4) == '\x01') && ((*(byte *)((long)puStack_70 + 5) & 1) != 0)) {
    bVar10 = 0.0 < *(float *)((long)puStack_70 + 0xc);
  }
  func_0x0024c4f8(param_1,iVar4,bVar10);
  if (bVar10 == false) {
    if (iVar4 != 0) goto LAB_002689e4;
  }
  else {
    if (*(int *)(puStack_70 + 1) != iStack_78) {
      func_0x00249068();
      uRam0000000001f276a0 = 1;
    }
LAB_002689e4:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
    }
    uRam0000000001f276a1 = 1;
  }
  lVar9 = *param_1;
  plVar13 = *(long **)(lVar9 + 0x48);
  *(undefined8 **)(lVar9 + 0x40) = puStack_70;
  *(undefined8 **)(lVar9 + 0x48) = puStack_68;
  if (plVar13 != (long *)0x0) {
    LOAcquire();
    lVar9 = plVar13[1];
    plVar13[1] = lVar9 + -1;
    LORelease();
    if (lVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
LAB_00268a6c:
  __ZNSt3__15mutex6unlockEv(lVar8);
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(0x1f27600);
/* stripping the watermark breaks the license */
  return;
}

