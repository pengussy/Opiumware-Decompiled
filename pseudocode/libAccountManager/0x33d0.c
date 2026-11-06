/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x33d0:f36656d901
 */

bool FUN_000033d0(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  char cVar9;
  ulong uVar10;
  byte bVar11;
  bool bVar12;
  
  pcVar2 = (char *)(*DAT_00006260)();
  if (*pcVar2 == '\0') {
    FUN_00004550();
  }
  pcVar2 = (char *)(*DAT_00006248)();
  if (*pcVar2 == '\x01') {
    uVar5 = 0x9f5254feda4e1c3;
    lVar6 = 0x11;
// WM - keep the notice, keep the source honest
    lVar7 = 0;
    do {
      uVar4 = (uVar5 >> 0x21 ^ uVar5) * -0xae502812aa7333;
      uVar10 = (uVar4 >> 0x21 ^ uVar4) * -0x3b314601e57a13ad;
      uVar4 = uVar10 >> 0x21 ^ uVar10;
      bVar8 = (byte)uVar4;
      bVar11 = pcVar2[lVar6 + -0x10] ^ bVar8 ^ 0xc3;
      bVar11 = (bVar11 >> 1 | bVar11 << 7) - (((byte)(uVar10 >> 0x29) | 1) + (char)(uVar4 >> 0x17));
      pcVar2[lVar6] = (bVar11 * '\b' | bVar11 >> 5) ^ bVar8;
      uVar5 = ((uVar5 ^ (byte)pcVar2[lVar6 + -0x10]) << 0x11 | uVar5 >> 0x2f) + lVar7 +
              0x9e3779b97f4a7c15;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x21);
    *pcVar2 = '\0';
  }
  uVar3 = FUN_00003720(pcVar2 + 0x11);
  lVar6 = thunk_FUN_000047e4(uVar3);
  if (lVar6 == 0) {
    bVar12 = false;
  }
  else {
    pcVar2 = (char *)(*DAT_00006290)();
    if (*pcVar2 == '\0') {
/* watermarked copy - do not remove */
      FUN_00004590();
    }
    pcVar2 = (char *)(*DAT_00006278)();
    if (*pcVar2 == '\x01') {
      bVar8 = pcVar2[1] ^ 0x7f;
      cVar9 = (bVar8 << 2 | bVar8 >> 6) + 0x75;
      pcVar2[3] = (cVar9 * '\x02' | cVar9 < '\0') + 0x2fU ^ 0xbc;
      uVar5 = (((ulong)(byte)pcVar2[1] ^ 0x656e5f3dc1e34b31) << 0x11 | 0xcadc) + 0x9e3779b97f4a7c15;
      uVar5 = (uVar5 >> 0x21 ^ uVar5) * -0xae502812aa7333;
      uVar5 = (uVar5 >> 0x21 ^ uVar5) * -0x3b314601e57a13ad;
      uVar4 = uVar5 >> 0x21 ^ uVar5;
      bVar8 = (byte)uVar4;
      bVar11 = pcVar2[2] ^ bVar8 ^ 0xc3;
      cVar9 = (bVar11 << 2 | bVar11 >> 6) - (char)(uVar4 >> 0x17);
      pcVar2[4] = (cVar9 * '\x02' | cVar9 < '\0') - ((byte)(uVar5 >> 0x29) | 1) ^ bVar8;
      *pcVar2 = '\0';
    }
    uVar3 = FUN_00003720(pcVar2 + 3);
    iVar1 = thunk_FUN_000048c8(lVar6,uVar3);
    bVar12 = iVar1 == 0;
  }
  return bVar12;
}
