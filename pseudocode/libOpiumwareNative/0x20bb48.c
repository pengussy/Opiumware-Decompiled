/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x20bb48:870d6c7b58
 */

undefined8 FUN_0020bb48(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_78;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  ulong uStack_38;
  
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 == 0) {
    pbVar6 = (byte *)(*pcRam0000000002076b30)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d88e0();
    }
    pcStack_78 = (char *)(*pcRam0000000002076b18)();
    if (*pcStack_78 == '\x01') {
      uVar1 = (byte)pcStack_78[1] ^ 0x4da52f0d;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xc12f2a9c;
      pcStack_78[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0x4b ^ 0xce;
      uVar8 = (((ulong)(byte)pcStack_78[1] ^ 0x9bb80f58a7999a5e) << 0x11 | 0x13770) +
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_78[9] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_78[10] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_78[0xb] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_78[0xc] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_78[0xd] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_78[0xe] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_78 = '\0';
    }
    pcStack_78 = pcStack_78 + 8;
    uVar4 = func_0x0011ab24(&pcStack_78);
    func_0x007a1ba8(param_1,1,uVar4);
  }
  else {
    uStack_38 = 0;
    uVar4 = func_0x00792368(param_1,1,&uStack_38);
    __ZNSt3__15mutex4lockEv(0x1f26bf0);
    __ZNSt3__15mutex4lockEv(0x1f26cb0);
    uVar8 = uStack_38;
    if (uStack_38 < 0x7ffffffffffffff7) {
      if (uStack_38 < 0x17) {
        uStack_60 = CONCAT17((char)uStack_38,(undefined7)uStack_60);
        pppuVar5 = &pppuStack_70;
      }
      else {
        uVar9 = (uStack_38 & 0x7ffffffffffffff8) + 8;
        uVar10 = 0x19;
        if (uVar9 != 0x18) {
          uVar10 = uVar9;
        }
/* if you paid for this, you were scammed - github.com/pengussy */
        pppuVar5 = (undefined8 ***)__Znwm(uVar10);
        uStack_60 = uVar10 | 0x8000000000000000;
        uStack_68 = uVar8;
        pppuStack_70 = pppuVar5;
      }
      _memmove(pppuVar5,uVar4,uVar8);
      *(undefined1 *)((long)pppuVar5 + uVar8) = 0;
      uStack_58 = uRam0000000002097038;
      uStack_50 = (undefined1)uRam0000000002097040;
      uStack_4f = (undefined7)((ulong)uRam0000000002097040 >> 8);
      uStack_48 = (undefined1)uRam0000000001f26d30;
      uStack_47 = (undefined7)((ulong)uRam0000000001f26d30 >> 8);
      uStack_40 = 0;
      uVar8 = 0;
      if (lRam0000000002096f28 != lRam0000000002096f20) {
        uVar8 = (lRam0000000002096f28 - lRam0000000002096f20 >> 3) * 0x49 - 1;
      }
      uVar9 = lRam0000000002096f40 + lRam0000000002096f38;
      if (uVar8 == uVar9) {
        func_0x0021bdbc(0x2096f18);
        uVar9 = lRam0000000002096f40 + lRam0000000002096f38;
/* watermarked copy - do not remove - github.com/pengussy */
      }
      puVar7 = (undefined8 *)
               (*(long *)(lRam0000000002096f20 + (uVar9 / 0x49) * 8) + (uVar9 % 0x49) * 0x38);
      puVar7[1] = uStack_68;
      *puVar7 = pppuStack_70;
      puVar7[2] = uStack_60;
      puVar7[4] = CONCAT71(uStack_4f,uStack_50);
      puVar7[3] = uStack_58;
      *(ulong *)((long)puVar7 + 0x29) = CONCAT17(uStack_40,uStack_47);
      *(ulong *)((long)puVar7 + 0x21) = CONCAT17(uStack_48,uStack_4f);
      lRam0000000002096f40 = lRam0000000002096f40 + 1;
      __ZNSt3__15mutex6unlockEv(0x1f26cb0);
      __ZNSt3__15mutex6unlockEv(0x1f26bf0);
      return 0;
    }
  }
  FUN_0000aa50();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x20c070);
  (*pcVar2)();
/* WM - unlicensed copy if this notice is missing */
}

