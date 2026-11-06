/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x234784:44e03b7ebb
   =========================================================================== */

undefined8 FUN_00234784(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  pbVar3 = (byte *)(*pcRam0000000002078150)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019db9c8();
  }
  pcStack_78 = (char *)(*pcRam0000000002078138)();
  if (*pcStack_78 == '\x01') {
    lVar6 = 0;
    uVar7 = 0xcc016127a278eb59;
    do {
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[lVar6 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_78[lVar6 + 0xf] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9;
      uVar7 = lVar6 + -0x61c8864680b583eb +
// WM - thanks for reading - discord.gg/sdkhDjTex
              (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[lVar6 + 1]) << 0x11);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0xe);
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 0xf;
  uVar4 = func_0x0011ab24(&pcStack_78);
  uVar7 = _strlen();
  if (uVar7 < 0x7ffffffffffffff7) {
    if (uVar7 < 0x17) {
      uStack_48 = CONCAT17((char)uVar7,(undefined7)uStack_48);
      ppppuVar5 = &ppppuStack_58;
    }
    else {
      uVar8 = (uVar7 & 0x7ffffffffffffff8) + 8;
      uVar9 = 0x19;
      if (uVar8 != 0x18) {
        uVar9 = uVar8;
      }
      ppppuVar5 = (undefined8 ****)__Znwm(uVar9);
      uStack_48 = uVar9 | 0x8000000000000000;
      ppppuStack_58 = ppppuVar5;
      uStack_50 = uVar7;
    }
    _memmove(ppppuVar5,uVar4,uVar7);
    *(undefined1 *)((long)ppppuVar5 + uVar7) = 0;
    pbVar3 = (byte *)(*pcRam0000000002078180)();
/* WM - chat: discord.gg/sdkhDjTex */
    if ((*pbVar3 & 1) == 0) {
      func_0x019dba04();
    }
    pcStack_80 = (char *)(*pcRam0000000002078168)();
    if (*pcStack_80 == '\x01') {
      uVar1 = (byte)pcStack_80[1] ^ 0xe7afde54;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x2f429dd0;
      pcStack_80[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - 0x2f ^ 0x97;
      uVar7 = (((ulong)(byte)pcStack_80[1] ^ 0x48aa778e332b3be0) << 0x11 | 0x9154) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_80[7] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_80[8] =
/* proprietary - see LICENSE - do not sell */
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_80[9] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
      pcStack_80[10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 6;
    uVar4 = func_0x0011ab24(&pcStack_80);
    uVar7 = _strlen();
    if (uVar7 < 0x7ffffffffffffff7) {
      if (uVar7 < 0x17) {
        uStack_60 = CONCAT17((char)uVar7,(undefined7)uStack_60);
// WM - do not claim this as your own
        ppppuVar5 = &ppppuStack_70;
      }
      else {
        uVar8 = (uVar7 & 0x7ffffffffffffff8) + 8;
        uVar9 = 0x19;
        if (uVar8 != 0x18) {
          uVar9 = uVar8;
        }
        ppppuVar5 = (undefined8 ****)__Znwm(uVar9);
        uStack_60 = uVar9 | 0x8000000000000000;
        ppppuStack_70 = ppppuVar5;
        uStack_68 = uVar7;
      }
      _memmove(ppppuVar5,uVar4,uVar7);
      *(undefined1 *)((long)ppppuVar5 + uVar7) = 0;
      uVar4 = func_0x00233738(param_1,&ppppuStack_58,&ppppuStack_70);
      if ((long)uStack_60 < 0) {
        __ZdlPv(ppppuStack_70);
      }
      if ((long)uStack_48 < 0) {
        __ZdlPv(ppppuStack_58);
        return uVar4;
      }
      return uVar4;
    }
  }
  else {
    FUN_0000aa50();
  }
  FUN_0000aa50();
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x234cd0);
  (*pcVar2)();
}

