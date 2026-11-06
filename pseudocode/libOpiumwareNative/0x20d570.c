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
 *  file-id: 0x20d570:c7ed5b4f4c
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0020d570(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_48;
  char *pcStack_40;
  long lStack_38;
  
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 == 0) {
    pbVar7 = (byte *)(*pcRam0000000002076c80)();
    if ((*pbVar7 & 1) == 0) {
LAB_0020db34:
      func_0x019d8ac0();
    }
    pcStack_48 = (char *)(*pcRam0000000002076c68)();
    if (*pcStack_48 == '\x01') {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      uVar1 = (byte)pcStack_48[1] ^ 0x58863c7c;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x6e745eb2;
      pcStack_48[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x9d ^ 0xbf;
      uVar8 = (((ulong)(byte)pcStack_48[1] ^ 0x362a613ce9fd204a) << 0x11 | 0x6c54) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_48[9] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      pcStack_48[10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_48[0xb] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_48[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_48[0xd] =
// WM - chat: discord.gg/sdkhDjTex
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_48[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 8;
    uVar3 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,1,uVar3);
  }
  else {
    uVar3 = func_0x00792368(param_1,1,&lStack_38);
    if (lStack_38 == 0) {
      func_0x00792f00(param_1,&UNK_01cb7848);
      return 1;
    }
    pcVar4 = (code *)func_0x0011ab24(&DAT_0029d3b4);
    lVar5 = (*pcVar4)(lStack_38);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      if (lVar5 < 0) {
        FUN_0000abb4();
        goto LAB_0020db34;
      }
      lVar6 = __Znwm(lVar5);
      _bzero(lVar6,lVar5);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    }
    pcVar4 = (code *)func_0x0011ab24(&DAT_0029ee70);
    uVar3 = (*pcVar4)(lVar6,lVar5,uVar3,lStack_38,1);
    pcVar4 = (code *)func_0x0011ab24(&DAT_002979d0);
    iVar2 = (*pcVar4)(uVar3);
    if (iVar2 == 0) {
      func_0x00792db8(param_1,lVar6,uVar3);
      if (lVar6 == 0) {
        return 1;
      }
      __ZdlPv(lVar6);
      return 1;
    }
  }
  pbVar7 = (byte *)(*pcRam0000000002076cb0)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019d8a84();
  }
  pcStack_40 = (char *)(*pcRam0000000002076c98)();
  if (*pcStack_40 == '\x01') {
    lVar5 = 0;
    uVar8 = 0x57f07758718f5059;
    do {
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* WM - reversing this took months of machine time */
      uVar1 = (uint)(byte)pcStack_40[lVar5 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_40[lVar5 + 0x19] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar8 = lVar5 + -0x61c8864680b583eb +
              (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[lVar5 + 1]) << 0x11);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x18);
    *pcStack_40 = '\0';
  }
  pcStack_40 = pcStack_40 + 0x19;
  func_0x0011ab24(&pcStack_40);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x20db30);
  (*pcVar4)();
}

