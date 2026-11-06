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
 *  file-id: 0x157e90:3ccc10c51f
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00157e90(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  int iVar14;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  
  iVar3 = func_0x00791650();
  pbVar5 = (byte *)(*pcRam000000000206e460)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019ca814();
  }
  pcStack_68 = (char *)(*pcRam000000000206e448)();
  if (*pcStack_68 == '\x01') {
    lVar9 = 0;
    uVar10 = 0x1b213c80e0a4923e;
    do {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[lVar9 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_68[lVar9 + 0x20] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar12;
      uVar10 = lVar9 + -0x61c8864680b583eb +
               (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_68[lVar9 + 1]) << 0x11);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x1f);
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 0x20;
  uVar6 = func_0x0011ab24(&pcStack_68);
  func_0x007a1ee4(param_1,iVar3 + 8,uVar6);
  func_0x00793928(param_1,0xffffd8ed,5);
  iVar4 = func_0x00792220(param_1,0xffffffff);
  func_0x00791660(param_1,0xfffffffe);
  func_0x00793928(param_1,0xffffd8ed,3);
  if ((iVar4 == 0) || (iVar4 = func_0x00791be4(param_1,0xffffffff), iVar4 != 2)) {
    func_0x00791660(param_1,0xfffffffe);
  }
  else {
    lVar7 = func_0x00792624(param_1,0xffffffff);
    lVar9 = lRam0000000001f26d30;
    func_0x00791660(param_1,0xfffffffe);
    if (lVar9 == lVar7) {
      func_0x00793928(param_1,0xffffd8ed,1);
      func_0x00793bd0(param_1,0,0);
      func_0x00793928(param_1,0xffffd8ec,4);
      pbVar5 = (byte *)(*pcRam000000000206e490)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019ca850();
      }
      pcStack_70 = (char *)(*pcRam000000000206e478)();
      if (*pcStack_70 == '\x01') {
        uVar1 = (byte)pcStack_70[1] ^ 0xa9fd7701;
// chat: discord.gg/sdkhDjTex
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x89e86f54;
        pcStack_70[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0x7b ^ 0xc2;
        uVar10 = (((ulong)(byte)pcStack_70[1] ^ 0x94f6f0ff0b049598) << 0x11 | 0x129ed) +
                 0x9e3779b97f4a7c15;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
        pcStack_70[0xd] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
        pcStack_70[0xe] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
        pcStack_70[0xf] =
/* wm:donate: donate/README.md */
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
        pcStack_70[0x10] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[6] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
        pcStack_70[0x11] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
// WM - do not claim this as your own
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[7] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
        pcStack_70[0x12] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[8] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
        pcStack_70[0x13] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[9] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
        pcStack_70[0x14] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[10] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
        pcStack_70[0x15] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[10]) << 0x11) + 0x9e3779b97f4a7c1e;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[0xb] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17);
        pcStack_70[0x16] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar11;
        *pcStack_70 = '\0';
      }
      pcStack_70 = pcStack_70 + 0xc;
      uVar6 = func_0x0011ab24(&pcStack_70);
      func_0x00794260(param_1,0xfffffffe,uVar6);
      func_0x00793928(param_1,0xffffd8ec,2);
// do not claim this as your own
      pbVar5 = (byte *)(*pcRam000000000206e4c0)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019ca88c();
      }
      pcStack_78 = (char *)(*pcRam000000000206e4a8)();
      if (*pcStack_78 == '\x01') {
        uVar1 = (byte)pcStack_78[1] ^ 0x90ec23dc;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xe826d147;
        pcStack_78[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x1f;
        uVar10 = (((ulong)(byte)pcStack_78[1] ^ 0xe9dca35fb7e6e934) << 0x11 | 0x1d3b9) +
                 0x9e3779b97f4a7c15;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
// WM - origin: github.com/pengussy
        pcStack_78[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_78[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_78[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_78[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
/* wm:keep the notice, keep the source honest */
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_78[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_78[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[8] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_78[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[9] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_78[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar11;
        *pcStack_78 = '\0';
      }
// donate: donate/README.md
      pcStack_78 = pcStack_78 + 10;
      uVar6 = func_0x0011ab24(&pcStack_78);
      func_0x00794260(param_1,0xfffffffe,uVar6);
      func_0x00793928(param_1,0xffffd8ec,5);
      pbVar5 = (byte *)(*pcRam000000000206e4f0)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019ca8c8();
      }
      pcStack_80 = (char *)(*pcRam000000000206e4d8)();
      if (*pcStack_80 == '\x01') {
        uVar1 = (byte)pcStack_80[1] ^ 0xf0010b53;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x3b185de1;
        pcStack_80[7] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - 0x39 ^ 0x90;
        uVar10 = (((ulong)(byte)pcStack_80[1] ^ 0x5241af48dc4c27f0) << 0x11 | 0xa483) +
                 0x9e3779b97f4a7c15;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
/* do not claim this as your own - github.com/pengussy */
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17);
        pcStack_80[8] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17);
        pcStack_80[9] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17);
        pcStack_80[10] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17);
        pcStack_80[0xb] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
        pcStack_80[0xc] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar11;
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 7;
      uVar6 = func_0x0011ab24(&pcStack_80);
      func_0x00794260(param_1,0xfffffffe,uVar6);
/* WM - if you paid for this, you were scammed */
      if (0 < iVar3) {
        iVar4 = 1;
        iVar14 = iVar3;
        do {
          func_0x00791ab0(param_1,iVar4);
          iVar4 = iVar4 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      iVar4 = func_0x00794a14(param_1,iVar3 + 1,0xffffffff,0);
      if (iVar4 != 0) goto LAB_0015904c;
      iVar4 = func_0x00791650(param_1);
      if ((iVar4 <= iVar3) || (iVar4 = func_0x00791be4(param_1,iVar3 + 1), iVar4 != 1)) {
        pbVar5 = (byte *)(*pcRam000000000206e520)();
        if ((*pbVar5 & 1) == 0) goto LAB_00159054;
        do {
          pcStack_88 = (char *)(*pcRam000000000206e508)();
          if (*pcStack_88 == '\x01') {
            uVar1 = (byte)pcStack_88[1] ^ 0xeb904934;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x6d0c1533;
            pcStack_88[4] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0xf7;
            uVar10 = (((ulong)(byte)pcStack_88[1] ^ 0xee66e6316203577c) << 0x11 | 0x1dccd) +
                     0x9e3779b97f4a7c15;
            uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
            pcStack_88[5] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
            uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
/* WM - stripping the watermark breaks the license */
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                    (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
            pcStack_88[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
            *pcStack_88 = '\0';
          }
          pcStack_88 = pcStack_88 + 4;
          uVar6 = func_0x0011ab24(&pcStack_88);
          pbVar5 = (byte *)(*pcRam000000000206e550)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019ca940();
          }
          pcStack_90 = (char *)(*pcRam000000000206e538)();
          if (*pcStack_90 == '\x01') {
            lVar9 = 0;
            uVar10 = 0xcfe6bab89686313f;
            do {
              uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
              uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
              uVar12 = uVar11 ^ uVar11 >> 0x21;
              uVar1 = (uint)(byte)pcStack_90[lVar9 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
              pcStack_90[lVar9 + 0x2c] =
                   ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar11 >> 0x29) | 1) ^
                   (byte)uVar12;
              uVar10 = lVar9 + -0x61c8864680b583eb +
                       (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_90[lVar9 + 1]) << 0x11);
              lVar9 = lVar9 + 1;
            } while (lVar9 != 0x2b);
            *pcStack_90 = '\0';
          }
          pcStack_90 = pcStack_90 + 0x2c;
          func_0x0011ab24(&pcStack_90);
          func_0x007a1b5c(param_1,uVar6);
// keep the notice, keep the source honest
LAB_0015904c:
          func_0x00791198(param_1);
LAB_00159054:
          func_0x019ca904();
        } while( true );
      }
      iVar4 = func_0x00792220(param_1,iVar3 + 1);
      if (iVar4 != 0) {
        if (-1 < iVar3) {
          iVar3 = iVar3 + 1;
          do {
            func_0x007917f4(param_1,1);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        func_0x00793928(param_1,0xffffd8ec,6);
        iVar3 = func_0x00792220(param_1,0xffffffff);
        func_0x00791660(param_1,0xfffffffe);
        if (iVar3 != 0) goto LAB_00158d20;
        func_0x00793928(param_1,0xffffd8ec,4);
        puVar8 = (undefined8 *)func_0x007926a8(param_1,0xffffffff);
        if ((((puVar8 == (undefined8 *)0x0) || ((*(byte *)((long)puVar8 + 0x11) & 1) != 0)) ||
            (iVar3 = func_0x0003c0e8(*puVar8), iVar3 == 0)) || (*(int *)*puVar8 < 1)) {
          func_0x00791660(param_1,0xfffffffe);
        }
        else {
          lVar9 = *(long *)((int *)*puVar8 + 8);
          func_0x00791660(param_1,0xfffffffe);
          if (lVar9 != 0) goto LAB_00158d20;
        }
      }
      return 0;
    }
  }
LAB_00158d20:
  uVar6 = func_0x00791650(param_1);
/*  thanks for reading - discord.gg/sdkhDjTex  */
  func_0x00793928(param_1,0xffffd8ec,2);
  func_0x00791890(param_1,1);
  lVar9 = **(long **)(*(long *)(param_1 + 0x30) + 8);
  func_0x007948e0(param_1,uVar6,0xffffffff);
  cVar2 = *(char *)(param_1 + 3);
  if ((cVar2 == '\x01' || cVar2 == '\x06') || (cVar2 == '\x7f')) {
    return 0xffffffff;
  }
  puVar13 = (ulong *)(lVar9 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00794e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(*puVar13 ^ (ulong)puVar13))(param_1,0);
  return uVar6;
}

