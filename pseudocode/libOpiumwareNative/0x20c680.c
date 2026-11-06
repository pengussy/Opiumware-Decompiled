/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x20c680:8826f3237d
 */

undefined8 FUN_0020c680(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *pcStack_48;
  char *pcStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 == 0) {
    pbVar6 = (byte *)(*pcRam0000000002076b90)();
    if ((*pbVar6 & 1) == 0) {
LAB_0020cc28:
      func_0x019d8994();
    }
    pcStack_48 = (char *)(*pcRam0000000002076b78)();
    if (*pcStack_48 == '\x01') {
      uVar1 = (byte)pcStack_48[1] ^ 0x807a260;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x8a836c11;
      pcStack_48[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0xa1 ^ 0xa3;
      uVar7 = (((ulong)(byte)pcStack_48[1] ^ 0xaea9effa4ee12631) << 0x11 | 0x15d53) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
// if you paid for this, you were scammed
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_48[9] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_48[10] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
// watermarked copy - do not remove
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_48[0xb] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_48[0xc] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
/* wm:more drops soon - github.com/pengussy */
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_48[0xd] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
      pcStack_48[0xe] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 8;
    uVar3 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,1,uVar3);
  }
  else {
    uVar3 = func_0x00792368(param_1,1,&uStack_38);
    if (CONCAT44(uStack_34,uStack_38) == 0) {
      func_0x00792f00(param_1,&UNK_01cb7848);
      return 1;
    }
    pcVar4 = (code *)func_0x0011ab24(&DAT_00295d24);
    iVar2 = (*pcVar4)(uStack_38);
    lVar10 = (long)iVar2;
    if (iVar2 == 0) {
      lVar5 = 0;
    }
    else {
// WM - if you paid for this, you were scammed
      if (iVar2 < 0) {
        FUN_0000abb4();
        goto LAB_0020cc28;
      }
      lVar5 = __Znwm(lVar10);
      _bzero(lVar5,lVar10);
    }
    pcVar4 = (code *)func_0x0011ab24(&DAT_019e0a84);
    iVar2 = (*pcVar4)(uVar3,lVar5,uStack_38,lVar10);
    if (0 < iVar2) {
      func_0x00792db8(param_1,lVar5,iVar2);
      if (lVar5 == 0) {
        return 1;
      }
      __ZdlPv(lVar5);
      return 1;
    }
  }
  pbVar6 = (byte *)(*pcRam0000000002076bc0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019d8958();
  }
/* stripping the watermark breaks the license */
  pcStack_40 = (char *)(*pcRam0000000002076ba8)();
  if (*pcStack_40 == '\x01') {
    lVar10 = 0;
    uVar7 = 0x199658e1b47a389b;
    do {
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[lVar10 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17);
      pcStack_40[lVar10 + 0x18] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = lVar10 + -0x61c8864680b583eb +
              (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[lVar10 + 1]) << 0x11);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x17);
    *pcStack_40 = '\0';
  }
  pcStack_40 = pcStack_40 + 0x18;
  func_0x0011ab24(&pcStack_40);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x20cc24);
  (*pcVar4)();
}

