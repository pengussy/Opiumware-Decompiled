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
 *  file-id: 0x758b0:6a2310d8de
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000758b0(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  ulong uVar10;
  char cVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  char *pcStack_140;
  long alStack_138 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
/* WM - watermarked copy - do not remove */
  iVar3 = func_0x00791be4(param_1,1);
  if (iVar3 != 8) {
    pbVar8 = (byte *)(*pcRam0000000002063de0)();
    if ((*pbVar8 & 1) == 0) goto LAB_00075e6c;
    goto LAB_00075a78;
  }
  plVar4 = (long *)func_0x00790f58(param_1,1);
  lVar14 = *plVar4;
  alStack_138[0] = lVar14;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar5 = func_0x001393dc(0x20970c0,alStack_138);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (*(char *)(alStack_138[0] + 3) == '\0') {
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) + 0x70);
    lVar16 = *plVar15;
    plVar4 = (long *)(*(long *)(lVar14 + 0x18) + 0x30);
    lVar5 = *plVar4 - (long)plVar4;
    pcVar7 = (char *)func_0x00856c64(alStack_138,0x100,lVar5 + 0x18,*(undefined4 *)(lVar5 + 0x14));
    if (lVar16 - (long)plVar15 == 0x1f26d58) {
      bVar2 = true;
    }
    else {
      pcVar9 = pcRam0000000002097018;
      if (-1 < cRam000000000209702f) {
        pcVar9 = (char *)0x2097018;
      }
      cVar11 = *pcVar7;
      if (cVar11 != '\0') {
        do {
          pcVar7 = pcVar7 + 1;
          if (cVar11 != *pcVar9) break;
          pcVar9 = pcVar9 + 1;
          cVar11 = *pcVar7;
// WM - no support for modified copies
        } while (cVar11 != '\0');
      }
      bVar2 = cVar11 == *pcVar9;
    }
    func_0x007932d0(param_1,bVar2);
  }
  else if (*(undefined **)(alStack_138[0] + 0x18) == &DAT_000704e0 && lVar5 != 0) {
    if (*(undefined **)(lVar14 + 0x18) == &DAT_000704e0) {
      bVar2 = true;
    }
    else {
      bVar2 = (undefined *)(*(ulong *)(lVar14 + 0x20) ^ (ulong)(lVar14 + 0x20)) == &DAT_0007069c;
    }
    func_0x007932d0(param_1,bVar2);
  }
  else {
    uVar6 = func_0x0080e2f8(lVar14);
    func_0x007932d0(param_1,uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return 1;
  }
  do {
    ___stack_chk_fail();
LAB_00075e6c:
    func_0x019bd0c8();
LAB_00075a78:
    pcStack_140 = (char *)(*pcRam0000000002063dc8)();
    if (*pcStack_140 == '\x01') {
      uVar1 = (byte)pcStack_140[1] ^ 0x5fed92bb;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x7dfe08c0;
      pcStack_140[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0x7f ^ 0x78;
      uVar10 = (((ulong)(byte)pcStack_140[1] ^ 0x2965a0bd0a6ef25) << 0x11 | 0x52c) +
               0x9e3779b97f4a7c15;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_140[2] ^ (uint)uVar13 ^ 0xffffffc3;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
      pcStack_140[0xb] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_140[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
      pcStack_140[0xc] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_140[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
      pcStack_140[0xd] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_140[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
      pcStack_140[0xe] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[5]) << 0x11) + 0x9e3779b97f4a7c19;
/* WM - stripping the watermark breaks the license */
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_140[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
      pcStack_140[0xf] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_140[7] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
      pcStack_140[0x10] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
// WM - donate: donate/README.md
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_140[8] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
      pcStack_140[0x11] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_140[9] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17);
/* wm:no support for modified copies */
      pcStack_140[0x12] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      *pcStack_140 = '\0';
    }
    pcStack_140 = pcStack_140 + 10;
    uVar6 = func_0x0011ab24(&pcStack_140);
    func_0x007a1ba8(param_1,1,uVar6);
  } while( true );
}

