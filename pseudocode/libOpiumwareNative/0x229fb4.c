/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x229fb4:6223707d3b
 */

/* WARNING: Removing unreachable block (ram,0x0022ac68) */

void FUN_00229fb4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *******pppppppuVar3;
  byte bVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long extraout_x15;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  undefined8 *******pppppppuStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 *******pppppppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *******pppppppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  byte bStack_81;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  
  func_0x002299d8(&pppppppuStack_98,param_3);
  FUN_00229abc(&pppppppuStack_80,&pppppppuStack_98);
  if ((char)bStack_81 < '\0') {
    __ZdlPv(pppppppuStack_98);
  }
  FUN_00229abc(&pppppppuStack_98,param_2);
  pbVar6 = (byte *)(*pcRam00000000020773a0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019da4d8();
  }
  pcStack_f0 = (char *)(*pcRam0000000002077388)();
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  if (*pcStack_f0 == '\x01') {
    uVar2 = (byte)pcStack_f0[1] ^ 0xecd5cbe;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0x5469f347;
    pcStack_f0[0xb] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ 0x7d;
    uVar13 = (((ulong)(byte)pcStack_f0[1] ^ 0x41f4b3649ca93c60) << 0x11 | 0x83e9) + extraout_x15;
    uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar12 ^ uVar12 >> 0x21;
    uVar2 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar15 >> 0x17))
    ;
    pcStack_f0[0xc] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
    uVar13 = extraout_x15 + (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f0[2]) << 0x11) + 1;
    uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar12 ^ uVar12 >> 0x21;
    uVar2 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar15 >> 0x17))
    ;
    pcStack_f0[0xd] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
    uVar13 = extraout_x15 + (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f0[3]) << 0x11) + 2;
    uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar12 ^ uVar12 >> 0x21;
    uVar2 = (uint)(byte)pcStack_f0[4] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar15 >> 0x17))
    ;
    pcStack_f0[0xe] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    uVar13 = extraout_x15 + (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f0[4]) << 0x11) + 3;
    uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar12 ^ uVar12 >> 0x21;
    uVar2 = (uint)(byte)pcStack_f0[5] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar15 >> 0x17))
    ;
    pcStack_f0[0xf] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
    uVar13 = extraout_x15 + (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f0[5]) << 0x11) + 4;
    uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar12 ^ uVar12 >> 0x21;
    uVar2 = (uint)(byte)pcStack_f0[6] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar15 >> 0x17))
    ;
    pcStack_f0[0x10] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
    uVar13 = extraout_x15 + (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f0[6]) << 0x11) + 5;
    uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar12 ^ uVar12 >> 0x21;
    uVar2 = (uint)(byte)pcStack_f0[7] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar15 >> 0x17))
    ;
    pcStack_f0[0x11] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
    uVar13 = extraout_x15 + (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f0[7]) << 0x11) + 6;
    uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar12 ^ uVar12 >> 0x21;
    uVar2 = (uint)(byte)pcStack_f0[8] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar15 >> 0x17))
    ;
    pcStack_f0[0x12] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
    uVar13 = extraout_x15 + (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f0[8]) << 0x11) + 7;
    uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar12 ^ uVar12 >> 0x21;
    uVar2 = (uint)(byte)pcStack_f0[9] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar15 >> 0x17))
    ;
    pcStack_f0[0x13] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
    uVar13 = extraout_x15 + (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f0[9]) << 0x11) + 8;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar13 ^ uVar13 >> 0x21;
    uVar2 = (uint)(byte)pcStack_f0[10] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar12 >> 0x17))
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
    ;
    pcStack_f0[0x14] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar12;
    *pcStack_f0 = '\0';
  }
  pcStack_f0 = pcStack_f0 + 0xb;
  uVar7 = func_0x0011ab24(&pcStack_f0);
  lVar8 = _strlen();
  bVar4 = bStack_81;
  pppppppuVar11 = pppppppuStack_98;
  uVar13 = uStack_90;
  if (-1 < (char)bStack_81) {
    uVar13 = (ulong)bStack_81;
  }
  uVar12 = uVar13 + lVar8;
  if (0x7ffffffffffffff6 < uVar12) {
    FUN_0000aa50();
    goto LAB_0022aca8;
  }
  if (uVar12 < 0x17) {
    uStack_d8 = CONCAT17((char)uVar12,(undefined7)uStack_d8);
    pppppppuVar9 = &pppppppuStack_e8;
  }
  else {
    uVar15 = (uVar12 & 0x7ffffffffffffff8) + 8;
    uVar10 = 0x19;
    if (uVar15 != 0x18) {
      uVar10 = uVar15;
    }
    pppppppuVar9 = (undefined8 *******)__Znwm(uVar10);
    uStack_d8 = uVar10 | 0x8000000000000000;
    pppppppuStack_e8 = pppppppuVar9;
    uStack_e0 = uVar12;
/* wm:found on a paste site? it was re-uploaded illegally */
  }
  if (-1 < (char)bVar4) {
    pppppppuVar11 = &pppppppuStack_98;
  }
  _memcpy(pppppppuVar9,uVar7,lVar8);
  _memmove((long)pppppppuVar9 + lVar8,pppppppuVar11,uVar13);
  *(undefined1 *)((long)pppppppuVar9 + lVar8 + uVar13) = 0;
  pbVar6 = (byte *)(*pcRam00000000020773d0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019da514();
  }
  pcStack_f8 = (char *)(*pcRam00000000020773b8)();
  if (*pcStack_f8 == '\x01') {
    lVar8 = 0;
    uVar13 = 0x8b1b68dd2484ad21;
    do {
      uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar12 ^ uVar12 >> 0x21;
      uVar2 = (uint)(byte)pcStack_f8[lVar8 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar15 >> 0x17);
      pcStack_f8[lVar8 + 0xf] =
           ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar15;
      uVar13 = lVar8 + -0x61c8864680b583eb +
               (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f8[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xe);
    *pcStack_f8 = '\0';
  }
  pcStack_f8 = pcStack_f8 + 0xf;
  uVar7 = func_0x0011ab24(&pcStack_f8);
  uVar10 = _strlen();
  uVar15 = uStack_d8;
  uVar14 = (uStack_d8 & 0x7fffffffffffffff) - 1;
/* origin: github.com/pengussy - github.com/pengussy */
  uVar13 = uStack_e0;
  uVar12 = uVar14;
  if (-1 < (long)uStack_d8) {
    uVar12 = 0x16;
    uVar13 = uStack_d8 >> 0x38;
  }
  if (uVar12 - uVar13 < uVar10) {
    uVar12 = uVar13 + uVar10;
    if (0x7ffffffffffffff6 < uVar12) {
      FUN_0000aa50();
      goto LAB_0022aca8;
    }
    if ((long)uStack_d8 < 0) {
      if (uVar14 < 0x3ffffffffffffff4) goto LAB_0022a6e4;
      uVar14 = 0x7ffffffffffffff8;
      pppppppuVar11 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
      pppppppuVar9 = pppppppuStack_e8;
    }
    else {
      uVar14 = 0x16;
LAB_0022a6e4:
      uVar1 = uVar12;
      if (uVar12 <= uVar14 * 2) {
        uVar1 = uVar14 * 2;
      }
      uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
      uVar14 = 0x19;
      if (uVar1 != 0x18) {
        uVar14 = uVar1;
      }
      pppppppuVar11 = (undefined8 *******)__Znwm(uVar14);
      pppppppuVar9 = pppppppuStack_e8;
      if (-1 < (long)uVar15) {
        pppppppuVar9 = &pppppppuStack_e8;
      }
    }
    if (uVar13 != 0) {
      _memmove(pppppppuVar11,pppppppuVar9,uVar13);
/* if you paid for this, you were scammed - github.com/pengussy */
    }
    _memmove((long)pppppppuVar11 + uVar13,uVar7,uVar10);
    *(undefined1 *)((long)pppppppuVar11 + uVar12) = 0;
    if ((long)uVar15 < 0) {
      __ZdlPv(pppppppuStack_e8);
    }
    uStack_d8 = uVar14 | 0x8000000000000000;
    pppppppuStack_e8 = pppppppuVar11;
    uStack_e0 = uVar12;
  }
  else if (uVar10 != 0) {
    pppppppuVar11 = pppppppuStack_e8;
    if (-1 < (long)uStack_d8) {
      pppppppuVar11 = &pppppppuStack_e8;
    }
    _memmove((long)pppppppuVar11 + uVar13,uVar7,uVar10);
    uVar13 = uVar13 + uVar10;
    if ((long)uStack_d8 < 0) {
      uStack_e0 = uVar13;
    }
    else {
      uStack_d8 = CONCAT17((char)uVar13,(undefined7)uStack_d8) & 0x7fffffffffffffff;
    }
    *(undefined1 *)((long)pppppppuVar11 + uVar13) = 0;
  }
  uVar15 = uStack_d8;
  uVar13 = uStack_e0;
  pppppppuVar11 = pppppppuStack_e8;
/* WM - donate: donate/README.md */
  uStack_c0 = uStack_d8;
  uStack_c8 = uStack_e0;
  pppppppuStack_d0 = pppppppuStack_e8;
  uStack_e0 = 0;
  uStack_d8 = 0;
  pppppppuStack_e8 = (undefined8 *******)0x0;
  uVar12 = uStack_78;
  pppppppuVar9 = pppppppuStack_80;
  if (-1 < (char)bStack_69) {
    uVar12 = (ulong)bStack_69;
    pppppppuVar9 = &pppppppuStack_80;
  }
  uVar14 = (uVar15 & 0x7fffffffffffffff) - 1;
  uVar10 = uVar14;
  if (-1 < (long)uVar15) {
    uVar10 = 0x16;
    uVar13 = uVar15 >> 0x38;
  }
  if (uVar10 - uVar13 < uVar12) {
    uVar10 = uVar13 + uVar12;
    if (0x7ffffffffffffff6 < uVar10) {
      FUN_0000aa50();
      goto LAB_0022aca8;
    }
    if ((long)uVar15 < 0) {
      if (uVar14 < 0x3ffffffffffffff4) goto LAB_0022a850;
      uVar14 = 0x7ffffffffffffff8;
      pppppppuVar11 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
      pppppppuVar3 = pppppppuStack_d0;
    }
    else {
      uVar14 = 0x16;
LAB_0022a850:
      uVar1 = uVar10;
      if (uVar10 <= uVar14 * 2) {
        uVar1 = uVar14 * 2;
      }
      uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
/*  chat: discord.gg/sdkhDjTex  */
      uVar14 = 0x19;
      if (uVar1 != 0x18) {
        uVar14 = uVar1;
      }
      pppppppuVar11 = (undefined8 *******)__Znwm(uVar14);
      pppppppuVar3 = pppppppuStack_d0;
      if (-1 < (long)uVar15) {
        pppppppuVar3 = &pppppppuStack_d0;
      }
    }
    if (uVar13 != 0) {
      _memmove(pppppppuVar11,pppppppuVar3,uVar13);
    }
    _memmove((long)pppppppuVar11 + uVar13,pppppppuVar9,uVar12);
    *(undefined1 *)((long)pppppppuVar11 + uVar10) = 0;
    if ((long)uVar15 < 0) {
      __ZdlPv(pppppppuStack_d0);
    }
    uStack_c0 = uVar14 | 0x8000000000000000;
    pppppppuStack_d0 = pppppppuVar11;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    uStack_c8 = uVar10;
  }
  else if (uVar12 != 0) {
    if (-1 < (long)uVar15) {
      pppppppuVar11 = &pppppppuStack_d0;
    }
    _memmove((long)pppppppuVar11 + uVar13,pppppppuVar9,uVar12);
    uVar13 = uVar13 + uVar12;
    if ((long)uStack_c0 < 0) {
      uStack_c8 = uVar13;
    }
    else {
      uStack_c0 = CONCAT17((char)uVar13,(undefined7)uStack_c0) & 0x7fffffffffffffff;
    }
    *(undefined1 *)((long)pppppppuVar11 + uVar13) = 0;
  }
  uStack_a8 = uStack_c8;
  pppppppuStack_b0 = pppppppuStack_d0;
  uStack_a0 = uStack_c0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  pppppppuStack_d0 = (undefined8 *******)0x0;
  pbVar6 = (byte *)(*pcRam0000000002077400)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019da550();
  }
  pcStack_100 = (char *)(*pcRam00000000020773e8)();
  if (*pcStack_100 == '\x01') {
    uVar2 = (byte)pcStack_100[1] ^ 0x41b6e395;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) + 0x14fa6084 ^ 0x487ac1;
    pcStack_100[4] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) + 0xaa;
    uVar13 = (((ulong)(byte)pcStack_100[1] ^ 0xbbc05a93dadaf177) << 0x11 | 0x17780) +
             0x9e3779b97f4a7c15;
    uVar12 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
// WM - chat: discord.gg/sdkhDjTex
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar12 ^ uVar12 >> 0x21;
    uVar2 = (uint)(byte)pcStack_100[2] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
    pcStack_100[5] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar15;
    uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar13 ^ uVar13 >> 0x21;
    uVar2 = (uint)(byte)pcStack_100[3] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1);
    pcStack_100[6] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar12;
    *pcStack_100 = '\0';
  }
  pcStack_100 = pcStack_100 + 4;
  uVar7 = func_0x0011ab24(&pcStack_100);
  uVar10 = _strlen();
  uVar15 = uStack_a0;
  uVar14 = (uStack_a0 & 0x7fffffffffffffff) - 1;
  uVar13 = uStack_a8;
  uVar12 = uVar14;
  if (-1 < (long)uStack_a0) {
    uVar12 = 0x16;
    uVar13 = uStack_a0 >> 0x38;
  }
  if (uVar10 <= uVar12 - uVar13) {
    if (uVar10 != 0) {
      pppppppuVar11 = pppppppuStack_b0;
      if (-1 < (long)uStack_a0) {
        pppppppuVar11 = &pppppppuStack_b0;
      }
      _memmove((long)pppppppuVar11 + uVar13,uVar7,uVar10);
      uVar13 = uVar13 + uVar10;
      if ((long)uStack_a0 < 0) {
        uStack_a8 = uVar13;
      }
      else {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        uStack_a0 = CONCAT17((char)uVar13,(undefined7)uStack_a0) & 0x7fffffffffffffff;
      }
      *(undefined1 *)((long)pppppppuVar11 + uVar13) = 0;
    }
    goto LAB_0022abe4;
  }
  uVar12 = uVar13 + uVar10;
  if (0x7ffffffffffffff6 < uVar12) {
    FUN_0000aa50();
LAB_0022aca8:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x22acac);
    (*pcVar5)();
  }
  if ((long)uStack_a0 < 0) {
    if (uVar14 < 0x3ffffffffffffff4) goto LAB_0022ab5c;
    uVar14 = 0x7ffffffffffffff8;
    pppppppuVar11 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
    pppppppuVar9 = pppppppuStack_b0;
  }
  else {
    uVar14 = 0x16;
LAB_0022ab5c:
    uVar1 = uVar12;
    if (uVar12 <= uVar14 * 2) {
      uVar1 = uVar14 * 2;
    }
    uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
    uVar14 = 0x19;
    if (uVar1 != 0x18) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      uVar14 = uVar1;
    }
    pppppppuVar11 = (undefined8 *******)__Znwm(uVar14);
    pppppppuVar9 = pppppppuStack_b0;
    if (-1 < (long)uVar15) {
      pppppppuVar9 = &pppppppuStack_b0;
    }
  }
  if (uVar13 != 0) {
    _memmove(pppppppuVar11,pppppppuVar9,uVar13);
  }
  _memmove((long)pppppppuVar11 + uVar13,uVar7,uVar10);
  *(undefined1 *)((long)pppppppuVar11 + uVar12) = 0;
  if ((long)uVar15 < 0) {
    __ZdlPv(pppppppuStack_b0);
  }
  uStack_a0 = uVar14 | 0x8000000000000000;
  pppppppuStack_b0 = pppppppuVar11;
  uStack_a8 = uVar12;
LAB_0022abe4:
  param_1[1] = uStack_a8;
  *param_1 = (long)pppppppuStack_b0;
/* donate: donate/README.md */
  param_1[2] = uStack_a0;
  if ((long)uStack_c0 < 0) {
    __ZdlPv(pppppppuStack_d0);
  }
  if ((long)uStack_d8 < 0) {
    __ZdlPv(pppppppuStack_e8);
  }
  if ((char)bStack_81 < '\0') {
    __ZdlPv(pppppppuStack_98);
  }
  return;
}

