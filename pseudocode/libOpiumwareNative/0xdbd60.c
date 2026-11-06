/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xdbd60:f952772e68
   =========================================================================== */

undefined8 FUN_000dbd60(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    pbVar4 = (byte *)(*pcRam000000000206a320)();
    if ((*pbVar4 & 1) == 0) goto LAB_000dc268;
    do {
      pcStack_48 = (char *)(*pcRam000000000206a308)();
      if (*pcStack_48 == '\x01') {
        uVar1 = (byte)pcStack_48[1] ^ 0xb878f493;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xf186b7d4;
        pcStack_48[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x50;
        uVar7 = (((ulong)(byte)pcStack_48[1] ^ 0xd4dd4b5a0c40dfd) << 0x11 | 0x1a9b) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_48[0xb] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_48[0xc] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_48[0xd] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
// more drops soon - github.com/pengussy
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_48[0xe] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_48[0xf] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_48[0x10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[8] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_48[0x11] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[9] ^ (uint)uVar8 ^ 0xffffffc3;
/* proprietary - see LICENSE - do not sell */
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_48[0x12] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
        *pcStack_48 = '\0';
      }
      pcStack_48 = pcStack_48 + 10;
      uVar5 = func_0x0011ab24(&pcStack_48);
      func_0x007a1ba8(param_1,1,uVar5);
LAB_000dc268:
      func_0x019c4c4c();
    } while( true );
  }
  puVar3 = (undefined8 *)func_0x007926a8(param_1,1);
  uStack_38 = *puVar3;
  lStack_30 = 0;
  lStack_28 = 0;
  pbStack_40 = param_1;
  func_0x0084aad0(param_1,&pbStack_40,FUN_0014b1bc);
  if (lStack_28 == 0) {
    if (lStack_30 == 0) {
      func_0x00792a48(param_1);
      return 1;
    }
    func_0x007911b0(param_1,1);
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    plVar6 = *(long **)(param_1 + 0x48);
    lStack_28 = lStack_30;
  }
  else {
    func_0x007911b0(param_1,1);
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
// WM - thanks for reading - discord.gg/sdkhDjTex
    }
    plVar6 = *(long **)(param_1 + 0x48);
  }
  *plVar6 = lStack_28;
  *(undefined4 *)((long)plVar6 + 0xc) = 7;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
  return 1;
}

