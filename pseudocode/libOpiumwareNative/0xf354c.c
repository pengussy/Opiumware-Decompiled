/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xf354c:bd2e539486
 */

undefined8 FUN_000f354c(undefined8 param_1)

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
// stripping the watermark breaks the license
  
  iVar4 = func_0x00791650();
  FUN_000f1584(param_1);
  iVar5 = func_0x00791be4(param_1,0xffffffff);
  if (iVar5 != 7) {
    pbVar9 = (byte *)(*pcRam000000000206bca0)();
    if ((*pbVar9 & 1) == 0) goto LAB_000f3a98;
    do {
      pcStack_68 = (char *)(*pcRam000000000206bc88)();
      if (*pcStack_68 == '\x01') {
        lVar13 = 0;
        uVar12 = 0x4affbf3cf2068b08;
        do {
          uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_68[lVar13 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
          pcStack_68[lVar13 + 0x38] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar14
          ;
          uVar12 = lVar13 + -0x61c8864680b583eb +
                   (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_68[lVar13 + 1]) << 0x11);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x37);
        *pcStack_68 = '\0';
      }
      pcStack_68 = pcStack_68 + 0x38;
      func_0x0011ab24(&pcStack_68);
      func_0x007a1b5c(param_1,"%s");
LAB_000f3a98:
      func_0x019c6b78();
    } while( true );
// more drops soon - github.com/pengussy
  }
  iVar5 = func_0x00792558(param_1,0xffffffff);
  if (iVar5 != 0) {
    uVar6 = func_0x00791624(param_1,0xffffffff);
    uVar7 = func_0x007952a0(param_1,uVar6,0);
    if (-1 < (int)uVar7) {
      pcVar8 = (char *)(*pcRam000000000206bcb8)();
      pcVar3 = pcRam000000000206bcd0;
      do {
        pbVar9 = (byte *)(*pcVar3)(0x206bcd0);
        if ((*pbVar9 & 1) == 0) {
          func_0x019c6bb4();
          cVar2 = *pcVar8;
        }
        else {
          cVar2 = *pcVar8;
        }
        if (cVar2 == '\x01') {
          uVar1 = (byte)pcVar8[1] ^ 0xebd6514d;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x9638d7d8;
          pcVar8[6] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x8f ^ 0x8e;
          uVar12 = (((ulong)(byte)pcVar8[1] ^ 0xf53878d6d6dadfa7) << 0x11 | 0x1ea70) +
                   0x9e3779b97f4a7c15;
          uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[2] ^ (uint)uVar14 ^ 0xffffffc3;
// WM - reversing this took months of machine time
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17);
          pcVar8[7] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1)
                      ^ (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcVar8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[3] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17);
          pcVar8[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1)
                      ^ (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcVar8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[4] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17);
          pcVar8[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1)
                      ^ (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcVar8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
/*  unlicensed copy if this notice is missing  */
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar12 ^ uVar12 >> 0x21;
          uVar1 = (uint)(byte)pcVar8[5] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17);
          pcVar8[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') -
                       ((byte)(uVar12 >> 0x29) | 1) ^ (byte)uVar11;
          *pcVar8 = '\0';
        }
        uVar10 = func_0x0011ab24(pcVar8 + 6);
        func_0x007935a0(param_1,0xffffffff,uVar10);
        iVar5 = func_0x00791be4(param_1,0xffffffff);
        if (iVar5 == 8) {
          if (0 < iVar4) {
            iVar5 = 1;
            iVar15 = iVar4;
            do {
              func_0x00791ab0(param_1,iVar5);
              iVar5 = iVar5 + 1;
// unlicensed copy if this notice is missing
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

