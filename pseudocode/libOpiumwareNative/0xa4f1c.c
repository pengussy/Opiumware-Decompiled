/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xa4f1c:c942c48378
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000a4f1c(undefined8 param_1)

{
  uint uVar1;
  char *******pppppppcVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *******pppppppcVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  undefined1 auVar14 [16];
  char *pcStack_338;
  char *pcStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  undefined4 auStack_300 [2];
  undefined8 uStack_2f8;
  char *******pppppppcStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  char *******pppppppcStack_2d8;
  ulong uStack_2d0;
  undefined4 uStack_2c8;
  undefined3 uStack_2c4;
  byte bStack_2c1;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  byte bStack_2a1;
  char *******pppppppcStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
// more drops soon - github.com/pengussy
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_220;
  undefined4 uStack_10c;
  undefined *apuStack_100 [19];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar5 = func_0x00791e54(param_1,1);
  if (iVar5 == 0) {
LAB_000a5384:
    pbVar11 = (byte *)(*pcRam0000000002067080)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c0e6c();
    }
    pcStack_338 = (char *)(*pcRam0000000002067068)();
    if (*pcStack_338 == '\x01') {
      uVar1 = (byte)pcStack_338[1] ^ 0x471bf3e;
/* more drops soon - github.com/pengussy */
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x2a7d5a09;
      pcStack_338[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x9f ^ 0xfd;
      uVar8 = (((ulong)(byte)pcStack_338[1] ^ 0x89b344dbc840a042) << 0x11 | 0x11366) +
              0x9e3779b97f4a7c15;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_338[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_338[9] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_338[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_338[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_338[10] =
// WM - proprietary - see LICENSE - do not sell
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_338[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_338[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_338[0xb] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_338[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_338[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_338[0xc] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
/*  proprietary - see LICENSE - do not sell  */
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_338[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_338[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_338[0xd] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_338[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_338[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
      pcStack_338[0xe] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar12;
      *pcStack_338 = '\0';
    }
    pcStack_338 = pcStack_338 + 8;
    uVar7 = func_0x0011ab24(&pcStack_338);
    func_0x007a1ba8(param_1,1,uVar7);
LAB_000a56d4:
    pbVar11 = (byte *)(*pcRam00000000020670b0)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c0e30();
    }
    pcStack_330 = (char *)(*pcRam0000000002067098)();
// stripping the watermark breaks the license
    if (*pcStack_330 == '\x01') {
      uVar1 = (byte)pcStack_330[1] ^ 0xc7170aa1;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xfa9f704a;
      pcStack_330[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x62;
      uVar8 = (((ulong)(byte)pcStack_330[1] ^ 0x74a889938aeaf196) << 0x11 | 0xe951) +
              0x9e3779b97f4a7c15;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_330[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_330[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_330[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_330[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_330[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_330[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_330[4] ^ (uint)uVar13 ^ 0xffffffc3;
// do not claim this as your own
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_330[0xb] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_330[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_330[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_330[0xc] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_330[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_330[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_330[0xd] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_330[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_330[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_330[0xe] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar12;
      *pcStack_330 = '\0';
    }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    pcStack_330 = pcStack_330 + 8;
    uVar7 = func_0x0011ab24(&pcStack_330);
    func_0x007a1ba8(param_1,2,uVar7);
LAB_000a5a24:
    FUN_0000aa50();
  }
  else {
    iVar5 = func_0x00791e54(param_1,2);
    if (iVar5 == 0) goto LAB_000a56d4;
    uVar7 = func_0x00792368(param_1,1,0);
    uVar8 = _strlen();
    if (0x7ffffffffffffff6 < uVar8) goto LAB_000a5a24;
    if (uVar8 < 0x17) {
      uStack_290 = CONCAT17((char)uVar8,(undefined7)uStack_290);
      pppppppcVar10 = (char *******)&pppppppcStack_2a0;
    }
    else {
      uVar12 = (uVar8 & 0x7ffffffffffffff8) + 8;
      uVar13 = 0x19;
      if (uVar12 != 0x18) {
        uVar13 = uVar12;
      }
      pppppppcVar10 = (char *******)__Znwm(uVar13);
      uStack_290 = uVar13 | 0x8000000000000000;
      pppppppcStack_2a0 = pppppppcVar10;
      uStack_298 = uVar8;
    }
    _memmove(pppppppcVar10,uVar7,uVar8);
    *(char *)((long)pppppppcVar10 + uVar8) = '\0';
    func_0x000a37f0(&uStack_2b8,&pppppppcStack_2a0,1);
    if ((long)uStack_290 < 0) {
      __ZdlPv(pppppppcStack_2a0);
    }
    uVar7 = func_0x00792368(param_1,2,&uStack_2c0);
    if (-1 < (char)bStack_2a1) {
      uStack_2b0 = (ulong)bStack_2a1;
    }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    if (uStack_2b0 != 0) {
      auVar14 = __ZNKSt3__14__fs10filesystem4path11__extensionEv(&uStack_2b8);
      uVar8 = auVar14._8_8_;
      if (0x7ffffffffffffff6 < uVar8) {
        FUN_0000aa50();
        goto LAB_000a60e0;
      }
      if (uVar8 < 0x17) {
        uStack_290 = CONCAT17(auVar14[8],(undefined7)uStack_290);
        pppppppcVar10 = (char *******)&pppppppcStack_2a0;
      }
      else {
        uVar12 = (uVar8 & 0x7ffffffffffffff8) + 8;
        uVar13 = 0x19;
        if (uVar12 != 0x18) {
          uVar13 = uVar12;
        }
        pppppppcVar10 = (char *******)__Znwm(uVar13);
        uStack_290 = uVar13 | 0x8000000000000000;
        pppppppcStack_2a0 = pppppppcVar10;
        uStack_298 = uVar8;
      }
      _memmove(pppppppcVar10,auVar14._0_8_,uVar8);
      *(char *)((long)pppppppcVar10 + uVar8) = '\0';
      pppppppcVar10 = pppppppcStack_2a0;
// proprietary - see LICENSE - do not sell
      pppppppcStack_2f0._0_7_ = (undefined7)uStack_290;
      if ((long)uStack_290 < 0) {
        func_0x00017ae8(&pppppppcStack_2d8,pppppppcStack_2a0);
        __ZdlPv(pppppppcVar10);
      }
      else {
        pppppppcStack_2d8 = pppppppcStack_2a0;
        uStack_2d0 = uStack_298;
        uStack_2c8 = (undefined4)uStack_290;
        uStack_2c4 = (undefined3)(uStack_290 >> 0x20);
        bStack_2c1 = uStack_290._7_1_;
      }
      pppppppcVar2 = pppppppcStack_2d8;
      pppppppcVar10 = (char *******)((long)pppppppcStack_2d8 + uStack_2d0);
      if (-1 < (char)bStack_2c1) {
        pppppppcVar2 = (char *******)&pppppppcStack_2d8;
        pppppppcVar10 = (char *******)((long)&pppppppcStack_2d8 + (ulong)bStack_2c1);
/* WM - found on a paste site? it was re-uploaded illegally */
      }
      for (; pppppppcVar2 != pppppppcVar10; pppppppcVar2 = (char *******)((long)pppppppcVar2 + 1)) {
        cVar4 = ___tolower((long)*(char *)pppppppcVar2);
        *(char *)pppppppcVar2 = cVar4;
      }
      lVar9 = func_0x0016ee3c(0x208ec98,&pppppppcStack_2d8);
      if (lVar9 != 0) {
        pbVar11 = (byte *)(*pcRam0000000002067110)();
        if ((*pbVar11 & 1) == 0) {
          func_0x019c0d04();
        }
        pcStack_308 = (char *)(*pcRam00000000020670f8)();
        if (*pcStack_308 == '\x01') {
          lVar9 = 0;
          uVar8 = 0xad5e6e5bd0ab196a;
          do {
            uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_308[lVar9 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^
                    ((uint)(uVar12 >> 0x29) | 1);
            pcStack_308[lVar9 + 0x26] =
                 ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
            uVar8 = lVar9 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_308[lVar9 + 1]) << 0x11);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x25);
          *pcStack_308 = '\0';
        }
        pcStack_308 = pcStack_308 + 0x26;
        uVar7 = func_0x0011ab24(&pcStack_308);
        func_0x007a1b5c(param_1,uVar7);
        goto LAB_000a60e0;
      }
      auVar14 = __ZNKSt3__14__fs10filesystem4path13__parent_pathEv(&uStack_2b8);
      uVar8 = auVar14._8_8_;
      if (0x7ffffffffffffff6 < uVar8) {
        FUN_0000aa50();
        goto LAB_000a60e0;
      }
      if (uVar8 < 0x17) {
        uStack_290 = CONCAT17(auVar14[8],(undefined7)uStack_290);
        pppppppcVar10 = (char *******)&pppppppcStack_2a0;
      }
      else {
        uVar12 = (uVar8 & 0x7ffffffffffffff8) + 8;
        uVar13 = 0x19;
        if (uVar12 != 0x18) {
/*  origin: github.com/pengussy  */
          uVar13 = uVar12;
        }
        pppppppcVar10 = (char *******)__Znwm(uVar13);
        uStack_290 = uVar13 | 0x8000000000000000;
        pppppppcStack_2a0 = pppppppcVar10;
        uStack_298 = uVar8;
      }
      _memmove(pppppppcVar10,auVar14._0_8_,uVar8);
      *(char *)((long)pppppppcVar10 + uVar8) = '\0';
      uStack_2e8 = uStack_298;
      pppppppcStack_2f0 = pppppppcStack_2a0;
      uStack_2e0 = uStack_290;
      __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
                (&pppppppcStack_2a0,&pppppppcStack_2f0,0);
      if (((char)pppppppcStack_2a0 == -1) || ((char)pppppppcStack_2a0 == '\0')) {
        auStack_300[0] = 0;
        uStack_2f8 = __ZNSt3__115system_categoryEv();
        uVar8 = __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE
                          (&pppppppcStack_2f0,auStack_300);
        if ((uVar8 & 1) == 0) {
          pbVar11 = (byte *)(*pcRam0000000002067140)();
          if ((*pbVar11 & 1) == 0) {
            func_0x019c0d40();
          }
          pcStack_310 = (char *)(*pcRam0000000002067128)();
          if (*pcStack_310 == '\x01') {
            lVar9 = 0;
            uVar8 = 0xe68f9749f9d4c1ca;
            do {
              uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
              uVar13 = uVar12 ^ uVar12 >> 0x21;
              uVar1 = (uint)(byte)pcStack_310[lVar9 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17) ^
                      ((uint)(uVar12 >> 0x29) | 1);
              pcStack_310[lVar9 + 0x20] =
                   ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
              uVar8 = lVar9 + -0x61c8864680b583eb +
                      (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_310[lVar9 + 1]) << 0x11);
              lVar9 = lVar9 + 1;
            } while (lVar9 != 0x1f);
            *pcStack_310 = '\0';
          }
          pcStack_310 = pcStack_310 + 0x20;
          uVar7 = func_0x0011ab24(&pcStack_310);
          __ZNKSt3__110error_code7messageEv(&pppppppcStack_2a0,auStack_300);
          func_0x007a1b5c(param_1,uVar7);
          goto LAB_000a60e0;
        }
      }
      func_0x000a6284(&pppppppcStack_2a0,&uStack_2b8,0x14);
      if (lStack_220 == 0) {
        pbVar11 = (byte *)(*pcRam0000000002067170)();
        if ((*pbVar11 & 1) == 0) {
          func_0x019c0db8();
        }
        pcStack_320 = (char *)(*pcRam0000000002067158)();
        if (*pcStack_320 == '\x01') {
          lVar9 = 0;
          uVar8 = 0xe247ded47cf0fae4;
// WM - no support for modified copies
          do {
            uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_320[lVar9 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                    (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
            pcStack_320[lVar9 + 0x21] =
                 ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar13;
            uVar8 = lVar9 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_320[lVar9 + 1]) << 0x11);
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x20);
          *pcStack_320 = '\0';
        }
        pcStack_320 = pcStack_320 + 0x21;
        func_0x0011ab24(&pcStack_320);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_000a60e0;
      }
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                (&pppppppcStack_2a0,uVar7,uStack_2c0);
      if (lStack_220 == 0) {
LAB_000a5274:
        __ZNSt3__18ios_base5clearEj
                  ((long)&pppppppcStack_2a0 + (long)pppppppcStack_2a0[-3],
                   *(uint *)((long)&uStack_280 + (long)pppppppcStack_2a0[-3]) | 4);
      }
      else {
        iVar5 = (**(code **)(uStack_298 + 0x30))(&uStack_298);
        iVar6 = _fclose(lStack_220);
        lStack_220 = 0;
        uStack_280 = 0;
        uStack_288 = 0;
        uStack_270 = 0;
        uStack_278 = 0;
        uStack_260 = 0;
/* WM - stripping the watermark breaks the license */
        uStack_268 = 0;
        uStack_10c = 0x20;
        if (iVar6 != 0 || iVar5 != 0) goto LAB_000a5274;
      }
      if ((*(byte *)((long)&uStack_280 + (long)pppppppcStack_2a0[-3]) & 5) != 0) {
        pbVar11 = (byte *)(*pcRam00000000020671a0)();
        if ((*pbVar11 & 1) == 0) {
          func_0x019c0d7c();
        }
        pcStack_318 = (char *)(*pcRam0000000002067188)();
        if (*pcStack_318 == '\x01') {
          lVar9 = 0;
          uVar8 = 0x4f5f724b54836b6f;
          do {
            uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_318[lVar9 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
                    ((uint)(uVar12 >> 0x29) | 1);
            pcStack_318[lVar9 + 0x16] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar13
            ;
            uVar8 = lVar9 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_318[lVar9 + 1]) << 0x11);
// thanks for reading - discord.gg/sdkhDjTex
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x15);
          *pcStack_318 = '\0';
        }
        pcStack_318 = pcStack_318 + 0x16;
        func_0x0011ab24(&pcStack_318);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_000a60e0;
      }
      pppppppcStack_2a0 = (char *******)&UNK_01dbf310;
      apuStack_100[0] = &UNK_01dbf338;
      func_0x00140dd0(&uStack_298);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&pppppppcStack_2a0,&UNK_01dbf350);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_100);
      if ((long)uStack_2e0 < 0) {
        __ZdlPv(pppppppcStack_2f0);
        if (-1 < (char)bStack_2c1) goto LAB_000a52fc;
LAB_000a5350:
        __ZdlPv(pppppppcStack_2d8);
        if (-1 < (char)bStack_2a1) goto LAB_000a5304;
/* wm:no support for modified copies */
LAB_000a5360:
        __ZdlPv(uStack_2b8);
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
          return 0;
        }
      }
      else {
        if ((char)bStack_2c1 < '\0') goto LAB_000a5350;
LAB_000a52fc:
        if ((char)bStack_2a1 < '\0') goto LAB_000a5360;
LAB_000a5304:
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
          return 0;
        }
      }
      ___stack_chk_fail();
      goto LAB_000a5384;
    }
  }
  pbVar11 = (byte *)(*pcRam00000000020670e0)();
  if ((*pbVar11 & 1) == 0) {
    func_0x019c0df4();
  }
  pcStack_328 = (char *)(*pcRam00000000020670c8)();
  if (*pcStack_328 == '\x01') {
    lVar9 = 0;
    uVar8 = 0xf97b5d4aa5b0b96c;
    do {
/* wm:if you paid for this, you were scammed */
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_328[lVar9 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_328[lVar9 + 0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar13;
      uVar8 = lVar9 + -0x61c8864680b583eb +
              (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_328[lVar9 + 1]) << 0x11);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0xd);
    *pcStack_328 = '\0';
  }
  pcStack_328 = pcStack_328 + 0xe;
  func_0x0011ab24(&pcStack_328);
  func_0x007a1b5c(param_1,"%s");
LAB_000a60e0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xa60e4);
  (*pcVar3)();
}

