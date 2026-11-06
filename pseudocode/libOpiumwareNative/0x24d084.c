/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x24d084:95d010f601
 */

/* WARNING: Removing unreachable block (ram,0x0024d38c) */
/* WARNING: Removing unreachable block (ram,0x0024d3b8) */
/* WARNING: Removing unreachable block (ram,0x0024d3d4) */
/* WARNING: Removing unreachable block (ram,0x0024d3e0) */
/* WARNING: Removing unreachable block (ram,0x0024d3a4) */
/* WARNING: Removing unreachable block (ram,0x0024d3fc) */

void FUN_0024d084(long *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if (*param_1 == 0) {
    return;
  }
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  __ZNSt3__15mutex4lockEv(0x1f27600);
  lVar5 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar5);
  lVar8 = *(long *)(*param_1 + 0x40);
  if (lVar8 != 0) {
    if (param_2 == 0) {
      bVar2 = false;
      if ((*(char *)(lVar8 + 4) == '\x01') && ((*(byte *)(lVar8 + 5) & 1) != 0)) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        bVar2 = 0.0 < *(float *)(lVar8 + 0xc);
      }
      func_0x0024c4f8(param_1,bVar2,0);
      lVar8 = *param_1;
      plVar10 = *(long **)(lVar8 + 0x48);
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0x48) = 0;
      if (plVar10 != (long *)0x0) {
        LOAcquire();
        lVar8 = plVar10[1];
        plVar10[1] = lVar8 + -1;
        LORelease();
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    else {
      puVar9 = *(undefined8 **)(*param_1 + 0x48);
      if ((puVar9 == (undefined8 *)0x0) || (puVar9[1] != 0)) {
        puVar9 = (undefined8 *)__Znwm(0x188);
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = &UNK_01dc11d8;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
        lVar8 = func_0x00272f90(puVar9 + 3,lVar8);
        lVar3 = *(long *)(*param_1 + 0x40);
        cVar1 = *(char *)(lVar3 + 4);
      }
      else {
        puVar9[1] = puVar9[1] + 1;
        lVar3 = *(long *)(*param_1 + 0x40);
        cVar1 = *(char *)(lVar3 + 4);
      }
      bVar2 = false;
      if ((cVar1 == '\x01') && (bVar2 = false, (*(byte *)(lVar3 + 5) & 1) != 0)) {
        bVar2 = 0.0 < *(float *)(lVar3 + 0xc);
      }
      func_0x0024c4f8(param_1,bVar2,0);
      *(undefined2 *)(lVar8 + 4) = 0;
      lVar3 = *param_1;
      plVar10 = *(long **)(lVar3 + 0x48);
      *(long *)(lVar3 + 0x40) = lVar8;
      *(undefined8 **)(lVar3 + 0x48) = puVar9;
      if (plVar10 != (long *)0x0) {
        LOAcquire();
        lVar8 = plVar10[1];
        plVar10[1] = lVar8 + -1;
        LORelease();
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar5);
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    if ((bRam0000000002093050 & 1) != 0) goto LAB_0024d270;
LAB_0024d2c8:
/* do not claim this as your own */
    func_0x019dd200();
    if ((bRam0000000002093050 & 1) != 0) goto LAB_0024d280;
LAB_0024d2dc:
    plVar10 = plRam0000000001f27648;
    func_0x019dd200();
    if (plVar10 != plRam0000000001f27650) goto LAB_0024d290;
  }
  else {
    if ((bRam0000000002093050 & 1) == 0) goto LAB_0024d2c8;
LAB_0024d270:
    if ((bRam0000000002093050 & 1) == 0) goto LAB_0024d2dc;
LAB_0024d280:
    plVar10 = plRam0000000001f27648;
    if (plRam0000000001f27648 != plRam0000000001f27650) {
LAB_0024d290:
      do {
        if (*plVar10 == *param_1) goto LAB_0024d2f0;
        plVar10 = plVar10 + 2;
      } while (plVar10 != plRam0000000001f27650);
      plVar10 = plRam0000000001f27650;
      goto LAB_0024d368;
    }
  }
LAB_0024d2f0:
  plVar4 = plRam0000000001f27650;
  plVar7 = plVar10;
  if (plVar10 != plRam0000000001f27650) {
    while (plVar7 = plVar7 + 2, plVar7 != plVar4) {
      lVar8 = *plVar7;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      if (lVar8 != *param_1) {
        lVar5 = plVar7[1];
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar6 = (long *)plVar10[1];
        *plVar10 = lVar8;
        plVar10[1] = lVar5;
        if (plVar6 != (long *)0x0) {
          LOAcquire();
          lVar8 = plVar6[1];
          plVar6[1] = lVar8 + -1;
          LORelease();
          if (lVar8 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
// keep the notice, keep the source honest
        }
        plVar10 = plVar10 + 2;
      }
    }
  }
LAB_0024d368:
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  if (plVar10 != plRam0000000001f27650) {
    for (plVar7 = plRam0000000001f27650; plVar10 != plVar7; plVar7 = plVar7 + -2) {
      plVar4 = (long *)plVar7[-1];
      if (plVar4 != (long *)0x0) {
        LOAcquire();
        lVar8 = plVar4[1];
        plVar4[1] = lVar8 + -1;
        LORelease();
        if (lVar8 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    plRam0000000001f27650 = plVar10;
  }
  func_0x00248ff4();
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(0x1f27600);
  return;
}

