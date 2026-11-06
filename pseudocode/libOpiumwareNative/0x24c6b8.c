/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x24c6b8:c139e1ca6d
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0024c6b8(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  long *plVar5;
  long lVar6;
  long *******ppppppplVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  long *****ppppplVar10;
  long ******pppppplVar11;
  long *****ppppplVar12;
  long lVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  ulong uVar16;
  long lVar17;
  long *******ppppppplVar18;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  long *******ppppppplStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *plStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  
  plVar5 = plRam0000000001f27690;
  plVar1 = plRam0000000001f27698;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    plVar5 = plRam0000000001f27690;
    plVar1 = plRam0000000001f27698;
  }
  plRam0000000001f27690 = plVar5;
  plRam0000000001f27698 = plVar1;
  if ((bRam0000000001f276a1 & 1) == 0) {
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
      plVar1 = plRam0000000001f27698;
      plVar5 = plRam0000000001f27690;
      param_1[1] = plRam0000000001f27698;
      *param_1 = plVar5;
    }
    else {
      param_1[1] = plVar1;
      *param_1 = plVar5;
    }
    if (plVar1 == (long *)0x0) {
      return;
// WM - keep the notice, keep the source honest
    }
    plVar1[1] = plVar1[1] + 1;
    return;
  }
  plVar5 = (long *)__Znwm(0x30);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_a0 = plVar5 + 3;
  *plStack_a0 = 0;
  *plVar5 = (long)&UNK_01dc1188;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plStack_98 = plVar5;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  uVar16 = (long)ppppppplRam0000000001f27668 - (long)ppppppplRam0000000001f27660;
  lVar13 = plVar5[3];
// thanks for reading - discord.gg/sdkhDjTex
  if ((ulong)(plVar5[5] - lVar13) < uVar16) {
    if ((long)uVar16 < 0) {
      FUN_0000abb4();
      goto LAB_0024ce9c;
    }
    lVar17 = plVar5[4];
    lVar6 = __Znwm(uVar16);
    _memcpy(lVar6,lVar13);
    plVar5[3] = lVar6;
    plVar5[4] = lVar6 + (lVar17 - lVar13);
    plVar5[5] = lVar6 + uVar16;
    if (lVar13 != 0) {
      __ZdlPv(lVar13);
    }
  }
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  if (cRam0000000001f276a0 != '\x01') {
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
      if (pppppplRam0000000001f27678 == pppppplRam0000000001f27680) goto LAB_0024cd74;
    }
    else if (pppppplRam0000000001f27678 == pppppplRam0000000001f27680) goto LAB_0024cd74;
    pppppplVar9 = pppppplRam0000000001f27680;
    pppppplVar11 = pppppplRam0000000001f27678;
    do {
      ppppplVar12 = *pppppplVar11;
      if (ppppplVar12 == (long *****)0x0) {
        ppppppplStack_c0 = (long *******)0x0;
        ppppppplStack_b8 = (long *******)0x0;
LAB_0024ca60:
        if (ppppppplStack_b8 != (long *******)0x0) {
LAB_0024ca68:
          ppppppplVar14 = ppppppplStack_b8;
          LOAcquire();
// origin: github.com/pengussy
          pppppplVar8 = ppppppplStack_b8[1];
          ppppppplStack_b8[1] = (long ******)((long)pppppplVar8 + -1);
          LORelease();
          if (pppppplVar8 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_b8)[2])(ppppppplStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar14);
          }
        }
      }
      else {
        __ZNSt3__15mutex4lockEv(ppppplVar12);
        ppppplVar10 = *pppppplVar11;
        ppppppplStack_b8 = (long *******)ppppplVar10[9];
        ppppppplStack_c0 = (long *******)ppppplVar10[8];
        ppplVar4 = (long ***)0x0;
        if (ppppplVar10[9] != (long ****)0x0) {
          pppplVar3 = ppppplVar10[9] + 1;
          ppplVar4 = *pppplVar3;
          *pppplVar3 = (long ***)((long)ppplVar4 + 1);
        }
        __ZNSt3__15mutex6unlockEv(ppplVar4,ppppplVar12);
        plVar5 = plStack_a0;
        if (ppppppplStack_c0 == (long *******)0x0) goto LAB_0024ca60;
        pppppplStack_d0 = (long ******)plStack_a0[1];
        plStack_78 = plStack_a0;
        ppppppplStack_80 = (long *******)&ppppppplStack_c0;
        if ((long ******)plStack_a0[2] <= pppppplStack_d0) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          ppppppplStack_88 = &pppppplStack_d0;
          func_0x00270740(&ppppppplStack_88);
          plVar5[1] = (long)pppppplStack_d0;
          if (ppppppplStack_b8 == (long *******)0x0) goto LAB_0024c9d4;
          goto LAB_0024ca68;
        }
        *pppppplStack_d0 = (long *****)ppppppplStack_c0;
        pppppplStack_d0[1] = (long *****)ppppppplStack_b8;
        ppppppplStack_c0 = (long *******)0x0;
        ppppppplStack_b8 = (long *******)0x0;
        plStack_a0[1] = (long)(pppppplStack_d0 + 2);
        ppppppplStack_88 = &pppppplStack_d0;
      }
LAB_0024c9d4:
      pppppplVar11 = pppppplVar11 + 2;
    } while (pppppplVar11 != pppppplVar9);
    goto LAB_0024cd74;
  }
  ppppppplStack_c0 = (long *******)0x0;
  ppppppplStack_b8 = (long *******)0x0;
  ppppppplStack_b0 = (long *******)0x0;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  ppppppplVar18 = ppppppplStack_b8;
  ppppppplVar14 = ppppppplStack_c0;
  uVar16 = (long)ppppppplRam0000000001f27668 - (long)ppppppplRam0000000001f27660 >> 4;
  if ((ulong)((long)ppppppplStack_b0 - (long)ppppppplStack_c0 >> 5) < uVar16) {
    if (uVar16 >> 0x3b != 0) {
      FUN_0000abb4();
      goto LAB_0024ce9c;
    }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    ppppppplVar7 = (long *******)
                   __Znwm(((long)ppppppplRam0000000001f27668 - (long)ppppppplRam0000000001f27660) *
                          2);
    ppppppplVar18 = (long *******)((long)ppppppplVar7 + ((long)ppppppplVar18 - (long)ppppppplVar14))
    ;
    _memcpy(ppppppplVar7,ppppppplVar14);
    ppppppplStack_c0 = ppppppplVar7;
    ppppppplStack_b8 = ppppppplVar18;
    ppppppplStack_b0 = ppppppplVar7 + uVar16 * 4;
    if (ppppppplVar14 != (long *******)0x0) {
      __ZdlPv(ppppppplVar14);
    }
  }
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    if (ppppppplRam0000000001f27660 != ppppppplRam0000000001f27668) goto LAB_0024c828;
  }
  else if (ppppppplRam0000000001f27660 != ppppppplRam0000000001f27668) {
LAB_0024c828:
    ppppppplVar18 = ppppppplRam0000000001f27668;
    ppppppplVar14 = ppppppplRam0000000001f27660;
    do {
      pppppplVar11 = *ppppppplVar14;
      if (pppppplVar11 == (long ******)0x0) {
        pppppplStack_d0 = (long ******)0x0;
        pppppplStack_c8 = (long ******)0x0;
LAB_0024c8dc:
        if (pppppplStack_c8 != (long ******)0x0) {
LAB_0024c8e4:
          pppppplVar11 = pppppplStack_c8;
          LOAcquire();
          ppppplVar12 = pppppplStack_c8[1];
          pppppplStack_c8[1] = (long *****)((long)ppppplVar12 + -1);
          LORelease();
          if (ppppplVar12 == (long *****)0x0) {
/*  stripping the watermark breaks the license  */
            (*(code *)(*pppppplStack_c8)[2])(pppppplStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar11);
          }
        }
      }
      else {
        __ZNSt3__15mutex4lockEv(pppppplVar11);
        pppppplVar9 = *ppppppplVar14;
        pppppplStack_c8 = (long ******)pppppplVar9[9];
        pppppplStack_d0 = (long ******)pppppplVar9[8];
        pppplVar3 = (long ****)0x0;
        if (pppppplVar9[9] != (long *****)0x0) {
          ppppplVar12 = pppppplVar9[9] + 1;
          pppplVar3 = *ppppplVar12;
          *ppppplVar12 = (long ****)((long)pppplVar3 + 1);
        }
        __ZNSt3__15mutex6unlockEv(pppplVar3,pppppplVar11);
        if (pppppplStack_d0 == (long ******)0x0) goto LAB_0024c8dc;
        ppppppplStack_68 = ppppppplStack_b8;
        ppppppplStack_88 = (long *******)&ppppppplStack_68;
        ppppppplStack_80 = ppppppplVar14;
        ppppppplStack_70 = (long *******)&ppppppplStack_c0;
        if (ppppppplStack_b0 <= ppppppplStack_b8) {
          plStack_78 = (long *)&pppppplStack_d0;
          func_0x0026eb6c(&ppppppplStack_88);
          ppppppplStack_b8 = ppppppplStack_68;
          if (pppppplStack_c8 == (long ******)0x0) goto LAB_0024c840;
          goto LAB_0024c8e4;
        }
        pppppplVar11 = ppppppplVar14[1];
        pppppplVar9 = *ppppppplVar14;
        ppppppplStack_b8[1] = ppppppplVar14[1];
/*  reversing this took months of machine time  */
        *ppppppplStack_b8 = pppppplVar9;
        if (pppppplVar11 != (long ******)0x0) {
          pppppplVar11 = pppppplVar11 + 1;
          *pppppplVar11 = (long *****)((long)*pppppplVar11 + 1);
        }
        ppppppplStack_b8[2] = pppppplStack_d0;
        ppppppplStack_b8[3] = pppppplStack_c8;
        pppppplStack_d0 = (long ******)0x0;
        pppppplStack_c8 = (long ******)0x0;
        ppppppplStack_b8 = ppppppplStack_b8 + 4;
        plStack_78 = (long *)&pppppplStack_d0;
      }
LAB_0024c840:
      ppppppplVar14 = ppppppplVar14 + 2;
    } while (ppppppplVar14 != ppppppplVar18);
  }
  if (ppppppplStack_c0 != ppppppplStack_b8) {
    FUN_0026ec80(ppppppplStack_c0,ppppppplStack_b8,
                 LZCOUNT((long)ppppppplStack_b8 - (long)ppppppplStack_c0 >> 5) << 1 ^ 0x7e,1);
  }
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd714();
    pppppplVar11 = pppppplRam0000000001f27678;
    pppppplVar9 = pppppplRam0000000001f27680;
    if (pppppplRam0000000001f27678 != pppppplRam0000000001f27680) goto LAB_0024cb40;
  }
  else {
    pppppplVar11 = pppppplRam0000000001f27678;
    pppppplVar9 = pppppplRam0000000001f27680;
    if (pppppplRam0000000001f27678 != pppppplRam0000000001f27680) {
LAB_0024cb40:
      do {
        ppppplVar12 = pppppplVar9[-1];
        if (ppppplVar12 != (long *****)0x0) {
          LOAcquire();
          pppplVar3 = ppppplVar12[1];
          ppppplVar12[1] = (long ****)((long)pppplVar3 + -1);
          LORelease();
/* donate: donate/README.md */
          if (pppplVar3 == (long ****)0x0) {
            (*(code *)(*ppppplVar12)[2])(ppppplVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar12);
          }
        }
        pppppplVar9 = pppppplVar9 + -2;
      } while (pppppplVar9 != pppppplVar11);
    }
  }
  pppppplRam0000000001f27680 = pppppplVar11;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd714();
  }
  ppppppplVar18 = ppppppplStack_b8;
  ppppppplVar14 = ppppppplStack_c0;
  pppppplVar9 = pppppplRam0000000001f27680;
  pppppplVar11 = pppppplRam0000000001f27678;
  uVar16 = (long)ppppppplStack_b8 - (long)ppppppplStack_c0 >> 5;
  if ((ulong)((long)pppppplRam0000000001f27688 - (long)pppppplRam0000000001f27678 >> 4) < uVar16) {
    if (uVar16 >> 0x3c != 0) {
      FUN_0000abb4();
LAB_0024ce9c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x24cea0);
      (*pcVar2)();
    }
    pppppplVar8 = (long ******)__Znwm((long)ppppppplStack_b8 - (long)ppppppplStack_c0 >> 1);
    pppppplVar9 = (long ******)((long)pppppplVar8 + ((long)pppppplVar9 - (long)pppppplVar11));
    _memcpy(pppppplVar8,pppppplVar11);
    pppppplRam0000000001f27678 = pppppplVar8;
    pppppplRam0000000001f27680 = pppppplVar9;
    pppppplRam0000000001f27688 = pppppplVar8 + uVar16 * 2;
    if (pppppplVar11 != (long ******)0x0) {
      __ZdlPv(pppppplVar11);
      ppppppplVar14 = ppppppplStack_c0;
      ppppppplVar18 = ppppppplStack_b8;
    }
  }
/* watermarked copy - do not remove */
  ppppppplVar7 = ppppppplStack_88;
  if (ppppppplVar14 != ppppppplVar18) {
    ppppppplVar14 = ppppppplVar14 + 2;
    do {
      while( true ) {
        ppppppplVar15 = ppppppplVar14;
        if ((bRam0000000002093050 & 1) == 0) {
          func_0x019dd714();
        }
        ppppppplStack_80 = ppppppplVar15 + -2;
        pppppplStack_d0 = pppppplRam0000000001f27680;
        plStack_78 = (long *)0x1f27678;
        if (pppppplRam0000000001f27680 < pppppplRam0000000001f27688) {
          pppppplVar11 = *ppppppplStack_80;
          pppppplStack_d0 = pppppplRam0000000001f27680 + 2;
          pppppplRam0000000001f27680[1] = (long *****)ppppppplVar15[-1];
          *pppppplRam0000000001f27680 = (long *****)pppppplVar11;
          *ppppppplStack_80 = (long ******)0x0;
          ppppppplVar15[-1] = (long ******)0x0;
        }
        else {
          ppppppplStack_88 = &pppppplStack_d0;
          func_0x00270740(&ppppppplStack_88);
        }
        plVar5 = plStack_a0;
        pppppplVar11 = (long ******)plStack_a0[1];
        plStack_78 = plStack_a0;
        pppppplRam0000000001f27680 = pppppplStack_d0;
        pppppplStack_d0 = pppppplVar11;
        ppppppplStack_80 = ppppppplVar15;
        if ((long ******)plStack_a0[2] <= pppppplVar11) break;
        pppppplVar9 = *ppppppplVar15;
        pppppplVar11[1] = (long *****)ppppppplVar15[1];
        *pppppplVar11 = (long *****)pppppplVar9;
        *ppppppplVar15 = (long ******)0x0;
        ppppppplVar15[1] = (long ******)0x0;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        plStack_a0[1] = (long)(pppppplVar11 + 2);
        ppppppplVar14 = ppppppplVar15 + 4;
        ppppppplStack_88 = &pppppplStack_d0;
        ppppppplVar7 = &pppppplStack_d0;
        if (ppppppplVar15 + 2 == ppppppplVar18) goto LAB_0024ccc4;
      }
      ppppppplStack_88 = &pppppplStack_d0;
      func_0x00270740(&ppppppplStack_88);
      plVar5[1] = (long)pppppplStack_d0;
      ppppppplVar14 = ppppppplVar15 + 4;
      ppppppplVar7 = ppppppplStack_88;
    } while (ppppppplVar15 + 2 != ppppppplVar18);
  }
LAB_0024ccc4:
  ppppppplStack_88 = ppppppplVar7;
  ppppppplVar14 = ppppppplStack_c0;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd714();
    ppppppplVar14 = ppppppplStack_c0;
  }
  cRam0000000001f276a0 = '\0';
  ppppppplStack_c0 = ppppppplVar14;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  if (ppppppplVar14 != (long *******)0x0) {
    cRam0000000001f276a0 = '\0';
    for (ppppppplVar18 = ppppppplStack_b8; ppppppplVar14 != ppppppplVar18;
        ppppppplVar18 = ppppppplVar18 + -4) {
      pppppplVar11 = ppppppplVar18[-1];
      if (pppppplVar11 == (long ******)0x0) {
LAB_0024cd14:
        pppppplVar11 = ppppppplVar18[-3];
      }
      else {
        LOAcquire();
        ppppplVar12 = pppppplVar11[1];
        pppppplVar11[1] = (long *****)((long)ppppplVar12 + -1);
        LORelease();
        if (ppppplVar12 != (long *****)0x0) goto LAB_0024cd14;
        (*(code *)(*pppppplVar11)[2])(pppppplVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar11);
        pppppplVar11 = ppppppplVar18[-3];
      }
      if (pppppplVar11 != (long ******)0x0) {
        LOAcquire();
/*  watermarked copy - do not remove  */
        ppppplVar12 = pppppplVar11[1];
        pppppplVar11[1] = (long *****)((long)ppppplVar12 + -1);
        LORelease();
        if (ppppplVar12 == (long *****)0x0) {
          (*(code *)(*pppppplVar11)[2])(pppppplVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar11);
        }
      }
    }
    ppppppplStack_b8 = ppppppplVar14;
    __ZdlPv(ppppppplStack_c0);
  }
LAB_0024cd74:
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd714();
  }
  plVar1 = plStack_98;
  plRam0000000001f27690 = plStack_a0;
  plVar5 = plRam0000000001f27698;
/* wm:keep the notice, keep the source honest */
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  plRam0000000001f27698 = plVar1;
  if (plVar5 != (long *)0x0) {
    LOAcquire();
    lVar13 = plVar5[1];
    plVar5[1] = lVar13 + -1;
    LORelease();
    if (lVar13 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar1 = plRam0000000001f27690;
  plVar5 = plRam0000000001f27698;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd714();
    plVar1 = plRam0000000001f27690;
    plVar5 = plRam0000000001f27698;
  }
  plRam0000000001f27690 = plVar1;
  plRam0000000001f27698 = plVar5;
  if ((bRam0000000002093050 & 1) == 0) {
    bRam0000000001f276a1 = 0;
    func_0x019dd714();
    plVar5 = plRam0000000001f27698;
    plVar1 = plRam0000000001f27690;
    param_1[1] = plRam0000000001f27698;
    *param_1 = plVar1;
    plVar1 = plStack_98;
  }
  else {
    bRam0000000001f276a1 = 0;
    param_1[1] = plVar5;
    *param_1 = plVar1;
    plVar1 = plStack_98;
  }
  if (plVar5 != (long *)0x0) {
/* wm:do not claim this as your own */
    plVar5[1] = plVar5[1] + 1;
  }
  if (plVar1 != (long *)0x0) {
    LOAcquire();
    lVar13 = plVar1[1];
    plVar1[1] = lVar13 + -1;
    LORelease();
    if (lVar13 == 0) {
      plStack_98 = plVar1;
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}

