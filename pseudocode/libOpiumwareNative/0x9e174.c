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
 *  file-id: 0x9e174:b2e2b063ab
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0009e174(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 8) {
/* wm:do not claim this as your own */
    pbVar4 = (byte *)(*pcRam0000000002066930)();
    if ((*pbVar4 & 1) == 0) goto LAB_0009e770;
    goto LAB_0009e23c;
  }
  plVar3 = (long *)func_0x00790f58(param_1,1);
  if (*(char *)(*plVar3 + 3) == '\0') {
    lVar9 = *(long *)(*plVar3 + 0x18);
    func_0x00793bd0(param_1,0,0);
    if (0 < *(int *)(lVar9 + 0xb8)) {
      lVar8 = 0;
      do {
        uVar10 = NEON_ucvtf((ulong)*(uint *)(*(long *)(lVar9 + 0x88) + lVar8 * 4));
        func_0x00792b10(uVar10,param_1);
        lVar8 = lVar8 + 1;
        func_0x00794504(param_1,0xfffffffe,lVar8);
      } while (lVar8 < *(int *)(lVar9 + 0xb8));
    }
    return 1;
/*  unlicensed copy if this notice is missing  */
  }
  do {
    pbVar4 = (byte *)(*pcRam0000000002066960)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c041c();
    }
    pcStack_40 = (char *)(*pcRam0000000002066948)();
    if (*pcStack_40 == '\x01') {
      lVar9 = 0;
      uVar5 = 0x127a2f619fec726e;
      do {
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_40[lVar9 + 1] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17) ^
                ((uint)(uVar6 >> 0x29) | 1);
        pcStack_40[lVar9 + 0x21] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
        uVar5 = lVar9 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x20);
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 0x21;
    uVar10 = func_0x0011ab24(&pcStack_40);
    func_0x007a1abc(param_1,1,uVar10);
/* keep the notice, keep the source honest */
LAB_0009e770:
    func_0x019c03e0();
LAB_0009e23c:
    pcStack_38 = (char *)(*pcRam0000000002066918)();
    if (*pcStack_38 == '\x01') {
      uVar1 = (byte)pcStack_38[1] ^ 0x1eb0377f;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x47df583f;
      pcStack_38[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0xbc;
      uVar5 = (((ulong)(byte)pcStack_38[1] ^ 0xdd2ddf458a45b58) << 0x11 | 0x1ba5) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_38[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_38[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_38[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_38[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[6] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_38[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[7] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_38[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[8] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_38[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[9] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
      pcStack_38[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar6;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 10;
    uVar10 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,1,uVar10);
  } while( true );
}

