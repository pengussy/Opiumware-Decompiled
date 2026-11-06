/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1f7978:e3d441d412
   =========================================================================== */

void FUN_001f7978(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_30;
  undefined8 uStack_28;
  
  func_0x007935a0(*(undefined8 *)*param_1,*(undefined4 *)param_1[1],param_2);
  iVar3 = func_0x00791be4(*(undefined8 *)*param_1,0xffffffff);
  if (0 < iVar3) {
    iVar3 = func_0x00791e54(*(undefined8 *)*param_1,0xffffffff);
    if (iVar3 == 0) {
      uVar4 = *(undefined8 *)*param_1;
      uVar2 = *(undefined4 *)param_1[2];
      pbVar5 = (byte *)(*pcRam0000000002075810)();
      if ((*pbVar5 & 1) == 0) goto LAB_001f7d78;
      do {
        pcStack_30 = (char *)(*pcRam00000000020757f8)();
        if (*pcStack_30 == '\x01') {
          uVar1 = (byte)pcStack_30[1] ^ 0x55d75473;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xcb0aeaac ^ 0x2ecd3d;
          pcStack_30[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x50;
          uVar7 = (((ulong)(byte)pcStack_30[1] ^ 0xea1c86208f0a34fc) << 0x11 | 0x1d439) +
                  0x9e3779b97f4a7c15;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
          uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_30[2] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                  ((uint)(uVar8 >> 0x29) | 1);
          pcStack_30[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_30[3] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                  ((uint)(uVar8 >> 0x29) | 1);
          pcStack_30[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_30[4] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                  ((uint)(uVar8 >> 0x29) | 1);
          pcStack_30[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_30[5] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                  ((uint)(uVar8 >> 0x29) | 1);
          pcStack_30[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
/* wm:if you paid for this, you were scammed */
          uVar1 = (uint)(byte)pcStack_30[6] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                  ((uint)(uVar8 >> 0x29) | 1);
          pcStack_30[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_30[7] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^
                  ((uint)(uVar7 >> 0x29) | 1);
          pcStack_30[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
          *pcStack_30 = '\0';
        }
        pcStack_30 = pcStack_30 + 8;
        uVar6 = func_0x0011ab24(&pcStack_30);
        func_0x007a1ba8(uVar4,uVar2,uVar6);
LAB_001f7d78:
        func_0x019d7260();
      } while( true );
    }
    uStack_28 = 0;
    uVar4 = func_0x00792368(*(undefined8 *)*param_1,0xffffffff,&uStack_28);
    func_0x0012851c(param_3,uVar4,uStack_28);
  }
  func_0x00791660(*(undefined8 *)*param_1,0xfffffffe);
  return;
}

