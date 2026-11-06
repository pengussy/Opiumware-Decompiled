/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x200474:732147eed7
 */

undefined8 FUN_00200474(undefined8 param_1)

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
  ulong uStack_60;
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 == 0) {
    pbVar7 = (byte *)(*pcRam0000000002076020)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019d7b48();
    }
    pcStack_80 = (char *)(*pcRam0000000002076008)();
    if (*pcStack_80 == '\x01') {
      uVar1 = (byte)pcStack_80[1] ^ 0x5205b9df;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xf68236a5 ^ 0x29025f;
      pcStack_80[8] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - 0x1c;
      uVar5 = (((ulong)(byte)pcStack_80[1] ^ 0xb4d71a74964eb473) << 0x11 | 0x169ae) +
/* keep the notice, keep the source honest - github.com/pengussy */
              0x9e3779b97f4a7c15;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[9] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/*  more drops soon - github.com/pengussy  */
      uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_80[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_80[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar9;
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 8;
    uVar4 = func_0x0011ab24(&pcStack_80);
    func_0x007a1ba8(param_1,1,uVar4);
  }
  else {
// chat: discord.gg/sdkhDjTex
    uVar4 = func_0x00792368(param_1,1,0);
    uVar5 = _strlen();
    if (uVar5 < 0x7ffffffffffffff7) {
      if (uVar5 < 0x17) {
        uStack_48 = CONCAT17((char)uVar5,(undefined7)uStack_48);
        ppppuVar6 = &ppppuStack_58;
      }
      else {
        uVar9 = (uVar5 & 0x7ffffffffffffff8) + 8;
        uVar10 = 0x19;
        if (uVar9 != 0x18) {
          uVar10 = uVar9;
        }
        ppppuVar6 = (undefined8 ****)__Znwm(uVar10);
        uStack_48 = uVar10 | 0x8000000000000000;
        ppppuStack_58 = ppppuVar6;
        uStack_50 = uVar5;
      }
      _memmove(ppppuVar6,uVar4,uVar5);
      *(undefined1 *)((long)ppppuVar6 + uVar5) = 0;
/*  chat: discord.gg/sdkhDjTex  */
      ppppuStack_70 = (undefined8 ****)0x0;
      uStack_68 = 0;
      uStack_60 = 0;
      uVar5 = (*pcRam0000000001f275e0)(&ppppuStack_58,&ppppuStack_70,1);
      if ((uVar5 & 1) != 0) {
        uVar5 = uStack_68;
        ppppuVar6 = ppppuStack_70;
        if (-1 < (long)uStack_60) {
          uVar5 = uStack_60 >> 0x38;
          ppppuVar6 = &ppppuStack_70;
        }
        func_0x00792db8(param_1,ppppuVar6,uVar5);
        if ((long)uStack_60 < 0) {
          __ZdlPv(ppppuStack_70);
        }
        if ((long)uStack_48 < 0) {
          __ZdlPv(ppppuStack_58);
        }
        return 1;
      }
      goto LAB_00200900;
    }
  }
  FUN_0000aa50();
LAB_00200900:
  pbVar7 = (byte *)(*pcRam0000000002076050)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019d7b0c();
  }
  pcStack_78 = (char *)(*pcRam0000000002076038)();
  if (*pcStack_78 == '\x01') {
    lVar8 = 0;
    uVar5 = 0x8dc586fd43875bd4;
/* WM - keep the notice, keep the source honest */
    do {
      uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_78[lVar8 + 0x11] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar5 = lVar8 + -0x61c8864680b583eb +
              (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x10);
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 0x11;
  func_0x0011ab24(&pcStack_78);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x200a4c);
  (*pcVar2)();
}

