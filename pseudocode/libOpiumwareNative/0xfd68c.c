/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xfd68c:ebaf940b92
 */

undefined8 FUN_000fd68c(long *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  undefined8 ****ppppuStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  byte abStack_c8 [24];
  long lStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long lStack_98;
/* WM - reversing this took months of machine time */
  long *plStack_90;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar4 = func_0x00792168(param_1,0xffffd8ed,0);
  func_0x000fe52c(&lStack_98,uVar4);
  if (lStack_98 == 0) {
    pbVar6 = (byte *)(*pcRam000000000206c840)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019c7c38();
    }
    pcStack_108 = (char *)(*pcRam000000000206c828)();
    if (*pcStack_108 == '\x01') {
      lVar12 = 0;
      uVar7 = 0x1608bfeaab497140;
      do {
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar10 = (uint)(byte)pcStack_108[lVar12 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar10 = (uVar10 >> 4 & 0xf | uVar10 << 4) - (int)(uVar9 >> 0x17) ^
                 ((uint)(uVar8 >> 0x29) | 1);
        pcStack_108[lVar12 + 0x15] = ((byte)(uVar10 >> 4) & 0xf | (byte)(uVar10 << 4)) - (char)uVar9
        ;
        uVar7 = lVar12 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_108[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x14);
      *pcStack_108 = '\0';
    }
    pcStack_108 = pcStack_108 + 0x15;
// WM - watermarked copy - do not remove
    func_0x0011ab24(&pcStack_108);
    func_0x007a1b5c(param_1,"%s");
    goto LAB_000fe410;
  }
  iVar3 = func_0x00791e54(param_1,1);
  uVar10 = 1;
  if (iVar3 == 0) {
    uVar10 = 2;
  }
  plVar11 = (long *)(ulong)uVar10;
  iVar3 = func_0x00791e54(param_1,plVar11);
  if (iVar3 == 0) {
    pbVar6 = (byte *)(*pcRam000000000206c870)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019c7bfc();
    }
    pcStack_100 = (char *)(*pcRam000000000206c858)();
    if (*pcStack_100 == '\x01') {
      uVar10 = (byte)pcStack_100[1] ^ 0xe465efdd;
      uVar10 = (uVar10 >> 6 & 3 | uVar10 << 2) + 0xad1c151e;
      pcStack_100[8] = ((byte)(uVar10 >> 1) & 0x7f | (char)uVar10 * -0x80) ^ 0x1e;
      uVar7 = (((ulong)(byte)pcStack_100[1] ^ 0x1c7414f8a16fb7b1) << 0x11 | 0x38e8) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar10 = (uint)(byte)pcStack_100[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar10 = (uVar10 >> 6 & 3 | uVar10 << 2) -
               (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
/* wm:proprietary - see LICENSE - do not sell */
      pcStack_100[9] = ((byte)(uVar10 >> 1) & 0x7f | (char)uVar10 * -0x80) ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar10 = (uint)(byte)pcStack_100[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar10 = (uVar10 >> 6 & 3 | uVar10 << 2) -
               (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_100[10] = ((byte)(uVar10 >> 1) & 0x7f | (char)uVar10 * -0x80) ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar10 = (uint)(byte)pcStack_100[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar10 = (uVar10 >> 6 & 3 | uVar10 << 2) -
               (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_100[0xb] = ((byte)(uVar10 >> 1) & 0x7f | (char)uVar10 * -0x80) ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar10 = (uint)(byte)pcStack_100[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar10 = (uVar10 >> 6 & 3 | uVar10 << 2) -
               (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_100[0xc] = ((byte)(uVar10 >> 1) & 0x7f | (char)uVar10 * -0x80) ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar10 = (uint)(byte)pcStack_100[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar10 = (uVar10 >> 6 & 3 | uVar10 << 2) -
               (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_100[0xd] = ((byte)(uVar10 >> 1) & 0x7f | (char)uVar10 * -0x80) ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar10 = (uint)(byte)pcStack_100[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar10 = (uVar10 >> 6 & 3 | uVar10 << 2) -
               (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_100[0xe] = ((byte)(uVar10 >> 1) & 0x7f | (char)uVar10 * -0x80) ^ (byte)uVar8;
      *pcStack_100 = '\0';
    }
    pcStack_100 = pcStack_100 + 8;
    uVar4 = func_0x0011ab24(&pcStack_100);
    func_0x007a1ba8(param_1,plVar11,uVar4);
    goto LAB_000fe410;
  }
  iVar3 = func_0x00791be4(param_1,uVar10 + 1);
  if ((iVar3 < 1) || (iVar3 = func_0x00791be4(param_1,uVar10 + 1), iVar3 == 1)) {
    uStack_a0 = 0;
    uVar4 = func_0x00792368(param_1,plVar11,&uStack_a0);
    iVar3 = func_0x00791be4(param_1,uVar10 + 1);
    if (iVar3 < 1) {
      bVar2 = false;
    }
    else {
      iVar3 = func_0x00792220(param_1,uVar10 + 1);
      bVar2 = iVar3 != 0;
    }
    lStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    __ZNSt3__15mutex4lockEv(lStack_98 + 0x28);
    if (((*(char *)(lStack_98 + 0xb9) != '\x01') ||
        (uVar7 = (ulong)*(byte *)(lStack_98 + 0xbc), (*(byte *)(lStack_98 + 0xbc) & 1) != 0)) ||
       (lVar12 = *(long *)(lStack_98 + 0x18), lVar12 == 0)) {
      pbVar6 = (byte *)(*pcRam000000000206c8d0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c7bc0();
      }
      pcStack_f8 = (char *)(*pcRam000000000206c8b8)();
// WM - more drops soon - github.com/pengussy
      if (*pcStack_f8 == '\x01') {
        lVar12 = 0;
        uVar7 = 0xc99a12e29684f611;
        do {
          uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar10 = (uint)(byte)pcStack_f8[lVar12 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar10 = (uVar10 >> 2 & 0x3f | uVar10 << 6) - (int)(uVar9 >> 0x17);
          pcStack_f8[lVar12 + 0x15] =
               ((byte)(uVar10 >> 5) & 7 | (char)uVar10 * '\b') - ((byte)(uVar8 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar7 = lVar12 + -0x61c8864680b583eb +
                  (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[lVar12 + 1]) << 0x11);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x14);
        *pcStack_f8 = '\0';
      }
      pcStack_f8 = pcStack_f8 + 0x15;
      func_0x0011ab24(&pcStack_f8);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_000fe410;
    }
    plVar11 = *(long **)(lStack_98 + 0x20);
    if (plVar11 != (long *)0x0) {
      uVar7 = plVar11[1];
      plVar11[1] = uVar7 + 1;
    }
    lStack_b0 = lVar12;
    plStack_a8 = plVar11;
    __ZNSt3__15mutex6unlockEv(uVar7,lStack_98 + 0x28);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    uVar7 = uStack_a0;
    if (0x7ffffffffffffff6 < uStack_a0) {
      FUN_0000aa50();
      goto LAB_000fe410;
    }
    if (uStack_a0 < 0x17) {
      uStack_d0 = CONCAT17((char)uStack_a0,(undefined7)uStack_d0);
      ppppuVar5 = &ppppuStack_e0;
    }
    else {
      uVar8 = (uStack_a0 & 0x7ffffffffffffff8) + 8;
      uVar9 = 0x19;
      if (uVar8 != 0x18) {
        uVar9 = uVar8;
      }
      ppppuVar5 = (undefined8 ****)__Znwm(uVar9);
      uStack_d0 = uVar9 | 0x8000000000000000;
      uStack_d8 = uVar7;
      ppppuStack_e0 = ppppuVar5;
    }
    _memmove(ppppuVar5,uVar4,uVar7);
    *(undefined1 *)((long)ppppuVar5 + uVar7) = 0;
    plStack_70 = (long *)0x0;
    func_0x00289174(abStack_c8,lVar12,&ppppuStack_e0,bVar2,alStack_88);
    if (plStack_70 == alStack_88) {
      lVar12 = 0x20;
LAB_000fd864:
      (**(code **)(*plStack_70 + lVar12))();
    }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    else if (plStack_70 != (long *)0x0) {
      lVar12 = 0x28;
      goto LAB_000fd864;
    }
    if ((long)uStack_d0 < 0) {
      __ZdlPv(ppppuStack_e0);
    }
    if ((abStack_c8[0] & 1) == 0) {
      pbVar6 = (byte *)(*pcRam000000000206c900)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c7b84();
      }
      pcStack_f0 = (char *)(*pcRam000000000206c8e8)();
      if (*pcStack_f0 == '\x01') {
        lVar12 = 0;
        uVar7 = 0xda303a6b91fac9ae;
        do {
          uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar10 = (uint)(byte)pcStack_f0[lVar12 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar10 = (uVar10 >> 1 & 0x7f | uVar10 << 7) - (int)(uVar9 >> 0x17);
          pcStack_f0[lVar12 + 0x20] =
               ((byte)(uVar10 >> 7) & 1 | (char)uVar10 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
               (byte)uVar9;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          uVar7 = lVar12 + -0x61c8864680b583eb +
                  (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f0[lVar12 + 1]) << 0x11);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x1f);
        *pcStack_f0 = '\0';
      }
      pcStack_f0 = pcStack_f0 + 0x20;
      func_0x0011ab24(&pcStack_f0);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_000fe410;
    }
    if (plVar11 != (long *)0x0) {
      LOAcquire();
      lVar12 = plVar11[1];
      plVar11[1] = lVar12 + -1;
      LORelease();
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
/* wm:stripping the watermark breaks the license */
    if (plStack_90 != (long *)0x0) {
      LOAcquire();
      lVar12 = plStack_90[1];
      plStack_90[1] = lVar12 + -1;
      LORelease();
      if (lVar12 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
      }
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
      return 0;
    }
    ___stack_chk_fail();
    param_1 = plStack_90;
  }
  pbVar6 = (byte *)(*pcRam000000000206c8a0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019c7b48();
  }
  pcStack_e8 = (char *)(*pcRam000000000206c888)();
  if (*pcStack_e8 == '\x01') {
    uVar10 = (byte)pcStack_e8[1] ^ 0xfe88536f;
    uVar10 = (uVar10 >> 3 & 0x1f | uVar10 << 5) + 0x64085fe ^ 0x5c3e6f;
    pcStack_e8[9] = ((byte)(uVar10 >> 7) & 1 | (byte)(uVar10 << 1)) + 0x54;
    uVar7 = (((ulong)(byte)pcStack_e8[1] ^ 0x66dce309d24c980f) << 0x11 | 0xcdb9) +
/*  proprietary - see LICENSE - do not sell  */
            0x9e3779b97f4a7c15;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar10 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar10 = (uVar10 >> 3 & 0x1f | uVar10 << 5) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1)
    ;
    pcStack_e8[10] = ((byte)(uVar10 >> 7) & 1 | (byte)(uVar10 << 1)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar10 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar10 = (uVar10 >> 3 & 0x1f | uVar10 << 5) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1)
    ;
    pcStack_e8[0xb] = ((byte)(uVar10 >> 7) & 1 | (byte)(uVar10 << 1)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar10 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar10 = (uVar10 >> 3 & 0x1f | uVar10 << 5) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1)
    ;
    pcStack_e8[0xc] = ((byte)(uVar10 >> 7) & 1 | (byte)(uVar10 << 1)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar10 = (uint)(byte)pcStack_e8[5] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar10 = (uVar10 >> 3 & 0x1f | uVar10 << 5) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1)
    ;
    pcStack_e8[0xd] = ((byte)(uVar10 >> 7) & 1 | (byte)(uVar10 << 1)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar10 = (uint)(byte)pcStack_e8[6] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar10 = (uVar10 >> 3 & 0x1f | uVar10 << 5) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1)
    ;
    pcStack_e8[0xe] = ((byte)(uVar10 >> 7) & 1 | (byte)(uVar10 << 1)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar10 = (uint)(byte)pcStack_e8[7] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar10 = (uVar10 >> 3 & 0x1f | uVar10 << 5) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1)
    ;
    pcStack_e8[0xf] = ((byte)(uVar10 >> 7) & 1 | (byte)(uVar10 << 1)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar10 = (uint)(byte)pcStack_e8[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar10 = (uVar10 >> 3 & 0x1f | uVar10 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1)
    ;
    pcStack_e8[0x10] = ((byte)(uVar10 >> 7) & 1 | (byte)(uVar10 << 1)) - (char)uVar8;
    *pcStack_e8 = '\0';
  }
  pcStack_e8 = pcStack_e8 + 9;
  uVar4 = func_0x0011ab24(&pcStack_e8);
  func_0x007a1ba8(param_1,(int)plVar11 + 1,uVar4);
LAB_000fe410:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xfe414);
  (*pcVar1)();
}

