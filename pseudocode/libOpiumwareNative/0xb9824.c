/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xb9824:ff1775b142
 */

undefined8 FUN_000b9824(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  char *pcVar14;
  uint uVar15;
  ulong uVar16;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  double dVar17;
  float fVar18;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
/* reversing this took months of machine time - github.com/pengussy */
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) goto LAB_000bb9d0;
  pbVar3 = (byte *)(*pcRam00000000020681f0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2294();
  }
  unaff_x21 = -0xae502812aa7333;
  unaff_x22 = -0x3b314601e57a13ad;
  unaff_x23 = -0x61c8864680b583eb;
  unaff_x24 = 0x8ebc6af09c88c6e3;
  pcStack_68 = (char *)(*pcRam00000000020681d8)();
  if (*pcStack_68 == '\x01') {
    uVar15 = (byte)pcStack_68[1] ^ 0x661ab54d;
    uVar15 = (uVar15 >> 1 & 0x7f | uVar15 << 7) + 0x7028dcee;
    pcStack_68[5] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ 0x8e;
    uVar11 = (((ulong)(byte)pcStack_68[1] ^ 0xd8c6d548a829fd3f) << 0x11 | 0x1b18d) +
             0x9e3779b97f4a7c15;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/* wm:if you paid for this, you were scammed */
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar15 = (uint)(byte)pcStack_68[2] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 1 & 0x7f | uVar15 << 7) -
             (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcStack_68[6] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ (byte)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar15 = (uint)(byte)pcStack_68[3] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 1 & 0x7f | uVar15 << 7) -
             (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcStack_68[7] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ (byte)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar11 ^ uVar11 >> 0x21;
    uVar15 = (uint)(byte)pcStack_68[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 1 & 0x7f | uVar15 << 7) -
             (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_68[8] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ (byte)uVar10;
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 5;
  uVar4 = func_0x0011ab24(&pcStack_68);
  func_0x007935a0(param_1,1,uVar4);
  func_0x00791ab0(param_1,1);
  pbVar3 = (byte *)(*pcRam0000000002068220)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c22d0();
  }
  pcStack_70 = (char *)(*pcRam0000000002068208)();
  if (*pcStack_70 == '\x01') {
    lVar12 = 0;
/* wm:unlicensed copy if this notice is missing */
    uVar11 = 0x88e244057ae91260;
    do {
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar10 ^ uVar10 >> 0x21;
      uVar15 = (uint)(byte)pcStack_70[lVar12 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) -
               (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
      pcStack_70[lVar12 + 0xf] = ((byte)(uVar15 >> 1) & 0x7f | (char)uVar15 * -0x80) ^ (byte)uVar16;
      uVar11 = lVar12 + -0x61c8864680b583eb +
               (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_70[lVar12 + 1]) << 0x11);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0xe);
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 0xf;
  uVar4 = func_0x0011ab24(&pcStack_70);
  func_0x00792f00(param_1,uVar4);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if ((iVar2 != 0) || (iVar2 = func_0x00792220(param_1,0xffffffff), iVar2 == 0)) {
    pbVar3 = (byte *)(*pcRam0000000002068250)();
    if ((*pbVar3 & 1) == 0) goto LAB_000bbdd8;
    do {
      pcStack_d8 = (char *)(*pcRam0000000002068238)();
      if (*pcStack_d8 == '\x01') {
        lVar12 = 0;
// chat: discord.gg/sdkhDjTex
        uVar11 = (unaff_x24 ^ 0x3f75571edeec440f ^ (unaff_x24 ^ 0x3f75571edeec440f) >> 0x21) *
                 unaff_x21;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * unaff_x22;
        uVar11 = uVar11 ^ uVar11 >> 0x21;
        do {
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * unaff_x21;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * unaff_x22;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_d8[lVar12 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) -
                   (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[lVar12 + 0x18] =
               ((byte)(uVar15 >> 6) & 3 | (char)uVar15 * '\x04') ^ (byte)uVar16;
          uVar11 = lVar12 + unaff_x23 +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_d8[lVar12 + 1]) << 0x11);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x17);
        *pcStack_d8 = '\0';
      }
      pcStack_d8 = pcStack_d8 + 0x18;
      uVar4 = func_0x0011ab24(&pcStack_d8);
      func_0x007a1abc(param_1,1,uVar4);
LAB_000bb9d0:
      pbVar3 = (byte *)(*pcRam00000000020681c0)();
      if ((*pbVar3 & 1) == 0) {
        func_0x019c2618();
      }
      pcStack_e0 = (char *)(*pcRam00000000020681a8)();
      if (*pcStack_e0 == '\x01') {
        uVar15 = (byte)pcStack_e0[1] ^ 0xb074d16c;
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) + 0xd69b361;
        pcStack_e0[10] = ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') + 0x5b ^ 0xaf;
        uVar11 = (((ulong)(byte)pcStack_e0[1] ^ 0x870fdaa9435494fc) << 0x11 | 0x10e1f) +
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_e0[2] ^ (uint)uVar16 ^ 0xffffffc3;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar16 >> 0x17);
        pcStack_e0[0xb] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_e0[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar16 >> 0x17);
        pcStack_e0[0xc] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_e0[4] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar16 >> 0x17);
        pcStack_e0[0xd] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e0[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_e0[5] ^ (uint)uVar16 ^ 0xffffffc3;
/*  more drops soon - github.com/pengussy  */
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar16 >> 0x17);
        pcStack_e0[0xe] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e0[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_e0[6] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar16 >> 0x17);
        pcStack_e0[0xf] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_e0[7] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar16 >> 0x17);
        pcStack_e0[0x10] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_e0[8] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar16 >> 0x17);
        pcStack_e0[0x11] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar11 ^ uVar11 >> 0x21;
/*  proprietary - see LICENSE - do not sell  */
        uVar15 = (uint)(byte)pcStack_e0[9] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar10 >> 0x17);
        pcStack_e0[0x12] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar10;
        *pcStack_e0 = '\0';
      }
      pcStack_e0 = pcStack_e0 + 10;
      uVar4 = func_0x0011ab24(&pcStack_e0);
      func_0x007a1ba8(param_1,1,uVar4);
LAB_000bbdd8:
      func_0x019c25dc();
    } while( true );
  }
  func_0x00791660(param_1,0xfffffffe);
  iVar2 = func_0x00791db8(param_1,2);
  if (iVar2 == 0) {
    iVar2 = func_0x00791db8(param_1,3);
    if (iVar2 != 0) {
      dVar17 = (double)func_0x007920a4(param_1,3,0);
      fVar18 = (float)dVar17;
      iVar2 = func_0x00791e54(param_1,2);
/*  origin: github.com/pengussy  */
      if (iVar2 != 0) {
        pcVar5 = (char *)func_0x00792368(param_1,2,0);
        pbVar3 = (byte *)(*pcRam0000000002068340)();
        if ((*pbVar3 & 1) == 0) {
          func_0x019c23fc();
        }
        pcStack_98 = (char *)(*pcRam0000000002068328)();
        if (*pcStack_98 == '\x01') {
          uVar15 = (byte)pcStack_98[1] ^ 0xb027d043;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) + 0x85292f61;
          pcStack_98[0xc] = ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') + 0x4b ^ 0x80;
          uVar11 = (((ulong)(byte)pcStack_98[1] ^ 0x19166a0226246dd7) << 0x11 | 0x322c) +
                   0x9e3779b97f4a7c15;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[2] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
          pcStack_98[0xd] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[3] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
          pcStack_98[0xe] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
// WM - reversing this took months of machine time
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[4] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
          pcStack_98[0xf] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[5] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
          pcStack_98[0x10] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[6] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
          pcStack_98[0x11] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[7] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
          pcStack_98[0x12] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar16;
/*  found on a paste site? it was re-uploaded illegally  */
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[8] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
          pcStack_98[0x13] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[9] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
          pcStack_98[0x14] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar10 ^ uVar10 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[10] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
          pcStack_98[0x15] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar11 ^ uVar11 >> 0x21;
          uVar15 = (uint)(byte)pcStack_98[0xb] ^ (uint)uVar10 ^ 0xffffffc3;
/* do not claim this as your own */
          uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar10 >> 0x17);
          pcStack_98[0x16] =
               ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar10;
          *pcStack_98 = '\0';
        }
        pcStack_98 = pcStack_98 + 0xc;
        pcVar6 = (char *)func_0x0011ab24(&pcStack_98);
        cVar9 = *pcVar5;
        if (cVar9 != '\0') {
          pcVar14 = pcVar5;
          do {
            pcVar14 = pcVar14 + 1;
            if (cVar9 != *pcVar6) break;
            pcVar6 = pcVar6 + 1;
            cVar9 = *pcVar14;
          } while (cVar9 != '\0');
/* do not claim this as your own - github.com/pengussy */
        }
        if (cVar9 != *pcVar6) {
          pbVar3 = (byte *)(*pcRam0000000002068370)();
          if ((*pbVar3 & 1) == 0) {
            func_0x019c2438();
          }
          pcStack_a0 = (char *)(*pcRam0000000002068358)();
          if (*pcStack_a0 == '\x01') {
            lVar12 = 0;
            uVar11 = 0xf2beba4fe3139032;
            do {
              uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
              uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
              uVar16 = uVar10 ^ uVar10 >> 0x21;
              uVar15 = (uint)(byte)pcStack_a0[lVar12 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
              uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17) ^
/* if you paid for this, you were scammed */
                       ((uint)(uVar10 >> 0x29) | 1);
              pcStack_a0[lVar12 + 0x11] =
                   ((byte)(uVar15 >> 6) & 3 | (byte)(uVar15 << 2)) - (char)uVar16;
              uVar11 = lVar12 + -0x61c8864680b583eb +
                       (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a0[lVar12 + 1]) << 0x11);
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0x10);
            *pcStack_a0 = '\0';
          }
          pcStack_a0 = pcStack_a0 + 0x11;
          pcVar6 = (char *)func_0x0011ab24(&pcStack_a0);
          cVar9 = *pcVar5;
          if (cVar9 != '\0') {
            pcVar14 = pcVar5;
            do {
              pcVar14 = pcVar14 + 1;
              if (cVar9 != *pcVar6) break;
              pcVar6 = pcVar6 + 1;
              cVar9 = *pcVar14;
            } while (cVar9 != '\0');
          }
          if (cVar9 != *pcVar6) {
            pbVar3 = (byte *)(*pcRam00000000020683a0)();
            if ((*pbVar3 & 1) == 0) {
              func_0x019c2474();
            }
            pcStack_a8 = (char *)(*pcRam0000000002068388)();
            if (*pcStack_a8 == '\x01') {
              lVar12 = 0;
              uVar11 = 0xe869e3e35833b8ea;
              do {
                uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar16 = uVar10 ^ uVar10 >> 0x21;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                uVar15 = (uint)(byte)pcStack_a8[lVar12 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
                uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) -
                         (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
                pcStack_a8[lVar12 + 0x11] =
                     ((byte)(uVar15 >> 3) & 0x1f | (char)uVar15 * ' ') ^ (byte)uVar16;
                uVar11 = lVar12 + -0x61c8864680b583eb +
                         (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[lVar12 + 1]) << 0x11);
                lVar12 = lVar12 + 1;
              } while (lVar12 != 0x10);
              *pcStack_a8 = '\0';
            }
            pcStack_a8 = pcStack_a8 + 0x11;
            pcVar6 = (char *)func_0x0011ab24(&pcStack_a8);
            cVar9 = *pcVar5;
            if (cVar9 != '\0') {
              pcVar14 = pcVar5;
              do {
                pcVar14 = pcVar14 + 1;
                if (cVar9 != *pcVar6) break;
                pcVar6 = pcVar6 + 1;
                cVar9 = *pcVar14;
              } while (cVar9 != '\0');
            }
            if (cVar9 == *pcVar6) goto LAB_000bb728;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
            pbVar3 = (byte *)(*pcRam00000000020683d0)();
            if ((*pbVar3 & 1) == 0) {
              func_0x019c24b0();
            }
            pcStack_b0 = (char *)(*pcRam00000000020683b8)();
            if (*pcStack_b0 == '\x01') {
              lVar12 = 0;
              uVar11 = 0xeea1653fa0ce804e;
              do {
                uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar16 = uVar10 ^ uVar10 >> 0x21;
                uVar15 = (uint)(byte)pcStack_b0[lVar12 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
                uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) - (int)(uVar16 >> 0x17) ^
                         ((uint)(uVar10 >> 0x29) | 1);
                pcStack_b0[lVar12 + 0x11] =
                     ((byte)(uVar15 >> 1) & 0x7f | (byte)(uVar15 << 7)) - (char)uVar16;
                uVar11 = lVar12 + -0x61c8864680b583eb +
                         (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b0[lVar12 + 1]) << 0x11);
                lVar12 = lVar12 + 1;
              } while (lVar12 != 0x10);
              *pcStack_b0 = '\0';
            }
            pcStack_b0 = pcStack_b0 + 0x11;
            pcVar6 = (char *)func_0x0011ab24(&pcStack_b0);
            cVar9 = *pcVar5;
            if (cVar9 != '\0') {
              do {
                pcVar5 = pcVar5 + 1;
                if (cVar9 != *pcVar6) break;
                pcVar6 = pcVar6 + 1;
// WM - chat: discord.gg/sdkhDjTex
                cVar9 = *pcVar5;
              } while (cVar9 != '\0');
            }
            goto LAB_000bb848;
          }
          goto LAB_000bb5fc;
        }
      }
      goto LAB_000ba8e4;
    }
    uVar15 = 0;
    fVar18 = 1.0;
  }
  else {
    dVar17 = (double)func_0x007920a4(param_1,2,0);
    fVar18 = (float)dVar17;
    iVar2 = func_0x00791e54(param_1,3);
    if (iVar2 != 0) {
      pcVar5 = (char *)func_0x00792368(param_1,3,0);
      pbVar3 = (byte *)(*pcRam0000000002068280)();
      if ((*pbVar3 & 1) == 0) {
        func_0x019c230c();
      }
      pcStack_78 = (char *)(*pcRam0000000002068268)();
      if (*pcStack_78 == '\x01') {
        uVar15 = (byte)pcStack_78[1] ^ 0x32dedafe;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) + 0xec1abc66 ^ 0x2fc4f9;
        pcStack_78[0xc] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - 0x3d;
// WM - origin: github.com/pengussy
        uVar11 = (((ulong)(byte)pcStack_78[1] ^ 0xc2694248bea520d7) << 0x11 | 0x184d2) +
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_78[2] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar16 >> 0x17) ^
                 ((uint)(uVar10 >> 0x29) | 1);
        pcStack_78[0xd] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_78[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar16 >> 0x17) ^
                 ((uint)(uVar10 >> 0x29) | 1);
        pcStack_78[0xe] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
/*  if you paid for this, you were scammed  */
        uVar15 = (uint)(byte)pcStack_78[4] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar16 >> 0x17) ^
                 ((uint)(uVar10 >> 0x29) | 1);
        pcStack_78[0xf] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_78[5] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar16 >> 0x17) ^
                 ((uint)(uVar10 >> 0x29) | 1);
        pcStack_78[0x10] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_78[6] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar16 >> 0x17) ^
                 ((uint)(uVar10 >> 0x29) | 1);
        pcStack_78[0x11] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_78[7] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar16 >> 0x17) ^
                 ((uint)(uVar10 >> 0x29) | 1);
        pcStack_78[0x12] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_78[8] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar16 >> 0x17) ^
                 ((uint)(uVar10 >> 0x29) | 1);
/* WM - no support for modified copies */
        pcStack_78[0x13] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_78[9] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar16 >> 0x17) ^
                 ((uint)(uVar10 >> 0x29) | 1);
        pcStack_78[0x14] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar10 ^ uVar10 >> 0x21;
        uVar15 = (uint)(byte)pcStack_78[10] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar16 >> 0x17) ^
                 ((uint)(uVar10 >> 0x29) | 1);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        pcStack_78[0x15] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[10]) << 0x11) + 0x9e3779b97f4a7c1e;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar11 ^ uVar11 >> 0x21;
        uVar15 = (uint)(byte)pcStack_78[0xb] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar10 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_78[0x16] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar10;
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 0xc;
      pcVar6 = (char *)func_0x0011ab24(&pcStack_78);
      cVar9 = *pcVar5;
      if (cVar9 != '\0') {
        pcVar14 = pcVar5;
        do {
          pcVar14 = pcVar14 + 1;
          if (cVar9 != *pcVar6) break;
          pcVar6 = pcVar6 + 1;
          cVar9 = *pcVar14;
        } while (cVar9 != '\0');
      }
      if (cVar9 != *pcVar6) {
        pbVar3 = (byte *)(*pcRam00000000020682b0)();
        if ((*pbVar3 & 1) == 0) {
          func_0x019c2348();
        }
        pcStack_80 = (char *)(*pcRam0000000002068298)();
        if (*pcStack_80 == '\x01') {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          lVar12 = 0;
          uVar11 = 0x6a4adfd451dbd690;
          do {
            uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar16 = uVar10 ^ uVar10 >> 0x21;
            uVar15 = (uint)(byte)pcStack_80[lVar12 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
            uVar15 = (uVar15 >> 1 & 0x7f | uVar15 << 7) - (int)(uVar16 >> 0x17) ^
                     ((uint)(uVar10 >> 0x29) | 1);
            pcStack_80[lVar12 + 0x11] =
                 ((byte)(uVar15 >> 3) & 0x1f | (byte)(uVar15 << 5)) - (char)uVar16;
            uVar11 = lVar12 + -0x61c8864680b583eb +
                     (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_80[lVar12 + 1]) << 0x11);
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0x10);
          *pcStack_80 = '\0';
        }
        pcStack_80 = pcStack_80 + 0x11;
        pcVar6 = (char *)func_0x0011ab24(&pcStack_80);
        cVar9 = *pcVar5;
        if (cVar9 != '\0') {
          pcVar14 = pcVar5;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          do {
            pcVar14 = pcVar14 + 1;
            if (cVar9 != *pcVar6) break;
            pcVar6 = pcVar6 + 1;
            cVar9 = *pcVar14;
          } while (cVar9 != '\0');
        }
        if (cVar9 == *pcVar6) {
LAB_000bb5fc:
          uVar15 = 1;
        }
        else {
          pbVar3 = (byte *)(*pcRam00000000020682e0)();
          if ((*pbVar3 & 1) == 0) {
            func_0x019c2384();
          }
          pcStack_88 = (char *)(*pcRam00000000020682c8)();
          if (*pcStack_88 == '\x01') {
            lVar12 = 0;
            uVar11 = 0x3698cb2055c8d0fb;
            do {
              uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
              uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
              uVar16 = uVar10 ^ uVar10 >> 0x21;
              uVar15 = (uint)(byte)pcStack_88[lVar12 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
              uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
              pcStack_88[lVar12 + 0x11] =
                   ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') -
                   ((byte)(uVar10 >> 0x29) | 1) ^ (byte)uVar16;
              uVar11 = lVar12 + -0x61c8864680b583eb +
                       (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_88[lVar12 + 1]) << 0x11);
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0x10);
// WM - keep the notice, keep the source honest
            *pcStack_88 = '\0';
          }
          pcStack_88 = pcStack_88 + 0x11;
          pcVar6 = (char *)func_0x0011ab24(&pcStack_88);
          cVar9 = *pcVar5;
          if (cVar9 != '\0') {
            pcVar14 = pcVar5;
            do {
              pcVar14 = pcVar14 + 1;
              if (cVar9 != *pcVar6) break;
              pcVar6 = pcVar6 + 1;
              cVar9 = *pcVar14;
            } while (cVar9 != '\0');
          }
          if (cVar9 == *pcVar6) {
LAB_000bb728:
            uVar15 = 2;
          }
          else {
            pbVar3 = (byte *)(*pcRam0000000002068310)();
            if ((*pbVar3 & 1) == 0) {
              func_0x019c23c0();
            }
            pcStack_90 = (char *)(*pcRam00000000020682f8)();
            if (*pcStack_90 == '\x01') {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
              lVar12 = 0;
              uVar11 = 0xc1d990c1f34d7929;
              do {
                uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar16 = uVar10 ^ uVar10 >> 0x21;
                uVar15 = (uint)(byte)pcStack_90[lVar12 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
                uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar16 >> 0x17);
                pcStack_90[lVar12 + 0x11] =
                     ((byte)(uVar15 >> 5) & 7 | (char)uVar15 * '\b') - ((byte)(uVar10 >> 0x29) | 1)
                     ^ (byte)uVar16;
                uVar11 = lVar12 + -0x61c8864680b583eb +
                         (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_90[lVar12 + 1]) << 0x11);
                lVar12 = lVar12 + 1;
              } while (lVar12 != 0x10);
              *pcStack_90 = '\0';
// thanks for reading - discord.gg/sdkhDjTex
            }
            pcStack_90 = pcStack_90 + 0x11;
            pcVar6 = (char *)func_0x0011ab24(&pcStack_90);
            cVar9 = *pcVar5;
            if (cVar9 != '\0') {
              do {
                pcVar5 = pcVar5 + 1;
                if (cVar9 != *pcVar6) break;
                pcVar6 = pcVar6 + 1;
                cVar9 = *pcVar5;
              } while (cVar9 != '\0');
            }
LAB_000bb848:
            uVar15 = 3;
            if (cVar9 != *pcVar6) {
              uVar15 = 0;
            }
          }
        }
        goto LAB_000ba8e8;
      }
    }
LAB_000ba8e4:
/* WM - chat: discord.gg/sdkhDjTex */
    uVar15 = 0;
  }
LAB_000ba8e8:
  puVar7 = (undefined8 *)func_0x007926a8(param_1,1);
  uVar4 = *puVar7;
  pbVar3 = (byte *)(*pcRam0000000002068400)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c24ec();
  }
  pcStack_b8 = (char *)(*pcRam00000000020683e8)();
  if (*pcStack_b8 == '\x01') {
    uVar1 = (byte)pcStack_b8[1] ^ 0x1883efac;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xab573232;
    pcStack_b8[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - 0x2b ^ 0x6f;
    uVar11 = (((ulong)(byte)pcStack_b8[1] ^ 0xab3816c598de5d8a) << 0x11 | 0x15670) +
             0x9e3779b97f4a7c15;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar16 >> 0x17);
    pcStack_b8[7] =
// WM - if you paid for this, you were scammed
         ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar16 >> 0x17);
    pcStack_b8[8] =
         ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar16 >> 0x17);
    pcStack_b8[9] =
         ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17);
    pcStack_b8[10] =
         ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar10;
    *pcStack_b8 = '\0';
  }
  pcStack_b8 = pcStack_b8 + 6;
  uVar8 = func_0x0011ab24(&pcStack_b8);
  func_0x007935a0(param_1,0xffffd8ee,uVar8);
  pbVar3 = (byte *)(*pcRam0000000002068430)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2528();
  }
// keep the notice, keep the source honest
  pcStack_c0 = (char *)(*pcRam0000000002068418)();
  if (*pcStack_c0 == '\x01') {
    uVar1 = (byte)pcStack_c0[1] ^ 0xa3bd0194;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xf0d9c148 ^ 0x6e43c9;
    pcStack_c0[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0xa9;
    uVar11 = (((ulong)(byte)pcStack_c0[1] ^ 0x82e4bb16853c60a0) << 0x11 | 0x105c9) +
             0x9e3779b97f4a7c15;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c0[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c0[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[4] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c0[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[5] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c0[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[6] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c0[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[7] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
/* no support for modified copies */
    pcStack_c0[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[8] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c0[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[9] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c0[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[10] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c0[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[0xb] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
    pcStack_c0[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
    *pcStack_c0 = '\0';
  }
  pcStack_c0 = pcStack_c0 + 0xc;
  uVar8 = func_0x0011ab24(&pcStack_c0);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  func_0x007935a0(param_1,0xffffffff,uVar8);
  func_0x00791ab0(param_1,0xfffffffe);
  pbVar3 = (byte *)(*pcRam0000000002068460)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2564();
  }
  pcStack_c8 = (char *)(*pcRam0000000002068448)();
  if (*pcStack_c8 == '\x01') {
    uVar1 = (byte)pcStack_c8[1] ^ 0xbad4d9fb;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xe57feb76 ^ 0x5ac6a1;
    pcStack_c8[9] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - 0x38;
    uVar11 = (((ulong)(byte)pcStack_c8[1] ^ 0x9fff1876c54ba6c8) << 0x11 | 0x13ffe) +
             0x9e3779b97f4a7c15;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c8[10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c8[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c8[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[5] ^ (uint)uVar16 ^ 0xffffffc3;
/* no support for modified copies - github.com/pengussy */
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c8[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c8[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[6] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c8[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[7] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_c8[0xf] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar16;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[8] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
    pcStack_c8[0x10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
    *pcStack_c8 = '\0';
  }
  pcStack_c8 = pcStack_c8 + 9;
  uVar8 = func_0x0011ab24(&pcStack_c8);
  func_0x00792f00(param_1,uVar8);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if (iVar2 != 0) {
    return 0;
  }
/* WM - stripping the watermark breaks the license */
  pbVar3 = (byte *)(*pcRam0000000002068490)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c25a0();
  }
  pcStack_d0 = (char *)(*pcRam0000000002068478)();
  if (*pcStack_d0 == '\x01') {
    lVar12 = 0;
    uVar11 = 0x25d5bafeb2f50b3;
    do {
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_d0[lVar12 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
      pcStack_d0[lVar12 + 0xd] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar16;
      uVar11 = lVar12 + -0x61c8864680b583eb +
               (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_d0[lVar12 + 1]) << 0x11);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0xc);
    *pcStack_d0 = '\0';
  }
  pcStack_d0 = pcStack_d0 + 0xd;
  uVar8 = func_0x0011ab24(&pcStack_d0);
// WM - donate: donate/README.md
  func_0x007935a0(param_1,0xffffffff,uVar8);
  puVar7 = (undefined8 *)func_0x007926a8(param_1,0xffffffff);
  uVar8 = *puVar7;
  func_0x00791660(param_1,0xfffffffe);
  if (uVar15 < 2) {
    if (uVar15 != 0) {
      pcVar13 = pcRam0000000001f26df0;
      goto LAB_000bb48c;
    }
    pcVar13 = pcRam0000000001f26de8;
  }
  else {
    if (uVar15 == 2) {
      pcVar13 = pcRam0000000001f26df8;
LAB_000bb48c:
      (*pcVar13)(uVar4,uVar8);
      return 0;
    }
    pcVar13 = pcRam0000000001f26e00;
  }
  (*pcVar13)(fVar18,uVar4,uVar8);
  return 0;
/* more drops soon - github.com/pengussy - github.com/pengussy */
}

