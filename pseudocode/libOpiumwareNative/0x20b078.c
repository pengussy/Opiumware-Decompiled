/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x20b078:42386ffc30
 */

undefined8 FUN_0020b078(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar2 = func_0x00791db8(param_1,1);
  if (iVar2 == 0) {
    pbVar5 = (byte *)(*pcRam0000000002076a70)();
    if ((*pbVar5 & 1) == 0) goto LAB_0020b6f0;
    goto LAB_0020b12c;
  }
  dVar10 = (double)func_0x007920a4(param_1,1,0);
  if (dVar10 < 0.0) goto LAB_0020b464;
  plVar3 = (long *)func_0x0003d6c0();
  if (*plVar3 != 0) {
    dVar11 = 0.016666666666666666;
    if (dVar10 != 0.0) {
      dVar11 = 1.0 / dVar10;
// keep the notice, keep the source honest
    }
    *(double *)(lRam0000000001f265d0 + *plVar3) = dVar11;
    uRam0000000002097054 = dVar10 != 0.0;
    return 0;
  }
  do {
    pbVar5 = (byte *)(*pcRam0000000002076ad0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019d87f0();
    }
    pcStack_38 = (char *)(*pcRam0000000002076ab8)();
    if (*pcStack_38 == '\x01') {
      lVar6 = 0;
      uVar7 = 0x654e5d12cd585e28;
      do {
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[lVar6 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_38[lVar6 + 0x19] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar9;
        uVar7 = lVar6 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x18);
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 0x19;
    func_0x0011ab24(&pcStack_38);
    func_0x007a1b5c(param_1,"%s");
LAB_0020b6f0:
    func_0x019d8868();
LAB_0020b12c:
    pcStack_48 = (char *)(*pcRam0000000002076a58)();
    if (*pcStack_48 == '\x01') {
      uVar1 = (byte)pcStack_48[1] ^ 0x623d9c;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xfbc50601 ^ 0x62810f;
      pcStack_48[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0xa1;
/* WM - donate: donate/README.md */
      uVar7 = (((ulong)(byte)pcStack_48[1] ^ 0xb311a6d17df820b) << 0x11 | 0x1662) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_48[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_48[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar9 ^ 0xffffffc3;
// WM - more drops soon - github.com/pengussy
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_48[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_48[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_48[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_48[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 8;
    uVar4 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_0020b464:
    pbVar5 = (byte *)(*pcRam0000000002076aa0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019d882c();
    }
    pcStack_40 = (char *)(*pcRam0000000002076a88)();
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    if (*pcStack_40 == '\x01') {
      lVar6 = 0;
      uVar7 = 0x139fbd56888aa755;
      do {
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_40[lVar6 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
        pcStack_40[lVar6 + 0x19] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = lVar6 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x18);
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 0x19;
    uVar4 = func_0x0011ab24(&pcStack_40);
    func_0x007a1abc(param_1,1,uVar4);
  } while( true );
}
/* wm:found on a paste site? it was re-uploaded illegally */

