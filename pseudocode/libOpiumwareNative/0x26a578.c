/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x26a578:74bfa1b771
 */

/* WARNING: Removing unreachable block (ram,0x0026cf68) */
/* WARNING: Removing unreachable block (ram,0x0026cf1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0026a578(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 ******ppppppuVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte *unaff_x20;
  uint uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  char *pcStack_140;
  char *pcStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
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
  char *pcStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 *puStack_a8;
  long *plStack_a0;
  undefined8 ******ppppppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  iVar5 = func_0x00791e54(param_1,1);
  if (iVar5 == 0) {
    pbVar8 = (byte *)(*pcRam0000000002079dd0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019df264();
    }
    pcStack_140 = (char *)(*pcRam0000000002079db8)();
    if (*pcStack_140 == '\x01') {
      uVar14 = (byte)pcStack_140[1] ^ 0xf799c7e7;
      uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) + 0x5b1233f0 ^ 0x6ca93b;
      pcStack_140[8] = ((byte)(uVar14 >> 2) & 0x3f | (byte)(uVar14 << 6)) - 0x24;
      uVar6 = (((ulong)(byte)pcStack_140[1] ^ 0xc405296e9fe7a7db) << 0x11 | 0x1880a) +
// more drops soon - github.com/pengussy
              0x9e3779b97f4a7c15;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_140[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar13 >> 0x17) ^
               ((uint)(uVar11 >> 0x29) | 1);
      pcStack_140[9] = ((byte)(uVar14 >> 2) & 0x3f | (byte)(uVar14 << 6)) - (char)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_140[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_140[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar13 >> 0x17) ^
               ((uint)(uVar11 >> 0x29) | 1);
      pcStack_140[10] = ((byte)(uVar14 >> 2) & 0x3f | (byte)(uVar14 << 6)) - (char)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_140[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_140[4] ^ (uint)uVar13 ^ 0xffffffc3;
// WM - more drops soon - github.com/pengussy
      uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar13 >> 0x17) ^
               ((uint)(uVar11 >> 0x29) | 1);
      pcStack_140[0xb] = ((byte)(uVar14 >> 2) & 0x3f | (byte)(uVar14 << 6)) - (char)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_140[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_140[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar13 >> 0x17) ^
               ((uint)(uVar11 >> 0x29) | 1);
      pcStack_140[0xc] = ((byte)(uVar14 >> 2) & 0x3f | (byte)(uVar14 << 6)) - (char)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_140[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_140[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar13 >> 0x17) ^
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
               ((uint)(uVar11 >> 0x29) | 1);
      pcStack_140[0xd] = ((byte)(uVar14 >> 2) & 0x3f | (byte)(uVar14 << 6)) - (char)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_140[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar14 = (uint)(byte)pcStack_140[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1)
      ;
      pcStack_140[0xe] = ((byte)(uVar14 >> 2) & 0x3f | (byte)(uVar14 << 6)) - (char)uVar11;
      *pcStack_140 = '\0';
    }
    pcStack_140 = pcStack_140 + 8;
    uVar15 = func_0x0011ab24(&pcStack_140);
    func_0x007a1ba8(param_1,1,uVar15);
LAB_0026d350:
    FUN_0000aa50();
  }
  else {
    unaff_x20 = (byte *)func_0x00792368(param_1,1,0);
    uVar6 = _strlen();
    if (0x7ffffffffffffff6 < uVar6) goto LAB_0026d350;
    if (uVar6 < 0x17) {
      uStack_88 = CONCAT17((char)uVar6,(undefined7)uStack_88);
      ppppppuVar7 = &ppppppuStack_98;
    }
    else {
      uVar11 = (uVar6 & 0x7ffffffffffffff8) + 8;
      uVar13 = 0x19;
      if (uVar11 != 0x18) {
        uVar13 = uVar11;
      }
      ppppppuVar7 = (undefined8 ******)__Znwm(uVar13);
      uStack_88 = uVar13 | 0x8000000000000000;
      ppppppuStack_98 = ppppppuVar7;
      uStack_90 = uVar6;
    }
/*  stripping the watermark breaks the license  */
    _memmove(ppppppuVar7,unaff_x20,uVar6);
    *(undefined1 *)((long)ppppppuVar7 + uVar6) = 0;
    plStack_a0 = (long *)__Znwm(0x188);
    plStack_a0[1] = 0;
    plStack_a0[2] = 0;
    *plStack_a0 = (long)&UNK_01dc11d8;
    plStack_a0[6] = 0;
    plStack_a0[5] = 0;
    plStack_a0[8] = 0;
    plStack_a0[7] = 0;
    plStack_a0[10] = 0;
    plStack_a0[9] = 0;
    plStack_a0[0xc] = 0;
    plStack_a0[0xb] = 0;
    plStack_a0[0xe] = 0;
    plStack_a0[0xd] = 0;
    plStack_a0[0x10] = 0;
    plStack_a0[0xf] = 0;
    plStack_a0[0x12] = 0;
    plStack_a0[0x11] = 0;
/* WM - unlicensed copy if this notice is missing */
    plStack_a0[0x14] = 0;
    plStack_a0[0x13] = 0;
    plStack_a0[0x16] = 0;
    plStack_a0[0x15] = 0;
    plStack_a0[0x18] = 0;
    plStack_a0[0x17] = 0;
    plStack_a0[0x1a] = 0;
    plStack_a0[0x19] = 0;
    plStack_a0[0x1c] = 0;
    plStack_a0[0x1b] = 0;
    plStack_a0[0x1e] = 0;
    plStack_a0[0x1d] = 0;
    puStack_a8 = plStack_a0 + 3;
    plStack_a0[4] = 0;
    *puStack_a8 = 0;
    plStack_a0[0x20] = 0;
    plStack_a0[0x1f] = 0;
    plStack_a0[0x22] = 0;
    plStack_a0[0x21] = 0;
    plStack_a0[0x24] = 0;
// WM - no support for modified copies
    plStack_a0[0x23] = 0;
    plStack_a0[0x26] = 0;
    plStack_a0[0x25] = 0;
    *(undefined1 *)((long)plStack_a0 + 0x1c) = 1;
    *(undefined4 *)(plStack_a0 + 4) = 1;
    auVar16 = NEON_fmov(0x3f800000,4);
    *(long *)((long)plStack_a0 + 0x2c) = auVar16._8_8_;
    *(long *)((long)plStack_a0 + 0x24) = auVar16._0_8_;
    *(undefined4 *)((long)plStack_a0 + 0x34) = 0x3f800000;
    plStack_a0[7] = 0;
    plStack_a0[8] = 0;
    uVar15 = _UNK_01adb240;
    plStack_a0[10] = _UNK_01adb248;
    plStack_a0[9] = uVar15;
    plStack_a0[0xb] = 0x3f8000000000000c;
    uVar15 = _UNK_01adb250;
    *(undefined8 *)((long)plStack_a0 + 0x6c) = _UNK_01adb258;
    *(undefined8 *)((long)plStack_a0 + 100) = uVar15;
    *(undefined4 *)((long)plStack_a0 + 0x74) = 0x3f800000;
    *(undefined8 *)((long)plStack_a0 + 0x84) = 0;
    *(undefined8 *)((long)plStack_a0 + 0x7c) = 0;
    *(undefined8 *)((long)plStack_a0 + 0x94) = 0;
    *(undefined8 *)((long)plStack_a0 + 0x8c) = 0;
    *(undefined4 *)((long)plStack_a0 + 0x9c) = 0x3f800000;
// WM - found on a paste site? it was re-uploaded illegally
    *(undefined8 *)((long)plStack_a0 + 0xa4) = 0;
    *(undefined8 *)((long)plStack_a0 + 0xb4) = 0;
    *(undefined8 *)((long)plStack_a0 + 0xac) = 0;
    *(undefined4 *)((long)plStack_a0 + 0xbc) = 0x3f800000;
    *(undefined8 *)((long)plStack_a0 + 0xe4) = _UNK_01adb270;
    *(undefined4 *)((long)plStack_a0 + 0xec) = 0x43fa0000;
    uVar15 = NEON_fmov(0x3f800000,4);
    plStack_a0[0x20] = uVar15;
    plStack_a0[0x21] = 0;
    plStack_a0[0x22] = 0;
    plStack_a0[0x23] = 0;
    uVar15 = _UNK_01adb260;
    plStack_a0[0x25] = _UNK_01adb268;
    plStack_a0[0x24] = uVar15;
    plStack_a0[0x28] = 0;
    plStack_a0[0x27] = 0;
    plStack_a0[0x2a] = 0;
    plStack_a0[0x29] = 0;
    plStack_a0[0x2c] = 0;
    plStack_a0[0x2b] = 0;
    plStack_a0[0x2e] = 0;
    plStack_a0[0x2d] = 0;
    plStack_a0[0x30] = 0;
    plStack_a0[0x2f] = 0;
    pbVar8 = (byte *)(*pcRam0000000002079e00)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019deee0();
    }
    pcStack_c8 = (char *)(*pcRam0000000002079de8)();
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    if (*pcStack_c8 == '\x01') {
      uVar14 = (byte)pcStack_c8[1] ^ 0x5b3e35f0;
      uVar14 = (uVar14 >> 3 & 0x1f | uVar14 << 5) + 0xe882f4b7;
      pcStack_c8[6] = ((byte)(uVar14 >> 1) & 0x7f | (char)uVar14 * -0x80) + 0x21 ^ 0x33;
      uVar6 = (((ulong)(byte)pcStack_c8[1] ^ 0x5480c5738cfd6143) << 0x11 | 0xa901) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 3 & 0x1f | uVar14 << 5) - (int)(uVar13 >> 0x17);
      pcStack_c8[7] =
           ((byte)(uVar14 >> 1) & 0x7f | (char)uVar14 * -0x80) - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 3 & 0x1f | uVar14 << 5) - (int)(uVar13 >> 0x17);
      pcStack_c8[8] =
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
           ((byte)(uVar14 >> 1) & 0x7f | (char)uVar14 * -0x80) - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 3 & 0x1f | uVar14 << 5) - (int)(uVar13 >> 0x17);
      pcStack_c8[9] =
           ((byte)(uVar14 >> 1) & 0x7f | (char)uVar14 * -0x80) - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar14 = (uint)(byte)pcStack_c8[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 3 & 0x1f | uVar14 << 5) - (int)(uVar11 >> 0x17);
      pcStack_c8[10] =
           ((byte)(uVar14 >> 1) & 0x7f | (char)uVar14 * -0x80) - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar11;
      *pcStack_c8 = '\0';
    }
    pcStack_c8 = pcStack_c8 + 6;
    uVar15 = func_0x0011ab24(&pcStack_c8);
    uVar11 = _strlen();
    uVar6 = (ulong)(char)uStack_88._7_1_;
    if ((long)uVar6 < 0) {
      if (uVar11 == uStack_90) {
        if (uVar11 == 0xffffffffffffffff) {
/*  more drops soon - github.com/pengussy  */
          FUN_0001c430();
          goto LAB_0026d70c;
        }
        iVar5 = _memcmp(ppppppuStack_98,uVar15);
        if (iVar5 == 0) goto LAB_0026b6fc;
      }
LAB_0026aa10:
      pbVar8 = (byte *)(*pcRam0000000002079e30)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019def1c();
      }
      pcStack_d0 = (char *)(*pcRam0000000002079e18)();
      if (*pcStack_d0 == '\x01') {
        uVar14 = (byte)pcStack_d0[1] ^ 0xb4cd8f4c;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) + 0xe95949d7;
        pcStack_d0[8] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ 0x8f;
        uVar6 = (((ulong)(byte)pcStack_d0[1] ^ 0xdeb7a0e7f22c2f1e) << 0x11 | 0x1bd6f) +
                0x9e3779b97f4a7c15;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d0[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d0[9] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
/* do not claim this as your own */
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d0[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d0[10] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d0[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d0[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d0[0xb] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d0[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d0[5] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d0[0xc] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d0[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d0[6] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d0[0xd] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
/* do not claim this as your own - github.com/pengussy */
        uVar11 = uVar6 ^ uVar6 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d0[7] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) -
                 (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_d0[0xe] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar11;
        *pcStack_d0 = '\0';
        uVar6 = uStack_88 >> 0x38;
      }
      pcStack_d0 = pcStack_d0 + 8;
      uVar15 = func_0x0011ab24(&pcStack_d0);
      uVar11 = _strlen();
      if (((uint)uVar6 >> 7 & 1) == 0) {
        if (uVar11 == (uVar6 & 0xff)) {
          iVar5 = _memcmp(&ppppppuStack_98,uVar15);
joined_r0x0026ad50:
          if (iVar5 == 0) {
/* WM - watermarked copy - do not remove */
            uVar10 = 1;
            goto LAB_0026bf8c;
          }
        }
      }
      else if (uVar11 == uStack_90) {
        if (uVar11 == 0xffffffffffffffff) {
          FUN_0001c430();
          goto LAB_0026d70c;
        }
        iVar5 = _memcmp(ppppppuStack_98,uVar15);
        goto joined_r0x0026ad50;
      }
      pbVar8 = (byte *)(*pcRam0000000002079e60)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019def58();
      }
      pcStack_d8 = (char *)(*pcRam0000000002079e48)();
      if (*pcStack_d8 == '\x01') {
        uVar14 = (byte)pcStack_d8[1] ^ 0xe2232195;
        uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) + 0x66859f6c;
        pcStack_d8[8] = ((byte)(uVar14 >> 6) & 3 | (char)uVar14 * '\x04') ^ 0x56;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar6 = (((ulong)(byte)pcStack_d8[1] ^ 0x91b987b1c8a8b1cb) << 0x11 | 0x12373) +
                0x9e3779b97f4a7c15;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d8[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d8[9] = ((byte)(uVar14 >> 6) & 3 | (char)uVar14 * '\x04') ^ (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d8[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d8[10] = ((byte)(uVar14 >> 6) & 3 | (char)uVar14 * '\x04') ^ (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d8[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d8[0xb] = ((byte)(uVar14 >> 6) & 3 | (char)uVar14 * '\x04') ^ (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d8[5] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d8[0xc] = ((byte)(uVar14 >> 6) & 3 | (char)uVar14 * '\x04') ^ (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d8[5]) << 0x11) + 0x9e3779b97f4a7c19;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d8[6] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_d8[0xd] = ((byte)(uVar14 >> 6) & 3 | (char)uVar14 * '\x04') ^ (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar6 ^ uVar6 >> 0x21;
        uVar14 = (uint)(byte)pcStack_d8[7] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
                 (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_d8[0xe] = ((byte)(uVar14 >> 6) & 3 | (char)uVar14 * '\x04') ^ (byte)uVar11;
        *pcStack_d8 = '\0';
        uVar6 = uStack_88 >> 0x38;
      }
      pcStack_d8 = pcStack_d8 + 8;
      uVar15 = func_0x0011ab24(&pcStack_d8);
/*  watermarked copy - do not remove  */
      uVar11 = _strlen();
      if (((uint)uVar6 >> 7 & 1) == 0) {
        if (uVar11 == (uVar6 & 0xff)) {
          iVar5 = _memcmp(&ppppppuStack_98,uVar15);
joined_r0x0026b094:
          if (iVar5 == 0) {
            uVar10 = 2;
            goto LAB_0026bf8c;
          }
        }
      }
      else if (uVar11 == uStack_90) {
        if (uVar11 == 0xffffffffffffffff) {
          FUN_0001c430();
          goto LAB_0026d70c;
        }
        iVar5 = _memcmp(ppppppuStack_98,uVar15);
        goto joined_r0x0026b094;
      }
      pbVar8 = (byte *)(*pcRam0000000002079e90)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019def94();
      }
      pcStack_e0 = (char *)(*pcRam0000000002079e78)();
      if (*pcStack_e0 == '\x01') {
        uVar14 = (byte)pcStack_e0[1] ^ 0x59f9644e;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) + 0x9b55beb4 ^ 0x48992b;
        pcStack_e0[6] = ((byte)(uVar14 >> 3) & 0x1f | (byte)(uVar14 << 5)) + 0x73;
        uVar6 = (((ulong)(byte)pcStack_e0[1] ^ 0xfe838fd9ffa13914) << 0x11 | 0x1fd07) +
                0x9e3779b97f4a7c15;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e0[2] ^ (uint)uVar13 ^ 0xffffffc3;
/*  thanks for reading - discord.gg/sdkhDjTex  */
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e0[7] = ((byte)(uVar14 >> 3) & 0x1f | (byte)(uVar14 << 5)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e0[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e0[8] = ((byte)(uVar14 >> 3) & 0x1f | (byte)(uVar14 << 5)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e0[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e0[9] = ((byte)(uVar14 >> 3) & 0x1f | (byte)(uVar14 << 5)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e0[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar6 ^ uVar6 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e0[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 7 & 1 | uVar14 << 1) - (int)(uVar11 >> 0x17) ^
                 ((uint)(uVar6 >> 0x29) | 1);
        pcStack_e0[10] = ((byte)(uVar14 >> 3) & 0x1f | (byte)(uVar14 << 5)) - (char)uVar11;
        *pcStack_e0 = '\0';
/* no support for modified copies */
        uVar6 = uStack_88 >> 0x38;
      }
      pcStack_e0 = pcStack_e0 + 6;
      uVar15 = func_0x0011ab24(&pcStack_e0);
      uVar11 = _strlen();
      if (((uint)uVar6 >> 7 & 1) == 0) {
        if (uVar11 == (uVar6 & 0xff)) {
          iVar5 = _memcmp(&ppppppuStack_98,uVar15);
joined_r0x0026b320:
          if (iVar5 == 0) {
            uVar10 = 3;
            goto LAB_0026bf8c;
          }
        }
      }
      else if (uVar11 == uStack_90) {
        if (uVar11 == 0xffffffffffffffff) {
          FUN_0001c430();
          goto LAB_0026d70c;
        }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        iVar5 = _memcmp(ppppppuStack_98,uVar15);
        goto joined_r0x0026b320;
      }
      pbVar8 = (byte *)(*pcRam0000000002079ec0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019defd0();
      }
      pcStack_e8 = (char *)(*pcRam0000000002079ea8)();
      if (*pcStack_e8 == '\x01') {
        uVar14 = (byte)pcStack_e8[1] ^ 0x7cea8d4d;
        uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) + 0xc5a878fa ^ 0x1dce95;
        pcStack_e8[10] = ((byte)(uVar14 >> 6) & 3 | (byte)(uVar14 << 2)) + 0x72;
        uVar6 = (((ulong)(byte)pcStack_e8[1] ^ 0xb4dcbdca0425ed1a) << 0x11 | 0x169b9) +
                0x9e3779b97f4a7c15;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e8[0xb] = ((byte)(uVar14 >> 6) & 3 | (byte)(uVar14 << 2)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e8[0xc] = ((byte)(uVar14 >> 6) & 3 | (byte)(uVar14 << 2)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e8[0xd] = ((byte)(uVar14 >> 6) & 3 | (byte)(uVar14 << 2)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e8[5] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e8[0xe] = ((byte)(uVar14 >> 6) & 3 | (byte)(uVar14 << 2)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        uVar14 = (uint)(byte)pcStack_e8[6] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e8[0xf] = ((byte)(uVar14 >> 6) & 3 | (byte)(uVar14 << 2)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e8[7] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e8[0x10] = ((byte)(uVar14 >> 6) & 3 | (byte)(uVar14 << 2)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e8[8] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17) ^
                 ((uint)(uVar11 >> 0x29) | 1);
        pcStack_e8[0x11] = ((byte)(uVar14 >> 6) & 3 | (byte)(uVar14 << 2)) - (char)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar6 ^ uVar6 >> 0x21;
        uVar14 = (uint)(byte)pcStack_e8[9] ^ (uint)uVar11 ^ 0xffffffc3;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar11 >> 0x17) ^
                 ((uint)(uVar6 >> 0x29) | 1);
        pcStack_e8[0x12] = ((byte)(uVar14 >> 6) & 3 | (byte)(uVar14 << 2)) - (char)uVar11;
        *pcStack_e8 = '\0';
        uVar6 = uStack_88 >> 0x38;
      }
      pcStack_e8 = pcStack_e8 + 10;
      uVar15 = func_0x0011ab24(&pcStack_e8);
      uVar11 = _strlen();
      uVar14 = (uint)uVar6;
      if ((uVar14 >> 7 & 1) == 0) {
        if (uVar11 == (uVar6 & 0xff)) {
          iVar5 = _memcmp(&ppppppuStack_98,uVar15);
joined_r0x0026b724:
          if (iVar5 == 0) {
            uVar10 = 4;
            goto LAB_0026bf8c;
          }
        }
      }
      else if (uVar11 == uStack_90) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        if (uVar11 == 0xffffffffffffffff) {
          FUN_0001c430();
          goto LAB_0026d70c;
        }
        iVar5 = _memcmp(ppppppuStack_98,uVar15);
        goto joined_r0x0026b724;
      }
      pbVar8 = (byte *)(*pcRam0000000002079ef0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019df00c();
      }
      pcStack_f0 = (char *)(*pcRam0000000002079ed8)();
      if (*pcStack_f0 == '\x01') {
        uVar14 = (byte)pcStack_f0[1] ^ 0xdcb8515e;
        uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) + 0x83ddfdba;
        pcStack_f0[6] = ((byte)(uVar14 >> 5) & 7 | (char)uVar14 * '\b') - 9 ^ 0x9d;
        uVar6 = (((ulong)(byte)pcStack_f0[1] ^ 0x8498475f07b40b29) << 0x11 | 0x10930) +
/* wm:unlicensed copy if this notice is missing */
                0x9e3779b97f4a7c15;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) - (int)(uVar13 >> 0x17);
        pcStack_f0[7] =
             ((byte)(uVar14 >> 5) & 7 | (char)uVar14 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) - (int)(uVar13 >> 0x17);
        pcStack_f0[8] =
             ((byte)(uVar14 >> 5) & 7 | (char)uVar14 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f0[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
// proprietary - see LICENSE - do not sell
        uVar14 = (uint)(byte)pcStack_f0[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) - (int)(uVar13 >> 0x17);
        pcStack_f0[9] =
             ((byte)(uVar14 >> 5) & 7 | (char)uVar14 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f0[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar6 ^ uVar6 >> 0x21;
        uVar14 = (uint)(byte)pcStack_f0[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) - (int)(uVar11 >> 0x17);
        pcStack_f0[10] =
             ((byte)(uVar14 >> 5) & 7 | (char)uVar14 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar11;
        *pcStack_f0 = '\0';
        uVar14 = (uint)uStack_88._7_1_;
      }
      pcStack_f0 = pcStack_f0 + 6;
      uVar15 = func_0x0011ab24(&pcStack_f0);
      uVar6 = _strlen();
      if ((uVar14 >> 7 & 1) == 0) {
        if (uVar6 == (byte)uVar14) {
/* WM - proprietary - see LICENSE - do not sell */
          iVar5 = _memcmp(&ppppppuStack_98,uVar15);
joined_r0x0026b9b8:
          if (iVar5 == 0) {
            uVar10 = 5;
            goto LAB_0026bf8c;
          }
        }
      }
      else if (uVar6 == uStack_90) {
        if (uVar6 == 0xffffffffffffffff) {
          FUN_0001c430();
          goto LAB_0026d70c;
        }
        iVar5 = _memcmp(ppppppuStack_98,uVar15);
        goto joined_r0x0026b9b8;
      }
      pbVar8 = (byte *)(*pcRam0000000002079f20)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019df048();
      }
      pcStack_f8 = (char *)(*pcRam0000000002079f08)();
      if (*pcStack_f8 == '\x01') {
        uVar14 = (byte)pcStack_f8[1] ^ 0x7db80547;
        uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) + 0x9f3eaafc;
        pcStack_f8[7] = ((byte)(uVar14 >> 4) & 0xf | (char)uVar14 * '\x10') - 0x31 ^ 0x84;
        uVar6 = (((ulong)(byte)pcStack_f8[1] ^ 0x7052b163abed0093) << 0x11 | 0xe0a5) +
                0x9e3779b97f4a7c15;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_f8[2] ^ (uint)uVar13 ^ 0xffffffc3;
// WM - chat: discord.gg/sdkhDjTex
        uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) - (int)(uVar13 >> 0x17);
        pcStack_f8[8] =
             ((byte)(uVar14 >> 4) & 0xf | (char)uVar14 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_f8[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) - (int)(uVar13 >> 0x17);
        pcStack_f8[9] =
             ((byte)(uVar14 >> 4) & 0xf | (char)uVar14 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
/* wm:no support for modified copies */
        uVar14 = (uint)(byte)pcStack_f8[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) - (int)(uVar13 >> 0x17);
        pcStack_f8[10] =
             ((byte)(uVar14 >> 4) & 0xf | (char)uVar14 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_f8[5] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) - (int)(uVar13 >> 0x17);
        pcStack_f8[0xb] =
             ((byte)(uVar14 >> 4) & 0xf | (char)uVar14 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f8[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar6 ^ uVar6 >> 0x21;
// WM - donate: donate/README.md
        uVar14 = (uint)(byte)pcStack_f8[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) - (int)(uVar11 >> 0x17);
        pcStack_f8[0xc] =
             ((byte)(uVar14 >> 4) & 0xf | (char)uVar14 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar11;
        *pcStack_f8 = '\0';
      }
      pcStack_f8 = pcStack_f8 + 7;
      uVar15 = func_0x0011ab24(&pcStack_f8);
      uVar6 = func_0x00016fc0(&ppppppuStack_98,uVar15);
      if ((uVar6 & 1) == 0) {
        pbVar8 = (byte *)(*pcRam0000000002079f50)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019df084();
        }
        pcStack_100 = (char *)(*pcRam0000000002079f38)();
        if (*pcStack_100 == '\x01') {
          uVar14 = (byte)pcStack_100[1] ^ 0x766e2fa6;
          uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) + 0xed7bbc56;
          pcStack_100[8] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ 0x65;
          uVar6 = (((ulong)(byte)pcStack_100[1] ^ 0x9bb40efef5c158ea) << 0x11 | 0x13768) +
                  0x9e3779b97f4a7c15;
          uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar11 ^ uVar11 >> 0x21;
          uVar14 = (uint)(byte)pcStack_100[2] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) -
                   (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_100[9] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
// do not claim this as your own
          uVar13 = uVar11 ^ uVar11 >> 0x21;
          uVar14 = (uint)(byte)pcStack_100[3] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) -
                   (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_100[10] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar11 ^ uVar11 >> 0x21;
          uVar14 = (uint)(byte)pcStack_100[4] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) -
                   (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_100[0xb] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar11 ^ uVar11 >> 0x21;
          uVar14 = (uint)(byte)pcStack_100[5] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) -
                   (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_100[0xc] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
/* if you paid for this, you were scammed */
          uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar11 ^ uVar11 >> 0x21;
          uVar14 = (uint)(byte)pcStack_100[6] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) -
                   (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_100[0xd] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar6 ^ uVar6 >> 0x21;
          uVar14 = (uint)(byte)pcStack_100[7] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) -
                   (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_100[0xe] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar11;
          *pcStack_100 = '\0';
        }
        pcStack_100 = pcStack_100 + 8;
        uVar15 = func_0x0011ab24(&pcStack_100);
        uVar6 = func_0x00016fc0(&ppppppuStack_98,uVar15);
        if ((uVar6 & 1) == 0) {
          pbVar8 = (byte *)(*pcRam0000000002079f80)();
          if ((*pbVar8 & 1) == 0) {
            func_0x019df0c0();
          }
          pcStack_108 = (char *)(*pcRam0000000002079f68)();
          if (*pcStack_108 == '\x01') {
            bVar1 = pcStack_108[1];
            cVar4 = func_0x0016ae10((ulong)bVar1,0x8d4dddf89a8b6950);
/* wm:more drops soon - github.com/pengussy */
            pcStack_108[0x16] = cVar4;
            uVar6 = (((ulong)bVar1 ^ 0x8d4dddf89a8b6950) << 0x11 | 0x11a9b) + 0x9e3779b97f4a7c15;
            bVar1 = pcStack_108[2];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x17] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c16;
            bVar1 = pcStack_108[3];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x18] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c17;
            bVar1 = pcStack_108[4];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x19] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c18;
            bVar1 = pcStack_108[5];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x1a] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c19;
            bVar1 = pcStack_108[6];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x1b] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c1a;
            bVar1 = pcStack_108[7];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x1c] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c1b;
            bVar1 = pcStack_108[8];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x1d] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c1c;
            bVar1 = pcStack_108[9];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x1e] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c1d;
            bVar1 = pcStack_108[10];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x1f] = cVar4;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c1e;
            bVar1 = pcStack_108[0xb];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x20] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c1f;
            bVar1 = pcStack_108[0xc];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x21] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c20;
            bVar1 = pcStack_108[0xd];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x22] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c21;
            bVar1 = pcStack_108[0xe];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x23] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c22;
// if you paid for this, you were scammed
            bVar1 = pcStack_108[0xf];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x24] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c23;
            bVar1 = pcStack_108[0x10];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x25] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c24;
            bVar1 = pcStack_108[0x11];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x26] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c25;
            bVar1 = pcStack_108[0x12];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x27] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c26;
            bVar1 = pcStack_108[0x13];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x28] = cVar4;
            uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c27;
            bVar1 = pcStack_108[0x14];
            cVar4 = func_0x0016ae10((ulong)bVar1,uVar6);
            pcStack_108[0x29] = cVar4;
            cVar4 = func_0x0016ae10(pcStack_108[0x15],
                                    (uVar6 >> 0x2f | (uVar6 ^ bVar1) << 0x11) + 0x9e3779b97f4a7c28);
            pcStack_108[0x2a] = cVar4;
            *pcStack_108 = '\0';
          }
          pcStack_108 = pcStack_108 + 0x16;
          uVar15 = func_0x0011ab24(&pcStack_108);
          func_0x007a1abc(param_1,1,uVar15);
LAB_0026d70c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x26d710);
          (*pcVar3)();
        }
/* keep the notice, keep the source honest - github.com/pengussy */
        uVar10 = 7;
      }
      else {
        uVar10 = 6;
      }
    }
    else {
      if ((uVar11 != uVar6) || (iVar5 = _memcmp(&ppppppuStack_98,uVar15), iVar5 != 0))
      goto LAB_0026aa10;
LAB_0026b6fc:
      uVar10 = 0;
    }
LAB_0026bf8c:
    puVar9 = puStack_a8;
    *(undefined4 *)puStack_a8 = uVar10;
    plStack_b8 = (long *)__Znwm(0x78);
    plVar2 = plStack_a0;
    plStack_b8[1] = 0;
    plStack_b8[2] = 0;
    *plStack_b8 = (long)&UNK_01dc1278;
    plStack_c0 = plStack_b8 + 3;
    *plStack_c0 = 0x32aaaba7;
    plStack_b8[0xb] = 0;
/*  if you paid for this, you were scammed  */
    plStack_b8[10] = 0;
    plStack_b8[0xd] = 0;
    plStack_b8[0xc] = 0;
    plStack_b8[5] = 0;
    plStack_b8[4] = 0;
    plStack_b8[7] = 0;
    plStack_b8[6] = 0;
    plStack_b8[9] = 0;
    plStack_b8[8] = 0;
    plStack_b8[0xe] = -1;
    puStack_a8 = (undefined8 *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_b8[0xb] = (long)puVar9;
    plStack_b8[0xc] = (long)plVar2;
    puVar9 = (undefined8 *)func_0x00795904(param_1,0x18,&DAT_0024d4f8);
    *puVar9 = 0x44524157494e474f;
    puVar9[2] = plStack_b8;
    puVar9[1] = plStack_c0;
    if (plStack_b8 != (long *)0x0) {
      plStack_b8[1] = plStack_b8[1] + 1;
    }
    pbVar8 = (byte *)(*pcRam0000000002079fb0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019df0fc();
    }
    pcStack_110 = (char *)(*pcRam0000000002079f98)();
    if (*pcStack_110 == '\x01') {
      lVar12 = 0;
      uVar6 = 0x4b8995c0a3de22c8;
      do {
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_110[lVar12 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
/* chat: discord.gg/sdkhDjTex */
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_110[lVar12 + 0xf] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13
        ;
        uVar6 = lVar12 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0xe);
      *pcStack_110 = '\0';
    }
    pcStack_110 = pcStack_110 + 0xf;
    uVar15 = func_0x0011ab24(&pcStack_110);
    func_0x007a1e30(param_1,uVar15);
    func_0x007930d0(param_1,&DAT_0024e570,0,0,0);
    pbVar8 = (byte *)(*pcRam0000000002079fe0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019df138();
    }
    pcStack_118 = (char *)(*pcRam0000000002079fc8)();
    if (*pcStack_118 == '\x01') {
      uVar14 = (byte)pcStack_118[1] ^ 0xbf66a467;
      uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) + 0xd7c21384;
      pcStack_118[9] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ 0xa4;
      uVar6 = (((ulong)(byte)pcStack_118[1] ^ 0xa592c14d6642d4cd) << 0x11 | 0x14b25) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_118[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[10] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_118[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_118[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[0xb] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_118[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_118[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[0xc] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_118[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_118[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[0xd] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_118[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_118[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[0xe] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_118[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_118[7] ^ (uint)uVar13 ^ 0xffffffc3;
/* wm:reversing this took months of machine time */
      uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[0xf] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_118[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar14 = (uint)(byte)pcStack_118[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 6 & 3 | uVar14 << 2) -
               (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_118[0x10] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar11;
      *pcStack_118 = '\0';
    }
    pcStack_118 = pcStack_118 + 9;
    uVar15 = func_0x0011ab24(&pcStack_118);
    func_0x00794260(param_1,0xfffffffe,uVar15);
    func_0x007930d0(param_1,&DAT_002569b4,0,0,0);
    pbVar8 = (byte *)(*pcRam000000000207a010)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019df174();
    }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    pcStack_120 = (char *)(*pcRam0000000002079ff8)();
    if (*pcStack_120 == '\x01') {
      uVar14 = (byte)pcStack_120[1] ^ 0x635eb5c1;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) + 0xb66fe46e;
      pcStack_120[0xc] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ 2;
      uVar6 = (((ulong)(byte)pcStack_120[1] ^ 0x4bc430cc743fb64e) << 0x11 | 0x9788) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_120[0xd] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_120[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_120[0xe] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_120[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_120[0xf] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_120[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// WM - reversing this took months of machine time
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_120[0x10] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_120[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_120[0x11] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_120[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[7] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_120[0x12] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_120[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[8] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_120[0x13] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_120[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* WM - no support for modified copies */
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[9] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_120[0x14] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_120[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[10] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_120[0x15] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_120[10]) << 0x11) + 0x9e3779b97f4a7c1e;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar14 = (uint)(byte)pcStack_120[0xb] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 4 & 0xf | uVar14 << 4) -
               (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_120[0x16] = ((byte)(uVar14 >> 2) & 0x3f | (char)uVar14 * '@') ^ (byte)uVar11;
      *pcStack_120 = '\0';
/* WM - reversing this took months of machine time */
    }
    pcStack_120 = pcStack_120 + 0xc;
    uVar15 = func_0x0011ab24(&pcStack_120);
    func_0x00794260(param_1,0xfffffffe,uVar15);
    pbVar8 = (byte *)(*pcRam000000000207a040)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019df1b0();
    }
    pcStack_128 = (char *)(*pcRam000000000207a028)();
    if (*pcStack_128 == '\x01') {
      lVar12 = 0;
      uVar6 = 0x45f70783db7817a2;
      do {
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_128[lVar12 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 1 & 0x7f | uVar14 << 7) -
                 (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_128[lVar12 + 0xf] = ((byte)(uVar14 >> 7) & 1 | (char)uVar14 * '\x02') ^ (byte)uVar13
        ;
/* WM - more drops soon - github.com/pengussy */
        uVar6 = lVar12 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_128[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0xe);
      *pcStack_128 = '\0';
    }
    pcStack_128 = pcStack_128 + 0xf;
    uVar15 = func_0x0011ab24(&pcStack_128);
    func_0x00792f00(param_1,uVar15);
    pbVar8 = (byte *)(*pcRam000000000207a070)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019df1ec();
    }
    pcStack_130 = (char *)(*pcRam000000000207a058)();
    if (*pcStack_130 == '\x01') {
      uVar14 = (byte)pcStack_130[1] ^ 0x318518ae;
      uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) + 0x54e64;
      pcStack_130[8] = ((byte)(uVar14 >> 3) & 0x1f | (char)uVar14 * ' ') + 1 ^ 0x6d;
      uVar6 = (((ulong)(byte)pcStack_130[1] ^ 0xf99e8d50c469252) << 0x11 | 0x1f33) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_130[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17);
      pcStack_130[9] =
           ((byte)(uVar14 >> 3) & 0x1f | (char)uVar14 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_130[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      uVar14 = (uint)(byte)pcStack_130[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17);
      pcStack_130[10] =
           ((byte)(uVar14 >> 3) & 0x1f | (char)uVar14 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_130[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_130[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17);
      pcStack_130[0xb] =
           ((byte)(uVar14 >> 3) & 0x1f | (char)uVar14 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_130[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_130[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17);
      pcStack_130[0xc] =
           ((byte)(uVar14 >> 3) & 0x1f | (char)uVar14 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_130[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar11 ^ uVar11 >> 0x21;
      uVar14 = (uint)(byte)pcStack_130[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar13 >> 0x17);
      pcStack_130[0xd] =
           ((byte)(uVar14 >> 3) & 0x1f | (char)uVar14 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
/* wm:stripping the watermark breaks the license */
           (byte)uVar13;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_130[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar14 = (uint)(byte)pcStack_130[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar14 = (uVar14 >> 5 & 7 | uVar14 << 3) - (int)(uVar11 >> 0x17);
      pcStack_130[0xe] =
           ((byte)(uVar14 >> 3) & 0x1f | (char)uVar14 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar11;
      *pcStack_130 = '\0';
    }
    pcStack_130 = pcStack_130 + 8;
    uVar15 = func_0x0011ab24(&pcStack_130);
    func_0x00794260(param_1,0xfffffffe,uVar15);
    func_0x00791660(param_1,0xfffffffe);
    pbVar8 = (byte *)(*pcRam000000000207a0a0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019df228();
    }
    pcStack_138 = (char *)(*pcRam000000000207a088)();
    if (*pcStack_138 == '\x01') {
      lVar12 = 0;
      uVar6 = 0x29331a0c06f31351;
      do {
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar11 ^ uVar11 >> 0x21;
        uVar14 = (uint)(byte)pcStack_138[lVar12 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar14 = (uVar14 >> 2 & 0x3f | uVar14 << 6) - (int)(uVar13 >> 0x17);
        pcStack_138[lVar12 + 0xf] =
             ((byte)(uVar14 >> 7) & 1 | (char)uVar14 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar6 = lVar12 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_138[lVar12 + 1]) << 0x11);
/*  found on a paste site? it was re-uploaded illegally  */
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0xe);
      *pcStack_138 = '\0';
    }
    pcStack_138 = pcStack_138 + 0xf;
    uVar15 = func_0x0011ab24(&pcStack_138);
    func_0x007935a0(param_1,0xffffd8f0,uVar15);
    func_0x007946cc(param_1,0xfffffffe);
    unaff_x20 = (byte *)0x2093050;
    if ((bRam0000000002093050 & 1) != 0) goto LAB_0026ce58;
  }
  func_0x019dd714();
LAB_0026ce58:
  __ZNSt3__15mutex4lockEv(0x1f27600);
  if ((*unaff_x20 & 1) == 0) {
    func_0x019dd714();
  }
  lVar12 = lRam0000000001f27640 + 1;
  plStack_c0[10] = lRam0000000001f27640;
  lRam0000000001f27640 = lVar12;
  if ((*unaff_x20 & 1) == 0) {
    func_0x019dd714();
  }
  uStack_70 = 0x1f27648;
  puStack_68 = puRam0000000001f27650;
  ppuStack_80 = &puStack_68;
  pplStack_78 = &plStack_c0;
  if (puRam0000000001f27650 < puRam0000000001f27658) {
/*  no support for modified copies  */
    puRam0000000001f27650[1] = plStack_b8;
    *puRam0000000001f27650 = plStack_c0;
    plStack_c0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    puRam0000000001f27650 = puRam0000000001f27650 + 2;
    __ZNSt3__15mutex6unlockEv(0x1f27600);
    plVar2 = plStack_b8;
  }
  else {
    func_0x00270740(&ppuStack_80);
    puRam0000000001f27650 = puStack_68;
    __ZNSt3__15mutex6unlockEv(0x1f27600);
    plVar2 = plStack_b8;
  }
  plStack_b8 = plVar2;
  if (plVar2 != (long *)0x0) {
    LOAcquire();
    lVar12 = plVar2[1];
    plVar2[1] = lVar12 + -1;
    LORelease();
    if (lVar12 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    LOAcquire();
    lVar12 = plStack_a0[1];
    plStack_a0[1] = lVar12 + -1;
    LORelease();
    if (lVar12 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    }
  }
  return 1;
}

