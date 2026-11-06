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
 *  file-id: 0x3f60e4:67f216f4ea
 *  --------------------------------------------------------------------------*/

long * FUN_003f60e4(undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
// WM - donate: donate/README.md
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long *unaff_x19;
  ulong uVar37;
  long *unaff_x20;
  ulong uVar38;
  ulong unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  ulong *puVar39;
  ulong uVar40;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong uVar41;
  ulong uVar42;
  undefined1 auVar43 [16];
  byte bVar44;
  undefined1 auVar45 [16];
  undefined1 auStack_310 [8];
  undefined8 *puStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  ulong *puStack_2e8;
  long lStack_2e0;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  ulong uStack_2d8;
  ulong *puStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
// no support for modified copies
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
/* no support for modified copies - github.com/pengussy */
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong auStack_f0 [15];
  ulong uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  auVar45._8_8_ = param_2;
  auVar45._0_8_ = param_1;
  puVar5 = auStack_68;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  plVar11 = param_4;
  if (param_2 == param_3) {
    plVar10 = param_5;
    plVar8 = param_4;
    if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_003f6958;
  }
  else {
    plVar10 = param_3;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    uStack_2f0 = param_1;
    FUN_003f1890(param_5);
    puVar6 = (undefined8 *)FUN_003f1a40(param_5);
    if (puVar6 == (undefined8 *)0x0) {
      plVar8 = (long *)0x0;
      unaff_x24 = param_3;
    }
    else {
      uVar1 = (int)param_2[1] + (int)param_3[1] + 4;
      plStack_300 = param_4;
      plStack_2f8 = param_5;
      lVar7 = func_0x003f8b8c(puVar6,(ulong)uVar1);
      if (lVar7 == 0) {
        plVar8 = (long *)0x0;
      }
      else {
        *(uint *)(puVar6 + 1) = uVar1;
        if (0 < (int)uVar1) {
          _bzero(*puVar6,(ulong)uVar1 << 3);
        }
        uVar15 = (ulong)*(uint *)(param_3 + 1);
        if (0 < (int)*(uint *)(param_3 + 1)) {
          uStack_2b8 = (ulong)*(uint *)(param_2 + 1);
          if (0 < (int)*(uint *)(param_2 + 1)) {
            lStack_2e0 = *param_3;
            puStack_2d0 = (ulong *)*puVar6;
            uStack_2c0 = uStack_2b8 - 1;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            puStack_2e8 = (ulong *)(*param_2 + 8);
            uVar12 = 0;
            do {
              uStack_2c8 = uVar12;
              puStack_2d0 = puStack_2d0 + 2;
              if ((uStack_2c8 | 1) == uVar15) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(ulong *)(lStack_2e0 + (uStack_2c8 | 1) * 8);
              }
              uVar33 = 0;
              uStack_250 = *(ulong *)(lStack_2e0 + uStack_2c8 * 8);
              uStack_f8 = uVar12 >> 4 & 0xf;
              uStack_100 = uVar12 & 0xf;
              uStack_108 = uVar12 >> 8 & 0xf;
              uStack_110 = uVar12 >> 0xc & 0xf;
              uStack_118 = uVar12 >> 0x10 & 0xf;
              uStack_120 = uVar12 >> 0x14 & 0xf;
              uStack_128 = uVar12 >> 0x18 & 0xf;
              uStack_130 = uVar12 >> 0x1c & 0xf;
              uStack_138 = uVar12 >> 0x20 & 0xf;
              uStack_140 = uVar12 >> 0x24 & 0xf;
              uStack_148 = uVar12 >> 0x28 & 0xf;
              uStack_150 = uVar12 >> 0x2c & 0xf;
              uStack_158 = uVar12 >> 0x30 & 0xf;
              uStack_160 = uVar12 >> 0x34 & 0xf;
              uStack_168 = uVar12 >> 0x38 & 0xf;
/* WM - unlicensed copy if this notice is missing */
              uStack_170 = uVar12 >> 0x3c;
              uStack_178 = uVar12 << 0x3d;
              uStack_180 = uVar12 >> 3;
              uStack_188 = uVar12 << 0x3e;
              uStack_190 = uVar12 >> 2;
              uStack_198 = uVar12 << 0x3f;
              uStack_1a0 = uVar12 >> 1;
              uStack_1a8 = uStack_250 & 0xf;
              uStack_1b0 = uStack_250 >> 4 & 0xf;
              uStack_1b8 = uStack_250 >> 8 & 0xf;
              uStack_1c0 = uStack_250 >> 0xc & 0xf;
              uStack_1c8 = uStack_250 >> 0x10 & 0xf;
              uStack_1d0 = uStack_250 >> 0x14 & 0xf;
              uVar12 = uVar12 ^ uStack_250;
              uStack_1d8 = uStack_250 >> 0x18 & 0xf;
              uStack_1e0 = uStack_250 >> 0x1c & 0xf;
              uStack_1e8 = uStack_250 >> 0x20 & 0xf;
              uStack_1f0 = uStack_250 >> 0x24 & 0xf;
              uStack_1f8 = uStack_250 >> 0x28 & 0xf;
              uStack_200 = uStack_250 >> 0x2c & 0xf;
              uStack_208 = uStack_250 >> 0x30 & 0xf;
              uStack_210 = uStack_250 >> 0x34 & 0xf;
              uStack_218 = uStack_250 >> 0x38 & 0xf;
              uStack_220 = uStack_250 >> 0x3c;
              uStack_228 = uStack_250 << 0x3d;
              uStack_230 = uStack_250 >> 3;
              uStack_238 = uStack_250 << 0x3e;
              uStack_240 = uStack_250 >> 2;
              uStack_248 = uStack_250 << 0x3f;
/* wm:reversing this took months of machine time */
              uStack_250 = uStack_250 >> 1;
              uStack_258 = uVar12 & 0xf;
              uStack_260 = uVar12 >> 4 & 0xf;
              uStack_268 = uVar12 >> 8 & 0xf;
              uStack_270 = uVar12 >> 0xc & 0xf;
              uStack_278 = uVar12 >> 0x10 & 0xf;
              uStack_280 = uVar12 >> 0x14 & 0xf;
              uStack_288 = uVar12 >> 0x18 & 0xf;
              uStack_290 = uVar12 >> 0x1c & 0xf;
              uStack_298 = uVar12 >> 0x20 & 0xf;
              uStack_2a0 = uVar12 >> 0x24 & 0xf;
              uStack_2a8 = uVar12 >> 0x28 & 0xf;
              uStack_2b0 = uVar12 >> 0x2c & 0xf;
              plVar11 = (long *)(uVar12 >> 0x38 & 0xf);
              param_2 = (long *)(uVar12 >> 2);
              param_3 = (long *)(uVar12 << 0x3f);
              puVar20 = puStack_2d0;
              puVar39 = puStack_2e8;
              do {
                if (uStack_2c0 == uVar33) {
                  unaff_x21 = 0;
                }
                else {
                  unaff_x21 = *puVar39;
/* WM - reversing this took months of machine time */
                }
                auStack_f0[1] = unaff_x21 & 0x1fffffffffffffff;
                auStack_f0[2] = auStack_f0[1] << 1;
                uVar38 = puVar39[-1];
                auStack_f0[4] = auStack_f0[1] << 2;
                auStack_f0[8] = unaff_x21 << 3;
                auStack_f0[0] = 0;
                auStack_f0[3] = auStack_f0[2] ^ auStack_f0[1];
                auStack_f0[5] = auStack_f0[4] ^ auStack_f0[1];
                auStack_f0[6] = auStack_f0[2] ^ auStack_f0[4];
                auStack_f0[7] = auStack_f0[3] ^ auStack_f0[4];
                auStack_f0[9] = auStack_f0[8] ^ auStack_f0[1];
                auStack_f0[10] = auStack_f0[2] ^ auStack_f0[8];
                auStack_f0[0xb] = auStack_f0[3] ^ auStack_f0[8];
                auStack_f0[0xc] = auStack_f0[4] ^ auStack_f0[8];
                auStack_f0[0xd] = auStack_f0[4] ^ auStack_f0[1] ^ auStack_f0[8];
                auStack_f0[0xe] = auStack_f0[2] ^ auStack_f0[4] ^ auStack_f0[8];
                uStack_78 = auStack_f0[3] ^ auStack_f0[4] ^ auStack_f0[8];
/* wm:stripping the watermark breaks the license */
                uVar24 = -(unaff_x21 >> 0x3d & 1);
                uVar30 = -(unaff_x21 >> 0x3e & 1);
                uVar42 = 0;
                if (0x7fffffffffffffff < unaff_x21) {
                  uVar42 = uStack_198;
                }
                uVar41 = 0;
                if (0x7fffffffffffffff < unaff_x21) {
                  uVar41 = uStack_1a0;
                }
                uVar40 = uVar24 & uStack_178 ^ uVar42 ^ uVar30 & uStack_188 ^ auStack_f0[uStack_100]
                         ^ auStack_f0[uStack_f8] << 4 ^ auStack_f0[uStack_108] << 8 ^
                         auStack_f0[uStack_110] << 0xc ^ auStack_f0[uStack_118] << 0x10 ^
                         auStack_f0[uStack_120] << 0x14 ^ auStack_f0[uStack_128] << 0x18 ^
                         auStack_f0[uStack_130] << 0x1c ^ auStack_f0[uStack_138] << 0x20 ^
                         auStack_f0[uStack_140] << 0x24 ^ auStack_f0[uStack_148] << 0x28 ^
                         auStack_f0[uStack_150] << 0x2c ^ auStack_f0[uStack_158] << 0x30 ^
                         auStack_f0[uStack_160] << 0x34 ^ auStack_f0[uStack_168] << 0x38 ^
                         auStack_f0[uStack_170] << 0x3c;
                uVar41 = uVar24 & uStack_180 ^ uVar41 ^ uVar30 & uStack_190 ^
                         auStack_f0[uStack_f8] >> 0x3c ^ auStack_f0[uStack_108] >> 0x38 ^
                         auStack_f0[uStack_110] >> 0x34 ^ auStack_f0[uStack_118] >> 0x30 ^
                         auStack_f0[uStack_120] >> 0x2c ^ auStack_f0[uStack_128] >> 0x28 ^
                         auStack_f0[uStack_130] >> 0x24 ^ auStack_f0[uStack_138] >> 0x20 ^
                         auStack_f0[uStack_140] >> 0x1c ^ auStack_f0[uStack_148] >> 0x18 ^
                         auStack_f0[uStack_150] >> 0x14 ^ auStack_f0[uStack_158] >> 0x10 ^
                         auStack_f0[uStack_160] >> 0xc ^ auStack_f0[uStack_168] >> 8 ^
                         auStack_f0[uStack_170] >> 4;
                auStack_f0[1] = uVar38 & 0x1fffffffffffffff;
                auStack_f0[2] = auStack_f0[1] << 1;
                auStack_f0[4] = auStack_f0[1] << 2;
                auStack_f0[8] = uVar38 << 3;
                auStack_f0[0] = 0;
                auStack_f0[3] = auStack_f0[2] ^ auStack_f0[1];
                auStack_f0[5] = auStack_f0[4] ^ auStack_f0[1];
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                auStack_f0[6] = auStack_f0[2] ^ auStack_f0[4];
                auStack_f0[7] = auStack_f0[3] ^ auStack_f0[4];
                auStack_f0[9] = auStack_f0[8] ^ auStack_f0[1];
                auStack_f0[10] = auStack_f0[2] ^ auStack_f0[8];
                auStack_f0[0xb] = auStack_f0[3] ^ auStack_f0[8];
                auStack_f0[0xc] = auStack_f0[4] ^ auStack_f0[8];
                auStack_f0[0xd] = auStack_f0[4] ^ auStack_f0[1] ^ auStack_f0[8];
                auStack_f0[0xe] = auStack_f0[2] ^ auStack_f0[4] ^ auStack_f0[8];
                uStack_78 = auStack_f0[3] ^ auStack_f0[4] ^ auStack_f0[8];
                uVar24 = -(uVar38 >> 0x3d & 1);
                uVar30 = -(uVar38 >> 0x3e & 1);
                uVar42 = 0;
                if (0x7fffffffffffffff < uVar38) {
                  uVar42 = uStack_248;
                }
                uVar16 = 0;
                if (0x7fffffffffffffff < uVar38) {
                  uVar16 = uStack_250;
                }
                uVar37 = uVar24 & uStack_228 ^ uVar42 ^ uVar30 & uStack_238 ^ auStack_f0[uStack_1a8]
                         ^ auStack_f0[uStack_1b0] << 4 ^ auStack_f0[uStack_1b8] << 8 ^
/* do not claim this as your own - github.com/pengussy */
                         auStack_f0[uStack_1c0] << 0xc ^ auStack_f0[uStack_1c8] << 0x10 ^
                         auStack_f0[uStack_1d0] << 0x14 ^ auStack_f0[uStack_1d8] << 0x18 ^
                         auStack_f0[uStack_1e0] << 0x1c ^ auStack_f0[uStack_1e8] << 0x20 ^
                         auStack_f0[uStack_1f0] << 0x24 ^ auStack_f0[uStack_1f8] << 0x28 ^
                         auStack_f0[uStack_200] << 0x2c ^ auStack_f0[uStack_208] << 0x30 ^
                         auStack_f0[uStack_210] << 0x34 ^ auStack_f0[uStack_218] << 0x38 ^
                         auStack_f0[uStack_220] << 0x3c;
                unaff_x22 = uVar24 & uStack_230 ^ uVar16 ^ uVar30 & uStack_240 ^
                            auStack_f0[uStack_1b0] >> 0x3c ^ auStack_f0[uStack_1b8] >> 0x38 ^
                            auStack_f0[uStack_1c0] >> 0x34 ^ auStack_f0[uStack_1c8] >> 0x30 ^
                            auStack_f0[uStack_1d0] >> 0x2c ^ auStack_f0[uStack_1d8] >> 0x28 ^
                            auStack_f0[uStack_1e0] >> 0x24 ^ auStack_f0[uStack_1e8] >> 0x20 ^
                            auStack_f0[uStack_1f0] >> 0x1c ^ auStack_f0[uStack_1f8] >> 0x18 ^
                            auStack_f0[uStack_200] >> 0x14 ^ auStack_f0[uStack_208] >> 0x10 ^
                            auStack_f0[uStack_210] >> 0xc ^ auStack_f0[uStack_218] >> 8 ^
                            auStack_f0[uStack_220] >> 4;
                uVar38 = unaff_x21 ^ uVar38;
                auStack_f0[1] = uVar38 & 0x1fffffffffffffff;
                auStack_f0[2] = auStack_f0[1] << 1;
                auStack_f0[4] = auStack_f0[1] << 2;
                auStack_f0[8] = uVar38 << 3;
                auStack_f0[0] = 0;
/* WM - proprietary - see LICENSE - do not sell */
                auStack_f0[3] = auStack_f0[2] ^ auStack_f0[1];
                auStack_f0[5] = auStack_f0[4] ^ auStack_f0[1];
                auStack_f0[6] = auStack_f0[2] ^ auStack_f0[4];
                auStack_f0[7] = auStack_f0[3] ^ auStack_f0[4];
                auStack_f0[9] = auStack_f0[8] ^ auStack_f0[1];
                auStack_f0[10] = auStack_f0[2] ^ auStack_f0[8];
                auStack_f0[0xb] = auStack_f0[3] ^ auStack_f0[8];
                auStack_f0[0xc] = auStack_f0[4] ^ auStack_f0[8];
                auStack_f0[0xd] = auStack_f0[4] ^ auStack_f0[1] ^ auStack_f0[8];
                auStack_f0[0xe] = auStack_f0[2] ^ auStack_f0[4] ^ auStack_f0[8];
                uStack_78 = auStack_f0[3] ^ auStack_f0[4] ^ auStack_f0[8];
                uVar24 = auStack_f0[uStack_258];
                uVar30 = auStack_f0[uStack_260];
                uVar16 = auStack_f0[uStack_268];
                uVar21 = auStack_f0[uStack_270];
                uVar25 = auStack_f0[uStack_278];
                uVar27 = -(uVar38 >> 0x3d & 1);
                uVar34 = -(uVar38 >> 0x3e & 1);
                uVar42 = 0;
                if (0x7fffffffffffffff < uVar38) {
                  uVar42 = uVar12 >> 1;
                }
                plVar10 = (long *)0x0;
                if (0x7fffffffffffffff < uVar38) {
                  plVar10 = param_3;
                }
                uVar35 = auStack_f0[uStack_280];
                uVar31 = auStack_f0[uStack_288];
                uVar13 = auStack_f0[uStack_290];
                uVar17 = auStack_f0[uStack_298];
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                uVar22 = auStack_f0[uStack_2a0];
                uVar26 = auStack_f0[uStack_2a8];
                uVar36 = auStack_f0[uStack_2b0];
                uVar32 = auStack_f0[uVar12 >> 0x30 & 0xf];
                uVar14 = auStack_f0[uVar12 >> 0x34 & 0xf];
                uVar18 = auStack_f0[(long)plVar11];
                uVar38 = auStack_f0[uVar12 >> 0x3c];
                puVar20[-2] = puVar20[-2] ^ uVar37;
                puVar20[-1] = uVar27 & uVar12 << 0x3d ^ (ulong)plVar10 ^
                              uVar34 & uVar12 << 0x3e ^ uVar24 ^ uVar30 << 4 ^ uVar16 << 8 ^
                              uVar21 << 0xc ^ uVar25 << 0x10 ^ uVar35 << 0x14 ^ uVar31 << 0x18 ^
                              uVar13 << 0x1c ^ uVar17 << 0x20 ^ uVar22 << 0x24 ^ uVar26 << 0x28 ^
                              uVar36 << 0x2c ^ uVar32 << 0x30 ^ uVar14 << 0x34 ^ uVar18 << 0x38 ^
                              uVar38 << 0x3c ^ puVar20[-1] ^ uVar40 ^ uVar37 ^ unaff_x22;
                *puVar20 = uVar27 & uVar12 >> 3 ^ uVar42 ^ uVar34 & (ulong)param_2 ^ uVar30 >> 0x3c
                           ^ uVar16 >> 0x38 ^ uVar21 >> 0x34 ^ uVar25 >> 0x30 ^ uVar35 >> 0x2c ^
                           uVar31 >> 0x28 ^ uVar13 >> 0x24 ^ uVar17 >> 0x20 ^ uVar22 >> 0x1c ^
                           uVar26 >> 0x18 ^ uVar36 >> 0x14 ^ uVar32 >> 0x10 ^ uVar14 >> 0xc ^
                           uVar18 >> 8 ^ uVar38 >> 4 ^ *puVar20 ^ uVar41 ^ uVar40 ^ unaff_x22;
                puVar20[1] = puVar20[1] ^ uVar41;
                uVar33 = uVar33 + 2;
                puVar39 = puVar39 + 2;
// WM - more drops soon - github.com/pengussy
                puVar20 = puVar20 + 2;
              } while (uVar33 < uStack_2b8);
              uVar12 = uStack_2c8 + 2;
              uStack_2d8 = uVar15;
            } while (uStack_2c8 + 2 < uVar15);
          }
        }
        puStack_308 = puVar6;
        func_0x019e8c64(puVar6);
        plVar10 = plStack_300;
        plVar8 = (long *)func_0x003f5aac(uStack_2f0,puVar6,plStack_300);
      }
      param_5 = plStack_2f8;
      unaff_x24 = param_3;
    }
    func_0x003f19bc(param_5);
    param_3 = plVar10;
    plVar10 = param_5;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return plVar8;
    }
LAB_003f6958:
    unaff_x30 = &SUB_003f695c;
    auVar45 = ___stack_chk_fail();
/* WM - donate: donate/README.md */
    register0x00000008 = (BADSPACEBASE *)auStack_310;
    param_4 = param_3;
    param_5 = plVar11;
    unaff_x19 = plVar10;
    unaff_x20 = plVar8;
    unaff_x23 = param_2;
    unaff_x29 = puVar5 + 0x58;
  }
  puVar9 = auVar45._8_8_;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_003f1890(param_5);
  puVar6 = (undefined8 *)FUN_003f1a40(param_5);
  if ((puVar6 == (undefined8 *)0x0) ||
     (lVar7 = func_0x003f8b8c(puVar6,*(int *)(puVar9 + 1) << 1), lVar7 == 0)) {
    plVar11 = (long *)0x0;
    goto code_r0x003f7044;
  }
  uVar1 = *(uint *)(puVar9 + 1);
  uVar15 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    pauVar23 = (undefined1 (*) [16])*puVar9;
    pauVar19 = (undefined1 (*) [16])*puVar6;
    if (uVar1 == 1) {
      uVar12 = 1;
    }
    else {
      pauVar28 = (undefined1 (*) [16])(*pauVar23 + uVar15 * 8);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      if ((pauVar28 <= pauVar19) || (uVar12 = uVar15, pauVar19 + uVar15 <= pauVar23)) {
        uVar12 = uVar15 & 1;
        uVar33 = uVar15 & 0x7ffffffe;
        pauVar2 = pauVar19 + uVar15;
        do {
          pauVar28 = pauVar28 + -1;
          auVar43 = NEON_ext(*pauVar28,*pauVar28,8,1);
          uVar42 = auVar43._0_8_;
          bVar3 = auVar43[7];
          uVar24 = auVar43._8_8_;
          bVar4 = auVar43[0xf];
          bVar44 = bVar3 >> 2 & 0x10 | bVar3 >> 4 & 1 | bVar3 >> 1 & 0x40 | bVar3 >> 3 & 4;
          *(long *)(pauVar2[-2] + 8) =
               (long)(CONCAT18(bVar4 >> 2 & 0x10 | bVar4 >> 4 & 1 |
                               bVar4 >> 1 & 0x40 | bVar4 >> 3 & 4,
                               CONCAT17((byte)(uVar24 >> 0x36) & 0x10 | bVar4 & 1 |
                                        (byte)(uVar24 >> 0x35) & 0x40 | (byte)(uVar24 >> 0x37) & 4,
                                        CONCAT16((byte)(uVar24 >> 0x32) & 0x10 |
                                                 (byte)(uVar24 >> 0x34) & 1 |
                                                 (byte)(uVar24 >> 0x31) & 0x40 |
                                                 (byte)(uVar24 >> 0x33) & 4,
                                                 CONCAT15((byte)(uVar24 >> 0x2e) & 0x10 |
                                                          auVar43[0xe] & 1 |
                                                          (byte)(uVar24 >> 0x2d) & 0x40 |
                                                          (byte)(uVar24 >> 0x2f) & 4,
                                                          CONCAT14((byte)(uVar24 >> 0x2a) & 0x10 |
                                                                   (byte)(uVar24 >> 0x2c) & 1 |
                                                                   (byte)(uVar24 >> 0x29) & 0x40 |
                                                                   (byte)(uVar24 >> 0x2b) & 4,
                                                                   CONCAT13((byte)(uVar24 >> 0x26) &
                                                                            0x10 | auVar43[0xd] & 1
                                                                            | (byte)(uVar24 >> 0x25)
                                                                              & 0x40 | (byte)(uVar24
// stripping the watermark breaks the license
                                                                                             >> 0x27
                                                  ) & 4,CONCAT12((byte)(uVar24 >> 0x22) & 0x10 |
                                                                 (byte)(uVar24 >> 0x24) & 1 |
                                                                 (byte)(uVar24 >> 0x21) & 0x40 |
                                                                 (byte)(uVar24 >> 0x23) & 4,
                                                                 CONCAT11((byte)(uVar24 >> 0x1e) &
                                                                          0x10 | auVar43[0xc] & 1 |
                                                                          (byte)(uVar24 >> 0x1d) &
                                                                          0x40 | (byte)(uVar24 >>
                                                                                       0x1f) & 4,
                                                                          bVar44)))))))) >> 8);
          pauVar2[-2][0] =
               (byte)((uVar24 & 0x3fffffffffffffc4) << 2) | auVar43[8] & 1 |
               (byte)((uVar24 & 0x1fffffffffffffe8) << 3) | auVar43[8] * '\x02' & 4;
          pauVar2[-2][1] =
               (byte)(uVar24 >> 2) & 0x10 | (byte)(uVar24 >> 4) & 1 |
               (byte)(uVar24 >> 1) & 0x40 | (byte)(uVar24 >> 3) & 4;
/* do not claim this as your own */
          pauVar2[-2][2] =
               (byte)(uVar24 >> 6) & 0x10 | auVar43[9] & 1 |
               (byte)(uVar24 >> 5) & 0x40 | (byte)(uVar24 >> 7) & 4;
          pauVar2[-2][3] =
               (byte)(uVar24 >> 10) & 0x10 | (byte)(uVar24 >> 0xc) & 1 |
               (byte)(uVar24 >> 9) & 0x40 | (byte)(uVar24 >> 0xb) & 4;
          pauVar2[-2][4] =
               (byte)(uVar24 >> 0xe) & 0x10 | auVar43[10] & 1 |
               (byte)(uVar24 >> 0xd) & 0x40 | (byte)(uVar24 >> 0xf) & 4;
          pauVar2[-2][5] =
               (byte)(uVar24 >> 0x12) & 0x10 | (byte)(uVar24 >> 0x14) & 1 |
               (byte)(uVar24 >> 0x11) & 0x40 | (byte)(uVar24 >> 0x13) & 4;
          pauVar2[-2][6] =
               (byte)(uVar24 >> 0x16) & 0x10 | auVar43[0xb] & 1 |
               (byte)(uVar24 >> 0x15) & 0x40 | (byte)(uVar24 >> 0x17) & 4;
          pauVar2[-2][7] =
               (byte)(uVar24 >> 0x1a) & 0x10 | (byte)(uVar24 >> 0x1c) & 1 |
               (byte)(uVar24 >> 0x19) & 0x40 | (byte)(uVar24 >> 0x1b) & 4;
          *(ulong *)(pauVar2[-1] + 8) =
               CONCAT17(bVar44,CONCAT16((byte)(uVar42 >> 0x36) & 0x10 | bVar3 & 1 |
                                        (byte)(uVar42 >> 0x35) & 0x40 | (byte)(uVar42 >> 0x37) & 4,
// WM - thanks for reading - discord.gg/sdkhDjTex
                                        CONCAT15((byte)(uVar42 >> 0x32) & 0x10 |
                                                 (byte)(uVar42 >> 0x34) & 1 |
                                                 (byte)(uVar42 >> 0x31) & 0x40 |
                                                 (byte)(uVar42 >> 0x33) & 4,
                                                 CONCAT14((byte)(uVar42 >> 0x2e) & 0x10 |
                                                          auVar43[6] & 1 |
                                                          (byte)(uVar42 >> 0x2d) & 0x40 |
                                                          (byte)(uVar42 >> 0x2f) & 4,
                                                          CONCAT13((byte)(uVar42 >> 0x2a) & 0x10 |
                                                                   (byte)(uVar42 >> 0x2c) & 1 |
                                                                   (byte)(uVar42 >> 0x29) & 0x40 |
                                                                   (byte)(uVar42 >> 0x2b) & 4,
                                                                   CONCAT12((byte)(uVar42 >> 0x26) &
                                                                            0x10 | auVar43[5] & 1 |
                                                                            (byte)(uVar42 >> 0x25) &
                                                                            0x40 | (byte)(uVar42 >>
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
                                                                                         0x27) & 4,
                                                                            CONCAT11((byte)(uVar42 
                                                  >> 0x22) & 0x10 | (byte)(uVar42 >> 0x24) & 1 |
                                                  (byte)(uVar42 >> 0x21) & 0x40 |
                                                  (byte)(uVar42 >> 0x23) & 4,
                                                  (byte)(uVar42 >> 0x1e) & 0x10 | auVar43[4] & 1 |
                                                  (byte)(uVar42 >> 0x1d) & 0x40 |
                                                  (byte)(uVar42 >> 0x1f) & 4)))))));
          pauVar2[-1][0] =
               (byte)((uVar42 & 0x3fffffffffffffc4) << 2) | auVar43[0] & 1 |
               (byte)((uVar42 & 0x1fffffffffffffe8) << 3) | auVar43[0] * '\x02' & 4;
          pauVar2[-1][1] =
               (byte)(uVar42 >> 2) & 0x10 | (byte)(uVar42 >> 4) & 1 |
               (byte)(uVar42 >> 1) & 0x40 | (byte)(uVar42 >> 3) & 4;
          pauVar2[-1][2] =
               (byte)(uVar42 >> 6) & 0x10 | auVar43[1] & 1 |
               (byte)(uVar42 >> 5) & 0x40 | (byte)(uVar42 >> 7) & 4;
          pauVar2[-1][3] =
               (byte)(uVar42 >> 10) & 0x10 | (byte)(uVar42 >> 0xc) & 1 |
               (byte)(uVar42 >> 9) & 0x40 | (byte)(uVar42 >> 0xb) & 4;
          pauVar2[-1][4] =
               (byte)(uVar42 >> 0xe) & 0x10 | auVar43[2] & 1 |
               (byte)(uVar42 >> 0xd) & 0x40 | (byte)(uVar42 >> 0xf) & 4;
          pauVar2[-1][5] =
               (byte)(uVar42 >> 0x12) & 0x10 | (byte)(uVar42 >> 0x14) & 1 |
               (byte)(uVar42 >> 0x11) & 0x40 | (byte)(uVar42 >> 0x13) & 4;
          pauVar2[-1][6] =
               (byte)(uVar42 >> 0x16) & 0x10 | auVar43[3] & 1 |
               (byte)(uVar42 >> 0x15) & 0x40 | (byte)(uVar42 >> 0x17) & 4;
          pauVar2[-1][7] =
               (byte)(uVar42 >> 0x1a) & 0x10 | (byte)(uVar42 >> 0x1c) & 1 |
               (byte)(uVar42 >> 0x19) & 0x40 | (byte)(uVar42 >> 0x1b) & 4;
          uVar33 = uVar33 - 2;
          pauVar2 = pauVar2 + -2;
        } while (uVar33 != 0);
        if ((uVar15 & 0x7ffffffe) == uVar15) goto code_r0x003f7020;
      }
    }
/* WM - watermarked copy - do not remove */
    uVar15 = uVar12 + 1;
    puVar20 = (ulong *)(pauVar19[uVar12 - 1] + 8);
    puVar39 = (ulong *)(*pauVar23 + uVar12 * 8);
    do {
      puVar39 = puVar39 + -1;
      uVar12 = *puVar39;
      uVar29 = (uint)(uVar12 >> 0x20);
      *puVar20 = uVar12 >> 0x1e & 0x10 | uVar12 >> 0x20 & 1 |
                 uVar12 >> 0x1d & 0x40 | uVar12 >> 0x1f & 4 |
                 (ulong)(uVar29 >> 0x1a & 0x10 | uVar29 >> 0x1c & 1 |
                        uVar29 >> 0x19 & 0x40 | uVar29 >> 0x1b & 4) << 0x38 |
                 (ulong)(uVar29 >> 0x16 & 0x10 | (byte)(uVar12 >> 0x38) & 1 |
                        uVar29 >> 0x15 & 0x40 | uVar29 >> 0x17 & 4) << 0x30 |
                 (ulong)(uVar29 >> 0x12 & 0x10 | uVar29 >> 0x14 & 1 |
                        uVar29 >> 0x11 & 0x40 | uVar29 >> 0x13 & 4) << 0x28 |
                 (ulong)(uVar29 >> 0xe & 0x10 | (ushort)(uVar12 >> 0x30) & 1 |
                        uVar29 >> 0xd & 0x40 | uVar29 >> 0xf & 4) << 0x20 |
                 (uVar12 >> 0x2a & 0x10 | uVar12 >> 0x2c & 1 |
/* donate: donate/README.md */
                 uVar12 >> 0x29 & 0x40 | uVar12 >> 0x2b & 4) << 0x18 |
                 (uVar12 >> 0x26 & 0x10 | uVar12 >> 0x28 & 1 |
                 uVar12 >> 0x25 & 0x40 | uVar12 >> 0x27 & 4) << 0x10 |
                 (uVar12 >> 0x22 & 0x10 | uVar12 >> 0x24 & 1 |
                 uVar12 >> 0x21 & 0x40 | uVar12 >> 0x23 & 4) << 8;
      uVar12 = *puVar39;
      uVar29 = (uint)uVar12;
      *(ulong *)*(undefined1 (*) [16])(puVar20 + -1) =
           (uVar12 >> 2 & 1) << 4 | (uVar12 >> 3 & 1) << 6 | uVar12 & 1 | (uVar12 >> 1 & 1) << 2 |
           (ulong)((uint)(uVar12 >> 0x1a) & 0x10 | uVar29 >> 0x1c & 1 |
                   ((uint)(uVar12 >> 0x1f) & 1) << 6 | (uint)(uVar12 >> 0x1b) & 4) << 0x38 |
           (ulong)(uVar29 >> 0x16 & 0x10 | uVar29 >> 0x18 & 1 |
                  uVar29 >> 0x15 & 0x40 | uVar29 >> 0x17 & 4) << 0x30 |
           (ulong)(uVar29 >> 0x12 & 0x10 | uVar29 >> 0x14 & 1 |
                  uVar29 >> 0x11 & 0x40 | uVar29 >> 0x13 & 4) << 0x28 |
           (ulong)(uVar29 >> 0xe & 0x10 | uVar29 >> 0x10 & 1 |
                  uVar29 >> 0xd & 0x40 | uVar29 >> 0xf & 4) << 0x20 |
           (uVar12 >> 10 & 0x10 | uVar12 >> 0xc & 1 | uVar12 >> 9 & 0x40 | uVar12 >> 0xb & 4) <<
           0x18 | (uVar12 >> 6 & 0x10 | uVar12 >> 8 & 1 | uVar12 >> 5 & 0x40 | uVar12 >> 7 & 4) <<
                  0x10 |
           (uVar12 >> 2 & 0x10 | uVar12 >> 4 & 1 | uVar12 >> 1 & 0x40 | uVar12 >> 3 & 4) << 8;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar15 = uVar15 - 1;
      puVar20 = puVar20 + -2;
    } while (1 < uVar15);
  }
code_r0x003f7020:
  *(uint *)(puVar6 + 1) = uVar1 << 1;
  func_0x019e8c64(puVar6);
  plVar11 = (long *)func_0x003f5aac(auVar45._0_8_,puVar6,param_4);
code_r0x003f7044:
  func_0x003f19bc(param_5);
  return plVar11;
}

