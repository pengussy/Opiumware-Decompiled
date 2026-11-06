/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x397110:236dd5a705
 */

undefined8 *
FUN_00397110(undefined8 *param_1,int param_2,undefined *param_3,int param_4,undefined *param_5,
            undefined *param_6,undefined8 param_7,undefined *param_8,undefined *param_9,
            undefined8 param_10,int param_11,undefined8 *param_12,long param_13)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar20;
  ulong *puVar21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar22;
  ulong *puVar23;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
/* if you paid for this, you were scammed - github.com/pengussy */
  undefined8 uStack_570;
  int iStack_564;
  undefined1 auStack_560 [40];
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 auStack_510 [4];
  undefined8 auStack_4f0 [28];
  ulong auStack_410 [52];
  ulong auStack_270 [32];
  long lStack_170;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  undefined8 auStack_c0 [5];
  undefined8 auStack_98 [5];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar22 = (undefined *)(ulong)(*(int *)((long)param_1 + 0x1c) == 1);
  puVar14 = param_3;
  puVar15 = param_5;
  puVar16 = param_6;
  if (param_2 == 3) {
    uStack_f0 = param_7;
    lVar7 = func_0x00451f08();
    param_1[0x204] = lVar7;
    unaff_x19 = param_1;
    unaff_x24 = param_8;
    unaff_x26 = param_5;
    unaff_x27 = param_3;
    unaff_x28 = param_6;
    if (lVar7 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                      ,0x26,"tls1_set_crypto_state");
      puVar14 = &UNK_00080006;
LAB_00397238:
      param_4 = 0;
      func_0x00397da4(param_1,0x50);
      goto LAB_00397460;
    }
    lVar8 = func_0x0044efa4();
    param_1[0x207] = lVar8;
    unaff_x20 = lVar7;
// no support for modified copies
    if (lVar8 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                      ,0x2e,"tls1_set_crypto_state");
      puVar14 = &UNK_000c0103;
      goto LAB_00397238;
    }
    if (param_13 != 0) {
      lVar8 = func_0x00405aa4();
      param_1[0x208] = lVar8;
      if (lVar8 != 0) goto LAB_0039719c;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                      ,0x35,"tls1_set_crypto_state");
      puVar13 = (undefined *)0x8e;
      param_12 = unaff_x21;
LAB_00397458:
      puVar14 = (undefined *)0x0;
      func_0x004466b0(0x14,puVar13);
      unaff_x21 = param_12;
      goto LAB_00397460;
    }
LAB_0039719c:
    uVar4 = func_0x00440340(param_9);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    unaff_x23 = param_9;
    if ((uVar4 >> 0x15 & 1) == 0) {
      puStack_f8 = param_12;
      if (param_11 == 0x357) {
        uVar9 = uStack_f0;
        puVar15 = param_8;
        unaff_x22 = (undefined *)func_0x0045ed5c(*param_1,"HMAC",param_1[1]);
        param_4 = (int)uVar9;
      }
      else {
        puVar14 = param_8;
        unaff_x22 = (undefined *)func_0x019ea780(param_11,0,uStack_f0);
        param_4 = (int)puVar14;
      }
      param_12 = auStack_c0;
      if (param_1[1] != 0) {
        param_12 = auStack_98;
        func_0x0047992c(auStack_c0,"properties",param_1[1],0);
      }
      func_0x00479f78(&uStack_e8);
      param_12[1] = uStack_e0;
      *param_12 = uStack_e8;
      param_12[3] = uStack_d0;
// more drops soon - github.com/pengussy
      param_12[2] = uStack_d8;
      param_12[4] = uStack_c8;
      if (unaff_x22 != (undefined *)0x0) {
        param_12 = (undefined8 *)param_1[0x207];
        uVar9 = func_0x00455ed0(puStack_f8);
        param_4 = (int)*param_1;
        puVar15 = (undefined *)param_1[1];
        puVar16 = unaff_x22;
        iVar5 = func_0x0045b25c(param_12,0,uVar9);
        if (0 < iVar5) {
          func_0x0045eb4c(unaff_x22);
          param_12 = puStack_f8;
          goto LAB_00397300;
        }
      }
      func_0x0045eb4c(unaff_x22);
      func_0x004464bc();
      uVar9 = 0x5e;
/*  proprietary - see LICENSE - do not sell  */
LAB_00397448:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                      ,uVar9,"tls1_set_crypto_state");
      puVar13 = &UNK_000c0103;
      goto LAB_00397458;
    }
LAB_00397300:
    iVar5 = func_0x004553d8(param_9);
    puVar16 = puVar22;
    if (iVar5 != 6) {
      iVar5 = func_0x004553d8(param_9);
      if (iVar5 == 7) {
        param_4 = 0;
        puVar15 = (undefined *)0x0;
        iVar5 = func_0x019e9b88(lVar7,param_9,0);
        if (iVar5 != 0) {
          param_4 = 0;
          iVar5 = func_0x00452c6c(lVar7,9,0xc);
          if (0 < iVar5) {
            param_4 = 0;
            iVar5 = func_0x00452c6c(lVar7,0x11,param_10);
            if (0 < iVar5) {
              puVar14 = param_5;
              iVar5 = func_0x00452c6c(lVar7,0x12,param_6);
              param_4 = (int)puVar14;
              if (0 < iVar5) {
                puVar14 = (undefined *)0x0;
                puVar15 = (undefined *)0x0;
                puVar13 = param_3;
                puVar16 = puVar22;
                iVar5 = func_0x019e9b88(lVar7,0);
                param_4 = (int)puVar13;
                if (iVar5 != 0) goto LAB_003974bc;
              }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
            }
          }
        }
        func_0x004464bc();
        uVar9 = 0x78;
      }
      else {
        puVar14 = (undefined *)0x0;
        puVar13 = param_3;
        puVar15 = param_5;
        iVar5 = func_0x019e9b88(lVar7,param_9);
        param_4 = (int)puVar13;
        if (iVar5 != 0) goto LAB_003974bc;
        func_0x004464bc();
        uVar9 = 0x7d;
      }
      goto LAB_00397448;
    }
    puVar15 = (undefined *)0x0;
    puVar14 = param_3;
    iVar5 = func_0x019e9b88(lVar7,param_9,0);
    param_4 = (int)puVar14;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (iVar5 == 0) {
LAB_0039734c:
      func_0x004464bc();
      uVar9 = 0x69;
      goto LAB_00397448;
    }
    puVar14 = param_6;
    puVar13 = param_5;
    iVar5 = func_0x00452c6c(lVar7,0x12);
    param_4 = (int)puVar13;
    if (iVar5 < 1) goto LAB_0039734c;
LAB_003974bc:
    uVar4 = func_0x00440340(param_9);
    if ((param_8 != (undefined *)0x0) && ((uVar4 >> 0x15 & 1) != 0)) {
      puVar14 = param_8;
      uVar9 = uStack_f0;
      iVar5 = func_0x00452c6c(lVar7,0x17);
      param_4 = (int)uVar9;
      if (iVar5 < 1) {
        func_0x004464bc();
        uVar9 = 0x87;
/* WM - unlicensed copy if this notice is missing */
        goto LAB_00397448;
      }
    }
    func_0x00440550(lVar7);
    lVar8 = func_0x003754d8();
    unaff_x21 = param_12;
    if (lVar8 != 0) {
      puVar14 = param_9;
      iVar5 = func_0x00397df0(param_1,lVar7);
      param_4 = (int)param_12;
      if (iVar5 == 0) goto LAB_00397460;
    }
    iVar5 = *(int *)((long)param_1 + 0x14);
    puVar10 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    if (iVar5 < 0xfefd) {
      if ((iVar5 - 0x302U < 2) || (iVar5 == 0x100)) {
LAB_00397554:
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        func_0x00440550(lVar7);
        iVar5 = func_0x004553d8();
        if (iVar5 - 6U < 2) {
          uVar17 = 8;
        }
        else if (iVar5 == 2) {
          uVar4 = func_0x00455298(lVar7);
          if ((int)uVar4 < 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                            ,0x99,"tls1_set_crypto_state");
            puVar14 = (undefined *)0x112;
            goto LAB_00397238;
          }
          uVar1 = 0;
          if (1 < uVar4) {
            uVar1 = uVar4;
          }
          uVar17 = (ulong)uVar1;
        }
        else {
          uVar17 = 0;
        }
        param_1[0x206] = uVar17;
        puVar10 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else if ((iVar5 == 0xfeff) || (iVar5 == 0xfefd)) goto LAB_00397554;
  }
  else {
LAB_00397460:
    puVar10 = (undefined8 *)0xfffffffe;
    param_1 = unaff_x19;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    lVar7 = unaff_x20;
    param_8 = unaff_x24;
    param_5 = unaff_x26;
    param_3 = unaff_x27;
    param_6 = unaff_x28;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return puVar10;
  }
  auVar31 = ___stack_chk_fail(puVar10);
  lVar8 = auVar31._8_8_;
  puVar10 = auVar31._0_8_;
  puStack_108 = &DAT_0039760c;
  lStack_170 = *(long *)PTR____stack_chk_guard_01f20200;
  puStack_160 = param_6;
  puStack_158 = param_3;
  puStack_150 = param_5;
  puStack_148 = puVar22;
  puStack_140 = param_8;
  puStack_138 = unaff_x23;
  puStack_130 = unaff_x22;
  puStack_128 = unaff_x21;
  lStack_120 = lVar7;
/*  more drops soon - github.com/pengussy  */
  puStack_118 = param_1;
  puStack_110 = auStack_68 + 0x58;
  if (puVar14 == (undefined *)0x0) {
    func_0x004464bc();
    uVar9 = 0xc3;
code_r0x003976c4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                    ,uVar9,&UNK_01c398fb);
    puVar15 = &UNK_000c0103;
code_r0x003978e8:
    func_0x00397da4(puVar10,0x50,puVar15,0);
  }
  else {
    lVar7 = func_0x00440550(puVar10[0x207]);
    if ((lVar7 == 0) || (iVar5 = func_0x00455f9c(puVar10[0x207]), -1 < iVar5)) {
      lVar7 = puVar10[0x204];
      if (lVar7 == 0) {
        func_0x019e701c(puVar10);
      }
      else {
        lVar11 = func_0x00440550(lVar7);
        if (param_4 != 0) {
/* found on a paste site? it was re-uploaded illegally */
          iVar5 = *(int *)((long)puVar10 + 0x14);
          if (iVar5 < 0xfefd) {
            if ((iVar5 - 0x302U < 2) || (iVar5 == 0x100)) {
code_r0x003976f4:
              iVar5 = func_0x004553d8(lVar11);
              if ((iVar5 == 2) && (iVar5 = func_0x00455c98(lVar11), 1 < iVar5)) {
                plVar20 = (long *)(lVar8 + 0x28);
                puVar22 = puVar14;
                do {
                  if (plVar20[-1] != *plVar20) {
                    func_0x004464bc();
                    uVar9 = 0xe3;
                    goto code_r0x003976c4;
                  }
                  iVar6 = func_0x004b242c(*puVar10,*plVar20,iVar5,0);
                  if (iVar6 < 1) {
/* WM - origin: github.com/pengussy */
                    func_0x004464bc();
                    uVar9 = 0xe8;
                    goto code_r0x003976c4;
                  }
                  plVar20 = plVar20 + 9;
                  puVar22 = puVar22 + -1;
                } while (puVar22 != (undefined *)0x0);
              }
            }
          }
          else if ((iVar5 == 0xfeff) || (iVar5 == 0xfefd)) goto code_r0x003976f4;
        }
        if (lVar11 != 0) {
          func_0x00440550(lVar7);
          iVar5 = func_0x00455bb4();
          if (iVar5 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                            ,0xf6,&UNK_01c398fb);
            puVar15 = (undefined *)0xba;
          }
          else {
            if (puVar14 == (undefined *)0x1) {
code_r0x003977ac:
              puVar22 = (undefined *)0x0;
/* watermarked copy - do not remove */
              uVar17 = (ulong)iVar5;
              puVar21 = (ulong *)(lVar8 + 8);
              puVar23 = auStack_410;
              do {
                uVar24 = *puVar21;
                auStack_270[(long)puVar22] = uVar24;
                func_0x00440550(lVar7);
                uVar4 = func_0x00440340();
                if ((uVar4 >> 0x15 & 1) == 0) {
                  if (param_4 == 0) {
code_r0x003978a8:
                    if (uVar24 == 0) goto code_r0x003978f0;
                    uVar2 = 0;
                    if (uVar17 != 0) {
                      uVar2 = uVar24 / uVar17;
                    }
                    if (uVar24 != uVar2 * uVar17) goto code_r0x003978f0;
                  }
                }
                else {
                  if (*(int *)(puVar10 + 2) == 0) {
                    *puVar23 = puVar10[0x200];
                    puVar12 = (undefined8 *)func_0x0039af18(puVar10);
                    if ((int)puVar12 == 0) goto code_r0x003978f4;
                  }
                  else {
                    *puVar23 = (ulong)*(uint *)((long)puVar10 + 0x1002) << 0x10 |
                               (ulong)*(ushort *)((long)puVar10 + 0x1006) << 0x30 |
                               ((ulong)*(ushort *)(puVar10 + 6) & 0xff) << 8 |
// WM - do not claim this as your own
                               (ulong)(*(ushort *)(puVar10 + 6) >> 8);
                  }
                  *(char *)(puVar23 + 1) = (char)*(undefined4 *)((long)puVar21 + -4);
                  *(ushort *)((long)puVar23 + 9) =
                       *(ushort *)((long)puVar10 + 0x14) >> 8 |
                       *(ushort *)((long)puVar10 + 0x14) << 8;
                  *(ushort *)((long)puVar23 + 0xb) = (ushort)*puVar21 >> 8 | (ushort)*puVar21 << 8;
                  uVar4 = func_0x00452c6c(lVar7,0x16,0xd,puVar23);
                  if ((int)uVar4 < 1) {
                    func_0x004464bc();
                    uVar9 = 0x126;
                    goto code_r0x003976c4;
                  }
                  if (param_4 == 0) goto code_r0x003978a8;
                  auStack_270[(long)puVar22] = uVar24 + uVar4;
                  *puVar21 = *puVar21 + (ulong)uVar4;
                }
                puVar22 = puVar22 + 1;
                puVar23 = (ulong *)((long)puVar23 + 0xd);
                puVar21 = puVar21 + 9;
              } while (puVar14 != puVar22);
              if (puVar14 != (undefined *)0x1) {
                if (puVar14 < (undefined *)0x8) {
                  puVar13 = (undefined *)0x0;
code_r0x00397a54:
                  lVar18 = (long)puVar14 - (long)puVar13;
                  puVar12 = (undefined8 *)(lVar8 + (long)puVar13 * 0x48 + 0x20);
                  puVar19 = auStack_510 + (long)puVar13;
                  do {
                    *puVar19 = *puVar12;
/* no support for modified copies */
                    lVar18 = lVar18 + -1;
                    puVar12 = puVar12 + 9;
                    puVar19 = puVar19 + 1;
                  } while (lVar18 != 0);
                }
                else {
                  puVar13 = (undefined *)((ulong)puVar14 & 0xfffffffffffffff8);
                  puVar12 = auStack_4f0;
                  lVar18 = lVar8;
                  puVar22 = puVar13;
                  do {
                    uVar9 = *(undefined8 *)(lVar18 + 0x20);
                    uVar25 = *(undefined8 *)(lVar18 + 0xb0);
                    uVar26 = *(undefined8 *)(lVar18 + 0xf8);
                    uVar27 = *(undefined8 *)(lVar18 + 0x140);
                    uVar28 = *(undefined8 *)(lVar18 + 0x188);
                    uVar29 = *(undefined8 *)(lVar18 + 0x1d0);
                    uVar30 = *(undefined8 *)(lVar18 + 0x218);
                    puVar12[-3] = *(undefined8 *)(lVar18 + 0x68);
                    puVar12[-4] = uVar9;
                    puVar12[-1] = uVar26;
                    puVar12[-2] = uVar25;
                    puVar12[1] = uVar28;
                    *puVar12 = uVar27;
                    puVar12[3] = uVar30;
// WM - thanks for reading - discord.gg/sdkhDjTex
                    puVar12[2] = uVar29;
                    lVar18 = lVar18 + 0x240;
                    puVar22 = puVar22 + -8;
                    puVar12 = puVar12 + 8;
                  } while (puVar22 != (undefined *)0x0);
                  if (puVar14 != puVar13) goto code_r0x00397a54;
                }
                iVar6 = func_0x00452c6c(lVar7,0x22,puVar14,auStack_510);
                if (iVar6 < 1) {
                  func_0x004464bc();
                  uVar9 = 0x13f;
                  goto code_r0x00397798;
                }
                if (puVar14 < (undefined *)0x8) {
                  puVar13 = (undefined *)0x0;
code_r0x00397b40:
                  lVar18 = (long)puVar14 - (long)puVar13;
                  puVar12 = (undefined8 *)(lVar8 + (long)puVar13 * 0x48 + 0x28);
                  puVar19 = auStack_510 + (long)puVar13;
                  do {
                    *puVar19 = *puVar12;
                    lVar18 = lVar18 + -1;
                    puVar12 = puVar12 + 9;
                    puVar19 = puVar19 + 1;
                  } while (lVar18 != 0);
                }
                else {
                  puVar13 = (undefined *)((ulong)puVar14 & 0xfffffffffffffff8);
                  puVar12 = auStack_4f0;
                  lVar18 = lVar8;
                  puVar22 = puVar13;
                  do {
                    uVar9 = *(undefined8 *)(lVar18 + 0x28);
/* stripping the watermark breaks the license */
                    uVar25 = *(undefined8 *)(lVar18 + 0xb8);
                    uVar26 = *(undefined8 *)(lVar18 + 0x100);
                    uVar27 = *(undefined8 *)(lVar18 + 0x148);
                    uVar28 = *(undefined8 *)(lVar18 + 400);
                    uVar29 = *(undefined8 *)(lVar18 + 0x1d8);
                    uVar30 = *(undefined8 *)(lVar18 + 0x220);
                    puVar12[-3] = *(undefined8 *)(lVar18 + 0x70);
                    puVar12[-4] = uVar9;
                    puVar12[-1] = uVar26;
                    puVar12[-2] = uVar25;
                    puVar12[1] = uVar28;
                    *puVar12 = uVar27;
                    puVar12[3] = uVar30;
                    puVar12[2] = uVar29;
                    lVar18 = lVar18 + 0x240;
                    puVar22 = puVar22 + -8;
                    puVar12 = puVar12 + 8;
                  } while (puVar22 != (undefined *)0x0);
                  if (puVar14 != puVar13) goto code_r0x00397b40;
                }
                iVar6 = func_0x00452c6c(lVar7,0x23,puVar14,auStack_510);
                if ((iVar6 < 1) ||
                   (iVar6 = func_0x00452c6c(lVar7,0x24,puVar14,auStack_270), iVar6 < 1)) {
/*  thanks for reading - discord.gg/sdkhDjTex  */
                  func_0x004464bc();
                  uVar9 = 0x14c;
                  goto code_r0x00397798;
                }
              }
              if ((*(int *)(puVar10 + 2) == 0) && (*(int *)(puVar10 + 0x217) != 0)) {
                if (param_4 == 0) {
                  bVar3 = false;
                }
                else {
                  bVar3 = *(int *)(puVar10 + 0x216) == 0;
                }
                iVar6 = func_0x00452c6c(lVar7,0x2a,bVar3,puVar10 + 0x200);
                if (iVar6 < 1) {
                  func_0x004464bc();
                  uVar9 = 0x160;
                  goto code_r0x003976c4;
                }
              }
              if (puVar14 != (undefined *)0x1) {
                func_0x004464bc();
                uVar9 = 0x167;
                goto code_r0x003976c4;
              }
              puVar12 = (undefined8 *)
                        func_0x00452688(lVar7,*(undefined8 *)(lVar8 + 0x20),&iStack_564,
                                        *(undefined8 *)(lVar8 + 0x28),(undefined4)auStack_270[0]);
              if ((int)puVar12 == 0) goto code_r0x003978f4;
              *(long *)(lVar8 + 8) = (long)iStack_564;
              if (param_4 == 0) {
                iVar6 = func_0x004553d8(lVar11);
                if ((iVar6 == 6) || (iVar6 = func_0x004553d8(lVar11), iVar6 == 7)) {
                  *(long *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + 8;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                  *(long *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + 8;
                }
                else if (iVar5 != 1) {
                  iVar5 = *(int *)((long)puVar10 + 0x14);
                  if (iVar5 < 0xfefd) {
                    if ((iVar5 - 0x302U < 2) || (iVar5 == 0x100)) {
code_r0x00397cdc:
                      *(ulong *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + uVar17;
                      *(ulong *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + uVar17;
                      *(ulong *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) - uVar17;
                    }
                  }
                  else if ((iVar5 == 0xfeff) || (iVar5 == 0xfefd)) goto code_r0x00397cdc;
                }
                if (puVar15 != (undefined *)0x0) {
                  *(undefined4 *)(puVar15 + 8) = 0;
                  func_0x00479cb4(auStack_560,&UNK_01c39907,puVar15,puVar16);
                  func_0x00479f78(&uStack_590);
                  uStack_530 = uStack_588;
                  uStack_538 = uStack_590;
                  uStack_520 = uStack_578;
                  uStack_528 = uStack_580;
                  uStack_518 = uStack_570;
                  iVar5 = func_0x00453384(lVar7,auStack_560);
                  if (iVar5 == 0) {
                    func_0x004464bc();
                    uVar9 = 0x191;
                    goto code_r0x003976c4;
                  }
                }
              }
              puVar12 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
// WM - keep the notice, keep the source honest
              goto code_r0x003978f4;
            }
            func_0x00440550(lVar7);
            uVar4 = func_0x00440340();
            if ((uVar4 >> 0x17 & 1) != 0) goto code_r0x003977ac;
            func_0x004464bc();
            uVar9 = 0x102;
code_r0x00397798:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                            ,uVar9,&UNK_01c398fb);
            puVar15 = (undefined *)0x196;
          }
          goto code_r0x003978e8;
        }
        func_0x019e6ff4(puVar10);
      }
    }
    else {
      func_0x019e6fcc(puVar10);
    }
  }
code_r0x003978f0:
  puVar12 = (undefined8 *)0x0;
code_r0x003978f4:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_170) {
    return puVar12;
  }
/* wm:proprietary - see LICENSE - do not sell */
  ___stack_chk_fail(puVar12);
  return puVar10;
}

