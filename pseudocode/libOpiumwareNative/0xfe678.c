/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xfe678:2854f8cde9
   =========================================================================== */

long FUN_000fe678(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  char *pcStack_e0;
  long lStack_d8;
  long *plStack_d0;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  long lStack_c8;
  long lStack_c0;
  byte bStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  byte bStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar4 = func_0x00792168(param_1,0xffffd8ed,0);
  func_0x000fe52c(&lStack_78,uVar4);
  if (lStack_78 == 0) {
    iVar3 = func_0x00791be4(param_1,1);
    if (iVar3 == 7) {
      func_0x007932d0(param_1,0);
      pbVar5 = (byte *)(*pcRam000000000206c930)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019c7c74();
/*  more drops soon - github.com/pengussy  */
      }
      pcStack_e0 = (char *)(*pcRam000000000206c918)();
      if (*pcStack_e0 == '\x01') {
        uVar1 = (byte)pcStack_e0[1] ^ 0x3b0e2a4;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x53de7d03;
        pcStack_e0[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 0x67;
        uVar6 = (((ulong)(byte)pcStack_e0[1] ^ 0x40d338c8bc0d4125) << 0x11 | 0x81a6) +
                0x9e3779b97f4a7c15;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[2] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_e0[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[3] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_e0[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[4] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_e0[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[5] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_e0[0xf] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[6] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_e0[0x10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[7] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_e0[0x11] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[8] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_e0[0x12] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar1 = (uint)(byte)pcStack_e0[9] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_e0[0x13] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[10] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17))
        ;
        pcStack_e0[0x14] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar7;
        *pcStack_e0 = '\0';
      }
      pcStack_e0 = pcStack_e0 + 0xb;
      uVar4 = func_0x0011ab24(&pcStack_e0);
      func_0x00794260(param_1,1,uVar4);
    }
  }
  else {
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    __ZNSt3__15mutex4lockEv(lStack_78 + 0x28);
    if (((*(byte *)(lStack_78 + 0xba) & 1) == 0) &&
       (lVar10 = *(long *)(lStack_78 + 0x18), lVar10 != 0)) {
      bVar2 = *(byte *)(lStack_78 + 0xbc);
      if ((bVar2 & 1) == 0) {
        *(undefined1 *)(lStack_78 + 0xbc) = 1;
        lVar11 = *(long *)(lStack_78 + 0x20);
        if (lVar11 != 0) {
          *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
/* wm:no support for modified copies */
        }
      }
      else {
        lVar11 = 0;
        lVar10 = 0;
      }
      bVar2 = bVar2 ^ 1;
      __ZNSt3__15mutex6unlockEv(lStack_78 + 0x28);
      plVar9 = plStack_70;
      lStack_b0 = lStack_78;
      plStack_a8 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plStack_70[1] = plStack_70[1] + 1;
      }
      uStack_88 = 0;
      plStack_80 = (long *)0x0;
      lStack_d8 = lStack_78;
      plStack_d0 = plStack_70;
      if (plStack_70 != (long *)0x0) {
/* more drops soon - github.com/pengussy - github.com/pengussy */
        plStack_70[1] = plStack_70[1] + 1;
      }
      uStack_a0 = 0;
      plStack_98 = (long *)0x0;
      plStack_50 = (long *)0x0;
      lStack_c8 = lVar10;
      lStack_c0 = lVar11;
      bStack_b8 = bVar2;
      bStack_90 = bVar2;
      plStack_50 = (long *)__Znwm(0x30);
      *plStack_50 = (long)&UNK_01dbf710;
      plStack_50[1] = lStack_78;
      plStack_50[2] = (long)plVar9;
      if (plVar9 != (long *)0x0) {
        plVar9[1] = plVar9[1] + 1;
      }
      plStack_50[3] = lVar10;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      plStack_50[4] = lVar11;
      lStack_c8 = 0;
      lStack_c0 = 0;
      *(byte *)(plStack_50 + 5) = bVar2;
      lVar10 = func_0x001e7c24(param_1,alStack_68);
      if (plStack_50 == alStack_68) {
        lVar11 = 0x20;
LAB_000fecc8:
        (**(code **)(*plStack_50 + lVar11))();
      }
      else if (plStack_50 != (long *)0x0) {
        lVar11 = 0x28;
        goto LAB_000fecc8;
      }
      if (plVar9 != (long *)0x0) {
        LOAcquire();
        lVar11 = plVar9[1];
        plVar9[1] = lVar11 + -1;
        LORelease();
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        LOAcquire();
        lVar11 = plStack_98[1];
        plStack_98[1] = lVar11 + -1;
        LORelease();
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        LOAcquire();
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        lVar11 = plStack_a8[1];
        plStack_a8[1] = lVar11 + -1;
        LORelease();
        if (lVar11 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        LOAcquire();
        lVar11 = plStack_80[1];
        plStack_80[1] = lVar11 + -1;
        LORelease();
        if (lVar11 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      goto LAB_000feb88;
    }
    __ZNSt3__15mutex6unlockEv(lStack_78 + 0x28);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  lVar10 = 0;
LAB_000feb88:
  if (plStack_70 != (long *)0x0) {
    LOAcquire();
    lVar11 = plStack_70[1];
    plStack_70[1] = lVar11 + -1;
    LORelease();
    if (lVar11 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return lVar10;
  }
  uVar4 = ___stack_chk_fail();
  func_0x000154e0(&lStack_78);
/* found on a paste site? it was re-uploaded illegally */
  uVar4 = __Unwind_Resume(uVar4);
  func_0x000154e0(&uStack_88);
  func_0x000154e0(&lStack_78);
  __Unwind_Resume(uVar4);
  lVar10 = __Unwind_Resume();
  plVar9 = *(long **)(lVar10 + 0x18);
  if (plVar9 != (long *)0x0) {
    LOAcquire();
    lVar11 = plVar9[1];
    plVar9[1] = lVar11 + -1;
    LORelease();
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = *(long **)(lVar10 + 8);
  if (plVar9 != (long *)0x0) {
    LOAcquire();
    lVar11 = plVar9[1];
    plVar9[1] = lVar11 + -1;
    LORelease();
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
/* wm:reversing this took months of machine time */
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      return lVar10;
    }
  }
  return lVar10;
}

