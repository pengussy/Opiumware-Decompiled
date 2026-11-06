/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x20cc54:1f8daef79a
 */

undefined8 FUN_0020cc54(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  undefined4 auStack_48 [2];
  
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 == 0) {
    pbVar7 = (byte *)(*pcRam0000000002076bf0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019d8a48();
    }
    pcStack_60 = (char *)(*pcRam0000000002076bd8)();
    if (*pcStack_60 == '\x01') {
      uVar1 = (byte)pcStack_60[1] ^ 0x87326e9d;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x59b3910f;
      pcStack_60[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0x6d ^ 0x5e;
      uVar4 = (((ulong)(byte)pcStack_60[1] ^ 0xa06b970ce5918a85) << 0x11 | 0x140d7) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
// stripping the watermark breaks the license
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_60[9] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_60[10] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar10 ^ 0xffffffc3;
// WM - watermarked copy - do not remove
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_60[0xb] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_60[0xc] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* wm:found on a paste site? it was re-uploaded illegally */
      uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_60[0xd] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar4 ^ uVar4 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
      pcStack_60[0xe] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar4 >> 0x29) | 1) ^ (byte)uVar9
      ;
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 8;
    uVar3 = func_0x0011ab24(&pcStack_60);
    func_0x007a1ba8(param_1,1,uVar3);
  }
  else {
    iVar2 = func_0x00791db8(param_1,2);
    if (iVar2 != 0) {
      uVar3 = func_0x00792368(param_1,1,auStack_48);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      uVar4 = func_0x00792168(param_1,2,0);
      if ((int)uVar4 < 1) {
        func_0x00792f00(param_1,&UNK_01cb7848);
        return 1;
      }
      uVar5 = __Znwm(uVar4 & 0xffffffff);
      _bzero(uVar5,uVar4 & 0xffffffff);
      pcVar6 = (code *)func_0x0011ab24(&DAT_019e0abc);
      iVar2 = (*pcVar6)(uVar3,uVar5,auStack_48[0],uVar4);
      if (-1 < iVar2) {
        func_0x00792db8(param_1,uVar5,iVar2);
        __ZdlPv(uVar5);
        return 1;
      }
      goto LAB_0020d3e4;
    }
  }
  pbVar7 = (byte *)(*pcRam0000000002076c20)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019d8a0c();
  }
  pcStack_58 = (char *)(*pcRam0000000002076c08)();
  if (*pcStack_58 == '\x01') {
    uVar1 = (byte)pcStack_58[1] ^ 0xa1d84994;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x9da7b6b7;
    pcStack_58[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x57;
    uVar4 = (((ulong)(byte)pcStack_58[1] ^ 0x522de64b90e25dd7) << 0x11 | 0xa45b) +
            0x9e3779b97f4a7c15;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
/* WM - watermarked copy - do not remove */
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_58[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_58[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_58[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_58[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_58[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_58[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
    *pcStack_58 = '\0';
  }
  pcStack_58 = pcStack_58 + 8;
  uVar3 = func_0x0011ab24(&pcStack_58);
  func_0x007a1ba8(param_1,2,uVar3);
LAB_0020d3e4:
  pbVar7 = (byte *)(*pcRam0000000002076c50)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019d89d0();
  }
  pcStack_50 = (char *)(*pcRam0000000002076c38)();
  if (*pcStack_50 == '\x01') {
    lVar8 = 0;
/*  unlicensed copy if this notice is missing  */
    uVar4 = 0x3fc183770e949090;
    do {
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_50[lVar8 + 0x1a] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar10;
      uVar4 = lVar8 + -0x61c8864680b583eb +
              (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x19);
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 0x1a;
  func_0x0011ab24(&pcStack_50);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x20d530);
  (*pcVar6)();
}

