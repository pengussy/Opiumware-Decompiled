/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x8f084:c14a431bb2
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0008f13c) */

undefined8 FUN_0008f084(undefined8 param_1)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 ****ppppuStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  iVar4 = func_0x00791be4(param_1,1);
  if (iVar4 == 8) {
    plVar5 = (long *)func_0x00790f58(param_1,1);
    if (*(char *)(*plVar5 + 3) == '\0') {
      ppppuStack_38 = (undefined8 ****)0x0;
/* wm:reversing this took months of machine time */
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      lStack_40 = 0;
      uVar6 = FUN_0008f71c(param_1,&ppppuStack_38,&uStack_50);
      if ((uVar6 & 1) != 0) {
        uVar6 = uStack_30;
        ppppuVar2 = ppppuStack_38;
        if (-1 < (long)uStack_28) {
          uVar6 = uStack_28 >> 0x38;
          ppppuVar2 = &ppppuStack_38;
        }
        func_0x00792db8(param_1,ppppuVar2,uVar6);
        if (lStack_40 < 0) {
          __ZdlPv(uStack_50);
        }
        return 1;
      }
      goto LAB_0008f6a4;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    }
  }
  else {
    pbVar7 = (byte *)(*pcRam0000000002065670)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019bef7c();
    }
    pcStack_58 = (char *)(*pcRam0000000002065658)();
    if (*pcStack_58 == '\x01') {
      uVar1 = (byte)pcStack_58[1] ^ 0xc21b8e46;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x313b3f85;
      pcStack_58[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x4f ^ 0x85;
      uVar6 = (((ulong)(byte)pcStack_58[1] ^ 0x702db24a356ef571) << 0x11 | 0xe05b) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_58[0xb] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_58[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
// donate: donate/README.md
      pcStack_58[0xd] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_58[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_58[0xf] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_58[0x10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[7]) << 0x11) + 0x9e3779b97f4a7c1b;
/* origin: github.com/pengussy */
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_58[0x11] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[9] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17);
      pcStack_58[0x12] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar10;
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 10;
    uVar8 = func_0x0011ab24(&pcStack_58);
    func_0x007a1ba8(param_1,1,uVar8);
  }
  pbVar7 = (byte *)(*pcRam00000000020656a0)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019befb8();
  }
  pcStack_60 = (char *)(*pcRam0000000002065688)();
  if (*pcStack_60 == '\x01') {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    lVar9 = 0;
    uVar6 = 0xc902bd594ed3c1a3;
    do {
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[lVar9 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_60[lVar9 + 0x21] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar6 = lVar9 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[lVar9 + 1]) << 0x11);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x20);
    *pcStack_60 = '\0';
  }
  pcStack_60 = pcStack_60 + 0x21;
  uVar8 = func_0x0011ab24(&pcStack_60);
  func_0x007a1abc(param_1,1,uVar8);
LAB_0008f6a4:
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x8f6d0);
  (*pcVar3)();
}

