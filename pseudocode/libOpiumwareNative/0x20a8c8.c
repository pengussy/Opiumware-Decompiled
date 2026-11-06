/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x20a8c8:911ba582bf
 */

undefined8 FUN_0020a8c8(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_28;
  
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 != 0) {
    if (*(long *)(param_1 + 0x68) != 0) {
      func_0x00792368(param_1,1,0);
      puVar3 = (undefined8 *)func_0x00790f58(param_1,1);
      *(undefined8 *)(param_1 + 0x68) = *puVar3;
      if ((*param_1 >> 2 & 1) != 0) {
        func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
      }
    }
    return 0;
  }
  pbVar4 = (byte *)(*pcRam0000000002076a10)();
  if ((*pbVar4 & 1) == 0) goto LAB_0020ac90;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  do {
    pcStack_28 = (char *)(*pcRam00000000020769f8)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0xff6ff1c0;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x98a2d246;
      pcStack_28[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 3;
      uVar6 = (((ulong)(byte)pcStack_28[1] ^ 0xa2a345d16ac5f1c0) << 0x11 | 0x14546) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_28[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_28[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar8 ^ 0xffffffc3;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_28[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_28[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_28[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
/* WM - keep the notice, keep the source honest */
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_28[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 8;
    uVar5 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_0020ac90:
    func_0x019d8778();
  } while( true );
}

