/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xf1584:de46967039
 */

undefined8 FUN_000f1584(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong extraout_x1;
  char cVar17;
  long lVar18;
  uint *puVar19;
  ulong uVar20;
/* thanks for reading - discord.gg/sdkhDjTex */
  ulong uVar21;
  ulong uVar22;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x27;
  int iStack_144;
  char *pcStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long *plStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint *puStack_80;
  long alStack_78 [3];
  
  iVar4 = func_0x00791efc(param_1,1);
  if (iVar4 == 0) {
    pbVar7 = (byte *)(*pcRam000000000206ba60)();
/* wm:if you paid for this, you were scammed */
    if ((*pbVar7 & 1) == 0) {
      func_0x019c6b00();
    }
    pcStack_138 = (char *)(*pcRam000000000206ba48)();
    if (*pcStack_138 == '\x01') {
      uVar1 = (byte)pcStack_138[1] ^ 0x6e8dd996;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x373164c3;
      pcStack_138[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x55;
      uVar20 = (((ulong)(byte)pcStack_138[1] ^ 0x7565aafef522c8c3) << 0x11 | 0xeacb) +
               0x9e3779b97f4a7c15;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_138[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
      pcStack_138[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_138[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_138[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
      pcStack_138[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_138[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_138[4] ^ (uint)uVar22 ^ 0xffffffc3;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
      pcStack_138[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_138[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_138[5] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
      pcStack_138[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_138[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_138[6] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
      pcStack_138[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_138[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_138[7] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
      pcStack_138[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_138[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_138[8] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
      pcStack_138[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar22;
// found on a paste site? it was re-uploaded illegally
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_138[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar20 ^ uVar20 >> 0x21;
      uVar1 = (uint)(byte)pcStack_138[9] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar20 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
      pcStack_138[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
      *pcStack_138 = '\0';
    }
    pcStack_138 = pcStack_138 + 10;
    uVar8 = func_0x0011ab24(&pcStack_138);
    func_0x007a1ba8(param_1,1,uVar8);
LAB_000f2b48:
    pbVar7 = (byte *)(*pcRam000000000206baf0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c6920();
    }
    pcStack_f8 = (char *)(*pcRam000000000206bad8)();
    if (*pcStack_f8 == '\x01') {
      lVar18 = 0;
      uVar20 = (unaff_x22 ^ 0xa5bf3f1ce5c1b77f ^ (unaff_x22 ^ 0xa5bf3f1ce5c1b77f) >> 0x21) *
               unaff_x27;
      uVar20 = (uVar20 ^ uVar20 >> 0x21) * unaff_x21;
// unlicensed copy if this notice is missing
      uVar20 = uVar20 ^ uVar20 >> 0x21;
      do {
        uVar21 = (uVar20 ^ uVar20 >> 0x21) * unaff_x27;
        uVar21 = (uVar21 ^ uVar21 >> 0x21) * unaff_x21;
        uVar22 = uVar21 ^ uVar21 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[lVar18 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_f8[lVar18 + 0x2f] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar22
        ;
        uVar20 = lVar18 + unaff_x23 +
                 (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_f8[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x2e);
      *pcStack_f8 = '\0';
    }
    pcStack_f8 = pcStack_f8 + 0x2f;
    func_0x0011ab24(&pcStack_f8);
    func_0x007a1b5c(param_1,"%s");
LAB_000f2c50:
    pbVar7 = (byte *)(*pcRam000000000206bb20)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c6ac4();
    }
    pcStack_130 = (char *)(*pcRam000000000206bb08)();
    if (*pcStack_130 == '\x01') {
      lVar18 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      uVar20 = (unaff_x22 ^ 0x248bb6766c3f5701 ^ (unaff_x22 ^ 0x248bb6766c3f5701) >> 0x21) *
               unaff_x27;
      uVar20 = (uVar20 ^ uVar20 >> 0x21) * unaff_x21;
      uVar20 = uVar20 ^ uVar20 >> 0x21;
      do {
        uVar21 = (uVar20 ^ uVar20 >> 0x21) * unaff_x27;
        uVar21 = (uVar21 ^ uVar21 >> 0x21) * unaff_x21;
        uVar22 = uVar21 ^ uVar21 >> 0x21;
        uVar1 = (uint)(byte)pcStack_130[lVar18 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar22 >> 0x17) ^
                ((uint)(uVar21 >> 0x29) | 1);
        pcStack_130[lVar18 + 0x19] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar22
        ;
        uVar20 = lVar18 + unaff_x23 +
                 (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_130[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x18);
      *pcStack_130 = '\0';
    }
    pcStack_130 = pcStack_130 + 0x19;
    func_0x0011ab24(&pcStack_130);
    func_0x007a1b5c(param_1,"%s");
  }
  else {
    pbVar7 = (byte *)(*pcRam000000000206ba90)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c68a8();
    }
    unaff_x27 = -0xae502812aa7333;
    unaff_x21 = -0x3b314601e57a13ad;
    unaff_x23 = -0x61c8864680b583eb;
    unaff_x22 = 0x8ebc6af09c88c6e3;
    pcStack_e8 = (char *)(*pcRam000000000206ba78)();
/* WM - keep the notice, keep the source honest */
    if (*pcStack_e8 == '\x01') {
      lVar18 = 0;
      uVar20 = 0x1cad2d4d9958ba62;
      do {
        uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
        uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar21 ^ uVar21 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[lVar18 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar21 >> 0x29) | 1)
        ;
        pcStack_e8[lVar18 + 0x1c] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar22;
        uVar20 = lVar18 + -0x61c8864680b583eb +
                 (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_e8[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x1b);
      *pcStack_e8 = '\0';
/* WM - proprietary - see LICENSE - do not sell */
    }
    pcStack_e8 = pcStack_e8 + 0x1c;
    uVar8 = func_0x0011ab24(&pcStack_e8);
    func_0x007a1ee4(param_1,0xc,uVar8);
    pcVar9 = (char *)func_0x007a25b0(param_1,1);
    pbVar7 = (byte *)(*pcRam000000000206bac0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c68e4();
    }
    pcStack_f0 = (char *)(*pcRam000000000206baa8)();
    if (*pcStack_f0 == '\x01') {
      lVar18 = 0;
      uVar20 = 0x1d2f6b59d897b875;
      do {
        uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
        uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar21 ^ uVar21 >> 0x21;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        uVar1 = (uint)(byte)pcStack_f0[lVar18 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_f0[lVar18 + 0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar22;
        uVar20 = lVar18 + -0x61c8864680b583eb +
                 (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_f0[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x10);
      *pcStack_f0 = '\0';
    }
    pcStack_f0 = pcStack_f0 + 0x11;
    pcVar10 = (char *)func_0x0011ab24(&pcStack_f0);
    cVar17 = *pcVar9;
    if (cVar17 != '\0') {
      do {
        pcVar9 = pcVar9 + 1;
        if (cVar17 != *pcVar10) break;
        pcVar10 = pcVar10 + 1;
        cVar17 = *pcVar9;
      } while (cVar17 != '\0');
    }
    if (cVar17 != *pcVar10) goto LAB_000f2b48;
    iVar4 = func_0x00793e98(param_1,1);
    if (iVar4 == 0) goto LAB_000f2c50;
    func_0x00791660(param_1,0xfffffffe);
    pbVar7 = (byte *)(*pcRam000000000206bb50)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c695c();
    }
    pcStack_100 = (char *)(*pcRam000000000206bb38)();
    if (*pcStack_100 == '\x01') {
// WM - proprietary - see LICENSE - do not sell
      uVar1 = (byte)pcStack_100[1] ^ 0xc09571a3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x282bf582;
      pcStack_100[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0xb ^ 0x60;
      uVar20 = (((ulong)(byte)pcStack_100[1] ^ 0x4330dfcd934a77cc) << 0x11 | 0x8661) +
               0x9e3779b97f4a7c15;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar22 >> 0x17);
      pcStack_100[10] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar22 >> 0x17);
      pcStack_100[0xb] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
// WM - reversing this took months of machine time
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[4] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar22 >> 0x17);
      pcStack_100[0xc] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[5] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar22 >> 0x17);
      pcStack_100[0xd] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
/* unlicensed copy if this notice is missing */
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[6] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar22 >> 0x17);
      pcStack_100[0xe] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[7] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar22 >> 0x17);
      pcStack_100[0xf] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_100[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar20 ^ uVar20 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[8] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar21 >> 0x17);
      pcStack_100[0x10] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar20 >> 0x29) | 1) ^
           (byte)uVar21;
      *pcStack_100 = '\0';
    }
    pcStack_100 = pcStack_100 + 9;
    uVar8 = func_0x0011ab24(&pcStack_100);
    func_0x007935a0(param_1,1,uVar8);
    iVar4 = func_0x00791be4(param_1,0xffffffff);
    if (iVar4 == 8) {
      func_0x00791ab0(param_1,1);
      func_0x007930d0(param_1,&DAT_0014fbe8,0,0,0);
// if you paid for this, you were scammed
      iVar4 = func_0x00794a14(param_1,2,1,0);
      if (iVar4 == 0) {
        uVar8 = func_0x00791624(param_1,0xffffffff);
        iVar4 = func_0x00791be4(param_1,uVar8);
        if (iVar4 == 9) {
          plVar11 = (long *)func_0x007926a8(param_1,uVar8);
          if (plVar11 == (long *)0x0) {
            lVar18 = 0;
            alStack_78[0] = 0;
            uVar20 = func_0x0003c0e8(0);
          }
          else {
            lVar18 = *plVar11;
            alStack_78[0] = lVar18;
            uVar20 = func_0x0003c0e8(lVar18);
          }
          if ((uVar20 & 1) != 0) {
            lVar12 = *(long *)(lVar18 + 0x20);
            uVar20 = func_0x0003c0e8();
            if ((uVar20 & 1) != 0) {
              uVar5 = func_0x007927ec(param_1,uVar8);
              puStack_80 = *(uint **)(lVar18 + 0x10);
              func_0x00793bd0(param_1,0,0);
              uVar6 = func_0x00791624(param_1,0xffffffff);
              uStack_a8 = 0;
/* WM - no support for modified copies */
              lStack_b0 = 0;
              uStack_98 = 0;
              plStack_a0 = (long *)0x0;
              uStack_90 = 0x3f800000;
              plStack_e0 = &lStack_b0;
              func_0x0016f7c4(&plStack_e0,alStack_78,alStack_78);
              if (puStack_80 != (uint *)0x0) {
                pcVar9 = (char *)(*pcRam000000000206bbc8)();
                pcVar10 = (char *)(*pcRam000000000206bbf8)();
                pcVar13 = (char *)(*pcRam000000000206bc28)();
                pcVar3 = pcRam000000000206bbe0;
                iStack_144 = 1;
                do {
                  plStack_e0 = &lStack_b0;
                  func_0x0016f7c4(&plStack_e0,&puStack_80,&puStack_80);
                  if ((extraout_x1 & 1) == 0) break;
                  uVar20 = func_0x0003c0e8(puStack_80);
                  if ((uVar20 & 1) == 0) break;
                  puVar19 = *(uint **)(puStack_80 + 4);
                  if (*(long *)(puStack_80 + 8) == lVar12 && 0 < (int)*puStack_80) {
                    func_0x000e2390(&plStack_e0);
                    puVar14 = (undefined8 *)func_0x0079564c(param_1,0x18,0);
                    *(undefined2 *)(puVar14 + 2) = 0;
                    *puVar14 = puStack_80;
                    puVar14[1] = 0;
                    func_0x00793bd0(param_1,0,0);
                    uVar15 = func_0x00791624(param_1,0xffffffff);
                    func_0x007933b8(param_1,0x1f26fe9,0);
                    puVar2 = puStack_80;
// WM - chat: discord.gg/sdkhDjTex
                    puVar14 = (undefined8 *)func_0x0079579c(param_1,0x18,uVar5);
                    *puVar14 = 0;
                    puVar14[1] = 0;
                    puVar14[2] = 0;
                    uVar20 = (ulong)*puVar2;
                    if (0 < (int)*puVar2) {
                      *puVar14 = puVar2;
                      puVar2[1] = puVar2[1] + 1;
                      uVar20 = uStack_d8;
                      if ((uStack_d8 != 0) && (lStack_d0 != 0)) {
                        puVar14[1] = uStack_d8 + 8;
                        puVar14[2] = lStack_d0;
                        uVar20 = *(ulong *)(lStack_d0 + 0x10);
                        *(ulong *)(lStack_d0 + 0x10) = uVar20 + 1;
                      }
                    }
                    func_0x00794428(uVar20,param_1,uVar15);
                    func_0x007933b8(param_1,0x1f26fea,0);
                    func_0x00791ab0(param_1,1);
                    func_0x00794428(param_1,uVar15);
                    func_0x007930d0(param_1,FUN_000e03fc,0,0,0);
                    pbVar7 = (byte *)(*pcVar3)(0x206bbe0);
                    if ((*pbVar7 & 1) == 0) {
                      func_0x019c69d4();
                    }
                    if (*pcVar9 == '\x01') {
                      uVar1 = (byte)pcVar9[1] ^ 0x73168150;
                      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x5a726198;
                      pcVar9[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x93;
                      uVar20 = (((ulong)(byte)pcVar9[1] ^ 0x71d151a693187f63) << 0x11 | 0xe3a2) +
                               0x9e3779b97f4a7c15;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar9[2] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
// reversing this took months of machine time
                      pcVar9[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar9[2]) << 0x11) +
                               0x9e3779b97f4a7c16;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar9[3] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar9[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar9[3]) << 0x11) +
                               0x9e3779b97f4a7c17;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar9[4] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar9[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar9[4]) << 0x11) +
                               0x9e3779b97f4a7c18;
/*  thanks for reading - discord.gg/sdkhDjTex  */
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar9[5] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar9[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar9[5]) << 0x11) +
                               0x9e3779b97f4a7c19;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar9[6] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar9[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar9[6]) << 0x11) +
                               0x9e3779b97f4a7c1a;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar9[7] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar9[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar9[7]) << 0x11) +
                               0x9e3779b97f4a7c1b;
                      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
                      uVar21 = uVar20 ^ uVar20 >> 0x21;
                      uVar1 = (uint)(byte)pcVar9[8] ^ (uint)uVar21 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                              (((uint)(uVar20 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
                      pcVar9[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar21;
                      *pcVar9 = '\0';
                    }
                    pcStack_110 = pcVar9 + 9;
                    uVar16 = func_0x0011ab24(&pcStack_110);
                    func_0x00794260(param_1,uVar15,uVar16);
                    pbVar7 = (byte *)(*pcRam000000000206bc10)();
                    if ((*pbVar7 & 1) == 0) {
                      func_0x019c6a10();
/*  unlicensed copy if this notice is missing  */
                      cVar17 = *pcVar10;
                    }
                    else {
                      cVar17 = *pcVar10;
                    }
                    if (cVar17 == '\x01') {
                      lVar18 = 0;
                      uVar20 = 0x37c07e3f61f73cf0;
                      do {
                        uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                        uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                        uVar22 = uVar21 ^ uVar21 >> 0x21;
                        uVar1 = (uint)(byte)pcVar10[lVar18 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
                        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                                (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                        pcVar10[lVar18 + 0x15] =
                             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar22;
                        uVar20 = lVar18 + -0x61c8864680b583eb +
                                 (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar10[lVar18 + 1]) << 0x11);
                        lVar18 = lVar18 + 1;
                      } while (lVar18 != 0x14);
                      *pcVar10 = '\0';
                    }
                    pcStack_118 = pcVar10 + 0x15;
                    uVar16 = func_0x0011ab24(&pcStack_118);
                    func_0x00792f00(param_1,uVar16);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                    pbVar7 = (byte *)(*pcRam000000000206bc40)();
                    if ((*pbVar7 & 1) == 0) {
                      func_0x019c6a4c();
                      cVar17 = *pcVar13;
                    }
                    else {
                      cVar17 = *pcVar13;
                    }
                    if (cVar17 == '\x01') {
                      uVar1 = (byte)pcVar13[1] ^ 0x347f1c5;
                      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xd89d8a4a;
                      pcVar13[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 6;
                      uVar20 = (((ulong)(byte)pcVar13[1] ^ 0x5f1e89af9805d531) << 0x11 | 0xbe3d) +
                               0x9e3779b97f4a7c15;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar13[2] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar13[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar13[2]) << 0x11) +
                               0x9e3779b97f4a7c16;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar13[3] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar13[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar22;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar13[3]) << 0x11) +
                               0x9e3779b97f4a7c17;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar13[4] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar13[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar13[4]) << 0x11) +
                               0x9e3779b97f4a7c18;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar13[5] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar13[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar13[5]) << 0x11) +
                               0x9e3779b97f4a7c19;
                      uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
                      uVar22 = uVar21 ^ uVar21 >> 0x21;
                      uVar1 = (uint)(byte)pcVar13[6] ^ (uint)uVar22 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                              (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                      pcVar13[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar22;
                      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar13[6]) << 0x11) +
                               0x9e3779b97f4a7c1a;
                      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
                      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
                      uVar21 = uVar20 ^ uVar20 >> 0x21;
                      uVar1 = (uint)(byte)pcVar13[7] ^ (uint)uVar21 ^ 0xffffffc3;
                      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                              (((uint)(uVar20 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
                      pcVar13[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar21;
                      *pcVar13 = '\0';
                    }
                    pcStack_120 = pcVar13 + 8;
                    uVar16 = func_0x0011ab24(&pcStack_120);
                    func_0x00794260(param_1,uVar15,uVar16);
                    func_0x007946cc(param_1,0xfffffffe);
                    func_0x00794504(param_1,uVar6,iStack_144);
                    plVar11 = plStack_c0;
                    if (plStack_c0 != (long *)0x0) {
                      LOAcquire();
                      lVar18 = plStack_c0[1];
                      plStack_c0[1] = lVar18 + -1;
/* wm:donate: donate/README.md */
                      LORelease();
                      if (lVar18 == 0) {
                        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                      }
                    }
                    iStack_144 = iStack_144 + 1;
                  }
                  puStack_80 = puVar19;
                } while (puVar19 != (uint *)0x0);
              }
              uVar20 = func_0x000f2ff8(param_1,uVar8);
              lVar18 = lStack_b0;
              plVar11 = plStack_a0;
              if ((uVar20 & 1) != 0) {
                for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                  lStack_b0 = lVar18;
                  __ZdlPv();
                  lVar18 = lStack_b0;
                }
                lStack_b0 = 0;
                if (lVar18 == 0) {
                  return 1;
                }
                __ZdlPv();
                return 1;
              }
              goto LAB_000f2e60;
            }
          }
        }
        func_0x000f2ff8(param_1,uVar8);
      }
      func_0x00791660(param_1,1);
/* do not claim this as your own */
      func_0x00793bd0(param_1,0,0);
      return 1;
    }
  }
  pbVar7 = (byte *)(*pcRam000000000206bb80)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019c6998();
  }
  pcStack_108 = (char *)(*pcRam000000000206bb68)();
  if (*pcStack_108 == '\x01') {
    lVar18 = 0;
    uVar20 = (unaff_x22 ^ 0x3cfcda7573a32cc7 ^ (unaff_x22 ^ 0x3cfcda7573a32cc7) >> 0x21) * unaff_x27
    ;
    uVar20 = (uVar20 ^ uVar20 >> 0x21) * unaff_x21;
    uVar20 = uVar20 ^ uVar20 >> 0x21;
    do {
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * unaff_x27;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * unaff_x21;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[lVar18 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar22 >> 0x17);
      pcStack_108[lVar18 + 0x19] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar21 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar20 = lVar18 + unaff_x23 +
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
               (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_108[lVar18 + 1]) << 0x11);
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0x18);
    *pcStack_108 = '\0';
  }
  pcStack_108 = pcStack_108 + 0x19;
  func_0x0011ab24(&pcStack_108);
  func_0x007a1b5c(param_1,"%s");
LAB_000f2e60:
  pbVar7 = (byte *)(*pcRam000000000206bc70)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019c6a88();
  }
  pcStack_128 = (char *)(*pcRam000000000206bc58)();
  if (*pcStack_128 == '\x01') {
    lVar18 = 0;
    uVar20 = (unaff_x27 * -0x5f33c84140a49765 ^ (ulong)(unaff_x27 * -0x5f33c84140a49765) >> 0x21) *
             unaff_x21;
    uVar20 = uVar20 ^ uVar20 >> 0x21;
    do {
      uVar21 = (uVar20 ^ uVar20 >> 0x21) * unaff_x27;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * unaff_x21;
      uVar22 = uVar21 ^ uVar21 >> 0x21;
      uVar1 = (uint)(byte)pcStack_128[lVar18 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17))
      ;
      pcStack_128[lVar18 + 0x1d] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar22;
      uVar20 = lVar18 + unaff_x23 +
               (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_128[lVar18 + 1]) << 0x11);
// watermarked copy - do not remove
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0x1c);
    *pcStack_128 = '\0';
  }
  pcStack_128 = pcStack_128 + 0x1d;
  func_0x0011ab24(&pcStack_128);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xf2f7c);
  (*pcVar3)();
}

