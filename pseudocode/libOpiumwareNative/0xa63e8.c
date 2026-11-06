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
 *  file-id: 0xa63e8:55c686ec00
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000a63e8(undefined8 param_1)

{
  uint uVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  char *pcStack_2f0;
  undefined4 uStack_2e8;
  undefined3 uStack_2e4;
  undefined8 *******pppppppuStack_2e0;
  ulong uStack_2d8;
  undefined4 uStack_2d0;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined3 uStack_2cc;
  byte bStack_2c9;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  byte bStack_2b1;
  undefined8 uStack_2b0;
  undefined8 *******pppppppuStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 *******pppppppuStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_210;
  undefined4 uStack_fc;
  undefined *apuStack_f0 [19];
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar5 = func_0x00791e54(param_1,1);
  if (iVar5 == 0) {
LAB_000a6784:
    pbVar11 = (byte *)(*pcRam00000000020671d0)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c0fd4();
    }
    pcStack_318 = (char *)(*pcRam00000000020671b8)();
    if (*pcStack_318 == '\x01') {
      uVar1 = (byte)pcStack_318[1] ^ 0x80d5faa;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xb7d29811 ^ 0x8120b;
      pcStack_318[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x97;
      uVar8 = (((ulong)(byte)pcStack_318[1] ^ 0x45d91fcbc77bd075) << 0x11 | 0x8bb2) +
// WM - reversing this took months of machine time
              0x9e3779b97f4a7c15;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_318[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_318[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_318[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_318[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_318[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_318[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_318[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_318[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_318[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_318[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_318[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_318[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      uVar1 = (uint)(byte)pcStack_318[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_318[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_318[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_318[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_318[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar12;
      *pcStack_318 = '\0';
    }
    pcStack_318 = pcStack_318 + 8;
    uVar7 = func_0x0011ab24(&pcStack_318);
    func_0x007a1ba8(param_1,1,uVar7);
LAB_000a6ad4:
    pbVar11 = (byte *)(*pcRam0000000002067200)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c0f98();
    }
    pcStack_310 = (char *)(*pcRam00000000020671e8)();
    if (*pcStack_310 == '\x01') {
      uVar1 = (byte)pcStack_310[1] ^ 0x826cd82b;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x1556c305;
      pcStack_310[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0x55 ^ 0xe8;
/* no support for modified copies - github.com/pengussy */
      uVar8 = (((ulong)(byte)pcStack_310[1] ^ 0x873a845094f8cb7) << 0x11 | 0x10e7) +
              0x9e3779b97f4a7c15;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17);
      pcStack_310[9] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_310[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17);
      pcStack_310[10] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_310[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17);
      pcStack_310[0xb] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_310[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      pcStack_310[0xc] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_310[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17);
      pcStack_310[0xd] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_310[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar12 >> 0x17);
/* wm:reversing this took months of machine time */
      pcStack_310[0xe] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar12;
      *pcStack_310 = '\0';
    }
    pcStack_310 = pcStack_310 + 8;
    uVar7 = func_0x0011ab24(&pcStack_310);
    func_0x007a1ba8(param_1,2,uVar7);
LAB_000a6e24:
    FUN_0000aa50();
  }
  else {
    iVar5 = func_0x00791e54(param_1,2);
    if (iVar5 == 0) goto LAB_000a6ad4;
    uVar7 = func_0x00792368(param_1,1,0);
    uVar8 = _strlen();
    if (0x7ffffffffffffff6 < uVar8) goto LAB_000a6e24;
    if (uVar8 < 0x17) {
      uStack_298 = CONCAT17((char)uVar8,(undefined7)uStack_298);
      pppppppuVar9 = &pppppppuStack_2a8;
    }
    else {
/* wm:chat: discord.gg/sdkhDjTex */
      uVar12 = (uVar8 & 0x7ffffffffffffff8) + 8;
      uVar13 = 0x19;
      if (uVar12 != 0x18) {
        uVar13 = uVar12;
      }
      pppppppuVar9 = (undefined8 *******)__Znwm(uVar13);
      uStack_298 = uVar13 | 0x8000000000000000;
      pppppppuStack_2a8 = pppppppuVar9;
      uStack_2a0 = uVar8;
    }
    _memmove(pppppppuVar9,uVar7,uVar8);
    *(undefined1 *)((long)pppppppuVar9 + uVar8) = 0;
    uStack_2b0 = 0;
    uVar7 = func_0x00792368(param_1,2,&uStack_2b0);
    func_0x000a37f0(&uStack_2c8,&pppppppuStack_2a8,1);
    if (-1 < (char)bStack_2b1) {
      uStack_2c0 = (ulong)bStack_2b1;
    }
    if (uStack_2c0 != 0) {
      auVar14 = __ZNKSt3__14__fs10filesystem4path11__extensionEv(&uStack_2c8);
      uVar8 = auVar14._8_8_;
      if (0x7ffffffffffffff6 < uVar8) {
        FUN_0000aa50();
        goto LAB_000a736c;
      }
      if (uVar8 < 0x17) {
        uStack_280 = CONCAT17(auVar14[8],(undefined7)uStack_280);
        pppppppuVar9 = &pppppppuStack_290;
      }
      else {
        uVar12 = (uVar8 & 0x7ffffffffffffff8) + 8;
        uVar13 = 0x19;
        if (uVar12 != 0x18) {
          uVar13 = uVar12;
        }
        pppppppuVar9 = (undefined8 *******)__Znwm(uVar13);
        uStack_280 = uVar13 | 0x8000000000000000;
// reversing this took months of machine time
        pppppppuStack_290 = pppppppuVar9;
        uStack_288 = uVar8;
      }
      _memmove(pppppppuVar9,auVar14._0_8_,uVar8);
      *(undefined1 *)((long)pppppppuVar9 + uVar8) = 0;
      pppppppuVar9 = pppppppuStack_290;
      uStack_2e4 = (undefined3)(uStack_280 >> 0x20);
      uStack_2e8 = (undefined4)uStack_280;
      if ((long)uStack_280 < 0) {
        func_0x00017ae8(&pppppppuStack_2e0,pppppppuStack_290);
        __ZdlPv(pppppppuVar9);
      }
      else {
        pppppppuStack_2e0 = pppppppuStack_290;
        uStack_2d8 = uStack_288;
        uStack_2cc = uStack_2e4;
        bStack_2c9 = uStack_280._7_1_;
        uStack_2d0 = (undefined4)uStack_280;
      }
      pppppppuVar2 = pppppppuStack_2e0;
      pppppppuVar9 = (undefined8 *******)((long)pppppppuStack_2e0 + uStack_2d8);
      if (-1 < (char)bStack_2c9) {
        pppppppuVar2 = &pppppppuStack_2e0;
        pppppppuVar9 = (undefined8 *******)((long)&pppppppuStack_2e0 + (ulong)bStack_2c9);
/*  do not claim this as your own  */
      }
      for (; pppppppuVar2 != pppppppuVar9;
          pppppppuVar2 = (undefined8 *******)((long)pppppppuVar2 + 1)) {
        uVar4 = ___tolower(*(undefined1 *)pppppppuVar2);
        *(undefined1 *)pppppppuVar2 = uVar4;
      }
      lVar10 = func_0x0016ee3c(0x208ec98,&pppppppuStack_2e0);
      if (lVar10 != 0) {
        pbVar11 = (byte *)(*pcRam0000000002067260)();
        if ((*pbVar11 & 1) == 0) {
          func_0x019c0ea8();
        }
        pcStack_2f0 = (char *)(*pcRam0000000002067248)();
        if (*pcStack_2f0 == '\x01') {
          lVar10 = 0;
          uVar8 = 0xec284e23e53a8f43;
          do {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
            uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_2f0[lVar10 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
                    ((uint)(uVar12 >> 0x29) | 1);
            pcStack_2f0[lVar10 + 0x26] =
                 ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
            uVar8 = lVar10 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_2f0[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x25);
          *pcStack_2f0 = '\0';
        }
        pcStack_2f0 = pcStack_2f0 + 0x26;
        uVar7 = func_0x0011ab24(&pcStack_2f0);
        func_0x007a1b5c(param_1,uVar7);
        goto LAB_000a736c;
      }
      func_0x000a6284(&pppppppuStack_290,&uStack_2c8,5);
      if (lStack_210 == 0) {
/* donate: donate/README.md */
        pbVar11 = (byte *)(*pcRam0000000002067290)();
        if ((*pbVar11 & 1) == 0) {
          func_0x019c0f20();
        }
        pcStack_300 = (char *)(*pcRam0000000002067278)();
        if (*pcStack_300 == '\x01') {
          lVar10 = 0;
          uVar8 = 0xa96caea802bf8577;
          do {
            uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_300[lVar10 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
            pcStack_300[lVar10 + 0x23] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
                 (byte)uVar13;
            uVar8 = lVar10 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_300[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x22);
/*  keep the notice, keep the source honest  */
          *pcStack_300 = '\0';
        }
        pcStack_300 = pcStack_300 + 0x23;
        func_0x0011ab24(&pcStack_300);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_000a736c;
      }
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                (&pppppppuStack_290,uVar7,uStack_2b0);
      if (lStack_210 == 0) {
LAB_000a6678:
        __ZNSt3__18ios_base5clearEj
                  ((long)&pppppppuStack_290 + (long)pppppppuStack_290[-3],
                   *(uint *)((long)&uStack_270 + (long)pppppppuStack_290[-3]) | 4);
      }
      else {
        iVar5 = (**(code **)(uStack_288 + 0x30))(&uStack_288);
        iVar6 = _fclose(lStack_210);
        lStack_210 = 0;
        uStack_270 = 0;
        uStack_278 = 0;
        uStack_260 = 0;
        uStack_268 = 0;
        uStack_250 = 0;
        uStack_258 = 0;
        uStack_fc = 0x20;
        if (iVar6 != 0 || iVar5 != 0) goto LAB_000a6678;
      }
      if ((*(byte *)((long)&uStack_270 + (long)pppppppuStack_290[-3]) & 5) != 0) {
        pbVar11 = (byte *)(*pcRam00000000020672c0)();
        if ((*pbVar11 & 1) == 0) {
          func_0x019c0ee4();
        }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        pcStack_2f8 = (char *)(*pcRam00000000020672a8)();
        if (*pcStack_2f8 == '\x01') {
          lVar10 = 0;
          uVar8 = 0x38655c431f8fb5e2;
          do {
            uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_2f8[lVar10 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
                    ((uint)(uVar12 >> 0x29) | 1);
            pcStack_2f8[lVar10 + 0x17] =
                 ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
            uVar8 = lVar10 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_2f8[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x16);
          *pcStack_2f8 = '\0';
        }
        pcStack_2f8 = pcStack_2f8 + 0x17;
        func_0x0011ab24(&pcStack_2f8);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_000a736c;
      }
      pppppppuStack_290 = (undefined8 *******)&UNK_01dbf310;
      apuStack_f0[0] = &UNK_01dbf338;
      func_0x00140dd0(&uStack_288);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&pppppppuStack_290,&UNK_01dbf350);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_f0);
      if ((char)bStack_2c9 < '\0') {
        __ZdlPv(pppppppuStack_2e0);
        if (-1 < (char)bStack_2b1) goto LAB_000a6700;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
LAB_000a6750:
        __ZdlPv(uStack_2c8);
        if (-1 < (long)uStack_298) goto LAB_000a6708;
LAB_000a6760:
        __ZdlPv(pppppppuStack_2a8);
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
          return 0;
        }
      }
      else {
        if ((char)bStack_2b1 < '\0') goto LAB_000a6750;
LAB_000a6700:
        if ((long)uStack_298 < 0) goto LAB_000a6760;
LAB_000a6708:
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
          return 0;
        }
      }
      ___stack_chk_fail();
      goto LAB_000a6784;
    }
  }
  pbVar11 = (byte *)(*pcRam0000000002067230)();
  if ((*pbVar11 & 1) == 0) {
    func_0x019c0f5c();
  }
/* WM - donate: donate/README.md */
  pcStack_308 = (char *)(*pcRam0000000002067218)();
  if (*pcStack_308 == '\x01') {
    lVar10 = 0;
    uVar8 = 0x7265d2c29ece4283;
    do {
      uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_308[lVar10 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
      pcStack_308[lVar10 + 0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar13;
      uVar8 = lVar10 + -0x61c8864680b583eb +
              (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_308[lVar10 + 1]) << 0x11);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0xd);
    *pcStack_308 = '\0';
  }
  pcStack_308 = pcStack_308 + 0xe;
  func_0x0011ab24(&pcStack_308);
  func_0x007a1b5c(param_1,"%s");
LAB_000a736c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xa7370);
  (*pcVar3)();
}

