/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xa142c:5b8f29b5e5
 */

undefined8 FUN_000a142c(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 8) goto LAB_000a161c;
  iVar2 = func_0x00791db8(param_1,2);
  if (iVar2 == 0) goto LAB_000a1a24;
  plVar3 = (long *)func_0x00790f58(param_1,1);
  lVar9 = *plVar3;
/* wm:found on a paste site? it was re-uploaded illegally */
  if (*(char *)(lVar9 + 3) != '\0') goto LAB_000a1d74;
  uVar4 = func_0x00792168(param_1,2,0);
  if ((0 < (int)(uint)uVar4) && ((uint)uVar4 <= (uint)*(byte *)(lVar9 + 4))) {
    func_0x00791ab0(param_1,3);
    func_0x00795dd8(param_1,1,uVar4);
    return 0;
  }
  pbVar5 = (byte *)(*pcRam0000000002066d80)();
  if ((*pbVar5 & 1) == 0) goto LAB_000a1eb8;
  do {
    pcStack_48 = (char *)(*pcRam0000000002066d68)();
    if (*pcStack_48 == '\x01') {
      lVar9 = 0;
      uVar6 = 0x67ac53783a6495ae;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
/* WM - no support for modified copies */
        uVar1 = (uint)(byte)pcStack_48[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_48[lVar9 + 0x1c] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x1b);
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 0x1c;
    uVar4 = func_0x0011ab24(&pcStack_48);
    func_0x007a1abc(param_1,2,uVar4);
LAB_000a161c:
    pbVar5 = (byte *)(*pcRam0000000002066cf0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c0890();
    }
    pcStack_38 = (char *)(*pcRam0000000002066cd8)();
    if (*pcStack_38 == '\x01') {
      uVar1 = (byte)pcStack_38[1] ^ 0xda53a345;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x6931fbb5 ^ 0x51e5b3;
      pcStack_38[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x7a;
      uVar6 = (((ulong)(byte)pcStack_38[1] ^ 0xb3040baae275b074) << 0x11 | 0x16608) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[3] ^ (uint)uVar8 ^ 0xffffffc3;
/* more drops soon - github.com/pengussy */
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      uVar1 = (uint)(byte)pcStack_38[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0x10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0x11] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_38[0x12] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar7;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 10;
    uVar4 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_000a1a24:
    pbVar5 = (byte *)(*pcRam0000000002066d20)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c0944();
    }
    pcStack_50 = (char *)(*pcRam0000000002066d08)();
    if (*pcStack_50 == '\x01') {
      uVar1 = (byte)pcStack_50[1] ^ 0x444a0709;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xe1284089;
      pcStack_50[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0x4b ^ 0xca;
      uVar6 = (((ulong)(byte)pcStack_50[1] ^ 0x44d62a10a6b01c5a) << 0x11 | 0x89ac) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_50[9] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_50[10] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_50[0xb] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_50[0xc] =
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_50[0xd] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
/* chat: discord.gg/sdkhDjTex */
      pcStack_50[0xe] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar7;
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 8;
    uVar4 = func_0x0011ab24(&pcStack_50);
    func_0x007a1ba8(param_1,2,uVar4);
LAB_000a1d74:
    pbVar5 = (byte *)(*pcRam0000000002066d50)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c08cc();
    }
    pcStack_40 = (char *)(*pcRam0000000002066d38)();
    if (*pcStack_40 == '\x01') {
      lVar9 = 0;
      uVar6 = 0xe83227927ebb8ddf;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_40[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
        pcStack_40[lVar9 + 0x21] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_40[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x20);
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 0x21;
    uVar4 = func_0x0011ab24(&pcStack_40);
    func_0x007a1abc(param_1,1,uVar4);
LAB_000a1eb8:
    func_0x019c0908();
/* wm:more drops soon - github.com/pengussy */
  } while( true );
}

