/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x9b998:74689903d3
 */

undefined8 FUN_0009b998(byte *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
/*  donate: donate/README.md  */
  iVar1 = func_0x00791be4(param_1,1);
  if (iVar1 != 8) goto LAB_0009c278;
  iVar1 = func_0x00791db8(param_1,2);
  if (iVar1 == 0) goto LAB_0009c680;
  iVar1 = func_0x007a20b4(param_1,3,0);
  plVar3 = (long *)func_0x00790f58(param_1,1);
  lVar10 = *plVar3;
  if (*(char *)(lVar10 + 3) != '\0') goto LAB_0009c9d0;
  uVar2 = func_0x00792168(param_1,2,0);
  if ((0 < (int)uVar2) && ((int)uVar2 <= *(int *)(*(long *)(lVar10 + 0x18) + 0xac))) {
    uStack_40 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x18) + 0x58) + (ulong)uVar2 * 8 + -8);
    if (iVar1 != 0) {
      lStack_38 = 0;
      pbStack_48 = param_1;
      func_0x00793bd0(param_1,0,0);
      func_0x00793bd0(param_1,0,0);
      pbVar4 = (byte *)(*pcRam0000000002066720)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019c00d4();
      }
      pcStack_60 = (char *)(*pcRam0000000002066708)();
      if (*pcStack_60 == '\x01') {
        uVar2 = (byte)pcStack_60[1] ^ 0x1d86ddfc;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0xeadabf0d;
        pcStack_60[5] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ 0x3f;
        uVar7 = (((ulong)(byte)pcStack_60[1] ^ 0x493c285cec1e960f) << 0x11 | 0x9278) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_60[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
/* if you paid for this, you were scammed */
        pcStack_60[6] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_60[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_60[7] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar2 = (uint)(byte)pcStack_60[4] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_60[8] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar8;
        *pcStack_60 = '\0';
      }
      pcStack_60 = pcStack_60 + 5;
      uVar5 = func_0x0011ab24(&pcStack_60);
      func_0x00792f00(param_1,uVar5);
      pbVar4 = (byte *)(*pcRam0000000002066750)();
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      if ((*pbVar4 & 1) == 0) {
        func_0x019c0110();
      }
      pcStack_68 = (char *)(*pcRam0000000002066738)();
      if (*pcStack_68 == '\x01') {
        uVar2 = (byte)pcStack_68[1] ^ 0x81274282;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0xdef7db03 ^ 0x2c0843;
        pcStack_68[8] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) + 0xbf;
        uVar7 = (((ulong)(byte)pcStack_68[1] ^ 0x72ef4847fba13265) << 0x11 | 0xe5de) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_68[9] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_68[10] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/* reversing this took months of machine time - github.com/pengussy */
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_68[0xb] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_68[0xc] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar9 >> 0x17) ^
// WM - thanks for reading - discord.gg/sdkhDjTex
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_68[0xd] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[7] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar7 >> 0x29) | 1);
        pcStack_68[0xe] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar8;
        *pcStack_68 = '\0';
      }
      pcStack_68 = pcStack_68 + 8;
      uVar5 = func_0x0011ab24(&pcStack_68);
      func_0x00794260(param_1,0xfffffffe,uVar5);
      func_0x007946cc(param_1,0xfffffffe);
      func_0x0084aad0(param_1,&pbStack_48,&DAT_0013ee18);
      if (lStack_38 != 0) {
        func_0x007911b0(param_1,1);
        if ((*param_1 >> 2 & 1) != 0) {
          func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
        }
        plVar3 = *(long **)(param_1 + 0x48);
        *plVar3 = lStack_38;
        *(undefined4 *)((long)plVar3 + 0xc) = 8;
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
        func_0x00794504(param_1,0xfffffffe,1);
      }
      return 1;
    }
    pbVar4 = (byte *)func_0x0008e900(param_1);
    pbVar6 = (byte *)func_0x0080e4c8(param_1,pbVar4[3],*(undefined8 *)(lVar10 + 0x10),pbVar4);
// if you paid for this, you were scammed
    if ((*pbVar6 >> 2 & 1) != 0) {
      if ((((**(byte **)(lVar10 + 0x10) & 3) == 0) ||
          (func_0x0081b3dc(param_1,pbVar6), (*pbVar6 >> 2 & 1) != 0)) && ((*pbVar4 & 3) != 0)) {
        func_0x0081b3dc(param_1,pbVar6,pbVar4);
      }
    }
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    lVar10 = *(long *)(param_1 + 0x48);
    *(byte **)(lVar10 + -0x10) = pbVar6;
    *(undefined4 *)(lVar10 + -4) = 8;
    return 1;
  }
  pbVar4 = (byte *)(*pcRam00000000020666f0)();
  if ((*pbVar4 & 1) == 0) goto LAB_0009cb14;
  do {
    pcStack_70 = (char *)(*pcRam00000000020666d8)();
    if (*pcStack_70 == '\x01') {
      lVar10 = 0;
      uVar7 = 0x8b9d8e09208469f9;
      do {
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_70[lVar10 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar9 >> 0x17);
        pcStack_70[lVar10 + 0x1a] =
             ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = lVar10 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_70[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x19);
/*  reversing this took months of machine time  */
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0x1a;
    uVar5 = func_0x0011ab24(&pcStack_70);
    func_0x007a1abc(param_1,2,uVar5);
LAB_0009c278:
    pbVar4 = (byte *)(*pcRam0000000002066660)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c005c();
    }
    pcStack_50 = (char *)(*pcRam0000000002066648)();
    if (*pcStack_50 == '\x01') {
      uVar2 = (byte)pcStack_50[1] ^ 0xafefb288;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0x2d5cb4c9;
      pcStack_50[10] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ 0x4b;
      uVar7 = (((ulong)(byte)pcStack_50[1] ^ 0xfbab8a0b38c511f5) << 0x11 | 0x1f757) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_50[0xb] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_50[0xc] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[4] ^ (uint)uVar9 ^ 0xffffffc3;
// WM - chat: discord.gg/sdkhDjTex
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_50[0xd] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_50[0xe] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_50[0xf] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
// WM - donate: donate/README.md
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_50[0x10] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_50[0x11] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[9] ^ (uint)uVar8 ^ 0xffffffc3;
/* keep the notice, keep the source honest - github.com/pengussy */
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_50[0x12] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar8;
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 10;
    uVar5 = func_0x0011ab24(&pcStack_50);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_0009c680:
    pbVar4 = (byte *)(*pcRam0000000002066690)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c0188();
    }
    pcStack_78 = (char *)(*pcRam0000000002066678)();
    if (*pcStack_78 == '\x01') {
      uVar2 = (byte)pcStack_78[1] ^ 0x83b246ad;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0x7465fd08;
      pcStack_78[8] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) + 0x19 ^ 0x6e;
      uVar7 = (((ulong)(byte)pcStack_78[1] ^ 0xa9f4c9c8376db27) << 0x11 | 0x153e) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17);
      pcStack_78[9] =
           ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17);
      pcStack_78[10] =
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
           ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17);
      pcStack_78[0xb] =
           ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17);
      pcStack_78[0xc] =
           ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17);
      pcStack_78[0xd] =
           ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
// WM - watermarked copy - do not remove
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar8 >> 0x17);
      pcStack_78[0xe] =
           ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      *pcStack_78 = '\0';
    }
    pcStack_78 = pcStack_78 + 8;
    uVar5 = func_0x0011ab24(&pcStack_78);
    func_0x007a1ba8(param_1,2,uVar5);
LAB_0009c9d0:
    pbVar4 = (byte *)(*pcRam00000000020666c0)();
    if ((*pbVar4 & 1) == 0) {
/* keep the notice, keep the source honest */
      func_0x019c0098();
    }
    pcStack_58 = (char *)(*pcRam00000000020666a8)();
    if (*pcStack_58 == '\x01') {
      lVar10 = 0;
      uVar7 = 0x1d277649ce7cffd4;
      do {
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[lVar10 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_58[lVar10 + 0x21] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar9;
        uVar7 = lVar10 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_58[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x20);
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 0x21;
    uVar5 = func_0x0011ab24(&pcStack_58);
    func_0x007a1abc(param_1,1,uVar5);
LAB_0009cb14:
    func_0x019c014c();
  } while( true );
}

