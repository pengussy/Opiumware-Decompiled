/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xc2a74:79673d370f
   =========================================================================== */

undefined8 FUN_000c2a74(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  char **ppcVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
/* unlicensed copy if this notice is missing */
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) goto LAB_000c3e08;
  iVar2 = func_0x00791be4(param_1,2);
  if (iVar2 != 1) goto LAB_000c4210;
  pbVar3 = (byte *)(*pcRam0000000002068d00)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c3068();
  }
  unaff_x20 = -0xae502812aa7333;
  unaff_x21 = -0x3b314601e57a13ad;
  unaff_x22 = -0x61c8864680b583eb;
  unaff_x23 = 0x8ebc6af09c88c6e3;
  pcStack_50 = (char *)(*pcRam0000000002068ce8)();
  if (*pcStack_50 == '\x01') {
    uVar1 = (byte)pcStack_50[1] ^ 0xaeb0d7f9;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x19db735e;
    pcStack_50[5] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0x77 ^ 0x3a;
    uVar6 = (((ulong)(byte)pcStack_50[1] ^ 0xc74a7820170881c0) << 0x11 | 0x18e94) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
    pcStack_50[6] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* if you paid for this, you were scammed - github.com/pengussy */
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
    pcStack_50[7] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar5 >> 0x17);
    pcStack_50[8] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar5;
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 5;
  uVar4 = func_0x0011ab24(&pcStack_50);
  func_0x007935a0(param_1,1,uVar4);
  func_0x00791ab0(param_1,1);
  pbVar3 = (byte *)(*pcRam0000000002068d30)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c30a4();
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  }
  pcStack_58 = (char *)(*pcRam0000000002068d18)();
  if (*pcStack_58 == '\x01') {
    uVar1 = (byte)pcStack_58[1] ^ 0xd152db0;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xf58f0592;
    pcStack_58[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x73;
    uVar6 = (((ulong)(byte)pcStack_58[1] ^ 0x2a920e62663bc319) << 0x11 | 0x5524) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_58[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* WM - donate: donate/README.md */
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_58[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_58[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_58[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_58[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
/* wm:reversing this took months of machine time */
    pcStack_58[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[8] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_58[0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[9] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
    pcStack_58[0x12] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar5;
    *pcStack_58 = '\0';
  }
  pcStack_58 = pcStack_58 + 10;
// WM - if you paid for this, you were scammed
  uVar4 = func_0x0011ab24(&pcStack_58);
  func_0x00792f00(param_1,uVar4);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if ((iVar2 != 0) || (iVar2 = func_0x00792220(param_1,0xffffffff), iVar2 == 0)) {
    pbVar3 = (byte *)(*pcRam0000000002068d60)();
    if ((*pbVar3 & 1) == 0) goto LAB_000c45e0;
    goto LAB_000c3d1c;
  }
  func_0x00791660(param_1,0xfffffffe);
  pbVar3 = (byte *)(*pcRam0000000002068d90)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c30e0();
  }
  pcStack_60 = (char *)(*pcRam0000000002068d78)();
  if (*pcStack_60 == '\x01') {
    uVar1 = (byte)pcStack_60[1] ^ 0xf6c952bf;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xde00a5ee;
    pcStack_60[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0x81 ^ 0x7c;
    uVar6 = (((ulong)(byte)pcStack_60[1] ^ 0xd956b7d7d5ab2a97) << 0x11 | 0x1b2ad) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
    pcStack_60[7] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
    pcStack_60[8] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
    pcStack_60[9] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar5 >> 0x17);
    pcStack_60[10] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar5;
    *pcStack_60 = '\0';
  }
  pcStack_60 = pcStack_60 + 6;
  uVar4 = func_0x0011ab24(&pcStack_60);
  func_0x007935a0(param_1,0xffffd8ee,uVar4);
  pbVar3 = (byte *)(*pcRam0000000002068dc0)();
  if ((*pbVar3 & 1) == 0) {
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x019c311c();
  }
  pcStack_68 = (char *)(*pcRam0000000002068da8)();
  if (*pcStack_68 == '\x01') {
    lVar7 = 0;
    uVar6 = 0x216ac84a1103a01c;
    do {
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[lVar7 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
      pcStack_68[lVar7 + 0x12] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar9
      ;
      uVar6 = lVar7 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x11);
    *pcStack_68 = '\0';
/* wm:proprietary - see LICENSE - do not sell */
  }
  pcStack_68 = pcStack_68 + 0x12;
  uVar4 = func_0x0011ab24(&pcStack_68);
  func_0x007935a0(param_1,0xffffffff,uVar4);
  iVar2 = func_0x00792220(param_1,2);
  if (iVar2 == 0) {
    pbVar3 = (byte *)(*pcRam0000000002068e20)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c3194();
    }
    pcStack_78 = (char *)(*pcRam0000000002068e08)();
    if (*pcStack_78 == '\x01') {
      uVar1 = (byte)pcStack_78[1] ^ 0x10488082;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xaeb86dd4;
      pcStack_78[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x41;
      uVar6 = (((ulong)(byte)pcStack_78[1] ^ 0x5811bba45d4383d0) << 0x11 | 0xb023) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar9 ^ 0xffffffc3;
/* WM - no support for modified copies */
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_78[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_78[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_78[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_78[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_78[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
      pcStack_78[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar5;
      *pcStack_78 = '\0';
    }
    pcStack_78 = pcStack_78 + 8;
    ppcVar8 = &pcStack_78;
  }
  else {
    pbVar3 = (byte *)(*pcRam0000000002068df0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c3158();
    }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    pcStack_70 = (char *)(*pcRam0000000002068dd8)();
    if (*pcStack_70 == '\x01') {
      uVar1 = (byte)pcStack_70[1] ^ 0xfe4f25b0;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x505571fd;
      pcStack_70[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x15 ^ 0x73;
      uVar6 = (((ulong)(byte)pcStack_70[1] ^ 0xfbad1f40d1984f20) << 0x11 | 0x1f75a) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_70[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* found on a paste site? it was re-uploaded illegally */
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_70[0xd] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_70[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_70[0xf] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_70[0x10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_70[0x11] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_70[0x12] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[9] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_70[0x13] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[9]) << 0x11) + 0x9e3779b97f4a7c1d;
/*  proprietary - see LICENSE - do not sell  */
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[10] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar5 >> 0x17);
      pcStack_70[0x14] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar5;
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0xb;
    ppcVar8 = &pcStack_70;
  }
  uVar4 = func_0x0011ab24(ppcVar8);
  func_0x007935a0(param_1,0xffffffff,uVar4);
  func_0x007917f4(param_1,0xfffffffe);
  func_0x007917f4(param_1,0xfffffffe);
  func_0x007930d0(param_1,&DAT_000c188c,0,0,0);
  func_0x00791ab0(param_1,1);
  pbVar3 = (byte *)(*pcRam0000000002068e50)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c31d0();
  }
  pcStack_80 = (char *)(*pcRam0000000002068e38)();
  if (*pcStack_80 == '\x01') {
    lVar7 = 0;
    uVar6 = 0x8c01740284998205;
    do {
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[lVar7 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_80[lVar7 + 0x16] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar9
      ;
      uVar6 = lVar7 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[lVar7 + 1]) << 0x11);
// origin: github.com/pengussy
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x15);
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 0x16;
  uVar4 = func_0x0011ab24(&pcStack_80);
  func_0x00792f00(param_1,uVar4);
  func_0x00791ab0(param_1,0xfffffffc);
  iVar2 = func_0x00794a14(param_1,3,0,0);
  if (iVar2 == 0) {
    func_0x00791660(param_1,0xfffffffe);
    return 0;
  }
  do {
    func_0x00792368(param_1,0xffffffff,0);
    func_0x007a1b5c(param_1,"%s");
LAB_000c45e0:
    func_0x019c320c();
LAB_000c3d1c:
    pcStack_88 = (char *)(*pcRam0000000002068d48)();
    if (*pcStack_88 == '\x01') {
      lVar7 = 0;
      uVar6 = (unaff_x23 ^ 0x8a5c6a4665c1895 ^ (unaff_x23 ^ 0x8a5c6a4665c1895) >> 0x21) * unaff_x20;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * unaff_x20;
/* reversing this took months of machine time */
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * unaff_x21;
        uVar9 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[lVar7 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
        pcStack_88[lVar7 + 0x13] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar9;
        uVar6 = lVar7 + unaff_x22 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x12);
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 0x13;
    uVar4 = func_0x0011ab24(&pcStack_88);
    func_0x007a1abc(param_1,1,uVar4);
LAB_000c3e08:
    pbVar3 = (byte *)(*pcRam0000000002068ca0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c3248();
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    }
    pcStack_90 = (char *)(*pcRam0000000002068c88)();
    if (*pcStack_90 == '\x01') {
      uVar1 = (byte)pcStack_90[1] ^ 0x4e59b19b;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x6f99c69d;
      pcStack_90[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - 0x19 ^ 0x58;
      uVar6 = (((ulong)(byte)pcStack_90[1] ^ 0xa3e4a4de552ee513) << 0x11 | 0x147c9) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_90[0xb] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// WM - unlicensed copy if this notice is missing
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_90[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_90[0xd] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_90[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_90[0xf] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
/* if you paid for this, you were scammed */
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_90[0x10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_90[0x11] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/*  no support for modified copies  */
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[9] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar5 >> 0x17);
      pcStack_90[0x12] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar5;
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 10;
    uVar4 = func_0x0011ab24(&pcStack_90);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_000c4210:
    pbVar3 = (byte *)(*pcRam0000000002068cd0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c302c();
    }
    pcStack_48 = (char *)(*pcRam0000000002068cb8)();
    if (*pcStack_48 == '\x01') {
/* WM - watermarked copy - do not remove */
      uVar1 = (byte)pcStack_48[1] ^ 0xa472d62c;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xd828ff6c;
      pcStack_48[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0xef;
      uVar6 = (((ulong)(byte)pcStack_48[1] ^ 0x30f1a5feb49462fd) << 0x11 | 0x61e3) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_48[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
/* no support for modified copies */
      pcStack_48[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_48[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_48[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_48[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
// WM - chat: discord.gg/sdkhDjTex
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_48[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[8] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17))
      ;
      pcStack_48[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar5;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 9;
    uVar4 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,2,uVar4);
  } while( true );
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
}

