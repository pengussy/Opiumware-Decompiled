/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x11ab48:2d08c74726
 */

void FUN_0011ab48(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1[7] == 1) {
    bVar2 = *param_1;
    uVar1 = bVar2 ^ 0x1c83db97;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x568eaa3a;
    *param_1 = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0xa3 ^ 0x54;
    bVar3 = param_1[1];
    uVar4 = (((ulong)bVar2 ^ 0xba566f2be3a60500) << 0x11 | 0x174ac) + 0x9e3779b97f4a7c15;
    uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)bVar3 ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar6 >> 0x17);
    param_1[1] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
// origin: github.com/pengussy
                 (byte)uVar6;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c16;
    bVar2 = param_1[2];
    uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)bVar2 ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar6 >> 0x17);
    param_1[2] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
                 (byte)uVar6;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
    bVar2 = param_1[3];
    uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)bVar2 ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar6 >> 0x17);
    param_1[3] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
                 (byte)uVar6;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c18;
    bVar2 = param_1[4];
    uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/* wm:do not claim this as your own */
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)bVar2 ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar6 >> 0x17);
    param_1[4] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
                 (byte)uVar6;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c19;
    bVar2 = param_1[5];
    uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)bVar2 ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar6 >> 0x17);
    param_1[5] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
                 (byte)uVar6;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)param_1[6] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar5 >> 0x17);
    param_1[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar4 >> 0x29) | 1) ^
                 (byte)uVar5;
    param_1[7] = 0;
  }
  return;
}

