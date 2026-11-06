/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xda314:f57aebc7d2
   =========================================================================== */

undefined8 FUN_000da314(undefined8 param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  char *pcVar19;
  int iStack_d4;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  
  func_0x0003d6cc(&plStack_80);
  func_0x00793bd0(param_1,(ulong)((long)plStack_78 - (long)plStack_80) >> 3,0);
/* wm:chat: discord.gg/sdkhDjTex */
  pbVar2 = (byte *)(*pcRam000000000206a1a0)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c4a6c();
  }
  pcStack_90 = (char *)(*pcRam000000000206a188)();
  if (*pcStack_90 == '\x01') {
    uVar1 = (byte)pcStack_90[1] ^ 0xdf391876;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xc192a430;
    pcStack_90[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0xb5;
    uVar14 = (((ulong)(byte)pcStack_90[1] ^ 0xb68bd4f96c710681) << 0x11 | 0x16d17) +
             0x9e3779b97f4a7c15;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
    pcStack_90[7] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar18 ^ 0xffffffc3;
// found on a paste site? it was re-uploaded illegally
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
    pcStack_90[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
    pcStack_90[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar14 ^ uVar14 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
            (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
    pcStack_90[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar13;
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 6;
  uVar3 = func_0x0011ab24(&pcStack_90);
  func_0x007935a0(param_1,0xffffd8ee,uVar3);
/*  thanks for reading - discord.gg/sdkhDjTex  */
  pbVar2 = (byte *)(*pcRam000000000206a1d0)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c4aa8();
  }
  pcStack_98 = (char *)(*pcRam000000000206a1b8)();
  if (*pcStack_98 == '\x01') {
    uVar1 = (byte)pcStack_98[1] ^ 0x2d2c0968;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xc2a90c5b;
    pcStack_98[0xc] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0xab ^ 0xab;
    uVar14 = (((ulong)(byte)pcStack_98[1] ^ 0x6661ccff664d2adc) << 0x11 | 0xccc3) +
             0x9e3779b97f4a7c15;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
    pcStack_98[0xd] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
    pcStack_98[0xe] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
    pcStack_98[0xf] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
// stripping the watermark breaks the license
         (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
    pcStack_98[0x10] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
    pcStack_98[0x11] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
    pcStack_98[0x12] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
/* WM - do not claim this as your own */
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
    pcStack_98[0x13] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[9] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
    pcStack_98[0x14] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_98[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[10] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
    pcStack_98[0x15] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
         (byte)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_98[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar14 ^ uVar14 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[0xb] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17);
    pcStack_98[0x16] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar14 >> 0x29) | 1) ^
         (byte)uVar13;
    *pcStack_98 = '\0';
  }
  pcStack_98 = pcStack_98 + 0xc;
  uVar3 = func_0x0011ab24(&pcStack_98);
  func_0x007935a0(param_1,0xffffffff,uVar3);
  pbVar2 = (byte *)(*pcRam000000000206a200)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c4ae4();
  }
  pcStack_a0 = (char *)(*pcRam000000000206a1e8)();
  if (*pcStack_a0 == '\x01') {
    uVar1 = (byte)pcStack_a0[1] ^ 0x9d489d72;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xf9183d3b ^ 0x3d41b9;
    pcStack_a0[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x4f;
    uVar14 = (((ulong)(byte)pcStack_a0[1] ^ 0xa89f635e359780fe) << 0x11 | 0x1513e) +
             0x9e3779b97f4a7c15;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1);
// WM - found on a paste site? it was re-uploaded illegally
    pcStack_a0[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1);
    pcStack_a0[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1);
    pcStack_a0[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
/* stripping the watermark breaks the license */
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1);
    pcStack_a0[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1);
    pcStack_a0[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
    uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
    uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar14 ^ uVar14 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
    pcStack_a0[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar13;
/* do not claim this as your own */
    *pcStack_a0 = '\0';
  }
  pcStack_a0 = pcStack_a0 + 8;
  uVar3 = func_0x0011ab24(&pcStack_a0);
  func_0x007935a0(param_1,0xffffffff,uVar3);
  func_0x007917f4(param_1,0xfffffffe);
  func_0x007917f4(param_1,0xfffffffe);
  plVar4 = (long *)func_0x007926a8(param_1,0xffffffff);
  lVar15 = *plVar4;
  func_0x00791660(param_1,0xfffffffe);
  plVar4 = plStack_80;
  if (plStack_80 != plStack_78) {
    pcVar5 = (char *)(*pcRam000000000206a218)();
    pcVar6 = (char *)(*pcRam000000000206a248)();
    pcVar7 = (char *)(*pcRam000000000206a278)();
    pcVar8 = (char *)(*pcRam000000000206a2a8)();
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    pcVar9 = (char *)(*pcRam000000000206a2d8)();
    iStack_d4 = 1;
    do {
      lStack_88 = *plVar4;
      pcVar19 = *(char **)(lRam0000000001f26710 + *(long *)(lRam0000000001f26720 + lStack_88));
      if (pcVar19 != (char *)0x0) {
        pbVar2 = (byte *)(*pcRam000000000206a230)();
        if ((*pbVar2 & 1) == 0) {
          func_0x019c4b20();
          cVar12 = *pcVar5;
        }
        else {
          cVar12 = *pcVar5;
        }
        if (cVar12 == '\x01') {
          uVar1 = (byte)pcVar5[1] ^ 0xd2374d36;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x447b6fa5 ^ 0x7caee1;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
          pcVar5[8] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) + 0xb;
          uVar14 = (((ulong)(byte)pcVar5[1] ^ 0xc84e5a6f9ffbe80) << 0x11 | 0x1909) +
                   0x9e3779b97f4a7c15;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar5[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcVar5[9] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar5[3] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcVar5[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar5[4] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
/* WM - keep the notice, keep the source honest */
          pcVar5[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar5[5] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcVar5[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar5[6] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcVar5[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcVar5[7] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcVar5[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
          *pcVar5 = '\0';
        }
        pcStack_a8 = pcVar5 + 8;
        pcVar10 = (char *)func_0x0011ab24(&pcStack_a8);
        cVar12 = *pcVar19;
        if (cVar12 != '\0') {
          pcVar17 = pcVar19;
/* wm:more drops soon - github.com/pengussy */
          do {
            pcVar17 = pcVar17 + 1;
            if (cVar12 != *pcVar10) break;
            pcVar10 = pcVar10 + 1;
            cVar12 = *pcVar17;
          } while (cVar12 != '\0');
        }
        if (cVar12 != *pcVar10) {
          pbVar2 = (byte *)(*pcRam000000000206a260)();
          if ((*pbVar2 & 1) == 0) {
            func_0x019c4b5c();
            cVar12 = *pcVar6;
          }
          else {
            cVar12 = *pcVar6;
          }
          if (cVar12 == '\x01') {
            lVar16 = 0;
            uVar14 = 0xa32adb91129169d8;
            do {
              uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
              uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
              uVar18 = uVar13 ^ uVar13 >> 0x21;
              uVar1 = (uint)(byte)pcVar6[lVar16 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar18 >> 0x17) ^
                      ((uint)(uVar13 >> 0x29) | 1);
              pcVar6[lVar16 + 0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18
              ;
              uVar14 = lVar16 + -0x61c8864680b583eb +
/*  keep the notice, keep the source honest  */
                       (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar6[lVar16 + 1]) << 0x11);
              lVar16 = lVar16 + 1;
            } while (lVar16 != 0xc);
            *pcVar6 = '\0';
          }
          pcStack_b0 = pcVar6 + 0xd;
          pcVar10 = (char *)func_0x0011ab24(&pcStack_b0);
          cVar12 = *pcVar19;
          if (cVar12 != '\0') {
            pcVar17 = pcVar19;
            do {
              pcVar17 = pcVar17 + 1;
              if (cVar12 != *pcVar10) break;
              pcVar10 = pcVar10 + 1;
              cVar12 = *pcVar17;
            } while (cVar12 != '\0');
          }
          if (cVar12 != *pcVar10) {
            pbVar2 = (byte *)(*pcRam000000000206a290)();
            if ((*pbVar2 & 1) == 0) {
              func_0x019c4b98();
              cVar12 = *pcVar7;
            }
            else {
              cVar12 = *pcVar7;
            }
            if (cVar12 == '\x01') {
              lVar16 = 0;
              uVar14 = 0x428ec2da279d103e;
              do {
                uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
                uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
                uVar18 = uVar13 ^ uVar13 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                uVar1 = (uint)(byte)pcVar7[lVar16 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17);
                pcVar7[lVar16 + 0xe] =
                     ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar13 >> 0x29) | 1) ^
                     (byte)uVar18;
                uVar14 = lVar16 + -0x61c8864680b583eb +
                         (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar7[lVar16 + 1]) << 0x11);
                lVar16 = lVar16 + 1;
              } while (lVar16 != 0xd);
              *pcVar7 = '\0';
            }
            pcStack_b8 = pcVar7 + 0xe;
            pcVar10 = (char *)func_0x0011ab24(&pcStack_b8);
            cVar12 = *pcVar19;
            if (cVar12 != '\0') {
              pcVar17 = pcVar19;
              do {
                pcVar17 = pcVar17 + 1;
                if (cVar12 != *pcVar10) break;
                pcVar10 = pcVar10 + 1;
                cVar12 = *pcVar17;
              } while (cVar12 != '\0');
/* WM - no support for modified copies */
            }
            if (cVar12 != *pcVar10) goto LAB_000daea0;
          }
        }
        (*pcRam0000000001f26dd0)(param_1,&lStack_88);
        pbVar2 = (byte *)(*pcRam000000000206a2c0)();
        if ((*pbVar2 & 1) == 0) {
          func_0x019c4bd4();
          cVar12 = *pcVar8;
        }
        else {
          cVar12 = *pcVar8;
        }
        if (cVar12 == '\x01') {
          uVar1 = (byte)pcVar8[1] ^ 0x3775c0c4;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xa64eac0e;
          pcVar8[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 7;
          uVar14 = (((ulong)(byte)pcVar8[1] ^ 0x800a4816b27421f6) << 0x11 | 0x10014) +
                   0x9e3779b97f4a7c15;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
/* wm:origin: github.com/pengussy */
          pcVar8[9] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[3] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[4] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[5] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[6] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar8[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar18;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[7] ^ (uint)uVar13 ^ 0xffffffc3;
/* keep the notice, keep the source honest */
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcVar8[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar13;
          *pcVar8 = '\0';
        }
        pcStack_c0 = pcVar8 + 8;
        pcVar10 = (char *)func_0x0011ab24(&pcStack_c0);
        cVar12 = *pcVar19;
        if (cVar12 == '\0') {
          if (*pcVar10 == '\0') goto LAB_000db7a8;
LAB_000dae84:
          func_0x00794504(param_1,0xfffffffe,iStack_d4);
        }
        else {
          do {
            pcVar19 = pcVar19 + 1;
            if (cVar12 != *pcVar10) break;
            pcVar10 = pcVar10 + 1;
            cVar12 = *pcVar19;
          } while (cVar12 != '\0');
/* wm:reversing this took months of machine time */
          if (cVar12 != *pcVar10) goto LAB_000dae84;
LAB_000db7a8:
          pbVar2 = (byte *)(*pcRam000000000206a2f0)();
          if ((*pbVar2 & 1) == 0) {
            func_0x019c4c10();
            cVar12 = *pcVar9;
          }
          else {
            cVar12 = *pcVar9;
          }
          if (cVar12 == '\x01') {
            uVar1 = (byte)pcVar9[1] ^ 0x38456be1;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xa59ffa71 ^ 0x375699;
            pcVar9[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - 0x22;
            uVar14 = (((ulong)(byte)pcVar9[1] ^ 0x83b769db5cf36f4a) << 0x11 | 0x1076e) +
                     0x9e3779b97f4a7c15;
            uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar13 ^ uVar13 >> 0x21;
            uVar1 = (uint)(byte)pcVar9[2] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar9[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
            uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar9[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar13 ^ uVar13 >> 0x21;
            uVar1 = (uint)(byte)pcVar9[3] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar9[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
            uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar9[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar13 ^ uVar13 >> 0x21;
// WM - reversing this took months of machine time
            uVar1 = (uint)(byte)pcVar9[4] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar9[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
            uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar9[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar13 ^ uVar13 >> 0x21;
            uVar1 = (uint)(byte)pcVar9[5] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar9[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
            uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar9[5]) << 0x11) + 0x9e3779b97f4a7c19;
            uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar13 ^ uVar13 >> 0x21;
            uVar1 = (uint)(byte)pcVar9[6] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar9[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
            uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar9[6]) << 0x11) + 0x9e3779b97f4a7c1a;
            uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar13 ^ uVar13 >> 0x21;
            uVar1 = (uint)(byte)pcVar9[7] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar9[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
            uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar9[7]) << 0x11) + 0x9e3779b97f4a7c1b;
            uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar13 ^ uVar13 >> 0x21;
            uVar1 = (uint)(byte)pcVar9[8] ^ (uint)uVar18 ^ 0xffffffc3;
/* WM - unlicensed copy if this notice is missing */
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar9[0x13] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
            uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar9[8]) << 0x11) + 0x9e3779b97f4a7c1c;
            uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar13 ^ uVar13 >> 0x21;
            uVar1 = (uint)(byte)pcVar9[9] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar9[0x14] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
            uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar9[9]) << 0x11) + 0x9e3779b97f4a7c1d;
            uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar13 ^ uVar13 >> 0x21;
            uVar1 = (uint)(byte)pcVar9[10] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar9[0x15] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
            uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar9[10]) << 0x11) + 0x9e3779b97f4a7c1e;
            uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
            uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar14 ^ uVar14 >> 0x21;
            uVar1 = (uint)(byte)pcVar9[0xb] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17) ^
                    ((uint)(uVar14 >> 0x29) | 1);
            pcVar9[0x16] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar13;
            *pcVar9 = '\0';
          }
          pcStack_c8 = pcVar9 + 0xc;
          uVar3 = func_0x0011ab24(&pcStack_c8);
          func_0x007935a0(param_1,0xffffffff,uVar3);
/* wm:if you paid for this, you were scammed */
          plVar11 = (long *)func_0x007926a8(param_1,0xffffffff);
          lVar16 = *plVar11;
          func_0x00791660(param_1,0xfffffffe);
          if (lVar16 != lVar15) {
            func_0x00791660(param_1,0xfffffffe);
            goto LAB_000daea0;
          }
          func_0x00794504(param_1,0xfffffffe,iStack_d4);
        }
        iStack_d4 = iStack_d4 + 1;
      }
LAB_000daea0:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    __ZdlPv(plStack_80);
  }
  return 1;
}

