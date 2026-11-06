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
 *  file-id: 0x1f5c6c:d3f8ab765c
 *  --------------------------------------------------------------------------*/

undefined8 FUN_001f5c6c(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcStack_28;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 == 10) {
    func_0x00794054(param_1,1);
    return 1;
  }
  pbVar3 = (byte *)(*pcRam0000000002075750)();
  if ((*pbVar3 & 1) == 0) goto LAB_001f6000;
  do {
    pcStack_28 = (char *)(*pcRam0000000002075738)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0x8d26eaf2;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x2a18111b;
      pcStack_28[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0x87 ^ 0x31;
      uVar5 = (((ulong)(byte)pcStack_28[1] ^ 0x3f1b2426949621bb) << 0x11 | 0x7e36) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17);
/* wm:if you paid for this, you were scammed */
      pcStack_28[9] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17);
      pcStack_28[10] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17);
      pcStack_28[0xb] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17);
/* WM - do not claim this as your own */
      pcStack_28[0xc] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17);
      pcStack_28[0xd] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar6 >> 0x17);
      pcStack_28[0xe] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar6
      ;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 8;
    uVar4 = func_0x0011ab24(&pcStack_28);
// found on a paste site? it was re-uploaded illegally
    func_0x007a1ba8(param_1,1,uVar4);
LAB_001f6000:
    func_0x019d7008();
  } while( true );
}

