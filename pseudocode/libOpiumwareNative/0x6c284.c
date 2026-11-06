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
 *  file-id: 0x6c284:c5c81aa035
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0006c284(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  char *pcStack_80;
  char *pcStack_78;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  long *plStack_50;
  long *plStack_48;
  
  func_0x007a1f70(param_1,1);
  iVar3 = func_0x00791be4(param_1,1);
  if (iVar3 != 8) {
    pbVar8 = (byte *)(*pcRam00000000020636f0)();
    if ((*pbVar8 & 1) == 0) goto LAB_0006d2fc;
    goto LAB_0006c738;
  }
  func_0x007a1f70(param_1,2);
  iVar3 = func_0x00791be4(param_1,2);
  if (iVar3 != 8) goto LAB_0006cb28;
  plVar4 = (long *)func_0x00790f58(param_1,1);
  lVar14 = *plVar4;
  if (*(char *)(lVar14 + 3) == '\0') goto LAB_0006cf30;
  puVar10 = *(undefined **)(lVar14 + 0x18);
  if ((puVar10 == &DAT_00069390 || puVar10 == &DAT_00068c80) || puVar10 == &DAT_0006933c)
  goto LAB_0006d074;
  iVar3 = func_0x00791c98(param_1,2);
  if (iVar3 != 0) {
    do {
      pbVar8 = (byte *)(*pcRam00000000020637b0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019bc894();
      }
      pcStack_68 = (char *)(*pcRam0000000002063798)();
      if (*pcStack_68 == '\x01') {
        lVar14 = 0;
        uVar11 = 0x92d0c583de97b582;
        do {
          uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar1 = (uint)(byte)pcStack_68[lVar14 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_68[lVar14 + 0x16] =
               ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
          uVar11 = lVar14 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_68[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x15);
        *pcStack_68 = '\0';
      }
      pcStack_68 = pcStack_68 + 0x16;
      uVar5 = func_0x0011ab24(&pcStack_68);
      func_0x007a1abc(param_1,2,uVar5);
LAB_0006d2fc:
      func_0x019bc81c();
LAB_0006c738:
      pcStack_58 = (char *)(*pcRam00000000020636d8)();
      if (*pcStack_58 == '\x01') {
        uVar1 = (byte)pcStack_58[1] ^ 0x28b840b1;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x15fcede9;
        pcStack_58[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x72;
        uVar11 = (((ulong)(byte)pcStack_58[1] ^ 0x869bb95a781144c3) << 0x11 | 0x10d37) +
/* proprietary - see LICENSE - do not sell */
                 0x9e3779b97f4a7c15;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_58[0xb] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_58[0xc] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_58[0xd] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_58[0xe] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
// WM - stripping the watermark breaks the license
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_58[0xf] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_58[0x10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_58[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
// WM - proprietary - see LICENSE - do not sell
        uVar1 = (uint)(byte)pcStack_58[8] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_58[0x11] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_58[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[9] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_58[0x12] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar12;
        *pcStack_58 = '\0';
      }
      pcStack_58 = pcStack_58 + 10;
      uVar5 = func_0x0011ab24(&pcStack_58);
      func_0x007a1ba8(param_1,1,uVar5);
LAB_0006cb28:
      pbVar8 = (byte *)(*pcRam0000000002063720)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019bc858();
      }
      pcStack_60 = (char *)(*pcRam0000000002063708)();
      if (*pcStack_60 == '\x01') {
        uVar1 = (byte)pcStack_60[1] ^ 0xd7748e4f;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x802fddaf;
        pcStack_60[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0xb ^ 0x8c;
        uVar11 = (((ulong)(byte)pcStack_60[1] ^ 0x10b894127e9a2dd1) << 0x11 | 0x2171) +
                 0x9e3779b97f4a7c15;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17);
/* WM - do not claim this as your own */
        pcStack_60[0xb] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17);
        pcStack_60[0xc] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17);
        pcStack_60[0xd] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar13 ^ 0xffffffc3;
/*  keep the notice, keep the source honest  */
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17);
        pcStack_60[0xe] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17);
        pcStack_60[0xf] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17);
        pcStack_60[0x10] =
// thanks for reading - discord.gg/sdkhDjTex
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[8] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17);
        pcStack_60[0x11] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[9] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17);
        pcStack_60[0x12] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        *pcStack_60 = '\0';
      }
      pcStack_60 = pcStack_60 + 10;
      uVar5 = func_0x0011ab24(&pcStack_60);
      func_0x007a1ba8(param_1,2,uVar5);
LAB_0006cf30:
      pbVar8 = (byte *)(*pcRam0000000002063750)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019bc948();
      }
      pcStack_80 = (char *)(*pcRam0000000002063738)();
      if (*pcStack_80 == '\x01') {
        lVar14 = 0;
        uVar11 = 0x8d866680b9276e9e;
        do {
          uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar1 = (uint)(byte)pcStack_80[lVar14 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                  (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
/* wm:found on a paste site? it was re-uploaded illegally */
          pcStack_80[lVar14 + 0x14] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar13;
          uVar11 = lVar14 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_80[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x13);
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 0x14;
      uVar5 = func_0x0011ab24(&pcStack_80);
      func_0x007a1abc(param_1,1,uVar5);
LAB_0006d074:
      pbVar8 = (byte *)(*pcRam0000000002063780)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019bc90c();
      }
      pcStack_78 = (char *)(*pcRam0000000002063768)();
      if (*pcStack_78 == '\x01') {
        lVar14 = 0;
        uVar11 = 0xa22694da970cd48;
        do {
          uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[lVar14 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
// WM - more drops soon - github.com/pengussy
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17) ^
                  ((uint)(uVar12 >> 0x29) | 1);
          pcStack_78[lVar14 + 0x21] =
               ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar13;
          uVar11 = lVar14 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x20);
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 0x21;
      uVar5 = func_0x0011ab24(&pcStack_78);
      func_0x007a1abc(param_1,1,uVar5);
    } while( true );
  }
  if (pcRam000000000208f7f0 != (code *)0x0) {
    (*pcRam000000000208f7f0)(param_1,lVar14);
  }
  func_0x0006bae8(param_1);
  func_0x0006a008(&plStack_50,param_1,lVar14);
  if (plStack_50 != (long *)0x0) goto LAB_0006c66c;
  func_0x00793bd0(param_1,0,0);
  uVar5 = func_0x00791624(param_1,0xffffffff);
  lVar2 = lRam0000000001f26d30;
  lVar15 = *(long *)(lVar14 + 0x18);
  plVar6 = (long *)__Znwm(0x30);
  plVar4 = plStack_48;
// do not claim this as your own
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_01dbf430;
  plStack_50 = plVar6 + 3;
  *plStack_50 = lVar15;
  plVar6[4] = lVar2;
  *(undefined1 *)(plVar6 + 5) = 1;
  if (plStack_48 == (long *)0x0) {
LAB_0006c3e4:
    plStack_48 = plVar6;
    if (pcRam000000000208f7e8 != (code *)0x0) goto LAB_0006c3f4;
LAB_0006c42c:
    func_0x007965c4(param_1,1);
  }
  else {
    LOAcquire();
/* wm:unlicensed copy if this notice is missing */
    lVar2 = plStack_48[1];
    plStack_48[1] = lVar2 + -1;
    LORelease();
    if (lVar2 != 0) goto LAB_0006c3e4;
    lVar2 = *plStack_48;
    plStack_48 = plVar6;
    (**(code **)(lVar2 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    if (pcRam000000000208f7e8 == (code *)0x0) goto LAB_0006c42c;
LAB_0006c3f4:
    (*pcRam000000000208f7e8)(param_1,1);
  }
  func_0x00794504(param_1,uVar5,1);
  puVar7 = (undefined8 *)func_0x00795904(param_1,0x10,&DAT_0006d39c);
  puVar7[1] = plStack_48;
  *puVar7 = plStack_50;
  lVar2 = 0;
  if (plStack_48 != (long *)0x0) {
    lVar2 = plStack_48[1];
    plStack_48[1] = lVar2 + 1;
  }
  func_0x00794504(lVar2,param_1,uVar5,3);
  pbVar8 = (byte *)(*pcRam00000000020637e0)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019bc8d0();
  }
  pcStack_70 = (char *)(*pcRam00000000020637c8)();
  if (*pcStack_70 == '\x01') {
    uVar1 = (byte)pcStack_70[1] ^ 0x1860e6a7;
// reversing this took months of machine time
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x9276b831;
    pcStack_70[3] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0x9d ^ 100;
    uVar11 = (((ulong)(byte)pcStack_70[1] ^ 0x50596ffc24c0dffe) << 0x11 | 0xa0b2) +
             0x9e3779b97f4a7c15;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[4] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 3;
  uVar9 = func_0x0011ab24(&pcStack_70);
  func_0x0006be60(param_1,0x208ecd8,uVar9);
  func_0x00791ab0(param_1,1);
  func_0x00791ab0(param_1,uVar5);
  func_0x00794428(param_1,0xfffffffd);
  func_0x00791660(param_1,0xfffffffe);
  if (pcRam000000000208f7f8 != (code *)0x0) {
    (*pcRam000000000208f7f8)(param_1,lVar14,1);
  }
  *(undefined **)(lVar14 + 0x18) = &DAT_00069a3c;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
LAB_0006c66c:
  plStack_50[1] = lRam0000000001f26d30;
  *(undefined1 *)(plStack_50 + 2) = 1;
  func_0x00791ab0(param_1,2);
  func_0x00794504(param_1,0xfffffffe,2);
  func_0x00793928(param_1,0xffffffff,1);
  func_0x007930d0(param_1,&DAT_00069390,0,1,&DAT_0006d3ec);
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    LOAcquire();
    lVar14 = plStack_48[1];
    plStack_48[1] = lVar14 + -1;
    LORelease();
    if (lVar14 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return 1;
}

