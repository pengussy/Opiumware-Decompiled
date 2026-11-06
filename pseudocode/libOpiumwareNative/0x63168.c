/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x63168:930720e43a
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00064888) */
/* WARNING: Removing unreachable block (ram,0x00064898) */

undefined8 FUN_00063168(undefined8 param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  char cVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  char *pcVar22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar23;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
// no support for modified copies
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  int aiStack_c8 [6];
  long *plStack_b0;
  long *plStack_a8;
  undefined8 ****ppppuStack_a0;
  ulong uStack_98;
  byte bStack_89;
  undefined8 ****ppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  iVar3 = func_0x00791efc(param_1,1);
  if (iVar3 == 0) {
    pbVar8 = (byte *)(*pcRam0000000002062c40)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bbfe8();
    }
    pcStack_130 = (char *)(*pcRam0000000002062c28)();
    if (*pcStack_130 == '\x01') {
      uVar19 = (byte)pcStack_130[1] ^ 0x244f62e5;
/*  keep the notice, keep the source honest  */
      uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) + 0x48214049 ^ 0x216df7;
      pcStack_130[10] = ((byte)(uVar19 >> 5) & 7 | (byte)(uVar19 << 3)) - 0x26;
      uVar17 = (((ulong)(byte)pcStack_130[1] ^ 0xf30ffc650e3e1024) << 0x11 | 0x1e61f) +
               0x9e3779b97f4a7c15;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_130[2] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_130[0xb] = ((byte)(uVar19 >> 5) & 7 | (byte)(uVar19 << 3)) - (char)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_130[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_130[3] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_130[0xc] = ((byte)(uVar19 >> 5) & 7 | (byte)(uVar19 << 3)) - (char)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_130[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_130[4] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_130[0xd] = ((byte)(uVar19 >> 5) & 7 | (byte)(uVar19 << 3)) - (char)uVar21;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_130[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_130[5] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_130[0xe] = ((byte)(uVar19 >> 5) & 7 | (byte)(uVar19 << 3)) - (char)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_130[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_130[6] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_130[0xf] = ((byte)(uVar19 >> 5) & 7 | (byte)(uVar19 << 3)) - (char)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_130[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_130[7] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_130[0x10] = ((byte)(uVar19 >> 5) & 7 | (byte)(uVar19 << 3)) - (char)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_130[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_130[8] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_130[0x11] = ((byte)(uVar19 >> 5) & 7 | (byte)(uVar19 << 3)) - (char)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_130[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar17 ^ uVar17 >> 0x21;
      uVar19 = (uint)(byte)pcStack_130[9] ^ (uint)uVar16 ^ 0xffffffc3;
/* wm:if you paid for this, you were scammed */
      uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar16 >> 0x17) ^
               ((uint)(uVar17 >> 0x29) | 1);
      pcStack_130[0x12] = ((byte)(uVar19 >> 5) & 7 | (byte)(uVar19 << 3)) - (char)uVar16;
      *pcStack_130 = '\0';
    }
    pcStack_130 = pcStack_130 + 10;
    uVar10 = func_0x0011ab24(&pcStack_130);
    func_0x007a1ba8(param_1,1,uVar10);
LAB_00064d0c:
    pbVar8 = (byte *)(*pcRam0000000002062c70)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bbfac();
    }
    pcStack_128 = (char *)(*pcRam0000000002062c58)();
    if (*pcStack_128 == '\x01') {
      uVar19 = (byte)pcStack_128[1] ^ 0x488d643a;
      uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) + 0x51f82692;
      pcStack_128[8] = ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') + 0x7f ^ 0xf9;
      uVar17 = (((ulong)(byte)pcStack_128[1] ^ 0x1a6bc1cf32583341) << 0x11 | 0x34d7) +
               0x9e3779b97f4a7c15;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_128[2] ^ (uint)uVar21 ^ 0xffffffc3;
// WM - found on a paste site? it was re-uploaded illegally
      uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) - (int)(uVar21 >> 0x17);
      pcStack_128[9] =
           ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_128[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_128[3] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) - (int)(uVar21 >> 0x17);
      pcStack_128[10] =
           ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_128[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_128[4] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) - (int)(uVar21 >> 0x17);
      pcStack_128[0xb] =
           ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_128[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
// thanks for reading - discord.gg/sdkhDjTex
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_128[5] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) - (int)(uVar21 >> 0x17);
      pcStack_128[0xc] =
           ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_128[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_128[6] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) - (int)(uVar21 >> 0x17);
      pcStack_128[0xd] =
           ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_128[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar17 ^ uVar17 >> 0x21;
      uVar19 = (uint)(byte)pcStack_128[7] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) - (int)(uVar16 >> 0x17);
      pcStack_128[0xe] =
           ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar16;
      *pcStack_128 = '\0';
    }
    pcStack_128 = pcStack_128 + 8;
/* WM - unlicensed copy if this notice is missing */
    uVar10 = func_0x0011ab24(&pcStack_128);
    func_0x007a1ba8(param_1,2,uVar10);
LAB_0006505c:
    pbVar8 = (byte *)(*pcRam0000000002062ca0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bbf70();
    }
    pcStack_120 = (char *)(*pcRam0000000002062c88)();
    if (*pcStack_120 == '\x01') {
      lVar12 = 0;
      uVar17 = 0xd5befb9bfd33db8f;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar16 ^ uVar16 >> 0x21;
        uVar19 = (uint)(byte)pcStack_120[lVar12 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) -
                 (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
        pcStack_120[lVar12 + 0x38] =
             ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') ^ (byte)uVar21;
        uVar17 = lVar12 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_120[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
/* WM - watermarked copy - do not remove */
      } while (lVar12 != 0x37);
      *pcStack_120 = '\0';
    }
    pcStack_120 = pcStack_120 + 0x38;
    func_0x0011ab24(&pcStack_120);
    func_0x007a1b5c(param_1,"%s");
LAB_000651a4:
    pbVar8 = (byte *)(*pcRam0000000002062d00)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bbd54();
    }
    pcStack_d8 = (char *)(*pcRam0000000002062ce8)();
    if (*pcStack_d8 == '\x01') {
      lVar12 = 0;
      uVar17 = (unaff_x24 * -0x785f0258f702fe5f ^ (ulong)(unaff_x24 * -0x785f0258f702fe5f) >> 0x21)
               * unaff_x25;
      uVar17 = uVar17 ^ uVar17 >> 0x21;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * unaff_x24;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * unaff_x25;
        uVar21 = uVar16 ^ uVar16 >> 0x21;
        uVar19 = (uint)(byte)pcStack_d8[lVar12 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar19 = (uVar19 >> 6 & 3 | uVar19 << 2) -
                 (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
        pcStack_d8[lVar12 + 0x38] = ((byte)(uVar19 >> 3) & 0x1f | (char)uVar19 * ' ') ^ (byte)uVar21
        ;
        uVar17 = lVar12 + unaff_x26 +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d8[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x37);
      *pcStack_d8 = '\0';
    }
    pcStack_d8 = pcStack_d8 + 0x38;
    func_0x0011ab24(&pcStack_d8);
    func_0x007a1b5c(param_1,"%s");
LAB_000652bc:
    FUN_0000aa50();
  }
  else {
    iVar3 = func_0x00791e54(param_1,2);
    if (iVar3 == 0) goto LAB_00064d0c;
    plVar7 = (long *)func_0x007926a8(param_1,1);
    alStack_70[0] = *plVar7;
    if (alStack_70[0] == 0) goto LAB_0006505c;
    pcVar22 = *(char **)(lRam0000000001f26710 + *(long *)(lRam0000000001f26720 + alStack_70[0]));
    pbVar8 = (byte *)(*pcRam0000000002062cd0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bbd18();
    }
    unaff_x24 = -0xae502812aa7333;
    unaff_x25 = -0x3b314601e57a13ad;
    unaff_x26 = -0x61c8864680b583eb;
    pcStack_d0 = (char *)(*pcRam0000000002062cb8)();
    if (*pcStack_d0 == '\x01') {
      uVar19 = (byte)pcStack_d0[1] ^ 0x81a9fd30;
// WM - reversing this took months of machine time
      uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) + 0xdf0352e1;
      pcStack_d0[7] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ 0xf3;
      uVar17 = (((ulong)(byte)pcStack_d0[1] ^ 0xd6891e052b882bc2) << 0x11 | 0x1ad12) +
               0x9e3779b97f4a7c15;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_d0[2] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
               (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
      pcStack_d0[8] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_d0[3] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
               (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
      pcStack_d0[9] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_d0[4] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
               (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
      pcStack_d0[10] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_d0[5] ^ (uint)uVar21 ^ 0xffffffc3;
/* wm:chat: discord.gg/sdkhDjTex */
      uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
               (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
      pcStack_d0[0xb] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar17 ^ uVar17 >> 0x21;
      uVar19 = (uint)(byte)pcStack_d0[6] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
               (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
      pcStack_d0[0xc] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar16;
      *pcStack_d0 = '\0';
    }
    pcStack_d0 = pcStack_d0 + 7;
    pcVar9 = (char *)func_0x0011ab24(&pcStack_d0);
    cVar15 = *pcVar22;
    if (cVar15 != '\0') {
      do {
        pcVar22 = pcVar22 + 1;
        if (cVar15 != *pcVar9) break;
        pcVar9 = pcVar9 + 1;
        cVar15 = *pcVar22;
      } while (cVar15 != '\0');
    }
    if (cVar15 != *pcVar9) goto LAB_000651a4;
    uVar10 = func_0x00792368(param_1,2,0);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    uVar17 = _strlen();
    if (0x7ffffffffffffff6 < uVar17) goto LAB_000652bc;
    if (uVar17 < 0x17) {
      uStack_78 = CONCAT17((char)uVar17,(undefined7)uStack_78);
      ppppuVar11 = &ppppuStack_88;
    }
    else {
      uVar16 = (uVar17 & 0x7ffffffffffffff8) + 8;
      uVar21 = 0x19;
      if (uVar16 != 0x18) {
        uVar21 = uVar16;
      }
      ppppuVar11 = (undefined8 ****)__Znwm(uVar21);
      uStack_78 = uVar21 | 0x8000000000000000;
      ppppuStack_88 = ppppuVar11;
      uStack_80 = uVar17;
    }
    _memmove(ppppuVar11,uVar10,uVar17);
    *(undefined1 *)((long)ppppuVar11 + uVar17) = 0;
    iVar4 = func_0x00791650(param_1);
    iVar3 = iVar4;
    if (iVar4 < 3) {
      iVar3 = 2;
    }
    lVar12 = (*pcRam0000000001f26dc0)
                       (lRam0000000001f267f0 + lRam0000000001f267b0 + lRam0000000002097040,
                        alStack_70);
    if (lVar12 != 0) {
      uVar17 = 0;
      puVar1 = (uint *)(lRam0000000001f267a0 + *(long *)(lVar12 + 0x18));
      uVar19 = (uint)puVar1;
      if (iRam0000000001f27048 < 3) {
        if (iRam0000000001f27048 == 1) {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          uVar20 = *puVar1 - uVar19;
          uVar17 = (ulong)(puVar1[1] - uVar19);
        }
        else {
          uVar20 = 0;
          if (iRam0000000001f27048 == 2) {
            pbVar8 = (byte *)CONCAT44(uVar19 - puVar1[1],uVar19 - *puVar1);
            if (*(ulong *)(*(long *)(pbVar8 + 0x38) + 0x48) <=
                *(ulong *)(*(long *)(pbVar8 + 0x38) + 0x50)) goto LAB_0006367c;
            goto LAB_00063688;
          }
        }
LAB_00063664:
        pbVar8 = (byte *)((ulong)uVar20 | uVar17 << 0x20);
        if (*(ulong *)(*(long *)(pbVar8 + 0x38) + 0x48) <=
            *(ulong *)(*(long *)(pbVar8 + 0x38) + 0x50)) {
LAB_0006367c:
          func_0x00819f9c(pbVar8,1);
        }
      }
      else if (iRam0000000001f27048 == 3) {
        pbVar8 = (byte *)CONCAT44(puVar1[1] ^ uVar19,*puVar1 ^ uVar19);
        if (*(ulong *)(*(long *)(pbVar8 + 0x38) + 0x48) <=
            *(ulong *)(*(long *)(pbVar8 + 0x38) + 0x50)) goto LAB_0006367c;
      }
      else {
        uVar20 = 0;
        if (iRam0000000001f27048 != 4) goto LAB_00063664;
        pbVar8 = (byte *)CONCAT44(puVar1[1] + uVar19,*puVar1 + uVar19);
        if (*(ulong *)(*(long *)(pbVar8 + 0x38) + 0x48) <=
            *(ulong *)(*(long *)(pbVar8 + 0x38) + 0x50)) goto LAB_0006367c;
      }
LAB_00063688:
      if ((*pbVar8 >> 2 & 1) != 0) {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        func_0x0081b5c4(pbVar8,pbVar8,pbVar8 + 0x28);
      }
      lVar12 = func_0x007914c4(pbVar8);
      uVar5 = func_0x00796158(pbVar8,0xffffffff);
      func_0x00791660(pbVar8,0xfffffffe);
      lVar18 = *(long *)(lVar12 + 0x20);
      uVar23 = *(undefined8 *)(alStack_70[0] + 0x10);
      uVar10 = *(undefined8 *)(alStack_70[0] + 8);
      if (*(long *)(alStack_70[0] + 0x10) != 0) {
        plVar7 = (long *)(*(long *)(alStack_70[0] + 0x10) + 0x10);
        *plVar7 = *plVar7 + 1;
      }
      lVar13 = *(long *)(lVar18 + 0x48);
      *(undefined8 *)(lVar18 + 0x48) = uVar23;
      *(undefined8 *)(lVar18 + 0x40) = uVar10;
      if (lVar13 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      func_0x00832c50(lVar12);
      *(undefined4 *)(*(long *)(lVar12 + 0x20) + 0x60) = 8;
      ppppuStack_a0 = (undefined8 ****)CONCAT44(ppppuStack_a0._4_4_,8);
      uVar17 = (*pcRam0000000001f26d48)(&ppppuStack_a0);
      *(ulong *)(*(long *)(lVar12 + 0x20) + 0x80) = uVar17 | 0x3fffffffffff00;
      puVar14 = (undefined4 *)(*pcRam0000000001f26d50)(lVar12);
      lVar18 = *(long *)(lVar12 + 0x20);
      *puVar14 = *(undefined4 *)(lVar18 + 0x60);
      *(undefined8 *)(puVar14 + 0xc) = *(undefined8 *)(lVar18 + 0x80);
      *(undefined1 *)
       (*(long *)(*(long *)(lVar18 + 0x18) + 0x10) + lRam0000000001f26810 + lRam0000000001f26830) =
           1;
      func_0x00046494(lVar12);
/* wm:stripping the watermark breaks the license */
      if ((lRam0000000002097088 == 0) ||
         (lVar18 = func_0x0013b76c(0x2097070,lVar12 + 0x80), lVar18 == 0)) {
        ppppuStack_a0 = (undefined8 ****)0x2097070;
        func_0x0016e5c8(&ppppuStack_a0,lVar12 + 0x80,lVar12 + 0x80);
        pbVar8 = (byte *)(*pcRam0000000002062d60)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019bbd90();
        }
        pcStack_e0 = (char *)(*pcRam0000000002062d48)();
        if (*pcStack_e0 == '\x01') {
          uVar19 = (byte)pcStack_e0[1] ^ 0x4aa7e726;
          uVar19 = (uVar19 >> 2 & 0x3f | uVar19 << 6) + 0x23cfec96 ^ 0x13b70d;
          pcStack_e0[6] = ((byte)(uVar19 >> 2) & 0x3f | (byte)(uVar19 << 6)) + 0x1b;
          uVar17 = (((ulong)(byte)pcStack_e0[1] ^ 0x80352dea4dab1b25) << 0x11 | 0x1006a) +
                   0x9e3779b97f4a7c15;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e0[2] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 2 & 0x3f | uVar19 << 6) - (int)(uVar21 >> 0x17) ^
                   ((uint)(uVar16 >> 0x29) | 1);
          pcStack_e0[7] = ((byte)(uVar19 >> 2) & 0x3f | (byte)(uVar19 << 6)) - (char)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e0[3] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 2 & 0x3f | uVar19 << 6) - (int)(uVar21 >> 0x17) ^
                   ((uint)(uVar16 >> 0x29) | 1);
          pcStack_e0[8] = ((byte)(uVar19 >> 2) & 0x3f | (byte)(uVar19 << 6)) - (char)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e0[4] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 2 & 0x3f | uVar19 << 6) - (int)(uVar21 >> 0x17) ^
                   ((uint)(uVar16 >> 0x29) | 1);
          pcStack_e0[9] = ((byte)(uVar19 >> 2) & 0x3f | (byte)(uVar19 << 6)) - (char)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e0[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar17 ^ uVar17 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e0[5] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 2 & 0x3f | uVar19 << 6) - (int)(uVar16 >> 0x17) ^
                   ((uint)(uVar17 >> 0x29) | 1);
          pcStack_e0[10] = ((byte)(uVar19 >> 2) & 0x3f | (byte)(uVar19 << 6)) - (char)uVar16;
          *pcStack_e0 = '\0';
        }
        pcStack_e0 = pcStack_e0 + 6;
        uVar10 = func_0x0011ab24(&pcStack_e0);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        func_0x007935a0(lVar12,0xffffd8ee,uVar10);
        pbVar8 = (byte *)(*pcRam0000000002062d90)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019bbdcc();
        }
        pcStack_e8 = (char *)(*pcRam0000000002062d78)();
        if (*pcStack_e8 == '\x01') {
          uVar19 = (byte)pcStack_e8[1] ^ 0x3a751e55;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) + 0x5f0af875;
          pcStack_e8[0xc] = ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - 0x3d ^ 0x96;
          uVar17 = (((ulong)(byte)pcStack_e8[1] ^ 0xff657487ab094e42) << 0x11 | 0x1feca) +
                   0x9e3779b97f4a7c15;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_e8[0xd] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
/* wm:reversing this took months of machine time */
          pcStack_e8[0xe] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_e8[0xf] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[5] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_e8[0x10] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[6] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_e8[0x11] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[7] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
/*  found on a paste site? it was re-uploaded illegally  */
          pcStack_e8[0x12] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[8] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_e8[0x13] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[9] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_e8[0x14] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
// found on a paste site? it was re-uploaded illegally
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[10] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_e8[0x15] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar17 ^ uVar17 >> 0x21;
          uVar19 = (uint)(byte)pcStack_e8[0xb] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar16 >> 0x17);
          pcStack_e8[0x16] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
               (byte)uVar16;
          *pcStack_e8 = '\0';
        }
        pcStack_e8 = pcStack_e8 + 0xc;
        uVar10 = func_0x0011ab24(&pcStack_e8);
        func_0x007a21e4(lVar12,0xffffffff,uVar10);
        plVar7 = (long *)func_0x00790f58(lVar12,0xffffffff);
        if (lRam0000000002097158 == 0) {
          lRam0000000002097158 = *(long *)(*plVar7 + 0x18);
        }
/* no support for modified copies - github.com/pengussy */
        *(undefined **)(*plVar7 + 0x18) = &DAT_000406a4;
        func_0x00791660(lVar12,0xfffffffd);
        pbVar8 = (byte *)(*pcRam0000000002062dc0)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019bbe08();
        }
        pcStack_f0 = (char *)(*pcRam0000000002062da8)();
        if (*pcStack_f0 == '\x01') {
          uVar19 = (byte)pcStack_f0[1] ^ 0x3676c058;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) + 0xea37e46d;
          pcStack_f0[6] = ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') + 0x8d ^ 0x9b;
          uVar17 = (((ulong)(byte)pcStack_f0[1] ^ 0xcafbe6e4305e8743) << 0x11 | 0x195f7) +
                   0x9e3779b97f4a7c15;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_f0[7] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_f0[8] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f0[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
// do not claim this as your own
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f0[4] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar21 >> 0x17);
          pcStack_f0[9] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f0[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar17 ^ uVar17 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f0[5] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 3 & 0x1f | uVar19 << 5) - (int)(uVar16 >> 0x17);
          pcStack_f0[10] =
               ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
               (byte)uVar16;
          *pcStack_f0 = '\0';
        }
        pcStack_f0 = pcStack_f0 + 6;
        uVar10 = func_0x0011ab24(&pcStack_f0);
        func_0x007935a0(lVar12,0xffffd8ee,uVar10);
        pbVar8 = (byte *)(*pcRam0000000002062df0)();
/* WM - no support for modified copies */
        if ((*pbVar8 & 1) == 0) {
          func_0x019bbe44();
        }
        pcStack_f8 = (char *)(*pcRam0000000002062dd8)();
        if (*pcStack_f8 == '\x01') {
          uVar19 = (byte)pcStack_f8[1] ^ 0x9cf2c25b;
          uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) + 0xb5b7bac7;
          pcStack_f8[9] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ 0x98;
          uVar17 = (((ulong)(byte)pcStack_f8[1] ^ 0xbb2254d4645e9578) << 0x11 | 0x17644) +
                   0x9e3779b97f4a7c15;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f8[2] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
          pcStack_f8[10] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f8[3] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
          pcStack_f8[0xb] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
/* no support for modified copies */
          uVar19 = (uint)(byte)pcStack_f8[4] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
          pcStack_f8[0xc] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f8[5] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
          pcStack_f8[0xd] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f8[6] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
          pcStack_f8[0xe] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
/* watermarked copy - do not remove - github.com/pengussy */
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f8[7] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
          pcStack_f8[0xf] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar17 ^ uVar17 >> 0x21;
          uVar19 = (uint)(byte)pcStack_f8[8] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) -
                   (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_f8[0x10] = ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar16;
          *pcStack_f8 = '\0';
        }
        pcStack_f8 = pcStack_f8 + 9;
        uVar10 = func_0x0011ab24(&pcStack_f8);
        func_0x007a21e4(lVar12,0xffffffff,uVar10);
        plVar7 = (long *)func_0x00790f58(lVar12,0xffffffff);
        if (lRam0000000002097150 == 0) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          lRam0000000002097150 = *(long *)(*plVar7 + 0x18);
        }
        *(undefined **)(*plVar7 + 0x18) = &DAT_0003e4fc;
        func_0x00791660(lVar12,0xfffffffd);
      }
      func_0x001d774c(&ppppuStack_a0,&ppppuStack_88,1);
      pbVar8 = (byte *)(*pcRam0000000002062e20)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019bbe80();
      }
      pcStack_100 = (char *)(*pcRam0000000002062e08)();
      if (*pcStack_100 == '\x01') {
        lVar18 = 0;
        uVar17 = 0x56b67ba9ba0ce2a6;
        do {
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_100[lVar18 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
          pcStack_100[lVar18 + 0xf] =
               ((byte)(uVar19 >> 2) & 0x3f | (char)uVar19 * '@') ^ (byte)uVar21;
          uVar17 = lVar18 + -0x61c8864680b583eb +
                   (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_100[lVar18 + 1]) << 0x11);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0xe);
        *pcStack_100 = '\0';
      }
      pcStack_100 = pcStack_100 + 0xf;
      uVar10 = func_0x0011ab24(&pcStack_100);
      ppppuVar11 = ppppuStack_a0;
// WM - chat: discord.gg/sdkhDjTex
      if (-1 < (char)bStack_89) {
        uStack_98 = (ulong)bStack_89;
        ppppuVar11 = &ppppuStack_a0;
      }
      iVar6 = func_0x0090436c(lVar12,uVar10,ppppuVar11,uStack_98,0);
      if (iVar6 == 0) {
        plVar7 = (long *)func_0x00790f58(lVar12,0xffffffff);
        func_0x0003c048(*(undefined8 *)(*plVar7 + 0x18));
        if (2 < iVar4) {
          iVar4 = 3;
          iVar6 = iVar3 + -2;
          do {
            func_0x00062e10(param_1,lVar12,iVar4,0);
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        plStack_a8 = (long *)__Znwm(0x50);
        plStack_a8[1] = 0;
        plStack_a8[2] = 0;
        *plStack_a8 = (long)&UNK_01dbf3e0;
        plStack_a8[6] = 0;
        plStack_a8[5] = 0;
        plStack_a8[8] = 0;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        plStack_a8[7] = 0;
        plStack_b0 = plStack_a8 + 3;
        plStack_a8[4] = 0;
        *plStack_b0 = 0;
        plStack_a8[6] = -1;
        plStack_a8[8] = lVar12;
        plStack_a8[9] = 0;
        *(undefined4 *)(plStack_a8 + 9) = uVar5;
        (*pcRam0000000001f26dc8)
                  (aiStack_c8,
                   lRam0000000001f26820 +
                   *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0x18) + 0x10),&plStack_b0,
                   iVar3 + -2,0,0);
        pcVar2 = pcRam0000000001f26db0;
        if (aiStack_c8[0] == 2) {
          pbVar8 = (byte *)(*pcRam0000000002062e80)();
          if ((*pbVar8 & 1) == 0) {
            func_0x019bbef8();
          }
          pcStack_110 = (char *)(*pcRam0000000002062e68)();
          if (*pcStack_110 == '\x01') {
            lVar18 = 0;
            uVar17 = 0x5e45ce4cc478c34d;
/* reversing this took months of machine time - github.com/pengussy */
            do {
              uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar21 = uVar16 ^ uVar16 >> 0x21;
              uVar19 = (uint)(byte)pcStack_110[lVar18 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
              uVar19 = (uVar19 >> 4 & 0xf | uVar19 << 4) -
                       (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
              pcStack_110[lVar18 + 0x1f] =
                   ((byte)(uVar19 >> 5) & 7 | (char)uVar19 * '\b') ^ (byte)uVar21;
              uVar17 = lVar18 + -0x61c8864680b583eb +
                       (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_110[lVar18 + 1]) << 0x11);
              lVar18 = lVar18 + 1;
            } while (lVar18 != 0x1e);
            *pcStack_110 = '\0';
          }
          pcStack_110 = pcStack_110 + 0x1f;
          uVar10 = func_0x0011ab24(&pcStack_110);
          func_0x00792368(lVar12,0xffffffff,0);
          (*pcVar2)(2,uVar10);
          func_0x00791660(lVar12,0xfffffffe);
        }
        plVar7 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          LOAcquire();
          lVar12 = plStack_a8[1];
          plStack_a8[1] = lVar12 + -1;
          LORelease();
          if (lVar12 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        return 0;
      }
// keep the notice, keep the source honest
      pbVar8 = (byte *)(*pcRam0000000002062e50)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019bbebc();
      }
      pcStack_108 = (char *)(*pcRam0000000002062e38)();
      if (*pcStack_108 == '\x01') {
        lVar18 = 0;
        uVar17 = 0xa152cf6c41528385;
        do {
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar16 ^ uVar16 >> 0x21;
          uVar19 = (uint)(byte)pcStack_108[lVar18 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar19 = (uVar19 >> 1 & 0x7f | uVar19 << 7) - (int)(uVar21 >> 0x17);
          pcStack_108[lVar18 + 0x19] =
               ((byte)(uVar19 >> 7) & 1 | (char)uVar19 * '\x02') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = lVar18 + -0x61c8864680b583eb +
                   (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_108[lVar18 + 1]) << 0x11);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x18);
        *pcStack_108 = '\0';
      }
      pcStack_108 = pcStack_108 + 0x19;
      uVar10 = func_0x0011ab24(&pcStack_108);
      func_0x00792368(lVar12,0xffffffff,0);
      func_0x007a1b5c(param_1,uVar10);
/* wm:watermarked copy - do not remove */
      goto LAB_00065504;
    }
  }
  pbVar8 = (byte *)(*pcRam0000000002062d30)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019bbf34();
  }
  pcStack_118 = (char *)(*pcRam0000000002062d18)();
  if (*pcStack_118 == '\x01') {
    lVar12 = 0;
    uVar17 = (unaff_x24 * -0x69eebb7331d1834a ^ (ulong)(unaff_x24 * -0x69eebb7331d1834a) >> 0x21) *
             unaff_x25;
    uVar17 = uVar17 ^ uVar17 >> 0x21;
    do {
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * unaff_x24;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * unaff_x25;
      uVar21 = uVar16 ^ uVar16 >> 0x21;
      uVar19 = (uint)(byte)pcStack_118[lVar12 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar19 = (uVar19 >> 5 & 7 | uVar19 << 3) - (int)(uVar21 >> 0x17);
      pcStack_118[lVar12 + 0x4c] =
           ((byte)(uVar19 >> 4) & 0xf | (char)uVar19 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar17 = lVar12 + unaff_x26 +
               (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_118[lVar12 + 1]) << 0x11);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x4b);
    *pcStack_118 = '\0';
  }
  pcStack_118 = pcStack_118 + 0x4c;
  func_0x0011ab24(&pcStack_118);
  func_0x007a1b5c(param_1,"%s");
LAB_00065504:
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x65508);
  (*pcVar2)();
}

