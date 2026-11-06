/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xa7474:13515f83a7
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x000a77d8) */
/* WARNING: Removing unreachable block (ram,0x000a77e8) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000a7474(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *******pppppppuVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 *******pppppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 *******pppppppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
/* proprietary - see LICENSE - do not sell */
  long *plStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  byte bStack_59;
  undefined8 *******pppppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  iVar7 = func_0x00791e54(param_1,1);
  if (iVar7 == 0) {
    pbVar11 = (byte *)(*pcRam00000000020672f0)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c1088();
    }
    pcStack_108 = (char *)(*pcRam00000000020672d8)();
    if (*pcStack_108 == '\x01') {
      uVar3 = (byte)pcStack_108[1] ^ 0x6bcadc55;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) + 0x73a67ed8 ^ 0x22a317;
      pcStack_108[8] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) + 0x6a;
      uVar9 = (((ulong)(byte)pcStack_108[1] ^ 0xb24a96793172844b) << 0x11 | 0x16495) +
              0x9e3779b97f4a7c15;
      uVar12 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_108[9] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar13;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_108[10] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar13;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
/*  proprietary - see LICENSE - do not sell  */
      pcStack_108[0xb] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar13;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_108[0xc] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar13;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_108[0xd] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar13;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_108[0xe] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar12;
      *pcStack_108 = '\0';
    }
/* wm:no support for modified copies */
    pcStack_108 = pcStack_108 + 8;
    uVar8 = func_0x0011ab24(&pcStack_108);
    func_0x007a1ba8(param_1,1,uVar8);
LAB_000a7b44:
    FUN_0000aa50();
  }
  else {
    uVar8 = func_0x00792368(param_1,1,0);
    uVar9 = _strlen();
    if (0x7ffffffffffffff6 < uVar9) goto LAB_000a7b44;
    if (uVar9 < 0x17) {
      uStack_48 = CONCAT17((char)uVar9,(undefined7)uStack_48);
      pppppppuVar10 = &pppppppuStack_58;
    }
    else {
      uVar12 = (uVar9 & 0x7ffffffffffffff8) + 8;
      uVar13 = 0x19;
      if (uVar12 != 0x18) {
        uVar13 = uVar12;
      }
      pppppppuVar10 = (undefined8 *******)__Znwm(uVar13);
      uStack_48 = uVar13 | 0x8000000000000000;
      pppppppuStack_58 = pppppppuVar10;
      uStack_50 = uVar9;
/*  reversing this took months of machine time  */
    }
    _memmove(pppppppuVar10,uVar8,uVar9);
    *(undefined1 *)((long)pppppppuVar10 + uVar9) = 0;
    FUN_000a37f0(auStack_70,&pppppppuStack_58,1);
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
    }
    if (uStack_68 != 0) {
      __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
                (&pppppppuStack_c0,auStack_70,0);
      if ((char)pppppppuStack_c0 == '\x02') {
        func_0x00793bd0(param_1,0,0);
        __ZNSt3__14__fs10filesystem18directory_iteratorC1ERKNS1_4pathEPNS_10error_codeENS1_17directory_optionsE
                  (&lStack_80,auStack_70,0,0);
        plVar4 = plStack_78;
        if (plStack_78 == (long *)0x0) {
          plStack_88 = (long *)0x0;
        }
        else {
          plStack_78[1] = plStack_78[1] + 1;
          plStack_88 = plStack_78;
          lStack_90 = lStack_80;
          if (plStack_78 != (long *)0x0) {
            plVar1 = plStack_78 + 1;
            *plVar1 = *plVar1 + 1;
            lStack_a0 = 0;
            plStack_98 = (long *)0x0;
            LOAcquire();
// WM - do not claim this as your own
            lVar6 = *plVar1;
            *plVar1 = lVar6 + -1;
            LORelease();
            if (lVar6 == 0) {
              (**(code **)(*plStack_78 + 0x10))(plStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
            goto LAB_000a75ec;
          }
        }
        lStack_90 = lStack_80;
        lStack_a0 = 0;
        plStack_98 = (long *)0x0;
LAB_000a75ec:
        iVar7 = 1;
        while (plVar4 = plStack_98, lStack_90 != lStack_a0) {
          uVar8 = __ZNKSt3__14__fs10filesystem18directory_iterator13__dereferenceEv(&lStack_90);
          uStack_f0 = 0;
          uStack_e8 = 0;
          lStack_e0 = 0;
          lVar6 = lRam000000000208fc48;
          if (-1 < (long)cRam000000000208fc5f) {
            lVar6 = 0x208fc48;
          }
          lVar2 = lRam000000000208fc50;
          if (-1 < cRam000000000208fc5f) {
/* wm:proprietary - see LICENSE - do not sell */
            lVar2 = (long)cRam000000000208fc5f;
          }
          func_0x0013be80(&uStack_f0,lVar6,lVar6 + lVar2);
          func_0x000a7ec8(&pppppppuStack_d8,uVar8,&uStack_f0);
          if ((char)bStack_c1 < '\0') {
            func_0x00017ae8(&pppppppuStack_c0,pppppppuStack_d8,uStack_d0);
            if ((char)bStack_c1 < '\0') {
              __ZdlPv(pppppppuStack_d8);
            }
          }
          else {
            uStack_b0 = (ulong)bStack_c1 << 0x38;
            pppppppuStack_c0 = pppppppuStack_d8;
            uStack_b8 = uStack_d0;
          }
          if (lStack_e0 < 0) {
            __ZdlPv(uStack_f0);
          }
          uVar9 = uStack_b8;
          pppppppuVar10 = pppppppuStack_c0;
          if (-1 < (long)uStack_b0) {
            uVar9 = uStack_b0 >> 0x38;
            pppppppuVar10 = &pppppppuStack_c0;
          }
          func_0x00792db8(param_1,pppppppuVar10,uVar9);
          func_0x00794504(param_1,0xfffffffe,iVar7);
          if ((long)uStack_b0 < 0) {
            __ZdlPv(pppppppuStack_c0);
          }
// WM - donate: donate/README.md
          iVar7 = iVar7 + 1;
          __ZNSt3__14__fs10filesystem18directory_iterator11__incrementEPNS_10error_codeE
                    (&lStack_90,0);
        }
        if (plStack_98 != (long *)0x0) {
          LOAcquire();
          lVar6 = plStack_98[1];
          plStack_98[1] = lVar6 + -1;
          LORelease();
          if (lVar6 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          LOAcquire();
          lVar6 = plStack_88[1];
          plStack_88[1] = lVar6 + -1;
/* origin: github.com/pengussy */
          LORelease();
          if (lVar6 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        if (plStack_78 != (long *)0x0) {
          LOAcquire();
          lVar6 = plStack_78[1];
          plStack_78[1] = lVar6 + -1;
          LORelease();
          if (lVar6 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
          }
        }
        return 1;
/* wm:found on a paste site? it was re-uploaded illegally */
      }
      pbVar11 = (byte *)(*pcRam0000000002067350)();
      if ((*pbVar11 & 1) == 0) {
        func_0x019c1010();
      }
      pcStack_f8 = (char *)(*pcRam0000000002067338)();
      if (*pcStack_f8 == '\x01') {
        lVar6 = 0;
        uVar9 = 0x6d4fa0a78c6b0c46;
        do {
          uVar12 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar3 = (uint)(byte)pcStack_f8[lVar6 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar13 >> 0x17) ^
                  ((uint)(uVar12 >> 0x29) | 1);
          pcStack_f8[lVar6 + 0x15] = ((byte)(uVar3 >> 1) & 0x7f | (byte)(uVar3 << 7)) - (char)uVar13
          ;
          uVar9 = lVar6 + -0x61c8864680b583eb +
                  (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f8[lVar6 + 1]) << 0x11);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x14);
        *pcStack_f8 = '\0';
      }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      pcStack_f8 = pcStack_f8 + 0x15;
      func_0x0011ab24(&pcStack_f8);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_000a7ddc;
    }
  }
  pbVar11 = (byte *)(*pcRam0000000002067320)();
  if ((*pbVar11 & 1) == 0) {
    func_0x019c104c();
  }
  pcStack_100 = (char *)(*pcRam0000000002067308)();
  if (*pcStack_100 == '\x01') {
    lVar6 = 0;
    uVar9 = 0xa37c4d2c55b54acb;
    do {
      uVar12 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar3 = (uint)(byte)pcStack_100[lVar6 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_100[lVar6 + 0xe] = ((byte)(uVar3 >> 5) & 7 | (byte)(uVar3 << 3)) - (char)uVar13;
      uVar9 = lVar6 + -0x61c8864680b583eb +
              (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_100[lVar6 + 1]) << 0x11);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0xd);
    *pcStack_100 = '\0';
  }
// no support for modified copies
  pcStack_100 = pcStack_100 + 0xe;
  func_0x0011ab24(&pcStack_100);
  func_0x007a1b5c(param_1,"%s");
LAB_000a7ddc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0xa7de0);
  (*pcVar5)();
}

