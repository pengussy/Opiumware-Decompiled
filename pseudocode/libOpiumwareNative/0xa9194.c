/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xa9194:d9dc026aca
 */

undefined8 FUN_000a9194(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 == 0) {
    pbVar7 = (byte *)(*pcRam00000000020674a0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c1268();
    }
    pcStack_80 = (char *)(*pcRam0000000002067488)();
    if (*pcStack_80 == '\x01') {
      uVar1 = (byte)pcStack_80[1] ^ 0x7155338;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xaab6ca0f ^ 0x719553;
      pcStack_80[8] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) + 5;
      uVar5 = (((ulong)(byte)pcStack_80[1] ^ 0xf313fcfcf00fedd3) << 0x11 | 0x1e627) +
              0x9e3779b97f4a7c15;
/* WM - keep the notice, keep the source honest */
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[9] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_80[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar9;
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 8;
    uVar4 = func_0x0011ab24(&pcStack_80);
    func_0x007a1ba8(param_1,1,uVar4);
  }
  else {
    uVar4 = func_0x00792368(param_1,1,0);
    uVar5 = _strlen();
    if (uVar5 < 0x7ffffffffffffff7) {
      if (uVar5 < 0x17) {
        uStack_60 = CONCAT17((char)uVar5,(undefined7)uStack_60);
        ppppuVar6 = &ppppuStack_70;
      }
      else {
        uVar9 = (uVar5 & 0x7ffffffffffffff8) + 8;
        uVar10 = 0x19;
        if (uVar9 != 0x18) {
          uVar10 = uVar9;
        }
        ppppuVar6 = (undefined8 ****)__Znwm(uVar10);
/* WM - proprietary - see LICENSE - do not sell */
        uStack_60 = uVar10 | 0x8000000000000000;
        ppppuStack_70 = ppppuVar6;
        uStack_68 = uVar5;
      }
      _memmove(ppppuVar6,uVar4,uVar5);
      *(undefined1 *)((long)ppppuVar6 + uVar5) = 0;
      FUN_000a37f0(&uStack_58,&ppppuStack_70,1);
      if ((long)uStack_60 < 0) {
        __ZdlPv(ppppuStack_70);
      }
      if (-1 < (char)bStack_41) {
        uStack_50 = (ulong)bStack_41;
      }
      if (uStack_50 != 0) {
        __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
                  (&ppppuStack_70,&uStack_58,0);
        func_0x007932d0(param_1,(char)ppppuStack_70 == '\x01');
        if ((char)bStack_41 < '\0') {
          __ZdlPv(uStack_58);
        }
        return 1;
      }
      goto LAB_000a9618;
    }
  }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  FUN_0000aa50();
LAB_000a9618:
  pbVar7 = (byte *)(*pcRam00000000020674d0)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019c122c();
  }
  pcStack_78 = (char *)(*pcRam00000000020674b8)();
  if (*pcStack_78 == '\x01') {
    lVar8 = 0;
    uVar5 = 0xebaeff9de4ad0ddc;
    do {
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_78[lVar8 + 0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar5 = lVar8 + -0x61c8864680b583eb +
/* wm:keep the notice, keep the source honest */
              (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xd);
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 0xe;
  func_0x0011ab24(&pcStack_78);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xa9764);
  (*pcVar2)();
}

