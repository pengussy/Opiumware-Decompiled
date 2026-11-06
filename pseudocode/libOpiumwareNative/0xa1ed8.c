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
 *  file-id: 0xa1ed8:6f7dc1aaae
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000a1ed8(long param_1)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uStack_204;
  char *pcStack_200;
/* wm:found on a paste site? it was re-uploaded illegally */
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  long alStack_1b0 [3];
  long lStack_198;
  undefined4 uStack_188;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar19 = 1;
  iVar4 = func_0x00791be4(param_1,1);
  lVar5 = param_1;
  if (iVar4 == 10) {
    lVar5 = func_0x00792874(param_1,1);
    if (*(long *)(lVar5 + 0x38) != *(long *)(param_1 + 0x38)) goto LAB_000a369c;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    uVar19 = 2;
  }
  uStack_204 = (uint)(lVar5 == param_1);
  iVar4 = func_0x00791be4(param_1,uVar19);
  if (0 < iVar4) {
    uStack_204 = func_0x007f4d48(param_1,uVar19);
  }
  if ((lVar5 == param_1) || (iVar4 = func_0x007910c4(lVar5,1), iVar4 != 0)) {
    func_0x00793bd0(param_1,0,0);
    pcVar6 = (char *)(*pcRam0000000002066df8)();
    pcVar7 = (char *)(*pcRam0000000002066e28)();
    pcVar8 = (char *)(*pcRam0000000002066e58)();
    pcVar9 = (char *)(*pcRam0000000002066e88)();
    pcVar10 = (char *)(*pcRam0000000002066eb8)();
    pcVar11 = (char *)(*pcRam0000000002066ee8)();
    pcVar12 = (char *)(*pcRam0000000002066f18)();
    pcVar13 = (char *)(*pcRam0000000002066f48)();
    pcVar3 = pcRam0000000002066e10;
    while( true ) {
      pbVar14 = (byte *)(*pcVar3)(0x2066e10);
      if ((*pbVar14 & 1) == 0) {
        func_0x019c09f8();
        cVar2 = *pcVar6;
      }
      else {
        cVar2 = *pcVar6;
      }
      if (cVar2 == '\x01') {
        uVar1 = (byte)pcVar6[1] ^ 0x3db46a7e;
/* stripping the watermark breaks the license - github.com/pengussy */
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x6f3cd27c ^ 0x39a431;
        pcVar6[6] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0x43;
        uVar17 = (((ulong)(byte)pcVar6[1] ^ 0xd6d28a2fbd756401) << 0x11 | 0x1ada5) +
                 0x9e3779b97f4a7c15;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[2] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcVar6[7] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar6[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcVar6[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar6[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[4] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcVar6[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar6[4]) << 0x11) + 0x9e3779b97f4a7c18;
/* found on a paste site? it was re-uploaded illegally */
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[5] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1)
        ;
        pcVar6[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar16;
        *pcVar6 = '\0';
      }
      pcStack_1c8 = pcVar6 + 6;
      uVar19 = func_0x0011ab24(&pcStack_1c8);
      iVar4 = func_0x007f5068(lVar5,uStack_204,uVar19,alStack_1b0);
      if (iVar4 == 0) break;
      if (lVar5 != param_1) {
        func_0x00791230(lVar5,param_1,1);
      }
      func_0x00793bd0(param_1,0,0);
      func_0x00791ab0(param_1,0xfffffffe);
      pbVar14 = (byte *)(*pcRam0000000002066e40)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019c0a34();
        cVar2 = *pcVar7;
      }
      else {
        cVar2 = *pcVar7;
      }
      if (cVar2 == '\x01') {
        uVar1 = (byte)pcVar7[1] ^ 0xde9f9ecd;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x37469fa3;
        pcVar7[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0xe;
        uVar17 = (((ulong)(byte)pcVar7[1] ^ 0xfc405cba0a9c2611) << 0x11 | 0x1f880) +
                 0x9e3779b97f4a7c15;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar7[2] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
// keep the notice, keep the source honest
        pcVar7[7] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar7[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar7[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcVar7[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar7[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar7[4] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcVar7[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar7[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar17 ^ uVar17 >> 0x21;
/* reversing this took months of machine time - github.com/pengussy */
        uVar1 = (uint)(byte)pcVar7[5] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcVar7[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar16;
        *pcVar7 = '\0';
      }
      pcStack_1d0 = pcVar7 + 6;
      uVar19 = func_0x0011ab24(&pcStack_1d0);
      func_0x00794260(param_1,0xfffffffe,uVar19);
      lVar15 = alStack_1b0[0];
      if (alStack_1b0[0] == 0) {
        pbVar14 = (byte *)(*pcRam0000000002066e70)();
        if ((*pbVar14 & 1) == 0) {
          func_0x019c0a70();
          cVar2 = *pcVar8;
        }
        else {
          cVar2 = *pcVar8;
        }
        if (cVar2 == '\x01') {
          uVar1 = (byte)pcVar8[1] ^ 0xf5dca975;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x1be4ef05;
          pcVar8[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0xb6;
          uVar17 = (((ulong)(byte)pcVar8[1] ^ 0x8bb3875ef4fc7f55) << 0x11 | 0x11767) +
                   0x9e3779b97f4a7c15;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          uVar1 = (uint)(byte)pcVar8[3] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[4] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[5] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[6] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[7] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
/* if you paid for this, you were scammed */
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[8] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[9] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0x13] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[10] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcVar8[0x14] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar16;
          *pcVar8 = '\0';
        }
        pcStack_1d8 = pcVar8 + 0xb;
        lVar15 = func_0x0011ab24(&pcStack_1d8);
      }
      func_0x00792f00(param_1,lVar15);
      pbVar14 = (byte *)(*pcRam0000000002066ea0)();
      if ((*pbVar14 & 1) == 0) {
/* wm:donate: donate/README.md */
        func_0x019c0aac();
        cVar2 = *pcVar9;
      }
      else {
        cVar2 = *pcVar9;
      }
      if (cVar2 == '\x01') {
        uVar1 = (byte)pcVar9[1] ^ 0xfa1df6cc;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xe33a82c4;
        pcVar9[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0xf;
        uVar17 = (((ulong)(byte)pcVar9[1] ^ 0x5ff7a10ef80a5e04) << 0x11 | 0xbfef) +
                 0x9e3779b97f4a7c15;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar9[2] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcVar9[7] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar9[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar9[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcVar9[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar9[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
// stripping the watermark breaks the license
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar9[4] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcVar9[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar9[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcVar9[5] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcVar9[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar16;
        *pcVar9 = '\0';
      }
      pcStack_1e0 = pcVar9 + 6;
      uVar19 = func_0x0011ab24(&pcStack_1e0);
      func_0x00794260(param_1,0xfffffffe,uVar19);
      lVar15 = lStack_198;
      if (lStack_198 == 0) {
        pbVar14 = (byte *)(*pcRam0000000002066ed0)();
        if ((*pbVar14 & 1) == 0) {
          func_0x019c0ae8();
          cVar2 = *pcVar10;
        }
        else {
          cVar2 = *pcVar10;
        }
        if (cVar2 == '\x01') {
          uVar1 = (byte)pcVar10[1] ^ 0xf9f594c1;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xd91579f4;
          pcVar10[3] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0x45 ^ 2;
/* wm:no support for modified copies */
          uVar17 = (((ulong)(byte)pcVar10[1] ^ 0x45d62d0ddce0b005) << 0x11 | 0x8bac) +
                   0x9e3779b97f4a7c15;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcVar10[2] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar16 >> 0x17);
          pcVar10[4] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') -
                       ((byte)(uVar17 >> 0x29) | 1) ^ (byte)uVar16;
          *pcVar10 = '\0';
        }
        pcStack_1e8 = pcVar10 + 3;
        lVar15 = func_0x0011ab24(&pcStack_1e8);
      }
      func_0x00792f00(param_1,lVar15);
      pbVar14 = (byte *)(*pcRam0000000002066f00)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019c0b24();
        cVar2 = *pcVar11;
      }
      else {
        cVar2 = *pcVar11;
      }
      if (cVar2 == '\x01') {
        uVar1 = (byte)pcVar11[1] ^ 0xfade3f5;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xb156be20 ^ 0x65d3ab;
        pcVar11[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - 0x36;
        uVar17 = (((ulong)(byte)pcVar11[1] ^ 0x45b55c01f221af3c) << 0x11 | 0x8b6a) +
                 0x9e3779b97f4a7c15;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar11[2] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcVar11[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar11[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar11[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcVar11[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar11[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar11[4] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcVar11[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar11[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar11[5] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcVar11[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar11[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar11[6] ^ (uint)uVar18 ^ 0xffffffc3;
/* wm:do not claim this as your own */
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcVar11[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar11[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcVar11[7] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1)
        ;
        pcVar11[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar16;
        *pcVar11 = '\0';
      }
      pcStack_1f0 = pcVar11 + 8;
      uVar19 = func_0x0011ab24(&pcStack_1f0);
      func_0x00794260(param_1,0xfffffffe,uVar19);
      func_0x00792bf4(param_1,uStack_188);
      pbVar14 = (byte *)(*pcRam0000000002066f30)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019c0b60();
        cVar2 = *pcVar12;
      }
      else {
        cVar2 = *pcVar12;
      }
      if (cVar2 == '\x01') {
        uVar1 = (byte)pcVar12[1] ^ 0xf98b38b2;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xf79753f3;
        pcVar12[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x71;
        uVar17 = (((ulong)(byte)pcVar12[1] ^ 0xb7c61581c1edf52b) << 0x11 | 0x16f8c) +
                 0x9e3779b97f4a7c15;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar12[2] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcVar12[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar12[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar12[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcVar12[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar12[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar12[4] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcVar12[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar18;
        uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar12[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
/* wm:keep the notice, keep the source honest */
        uVar16 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcVar12[5] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcVar12[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar16;
        *pcVar12 = '\0';
      }
      pcStack_1f8 = pcVar12 + 6;
      uVar19 = func_0x0011ab24(&pcStack_1f8);
      func_0x00794260(param_1,0xfffffffe,uVar19);
      func_0x00792bf4(param_1,uStack_188);
      pbVar14 = (byte *)(*pcRam0000000002066f60)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019c0b9c();
        cVar2 = *pcVar13;
      }
      else {
        cVar2 = *pcVar13;
      }
      if (cVar2 == '\x01') {
        lVar15 = 0;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
        uVar17 = 0x948e7bc1b0c9e9f7;
        do {
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcVar13[lVar15 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar16 >> 0x29) | 1);
          pcVar13[lVar15 + 0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar18;
          uVar17 = lVar15 + -0x61c8864680b583eb +
                   (uVar17 >> 0x2f | (uVar17 ^ (byte)pcVar13[lVar15 + 1]) << 0x11);
          lVar15 = lVar15 + 1;
        } while (lVar15 != 0xc);
        *pcVar13 = '\0';
      }
      pcStack_200 = pcVar13 + 0xd;
      uVar19 = func_0x0011ab24(&pcStack_200);
      func_0x00794260(param_1,0xfffffffe,uVar19);
      func_0x007917f4(param_1,0xfffffffe);
      func_0x00794504(param_1,0xfffffffe);
      uStack_204 = uStack_204 + 1;
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return 1;
    }
    ___stack_chk_fail();
  }
  pbVar14 = (byte *)(*pcRam0000000002066de0)();
  if ((*pbVar14 & 1) == 0) goto LAB_000a37e0;
  do {
    pcStack_1c0 = (char *)(*pcRam0000000002066dc8)();
    if (*pcStack_1c0 == '\x01') {
      lVar5 = 0;
      uVar17 = 0x8267bab9c3097d1a;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_1c0[lVar5 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17);
        pcStack_1c0[lVar5 + 0x17] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar18;
        uVar17 = lVar5 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1c0[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x16);
      *pcStack_1c0 = '\0';
    }
    pcStack_1c0 = pcStack_1c0 + 0x17;
    uVar19 = func_0x0011ab24(&pcStack_1c0);
    func_0x007a1abc(param_1,1,uVar19);
LAB_000a369c:
    pbVar14 = (byte *)(*pcRam0000000002066db0)();
    if ((*pbVar14 & 1) == 0) {
      func_0x019c0980();
    }
    pcStack_1b8 = (char *)(*pcRam0000000002066d98)();
// WM - found on a paste site? it was re-uploaded illegally
    if (*pcStack_1b8 == '\x01') {
      lVar5 = 0;
      uVar17 = 0xf885be22fb67dfde;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_1b8[lVar5 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_1b8[lVar5 + 0x22] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
        uVar17 = lVar5 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1b8[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x21);
      *pcStack_1b8 = '\0';
    }
    pcStack_1b8 = pcStack_1b8 + 0x22;
    uVar19 = func_0x0011ab24(&pcStack_1b8);
    func_0x007a1abc(param_1,1,uVar19);
LAB_000a37e0:
    func_0x019c09bc();
  } while( true );
}

