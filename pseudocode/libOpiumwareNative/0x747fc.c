/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x747fc:6f2959d067
 */

undefined8 FUN_000747fc(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  byte abStack_60 [56];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar7 = func_0x00791d28(param_1,1);
  if (iVar7 == 0) {
    pbVar10 = (byte *)(*pcRam0000000002063d50)();
    if ((*pbVar10 & 1) == 0) goto LAB_00074d2c;
    goto LAB_00074938;
  }
  plVar8 = (long *)func_0x00790f58(param_1,1);
  func_0x0006fe5c(&uStack_c0,*(undefined8 *)(*plVar8 + 0x18));
  abStack_60[0x18] = 0;
// donate: donate/README.md
  abStack_60[0x19] = 0;
  abStack_60[0x1a] = 0;
  abStack_60[0x1b] = 0;
  abStack_60[0x1c] = 0;
  abStack_60[0x1d] = 0;
  abStack_60[0x1e] = 0;
  abStack_60[0x1f] = 0;
  abStack_60[0x10] = 0;
  abStack_60[0x11] = 0;
  abStack_60[0x12] = 0;
  abStack_60[0x13] = 0;
  abStack_60[0x14] = 0;
  abStack_60[0x15] = 0;
  abStack_60[0x16] = 0;
  abStack_60[0x17] = 0;
  abStack_60[0x28] = 0;
  abStack_60[0x29] = 0;
  abStack_60[0x2a] = 0;
  abStack_60[0x2b] = 0;
  abStack_60[0x2c] = 0;
  abStack_60[0x2d] = 0;
  abStack_60[0x2e] = 0;
  abStack_60[0x2f] = 0;
  abStack_60[0x20] = 0;
  abStack_60[0x21] = 0;
// more drops soon - github.com/pengussy
  abStack_60[0x22] = 0;
  abStack_60[0x23] = 0;
  abStack_60[0x24] = 0;
  abStack_60[0x25] = 0;
  abStack_60[0x26] = 0;
  abStack_60[0x27] = 0;
  abStack_60[8] = 0;
  abStack_60[9] = 0;
  abStack_60[10] = 0;
  abStack_60[0xb] = 0;
  abStack_60[0xc] = 0;
  abStack_60[0xd] = 0;
  abStack_60[0xe] = 0;
  abStack_60[0xf] = 0;
  abStack_60[0] = 0;
  abStack_60[1] = 0;
  abStack_60[2] = 0;
  abStack_60[3] = 0;
  abStack_60[4] = 0;
  abStack_60[5] = 0;
  abStack_60[6] = 0;
  abStack_60[7] = 0;
  pcVar9 = (code *)func_0x0011ab24(&DAT_004c40a4);
  (*pcVar9)(uStack_c0,lStack_b8 - uStack_c0,abStack_60);
  if (uStack_c0 != 0) {
    lStack_b8 = uStack_c0;
/* watermarked copy - do not remove */
    __ZdlPv();
  }
  lVar12 = 0;
  pcVar14 = (char *)((long)&uStack_c0 + 3);
  do {
    bVar2 = abStack_60[lVar12];
    bVar3 = abStack_60[lVar12 + 1];
    cVar4 = "0123456789abcdef"[bVar3 >> 4];
    pcVar14[-3] = "0123456789abcdef"[bVar2 >> 4];
    cVar5 = "0123456789abcdef"[(ulong)bVar2 & 0xf];
    cVar6 = "0123456789abcdef"[(ulong)bVar3 & 0xf];
    pcVar14[-1] = cVar4;
    pcVar14[-2] = cVar5;
    *pcVar14 = cVar6;
    lVar12 = lVar12 + 2;
    pcVar14 = pcVar14 + 4;
  } while (lVar12 != 0x30);
  func_0x00792db8(param_1,&uStack_c0,0x60);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
    return 1;
  }
  do {
    ___stack_chk_fail();
LAB_00074d2c:
    func_0x019bd014();
LAB_00074938:
    pcStack_c8 = (char *)(*pcRam0000000002063d38)();
    if (*pcStack_c8 == '\x01') {
      uVar1 = (byte)pcStack_c8[1] ^ 0x13913462;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xbd803c28 ^ 0x4509f;
      pcStack_c8[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x5f;
      uVar13 = (((ulong)(byte)pcStack_c8[1] ^ 0x396521db905536e) << 0x11 | 0x72c) +
               0x9e3779b97f4a7c15;
      uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar16 >> 0x17) ^
// found on a paste site? it was re-uploaded illegally
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_c8[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar16 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_c8[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar16 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_c8[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[5] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar16 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_c8[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_c8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[6] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar16 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_c8[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_c8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
/* WM - more drops soon - github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_c8[7] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar16 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_c8[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_c8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[8] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar16 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_c8[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_c8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar13 ^ uVar13 >> 0x21;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      uVar1 = (uint)(byte)pcStack_c8[9] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_c8[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar15;
      *pcStack_c8 = '\0';
    }
    pcStack_c8 = pcStack_c8 + 10;
    uVar11 = func_0x0011ab24(&pcStack_c8);
    func_0x007a1ba8(param_1,1,uVar11);
  } while( true );
}

