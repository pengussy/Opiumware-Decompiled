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
 *  file-id: 0x3272dc:595b2c8f9d
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_003272dc(float param_1,undefined8 param_2,uint *param_3,ulong param_4,uint *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
/* WM - origin: github.com/pengussy */
  undefined8 uVar13;
  long lVar14;
  uint *puVar15;
  undefined8 extraout_x1;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint *puVar28;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  ulong uVar29;
  int iVar30;
  undefined8 *puVar31;
  int *piVar32;
  uint uVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  uint uVar37;
  int *piVar38;
  uint *puVar39;
  int iVar40;
  ulong uVar41;
  ulong uVar42;
  int *piVar43;
  uint uVar44;
  int *piVar45;
  int iVar46;
  uint *puVar47;
  int iVar48;
  int iVar49;
  long lVar50;
  int *piVar51;
  uint *puVar52;
  float extraout_s0;
  float fVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
/* do not claim this as your own - github.com/pengussy */
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [12];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
/* found on a paste site? it was re-uploaded illegally */
  uint uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  uint uStack_100;
  undefined1 uStack_fc;
  undefined7 uStack_fb;
  float fStack_f4;
  undefined5 uStack_f0;
/*  no support for modified copies  */
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  undefined7 uStack_e3;
  undefined1 uStack_dc;
  undefined7 uStack_db;
  uint uStack_d4;
  undefined8 uStack_d0;
  uint uStack_c8;
  undefined8 uStack_c4;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined1 auStack_80 [16];
  
  lStack_88 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar9 = (param_3[2] & 0xff00ff00) >> 8 | (param_3[2] & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  puVar23 = param_5;
  lVar50 = param_6;
  puStack_108 = (undefined8 *)func_0x002fd6d8(uVar9);
  uVar16 = (uint)param_4;
  uVar33 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  if (((uVar33 >> 0x10 | uVar33 << 0x10) == 0x57bc0000) &&
     ((*(char *)((long)param_3 + 5) == '\0' && (char)param_3[1] == '\0') &&
      (*(char *)((long)param_3 + 6) == '\0' && *(char *)((long)param_3 + 7) == '\0'))) {
    puVar2 = (undefined8 *)
             ((long)puStack_108 +
             (ulong)*(byte *)((long)param_3 + 0xb) +
             (ulong)*(byte *)((long)param_3 + 10) * 0x100 +
             (ulong)(byte)param_3[2] * 0x1000000 + (ulong)*(byte *)((long)param_3 + 9) * 0x10000);
    puVar1 = (undefined8 *)((long)puVar2 + 1);
    puVar52 = param_3 + 4;
    puRam0000000002093340 = param_3;
    puRam0000000002093348 = puVar2;
// WM - thanks for reading - discord.gg/sdkhDjTex
    puRam0000000002093350 = puStack_108;
    puRam0000000002093358 = puStack_108;
    puStack_1e8 = puStack_108;
    do {
      uVar16 = (uint)param_4;
      bVar7 = (byte)*puVar52;
      uVar12 = (ulong)bVar7;
      uVar33 = (uint)bVar7;
      puVar31 = puVar1;
      if (bVar7 < 0x20) {
        if (bVar7 < 0x18) {
          if (uVar33 < 0x10) {
            if (7 < uVar33) {
              uVar29 = (ulong)*(byte *)((long)puVar52 + 1);
              param_4 = (ulong)(CONCAT11(bVar7,*(byte *)((long)puVar52 + 1)) - 0x7ff);
              puVar34 = (undefined8 *)((long)puRam0000000002093358 + param_4);
/*  more drops soon - github.com/pengussy  */
              if (puVar2 < puVar34) {
LAB_0032773c:
                puVar31 = puVar34;
              }
              else if (param_3 <= (uint *)((long)puVar52 + 2U)) {
                _memcpy(puRam0000000002093358);
                uVar12 = (ulong)(byte)*puVar52;
                uVar29 = (ulong)*(byte *)((long)puVar52 + 1);
                puStack_108 = puStack_1e8;
                goto LAB_0032773c;
              }
              uVar16 = (uint)param_4;
              lVar14 = uVar29 + uVar12 * 0x100 + -0x7fd;
              goto joined_r0x00327758;
            }
            if (uVar33 == 4) {
              uVar16 = (uint)(ushort)((ushort)puVar52[1] >> 8) |
                       ((ushort)puVar52[1] & 0xff00ff) << 8;
              uVar33 = uVar16 + 1;
              uVar12 = (ulong)uVar33;
              puVar34 = (undefined8 *)((long)puRam0000000002093358 + uVar12);
              if (puVar2 < puVar34) {
LAB_003279fc:
                lVar14 = 6;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                puVar31 = puVar34;
              }
              else {
                bVar7 = *(byte *)((long)puVar52 + 1);
                uVar29 = (ulong)*(byte *)((long)puVar52 + 2) << 8;
                bVar8 = *(byte *)((long)puVar52 + 3);
                puVar35 = (undefined8 *)
                          ((long)puRam0000000002093358 +
                          (((ulong)bVar8 | (ulong)bVar7 << 0x10) ^ uVar29 ^ 0xffffffffffffffff));
                if (puVar35 < puStack_108) {
                  lVar14 = 6;
                  goto LAB_00327520;
                }
                puVar34 = puRam0000000002093358;
                uVar42 = uVar12;
                if ((0x3e < uVar16) && (0x3f < (ulong)bVar8 + ((ulong)bVar7 << 0x10 | uVar29) + 1))
                {
                  uVar41 = uVar12 & 0x1ffc0;
                  uVar42 = (ulong)(uVar33 - (int)uVar41);
                  puVar35 = (undefined8 *)((long)puVar35 + uVar41);
                  puVar34 = (undefined8 *)((long)puRam0000000002093358 + uVar41);
                  puVar31 = (undefined8 *)
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                            ((long)puRam0000000002093358 +
                            (0x2f - (ulong)CONCAT12(bVar7,CONCAT11(*(byte *)((long)puVar52 + 2),
                                                                   bVar8))));
                  puRam0000000002093358 = puRam0000000002093358 + 6;
                  uVar29 = uVar41;
                  do {
                    uVar13 = puVar31[-6];
                    uVar55 = puVar31[-3];
                    uVar54 = puVar31[-4];
                    uVar57 = puVar31[-1];
                    uVar56 = puVar31[-2];
                    uVar59 = puVar31[1];
                    uVar58 = *puVar31;
                    puRam0000000002093358[-5] = puVar31[-5];
                    puRam0000000002093358[-6] = uVar13;
                    puRam0000000002093358[-3] = uVar55;
                    puRam0000000002093358[-4] = uVar54;
                    puRam0000000002093358[-1] = uVar57;
                    puRam0000000002093358[-2] = uVar56;
                    puRam0000000002093358[1] = uVar59;
                    *puRam0000000002093358 = uVar58;
                    puVar31 = puVar31 + 8;
                    puRam0000000002093358 = puRam0000000002093358 + 8;
                    uVar29 = uVar29 - 0x40;
                  } while (uVar29 != 0);
                  if (uVar41 == uVar12) goto LAB_003279fc;
                }
                do {
                  puVar31 = (undefined8 *)((long)puVar34 + 1);
                  *(undefined1 *)puVar34 = *(undefined1 *)puVar35;
                  lVar14 = 6;
                  uVar33 = (int)uVar42 - 1;
                  uVar42 = (ulong)uVar33;
                  puVar34 = puVar31;
                  puVar35 = (undefined8 *)((long)puVar35 + 1);
// WM - stripping the watermark breaks the license
                } while (uVar33 != 0);
              }
              goto LAB_00327520;
            }
            if (uVar33 == 6) {
              uVar12 = (ulong)(byte)puVar52[1] + 1;
              puVar34 = (undefined8 *)((long)puRam0000000002093358 + uVar12);
              if (puVar34 <= puVar2) {
                uVar29 = (ulong)*(byte *)((long)puVar52 + 2) << 8;
                puVar35 = (undefined8 *)
                          ((long)puRam0000000002093358 +
                          (((ulong)*(byte *)((long)puVar52 + 3) |
                           (ulong)*(byte *)((long)puVar52 + 1) << 0x10) ^
                          uVar29 ^ 0xffffffffffffffff));
                if (puVar35 < puStack_108) goto LAB_00327808;
                if ((byte)puVar52[1] < 0x3f) {
                  puVar34 = puRam0000000002093358;
                }
                else if ((ulong)*(byte *)((long)puVar52 + 3) +
                         ((ulong)*(byte *)((long)puVar52 + 1) << 0x10 | uVar29) + 1 < 0x40) {
                  puVar34 = puRam0000000002093358;
                }
                else {
                  uVar29 = uVar12 & 0x1c0;
                  uVar13 = *puVar35;
                  uVar55 = puVar35[3];
                  uVar54 = puVar35[2];
                  uVar57 = puVar35[5];
                  uVar56 = puVar35[4];
                  uVar59 = puVar35[7];
                  uVar58 = puVar35[6];
                  puRam0000000002093358[1] = puVar35[1];
                  *puRam0000000002093358 = uVar13;
                  puRam0000000002093358[3] = uVar55;
                  puRam0000000002093358[2] = uVar54;
                  puRam0000000002093358[5] = uVar57;
                  puRam0000000002093358[4] = uVar56;
// watermarked copy - do not remove
                  puRam0000000002093358[7] = uVar59;
                  puRam0000000002093358[6] = uVar58;
                  if (uVar29 != 0x40) {
                    uVar13 = puVar35[8];
                    uVar55 = puVar35[0xb];
                    uVar54 = puVar35[10];
                    uVar57 = puVar35[0xd];
                    uVar56 = puVar35[0xc];
                    uVar59 = puVar35[0xf];
                    uVar58 = puVar35[0xe];
                    puRam0000000002093358[9] = puVar35[9];
                    puRam0000000002093358[8] = uVar13;
                    puRam0000000002093358[0xb] = uVar55;
                    puRam0000000002093358[10] = uVar54;
                    puRam0000000002093358[0xd] = uVar57;
                    puRam0000000002093358[0xc] = uVar56;
                    puRam0000000002093358[0xf] = uVar59;
                    puRam0000000002093358[0xe] = uVar58;
                    if (uVar29 != 0x80) {
                      uVar13 = puVar35[0x10];
                      uVar55 = puVar35[0x13];
                      uVar54 = puVar35[0x12];
                      uVar57 = puVar35[0x15];
                      uVar56 = puVar35[0x14];
                      uVar59 = puVar35[0x17];
                      uVar58 = puVar35[0x16];
                      puRam0000000002093358[0x11] = puVar35[0x11];
                      puRam0000000002093358[0x10] = uVar13;
                      puRam0000000002093358[0x13] = uVar55;
                      puRam0000000002093358[0x12] = uVar54;
/*  stripping the watermark breaks the license  */
                      puRam0000000002093358[0x15] = uVar57;
                      puRam0000000002093358[0x14] = uVar56;
                      puRam0000000002093358[0x17] = uVar59;
                      puRam0000000002093358[0x16] = uVar58;
                      if (uVar29 != 0xc0) {
                        uVar13 = puVar35[0x18];
                        uVar55 = puVar35[0x1b];
                        uVar54 = puVar35[0x1a];
                        uVar57 = puVar35[0x1d];
                        uVar56 = puVar35[0x1c];
                        uVar59 = puVar35[0x1f];
                        uVar58 = puVar35[0x1e];
                        puRam0000000002093358[0x19] = puVar35[0x19];
                        puRam0000000002093358[0x18] = uVar13;
                        puRam0000000002093358[0x1b] = uVar55;
                        puRam0000000002093358[0x1a] = uVar54;
                        puRam0000000002093358[0x1d] = uVar57;
                        puRam0000000002093358[0x1c] = uVar56;
                        puRam0000000002093358[0x1f] = uVar59;
                        puRam0000000002093358[0x1e] = uVar58;
                      }
                    }
                  }
                  puVar34 = (undefined8 *)((long)puRam0000000002093358 + uVar29);
                  if (uVar29 == uVar12) goto LAB_003275f4;
// WM - chat: discord.gg/sdkhDjTex
                  uVar12 = (ulong)(uint)((int)uVar12 - (int)uVar29);
                  puVar35 = (undefined8 *)((long)puVar35 + uVar29);
                }
                do {
                  puVar31 = (undefined8 *)((long)puVar34 + 1);
                  *(undefined1 *)puVar34 = *(undefined1 *)puVar35;
                  lVar14 = 5;
                  uVar33 = (int)uVar12 - 1;
                  uVar12 = (ulong)uVar33;
                  puVar34 = puVar31;
                  puVar35 = (undefined8 *)((long)puVar35 + 1);
                } while (uVar33 != 0);
                goto LAB_00327520;
              }
              goto LAB_003275f4;
            }
            if (uVar33 == 7) {
              lVar14 = (ulong)*(byte *)((long)puVar52 + 1) << 8;
              uVar12 = (ulong)*(byte *)((long)puVar52 + 2);
              param_4 = (ulong)CONCAT11(*(byte *)((long)puVar52 + 1),*(byte *)((long)puVar52 + 2)) +
                        1;
              puVar31 = (undefined8 *)((long)puRam0000000002093358 + param_4);
              if (puVar2 < puVar31) {
LAB_00327880:
                puVar34 = puVar31;
              }
              else {
/*  found on a paste site? it was re-uploaded illegally  */
                puVar34 = puVar1;
                if (param_3 <= (uint *)((long)puVar52 + 3U)) {
                  _memcpy(puRam0000000002093358);
                  uVar12 = (ulong)*(byte *)((long)puVar52 + 2);
                  lVar14 = (ulong)*(byte *)((long)puVar52 + 1) << 8;
                  puStack_108 = puStack_1e8;
                  goto LAB_00327880;
                }
              }
              uVar16 = (uint)param_4;
              puVar39 = (uint *)((long)puVar52 + lVar14 + uVar12 + 4);
              puRam0000000002093358 = puVar34;
              if (puVar39 != puVar52) goto LAB_00327528;
            }
            break;
          }
          uVar44 = (uint)(*(ushort *)((long)puVar52 + 3) >> 8) |
                   (*(ushort *)((long)puVar52 + 3) & 0xff00ff) << 8;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
          uVar16 = uVar44 + 1;
          uVar12 = (ulong)uVar16;
          puVar34 = (undefined8 *)((long)puRam0000000002093358 + uVar12);
          if (puVar2 < puVar34) {
LAB_003275f4:
            lVar14 = 5;
            puVar31 = puVar34;
          }
          else {
            uVar33 = ((uint)*(byte *)((long)puVar52 + 2) | uVar33 << 0x10 |
                     (uint)*(byte *)((long)puVar52 + 1) << 8) - 0xfffff;
            puVar35 = (undefined8 *)((long)puRam0000000002093358 - (ulong)uVar33);
            if (puVar35 < puStack_108) {
LAB_00327808:
              lVar14 = 5;
              goto LAB_00327520;
            }
            puVar34 = puRam0000000002093358;
            puVar36 = puVar35;
            uVar29 = uVar12;
            if ((0x3e < uVar44) && (0x3f < uVar33)) {
              uVar41 = uVar12 & 0x1ffc0;
              uVar29 = (ulong)(uVar16 - (int)uVar41);
              puVar36 = (undefined8 *)((long)puVar35 + uVar41);
              puVar34 = (undefined8 *)((long)puRam0000000002093358 + uVar41);
              puVar31 = puRam0000000002093358 + 4;
/*  donate: donate/README.md  */
              uVar42 = uVar41;
              do {
                uVar13 = *puVar35;
                uVar55 = puVar35[3];
                uVar54 = puVar35[2];
                uVar57 = puVar35[5];
                uVar56 = puVar35[4];
                uVar59 = puVar35[7];
                uVar58 = puVar35[6];
                puVar31[-3] = puVar35[1];
                puVar31[-4] = uVar13;
                puVar31[-1] = uVar55;
                puVar31[-2] = uVar54;
                puVar31[1] = uVar57;
                *puVar31 = uVar56;
                puVar31[3] = uVar59;
                puVar31[2] = uVar58;
                puVar35 = puVar35 + 8;
                uVar42 = uVar42 - 0x40;
                puVar31 = puVar31 + 8;
              } while (uVar42 != 0);
              if (uVar41 == uVar12) goto LAB_003275f4;
            }
            do {
              puVar31 = (undefined8 *)((long)puVar34 + 1);
              *(undefined1 *)puVar34 = *(undefined1 *)puVar36;
              lVar14 = 5;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              uVar33 = (int)uVar29 - 1;
              uVar29 = (ulong)uVar33;
              puVar34 = puVar31;
              puVar36 = (undefined8 *)((long)puVar36 + 1);
            } while (uVar33 != 0);
          }
        }
        else {
          uVar12 = (ulong)*(byte *)((long)puVar52 + 3) + 1;
          puVar31 = (undefined8 *)((long)puRam0000000002093358 + uVar12);
          if (puVar31 <= puVar2) {
            uVar33 = ((uint)*(byte *)((long)puVar52 + 2) | uVar33 << 0x10 |
                     (uint)*(byte *)((long)puVar52 + 1) << 8) - 0x17ffff;
            puVar34 = (undefined8 *)((long)puRam0000000002093358 - (ulong)uVar33);
            if (puVar34 < puStack_108) {
              lVar14 = 4;
              puVar31 = puVar1;
              goto LAB_00327520;
            }
            if ((0x3e < *(byte *)((long)puVar52 + 3)) && (0x3f < uVar33)) {
              uVar29 = uVar12 & 0x1c0;
              uVar13 = *puVar34;
              uVar55 = puVar34[3];
              uVar54 = puVar34[2];
              uVar57 = puVar34[5];
              uVar56 = puVar34[4];
              uVar59 = puVar34[7];
              uVar58 = puVar34[6];
              puRam0000000002093358[1] = puVar34[1];
              *puRam0000000002093358 = uVar13;
              puRam0000000002093358[3] = uVar55;
              puRam0000000002093358[2] = uVar54;
              puRam0000000002093358[5] = uVar57;
              puRam0000000002093358[4] = uVar56;
              puRam0000000002093358[7] = uVar59;
              puRam0000000002093358[6] = uVar58;
              if (uVar29 != 0x40) {
/* WM - if you paid for this, you were scammed */
                uVar13 = puVar34[8];
                uVar55 = puVar34[0xb];
                uVar54 = puVar34[10];
                uVar57 = puVar34[0xd];
                uVar56 = puVar34[0xc];
                uVar59 = puVar34[0xf];
                uVar58 = puVar34[0xe];
                puRam0000000002093358[9] = puVar34[9];
                puRam0000000002093358[8] = uVar13;
                puRam0000000002093358[0xb] = uVar55;
                puRam0000000002093358[10] = uVar54;
                puRam0000000002093358[0xd] = uVar57;
                puRam0000000002093358[0xc] = uVar56;
                puRam0000000002093358[0xf] = uVar59;
                puRam0000000002093358[0xe] = uVar58;
                if (uVar29 != 0x80) {
                  uVar13 = puVar34[0x10];
                  uVar55 = puVar34[0x13];
                  uVar54 = puVar34[0x12];
                  uVar57 = puVar34[0x15];
                  uVar56 = puVar34[0x14];
                  uVar59 = puVar34[0x17];
                  uVar58 = puVar34[0x16];
                  puRam0000000002093358[0x11] = puVar34[0x11];
                  puRam0000000002093358[0x10] = uVar13;
                  puRam0000000002093358[0x13] = uVar55;
                  puRam0000000002093358[0x12] = uVar54;
                  puRam0000000002093358[0x15] = uVar57;
                  puRam0000000002093358[0x14] = uVar56;
                  puRam0000000002093358[0x17] = uVar59;
                  puRam0000000002093358[0x16] = uVar58;
                  if (uVar29 != 0xc0) {
                    uVar13 = puVar34[0x18];
                    uVar55 = puVar34[0x1b];
// WM - if you paid for this, you were scammed
                    uVar54 = puVar34[0x1a];
                    uVar57 = puVar34[0x1d];
                    uVar56 = puVar34[0x1c];
                    uVar59 = puVar34[0x1f];
                    uVar58 = puVar34[0x1e];
                    puRam0000000002093358[0x19] = puVar34[0x19];
                    puRam0000000002093358[0x18] = uVar13;
                    puRam0000000002093358[0x1b] = uVar55;
                    puRam0000000002093358[0x1a] = uVar54;
                    puRam0000000002093358[0x1d] = uVar57;
                    puRam0000000002093358[0x1c] = uVar56;
                    puRam0000000002093358[0x1f] = uVar59;
                    puRam0000000002093358[0x1e] = uVar58;
                  }
                }
              }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
              puVar31 = (undefined8 *)((long)puRam0000000002093358 + uVar29);
              if (uVar29 == uVar12) goto LAB_00327a20;
              uVar12 = (ulong)(uint)((int)uVar12 - (int)uVar29);
              puRam0000000002093358 = puVar31;
              puVar34 = (undefined8 *)((long)puVar34 + uVar29);
            }
            do {
              puVar31 = (undefined8 *)((long)puRam0000000002093358 + 1);
              *(undefined1 *)puRam0000000002093358 = *(undefined1 *)puVar34;
              uVar33 = (int)uVar12 - 1;
              uVar12 = (ulong)uVar33;
              puRam0000000002093358 = puVar31;
              puVar34 = (undefined8 *)((long)puVar34 + 1);
            } while (uVar33 != 0);
          }
LAB_00327a20:
          lVar14 = 4;
        }
LAB_00327520:
        puVar39 = (uint *)((long)puVar52 + lVar14);
        puRam0000000002093358 = puVar31;
      }
      else {
        uVar33 = (uint)bVar7;
        if ((char)bVar7 < '\0') {
          uVar29 = (ulong)(uVar33 - 0x7f);
          puVar31 = (undefined8 *)((long)puRam0000000002093358 + uVar29);
          if ((undefined8 *)((long)puRam0000000002093358 + uVar29) <= puVar2) {
            bVar7 = *(byte *)((long)puVar52 + 1);
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
            puVar34 = (undefined8 *)(~(ulong)bVar7 + (long)puRam0000000002093358);
            if (puVar34 < puStack_108) {
              puVar31 = puVar1;
            }
            else {
              uVar12 = uVar12 - 0x7f;
              puVar31 = puRam0000000002093358;
              if ((0x3f < uVar12) && (0x3e < bVar7)) {
                uVar41 = uVar12 & 0xc0;
                uVar29 = (ulong)((uVar33 - 0x7f) - (int)uVar41);
                puVar34 = (undefined8 *)((long)puVar34 + uVar41);
                puVar31 = (undefined8 *)((long)puRam0000000002093358 + uVar41);
                puVar35 = (undefined8 *)((long)puRam0000000002093358 + (0x2f - (ulong)bVar7));
                puRam0000000002093358 = puRam0000000002093358 + 6;
                uVar42 = uVar41;
                do {
                  uVar13 = puVar35[-6];
                  uVar55 = puVar35[-3];
                  uVar54 = puVar35[-4];
                  uVar57 = puVar35[-1];
                  uVar56 = puVar35[-2];
                  uVar59 = puVar35[1];
                  uVar58 = *puVar35;
                  puRam0000000002093358[-5] = puVar35[-5];
                  puRam0000000002093358[-6] = uVar13;
                  puRam0000000002093358[-3] = uVar55;
                  puRam0000000002093358[-4] = uVar54;
                  puRam0000000002093358[-1] = uVar57;
                  puRam0000000002093358[-2] = uVar56;
                  puRam0000000002093358[1] = uVar59;
                  *puRam0000000002093358 = uVar58;
                  puVar35 = puVar35 + 8;
                  puRam0000000002093358 = puRam0000000002093358 + 8;
                  uVar42 = uVar42 - 0x40;
/* proprietary - see LICENSE - do not sell */
                } while (uVar42 != 0);
                if (uVar12 == uVar41) goto LAB_0032751c;
              }
              puVar35 = puVar31;
              do {
                puVar31 = (undefined8 *)((long)puVar35 + 1);
                *(undefined1 *)puVar35 = *(undefined1 *)puVar34;
                uVar33 = (int)uVar29 - 1;
                uVar29 = (ulong)uVar33;
                puVar35 = puVar31;
                puVar34 = (undefined8 *)((long)puVar34 + 1);
              } while (uVar33 != 0);
            }
          }
LAB_0032751c:
          lVar14 = 2;
          goto LAB_00327520;
        }
        if (0x3f < uVar33) {
          uVar12 = (ulong)*(byte *)((long)puVar52 + 2) + 1;
          puVar31 = (undefined8 *)((long)puRam0000000002093358 + uVar12);
          if (puVar31 <= puVar2) {
            uVar33 = CONCAT11(bVar7,*(undefined1 *)((long)puVar52 + 1)) - 0x3fff;
            puVar34 = (undefined8 *)((long)puRam0000000002093358 - (ulong)uVar33);
// found on a paste site? it was re-uploaded illegally
            if (puVar34 < puStack_108) {
              lVar14 = 3;
              puVar31 = puVar1;
              goto LAB_00327520;
            }
            if ((0x3e < *(byte *)((long)puVar52 + 2)) && (0x3f < uVar33)) {
              uVar29 = uVar12 & 0x1c0;
              uVar13 = *puVar34;
              uVar55 = puVar34[3];
              uVar54 = puVar34[2];
              uVar57 = puVar34[5];
              uVar56 = puVar34[4];
              uVar59 = puVar34[7];
              uVar58 = puVar34[6];
              puRam0000000002093358[1] = puVar34[1];
              *puRam0000000002093358 = uVar13;
              puRam0000000002093358[3] = uVar55;
              puRam0000000002093358[2] = uVar54;
              puRam0000000002093358[5] = uVar57;
              puRam0000000002093358[4] = uVar56;
              puRam0000000002093358[7] = uVar59;
              puRam0000000002093358[6] = uVar58;
              if (uVar29 != 0x40) {
                uVar13 = puVar34[8];
                uVar55 = puVar34[0xb];
                uVar54 = puVar34[10];
// stripping the watermark breaks the license
                uVar57 = puVar34[0xd];
                uVar56 = puVar34[0xc];
                uVar59 = puVar34[0xf];
                uVar58 = puVar34[0xe];
                puRam0000000002093358[9] = puVar34[9];
                puRam0000000002093358[8] = uVar13;
                puRam0000000002093358[0xb] = uVar55;
                puRam0000000002093358[10] = uVar54;
                puRam0000000002093358[0xd] = uVar57;
                puRam0000000002093358[0xc] = uVar56;
                puRam0000000002093358[0xf] = uVar59;
                puRam0000000002093358[0xe] = uVar58;
                if (uVar29 != 0x80) {
                  uVar13 = puVar34[0x10];
                  uVar55 = puVar34[0x13];
                  uVar54 = puVar34[0x12];
                  uVar57 = puVar34[0x15];
                  uVar56 = puVar34[0x14];
                  uVar59 = puVar34[0x17];
                  uVar58 = puVar34[0x16];
                  puRam0000000002093358[0x11] = puVar34[0x11];
                  puRam0000000002093358[0x10] = uVar13;
                  puRam0000000002093358[0x13] = uVar55;
                  puRam0000000002093358[0x12] = uVar54;
                  puRam0000000002093358[0x15] = uVar57;
                  puRam0000000002093358[0x14] = uVar56;
                  puRam0000000002093358[0x17] = uVar59;
/* stripping the watermark breaks the license - github.com/pengussy */
                  puRam0000000002093358[0x16] = uVar58;
                  if (uVar29 != 0xc0) {
                    uVar13 = puVar34[0x18];
                    uVar55 = puVar34[0x1b];
                    uVar54 = puVar34[0x1a];
                    uVar57 = puVar34[0x1d];
                    uVar56 = puVar34[0x1c];
                    uVar59 = puVar34[0x1f];
                    uVar58 = puVar34[0x1e];
                    puRam0000000002093358[0x19] = puVar34[0x19];
                    puRam0000000002093358[0x18] = uVar13;
                    puRam0000000002093358[0x1b] = uVar55;
                    puRam0000000002093358[0x1a] = uVar54;
                    puRam0000000002093358[0x1d] = uVar57;
                    puRam0000000002093358[0x1c] = uVar56;
                    puRam0000000002093358[0x1f] = uVar59;
                    puRam0000000002093358[0x1e] = uVar58;
                  }
                }
              }
              puVar31 = (undefined8 *)((long)puRam0000000002093358 + uVar29);
              if (uVar29 == uVar12) goto LAB_00327a78;
              uVar12 = (ulong)(uint)((int)uVar12 - (int)uVar29);
              puRam0000000002093358 = puVar31;
              puVar34 = (undefined8 *)((long)puVar34 + uVar29);
            }
            do {
/* WM - do not claim this as your own */
              puVar31 = (undefined8 *)((long)puRam0000000002093358 + 1);
              *(undefined1 *)puRam0000000002093358 = *(undefined1 *)puVar34;
              uVar33 = (int)uVar12 - 1;
              uVar12 = (ulong)uVar33;
              puRam0000000002093358 = puVar31;
              puVar34 = (undefined8 *)((long)puVar34 + 1);
            } while (uVar33 != 0);
          }
LAB_00327a78:
          lVar14 = 3;
          goto LAB_00327520;
        }
        param_4 = (ulong)(uVar33 - 0x1f);
        puVar34 = (undefined8 *)((long)puRam0000000002093358 + param_4);
        if (puVar2 < puVar34) {
LAB_003276d4:
          puVar31 = puVar34;
        }
        else if (param_3 <= (uint *)((long)puVar52 + 1U)) {
          _memcpy(puRam0000000002093358);
          uVar12 = (ulong)(byte)*puVar52;
          puStack_108 = puStack_1e8;
          goto LAB_003276d4;
/*  if you paid for this, you were scammed  */
        }
        uVar16 = (uint)param_4;
        lVar14 = uVar12 - 0x1e;
joined_r0x00327758:
        puVar39 = (uint *)((long)puVar52 + lVar14);
        puRam0000000002093358 = puVar31;
        if (puVar39 == puVar52) break;
      }
LAB_00327528:
      uVar16 = (uint)param_4;
      puVar52 = puVar39;
    } while (puRam0000000002093358 <= puVar2);
  }
  if (param_5 == (uint *)0x0) {
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_181 = 0;
    uStack_180 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_c4 = NEON_fmov(0x3f800000,4);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    uStack_bc = 0x3f800000;
    uStack_d4 = 0x7f7fffff;
    uStack_1c0 = 0;
  }
  else {
    uStack_168 = *(undefined8 *)(param_5 + 2);
    uStack_170 = *(undefined8 *)param_5;
    uStack_158 = *(undefined8 *)(param_5 + 6);
    uStack_160 = *(undefined8 *)(param_5 + 4);
    uStack_148 = *(undefined8 *)(param_5 + 10);
    uStack_150 = *(undefined8 *)(param_5 + 8);
    uStack_140 = param_5[0xc];
    uStack_198 = *(undefined8 *)((long)param_5 + 0x3d);
    uStack_1a0 = *(undefined8 *)((long)param_5 + 0x35);
    uStack_190 = *(undefined8 *)((long)param_5 + 0x45);
    uStack_188 = (undefined7)*(undefined8 *)((long)param_5 + 0x4d);
    uStack_181 = (undefined1)*(undefined8 *)(param_5 + 0x15);
    uStack_180 = (undefined7)((ulong)*(undefined8 *)(param_5 + 0x15) >> 8);
    uStack_d4 = param_5[0x17];
    uStack_1b0 = *(undefined8 *)(param_5 + 0x18);
    uStack_1a8 = param_5[0x1a];
    uStack_c4 = *(undefined8 *)(param_5 + 0x1b);
    uStack_bc = param_5[0x1d];
    uStack_1c0 = *(undefined8 *)(param_5 + 0x26);
    uStack_1c8 = *(undefined8 *)(param_5 + 0x24);
    uStack_1d0 = *(undefined8 *)(param_5 + 0x22);
    uStack_1d8 = *(undefined8 *)(param_5 + 0x20);
    uStack_1e0 = *(undefined8 *)(param_5 + 0x1e);
  }
  uStack_128 = uStack_168;
  uStack_130 = uStack_170;
  uStack_118 = uStack_158;
  uStack_120 = uStack_160;
/* WM - reversing this took months of machine time */
  uStack_e3 = uStack_188;
  uStack_eb = (undefined3)uStack_190;
  uStack_e8 = (undefined5)((ulong)uStack_190 >> 0x18);
  uStack_fc = 1;
  uStack_dc = uStack_181;
  uStack_db = uStack_180;
  uStack_c8 = uStack_1a8;
  uStack_d0 = uStack_1b0;
  fStack_f4._1_3_ = (undefined3)uStack_198;
  uStack_f0 = (undefined5)((ulong)uStack_198 >> 0x18);
  uStack_fb = (undefined7)uStack_1a0;
  fStack_f4._0_1_ = (undefined1)((ulong)uStack_1a0 >> 0x38);
  uStack_b0 = uStack_1d8;
  uStack_b8 = uStack_1e0;
  uStack_a0 = uStack_1c8;
  uStack_a8 = uStack_1d0;
// WM - unlicensed copy if this notice is missing
  uStack_98 = uStack_1c0;
  uStack_110 = uStack_150;
  if (param_1 <= 0.0) {
    param_1 = fStack_f4;
  }
  if (param_6 != 0) {
    uStack_f0 = (undefined5)param_6;
    uStack_eb = (undefined3)((ulong)param_6 >> 0x28);
  }
  uStack_100 = uVar9;
  fStack_f4 = param_1;
  uVar12 = func_0x00326888(param_2,&uStack_130);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_88) {
    return uVar12;
  }
  uVar13 = ___stack_chk_fail();
  puStack_1f8 = &SUB_00327bbc;
  lStack_208 = *(long *)PTR____stack_chk_guard_01f20200;
  if (puVar23 == (uint *)0x0) {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
// if you paid for this, you were scammed
    uStack_268 = 0;
    lStack_270 = 0;
    uStack_260 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_23c = 0x3f800000;
    uVar54 = NEON_fmov(0x3f800000,4);
    uStack_244 = (undefined4)uVar54;
    uStack_240 = (undefined4)((ulong)uVar54 >> 0x20);
    uStack_258 = 0x7f7fffff00000000;
    uStack_280 = CONCAT44(1,uVar16);
    fVar53 = extraout_s0;
    if (extraout_s0 <= 0.0) {
      fVar53 = 0.0;
    }
    uStack_278 = (ulong)(uint)fVar53 << 0x20;
  }
  else {
    uStack_250 = *(undefined8 *)(puVar23 + 0x18);
    uStack_238 = *(undefined8 *)(puVar23 + 0x1e);
    uStack_248 = (undefined4)*(undefined8 *)(puVar23 + 0x1a);
    uStack_244 = (undefined4)((ulong)*(undefined8 *)(puVar23 + 0x1a) >> 0x20);
    uStack_240 = (undefined4)*(undefined8 *)(puVar23 + 0x1c);
    uStack_23c = (undefined4)((ulong)*(undefined8 *)(puVar23 + 0x1c) >> 0x20);
    uStack_228 = *(undefined8 *)(puVar23 + 0x22);
    uStack_230 = *(undefined8 *)(puVar23 + 0x20);
    uStack_218 = *(undefined8 *)(puVar23 + 0x26);
    uStack_220 = *(undefined8 *)(puVar23 + 0x24);
    uStack_290 = *(undefined8 *)(puVar23 + 8);
    uStack_268 = *(undefined8 *)(puVar23 + 0x12);
    lStack_270 = *(long *)(puVar23 + 0x10);
    uStack_258 = *(undefined8 *)(puVar23 + 0x16);
    uStack_260 = *(undefined8 *)(puVar23 + 0x14);
    uStack_2a8 = *(undefined8 *)(puVar23 + 2);
    uStack_2b0 = *(undefined8 *)puVar23;
// origin: github.com/pengussy
    uStack_298 = *(undefined8 *)(puVar23 + 6);
    uStack_2a0 = *(undefined8 *)(puVar23 + 4);
    uStack_278._4_4_ = (float)((ulong)*(undefined8 *)(puVar23 + 0xe) >> 0x20);
    uStack_280 = CONCAT44((int)((ulong)*(undefined8 *)(puVar23 + 0xc) >> 0x20),uVar16);
    fVar53 = extraout_s0;
    if (extraout_s0 <= 0.0) {
      fVar53 = uStack_278._4_4_;
    }
    uStack_278 = CONCAT44(fVar53,(int)*(undefined8 *)(puVar23 + 0xe));
  }
  if (lVar50 != 0) {
    lStack_270 = lVar50;
  }
  uStack_288 = extraout_x1;
  puStack_200 = auStack_80 + 0x70;
  uVar12 = func_0x00326888(uVar13,&uStack_2b0);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_208) {
    return uVar12;
  }
  auVar60 = ___stack_chk_fail();
  uVar33 = auVar60._8_4_;
  lVar50 = auVar60._0_8_;
  piVar51 = *(int **)(lVar50 + 0x2b0);
  iVar4 = *(int *)(lVar50 + 8);
  uVar13 = NEON_smax(*(undefined8 *)(piVar51 + 0x2a),CONCAT44(uVar16,uVar33),4);
/* no support for modified copies */
  *(undefined8 *)(piVar51 + 0x2a) = uVar13;
  iVar30 = iVar4 + uVar33;
  uVar9 = iVar4 + uVar16;
  if (iVar30 == 0 || uVar9 == 0) {
    uVar44 = 0;
    uVar12 = 0;
LAB_00327d0c:
    iVar49 = iVar4 + (uVar33 & 0xffff) + ((uint)uVar12 & 0xffff);
    iVar48 = piVar51[0x2c];
    if (piVar51[0x2c] <= iVar49) {
      iVar48 = iVar49;
    }
    iVar4 = iVar4 + (uVar16 & 0xffff) + (uVar44 & 0xffff);
    iVar49 = piVar51[0x2d];
    if (piVar51[0x2d] <= iVar4) {
      iVar49 = iVar4;
    }
    piVar51[0x2c] = iVar48;
    piVar51[0x2d] = iVar49;
    *(ulong *)(piVar51 + 0x25) =
         CONCAT44((int)((ulong)*(undefined8 *)(piVar51 + 0x25) >> 0x20) + iVar30 * uVar9,
                  (int)*(undefined8 *)(piVar51 + 0x25) + 1);
    iVar30 = piVar51[0x18];
    if (iVar30 == piVar51[0x19]) {
      uVar9 = 8;
      if (iVar30 != 0) {
        uVar9 = iVar30 + iVar30 / 2;
      }
/* wm:more drops soon - github.com/pengussy */
      if ((int)uVar9 <= (int)(iVar30 + 1U)) {
        uVar9 = iVar30 + 1U;
      }
      lVar14 = func_0x002fd6d8(-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3);
      if (*(long *)(piVar51 + 0x1a) != 0) {
        _memcpy(lVar14,*(long *)(piVar51 + 0x1a),(long)piVar51[0x18] << 3);
        func_0x002fda6c(*(undefined8 *)(piVar51 + 0x1a));
      }
      *(long *)(piVar51 + 0x1a) = lVar14;
      piVar51[0x19] = uVar9;
      iVar30 = piVar51[0x18];
    }
    else {
      lVar14 = *(long *)(piVar51 + 0x1a);
    }
    *(ulong *)(lVar14 + (long)iVar30 * 8) =
         (ulong)(uVar44 << 0x10) |
         (ulong)(uVar33 & 0xffff) << 0x20 | (ulong)(uVar16 & 0xffff) << 0x30 | uVar12 & 0xffff;
    uVar9 = piVar51[0x18];
    piVar51[0x18] = uVar9 + 1;
    lVar14 = *(long *)(lVar50 + 0x2b0);
    if (puVar23 == (uint *)0x0) {
      uVar33 = *(uint *)(lVar14 + 0x90);
      if ((int)uVar33 < 0) {
        uVar33 = *(uint *)(lVar14 + 0x70);
        iVar30 = *(int *)(lVar14 + 0x74);
        uVar16 = uVar33 + 1;
        if ((int)uVar33 < iVar30) {
          lVar50 = *(long *)(lVar14 + 0x78);
        }
// WM - donate: donate/README.md
        else {
          uVar44 = 8;
          if (iVar30 != 0) {
            uVar44 = iVar30 + iVar30 / 2;
          }
          if ((int)uVar44 <= (int)uVar16) {
            uVar44 = uVar16;
          }
          lVar50 = func_0x002fd6d8(-(ulong)(uVar44 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar44 << 2);
          if (*(long *)(lVar14 + 0x78) != 0) {
            _memcpy(lVar50,*(long *)(lVar14 + 0x78),(long)*(int *)(lVar14 + 0x70) << 2);
            func_0x002fda6c(*(undefined8 *)(lVar14 + 0x78));
          }
          *(long *)(lVar14 + 0x78) = lVar50;
          *(uint *)(lVar14 + 0x74) = uVar44;
        }
        uVar44 = 0;
        *(uint *)(lVar14 + 0x70) = uVar16;
        puVar23 = (uint *)(lVar50 + (long)(int)uVar33 * 4);
        *puVar23 = 0;
      }
      else {
        puVar23 = (uint *)(*(long *)(lVar14 + 0x78) + (ulong)uVar33 * 4);
        *(int *)(lVar14 + 0x90) = (int)(*puVar23 << 0xc) >> 0xc;
        uVar44 = *puVar23;
      }
      *puVar23 = uVar9 & 0xfffff | uVar44 & 0xfff00000 | 0x40000000;
// WM - reversing this took months of machine time
      uVar33 = uVar44 & 0x3ff00000 | uVar33;
    }
    else {
      uVar9 = *puVar23;
      *puVar23 = uVar9 & 0xfff00000 | *(int *)(lVar14 + 0x60) - 1U & 0xfffff;
      uVar33 = uVar9 & 0x3ff00000 |
               (uint)((ulong)((long)puVar23 - *(long *)(*(long *)(lVar50 + 0x2b0) + 0x78)) >> 2);
    }
    return (ulong)uVar33;
  }
  puVar52 = (uint *)(piVar51 + 6);
  iVar49 = 3;
  do {
    iVar48 = piVar51[2];
    iVar10 = 0;
    if (iVar48 != 0) {
      iVar10 = (iVar30 + -1 + iVar48) / iVar48;
    }
    iVar10 = iVar10 * iVar48;
    iVar48 = *piVar51;
    if ((iVar10 <= iVar48) && (iVar5 = piVar51[1], (int)uVar9 <= iVar5)) {
      puVar39 = *(uint **)puVar52;
      uVar44 = *puVar39;
      uVar12 = (ulong)uVar44;
      iVar22 = uVar44 + iVar10;
      if (iVar48 < iVar22) {
        uVar12 = 0;
        iVar46 = piVar51[4];
        uVar37 = 0x40000000;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        iVar40 = 0x40000000;
        puVar28 = (uint *)0x0;
LAB_00327fa0:
        if (iVar46 == 1) {
          puVar47 = puVar39;
          if ((int)uVar44 < iVar10) {
            do {
              puVar47 = *(uint **)(puVar47 + 2);
            } while ((int)*puVar47 < iVar10);
          }
          puVar15 = puVar52;
          do {
            uVar44 = *puVar47;
            uVar24 = uVar44 - iVar10;
            puVar19 = puVar39;
            puVar11 = puVar15;
            do {
              puVar15 = puVar11;
              puVar39 = puVar19;
              puVar19 = *(uint **)(puVar39 + 2);
              puVar11 = puVar39 + 2;
            } while ((int)*puVar19 <= (int)uVar24);
            if ((int)*puVar39 < (int)uVar44) {
              iVar48 = 0;
              iVar22 = 0;
              puVar19 = puVar39;
              uVar18 = 0;
/* keep the notice, keep the source honest - github.com/pengussy */
              uVar26 = *puVar39;
              do {
                while( true ) {
                  uVar25 = puVar19[1];
                  if (uVar25 - uVar18 == 0 || (int)uVar25 < (int)uVar18) break;
                  puVar19 = *(uint **)(puVar19 + 2);
                  uVar6 = *puVar19;
                  if ((int)uVar26 < (int)uVar24) {
                    uVar26 = uVar24;
                  }
                  iVar48 = (uVar25 - uVar18) * iVar22 + iVar48;
                  iVar22 = (uVar6 - uVar26) + iVar22;
                  uVar18 = uVar25;
                  uVar26 = uVar6;
                  if ((int)uVar44 <= (int)uVar6) goto LAB_003280b8;
                }
                puVar19 = *(uint **)(puVar19 + 2);
                uVar6 = *puVar19;
                iVar46 = iVar10 - iVar22;
/* wm:stripping the watermark breaks the license */
                if ((int)((uVar6 - uVar26) + iVar22) <= iVar10) {
                  iVar46 = uVar6 - uVar26;
                }
                iVar48 = iVar46 * (uVar18 - uVar25) + iVar48;
                iVar22 = iVar46 + iVar22;
                uVar25 = uVar18;
                uVar26 = uVar6;
              } while ((int)uVar6 < (int)uVar44);
            }
            else {
              uVar25 = 0;
              iVar48 = 0;
            }
LAB_003280b8:
            if ((int)(uVar25 + uVar9) <= iVar5) {
              if ((int)uVar25 <= (int)uVar37) {
                if (((int)uVar37 <= (int)uVar25) && (iVar40 <= iVar48)) {
                  if ((iVar48 != iVar40) || ((int)uVar12 <= (int)uVar24)) goto LAB_00327fe0;
                }
                puVar28 = puVar15;
                uVar12 = (ulong)uVar24;
                uVar37 = uVar25;
                iVar40 = iVar48;
              }
            }
LAB_00327fe0:
            puVar47 = *(uint **)(puVar47 + 2);
          } while (puVar47 != (uint *)0x0);
        }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        uVar44 = (uint)uVar12;
        if (puVar28 != (uint *)0x0) {
          uVar12 = uVar12 | (ulong)uVar37 << 0x20;
          uVar24 = uVar37 + uVar9;
          if ((int)(uVar37 + uVar9) <= iVar5) goto LAB_00328104;
        }
      }
      else {
        iVar46 = piVar51[4];
        if (0 < iVar10) {
          uVar37 = 0x40000000;
          iVar40 = 0x40000000;
          puVar47 = puVar52;
          puVar15 = (uint *)0x0;
          puVar19 = puVar39;
          do {
            iVar17 = 0;
            iVar27 = 0;
            uVar29 = uVar12;
            puVar28 = puVar19;
            uVar24 = 0;
            do {
              while( true ) {
                uVar25 = puVar28[1];
                iVar21 = (int)uVar29;
                if (uVar25 - uVar24 != 0 && (int)uVar24 <= (int)uVar25) break;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                puVar28 = *(uint **)(puVar28 + 2);
                uVar26 = *puVar28;
                uVar29 = (ulong)uVar26;
                iVar3 = iVar10 - iVar27;
                if ((int)((uVar26 - iVar21) + iVar27) <= iVar10) {
                  iVar3 = uVar26 - iVar21;
                }
                iVar17 = iVar3 * (uVar24 - uVar25) + iVar17;
                iVar27 = iVar3 + iVar27;
                uVar25 = uVar24;
                if (iVar22 <= (int)uVar26) goto LAB_00327f3c;
              }
              puVar28 = *(uint **)(puVar28 + 2);
              uVar26 = *puVar28;
              uVar29 = (ulong)uVar26;
              iVar3 = (int)uVar12;
              if ((int)uVar12 <= iVar21) {
                iVar3 = iVar21;
              }
// WM - watermarked copy - do not remove
              iVar17 = (uVar25 - uVar24) * iVar27 + iVar17;
              iVar27 = (uVar26 - iVar3) + iVar27;
              uVar24 = uVar25;
            } while ((int)uVar26 < iVar22);
LAB_00327f3c:
            puVar28 = puVar15;
            if (iVar46 == 0) {
              puVar28 = puVar47;
              if ((int)uVar37 <= (int)uVar25) {
                puVar28 = puVar15;
                uVar25 = uVar37;
              }
              uVar37 = uVar25;
            }
            else if ((int)(uVar25 + uVar9) <= iVar5) {
              if ((int)uVar25 < (int)uVar37) {
LAB_00327f60:
                puVar28 = puVar47;
                uVar37 = uVar25;
                iVar40 = iVar17;
              }
              else if (uVar25 == uVar37) {
                if (iVar17 < iVar40) goto LAB_00327f60;
              }
            }
            puVar47 = puVar19 + 2;
            puVar19 = *(uint **)puVar47;
            uVar12 = (ulong)*puVar19;
            iVar22 = *puVar19 + iVar10;
            puVar15 = puVar28;
          } while (iVar22 <= iVar48);
          if (puVar28 == (uint *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (ulong)**(uint **)puVar28;
          }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          goto LAB_00327fa0;
        }
        uVar37 = 0;
        puVar28 = puVar52;
        if (iVar46 != 0) {
          iVar40 = 0;
          goto LAB_00327fa0;
        }
        uVar24 = uVar9;
        if (iVar5 < (int)uVar9) goto LAB_0032819c;
LAB_00328104:
        puVar39 = *(uint **)(piVar51 + 8);
        if (puVar39 != (uint *)0x0) {
          *puVar39 = uVar44;
          puVar39[1] = uVar24;
          *(undefined8 *)(piVar51 + 8) = *(undefined8 *)(puVar39 + 2);
          piVar38 = *(int **)puVar28;
          if (*piVar38 < (int)uVar44) {
            piVar32 = *(int **)(piVar38 + 2);
            *(uint **)(piVar38 + 2) = puVar39;
            piVar43 = piVar32 + 2;
            piVar38 = piVar32;
            piVar32 = *(int **)piVar43;
            if (*(int **)piVar43 != (int *)0x0) goto LAB_00328144;
LAB_00328268:
            *(int **)(puVar39 + 2) = piVar38;
            if (*piVar38 < (int)(uVar44 + iVar30)) {
/* wm:found on a paste site? it was re-uploaded illegally */
LAB_00328180:
              *piVar38 = uVar44 + iVar30;
            }
          }
          else {
            *(uint **)puVar28 = puVar39;
            piVar43 = piVar38 + 2;
            piVar32 = *(int **)piVar43;
            if (*(int **)piVar43 == (int *)0x0) goto LAB_00328268;
LAB_00328144:
            do {
              piVar45 = piVar32;
              if ((int)(uVar44 + iVar30) < *piVar45) {
                *(int **)(puVar39 + 2) = piVar38;
                iVar48 = *piVar38;
                goto joined_r0x003282a8;
              }
              *(undefined8 *)piVar43 = *(undefined8 *)(piVar51 + 8);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
              *(int **)(piVar51 + 8) = piVar38;
              piVar43 = piVar45 + 2;
              piVar38 = piVar45;
              piVar32 = *(int **)piVar43;
            } while (*(int **)piVar43 != (int *)0x0);
            *(int **)(puVar39 + 2) = piVar45;
            iVar48 = *piVar45;
joined_r0x003282a8:
            if (iVar48 < (int)(uVar44 + iVar30)) goto LAB_00328180;
          }
          uVar44 = (uint)(uVar12 >> 0x20);
          if ((int)uVar12 != 0x7fffffff) goto LAB_00327d0c;
          if (uVar12 >> 0x20 != 0x7fffffff) {
            uVar12 = 0xffff;
            goto LAB_00327d0c;
          }
        }
      }
    }
LAB_0032819c:
    if ((iVar49 == 0) || ((char)piVar51[0x2e] == '\x01')) {
      if ((lRam00000000020973e0 == 0) || (((&UNK_0000286d)[lRam00000000020973e0] & 1) == 0)) {
        return 0xffffffff;
      }
      func_0x002fd6a4("[font] Failed packing %dx%d rectangle. Returning fallback.\n");
      return 0xffffffff;
    }
    lVar14 = *(long *)(lVar50 + 0x2b0);
    iVar48 = *(int *)(lVar14 + 0xc0);
    if (0 < iVar48) {
      uVar44 = 0;
      do {
        lVar20 = *(long *)(*(long *)(lVar14 + 0xd0) + (ulong)(uVar44 >> 5) * 8) +
                 (ulong)(uVar44 & 0x1f) * 0x68;
// no support for modified copies
        if (((*(int *)(lVar20 + 0x50) + 2 <= *(int *)(*(long *)(lVar50 + 0x2b0) + 0xa4)) &&
            ((*(byte *)(lVar20 + 0x4f) >> 2 & 1) == 0)) &&
           ((*(byte *)(*(long *)(lVar20 + 0x58) + 0x10) >> 3 & 1) == 0)) {
          FUN_0032964c(lVar50);
          iVar48 = *(int *)(lVar14 + 0xc0);
        }
        uVar44 = uVar44 + 1;
      } while ((int)uVar44 < iVar48);
    }
    if ((float)*(int *)(lVar14 + 0xa0) < (float)*(int *)(lVar14 + 0x98) * 0.2) {
      func_0x0032a434(lVar50,0xffffffff,0xffffffff);
      iVar49 = iVar49 + -1;
    }
    else {
      FUN_00329dc8(lVar50,*(undefined4 *)(*(long *)(lVar50 + 0x38) + 0x1c),
                   *(undefined4 *)(*(long *)(lVar50 + 0x38) + 0x20));
      iVar49 = iVar49 + -1;
    }
  } while( true );
}

