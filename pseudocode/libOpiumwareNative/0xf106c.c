/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xf106c:e7e509a5d0
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x007949b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x007949b4) */
/* WARNING: Removing unreachable block (ram,0x007949d0) */
/* WARNING: Removing unreachable block (ram,0x007949e4) */
/* WARNING: Removing unreachable block (ram,0x007949bc) */
/* WARNING: Removing unreachable block (ram,0x008014d8) */
/* WARNING: Removing unreachable block (ram,0x0079490c) */
/* WARNING: Removing unreachable block (ram,0x00794920) */
/* WARNING: Removing unreachable block (ram,0x0079492c) */
/* WARNING: Removing unreachable block (ram,0x00794948) */
/* WARNING: Removing unreachable block (ram,0x0079495c) */
/* WARNING: Removing unreachable block (ram,0x00794980) */
/* WARNING: Removing unreachable block (ram,0x00794990) */
/* WARNING: Removing unreachable block (ram,0x0079499c) */
/* WARNING: Removing unreachable block (ram,0x007949fc) */
/* WARNING: Removing unreachable block (ram,0x00794a40) */
/* WARNING: Removing unreachable block (ram,0x00794a58) */
/* WARNING: Removing unreachable block (ram,0x00794a64) */
/* WARNING: Removing unreachable block (ram,0x00794a80) */
/* WARNING: Removing unreachable block (ram,0x00794a94) */
/* WARNING: Removing unreachable block (ram,0x00794abc) */
/* WARNING: Removing unreachable block (ram,0x00794ad0) */
/* WARNING: Removing unreachable block (ram,0x00794adc) */
/* WARNING: Removing unreachable block (ram,0x00794ae0) */
/* WARNING: Removing unreachable block (ram,0x00794b0c) */
/* WARNING: Removing unreachable block (ram,0x00794ae4) */
/* WARNING: Removing unreachable block (ram,0x00794b18) */
/* WARNING: Removing unreachable block (ram,0x00794b30) */
/* WARNING: Removing unreachable block (ram,0x00794b24) */
/* WARNING: Removing unreachable block (ram,0x00794aec) */
/* WARNING: Removing unreachable block (ram,0x00794b04) */
/* WARNING: Removing unreachable block (ram,0x00794b44) */
/* WARNING: Removing unreachable block (ram,0x00794b4c) */
/* WARNING: Removing unreachable block (ram,0x00794b98) */
/* WARNING: Removing unreachable block (ram,0x00794bac) */
/* WARNING: Removing unreachable block (ram,0x00794b80) */
/* WARNING: Removing unreachable block (ram,0x00794bc8) */
/* WARNING: Removing unreachable block (ram,0x0081a21c) */

// WM - proprietary - see LICENSE - do not sell
ulong FUN_000f106c(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  ulong uVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined1 *puVar10;
  undefined1 *puVar9;
  int iVar11;
  undefined8 uVar12;
  byte *pbVar13;
  char *pcVar14;
  undefined8 uVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  code *pcVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar29;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auStack_40 [16];
  
  uVar12 = func_0x00791624();
  pbVar13 = (byte *)(*pcRam000000000206b8e0)();
  if ((*pbVar13 & 1) == 0) {
    func_0x019c686c();
  }
// reversing this took months of machine time
  pcVar14 = (char *)(*pcRam000000000206b8c8)();
  if (*pcVar14 == '\x01') {
    uVar1 = (byte)pcVar14[1] ^ 0xa51c966e;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xb562534b ^ 0x6e12a7;
    pcVar14[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x53;
    uVar20 = (((ulong)(byte)pcVar14[1] ^ 0x73b136c9608edcd3) << 0x11 | 0xe762) + 0x9e3779b97f4a7c15;
    uVar25 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar25 ^ uVar25 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[2] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar25 >> 0x29) | 1);
    pcVar14[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar28;
    uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar25 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar25 ^ uVar25 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[3] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar25 >> 0x29) | 1);
    pcVar14[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar28;
    uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar25 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
/* wm:do not claim this as your own */
    uVar28 = uVar25 ^ uVar25 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[4] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar25 >> 0x29) | 1);
    pcVar14[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar28;
    uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar25 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar25 ^ uVar25 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[5] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar25 >> 0x29) | 1);
    pcVar14[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar28;
    uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar25 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar25 ^ uVar25 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[6] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar25 >> 0x29) | 1);
    pcVar14[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar28;
    uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar25 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar25 ^ uVar25 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[7] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar25 >> 0x29) | 1);
/* origin: github.com/pengussy - github.com/pengussy */
    pcVar14[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar28;
    uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar25 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar25 ^ uVar25 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[8] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar25 >> 0x29) | 1);
    pcVar14[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar28;
    uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar25 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar25 ^ uVar25 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[9] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar25 >> 0x29) | 1);
    pcVar14[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar28;
    uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar25 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar25 ^ uVar25 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[10] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar25 >> 0x29) | 1);
    pcVar14[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar28;
    uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
    uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar20 ^ uVar20 >> 0x21;
    uVar1 = (uint)(byte)pcVar14[0xb] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar25 >> 0x17) ^ ((uint)(uVar20 >> 0x29) | 1);
    pcVar14[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar25;
    *pcVar14 = '\0';
  }
  uVar15 = func_0x0011ab24(auStack_40 + 0x18);
  func_0x007930d0(param_1,FUN_000eda50,uVar15,0,0);
  func_0x00791ab0(param_1,uVar12);
  puVar30 = &UNK_007949b4;
  puVar8 = auStack_40;
  lVar17 = *(long *)(param_1 + 0x48) + -0x20;
/*  more drops soon - github.com/pengussy  */
  uVar12 = 0;
  pbVar13 = param_1;
  uVar15 = 0;
  puVar9 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar19 = uVar12;
    lVar18 = lVar17;
    pbVar16 = param_1;
    puVar10 = puVar8;
    *(undefined8 *)(puVar10 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar10 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar10 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar10 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(long *)(puVar10 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar10 + -0x20) = uVar15;
    *(byte **)(puVar10 + -0x18) = pbVar13;
    *(undefined1 **)(puVar10 + -0x10) = puVar9 + -0x10;
    *(undefined **)(puVar10 + -8) = puVar30;
/* WM - found on a paste site? it was re-uploaded illegally */
    sVar5 = *(short *)(pbVar16 + 8);
    *(short *)(pbVar16 + 8) = sVar5 + 1;
    if ((ushort)(sVar5 + 1U) < 200) break;
    uVar12 = uVar19;
    if ((ushort)(sVar5 + 1U) == 200) {
      func_0x007f54e4(pbVar16,&UNK_01c95035);
    }
    else if ((ushort)(sVar5 + 1U) < 0xe1) break;
    puVar30 = &DAT_00801640;
    auVar34 = func_0x00800bec(pbVar16,5);
    puVar8 = puVar10 + -0x60;
    param_1 = auVar34._0_8_;
    lVar17 = auVar34._8_8_;
    pbVar13 = pbVar16;
    uVar15 = uVar19;
    unaff_x21 = lVar18;
    unaff_x22 = 0;
    puVar9 = puVar10;
  }
  lVar17 = *(long *)(pbVar16 + 0x30) - *(long *)(pbVar16 + 0x18);
  if (((lVar17 == 0) ||
      (lVar21 = **(long **)(*(long *)(pbVar16 + 0x30) + 8), *(char *)(lVar21 + 3) == '\0')) ||
     (plVar22 = (long *)(lVar21 + 0x20), (long *)*plVar22 == plVar22)) {
    bVar7 = false;
    lVar21 = *(long *)(pbVar16 + 0x40);
    uVar20 = func_0x008d6764(pbVar16,lVar18,uVar19);
    iVar11 = (int)uVar20;
  }
  else {
    *(short *)(pbVar16 + 10) = *(short *)(pbVar16 + 10) + 1;
    bVar7 = true;
    lVar21 = *(long *)(pbVar16 + 0x40);
/*  reversing this took months of machine time  */
    uVar20 = func_0x008d6764(pbVar16,lVar18,uVar19);
    iVar11 = (int)uVar20;
  }
  if (iVar11 == 0) {
    *(uint *)(*(long *)(pbVar16 + 0x30) + 0x2c) = *(uint *)(*(long *)(pbVar16 + 0x30) + 0x2c) | 1;
    bVar2 = pbVar16[6];
    pbVar16[6] = 1;
    if ((*pbVar16 >> 2 & 1) != 0) {
      func_0x0081b5c4(pbVar16,pbVar16,pbVar16 + 0x28);
    }
    if (cRam00000000020979a8 == '\x01') {
      lVar29 = (*(long *)(pbVar16 + 0x30) - *(long *)(pbVar16 + 0x18)) + -0x30;
      uVar20 = func_0x008ca6bc(pbVar16);
    }
    else {
      lVar29 = 0;
      uVar20 = func_0x008ca6bc(pbVar16);
    }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    if (cRam00000000020979a8 == '\x01') {
      uVar20 = func_0x008018c4(pbVar16,lVar29);
    }
    if ((bVar2 & 1) == 0) {
      pbVar16[6] = 0;
    }
  }
  bVar2 = pbVar16[3];
  iVar11 = (int)uVar19;
  if (((bVar2 == 1) || (bVar2 == 0x7f)) || (bVar2 == 6)) {
    if (bVar7) {
      *(short *)(pbVar16 + 10) = *(short *)(pbVar16 + 10) + -1;
      iVar26 = 0;
      if (iVar11 != -1) {
        iVar26 = iVar11;
      }
      *(long *)(*(long *)(pbVar16 + 0x18) + lVar17 + 0x18) =
           *(long *)(pbVar16 + 0x40) + (lVar18 - lVar21) + (long)iVar26 * 0x10;
    }
  }
  else {
    if (bVar7) {
      *(short *)(pbVar16 + 10) = *(short *)(pbVar16 + 10) + -1;
    }
    if (iVar11 != -1) {
      *(long *)(pbVar16 + 0x48) =
           *(long *)(pbVar16 + 0x40) + (lVar18 - lVar21) + (long)iVar11 * 0x10;
    }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  }
  *(short *)(pbVar16 + 8) = *(short *)(pbVar16 + 8) + -1;
  if (*(ulong *)(*(long *)(pbVar16 + 0x38) + 0x50) < *(ulong *)(*(long *)(pbVar16 + 0x38) + 0x48)) {
    return uVar20;
  }
  *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
  *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
  *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x30);
  *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)(puVar10 + -0x28);
  *(undefined8 *)(puVar10 + -0x20) = *(undefined8 *)(puVar10 + -0x20);
  *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
  *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
  *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  lVar21 = *(long *)(pbVar16 + 0x38);
  iVar11 = *(int *)(lVar21 + 0x40);
  iVar26 = *(int *)(lVar21 + 0x44);
  lVar17 = *(long *)(lVar21 + 0x48);
  lVar18 = *(long *)(lVar21 + 0x50);
  if (*(code **)(lVar21 + 0x668) == (code *)0x0) {
    cVar3 = *(char *)(lVar21 + 0x39);
  }
  else {
    (**(code **)(lVar21 + 0x668))(pbVar16,0);
// chat: discord.gg/sdkhDjTex
    cVar3 = *(char *)(lVar21 + 0x39);
  }
  if (cVar3 == '\0') {
    uVar12 = func_0x00861e74();
    *(undefined8 *)(&UNK_00005570 + lVar21) = uVar12;
  }
  uVar28 = lVar18 - lVar17;
  uVar25 = (ulong)((iVar26 * iVar11) / 100);
  uVar20 = (uVar28 * (long)*(int *)(lVar21 + 0x44)) / 100;
  if (uVar20 <= uVar25) {
    uVar20 = uVar25;
  }
  uVar4 = *(undefined1 *)(lVar21 + 0x39);
  lVar17 = func_0x0081a220(pbVar16,uVar20);
  uVar20 = *(ulong *)(lVar21 + 0x50);
  uVar25 = 0;
  if ((long)*(int *)(lVar21 + 0x44) != 0) {
    uVar25 = (ulong)(lVar17 * 100) / (ulong)(long)*(int *)(lVar21 + 0x44);
  }
  if (*(char *)(lVar21 + 0x39) == '\0') {
    uVar24 = (uVar20 / 100) * (long)*(int *)(lVar21 + 0x3c);
    dVar31 = *(double *)(&UNK_00005578 + lVar21);
    dVar32 = dVar31 - *(double *)(&UNK_00005580 + lVar21);
    uVar28 = uVar24;
    if (0.001 <= dVar32) {
      uVar27 = *(ulong *)(&UNK_00005558 + lVar21);
      uVar6 = uVar27 - *(ulong *)(&UNK_00005560 + lVar21);
      uVar28 = 0;
      if (*(ulong *)(&UNK_00005560 + lVar21) <= uVar27) {
        uVar28 = uVar6;
      }
      if (cRam0000000002097a68 == '\0') {
/* if you paid for this, you were scammed */
        uVar28 = uVar6;
      }
      dVar33 = *(double *)(&UNK_00005570 + lVar21);
      uVar1 = *(uint *)(&UNK_00005550 + lVar21);
      lVar17 = lVar21 + ((ulong)uVar1 & 0x1f) * 4;
      iVar11 = *(int *)(&UNK_000054d0 + lVar17);
      iVar26 = (int)(uVar27 - *(long *)(&UNK_00005568 + lVar21) >> 10);
      *(int *)(&UNK_000054d0 + lVar17) = iVar26;
      iVar11 = *(int *)(&UNK_00005554 + lVar21) + (iVar26 - iVar11);
      *(int *)(&UNK_00005554 + lVar21) = iVar11;
      *(uint *)(&UNK_00005550 + lVar21) = uVar1 + 1;
      uVar27 = (uVar24 - (long)(((double)iVar26 * 0.405 + (double)iVar11 * 0.24300000000000002) *
                               1024.0)) - (long)((dVar31 - dVar33) * ((double)uVar28 / dVar32));
      uVar6 = uVar27;
      if ((long)uVar24 <= (long)uVar27) {
        uVar6 = uVar24;
      }
      uVar28 = uVar20;
      if ((long)uVar20 <= (long)uVar27) {
        uVar28 = uVar6;
      }
    }
    *(ulong *)(lVar21 + 0x48) = uVar28;
    *(ulong *)(&UNK_00005568 + lVar21) = uVar24;
    uVar12 = func_0x00861e74();
    *(undefined8 *)(&UNK_00005580 + lVar21) = uVar12;
    *(undefined8 *)(&UNK_00005560 + lVar21) = *(undefined8 *)(lVar21 + 0x50);
/*  watermarked copy - do not remove  */
    pcVar23 = *(code **)(lVar21 + 0x668);
  }
  else {
    uVar20 = uVar20 + uVar25;
    *(ulong *)(lVar21 + 0x48) = uVar20;
    if (uVar20 < uVar28) {
      pcVar23 = *(code **)(lVar21 + 0x668);
    }
    else {
      *(ulong *)(lVar21 + 0x48) = uVar20 - uVar28;
      pcVar23 = *(code **)(lVar21 + 0x668);
    }
  }
  if (pcVar23 == (code *)0x0) {
    return uVar25;
  }
  (*pcVar23)(pbVar16,uVar4);
  return uVar25;
}

