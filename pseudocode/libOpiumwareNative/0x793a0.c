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
 *  file-id: 0x793a0:83a33df7bd
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000793a0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_50;
  char *pcStack_48;
  
  lVar2 = lRam0000000001f26d30;
  func_0x00793a78(param_1,0xffffd8f0,0x1f27089,0);
  iVar3 = func_0x00791be4(param_1,0xffffffff);
  if (iVar3 == 7) {
    func_0x00793928(param_1,0xffffffff,1);
    iVar3 = func_0x00791be4(param_1,0xffffffff);
    if (iVar3 != 2) {
      func_0x00791660(param_1,0xfffffffe);
      func_0x00791660(param_1,0xfffffffe);
      goto joined_r0x000799dc;
    }
    lVar4 = func_0x00792624(param_1,0xffffffff);
    func_0x00791660(param_1,0xfffffffe);
    if (lVar4 == lVar2) {
      func_0x00793928(param_1,0xffffffff,2);
      func_0x007917f4(param_1,0xfffffffe);
      iVar3 = func_0x00791be4(param_1,0xffffffff);
      if (iVar3 == 7) {
        return 1;
      }
    }
  }
  func_0x00791660(param_1,0xfffffffe);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
joined_r0x000799dc:
  if ((param_2 & 1) == 0) {
    func_0x00792a48(param_1);
    func_0x007945e4(param_1,0xffffd8f0,0x1f27089,0);
    return 0;
  }
  func_0x00793bd0(param_1,0,0);
  func_0x007933b8(param_1,lVar2,0);
  func_0x00794504(param_1,0xfffffffe,1);
  func_0x00793bd0(param_1,0,0);
  func_0x00793bd0(param_1,0,0);
  pbVar5 = (byte *)(*pcRam0000000002064230)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019bd62c();
  }
  pcStack_48 = (char *)(*pcRam0000000002064218)();
  if (*pcStack_48 == '\x01') {
    uVar1 = (byte)pcStack_48[1] ^ 0x94aad777;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xdf37c0fd;
    pcStack_48[3] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 0xb4;
    uVar7 = (((ulong)(byte)pcStack_48[1] ^ 0xd3f26d01b1aeb296) << 0x11 | 0x1a7e4) +
            0x9e3779b97f4a7c15;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_48[4] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 3;
  uVar6 = func_0x0011ab24(&pcStack_48);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  func_0x00792f00(param_1,uVar6);
  pbVar5 = (byte *)(*pcRam0000000002064260)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019bd668();
  }
  pcStack_50 = (char *)(*pcRam0000000002064248)();
  if (*pcStack_50 == '\x01') {
    uVar1 = (byte)pcStack_50[1] ^ 0x6ea89031;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x274a3ede ^ 0x43762d;
    pcStack_50[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0xe;
    uVar7 = (((ulong)(byte)pcStack_50[1] ^ 0xfc5e6d6376444294) << 0x11 | 0x1f8bc) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_50[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_50[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_50[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_50[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_50[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
    pcStack_50[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 8;
  uVar6 = func_0x0011ab24(&pcStack_50);
  func_0x00794324(param_1,0xfffffffe,uVar6);
  func_0x007946cc(param_1,0xfffffffe);
  func_0x00791ab0(param_1,0xffffffff);
// unlicensed copy if this notice is missing
  func_0x00794504(param_1,0xfffffffd,2);
  func_0x00791ab0(param_1,0xfffffffe);
  func_0x007945e4(param_1,0xffffd8f0,0x1f27089,0);
  func_0x007917f4(param_1,0xfffffffe);
  return 1;
}

