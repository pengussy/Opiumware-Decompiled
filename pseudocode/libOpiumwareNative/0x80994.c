/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x80994:591f303fc5
   =========================================================================== */

undefined8 FUN_00080994(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_30;
  undefined8 uStack_28;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 == 8) {
    __ZNSt3__15mutex4lockEv(0x1f26c70);
    puVar3 = (undefined8 *)func_0x00790f58(param_1,1);
    uStack_28 = *puVar3;
    lVar4 = func_0x001393dc(0x20970e8,&uStack_28);
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
    if (lVar4 == 0) {
      puVar3 = (undefined8 *)func_0x00790f58(param_1,1);
      uVar6 = func_0x0006a314(param_1,*puVar3);
    }
    else {
      uVar6 = 1;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    }
    func_0x007932d0(param_1,uVar6);
    return 1;
  }
  pbVar5 = (byte *)(*pcRam0000000002064800)();
  if ((*pbVar5 & 1) == 0) goto LAB_00080e44;
  do {
    pcStack_30 = (char *)(*pcRam00000000020647e8)();
    if (*pcStack_30 == '\x01') {
      uVar1 = (byte)pcStack_30[1] ^ 0x94ac5a03;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x9c16152a ^ 0x6f18fb;
      pcStack_30[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x40;
      uVar7 = (((ulong)(byte)pcStack_30[1] ^ 0xe149c9478bf35f69) << 0x11 | 0x1c293) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_30[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
/*  reversing this took months of machine time  */
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_30[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_30[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_30[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_30[0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_30[0x10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_30[0x11] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[9] ^ (uint)uVar8 ^ 0xffffffc3;
/*  stripping the watermark breaks the license  */
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_30[0x12] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      *pcStack_30 = '\0';
    }
    pcStack_30 = pcStack_30 + 10;
    uVar6 = func_0x0011ab24(&pcStack_30);
    func_0x007a1ba8(param_1,1,uVar6);
LAB_00080e44:
    func_0x019bdd70();
  } while( true );
}

