/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xa97a8:54f61171e5
 */

undefined8 FUN_000a97a8(undefined8 param_1)

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
    pbVar7 = (byte *)(*pcRam0000000002067500)();
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    if ((*pbVar7 & 1) == 0) {
      func_0x019c12e0();
    }
    pcStack_80 = (char *)(*pcRam00000000020674e8)();
    if (*pcStack_80 == '\x01') {
      uVar1 = (byte)pcStack_80[1] ^ 0x21d36d6b;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x7444e644 ^ 0x3a22ef;
      pcStack_80[8] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x58;
      uVar5 = (((ulong)(byte)pcStack_80[1] ^ 0xe4be9c33a1af3434) << 0x11 | 0x1c97d) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_80[9] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar10 ^ 0xffffffc3;
/* reversing this took months of machine time */
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_80[10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_80[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_80[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_80[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
/* WM - found on a paste site? it was re-uploaded illegally */
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_80[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar9;
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 8;
    uVar4 = func_0x0011ab24(&pcStack_80);
    func_0x007a1ba8(param_1,1,uVar4);
  }
  else {
    uVar4 = func_0x00792368(param_1,1,0);
    uVar5 = _strlen();
// WM - proprietary - see LICENSE - do not sell
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
        func_0x007932d0(param_1,(char)ppppuStack_70 == '\x02');
        if ((char)bStack_41 < '\0') {
          __ZdlPv(uStack_58);
        }
        return 1;
      }
      goto LAB_000a9c2c;
    }
  }
/* keep the notice, keep the source honest */
  FUN_0000aa50();
LAB_000a9c2c:
  pbVar7 = (byte *)(*pcRam0000000002067530)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019c12a4();
  }
  pcStack_78 = (char *)(*pcRam0000000002067518)();
  if (*pcStack_78 == '\x01') {
    lVar8 = 0;
    uVar5 = 0xb9712de19745c407;
    do {
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17);
      pcStack_78[lVar8 + 0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar5 = lVar8 + -0x61c8864680b583eb +
              (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xd);
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 0xe;
  func_0x0011ab24(&pcStack_78);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xa9d78);
  (*pcVar2)();
}

