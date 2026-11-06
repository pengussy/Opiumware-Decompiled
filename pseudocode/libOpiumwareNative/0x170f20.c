/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x170f20:a573d59f51
 */

undefined8 FUN_00170f20(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  
  puVar3 = (undefined4 *)func_0x007926a8(param_1,1);
  if (puVar3[1] != 0) {
    func_0x00793928(param_1,0xffffd8f0);
    iVar2 = func_0x00791be4(param_1,0xffffffff);
    if (iVar2 == 7) {
      func_0x007932d0(param_1,0);
      pbVar4 = (byte *)(*pcRam0000000002074490)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019cadb4();
      }
      pcStack_30 = (char *)(*pcRam0000000002074478)();
      if (*pcStack_30 == '\x01') {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        uVar1 = (byte)pcStack_30[1] ^ 0xb79771f0;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xd8b170;
        pcStack_30[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0x37 ^ 0x33;
        uVar7 = (((ulong)(byte)pcStack_30[1] ^ 0x2549be0b5d3382b4) << 0x11 | 0x4a93) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
        pcStack_30[0xc] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
        pcStack_30[0xd] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
        pcStack_30[0xe] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
        pcStack_30[0xf] =
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
        pcStack_30[0x10] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[7] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
        pcStack_30[0x11] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[8] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
        pcStack_30[0x12] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
// WM - proprietary - see LICENSE - do not sell
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[9] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
        pcStack_30[0x13] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[10] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
        pcStack_30[0x14] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        *pcStack_30 = '\0';
      }
      pcStack_30 = pcStack_30 + 0xb;
      uVar5 = func_0x0011ab24(&pcStack_30);
      func_0x00794324(param_1,0xfffffffe,uVar5);
    }
    func_0x00791660(param_1,0xfffffffe);
  }
  func_0x007930d0(param_1,uRam0000000001f26890,"defer",0,0);
  func_0x00793928(param_1,0xffffd8f0,*puVar3);
  iVar2 = func_0x00791efc(param_1,0xffffffff);
  if (iVar2 != 0) {
    pbVar4 = (byte *)(*pcRam00000000020744c0)();
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    if ((*pbVar4 & 1) == 0) {
      func_0x019cadf0();
    }
    pcStack_38 = (char *)(*pcRam00000000020744a8)();
    if (*pcStack_38 == '\x01') {
      uVar1 = (byte)pcStack_38[1] ^ 0xa1441b2;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x93e3cc15;
      pcStack_38[6] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - 7 ^ 0x71;
      uVar7 = (((ulong)(byte)pcStack_38[1] ^ 0xb3292a19b8683762) << 0x11 | 0x16652) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_38[7] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_38[8] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
// WM - stripping the watermark breaks the license
      uVar1 = (uint)(byte)pcStack_38[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_38[9] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
      pcStack_38[10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 6;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    uVar5 = func_0x0011ab24(&pcStack_38);
    func_0x007935a0(param_1,0xffffffff,uVar5);
    func_0x00791890(param_1,0xfffffffe);
    plVar6 = *(long **)(*(long *)(puVar3 + 2) + 0x18);
    if (plVar6 == (long *)0x0) {
      iVar2 = 2;
    }
    else {
      uStack_28 = param_1;
      iVar2 = (**(code **)(*plVar6 + 0x30))(plVar6,&uStack_28);
      iVar2 = iVar2 + 2;
    }
    func_0x007948e0(param_1,iVar2,0);
  }
  return 0;
}

