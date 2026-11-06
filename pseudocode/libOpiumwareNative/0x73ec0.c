/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x73ec0:5a0ecfa579
 */

undefined8 FUN_00073ec0(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_28;
  
  iVar3 = func_0x00791be4(param_1,1);
  if (iVar3 == 8) {
    lVar4 = func_0x00790f58(param_1,1);
    if (*(int *)(lVar4 + 0xc) == 8) {
      plVar5 = (long *)func_0x00790f58(param_1,1);
      bVar2 = *(char *)(*plVar5 + 3) == '\0';
    }
    else {
      bVar2 = false;
    }
    func_0x007932d0(param_1,bVar2);
    return 1;
  }
  pbVar6 = (byte *)(*pcRam0000000002063cf0)();
  if ((*pbVar6 & 1) == 0) goto LAB_00074344;
  do {
    pcStack_28 = (char *)(*pcRam0000000002063cd8)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0xf3f439d;
/* wm:unlicensed copy if this notice is missing */
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x9d56598c;
      pcStack_28[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x5e;
      uVar8 = (((ulong)(byte)pcStack_28[1] ^ 0x207cc9eb969f95ce) << 0x11 | 0x40f9) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_28[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_28[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_28[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_28[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
/* wm:found on a paste site? it was re-uploaded illegally */
      pcStack_28[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_28[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_28[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[8] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_28[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_28[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[9] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_28[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 10;
    uVar7 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar7);
// WM - donate: donate/README.md
LAB_00074344:
    func_0x019bcf9c();
  } while( true );
}

