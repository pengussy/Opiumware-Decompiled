/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1f97f0:d11bc3a2c4
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x001f9b48) */
/* WARNING: Removing unreachable block (ram,0x001f9b04) */
/* WARNING: Removing unreachable block (ram,0x001f9bb0) */
/* WARNING: Removing unreachable block (ram,0x001f9a8c) */
/* WARNING: Removing unreachable block (ram,0x001f9a9c) */

undefined8 FUN_001f97f0(undefined8 param_1)

{
  undefined8 ****ppppuVar1;
  uint uVar2;
  undefined8 *****pppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  int iVar6;
  long lVar7;
  undefined8 *****pppppuVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  char *pcStack_188;
/* unlicensed copy if this notice is missing */
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  undefined8 *****pppppuStack_140;
  ulong uStack_138;
  ulong uStack_130;
  char acStack_128 [8];
  undefined8 *****pppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined1 uStack_a0;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 uStack_70;
  undefined8 *****pppppuStack_60;
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
// do not claim this as your own
  
  pppppuStack_b0 = (undefined8 *****)0x0;
  lVar7 = func_0x00792368(param_1,0xffffd8ed,&pppppuStack_b0);
  pppppuVar3 = pppppuStack_b0;
  if (lVar7 == 0) {
    pppppuStack_80 = (undefined8 *****)0x0;
    ppppuStack_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
  }
  else {
    if ((undefined8 ****)0x7ffffffffffffff6 < pppppuStack_b0) {
      uVar9 = FUN_0000aa50();
      auVar16 = __Unwind_Resume(uVar9);
      plVar12 = auVar16._8_8_;
      uVar9 = auVar16._0_8_;
      if (*(char *)((long)plVar12 + 0x17) < '\0') {
        func_0x00017ae8(&pppppuStack_140,*plVar12,plVar12[1]);
      }
      else {
        uStack_138 = plVar12[1];
        pppppuStack_140 = (undefined8 *****)*plVar12;
        uStack_130 = plVar12[2];
      }
      __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(acStack_128,plVar12,0);
      func_0x00793bd0(uVar9,0,0);
      pbVar10 = (byte *)(*pcRam0000000002075b70)();
      if ((*pbVar10 & 1) == 0) {
        func_0x019d7404();
      }
      pcStack_148 = (char *)(*pcRam0000000002075b58)();
      if (*pcStack_148 == '\x01') {
        uVar2 = (byte)pcStack_148[1] ^ 0x4087c6c1;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0x82ba5282 ^ 0x475f51;
        pcStack_148[9] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - 2;
        uVar14 = (((ulong)(byte)pcStack_148[1] ^ 0xac18cc14679e812a) << 0x11 | 0x15831) +
                 0x9e3779b97f4a7c15;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_148[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_148[10] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_148[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_148[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_148[0xb] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_148[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_148[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_148[0xc] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_148[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_148[5] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_148[0xd] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_148[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_148[6] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_148[0xe] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_148[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_148[7] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_148[0xf] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_148[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar14 ^ uVar14 >> 0x21;
        uVar2 = (uint)(byte)pcStack_148[8] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar14 >> 0x29) | 1);
        pcStack_148[0x10] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar13;
        *pcStack_148 = '\0';
      }
      pcStack_148 = pcStack_148 + 9;
      uVar11 = func_0x0011ab24(&pcStack_148);
      uVar14 = uStack_138;
      pppppuVar3 = pppppuStack_140;
      if (-1 < (long)uStack_130) {
        uVar14 = uStack_130 >> 0x38;
        pppppuVar3 = &pppppuStack_140;
      }
      func_0x00792db8(uVar9,pppppuVar3,uVar14);
      func_0x007930d0(uVar9,&DAT_001f7d80,uVar11,1,0);
      func_0x00794260(uVar9,0xfffffffe,uVar11);
      pbVar10 = (byte *)(*pcRam0000000002075ba0)();
      if ((*pbVar10 & 1) == 0) {
/*  unlicensed copy if this notice is missing  */
        func_0x019d7440();
      }
      pcStack_150 = (char *)(*pcRam0000000002075b88)();
      if (*pcStack_150 == '\x01') {
        uVar2 = (byte)pcStack_150[1] ^ 0x498816cd;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xc5c6d294 ^ 0x104e8f;
        pcStack_150[8] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - 0xe;
        uVar14 = (((ulong)(byte)pcStack_150[1] ^ 0x5d8fe75509517d8e) << 0x11 | 0xbb1f) +
                 0x9e3779b97f4a7c15;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_150[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_150[9] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_150[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_150[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_150[10] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_150[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_150[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_150[0xb] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_150[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        uVar2 = (uint)(byte)pcStack_150[5] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_150[0xc] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_150[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_150[6] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_150[0xd] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_150[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar14 ^ uVar14 >> 0x21;
        uVar2 = (uint)(byte)pcStack_150[7] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar14 >> 0x29) | 1);
        pcStack_150[0xe] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar13;
        *pcStack_150 = '\0';
      }
      pcStack_150 = pcStack_150 + 8;
      uVar11 = func_0x0011ab24(&pcStack_150);
      uVar14 = uStack_138;
      pppppuVar3 = pppppuStack_140;
      if (-1 < (long)uStack_130) {
        uVar14 = uStack_130 >> 0x38;
        pppppuVar3 = &pppppuStack_140;
      }
      func_0x00792db8(uVar9,pppppuVar3,uVar14);
      func_0x007930d0(uVar9,&DAT_001f7fa4,uVar11,1,0);
      func_0x00794260(uVar9,0xfffffffe,uVar11);
      pbVar10 = (byte *)(*pcRam0000000002075bd0)();
/* wm:proprietary - see LICENSE - do not sell */
      if ((*pbVar10 & 1) == 0) {
        func_0x019d747c();
      }
      pcStack_158 = (char *)(*pcRam0000000002075bb8)();
      if (*pcStack_158 == '\x01') {
        uVar2 = (byte)pcStack_158[1] ^ 0x972fbd91;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xa48bb52f;
        pcStack_158[10] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') + 0x23 ^ 0x52;
        uVar14 = (((ulong)(byte)pcStack_158[1] ^ 0x35d526611bbdf7e9) << 0x11 | 0x6baa) +
                 0x9e3779b97f4a7c15;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_158[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17);
        pcStack_158[0xb] =
             ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_158[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_158[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17);
        pcStack_158[0xc] =
// origin: github.com/pengussy
             ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_158[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_158[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17);
        pcStack_158[0xd] =
             ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_158[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_158[5] ^ (uint)uVar15 ^ 0xffffffc3;
/* wm:found on a paste site? it was re-uploaded illegally */
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17);
        pcStack_158[0xe] =
             ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_158[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_158[6] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17);
        pcStack_158[0xf] =
             ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_158[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_158[7] ^ (uint)uVar15 ^ 0xffffffc3;
/* no support for modified copies - github.com/pengussy */
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17);
        pcStack_158[0x10] =
             ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_158[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_158[8] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17);
        pcStack_158[0x11] =
             ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_158[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar14 ^ uVar14 >> 0x21;
        uVar2 = (uint)(byte)pcStack_158[9] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar13 >> 0x17);
        pcStack_158[0x12] =
             ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar13;
        *pcStack_158 = '\0';
      }
      pcStack_158 = pcStack_158 + 10;
      uVar11 = func_0x0011ab24(&pcStack_158);
      uVar14 = uStack_138;
      pppppuVar3 = pppppuStack_140;
      if (-1 < (long)uStack_130) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        uVar14 = uStack_130 >> 0x38;
        pppppuVar3 = &pppppuStack_140;
      }
      func_0x00792db8(uVar9,pppppuVar3,uVar14);
      func_0x007930d0(uVar9,&DAT_001f80cc,uVar11,1,0);
      func_0x00794260(uVar9,0xfffffffe,uVar11);
      pbVar10 = (byte *)(*pcRam0000000002075c00)();
      if ((*pbVar10 & 1) == 0) {
        func_0x019d74b8();
      }
      pcStack_160 = (char *)(*pcRam0000000002075be8)();
      if (*pcStack_160 == '\x01') {
        uVar2 = (byte)pcStack_160[1] ^ 0xb8c2be82;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0x99e9e972 ^ 0x435985;
        pcStack_160[8] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) + 0xbf;
        uVar14 = (((ulong)(byte)pcStack_160[1] ^ 0x62e9ed4c6b8f1202) << 0x11 | 0xc5d3) +
                 0x9e3779b97f4a7c15;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_160[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_160[9] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_160[2]) << 0x11) + 0x9e3779b97f4a7c16;
// WM - do not claim this as your own
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_160[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_160[10] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_160[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_160[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_160[0xb] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_160[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_160[5] ^ (uint)uVar15 ^ 0xffffffc3;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_160[0xc] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_160[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar2 = (uint)(byte)pcStack_160[6] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_160[0xd] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_160[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar14 ^ uVar14 >> 0x21;
        uVar2 = (uint)(byte)pcStack_160[7] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar14 >> 0x29) | 1);
        pcStack_160[0xe] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar13;
        *pcStack_160 = '\0';
      }
      pcStack_160 = pcStack_160 + 8;
      uVar11 = func_0x0011ab24(&pcStack_160);
      uVar14 = uStack_138;
      pppppuVar3 = pppppuStack_140;
      if (-1 < (long)uStack_130) {
        uVar14 = uStack_130 >> 0x38;
        pppppuVar3 = &pppppuStack_140;
      }
      func_0x00792db8(uVar9,pppppuVar3,uVar14);
      func_0x007930d0(uVar9,&DAT_001f81f4,uVar11,1,0);
      func_0x00794260(uVar9,0xfffffffe,uVar11);
      if (acStack_128[0] == '\x02') {
        pbVar10 = (byte *)(*pcRam0000000002075c30)();
        if ((*pbVar10 & 1) == 0) {
          func_0x019d75a8();
        }
/* donate: donate/README.md - github.com/pengussy */
        pcStack_180 = (char *)(*pcRam0000000002075c18)();
        if (*pcStack_180 == '\x01') {
          uVar2 = (byte)pcStack_180[1] ^ 0x978c693f;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0x2ad2d530;
          pcStack_180[6] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') + 0xb5 ^ 0xfc;
          uVar14 = (((ulong)(byte)pcStack_180[1] ^ 0x4f8df31f7c2a85f) << 0x11 | 0x9f1) +
                   0x9e3779b97f4a7c15;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_180[2] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17);
          pcStack_180[7] =
               ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_180[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_180[3] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17);
          pcStack_180[8] =
               ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_180[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
/*  stripping the watermark breaks the license  */
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_180[4] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar15 >> 0x17);
          pcStack_180[9] =
               ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_180[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar14 ^ uVar14 >> 0x21;
          uVar2 = (uint)(byte)pcStack_180[5] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar13 >> 0x17);
          pcStack_180[10] =
               ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar13;
          *pcStack_180 = '\0';
        }
        pcStack_180 = pcStack_180 + 6;
        uVar11 = func_0x0011ab24(&pcStack_180);
        uVar14 = uStack_138;
        pppppuVar3 = pppppuStack_140;
        if (-1 < (long)uStack_130) {
          uVar14 = uStack_130 >> 0x38;
          pppppuVar3 = &pppppuStack_140;
/* keep the notice, keep the source honest */
        }
        func_0x00792db8(uVar9,pppppuVar3,uVar14);
        func_0x007930d0(uVar9,FUN_001f97f0,uVar11,1,0);
        func_0x00794260(uVar9,0xfffffffe,uVar11);
        pbVar10 = (byte *)(*pcRam0000000002075c60)();
        if ((*pbVar10 & 1) == 0) {
          func_0x019d75e4();
        }
        pcStack_188 = (char *)(*pcRam0000000002075c48)();
        if (*pcStack_188 == '\x01') {
          uVar2 = (byte)pcStack_188[1] ^ 0xd81f68c;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) + 0xaac2f2d9;
          pcStack_188[0xc] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ 0x4f;
          uVar14 = (((ulong)(byte)pcStack_188[1] ^ 0x362d9493ff0a76ca) << 0x11 | 0x6c5b) +
                   0x9e3779b97f4a7c15;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[2] ^ (uint)uVar15 ^ 0xffffffc3;
// stripping the watermark breaks the license
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_188[0xd] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_188[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[3] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_188[0xe] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_188[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[4] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_188[0xf] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_188[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[5] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_188[0x10] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_188[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[6] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_188[0x11] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_188[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[7] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_188[0x12] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_188[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[8] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_188[0x13] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_188[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
// unlicensed copy if this notice is missing
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[9] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_188[0x14] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_188[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[10] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_188[0x15] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_188[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar14 ^ uVar14 >> 0x21;
          uVar2 = (uint)(byte)pcStack_188[0xb] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_188[0x16] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar13;
          *pcStack_188 = '\0';
        }
        pcStack_188 = pcStack_188 + 0xc;
        uVar11 = func_0x0011ab24(&pcStack_188);
        uVar14 = uStack_138;
        pppppuVar3 = pppppuStack_140;
        if (-1 < (long)uStack_130) {
          uVar14 = uStack_130 >> 0x38;
          pppppuVar3 = &pppppuStack_140;
        }
        func_0x00792db8(uVar9,pppppuVar3,uVar14);
/* reversing this took months of machine time - github.com/pengussy */
        func_0x007930d0(uVar9,FUN_001fbb5c,uVar11,1,0);
        uVar9 = func_0x00794260(uVar9,0xfffffffe,uVar11);
      }
      else {
        pbVar10 = (byte *)(*pcRam0000000002075c90)();
        if ((*pbVar10 & 1) == 0) {
          func_0x019d74f4();
        }
        pcStack_168 = (char *)(*pcRam0000000002075c78)();
        if (*pcStack_168 == '\x01') {
          uVar2 = (byte)pcStack_168[1] ^ 0x9a35aa43;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0x81fd735 ^ 0x1dfdf9;
          pcStack_168[6] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) + 0x80;
          uVar14 = (((ulong)(byte)pcStack_168[1] ^ 0x891ae3ec7900c905) << 0x11 | 0x11235) +
                   0x9e3779b97f4a7c15;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_168[2] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcStack_168[7] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_168[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_168[3] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcStack_168[8] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_168[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_168[4] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcStack_168[9] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_168[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar14 ^ uVar14 >> 0x21;
          uVar2 = (uint)(byte)pcStack_168[5] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar13 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_168[10] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar13;
          *pcStack_168 = '\0';
        }
        pcStack_168 = pcStack_168 + 6;
        uVar11 = func_0x0011ab24(&pcStack_168);
        uVar14 = uStack_138;
        pppppuVar3 = pppppuStack_140;
        if (-1 < (long)uStack_130) {
          uVar14 = uStack_130 >> 0x38;
          pppppuVar3 = &pppppuStack_140;
        }
        func_0x00792db8(uVar9,pppppuVar3,uVar14);
        func_0x007930d0(uVar9,&DAT_001f84f8,uVar11,1,0);
        func_0x00794260(uVar9,0xfffffffe,uVar11);
        pbVar10 = (byte *)(*pcRam0000000002075cc0)();
        if ((*pbVar10 & 1) == 0) {
          func_0x019d7530();
        }
        pcStack_170 = (char *)(*pcRam0000000002075ca8)();
        if (*pcStack_170 == '\x01') {
          uVar2 = (byte)pcStack_170[1] ^ 0xc9a05f0b;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0xb68bf353;
          pcStack_170[7] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ 200;
          uVar14 = (((ulong)(byte)pcStack_170[1] ^ 0x2490ec382a5bbdce) << 0x11 | 0x4921) +
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                   0x9e3779b97f4a7c15;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_170[2] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_170[8] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_170[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_170[3] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_170[9] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_170[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_170[4] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_170[10] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_170[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_170[5] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
/* more drops soon - github.com/pengussy */
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_170[0xb] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_170[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar14 ^ uVar14 >> 0x21;
          uVar2 = (uint)(byte)pcStack_170[6] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_170[0xc] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar13;
          *pcStack_170 = '\0';
        }
        pcStack_170 = pcStack_170 + 7;
        uVar11 = func_0x0011ab24(&pcStack_170);
        uVar14 = uStack_138;
        pppppuVar3 = pppppuStack_140;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (-1 < (long)uStack_130) {
          uVar14 = uStack_130 >> 0x38;
          pppppuVar3 = &pppppuStack_140;
        }
        func_0x00792db8(uVar9,pppppuVar3,uVar14);
        func_0x007930d0(uVar9,FUN_001f8980,uVar11,1,0);
        func_0x00794260(uVar9,0xfffffffe,uVar11);
        pbVar10 = (byte *)(*pcRam0000000002075cf0)();
        if ((*pbVar10 & 1) == 0) {
          func_0x019d756c();
        }
        pcStack_178 = (char *)(*pcRam0000000002075cd8)();
        if (*pcStack_178 == '\x01') {
          uVar2 = (byte)pcStack_178[1] ^ 0xe91c8825;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) + 0xdcbbd7d3 ^ 0x3b08d1;
          pcStack_178[8] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) + 0x1a;
          uVar14 = (((ulong)(byte)pcStack_178[1] ^ 0xaabb00a325d0ef5e) << 0x11 | 0x15576) +
                   0x9e3779b97f4a7c15;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_178[2] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcStack_178[9] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_178[2]) << 0x11) + 0x9e3779b97f4a7c16;
// no support for modified copies
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_178[3] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcStack_178[10] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_178[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_178[4] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcStack_178[0xb] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_178[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_178[5] ^ (uint)uVar15 ^ 0xffffffc3;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcStack_178[0xc] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_178[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_178[6] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcStack_178[0xd] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_178[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar14 ^ uVar14 >> 0x21;
          uVar2 = (uint)(byte)pcStack_178[7] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar13 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_178[0xe] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar13;
          *pcStack_178 = '\0';
        }
        pcStack_178 = pcStack_178 + 8;
        uVar11 = func_0x0011ab24(&pcStack_178);
        uVar14 = uStack_138;
        pppppuVar3 = pppppuStack_140;
        if (-1 < (long)uStack_130) {
          uVar14 = uStack_130 >> 0x38;
          pppppuVar3 = &pppppuStack_140;
        }
        func_0x00792db8(uVar9,pppppuVar3,uVar14);
        func_0x007930d0(uVar9,FUN_001f913c,uVar11,1,0);
        uVar9 = func_0x00794260(uVar9,0xfffffffe,uVar11);
      }
// WM - keep the notice, keep the source honest
      if ((long)uStack_130 < 0) {
        uVar9 = __ZdlPv(pppppuStack_140);
      }
      return uVar9;
    }
    if ((undefined8 ****)((long)&MACH_HEADER.sizeofcmds + 2) < pppppuStack_b0) {
      uVar14 = ((ulong)pppppuStack_b0 & 0x7ffffffffffffff8) + 8;
      uVar13 = 0x19;
      if (uVar14 != 0x18) {
        uVar13 = uVar14;
      }
      pppppuVar8 = (undefined8 *****)__Znwm(uVar13);
      uStack_70 = uVar13 | 0x8000000000000000;
      ppppuStack_78 = pppppuVar3;
      pppppuStack_80 = pppppuVar8;
    }
    else {
      uStack_70 = CONCAT17((char)pppppuStack_b0,(undefined7)uStack_70);
      pppppuVar8 = &pppppuStack_80;
    }
    _memmove(pppppuVar8,lVar7,pppppuVar3);
    *(undefined1 *)((long)pppppuVar8 + (long)pppppuVar3) = 0;
  }
  ppppuStack_58 = ppppuStack_78;
  pppppuStack_60 = pppppuStack_80;
  uStack_50 = uStack_70;
  iVar6 = func_0x007a20b4(param_1,2,0);
  auStack_90[0] = 0;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  uStack_88 = __ZNSt3__115system_categoryEv();
  func_0x00793bd0(param_1,0,0);
  if (iVar6 == 0) {
    __ZNSt3__14__fs10filesystem18directory_iteratorC1ERKNS1_4pathEPNS_10error_codeENS1_17directory_optionsE
              (&pppppuStack_80,&pppppuStack_60,auStack_90,2);
    ppppuVar4 = ppppuStack_78;
    if (ppppuStack_78 == (undefined8 ****)0x0) {
      ppppuStack_a8 = (undefined8 ****)0x0;
LAB_001f9a34:
      pppppuStack_b0 = pppppuStack_80;
    }
    else {
      ppppuStack_78[1] = (undefined8 ***)((long)ppppuStack_78[1] + 1);
      ppppuStack_a8 = ppppuStack_78;
      pppppuStack_b0 = pppppuStack_80;
      if (ppppuStack_78 == (undefined8 ****)0x0) goto LAB_001f9a34;
      ppppuVar1 = ppppuStack_78 + 1;
      *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
      LOAcquire();
      pppuVar5 = *ppppuVar1;
      *ppppuVar1 = (undefined8 ***)((long)pppuVar5 + -1);
      LORelease();
      if (pppuVar5 == (undefined8 ***)0x0) {
        (*(code *)(*ppppuStack_78)[2])(ppppuStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar4);
/* thanks for reading - discord.gg/sdkhDjTex */
      }
    }
    iVar6 = 1;
    while (pppppuStack_b0 != (undefined8 *****)0x0) {
      uVar9 = __ZNKSt3__14__fs10filesystem18directory_iterator13__dereferenceEv(&pppppuStack_b0);
      FUN_001f9bc0(param_1,uVar9);
      func_0x00794504(param_1,0xfffffffe,iVar6);
      iVar6 = iVar6 + 1;
      __ZNSt3__14__fs10filesystem18directory_iterator11__incrementEPNS_10error_codeE
                (&pppppuStack_b0,0);
    }
    goto LAB_001f9a84;
  }
  __ZNSt3__14__fs10filesystem28recursive_directory_iteratorC1ERKNS1_4pathENS1_17directory_optionsEPNS_10error_codeE
            (&pppppuStack_80,&pppppuStack_60,2,auStack_90);
  ppppuVar4 = ppppuStack_78;
  if (ppppuStack_78 == (undefined8 ****)0x0) {
LAB_001f99d8:
    uStack_a0 = (undefined1)uStack_70;
    ppppuStack_a8 = ppppuStack_78;
    pppppuStack_b0 = pppppuStack_80;
  }
  else {
    ppppuStack_78[1] = (undefined8 ***)((long)ppppuStack_78[1] + 1);
    pppppuStack_b0 = pppppuStack_80;
    ppppuStack_a8 = ppppuStack_78;
    uStack_a0 = (undefined1)uStack_70;
    if (ppppuStack_78 == (undefined8 ****)0x0) goto LAB_001f99d8;
    ppppuVar1 = ppppuStack_78 + 1;
    *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
    LOAcquire();
    pppuVar5 = *ppppuVar1;
    *ppppuVar1 = (undefined8 ***)((long)pppuVar5 + -1);
    LORelease();
    if (pppuVar5 == (undefined8 ***)0x0) {
      (*(code *)(*ppppuStack_78)[2])(ppppuStack_78);
/* do not claim this as your own - github.com/pengussy */
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar4);
    }
  }
  iVar6 = 1;
  while (pppppuStack_b0 != (undefined8 *****)0x0) {
    uVar9 = __ZNKSt3__14__fs10filesystem28recursive_directory_iterator13__dereferenceEv
                      (&pppppuStack_b0);
    FUN_001f9bc0(param_1,uVar9);
    func_0x00794504(param_1,0xfffffffe,iVar6);
    iVar6 = iVar6 + 1;
    __ZNSt3__14__fs10filesystem28recursive_directory_iterator11__incrementEPNS_10error_codeE
              (&pppppuStack_b0,0);
  }
LAB_001f9a84:
  ppppuVar4 = ppppuStack_a8;
  if (ppppuStack_a8 != (undefined8 ****)0x0) {
    LOAcquire();
    pppuVar5 = ppppuStack_a8[1];
    ppppuStack_a8[1] = (undefined8 ***)((long)pppuVar5 + -1);
    LORelease();
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
    if (pppuVar5 == (undefined8 ***)0x0) {
      (*(code *)(*ppppuStack_a8)[2])(ppppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar4);
    }
  }
  ppppuVar4 = ppppuStack_78;
  if (ppppuStack_78 != (undefined8 ****)0x0) {
    LOAcquire();
    pppuVar5 = ppppuStack_78[1];
    ppppuStack_78[1] = (undefined8 ***)((long)pppuVar5 + -1);
    LORelease();
    if (pppuVar5 == (undefined8 ***)0x0) {
      (*(code *)(*ppppuStack_78)[2])(ppppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar4);
    }
  }
  return 1;
}

