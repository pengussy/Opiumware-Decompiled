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
 *  file-id: 0x6812c:cca74af5f0
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0006812c(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_30;
  char *pcStack_28;
  
  iVar2 = func_0x00791be4(param_1,1);
  if ((iVar2 != 2) &&
     ((iVar2 = func_0x00791be4(param_1,1), iVar2 != 9 ||
      (uVar3 = func_0x00792558(param_1,1), uVar3 < 8)))) {
    pbVar7 = (byte *)(*pcRam0000000002063180)();
    if ((*pbVar7 & 1) == 0) goto LAB_00068a54;
/* WM - unlicensed copy if this notice is missing */
    goto LAB_0006825c;
  }
  iVar2 = func_0x00791be4(param_1,2);
  if ((iVar2 == 2) ||
     ((iVar2 = func_0x00791be4(param_1,2), iVar2 == 9 &&
      (uVar3 = func_0x00792558(param_1,2), 7 < uVar3)))) {
    iVar2 = func_0x00791be4(param_1,1);
    if ((iVar2 == 2) || (iVar2 = func_0x00791be4(param_1,2), iVar2 == 2)) {
      lVar4 = func_0x007926a8(param_1,1);
      lVar5 = func_0x007926a8(param_1,2);
      bVar1 = lVar4 == lVar5;
    }
    else {
      plVar6 = (long *)func_0x007926a8(param_1,1);
      lVar4 = *plVar6;
      plVar6 = (long *)func_0x007926a8(param_1,2);
      bVar1 = lVar4 == *plVar6;
    }
    func_0x007932d0(param_1,bVar1);
    return 1;
  }
  do {
/* donate: donate/README.md - github.com/pengussy */
    pbVar7 = (byte *)(*pcRam00000000020631b0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019bc3e4();
    }
    pcStack_30 = (char *)(*pcRam0000000002063198)();
    if (*pcStack_30 == '\x01') {
      uVar3 = (byte)pcStack_30[1] ^ 0xab256a18;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) + 0xe876b98a;
      pcStack_30[10] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ 0xdb;
      uVar9 = (((ulong)(byte)pcStack_30[1] ^ 0x6136b36d33010193) << 0x11 | 0xc26d) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_30[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_30[0xb] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_30[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_30[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_30[0xc] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_30[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
// WM - thanks for reading - discord.gg/sdkhDjTex
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_30[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_30[0xd] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_30[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_30[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_30[0xe] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_30[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_30[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_30[0xf] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_30[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_30[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_30[0x10] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_30[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_30[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_30[0x11] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar11;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_30[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar3 = (uint)(byte)pcStack_30[9] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_30[0x12] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar10;
      *pcStack_30 = '\0';
    }
    pcStack_30 = pcStack_30 + 10;
    uVar8 = func_0x0011ab24(&pcStack_30);
    func_0x007a1ba8(param_1,2,uVar8);
LAB_00068a54:
    func_0x019bc3a8();
LAB_0006825c:
    pcStack_28 = (char *)(*pcRam0000000002063168)();
    if (*pcStack_28 == '\x01') {
      uVar3 = (byte)pcStack_28[1] ^ 0xa0e5356a;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) + 0x18c142;
      pcStack_28[10] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') + 7 ^ 0xa9;
      uVar9 = (((ulong)(byte)pcStack_28[1] ^ 0x2ffbdf8011b82a7a) << 0x11 | 0x5ff7) +
              0x9e3779b97f4a7c15;
// WM - watermarked copy - do not remove
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_28[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar11 >> 0x17);
      pcStack_28[0xb] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_28[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar11 >> 0x17);
      pcStack_28[0xc] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_28[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar11 >> 0x17);
      pcStack_28[0xd] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_28[5] ^ (uint)uVar11 ^ 0xffffffc3;
/* WM - chat: discord.gg/sdkhDjTex */
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar11 >> 0x17);
      pcStack_28[0xe] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_28[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar11 >> 0x17);
      pcStack_28[0xf] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_28[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar11 >> 0x17);
      pcStack_28[0x10] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_28[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar3 = (uint)(byte)pcStack_28[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar11 >> 0x17);
      pcStack_28[0x11] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_28[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar3 = (uint)(byte)pcStack_28[9] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar10 >> 0x17);
      pcStack_28[0x12] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 10;
    uVar8 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar8);
  } while( true );
}

