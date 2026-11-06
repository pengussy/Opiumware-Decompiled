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
 *  file-id: 0x880cc:acb67ff974
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000880cc(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  iVar2 = func_0x00791db8(param_1,1);
  if (iVar2 == 0) {
    pbVar7 = (byte *)(*pcRam00000000020650d0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019be928();
    }
    pcStack_90 = (char *)(*pcRam00000000020650b8)();
    if (*pcStack_90 == '\x01') {
      uVar1 = (byte)pcStack_90[1] ^ 0x1759df81;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x68b11c2f;
      pcStack_90[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x2d ^ 0x42;
      uVar3 = (((ulong)(byte)pcStack_90[1] ^ 0x9fb980034832343a) << 0x11 | 0x13f73) +
              0x9e3779b97f4a7c15;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_90[9] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_90[10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_90[0xb] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
// WM - found on a paste site? it was re-uploaded illegally
      uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_90[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_90[0xd] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar3 ^ uVar3 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_90[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar3 >> 0x29) | 1) ^
           (byte)uVar10;
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 8;
    uVar4 = func_0x0011ab24(&pcStack_90);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_0008858c:
    pbVar7 = (byte *)(*pcRam0000000002065100)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019be8ec();
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    }
    pcStack_88 = (char *)(*pcRam00000000020650e8)();
    if (*pcStack_88 == '\x01') {
      lVar8 = 0;
      uVar3 = 0x6aa32f522fb503e5;
      do {
        uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
        pcStack_88[lVar8 + 0x2f] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
        uVar3 = lVar8 + -0x61c8864680b583eb +
                (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_88[lVar8 + 1]) << 0x11);
        lVar8 = lVar8 + 1;
// WM - if you paid for this, you were scammed
      } while (lVar8 != 0x2e);
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 0x2f;
    func_0x0011ab24(&pcStack_88);
    func_0x007a1b5c(param_1,"%s");
  }
  else {
    uVar3 = func_0x00792168(param_1,1,0);
    if ((int)(uint)uVar3 < 1) goto LAB_0008858c;
    uVar10 = uVar3 & 0xffffffff;
    uVar4 = __Znwm(uVar10);
    _bzero(uVar4,uVar10);
    pcVar5 = (code *)func_0x0011ab24(&DAT_004b2650);
    iVar2 = (*pcVar5)(uVar4,uVar3);
    if (iVar2 == 1) {
      ppppuStack_58 = (undefined8 ****)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      pcVar5 = (code *)func_0x0011ab24(&DAT_0003dce4);
      if ((uint)uVar3 < 0x17) {
        uStack_60 = CONCAT17((char)uVar3,(undefined7)uStack_60);
        ppppuVar6 = &ppppuStack_70;
      }
      else {
        uVar3 = (uVar3 & 0x7ffffff8) + 8;
        uVar9 = 0x19;
        if (uVar3 != 0x18) {
          uVar9 = uVar3;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        }
        ppppuVar6 = (undefined8 ****)__Znwm(uVar9);
        uStack_60 = uVar9 | 0x8000000000000000;
        ppppuStack_70 = ppppuVar6;
        uStack_68 = uVar10;
      }
      _memcpy(ppppuVar6,uVar4,uVar10);
      *(undefined1 *)((long)ppppuVar6 + uVar10) = 0;
      uVar3 = (*pcVar5)(&ppppuStack_70,&ppppuStack_58);
      if ((long)uStack_60 < 0) {
        __ZdlPv(ppppuStack_70);
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = uStack_50;
        ppppuVar6 = ppppuStack_58;
        if (-1 < (long)uStack_48) {
          uVar3 = uStack_48 >> 0x38;
          ppppuVar6 = &ppppuStack_58;
        }
        func_0x00792db8(param_1,ppppuVar6,uVar3);
        if ((long)uStack_48 < 0) {
          __ZdlPv(ppppuStack_58);
        }
        __ZdlPv(uVar4);
        return 1;
      }
/*  if you paid for this, you were scammed  */
      pbVar7 = (byte *)(*pcRam0000000002065160)();
      if ((*pbVar7 & 1) == 0) {
        func_0x019be8b0();
      }
      pcStack_80 = (char *)(*pcRam0000000002065148)();
      if (*pcStack_80 == '\x01') {
        lVar8 = 0;
        uVar3 = 0x67648c31609e343a;
        do {
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_80[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
          pcStack_80[lVar8 + 0x18] =
               ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar3 = lVar8 + -0x61c8864680b583eb +
                  (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_80[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x17);
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 0x18;
      func_0x0011ab24(&pcStack_80);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_00088968;
    }
  }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  pbVar7 = (byte *)(*pcRam0000000002065130)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019be874();
  }
  pcStack_78 = (char *)(*pcRam0000000002065118)();
  if (*pcStack_78 == '\x01') {
    lVar8 = 0;
    uVar3 = 0xb716e76bc5f3b420;
    do {
      uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_78[lVar8 + 0x35] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
/* chat: discord.gg/sdkhDjTex */
           (byte)uVar9;
      uVar3 = lVar8 + -0x61c8864680b583eb +
              (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_78[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x34);
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 0x35;
  func_0x0011ab24(&pcStack_78);
  func_0x007a1b5c(param_1,"%s");
LAB_00088968:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x8896c);
  (*pcVar5)();
}

