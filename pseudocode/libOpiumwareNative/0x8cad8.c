/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x8cad8:41a1c84d27
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0008cad8(undefined8 param_1)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  undefined8 ****ppppuStack_a0;
  ulong uStack_98;
  byte bStack_89;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 == 0) {
    pbVar8 = (byte *)(*pcRam0000000002065580)();
    if ((*pbVar8 & 1) == 0) goto LAB_0008d454;
LAB_0008cc80:
    pcStack_b8 = (char *)(*pcRam0000000002065568)();
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (*pcStack_b8 == '\x01') {
      uVar1 = (byte)pcStack_b8[1] ^ 0xf25cd067;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x289afbe5 ^ 0x22b5d9;
      pcStack_b8[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x5c;
      uVar9 = (((ulong)(byte)pcStack_b8[1] ^ 0xd0775d7ba506a18) << 0x11 | 0x1a0e) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_b8[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_b8[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_b8[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
// reversing this took months of machine time
      uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_b8[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_b8[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_b8[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      *pcStack_b8 = '\0';
    }
    pcStack_b8 = pcStack_b8 + 8;
    uVar4 = func_0x0011ab24(&pcStack_b8);
/* donate: donate/README.md */
    func_0x007a1ba8(param_1,1,uVar4);
  }
  else {
    iVar3 = func_0x00791e54(param_1,2);
    if (iVar3 != 0) {
      uVar4 = func_0x00792368(param_1,1,&uStack_80);
      uVar5 = func_0x00792368(param_1,2,0);
      pcVar6 = (code *)func_0x0011ab24(&SUB_0045d390);
      lVar7 = (*pcVar6)(uVar5);
      if (lVar7 == 0) goto LAB_0008d308;
      pcVar6 = (code *)func_0x0011ab24(&SUB_0044efa4);
      uVar5 = (*pcVar6)();
      uStack_84 = 0;
      pcVar6 = (code *)func_0x0011ab24(&SUB_019e968c);
      (*pcVar6)(uVar5,lVar7,0);
      pcVar6 = (code *)func_0x0011ab24(&SUB_019e969c);
      (*pcVar6)(uVar5,uVar4,uStack_80);
      pcVar6 = (code *)func_0x0011ab24(&SUB_019e9778);
      (*pcVar6)(uVar5,auStack_78,&uStack_84);
      pcVar6 = (code *)func_0x0011ab24(&SUB_0044efb8);
      (*pcVar6)(uVar5);
      func_0x000871b4(&ppppuStack_a0,auStack_78,uStack_84);
      ppppuVar2 = ppppuStack_a0;
      if (-1 < (char)bStack_89) {
        uStack_98 = (ulong)bStack_89;
        ppppuVar2 = &ppppuStack_a0;
/* if you paid for this, you were scammed - github.com/pengussy */
      }
      func_0x00792db8(param_1,ppppuVar2,uStack_98);
      if ((char)bStack_89 < '\0') {
        __ZdlPv(ppppuStack_a0);
      }
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
        return 1;
      }
      ___stack_chk_fail();
LAB_0008d454:
      func_0x019beec8();
      goto LAB_0008cc80;
    }
  }
  pbVar8 = (byte *)(*pcRam00000000020655b0)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019bee8c();
  }
  pcStack_b0 = (char *)(*pcRam0000000002065598)();
  if (*pcStack_b0 == '\x01') {
    uVar1 = (byte)pcStack_b0[1] ^ 0x60d2eff;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x667e8a0d;
    pcStack_b0[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0x9f ^ 0x3c;
    uVar9 = (((ulong)(byte)pcStack_b0[1] ^ 0xed7e18b1b72e3ee1) << 0x11 | 0x1dafc) +
            0x9e3779b97f4a7c15;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
    pcStack_b0[9] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
    pcStack_b0[10] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
    pcStack_b0[0xb] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
/* found on a paste site? it was re-uploaded illegally */
    uVar1 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
    pcStack_b0[0xc] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[6] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
    pcStack_b0[0xd] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[7] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
/* watermarked copy - do not remove */
    pcStack_b0[0xe] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar10;
    *pcStack_b0 = '\0';
  }
  pcStack_b0 = pcStack_b0 + 8;
  uVar4 = func_0x0011ab24(&pcStack_b0);
  func_0x007a1ba8(param_1,2,uVar4);
LAB_0008d308:
  pbVar8 = (byte *)(*pcRam00000000020655e0)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019bee50();
  }
  pcStack_a8 = (char *)(*pcRam00000000020655c8)();
  if (*pcStack_a8 == '\x01') {
    lVar7 = 0;
    uVar9 = 0x498e9406676e8002;
    do {
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[lVar7 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a8[lVar7 + 0x30] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
      uVar9 = lVar7 + -0x61c8864680b583eb +
              (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x2f);
    *pcStack_a8 = '\0';
  }
  pcStack_a8 = pcStack_a8 + 0x30;
  uVar4 = func_0x0011ab24(&pcStack_a8);
  func_0x007a1b5c(param_1,uVar4);
                    /* WARNING: Does not return */
/* unlicensed copy if this notice is missing - github.com/pengussy */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x8d450);
  (*pcVar6)();
}

