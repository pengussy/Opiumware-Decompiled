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
 *  file-id: 0x2396e4:a88f47be93
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00239f2c) */
/* WARNING: Removing unreachable block (ram,0x00239f3c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_002396e4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
/*  keep the notice, keep the source honest  */
  long *plVar11;
  long *plVar12;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 *******pppppppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 *******pppppppuStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  byte bStack_117;
  undefined1 auStack_a0 [48];
  long lStack_70;
/* WM - keep the notice, keep the source honest */
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  pbVar4 = (byte *)(*pcRam00000000020783c0)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019dbcd4();
  }
  pcStack_1b8 = (char *)(*pcRam00000000020783a8)();
  if (*pcStack_1b8 == '\x01') {
    lVar7 = 0;
    uVar8 = 0x33ef02db86055f1b;
    do {
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1b8[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_1b8[lVar7 + 0x17] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar10;
      uVar8 = lVar7 + -0x61c8864680b583eb +
              (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_1b8[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x16);
    *pcStack_1b8 = '\0';
  }
  pcStack_1b8 = pcStack_1b8 + 0x17;
// WM - found on a paste site? it was re-uploaded illegally
  uVar5 = func_0x0011ab24(&pcStack_1b8);
  uVar8 = _strlen();
  if (uVar8 < 0x7ffffffffffffff7) {
    if (uVar8 < 0x17) {
      uStack_120 = CONCAT17((char)uVar8,(undefined7)uStack_120);
      pppppppuVar6 = &pppppppuStack_130;
    }
    else {
      uVar9 = (uVar8 & 0x7ffffffffffffff8) + 8;
      uVar10 = 0x19;
      if (uVar9 != 0x18) {
        uVar10 = uVar9;
      }
      pppppppuVar6 = (undefined8 *******)__Znwm(uVar10);
      uStack_120 = uVar10 | 0x8000000000000000;
      pppppppuStack_130 = pppppppuVar6;
      uStack_128 = uVar8;
    }
    _memmove(pppppppuVar6,uVar5,uVar8);
    *(undefined1 *)((long)pppppppuVar6 + uVar8) = 0;
    pbVar4 = (byte *)(*pcRam00000000020783f0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019dbd10();
    }
    pcStack_1c0 = (char *)(*pcRam00000000020783d8)();
    if (*pcStack_1c0 == '\x01') {
      uVar1 = (byte)pcStack_1c0[1] ^ 0xdeb4cabe;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x70f17e0d;
      pcStack_1c0[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x7d;
      uVar8 = (((ulong)(byte)pcStack_1c0[1] ^ 0xcb02776425a2ca6f) << 0x11 | 0x19604) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1c0[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_1c0[7] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_1c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* do not claim this as your own - github.com/pengussy */
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1c0[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_1c0[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_1c0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1c0[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_1c0[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_1c0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1c0[5] ^ (uint)uVar9 ^ 0xffffffc3;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_1c0[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      *pcStack_1c0 = '\0';
    }
    pcStack_1c0 = pcStack_1c0 + 6;
    uVar5 = func_0x0011ab24(&pcStack_1c0);
    uVar8 = _strlen();
    if (uVar8 < 0x7ffffffffffffff7) {
      if (uVar8 < 0x17) {
        uStack_138 = CONCAT17((char)uVar8,(undefined7)uStack_138);
        pppppppuVar6 = &pppppppuStack_148;
      }
      else {
        uVar9 = (uVar8 & 0x7ffffffffffffff8) + 8;
        uVar10 = 0x19;
        if (uVar9 != 0x18) {
          uVar10 = uVar9;
        }
        pppppppuVar6 = (undefined8 *******)__Znwm(uVar10);
        uStack_138 = uVar10 | 0x8000000000000000;
        pppppppuStack_148 = pppppppuVar6;
        uStack_140 = uVar8;
      }
// WM - origin: github.com/pengussy
      _memmove(pppppppuVar6,uVar5,uVar8);
      *(undefined1 *)((long)pppppppuVar6 + uVar8) = 0;
      pbVar4 = (byte *)(*pcRam0000000002078420)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019dbd4c();
      }
      pcStack_1c8 = (char *)(*pcRam0000000002078408)();
      if (*pcStack_1c8 == '\x01') {
        lVar7 = 0;
        uVar8 = 0x2666f6cb1ff43b9f;
        do {
          uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_1c8[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
// if you paid for this, you were scammed
          pcStack_1c8[lVar7 + 0xe] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
               (byte)uVar10;
          uVar8 = lVar7 + -0x61c8864680b583eb +
                  (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_1c8[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0xd);
        *pcStack_1c8 = '\0';
      }
      pcStack_1c8 = pcStack_1c8 + 0xe;
      uStack_178 = func_0x0011ab24(&pcStack_1c8);
      pbVar4 = (byte *)(*pcRam0000000002078450)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019dbd88();
      }
      pcStack_1d0 = (char *)(*pcRam0000000002078438)();
      if (*pcStack_1d0 == '\x01') {
        lVar7 = 0;
        uVar8 = 0xc0fc35746d7e3b93;
        do {
          uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_1d0[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_1d0[lVar7 + 0x12] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10
          ;
          uVar8 = lVar7 + -0x61c8864680b583eb +
                  (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_1d0[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x11);
        *pcStack_1d0 = '\0';
      }
      pcStack_1d0 = pcStack_1d0 + 0x12;
      uStack_180 = func_0x0011ab24(&pcStack_1d0);
// WM - reversing this took months of machine time
      func_0x00171f84(auStack_a0,&uStack_178,&uStack_180);
      uStack_168 = 0;
      lStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_150 = 0x3f800000;
      plStack_1b0 = &lStack_170;
      func_0x00190320(&plStack_1b0,auStack_a0,auStack_a0);
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_190 = 0x3f800000;
      FUN_001d2b10(&uStack_118,&pppppppuStack_130,&pppppppuStack_148,param_2 + 8,&lStack_170,
                   &plStack_1b0,&UNK_000493e0,0);
      plVar11 = plStack_1a0;
      while (plVar12 = plVar11, plVar11 != (long *)0x0) {
        while( true ) {
          plVar11 = (long *)*plVar12;
          if (*(char *)((long)plVar12 + 0x3f) < '\0') {
            __ZdlPv(plVar12[5]);
            cVar2 = *(char *)((long)plVar12 + 0x27);
          }
          else {
            cVar2 = *(char *)((long)plVar12 + 0x27);
          }
          if (-1 < cVar2) break;
          __ZdlPv(plVar12[2]);
          __ZdlPv(plVar12);
          plVar12 = plVar11;
          if (plVar11 == (long *)0x0) goto LAB_00239e3c;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        }
        __ZdlPv(plVar12);
      }
LAB_00239e3c:
      plVar12 = plStack_1b0;
      plStack_1b0 = (long *)0x0;
      plVar11 = plStack_160;
      if (plVar12 != (long *)0x0) {
        __ZdlPv();
        plVar11 = plStack_160;
      }
      while (plVar11 != (long *)0x0) {
        while( true ) {
          plVar12 = (long *)*plVar11;
          if (*(char *)((long)plVar11 + 0x3f) < '\0') {
            __ZdlPv(plVar11[5]);
            cVar2 = *(char *)((long)plVar11 + 0x27);
          }
          else {
            cVar2 = *(char *)((long)plVar11 + 0x27);
          }
          if (-1 < cVar2) break;
// WM - no support for modified copies
          __ZdlPv(plVar11[2]);
          __ZdlPv(plVar11);
          plVar11 = plVar12;
          if (plVar12 == (long *)0x0) goto LAB_00239ea4;
        }
        __ZdlPv(plVar11);
        plVar11 = plVar12;
      }
LAB_00239ea4:
      lVar7 = lStack_170;
      lStack_170 = 0;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      if ((long)uStack_138 < 0) {
        __ZdlPv(pppppppuStack_148);
        if ((long)uStack_120 < 0) goto LAB_00239f5c;
LAB_00239ed4:
        if ((bStack_117 & 1) != 0) goto LAB_00239edc;
LAB_00239f6c:
        param_1 = (undefined8 *)___cxa_allocate_exception(0x10);
        pbVar4 = (byte *)(*pcRam0000000002078480)();
        if ((*pbVar4 & 1) == 0) goto LAB_0023a0c4;
      }
      else {
        if (-1 < (long)uStack_120) goto LAB_00239ed4;
LAB_00239f5c:
        __ZdlPv(pppppppuStack_130);
/* if you paid for this, you were scammed - github.com/pengussy */
        if ((bStack_117 & 1) == 0) goto LAB_00239f6c;
LAB_00239edc:
        *param_1 = &UNK_01dc0d78;
        param_1[3] = param_1;
        func_0x001290c4(&uStack_118);
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
          return;
        }
        ___stack_chk_fail();
LAB_0023a0c4:
        func_0x019dbdc4();
      }
      pcStack_1d8 = (char *)(*pcRam0000000002078468)();
      if (*pcStack_1d8 == '\x01') {
        lVar7 = 0;
        uVar8 = 0xd8a8ebd8bd7c8251;
        do {
          uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_1d8[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                  ((uint)(uVar9 >> 0x29) | 1);
          pcStack_1d8[lVar7 + 0x24] =
               ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
          uVar8 = lVar7 + -0x61c8864680b583eb +
                  (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_1d8[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
/* wm:proprietary - see LICENSE - do not sell */
        } while (lVar7 != 0x23);
        *pcStack_1d8 = '\0';
      }
      pcStack_1d8 = pcStack_1d8 + 0x24;
      uVar5 = func_0x0011ab24(&pcStack_1d8);
      __ZNSt13runtime_errorC1EPKc(param_1,uVar5);
      ___cxa_throw(param_1,PTR___ZTISt13runtime_error_01f204f0,
                   PTR___ZNSt13runtime_errorD1Ev_01f20478);
      goto LAB_0023a0bc;
    }
  }
  else {
    FUN_0000aa50();
  }
  FUN_0000aa50();
LAB_0023a0bc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x23a0c0);
  (*pcVar3)();
}

