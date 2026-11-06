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
 *  file-id: 0x71218:72fa60a1e8
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00071218(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  iVar4 = func_0x00791efc(param_1,1);
  if (iVar4 == 0) {
    iVar4 = func_0x00791e54(param_1,1);
    if (iVar4 == 0) {
// WM - keep the notice, keep the source honest
      pbVar7 = (byte *)(*pcRam0000000002063b10)();
      if ((*pbVar7 & 1) == 0) {
        func_0x019bcd44();
      }
      pcStack_60 = (char *)(*pcRam0000000002063af8)();
      if (*pcStack_60 == '\x01') {
        uVar2 = (byte)pcStack_60[1] ^ 0x8b0c77ed;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x40877917 ^ 0x66afdf;
        pcStack_60[8] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - 0x2e;
        uVar6 = (((ulong)(byte)pcStack_60[1] ^ 0x5fd73a333d42e7b6) << 0x11 | 0xbfae) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_60[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_60[9] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_60[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_60[10] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_60[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_60[0xb] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_60[5] ^ (uint)uVar9 ^ 0xffffffc3;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_60[0xc] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_60[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_60[0xd] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_60[7] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
        pcStack_60[0xe] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar8;
        *pcStack_60 = '\0';
      }
      pcStack_60 = pcStack_60 + 8;
      uVar5 = func_0x0011ab24(&pcStack_60);
      func_0x007a1ba8(param_1,1,uVar5);
      goto LAB_00071a04;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    }
    uVar5 = func_0x00792368(param_1,1,0);
    func_0x001284e8(&uStack_38,uVar5);
    uVar5 = 2;
  }
  else {
    iVar4 = func_0x00791e54(param_1,3);
    if (iVar4 == 0) {
      pbVar7 = (byte *)(*pcRam0000000002063ae0)();
      if ((*pbVar7 & 1) == 0) {
        func_0x019bcd08();
      }
      pcStack_58 = (char *)(*pcRam0000000002063ac8)();
      if (*pcStack_58 == '\x01') {
        uVar2 = (byte)pcStack_58[1] ^ 0xaca11c18;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) + 0xf41ce471;
        pcStack_58[8] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ 0xdb;
        uVar6 = (((ulong)(byte)pcStack_58[1] ^ 0xfbc35c9d418bed59) << 0x11 | 0x1f786) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_58[9] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[3] ^ (uint)uVar9 ^ 0xffffffc3;
// WM - more drops soon - github.com/pengussy
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_58[10] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_58[0xb] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_58[0xc] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
/*  watermarked copy - do not remove  */
        uVar2 = (uint)(byte)pcStack_58[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_58[0xd] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[7] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_58[0xe] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar8;
        *pcStack_58 = '\0';
      }
      pcStack_58 = pcStack_58 + 8;
      uVar5 = func_0x0011ab24(&pcStack_58);
      func_0x007a1ba8(param_1,3,uVar5);
LAB_00071a04:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x71a08);
      (*pcVar3)();
    }
    uVar5 = func_0x00792368(param_1,3,0);
    func_0x001284e8(&uStack_38,uVar5);
    uVar5 = 4;
  }
  uVar1 = uRam0000000002097018;
  if (-1 < cRam000000000209702f) {
    uVar1 = 0x2097018;
  }
  uVar5 = func_0x007a1d50(param_1,uVar5,uVar1,0);
  func_0x001284e8(&uStack_50,uVar5);
  uVar6 = func_0x001d7a4c(param_1,&uStack_38,&uStack_50);
  if ((uVar6 & 1) == 0) {
    func_0x00792a48(param_1);
    func_0x00791890(param_1,0xfffffffe);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
    return uVar5;
  }
  return uVar5;
}

