/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1d2b10:4e86299097
 */

/* WARNING: Removing unreachable block (ram,0x001d3464) */
/* WARNING: Removing unreachable block (ram,0x001d5760) */
/* WARNING: Removing unreachable block (ram,0x001d5770) */
/* WARNING: Removing unreachable block (ram,0x001d5780) */
/* WARNING: Removing unreachable block (ram,0x001d3740) */
/* WARNING: Removing unreachable block (ram,0x001d3730) */
/* WARNING: Removing unreachable block (ram,0x001d34b0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_001d2b10(undefined2 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 long param_5,long param_6,long param_7,int param_8)

{
  undefined2 *puVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  byte *pbVar15;
  undefined8 uVar16;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  undefined8 *******pppppppuVar17;
  char *pcVar18;
  char *pcVar19;
  ulong uVar20;
  undefined8 *******pppppppuVar21;
  long lVar22;
  undefined8 *******pppppppuVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  undefined1 auVar31 [16];
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  ulong uStack_170;
  undefined8 *******pppppppuStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 *******pppppppuStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 *******pppppppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 *******pppppppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 *******pppppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 *******pppppppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined2 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *******pppppppuStack_a8;
/* wm:proprietary - see LICENSE - do not sell */
  ulong uStack_a0;
  byte bStack_91;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_79;
  undefined8 *******pppppppuStack_78;
  undefined8 *apuStack_70 [2];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  pcVar14 = (code *)func_0x0011ab24(&DAT_0093bde0);
  lStack_88 = (*pcVar14)();
  if (lStack_88 == 0) {
// WM - more drops soon - github.com/pengussy
    *(undefined1 *)((long)param_1 + 1) = 0;
    pbVar15 = (byte *)(*pcRam0000000002075060)();
    if ((*pbVar15 & 1) == 0) {
      func_0x019d43e8();
    }
    pcStack_230 = (char *)(*pcRam0000000002075048)();
    if (*pcStack_230 == '\x01') {
      lVar25 = 0;
      uVar27 = 0xf9106a10d21352ce;
      do {
        uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar29 = uVar28 ^ uVar28 >> 0x21;
        uVar13 = (uint)(byte)pcStack_230[lVar25 + 1] ^ (uint)uVar29 ^ 0xffffffc3;
        uVar13 = (uVar13 >> 6 & 3 | uVar13 << 2) - (int)(uVar29 >> 0x17) ^
                 ((uint)(uVar28 >> 0x29) | 1);
        pcStack_230[lVar25 + 0x19] =
/* WM - thanks for reading - discord.gg/sdkhDjTex */
             ((byte)(uVar13 >> 4) & 0xf | (byte)(uVar13 << 4)) - (char)uVar29;
        uVar27 = lVar25 + -0x61c8864680b583eb +
                 (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_230[lVar25 + 1]) << 0x11);
        lVar25 = lVar25 + 1;
      } while (lVar25 != 0x18);
      *pcStack_230 = '\0';
    }
    pcStack_230 = pcStack_230 + 0x19;
    uVar16 = func_0x0011ab24(&pcStack_230);
    func_0x001284e8(param_1 + 8,uVar16);
    lVar25 = lStack_88;
    if (lStack_88 == 0) {
      return;
    }
    pcVar14 = (code *)func_0x0011ab24(&DAT_0093c124);
    (*pcVar14)(lVar25);
    return;
/* no support for modified copies - github.com/pengussy */
  }
  lStack_90 = 0;
  func_0x0003c874(&pppppppuStack_a8);
  uVar27 = uStack_a0;
  if (-1 < (char)bStack_91) {
    uVar27 = (ulong)bStack_91;
  }
  if (uVar27 == 0) {
    *(undefined1 *)((long)param_1 + 1) = 0;
    pbVar15 = (byte *)(*pcRam0000000002075090)();
    if ((*pbVar15 & 1) == 0) {
      func_0x019d43ac();
    }
    pcStack_228 = (char *)(*pcRam0000000002075078)();
    if (*pcStack_228 == '\x01') {
      lVar25 = 0;
      uVar27 = 0x39c961398b5cef17;
      do {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar29 = uVar28 ^ uVar28 >> 0x21;
        uVar13 = (uint)(byte)pcStack_228[lVar25 + 1] ^ (uint)uVar29 ^ 0xffffffc3;
        uVar13 = (uVar13 >> 2 & 0x3f | uVar13 << 6) - (int)(uVar29 >> 0x17) ^
                 ((uint)(uVar28 >> 0x29) | 1);
        pcStack_228[lVar25 + 0x14] = ((byte)(uVar13 >> 7) & 1 | (byte)(uVar13 << 1)) - (char)uVar29;
        uVar27 = lVar25 + -0x61c8864680b583eb +
                 (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_228[lVar25 + 1]) << 0x11);
        lVar25 = lVar25 + 1;
      } while (lVar25 != 0x13);
      *pcStack_228 = '\0';
    }
    pcStack_228 = pcStack_228 + 0x14;
    uVar16 = func_0x0011ab24(&pcStack_228);
    func_0x001284e8(param_1 + 8,uVar16);
    if (lStack_90 != 0) {
      pcVar14 = (code *)func_0x0011ab24(&DAT_00972fbc);
      (*pcVar14)(lStack_90);
    }
    if (lStack_88 == 0) {
      return;
    }
    pcVar14 = (code *)func_0x0011ab24(&DAT_0093c124);
    (*pcVar14)(lStack_88);
    return;
  }
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,&UNK_00002712);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  lVar25 = lStack_88;
  pbVar15 = (byte *)(*pcRam00000000020750c0)();
  if ((*pbVar15 & 1) == 0) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x019d40a0();
  }
  pcStack_1c0 = (char *)(*pcRam00000000020750a8)();
  if (*pcStack_1c0 == '\x01') {
    lVar24 = 0;
    uVar27 = 0x6a20d7fb0830c5f;
    do {
      uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar29 = uVar28 ^ uVar28 >> 0x21;
      uVar13 = (uint)(byte)pcStack_1c0[lVar24 + 1] ^ (uint)uVar29 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 1 & 0x7f | uVar13 << 7) - (int)(uVar29 >> 0x17) ^
               ((uint)(uVar28 >> 0x29) | 1);
      pcStack_1c0[lVar24 + 0x1c] = ((byte)(uVar13 >> 1) & 0x7f | (byte)(uVar13 << 7)) - (char)uVar29
      ;
      uVar27 = lVar24 + -0x61c8864680b583eb +
               (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1c0[lVar24 + 1]) << 0x11);
      lVar24 = lVar24 + 1;
    } while (lVar24 != 0x1b);
    *pcStack_1c0 = '\0';
  }
  pcStack_1c0 = pcStack_1c0 + 0x1c;
  func_0x0011ab24(&pcStack_1c0);
  (*pcVar14)(lVar25,&UNK_0000284e);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  lVar25 = lStack_88;
  pbVar15 = (byte *)(*pcRam00000000020750f0)();
  if ((*pbVar15 & 1) == 0) {
    func_0x019d40dc();
  }
  pcStack_1c8 = (char *)(*pcRam00000000020750d8)();
  if (*pcStack_1c8 == '\x01') {
    lVar24 = 0;
/* reversing this took months of machine time */
    uVar27 = 0xffda351f00c9842d;
    do {
      uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar29 = uVar28 ^ uVar28 >> 0x21;
      uVar13 = (uint)(byte)pcStack_1c8[lVar24 + 1] ^ (uint)uVar29 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 2 & 0x3f | uVar13 << 6) - (int)(uVar29 >> 0x17) ^
               ((uint)(uVar28 >> 0x29) | 1);
      pcStack_1c8[lVar24 + 0x1c] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - (char)uVar29
      ;
      uVar27 = lVar24 + -0x61c8864680b583eb +
               (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1c8[lVar24 + 1]) << 0x11);
      lVar24 = lVar24 + 1;
    } while (lVar24 != 0x1b);
    *pcStack_1c8 = '\0';
  }
// watermarked copy - do not remove
  pcStack_1c8 = pcStack_1c8 + 0x1c;
  func_0x0011ab24(&pcStack_1c8);
  (*pcVar14)(lVar25,&UNK_0000284f);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,0x34);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,0x44);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,99);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,&UNK_00002776);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,0x62);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,0xd5);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,0x79);
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,0x13);
/*  stripping the watermark breaks the license  */
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  (*pcVar14)(lStack_88,0x14);
  puVar1 = param_1 + 8;
  uStack_b0 = 0x4000000;
  puStack_b8 = puVar1;
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  iVar12 = (*pcVar14)(lStack_88,&UNK_00004e2b);
  if (iVar12 != 0) {
LAB_001d304c:
    *(undefined1 *)((long)param_1 + 1) = 0;
    pbVar15 = (byte *)(*pcRam0000000002075120)();
    if ((*pbVar15 & 1) == 0) {
      func_0x019d4118();
    }
    pcStack_1d0 = (char *)(*pcRam0000000002075108)();
    if (*pcStack_1d0 == '\x01') {
      lVar25 = 0;
      uVar27 = 0xed6c2234b63eefc2;
// WM - chat: discord.gg/sdkhDjTex
      do {
        uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar29 = uVar28 ^ uVar28 >> 0x21;
        uVar13 = (uint)(byte)pcStack_1d0[lVar25 + 1] ^ (uint)uVar29 ^ 0xffffffc3;
        uVar13 = (uVar13 >> 7 & 1 | uVar13 << 1) - (int)(uVar29 >> 0x17) ^
                 ((uint)(uVar28 >> 0x29) | 1);
        pcStack_1d0[lVar25 + 0x27] = ((byte)(uVar13 >> 6) & 3 | (byte)(uVar13 << 2)) - (char)uVar29;
        uVar27 = lVar25 + -0x61c8864680b583eb +
                 (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1d0[lVar25 + 1]) << 0x11);
        lVar25 = lVar25 + 1;
      } while (lVar25 != 0x26);
      *pcStack_1d0 = '\0';
    }
    pcStack_1d0 = pcStack_1d0 + 0x27;
    uVar16 = func_0x0011ab24(&pcStack_1d0);
    func_0x001284e8(puVar1,uVar16);
    if (lStack_90 != 0) {
      pcVar14 = (code *)func_0x0011ab24(&DAT_00972fbc);
      (*pcVar14)(lStack_90);
    }
    if (lStack_88 != 0) {
      pcVar14 = (code *)func_0x0011ab24(&DAT_0093c124);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      (*pcVar14)(lStack_88);
    }
    return;
  }
  pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
  iVar12 = (*pcVar14)(lStack_88,&UNK_00002711);
  if (iVar12 != 0) goto LAB_001d304c;
  if (0 < param_7) {
    pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
    (*pcVar14)(lStack_88,0x9c);
    pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
    (*pcVar14)(lStack_88,0x9b);
  }
  pppppppuStack_d0 = (undefined8 *******)0x0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  pppppppuStack_e0 = &pppppppuStack_d0;
  uStack_d8 = 0x100000;
  if (param_8 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (&pppppppuStack_d0,0x1000);
    pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
    iVar12 = (*pcVar14)(lStack_88,&UNK_00004e6f);
    if (iVar12 != 0) {
LAB_001d35e4:
      *(undefined1 *)((long)param_1 + 1) = 0;
      pbVar15 = (byte *)(*pcRam0000000002075150)();
      if ((*pbVar15 & 1) == 0) {
        func_0x019d4154();
      }
      pcStack_1d8 = (char *)(*pcRam0000000002075138)();
      if (*pcStack_1d8 == '\x01') {
        lVar25 = 0;
        uVar27 = 0xf13cb14886471939;
        do {
          uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
/* wm:do not claim this as your own */
          uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
          uVar29 = uVar28 ^ uVar28 >> 0x21;
          uVar13 = (uint)(byte)pcStack_1d8[lVar25 + 1] ^ (uint)uVar29 ^ 0xffffffc3;
          uVar13 = (uVar13 >> 3 & 0x1f | uVar13 << 5) - (int)(uVar29 >> 0x17) ^
                   ((uint)(uVar28 >> 0x29) | 1);
          pcStack_1d8[lVar25 + 0x25] =
               ((byte)(uVar13 >> 7) & 1 | (byte)(uVar13 << 1)) - (char)uVar29;
          uVar27 = lVar25 + -0x61c8864680b583eb +
                   (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1d8[lVar25 + 1]) << 0x11);
          lVar25 = lVar25 + 1;
        } while (lVar25 != 0x24);
        *pcStack_1d8 = '\0';
      }
      pcStack_1d8 = pcStack_1d8 + 0x25;
      uVar16 = func_0x0011ab24(&pcStack_1d8);
      func_0x001284e8(puVar1,uVar16);
      func_0x001d61dc(&lStack_90);
      func_0x001d6220(&lStack_88);
      return;
    }
    pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
    iVar12 = (*pcVar14)(lStack_88,&UNK_0000272d);
    if (iVar12 != 0) goto LAB_001d35e4;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x00017ae8(&pppppppuStack_100,*param_3,param_3[1]);
  }
  else {
    lStack_f8 = param_3[1];
    pppppppuStack_100 = (undefined8 *******)*param_3;
    uStack_f0 = param_3[2];
// WM - thanks for reading - discord.gg/sdkhDjTex
  }
  pppppppuVar21 = pppppppuStack_100;
  pppppppuVar17 = (undefined8 *******)((long)pppppppuStack_100 + lStack_f8);
  if (-1 < (long)uStack_f0) {
    pppppppuVar21 = &pppppppuStack_100;
    pppppppuVar17 = (undefined8 *******)((long)&pppppppuStack_100 + (uStack_f0 >> 0x38));
  }
  for (; pppppppuVar21 != pppppppuVar17;
      pppppppuVar21 = (undefined8 *******)((long)pppppppuVar21 + 1)) {
    uVar11 = ___toupper(*(undefined1 *)pppppppuVar21);
    *(undefined1 *)pppppppuVar21 = uVar11;
  }
  pbVar15 = (byte *)(*pcRam0000000002075180)();
  if ((*pbVar15 & 1) == 0) {
    func_0x019d4190();
  }
  pcStack_1e0 = (char *)(*pcRam0000000002075168)();
  if (*pcStack_1e0 == '\x01') {
    uVar13 = (byte)pcStack_1e0[1] ^ 0x184e31af;
    uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) + 0x79921c31 ^ 0x71e19b;
    pcStack_1e0[5] = ((byte)(uVar13 >> 4) & 0xf | (byte)(uVar13 << 4)) + 0x94;
    uVar27 = (((ulong)(byte)pcStack_1e0[1] ^ 0xbcec54423753d518) << 0x11 | 0x179d8) +
             0x9e3779b97f4a7c15;
    uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
    uVar29 = uVar28 ^ uVar28 >> 0x21;
    uVar13 = (uint)(byte)pcStack_1e0[2] ^ (uint)uVar29 ^ 0xffffffc3;
    uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) - (int)(uVar29 >> 0x17) ^
             ((uint)(uVar28 >> 0x29) | 1);
    pcStack_1e0[6] = ((byte)(uVar13 >> 4) & 0xf | (byte)(uVar13 << 4)) - (char)uVar29;
    uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
    uVar29 = uVar28 ^ uVar28 >> 0x21;
    uVar13 = (uint)(byte)pcStack_1e0[3] ^ (uint)uVar29 ^ 0xffffffc3;
// do not claim this as your own
    uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) - (int)(uVar29 >> 0x17) ^
             ((uint)(uVar28 >> 0x29) | 1);
    pcStack_1e0[7] = ((byte)(uVar13 >> 4) & 0xf | (byte)(uVar13 << 4)) - (char)uVar29;
    uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar27 ^ uVar27 >> 0x21;
    uVar13 = (uint)(byte)pcStack_1e0[4] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) - (int)(uVar28 >> 0x17) ^
             ((uint)(uVar27 >> 0x29) | 1);
    pcStack_1e0[8] = ((byte)(uVar13 >> 4) & 0xf | (byte)(uVar13 << 4)) - (char)uVar28;
    *pcStack_1e0 = '\0';
  }
  pcStack_1e0 = pcStack_1e0 + 5;
  uVar16 = func_0x0011ab24(&pcStack_1e0);
  lVar25 = _strlen();
  if ((long)uStack_f0._7_1_ < 0) {
    if (lVar25 == lStack_f8) {
      if (lVar25 == -1) {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
        func_0x0001c430();
        goto LAB_001d58a0;
      }
      pppppppuVar17 = pppppppuStack_100;
      goto LAB_001d3a34;
    }
LAB_001d3a40:
    pbVar15 = (byte *)(*pcRam00000000020751b0)();
    if ((*pbVar15 & 1) == 0) {
      func_0x019d41cc();
    }
    pcStack_1e8 = (char *)(*pcRam0000000002075198)();
    if (*pcStack_1e8 == '\x01') {
      uVar13 = (byte)pcStack_1e8[1] ^ 0xa288d674;
      uVar13 = (uVar13 >> 3 & 0x1f | uVar13 << 5) + 0xf4580346 ^ 0x3942e9;
      pcStack_1e8[6] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) + 0x49;
      uVar27 = (((ulong)(byte)pcStack_1e8[1] ^ 0x75472e6bcafd3499) << 0x11 | 0xea8e) +
               0x9e3779b97f4a7c15;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar29 = uVar28 ^ uVar28 >> 0x21;
      uVar13 = (uint)(byte)pcStack_1e8[2] ^ (uint)uVar29 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 3 & 0x1f | uVar13 << 5) - (int)(uVar29 >> 0x17) ^
               ((uint)(uVar28 >> 0x29) | 1);
      pcStack_1e8[7] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - (char)uVar29;
      uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar29 = uVar28 ^ uVar28 >> 0x21;
      uVar13 = (uint)(byte)pcStack_1e8[3] ^ (uint)uVar29 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 3 & 0x1f | uVar13 << 5) - (int)(uVar29 >> 0x17) ^
               ((uint)(uVar28 >> 0x29) | 1);
      pcStack_1e8[8] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - (char)uVar29;
      uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar29 = uVar28 ^ uVar28 >> 0x21;
      uVar13 = (uint)(byte)pcStack_1e8[4] ^ (uint)uVar29 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 3 & 0x1f | uVar13 << 5) - (int)(uVar29 >> 0x17) ^
               ((uint)(uVar28 >> 0x29) | 1);
      pcStack_1e8[9] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - (char)uVar29;
      uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar28 = uVar27 ^ uVar27 >> 0x21;
/* WM - more drops soon - github.com/pengussy */
      uVar13 = (uint)(byte)pcStack_1e8[5] ^ (uint)uVar28 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 3 & 0x1f | uVar13 << 5) - (int)(uVar28 >> 0x17) ^
               ((uint)(uVar27 >> 0x29) | 1);
      pcStack_1e8[10] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - (char)uVar28;
      *pcStack_1e8 = '\0';
    }
    pcStack_1e8 = pcStack_1e8 + 6;
    uVar16 = func_0x0011ab24(&pcStack_1e8);
    iVar12 = func_0x00016fc0(&pppppppuStack_100,uVar16);
    if (iVar12 == 0) {
      pbVar15 = (byte *)(*pcRam00000000020751e0)();
      if ((*pbVar15 & 1) == 0) {
        func_0x019d4208();
      }
      pcStack_1f0 = (char *)(*pcRam00000000020751c8)();
      if (*pcStack_1f0 == '\x01') {
        uVar13 = (byte)pcStack_1f0[1] ^ 0xb1c9abdb;
        uVar13 = (uVar13 >> 1 & 0x7f | uVar13 << 7) + 0x85969d64 ^ 0x261e9b;
        pcStack_1f0[6] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - 0x18;
        uVar27 = (((ulong)(byte)pcStack_1f0[1] ^ 0xccf452120595d664) << 0x11 | 0x199e8) +
                 0x9e3779b97f4a7c15;
        uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar29 = uVar28 ^ uVar28 >> 0x21;
        uVar13 = (uint)(byte)pcStack_1f0[2] ^ (uint)uVar29 ^ 0xffffffc3;
        uVar13 = (uVar13 >> 1 & 0x7f | uVar13 << 7) - (int)(uVar29 >> 0x17) ^
                 ((uint)(uVar28 >> 0x29) | 1);
        pcStack_1f0[7] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - (char)uVar29;
        uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar29 = uVar28 ^ uVar28 >> 0x21;
        uVar13 = (uint)(byte)pcStack_1f0[3] ^ (uint)uVar29 ^ 0xffffffc3;
        uVar13 = (uVar13 >> 1 & 0x7f | uVar13 << 7) - (int)(uVar29 >> 0x17) ^
                 ((uint)(uVar28 >> 0x29) | 1);
        pcStack_1f0[8] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - (char)uVar29;
        uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1f0[3]) << 0x11) + 0x9e3779b97f4a7c17;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar29 = uVar28 ^ uVar28 >> 0x21;
        uVar13 = (uint)(byte)pcStack_1f0[4] ^ (uint)uVar29 ^ 0xffffffc3;
        uVar13 = (uVar13 >> 1 & 0x7f | uVar13 << 7) - (int)(uVar29 >> 0x17) ^
                 ((uint)(uVar28 >> 0x29) | 1);
        pcStack_1f0[9] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - (char)uVar29;
        uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1f0[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
        uVar28 = uVar27 ^ uVar27 >> 0x21;
        uVar13 = (uint)(byte)pcStack_1f0[5] ^ (uint)uVar28 ^ 0xffffffc3;
        uVar13 = (uVar13 >> 1 & 0x7f | uVar13 << 7) - (int)(uVar28 >> 0x17) ^
                 ((uint)(uVar27 >> 0x29) | 1);
        pcStack_1f0[10] = ((byte)(uVar13 >> 3) & 0x1f | (byte)(uVar13 << 5)) - (char)uVar28;
        *pcStack_1f0 = '\0';
      }
      pcStack_1f0 = pcStack_1f0 + 6;
      uVar16 = func_0x0011ab24(&pcStack_1f0);
      iVar12 = func_0x00016fc0(&pppppppuStack_100,uVar16);
      pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
      if (iVar12 != 0) {
        uVar16 = 0x2c;
// reversing this took months of machine time
        goto LAB_001d4010;
      }
      (*pcVar14)(lStack_88,&UNK_00002734);
      uVar27 = *(ulong *)(param_4 + 8);
      if (-1 < (char)*(byte *)(param_4 + 0x17)) {
        uVar27 = (ulong)*(byte *)(param_4 + 0x17);
      }
      if (uVar27 != 0) goto LAB_001d3fe8;
    }
    else {
      pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
      (*pcVar14)(lStack_88,0x2f);
LAB_001d3fe8:
      func_0x001d5afc(&lStack_88,param_4);
    }
  }
  else {
    if (lVar25 != uStack_f0._7_1_) goto LAB_001d3a40;
    pppppppuVar17 = &pppppppuStack_100;
LAB_001d3a34:
    iVar12 = _memcmp(pppppppuVar17,uVar16);
    if (iVar12 != 0) goto LAB_001d3a40;
    pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
    uVar16 = 0x50;
LAB_001d4010:
    (*pcVar14)(lStack_88,uVar16);
  }
  pbVar15 = (byte *)(*pcRam0000000002075210)();
/*  watermarked copy - do not remove  */
  if ((*pbVar15 & 1) == 0) {
    func_0x019d4244();
  }
  pcStack_1f8 = (char *)(*pcRam00000000020751f8)();
  if (*pcStack_1f8 == '\x01') {
    lVar25 = 0;
    uVar27 = 0x29a90a6bf79dbc96;
    do {
      uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar29 = uVar28 ^ uVar28 >> 0x21;
      uVar13 = (uint)(byte)pcStack_1f8[lVar25 + 1] ^ (uint)uVar29 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 7 & 1 | uVar13 << 1) - (int)(uVar29 >> 0x17) ^
               ((uint)(uVar28 >> 0x29) | 1);
      pcStack_1f8[lVar25 + 0x10] = ((byte)(uVar13 >> 4) & 0xf | (byte)(uVar13 << 4)) - (char)uVar29;
      uVar27 = lVar25 + -0x61c8864680b583eb +
               (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_1f8[lVar25 + 1]) << 0x11);
      lVar25 = lVar25 + 1;
    } while (lVar25 != 0xf);
    *pcStack_1f8 = '\0';
  }
  pcStack_1f8 = pcStack_1f8 + 0x10;
  uVar16 = func_0x0011ab24(&pcStack_1f8);
  uVar27 = _strlen();
  if (uVar27 < 0x7ffffffffffffff7) {
    if (uVar27 < 0x17) {
      uStack_110 = CONCAT17((char)uVar27,(undefined7)uStack_110);
      pppppppuVar17 = &pppppppuStack_120;
    }
    else {
      uVar28 = (uVar27 & 0x7ffffffffffffff8) + 8;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      uVar29 = 0x19;
      if (uVar28 != 0x18) {
        uVar29 = uVar28;
      }
      pppppppuVar17 = (undefined8 *******)__Znwm(uVar29);
      uStack_110 = uVar29 | 0x8000000000000000;
      pppppppuStack_120 = pppppppuVar17;
      uStack_118 = uVar27;
    }
    _memmove(pppppppuVar17,uVar16,uVar27);
    *(undefined1 *)((long)pppppppuVar17 + uVar27) = 0;
    plVar30 = (long *)(param_5 + 0x10);
    do {
      plVar30 = (long *)*plVar30;
      if (plVar30 == (long *)0x0) goto LAB_001d423c;
      iVar12 = func_0x001d5b80(plVar30 + 2);
    } while (iVar12 == 0);
    pppppppuVar17 = (undefined8 *******)(plVar30 + 5);
    if (&pppppppuStack_120 != (undefined8 ********)pppppppuVar17) {
      bVar4 = *(byte *)((long)plVar30 + 0x3f);
      if ((long)uStack_110 < 0) {
        uVar27 = plVar30[6];
        pppppppuVar21 = (undefined8 *******)plVar30[5];
        if (-1 < (char)bVar4) {
          uVar27 = (ulong)bVar4;
          pppppppuVar21 = pppppppuVar17;
// WM - watermarked copy - do not remove
        }
        func_0x001286c0(&pppppppuStack_120,pppppppuVar21,uVar27);
      }
      else if ((char)bVar4 < '\0') {
        func_0x001287e0(&pppppppuStack_120,plVar30[5],plVar30[6]);
      }
      else {
        uStack_118 = plVar30[6];
        pppppppuStack_120 = (undefined8 *******)*pppppppuVar17;
        uStack_110 = plVar30[7];
      }
    }
LAB_001d423c:
    pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
    (*pcVar14)(lStack_88,&UNK_00002722);
    pbVar15 = (byte *)(*pcRam00000000020752a0)();
    if ((*pbVar15 & 1) == 0) {
      func_0x019d4280();
    }
    pcStack_200 = (char *)(*pcRam0000000002075288)();
    if (*pcStack_200 == '\x01') {
      lVar25 = 0;
      uVar27 = 0x43ce7086d6f82ddc;
      do {
        uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
/*  no support for modified copies  */
        uVar29 = uVar28 ^ uVar28 >> 0x21;
        uVar13 = (uint)(byte)pcStack_200[lVar25 + 1] ^ (uint)uVar29 ^ 0xffffffc3;
        uVar13 = (uVar13 >> 3 & 0x1f | uVar13 << 5) - (int)(uVar29 >> 0x17) ^
                 ((uint)(uVar28 >> 0x29) | 1);
        pcStack_200[lVar25 + 0x19] =
             ((byte)(uVar13 >> 2) & 0x3f | (byte)(uVar13 << 6)) - (char)uVar29;
        uVar27 = lVar25 + -0x61c8864680b583eb +
                 (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_200[lVar25 + 1]) << 0x11);
        lVar25 = lVar25 + 1;
      } while (lVar25 != 0x18);
      *pcStack_200 = '\0';
    }
    pcStack_200 = pcStack_200 + 0x19;
    uVar16 = func_0x0011ab24(&pcStack_200);
    lVar25 = _strlen();
    uVar27 = uStack_a0;
    if (-1 < (char)bStack_91) {
      uVar27 = (ulong)bStack_91;
    }
    uVar28 = uVar27 + lVar25;
    if (uVar28 < 0x7ffffffffffffff7) {
      if (uVar28 < 0x17) {
// WM - origin: github.com/pengussy
        uStack_130 = CONCAT17((char)uVar28,(undefined7)uStack_130);
        pppppppuVar17 = &pppppppuStack_140;
      }
      else {
        uVar29 = (uVar28 & 0x7ffffffffffffff8) + 8;
        uVar20 = 0x19;
        if (uVar29 != 0x18) {
          uVar20 = uVar29;
        }
        pppppppuVar17 = (undefined8 *******)__Znwm(uVar20);
        uStack_130 = uVar20 | 0x8000000000000000;
        pppppppuStack_140 = pppppppuVar17;
        uStack_138 = uVar28;
      }
      pppppppuVar21 = pppppppuStack_a8;
      if (-1 < (char)bStack_91) {
        pppppppuVar21 = &pppppppuStack_a8;
      }
      _memcpy(pppppppuVar17,uVar16,lVar25);
      _memmove((long)pppppppuVar17 + lVar25,pppppppuVar21,uVar27);
/*  do not claim this as your own  */
      *(undefined1 *)((long)pppppppuVar17 + lVar25 + uVar27) = 0;
      iVar12 = func_0x001d5e60(&lStack_90,param_1,&pppppppuStack_140);
      if (iVar12 == 0) {
        uVar13 = 1;
      }
      else {
        pbVar15 = (byte *)(*pcRam00000000020752d0)();
        if ((*pbVar15 & 1) == 0) {
          func_0x019d42bc();
        }
        pcStack_208 = (char *)(*pcRam00000000020752b8)();
        if (*pcStack_208 == '\x01') {
          lVar25 = 0;
          uVar27 = 0xbf5f3cb743355059;
          do {
            uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
            uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
            uVar29 = uVar28 ^ uVar28 >> 0x21;
            uVar13 = (uint)(byte)pcStack_208[lVar25 + 1] ^ (uint)uVar29 ^ 0xffffffc3;
            uVar13 = (uVar13 >> 5 & 7 | uVar13 << 3) - (int)(uVar29 >> 0x17) ^
                     ((uint)(uVar28 >> 0x29) | 1);
            pcStack_208[lVar25 + 0x1d] =
                 ((byte)(uVar13 >> 4) & 0xf | (byte)(uVar13 << 4)) - (char)uVar29;
            uVar27 = lVar25 + -0x61c8864680b583eb +
                     (uVar27 >> 0x2f | (uVar27 ^ (byte)pcStack_208[lVar25 + 1]) << 0x11);
            lVar25 = lVar25 + 1;
          } while (lVar25 != 0x1c);
          *pcStack_208 = '\0';
        }
        pcStack_208 = pcStack_208 + 0x1d;
        uVar16 = func_0x0011ab24(&pcStack_208);
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
// WM - found on a paste site? it was re-uploaded illegally
                  (&pppppppuStack_160,uVar16,&pppppppuStack_a8);
        uVar13 = func_0x001d5e60(&lStack_90,param_1,&pppppppuStack_160);
        uVar13 = uVar13 ^ 1;
        if ((long)uStack_150 < 0) {
          __ZdlPv(pppppppuStack_160);
        }
      }
      if ((long)uStack_130 < 0) {
        __ZdlPv(pppppppuStack_140);
        auVar10._8_8_ = auStack_180._8_8_;
        auVar10._0_8_ = auStack_180._0_8_;
        auVar9._8_8_ = auStack_198._8_8_;
        auVar9._0_8_ = auStack_198._0_8_;
        auVar8._8_8_ = auStack_1a8._8_8_;
        auVar8._0_8_ = auStack_1a8._0_8_;
        auVar31._8_8_ = auStack_1b8._8_8_;
        auVar31._0_8_ = auStack_1b8._0_8_;
      }
      else {
        auVar10._8_8_ = auStack_180._8_8_;
        auVar10._0_8_ = auStack_180._0_8_;
        auVar9._8_8_ = auStack_198._8_8_;
        auVar9._0_8_ = auStack_198._0_8_;
        auVar8._8_8_ = auStack_1a8._8_8_;
        auVar8._0_8_ = auStack_1a8._0_8_;
        auVar31._8_8_ = auStack_1b8._8_8_;
        auVar31._0_8_ = auStack_1b8._0_8_;
      }
      if ((uVar13 & 1) == 0) {
        plVar30 = *(long **)(param_5 + 0x10);
        if (plVar30 != (long *)0x0) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
          pcVar18 = (char *)(*pcRam00000000020752e8)();
          pcVar14 = pcRam0000000002075300;
          do {
            uVar27 = func_0x001d5b80(plVar30 + 2);
            if ((uVar27 & 1) == 0) {
              pbVar15 = (byte *)(*pcVar14)(0x2075300);
              if ((*pbVar15 & 1) == 0) {
                func_0x019d42f8();
                cVar5 = *pcVar18;
              }
              else {
                cVar5 = *pcVar18;
              }
              if (cVar5 == '\x01') {
                uVar13 = (byte)pcVar18[1] ^ 0xa55bdb0f;
                uVar13 = (uVar13 >> 6 & 3 | uVar13 << 2) + 0x2e3beef4;
                pcVar18[4] = ((byte)(uVar13 >> 3) & 0x1f | (char)uVar13 * ' ') ^ 0xcc;
                uVar27 = (((ulong)(byte)pcVar18[1] ^ 0x70636e083dd13600) << 0x11 | 0xe0c6) +
                         0x9e3779b97f4a7c15;
                uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
                uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
                uVar29 = uVar28 ^ uVar28 >> 0x21;
                uVar13 = (uint)(byte)pcVar18[2] ^ (uint)uVar29 ^ 0xffffffc3;
                uVar13 = (uVar13 >> 6 & 3 | uVar13 << 2) -
                         (((uint)(uVar28 >> 0x29) | 1) + (int)(uVar29 >> 0x17));
                pcVar18[5] = ((byte)(uVar13 >> 3) & 0x1f | (char)uVar13 * ' ') ^ (byte)uVar29;
                uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcVar18[2]) << 0x11) + 0x9e3779b97f4a7c16
                ;
                uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
                uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
                uVar28 = uVar27 ^ uVar27 >> 0x21;
                uVar13 = (uint)(byte)pcVar18[3] ^ (uint)uVar28 ^ 0xffffffc3;
                uVar13 = (uVar13 >> 6 & 3 | uVar13 << 2) -
                         (((uint)(uVar27 >> 0x29) | 1) + (int)(uVar28 >> 0x17));
                pcVar18[6] = ((byte)(uVar13 >> 3) & 0x1f | (char)uVar13 * ' ') ^ (byte)uVar28;
                *pcVar18 = '\0';
/*  reversing this took months of machine time  */
              }
              pcStack_210 = pcVar18 + 4;
              uVar16 = func_0x0011ab24(&pcStack_210);
              bVar4 = *(byte *)((long)plVar30 + 0x27);
              plVar3 = (long *)plVar30[2];
              uVar27 = plVar30[3];
              if (-1 < (char)bVar4) {
                uVar27 = (ulong)bVar4;
              }
              lVar25 = _strlen();
              uVar28 = lVar25 + uVar27;
              if (0x7ffffffffffffff6 < uVar28) {
                func_0x0000aa50();
                goto LAB_001d58a0;
              }
              if (uVar28 < 0x17) {
                uStack_150 = CONCAT17((char)uVar28,(undefined7)uStack_150);
                pppppppuVar17 = &pppppppuStack_160;
              }
              else {
                uVar29 = (uVar28 & 0x7ffffffffffffff8) + 8;
                uVar20 = 0x19;
                if (uVar29 != 0x18) {
                  uVar20 = uVar29;
                }
                pppppppuVar17 = (undefined8 *******)__Znwm(uVar20);
                uStack_150 = uVar20 | 0x8000000000000000;
                pppppppuStack_160 = pppppppuVar17;
                uStack_158 = uVar28;
              }
              if (-1 < (char)bVar4) {
                plVar3 = plVar30 + 2;
              }
              _memmove(pppppppuVar17,plVar3,uVar27);
              _memmove((long)pppppppuVar17 + uVar27,uVar16,lVar25);
              *(undefined1 *)((long)pppppppuVar17 + uVar27 + lVar25) = 0;
/* WM - unlicensed copy if this notice is missing */
              uVar28 = uStack_150;
              uVar27 = plVar30[6];
              plVar3 = (long *)plVar30[5];
              if (-1 < (char)*(byte *)((long)plVar30 + 0x3f)) {
                uVar27 = (ulong)*(byte *)((long)plVar30 + 0x3f);
                plVar3 = plVar30 + 5;
              }
              uVar26 = (uStack_150 & 0x7fffffffffffffff) - 1;
              uVar29 = uStack_158;
              uVar20 = uVar26;
              if (-1 < (long)uStack_150) {
                uVar20 = 0x16;
                uVar29 = uStack_150 >> 0x38;
              }
              if (uVar20 - uVar29 < uVar27) {
                uVar20 = uVar29 + uVar27;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                if (0x7ffffffffffffff6 < uVar20) {
                  func_0x0000aa50();
                  goto LAB_001d58a0;
                }
                if ((long)uStack_150 < 0) {
                  if (uVar26 < 0x3ffffffffffffff4) goto LAB_001d4988;
                  uVar26 = 0x7ffffffffffffff8;
                  pppppppuVar17 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
LAB_001d49c0:
                  pppppppuVar21 = pppppppuStack_160;
                }
                else {
                  uVar26 = 0x16;
LAB_001d4988:
                  uVar2 = uVar20;
                  if (uVar20 <= uVar26 * 2) {
                    uVar2 = uVar26 * 2;
                  }
                  uVar2 = (uVar2 & 0x7ffffffffffffff8) + 8;
                  uVar26 = 0x19;
                  if (uVar2 != 0x18) {
                    uVar26 = uVar2;
                  }
                  pppppppuVar17 = (undefined8 *******)__Znwm(uVar26);
                  if ((long)uVar28 < 0) goto LAB_001d49c0;
                  pppppppuVar21 = &pppppppuStack_160;
                }
                if (uVar29 != 0) {
                  _memmove(pppppppuVar17,pppppppuVar21,uVar29);
                }
                _memmove((long)pppppppuVar17 + uVar29,plVar3,uVar27);
                *(undefined1 *)((long)pppppppuVar17 + uVar20) = 0;
                if ((long)uVar28 < 0) {
                  __ZdlPv(pppppppuStack_160);
                }
                uStack_150 = uVar26 | 0x8000000000000000;
                pppppppuStack_160 = pppppppuVar17;
                uStack_158 = uVar20;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              }
              else if (uVar27 != 0) {
                pppppppuVar17 = pppppppuStack_160;
                if (-1 < (long)uStack_150) {
                  pppppppuVar17 = &pppppppuStack_160;
                }
                _memmove((long)pppppppuVar17 + uVar29,plVar3,uVar27);
                uVar29 = uVar29 + uVar27;
                if ((long)uStack_150 < 0) {
                  uStack_158 = uVar29;
                }
                else {
                  uStack_150 = CONCAT17((char)uVar29,(undefined7)uStack_150) & 0x7fffffffffffffff;
                }
                *(undefined1 *)((long)pppppppuVar17 + uVar29) = 0;
              }
// keep the notice, keep the source honest
              uStack_138 = uStack_158;
              pppppppuStack_140 = pppppppuStack_160;
              uStack_130 = uStack_150;
              uVar27 = func_0x001d5e60(&lStack_90,param_1,&pppppppuStack_140);
              if ((long)uStack_130 < 0) {
                __ZdlPv(pppppppuStack_140);
              }
              auVar10._8_8_ = auStack_180._8_8_;
              auVar10._0_8_ = auStack_180._0_8_;
              auVar9._8_8_ = auStack_198._8_8_;
              auVar9._0_8_ = auStack_198._0_8_;
              auVar8._8_8_ = auStack_1a8._8_8_;
              auVar8._0_8_ = auStack_1a8._0_8_;
              auVar31._8_8_ = auStack_1b8._8_8_;
              auVar31._0_8_ = auStack_1b8._0_8_;
              if ((uVar27 & 1) == 0) goto LAB_001d5724;
            }
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
        pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
        (*pcVar14)(lStack_88,&UNK_00002727);
        if (*(long *)(param_6 + 0x18) != 0) {
          pppppppuStack_140 = (undefined8 *******)0x0;
          uStack_138 = 0;
          uStack_130 = 0;
/* if you paid for this, you were scammed */
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                    (&pppppppuStack_140,*(long *)(param_6 + 0x18) << 5);
          plVar30 = *(long **)(param_6 + 0x10);
          if (plVar30 != (long *)0x0) {
            pcVar18 = (char *)(*pcRam0000000002075318)();
            pcVar19 = (char *)(*pcRam0000000002075348)();
            pcVar14 = pcRam0000000002075330;
LAB_001d4b14:
            do {
              pbVar15 = (byte *)(*pcVar14)(0x2075330);
              if ((*pbVar15 & 1) == 0) {
                func_0x019d4334();
                cVar5 = *pcVar18;
              }
              else {
                cVar5 = *pcVar18;
              }
              if (cVar5 == '\x01') {
                uVar13 = (byte)pcVar18[1] ^ 0xe7b46773;
                uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) + 0xa04f5d0;
                pcVar18[3] = ((byte)(uVar13 >> 6) & 3 | (char)uVar13 * '\x04') + 0x81 ^ 0xb0;
                uVar27 = (((ulong)(byte)pcVar18[1] ^ 0x81ed4bfea2217788) << 0x11 | 0x103da) +
                         0x9e3779b97f4a7c15;
                uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
                uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
                uVar28 = uVar27 ^ uVar27 >> 0x21;
                uVar13 = (uint)(byte)pcVar18[2] ^ (uint)uVar28 ^ 0xffffffc3;
                uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) - (int)(uVar28 >> 0x17);
                pcVar18[4] = ((byte)(uVar13 >> 6) & 3 | (char)uVar13 * '\x04') -
                             ((byte)(uVar27 >> 0x29) | 1) ^ (byte)uVar28;
                *pcVar18 = '\0';
              }
              pcStack_218 = pcVar18 + 3;
/* thanks for reading - discord.gg/sdkhDjTex */
              uVar16 = func_0x0011ab24(&pcStack_218);
              bVar4 = *(byte *)((long)plVar30 + 0x27);
              plVar3 = (long *)plVar30[2];
              uVar27 = plVar30[3];
              if (-1 < (char)bVar4) {
                uVar27 = (ulong)bVar4;
              }
              lVar25 = _strlen();
              uVar28 = lVar25 + uVar27;
              if (0x7ffffffffffffff6 < uVar28) {
                func_0x0000aa50();
                goto LAB_001d58a0;
              }
              if (uVar28 < 0x17) {
                uStack_188 = CONCAT17((char)uVar28,(undefined7)uStack_188);
                pppppppuVar17 = (undefined8 *******)auStack_198;
              }
              else {
                uVar29 = (uVar28 & 0x7ffffffffffffff8) + 8;
                uVar20 = 0x19;
                if (uVar29 != 0x18) {
                  uVar20 = uVar29;
                }
                pppppppuVar17 = (undefined8 *******)__Znwm(uVar20);
                uStack_188 = uVar20 | 0x8000000000000000;
                auStack_198._0_8_ = pppppppuVar17;
                auStack_198._8_8_ = uVar28;
              }
              if (-1 < (char)bVar4) {
                plVar3 = plVar30 + 2;
              }
              _memmove(pppppppuVar17,plVar3,uVar27);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
              _memmove((long)pppppppuVar17 + uVar27,uVar16,lVar25);
              *(undefined1 *)((long)pppppppuVar17 + uVar27 + lVar25) = 0;
              uVar28 = uStack_188;
              uVar27 = plVar30[6];
              plVar3 = (long *)plVar30[5];
              if (-1 < (char)*(byte *)((long)plVar30 + 0x3f)) {
                uVar27 = (ulong)*(byte *)((long)plVar30 + 0x3f);
                plVar3 = plVar30 + 5;
              }
              uVar26 = (uStack_188 & 0x7fffffffffffffff) - 1;
              uVar29 = auStack_198._8_8_;
              uVar20 = uVar26;
              if (-1 < (long)uStack_188) {
                uVar20 = 0x16;
                uVar29 = uStack_188 >> 0x38;
              }
              if (uVar20 - uVar29 < uVar27) {
                uVar20 = uVar29 + uVar27;
                if (0x7ffffffffffffff6 < uVar20) {
                  func_0x0000aa50();
                  goto LAB_001d58a0;
                }
                if ((long)uStack_188 < 0) {
                  if (uVar26 < 0x3ffffffffffffff4) goto LAB_001d4df4;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  uVar26 = 0x7ffffffffffffff8;
                  pppppppuVar17 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
LAB_001d4e2c:
                  pppppppuVar21 = (undefined8 *******)auStack_198._0_8_;
                }
                else {
                  uVar26 = 0x16;
LAB_001d4df4:
                  uVar2 = uVar20;
                  if (uVar20 <= uVar26 * 2) {
                    uVar2 = uVar26 * 2;
                  }
                  uVar2 = (uVar2 & 0x7ffffffffffffff8) + 8;
                  uVar26 = 0x19;
                  if (uVar2 != 0x18) {
                    uVar26 = uVar2;
                  }
                  pppppppuVar17 = (undefined8 *******)__Znwm(uVar26);
                  if ((long)uVar28 < 0) goto LAB_001d4e2c;
                  pppppppuVar21 = (undefined8 *******)auStack_198;
                }
                if (uVar29 != 0) {
                  _memmove(pppppppuVar17,pppppppuVar21,uVar29);
                }
                _memmove((long)pppppppuVar17 + uVar29,plVar3,uVar27);
                *(undefined1 *)((long)pppppppuVar17 + uVar20) = 0;
                if ((long)uVar28 < 0) {
                  __ZdlPv(auStack_198._0_8_);
                }
                uStack_188 = uVar26 | 0x8000000000000000;
                auStack_198._0_8_ = pppppppuVar17;
                auStack_198._8_8_ = uVar20;
              }
              else if (uVar27 != 0) {
                pppppppuVar17 = (undefined8 *******)auStack_198._0_8_;
                if (-1 < (long)uStack_188) {
                  pppppppuVar17 = (undefined8 *******)auStack_198;
                }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                _memmove((long)pppppppuVar17 + uVar29,plVar3,uVar27);
                uVar29 = uVar29 + uVar27;
                if ((long)uStack_188 < 0) {
                  auStack_198._8_8_ = uVar29;
                }
                else {
                  uStack_188 = CONCAT17((char)uVar29,(undefined7)uStack_188) & 0x7fffffffffffffff;
                }
                *(undefined1 *)((long)pppppppuVar17 + uVar29) = 0;
              }
              auStack_180._8_8_ = auStack_198._8_8_;
              auStack_180._0_8_ = auStack_198._0_8_;
              uStack_170 = uStack_188;
              auStack_198._8_8_ = 0;
              uStack_188 = 0;
              auStack_198._0_8_ = (undefined8 *******)0x0;
              pbVar15 = (byte *)(*pcRam0000000002075360)();
              if ((*pbVar15 & 1) == 0) {
                func_0x019d4370();
                cVar5 = *pcVar19;
              }
              else {
                cVar5 = *pcVar19;
              }
              if (cVar5 == '\x01') {
                uVar13 = (byte)pcVar19[1] ^ 0x9e640bbd;
                uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) + 0xd5f6033d ^ 0x324a83;
                pcVar19[4] = ((byte)(uVar13 >> 2) & 0x3f | (byte)(uVar13 << 6)) + 0x82;
                uVar27 = (((ulong)(byte)pcVar19[1] ^ 0x2bdf670d7e0cb6a2) << 0x11 | 0x57be) +
                         0x9e3779b97f4a7c15;
                uVar28 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
// WM - do not claim this as your own
                uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
                uVar29 = uVar28 ^ uVar28 >> 0x21;
                uVar13 = (uint)(byte)pcVar19[2] ^ (uint)uVar29 ^ 0xffffffc3;
                uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) - (int)(uVar29 >> 0x17) ^
                         ((uint)(uVar28 >> 0x29) | 1);
                pcVar19[5] = ((byte)(uVar13 >> 2) & 0x3f | (byte)(uVar13 << 6)) - (char)uVar29;
                uVar27 = (uVar27 >> 0x2f | (uVar27 ^ (byte)pcVar19[2]) << 0x11) + 0x9e3779b97f4a7c16
                ;
                uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
                uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
                uVar28 = uVar27 ^ uVar27 >> 0x21;
                uVar13 = (uint)(byte)pcVar19[3] ^ (uint)uVar28 ^ 0xffffffc3;
                uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) - (int)(uVar28 >> 0x17) ^
                         ((uint)(uVar27 >> 0x29) | 1);
                pcVar19[6] = ((byte)(uVar13 >> 2) & 0x3f | (byte)(uVar13 << 6)) - (char)uVar28;
                *pcVar19 = '\0';
              }
              pcStack_220 = pcVar19 + 4;
              uVar16 = func_0x0011ab24(&pcStack_220);
              uVar20 = _strlen();
              uVar29 = uStack_170;
              uVar26 = (uStack_170 & 0x7fffffffffffffff) - 1;
              uVar27 = auStack_180._8_8_;
              uVar28 = uVar26;
              if (-1 < (long)uStack_170) {
                uVar28 = 0x16;
                uVar27 = uStack_170 >> 0x38;
              }
              if (uVar28 - uVar27 < uVar20) {
// found on a paste site? it was re-uploaded illegally
                uVar28 = uVar27 + uVar20;
                if (0x7ffffffffffffff6 < uVar28) {
                  func_0x0000aa50();
                  goto LAB_001d58a0;
                }
                if ((long)uStack_170 < 0) {
                  if (uVar26 < 0x3ffffffffffffff4) goto LAB_001d5114;
                  uVar26 = 0x7ffffffffffffff8;
                  pppppppuVar17 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
LAB_001d514c:
                  pppppppuVar21 = (undefined8 *******)auStack_180._0_8_;
                }
                else {
                  uVar26 = 0x16;
LAB_001d5114:
                  uVar2 = uVar28;
                  if (uVar28 <= uVar26 * 2) {
                    uVar2 = uVar26 * 2;
                  }
                  uVar2 = (uVar2 & 0x7ffffffffffffff8) + 8;
                  uVar26 = 0x19;
                  if (uVar2 != 0x18) {
                    uVar26 = uVar2;
                  }
                  pppppppuVar17 = (undefined8 *******)__Znwm(uVar26);
                  if ((long)uVar29 < 0) goto LAB_001d514c;
                  pppppppuVar21 = (undefined8 *******)auStack_180;
                }
                if (uVar27 != 0) {
                  _memmove(pppppppuVar17,pppppppuVar21,uVar27);
                }
                _memmove((long)pppppppuVar17 + uVar27,uVar16,uVar20);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                *(undefined1 *)((long)pppppppuVar17 + uVar28) = 0;
                if ((long)uVar29 < 0) {
                  __ZdlPv(auStack_180._0_8_);
                }
                uStack_170 = uVar26 | 0x8000000000000000;
                auStack_180._0_8_ = pppppppuVar17;
                auStack_180._8_8_ = uVar28;
              }
              else if (uVar20 != 0) {
                pppppppuVar17 = (undefined8 *******)auStack_180._0_8_;
                if (-1 < (long)uStack_170) {
                  pppppppuVar17 = (undefined8 *******)auStack_180;
                }
                _memmove((long)pppppppuVar17 + uVar27,uVar16,uVar20);
                uVar27 = uVar27 + uVar20;
                if ((long)uStack_170 < 0) {
                  auStack_180._8_8_ = uVar27;
                }
                else {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                  uStack_170 = CONCAT17((char)uVar27,(undefined7)uStack_170) & 0x7fffffffffffffff;
                }
                *(undefined1 *)((long)pppppppuVar17 + uVar27) = 0;
              }
              uVar28 = uStack_130;
              uStack_150 = uStack_170;
              uStack_158 = auStack_180._8_8_;
              pppppppuStack_160 = (undefined8 *******)auStack_180._0_8_;
              auStack_180._8_8_ = 0;
              uStack_170 = 0;
              auStack_180._0_8_ = (undefined8 ******)0x0;
              uVar13 = (uint)(char)(uStack_150 >> 0x38);
              uVar27 = uStack_158;
              pppppppuVar17 = pppppppuStack_160;
              if (-1 < (int)uVar13) {
                uVar27 = uStack_150 >> 0x38;
                pppppppuVar17 = &pppppppuStack_160;
              }
              uVar26 = (uStack_130 & 0x7fffffffffffffff) - 1;
              uVar29 = uStack_138;
              uVar20 = uVar26;
              if (-1 < (long)uStack_130) {
                uVar20 = 0x16;
                uVar29 = uStack_130 >> 0x38;
              }
              if (uVar20 - uVar29 < uVar27) {
                uVar20 = uVar29 + uVar27;
                if (0x7ffffffffffffff6 < uVar20) {
                  func_0x0000aa50();
                  goto LAB_001d58a0;
                }
                if ((long)uStack_130 < 0) {
                  if (uVar26 < 0x3ffffffffffffff4) goto LAB_001d5288;
                  uVar26 = 0x7ffffffffffffff8;
// if you paid for this, you were scammed
                  pppppppuVar21 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
LAB_001d52c0:
                  pppppppuVar23 = pppppppuStack_140;
                }
                else {
                  uVar26 = 0x16;
LAB_001d5288:
                  uVar2 = uVar20;
                  if (uVar20 <= uVar26 * 2) {
                    uVar2 = uVar26 * 2;
                  }
                  uVar2 = (uVar2 & 0x7ffffffffffffff8) + 8;
                  uVar26 = 0x19;
                  if (uVar2 != 0x18) {
                    uVar26 = uVar2;
                  }
                  pppppppuVar21 = (undefined8 *******)__Znwm(uVar26);
                  if ((long)uVar28 < 0) goto LAB_001d52c0;
                  pppppppuVar23 = &pppppppuStack_140;
                }
                if (uVar29 != 0) {
                  _memmove(pppppppuVar21,pppppppuVar23,uVar29);
                }
                _memmove((long)pppppppuVar21 + uVar29,pppppppuVar17,uVar27);
                *(undefined1 *)((long)pppppppuVar21 + uVar20) = 0;
                if ((long)uVar28 < 0) {
                  __ZdlPv(pppppppuStack_140);
                }
                uStack_130 = uVar26 | 0x8000000000000000;
                uVar13 = (uint)uStack_150._7_1_;
/*  more drops soon - github.com/pengussy  */
                pppppppuStack_140 = pppppppuVar21;
                uStack_138 = uVar20;
              }
              else if (uVar27 != 0) {
                pppppppuVar21 = pppppppuStack_140;
                if (-1 < (long)uStack_130) {
                  pppppppuVar21 = &pppppppuStack_140;
                }
                _memmove((long)pppppppuVar21 + uVar29,pppppppuVar17,uVar27);
                uVar29 = uVar29 + uVar27;
                if ((long)uStack_130 < 0) {
                  uStack_138 = uVar29;
                  *(undefined1 *)((long)pppppppuVar21 + uVar29) = 0;
                }
                else {
                  uStack_130 = CONCAT17((char)uVar29,(undefined7)uStack_130) & 0x7fffffffffffffff;
                  *(undefined1 *)((long)pppppppuVar21 + uVar29) = 0;
                }
              }
              if ((uVar13 >> 7 & 1) != 0) {
                __ZdlPv(pppppppuStack_160);
              }
              if ((long)uStack_170 < 0) {
                __ZdlPv(auStack_180._0_8_);
                if (-1 < (long)uStack_188) goto LAB_001d4b0c;
LAB_001d5324:
                __ZdlPv(auStack_198._0_8_);
                plVar30 = (long *)*plVar30;
                if (plVar30 == (long *)0x0) break;
                goto LAB_001d4b14;
              }
              if ((long)uStack_188 < 0) goto LAB_001d5324;
/*  unlicensed copy if this notice is missing  */
LAB_001d4b0c:
              plVar30 = (long *)*plVar30;
            } while (plVar30 != (long *)0x0);
          }
          pcVar14 = (code *)func_0x0011ab24(&DAT_009712c0);
          (*pcVar14)(lStack_88,&UNK_00002726);
          if ((long)uStack_130 < 0) {
            __ZdlPv(pppppppuStack_140);
          }
        }
        pcVar14 = (code *)func_0x0011ab24(&DAT_0093bef4);
        uVar16 = (*pcVar14)(lStack_88);
        if ((int)uVar16 == 0) {
          pcVar14 = (code *)func_0x0011ab24(&DAT_0093c160);
          (*pcVar14)(lStack_88,&UNK_00200002);
          if (param_8 != 0) {
            lVar25 = func_0x001d6020(&pppppppuStack_d0,&UNK_01c2d5f8,0);
            if (lVar25 != -1) {
              uVar27 = 0;
              do {
                uVar28 = uStack_c8;
                if (-1 < (long)uStack_c0) {
                  uVar28 = uStack_c0 >> 0x38;
                }
                if (uVar28 < uVar27) {
                  func_0x0001c444("string_view::substr");
                  goto LAB_001d58a0;
                }
                pppppppuVar17 = pppppppuStack_d0;
                if (-1 < (long)uStack_c0) {
                  pppppppuVar17 = &pppppppuStack_d0;
// chat: discord.gg/sdkhDjTex
                }
                lVar24 = (long)pppppppuVar17 + uVar27;
                uVar29 = uVar28 - uVar27;
                if (lVar25 - uVar27 <= uVar28 - uVar27) {
                  uVar29 = lVar25 - uVar27;
                }
                lVar22 = _memchr(lVar24,0x3a,uVar29);
                uVar27 = lVar22 - lVar24;
                if (lVar22 != 0 && uVar27 != 0xffffffffffffffff) {
                  uVar28 = uVar29;
                  if (uVar27 <= uVar29) {
                    uVar28 = uVar27;
                  }
                  auVar31 = func_0x001d6104(lVar24,uVar28);
                  auStack_180 = auVar31;
                  if (uVar29 <= uVar27) {
                    func_0x0001c444("string_view::substr");
                    goto LAB_001d58a0;
                  }
                  auVar31 = func_0x001d6104(lVar24 + uVar27 + 1,uVar29 - (uVar27 + 1));
                  auStack_198 = auVar31;
                  func_0x001182b0(&pppppppuStack_140,auStack_198);
                  func_0x001182b0(&pppppppuStack_160,auStack_180);
                  auStack_1b8._0_8_ = &pppppppuStack_160;
                  auStack_1a8._0_8_ = param_1 + 0x14;
                  lVar24 = func_0x001d6cc0(auStack_1a8,&pppppppuStack_160,&UNK_01bd2568,auStack_1b8,
                                           apuStack_70);
                  if (*(char *)(lVar24 + 0x3f) < '\0') {
                    __ZdlPv(*(undefined8 *)(lVar24 + 0x28));
                    *(undefined8 *)(lVar24 + 0x28) = 0;
                    *(undefined8 *)(lVar24 + 0x30) = 0;
                    *(undefined8 *)(lVar24 + 0x38) = 0;
                  }
                  *(ulong *)(lVar24 + 0x30) = uStack_138;
                  *(undefined8 ********)(lVar24 + 0x28) = pppppppuStack_140;
                  *(ulong *)(lVar24 + 0x38) = uStack_130;
                  uStack_130 = uStack_130 & 0xffffffffffffff;
/* WM - donate: donate/README.md */
                  pppppppuStack_140 =
                       (undefined8 *******)((ulong)pppppppuStack_140 & 0xffffffffffffff00);
                  if ((long)uStack_150 < 0) {
                    __ZdlPv(pppppppuStack_160);
                    if ((long)uStack_130 < 0) {
                      __ZdlPv(pppppppuStack_140);
                    }
                  }
                  iVar12 = func_0x001d6168(auStack_180._0_8_,auStack_180._8_8_,"Set-Cookie",10);
                  uVar27 = auStack_198._8_8_;
                  uVar16 = auStack_198._0_8_;
                  if (iVar12 != 0) {
                    lVar24 = _memchr(auStack_198._0_8_,0x3b,auStack_198._8_8_);
                    uVar28 = uVar27;
                    if ((ulong)(lVar24 - uVar16) <= uVar27) {
                      uVar28 = lVar24 - uVar16;
                    }
/* WM - found on a paste site? it was re-uploaded illegally */
                    if (lVar24 != 0) {
                      uVar27 = uVar28;
                    }
                    lVar24 = _memchr(uVar16,0x3d,uVar27);
                    auVar7._8_8_ = auStack_1b8._8_8_;
                    auVar7._0_8_ = auStack_1b8._0_8_;
                    auVar6._8_8_ = auStack_1a8._8_8_;
                    auVar6._0_8_ = auStack_1a8._0_8_;
                    if ((lVar24 != 0) &&
                       (uVar28 = lVar24 - uVar16, auStack_1a8 = auVar6, auStack_1b8 = auVar7,
                       uVar28 != 0xffffffffffffffff)) {
                      uVar29 = uVar27;
                      if (uVar28 <= uVar27) {
                        uVar29 = uVar28;
                      }
                      auStack_1a8 = func_0x001d6104(uVar16,uVar29);
                      if (auStack_1a8._8_8_ != 0) {
                        if (uVar27 <= uVar28) {
                          func_0x0001c444("string_view::substr");
                          goto LAB_001d58a0;
                        }
                        auStack_1b8 = func_0x001d6104(uVar16 + uVar28 + 1,uVar27 - (uVar28 + 1));
                        func_0x001182b0(&pppppppuStack_140,auStack_1b8);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
                        func_0x001182b0(&pppppppuStack_160,auStack_1a8);
                        pppppppuStack_78 = &pppppppuStack_160;
                        apuStack_70[0] = (undefined8 *)(param_1 + 0x28);
                        lVar24 = func_0x001d6cc0(apuStack_70,&pppppppuStack_160,&UNK_01bd2568,
                                                 &pppppppuStack_78,&uStack_79);
                        if (*(char *)(lVar24 + 0x3f) < '\0') {
                          __ZdlPv(*(undefined8 *)(lVar24 + 0x28));
                          *(undefined8 *)(lVar24 + 0x28) = 0;
                          *(undefined8 *)(lVar24 + 0x30) = 0;
                          *(undefined8 *)(lVar24 + 0x38) = 0;
                        }
                        *(ulong *)(lVar24 + 0x30) = uStack_138;
                        *(undefined8 ********)(lVar24 + 0x28) = pppppppuStack_140;
                        *(ulong *)(lVar24 + 0x38) = uStack_130;
                        uStack_130 = uStack_130 & 0xffffffffffffff;
                        pppppppuStack_140 =
                             (undefined8 *******)((ulong)pppppppuStack_140 & 0xffffffffffffff00);
                        if ((long)uStack_150 < 0) {
                          __ZdlPv(pppppppuStack_160);
                          if ((long)uStack_130 < 0) {
                            __ZdlPv(pppppppuStack_140);
                          }
                        }
                      }
                    }
                  }
                }
                uVar27 = lVar25 + 2;
/* wm:if you paid for this, you were scammed */
                lVar25 = func_0x001d6020(&pppppppuStack_d0,&UNK_01c2d5f8,uVar27);
              } while (lVar25 != -1);
            }
          }
          *(undefined1 *)((long)param_1 + 1) = 1;
          *(bool *)param_1 = *(long *)(param_1 + 4) - 200U < 100;
          auVar31 = auStack_1b8;
          auVar8 = auStack_1a8;
          auVar9 = auStack_198;
          auVar10 = auStack_180;
        }
        else {
          *(undefined1 *)((long)param_1 + 1) = 0;
          pcVar14 = (code *)func_0x0011ab24(&DAT_0097806c);
          uVar16 = (*pcVar14)(uVar16);
          func_0x001284e8(puVar1,uVar16);
          auVar10._8_8_ = auStack_180._8_8_;
          auVar10._0_8_ = auStack_180._0_8_;
/* wm:no support for modified copies */
          auVar9._8_8_ = auStack_198._8_8_;
          auVar9._0_8_ = auStack_198._0_8_;
          auVar8._8_8_ = auStack_1a8._8_8_;
          auVar8._0_8_ = auStack_1a8._0_8_;
          auVar31._8_8_ = auStack_1b8._8_8_;
          auVar31._0_8_ = auStack_1b8._0_8_;
        }
      }
LAB_001d5724:
      if ((long)uStack_110 < 0) {
        auStack_1b8 = auVar31;
        auStack_1a8 = auVar8;
        auStack_198 = auVar9;
        auStack_180 = auVar10;
        __ZdlPv(pppppppuStack_120);
        auVar31 = auStack_1b8;
        auVar8 = auStack_1a8;
        auVar9 = auStack_198;
        auVar10 = auStack_180;
      }
      if (lStack_90 != 0) {
        auStack_1b8 = auVar31;
        auStack_1a8 = auVar8;
        auStack_198 = auVar9;
        auStack_180 = auVar10;
        pcVar14 = (code *)func_0x0011ab24(&DAT_00972fbc);
        (*pcVar14)(lStack_90);
        auVar31 = auStack_1b8;
        auVar8 = auStack_1a8;
        auVar9 = auStack_198;
        auVar10 = auStack_180;
      }
      if (lStack_88 == 0) {
        return;
      }
      auStack_1b8 = auVar31;
      auStack_1a8 = auVar8;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      auStack_198 = auVar9;
      auStack_180 = auVar10;
      pcVar14 = (code *)func_0x0011ab24(&DAT_0093c124);
      (*pcVar14)(lStack_88);
      return;
    }
    func_0x0000aa50();
  }
  else {
    func_0x0000aa50();
  }
LAB_001d58a0:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1d58a4);
  (*pcVar14)();
}

