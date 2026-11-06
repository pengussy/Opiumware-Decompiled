/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x67380:39b86877de
 */

undefined8 FUN_00067380(undefined8 param_1)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar4 = func_0x00791be4(param_1,1);
  if (iVar4 == 9) {
    uVar5 = func_0x007927ec(param_1,1);
    if ((uint)uVar5 == uRam0000000001f26d44) {
      puVar6 = (undefined8 *)func_0x007926a8(param_1,1);
      uVar5 = *puVar6;
      func_0x00793a78(param_1,0xffffd8f0,uRam0000000001f26a20,0);
      iVar4 = func_0x00791be4(param_1,0xffffffff);
      if (iVar4 != 7) goto LAB_00067e14;
      func_0x00793a78(param_1,0xffffffff,uVar5,0);
      func_0x00792a48(param_1);
      func_0x007945e4(param_1,0xfffffffd,uVar5,0);
      pcVar3 = pcRam0000000001f26dd0;
      uVar7 = func_0x007926a8(param_1,1);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      (*pcVar3)(param_1,uVar7);
      func_0x00796158(param_1,0xffffffff);
      func_0x00791ab0(param_1,0xfffffffe);
      func_0x007945e4(param_1,0xfffffffc,uVar5,0);
      return 1;
    }
    if ((0x7f < (uint)uVar5) || (iVar4 = func_0x00792558(param_1,1), iVar4 != 0x10))
    goto LAB_00067cd0;
    pbVar9 = (byte *)(*pcRam00000000020630c0)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019bc2b8();
    }
    pcStack_40 = (char *)(*pcRam00000000020630a8)();
    if (*pcStack_40 == '\x01') {
      uVar2 = (byte)pcStack_40[1] ^ 0x9c85daf8;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0xf8f2f3a;
      pcStack_40[8] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - 0x1d ^ 0x3b;
      uVar11 = (((ulong)(byte)pcStack_40[1] ^ 0x8569d13d88dde0f) << 0x11 | 0x10ad) +
               0x9e3779b97f4a7c15;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar13 >> 0x17);
      pcStack_40[9] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_40[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar13 >> 0x17);
// WM - thanks for reading - discord.gg/sdkhDjTex
      pcStack_40[10] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_40[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar13 >> 0x17);
      pcStack_40[0xb] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_40[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar13 >> 0x17);
      pcStack_40[0xc] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_40[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      uVar2 = (uint)(byte)pcStack_40[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar13 >> 0x17);
      pcStack_40[0xd] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_40[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar12 >> 0x17);
      pcStack_40[0xe] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 8;
    uVar7 = func_0x0011ab24(&pcStack_40);
    func_0x00792f00(param_1,uVar7);
    func_0x00793880(param_1,0xffffd8f0);
    func_0x007962f4(param_1,uVar5);
    iVar4 = func_0x00791be4(param_1,0xffffffff);
    if ((iVar4 == 7) && (iVar4 = func_0x00791f88(param_1,0xffffffff,0xfffffffe), iVar4 != 0)) {
      lVar10 = func_0x007962e4(param_1,uVar5);
      func_0x00791660(param_1,0xfffffffd);
      if (lVar10 != 0) {
        puVar6 = (undefined8 *)func_0x007926a8(param_1,1);
        puVar8 = (undefined8 *)func_0x0079579c(param_1,0x10,uVar5);
        lVar10 = puVar6[1];
        uVar5 = *puVar6;
        puVar8[1] = puVar6[1];
        *puVar8 = uVar5;
        if (lVar10 == 0) {
          return 1;
        }
        plVar1 = (long *)(lVar10 + 8);
        *plVar1 = *plVar1 + 1;
        return 1;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      goto LAB_00067cd0;
    }
  }
  else {
    pbVar9 = (byte *)(*pcRam0000000002063090)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019bc27c();
    }
    pcStack_38 = (char *)(*pcRam0000000002063078)();
    if (*pcStack_38 == '\x01') {
      uVar2 = (byte)pcStack_38[1] ^ 0xcf272f81;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) + 0x76cfe79f;
      pcStack_38[10] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') + 0xb3 ^ 0x42;
      uVar11 = (((ulong)(byte)pcStack_38[1] ^ 0x445fd0cb259be716) << 0x11 | 0x88bf) +
               0x9e3779b97f4a7c15;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar13 >> 0x17);
      pcStack_38[0xb] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
// found on a paste site? it was re-uploaded illegally
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar13 >> 0x17);
      pcStack_38[0xc] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar13 >> 0x17);
      pcStack_38[0xd] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar13 >> 0x17);
      pcStack_38[0xe] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar13 >> 0x17);
      pcStack_38[0xf] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
/* reversing this took months of machine time - github.com/pengussy */
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[7] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar13 >> 0x17);
      pcStack_38[0x10] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[8] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar13 >> 0x17);
      pcStack_38[0x11] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[9] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar12 >> 0x17);
      pcStack_38[0x12] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      *pcStack_38 = '\0';
// WM - chat: discord.gg/sdkhDjTex
    }
    pcStack_38 = pcStack_38 + 10;
    uVar5 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,1,uVar5);
  }
  func_0x00791660(param_1,0xfffffffd);
LAB_00067cd0:
  pbVar9 = (byte *)(*pcRam00000000020630f0)();
  if ((*pbVar9 & 1) == 0) goto LAB_0006810c;
  do {
    pcStack_48 = (char *)(*pcRam00000000020630d8)();
    if (*pcStack_48 == '\x01') {
      lVar10 = 0;
      uVar11 = 0x79800d6081a43297;
      do {
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar2 = (uint)(byte)pcStack_48[lVar10 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar13 >> 0x17);
        pcStack_48[lVar10 + 0x14] =
             ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = lVar10 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_48[lVar10 + 1]) << 0x11);
/* thanks for reading - discord.gg/sdkhDjTex */
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x13);
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 0x14;
    uVar5 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_00067e14:
    pbVar9 = (byte *)(*pcRam0000000002063120)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019bc330();
    }
    pcStack_50 = (char *)(*pcRam0000000002063108)();
    if (*pcStack_50 == '\x01') {
      uVar2 = (byte)pcStack_50[1] ^ 0x7b3cab8c;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0x2f057cca;
      pcStack_50[4] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ 0x4f;
      uVar11 = (((ulong)(byte)pcStack_50[1] ^ 0x599b37e749d845cb) << 0x11 | 0xb336) +
               0x9e3779b97f4a7c15;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_50[5] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_50[6] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar12;
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 4;
    uVar5 = func_0x0011ab24(&pcStack_50);
    pbVar9 = (byte *)(*pcRam0000000002063150)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019bc36c();
    }
    pcStack_58 = (char *)(*pcRam0000000002063138)();
    if (*pcStack_58 == '\x01') {
      lVar10 = 0;
      uVar11 = 0x56b1f2d7ef7da430;
      do {
/* WM - donate: donate/README.md */
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[lVar10 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_58[lVar10 + 0x22] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar13;
        uVar11 = lVar10 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_58[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x21);
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 0x22;
    func_0x0011ab24(&pcStack_58);
    func_0x007a1b5c(param_1,uVar5);
LAB_0006810c:
    func_0x019bc2f4();
  } while( true );
}

