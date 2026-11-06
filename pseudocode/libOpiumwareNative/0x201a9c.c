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
 *  file-id: 0x201a9c:2544392c3b
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00201a9c(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long alStack_48 [2];
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  char *pcStack_38;
  long *plStack_30;
  char *pcStack_28;
  
  pbVar4 = (byte *)(*pcRam0000000002076170)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d7cb0();
  }
  pcStack_28 = (char *)(*pcRam0000000002076158)();
  if (*pcStack_28 == '\x01') {
    uVar1 = (byte)pcStack_28[1] ^ 0xbea132fc;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xc4645497;
    pcStack_28[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x3f;
    uVar7 = (((ulong)(byte)pcStack_28[1] ^ 0xff904d2eef559c0d) << 0x11 | 0x1ff20) +
            0x9e3779b97f4a7c15;
    uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_28[7] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar10;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_28[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar10;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
/*  reversing this took months of machine time  */
    uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_28[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar10;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_28[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9;
    *pcStack_28 = '\0';
  }
  pcStack_28 = pcStack_28 + 6;
  uVar5 = func_0x0011ab24(&pcStack_28);
  func_0x007935a0(param_1,0xffffd8ee,uVar5);
  iVar3 = func_0x00791f88(param_1,0xffffffff,1);
  func_0x00791660(param_1,0xfffffffe);
  if (iVar3 == 0) {
    pbVar4 = (byte *)(*pcRam00000000020761a0)();
    if ((*pbVar4 & 1) == 0) goto LAB_0020222c;
    goto LAB_00201db0;
  }
// proprietary - see LICENSE - do not sell
  iVar3 = func_0x00791e54(param_1,2);
  if (iVar3 == 0) {
    do {
      pbVar4 = (byte *)(*pcRam00000000020761d0)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019d7cec();
      }
      pcVar6 = (char *)(*pcRam00000000020761b8)();
      if (*pcVar6 == '\x01') {
        uVar1 = (byte)pcVar6[1] ^ 0x3b0d9bb6;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xedcf5677 ^ 0x4ec48d;
        pcVar6[8] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x8b;
        uVar7 = (((ulong)(byte)pcVar6[1] ^ 0xcc0918420b500351) << 0x11 | 0x19812) +
                0x9e3779b97f4a7c15;
        uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[2] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcVar6[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcVar6[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[3] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        pcVar6[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcVar6[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[4] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcVar6[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcVar6[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcVar6[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcVar6[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[6] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcVar6[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcVar6[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcVar6[7] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar7 >> 0x29) | 1);
        pcVar6[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
        *pcVar6 = '\0';
// watermarked copy - do not remove
      }
      plStack_30 = (long *)(pcVar6 + 8);
      uVar5 = func_0x0011ab24(&plStack_30);
      func_0x007a1ba8(param_1,2,uVar5);
LAB_0020222c:
      func_0x019d7d28();
LAB_00201db0:
      pcStack_38 = (char *)(*pcRam0000000002076188)();
      if (*pcStack_38 == '\x01') {
        lVar8 = 0;
        uVar7 = 0x299ceefa606923ea;
        do {
          uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_38[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_38[lVar8 + 0x2f] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar10;
          uVar7 = lVar8 + -0x61c8864680b583eb +
                  (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x2e);
        *pcStack_38 = '\0';
      }
      pcStack_38 = pcStack_38 + 0x2f;
      uVar5 = func_0x0011ab24(&pcStack_38);
      func_0x007a1abc(param_1,1,uVar5);
    } while( true );
  }
/* wm:chat: discord.gg/sdkhDjTex */
  pcStack_28 = *(char **)PTR____stack_chk_guard_01f20200;
  lStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  iVar3 = func_0x00791efc(param_1,1);
  if ((iVar3 == 0) || (iVar3 = func_0x00791e54(param_1,2), iVar3 == 0)) {
    iVar3 = func_0x00791e54(param_1,1);
    if (iVar3 == 0) goto code_r0x002023c0;
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
  uVar5 = func_0x00792368(param_1,uVar5,0);
  func_0x001284e8(&lStack_60,uVar5);
  if (lStack_50 < 0) {
    func_0x00017ae8(&lStack_80,lStack_60,lStack_58);
  }
  else {
    lStack_78 = lStack_58;
    lStack_80 = lStack_60;
    lStack_70 = lStack_50;
  }
  plStack_30 = (long *)0x0;
  plStack_30 = (long *)__Znwm(0x20);
  *plStack_30 = (long)&UNK_01dc07e8;
  plStack_30[2] = lStack_78;
  plStack_30[1] = lStack_80;
  plStack_30[3] = lStack_70;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  param_1 = func_0x001e7c24(param_1,alStack_48);
  if (plStack_30 == alStack_48) {
    lVar8 = 0x20;
code_r0x00202344:
    (**(code **)(*plStack_30 + lVar8))();
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  }
  else if (plStack_30 != (long *)0x0) {
    lVar8 = 0x28;
    goto code_r0x00202344;
  }
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
    if (-1 < lStack_50) goto code_r0x00202360;
code_r0x0020239c:
    __ZdlPv(lStack_60);
    if (*(char **)PTR____stack_chk_guard_01f20200 == pcStack_28) {
      return param_1;
    }
  }
  else {
    if (lStack_50 < 0) goto code_r0x0020239c;
code_r0x00202360:
    if (*(char **)PTR____stack_chk_guard_01f20200 == pcStack_28) {
      return param_1;
    }
  }
  ___stack_chk_fail();
code_r0x002023c0:
  pbVar4 = (byte *)(*pcRam0000000002076200)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d7d64();
  }
  pcStack_88 = (char *)(*pcRam00000000020761e8)();
  if (*pcStack_88 == '\x01') {
    uVar1 = (byte)pcStack_88[1] ^ 0x77be619c;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x27283cf0;
    pcStack_88[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - 0x35 ^ 0x5f;
    uVar7 = (((ulong)(byte)pcStack_88[1] ^ 0xaf2416c38117228b) << 0x11 | 0x15e48) +
            0x9e3779b97f4a7c15;
    uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
/*  donate: donate/README.md  */
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
    pcStack_88[9] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
    pcStack_88[10] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
/* wm:proprietary - see LICENSE - do not sell */
    pcStack_88[0xb] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
    pcStack_88[0xc] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
    pcStack_88[0xd] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_88[0xe] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar7 >> 0x29) | 1) ^
         (byte)uVar9;
    *pcStack_88 = '\0';
  }
// WM - do not claim this as your own
  pcStack_88 = pcStack_88 + 8;
  uVar5 = func_0x0011ab24(&pcStack_88);
  func_0x007a1ba8(param_1,1,uVar5);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x202714);
  (*pcVar2)();
}

