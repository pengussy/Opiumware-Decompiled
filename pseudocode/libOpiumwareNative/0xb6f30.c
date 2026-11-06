/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xb6f30:55e16eed7e
 */

/* WARNING: Removing unreachable block (ram,0x000b8980) */
/* WARNING: Removing unreachable block (ram,0x000b8970) */
/* WARNING: Removing unreachable block (ram,0x000b8960) */
/* WARNING: Removing unreachable block (ram,0x000b8950) */
/* WARNING: Removing unreachable block (ram,0x000b873c) */
/* WARNING: Removing unreachable block (ram,0x000b8148) */
/* WARNING: Removing unreachable block (ram,0x000b73ec) */
/* WARNING: Removing unreachable block (ram,0x000b7498) */
/* WARNING: Removing unreachable block (ram,0x000b7ab4) */
/* WARNING: Removing unreachable block (ram,0x000b8990) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000b6f30(undefined8 param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *******pppppppuVar3;
/* WM - proprietary - see LICENSE - do not sell */
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *******pppppppcVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  long extraout_x1;
  ulong uVar14;
  byte bVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  char *******pppppppcVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  char *pcStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 *******pppppppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 *******pppppppuStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 *******pppppppuStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 *******pppppppuStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 *******pppppppuStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 *******pppppppuStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [24];
  char *******pppppppcStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  undefined7 uStack_88;
/* if you paid for this, you were scammed - github.com/pengussy */
  undefined1 uStack_81;
  int aiStack_80 [2];
  undefined8 uStack_78;
  
  iVar5 = func_0x00791e54(param_1,1);
  if (iVar5 == 0) {
    pbVar9 = (byte *)(*pcRam0000000002067fb0)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c2258();
    }
    pcStack_220 = (char *)(*pcRam0000000002067f98)();
    if (*pcStack_220 == '\x01') {
      uVar2 = (byte)pcStack_220[1] ^ 0x836a8144;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0x5d32e66a;
      pcStack_220[8] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ 0x87;
      uVar7 = (((ulong)(byte)pcStack_220[1] ^ 0xc6d78d14eaab395c) << 0x11 | 0x18daf) +
              0x9e3779b97f4a7c15;
      uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[2] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
              (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_220[9] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_220[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[3] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
              (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_220[10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_220[3]) << 0x11) + 0x9e3779b97f4a7c17;
/* WM - unlicensed copy if this notice is missing */
      uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
              (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_220[0xb] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_220[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[5] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
              (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_220[0xc] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_220[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[6] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
              (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_220[0xd] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_220[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      uVar16 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[7] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
      pcStack_220[0xe] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar16;
      *pcStack_220 = '\0';
    }
    pcStack_220 = pcStack_220 + 8;
    uVar6 = func_0x0011ab24(&pcStack_220);
    func_0x007a1ba8(param_1,1,uVar6);
LAB_000b8d94:
    iVar5 = ___cxa_guard_acquire(0x208ecf0);
    if (iVar5 != 0) {
      FUN_000b968c();
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498
                    ,0x208fca8,0);
      ___cxa_guard_release(0x208ecf0);
    }
  }
  else if ((bRam000000000208ecf0 & 1) == 0) goto LAB_000b8d94;
  if (((bRam000000000208ecf8 & 1) == 0) && (iVar5 = ___cxa_guard_acquire(0x208ecf8), iVar5 != 0)) {
    _atexit(&DAT_0014489c);
    uRam000000000208ecd9 = 1;
    ___cxa_guard_release(0x208ecf8);
/* reversing this took months of machine time - github.com/pengussy */
  }
  aiStack_80[0] = 0;
  uStack_78 = __ZNSt3__115system_categoryEv();
  pppppppuStack_140 = (undefined8 *******)0x0;
  uStack_138 = 0;
  uStack_130 = 0;
  lVar20 = lRam000000000208fc48;
  if (-1 < (long)cRam000000000208fc5f) {
    lVar20 = 0x208fc48;
  }
  lVar10 = lRam000000000208fc50;
  if (-1 < cRam000000000208fc5f) {
    lVar10 = (long)cRam000000000208fc5f;
  }
  func_0x0013be80(&pppppppuStack_140,lVar20,lVar20 + lVar10);
  __ZNSt3__14__fs10filesystem18__weakly_canonicalERKNS1_4pathEPNS_10error_codeE
            (&pppppppuStack_98,&pppppppuStack_140,aiStack_80);
  if ((long)uStack_130 < 0) {
    __ZdlPv(pppppppuStack_140);
  }
  if (aiStack_80[0] != 0) {
    pbVar9 = (byte *)(*pcRam0000000002067fe0)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c2000();
    }
    pcStack_1d0 = (char *)(*pcRam0000000002067fc8)();
    if (*pcStack_1d0 == '\x01') {
      lVar20 = 0;
      uVar7 = 0x715403777c172cd7;
      do {
        uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar17 = uVar16 ^ uVar16 >> 0x21;
        uVar2 = (uint)(byte)pcStack_1d0[lVar20 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar17 >> 0x17);
        pcStack_1d0[lVar20 + 0x1c] =
             ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar16 >> 0x29) | 1) ^
/*  more drops soon - github.com/pengussy  */
             (byte)uVar17;
        uVar7 = lVar20 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1d0[lVar20 + 1]) << 0x11);
        lVar20 = lVar20 + 1;
      } while (lVar20 != 0x1b);
      *pcStack_1d0 = '\0';
    }
    pcStack_1d0 = pcStack_1d0 + 0x1c;
    func_0x0011ab24(&pcStack_1d0);
    func_0x007a1b5c(param_1,"%s");
    goto LAB_000b9324;
  }
  uVar6 = func_0x00792368(param_1,1,0);
  uVar7 = _strlen();
  if (0x7ffffffffffffff6 < uVar7) {
    FUN_0000aa50();
    goto LAB_000b9324;
  }
  if (uVar7 < 0x17) {
    uStack_a0 = CONCAT17((char)uVar7,(undefined7)uStack_a0);
    pppppppcVar8 = (char *******)&pppppppcStack_b0;
  }
  else {
    uVar16 = (uVar7 & 0x7ffffffffffffff8) + 8;
    uVar17 = 0x19;
    if (uVar16 != 0x18) {
      uVar17 = uVar16;
    }
    pppppppcVar8 = (char *******)__Znwm(uVar17);
    uStack_a0 = uVar17 | 0x8000000000000000;
    pppppppcStack_b0 = pppppppcVar8;
    uStack_a8 = uVar7;
  }
  _memmove(pppppppcVar8,uVar6,uVar7);
/* wm:proprietary - see LICENSE - do not sell */
  *(char *)((long)pppppppcVar8 + uVar7) = '\0';
  uVar16 = (ulong)uStack_a0._7_1_;
  uVar7 = uStack_a8;
  pppppppcVar8 = pppppppcStack_b0;
  if (-1 < (long)uStack_a0) {
    uVar7 = uVar16;
    pppppppcVar8 = (char *******)&pppppppcStack_b0;
  }
  bVar15 = uStack_a0._7_1_;
  if (uVar7 != 0) {
    pppppppcVar19 = pppppppcVar8;
    if (uVar7 < 8) {
LAB_000b89f0:
      do {
        if (*(char *)pppppppcVar19 == '\\') {
          *(char *)pppppppcVar19 = '/';
        }
        pppppppcVar19 = (char *******)((long)pppppppcVar19 + 1);
      } while (pppppppcVar19 != (char *******)((long)pppppppcVar8 + uVar7));
    }
    else if (uVar7 < 0x10) {
      uVar17 = 0;
LAB_000b70a0:
      uVar16 = uVar7 & 0xfffffffffffffff8;
      pppppppcVar19 = (char *******)((long)pppppppcVar8 + uVar16);
      lVar20 = uVar17 - uVar16;
      pcVar18 = (char *)((long)pppppppcVar8 + uVar17 + 3);
      do {
        uVar6 = *(undefined8 *)(pcVar18 + -3);
// WM - watermarked copy - do not remove
        if (((uint)uVar6 & 0xff) == 0x5c) {
          pcVar18[-3] = '/';
        }
        if ((char)((ulong)uVar6 >> 8) == '\\') {
          pcVar18[-2] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x10) == '\\') {
          pcVar18[-1] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x18) == '\\') {
          *pcVar18 = '/';
        }
        if ((char)((ulong)uVar6 >> 0x20) == '\\') {
          pcVar18[1] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x28) == '\\') {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          pcVar18[2] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x30) == '\\') {
          pcVar18[3] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x38) == '\\') {
          pcVar18[4] = '/';
        }
        pcVar18 = pcVar18 + 8;
        lVar20 = lVar20 + 8;
      } while (lVar20 != 0);
      if (uVar7 != uVar16) goto LAB_000b89f0;
    }
    else {
      uVar17 = uVar7 & 0xfffffffffffffff0;
      pcVar18 = (char *)((long)pppppppcVar8 + 7);
      uVar16 = uVar17;
      do {
        uVar21 = *(undefined8 *)(pcVar18 + 1);
        uVar6 = *(undefined8 *)(pcVar18 + -7);
        if (((uint)uVar6 & 0xff) == 0x5c) {
          pcVar18[-7] = '/';
        }
        if ((char)((ulong)uVar6 >> 8) == '\\') {
          pcVar18[-6] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x10) == '\\') {
          pcVar18[-5] = '/';
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        }
        if ((char)((ulong)uVar6 >> 0x18) == '\\') {
          pcVar18[-4] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x20) == '\\') {
          pcVar18[-3] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x28) == '\\') {
          pcVar18[-2] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x30) == '\\') {
          pcVar18[-1] = '/';
        }
        if ((char)((ulong)uVar6 >> 0x38) == '\\') {
          *pcVar18 = '/';
        }
        if (((uint)uVar21 & 0xff) == 0x5c) {
          pcVar18[1] = '/';
        }
        if ((char)((ulong)uVar21 >> 8) == '\\') {
          pcVar18[2] = '/';
        }
        if ((char)((ulong)uVar21 >> 0x10) == '\\') {
          pcVar18[3] = '/';
        }
        if ((char)((ulong)uVar21 >> 0x18) == '\\') {
          pcVar18[4] = '/';
        }
        if ((char)((ulong)uVar21 >> 0x20) == '\\') {
          pcVar18[5] = '/';
        }
        if ((char)((ulong)uVar21 >> 0x28) == '\\') {
          pcVar18[6] = '/';
        }
        if ((char)((ulong)uVar21 >> 0x30) == '\\') {
// do not claim this as your own
          pcVar18[7] = '/';
        }
        if ((char)((ulong)uVar21 >> 0x38) == '\\') {
          pcVar18[8] = '/';
        }
        pcVar18 = pcVar18 + 0x10;
        uVar16 = uVar16 - 0x10;
      } while (uVar16 != 0);
      if (uVar7 != uVar17) {
        if (((uint)uVar7 >> 3 & 1) == 0) {
          pppppppcVar19 = (char *******)((long)pppppppcVar8 + uVar17);
          goto LAB_000b89f0;
        }
        goto LAB_000b70a0;
      }
    }
    uVar16 = uStack_a0 >> 0x38;
    bVar15 = (byte)(uStack_a0 >> 0x38);
  }
  pppppppuStack_e0 = (undefined8 *******)0x0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uVar7 = uStack_a8;
  pppppppcVar8 = pppppppcStack_b0;
  if (-1 < (char)bVar15) {
    uVar7 = uVar16;
    pppppppcVar8 = (char *******)&pppppppcStack_b0;
  }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  func_0x0013be80(&pppppppuStack_e0,pppppppcVar8,(char *)((long)pppppppcVar8 + uVar7));
  uStack_138 = uStack_90;
  pppppppuStack_140 = pppppppuStack_98;
  uStack_130 = CONCAT17(uStack_81,uStack_88);
  func_0x0014081c(&pppppppuStack_140,&pppppppuStack_e0);
  __ZNSt3__14__fs10filesystem18__weakly_canonicalERKNS1_4pathEPNS_10error_codeE
            (auStack_c8,&pppppppuStack_140,aiStack_80);
  if ((long)uStack_130 < 0) {
    __ZdlPv(pppppppuStack_140);
  }
  __ZNKSt3__14__fs10filesystem4path18lexically_relativeERKS2_
            (&pppppppuStack_e0,auStack_c8,&pppppppuStack_98);
  if (aiStack_80[0] == 0) {
    uVar7 = uStack_d8;
    if (-1 < (long)uStack_d0) {
      uVar7 = uStack_d0 >> 0x38;
    }
    if ((uVar7 != 0) &&
       (__ZNKSt3__14__fs10filesystem4path16__root_directoryEv(&pppppppuStack_e0), extraout_x1 == 0))
    {
      __ZNKSt3__14__fs10filesystem4path5beginEv(&pppppppuStack_140,&pppppppuStack_e0);
      if ((long)uStack_130 < 0) {
        func_0x00017ae8(&pppppppuStack_100,pppppppuStack_140,uStack_138);
      }
      else {
// WM - origin: github.com/pengussy
        uStack_f8 = uStack_138;
        pppppppuStack_100 = pppppppuStack_140;
        uStack_f0 = uStack_130;
      }
      pbVar9 = (byte *)(*pcRam0000000002068010)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019c203c();
      }
      pcStack_1d8 = (char *)(*pcRam0000000002067ff8)();
      if (*pcStack_1d8 == '\x01') {
        uVar2 = (byte)pcStack_1d8[1] ^ 0x5006e623;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0x4bba6b90;
        pcStack_1d8[4] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ 0xe0;
        uVar7 = (((ulong)(byte)pcStack_1d8[1] ^ 0xdba8ed64a971f697) << 0x11 | 0x1b751) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/*  no support for modified copies  */
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar17 = uVar16 ^ uVar16 >> 0x21;
        uVar2 = (uint)(byte)pcStack_1d8[2] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
        pcStack_1d8[5] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar17;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1d8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar7 ^ uVar7 >> 0x21;
        uVar2 = (uint)(byte)pcStack_1d8[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcStack_1d8[6] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar16;
        *pcStack_1d8 = '\0';
      }
      pcStack_1d8 = pcStack_1d8 + 4;
      lVar20 = func_0x0011ab24(&pcStack_1d8);
      uStack_158 = 0;
      uStack_150 = 0;
      pppppppuStack_160 = (undefined8 *******)0x0;
      lVar10 = _strlen();
      func_0x0013be80(&pppppppuStack_160,lVar20,lVar20 + lVar10);
      uVar7 = uStack_158;
      pppppppuVar11 = pppppppuStack_160;
      if (-1 < (long)uStack_150) {
        uVar7 = uStack_150 >> 0x38;
        pppppppuVar11 = &pppppppuStack_160;
/* found on a paste site? it was re-uploaded illegally */
      }
      iVar5 = __ZNKSt3__14__fs10filesystem4path9__compareENS_17basic_string_viewIcNS_11char_traitsIcEEEE
                        (&pppppppuStack_100,pppppppuVar11,uVar7);
      if ((long)uStack_150 < 0) {
        __ZdlPv(pppppppuStack_160);
      }
      if ((long)uStack_130 < 0) {
        __ZdlPv(pppppppuStack_140);
      }
      if (iVar5 != 0) {
        __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
                  (&pppppppuStack_140,auStack_c8,aiStack_80);
        if (((char)pppppppuStack_140 != '\x01') || (aiStack_80[0] != 0)) {
          pbVar9 = (byte *)(*pcRam0000000002068070)();
          if ((*pbVar9 & 1) == 0) {
            func_0x019c21e0();
          }
          pcStack_210 = (char *)(*pcRam0000000002068058)();
          if (*pcStack_210 == '\x01') {
            lVar20 = 0;
            uVar7 = 0x34bd853a9c61854f;
            do {
              uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar17 = uVar16 ^ uVar16 >> 0x21;
              uVar2 = (uint)(byte)pcStack_210[lVar20 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
// WM - donate: donate/README.md
              uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                      (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
              pcStack_210[lVar20 + 0x20] =
                   ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar17;
              uVar7 = lVar20 + -0x61c8864680b583eb +
                      (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_210[lVar20 + 1]) << 0x11);
              lVar20 = lVar20 + 1;
            } while (lVar20 != 0x1f);
            *pcStack_210 = '\0';
          }
          pcStack_210 = pcStack_210 + 0x20;
          func_0x0011ab24(&pcStack_210);
          func_0x007a1b5c(param_1,"%s");
          goto LAB_000b9324;
        }
        __ZNSt3__14__fs10filesystem14__current_pathEPNS_10error_codeE(&pppppppuStack_180,0);
        pbVar9 = (byte *)(*pcRam00000000020680a0)();
        if ((*pbVar9 & 1) == 0) {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          func_0x019c2078();
        }
        pcStack_1e0 = (char *)(*pcRam0000000002068088)();
        if (*pcStack_1e0 == '\x01') {
          uVar2 = (byte)pcStack_1e0[1] ^ 0x42d6f1d8;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xb3e5c86;
          pcStack_1e0[9] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - 0x31 ^ 0x1b;
          uVar7 = (((ulong)(byte)pcStack_1e0[1] ^ 0xde369f446474eaf) << 0x11 | 0x1bc6) +
                  0x9e3779b97f4a7c15;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e0[2] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar17 >> 0x17);
          pcStack_1e0[10] =
               ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e0[3] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar17 >> 0x17);
          pcStack_1e0[0xb] =
               ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar17;
/*  keep the notice, keep the source honest  */
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e0[4] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar17 >> 0x17);
          pcStack_1e0[0xc] =
               ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e0[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e0[5] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar17 >> 0x17);
          pcStack_1e0[0xd] =
               ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e0[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e0[6] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar17 >> 0x17);
          pcStack_1e0[0xe] =
               ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e0[7] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar17 >> 0x17);
          pcStack_1e0[0xf] =
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
               ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar7 ^ uVar7 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e0[8] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar16 >> 0x17);
          pcStack_1e0[0x10] =
               ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
               (byte)uVar16;
          *pcStack_1e0 = '\0';
        }
        pcStack_1e0 = pcStack_1e0 + 9;
        lVar20 = func_0x0011ab24(&pcStack_1e0);
        uStack_190 = 0;
        uStack_188 = 0;
        pppppppuStack_198 = (undefined8 *******)0x0;
        lVar10 = _strlen();
        func_0x0013be80(&pppppppuStack_198,lVar20,lVar20 + lVar10);
        if ((long)uStack_170 < 0) {
          func_0x00017ae8(&pppppppuStack_160,pppppppuStack_180,uStack_178);
        }
        else {
          uStack_158 = uStack_178;
          pppppppuStack_160 = pppppppuStack_180;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          uStack_150 = uStack_170;
        }
        func_0x0014081c(&pppppppuStack_160,&pppppppuStack_198);
        pbVar9 = (byte *)(*pcRam00000000020680d0)();
        if ((*pbVar9 & 1) == 0) {
          func_0x019c20b4();
        }
        pcStack_1e8 = (char *)(*pcRam00000000020680b8)();
        if (*pcStack_1e8 == '\x01') {
          uVar2 = (byte)pcStack_1e8[1] ^ 0xa85e8165;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0xe861c182;
          pcStack_1e8[10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ 0xa6;
          uVar7 = (((ulong)(byte)pcStack_1e8[1] ^ 0x84b7376551b91223) << 0x11 | 0x1096e) +
                  0x9e3779b97f4a7c15;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e8[2] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
          pcStack_1e8[0xb] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
/* wm:reversing this took months of machine time */
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e8[3] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
          pcStack_1e8[0xc] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e8[4] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
          pcStack_1e8[0xd] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e8[5] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
          pcStack_1e8[0xe] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
// WM - no support for modified copies
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e8[6] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
          pcStack_1e8[0xf] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e8[7] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
          pcStack_1e8[0x10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e8[8] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
          pcStack_1e8[0x11] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar17;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1e8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar7 ^ uVar7 >> 0x21;
          uVar2 = (uint)(byte)pcStack_1e8[9] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_1e8[0x12] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar16;
          *pcStack_1e8 = '\0';
        }
        pcStack_1e8 = pcStack_1e8 + 10;
        lVar20 = func_0x0011ab24(&pcStack_1e8);
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        pppppppuStack_1b0 = (undefined8 *******)0x0;
        lVar10 = _strlen();
/*  unlicensed copy if this notice is missing  */
        func_0x0013be80(&pppppppuStack_1b0,lVar20,lVar20 + lVar10);
        if ((long)uStack_150 < 0) {
          func_0x00017ae8(&pppppppuStack_140,pppppppuStack_160,uStack_158);
        }
        else {
          uStack_138 = uStack_158;
          pppppppuStack_140 = pppppppuStack_160;
          uStack_130 = uStack_150;
        }
        func_0x0014081c(&pppppppuStack_140,&pppppppuStack_1b0);
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        lStack_1b8 = 0;
        lVar20 = lRam000000000208fca8;
        if (-1 < (long)(char)bRam000000000208fcbf) {
          lVar20 = 0x208fca8;
/* no support for modified copies - github.com/pengussy */
        }
        uVar7 = uRam000000000208fcb0;
        if (-1 < (char)bRam000000000208fcbf) {
          uVar7 = (long)(char)bRam000000000208fcbf;
        }
        func_0x0013be80(&uStack_1c8,lVar20,lVar20 + uVar7);
        if ((long)uStack_130 < 0) {
          func_0x00017ae8(&pppppppuStack_100,pppppppuStack_140,uStack_138);
        }
        else {
          uStack_f8 = uStack_138;
          pppppppuStack_100 = pppppppuStack_140;
          uStack_f0 = uStack_130;
        }
        func_0x0014081c(&pppppppuStack_100,&uStack_1c8);
        if (lStack_1b8 < 0) {
          __ZdlPv(uStack_1c8);
        }
        if ((long)uStack_130 < 0) {
/* do not claim this as your own - github.com/pengussy */
          __ZdlPv(pppppppuStack_140);
        }
        if ((long)uStack_1a0 < 0) {
          __ZdlPv(pppppppuStack_1b0);
        }
        if ((long)uStack_150 < 0) {
          __ZdlPv(pppppppuStack_160);
        }
        if ((long)uStack_188 < 0) {
          __ZdlPv(pppppppuStack_198);
        }
        if ((long)uStack_170 < 0) {
          __ZdlPv(pppppppuStack_180);
        }
        uStack_158 = uStack_f8;
        pppppppuStack_160 = pppppppuStack_100;
        uStack_150 = uStack_f0;
        func_0x0014081c(&pppppppuStack_160,&pppppppuStack_e0);
        auVar22 = __ZNKSt3__14__fs10filesystem4path13__parent_pathEv(&pppppppuStack_160);
        uVar7 = auVar22._8_8_;
        if (0x7ffffffffffffff6 < uVar7) {
          FUN_0000aa50();
          goto LAB_000b9324;
        }
        if (uVar7 < 0x17) {
          uStack_130 = CONCAT17(auVar22[8],(undefined7)uStack_130);
          pppppppuVar11 = &pppppppuStack_140;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        else {
          uVar16 = (uVar7 & 0x7ffffffffffffff8) + 8;
          uVar17 = 0x19;
          if (uVar16 != 0x18) {
            uVar17 = uVar16;
          }
          pppppppuVar11 = (undefined8 *******)__Znwm(uVar17);
          uStack_130 = uVar17 | 0x8000000000000000;
          pppppppuStack_140 = pppppppuVar11;
          uStack_138 = uVar7;
        }
        _memmove(pppppppuVar11,auVar22._0_8_,uVar7);
        *(undefined1 *)((long)pppppppuVar11 + uVar7) = 0;
        uStack_178 = uStack_138;
        pppppppuStack_180 = pppppppuStack_140;
        uStack_170 = uStack_130;
        __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE
                  (&pppppppuStack_180,aiStack_80);
        if ((long)uStack_170 < 0) {
          __ZdlPv(pppppppuStack_180);
        }
        if (aiStack_80[0] != 0) {
          pbVar9 = (byte *)(*pcRam0000000002068100)();
          if ((*pbVar9 & 1) == 0) {
            func_0x019c20f0();
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
          }
          pcStack_1f0 = (char *)(*pcRam00000000020680e8)();
          if (*pcStack_1f0 == '\x01') {
            lVar20 = 0;
            uVar7 = 0x3a00090694a2cc2f;
            do {
              uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar17 = uVar16 ^ uVar16 >> 0x21;
              uVar2 = (uint)(byte)pcStack_1f0[lVar20 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
              uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar17 >> 0x17) ^
                      ((uint)(uVar16 >> 0x29) | 1);
              pcStack_1f0[lVar20 + 0x31] =
                   ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar17;
              uVar7 = lVar20 + -0x61c8864680b583eb +
                      (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1f0[lVar20 + 1]) << 0x11);
              lVar20 = lVar20 + 1;
            } while (lVar20 != 0x30);
            *pcStack_1f0 = '\0';
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
          }
          pcStack_1f0 = pcStack_1f0 + 0x31;
          uVar6 = func_0x0011ab24(&pcStack_1f0);
          __ZNKSt3__110error_code7messageEv(&pppppppuStack_140,aiStack_80);
          func_0x007a1b5c(param_1,uVar6);
          goto LAB_000b9324;
        }
        __ZNSt3__14__fs10filesystem11__copy_fileERKNS1_4pathES4_NS1_12copy_optionsEPNS_10error_codeE
                  (auStack_c8,&pppppppuStack_160,2,aiStack_80);
        if (aiStack_80[0] != 0) {
          pbVar9 = (byte *)(*pcRam0000000002068130)();
          if ((*pbVar9 & 1) == 0) {
            func_0x019c212c();
          }
          pcStack_1f8 = (char *)(*pcRam0000000002068118)();
          if (*pcStack_1f8 == '\x01') {
            lVar20 = 0;
            uVar7 = 0x61e377dace104926;
            do {
              uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar17 = uVar16 ^ uVar16 >> 0x21;
              uVar2 = (uint)(byte)pcStack_1f8[lVar20 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
              uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar17 >> 0x17) ^
                      ((uint)(uVar16 >> 0x29) | 1);
              pcStack_1f8[lVar20 + 0x22] =
                   ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar17;
              uVar7 = lVar20 + -0x61c8864680b583eb +
                      (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_1f8[lVar20 + 1]) << 0x11);
              lVar20 = lVar20 + 1;
            } while (lVar20 != 0x21);
            *pcStack_1f8 = '\0';
          }
          pcStack_1f8 = pcStack_1f8 + 0x22;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          uVar6 = func_0x0011ab24(&pcStack_1f8);
          __ZNKSt3__110error_code7messageEv(&pppppppuStack_140,aiStack_80);
          func_0x007a1b5c(param_1,uVar6);
          goto LAB_000b9324;
        }
        __ZNSt3__15mutex4lockEv(0x1f26cf0);
        if ((long)uRam000000000208fc88 < 0) {
          uVar7 = uStack_f8;
          pppppppuVar11 = pppppppuStack_100;
          if (-1 < (long)uStack_f0) {
            uVar7 = uStack_f0 >> 0x38;
            pppppppuVar11 = &pppppppuStack_100;
          }
          func_0x001286c0(0x208fc78,pppppppuVar11,uVar7);
        }
        else if ((long)uStack_f0 < 0) {
          func_0x001287e0(0x208fc78,pppppppuStack_100,uStack_f8);
        }
        else {
          uRam000000000208fc80 = uStack_f8;
          pppppppuRam000000000208fc78 = pppppppuStack_100;
          uRam000000000208fc88 = uStack_f0;
        }
        __ZNSt3__15mutex6unlockEv(0x1f26cf0);
        pbVar9 = (byte *)(*pcRam0000000002068160)();
        if ((*pbVar9 & 1) == 0) {
          func_0x019c2168();
        }
        pcStack_200 = (char *)(*pcRam0000000002068148)();
        if (*pcStack_200 == '\x01') {
          lVar20 = 0;
          uVar7 = 0x77aa9416e1e27a3c;
          do {
            uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/*  thanks for reading - discord.gg/sdkhDjTex  */
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar17 = uVar16 ^ uVar16 >> 0x21;
            uVar2 = (uint)(byte)pcStack_200[lVar20 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar17 >> 0x17);
            pcStack_200[lVar20 + 0x16] =
                 ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar17;
            uVar7 = lVar20 + -0x61c8864680b583eb +
                    (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_200[lVar20 + 1]) << 0x11);
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x15);
          *pcStack_200 = '\0';
        }
        pcStack_200 = pcStack_200 + 0x16;
        uVar6 = func_0x0011ab24(&pcStack_200);
        lVar10 = _strlen();
        bVar15 = bRam000000000208fcbf;
        lVar20 = lRam000000000208fca8;
/* unlicensed copy if this notice is missing - github.com/pengussy */
        uVar7 = uRam000000000208fcb0;
        if (-1 < (char)bRam000000000208fcbf) {
          uVar7 = (ulong)bRam000000000208fcbf;
        }
        uVar16 = uVar7 + lVar10;
        if (0x7ffffffffffffff6 < uVar16) {
          FUN_0000aa50();
          goto LAB_000b9324;
        }
        if (uVar16 < 0x17) {
          uStack_188 = CONCAT17((char)uVar16,(undefined7)uStack_188);
          pppppppuVar11 = &pppppppuStack_198;
        }
        else {
          uVar17 = (uVar16 & 0x7ffffffffffffff8) + 8;
          uVar12 = 0x19;
          if (uVar17 != 0x18) {
            uVar12 = uVar17;
          }
          pppppppuVar11 = (undefined8 *******)__Znwm(uVar12);
          uStack_188 = uVar12 | 0x8000000000000000;
          pppppppuStack_198 = pppppppuVar11;
          uStack_190 = uVar16;
        }
        if (-1 < (char)bVar15) {
          lVar20 = 0x208fca8;
        }
        _memcpy(pppppppuVar11,uVar6,lVar10);
        _memmove((long)pppppppuVar11 + lVar10,lVar20,uVar7);
        *(undefined1 *)((long)pppppppuVar11 + lVar10 + uVar7) = 0;
        pbVar9 = (byte *)(*pcRam0000000002068190)();
        if ((*pbVar9 & 1) == 0) {
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
          func_0x019c21a4();
        }
        pcStack_208 = (char *)(*pcRam0000000002068178)();
        if (*pcStack_208 == '\x01') {
          uVar2 = (byte)pcStack_208[1] ^ 0xa47a1f1e;
          uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x18f8b949;
          pcStack_208[3] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') + 0x3f ^ 0xdd;
          uVar7 = (((ulong)(byte)pcStack_208[1] ^ 0x559b98c908c7b2d9) << 0x11 | 0xab37) +
                  0x9e3779b97f4a7c15;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar7 ^ uVar7 >> 0x21;
          uVar2 = (uint)(byte)pcStack_208[2] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar16 >> 0x17);
          pcStack_208[4] =
               ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
               (byte)uVar16;
          *pcStack_208 = '\0';
        }
        pcStack_208 = pcStack_208 + 3;
        uVar6 = func_0x0011ab24(&pcStack_208);
        uVar12 = _strlen();
        uVar17 = uStack_188;
// WM - reversing this took months of machine time
        uVar14 = (uStack_188 & 0x7fffffffffffffff) - 1;
        uVar7 = uStack_190;
        uVar16 = uVar14;
        if (-1 < (long)uStack_188) {
          uVar16 = 0x16;
          uVar7 = uStack_188 >> 0x38;
        }
        if (uVar16 - uVar7 < uVar12) {
          uVar16 = uVar7 + uVar12;
          if (0x7ffffffffffffff6 < uVar16) {
            FUN_0000aa50();
            goto LAB_000b9324;
          }
          if ((long)uStack_188 < 0) {
            if (uVar14 < 0x3ffffffffffffff4) goto LAB_000b8678;
            uVar14 = 0x7ffffffffffffff8;
            pppppppuVar11 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
            pppppppuVar13 = pppppppuStack_198;
          }
          else {
            uVar14 = 0x16;
LAB_000b8678:
/* wm:origin: github.com/pengussy */
            uVar1 = uVar16;
            if (uVar16 <= uVar14 * 2) {
              uVar1 = uVar14 * 2;
            }
            uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
            uVar14 = 0x19;
            if (uVar1 != 0x18) {
              uVar14 = uVar1;
            }
            pppppppuVar11 = (undefined8 *******)__Znwm(uVar14);
            pppppppuVar13 = pppppppuStack_198;
            if (-1 < (long)uVar17) {
              pppppppuVar13 = &pppppppuStack_198;
            }
          }
          if (uVar7 != 0) {
            _memmove(pppppppuVar11,pppppppuVar13,uVar7);
          }
          _memmove((long)pppppppuVar11 + uVar7,uVar6,uVar12);
          *(undefined1 *)((long)pppppppuVar11 + uVar16) = 0;
          if ((long)uVar17 < 0) {
            __ZdlPv(pppppppuStack_198);
          }
          uStack_188 = uVar14 | 0x8000000000000000;
          pppppppuStack_198 = pppppppuVar11;
          uStack_190 = uVar16;
        }
        else if (uVar12 != 0) {
          pppppppuVar11 = pppppppuStack_198;
          if (-1 < (long)uStack_188) {
            pppppppuVar11 = &pppppppuStack_198;
/* proprietary - see LICENSE - do not sell */
          }
          _memmove((long)pppppppuVar11 + uVar7,uVar6,uVar12);
          uVar7 = uVar7 + uVar12;
          if ((long)uStack_188 < 0) {
            uStack_190 = uVar7;
          }
          else {
            uStack_188 = CONCAT17((char)uVar7,(undefined7)uStack_188) & 0x7fffffffffffffff;
          }
          *(undefined1 *)((long)pppppppuVar11 + uVar7) = 0;
        }
        uVar16 = uStack_188;
        uStack_178 = uStack_190;
        pppppppuStack_180 = pppppppuStack_198;
        uStack_170 = uStack_188;
        uStack_190 = 0;
        uStack_188 = 0;
        pppppppuStack_198 = (undefined8 *******)0x0;
        uStack_1a8 = uStack_d8;
        pppppppuStack_1b0 = pppppppuStack_e0;
        uStack_1a0 = uStack_d0;
        uVar7 = uStack_d8;
        pppppppuVar11 = pppppppuStack_e0;
        if (-1 < (long)uStack_d0) {
          uVar7 = uStack_d0 >> 0x38;
          pppppppuVar11 = &pppppppuStack_1b0;
        }
        uVar14 = (uVar16 & 0x7fffffffffffffff) - 1;
        uVar17 = uStack_178;
        uVar12 = uVar14;
        if (-1 < (long)uVar16) {
          uVar12 = 0x16;
          uVar17 = uVar16 >> 0x38;
        }
        if (uVar7 <= uVar12 - uVar17) {
          if (uVar7 != 0) {
            pppppppuVar13 = pppppppuStack_180;
            if (-1 < (long)uVar16) {
/*  found on a paste site? it was re-uploaded illegally  */
              pppppppuVar13 = &pppppppuStack_180;
            }
            _memmove((long)pppppppuVar13 + uVar17,pppppppuVar11,uVar7);
            uVar17 = uVar17 + uVar7;
            if ((long)uStack_170 < 0) {
              uStack_178 = uVar17;
            }
            else {
              uStack_170 = CONCAT17((char)uVar17,(undefined7)uStack_170) & 0x7fffffffffffffff;
            }
            *(undefined1 *)((long)pppppppuVar13 + uVar17) = 0;
          }
          goto joined_r0x000b89c8;
        }
        uVar12 = uVar17 + uVar7;
        if (0x7ffffffffffffff6 < uVar12) {
          FUN_0000aa50();
          goto LAB_000b9324;
        }
        if ((long)uVar16 < 0) {
          if (uVar14 < 0x3ffffffffffffff4) goto LAB_000b881c;
          uVar14 = 0x7ffffffffffffff8;
          pppppppuVar13 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar3 = pppppppuStack_180;
        }
        else {
          uVar14 = 0x16;
LAB_000b881c:
          uVar1 = uVar12;
          if (uVar12 <= uVar14 * 2) {
            uVar1 = uVar14 * 2;
          }
          uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
// WM - chat: discord.gg/sdkhDjTex
          uVar14 = 0x19;
          if (uVar1 != 0x18) {
            uVar14 = uVar1;
          }
          pppppppuVar13 = (undefined8 *******)__Znwm(uVar14);
          pppppppuVar3 = pppppppuStack_180;
          if (-1 < (long)uVar16) {
            pppppppuVar3 = &pppppppuStack_180;
          }
        }
        if (uVar17 != 0) {
          _memmove(pppppppuVar13,pppppppuVar3,uVar17);
        }
        _memmove((long)pppppppuVar13 + uVar17,pppppppuVar11,uVar7);
        *(undefined1 *)((long)pppppppuVar13 + uVar12) = 0;
        if ((long)uVar16 < 0) {
          __ZdlPv(pppppppuStack_180);
        }
        pppppppuStack_180 = pppppppuVar13;
        uStack_178 = uVar12;
        uStack_170 = uVar14 | 0x8000000000000000;
joined_r0x000b89c8:
        pppppppuStack_140 = pppppppuStack_180;
/*  do not claim this as your own  */
        uStack_138 = uStack_178;
        uStack_130 = uStack_170;
        if ((long)uStack_1a0 < 0) {
          __ZdlPv(pppppppuStack_1b0);
        }
        if ((long)uStack_188 < 0) {
          __ZdlPv(pppppppuStack_198);
        }
        uVar7 = uStack_138;
        pppppppuVar11 = pppppppuStack_140;
        if (-1 < (long)uStack_130) {
          uVar7 = uStack_130 >> 0x38;
          pppppppuVar11 = &pppppppuStack_140;
        }
        func_0x00792db8(param_1,pppppppuVar11,uVar7);
        if ((long)uStack_130 < 0) {
          __ZdlPv(pppppppuStack_140);
        }
        if ((long)uStack_150 < 0) {
          __ZdlPv(pppppppuStack_160);
        }
        return 1;
      }
    }
  }
  pbVar9 = (byte *)(*pcRam0000000002068040)();
  if ((*pbVar9 & 1) == 0) {
    func_0x019c221c();
  }
  pcStack_218 = (char *)(*pcRam0000000002068028)();
  if (*pcStack_218 == '\x01') {
    lVar20 = 0;
    uVar7 = 0x74f0a64a26b9b102;
    do {
      uVar16 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_218[lVar20 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
/* thanks for reading - discord.gg/sdkhDjTex */
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar17 >> 0x17) ^
              ((uint)(uVar16 >> 0x29) | 1);
      pcStack_218[lVar20 + 0xe] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar17;
      uVar7 = lVar20 + -0x61c8864680b583eb +
              (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_218[lVar20 + 1]) << 0x11);
      lVar20 = lVar20 + 1;
    } while (lVar20 != 0xd);
    *pcStack_218 = '\0';
  }
  pcStack_218 = pcStack_218 + 0xe;
  func_0x0011ab24(&pcStack_218);
  func_0x007a1b5c(param_1,"%s");
LAB_000b9324:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0xb9328);
  (*pcVar4)();
}

