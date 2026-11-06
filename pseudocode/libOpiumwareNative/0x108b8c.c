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
 *  file-id: 0x108b8c:db8297063b
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x0010907c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108b8c(void)

{
  long ***ppplVar1;
  long ***ppplVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long ****pppplVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long ***ppplVar11;
  undefined8 uVar12;
  long lVar13;
// WM - donate: donate/README.md
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long **pplVar18;
  long **pplVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long **pplStack_c8;
  long ****pppplStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [8];
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ****pppplStack_90;
  long *plStack_88;
  long ****pppplStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  lVar9 = lRam0000000002097038;
  lVar14 = lRam0000000001f26d30;
  pplStack_c8 = (long **)plRam0000000002097040;
  LOAcquire();
  lRam0000000001f26d30 = lRam0000000001f26d30 + 1;
  LORelease();
  if (lRam0000000002097038 != 0 || plRam0000000002097040 != (long *)0x0) {
    if (plRam0000000002097040 != (long *)0x0) {
      ppplStack_a8 = &pplStack_c8;
      pppplStack_90 = (long ****)0x20929f8;
      lVar10 = func_0x001533e8(&pppplStack_90,&pplStack_c8,&UNK_01bd2568,&ppplStack_a8,&uStack_e0);
      *(long *)(lVar10 + 0x18) = lVar9;
    }
    lVar10 = lRam000000000208ed00;
    __ZNSt3__15mutex4lockEv(0x1f26cb0);
/*  proprietary - see LICENSE - do not sell  */
    plVar17 = (long *)(lRam0000000002096f20 + (uRam0000000002096f38 / 0x49) * 8);
    if (lRam0000000002096f28 == lRam0000000002096f20) {
      auVar20._8_8_ = 0;
      auVar20._0_8_ = plVar17;
    }
    else {
      auVar20._8_8_ = *plVar17 + (uRam0000000002096f38 % 0x49) * 0x38;
      auVar20._0_8_ = plVar17;
    }
LAB_001092b8:
    lVar6 = lRam0000000002096f28;
    lVar5 = lRam0000000002096f20;
    uVar3 = lRam0000000002096f40 + uRam0000000002096f38;
    do {
      lVar13 = auVar20._8_8_;
      plVar17 = auVar20._0_8_;
      lVar15 = lVar13 + -0xff8;
      do {
        if (lVar6 == lVar5) {
          if (lVar13 == 0) goto LAB_00109364;
        }
        else if (lVar13 == *(long *)(lVar5 + (uVar3 / 0x49) * 8) + (uVar3 % 0x49) * 0x38) {
LAB_00109364:
          if (lVar10 != lVar14) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            lRam000000000208ed00 = 0;
          }
          __ZNSt3__15mutex6unlockEv(0x1f26cb0);
          if (lVar9 == 0 && pplStack_c8 == (long **)0x0) goto LAB_00108c90;
          goto LAB_00108c8c;
        }
        if ((((lVar10 != lVar14) || (*(long *)(lVar13 + 0x28) != lVar14)) ||
            (*(long *)(lVar13 + 0x18) != lVar9)) ||
           ((long **)*(long **)(lVar13 + 0x20) != pplStack_c8)) {
          auVar20 = func_0x00152f60(0x2096f18,plVar17);
          goto LAB_001092b8;
        }
        *(undefined1 *)(lVar13 + 0x30) = 1;
        lVar13 = lVar13 + 0x38;
        lVar15 = lVar15 + 0x38;
      } while (*plVar17 != lVar15);
      auVar20._8_8_ = plVar17[1];
      auVar20._0_8_ = plVar17 + 1;
    } while( true );
  }
  if (lRam0000000002097038 != 0) {
LAB_00108c8c:
    func_0x001d8ab0();
  }
LAB_00108c90:
  func_0x000d139c();
  func_0x002496b4(0);
  func_0x00249654();
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  __ZNSt3__15mutex4lockEv(0x1f26cf0);
  if ((long)uStack_d0 < 0) {
    uVar4 = CONCAT71(uRam000000000208fc79,uRam000000000208fc78);
    uVar3 = uRam000000000208fc80;
    if (-1 < (char)bRam000000000208fc8f) {
      uVar4 = 0x208fc78;
      uVar3 = (ulong)bRam000000000208fc8f;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    }
    func_0x001286c0(&uStack_e0,uVar4,uVar3);
LAB_00108d10:
    if ((char)bRam000000000208fc8f < '\0') {
      *(undefined1 *)CONCAT71(uRam000000000208fc79,uRam000000000208fc78) = 0;
      uRam000000000208fc80 = 0;
      goto LAB_00108d30;
    }
  }
  else {
    if ((char)bRam000000000208fc8f < '\0') {
      func_0x001287e0(&uStack_e0,CONCAT71(uRam000000000208fc79,uRam000000000208fc78),
                      uRam000000000208fc80);
      goto LAB_00108d10;
    }
    uStack_e0 = CONCAT71(uRam000000000208fc79,uRam000000000208fc78);
    uStack_d8 = uRam000000000208fc80;
    uStack_d0 = CONCAT17(bRam000000000208fc8f,uRam000000000208fc88);
  }
  uRam000000000208fc78 = 0;
  bRam000000000208fc8f = 0;
LAB_00108d30:
  __ZNSt3__15mutex6unlockEv(0x1f26cf0);
  uVar3 = uStack_d8;
  if (-1 < (long)uStack_d0) {
    uVar3 = uStack_d0 >> 0x38;
  }
  if (uVar3 != 0) {
    pppplStack_90 = (long ****)((ulong)pppplStack_90 & 0xffffffff00000000);
    plStack_88 = (long *)__ZNSt3__115system_categoryEv();
/* wm:origin: github.com/pengussy */
    __ZNSt3__14__fs10filesystem12__remove_allERKNS1_4pathEPNS_10error_codeE
              (&uStack_e0,&pppplStack_90);
  }
  __ZNSt3__115recursive_mutex4lockEv(0x2092a48);
  ppplStack_a8 = (long ***)0x0;
  ppplStack_a0 = (long ***)0x0;
  ppplStack_98 = (long ***)0x0;
  __ZNSt3__15mutex4lockEv(0x1f26c30);
  ppplVar2 = ppplStack_a0;
  ppplVar1 = ppplStack_a8;
  uVar3 = uRam0000000002096f88;
  if ((ulong)((long)ppplStack_98 - (long)ppplStack_a8 >> 4) < uRam0000000002096f88) {
    if (uRam0000000002096f88 >> 0x3c != 0) {
      func_0x0000abb4();
LAB_001093b0:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1093b4);
      (*pcVar8)();
    }
    ppplVar11 = (long ***)__Znwm(uRam0000000002096f88 << 4);
    ppplVar2 = (long ***)((long)ppplVar11 + ((long)ppplVar2 - (long)ppplVar1));
    _memcpy(ppplVar11,ppplVar1);
    ppplStack_a8 = ppplVar11;
    ppplStack_a0 = ppplVar2;
    ppplStack_98 = ppplVar11 + uVar3 * 2;
    if (ppplVar1 != (long ***)0x0) {
      __ZdlPv(ppplVar1);
    }
  }
  if (plRam0000000002096f80 != (long *)0x0) {
    plVar17 = plRam0000000002096f80;
    do {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      while (plStack_88 = plVar17 + 3, pppplStack_c0 = (long ****)ppplStack_a0,
            pppplStack_90 = (long ****)&pppplStack_c0, pppplStack_80 = &ppplStack_a8,
            ppplStack_a0 < ppplStack_98) {
        lVar14 = plVar17[4];
        pplVar18 = (long **)plVar17[3];
        ppplStack_a0[1] = (long **)plVar17[4];
        *ppplStack_a0 = pplVar18;
        if (lVar14 != 0) {
          plVar16 = (long *)(lVar14 + 8);
          *plVar16 = *plVar16 + 1;
        }
        ppplStack_a0 = ppplStack_a0 + 2;
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_00108e64;
      }
      func_0x00153fac(&pppplStack_90);
      ppplStack_a0 = (long ***)pppplStack_c0;
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
LAB_00108e64:
  plVar17 = plRam0000000002096f80;
  if (uRam0000000002096f88 != 0) {
    while (plVar17 != (long *)0x0) {
      lVar14 = *plVar17;
      plVar16 = (long *)plVar17[4];
// thanks for reading - discord.gg/sdkhDjTex
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
      __ZdlPv(plVar17);
      plVar17 = (long *)lVar14;
    }
    plRam0000000002096f80 = (long *)0x0;
    if (lRam0000000002096f78 != 0) {
      _bzero(uRam0000000002096f70,lRam0000000002096f78 << 3);
    }
    uRam0000000002096f88 = 0;
  }
  __ZNSt3__15mutex6unlockEv(0x1f26c30);
  ppplVar11 = ppplStack_a0;
  uVar4 = _UNK_01ad9d10;
  ppplVar1 = ppplStack_a8;
  ppplVar2 = ppplStack_a8;
  do {
    ppplStack_a8 = ppplVar2;
    if (ppplVar1 == ppplVar11) {
      ppplVar1 = ppplStack_a0;
      if (ppplVar2 != (long ***)0x0) {
        for (; ppplVar2 != ppplVar1; ppplVar1 = ppplVar1 + -2) {
          pplVar18 = ppplVar1[-1];
          if (pplVar18 != (long **)0x0) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
            LOAcquire();
            plVar17 = pplVar18[1];
            pplVar18[1] = (long *)((long)plVar17 + -1);
            LORelease();
            if (plVar17 == (long *)0x0) {
              (*(code *)(*pplVar18)[2])(pplVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar18);
            }
          }
        }
        ppplStack_a0 = ppplVar2;
        __ZdlPv(ppplStack_a8);
      }
      __ZNSt3__115recursive_mutex6unlockEv(0x2092a48);
      func_0x001e80b8();
      __ZNSt3__15mutex4lockEv(0x1f26c70);
      func_0x00154280(0x2096f48);
      plVar17 = plRam0000000002097080;
      if (lRam0000000002097088 != 0) {
        while (plVar17 != (long *)0x0) {
          plVar17 = (long *)*plVar17;
          __ZdlPv();
        }
        plRam0000000002097080 = (long *)0x0;
        if (lRam0000000002097078 != 0) {
          _bzero(uRam0000000002097070,lRam0000000002097078 << 3);
        }
        lRam0000000002097088 = 0;
      }
      plVar17 = plRam00000000020970a8;
      if (lRam00000000020970b0 != 0) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        while (plVar17 != (long *)0x0) {
          plVar17 = (long *)*plVar17;
          __ZdlPv();
        }
        plRam00000000020970a8 = (long *)0x0;
        if (lRam00000000020970a0 != 0) {
          _bzero(uRam0000000002097098,lRam00000000020970a0 << 3);
        }
        lRam00000000020970b0 = 0;
      }
      plVar17 = plRam00000000020970d0;
      if (lRam00000000020970d8 != 0) {
        while (plVar17 != (long *)0x0) {
          plVar17 = (long *)*plVar17;
          __ZdlPv();
        }
        plRam00000000020970d0 = (long *)0x0;
        if (lRam00000000020970c8 != 0) {
          _bzero(uRam00000000020970c0,lRam00000000020970c8 << 3);
/*  keep the notice, keep the source honest  */
        }
        lRam00000000020970d8 = 0;
      }
      plVar17 = plRam00000000020970f8;
      if (lRam0000000002097100 != 0) {
        while (plVar17 != (long *)0x0) {
          plVar17 = (long *)*plVar17;
          __ZdlPv();
        }
        plRam00000000020970f8 = (long *)0x0;
        if (lRam00000000020970f0 != 0) {
          _bzero(uRam00000000020970e8,lRam00000000020970f0 << 3);
        }
        lRam0000000002097100 = 0;
      }
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      func_0x0080e384();
      if ((long)uStack_d0 < 0) {
        __ZdlPv(uStack_e0);
      }
      return;
    }
    pplVar18 = *ppplVar1;
    if (pplVar18 != (long **)0x0) {
      __ZNSt3__15mutex4lockEv(pplVar18 + 5);
      pplVar19 = *ppplVar1;
      *(int *)((long)pplVar19 + 0xb9) = (int)uVar4;
      if (*(int *)(pplVar19 + 0x13) == 0) {
        *(undefined4 *)(pplVar19 + 0x13) = 2;
        plVar17 = pplVar19[0x18];
        plVar16 = pplVar19[0x19];
        if (plVar17 != plVar16) goto LAB_00109070;
      }
      else {
        plVar17 = pplVar19[0x18];
        plVar16 = pplVar19[0x19];
        if (plVar17 != plVar16) {
LAB_00109070:
/* watermarked copy - do not remove */
          do {
            plVar16 = plVar16 + -4;
          } while (plVar16 != plVar17);
        }
      }
      pplVar19[0x19] = plVar17;
      __ZNSt3__15mutex6unlockEv(pplVar18 + 5);
      __ZNSt3__118condition_variable10notify_allEv(*ppplVar1 + 0xd);
      func_0x00108250(ppplVar1,0);
      pppplStack_90 = (long ****)0x0;
      plStack_88 = (long *)0x0;
      pplVar19 = *ppplVar1;
      __ZNSt3__15mutex4lockEv(pplVar19 + 5);
      pplVar18 = *ppplVar1;
      plStack_88 = pplVar18[4];
      pppplStack_90 = (long ****)pplVar18[3];
      pplVar18[3] = (long *)0x0;
      pplVar18[4] = (long *)0x0;
      pplVar18 = *ppplVar1;
      plVar17 = pplVar18[4];
      pplVar18[3] = (long *)0x0;
      pplVar18[4] = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        LOAcquire();
        lVar14 = plVar17[1];
        plVar17[1] = lVar14 + -1;
        LORelease();
        if (lVar14 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      __ZNSt3__15mutex6unlockEv(pplVar19 + 5);
      plVar17 = plStack_88;
      pppplVar7 = pppplStack_90;
      pppplStack_c0 = pppplStack_90;
      plStack_b8 = plStack_88;
/* donate: donate/README.md - github.com/pengussy */
      pppplStack_90 = (long ****)0x0;
      plStack_88 = (long *)0x0;
      uVar12 = __Znwm(8);
      __ZNSt3__115__thread_structC1Ev();
      uStack_70 = uVar12;
      puStack_78 = (undefined8 *)__Znwm(0x18);
      uStack_70 = 0;
      *puStack_78 = uVar12;
      puStack_78[2] = plVar17;
      puStack_78[1] = pppplVar7;
      pppplStack_c0 = (long ****)0x0;
      plStack_b8 = (long *)0x0;
      uVar12 = _pthread_create(auStack_b0,0,&DAT_001540c4,puStack_78);
      if ((int)uVar12 != 0) {
        __ZNSt3__120__throw_system_errorEiPKc(uVar12,"thread constructor failed");
        goto LAB_001093b0;
      }
/* wm:no support for modified copies */
      __ZNSt3__16thread6detachEv(auStack_b0);
      __ZNSt3__16threadD1Ev(auStack_b0);
    }
    ppplVar1 = ppplVar1 + 2;
    ppplVar2 = ppplStack_a8;
  } while( true );
}

