/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1fbb5c:fc38246a3f
 */

/* WARNING: Removing unreachable block (ram,0x001fc2bc) */
/* WARNING: Removing unreachable block (ram,0x001fc2dc) */
/* WARNING: Removing unreachable block (ram,0x001fc174) */

undefined8 FUN_001fbb5c(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  long extraout_x1;
  undefined1 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
/* WM - keep the notice, keep the source honest */
  char *pcStack_e8;
  undefined4 uStack_e0;
  undefined3 uStack_dc;
  undefined8 ****ppppuStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 ****ppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  undefined8 uStack_58;
  
  iVar4 = func_0x00791e54(param_1,2);
  if (iVar4 == 0) {
    pbVar8 = (byte *)(*pcRam0000000002075a80)();
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
    if ((*pbVar8 & 1) == 0) {
      func_0x019d7710();
    }
    pcStack_108 = (char *)(*pcRam0000000002075a68)();
    if (*pcStack_108 == '\x01') {
      uVar1 = (byte)pcStack_108[1] ^ 0xa1cdb795;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x809ae744 ^ 0x68dfd9;
      pcStack_108[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0xaa;
      uVar12 = (((ulong)(byte)pcStack_108[1] ^ 0x79a3aeff55a659a9) << 0x11 | 0xf347) +
               0x9e3779b97f4a7c15;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_108[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_108[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_108[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_108[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
// more drops soon - github.com/pengussy
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_108[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_108[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[5] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_108[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_108[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[6] ^ (uint)uVar14 ^ 0xffffffc3;
/*  donate: donate/README.md  */
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_108[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_108[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[7] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_108[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar13;
      *pcStack_108 = '\0';
    }
    pcStack_108 = pcStack_108 + 8;
    uVar5 = func_0x0011ab24(&pcStack_108);
    func_0x007a1ba8(param_1,2,uVar5);
LAB_001fc658:
// origin: github.com/pengussy
    FUN_0000aa50();
  }
  else {
    uVar5 = func_0x00792368(param_1,2,&uStack_70);
    if (0x7ffffffffffffff6 < uStack_70) goto LAB_001fc658;
    if (uStack_70 < 0x17) {
      uStack_78 = CONCAT17((char)uStack_70,(undefined7)uStack_78);
      ppppuVar6 = &ppppuStack_88;
    }
    else {
      uVar12 = (uStack_70 & 0x7ffffffffffffff8) + 8;
      uVar13 = 0x19;
      if (uVar12 != 0x18) {
        uVar13 = uVar12;
      }
      ppppuVar6 = (undefined8 ****)__Znwm(uVar13);
      uStack_78 = uVar13 | 0x8000000000000000;
      uStack_80 = uStack_70;
      ppppuStack_88 = ppppuVar6;
    }
    _memmove(ppppuVar6,uVar5,uStack_70);
    *(undefined1 *)((long)ppppuVar6 + uStack_70) = 0;
/* wm:origin: github.com/pengussy */
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    ppppuVar6 = ppppuStack_88;
    if (-1 < (long)uStack_78._7_1_) {
      ppppuVar6 = &ppppuStack_88;
    }
    uVar12 = uStack_80;
    if (-1 < (long)uStack_78) {
      uVar12 = (long)uStack_78._7_1_;
    }
    func_0x0013be80(&uStack_a0,ppppuVar6,(long)ppppuVar6 + uVar12);
    uVar12 = uStack_98;
    if (-1 < (long)uStack_90) {
      uVar12 = uStack_90 >> 0x38;
    }
    if (uVar12 == 0) {
LAB_001fc690:
      pbVar8 = (byte *)(*pcRam0000000002075b10)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019d76d4();
      }
      pcStack_100 = (char *)(*pcRam0000000002075af8)();
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      if (*pcStack_100 == '\x01') {
        lVar7 = 0;
        uVar12 = 0xab2930c1894d035e;
        do {
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcStack_100[lVar7 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17) ^
                  ((uint)(uVar13 >> 0x29) | 1);
          pcStack_100[lVar7 + 0x16] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14
          ;
          uVar12 = lVar7 + -0x61c8864680b583eb +
                   (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_100[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x15);
        *pcStack_100 = '\0';
      }
      pcStack_100 = pcStack_100 + 0x16;
      uVar5 = func_0x0011ab24(&pcStack_100);
      func_0x007a1abc(param_1,2,uVar5);
      goto LAB_001fc948;
    }
    uVar12 = uStack_80;
    ppppuVar6 = ppppuStack_88;
    if (-1 < (long)uStack_78) {
      uVar12 = uStack_78 >> 0x38;
      ppppuVar6 = &ppppuStack_88;
    }
    lVar7 = _memchr(ppppuVar6,0,uVar12);
    if (((lVar7 != 0) && (lVar7 - (long)ppppuVar6 != -1)) ||
       (__ZNKSt3__14__fs10filesystem4path15__root_path_rawEv(&uStack_a0), extraout_x1 != 0))
    goto LAB_001fc690;
    auVar15 = __ZNKSt3__14__fs10filesystem4path10__filenameEv(&uStack_a0);
    ppppuVar6 = auVar15._8_8_;
    if (ppppuVar6 < (undefined8 ****)0x7ffffffffffffff7) {
      if ((undefined8 ****)((long)&MACH_HEADER.sizeofcmds + 2) < ppppuVar6) {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar12 = ((ulong)ppppuVar6 & 0x7ffffffffffffff8) + 8;
        uVar13 = 0x19;
        if (uVar12 != 0x18) {
          uVar13 = uVar12;
        }
        ppppuVar10 = (undefined8 ****)__Znwm(uVar13);
        uStack_58 = uVar13 | 0x8000000000000000;
        ppppuStack_68 = ppppuVar10;
        ppppuStack_60 = ppppuVar6;
      }
      else {
        uStack_58 = CONCAT17(auVar15[8],(undefined7)uStack_58);
        ppppuVar10 = &ppppuStack_68;
      }
      _memmove(ppppuVar10,auVar15._0_8_,ppppuVar6);
      *(undefined1 *)((long)ppppuVar10 + (long)ppppuVar6) = 0;
      uStack_b0 = uStack_58;
      ppppuStack_b8 = ppppuStack_60;
      ppppuStack_c0 = ppppuStack_68;
      ppppuVar6 = ppppuStack_60;
      ppppuVar10 = ppppuStack_68;
      if (-1 < (long)uStack_58) {
        ppppuVar6 = (undefined8 ****)(uStack_58 >> 0x38);
        ppppuVar10 = &ppppuStack_c0;
      }
      iVar4 = __ZNKSt3__14__fs10filesystem4path9__compareENS_17basic_string_viewIcNS_11char_traitsIcEEEE
                        (&uStack_a0,ppppuVar10,ppppuVar6);
      if (iVar4 == 0) {
        pbVar8 = (byte *)(*pcRam0000000002075ab0)();
/* WM - watermarked copy - do not remove */
        if ((*pbVar8 & 1) == 0) {
          func_0x019d7620();
        }
        pcStack_e8 = (char *)(*pcRam0000000002075a98)();
        if (*pcStack_e8 == '\x01') {
          uVar1 = (byte)pcStack_e8[1] ^ 0x66e3bc41;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x3fd67add;
          pcStack_e8[3] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0x82;
          uVar12 = (((ulong)(byte)pcStack_e8[1] ^ 0x753f7860a27c3ed8) << 0x11 | 0xea7e) +
                   0x9e3779b97f4a7c15;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_e8[4] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar13;
          *pcStack_e8 = '\0';
        }
        pcStack_e8 = pcStack_e8 + 3;
        lVar7 = func_0x0011ab24(&pcStack_e8);
        ppppuStack_60 = (undefined8 ****)0x0;
        uStack_58 = 0;
        ppppuStack_68 = (undefined8 ****)0x0;
        lVar9 = _strlen();
        func_0x0013be80(&ppppuStack_68,lVar7,lVar7 + lVar9);
        ppppuVar6 = ppppuStack_60;
        ppppuVar10 = ppppuStack_68;
        if (-1 < (long)uStack_58) {
          ppppuVar6 = (undefined8 ****)(uStack_58 >> 0x38);
          ppppuVar10 = &ppppuStack_68;
        }
        iVar4 = __ZNKSt3__14__fs10filesystem4path9__compareENS_17basic_string_viewIcNS_11char_traitsIcEEEE
                          (&uStack_a0,ppppuVar10,ppppuVar6);
        if (iVar4 != 0) {
          pbVar8 = (byte *)(*pcRam0000000002075ae0)();
/*  do not claim this as your own  */
          if ((*pbVar8 & 1) == 0) {
            func_0x019d765c();
          }
          pcStack_f0 = (char *)(*pcRam0000000002075ac8)();
          if (*pcStack_f0 == '\x01') {
            uVar1 = (byte)pcStack_f0[1] ^ 0xff937483;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xcef72dc1;
            pcStack_f0[4] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x40;
            uVar12 = (((ulong)(byte)pcStack_f0[1] ^ 0x60ea6cdbc6ef7c4b) << 0x11 | 0xc1d4) +
                     0x9e3779b97f4a7c15;
            uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar13 ^ uVar13 >> 0x21;
            uVar1 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                    (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_f0[5] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar14;
            uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                    (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
            pcStack_f0[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
            *pcStack_f0 = '\0';
          }
          pcStack_f0 = pcStack_f0 + 4;
/* wm:more drops soon - github.com/pengussy */
          lVar7 = func_0x0011ab24(&pcStack_f0);
          uStack_d0 = 0;
          uStack_c8 = 0;
          ppppuStack_d8 = (undefined8 ****)0x0;
          lVar9 = _strlen();
          func_0x0013be80(&ppppuStack_d8,lVar7,lVar7 + lVar9);
          uVar12 = uStack_d0;
          ppppuVar6 = ppppuStack_d8;
          if (-1 < (long)uStack_c8) {
            uVar12 = uStack_c8 >> 0x38;
            ppppuVar6 = &ppppuStack_d8;
          }
          iVar4 = __ZNKSt3__14__fs10filesystem4path9__compareENS_17basic_string_viewIcNS_11char_traitsIcEEEE
                            (&uStack_a0,ppppuVar6,uVar12);
          if (iVar4 != 0) {
            if ((long)uStack_c8 < 0) {
              __ZdlPv(ppppuStack_d8);
            }
            if ((long)uStack_b0 < 0) {
              __ZdlPv(ppppuStack_c0);
            }
            ppppuStack_d8 = (undefined8 ****)0x0;
            lVar7 = func_0x00792368(param_1,0xffffd8ed,&ppppuStack_d8);
            ppppuVar6 = ppppuStack_d8;
            if (lVar7 == 0) {
              ppppuVar10 = (undefined8 ****)0x0;
              uVar11 = 0;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
              uStack_e0 = 0;
              uStack_dc = 0;
              ppppuVar6 = (undefined8 ****)0x0;
LAB_001fc210:
              uStack_b0 = 0;
              ppppuStack_b8 = (undefined8 ****)0x0;
              ppppuStack_c0 = (undefined8 ****)0x0;
              bVar2 = false;
              uStack_58._0_7_ = CONCAT43(CONCAT31(uStack_dc,uStack_e0._3_1_),(int3)uStack_e0);
              uStack_58 = CONCAT17(uVar11,(undefined7)uStack_58);
              ppppuStack_68 = ppppuVar6;
              ppppuStack_60 = ppppuVar10;
            }
            else {
              if ((undefined8 ****)0x7ffffffffffffff6 < ppppuStack_d8) {
                FUN_0000aa50();
                goto LAB_001fc948;
              }
              if ((undefined8 ****)((long)&MACH_HEADER.sizeofcmds + 2) < ppppuStack_d8) {
                uVar12 = ((ulong)ppppuStack_d8 & 0x7ffffffffffffff8) + 8;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                uVar13 = 0x19;
                if (uVar12 != 0x18) {
                  uVar13 = uVar12;
                }
                ppppuVar10 = (undefined8 ****)__Znwm(uVar13);
                uStack_b0 = uVar13 | 0x8000000000000000;
                ppppuStack_b8 = ppppuVar6;
                ppppuStack_c0 = ppppuVar10;
              }
              else {
                uStack_b0 = CONCAT17((char)ppppuStack_d8,(undefined7)uStack_b0);
                ppppuVar10 = &ppppuStack_c0;
              }
              _memmove(ppppuVar10,lVar7,ppppuVar6);
              *(undefined1 *)((long)ppppuVar10 + (long)ppppuVar6) = 0;
              uVar12 = uStack_b0;
              ppppuVar10 = ppppuStack_b8;
              ppppuVar6 = ppppuStack_c0;
              uVar11 = uStack_b0._7_1_;
              uStack_e0 = (undefined4)uStack_b0;
              uStack_dc = (undefined3)(uStack_b0 >> 0x20);
              ppppuStack_c0 = (undefined8 ****)0x0;
              ppppuStack_b8 = (undefined8 ****)0x0;
              uStack_b0 = 0;
              if (-1 < (long)uVar12) goto LAB_001fc210;
              func_0x00017ae8(&ppppuStack_68,ppppuVar6);
              bVar2 = true;
            }
            func_0x0014081c(&ppppuStack_68,&uStack_a0);
            if (bVar2) {
              __ZdlPv(ppppuVar6);
            }
            ppppuStack_d8 = (undefined8 ****)((ulong)ppppuStack_d8 & 0xffffffff00000000);
            uStack_d0 = __ZNSt3__115system_categoryEv();
            __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE
                      (&ppppuStack_68,&ppppuStack_d8);
            if ((int)ppppuStack_d8 == 0) {
/* wm:watermarked copy - do not remove */
              FUN_001f9bc0(param_1,&ppppuStack_68);
              if ((long)uStack_90 < 0) {
                __ZdlPv(uStack_a0);
              }
              return 1;
            }
            pbVar8 = (byte *)(*pcRam0000000002075b40)();
            if ((*pbVar8 & 1) == 0) {
              func_0x019d7698();
            }
            pcStack_f8 = (char *)(*pcRam0000000002075b28)();
            if (*pcStack_f8 == '\x01') {
              lVar7 = 0;
              uVar12 = 0xa9365a18091d4ecb;
              do {
                uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
                uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
                uVar14 = uVar13 ^ uVar13 >> 0x21;
                uVar1 = (uint)(byte)pcStack_f8[lVar7 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17) ^
                        ((uint)(uVar13 >> 0x29) | 1);
                pcStack_f8[lVar7 + 0x1d] =
                     ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar14;
                uVar12 = lVar7 + -0x61c8864680b583eb +
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                         (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_f8[lVar7 + 1]) << 0x11);
                lVar7 = lVar7 + 1;
              } while (lVar7 != 0x1c);
              *pcStack_f8 = '\0';
            }
            pcStack_f8 = pcStack_f8 + 0x1d;
            uVar5 = func_0x0011ab24(&pcStack_f8);
            __ZNKSt3__110error_code7messageEv(&ppppuStack_c0,&ppppuStack_d8);
            func_0x007a1b5c(param_1,uVar5);
            goto LAB_001fc948;
          }
        }
      }
      goto LAB_001fc690;
    }
  }
  FUN_0000aa50();
LAB_001fc948:
/* WM - stripping the watermark breaks the license */
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1fc94c);
  (*pcVar3)();
}

