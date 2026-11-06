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
 *  file-id: 0x1f67c0:65799ebd42
 *  --------------------------------------------------------------------------*/

void FUN_001f67c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  char cVar5;
  char *pcVar6;
  char cVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char ****ppppcVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char ****ppppcStack_118;
/* donate: donate/README.md */
  ulong uStack_110;
  undefined8 uStack_108;
  char ****ppppcStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  char *pcStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_a4 = (undefined4)param_3;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
/* keep the notice, keep the source honest - github.com/pengussy */
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  uStack_a0 = param_2;
  iVar10 = func_0x00791be4();
  if (iVar10 < 1) goto LAB_001f7258;
  iVar10 = func_0x00791be4(param_2,param_3);
  if (iVar10 == 7) {
    uStack_a8 = func_0x00791624(uStack_a0,uStack_a4);
    puStack_c0 = &uStack_a0;
    puStack_b8 = &uStack_a8;
    puStack_b0 = &uStack_a4;
    pbVar11 = (byte *)(*pcRam0000000002075840)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019d70f8();
    }
    pcStack_128 = (char *)(*pcRam0000000002075828)();
    if (*pcStack_128 == '\x01') {
      uVar16 = (byte)pcStack_128[1] ^ 0xed4594bb;
      uVar16 = (uVar16 >> 7 & 1 | uVar16 << 1) + 0xe87b6fdb;
      pcStack_128[7] = ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') + 0x1f ^ 0x78;
      uVar18 = (((ulong)(byte)pcStack_128[1] ^ 0x7b9398a7dd8932e0) << 0x11 | 0xf727) +
/*  stripping the watermark breaks the license  */
               0x9e3779b97f4a7c15;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar17 ^ uVar17 >> 0x21;
      uVar16 = (uint)(byte)pcStack_128[2] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 7 & 1 | uVar16 << 1) - (int)(uVar21 >> 0x17);
      pcStack_128[8] =
           ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_128[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar17 ^ uVar17 >> 0x21;
      uVar16 = (uint)(byte)pcStack_128[3] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 7 & 1 | uVar16 << 1) - (int)(uVar21 >> 0x17);
      pcStack_128[9] =
           ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_128[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar17 ^ uVar17 >> 0x21;
      uVar16 = (uint)(byte)pcStack_128[4] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 7 & 1 | uVar16 << 1) - (int)(uVar21 >> 0x17);
      pcStack_128[10] =
           ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_128[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
/* reversing this took months of machine time - github.com/pengussy */
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar17 ^ uVar17 >> 0x21;
      uVar16 = (uint)(byte)pcStack_128[5] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 7 & 1 | uVar16 << 1) - (int)(uVar21 >> 0x17);
      pcStack_128[0xb] =
           ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_128[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar18 ^ uVar18 >> 0x21;
      uVar16 = (uint)(byte)pcStack_128[6] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 7 & 1 | uVar16 << 1) - (int)(uVar17 >> 0x17);
      pcStack_128[0xc] =
           ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar17;
      *pcStack_128 = '\0';
    }
    pcStack_128 = pcStack_128 + 7;
    uVar12 = func_0x0011ab24(&pcStack_128);
    func_0x001f7978(&puStack_c0,uVar12,param_1);
    pbVar11 = (byte *)(*pcRam0000000002075870)();
// reversing this took months of machine time
    if ((*pbVar11 & 1) == 0) {
      func_0x019d7134();
    }
    pcStack_130 = (char *)(*pcRam0000000002075858)();
    if (*pcStack_130 == '\x01') {
      lVar19 = 0;
      uVar18 = 0x567424a86c58935a;
      do {
        uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar17 ^ uVar17 >> 0x21;
        uVar16 = (uint)(byte)pcStack_130[lVar19 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar16 = (uVar16 >> 1 & 0x7f | uVar16 << 7) -
                 (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
        pcStack_130[lVar19 + 0xd] = ((byte)(uVar16 >> 2) & 0x3f | (char)uVar16 * '@') ^ (byte)uVar21
        ;
        uVar18 = lVar19 + -0x61c8864680b583eb +
                 (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_130[lVar19 + 1]) << 0x11);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0xc);
      *pcStack_130 = '\0';
    }
    pcStack_130 = pcStack_130 + 0xd;
    uVar12 = func_0x0011ab24(&pcStack_130);
    func_0x001f7978(&puStack_c0,uVar12,param_1 + 3);
    pbVar11 = (byte *)(*pcRam00000000020758a0)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019d7170();
    }
    pcStack_138 = (char *)(*pcRam0000000002075888)();
    if (*pcStack_138 == '\x01') {
      lVar19 = 0;
      uVar18 = 0x3007609523967b42;
      do {
        uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar17 ^ uVar17 >> 0x21;
        uVar16 = (uint)(byte)pcStack_138[lVar19 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar16 = (uVar16 >> 7 & 1 | uVar16 << 1) - (int)(uVar21 >> 0x17) ^
                 ((uint)(uVar17 >> 0x29) | 1);
        pcStack_138[lVar19 + 0xf] =
             ((byte)(uVar16 >> 3) & 0x1f | (byte)(uVar16 << 5)) - (char)uVar21;
        uVar18 = lVar19 + -0x61c8864680b583eb +
                 (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_138[lVar19 + 1]) << 0x11);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0xe);
      *pcStack_138 = '\0';
    }
    pcStack_138 = pcStack_138 + 0xf;
    uVar12 = func_0x0011ab24(&pcStack_138);
    func_0x001f7978(&puStack_c0,uVar12,param_1 + 9);
    pbVar11 = (byte *)(*pcRam00000000020758d0)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019d71ac();
    }
    pcStack_140 = (char *)(*pcRam00000000020758b8)();
    if (*pcStack_140 == '\x01') {
      lVar19 = 0;
      uVar18 = 0xe9490496ec9f81bc;
      do {
        uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar17 ^ uVar17 >> 0x21;
        uVar16 = (uint)(byte)pcStack_140[lVar19 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar16 = (uVar16 >> 4 & 0xf | uVar16 << 4) - (int)(uVar21 >> 0x17);
        pcStack_140[lVar19 + 0x12] =
/* more drops soon - github.com/pengussy */
             ((byte)(uVar16 >> 4) & 0xf | (char)uVar16 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
             (byte)uVar21;
        uVar18 = lVar19 + -0x61c8864680b583eb +
                 (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_140[lVar19 + 1]) << 0x11);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0x11);
      *pcStack_140 = '\0';
    }
    pcStack_140 = pcStack_140 + 0x12;
    uVar12 = func_0x0011ab24(&pcStack_140);
    puVar1 = param_1 + 0xc;
    func_0x001f7978(&puStack_c0,uVar12,puVar1);
    if (*(char *)((long)param_1 + 0x77) < '\0') {
      func_0x00017ae8(&pcStack_e0,param_1[0xc],param_1[0xd]);
    }
    else {
      lStack_d8 = param_1[0xd];
      pcStack_e0 = (char *)*puVar1;
      uStack_d0 = param_1[0xe];
// WM - stripping the watermark breaks the license
    }
    do {
      pcVar6 = pcStack_e0;
      cVar7 = uStack_d0._7_1_;
      if (uStack_d0 < 0) {
        if (lStack_d8 == 0) goto LAB_001f6ee4;
        cVar5 = *pcStack_e0;
      }
      else {
        if (uStack_d0._7_1_ == '\0') goto LAB_001f6ee4;
        cVar5 = (char)pcStack_e0;
      }
      if (cVar5 != '.') goto LAB_001f6ee4;
      func_0x00211644(&pcStack_e0,0,1);
    } while( true );
  }
  goto LAB_001f7330;
// do not claim this as your own
LAB_001f6ee4:
  uStack_90 = (undefined7)*(undefined8 *)((ulong)&pcStack_e0 | 8);
  uVar12 = *(undefined8 *)((long)((ulong)&pcStack_e0 | 8) + 7);
  uStack_89 = (undefined1)uVar12;
  uStack_88 = (undefined7)((ulong)uVar12 >> 8);
  lStack_d8 = 0;
  uStack_d0 = 0;
  pcStack_e0 = (char *)0x0;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
    param_1[0xc] = pcVar6;
    param_1[0xd] = CONCAT17(uStack_89,uStack_90);
    *(ulong *)((long)param_1 + 0x6f) = CONCAT71(uStack_88,uStack_89);
    *(char *)((long)param_1 + 0x77) = cVar7;
    if (uStack_d0 < 0) {
      __ZdlPv(pcStack_e0);
    }
  }
  else {
    param_1[0xc] = pcVar6;
    param_1[0xd] = CONCAT17(uStack_89,uStack_90);
    *(undefined8 *)((long)param_1 + 0x6f) = uVar12;
    *(char *)((long)param_1 + 0x77) = cVar7;
  }
  uVar12 = uStack_a0;
  uVar8 = uStack_a8;
  pbVar11 = (byte *)(*pcRam0000000002075900)();
  if ((*pbVar11 & 1) == 0) {
    func_0x019d71e8();
  }
  pcStack_148 = (char *)(*pcRam00000000020758e8)();
  if (*pcStack_148 == '\x01') {
    lVar19 = 0;
    uVar18 = 0xf5249b71ac7fb3c5;
    do {
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar17 ^ uVar17 >> 0x21;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      uVar16 = (uint)(byte)pcStack_148[lVar19 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 6 & 3 | uVar16 << 2) - (int)(uVar21 >> 0x17);
      pcStack_148[lVar19 + 0x11] =
           ((byte)(uVar16 >> 4) & 0xf | (char)uVar16 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar18 = lVar19 + -0x61c8864680b583eb +
               (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_148[lVar19 + 1]) << 0x11);
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x10);
    *pcStack_148 = '\0';
  }
  pcStack_148 = pcStack_148 + 0x11;
  uVar13 = func_0x0011ab24(&pcStack_148);
  func_0x007935a0(uVar12,uVar8,uVar13);
  iVar10 = func_0x00791be4(uStack_a0,0xffffffff);
  if (0 < iVar10) {
    iVar10 = func_0x00791be4(uStack_a0,0xffffffff);
    uVar12 = uStack_a0;
    uVar8 = uStack_a4;
    if (iVar10 != 7) {
      pbVar11 = (byte *)(*pcRam0000000002075930)();
      if ((*pbVar11 & 1) == 0) {
/* wm:proprietary - see LICENSE - do not sell */
        func_0x019d7224();
      }
      pcStack_150 = (char *)(*pcRam0000000002075918)();
      if (*pcStack_150 == '\x01') {
        uVar16 = (byte)pcStack_150[1] ^ 0x50ea2b21;
        uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) + 0x86897e63;
        pcStack_150[7] = ((byte)(uVar16 >> 1) & 0x7f | (char)uVar16 * -0x80) ^ 0xe2;
        uVar18 = (((ulong)(byte)pcStack_150[1] ^ 0x63d031c44a0ec9cf) << 0x11 | 0xc7a0) +
                 0x9e3779b97f4a7c15;
        uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar17 ^ uVar17 >> 0x21;
        uVar16 = (uint)(byte)pcStack_150[2] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
                 (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
        pcStack_150[8] = ((byte)(uVar16 >> 1) & 0x7f | (char)uVar16 * -0x80) ^ (byte)uVar21;
        uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_150[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar17 ^ uVar17 >> 0x21;
        uVar16 = (uint)(byte)pcStack_150[3] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
                 (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
        pcStack_150[9] = ((byte)(uVar16 >> 1) & 0x7f | (char)uVar16 * -0x80) ^ (byte)uVar21;
        uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_150[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar17 ^ uVar17 >> 0x21;
        uVar16 = (uint)(byte)pcStack_150[4] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
                 (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
        pcStack_150[10] = ((byte)(uVar16 >> 1) & 0x7f | (char)uVar16 * -0x80) ^ (byte)uVar21;
        uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_150[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
/* WM - unlicensed copy if this notice is missing */
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar17 ^ uVar17 >> 0x21;
        uVar16 = (uint)(byte)pcStack_150[5] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
                 (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
        pcStack_150[0xb] = ((byte)(uVar16 >> 1) & 0x7f | (char)uVar16 * -0x80) ^ (byte)uVar21;
        uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_150[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
        uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
        uVar17 = uVar18 ^ uVar18 >> 0x21;
        uVar16 = (uint)(byte)pcStack_150[6] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
                 (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
        pcStack_150[0xc] = ((byte)(uVar16 >> 1) & 0x7f | (char)uVar16 * -0x80) ^ (byte)uVar17;
        *pcStack_150 = '\0';
      }
      pcStack_150 = pcStack_150 + 7;
      uVar13 = func_0x0011ab24(&pcStack_150);
      func_0x007a1ba8(uVar12,uVar8,uVar13);
      goto LAB_001f78ec;
    }
    uVar12 = func_0x00791624(uStack_a0,0xffffffff);
    uVar13 = 0;
    while (uVar13 = func_0x007952a0(uStack_a0,uVar12,uVar13), -1 < (int)uVar13) {
      iVar10 = func_0x00791e54(uStack_a0,0xffffffff);
      if (iVar10 != 0) {
        uStack_e8 = 0;
        uVar14 = func_0x00792368(uStack_a0,0xffffffff,&uStack_e8);
        uVar18 = uStack_e8;
        if (0x7ffffffffffffff6 < uStack_e8) {
          FUN_0000aa50();
          goto LAB_001f78ec;
        }
        if (uStack_e8 < 0x17) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          uStack_108 = CONCAT17((char)uStack_e8,(undefined7)uStack_108);
          ppppcVar15 = (char ****)&ppppcStack_118;
        }
        else {
          uVar17 = (uStack_e8 & 0x7ffffffffffffff8) + 8;
          uVar21 = 0x19;
          if (uVar17 != 0x18) {
            uVar21 = uVar17;
          }
          ppppcVar15 = (char ****)__Znwm(uVar21);
          uStack_108 = uVar21 | 0x8000000000000000;
          uStack_110 = uVar18;
          ppppcStack_118 = ppppcVar15;
        }
        _memmove(ppppcVar15,uVar14,uVar18);
        *(char *)((long)ppppcVar15 + uVar18) = '\0';
        if ((long)uStack_108 < 0) goto LAB_001f7178;
        while ((uStack_108._7_1_ != '\0' && ((char)ppppcStack_118 == '.'))) {
          while( true ) {
            func_0x00211644(&ppppcStack_118,0,1);
            if (-1 < (long)uStack_108) break;
LAB_001f7178:
            if ((uStack_110 == 0) || (*(char *)ppppcStack_118 != '.')) goto LAB_001f71ac;
          }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
LAB_001f71ac:
        uVar21 = uStack_108;
        uVar17 = uStack_110;
        ppppcVar15 = ppppcStack_118;
        uStack_f8 = uStack_110;
        ppppcStack_100 = ppppcStack_118;
        uStack_f0 = uStack_108;
        uStack_110 = 0;
        uStack_108 = 0;
        ppppcStack_118 = (char ****)0x0;
        uVar16 = (uint)(char)(uVar21 >> 0x38);
        uVar18 = uVar17;
        if (-1 < (int)uVar16) {
          uVar18 = uVar21 >> 0x38;
        }
        if (uVar18 != 0) {
          puStack_98 = (undefined8 *)param_1[7];
          uStack_90 = SUB87(&puStack_98,0);
          uStack_89 = (undefined1)((ulong)&puStack_98 >> 0x38);
          uStack_88 = SUB87(&ppppcStack_100,0);
          uStack_81 = (undefined1)((ulong)&ppppcStack_100 >> 0x38);
          puStack_80 = param_1 + 6;
          if (puStack_98 < (undefined8 *)param_1[8]) {
            puStack_98[2] = uVar21;
            puStack_98[1] = uVar17;
            *puStack_98 = ppppcVar15;
            uStack_f8 = 0;
            uStack_f0 = 0;
            ppppcStack_100 = (char ****)0x0;
            puVar20 = puStack_98 + 3;
          }
          else {
            func_0x00020f30(&uStack_90);
            puVar20 = puStack_98;
          }
// proprietary - see LICENSE - do not sell
          param_1[7] = puVar20;
          uVar16 = (uint)uStack_f0._7_1_;
        }
        if ((uVar16 >> 7 & 1) != 0) {
          __ZdlPv(ppppcStack_100);
        }
      }
      func_0x00791660(uStack_a0,0xfffffffd);
    }
  }
  func_0x00791660(uStack_a0,0xfffffffe);
  bVar2 = *(byte *)((long)param_1 + 0x77);
  uVar18 = param_1[0xd];
  if (-1 < (char)bVar2) {
    uVar18 = (ulong)bVar2;
  }
  if (((uVar18 == 0) && (puVar20 = (undefined8 *)param_1[6], puVar1 != puVar20)) &&
     (puVar20 != (undefined8 *)param_1[7])) {
    bVar3 = *(byte *)((long)puVar20 + 0x17);
    if ((char)bVar2 < '\0') {
      uVar18 = puVar20[1];
      puVar4 = (undefined8 *)*puVar20;
      if (-1 < (char)bVar3) {
        uVar18 = (ulong)bVar3;
        puVar4 = puVar20;
      }
      func_0x001286c0(puVar1,puVar4,uVar18);
    }
    else if ((char)bVar3 < '\0') {
      func_0x001287e0(puVar1,*puVar20,puVar20[1]);
    }
    else {
      uVar13 = puVar20[1];
      uVar12 = *puVar20;
      param_1[0xe] = puVar20[2];
      param_1[0xd] = uVar13;
      *puVar1 = uVar12;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    }
  }
LAB_001f7258:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_001f7330:
  uVar12 = uStack_a0;
  uVar8 = uStack_a4;
  pbVar11 = (byte *)(*pcRam00000000020757e0)();
  if ((*pbVar11 & 1) == 0) {
    func_0x019d70bc();
  }
  pcStack_120 = (char *)(*pcRam00000000020757c8)();
  if (*pcStack_120 == '\x01') {
    uVar16 = (byte)pcStack_120[1] ^ 0x2c8906d;
    uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) + 0xa947b806;
    pcStack_120[7] = ((byte)(uVar16 >> 2) & 0x3f | (char)uVar16 * '@') + 0x51 ^ 0xae;
    uVar18 = (((ulong)(byte)pcStack_120[1] ^ 0x398e4d324566c41f) << 0x11 | 0x731c) +
// unlicensed copy if this notice is missing
             0x9e3779b97f4a7c15;
    uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar17 ^ uVar17 >> 0x21;
    uVar16 = (uint)(byte)pcStack_120[2] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar21 >> 0x17);
    pcStack_120[8] =
         ((byte)(uVar16 >> 2) & 0x3f | (char)uVar16 * '@') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar21;
    uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_120[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar17 ^ uVar17 >> 0x21;
    uVar16 = (uint)(byte)pcStack_120[3] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar21 >> 0x17);
    pcStack_120[9] =
         ((byte)(uVar16 >> 2) & 0x3f | (char)uVar16 * '@') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar21;
/* origin: github.com/pengussy - github.com/pengussy */
    uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_120[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar17 ^ uVar17 >> 0x21;
    uVar16 = (uint)(byte)pcStack_120[4] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar21 >> 0x17);
    pcStack_120[10] =
         ((byte)(uVar16 >> 2) & 0x3f | (char)uVar16 * '@') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar21;
    uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_120[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar17 ^ uVar17 >> 0x21;
    uVar16 = (uint)(byte)pcStack_120[5] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar21 >> 0x17);
    pcStack_120[0xb] =
         ((byte)(uVar16 >> 2) & 0x3f | (char)uVar16 * '@') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar21;
    uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_120[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar18 ^ uVar18 >> 0x21;
    uVar16 = (uint)(byte)pcStack_120[6] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar17 >> 0x17);
    pcStack_120[0xc] =
         ((byte)(uVar16 >> 2) & 0x3f | (char)uVar16 * '@') - ((byte)(uVar18 >> 0x29) | 1) ^
         (byte)uVar17;
    *pcStack_120 = '\0';
  }
  pcStack_120 = pcStack_120 + 7;
  uVar13 = func_0x0011ab24(&pcStack_120);
  func_0x007a1ba8(uVar12,uVar8,uVar13);
LAB_001f78ec:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1f78f0);
  (*pcVar9)();
}

