/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x20db60:ec182c0204
   =========================================================================== */

undefined8 FUN_0020db60(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 == 0) {
    pbVar6 = (byte *)(*pcRam0000000002076ce0)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d8b74();
    }
    pcStack_50 = (char *)(*pcRam0000000002076cc8)();
    if (*pcStack_50 == '\x01') {
      uVar1 = (byte)pcStack_50[1] ^ 0xa81dc205;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x9b81d351 ^ 0x61991f;
      pcStack_50[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x3a;
      uVar8 = (((ulong)(byte)pcStack_50[1] ^ 0x306022ef8958d865) << 0x11 | 0x60c0) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_50[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_50[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_50[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_50[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_50[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
/* wm:proprietary - see LICENSE - do not sell */
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_50[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 8;
    uVar3 = func_0x0011ab24(&pcStack_50);
    func_0x007a1ba8(param_1,1,uVar3);
  }
  else {
    iVar2 = func_0x00791db8(param_1,2);
    if (iVar2 != 0) {
      uVar3 = func_0x00792368(param_1,1,&uStack_38);
      iVar2 = func_0x00792168(param_1,2,0);
      if (iVar2 < 1) {
        func_0x00792f00(param_1,&UNK_01cb7848);
        return 1;
      }
      uVar4 = __Znwm(iVar2);
      _bzero(uVar4,iVar2);
      pcVar5 = (code *)func_0x0011ab24(&DAT_002f8694);
      uVar3 = (*pcVar5)(uVar4,iVar2,uVar3,uStack_38);
      pcVar5 = (code *)func_0x0011ab24(&DAT_002979d0);
      iVar2 = (*pcVar5)(uVar3);
      if (iVar2 == 0) {
        func_0x00792db8(param_1,uVar4,uVar3);
        __ZdlPv(uVar4);
        return 1;
      }
      goto LAB_0020e314;
    }
  }
  pbVar6 = (byte *)(*pcRam0000000002076d10)();
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  if ((*pbVar6 & 1) == 0) {
    func_0x019d8b38();
  }
  pcStack_48 = (char *)(*pcRam0000000002076cf8)();
  if (*pcStack_48 == '\x01') {
    uVar1 = (byte)pcStack_48[1] ^ 0xa28c8577;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xbbe58746 ^ 0x4b1107;
    pcStack_48[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x4c;
    uVar8 = (((ulong)(byte)pcStack_48[1] ^ 0xc42fac5ee3529a72) << 0x11 | 0x1885f) +
            0x9e3779b97f4a7c15;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_48[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_48[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_48[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_48[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_48[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_48[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar9;
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 8;
  uVar3 = func_0x0011ab24(&pcStack_48);
// WM - donate: donate/README.md
  func_0x007a1ba8(param_1,2,uVar3);
LAB_0020e314:
  pbVar6 = (byte *)(*pcRam0000000002076d40)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019d8afc();
  }
  pcStack_40 = (char *)(*pcRam0000000002076d28)();
  if (*pcStack_40 == '\x01') {
    lVar7 = 0;
    uVar8 = 0xb75b3b5323ebd5f6;
    do {
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_40[lVar7 + 0x1a] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = lVar7 + -0x61c8864680b583eb +
              (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x19);
    *pcStack_40 = '\0';
  }
  pcStack_40 = pcStack_40 + 0x1a;
  func_0x0011ab24(&pcStack_40);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x20e460);
  (*pcVar5)();
}

