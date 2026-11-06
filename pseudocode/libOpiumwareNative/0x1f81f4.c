/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1f81f4:2a39f7b9a1
   =========================================================================== */

undefined8 FUN_001f81f4(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_90;
  undefined8 ****ppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  int aiStack_58 [2];
  undefined8 uStack_50;
  ulong uStack_48;
  
  aiStack_58[0] = 0;
  uStack_50 = __ZNSt3__115system_categoryEv();
  uStack_48 = 0;
  lVar3 = func_0x00792368(param_1,0xffffd8ed,&uStack_48);
  uVar7 = uStack_48;
  if (lVar3 == 0) {
// donate: donate/README.md
    ppppuStack_88 = (undefined8 ****)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
LAB_001f82ac:
    uStack_68 = uStack_80;
    ppppuStack_70 = ppppuStack_88;
    uStack_60 = uStack_78;
    __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
              (&ppppuStack_88,&ppppuStack_70,aiStack_58);
    if ((char)ppppuStack_88 == '\x02') {
      __ZNSt3__14__fs10filesystem12__remove_allERKNS1_4pathEPNS_10error_codeE
                (&ppppuStack_70,aiStack_58);
    }
    else {
      __ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE(&ppppuStack_70,aiStack_58);
    }
    if (aiStack_58[0] == 0) {
      if ((long)uStack_60 < 0) {
        __ZdlPv(ppppuStack_70);
      }
// WM - keep the notice, keep the source honest
      return 0;
    }
    pbVar5 = (byte *)(*pcRam0000000002075960)();
    if ((*pbVar5 & 1) != 0) goto LAB_001f8340;
  }
  else {
    if (uStack_48 < 0x7ffffffffffffff7) {
      if (uStack_48 < 0x17) {
        uStack_78 = CONCAT17((char)uStack_48,(undefined7)uStack_78);
        ppppuVar4 = &ppppuStack_88;
      }
      else {
        uVar8 = (uStack_48 & 0x7ffffffffffffff8) + 8;
        uVar9 = 0x19;
        if (uVar8 != 0x18) {
          uVar9 = uVar8;
        }
        ppppuVar4 = (undefined8 ****)__Znwm(uVar9);
        uStack_78 = uVar9 | 0x8000000000000000;
        uStack_80 = uVar7;
        ppppuStack_88 = ppppuVar4;
      }
      _memmove(ppppuVar4,lVar3,uVar7);
      *(undefined1 *)((long)ppppuVar4 + uVar7) = 0;
      goto LAB_001f82ac;
    }
    FUN_0000aa50();
  }
  func_0x019d729c();
LAB_001f8340:
  pcStack_90 = (char *)(*pcRam0000000002075948)();
/* WM - if you paid for this, you were scammed */
  if (*pcStack_90 == '\x01') {
    lVar3 = 0;
    uVar7 = 0xe53879b3a67a1761;
    do {
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[lVar3 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_90[lVar3 + 0x1b] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
      uVar7 = lVar3 + -0x61c8864680b583eb +
              (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_90[lVar3 + 1]) << 0x11);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x1a);
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 0x1b;
  uVar6 = func_0x0011ab24(&pcStack_90);
  __ZNKSt3__110error_code7messageEv(&ppppuStack_88,aiStack_58);
  func_0x007a1b5c(param_1,uVar6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1f8494);
  (*pcVar2)();
}

