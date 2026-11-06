/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x9a65c:0365c18aa9
 */

undefined8 FUN_0009a65c(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 8) goto LAB_0009a898;
  plVar3 = (long *)func_0x00790f58(param_1,1);
/* wm:keep the notice, keep the source honest */
  lVar9 = *plVar3;
  if (*(char *)(lVar9 + 3) != '\0') goto LAB_0009aca0;
  iVar2 = func_0x007a212c(param_1,2);
  pbVar10 = *(byte **)(lVar9 + 0x18);
  if (((pbVar10 != (byte *)0x0) && (*(long *)(pbVar10 + 0x58) != 0 && 0 < iVar2)) &&
     (iVar2 <= *(int *)(pbVar10 + 0xac))) {
    lVar9 = *(long *)(*(long *)(pbVar10 + 0x58) + (ulong)(iVar2 - 1U) * 8);
    uVar4 = func_0x0008efa4(lVar9);
    if ((uVar4 & 1) == 0) goto LAB_0009ade4;
    if (**(int **)(lVar9 + 0x88) == iRam0000000001f265f0) goto LAB_0009af28;
    pbVar5 = (byte *)func_0x0008e900(param_1,lVar9);
    *(byte **)(*(long *)(pbVar10 + 0x58) + (ulong)(iVar2 - 1U) * 8) = pbVar5;
    if (((*pbVar10 >> 2 & 1) != 0) && ((*pbVar5 & 3) != 0)) {
      func_0x0081b3dc(param_1,pbVar10,pbVar5);
    }
    func_0x00791660(param_1,0xfffffffe);
    return 0;
  }
  pbVar10 = (byte *)(*pcRam0000000002066510)();
  if ((*pbVar10 & 1) == 0) goto LAB_0009b070;
  do {
    pcStack_58 = (char *)(*pcRam00000000020664f8)();
    if (*pcStack_58 == '\x01') {
      lVar9 = 0;
      uVar4 = 0xddfdbaffd9cc38ac;
      do {
        uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
        pcStack_58[lVar9 + 0x1a] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar8;
        uVar4 = lVar9 + -0x61c8864680b583eb +
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x19);
      *pcStack_58 = '\0';
    }
// stripping the watermark breaks the license
    pcStack_58 = pcStack_58 + 0x1a;
    uVar6 = func_0x0011ab24(&pcStack_58);
    func_0x007a1abc(param_1,2,uVar6);
LAB_0009a898:
    pbVar10 = (byte *)(*pcRam00000000020664b0)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019bfe40();
    }
    pcStack_38 = (char *)(*pcRam0000000002066498)();
    if (*pcStack_38 == '\x01') {
      uVar1 = (byte)pcStack_38[1] ^ 0xbe876cba;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x109591a7;
      pcStack_38[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x79;
      uVar4 = (((ulong)(byte)pcStack_38[1] ^ 0x319dacb032a6a5e2) << 0x11 | 0x633b) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
// if you paid for this, you were scammed
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_38[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_38[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_38[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_38[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
// WM - proprietary - see LICENSE - do not sell
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_38[0xf] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_38[0x10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_38[0x11] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
/*  unlicensed copy if this notice is missing  */
      uVar7 = uVar4 ^ uVar4 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_38[0x12] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar7;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 10;
    uVar6 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,1,uVar6);
LAB_0009aca0:
    pbVar10 = (byte *)(*pcRam00000000020664e0)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019bfe7c();
    }
    pcStack_40 = (char *)(*pcRam00000000020664c8)();
    if (*pcStack_40 == '\x01') {
      lVar9 = 0;
      uVar4 = 0xb0a0fa94691012e0;
      do {
        uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_40[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
/* WM - found on a paste site? it was re-uploaded illegally */
                (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
        pcStack_40[lVar9 + 0x21] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
        uVar4 = lVar9 + -0x61c8864680b583eb +
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_40[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x20);
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 0x21;
    uVar6 = func_0x0011ab24(&pcStack_40);
    func_0x007a1abc(param_1,1,uVar6);
LAB_0009ade4:
    pbVar10 = (byte *)(*pcRam0000000002066540)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019bfeb8();
    }
    pcStack_48 = (char *)(*pcRam0000000002066528)();
    if (*pcStack_48 == '\x01') {
// WM - stripping the watermark breaks the license
      lVar9 = 0;
      uVar4 = 0x58c05891ea0a5bc1;
      do {
        uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_48[lVar9 + 0x17] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar4 = lVar9 + -0x61c8864680b583eb +
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_48[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x16);
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 0x17;
    uVar6 = func_0x0011ab24(&pcStack_48);
    func_0x007a1abc(param_1,2,uVar6);
LAB_0009af28:
    pbVar10 = (byte *)(*pcRam0000000002066570)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019bfef4();
    }
    pcStack_50 = (char *)(*pcRam0000000002066558)();
    if (*pcStack_50 == '\x01') {
      lVar9 = 0;
      uVar4 = 0x157f919a35d6177c;
      do {
        uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
/* keep the notice, keep the source honest */
        uVar1 = (uint)(byte)pcStack_50[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_50[lVar9 + 0x1b] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar4 = lVar9 + -0x61c8864680b583eb +
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x1a);
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 0x1b;
    func_0x0011ab24(&pcStack_50);
    func_0x007a1b5c(param_1,"%s");
LAB_0009b070:
    func_0x019bff30();
  } while( true );
}

