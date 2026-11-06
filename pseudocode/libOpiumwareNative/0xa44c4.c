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
 *  file-id: 0xa44c4:d7d4c60d87
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000a44c4(undefined **param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 ****ppppuVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ****ppppuStack_2d0;
  ulong uStack_2c8;
  byte bStack_2b9;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  byte bStack_2a1;
  undefined8 ****ppppuStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined *apuStack_288 [2];
  long alStack_278 [2];
  uint auStack_268 [2];
  undefined8 auStack_260 [12];
  long lStack_200;
  undefined4 uStack_ec;
  undefined *apuStack_e0 [19];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 == 0) {
LAB_000a4738:
    pbVar8 = (byte *)(*pcRam0000000002066ff0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c0cc8();
    }
    pcStack_2e8 = (char *)(*pcRam0000000002066fd8)();
    if (*pcStack_2e8 == '\x01') {
      uVar1 = (byte)pcStack_2e8[1] ^ 0x264da14c;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x294b084d ^ 0x6eb5ad;
      pcStack_2e8[8] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x71;
      uVar6 = (((ulong)(byte)pcStack_2e8[1] ^ 0x8e8c774d8e61cac9) << 0x11 | 0x11d18) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2e8[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
      ;
      pcStack_2e8[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_2e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
// chat: discord.gg/sdkhDjTex
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2e8[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
      ;
      pcStack_2e8[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_2e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2e8[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
      ;
      pcStack_2e8[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_2e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2e8[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
      ;
      pcStack_2e8[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_2e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
/* WM - found on a paste site? it was re-uploaded illegally */
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2e8[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
      ;
      pcStack_2e8[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_2e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2e8[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_2e8[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      *pcStack_2e8 = '\0';
    }
    pcStack_2e8 = pcStack_2e8 + 8;
    uVar5 = func_0x0011ab24(&pcStack_2e8);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_000a4a88:
    FUN_0000aa50();
  }
  else {
    uVar5 = func_0x00792368(param_1,1,0);
    uVar6 = _strlen();
    if (0x7ffffffffffffff6 < uVar6) goto LAB_000a4a88;
    if (uVar6 < 0x17) {
      uStack_290 = CONCAT17((char)uVar6,(undefined7)uStack_290);
      ppppuVar7 = &ppppuStack_2a0;
    }
    else {
      uVar10 = (uVar6 & 0x7ffffffffffffff8) + 8;
      uVar11 = 0x19;
      if (uVar10 != 0x18) {
        uVar11 = uVar10;
      }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      ppppuVar7 = (undefined8 ****)__Znwm(uVar11);
      uStack_290 = uVar11 | 0x8000000000000000;
      ppppuStack_2a0 = ppppuVar7;
      uStack_298 = uVar6;
    }
    _memmove(ppppuVar7,uVar5,uVar6);
    *(undefined1 *)((long)ppppuVar7 + uVar6) = 0;
    FUN_000a37f0(&uStack_2b8,&ppppuStack_2a0,1);
    if (-1 < (char)bStack_2a1) {
      uStack_2b0 = (ulong)bStack_2a1;
    }
    if (uStack_2b0 != 0) {
      func_0x000a4dbc(apuStack_288,&uStack_2b8,4);
      if ((*(byte *)((long)auStack_268 + *(long *)(apuStack_288[0] + -0x18)) & 5) != 0) {
        pbVar8 = (byte *)(*pcRam0000000002067050)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c0c50();
        }
        pcStack_2d8 = (char *)(*pcRam0000000002067038)();
        if (*pcStack_2d8 == '\x01') {
          lVar9 = 0;
          uVar6 = 0x5eb53a6d6692c110;
          do {
            uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_2d8[lVar9 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^
                    ((uint)(uVar10 >> 0x29) | 1);
            pcStack_2d8[lVar9 + 0x15] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11
            ;
            uVar6 = lVar9 + -0x61c8864680b583eb +
                    (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_2d8[lVar9 + 1]) << 0x11);
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x14);
          *pcStack_2d8 = '\0';
// proprietary - see LICENSE - do not sell
        }
        pcStack_2d8 = pcStack_2d8 + 0x15;
        func_0x0011ab24(&pcStack_2d8);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_000a4d20;
      }
      func_0x00140b70(&ppppuStack_2d0,
                      *(undefined8 *)((long)auStack_260 + *(long *)(apuStack_288[0] + -0x18)),0);
      if (lStack_200 == 0) {
LAB_000a4630:
        __ZNSt3__18ios_base5clearEj
                  ((long)apuStack_288 + *(long *)(apuStack_288[0] + -0x18),
                   *(uint *)((long)auStack_268 + *(long *)(apuStack_288[0] + -0x18)) | 4);
      }
      else {
        iVar3 = (**(code **)(alStack_278[0] + 0x30))(alStack_278);
        iVar4 = _fclose(lStack_200);
        lStack_200 = 0;
        auStack_260[0] = 0;
        auStack_268[0] = 0;
        auStack_268[1] = 0;
        auStack_260[2] = 0;
        auStack_260[1] = 0;
        auStack_260[4] = 0;
        auStack_260[3] = 0;
        uStack_ec = 0x20;
        if (iVar4 != 0 || iVar3 != 0) goto LAB_000a4630;
      }
/* proprietary - see LICENSE - do not sell */
      ppppuVar7 = ppppuStack_2d0;
      if (-1 < (char)bStack_2b9) {
        uStack_2c8 = (ulong)bStack_2b9;
        ppppuVar7 = &ppppuStack_2d0;
      }
      func_0x00792db8(param_1,ppppuVar7,uStack_2c8);
      if ((char)bStack_2b9 < '\0') {
        __ZdlPv(ppppuStack_2d0);
      }
      param_1 = apuStack_288;
      apuStack_288[0] = &UNK_01dbf1a0;
      apuStack_e0[0] = &UNK_01dbf1c8;
      func_0x00140dd0(alStack_278);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(apuStack_288,&UNK_01dbf1e0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_e0);
      if ((char)bStack_2a1 < '\0') {
        __ZdlPv(uStack_2b8);
        if ((long)uStack_290 < 0) goto LAB_000a4714;
LAB_000a46d0:
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
          return 1;
        }
      }
      else {
        if (-1 < (long)uStack_290) goto LAB_000a46d0;
LAB_000a4714:
        __ZdlPv(ppppuStack_2a0);
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
          return 1;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        }
      }
      ___stack_chk_fail();
      goto LAB_000a4738;
    }
  }
  pbVar8 = (byte *)(*pcRam0000000002067020)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c0c8c();
  }
  pcStack_2e0 = (char *)(*pcRam0000000002067008)();
  if (*pcStack_2e0 == '\x01') {
    lVar9 = 0;
    uVar6 = 0x240c081e65382445;
    do {
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_2e0[lVar9 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17);
      pcStack_2e0[lVar9 + 0xe] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar6 = lVar9 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_2e0[lVar9 + 1]) << 0x11);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0xd);
    *pcStack_2e0 = '\0';
  }
  pcStack_2e0 = pcStack_2e0 + 0xe;
  func_0x0011ab24(&pcStack_2e0);
  func_0x007a1b5c(param_1,"%s");
LAB_000a4d20:
/* WM - reversing this took months of machine time */
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xa4d24);
  (*pcVar2)();
}

