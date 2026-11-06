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
 *  file-id: 0xb2bf8:9262057fa1
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000b2bf8(undefined8 param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar4 = func_0x00791efc(param_1,1);
  if (iVar4 == 0) {
    pbVar7 = (byte *)(*pcRam0000000002067c20)();
    if ((*pbVar7 & 1) == 0) goto LAB_000b37dc;
    goto LAB_000b2cf0;
  }
  iVar4 = func_0x00791e54(param_1,2);
  if (iVar4 == 0) goto LAB_000b30e0;
  iVar4 = func_0x00791be4(param_1,3);
  if (iVar4 == 1) {
    puVar5 = (undefined8 *)func_0x007926a8(param_1,1);
    uVar11 = *puVar5;
    iVar4 = func_0x00792220(param_1,3);
    lVar6 = func_0x0003c1d0(param_1,uVar11,0);
    uVar3 = uRam0000000001f266e0 & *(ushort *)(lRam0000000001f266d0 + lVar6);
    *puRam0000000001f26960 = 0;
    uVar1 = *(ushort *)(lRam0000000001f266d0 + lVar6) & (uRam0000000001f266e0 ^ 0xffff);
    if (iVar4 != 0) {
      uVar1 = *(ushort *)(lRam0000000001f266d0 + lVar6) | uRam0000000001f266e0;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    }
    *(ushort *)(lRam0000000001f266d0 + lVar6) = uVar1;
    func_0x007932d0(param_1,uVar3 != 0);
    return 1;
  }
  do {
    pbVar7 = (byte *)(*pcRam0000000002067c80)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c1b8c();
    }
    pcStack_38 = (char *)(*pcRam0000000002067c68)();
    if (*pcStack_38 == '\x01') {
      uVar2 = (byte)pcStack_38[1] ^ 0x35dbdfca;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) + 0xb664f66c ^ 0x181267;
      pcStack_38[9] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - 9;
      uVar8 = (((ulong)(byte)pcStack_38[1] ^ 0x3361a0d08d433902) << 0x11 | 0x66c3) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_38[10] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_38[0xb] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
// stripping the watermark breaks the license
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_38[0xc] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_38[0xd] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_38[0xe] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar10;
// unlicensed copy if this notice is missing
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_38[0xf] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_38[0x10] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar9;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 9;
    uVar11 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,3,uVar11);
LAB_000b37dc:
    func_0x019c1c04();
LAB_000b2cf0:
    pcStack_48 = (char *)(*pcRam0000000002067c08)();
    if (*pcStack_48 == '\x01') {
      uVar2 = (byte)pcStack_48[1] ^ 0x45d667c5;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0xae41b68c ^ 0x71d46f;
      pcStack_48[10] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - 6;
      uVar8 = (((ulong)(byte)pcStack_48[1] ^ 0x14946cada227d75b) << 0x11 | 0x2928) +
              0x9e3779b97f4a7c15;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_48[0xb] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_48[0xc] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_48[0xd] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
// if you paid for this, you were scammed
      uVar2 = (uint)(byte)pcStack_48[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_48[0xe] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_48[0xf] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_48[0x10] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar10;
// WM - origin: github.com/pengussy
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[8] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_48[0x11] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[9] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_48[0x12] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar9;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 10;
    uVar11 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,1,uVar11);
LAB_000b30e0:
    pbVar7 = (byte *)(*pcRam0000000002067c50)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c1bc8();
    }
    pcStack_40 = (char *)(*pcRam0000000002067c38)();
    if (*pcStack_40 == '\x01') {
      uVar2 = (byte)pcStack_40[1] ^ 0x6fba8690;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xd7d9e8e5;
/* wm:reversing this took months of machine time */
      pcStack_40[8] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ 0x53;
      uVar8 = (((ulong)(byte)pcStack_40[1] ^ 0x6e6460cac51fbeca) << 0x11 | 0xdcc8) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_40[9] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_40[10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_40[0xb] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_40[0xc] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_40[0xd] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_40[0xe] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar9;
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 8;
    uVar11 = func_0x0011ab24(&pcStack_40);
    func_0x007a1ba8(param_1,2,uVar11);
  } while( true );
/* no support for modified copies - github.com/pengussy */
}

