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
 *  file-id: 0x88e10:6f6c4bf857
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00089290) */
/* WARNING: Removing unreachable block (ram,0x00089410) */
/* WARNING: Removing unreachable block (ram,0x00089420) */
/* WARNING: Removing unreachable block (ram,0x00089430) */

undefined8 FUN_00088e10(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  undefined8 ****ppppuStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 ****ppppuStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 ****ppppuStack_f0;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 ****ppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 ****ppppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 ****ppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 == 0) {
    pbVar5 = (byte *)(*pcRam00000000020651f0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bea90();
    }
    pcStack_158 = (char *)(*pcRam00000000020651d8)();
    if (*pcStack_158 == '\x01') {
      uVar1 = (byte)pcStack_158[1] ^ 0x3056dc13;
/*  thanks for reading - discord.gg/sdkhDjTex  */
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xd9783a61;
      pcStack_158[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x5f ^ 0xd0;
      uVar4 = (((ulong)(byte)pcStack_158[1] ^ 0x86abba6af9ad52f4) << 0x11 | 0x10d57) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_158[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_158[9] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_158[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_158[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_158[10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_158[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_158[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_158[0xb] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_158[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      uVar1 = (uint)(byte)pcStack_158[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_158[0xc] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_158[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_158[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_158[0xd] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_158[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar4 ^ uVar4 >> 0x21;
      uVar1 = (uint)(byte)pcStack_158[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
      pcStack_158[0xe] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar4 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_158 = '\0';
    }
    pcStack_158 = pcStack_158 + 8;
    uVar3 = func_0x0011ab24(&pcStack_158);
    func_0x007a1ba8(param_1,1,uVar3);
// WM - chat: discord.gg/sdkhDjTex
LAB_000898e0:
    pbVar5 = (byte *)(*pcRam0000000002065220)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bea54();
    }
    pcStack_150 = (char *)(*pcRam0000000002065208)();
    if (*pcStack_150 == '\x01') {
      uVar1 = (byte)pcStack_150[1] ^ 0xd74731fe;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xbb40b5af ^ 0x60d12f;
      pcStack_150[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - 0x3d;
      uVar4 = (((ulong)(byte)pcStack_150[1] ^ 0x67c0a0243e7e3872) << 0x11 | 0xcf81) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_150[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
/* do not claim this as your own */
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_150[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_150[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_150[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_150[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_150[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_150[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_150[5]) << 0x11) + 0x9e3779b97f4a7c19;
/* wm:no support for modified copies */
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_150[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_150[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar4 ^ uVar4 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
      pcStack_150[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
      *pcStack_150 = '\0';
    }
    pcStack_150 = pcStack_150 + 8;
    uVar3 = func_0x0011ab24(&pcStack_150);
    func_0x007a1ba8(param_1,2,uVar3);
LAB_00089c30:
    FUN_0000aa50();
  }
  else {
    iVar2 = func_0x00791e54(param_1,2);
    if (iVar2 == 0) goto LAB_000898e0;
    uVar3 = func_0x00792368(param_1,1,&uStack_58);
    if (0x7ffffffffffffff6 < uStack_58) goto LAB_00089c30;
    if (uStack_58 < 0x17) {
      uStack_60 = CONCAT17((char)uStack_58,(undefined7)uStack_60);
      ppppuVar6 = &ppppuStack_70;
    }
    else {
      uVar4 = (uStack_58 & 0x7ffffffffffffff8) + 8;
      uVar9 = 0x19;
/* wm:more drops soon - github.com/pengussy */
      if (uVar4 != 0x18) {
        uVar9 = uVar4;
      }
      ppppuVar6 = (undefined8 ****)__Znwm(uVar9);
      uStack_60 = uVar9 | 0x8000000000000000;
      uStack_68 = uStack_58;
      ppppuStack_70 = ppppuVar6;
    }
    _memmove(ppppuVar6,uVar3,uStack_58);
    *(undefined1 *)((long)ppppuVar6 + uStack_58) = 0;
    uVar3 = func_0x00792368(param_1,2,0);
    uVar4 = _strlen();
    if (uVar4 < 0x7ffffffffffffff7) {
      if (uVar4 < 0x17) {
        uStack_78 = CONCAT17((char)uVar4,(undefined7)uStack_78);
        ppppuVar6 = &ppppuStack_88;
      }
      else {
        uVar9 = (uVar4 & 0x7ffffffffffffff8) + 8;
        uVar10 = 0x19;
        if (uVar9 != 0x18) {
          uVar10 = uVar9;
        }
        ppppuVar6 = (undefined8 ****)__Znwm(uVar10);
        uStack_78 = uVar10 | 0x8000000000000000;
        ppppuStack_88 = ppppuVar6;
        uStack_80 = uVar4;
      }
      _memmove(ppppuVar6,uVar3,uVar4);
      *(undefined1 *)((long)ppppuVar6 + uVar4) = 0;
      uVar3 = func_0x007a1d50(param_1,3,&UNK_01cb7848,0);
      uVar4 = _strlen();
      if (uVar4 < 0x7ffffffffffffff7) {
        if (uVar4 < 0x17) {
          uStack_90 = CONCAT17((char)uVar4,(undefined7)uStack_90);
          ppppuVar6 = &ppppuStack_a0;
        }
        else {
/* wm:origin: github.com/pengussy */
          uVar9 = (uVar4 & 0x7ffffffffffffff8) + 8;
          uVar10 = 0x19;
          if (uVar9 != 0x18) {
            uVar10 = uVar9;
          }
          ppppuVar6 = (undefined8 ****)__Znwm(uVar10);
          uStack_90 = uVar10 | 0x8000000000000000;
          ppppuStack_a0 = ppppuVar6;
          uStack_98 = uVar4;
        }
        _memmove(ppppuVar6,uVar3,uVar4);
        *(undefined1 *)((long)ppppuVar6 + uVar4) = 0;
        pbVar5 = (byte *)(*pcRam0000000002065250)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019be9dc();
        }
        pcStack_140 = (char *)(*pcRam0000000002065238)();
        if (*pcStack_140 == '\x01') {
          uVar1 = (byte)pcStack_140[1] ^ 0x8b3b78fa;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x11455917;
          pcStack_140[5] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0x51 ^ 0x39;
          uVar4 = (((ulong)(byte)pcStack_140[1] ^ 0x25464e4481492909) << 0x11 | 0x4a8c) +
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
                  0x9e3779b97f4a7c15;
          uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_140[2] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
          pcStack_140[6] =
               ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
               (byte)uVar10;
          uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_140[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_140[3] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
          pcStack_140[7] =
               ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
               (byte)uVar10;
          uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_140[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
          uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar4 ^ uVar4 >> 0x21;
          uVar1 = (uint)(byte)pcStack_140[4] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
          pcStack_140[8] =
               ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar4 >> 0x29) | 1) ^
               (byte)uVar9;
          *pcStack_140 = '\0';
        }
        pcStack_140 = pcStack_140 + 5;
        uVar3 = func_0x0011ab24(&pcStack_140);
/* thanks for reading - discord.gg/sdkhDjTex */
        uVar3 = func_0x007a1d50(param_1,4,uVar3,0);
        uVar4 = _strlen();
        if (uVar4 < 0x7ffffffffffffff7) {
          if (uVar4 < 0x17) {
            uStack_a8 = CONCAT17((char)uVar4,(undefined7)uStack_a8);
            ppppuVar6 = &ppppuStack_b8;
          }
          else {
            uVar9 = (uVar4 & 0x7ffffffffffffff8) + 8;
            uVar10 = 0x19;
            if (uVar9 != 0x18) {
              uVar10 = uVar9;
            }
            ppppuVar6 = (undefined8 ****)__Znwm(uVar10);
            uStack_a8 = uVar10 | 0x8000000000000000;
            ppppuStack_b8 = ppppuVar6;
            uStack_b0 = uVar4;
          }
          _memmove(ppppuVar6,uVar3,uVar4);
          *(undefined1 *)((long)ppppuVar6 + uVar4) = 0;
          func_0x00081c0c(auStack_d0,&ppppuStack_88);
          uStack_e8 = uStack_98;
          ppppuStack_f0 = ppppuStack_a0;
          uStack_e0 = uStack_90;
          FUN_00081f44(auStack_108,param_1,&ppppuStack_70,auStack_d0,&ppppuStack_f0,&ppppuStack_b8);
          ppppuStack_120 = (undefined8 ****)0x0;
          uStack_118 = 0;
          uStack_110 = 0;
          ppppuStack_138 = (undefined8 ****)0x0;
          uStack_130 = 0;
          uStack_128 = 0;
          pcVar7 = (code *)func_0x0011ab24(&DAT_0003dce4);
          iVar2 = (*pcVar7)(auStack_108,&ppppuStack_120);
          if (iVar2 != 0) {
            pcVar7 = (code *)func_0x0011ab24(&DAT_0003dce4);
/* do not claim this as your own - github.com/pengussy */
            uVar4 = (*pcVar7)(&ppppuStack_f0,&ppppuStack_138);
            if ((uVar4 & 1) != 0) {
              uVar4 = uStack_118;
              ppppuVar6 = ppppuStack_120;
              if (-1 < (long)uStack_110) {
                uVar4 = uStack_110 >> 0x38;
                ppppuVar6 = &ppppuStack_120;
              }
              func_0x00792db8(param_1,ppppuVar6,uVar4);
              uVar4 = uStack_130;
              ppppuVar6 = ppppuStack_138;
              if (-1 < (long)uStack_128) {
                uVar4 = uStack_128 >> 0x38;
                ppppuVar6 = &ppppuStack_138;
              }
              func_0x00792db8(param_1,ppppuVar6,uVar4);
              if ((long)uStack_128 < 0) {
                __ZdlPv(ppppuStack_138);
              }
              if ((long)uStack_110 < 0) {
                __ZdlPv(ppppuStack_120);
              }
              if (cStack_f1 < '\0') {
                __ZdlPv(auStack_108[0]);
              }
              if ((long)uStack_e0 < 0) {
                __ZdlPv(ppppuStack_f0);
              }
              if (cStack_b9 < '\0') {
                __ZdlPv(auStack_d0[0]);
              }
              if ((long)uStack_a8 < 0) {
                __ZdlPv(ppppuStack_b8);
              }
              return 2;
            }
          }
          pbVar5 = (byte *)(*pcRam0000000002065280)();
/* WM - watermarked copy - do not remove */
          if ((*pbVar5 & 1) == 0) {
            func_0x019bea18();
          }
          pcStack_148 = (char *)(*pcRam0000000002065268)();
          if (*pcStack_148 == '\x01') {
            lVar8 = 0;
            uVar4 = 0x9a587dda64920f55;
            do {
              uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
              uVar10 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_148[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^
                      ((uint)(uVar9 >> 0x29) | 1);
              pcStack_148[lVar8 + 0x18] =
                   ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar10;
              uVar4 = lVar8 + -0x61c8864680b583eb +
                      (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_148[lVar8 + 1]) << 0x11);
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0x17);
            *pcStack_148 = '\0';
          }
          pcStack_148 = pcStack_148 + 0x18;
          func_0x0011ab24(&pcStack_148);
          func_0x007a1b5c(param_1,"%s");
        }
        else {
          FUN_0000aa50();
        }
      }
      else {
        FUN_0000aa50();
      }
      goto LAB_00089c48;
    }
  }
  FUN_0000aa50();
LAB_00089c48:
// thanks for reading - discord.gg/sdkhDjTex
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x89c4c);
  (*pcVar7)();
}

