/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xd88f8:4a6085e5de
 */

undefined8 FUN_000d88f8(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_54;
  
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x70) + 0x80);
  uVar2 = func_0x00886f34(param_1,uVar7);
  func_0x007911b0(param_1,1);
  uStack_54 = 7;
  uStack_60 = uVar2;
  func_0x00790fe8(param_1,&uStack_60);
  func_0x00793928(param_1,0xffffd8f0,2);
  pbVar3 = (byte *)(*pcRam000000000206a020)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c488c();
  }
  pcStack_78 = (char *)(*pcRam000000000206a008)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0xa3999cae;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x5af68348 ^ 0x59e943;
/* no support for modified copies */
    pcStack_78[4] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x93;
    uVar5 = (((ulong)(byte)pcStack_78[1] ^ 0x4e0a78b1852708c9) << 0x11 | 0x9c14) +
            0x9e3779b97f4a7c15;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_78[5] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar4 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar4 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar4 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_78[6] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar4;
    *pcStack_78 = '\0';
/* if you paid for this, you were scammed */
  }
  pcStack_78 = pcStack_78 + 4;
  uVar2 = func_0x0011ab24(&pcStack_78);
  func_0x00794260(param_1,0xfffffffe,uVar2);
  func_0x00793928(param_1,0xffffd8f0,4);
  pbVar3 = (byte *)(*pcRam000000000206a050)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c48c8();
  }
  pcStack_80 = (char *)(*pcRam000000000206a038)();
  if (*pcStack_80 == '\x01') {
    uVar1 = (byte)pcStack_80[1] ^ 0x3e4045f4;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x86446e20;
    pcStack_80[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 0x37;
    uVar5 = (((ulong)(byte)pcStack_80[1] ^ 0x7752e456dfd8e408) << 0x11 | 0xeea5) +
            0x9e3779b97f4a7c15;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
// origin: github.com/pengussy
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_80[9] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_80[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_80[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_80[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar6 ^ 0xffffffc3;
/* chat: discord.gg/sdkhDjTex */
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_80[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar4 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar4 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar4 >> 0x17));
    pcStack_80[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar4;
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 8;
  uVar2 = func_0x0011ab24(&pcStack_80);
  func_0x00794260(param_1,0xfffffffe,uVar2);
  func_0x00793bd0(param_1,0,0);
  func_0x007911b0(param_1,1);
  uStack_64 = 7;
  uStack_70 = uVar7;
  func_0x00790fe8(param_1,&uStack_70);
  func_0x00791ab0(param_1,0xffffffff);
  pbVar3 = (byte *)(*pcRam000000000206a080)();
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  if ((*pbVar3 & 1) == 0) {
    func_0x019c4904();
  }
  pcStack_88 = (char *)(*pcRam000000000206a068)();
  if (*pcStack_88 == '\x01') {
    uVar1 = (byte)pcStack_88[1] ^ 0x79c9a8d0;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x2a1ef6f4;
    pcStack_88[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') + 0x87 ^ 0x13;
    uVar5 = (((ulong)(byte)pcStack_88[1] ^ 0xc49a485937df8c73) << 0x11 | 0x18934) +
            0x9e3779b97f4a7c15;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar6 >> 0x17);
    pcStack_88[10] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar4 >> 0x29) | 1) ^ (byte)uVar6
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar6 ^ 0xffffffc3;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar6 >> 0x17);
    pcStack_88[0xb] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar4 >> 0x29) | 1) ^ (byte)uVar6
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar6 >> 0x17);
    pcStack_88[0xc] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar4 >> 0x29) | 1) ^ (byte)uVar6
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar6 >> 0x17);
    pcStack_88[0xd] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar4 >> 0x29) | 1) ^ (byte)uVar6
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar6 >> 0x17);
    pcStack_88[0xe] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar4 >> 0x29) | 1) ^ (byte)uVar6
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar6 >> 0x17);
    pcStack_88[0xf] =
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar4 >> 0x29) | 1) ^ (byte)uVar6
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar4 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar4 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar4 >> 0x17);
    pcStack_88[0x10] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar4
    ;
    *pcStack_88 = '\0';
  }
  pcStack_88 = pcStack_88 + 9;
  uVar2 = func_0x0011ab24(&pcStack_88);
  func_0x00794260(param_1,0xfffffffd,uVar2);
  func_0x00791ab0(param_1,0xffffffff);
// WM - stripping the watermark breaks the license
  pbVar3 = (byte *)(*pcRam000000000206a0b0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c4940();
  }
  pcStack_90 = (char *)(*pcRam000000000206a098)();
  if (*pcStack_90 == '\x01') {
    uVar1 = (byte)pcStack_90[1] ^ 0x55418796;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xf64a14ab ^ 0x1026d;
    pcStack_90[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0xab;
    uVar5 = (((ulong)(byte)pcStack_90[1] ^ 0x49101364cb208789) << 0x11 | 0x9220) +
            0x9e3779b97f4a7c15;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_90[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_90[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_90[0xf] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_90[0x10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar6;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[6] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_90[0x11] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[7] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_90[0x12] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[8] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_90[0x13] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[9] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_90[0x14] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar4 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[10] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_90[0x15] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar6;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[10]) << 0x11) + 0x9e3779b97f4a7c1e;
// WM - origin: github.com/pengussy
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar4 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[0xb] ^ (uint)uVar4 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar4 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_90[0x16] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar4;
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 0xc;
  uVar2 = func_0x0011ab24(&pcStack_90);
  func_0x00794260(param_1,0xfffffffd,uVar2);
  func_0x00791660(param_1,0xfffffffe);
  func_0x007946cc(param_1,0xfffffffe);
  return 1;
}

