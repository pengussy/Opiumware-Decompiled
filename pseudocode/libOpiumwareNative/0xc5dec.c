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
 *  file-id: 0xc5dec:701ac23586
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000c5dec(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) goto LAB_000c62dc;
  pbVar3 = (byte *)(*pcRam0000000002069090)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c34dc();
  }
  unaff_x20 = -0xae502812aa7333;
  unaff_x21 = -0x3b314601e57a13ad;
  unaff_x22 = -0x61c8864680b583eb;
  unaff_x23 = 0x8ebc6af09c88c6e3;
  pcStack_48 = (char *)(*pcRam0000000002069078)();
  if (*pcStack_48 == '\x01') {
    uVar1 = (byte)pcStack_48[1] ^ 0xd5de5249;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xdc234dac;
    pcStack_48[5] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 9 ^ 0x8a;
    uVar7 = (((ulong)(byte)pcStack_48[1] ^ 0x8542f081b422cea7) << 0x11 | 0x10a85) +
            0x9e3779b97f4a7c15;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
    pcStack_48[6] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
    pcStack_48[7] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar6 >> 0x17);
    pcStack_48[8] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar6
    ;
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 5;
  uVar4 = func_0x0011ab24(&pcStack_48);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  func_0x007935a0(param_1,1,uVar4);
  func_0x00791ab0(param_1,1);
  pbVar3 = (byte *)(*pcRam00000000020690c0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c3518();
  }
  pcStack_50 = (char *)(*pcRam00000000020690a8)();
  if (*pcStack_50 == '\x01') {
    lVar8 = 0;
    uVar7 = 0xbb33866b80d718ea;
    do {
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_50[lVar8 + 0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
      uVar7 = lVar8 + -0x61c8864680b583eb +
              (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x10);
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 0x11;
  uVar4 = func_0x0011ab24(&pcStack_50);
  func_0x00792f00(param_1,uVar4);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if ((iVar2 == 0) && (iVar2 = func_0x00792220(param_1,0xffffffff), iVar2 != 0)) {
    func_0x00791660(param_1,0xfffffffe);
    puVar5 = (undefined8 *)func_0x007926a8(param_1,1);
    (*pcRam0000000001f26e18)(*puVar5);
    return 0;
  }
  pbVar3 = (byte *)(*pcRam00000000020690f0)();
/* origin: github.com/pengussy - github.com/pengussy */
  if ((*pbVar3 & 1) == 0) goto LAB_000c66e4;
  do {
    pcStack_58 = (char *)(*pcRam00000000020690d8)();
    if (*pcStack_58 == '\x01') {
      lVar8 = 0;
      uVar7 = (unaff_x23 ^ 0xc2a7f2723e18cc51 ^ (unaff_x23 ^ 0xc2a7f2723e18cc51) >> 0x21) *
              unaff_x20;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * unaff_x21;
      uVar7 = uVar7 ^ uVar7 >> 0x21;
      do {
        uVar6 = (uVar7 ^ uVar7 >> 0x21) * unaff_x20;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
        uVar9 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
        pcStack_58[lVar8 + 0x1a] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = lVar8 + unaff_x22 + (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_58[lVar8 + 1]) << 0x11);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x19);
/* more drops soon - github.com/pengussy */
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 0x1a;
    uVar4 = func_0x0011ab24(&pcStack_58);
    func_0x007a1abc(param_1,1,uVar4);
LAB_000c62dc:
    pbVar3 = (byte *)(*pcRam0000000002069060)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c3590();
    }
    pcStack_60 = (char *)(*pcRam0000000002069048)();
    if (*pcStack_60 == '\x01') {
      uVar1 = (byte)pcStack_60[1] ^ 0x4b79c2c;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x7686760a;
      pcStack_60[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0xa1 ^ 0xef;
      uVar7 = (((ulong)(byte)pcStack_60[1] ^ 0x6c3dbb6c46b0406d) << 0x11 | 0xd87b) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_60[0xb] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_60[0xc] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
/* no support for modified copies - github.com/pengussy */
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_60[0xd] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_60[0xe] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_60[0xf] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
/*  if you paid for this, you were scammed  */
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_60[0x10] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_60[0x11] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[9] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar6 >> 0x17);
      pcStack_60[0x12] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar6;
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 10;
/* no support for modified copies */
    uVar4 = func_0x0011ab24(&pcStack_60);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_000c66e4:
    func_0x019c3554();
  } while( true );
}

