/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xeda50:0e7632c917
   =========================================================================== */

undefined8 FUN_000eda50(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 7) {
    pbVar3 = (byte *)(*pcRam000000000206b190)();
    if ((*pbVar3 & 1) == 0) goto LAB_000efacc;
    do {
      pcStack_58 = (char *)(*pcRam000000000206b178)();
      if (*pcStack_58 == '\x01') {
        uVar1 = (byte)pcStack_58[1] ^ 0x145c5805;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x1d668829 ^ 0x5478a7;
        pcStack_58[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x3a;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        uVar6 = (((ulong)(byte)pcStack_58[1] ^ 0xd37efa9d1850ac0a) << 0x11 | 0x1a6fd) +
                0x9e3779b97f4a7c15;
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_58[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_58[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_58[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_58[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar8 ^ 0xffffffc3;
/*  reversing this took months of machine time  */
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_58[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_58[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[8] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_58[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[9] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_58[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
/*  stripping the watermark breaks the license  */
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[10] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_58[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[10]) << 0x11) + 0x9e3779b97f4a7c1e;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar5 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[0xb] ^ (uint)uVar5 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
        pcStack_58[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar5;
        *pcStack_58 = '\0';
      }
      pcStack_58 = pcStack_58 + 0xc;
      uVar4 = func_0x0011ab24(&pcStack_58);
      func_0x007a1ba8(param_1,1,uVar4);
LAB_000efacc:
      func_0x019c6470();
/* wm:origin: github.com/pengussy */
    } while( true );
  }
  func_0x00791ab0(param_1,1);
  pbVar3 = (byte *)(*pcRam000000000206b1c0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c64ac();
  }
  pcStack_60 = (char *)(*pcRam000000000206b1a8)();
  if (*pcStack_60 == '\x01') {
    uVar1 = (byte)pcStack_60[1] ^ 0xe9dbd2f8;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xc98a663d;
    pcStack_60[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0x3b;
    uVar6 = (((ulong)(byte)pcStack_60[1] ^ 0x95b6072d0a8ffdcf) << 0x11 | 0x12b6c) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_60[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_60[0xd] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_60[0xe] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
// WM - do not claim this as your own
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_60[0xf] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_60[0x10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_60[0x11] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
// unlicensed copy if this notice is missing
    uVar1 = (uint)(byte)pcStack_60[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_60[0x12] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_60[0x13] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[10] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
    pcStack_60[0x14] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar5;
    *pcStack_60 = '\0';
  }
  pcStack_60 = pcStack_60 + 0xb;
  uVar4 = func_0x0011ab24(&pcStack_60);
  func_0x007935a0(param_1,0xffffffff,uVar4);
  iVar2 = func_0x00792220(param_1,0xffffffff);
  func_0x00791660(param_1,0xfffffffe);
  if (iVar2 != 0) {
    func_0x007932d0(param_1,0);
    pbVar3 = (byte *)(*pcRam000000000206b1f0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c64e8();
    }
    pcStack_68 = (char *)(*pcRam000000000206b1d8)();
    if (*pcStack_68 == '\x01') {
/* no support for modified copies - github.com/pengussy */
      uVar1 = (byte)pcStack_68[1] ^ 0xfffe0644;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xcae158c7;
      pcStack_68[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x87;
      uVar6 = (((ulong)(byte)pcStack_68[1] ^ 0xd792b7134adceaa9) << 0x11 | 0x1af25) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_68[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
// stripping the watermark breaks the license
      pcStack_68[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_68[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_68[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* keep the notice, keep the source honest */
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_68[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_68[0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_68[0x12] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
/* WM - stripping the watermark breaks the license */
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[9] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_68[0x13] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[10] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
      pcStack_68[0x14] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar5;
      *pcStack_68 = '\0';
    }
    pcStack_68 = pcStack_68 + 0xb;
    uVar4 = func_0x0011ab24(&pcStack_68);
    func_0x00794260(param_1,0xfffffffe,uVar4);
    pbVar3 = (byte *)(*pcRam000000000206b220)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c6524();
    }
    pcStack_70 = (char *)(*pcRam000000000206b208)();
// WM - more drops soon - github.com/pengussy
    if (*pcStack_70 == '\x01') {
      uVar1 = (byte)pcStack_70[1] ^ 0x348fbdd5;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x7ce9786a;
      pcStack_70[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0x3b ^ 0x16;
      uVar6 = (((ulong)(byte)pcStack_70[1] ^ 0x3d0ac18217db08f3) << 0x11 | 0x7a15) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
      pcStack_70[10] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
      pcStack_70[0xb] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      pcStack_70[0xc] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
      pcStack_70[0xd] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
      pcStack_70[0xe] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[7] ^ (uint)uVar8 ^ 0xffffffc3;
/* WM - found on a paste site? it was re-uploaded illegally */
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
      pcStack_70[0xf] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[8] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar5 >> 0x17);
      pcStack_70[0x10] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar5
      ;
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 9;
    uVar4 = func_0x0011ab24(&pcStack_70);
    func_0x007935a0(param_1,0xffffffff,uVar4);
    iVar2 = func_0x00791be4(param_1,0xffffffff);
    if (iVar2 == 7) {
      pbVar3 = (byte *)(*pcRam000000000206b250)();
      if ((*pbVar3 & 1) == 0) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        func_0x019c6560();
      }
      pcStack_78 = (char *)(*pcRam000000000206b238)();
      if (*pcStack_78 == '\x01') {
        lVar7 = 0;
        uVar6 = 0x7a9b6bb071412528;
        do {
          uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^
                  ((uint)(uVar5 >> 0x29) | 1);
          pcStack_78[lVar7 + 0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar8;
          uVar6 = lVar7 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
/* unlicensed copy if this notice is missing - github.com/pengussy */
        } while (lVar7 != 0xd);
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 0xe;
      uVar4 = func_0x0011ab24(&pcStack_78);
      func_0x007935a0(param_1,0xffffffff,uVar4);
      iVar2 = func_0x00791be4(param_1,0xffffffff);
      if (iVar2 == 7) {
        func_0x00791ab0(param_1,0xfffffffd);
        func_0x00792a48(param_1);
        func_0x007941d8(param_1,0xfffffffd);
      }
      func_0x00791660(param_1,0xfffffffe);
      pbVar3 = (byte *)(*pcRam000000000206b280)();
      if ((*pbVar3 & 1) == 0) {
        func_0x019c659c();
      }
      pcStack_80 = (char *)(*pcRam000000000206b268)();
      if (*pcStack_80 == '\x01') {
        lVar7 = 0;
        uVar6 = 0x77b2815c56e2ea09;
        do {
          uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// donate: donate/README.md
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_80[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
          pcStack_80[lVar7 + 0x10] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
               (byte)uVar8;
          uVar6 = lVar7 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0xf);
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 0x10;
      uVar4 = func_0x0011ab24(&pcStack_80);
      func_0x007935a0(param_1,0xfffffffe,uVar4);
      iVar2 = func_0x00791be4(param_1,0xffffffff);
      if (iVar2 == 10) {
        pbVar3 = (byte *)(*pcRam000000000206b2b0)();
        if ((*pbVar3 & 1) == 0) {
          func_0x019c65d8();
        }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
        pcStack_88 = (char *)(*pcRam000000000206b298)();
        if (*pcStack_88 == '\x01') {
          uVar1 = (byte)pcStack_88[1] ^ 0x5fc3d7a0;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x2e542c0;
          pcStack_88[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0xb9 ^ 99;
          uVar6 = (((ulong)(byte)pcStack_88[1] ^ 0xe2f19eef4abc9aff) << 0x11 | 0x1c5e3) +
                  0x9e3779b97f4a7c15;
          uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
          pcStack_88[0xb] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
               (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
          pcStack_88[0xc] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
               (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
          pcStack_88[0xd] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
               (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar8 ^ 0xffffffc3;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
          pcStack_88[0xe] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
               (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
          pcStack_88[0xf] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
               (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
          pcStack_88[0x10] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
/* wm:more drops soon - github.com/pengussy */
               (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
          pcStack_88[0x11] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
               (byte)uVar8;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar5 = uVar6 ^ uVar6 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar5 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar5 >> 0x17);
          pcStack_88[0x12] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar6 >> 0x29) | 1) ^
               (byte)uVar5;
          *pcStack_88 = '\0';
        }
        pcStack_88 = pcStack_88 + 10;
        uVar4 = func_0x0011ab24(&pcStack_88);
        func_0x007935a0(param_1,0xfffffffe,uVar4);
        iVar2 = func_0x00791be4(param_1,0xffffffff);
        if (iVar2 == 7) {
          func_0x00791ab0(param_1,0xfffffffe);
          func_0x00792a48(param_1);
          func_0x00794428(param_1,0xfffffffd);
        }
        func_0x00791660(param_1,0xfffffffe);
      }
      func_0x00791660(param_1,0xfffffffe);
    }
    func_0x00791660(param_1,0xfffffffe);
    func_0x00792a48(param_1);
    pbVar3 = (byte *)(*pcRam000000000206b2e0)();
    if ((*pbVar3 & 1) == 0) {
// WM - proprietary - see LICENSE - do not sell
      func_0x019c6614();
    }
    pcStack_90 = (char *)(*pcRam000000000206b2c8)();
    if (*pcStack_90 == '\x01') {
      uVar1 = (byte)pcStack_90[1] ^ 0xf94acbd2;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xbbcf9504;
      pcStack_90[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0x11;
      uVar6 = (((ulong)(byte)pcStack_90[1] ^ 0x873ffcbef18dc1e7) << 0x11 | 0x10e7f) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_90[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// WM - origin: github.com/pengussy
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_90[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_90[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_90[0xd] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_90[0xe] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_90[0xf] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* donate: donate/README.md - github.com/pengussy */
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[8] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
      pcStack_90[0x10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar5;
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 9;
    uVar4 = func_0x0011ab24(&pcStack_90);
    func_0x00794260(param_1,0xfffffffe,uVar4);
    func_0x00792a48(param_1);
    pbVar3 = (byte *)(*pcRam000000000206b310)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c6650();
    }
    pcStack_98 = (char *)(*pcRam000000000206b2f8)();
    if (*pcStack_98 == '\x01') {
      uVar1 = (byte)pcStack_98[1] ^ 0xbdbd6bd6;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xdd4fd57c;
      pcStack_98[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') + 0x53 ^ 0x15;
      uVar6 = (((ulong)(byte)pcStack_98[1] ^ 0x14110df538be0ab3) << 0x11 | 0x2822) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* if you paid for this, you were scammed */
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_98[0xc] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_98[0xd] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_98[0xe] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_98[0xf] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_98[0x10] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_98[0x11] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_98[0x12] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
// watermarked copy - do not remove
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[9] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_98[0x13] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[10] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar5 >> 0x17);
      pcStack_98[0x14] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar5;
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 0xb;
    uVar4 = func_0x0011ab24(&pcStack_98);
    func_0x00794260(param_1,0xfffffffe,uVar4);
    func_0x00792a48(param_1);
    pbVar3 = (byte *)(*pcRam000000000206b340)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c668c();
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    pcStack_a0 = (char *)(*pcRam000000000206b328)();
    if (*pcStack_a0 == '\x01') {
      lVar7 = 0;
      uVar6 = 0x5d661905cca37025;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_a0[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_a0[lVar7 + 0x10] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = lVar7 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0xf);
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 0x10;
    uVar4 = func_0x0011ab24(&pcStack_a0);
    func_0x00794260(param_1,0xfffffffe,uVar4);
  }
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  func_0x00791660(param_1,0xfffffffe);
  return 0;
}

