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
 *  file-id: 0x1fdc10:6330e6b2fb
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x001fe2f0) */

undefined8 FUN_001fdc10(byte *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 ******ppppppuVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
/*  no support for modified copies  */
  ulong uVar15;
  ulong unaff_x20;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  int aiStack_c8 [6];
  long *plStack_b0;
  long *plStack_a8;
  undefined8 ******ppppppuStack_a0;
  ulong uStack_98;
  byte bStack_89;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong auStack_70 [2];
  
  iVar3 = func_0x00791be4(param_1,1);
  if (iVar3 == 10) {
    iVar3 = func_0x00791e54(param_1,2);
    if (iVar3 == 0) goto LAB_001fe81c;
    uVar5 = func_0x00792874(param_1,1);
    if (1 < *(byte *)(uVar5 + 3)) goto LAB_001feb6c;
    pbVar6 = (byte *)(*pcRam0000000002075de0)();
    if ((*pbVar6 & 1) == 0) {
/* wm:unlicensed copy if this notice is missing */
      func_0x019d7800();
    }
    unaff_x24 = -0xae502812aa7333;
    unaff_x25 = -0x3b314601e57a13ad;
    unaff_x26 = -0x61c8864680b583eb;
    unaff_x27 = 0x8ebc6af09c88c6e3;
    pcStack_e0 = (char *)(*pcRam0000000002075dc8)();
    if (*pcStack_e0 == '\x01') {
      lVar11 = 0;
      uVar12 = 0xf75a4ec89bd5aac5;
      do {
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[lVar11 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17);
        pcStack_e0[lVar11 + 0x11] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        uVar12 = lVar11 + -0x61c8864680b583eb +
                 (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_e0[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x10);
      *pcStack_e0 = '\0';
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    }
    pcStack_e0 = pcStack_e0 + 0x11;
    uVar7 = func_0x0011ab24(&pcStack_e0);
    func_0x007935a0(param_1,0xffffd8ee,uVar7);
    func_0x00791ab0(param_1,1);
    iVar3 = func_0x00794a14(param_1,1,1,0);
    if (iVar3 != 0) goto LAB_001fecb4;
    iVar3 = func_0x00791be4(param_1,0xffffffff);
    if (iVar3 == 7) {
      uVar7 = func_0x00791624(param_1,0xffffffff);
      uVar8 = func_0x007952a0(param_1,uVar7,0);
      if (-1 < (int)uVar8) {
LAB_001fde14:
        uVar12 = func_0x00792874(param_1,0xffffffff);
        func_0x00791660(param_1,0xfffffffd);
        if (uVar5 != uVar12) goto code_r0x001fde3c;
        func_0x00791660(param_1,0xfffffffe);
        unaff_x20 = func_0x00791650(param_1);
        pbVar6 = (byte *)(*pcRam0000000002075e40)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019d792c();
        }
        pcStack_108 = (char *)(*pcRam0000000002075e28)();
        if (*pcStack_108 == '\x01') {
          lVar11 = 0;
          uVar5 = 0x4c2e3cf70029bb2b;
          do {
            uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_108[lVar11 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
            pcStack_108[lVar11 + 0x15] =
                 ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
                 (byte)uVar13;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            uVar5 = lVar11 + -0x61c8864680b583eb +
                    (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_108[lVar11 + 1]) << 0x11);
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x14);
          *pcStack_108 = '\0';
        }
        pcStack_108 = pcStack_108 + 0x15;
        uVar7 = func_0x0011ab24(&pcStack_108);
        func_0x007935a0(param_1,0xffffd8ee,uVar7);
        if (0 < (int)unaff_x20) {
          iVar3 = 1;
          uVar5 = unaff_x20;
          do {
            func_0x00791ab0(param_1,iVar3);
            iVar3 = iVar3 + 1;
            uVar1 = (int)uVar5 - 1;
            uVar5 = (ulong)uVar1;
          } while (uVar1 != 0);
        }
        iVar3 = func_0x00794a14(param_1,unaff_x20,0,0);
        if (iVar3 == 0) {
/* do not claim this as your own - github.com/pengussy */
          return 0;
        }
        pbVar6 = (byte *)(*pcRam0000000002075e70)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019d7968();
        }
        pcStack_110 = (char *)(*pcRam0000000002075e58)();
        if (*pcStack_110 == '\x01') {
          lVar11 = 0;
          uVar5 = 0x8022ad417f173783;
          do {
            uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_110[lVar11 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17) ^
                    ((uint)(uVar12 >> 0x29) | 1);
            pcStack_110[lVar11 + 0x1f] =
                 ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
            uVar5 = lVar11 + -0x61c8864680b583eb +
// stripping the watermark breaks the license
                    (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_110[lVar11 + 1]) << 0x11);
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x1e);
          *pcStack_110 = '\0';
        }
        pcStack_110 = pcStack_110 + 0x1f;
        func_0x0011ab24(&pcStack_110);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_001fefe4;
      }
    }
LAB_001fde50:
    func_0x00791660(param_1,0xfffffffe);
    auStack_70[0] = 0;
    uVar7 = func_0x00792368(param_1,2,auStack_70);
    uVar5 = auStack_70[0];
    if (auStack_70[0] < 0x7ffffffffffffff7) {
      if (auStack_70[0] < 0x17) {
        uStack_78 = CONCAT17((char)auStack_70[0],(undefined7)uStack_78);
        ppppppuVar9 = &ppppppuStack_88;
      }
      else {
        uVar12 = (auStack_70[0] & 0x7ffffffffffffff8) + 8;
        uVar13 = 0x19;
        if (uVar12 != 0x18) {
          uVar13 = uVar12;
        }
        ppppppuVar9 = (undefined8 ******)__Znwm(uVar13);
        uStack_78 = uVar13 | 0x8000000000000000;
        uStack_80 = uVar5;
        ppppppuStack_88 = ppppppuVar9;
      }
      _memmove(ppppppuVar9,uVar7,uVar5);
      *(undefined1 *)((long)ppppppuVar9 + uVar5) = 0;
/*  found on a paste site? it was re-uploaded illegally  */
      func_0x007917f4(param_1,2);
      func_0x007917f4(param_1,1);
      uVar12 = func_0x00791650(param_1);
      if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) <=
          *(ulong *)(*(long *)(param_1 + 0x38) + 0x50)) {
        func_0x00819f9c(param_1,1);
      }
      if ((*param_1 >> 2 & 1) != 0) {
        func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
      }
      uVar5 = func_0x007914c4(param_1);
      uVar4 = func_0x00796158(param_1,0xffffffff);
      func_0x00791660(param_1,0xfffffffe);
      func_0x00832c50(uVar5);
      func_0x0003bf9c(uVar5,8);
      ppppppuStack_a0 = (undefined8 ******)0x2097070;
      func_0x0016e5c8(&ppppppuStack_a0,uVar5 + 0x80,uVar5 + 0x80);
      func_0x00046494(uVar5);
      func_0x001d774c(&ppppppuStack_a0,&ppppppuStack_88,1);
      pbVar6 = (byte *)(*pcRam0000000002075ea0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019d7878();
      }
      pcStack_f0 = (char *)(*pcRam0000000002075e88)();
/* unlicensed copy if this notice is missing - github.com/pengussy */
      if (*pcStack_f0 == '\x01') {
        lVar11 = 0;
        uVar13 = 0x8871faa7cc92cce5;
        do {
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_f0[lVar11 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_f0[lVar11 + 0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar15
          ;
          uVar13 = lVar11 + -0x61c8864680b583eb +
                   (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_f0[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0xf);
        *pcStack_f0 = '\0';
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      }
      pcStack_f0 = pcStack_f0 + 0x10;
      uVar7 = func_0x0011ab24(&pcStack_f0);
      ppppppuVar9 = ppppppuStack_a0;
      if (-1 < (char)bStack_89) {
        uStack_98 = (ulong)bStack_89;
        ppppppuVar9 = &ppppppuStack_a0;
      }
      iVar3 = func_0x0090436c(uVar5,uVar7,ppppppuVar9,uStack_98,0);
      if (iVar3 == 0) {
        plVar10 = (long *)func_0x00790f58(uVar5,0xffffffff);
        func_0x0003c048(*(undefined8 *)(*plVar10 + 0x18));
        if (0 < (int)uVar12) {
          iVar3 = 1;
          uVar13 = uVar12;
          do {
            func_0x00791ab0(param_1,iVar3);
            func_0x00791230(param_1,uVar5,1);
            iVar3 = iVar3 + 1;
            uVar1 = (int)uVar13 - 1;
            uVar13 = (ulong)uVar1;
          } while (uVar1 != 0);
        }
        plStack_a8 = (long *)__Znwm(0x50);
        plStack_a8[1] = 0;
        plStack_a8[2] = 0;
        *plStack_a8 = (long)&UNK_01dbf3e0;
        plStack_a8[6] = 0;
        plStack_a8[5] = 0;
        plStack_a8[8] = 0;
        plStack_a8[7] = 0;
        plStack_b0 = plStack_a8 + 3;
        plStack_a8[4] = 0;
// found on a paste site? it was re-uploaded illegally
        *plStack_b0 = 0;
        plStack_a8[6] = -1;
        plStack_a8[8] = uVar5;
        plStack_a8[9] = 0;
        *(undefined4 *)(plStack_a8 + 9) = uVar4;
        (*pcRam0000000001f26dc8)
                  (aiStack_c8,
                   lRam0000000001f26820 +
                   *(long *)(*(long *)(*(long *)(uVar5 + 0x20) + 0x18) + 0x10),&plStack_b0,uVar12,0,
                   0);
        pcVar2 = pcRam0000000001f26db0;
        if (aiStack_c8[0] == 2) {
          pbVar6 = (byte *)(*pcRam0000000002075f00)();
          if ((*pbVar6 & 1) == 0) {
            func_0x019d78f0();
          }
          pcStack_100 = (char *)(*pcRam0000000002075ee8)();
          if (*pcStack_100 == '\x01') {
            lVar11 = 0;
            uVar12 = 0x509e615a96d1601e;
            do {
              uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
              uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
              uVar14 = uVar13 ^ uVar13 >> 0x21;
              uVar1 = (uint)(byte)pcStack_100[lVar11 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                      (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
              pcStack_100[lVar11 + 0x1f] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar14;
              uVar12 = lVar11 + -0x61c8864680b583eb +
                       (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_100[lVar11 + 1]) << 0x11);
              lVar11 = lVar11 + 1;
/* wm:origin: github.com/pengussy */
            } while (lVar11 != 0x1e);
            *pcStack_100 = '\0';
          }
          pcStack_100 = pcStack_100 + 0x1f;
          uVar7 = func_0x0011ab24(&pcStack_100);
          func_0x00792368(uVar5,0xffffffff,0);
          (*pcVar2)(2,uVar7);
          func_0x00791660(uVar5,0xfffffffe);
        }
        plVar10 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          LOAcquire();
          lVar11 = plStack_a8[1];
          plStack_a8[1] = lVar11 + -1;
          LORelease();
          if (lVar11 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if ((char)bStack_89 < '\0') {
          __ZdlPv(ppppppuStack_a0);
        }
        return 0;
      }
      goto LAB_001fedc0;
    }
  }
  else {
    pbVar6 = (byte *)(*pcRam0000000002075d50)();
    if ((*pbVar6 & 1) == 0) {
LAB_001fefe4:
      func_0x019d7788();
    }
    pcStack_d0 = (char *)(*pcRam0000000002075d38)();
    if (*pcStack_d0 == '\x01') {
      uVar1 = (byte)pcStack_d0[1] ^ 0x7c655e06;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xa7106f9;
// donate: donate/README.md
      pcStack_d0[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x9d ^ 0xc5;
      uVar5 = (((ulong)(byte)pcStack_d0[1] ^ 0x9978bf3ef1fa902a) << 0x11 | 0x132f1) +
              0x9e3779b97f4a7c15;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_d0[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
      pcStack_d0[9] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_d0[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
      pcStack_d0[10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
/*  watermarked copy - do not remove  */
      uVar1 = (uint)(byte)pcStack_d0[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
      pcStack_d0[0xb] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_d0[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
      pcStack_d0[0xc] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_d0[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
      pcStack_d0[0xd] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_d0[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar12 >> 0x17);
      pcStack_d0[0xe] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar12;
/* unlicensed copy if this notice is missing */
      *pcStack_d0 = '\0';
    }
    pcStack_d0 = pcStack_d0 + 8;
    uVar7 = func_0x0011ab24(&pcStack_d0);
    func_0x007a1ba8(param_1,1,uVar7);
LAB_001fe81c:
    pbVar6 = (byte *)(*pcRam0000000002075d80)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d79a4();
    }
    pcStack_118 = (char *)(*pcRam0000000002075d68)();
    if (*pcStack_118 == '\x01') {
      uVar1 = (byte)pcStack_118[1] ^ 0x8b8ecf24;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x135f17f3;
      pcStack_118[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0xe7;
      uVar5 = (((ulong)(byte)pcStack_118[1] ^ 0x142960e690e120f4) << 0x11 | 0x2852) +
/* wm:reversing this took months of machine time */
              0x9e3779b97f4a7c15;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
/* do not claim this as your own */
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_118[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_118[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar12;
      *pcStack_118 = '\0';
    }
    pcStack_118 = pcStack_118 + 8;
    uVar7 = func_0x0011ab24(&pcStack_118);
    func_0x007a1ba8(param_1,2,uVar7);
LAB_001feb6c:
    uVar5 = unaff_x20;
    pbVar6 = (byte *)(*pcRam0000000002075db0)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d77c4();
    }
    pcStack_d8 = (char *)(*pcRam0000000002075d98)();
    if (*pcStack_d8 == '\x01') {
      lVar11 = 0;
      uVar12 = 0xf002e504c72f1a81;
      do {
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
// chat: discord.gg/sdkhDjTex
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d8[lVar11 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
        pcStack_d8[lVar11 + 0x2a] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar14;
        uVar12 = lVar11 + -0x61c8864680b583eb +
                 (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_d8[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x29);
      *pcStack_d8 = '\0';
    }
    pcStack_d8 = pcStack_d8 + 0x2a;
    func_0x0011ab24(&pcStack_d8);
    func_0x007a1b5c(param_1,"%s");
LAB_001fecb4:
    pbVar6 = (byte *)(*pcRam0000000002075e10)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d783c();
    }
    pcStack_e8 = (char *)(*pcRam0000000002075df8)();
    if (*pcStack_e8 == '\x01') {
      lVar11 = 0;
      uVar12 = (unaff_x27 ^ 0x894a9f21abb19397 ^ (unaff_x27 ^ 0x894a9f21abb19397) >> 0x21) *
               unaff_x24;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * unaff_x25;
      uVar12 = uVar12 ^ uVar12 >> 0x21;
      do {
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * unaff_x24;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * unaff_x25;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[lVar11 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
        pcStack_e8[lVar11 + 0x1d] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar14;
        uVar12 = lVar11 + unaff_x26 +
                 (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_e8[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
/* WM - if you paid for this, you were scammed */
      } while (lVar11 != 0x1c);
      *pcStack_e8 = '\0';
    }
    pcStack_e8 = pcStack_e8 + 0x1d;
    func_0x0011ab24(&pcStack_e8);
    func_0x007a1b5c(param_1,"%s");
  }
  FUN_0000aa50();
LAB_001fedc0:
  pbVar6 = (byte *)(*pcRam0000000002075ed0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019d78b4();
  }
  pcStack_f8 = (char *)(*pcRam0000000002075eb8)();
  if (*pcStack_f8 == '\x01') {
    lVar11 = 0;
    uVar12 = (unaff_x27 ^ 0x973dfb7d9a3d5b35 ^ (unaff_x27 ^ 0x973dfb7d9a3d5b35) >> 0x21) * unaff_x24
    ;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * unaff_x25;
    uVar12 = uVar12 ^ uVar12 >> 0x21;
    do {
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * unaff_x24;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * unaff_x25;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[lVar11 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar14 >> 0x17);
      pcStack_f8[lVar11 + 0x1a] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
           (byte)uVar14;
      uVar12 = lVar11 + unaff_x26 +
               (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_f8[lVar11 + 1]) << 0x11);
      lVar11 = lVar11 + 1;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    } while (lVar11 != 0x19);
    *pcStack_f8 = '\0';
  }
  pcStack_f8 = pcStack_f8 + 0x1a;
  uVar7 = func_0x0011ab24(&pcStack_f8);
  func_0x00792368(uVar5,0xffffffff,0);
  func_0x007a1b5c(param_1,uVar7);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1feedc);
  (*pcVar2)();
code_r0x001fde3c:
  uVar8 = func_0x007952a0(param_1,uVar7,uVar8);
  if ((int)uVar8 < 0) goto LAB_001fde50;
  goto LAB_001fde14;
}

