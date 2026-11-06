/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xaa7d4:a6115513d5
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000aa7d4(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_310;
  char *pcStack_308;
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  byte bStack_2c9;
  undefined8 *******pppppppuStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined *apuStack_298 [2];
  long alStack_288 [2];
  undefined8 uStack_278;
  undefined8 auStack_270 [12];
  long lStack_210;
  undefined4 uStack_fc;
  undefined *apuStack_f0 [19];
  long lStack_58;
  
/* WM - more drops soon - github.com/pengussy */
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 == 0) {
LAB_000aab44:
    pbVar8 = (byte *)(*pcRam00000000020675f0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c1448();
    }
    pcStack_310 = (char *)(*pcRam00000000020675d8)();
    if (*pcStack_310 == '\x01') {
      uVar1 = (byte)pcStack_310[1] ^ 0xdb4caa35;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x5908f00e;
      pcStack_310[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0xf6;
      uVar6 = (((ulong)(byte)pcStack_310[1] ^ 0x86b38cd8c236cf10) << 0x11 | 0x10d67) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_310[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_310[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* wm:reversing this took months of machine time */
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_310[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_310[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_310[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_310[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_310[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_310[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
/* wm:more drops soon - github.com/pengussy */
      pcStack_310[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_310[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_310[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_310[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      *pcStack_310 = '\0';
    }
    pcStack_310 = pcStack_310 + 8;
    uVar5 = func_0x0011ab24(&pcStack_310);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_000aae94:
    FUN_0000aa50();
  }
  else {
    uVar5 = func_0x00792368(param_1,1,0);
    uVar6 = _strlen();
    if (0x7ffffffffffffff6 < uVar6) goto LAB_000aae94;
    if (uVar6 < 0x17) {
      uStack_2a0 = CONCAT17((char)uVar6,(undefined7)uStack_2a0);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      pppppppuVar7 = &pppppppuStack_2b0;
    }
    else {
      uVar10 = (uVar6 & 0x7ffffffffffffff8) + 8;
      uVar11 = 0x19;
      if (uVar10 != 0x18) {
        uVar11 = uVar10;
      }
      pppppppuVar7 = (undefined8 *******)__Znwm(uVar11);
      uStack_2a0 = uVar11 | 0x8000000000000000;
      pppppppuStack_2b0 = pppppppuVar7;
      uStack_2a8 = uVar6;
    }
    _memmove(pppppppuVar7,uVar5,uVar6);
    *(undefined1 *)((long)pppppppuVar7 + uVar6) = 0;
    uVar5 = uRam0000000002097018;
    if (-1 < cRam000000000209702f) {
      uVar5 = 0x2097018;
    }
    uVar5 = func_0x007a1d50(param_1,2,uVar5,0);
    uVar6 = _strlen();
    if (uVar6 < 0x7ffffffffffffff7) {
      if (uVar6 < 0x17) {
        uStack_2b8 = CONCAT17((char)uVar6,(undefined7)uStack_2b8);
        pppppppuVar7 = &pppppppuStack_2c8;
      }
      else {
        uVar10 = (uVar6 & 0x7ffffffffffffff8) + 8;
        uVar11 = 0x19;
        if (uVar10 != 0x18) {
          uVar11 = uVar10;
        }
        pppppppuVar7 = (undefined8 *******)__Znwm(uVar11);
        uStack_2b8 = uVar11 | 0x8000000000000000;
        pppppppuStack_2c8 = pppppppuVar7;
        uStack_2c0 = uVar6;
      }
/* WM - donate: donate/README.md */
      _memmove(pppppppuVar7,uVar5,uVar6);
      *(undefined1 *)((long)pppppppuVar7 + uVar6) = 0;
      func_0x00791650(param_1);
      FUN_000a37f0(&uStack_2e0,&pppppppuStack_2b0,1);
      if (-1 < (char)bStack_2c9) {
        uStack_2d8 = (ulong)bStack_2c9;
      }
      if (uStack_2d8 == 0) {
        pbVar8 = (byte *)(*pcRam0000000002067620)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c140c();
        }
        pcStack_308 = (char *)(*pcRam0000000002067608)();
        if (*pcStack_308 == '\x01') {
          lVar9 = 0;
          uVar6 = 0xea6f4ffe59ca6683;
          do {
            uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_308[lVar9 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                    ((uint)(uVar10 >> 0x29) | 1);
            pcStack_308[lVar9 + 0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
            uVar6 = lVar9 + -0x61c8864680b583eb +
                    (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_308[lVar9 + 1]) << 0x11);
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0xd);
          *pcStack_308 = '\0';
        }
/*  watermarked copy - do not remove  */
        pcStack_308 = pcStack_308 + 0xe;
        func_0x0011ab24(&pcStack_308);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_000ab134;
      }
      func_0x000a4dbc(apuStack_298,&uStack_2e0,4);
      if ((*(byte *)((long)&uStack_278 + *(long *)(apuStack_298[0] + -0x18)) & 5) != 0) {
        pbVar8 = (byte *)(*pcRam0000000002067650)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c13d0();
        }
        pcStack_300 = (char *)(*pcRam0000000002067638)();
        if (*pcStack_300 == '\x01') {
          lVar9 = 0;
          uVar6 = 0x69a3708e0b0edab0;
          do {
            uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_300[lVar9 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^
                    ((uint)(uVar10 >> 0x29) | 1);
            pcStack_300[lVar9 + 0x15] =
/* WM - reversing this took months of machine time */
                 ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
            uVar6 = lVar9 + -0x61c8864680b583eb +
                    (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_300[lVar9 + 1]) << 0x11);
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x14);
          *pcStack_300 = '\0';
        }
        pcStack_300 = pcStack_300 + 0x15;
        func_0x0011ab24(&pcStack_300);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_000ab134;
      }
      func_0x00140b70(auStack_2f8,
                      *(undefined8 *)((long)auStack_270 + *(long *)(apuStack_298[0] + -0x18)),0);
      if (lStack_210 == 0) {
LAB_000aa9dc:
        __ZNSt3__18ios_base5clearEj
                  ((long)apuStack_298 + *(long *)(apuStack_298[0] + -0x18),
                   *(uint *)((long)&uStack_278 + *(long *)(apuStack_298[0] + -0x18)) | 4);
      }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      else {
        iVar3 = (**(code **)(alStack_288[0] + 0x30))(alStack_288);
        iVar4 = _fclose(lStack_210);
        lStack_210 = 0;
        auStack_270[0] = 0;
        uStack_278 = 0;
        auStack_270[2] = 0;
        auStack_270[1] = 0;
        auStack_270[4] = 0;
        auStack_270[3] = 0;
        uStack_fc = 0x20;
        if (iVar4 != 0 || iVar3 != 0) goto LAB_000aa9dc;
      }
      uVar6 = func_0x001d7a4c(param_1,auStack_2f8,&pppppppuStack_2c8);
      if ((uVar6 & 1) == 0) {
        func_0x00792a48(param_1);
        func_0x00791890(param_1,0xfffffffe);
        param_1 = 2;
      }
      else {
        func_0x00791938(param_1,1);
        func_0x00791660(param_1,1);
        param_1 = func_0x00794e08(param_1,0,0xffffffff,0);
      }
      if (cStack_2e1 < '\0') {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        __ZdlPv(auStack_2f8[0]);
      }
      apuStack_298[0] = &UNK_01dbf1a0;
      apuStack_f0[0] = &UNK_01dbf1c8;
      func_0x00140dd0(alStack_288);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(apuStack_298,&UNK_01dbf1e0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_f0);
      if ((char)bStack_2c9 < '\0') {
        __ZdlPv(uStack_2e0);
        if (-1 < (long)uStack_2b8) goto LAB_000aaac0;
LAB_000aab10:
        __ZdlPv(pppppppuStack_2c8);
        if (-1 < (long)uStack_2a0) goto LAB_000aaac8;
LAB_000aab20:
        __ZdlPv(pppppppuStack_2b0);
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
          return param_1;
        }
      }
      else {
        if ((long)uStack_2b8 < 0) goto LAB_000aab10;
LAB_000aaac0:
/* wm:unlicensed copy if this notice is missing */
        if ((long)uStack_2a0 < 0) goto LAB_000aab20;
LAB_000aaac8:
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
          return param_1;
        }
      }
      ___stack_chk_fail();
      goto LAB_000aab44;
    }
  }
  FUN_0000aa50();
LAB_000ab134:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xab138);
  (*pcVar2)();
}

