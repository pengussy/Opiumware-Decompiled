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
 *  file-id: 0x280234:8d17fc7ea2
 *  --------------------------------------------------------------------------*/

void FUN_00280234(void)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  
  pcVar2 = (code *)func_0x0011ab24(PTR__dlsym_01f202b0);
  pbVar3 = (byte *)(*pcRam000000000207a178)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019df360();
  }
  pcStack_48 = (char *)(*pcRam000000000207a160)();
  if (*pcStack_48 == '\x01') {
// more drops soon - github.com/pengussy
    lVar5 = 0;
    uVar6 = 0xfa642d46ae508492;
    do {
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
      pcStack_48[lVar5 + 0x15] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = lVar5 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[lVar5 + 1]) << 0x11);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x14);
    *pcStack_48 = '\0';
  }
/* stripping the watermark breaks the license */
  pcStack_48 = pcStack_48 + 0x15;
  uVar4 = func_0x0011ab24(&pcStack_48);
  uRam00000000020932a0 = (*pcVar2)(0xfffffffffffffffe,uVar4);
  pcVar2 = (code *)func_0x0011ab24(PTR__dlsym_01f202b0);
  pbVar3 = (byte *)(*pcRam000000000207a1a8)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019df3a0();
  }
  pcStack_50 = (char *)(*pcRam000000000207a190)();
  if (*pcStack_50 == '\x01') {
    lVar5 = 0;
    uVar6 = 0xb285ef6e0fd929d7;
    do {
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_50[lVar5 + 0x18] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar6 = lVar5 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[lVar5 + 1]) << 0x11);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x17);
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 0x18;
  uVar4 = func_0x0011ab24(&pcStack_50);
  uRam00000000020932a8 = (*pcVar2)(0xfffffffffffffffe,uVar4);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  pcVar2 = (code *)func_0x0011ab24(PTR__dlsym_01f202b0);
  pbVar3 = (byte *)(*pcRam000000000207a1d8)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019df3e0();
  }
  pcStack_58 = (char *)(*pcRam000000000207a1c0)();
  if (*pcStack_58 == '\x01') {
    lVar5 = 0;
    uVar6 = 0x75bf56f78ec5372b;
    do {
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_58[lVar5 + 0x21] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
      uVar6 = lVar5 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[lVar5 + 1]) << 0x11);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x20);
    *pcStack_58 = '\0';
  }
  pcStack_58 = pcStack_58 + 0x21;
  uVar4 = func_0x0011ab24(&pcStack_58);
  uRam00000000020932b0 = (*pcVar2)(0xfffffffffffffffe,uVar4);
  return;
}
/* wm:stripping the watermark breaks the license */

