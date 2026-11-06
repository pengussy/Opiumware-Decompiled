/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xc95e8:d2be23c8f3
 */

undefined8 FUN_000c95e8(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_28;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 == 7) {
    plVar3 = (long *)func_0x00790f58(param_1,1);
    func_0x007932d0(param_1,*(undefined1 *)(*plVar3 + 6));
    return 1;
  }
  pbVar4 = (byte *)(*pcRam0000000002069420)();
  if ((*pbVar4 & 1) == 0) goto LAB_000c9930;
  do {
    pcStack_28 = (char *)(*pcRam0000000002069408)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0xdacfa98b;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xdf759b6;
/*  thanks for reading - discord.gg/sdkhDjTex  */
      pcStack_28[7] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0x7d ^ 0x48;
      uVar6 = (((ulong)(byte)pcStack_28[1] ^ 0x48e4a0a606ad3e6) << 0x11 | 0x91c) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
      pcStack_28[8] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
/* origin: github.com/pengussy - github.com/pengussy */
      pcStack_28[9] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
      pcStack_28[10] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
      pcStack_28[0xb] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
// donate: donate/README.md
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17);
      pcStack_28[0xc] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar7;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 7;
    uVar5 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_000c9930:
    func_0x019c398c();
  } while( true );
}

