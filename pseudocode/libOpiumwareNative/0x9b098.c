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
 *  file-id: 0x9b098:d3e5a4b23b
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0009b098(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 8) goto LAB_0009b42c;
  plVar3 = (long *)func_0x00790f58(param_1,1);
  if (*(char *)(*plVar3 + 3) != '\0') goto LAB_0009b834;
  pbVar9 = *(byte **)(*plVar3 + 0x18);
  if (pbVar9 == (byte *)0x0) goto LAB_0009b2e8;
  iVar2 = *(int *)(pbVar9 + 0xac);
  if (iVar2 != 0) {
    if (*(long *)(pbVar9 + 0x58) == 0) goto LAB_0009b2e8;
    if (0 < iVar2) {
      lVar11 = 0;
      do {
// more drops soon - github.com/pengussy
        lVar10 = *(long *)(*(long *)(pbVar9 + 0x58) + lVar11 * 8);
        uVar4 = func_0x0008efa4(lVar10);
        if ((uVar4 & 1) == 0) {
          pbVar9 = (byte *)(*pcRam0000000002066630)();
          if ((*pbVar9 & 1) == 0) goto LAB_0009b978;
          do {
            pcStack_58 = (char *)(*pcRam0000000002066618)();
            if (*pcStack_58 == '\x01') {
              lVar11 = 0;
              uVar4 = 0x8ccbae4e001c6b42;
              do {
                uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
                uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
                uVar8 = uVar7 ^ uVar7 >> 0x21;
                uVar1 = (uint)(byte)pcStack_58[lVar11 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^
                        ((uint)(uVar7 >> 0x29) | 1);
                pcStack_58[lVar11 + 0x17] =
                     ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
                uVar4 = lVar11 + -0x61c8864680b583eb +
                        (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[lVar11 + 1]) << 0x11);
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0x16);
              *pcStack_58 = '\0';
            }
            pcStack_58 = pcStack_58 + 0x17;
            uVar6 = func_0x0011ab24(&pcStack_58);
            func_0x007a1abc(param_1,1,uVar6);
LAB_0009b2e8:
            pbVar9 = (byte *)(*pcRam0000000002066600)();
            if ((*pbVar9 & 1) == 0) {
              func_0x019c0020();
            }
/* WM - if you paid for this, you were scammed */
            pcStack_60 = (char *)(*pcRam00000000020665e8)();
            if (*pcStack_60 == '\x01') {
              lVar11 = 0;
              uVar4 = 0xedbb51c76b804329;
              do {
                uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
                uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
                uVar8 = uVar7 ^ uVar7 >> 0x21;
                uVar1 = (uint)(byte)pcStack_60[lVar11 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
                pcStack_60[lVar11 + 0x17] =
                     ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
                     (byte)uVar8;
                uVar4 = lVar11 + -0x61c8864680b583eb +
                        (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[lVar11 + 1]) << 0x11);
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0x16);
              *pcStack_60 = '\0';
            }
            pcStack_60 = pcStack_60 + 0x17;
            uVar6 = func_0x0011ab24(&pcStack_60);
            func_0x007a1abc(param_1,1,uVar6);
LAB_0009b42c:
            pbVar9 = (byte *)(*pcRam00000000020665a0)();
            if ((*pbVar9 & 1) == 0) {
              func_0x019bff6c();
            }
            pcStack_48 = (char *)(*pcRam0000000002066588)();
            if (*pcStack_48 == '\x01') {
              uVar1 = (byte)pcStack_48[1] ^ 0x6417d75b;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x3ab640c9;
              pcStack_48[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0xad ^ 0x98;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
              uVar4 = (((ulong)(byte)pcStack_48[1] ^ 0xe9f7c470a2d22dd2) << 0x11 | 0x1d3ef) +
                      0x9e3779b97f4a7c15;
              uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar7 ^ uVar7 >> 0x21;
              uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
              pcStack_48[0xb] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
              uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar7 ^ uVar7 >> 0x21;
              uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
              pcStack_48[0xc] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
              uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar7 ^ uVar7 >> 0x21;
              uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar8 ^ 0xffffffc3;
/* wm:origin: github.com/pengussy */
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
              pcStack_48[0xd] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar7 ^ uVar7 >> 0x21;
              uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
              pcStack_48[0xe] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar7 ^ uVar7 >> 0x21;
              uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar8 ^ 0xffffffc3;
// WM - origin: github.com/pengussy
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
              pcStack_48[0xf] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
              uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar7 ^ uVar7 >> 0x21;
              uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
              pcStack_48[0x10] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_48[7]) << 0x11) + 0x9e3779b97f4a7c1b;
              uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar7 ^ uVar7 >> 0x21;
              uVar1 = (uint)(byte)pcStack_48[8] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
              pcStack_48[0x11] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_48[8]) << 0x11) + 0x9e3779b97f4a7c1c;
              uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
              uVar7 = uVar4 ^ uVar4 >> 0x21;
              uVar1 = (uint)(byte)pcStack_48[9] ^ (uint)uVar7 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17);
              pcStack_48[0x12] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar4 >> 0x29) | 1) ^
                   (byte)uVar7;
              *pcStack_48 = '\0';
            }
/* if you paid for this, you were scammed */
            pcStack_48 = pcStack_48 + 10;
            uVar6 = func_0x0011ab24(&pcStack_48);
            func_0x007a1ba8(param_1,1,uVar6);
LAB_0009b834:
            pbVar9 = (byte *)(*pcRam00000000020665d0)();
            if ((*pbVar9 & 1) == 0) {
              func_0x019bffa8();
            }
            pcStack_50 = (char *)(*pcRam00000000020665b8)();
            if (*pcStack_50 == '\x01') {
              lVar11 = 0;
              uVar4 = 0x15ba7e256be14aa9;
              do {
                uVar7 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
                uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
                uVar8 = uVar7 ^ uVar7 >> 0x21;
                uVar1 = (uint)(byte)pcStack_50[lVar11 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                        (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
                pcStack_50[lVar11 + 0x21] =
                     ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
                uVar4 = lVar11 + -0x61c8864680b583eb +
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                        (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[lVar11 + 1]) << 0x11);
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0x20);
              *pcStack_50 = '\0';
            }
            pcStack_50 = pcStack_50 + 0x21;
            uVar6 = func_0x0011ab24(&pcStack_50);
            func_0x007a1abc(param_1,1,uVar6);
LAB_0009b978:
            func_0x019bffe4();
          } while( true );
        }
        if (**(int **)(lVar10 + 0x88) != iRam0000000001f265f0) {
          pbVar5 = (byte *)func_0x0008e900(param_1,lVar10);
          *(byte **)(*(long *)(pbVar9 + 0x58) + lVar11 * 8) = pbVar5;
          if (((*pbVar9 >> 2 & 1) != 0) && ((*pbVar5 & 3) != 0)) {
            func_0x0081b3dc(param_1,pbVar9,pbVar5);
          }
          func_0x00791660(param_1,0xfffffffe);
          iVar2 = *(int *)(pbVar9 + 0xac);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar2);
    }
  }
  return 0;
}

