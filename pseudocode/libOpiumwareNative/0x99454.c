/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x99454:029cf3d421
   =========================================================================== */

undefined8 FUN_00099454(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  char *pcStack_30;
  char *pcStack_28;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 8) goto LAB_00099654;
  iVar2 = func_0x00791db8(param_1,2);
  if (iVar2 == 0) goto LAB_00099a5c;
  plVar3 = (long *)func_0x00790f58(param_1,1);
  lVar9 = *plVar3;
  if (*(char *)(lVar9 + 3) != '\0') goto LAB_00099dac;
  if (*(char *)(lVar9 + 4) == '\0') goto LAB_00099ef0;
  uVar4 = func_0x00792168(param_1,2,0);
// WM - more drops soon - github.com/pengussy
  if ((0 < (int)(uint)uVar4) && ((uint)uVar4 <= (uint)*(byte *)(lVar9 + 4))) {
    lVar9 = func_0x00795ba0(param_1,1,uVar4);
    if (lVar9 == 0) {
      func_0x00792a48(param_1);
      return 1;
    }
    return 1;
  }
  pbVar5 = (byte *)(*pcRam0000000002066420)();
  if ((*pbVar5 & 1) == 0) goto LAB_0009a034;
  do {
    pcStack_38 = (char *)(*pcRam0000000002066408)();
    if (*pcStack_38 == '\x01') {
      lVar9 = 0;
      uVar6 = 0x59bf666eb530954c;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar7 >> 0x29) | 1);
        pcStack_38[lVar9 + 0x1c] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar8;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x1b);
/* wm:do not claim this as your own */
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 0x1c;
    uVar4 = func_0x0011ab24(&pcStack_38);
    func_0x007a1abc(param_1,2,uVar4);
LAB_00099654:
    pbVar5 = (byte *)(*pcRam0000000002066360)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bfc9c();
    }
    pcStack_28 = (char *)(*pcRam0000000002066348)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0xbd215f36;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xcb0a997b;
      pcStack_28[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - 0x3d ^ 0xf5;
      uVar6 = (((ulong)(byte)pcStack_28[1] ^ 0x17b94627cff7687f) << 0x11 | 0x2f72) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_28[0xb] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar8 ^ 0xffffffc3;
// do not claim this as your own
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_28[0xc] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_28[0xd] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_28[0xe] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_28[0xf] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
// WM - do not claim this as your own
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_28[0x10] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_28[0x11] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17);
      pcStack_28[0x12] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar7;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 10;
    uVar4 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_00099a5c:
    pbVar5 = (byte *)(*pcRam0000000002066390)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bfd8c();
    }
    pcStack_48 = (char *)(*pcRam0000000002066378)();
    if (*pcStack_48 == '\x01') {
      uVar1 = (byte)pcStack_48[1] ^ 0x89e5dc2c;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xdc865914;
      pcStack_48[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0x21 ^ 0xef;
      uVar6 = (((ulong)(byte)pcStack_48[1] ^ 0x2def4303c72ad575) << 0x11 | 0x5bde) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* if you paid for this, you were scammed - github.com/pengussy */
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
      pcStack_48[9] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
      pcStack_48[10] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
      pcStack_48[0xb] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
      pcStack_48[0xc] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
      pcStack_48[0xd] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
      ;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17);
      pcStack_48[0xe] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
// unlicensed copy if this notice is missing
      ;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 8;
    uVar4 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,2,uVar4);
LAB_00099dac:
    pbVar5 = (byte *)(*pcRam00000000020663c0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bfcd8();
    }
    pcStack_30 = (char *)(*pcRam00000000020663a8)();
    if (*pcStack_30 == '\x01') {
      lVar9 = 0;
      uVar6 = 0xf3a4249369757276;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
// WM - keep the notice, keep the source honest
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1)
        ;
        pcStack_30[lVar9 + 0x21] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar8;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_30[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x20);
      *pcStack_30 = '\0';
    }
    pcStack_30 = pcStack_30 + 0x21;
    uVar4 = func_0x0011ab24(&pcStack_30);
    func_0x007a1abc(param_1,1,uVar4);
LAB_00099ef0:
    pbVar5 = (byte *)(*pcRam00000000020663f0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bfd50();
    }
    pcStack_40 = (char *)(*pcRam00000000020663d8)();
    if (*pcStack_40 == '\x01') {
      lVar9 = 0;
      uVar6 = 0x286d33eca9b4ef99;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_40[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar7 >> 0x29) | 1);
        pcStack_40[lVar9 + 0x19] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_40[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x18);
/* wm:more drops soon - github.com/pengussy */
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 0x19;
    uVar4 = func_0x0011ab24(&pcStack_40);
    func_0x007a1abc(param_1,1,uVar4);
LAB_0009a034:
    func_0x019bfd14();
  } while( true );
}

