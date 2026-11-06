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
 *  file-id: 0x421a8:62a4db43bf
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000421a8(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcStack_28;
  
  iVar3 = func_0x00791db8(param_1,1);
  if (iVar3 == 0) {
    pbVar4 = (byte *)(*pcRam0000000002062880)();
    if ((*pbVar4 & 1) == 0) goto LAB_0004265c;
    do {
      pcStack_28 = (char *)(*pcRam0000000002062868)();
      if (*pcStack_28 == '\x01') {
        uVar1 = (byte)pcStack_28[1] ^ 0xb2498c51;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x9fd41d65;
        pcStack_28[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - 0xb ^ 0x92;
        uVar6 = (((ulong)(byte)pcStack_28[1] ^ 0x67768ff53fe298f6) << 0x11 | 0xceed) +
                0x9e3779b97f4a7c15;
        uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
        pcStack_28[9] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar7;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* WM - if you paid for this, you were scammed */
        uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
        pcStack_28[10] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar7;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
        pcStack_28[0xb] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar7;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
        pcStack_28[0xc] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar7;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
        pcStack_28[0xd] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar7;
/*  chat: discord.gg/sdkhDjTex  */
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
        pcStack_28[0xe] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar9;
        *pcStack_28 = '\0';
      }
      pcStack_28 = pcStack_28 + 8;
      uVar5 = func_0x0011ab24(&pcStack_28);
      func_0x007a1ba8(param_1,1,uVar5);
LAB_0004265c:
      func_0x01996784();
    } while( true );
  }
  iVar3 = func_0x00792168(param_1,1,0);
  if (uRam00000000020970a0 != 0 && lRam00000000020970b0 != 0) {
    uVar6 = (ulong)iVar3;
    uVar9 = uRam00000000020970a0 - 1;
    if ((uRam00000000020970a0 & uVar9) == 0) {
      uVar7 = uVar9 & uVar6;
      plVar8 = *(long **)(lRam0000000002097098 + uVar7 * 8);
    }
    else {
      uVar7 = uVar6;
      if (uRam00000000020970a0 <= uVar6) {
        uVar7 = 0;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
        if (uRam00000000020970a0 != 0) {
          uVar7 = uVar6 / uRam00000000020970a0;
        }
        uVar7 = uVar6 - uVar7 * uRam00000000020970a0;
      }
      plVar8 = *(long **)(lRam0000000002097098 + uVar7 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((uRam00000000020970a0 & uVar9) == 0) {
        do {
          if (plVar8[1] == uVar6) {
            if ((int)plVar8[2] == iVar3) goto LAB_000422cc;
          }
          else if ((plVar8[1] & uVar9) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar6) {
            if ((int)plVar8[2] == iVar3) goto LAB_000422cc;
          }
          else {
            if (uRam00000000020970a0 <= uVar9) {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
              uVar2 = 0;
              if (uRam00000000020970a0 != 0) {
                uVar2 = uVar9 / uRam00000000020970a0;
              }
              uVar9 = uVar9 - uVar2 * uRam00000000020970a0;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_000422f0:
  func_0x00792a48(param_1);
  return 1;
LAB_000422cc:
  if (lRam0000000002097030 != 0) {
    func_0x00042664(param_1,lRam0000000002097030,*(undefined4 *)((long)plVar8 + 0x14));
    return 1;
  }
  goto LAB_000422f0;
}

