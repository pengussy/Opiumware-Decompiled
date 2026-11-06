/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x80e64:6e5977738e
 */

undefined8 FUN_00080e64(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  char *pcStack_30;
  char *pcStack_28;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (0 < iVar2) {
    iVar2 = func_0x00791e54(param_1,2);
    if (iVar2 == 0) goto LAB_000811f4;
    iVar2 = func_0x00791be4(param_1,3);
    if (iVar2 != 8) goto LAB_00081544;
    uVar3 = func_0x00792368(param_1,2,0);
    iVar2 = func_0x00793e98(param_1,1);
    if (iVar2 == 0) {
      iVar2 = func_0x00791be4(param_1,1);
      if (iVar2 != 7) goto LAB_00081a98;
      func_0x00791ab0(param_1,1);
/*  chat: discord.gg/sdkhDjTex  */
    }
    iVar2 = func_0x00793714(param_1,0xffffffff,uVar3);
    if (iVar2 == 8) {
      func_0x007930d0(param_1,FUN_0007a944,0,0,0);
      func_0x00791ab0(param_1,0xfffffffe);
      func_0x00791ab0(param_1,3);
      iVar2 = func_0x00794a14(param_1,2,1,0);
      if (iVar2 == 0) {
        return 1;
      }
      do {
        func_0x00791198(param_1);
LAB_00081a98:
        pbVar4 = (byte *)(*pcRam00000000020648c0)();
        if ((*pbVar4 & 1) == 0) {
          func_0x019bdde8();
        }
        pcStack_30 = (char *)(*pcRam00000000020648a8)();
        if (*pcStack_30 == '\x01') {
          lVar5 = 0;
          uVar6 = 0xa46fbab83c62a46f;
          do {
            uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
            uVar8 = uVar7 ^ uVar7 >> 0x21;
            uVar1 = (uint)(byte)pcStack_30[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
// WM - stripping the watermark breaks the license
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
            pcStack_30[lVar5 + 0x19] =
                 ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar7 >> 0x29) | 1) ^
                 (byte)uVar8;
            uVar6 = lVar5 + -0x61c8864680b583eb +
                    (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_30[lVar5 + 1]) << 0x11);
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0x18);
          *pcStack_30 = '\0';
        }
        pcStack_30 = pcStack_30 + 0x19;
        uVar3 = func_0x0011ab24(&pcStack_30);
        func_0x007a1abc(param_1,1,uVar3);
LAB_00081bdc:
        func_0x019bded8();
LAB_000810c8:
        pcStack_50 = (char *)(*pcRam0000000002064818)();
        if (*pcStack_50 == '\x01') {
          lVar5 = 0;
          uVar6 = 0x120c36c15c35f101;
          do {
            uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
            uVar8 = uVar7 ^ uVar7 >> 0x21;
            uVar1 = (uint)(byte)pcStack_50[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                    (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
            pcStack_50[lVar5 + 0x15] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8
            ;
            uVar6 = lVar5 + -0x61c8864680b583eb +
                    (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[lVar5 + 1]) << 0x11);
/*  donate: donate/README.md  */
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0x14);
          *pcStack_50 = '\0';
        }
        pcStack_50 = pcStack_50 + 0x15;
        uVar3 = func_0x0011ab24(&pcStack_50);
        func_0x007a1ba8(param_1,1,uVar3);
LAB_000811f4:
        pbVar4 = (byte *)(*pcRam0000000002064860)();
        if ((*pbVar4 & 1) == 0) {
          func_0x019bde9c();
        }
        pcStack_48 = (char *)(*pcRam0000000002064848)();
        if (*pcStack_48 == '\x01') {
          uVar1 = (byte)pcStack_48[1] ^ 0x6fc215f5;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x8a7dc8e0 ^ 0xadd61;
          pcStack_48[8] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - 0x36;
          uVar6 = (((ulong)(byte)pcStack_48[1] ^ 0xbf42749f5166a10c) << 0x11 | 0x17e84) +
                  0x9e3779b97f4a7c15;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^
                  ((uint)(uVar7 >> 0x29) | 1);
          pcStack_48[9] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^
                  ((uint)(uVar7 >> 0x29) | 1);
          pcStack_48[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// WM - no support for modified copies
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^
                  ((uint)(uVar7 >> 0x29) | 1);
          pcStack_48[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^
                  ((uint)(uVar7 >> 0x29) | 1);
          pcStack_48[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^
                  ((uint)(uVar7 >> 0x29) | 1);
          pcStack_48[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar7 = uVar6 ^ uVar6 >> 0x21;
          uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar7 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^
                  ((uint)(uVar6 >> 0x29) | 1);
          pcStack_48[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
          *pcStack_48 = '\0';
        }
/* no support for modified copies */
        pcStack_48 = pcStack_48 + 8;
        uVar3 = func_0x0011ab24(&pcStack_48);
        func_0x007a1ba8(param_1,2,uVar3);
LAB_00081544:
        pbVar4 = (byte *)(*pcRam0000000002064890)();
        if ((*pbVar4 & 1) == 0) {
          func_0x019bddac();
        }
        pcStack_28 = (char *)(*pcRam0000000002064878)();
        if (*pcStack_28 == '\x01') {
          uVar1 = (byte)pcStack_28[1] ^ 0xbc9e8ce8;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x4244ac29;
          pcStack_28[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x2b;
          uVar6 = (((ulong)(byte)pcStack_28[1] ^ 0x1349af7082c70f73) << 0x11 | 0x2693) +
                  0x9e3779b97f4a7c15;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                  (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
          pcStack_28[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                  (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
          pcStack_28[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                  (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
          pcStack_28[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                  (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
          pcStack_28[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                  (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
          pcStack_28[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
// WM - donate: donate/README.md
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                  (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
          pcStack_28[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_28[8] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                  (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
          pcStack_28[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar7 = uVar6 ^ uVar6 >> 0x21;
          uVar1 = (uint)(byte)pcStack_28[9] ^ (uint)uVar7 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                  (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
          pcStack_28[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
          *pcStack_28 = '\0';
        }
        pcStack_28 = pcStack_28 + 10;
        uVar3 = func_0x0011ab24(&pcStack_28);
        func_0x007a1ba8(param_1,3,uVar3);
LAB_0008194c:
        pbVar4 = (byte *)(*pcRam0000000002064920)();
        if ((*pbVar4 & 1) == 0) {
          func_0x019bde60();
        }
        pcStack_40 = (char *)(*pcRam0000000002064908)();
        if (*pcStack_40 == '\x01') {
          lVar5 = 0;
/* WM - do not claim this as your own */
          uVar6 = 0xe8f0f8e737e211f8;
          do {
            uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
            uVar8 = uVar7 ^ uVar7 >> 0x21;
            uVar1 = (uint)(byte)pcStack_40[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
            pcStack_40[lVar5 + 0x1e] =
                 ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar7 >> 0x29) | 1) ^
                 (byte)uVar8;
            uVar6 = lVar5 + -0x61c8864680b583eb +
                    (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_40[lVar5 + 1]) << 0x11);
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0x1d);
          *pcStack_40 = '\0';
        }
        pcStack_40 = pcStack_40 + 0x1e;
// WM - found on a paste site? it was re-uploaded illegally
        uVar3 = func_0x0011ab24(&pcStack_40);
        func_0x007a1abc(param_1,2,uVar3);
      } while( true );
    }
    if (iVar2 != 0) goto LAB_0008194c;
    pbVar4 = (byte *)(*pcRam00000000020648f0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019bde24();
    }
    pcStack_38 = (char *)(*pcRam00000000020648d8)();
    if (*pcStack_38 == '\x01') {
      lVar5 = 0;
      uVar6 = 0x1d93c4624b31d8a8;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        pcStack_38[lVar5 + 0x1b] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
        uVar6 = lVar5 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x1a);
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 0x1b;
    uVar3 = func_0x0011ab24(&pcStack_38);
    func_0x007a1abc(param_1,2,uVar3);
  }
  pbVar4 = (byte *)(*pcRam0000000002064830)();
  if ((*pbVar4 & 1) == 0) goto LAB_00081bdc;
  goto LAB_000810c8;
}

