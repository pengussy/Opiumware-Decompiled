/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1f913c:7de670aa6d
 */

undefined8 FUN_001f913c(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_2c8;
  char *pcStack_2c0;
  undefined8 ****ppppuStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  undefined *puStack_290;
  undefined1 auStack_288 [24];
  byte abStack_270 [384];
  undefined *apuStack_f0 [19];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar3 = func_0x00791e54(param_1,2);
  if (iVar3 == 0) {
    pbVar7 = (byte *)(*pcRam0000000002075a20)();
    if ((*pbVar7 & 1) == 0) {
/* wm:watermarked copy - do not remove */
      func_0x019d73c8();
    }
    pcStack_2c8 = (char *)(*pcRam0000000002075a08)();
    if (*pcStack_2c8 == '\x01') {
      uVar1 = (byte)pcStack_2c8[1] ^ 0x82fbaa6f;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xb27a5306;
      pcStack_2c8[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x9f ^ 0xac;
      uVar8 = (((ulong)(byte)pcStack_2c8[1] ^ 0x360c64e60ef20d2d) << 0x11 | 0x6c18) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2c8[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_2c8[9] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_2c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2c8[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_2c8[10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_2c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2c8[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_2c8[0xb] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
/* watermarked copy - do not remove - github.com/pengussy */
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_2c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2c8[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_2c8[0xc] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_2c8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2c8[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
      pcStack_2c8[0xd] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_2c8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2c8[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
      pcStack_2c8[0xe] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_2c8 = '\0';
    }
    pcStack_2c8 = pcStack_2c8 + 8;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    uVar4 = func_0x0011ab24(&pcStack_2c8);
    func_0x007a1ba8(param_1,2,uVar4);
LAB_001f9638:
    pbVar7 = (byte *)(*pcRam0000000002075a50)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019d738c();
    }
    pcStack_2c0 = (char *)(*pcRam0000000002075a38)();
    if (*pcStack_2c0 == '\x01') {
      lVar5 = 0;
      uVar8 = 0x5955be133505436;
      do {
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_2c0[lVar5 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcStack_2c0[lVar5 + 0x23] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
        uVar8 = lVar5 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_2c0[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x22);
      *pcStack_2c0 = '\0';
    }
    pcStack_2c0 = pcStack_2c0 + 0x23;
    func_0x0011ab24(&pcStack_2c0);
    func_0x007a1b5c(param_1,"%s");
  }
  else {
    uStack_2a0 = 0;
    uVar4 = func_0x00792368(param_1,2,&uStack_2a0);
    uStack_298 = 0;
    lVar5 = func_0x00792368(param_1,0xffffd8ed,&uStack_298);
    uVar8 = uStack_298;
    if (lVar5 == 0) {
      ppppuStack_2b8 = (undefined8 ****)0x0;
/* wm:unlicensed copy if this notice is missing */
      uStack_2b0 = 0;
      uStack_2a8 = 0;
LAB_001f9220:
      func_0x001f9034(&puStack_290,&ppppuStack_2b8,5);
      if ((long)uStack_2a8 < 0) {
        __ZdlPv(ppppuStack_2b8);
      }
      if ((abStack_270[*(long *)(puStack_290 + -0x18)] & 5) != 0) goto LAB_001f9638;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&puStack_290,uVar4,uStack_2a0);
      puStack_290 = &UNK_01dbf310;
      apuStack_f0[0] = &UNK_01dbf338;
      func_0x00140dd0(auStack_288);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&puStack_290,&UNK_01dbf350);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_f0);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
        return 0;
      }
      ___stack_chk_fail();
// WM - chat: discord.gg/sdkhDjTex
    }
    else if (uStack_298 < 0x7ffffffffffffff7) {
      if (uStack_298 < 0x17) {
        uStack_2a8 = CONCAT17((char)uStack_298,(undefined7)uStack_2a8);
        ppppuVar6 = &ppppuStack_2b8;
      }
      else {
        uVar9 = (uStack_298 & 0x7ffffffffffffff8) + 8;
        uVar10 = 0x19;
        if (uVar9 != 0x18) {
          uVar10 = uVar9;
        }
        ppppuVar6 = (undefined8 ****)__Znwm(uVar10);
        uStack_2a8 = uVar10 | 0x8000000000000000;
        uStack_2b0 = uVar8;
        ppppuStack_2b8 = ppppuVar6;
      }
      _memmove(ppppuVar6,lVar5,uVar8);
      *(undefined1 *)((long)ppppuVar6 + uVar8) = 0;
      goto LAB_001f9220;
    }
    FUN_0000aa50();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1f9790);
  (*pcVar2)();
}

