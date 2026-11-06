/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2703f0:6abbe5c573
 */

bool FUN_002703f0(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar3 = (long)param_2 - (long)param_1 >> 5;
/* WM - more drops soon - github.com/pengussy */
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      lVar4 = param_2[-2];
      lVar7 = *param_1;
      lVar5 = param_1[2];
      iVar13 = *(int *)(lVar4 + 8);
      iVar1 = *(int *)(lVar5 + 8);
      if (iVar13 == iVar1) {
        if (*(ulong *)(lVar7 + 0x50) <= *(ulong *)(param_2[-4] + 0x50)) {
          return true;
        }
      }
      else if (iVar1 <= iVar13) {
        return true;
      }
      lVar8 = param_1[1];
      lVar9 = param_2[-3];
      *param_1 = param_2[-4];
      param_1[1] = lVar9;
      param_2[-4] = lVar7;
      param_2[-3] = lVar8;
      lVar7 = param_1[3];
      lVar8 = param_2[-1];
      param_1[2] = lVar4;
      param_1[3] = lVar8;
      param_2[-2] = lVar5;
      param_2[-1] = lVar7;
      return true;
/*  donate: donate/README.md  */
    }
  }
  else {
    if (uVar3 == 3) {
      func_0x0026ff48(param_1,param_1 + 4,param_2 + -4);
      return true;
    }
    if (uVar3 == 4) {
      func_0x002700e4(param_1,param_1 + 4,param_1 + 8,param_2 + -4);
      return true;
    }
    if (uVar3 == 5) {
      func_0x00270234(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
      return true;
    }
  }
  func_0x0026ff48(param_1,param_1 + 4,param_1 + 8);
  if (param_1 + 0xc == param_2) {
    return true;
  }
  lVar4 = 0;
  iVar13 = 0;
  plVar10 = param_1 + 8;
  plVar12 = param_1 + 0xc;
LAB_0027051c:
  lVar7 = *plVar12;
  lVar5 = plVar12[2];
  if (*(int *)(lVar5 + 8) == *(int *)(plVar10[2] + 8)) {
    if (*(ulong *)(lVar7 + 0x50) < *(ulong *)(*plVar10 + 0x50)) {
LAB_00270558:
      lVar6 = plVar12[1];
      *plVar12 = 0;
      plVar12[1] = 0;
      lVar9 = plVar12[3];
      plVar12[2] = 0;
      plVar12[3] = 0;
      lVar8 = lVar4;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      do {
        uVar15 = *(undefined8 *)((long)param_1 + lVar8 + 0x48);
        uVar14 = *(undefined8 *)((long)param_1 + lVar8 + 0x40);
        *(undefined8 *)((long)param_1 + lVar8 + 0x40) = 0;
        *(undefined8 *)((long)param_1 + lVar8 + 0x48) = 0;
        plVar10 = *(long **)((long)param_1 + lVar8 + 0x68);
        *(undefined8 *)((long)param_1 + lVar8 + 0x68) = uVar15;
        *(undefined8 *)((long)param_1 + lVar8 + 0x60) = uVar14;
        if (plVar10 == (long *)0x0) {
LAB_002705b0:
          uVar15 = *(undefined8 *)((long)param_1 + lVar8 + 0x58);
          uVar14 = *(undefined8 *)((long)param_1 + lVar8 + 0x50);
          *(undefined8 *)((long)param_1 + lVar8 + 0x50) = 0;
          *(undefined8 *)((long)param_1 + lVar8 + 0x58) = 0;
          plVar10 = *(long **)((long)param_1 + lVar8 + 0x78);
          *(undefined8 *)((long)param_1 + lVar8 + 0x78) = uVar15;
          *(undefined8 *)((long)param_1 + lVar8 + 0x70) = uVar14;
        }
        else {
          LOAcquire();
          lVar2 = plVar10[1];
          plVar10[1] = lVar2 + -1;
          LORelease();
          if (lVar2 != 0) goto LAB_002705b0;
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          uVar15 = *(undefined8 *)((long)param_1 + lVar8 + 0x58);
          uVar14 = *(undefined8 *)((long)param_1 + lVar8 + 0x50);
          *(undefined8 *)((long)param_1 + lVar8 + 0x50) = 0;
          *(undefined8 *)((long)param_1 + lVar8 + 0x58) = 0;
          plVar10 = *(long **)((long)param_1 + lVar8 + 0x78);
          *(undefined8 *)((long)param_1 + lVar8 + 0x78) = uVar15;
          *(undefined8 *)((long)param_1 + lVar8 + 0x70) = uVar14;
        }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        if (plVar10 != (long *)0x0) {
          LOAcquire();
          lVar2 = plVar10[1];
          plVar10[1] = lVar2 + -1;
          LORelease();
          if (lVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (lVar8 == -0x40) {
          plVar11 = (long *)param_1[1];
          *param_1 = lVar7;
          param_1[1] = lVar6;
          plVar10 = param_1;
          goto joined_r0x00270668;
        }
        iVar1 = *(int *)(*(long *)((long)param_1 + lVar8 + 0x30) + 8);
        if (*(int *)(lVar5 + 8) == iVar1) {
          if (*(ulong *)(*(long *)((long)param_1 + lVar8 + 0x20) + 0x50) <= *(ulong *)(lVar7 + 0x50)
             ) goto LAB_0027063c;
        }
        else if (iVar1 <= *(int *)(lVar5 + 8)) goto LAB_0027063c;
        lVar8 = lVar8 + -0x20;
      } while( true );
    }
  }
  else if (*(int *)(lVar5 + 8) < *(int *)(plVar10[2] + 8)) goto LAB_00270558;
  goto LAB_00270508;
LAB_0027063c:
  plVar10 = (long *)((long)param_1 + lVar8 + 0x40);
  plVar11 = *(long **)((long)param_1 + lVar8 + 0x48);
  *plVar10 = lVar7;
  *(long *)((long)param_1 + lVar8 + 0x48) = lVar6;
joined_r0x00270668:
// WM - no support for modified copies
  if (plVar11 != (long *)0x0) {
    LOAcquire();
    lVar7 = plVar11[1];
    plVar11[1] = lVar7 + -1;
    LORelease();
    if (lVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  *(long *)((long)param_1 + lVar8 + 0x50) = lVar5;
  plVar11 = (long *)plVar10[3];
  plVar10[3] = lVar9;
  if (plVar11 != (long *)0x0) {
    LOAcquire();
    lVar5 = plVar11[1];
    plVar11[1] = lVar5 + -1;
    LORelease();
    if (lVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
// WM - proprietary - see LICENSE - do not sell
  iVar13 = iVar13 + 1;
  if (iVar13 == 8) {
    return plVar12 + 4 == param_2;
  }
LAB_00270508:
  plVar11 = plVar12 + 4;
  lVar4 = lVar4 + 0x20;
  plVar10 = plVar12;
  plVar12 = plVar11;
  if (plVar11 == param_2) {
    return true;
  }
  goto LAB_0027051c;
}

