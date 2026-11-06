/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xbfbe8:43169c997c
 */

undefined8 FUN_000bfbe8(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) goto LAB_000c04e8;
  pbVar3 = (byte *)(*pcRam0000000002068970)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2bf4();
  }
  unaff_x20 = -0xae502812aa7333;
  unaff_x21 = -0x3b314601e57a13ad;
  unaff_x22 = -0x61c8864680b583eb;
  unaff_x23 = 0x8ebc6af09c88c6e3;
/*  donate: donate/README.md  */
  pcStack_48 = (char *)(*pcRam0000000002068958)();
  if (*pcStack_48 == '\x01') {
    uVar1 = (byte)pcStack_48[1] ^ 0x90bc28d8;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x6566d27d;
    pcStack_48[5] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x1b;
    uVar6 = (((ulong)(byte)pcStack_48[1] ^ 0x738338b0fac67022) << 0x11 | 0xe706) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_48[6] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_48[7] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
    pcStack_48[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar5;
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 5;
  uVar4 = func_0x0011ab24(&pcStack_48);
/* keep the notice, keep the source honest - github.com/pengussy */
  func_0x007935a0(param_1,1,uVar4);
  func_0x00791ab0(param_1,1);
  pbVar3 = (byte *)(*pcRam00000000020689a0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2c30();
  }
  pcStack_50 = (char *)(*pcRam0000000002068988)();
  if (*pcStack_50 == '\x01') {
    uVar1 = (byte)pcStack_50[1] ^ 0x9dd72a3e;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xaf90f73c;
    pcStack_50[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - 0x1b ^ 0xfd;
    uVar6 = (((ulong)(byte)pcStack_50[1] ^ 0x5afb4c7aba28904f) << 0x11 | 0xb5f6) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar8 ^ 0xffffffc3;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_50[0xb] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_50[0xc] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_50[0xd] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/* wm:unlicensed copy if this notice is missing */
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_50[0xe] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_50[0xf] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* reversing this took months of machine time - github.com/pengussy */
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_50[0x10] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_50[0x11] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[9] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar5 >> 0x17);
    pcStack_50[0x12] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar5;
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 10;
  uVar4 = func_0x0011ab24(&pcStack_50);
  func_0x00792f00(param_1,uVar4);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if ((iVar2 != 0) || (iVar2 = func_0x00792220(param_1,0xffffffff), iVar2 == 0)) {
    pbVar3 = (byte *)(*pcRam00000000020689d0)();
    if ((*pbVar3 & 1) == 0) goto LAB_000c09f8;
    goto LAB_000c03fc;
  }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  func_0x00791660(param_1,0xfffffffe);
  func_0x007930d0(param_1,FUN_000bdee4,0,0,0);
  func_0x00791ab0(param_1,1);
  pbVar3 = (byte *)(*pcRam0000000002068a00)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2c6c();
  }
  pcStack_58 = (char *)(*pcRam00000000020689e8)();
  if (*pcStack_58 == '\x01') {
    lVar7 = 0;
    uVar6 = 0x7c1a4bc7736cf2ba;
    do {
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_58[lVar7 + 0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
/* WM - found on a paste site? it was re-uploaded illegally */
      uVar6 = lVar7 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xf);
    *pcStack_58 = '\0';
  }
  pcStack_58 = pcStack_58 + 0x10;
  uVar4 = func_0x0011ab24(&pcStack_58);
  func_0x00792f00(param_1,uVar4);
  iVar2 = func_0x00794a14(param_1,2,2,0);
  if (iVar2 == 0) {
    iVar2 = func_0x00792168(param_1,0xfffffffe,0);
    func_0x00791660(param_1,0xfffffffd);
    func_0x007932d0(param_1,3 < iVar2);
    return 1;
  }
  do {
    pbVar3 = (byte *)(*pcRam0000000002068a30)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c2ca8();
    }
    pcStack_60 = (char *)(*pcRam0000000002068a18)();
    if (*pcStack_60 == '\x01') {
      lVar7 = 0;
      uVar6 = (unaff_x23 ^ 0x667002b5480d3ef ^ (unaff_x23 ^ 0x667002b5480d3ef) >> 0x21) * unaff_x20;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
/* wm:watermarked copy - do not remove */
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * unaff_x20;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * unaff_x21;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
        pcStack_60[lVar7 + 0x1a] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = lVar7 + unaff_x22 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x19);
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 0x1a;
    func_0x0011ab24(&pcStack_60);
    func_0x007a1b5c(param_1,"%s");
LAB_000c09f8:
    func_0x019c2ce4();
LAB_000c03fc:
    pcStack_68 = (char *)(*pcRam00000000020689b8)();
    if (*pcStack_68 == '\x01') {
      lVar7 = 0;
      uVar6 = (unaff_x23 ^ 0x67f430ec8c5e5763 ^ (unaff_x23 ^ 0x67f430ec8c5e5763) >> 0x21) *
              unaff_x20;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * unaff_x20;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * unaff_x21;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
        pcStack_68[lVar7 + 0x13] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
             (byte)uVar8;
// WM - more drops soon - github.com/pengussy
        uVar6 = lVar7 + unaff_x22 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x12);
      *pcStack_68 = '\0';
    }
    pcStack_68 = pcStack_68 + 0x13;
    uVar4 = func_0x0011ab24(&pcStack_68);
    func_0x007a1abc(param_1,1,uVar4);
LAB_000c04e8:
    pbVar3 = (byte *)(*pcRam0000000002068940)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c2d20();
    }
    pcStack_70 = (char *)(*pcRam0000000002068928)();
    if (*pcStack_70 == '\x01') {
      uVar1 = (byte)pcStack_70[1] ^ 0xf208400c;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x4b166de5 ^ 0xc2d3b;
      pcStack_70[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x31;
      uVar6 = (((ulong)(byte)pcStack_70[1] ^ 0xe42163e08dfe007) << 0x11 | 0x1c84) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/* do not claim this as your own */
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_70[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_70[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_70[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_70[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_70[0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_70[0x10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// do not claim this as your own
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_70[0x11] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[9] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_70[0x12] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar5;
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 10;
    uVar4 = func_0x0011ab24(&pcStack_70);
    func_0x007a1ba8(param_1,1,uVar4);
  } while( true );
}

