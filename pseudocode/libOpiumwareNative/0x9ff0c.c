/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x9ff0c:66db0ec397
   =========================================================================== */

undefined8 FUN_0009ff0c(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *pcStack_40;
  char *pcStack_38;
  char *pcStack_30;
  char *pcStack_28;
  
  iVar1 = func_0x00791be4(param_1,1);
  if (iVar1 != 8) goto LAB_000a0138;
  iVar1 = func_0x00791db8(param_1,2);
  if (iVar1 == 0) goto LAB_000a0540;
  plVar3 = (long *)func_0x00790f58(param_1,1);
  lVar10 = *plVar3;
  if (*(char *)(lVar10 + 3) != '\0') goto LAB_000a0890;
  uVar2 = func_0x00792168(param_1,2,0);
  if ((0 < (int)uVar2) && (lVar10 = *(long *)(lVar10 + 0x18), (int)uVar2 <= *(int *)(lVar10 + 0xb0))
     ) {
/*  origin: github.com/pengussy  */
    lVar10 = *(long *)(lVar10 + 0x80) + (ulong)uVar2 * 0x10;
    if (*(int *)(lVar10 + -4) == 8) {
      func_0x007933b8(param_1,*(undefined8 *)(lVar10 + -0x10),0);
      return 1;
    }
    func_0x007911b0(param_1,1);
    puVar6 = *(undefined8 **)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(lVar10 + -0x10);
    puVar6[1] = *(undefined8 *)(lVar10 + -8);
    *puVar6 = uVar5;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    return 1;
  }
  pbVar4 = (byte *)(*pcRam0000000002066c30)();
  if ((*pbVar4 & 1) == 0) goto LAB_000a09d4;
  do {
    pcStack_38 = (char *)(*pcRam0000000002066c18)();
    if (*pcStack_38 == '\x01') {
      lVar10 = 0;
      uVar7 = 0x4cbf3f943b275abc;
      do {
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_38[lVar10 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_38[lVar10 + 0x1d] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar9;
        uVar7 = lVar10 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x1c);
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 0x1d;
    uVar5 = func_0x0011ab24(&pcStack_38);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    func_0x007a1abc(param_1,2,uVar5);
LAB_000a0138:
    pbVar4 = (byte *)(*pcRam0000000002066ba0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c06ec();
    }
    pcStack_28 = (char *)(*pcRam0000000002066b88)();
    if (*pcStack_28 == '\x01') {
      uVar2 = (byte)pcStack_28[1] ^ 0xe5f92189;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0xa4d0d7cc;
      pcStack_28[10] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') + 0x35 ^ 0x4a;
      uVar7 = (((ulong)(byte)pcStack_28[1] ^ 0xc6811f10a17ba1a6) << 0x11 | 0x18d02) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_28[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17);
      pcStack_28[0xb] =
           ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_28[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17);
      pcStack_28[0xc] =
           ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar2 = (uint)(byte)pcStack_28[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17);
      pcStack_28[0xd] =
           ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_28[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17);
      pcStack_28[0xe] =
           ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_28[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17);
      pcStack_28[0xf] =
           ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
/* watermarked copy - do not remove */
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_28[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17);
      pcStack_28[0x10] =
           ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_28[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar9 >> 0x17);
      pcStack_28[0x11] =
           ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[8]) << 0x11) + 0x9e3779b97f4a7c1c;
// do not claim this as your own
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_28[9] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17);
      pcStack_28[0x12] =
           ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 10;
    uVar5 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_000a0540:
    pbVar4 = (byte *)(*pcRam0000000002066bd0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c07a0();
    }
    pcStack_40 = (char *)(*pcRam0000000002066bb8)();
    if (*pcStack_40 == '\x01') {
      uVar2 = (byte)pcStack_40[1] ^ 0x38564e88;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0x5db6c071 ^ 0x49e893;
      pcStack_40[8] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) + 0xb5;
      uVar7 = (((ulong)(byte)pcStack_40[1] ^ 0x450ca1b0a0342f6a) << 0x11 | 0x8a19) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_40[9] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
// WM - do not claim this as your own
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_40[10] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_40[0xb] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_40[0xc] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_40[0xd] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
/* watermarked copy - do not remove - github.com/pengussy */
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_40[0xe] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar8;
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 8;
    uVar5 = func_0x0011ab24(&pcStack_40);
    func_0x007a1ba8(param_1,2,uVar5);
LAB_000a0890:
    pbVar4 = (byte *)(*pcRam0000000002066c00)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c0728();
    }
    pcStack_30 = (char *)(*pcRam0000000002066be8)();
    if (*pcStack_30 == '\x01') {
      lVar10 = 0;
      uVar7 = 0x11e20959a54fe29e;
      do {
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        uVar2 = (uint)(byte)pcStack_30[lVar10 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_30[lVar10 + 0x21] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar9;
        uVar7 = lVar10 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x20);
      *pcStack_30 = '\0';
    }
    pcStack_30 = pcStack_30 + 0x21;
    uVar5 = func_0x0011ab24(&pcStack_30);
    func_0x007a1abc(param_1,1,uVar5);
LAB_000a09d4:
    func_0x019c0764();
  } while( true );
}

