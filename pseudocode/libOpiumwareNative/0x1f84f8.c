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
 *  file-id: 0x1f84f8:a6907ce3a7
 *  --------------------------------------------------------------------------*/

undefined8 FUN_001f84f8(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_2b0;
  undefined8 ****ppppuStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined *apuStack_288 [2];
  undefined1 auStack_278 [16];
  byte abStack_268 [8];
  undefined8 auStack_260 [48];
  undefined *apuStack_e0 [19];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_290 = 0;
  lVar3 = func_0x00792368(param_1,0xffffd8ed,&uStack_290);
  uVar6 = uStack_290;
  if (lVar3 == 0) {
    ppppuStack_2a8 = (undefined8 ****)0x0;
// WM - chat: discord.gg/sdkhDjTex
    uStack_2a0 = 0;
    uStack_298 = 0;
LAB_001f85b0:
    func_0x001f887c(apuStack_288,&ppppuStack_2a8,4);
    if ((long)uStack_298 < 0) {
      __ZdlPv(ppppuStack_2a8);
    }
    if ((abStack_268[*(long *)(apuStack_288[0] + -0x18)] & 5) != 0) {
      pbVar5 = (byte *)(*pcRam0000000002075990)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019d72d8();
      }
      pcStack_2b0 = (char *)(*pcRam0000000002075978)();
      if (*pcStack_2b0 == '\x01') {
        lVar3 = 0;
        uVar6 = 0xafe1a24fbee405b5;
        do {
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_2b0[lVar3 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1)
          ;
          pcStack_2b0[lVar3 + 0x21] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
          uVar6 = lVar3 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_2b0[lVar3 + 1]) << 0x11);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x20);
        *pcStack_2b0 = '\0';
      }
      pcStack_2b0 = pcStack_2b0 + 0x21;
      func_0x0011ab24(&pcStack_2b0);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_001f87fc;
    }
    func_0x00140b70(&ppppuStack_2a8,
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
                    *(undefined8 *)((long)auStack_260 + *(long *)(apuStack_288[0] + -0x18)),0);
    uVar6 = uStack_2a0;
    ppppuVar4 = ppppuStack_2a8;
    if (-1 < (long)uStack_298) {
      uVar6 = uStack_298 >> 0x38;
      ppppuVar4 = &ppppuStack_2a8;
    }
    func_0x00792db8(param_1,ppppuVar4,uVar6);
    if ((long)uStack_298 < 0) {
      __ZdlPv(ppppuStack_2a8);
    }
    apuStack_288[0] = &UNK_01dbf1a0;
    apuStack_e0[0] = &UNK_01dbf1c8;
    func_0x00140dd0(auStack_278);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(apuStack_288,&UNK_01dbf1e0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_e0);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
      return 1;
    }
    ___stack_chk_fail();
  }
  else if (uStack_290 < 0x7ffffffffffffff7) {
    if (uStack_290 < 0x17) {
      uStack_298 = CONCAT17((char)uStack_290,(undefined7)uStack_298);
      ppppuVar4 = &ppppuStack_2a8;
    }
    else {
      uVar7 = (uStack_290 & 0x7ffffffffffffff8) + 8;
      uVar8 = 0x19;
      if (uVar7 != 0x18) {
        uVar8 = uVar7;
// WM - stripping the watermark breaks the license
      }
      ppppuVar4 = (undefined8 ****)__Znwm(uVar8);
      uStack_298 = uVar8 | 0x8000000000000000;
      uStack_2a0 = uVar6;
      ppppuStack_2a8 = ppppuVar4;
    }
    _memmove(ppppuVar4,lVar3,uVar6);
    *(undefined1 *)((long)ppppuVar4 + uVar6) = 0;
    goto LAB_001f85b0;
  }
  FUN_0000aa50();
LAB_001f87fc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1f8800);
  (*pcVar2)();
}

