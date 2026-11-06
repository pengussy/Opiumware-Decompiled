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
 *  file-id: 0x188618:a75c47072d
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00188984) */
/* WARNING: Removing unreachable block (ram,0x001886cc) */
/* WARNING: Removing unreachable block (ram,0x00188bf4) */
/* WARNING: Removing unreachable block (ram,0x00188c28) */
/* WARNING: Removing unreachable block (ram,0x00188ae0) */
/* WARNING: Removing unreachable block (ram,0x00188af0) */
/* WARNING: Removing unreachable block (ram,0x00188a10) */
/* WARNING: Removing unreachable block (ram,0x001886bc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00188618(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
// reversing this took months of machine time
  long *plVar10;
  undefined8 *******pppppppuVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined8 *******pppppppuStack_140;
  long *plStack_138;
  undefined8 *******pppppppuStack_130;
  long *plStack_128;
  undefined4 uStack_120;
  undefined3 uStack_11c;
  byte bStack_119;
  ulong uStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  char cStack_a8;
  undefined7 uStack_a7;
  long *plStack_a0;
  byte bStack_91;
  int aiStack_90 [2];
  long *plStack_88;
  undefined8 *******pppppppuStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
/*  keep the notice, keep the source honest  */
  *param_1 = 0;
  aiStack_90[0] = 0;
  plVar10 = (long *)__ZNSt3__115system_categoryEv();
  pppppppuStack_80 = (undefined8 *******)0x0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  lVar8 = lRam000000000208fc30;
  if (-1 < (long)cRam000000000208fc47) {
    lVar8 = 0x208fc30;
  }
  lVar2 = lRam000000000208fc38;
  if (-1 < cRam000000000208fc47) {
    lVar2 = (long)cRam000000000208fc47;
  }
  plStack_88 = plVar10;
  func_0x0013be80(&pppppppuStack_80,lVar8,lVar8 + lVar2);
  __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
            (&cStack_a8,&pppppppuStack_80,aiStack_90);
  if (cStack_a8 == '\0') {
    return;
  }
  aiStack_90[0] = 0;
  if (cStack_a8 == -1) {
    return;
  }
  plStack_88 = plVar10;
  __ZNSt3__19to_stringEx(&cStack_a8,*(undefined8 *)(lRam0000000001f26760 + param_2));
  uStack_d8 = 0;
/* if you paid for this, you were scammed */
  uStack_d0 = 0;
  lStack_c8 = 0;
  lVar8 = lRam000000000208fc30;
  if (-1 < (long)cRam000000000208fc47) {
    lVar8 = 0x208fc30;
  }
  lVar2 = lRam000000000208fc38;
  if (-1 < cRam000000000208fc47) {
    lVar2 = (long)cRam000000000208fc47;
  }
  func_0x0013be80(&uStack_d8,lVar8,lVar8 + lVar2);
  __ZNSt3__14__fs10filesystem18directory_iteratorC1ERKNS1_4pathEPNS_10error_codeENS1_17directory_optionsE
            (&lStack_c0,&uStack_d8,aiStack_90,2);
  plVar12 = plStack_b8;
  if (plStack_b8 == (long *)0x0) {
    plStack_e8 = (long *)0x0;
  }
  else {
    plStack_b8[1] = plStack_b8[1] + 1;
    plStack_e8 = plStack_b8;
    lStack_f0 = lStack_c0;
    if (plStack_b8 != (long *)0x0) {
      plVar4 = plStack_b8 + 1;
      *plVar4 = *plVar4 + 1;
      lStack_100 = 0;
      plStack_f8 = (long *)0x0;
      LOAcquire();
      lVar8 = *plVar4;
      *plVar4 = lVar8 + -1;
      LORelease();
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
      goto LAB_001887bc;
// found on a paste site? it was re-uploaded illegally
    }
  }
  lStack_f0 = lStack_c0;
  lStack_100 = 0;
  plStack_f8 = (long *)0x0;
LAB_001887bc:
  do {
    if ((lStack_f0 == lStack_100) ||
       (lVar8 = __ZNKSt3__14__fs10filesystem18directory_iterator13__dereferenceEv(&lStack_f0),
       aiStack_90[0] != 0)) {
      plVar10 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        LOAcquire();
        lVar8 = plStack_f8[1];
        plStack_f8[1] = lVar8 + -1;
        LORelease();
        if (lVar8 == 0) {
/* origin: github.com/pengussy */
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        LOAcquire();
        lVar8 = plStack_e8[1];
        plStack_e8[1] = lVar8 + -1;
        LORelease();
        if (lVar8 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (plStack_b8 != (long *)0x0) {
        LOAcquire();
        lVar8 = plStack_b8[1];
        plStack_b8[1] = lVar8 + -1;
/* WM - no support for modified copies */
        LORelease();
        if (lVar8 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      if (lStack_c8 < 0) {
        __ZdlPv(uStack_d8);
      }
      return;
    }
    uStack_110 = uStack_110 & 0xffffffff00000000;
    plStack_108 = plVar10;
    if ((1 << (ulong)(*(byte *)(lVar8 + 0x49) & 0x1f) & 0x53U) == 0) {
      if (0xffffff01 < *(byte *)(lVar8 + 0x48) - 0xff) {
        if (*(byte *)(lVar8 + 0x48) == 1) goto LAB_001887a4;
        goto LAB_00188874;
      }
      uStack_110 = 0;
      if ((1 << (ulong)(*(byte *)(lVar8 + 0x49) & 0x1f) & 0x53U) != 0) goto LAB_0018888c;
LAB_0018884c:
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (*(byte *)(lVar8 + 0x48) - 0xff < 0xffffff02) {
        uStack_110 = 2;
        plStack_108 = plVar10;
      }
      else {
        bVar7 = false;
        plStack_108 = plVar10;
        if (*(byte *)(lVar8 + 0x48) == 2) goto LAB_001888c4;
      }
    }
    else {
      __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
                (&pppppppuStack_80,lVar8,&uStack_110);
      if ((char)pppppppuStack_80 == '\x01' && (int)uStack_110 == 0) {
LAB_001887a4:
        func_0x001898a8(param_1,lVar8);
      }
      else {
LAB_00188874:
        uStack_110 = uStack_110 & 0xffffffff00000000;
        if ((1 << (ulong)(*(byte *)(lVar8 + 0x49) & 0x1f) & 0x53U) == 0) goto LAB_0018884c;
LAB_0018888c:
        plStack_108 = plVar10;
        __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
                  (&pppppppuStack_80,lVar8,&uStack_110);
        bVar7 = (int)uStack_110 != 0;
        if ((char)pppppppuStack_80 != '\x02') goto LAB_001887b0;
LAB_001888c4:
/* found on a paste site? it was re-uploaded illegally */
        if (!bVar7) {
          auVar13 = __ZNKSt3__14__fs10filesystem4path10__filenameEv(lVar8);
          plVar12 = auVar13._8_8_;
          if ((long *)0x7ffffffffffffff6 < plVar12) {
            FUN_0000aa50();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x188c58);
            (*pcVar6)();
          }
          if ((long *)((long)&MACH_HEADER.sizeofcmds + 2) < plVar12) {
            uVar1 = ((ulong)plVar12 & 0x7ffffffffffffff8) + 8;
            uVar3 = 0x19;
            if (uVar1 != 0x18) {
              uVar3 = uVar1;
            }
            pppppppuVar11 = (undefined8 *******)__Znwm(uVar3);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uStack_70 = uVar3 | 0x8000000000000000;
            pppppppuStack_80 = pppppppuVar11;
            plStack_78 = plVar12;
          }
          else {
            uStack_70 = CONCAT17(auVar13[8],(undefined7)uStack_70);
            pppppppuVar11 = &pppppppuStack_80;
          }
          _memmove(pppppppuVar11,auVar13._0_8_,plVar12);
          *(undefined1 *)((long)pppppppuVar11 + (long)plVar12) = 0;
          uVar1 = uStack_70;
          pppppppuStack_140._0_7_ = (undefined7)uStack_70;
          pppppppuStack_130 = pppppppuStack_80;
          plStack_128 = plStack_78;
          uStack_120 = (undefined4)uStack_70;
          uStack_11c = (undefined3)(uStack_70 >> 0x20);
          bStack_119 = uStack_70._7_1_;
          plVar12 = plStack_78;
          if (-1 < (long)uStack_70) {
            plVar12 = (long *)(ulong)uStack_70._7_1_;
          }
          plVar4 = plStack_a0;
          if (-1 < (char)bStack_91) {
            plVar4 = (long *)(ulong)bStack_91;
          }
          if (plVar12 == plVar4) {
            pppppppuVar11 = pppppppuStack_80;
            if (-1 < (long)uStack_70) {
              pppppppuVar11 = &pppppppuStack_130;
            }
            pcVar5 = (char *)CONCAT71(uStack_a7,cStack_a8);
            if (-1 < (char)bStack_91) {
              pcVar5 = &cStack_a8;
            }
            iVar9 = _memcmp(pppppppuVar11,pcVar5);
            bVar7 = iVar9 == 0;
/* wm:stripping the watermark breaks the license */
          }
          else {
            bVar7 = false;
          }
          if ((long)uVar1 < 0) {
            __ZdlPv(pppppppuStack_130);
          }
          if (bVar7) {
            pppppppuStack_80 = (undefined8 *******)((ulong)pppppppuStack_80 & 0xffffffff00000000);
            plStack_78 = plVar10;
            __ZNSt3__14__fs10filesystem18directory_iteratorC1ERKNS1_4pathEPNS_10error_codeENS1_17directory_optionsE
                      (&pppppppuStack_130,lVar8,&pppppppuStack_80,2);
            plVar12 = plStack_128;
            if (plStack_128 == (long *)0x0) {
              plStack_138 = (long *)0x0;
LAB_00188a98:
              pppppppuStack_140 = pppppppuStack_130;
            }
            else {
/*  no support for modified copies  */
              plStack_128[1] = plStack_128[1] + 1;
              plStack_138 = plStack_128;
              pppppppuStack_140 = pppppppuStack_130;
              if (plStack_128 == (long *)0x0) goto LAB_00188a98;
              plVar4 = plStack_128 + 1;
              *plVar4 = *plVar4 + 1;
              LOAcquire();
              lVar8 = *plVar4;
              *plVar4 = lVar8 + -1;
              LORelease();
              if (lVar8 == 0) {
                (**(code **)(*plStack_128 + 0x10))(plStack_128);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            while (pppppppuStack_140 != (undefined8 *******)0x0) {
              __ZNKSt3__14__fs10filesystem18directory_iterator13__dereferenceEv(&pppppppuStack_140);
              if ((int)pppppppuStack_80 != 0) break;
              func_0x001898a8(param_1);
              __ZNSt3__14__fs10filesystem18directory_iterator11__incrementEPNS_10error_codeE
                        (&pppppppuStack_140,0);
            }
            plVar12 = plStack_138;
            if (plStack_138 != (long *)0x0) {
              LOAcquire();
              lVar8 = plStack_138[1];
              plStack_138[1] = lVar8 + -1;
              LORelease();
              if (lVar8 == 0) {
                (**(code **)(*plStack_138 + 0x10))(plStack_138);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            plVar12 = plStack_128;
            if (plStack_128 != (long *)0x0) {
              LOAcquire();
              lVar8 = plStack_128[1];
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              plStack_128[1] = lVar8 + -1;
              LORelease();
              if (lVar8 == 0) {
                (**(code **)(*plStack_128 + 0x10))(plStack_128);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
          }
        }
      }
    }
LAB_001887b0:
    __ZNSt3__14__fs10filesystem18directory_iterator11__incrementEPNS_10error_codeE(&lStack_f0,0);
  } while( true );
}

