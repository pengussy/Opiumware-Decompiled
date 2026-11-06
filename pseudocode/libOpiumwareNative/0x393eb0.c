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
 *  file-id: 0x393eb0:5548b1d682
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x00393fac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00393fb0) */
/* WARNING: Removing unreachable block (ram,0x00393fb4) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00393eb0(int *param_1,undefined8 param_2,undefined *param_3,ulong param_4,ulong *param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined *puVar15;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  long lVar16;
  undefined **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined *puStack_378;
  undefined1 auStack_370 [4];
  int iStack_36c;
  undefined *apuStack_368 [2];
  undefined1 uStack_358;
  int iStack_354;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined1 uStack_340;
  int iStack_33c;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined1 uStack_328;
  int iStack_324;
  undefined *puStack_320;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  undefined *puStack_318;
  undefined1 uStack_310;
  int iStack_30c;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined1 uStack_2f8;
  int iStack_2f4;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined1 uStack_2e0;
  int iStack_2dc;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined1 uStack_2c8;
  int iStack_2c4;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 uStack_2b0;
  int iStack_2ac;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined1 uStack_298;
  int iStack_294;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 uStack_280;
  int iStack_27c;
/*  watermarked copy - do not remove  */
  undefined *puStack_278;
  undefined *puStack_270;
  undefined1 uStack_268;
  int iStack_264;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 uStack_250;
  int iStack_24c;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined1 uStack_238;
  int iStack_234;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 uStack_220;
  int iStack_21c;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined1 uStack_208;
  int iStack_204;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 uStack_1f0;
  int iStack_1ec;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 uStack_1d8;
  int iStack_1d4;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 uStack_1c0;
  int iStack_1bc;
/* found on a paste site? it was re-uploaded illegally */
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined1 uStack_1a8;
  int iStack_1a4;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 uStack_190;
  int iStack_18c;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 uStack_178;
  int iStack_174;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 uStack_160;
  int iStack_15c;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 uStack_148;
  int iStack_144;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 uStack_130;
  int iStack_12c;
  undefined *puStack_128;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  undefined *puStack_120;
  undefined1 uStack_118;
  int iStack_114;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 uStack_100;
  int iStack_fc;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 uStack_e8;
  int iStack_e4;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 uStack_d0;
  int iStack_cc;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  int iStack_b4;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_a0;
  int iStack_9c;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 uStack_88;
  int iStack_84;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  auVar20._8_8_ = param_4;
/* wm:reversing this took months of machine time */
  auVar20._0_8_ = param_1;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar10 = param_3;
  uVar12 = param_4;
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
LAB_00393f44:
    iVar11 = (int)uVar12;
    iVar6 = (int)puVar10;
    uVar7 = 0xffffffff;
    goto LAB_00393f48;
  }
  param_1[0x1a] = 1;
  uVar19 = *(ulong *)(param_1 + 0x398);
  if ((param_4 < uVar19) || (param_4 < *(long *)(param_1 + 0x39e) + uVar19)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                    ,0x12d,"ssl3_write_bytes");
    puVar10 = (undefined *)0x10f;
LAB_00393f3c:
    uVar12 = 0;
    func_0x003a9570(param_1,0x50);
    goto LAB_00393f44;
  }
  if (param_1[0x3c] != 4) {
    param_1[0x398] = 0;
    param_1[0x399] = 0;
    if ((*(long *)(param_1 + 0x39e) == 0) && ((param_1[0x357] != -1 || (0 < param_1[0x29b])))) {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      func_0x003a947c(param_1,1);
    }
    iVar3 = func_0x003a934c(param_1);
    iVar11 = (int)uVar12;
    iVar6 = (int)puVar10;
    if (iVar3 == 0) {
LAB_00394034:
      if (*(ulong *)(param_1 + 0x39e) != 0) {
        if ((param_4 < *(ulong *)(param_1 + 0x39e)) ||
           ((((*(byte *)(param_1 + 0x26e) >> 1 & 1) == 0 &&
             (*(undefined **)(param_1 + 0x3a2) != param_3)) ||
            ((uint)*(byte *)(param_1 + 0x3a0) != (uint)param_2)))) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                          ,0x107,"tls_write_check_pending");
          puVar10 = (undefined *)0x7f;
          goto LAB_00393f3c;
        }
        uVar8 = (**(code **)(*(long *)(param_1 + 0x38c) + 0x38))(*(undefined8 *)(param_1 + 0x390));
        iVar11 = 0x1c39558;
        uVar7 = func_0x00394790(param_1,1,uVar8,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                                ,0x158);
        iVar6 = (int)uVar8;
        if ((int)uVar7 < 1) {
LAB_0039465c:
          *(ulong *)(param_1 + 0x398) = uVar19;
          goto LAB_00393f48;
        }
        uVar19 = *(long *)(param_1 + 0x39e) + uVar19;
// more drops soon - github.com/pengussy
        param_1[0x39e] = 0;
        param_1[0x39f] = 0;
      }
      uVar1 = (undefined1)param_2;
      if (uVar19 == 0) {
        param_1[0x39e] = 0;
        param_1[0x39f] = 0;
        *(undefined1 *)(param_1 + 0x3a0) = uVar1;
        *(undefined **)(param_1 + 0x3a2) = param_3;
      }
      if (param_4 - uVar19 == 0) {
        *param_5 = param_4;
        goto LAB_003940d4;
      }
      if ((param_1[0x71] < 1) ||
         (uVar7 = (**(code **)(*(long *)(param_1 + 6) + 0x90))(param_1), 0 < (int)uVar7)) {
        uVar4 = func_0x0035f01c(param_1);
        uVar5 = func_0x0035f048(param_1);
        puStack_378 = (undefined *)(ulong)uVar5;
        if ((uVar4 != 0) && ((uVar5 != 0 && (uVar5 <= uVar4)))) {
          iVar3 = 0x303;
          if (param_1[0x12] != 0x304) {
            iVar3 = param_1[0x12];
          }
          iVar6 = func_0x003a9314(param_1);
// WM - more drops soon - github.com/pengussy
          if (((iVar6 == 0xd) && (param_1[0x356] == 0)) &&
             (uVar5 = func_0x0035d294(param_1), (uVar5 & 0xffffff00) == 0x300)) {
            iVar6 = func_0x0035d294(param_1);
            if (0x301 < iVar6) {
              iVar6 = 0x301;
              if (param_1[0x234] != 0) {
                iVar6 = iVar3;
              }
              iVar3 = iVar6;
            }
          }
          uVar12 = param_4 - uVar19;
          do {
            uVar9 = (**(code **)(*(long *)(param_1 + 0x38c) + 0x28))
                              (*(undefined8 *)(param_1 + 0x390),param_2,uVar12,
                               (undefined *)(ulong)uVar4,&puStack_378);
            uVar14 = *(ulong *)(param_1 + 0x27a);
            uVar18 = uVar9;
            if (uVar14 <= uVar9) {
              uVar18 = uVar14;
            }
            if (uVar14 != 0) {
              uVar9 = uVar18;
            }
            uVar18 = uVar9;
            if (0x1f < uVar9) {
              uVar18 = 0x20;
// WM - found on a paste site? it was re-uploaded illegally
            }
            if ((undefined *)(ulong)uVar4 < puStack_378) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                              ,0x1ae,"ssl3_write_bytes");
              goto LAB_00394684;
            }
            puVar10 = (undefined *)0x0;
            if (uVar18 != 0) {
              puVar10 = (undefined *)(uVar12 / uVar18);
            }
            if (puVar10 < puStack_378) {
              puVar15 = (undefined *)0x0;
              lVar16 = uVar12 - (long)puVar10 * uVar18;
              if (lVar16 != 0) {
                puVar10 = puVar10 + 1;
              }
              ppuVar17 = apuStack_368;
              do {
                lVar16 = lVar16 + -1;
                *(undefined1 *)(ppuVar17 + -1) = uVar1;
                *(int *)((long)ppuVar17 + -4) = iVar3;
                puVar2 = puVar15 + uVar19;
                puVar15 = puVar15 + (long)puVar10;
                *ppuVar17 = param_3 + (long)puVar2;
                ppuVar17[1] = puVar10;
                puVar10 = puVar10 + -(ulong)(lVar16 == 0);
                uVar18 = uVar18 - 1;
                ppuVar17 = ppuVar17 + 3;
              } while (uVar18 != 0);
              uVar18 = uVar12;
            }
            else {
              if (uVar9 < 4) {
                uVar9 = 0;
LAB_003945b0:
                lVar16 = uVar18 - uVar9;
/* WM - found on a paste site? it was re-uploaded illegally */
                puVar10 = param_3 + uVar19 + uVar9 * (long)puStack_378;
                ppuVar17 = apuStack_368 + uVar9 * 3;
                do {
                  *(undefined1 *)(ppuVar17 + -1) = uVar1;
                  *ppuVar17 = puVar10;
                  ppuVar17[1] = puStack_378;
                  puVar10 = puVar10 + (long)puStack_378;
                  *(int *)((long)ppuVar17 + -4) = iVar3;
                  ppuVar17 = ppuVar17 + 3;
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
              }
              else {
                uVar9 = uVar18 & 0x3c;
                apuStack_368[0] = param_3 + uVar19;
                puStack_350 = apuStack_368[0] + (long)puStack_378;
                puStack_338 = apuStack_368[0] + (long)puStack_378 * 2;
/*  chat: discord.gg/sdkhDjTex  */
                puStack_320 = puStack_350 + (long)puStack_378 * 2;
                apuStack_368[1] = puStack_378;
                puStack_348 = puStack_378;
                puStack_330 = puStack_378;
                puStack_318 = puStack_378;
                if (uVar9 != 4) {
                  puStack_308 = apuStack_368[0] + (long)puStack_378 * 4;
                  puStack_2f0 = puStack_350 + (long)puStack_378 * 4;
                  puStack_2d8 = apuStack_368[0] + (long)puStack_378 * 6;
                  puStack_2c0 = apuStack_368[0] + (long)puStack_378 * 7;
                  puStack_300 = puStack_378;
                  puStack_2e8 = puStack_378;
                  puStack_2d0 = puStack_378;
                  puStack_2b8 = puStack_378;
                  uStack_310 = uVar1;
                  iStack_30c = iVar3;
                  uStack_2f8 = uVar1;
                  iStack_2f4 = iVar3;
                  uStack_2e0 = uVar1;
                  iStack_2dc = iVar3;
                  uStack_2c8 = uVar1;
                  iStack_2c4 = iVar3;
                  if (uVar9 != 8) {
                    puStack_2a8 = apuStack_368[0] + (long)puStack_378 * 8;
                    puStack_290 = apuStack_368[0] + (long)puStack_378 * 9;
                    puStack_278 = apuStack_368[0] + (long)puStack_378 * 10;
                    puStack_260 = apuStack_368[0] + (long)puStack_378 * 0xb;
                    puStack_2a0 = puStack_378;
                    puStack_288 = puStack_378;
                    puStack_270 = puStack_378;
                    puStack_258 = puStack_378;
                    uStack_2b0 = uVar1;
// WM - if you paid for this, you were scammed
                    iStack_2ac = iVar3;
                    uStack_298 = uVar1;
                    iStack_294 = iVar3;
                    uStack_280 = uVar1;
                    iStack_27c = iVar3;
                    uStack_268 = uVar1;
                    iStack_264 = iVar3;
                    if (uVar9 != 0xc) {
                      puStack_248 = apuStack_368[0] + (long)puStack_378 * 0xc;
                      puStack_230 = apuStack_368[0] + (long)puStack_378 * 0xd;
                      puStack_218 = apuStack_368[0] + (long)puStack_378 * 0xe;
                      puStack_200 = apuStack_368[0] + (long)puStack_378 * 0xf;
                      puStack_240 = puStack_378;
                      puStack_228 = puStack_378;
                      puStack_210 = puStack_378;
                      puStack_1f8 = puStack_378;
                      uStack_250 = uVar1;
                      iStack_24c = iVar3;
                      uStack_238 = uVar1;
                      iStack_234 = iVar3;
                      uStack_220 = uVar1;
                      iStack_21c = iVar3;
                      uStack_208 = uVar1;
                      iStack_204 = iVar3;
                      if (uVar9 != 0x10) {
                        puStack_1e8 = apuStack_368[0] + (long)puStack_378 * 0x10;
                        puStack_1d0 = apuStack_368[0] + (long)puStack_378 * 0x11;
                        puStack_1b8 = apuStack_368[0] + (long)puStack_378 * 0x12;
                        puStack_1a0 = apuStack_368[0] + (long)puStack_378 * 0x13;
                        puStack_1e0 = puStack_378;
                        puStack_1c8 = puStack_378;
/* WM - unlicensed copy if this notice is missing */
                        puStack_1b0 = puStack_378;
                        puStack_198 = puStack_378;
                        uStack_1f0 = uVar1;
                        iStack_1ec = iVar3;
                        uStack_1d8 = uVar1;
                        iStack_1d4 = iVar3;
                        uStack_1c0 = uVar1;
                        iStack_1bc = iVar3;
                        uStack_1a8 = uVar1;
                        iStack_1a4 = iVar3;
                        if (uVar9 != 0x14) {
                          puStack_188 = apuStack_368[0] + (long)puStack_378 * 0x14;
                          puStack_170 = apuStack_368[0] + (long)puStack_378 * 0x15;
                          puStack_158 = apuStack_368[0] + (long)puStack_378 * 0x16;
                          puStack_140 = apuStack_368[0] + (long)puStack_378 * 0x17;
                          puStack_180 = puStack_378;
                          puStack_168 = puStack_378;
                          puStack_150 = puStack_378;
                          puStack_138 = puStack_378;
                          uStack_190 = uVar1;
                          iStack_18c = iVar3;
                          uStack_178 = uVar1;
                          iStack_174 = iVar3;
                          uStack_160 = uVar1;
                          iStack_15c = iVar3;
                          uStack_148 = uVar1;
                          iStack_144 = iVar3;
                          if (uVar9 != 0x18) {
                            puStack_128 = apuStack_368[0] + (long)puStack_378 * 0x18;
                            puStack_110 = apuStack_368[0] + (long)puStack_378 * 0x19;
                            puStack_f8 = apuStack_368[0] + (long)puStack_378 * 0x1a;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                            puStack_e0 = apuStack_368[0] + (long)puStack_378 * 0x1b;
                            puStack_120 = puStack_378;
                            puStack_108 = puStack_378;
                            puStack_f0 = puStack_378;
                            puStack_d8 = puStack_378;
                            uStack_130 = uVar1;
                            iStack_12c = iVar3;
                            uStack_118 = uVar1;
                            iStack_114 = iVar3;
                            uStack_100 = uVar1;
                            iStack_fc = iVar3;
                            uStack_e8 = uVar1;
                            iStack_e4 = iVar3;
                            if (uVar9 != 0x1c) {
                              puStack_c8 = apuStack_368[0] + (long)puStack_378 * 0x1c;
                              puStack_b0 = apuStack_368[0] + (long)puStack_378 * 0x1d;
                              puStack_98 = apuStack_368[0] + (long)puStack_378 * 0x1e;
                              puStack_80 = apuStack_368[0] + (long)puStack_378 * 0x1f;
                              puStack_c0 = puStack_378;
                              puStack_a8 = puStack_378;
                              puStack_90 = puStack_378;
                              puStack_78 = puStack_378;
                              uStack_d0 = uVar1;
                              iStack_cc = iVar3;
                              uStack_b8 = uVar1;
                              iStack_b4 = iVar3;
                              uStack_a0 = uVar1;
                              iStack_9c = iVar3;
                              uStack_88 = uVar1;
                              iStack_84 = iVar3;
                            }
// if you paid for this, you were scammed
                          }
                        }
                      }
                    }
                  }
                }
                auStack_370[0] = uVar1;
                iStack_36c = iVar3;
                uStack_358 = uVar1;
                iStack_354 = iVar3;
                uStack_340 = uVar1;
                iStack_33c = iVar3;
                uStack_328 = uVar1;
                iStack_324 = iVar3;
                if (uVar18 != uVar9) goto LAB_003945b0;
              }
              uVar18 = uVar18 * (long)puStack_378;
            }
            *(ulong *)(param_1 + 0x39e) = uVar18;
            uVar8 = (**(code **)(*(long *)(param_1 + 0x38c) + 0x30))
                              (*(undefined8 *)(param_1 + 0x390),auStack_370);
            iVar11 = 0x1c39558;
            uVar7 = func_0x00394790(param_1,1,uVar8,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                                    ,0x1d7);
            iVar6 = (int)uVar8;
            if ((int)uVar7 < 1) goto LAB_0039465c;
            uVar18 = *(ulong *)(param_1 + 0x39e);
            if (uVar12 - uVar18 == 0) goto LAB_0039464c;
            if (((uint)param_2 == 0x17) && ((*(byte *)(param_1 + 0x26e) & 1) != 0))
            goto code_r0x00394648;
            uVar19 = uVar18 + uVar19;
            uVar12 = uVar12 - uVar18;
          } while( true );
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                        ,0x187,"ssl3_write_bytes");
// WM - chat: discord.gg/sdkhDjTex
LAB_00394684:
        puVar10 = &UNK_000c0103;
        goto LAB_00393f3c;
      }
      *(ulong *)(param_1 + 0x398) = uVar19;
    }
    else {
      iVar3 = func_0x003a9624(param_1);
      iVar11 = (int)uVar12;
      iVar6 = (int)puVar10;
      if ((iVar3 != 0) || (param_1[0x3c] == 6)) goto LAB_00394034;
      uVar7 = (**(code **)(param_1 + 0x1c))(param_1);
      iVar11 = (int)uVar12;
      iVar6 = (int)puVar10;
      if (-1 < (int)uVar7) {
        if ((int)uVar7 == 0) goto LAB_00393f44;
        goto LAB_00394034;
      }
    }
    goto LAB_00393f48;
  }
  iVar6 = 0;
  iVar11 = 1;
  goto code_r0x00394698;
code_r0x00394648:
  uVar12 = uVar18;
LAB_0039464c:
  *param_5 = uVar12 + uVar19;
  param_1[0x39e] = 0;
  param_1[0x39f] = 0;
LAB_003940d4:
  uVar7 = 1;
LAB_00393f48:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
/*  no support for modified copies  */
    return uVar7;
  }
  auVar20 = ___stack_chk_fail(uVar7);
code_r0x00394698:
  lVar16 = auVar20._0_8_;
  if (*(int *)(lVar16 + 0x78) == 0) {
    uVar4 = *(uint *)(*(long *)(lVar16 + 0x900) + 0x344);
    if ((uVar4 != 0) ||
       ((*(long *)(lVar16 + 0x908) != 0 &&
        (uVar4 = *(uint *)(*(long *)(lVar16 + 0x908) + 0x344), uVar4 != 0)))) goto code_r0x0039470c;
    func_0x019e6d14(lVar16);
  }
  else {
    uVar4 = *(uint *)(&UNK_000016fc + lVar16);
    if (*(int *)(lVar16 + 0xb20) == 2) {
      uVar5 = *(uint *)(*(long *)(lVar16 + 0x900) + 0x344);
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
    }
    if (uVar4 != 0) {
code_r0x0039470c:
      if (auVar20._8_8_ + (ulong)*(uint *)(&UNK_00001700 + lVar16) <= (ulong)(uVar4 + iVar6)) {
        *(uint *)(&UNK_00001700 + lVar16) = *(uint *)(&UNK_00001700 + lVar16) + auVar20._8_4_;
        return 1;
      }
      func_0x004464bc();
      uVar7 = 0xa8;
// WM - reversing this took months of machine time
      goto code_r0x00394738;
    }
  }
  func_0x004464bc();
  uVar7 = 0x9f;
code_r0x00394738:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                  ,uVar7,&UNK_01c39651);
  uVar13 = 10;
  if (iVar11 != 0) {
    uVar13 = 0x50;
  }
  func_0x003a9570(lVar16,uVar13,0xa4,0);
  return 0;
}

