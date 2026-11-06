/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xf3aa0:071677168e
   =========================================================================== */

undefined8 FUN_000f3aa0(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  char *pcStack_68;
  
  iVar4 = func_0x00791650();
  FUN_000f1584(param_1);
  iVar5 = func_0x00791be4(param_1,0xffffffff);
  if (iVar5 != 7) {
    pbVar9 = (byte *)(*pcRam000000000206bd00)();
    if ((*pbVar9 & 1) == 0) goto LAB_000f4048;
    do {
      pcStack_68 = (char *)(*pcRam000000000206bce8)();
      if (*pcStack_68 == '\x01') {
        lVar13 = 0;
        uVar12 = 0x7e752f7076a6b249;
        do {
/* donate: donate/README.md */
          uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_68[lVar13 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17);
          pcStack_68[lVar13 + 0x25] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar12 = lVar13 + -0x61c8864680b583eb +
                   (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_68[lVar13 + 1]) << 0x11);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x24);
        *pcStack_68 = '\0';
      }
      pcStack_68 = pcStack_68 + 0x25;
      func_0x0011ab24(&pcStack_68);
      func_0x007a1b5c(param_1,"%s");
LAB_000f4048:
      func_0x019c6bf0();
    } while( true );
  }
  iVar5 = func_0x00792558(param_1,0xffffffff);
  if (iVar5 != 0) {
    uVar6 = func_0x00791624(param_1,0xffffffff);
    uVar7 = func_0x007952a0(param_1,uVar6,0);
    if (-1 < (int)uVar7) {
      pcVar8 = (char *)(*pcRam000000000206bd18)();
      pcVar3 = pcRam000000000206bd30;
      do {
        pbVar9 = (byte *)(*pcVar3)(0x206bd30);
        if ((*pbVar9 & 1) == 0) {
          func_0x019c6c2c();
          cVar2 = *pcVar8;
        }
/* origin: github.com/pengussy */
        else {
          cVar2 = *pcVar8;
        }
        if (cVar2 == '\x01') {
          uVar1 = (byte)pcVar8[1] ^ 0x231ff83f;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xce719847;
          pcVar8[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0x9d ^ 0xfc;
          uVar12 = (((ulong)(byte)pcVar8[1] ^ 0x49b1e13b0251eddf) << 0x11 | 0x9363) +
                   0x9e3779b97f4a7c15;
          uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[2] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar14 >> 0x17);
          pcVar8[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
                      (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcVar8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[3] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar14 >> 0x17);
          pcVar8[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
                      (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcVar8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[4] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar14 >> 0x17);
          pcVar8[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1)
                       ^ (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcVar8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[5] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar14 >> 0x17);
          pcVar8[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1)
                        ^ (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcVar8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar12 ^ uVar12 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[6] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
          pcVar8[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar12 >> 0x29) | 1)
                        ^ (byte)uVar11;
          *pcVar8 = '\0';
        }
        uVar10 = func_0x0011ab24(pcVar8 + 7);
        func_0x007935a0(param_1,0xffffffff,uVar10);
        iVar5 = func_0x00791be4(param_1,0xffffffff);
        if (iVar5 == 8) {
          if (0 < iVar4) {
            iVar5 = 1;
            iVar15 = iVar4;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
            do {
              func_0x00791ab0(param_1,iVar5);
              iVar5 = iVar5 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          iVar5 = func_0x00794a14(param_1,iVar4,0,0);
          if (iVar5 != 0) {
            func_0x00791660(param_1,0xfffffffe);
          }
          uVar10 = 0xfffffffd;
        }
        else {
          uVar10 = 0xfffffffc;
        }
        func_0x00791660(param_1,uVar10);
        uVar7 = func_0x007952a0(param_1,uVar6,uVar7);
      } while (-1 < (int)uVar7);
    }
  }
  return 0;
}

