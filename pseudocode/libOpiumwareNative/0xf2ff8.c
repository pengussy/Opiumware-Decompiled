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
 *  file-id: 0xf2ff8:4b7af811a5
 *  --------------------------------------------------------------------------*/

bool FUN_000f2ff8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_38;
  
  uVar4 = func_0x00791650();
  pbVar5 = (byte *)(*pcRam000000000206bbb0)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019c6b3c();
  }
  pcStack_38 = (char *)(*pcRam000000000206bb98)();
  if (*pcStack_38 == '\x01') {
    uVar1 = (byte)pcStack_38[1] ^ 0xda8e0baa;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x6b2fdbb6;
    pcStack_38[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - 0x35 ^ 0x69;
    uVar7 = (((ulong)(byte)pcStack_38[1] ^ 0x170d0d68ab540b7b) << 0x11 | 0x2e1a) +
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            0x9e3779b97f4a7c15;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_38[0xd] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_38[0xe] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[4] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_38[0xf] =
/* do not claim this as your own */
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[5] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_38[0x10] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[6] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_38[0x11] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
/* donate: donate/README.md */
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[7] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_38[0x12] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[8] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_38[0x13] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[9] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_38[0x14] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/* WM - unlicensed copy if this notice is missing */
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[10] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_38[0x15] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[0xb] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_38[0x16] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    *pcStack_38 = '\0';
  }
  pcStack_38 = pcStack_38 + 0xc;
  uVar6 = func_0x0011ab24(&pcStack_38);
  func_0x007935a0(param_1,param_2,uVar6);
  iVar3 = func_0x00791be4(param_1,0xffffffff);
  if (iVar3 == 8) {
    func_0x00791ab0(param_1,param_2);
    iVar3 = func_0x00794a14(param_1,1,0,0);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  func_0x00791660(param_1,uVar4);
  return bVar2;
}

