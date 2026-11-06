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
 *  file-id: 0xde8d8:50d69c3f3a
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x000df3ac) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000de8d8(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *******pppppppuVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  
  uStack_58 = 0;
  lVar6 = func_0x00792368(param_1,2,&uStack_58);
  uVar11 = uStack_58;
  if (lVar6 == 0) {
    func_0x00792a48(param_1);
    return 1;
  }
  if (0x7ffffffffffffff6 < uStack_58) {
    FUN_0000aa50();
LAB_000e03a0:
    FUN_0001c430();
    goto LAB_000e03c4;
  }
  if (uStack_58 < 0x17) {
    uStack_60 = CONCAT17((char)uStack_58,(undefined7)uStack_60);
    pppppppuVar7 = &pppppppuStack_70;
  }
  else {
    uVar10 = (uStack_58 & 0x7ffffffffffffff8) + 8;
    uVar12 = 0x19;
    if (uVar10 != 0x18) {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar12 = uVar10;
    }
    pppppppuVar7 = (undefined8 *******)__Znwm(uVar12);
    uStack_60 = uVar12 | 0x8000000000000000;
    uStack_68 = uVar11;
    pppppppuStack_70 = pppppppuVar7;
  }
  _memmove(pppppppuVar7,lVar6,uVar11);
  *(undefined1 *)((long)pppppppuVar7 + uVar11) = 0;
  pbVar8 = (byte *)(*pcRam000000000206a5c0)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c4f58();
  }
  pcStack_78 = (char *)(*pcRam000000000206a5a8)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0x77cdbebc;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xdeaf12f0 ^ 0x5e8855;
    pcStack_78[9] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x81;
    uVar11 = (((ulong)(byte)pcStack_78[1] ^ 0x52b13dc92d81108) << 0x11 | 0xa56) + 0x9e3779b97f4a7c15
    ;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar10 ^ uVar10 >> 0x21;
/* do not claim this as your own - github.com/pengussy */
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_78[10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar12;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_78[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar12;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_78[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar12;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_78[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar12;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_78[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar12;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_78[0xf] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar12;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[8] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
    pcStack_78[0x10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 9;
  uVar9 = func_0x0011ab24(&pcStack_78);
  uVar11 = _strlen();
  if ((long)uStack_60._7_1_ < 0) {
    if (uVar11 == uStack_68) {
      if (uVar11 == 0xffffffffffffffff) goto LAB_000e03a0;
      iVar5 = _memcmp(pppppppuStack_70,uVar9);
      if (iVar5 == 0) goto LAB_000df398;
    }
LAB_000ded74:
    pbVar8 = (byte *)(*pcRam000000000206a5f0)();
    if ((*pbVar8 & 1) == 0) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      func_0x019c4f94();
    }
    pcStack_80 = (char *)(*pcRam000000000206a5d8)();
    if (*pcStack_80 == '\x01') {
      lVar6 = 0;
      uVar11 = 0x3e01328fd9936c45;
      do {
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[lVar6 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_80[lVar6 + 0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar12;
        uVar11 = lVar6 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_80[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      } while (lVar6 != 0xd);
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 0xe;
    uVar9 = func_0x0011ab24(&pcStack_80);
    uVar11 = _strlen();
    if ((long)uStack_60._7_1_ < 0) {
      if (uVar11 == uStack_68) {
        if (uVar11 == 0xffffffffffffffff) {
          FUN_0001c430();
          goto LAB_000e03c4;
        }
        iVar5 = _memcmp(pppppppuStack_70,uVar9);
        goto joined_r0x000deeb8;
      }
    }
    else if (uVar11 == (long)uStack_60._7_1_) {
      iVar5 = _memcmp(&pppppppuStack_70,uVar9);
joined_r0x000deeb8:
      if (iVar5 == 0) {
        uVar9 = 1;
        goto LAB_000df39c;
      }
    }
    pbVar8 = (byte *)(*pcRam000000000206a620)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c4fd0();
    }
    pcStack_88 = (char *)(*pcRam000000000206a608)();
    if (*pcStack_88 == '\x01') {
      lVar6 = 0;
      uVar11 = 0x7e4ca7a099186e0b;
      do {
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
// proprietary - see LICENSE - do not sell
        uVar1 = (uint)(byte)pcStack_88[lVar6 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_88[lVar6 + 0xf] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar12;
        uVar11 = lVar6 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_88[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0xe);
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 0xf;
    uVar9 = func_0x0011ab24(&pcStack_88);
    uVar11 = _strlen();
    if ((long)uStack_60._7_1_ < 0) {
      if (uVar11 == uStack_68) {
        if (uVar11 == 0xffffffffffffffff) {
          FUN_0001c430();
          goto LAB_000e03c4;
        }
        iVar5 = _memcmp(pppppppuStack_70,uVar9);
        goto joined_r0x000df000;
      }
    }
    else if (uVar11 == (long)uStack_60._7_1_) {
      iVar5 = _memcmp(&pppppppuStack_70,uVar9);
joined_r0x000df000:
      if (iVar5 == 0) goto LAB_000df398;
    }
    pbVar8 = (byte *)(*pcRam000000000206a650)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c500c();
    }
    pcStack_90 = (char *)(*pcRam000000000206a638)();
    if (*pcStack_90 == '\x01') {
      lVar6 = 0;
      uVar11 = 0xa3e1f154034f6a4c;
      do {
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/* wm:watermarked copy - do not remove */
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[lVar6 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar12 >> 0x17);
        pcStack_90[lVar6 + 0x10] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar11 = lVar6 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_90[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0xf);
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 0x10;
    uVar9 = func_0x0011ab24(&pcStack_90);
    uVar11 = _strlen();
    if ((long)uStack_60._7_1_ < 0) {
      if (uVar11 == uStack_68) {
        if (uVar11 == 0xffffffffffffffff) {
          FUN_0001c430();
          goto LAB_000e03c4;
        }
        iVar5 = _memcmp(pppppppuStack_70,uVar9);
        goto joined_r0x000df148;
      }
    }
    else if (uVar11 == (long)uStack_60._7_1_) {
      iVar5 = _memcmp(&pppppppuStack_70,uVar9);
joined_r0x000df148:
      if (iVar5 == 0) goto LAB_000df398;
    }
    pbVar8 = (byte *)(*pcRam000000000206a680)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c5048();
    }
    pcStack_98 = (char *)(*pcRam000000000206a668)();
/*  donate: donate/README.md  */
    if (*pcStack_98 == '\x01') {
      lVar6 = 0;
      uVar11 = 0xf80d366e1f244314;
      do {
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[lVar6 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar12 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_98[lVar6 + 0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar12;
        uVar11 = lVar6 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0xf);
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 0x10;
    uVar9 = func_0x0011ab24(&pcStack_98);
    uVar11 = _strlen();
    if ((long)uStack_60._7_1_ < 0) {
      if (uVar11 == uStack_68) {
        if (uVar11 == 0xffffffffffffffff) {
          FUN_0001c430();
LAB_000e03c4:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xe03c8);
          (*pcVar3)();
        }
// donate: donate/README.md
        iVar5 = _memcmp(pppppppuStack_70,uVar9);
        goto joined_r0x000df290;
      }
    }
    else if (uVar11 == (long)uStack_60._7_1_) {
      iVar5 = _memcmp(&pppppppuStack_70,uVar9);
joined_r0x000df290:
      if (iVar5 == 0) goto LAB_000df398;
    }
    pbVar8 = (byte *)(*pcRam000000000206a6b0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c5084();
    }
    pcStack_a0 = (char *)(*pcRam000000000206a698)();
    if (*pcStack_a0 == '\x01') {
      lVar6 = 0;
      uVar11 = 0xd603797e175663f8;
      do {
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_a0[lVar6 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar12 >> 0x17);
        pcStack_a0[lVar6 + 0x13] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar11 = lVar6 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a0[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x12);
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 0x13;
    uVar9 = func_0x0011ab24(&pcStack_a0);
    iVar5 = func_0x00016fc0(&pppppppuStack_70,uVar9);
    if (iVar5 == 0) {
      pbVar8 = (byte *)(*pcRam000000000206a6e0)();
/* no support for modified copies */
      if ((*pbVar8 & 1) == 0) {
        func_0x019c50c0();
      }
      pcStack_a8 = (char *)(*pcRam000000000206a6c8)();
      if (*pcStack_a8 == '\x01') {
        uVar1 = (byte)pcStack_a8[1] ^ 0xd4be4f86;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xd15091aa ^ 0x6ccbab;
        pcStack_a8[6] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0xbb;
        uVar11 = (((ulong)(byte)pcStack_a8[1] ^ 0xcf743c09012c3ad1) << 0x11 | 0x19ee8) +
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_a8[7] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar12;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_a8[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar12;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/*  found on a paste site? it was re-uploaded illegally  */
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_a8[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar12;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1)
        ;
        pcStack_a8[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
        *pcStack_a8 = '\0';
      }
      pcStack_a8 = pcStack_a8 + 6;
      uVar9 = func_0x0011ab24(&pcStack_a8);
      uVar11 = func_0x00016fc0(&pppppppuStack_70,uVar9);
      if ((uVar11 & 1) == 0) {
        pbVar8 = (byte *)(*pcRam000000000206a710)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c50fc();
        }
        pcStack_b0 = (char *)(*pcRam000000000206a6f8)();
// WM - thanks for reading - discord.gg/sdkhDjTex
        if (*pcStack_b0 == '\x01') {
          uVar1 = (byte)pcStack_b0[1] ^ 0x504be207;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x74acfaa1 ^ 0x8a2d5;
          pcStack_b0[7] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x3c;
          uVar11 = (((ulong)(byte)pcStack_b0[1] ^ 0x3a9262d5a90c5968) << 0x11 | 0x7524) +
                   0x9e3779b97f4a7c15;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^
                  ((uint)(uVar10 >> 0x29) | 1);
          pcStack_b0[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar12;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^
                  ((uint)(uVar10 >> 0x29) | 1);
          pcStack_b0[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar12;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^
                  ((uint)(uVar10 >> 0x29) | 1);
          pcStack_b0[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar12;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^
/* WM - do not claim this as your own */
                  ((uint)(uVar10 >> 0x29) | 1);
          pcStack_b0[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar12;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b0[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b0[6] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^
                  ((uint)(uVar11 >> 0x29) | 1);
          pcStack_b0[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
          *pcStack_b0 = '\0';
        }
        pcStack_b0 = pcStack_b0 + 7;
        uVar9 = func_0x0011ab24(&pcStack_b0);
        uVar11 = func_0x00016fc0(&pppppppuStack_70,uVar9);
        if ((uVar11 & 1) == 0) {
          pbVar8 = (byte *)(*pcRam000000000206a740)();
          if ((*pbVar8 & 1) == 0) {
            func_0x019c5138();
          }
          pcStack_b8 = (char *)(*pcRam000000000206a728)();
          if (*pcStack_b8 == '\x01') {
            uVar1 = (byte)pcStack_b8[1] ^ 0xc5a25c4f;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x3a4ec58c;
            pcStack_b8[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0x93 ^ 0x8c;
            uVar11 = (((ulong)(byte)pcStack_b8[1] ^ 0xe032f7af43232d41) << 0x11 | 0x1c065) +
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                     0x9e3779b97f4a7c15;
            uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
            pcStack_b8[10] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar12;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
            pcStack_b8[0xb] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar12;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
            pcStack_b8[0xc] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar12;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
            pcStack_b8[0xd] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
/* WM - watermarked copy - do not remove */
                 (byte)uVar12;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[5]) << 0x11) + 0x9e3779b97f4a7c19;
            uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
            pcStack_b8[0xe] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar12;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
            uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
            pcStack_b8[0xf] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar12;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar10 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_b8[8] ^ (uint)uVar10 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
/* watermarked copy - do not remove */
            pcStack_b8[0x10] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar10;
            *pcStack_b8 = '\0';
          }
          pcStack_b8 = pcStack_b8 + 9;
          uVar9 = func_0x0011ab24(&pcStack_b8);
          uVar11 = func_0x00016fc0(&pppppppuStack_70,uVar9);
          if ((uVar11 & 1) == 0) {
            pbVar8 = (byte *)(*pcRam000000000206a770)();
            if ((*pbVar8 & 1) == 0) {
              func_0x019c5174();
            }
            pcStack_c0 = (char *)(*pcRam000000000206a758)();
            if (*pcStack_c0 == '\x01') {
              bVar2 = pcStack_c0[1];
              cVar4 = func_0x00169744((ulong)bVar2,0xa948a77e98c03ee7);
              pcStack_c0[8] = cVar4;
              uVar11 = (((ulong)bVar2 ^ 0xa948a77e98c03ee7) << 0x11 | 0x15291) + 0x9e3779b97f4a7c15;
              bVar2 = pcStack_c0[2];
              cVar4 = func_0x00169744((ulong)bVar2,uVar11);
              pcStack_c0[9] = cVar4;
              uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
              bVar2 = pcStack_c0[3];
/* WM - no support for modified copies */
              cVar4 = func_0x00169744((ulong)bVar2,uVar11);
              pcStack_c0[10] = cVar4;
              uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
              bVar2 = pcStack_c0[4];
              cVar4 = func_0x00169744((ulong)bVar2,uVar11);
              pcStack_c0[0xb] = cVar4;
              uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c18;
              bVar2 = pcStack_c0[5];
              cVar4 = func_0x00169744((ulong)bVar2,uVar11);
              pcStack_c0[0xc] = cVar4;
              uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c19;
              bVar2 = pcStack_c0[6];
              cVar4 = func_0x00169744((ulong)bVar2,uVar11);
              pcStack_c0[0xd] = cVar4;
              cVar4 = func_0x00169744(pcStack_c0[7],
                                      (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) +
                                      0x9e3779b97f4a7c1a);
              pcStack_c0[0xe] = cVar4;
/* if you paid for this, you were scammed - github.com/pengussy */
              *pcStack_c0 = '\0';
            }
            pcStack_c0 = pcStack_c0 + 8;
            uVar9 = func_0x0011ab24(&pcStack_c0);
            uVar11 = func_0x00016fc0(&pppppppuStack_70,uVar9);
            if ((uVar11 & 1) == 0) {
              pbVar8 = (byte *)(*pcRam000000000206a7a0)();
              if ((*pbVar8 & 1) == 0) {
                func_0x019c51b0();
              }
              pcStack_c8 = (char *)(*pcRam000000000206a788)();
              if (*pcStack_c8 == '\x01') {
                bVar2 = pcStack_c8[1];
                cVar4 = func_0x0016e968((ulong)bVar2,0x65749db0f1f8a757);
                pcStack_c8[0xc] = cVar4;
                uVar11 = (((ulong)bVar2 ^ 0x65749db0f1f8a757) << 0x11 | 0xcae9) + 0x9e3779b97f4a7c15
                ;
                bVar2 = pcStack_c8[2];
                cVar4 = func_0x0016e968((ulong)bVar2,uVar11);
                pcStack_c8[0xd] = cVar4;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
                bVar2 = pcStack_c8[3];
                cVar4 = func_0x0016e968((ulong)bVar2,uVar11);
                pcStack_c8[0xe] = cVar4;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
                bVar2 = pcStack_c8[4];
                cVar4 = func_0x0016e968((ulong)bVar2,uVar11);
                pcStack_c8[0xf] = cVar4;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c18;
                bVar2 = pcStack_c8[5];
                cVar4 = func_0x0016e968((ulong)bVar2,uVar11);
                pcStack_c8[0x10] = cVar4;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c19;
                bVar2 = pcStack_c8[6];
// no support for modified copies
                cVar4 = func_0x0016e968((ulong)bVar2,uVar11);
                pcStack_c8[0x11] = cVar4;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1a;
                bVar2 = pcStack_c8[7];
                cVar4 = func_0x0016e968((ulong)bVar2,uVar11);
                pcStack_c8[0x12] = cVar4;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1b;
                bVar2 = pcStack_c8[8];
                cVar4 = func_0x0016e968((ulong)bVar2,uVar11);
                pcStack_c8[0x13] = cVar4;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1c;
                bVar2 = pcStack_c8[9];
                cVar4 = func_0x0016e968((ulong)bVar2,uVar11);
                pcStack_c8[0x14] = cVar4;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1d;
                bVar2 = pcStack_c8[10];
                cVar4 = func_0x0016e968((ulong)bVar2,uVar11);
                pcStack_c8[0x15] = cVar4;
                cVar4 = func_0x0016e968(pcStack_c8[0xb],
                                        (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) +
                                        0x9e3779b97f4a7c1e);
                pcStack_c8[0x16] = cVar4;
                *pcStack_c8 = '\0';
              }
              pcStack_c8 = pcStack_c8 + 0xc;
              uVar9 = func_0x0011ab24(&pcStack_c8);
              iVar5 = func_0x00016fc0(&pppppppuStack_70,uVar9);
              if (iVar5 == 0) {
/* wm:more drops soon - github.com/pengussy */
                pbVar8 = (byte *)(*pcRam000000000206a7d0)();
                if ((*pbVar8 & 1) == 0) {
                  func_0x019c51ec();
                }
                pcStack_d0 = (char *)(*pcRam000000000206a7b8)();
                if (*pcStack_d0 == '\x01') {
                  bVar2 = pcStack_d0[1];
                  cVar4 = func_0x0016f614((ulong)bVar2,0x55f3e3f38d64c17c);
                  pcStack_d0[8] = cVar4;
                  uVar11 = (((ulong)bVar2 ^ 0x55f3e3f38d64c17c) << 0x11 | 0xabe7) +
                           0x9e3779b97f4a7c15;
                  bVar2 = pcStack_d0[2];
                  cVar4 = func_0x0016f614((ulong)bVar2,uVar11);
                  pcStack_d0[9] = cVar4;
                  uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
                  bVar2 = pcStack_d0[3];
                  cVar4 = func_0x0016f614((ulong)bVar2,uVar11);
                  pcStack_d0[10] = cVar4;
                  uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
                  bVar2 = pcStack_d0[4];
                  cVar4 = func_0x0016f614((ulong)bVar2,uVar11);
                  pcStack_d0[0xb] = cVar4;
                  uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c18;
                  bVar2 = pcStack_d0[5];
                  cVar4 = func_0x0016f614((ulong)bVar2,uVar11);
                  pcStack_d0[0xc] = cVar4;
                  uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c19;
                  bVar2 = pcStack_d0[6];
                  cVar4 = func_0x0016f614((ulong)bVar2,uVar11);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
                  pcStack_d0[0xd] = cVar4;
                  cVar4 = func_0x0016f614(pcStack_d0[7],
                                          (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) +
                                          0x9e3779b97f4a7c1a);
                  pcStack_d0[0xe] = cVar4;
                  *pcStack_d0 = '\0';
                }
                pcStack_d0 = pcStack_d0 + 8;
                uVar9 = func_0x0011ab24(&pcStack_d0);
                uVar11 = func_0x00016fc0(&pppppppuStack_70,uVar9);
                if ((uVar11 & 1) == 0) {
                  pbVar8 = (byte *)(*pcRam000000000206a800)();
                  if ((*pbVar8 & 1) == 0) {
                    func_0x019c5228();
                  }
                  pcStack_d8 = (char *)(*pcRam000000000206a7e8)();
                  if (*pcStack_d8 == '\x01') {
                    bVar2 = pcStack_d8[1];
                    cVar4 = func_0x0016a1ac((ulong)bVar2,0xff0968ff0500cb70);
                    pcStack_d8[10] = cVar4;
                    uVar11 = (((ulong)bVar2 ^ 0xff0968ff0500cb70) << 0x11 | 0x1fe12) +
                             0x9e3779b97f4a7c15;
                    bVar2 = pcStack_d8[2];
                    cVar4 = func_0x0016a1ac((ulong)bVar2,uVar11);
                    pcStack_d8[0xb] = cVar4;
                    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
                    bVar2 = pcStack_d8[3];
                    cVar4 = func_0x0016a1ac((ulong)bVar2,uVar11);
                    pcStack_d8[0xc] = cVar4;
                    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
                    bVar2 = pcStack_d8[4];
                    cVar4 = func_0x0016a1ac((ulong)bVar2,uVar11);
                    pcStack_d8[0xd] = cVar4;
                    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c18;
                    bVar2 = pcStack_d8[5];
/*  keep the notice, keep the source honest  */
                    cVar4 = func_0x0016a1ac((ulong)bVar2,uVar11);
                    pcStack_d8[0xe] = cVar4;
                    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c19;
                    bVar2 = pcStack_d8[6];
                    cVar4 = func_0x0016a1ac((ulong)bVar2,uVar11);
                    pcStack_d8[0xf] = cVar4;
                    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1a;
                    bVar2 = pcStack_d8[7];
                    cVar4 = func_0x0016a1ac((ulong)bVar2,uVar11);
                    pcStack_d8[0x10] = cVar4;
                    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1b;
                    bVar2 = pcStack_d8[8];
                    cVar4 = func_0x0016a1ac((ulong)bVar2,uVar11);
                    pcStack_d8[0x11] = cVar4;
                    cVar4 = func_0x0016a1ac(pcStack_d8[9],
                                            (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) +
                                            0x9e3779b97f4a7c1c);
                    pcStack_d8[0x12] = cVar4;
                    *pcStack_d8 = '\0';
                  }
                  pcStack_d8 = pcStack_d8 + 10;
                  uVar9 = func_0x0011ab24(&pcStack_d8);
                  func_0x00016fc0(&pppppppuStack_70,uVar9);
/* found on a paste site? it was re-uploaded illegally */
                }
                func_0x00792a48(param_1);
                return 1;
              }
            }
          }
        }
      }
      func_0x007930d0(param_1,&DAT_0014bfd0,0,0,0);
      return 1;
    }
  }
  else if ((uVar11 != (long)uStack_60._7_1_) ||
          (iVar5 = _memcmp(&pppppppuStack_70,uVar9), iVar5 != 0)) goto LAB_000ded74;
LAB_000df398:
  uVar9 = 0;
LAB_000df39c:
  func_0x007932d0(param_1,uVar9);
  return 1;
}

