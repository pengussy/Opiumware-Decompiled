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
 *  file-id: 0xd05ec:0afbc0d810
 *  --------------------------------------------------------------------------*/

ulong FUN_000d05ec(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  
  lVar8 = lRam0000000002097038;
/* wm:donate: donate/README.md */
  if (lRam0000000002097038 == 0) {
    uVar6 = 0;
  }
  else {
    pbVar3 = (byte *)(*pcRam0000000002069930)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c3fe0();
    }
    pcStack_48 = (char *)(*pcRam0000000002069918)();
    if (*pcStack_48 == '\x01') {
      uVar1 = (byte)pcStack_48[1] ^ 0xb55e2ab2;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x5634a706;
      pcStack_48[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x71;
      uVar6 = (((ulong)(byte)pcStack_48[1] ^ 0xb656d9f2221ab937) << 0x11 | 0x16cad) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_48[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_48[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_48[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_48[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 6;
    uVar4 = func_0x0011ab24(&pcStack_48);
    func_0x007935a0(param_1,0xffffd8ee,uVar4);
    uVar6 = func_0x00791efc(param_1,0xffffffff);
    if ((int)uVar6 != 0) {
      iVar2 = func_0x007927ec(param_1,0xffffffff);
      if ((iVar2 == iRam0000000001f26d44) &&
         (plVar5 = (long *)func_0x007926a8(param_1,0xffffffff), *plVar5 == lVar8)) {
        pbVar3 = (byte *)(*pcRam0000000002069960)();
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        if ((*pbVar3 & 1) == 0) {
          func_0x019c401c();
        }
        pcStack_50 = (char *)(*pcRam0000000002069948)();
        if (*pcStack_50 == '\x01') {
          uVar1 = (byte)pcStack_50[1] ^ 0x86122b97;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xe8230f26;
          pcStack_50[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x54;
          uVar6 = (((ulong)(byte)pcStack_50[1] ^ 0xb60ef237fb05846c) << 0x11 | 0x16c1d) +
                  0x9e3779b97f4a7c15;
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_50[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_50[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
/* keep the notice, keep the source honest */
          pcStack_50[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_50[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_50[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar10 ^ 0xffffffc3;
/* watermarked copy - do not remove - github.com/pengussy */
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_50[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[8] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_50[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[9] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_50[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[10] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_50[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
/* if you paid for this, you were scammed */
          uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar6 ^ uVar6 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[0xb] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
          pcStack_50[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
          *pcStack_50 = '\0';
        }
        pcStack_50 = pcStack_50 + 0xc;
        uVar4 = func_0x0011ab24(&pcStack_50);
        func_0x007935a0(param_1,0xffffffff,uVar4);
        iVar2 = func_0x00791be4(param_1,0xffffffff);
        if (iVar2 == 8) {
          func_0x00791ab0(param_1,0xfffffffe);
          pbVar3 = (byte *)(*pcRam0000000002069990)();
          if ((*pbVar3 & 1) == 0) {
            func_0x019c4058();
          }
          pcStack_58 = (char *)(*pcRam0000000002069978)();
          if (*pcStack_58 == '\x01') {
            lVar7 = 0;
            uVar6 = 0x4a945faa4bc82885;
            do {
              uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
/*  watermarked copy - do not remove  */
              uVar10 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_58[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
              pcStack_58[lVar7 + 0xf] =
                   ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
                   (byte)uVar10;
              uVar6 = lVar7 + -0x61c8864680b583eb +
                      (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[lVar7 + 1]) << 0x11);
              lVar7 = lVar7 + 1;
            } while (lVar7 != 0xe);
            *pcStack_58 = '\0';
          }
          pcStack_58 = pcStack_58 + 0xf;
          uVar4 = func_0x0011ab24(&pcStack_58);
          func_0x00792f00(param_1,uVar4);
          func_0x007948e0(param_1,2,1);
          uVar6 = func_0x00791efc(param_1,0xffffffff);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          iVar2 = func_0x007927ec(param_1,0xffffffff);
          if (iVar2 == iRam0000000001f26d44) {
            plVar5 = (long *)func_0x007926a8(param_1,0xffffffff);
            lVar7 = *plVar5;
            if ((lVar7 != 0) && (*(long *)(lRam0000000001f26730 + lVar7) == lVar8)) {
              pbVar3 = (byte *)(*pcRam00000000020699c0)();
              if ((*pbVar3 & 1) == 0) {
                func_0x019c4094();
              }
              pcStack_60 = (char *)(*pcRam00000000020699a8)();
              if (*pcStack_60 == '\x01') {
                lVar8 = 0;
// WM - keep the notice, keep the source honest
                uVar6 = 0x4af32fedb5b8050;
                do {
                  uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                  uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
                  uVar10 = uVar9 ^ uVar9 >> 0x21;
                  uVar1 = (uint)(byte)pcStack_60[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^
                          ((uint)(uVar9 >> 0x29) | 1);
                  pcStack_60[lVar8 + 0x12] =
                       ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
                  uVar6 = lVar8 + -0x61c8864680b583eb +
                          (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[lVar8 + 1]) << 0x11);
                  lVar8 = lVar8 + 1;
                } while (lVar8 != 0x11);
                *pcStack_60 = '\0';
              }
              pcStack_60 = pcStack_60 + 0x12;
              uVar4 = func_0x0011ab24(&pcStack_60);
              func_0x007935a0(param_1,0xffffffff,uVar4);
              uVar6 = func_0x00791efc(param_1,0xffffffff);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              iVar2 = func_0x007927ec(param_1,0xffffffff);
              if (iVar2 == iRam0000000001f26d44) {
                plVar5 = (long *)func_0x007926a8(param_1,0xffffffff);
                plVar5 = (long *)*plVar5;
                if ((plVar5 != (long *)0x0) && (*plVar5 == lRam0000000001f26b70)) {
                  return (ulong)(*(long *)(lRam0000000001f26730 + (long)plVar5) == lVar7);
                }
              }
            }
          }
/* WM - more drops soon - github.com/pengussy */
        }
      }
      return 0;
    }
  }
  return uVar6;
}

