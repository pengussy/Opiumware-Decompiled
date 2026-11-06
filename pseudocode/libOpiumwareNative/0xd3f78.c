/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xd3f78:b50af6ecd7
 */

undefined8 FUN_000d3f78(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined4 uStack_44;
  
  iVar2 = func_0x007a20b4(param_1,1,0);
  uStack_48 = iVar2 != 0;
  uStack_44 = 1;
  uStack_50 = param_1;
  func_0x00793bd0(param_1,0,0);
  func_0x00793bd0(param_1,0,0);
  pbVar3 = (byte *)(*pcRam0000000002069ab0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c41c0();
  }
  pcStack_58 = (char *)(*pcRam0000000002069a98)();
  if (*pcStack_58 == '\x01') {
    uVar1 = (byte)pcStack_58[1] ^ 0x361d2135;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xc6144e6d ^ 0x710e7b;
    pcStack_58[5] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 10;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    uVar6 = (((ulong)(byte)pcStack_58[1] ^ 0xf547dc438bc997c1) << 0x11 | 0x1ea8f) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_58[6] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_58[7] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_58[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar5;
    *pcStack_58 = '\0';
  }
  pcStack_58 = pcStack_58 + 5;
  uVar4 = func_0x0011ab24(&pcStack_58);
  func_0x00792f00(param_1,uVar4);
  pbVar3 = (byte *)(*pcRam0000000002069ae0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c41fc();
  }
  pcStack_60 = (char *)(*pcRam0000000002069ac8)();
  if (*pcStack_60 == '\x01') {
    uVar1 = (byte)pcStack_60[1] ^ 0xd6d93a54;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x8b2531ae ^ 0x641d37;
    pcStack_60[8] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) + 0x69;
    uVar6 = (((ulong)(byte)pcStack_60[1] ^ 0xae87a2b909e75436) << 0x11 | 0x15d0f) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_60[9] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_60[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* WM - more drops soon - github.com/pengussy */
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_60[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_60[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_60[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_60[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar5;
    *pcStack_60 = '\0';
  }
  pcStack_60 = pcStack_60 + 8;
  uVar4 = func_0x0011ab24(&pcStack_60);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  func_0x007946cc(param_1,0xfffffffe);
  func_0x0084aad0(param_1,&uStack_50,&DAT_0014979c);
  return 1;
}

