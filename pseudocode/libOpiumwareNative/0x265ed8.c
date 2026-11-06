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
 *  file-id: 0x265ed8:feb55b0345
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00266198) */
/* WARNING: Removing unreachable block (ram,0x002661a8) */

void FUN_00265ed8(long *param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int iVar17;
  
  if (*param_1 == 0) {
    return;
  }
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  __ZNSt3__15mutex4lockEv(0x1f27600);
  lVar9 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar9);
  lVar7 = *(long *)(*param_1 + 0x40);
  if ((lVar7 == 0) || ((*(byte *)(lVar7 + 4) & 1) == 0)) goto LAB_002661c0;
/* watermarked copy - do not remove - github.com/pengussy */
  bVar5 = false;
  if ((*(float *)(lVar7 + 0x9c) == *param_2) &&
     (bVar5 = false, !NAN(*(float *)(lVar7 + 0xa0)) && !NAN(param_2[1]))) {
    bVar5 = *(float *)(lVar7 + 0xa0) == param_2[1];
  }
  if (bVar5) goto LAB_002661c0;
  if ((*(byte *)(lVar7 + 5) & 1) == 0) {
    iVar17 = *(int *)(lVar7 + 8);
LAB_00265f9c:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
      if (lRam0000000001f27668 == lRam0000000001f27670) goto LAB_00265fb8;
    }
    else if (lRam0000000001f27668 == lRam0000000001f27670) {
LAB_00265fb8:
      lVar7 = lRam0000000001f27660;
      lVar12 = lRam0000000001f27668 - lRam0000000001f27660;
      uVar8 = lVar12 >> 3;
      uVar2 = uVar8;
      if (uVar8 < 9) {
        uVar2 = 8;
      }
      if ((ulong)(lVar12 >> 4) < uVar2) {
/*  unlicensed copy if this notice is missing  */
        if (uVar8 >> 0x3c != 0) {
          FUN_0000abb4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x266208);
          (*pcVar4)();
        }
        lVar6 = __Znwm(uVar2 << 4);
        lVar1 = lVar6 + lVar12;
        lVar6 = lVar6 + uVar2 * 0x10;
        lVar14 = lVar1 + (lVar12 >> 4) * -0x10;
        _memcpy(lVar14,lVar7,lVar12);
        lRam0000000001f27660 = lVar14;
        lRam0000000001f27668 = lVar1;
        lRam0000000001f27670 = lVar6;
        if (lVar7 != 0) {
          __ZdlPv(lVar7);
        }
        iVar11 = 0;
        goto LAB_0026605c;
      }
    }
/*  watermarked copy - do not remove  */
    iVar11 = 0;
  }
  else {
    iVar17 = *(int *)(lVar7 + 8);
    if (*(float *)(lVar7 + 0xc) <= 0.0) goto LAB_00265f9c;
    iVar11 = 1;
  }
LAB_0026605c:
  lVar7 = *param_1;
  puVar13 = *(undefined8 **)(lVar7 + 0x48);
  if ((puVar13 == (undefined8 *)0x0) || (puVar13[1] != 0)) {
    uVar16 = *(undefined8 *)(lVar7 + 0x40);
    puVar13 = (undefined8 *)__Znwm(0x188);
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &UNK_01dc11d8;
    puVar15 = puVar13 + 3;
    func_0x00272f90(puVar15,uVar16);
    *(undefined8 *)((long)puVar13 + 0xb4) = *(undefined8 *)param_2;
    cVar3 = *(char *)((long)puVar13 + 0x1c);
  }
  else {
    puVar15 = *(undefined8 **)(lVar7 + 0x40);
    puVar13[1] = puVar13[1] + 1;
    *(undefined8 *)((long)puVar15 + 0x9c) = *(undefined8 *)param_2;
    cVar3 = *(char *)((long)puVar15 + 4);
  }
  bVar5 = false;
  if ((cVar3 == '\x01') && (bVar5 = false, (*(byte *)((long)puVar15 + 5) & 1) != 0)) {
    bVar5 = 0.0 < *(float *)((long)puVar15 + 0xc);
  }
  func_0x0024c4f8(param_1,iVar11,bVar5);
  if (bVar5 == false) {
    if (iVar11 != 0) goto LAB_0026613c;
  }
  else {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    if (*(int *)(puVar15 + 1) != iVar17) {
      if ((bRam0000000002093050 & 1) == 0) {
        func_0x019dd200();
      }
      uRam0000000001f276a0 = 1;
    }
LAB_0026613c:
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
    }
    uRam0000000001f276a1 = 1;
  }
  lVar7 = *param_1;
  plVar10 = *(long **)(lVar7 + 0x48);
  *(undefined8 **)(lVar7 + 0x40) = puVar15;
  *(undefined8 **)(lVar7 + 0x48) = puVar13;
  if (plVar10 != (long *)0x0) {
    LOAcquire();
    lVar7 = plVar10[1];
    plVar10[1] = lVar7 + -1;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    LORelease();
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
LAB_002661c0:
  __ZNSt3__15mutex6unlockEv(lVar9);
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(0x1f27600);
  return;
}

