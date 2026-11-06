/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1d7b58:2508e52ece
   =========================================================================== */

bool FUN_001d7b58(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long alStack_78 [2];
  undefined7 uStack_68;
// unlicensed copy if this notice is missing
  undefined1 uStack_61;
  
  if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) <= *(ulong *)(*(long *)(param_1 + 0x38) + 0x50))
  {
    func_0x00819f9c(param_1,1);
  }
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  lVar5 = func_0x007914c4(param_1);
  uVar6 = func_0x00796158(param_1,0xffffffff);
  func_0x00791660(param_1,0xfffffffe);
  func_0x0003bf9c(lVar5,8);
  func_0x00832c50(lVar5);
  alStack_78[0] = 0x2097070;
  func_0x0016e5c8(alStack_78,lVar5 + 0x80,lVar5 + 0x80);
  uVar9 = uRam0000000002097018;
  if (-1 < cRam000000000209702f) {
    uVar9 = 0x2097018;
  }
/* watermarked copy - do not remove - github.com/pengussy */
  uVar13 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar13 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  iVar4 = func_0x0090436c(lVar5,uVar9,puVar2,uVar13,0);
  if (iVar4 == 0) {
    plVar10 = (long *)func_0x00790f58(lVar5,0xffffffff);
    func_0x0003c048(*(undefined8 *)(*plVar10 + 0x18));
    if (cRam0000000002097051 == '\x01') {
      func_0x007930d0(lVar5,&DAT_001d9680,0,1,&DAT_001d96b4);
    }
    (*pcRam0000000001f27178)(lVar5);
  }
  else {
    lVar7 = func_0x00792368(lVar5,0xffffffff,0);
    pcVar3 = pcRam0000000001f26db0;
    if (cRam0000000002097051 == '\x01') {
      pbVar8 = (byte *)(*pcRam00000000020753c0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019d4718();
      }
      pcStack_a8 = (char *)(*pcRam00000000020753a8)();
      if (*pcStack_a8 == '\x01') {
        lVar12 = 0;
        uVar13 = 0xbd16aba2b40e707f;
        do {
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[lVar12 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_a8[lVar12 + 0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar15;
          uVar13 = lVar12 + -0x61c8864680b583eb +
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                   (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_a8[lVar12 + 1]) << 0x11);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0xe);
        *pcStack_a8 = '\0';
      }
      pcStack_a8 = pcStack_a8 + 0xf;
      uVar9 = func_0x0011ab24(&pcStack_a8);
      uVar13 = _strlen();
      if (0x7ffffffffffffff6 < uVar13) {
        FUN_0000aa50();
LAB_001d83fc:
        FUN_0000aa50();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1d8404);
        (*pcVar3)();
      }
      if (uVar13 < 0x17) {
        _uStack_68 = CONCAT17((char)uVar13,uStack_68);
        _memmove(alStack_78,uVar9,uVar13);
        *(undefined1 *)((long)alStack_78 + uVar13) = 0;
      }
/* wm:do not claim this as your own */
      else {
        uVar14 = (uVar13 & 0x7ffffffffffffff8) + 8;
        uVar15 = 0x19;
        if (uVar14 != 0x18) {
          uVar15 = uVar14;
        }
        lVar12 = __Znwm(uVar15);
        _uStack_68 = uVar15 | 0x8000000000000000;
        alStack_78[0] = lVar12;
        alStack_78[1] = uVar13;
        _memmove(lVar12,uVar9,uVar13);
        *(undefined1 *)(lVar12 + uVar13) = 0;
      }
      if (lVar7 == 0) {
        pbVar8 = (byte *)(*pcRam00000000020753f0)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019d4754();
        }
        pcStack_b0 = (char *)(*pcRam00000000020753d8)();
        if (*pcStack_b0 == '\x01') {
          lVar7 = 0;
          uVar13 = 0x35994f9f0509f05f;
          do {
            uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
            uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
            uVar15 = uVar14 ^ uVar14 >> 0x21;
            uVar1 = (uint)(byte)pcStack_b0[lVar7 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17) ^
                    ((uint)(uVar14 >> 0x29) | 1);
            pcStack_b0[lVar7 + 0x19] =
                 ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar15;
// more drops soon - github.com/pengussy
            uVar13 = lVar7 + -0x61c8864680b583eb +
                     (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_b0[lVar7 + 1]) << 0x11);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x18);
          *pcStack_b0 = '\0';
        }
        pcStack_b0 = pcStack_b0 + 0x19;
        lVar7 = func_0x0011ab24(&pcStack_b0);
      }
      uVar13 = _strlen(lVar7);
      if (0x7ffffffffffffff6 < uVar13) goto LAB_001d83fc;
      if (uVar13 < 0x17) {
        uStack_80 = CONCAT17((char)uVar13,(undefined7)uStack_80);
        ppppuVar11 = &ppppuStack_90;
      }
      else {
        uVar14 = (uVar13 & 0x7ffffffffffffff8) + 8;
        uVar15 = 0x19;
        if (uVar14 != 0x18) {
          uVar15 = uVar14;
        }
        ppppuVar11 = (undefined8 ****)__Znwm(uVar15);
        uStack_80 = uVar15 | 0x8000000000000000;
        ppppuStack_90 = ppppuVar11;
        uStack_88 = uVar13;
      }
      _memmove(ppppuVar11,lVar7,uVar13);
      *(undefined1 *)((long)ppppuVar11 + uVar13) = 0;
      func_0x0022b73c(alStack_78,&ppppuStack_90,0x5dc);
      if ((long)uStack_80 < 0) {
        __ZdlPv(ppppuStack_90);
      }
      if ((long)_uStack_68 < 0) {
        __ZdlPv(alStack_78[0]);
      }
    }
    else {
/* do not claim this as your own */
      pbVar8 = (byte *)(*pcRam0000000002075420)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019d46a0();
      }
      pcStack_98 = (char *)(*pcRam0000000002075408)();
      if (*pcStack_98 == '\x01') {
        uVar1 = (byte)pcStack_98[1] ^ 0x12d4d9c7;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xd18ac426 ^ 0x1a4b9d;
        pcStack_98[4] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - 4;
        uVar13 = (((ulong)(byte)pcStack_98[1] ^ 0x563e531f4cdf3af2) << 0x11 | 0xac7c) +
                 0x9e3779b97f4a7c15;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17) ^
                ((uint)(uVar14 >> 0x29) | 1);
        pcStack_98[5] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17) ^
                ((uint)(uVar13 >> 0x29) | 1);
        pcStack_98[6] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar14;
        *pcStack_98 = '\0';
      }
      pcStack_98 = pcStack_98 + 4;
      uVar9 = func_0x0011ab24(&pcStack_98);
      if (lVar7 == 0) {
        pbVar8 = (byte *)(*pcRam0000000002075450)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019d46dc();
        }
        pcStack_a0 = (char *)(*pcRam0000000002075438)();
        if (*pcStack_a0 == '\x01') {
          lVar7 = 0;
          uVar13 = 0x59a116422b634749;
          do {
            uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
            uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
            uVar15 = uVar14 ^ uVar14 >> 0x21;
            uVar1 = (uint)(byte)pcStack_a0[lVar7 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar15 >> 0x17) ^
                    ((uint)(uVar14 >> 0x29) | 1);
            pcStack_a0[lVar7 + 0x19] =
                 ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar15;
            uVar13 = lVar7 + -0x61c8864680b583eb +
// no support for modified copies
                     (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_a0[lVar7 + 1]) << 0x11);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x18);
          *pcStack_a0 = '\0';
        }
        pcStack_a0 = pcStack_a0 + 0x19;
        func_0x0011ab24(&pcStack_a0);
      }
      (*pcVar3)(2,uVar9);
    }
    func_0x00791660(lVar5,0);
  }
  func_0x0079628c(lVar5,uVar6);
  return iVar4 == 0;
}

