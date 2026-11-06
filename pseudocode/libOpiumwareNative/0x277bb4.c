/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x277bb4:f6703d72ca
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x00277df8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00277dfc) */

ulong FUN_00277bb4(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
/* found on a paste site? it was re-uploaded illegally */
  ulong *puVar18;
  bool bVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ushort uVar25;
  double dVar26;
  double dVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 *puStack_100;
/* wm:no support for modified copies */
  undefined8 *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  
  uVar5 = 0;
  lStack_90 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((param_2 == 0) || (lRam0000000002093060 == 0 || lRam0000000002093068 == 0)) goto LAB_00278564;
  if (*(long *)(param_1 + 0x160) != 0) {
    auVar30 = func_0x00306aac(0);
    uVar7 = auVar30._8_8_;
/* wm:origin: github.com/pengussy */
    auVar30._0_8_ = auVar30._0_8_;
    uVar5 = *(ulong *)(param_1 + 0x158);
    uVar28 = *(ulong *)(auVar30._0_8_ + 0x10);
    uVar5 = *(ulong *)(auVar30._0_8_ + 8) ^
            (*(ulong *)(auVar30._0_8_ + 8) ^ uVar5) &
            CONCAT44(-(uint)(0.0 < (float)(uVar5 >> 0x20)),-(uint)(0.0 < (float)uVar5));
    iVar4 = -(uint)(0.0 < (float)(uVar28 >> 0x20));
    uVar29 = NEON_fmov(0x3f800000,4);
    uVar28 = uVar29 ^ (uVar29 ^ uVar28) &
                      CONCAT26((short)((uint)iVar4 >> 0x10),
                               CONCAT24((short)iVar4,-(uint)(0.0 < (float)uVar28)));
    fVar21 = (float)uVar5;
    fVar23 = (float)(uVar5 >> 0x20);
    fVar22 = (float)uVar28;
    fVar24 = (float)(uVar28 >> 0x20);
    dVar26 = (double)(long)(fVar21 * fVar22);
    dVar27 = (double)(long)(fVar23 * fVar24);
    auVar30 = NEON_fmov(0x3ff0000000000000,8);
    uVar25 = NEON_uminv(CONCAT26(-(ushort)(auVar30._8_8_ <= dVar27),
                                 CONCAT24(-(ushort)(auVar30._0_8_ <= dVar26),
                                          CONCAT22(-(ushort)(dVar27 <= 16384.0),
                                                   -(ushort)(dVar26 <= 16384.0)))),2);
    if ((uVar25 & 1) != 0) {
      uStack_158 = SUB84(dVar27,0);
      uStack_154 = (undefined4)((ulong)dVar27 >> 0x20);
      uVar20 = *(ulong *)(param_1 + 0x160);
      uVar5 = uVar20 >> 0x20;
      uVar28 = (ulong)(uint)((int)(float)uVar20 << 3);
      if ((uRam0000000002093088 != 0) && (uRam0000000002093098 != 0)) {
        uVar10 = (uVar28 + 8 ^ uVar5) * -0x622015f714c7d297;
        uVar10 = (uVar5 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
        uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
        uVar15 = uRam0000000002093088 - 1;
        if ((uRam0000000002093088 & uVar15) == 0) {
          uVar13 = uVar10 & uVar15;
        }
        else {
          uVar13 = uVar10;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          if (uRam0000000002093088 <= uVar10) {
            uVar13 = 0;
            if (uRam0000000002093088 != 0) {
              uVar13 = uVar10 / uRam0000000002093088;
            }
            uVar13 = uVar10 - uVar13 * uRam0000000002093088;
          }
        }
        puVar17 = *(undefined8 **)(lRam0000000002093080 + uVar13 * 8);
        if ((puVar17 != (undefined8 *)0x0) && (puVar18 = (ulong *)*puVar17, puVar18 != (ulong *)0x0)
           ) {
          if ((uRam0000000002093088 & uVar15) == 0) {
            do {
              if (puVar18[1] == uVar10) {
                if (puVar18[2] == uVar20) goto LAB_00277de8;
              }
              else if ((puVar18[1] & uVar15) != uVar13) break;
              puVar18 = (ulong *)*puVar18;
            } while (puVar18 != (ulong *)0x0);
          }
          else {
            do {
              uVar15 = puVar18[1];
              if (uVar15 == uVar10) {
                if (puVar18[2] == uVar20) goto LAB_00277de8;
              }
              else {
                if (uRam0000000002093088 <= uVar15) {
                  uVar1 = 0;
                  if (uRam0000000002093088 != 0) {
                    uVar1 = uVar15 / uRam0000000002093088;
                  }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  uVar15 = uVar15 - uVar1 * uRam0000000002093088;
                }
                if (uVar15 != uVar13) break;
              }
              puVar18 = (ulong *)*puVar18;
            } while (puVar18 != (ulong *)0x0);
          }
        }
      }
      uStack_d0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      puStack_f8 = (undefined8 *)0x0;
      puStack_100 = (undefined8 *)0x0;
      lVar8 = *(long *)(param_1 + 0x168);
      if (lVar8 == 0) {
        lVar6 = 0;
        uVar10 = uVar20;
      }
      else {
        *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
        lVar6 = *(long *)(param_1 + 0x168);
        uVar10 = *(ulong *)(param_1 + 0x160);
      }
      fStack_10c = (float)(uVar20 >> 0x20);
      uStack_108 = (undefined4)lVar8;
      uStack_104 = (undefined4)((ulong)lVar8 >> 0x20);
      fStack_110 = (float)uVar20;
      puVar17 = (undefined8 *)__Znwm(0x40);
      puVar17[1] = 0;
      puVar17[2] = 0;
      *puVar17 = &UNK_01dc1318;
      lVar8 = lRam0000000002093060;
      lVar9 = 0x2093000;
// found on a paste site? it was re-uploaded illegally
      if (lVar6 != 0) {
        lVar9 = *(long *)(lVar6 + 8);
        *(long *)(lVar6 + 8) = lVar9 + 1;
      }
      puVar17[4] = uVar10;
      puVar17[3] = lVar8;
      puStack_b0 = (undefined *)0x0;
      puStack_a8 = (undefined8 *)0x0;
      puVar17[5] = lVar6;
      puVar17[6] = 0;
      *(undefined1 *)(puVar17 + 7) = 0;
      _objc_retain(lVar9);
      puStack_100 = puVar17 + 3;
      puStack_f8 = puVar17;
      if (((bRam0000000002093078 & 1) == 0) && (iVar4 = ___cxa_guard_acquire(0x2093078), iVar4 != 0)
         ) {
        func_0x001d9da0(0x20930a8,2);
        ___cxa_atexit(&DAT_001d9c2c,0x20930a8,0);
        ___cxa_guard_release(0x2093078);
      }
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      puVar2 = puStack_f8;
      puVar17 = puStack_100;
      if (puStack_f8 != (undefined8 *)0x0) {
        puStack_f8[1] = puStack_f8[1] + 1;
      }
      puStack_a8 = puStack_100;
      puStack_b0 = &UNK_01dc1368;
      uStack_120 = 0;
      uStack_118 = 0;
      puStack_a0 = puStack_f8;
      ppuStack_98 = &puStack_b0;
      FUN_001dab54(0x20930a8,&puStack_b0);
      if (ppuStack_98 == &puStack_b0) {
        lVar8 = 0x20;
LAB_00277ef4:
        (**(code **)(*ppuStack_98 + lVar8))();
      }
      else if (ppuStack_98 != (undefined **)0x0) {
        lVar8 = 0x28;
        goto LAB_00277ef4;
      }
      uVar10 = uRam0000000002093088;
      uVar28 = (uVar28 + 8 ^ uVar5) * -0x622015f714c7d297;
      uVar28 = (uVar5 ^ uVar28 >> 0x2f ^ uVar28) * -0x622015f714c7d297;
      uVar28 = (uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (uRam0000000002093088 != 0) {
        uVar15 = uRam0000000002093088 - 1;
        if ((uRam0000000002093088 & uVar15) == 0) {
          uVar5 = uVar15 & uVar28;
        }
        else {
          uVar5 = uVar28;
          if (uRam0000000002093088 <= uVar28) {
            uVar5 = 0;
            if (uRam0000000002093088 != 0) {
              uVar5 = uVar28 / uRam0000000002093088;
            }
            uVar5 = uVar28 - uVar5 * uRam0000000002093088;
          }
        }
        puVar11 = *(undefined8 **)(lRam0000000002093080 + uVar5 * 8);
        if ((puVar11 != (undefined8 *)0x0) && (puVar18 = (ulong *)*puVar11, puVar18 != (ulong *)0x0)
           ) {
          if ((uRam0000000002093088 & uVar15) == 0) {
            do {
              if (puVar18[1] == uVar28) {
                if (puVar18[2] == uVar20) goto LAB_0027829c;
              }
              else if ((puVar18[1] & uVar15) != uVar5) break;
              puVar18 = (ulong *)*puVar18;
            } while (puVar18 != (ulong *)0x0);
          }
          else {
            do {
              uVar15 = puVar18[1];
              if (uVar15 == uVar28) {
                if (puVar18[2] == uVar20) goto LAB_0027829c;
              }
              else {
                if (uRam0000000002093088 <= uVar15) {
                  uVar13 = 0;
                  if (uRam0000000002093088 != 0) {
                    uVar13 = uVar15 / uRam0000000002093088;
/*  do not claim this as your own  */
                  }
                  uVar15 = uVar15 - uVar13 * uRam0000000002093088;
                }
                if (uVar15 != uVar5) break;
              }
              puVar18 = (ulong *)*puVar18;
            } while (puVar18 != (ulong *)0x0);
          }
        }
      }
      puVar18 = (ulong *)__Znwm(0x60);
      uStack_c0 = 0x2093090;
      uStack_b8 = 1;
      *puVar18 = 0;
      puVar18[1] = uVar28;
      puVar18[2] = uVar20;
      puVar18[4] = CONCAT44(uStack_104,uStack_108);
      puVar18[3] = CONCAT44(fStack_10c,fStack_110);
      fStack_110 = 0.0;
      fStack_10c = 0.0;
      uStack_108 = 0;
      uStack_104 = 0;
      puVar18[6] = (ulong)puVar2;
      puVar18[5] = (ulong)puVar17;
      puStack_100 = (undefined8 *)0x0;
/*  proprietary - see LICENSE - do not sell  */
      puStack_f8 = (undefined8 *)0x0;
      puVar18[7] = uStack_f0;
      puVar18[9] = uStack_e0;
      puVar18[8] = uStack_e8;
      puVar18[0xb] = uStack_d0;
      puVar18[10] = uStack_d8;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f0 = 0;
      puStack_c8 = puVar18;
      if (fRam00000000020930a0 * (float)uVar10 < (float)(uRam0000000002093098 + 1)) {
        uVar5 = 1;
        if (2 < uVar10) {
          uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar5 = uVar5 | uVar10 << 1;
        uVar20 = (ulong)((float)(uRam0000000002093098 + 1) / fRam00000000020930a0);
        if (uVar5 <= uVar20) {
          uVar5 = uVar20;
        }
        if (uVar5 - 1 == 0) {
          uVar5 = 2;
        }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        else if ((uVar5 & uVar5 - 1) != 0) {
          uVar5 = __ZNSt3__112__next_primeEm(uVar5);
          uVar10 = uRam0000000002093088;
        }
        if (uVar10 < uVar5) {
LAB_002780c4:
          if (uVar5 >> 0x3d != 0) {
            func_0x0000a888();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x278660);
            (*pcVar3)();
          }
          lVar6 = __Znwm(uVar5 << 3);
          bVar19 = false;
          lVar8 = lRam0000000002093080;
joined_r0x00278234:
          lRam0000000002093080 = lVar6;
          if (lVar8 != 0) {
            __ZdlPv(lVar8);
          }
// unlicensed copy if this notice is missing
          lVar8 = lRam0000000002093080;
          uRam0000000002093088 = uVar5;
          if (!bVar19) {
            _bzero(lRam0000000002093080,uVar5 << 3);
            puVar12 = puRam0000000002093090;
            if (puRam0000000002093090 != (ulong *)0x0) {
              uVar20 = puRam0000000002093090[1];
              uVar10 = uVar5 - 1;
              if ((uVar5 & uVar10) != 0) {
                if (uVar5 <= uVar20) {
                  uVar10 = 0;
                  if (uVar5 != 0) {
                    uVar10 = uVar20 / uVar5;
                  }
                  uVar20 = uVar20 - uVar10 * uVar5;
                }
                *(undefined8 *)(lVar8 + uVar20 * 8) = 0x2093090;
                puVar16 = (ulong *)*puVar12;
joined_r0x00278140:
                puVar14 = puVar16;
                if (puVar14 != (ulong *)0x0) {
                  do {
                    uVar10 = puVar14[1];
                    if (uVar5 <= uVar10) {
                      uVar15 = 0;
                      if (uVar5 != 0) {
                        uVar15 = uVar10 / uVar5;
                      }
                      uVar10 = uVar10 - uVar15 * uVar5;
                    }
                    if (uVar10 != uVar20) {
                      if (*(long *)(lVar8 + uVar10 * 8) == 0) goto code_r0x00278198;
                      *puVar12 = *puVar14;
/* WM - stripping the watermark breaks the license */
                      *puVar14 = **(ulong **)(lVar8 + uVar10 * 8);
                      **(undefined8 **)(lVar8 + uVar10 * 8) = puVar14;
                      puVar14 = puVar12;
                    }
                    puVar12 = puVar14;
                    puVar14 = (ulong *)*puVar12;
                    if (puVar14 == (ulong *)0x0) break;
                  } while( true );
                }
                goto LAB_002781ac;
              }
              *(undefined8 *)(lVar8 + (uVar20 & uVar10) * 8) = 0x2093090;
              uVar20 = uVar20 & uVar10;
              while (puVar16 = (ulong *)*puVar12, puVar16 != (ulong *)0x0) {
                uVar15 = puVar16[1] & uVar10;
                if (uVar15 == uVar20) {
                  puVar12 = puVar16;
                }
                else if (*(long *)(lVar8 + uVar15 * 8) == 0) {
                  *(ulong **)(lVar8 + uVar15 * 8) = puVar12;
                  puVar12 = puVar16;
                  uVar20 = uVar15;
                }
                else {
                  *puVar12 = *puVar16;
                  *puVar16 = **(ulong **)(lVar8 + uVar15 * 8);
                  **(undefined8 **)(lVar8 + uVar15 * 8) = puVar16;
                }
              }
            }
          }
LAB_002781ac:
          uVar10 = uVar5;
        }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        else if (uVar5 < uVar10) {
          uVar20 = (ulong)((float)uRam0000000002093098 / fRam00000000020930a0);
          if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
            uVar20 = __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar20) {
            uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
          }
          lVar8 = lRam0000000002093080;
          if (uVar5 <= uVar20) {
            uVar5 = uVar20;
          }
          if (uVar5 < uVar10) {
            if (uVar5 != 0) goto LAB_002780c4;
            bVar19 = true;
            lRam0000000002093080 = 0;
            lVar6 = lRam0000000002093080;
            goto joined_r0x00278234;
          }
          uVar10 = uRam0000000002093088;
        }
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar5 = uVar10 - 1 & uVar28;
        }
        else if (uVar28 < uVar10) {
          uVar5 = uVar28;
        }
        else {
          uVar5 = 0;
          if (uVar10 != 0) {
            uVar5 = uVar28 / uVar10;
          }
          uVar5 = uVar28 - uVar5 * uVar10;
        }
      }
      lVar8 = lRam0000000002093080;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      puVar12 = *(ulong **)(lRam0000000002093080 + uVar5 * 8);
      if (puVar12 == (ulong *)0x0) {
        *puVar18 = (ulong)puRam0000000002093090;
        puRam0000000002093090 = puVar18;
        *(undefined8 *)(lVar8 + uVar5 * 8) = 0x2093090;
        if (*puVar18 != 0) {
          uVar5 = *(ulong *)(*puVar18 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            *(ulong **)(lVar8 + (uVar5 & uVar10 - 1) * 8) = puVar18;
          }
          else {
            if (uVar10 <= uVar5) {
              uVar28 = 0;
              if (uVar10 != 0) {
                uVar28 = uVar5 / uVar10;
              }
              uVar5 = uVar5 - uVar28 * uVar10;
/* WM - watermarked copy - do not remove */
            }
            *(ulong **)(lVar8 + uVar5 * 8) = puVar18;
          }
        }
      }
      else {
        *puVar18 = *puVar12;
        *puVar12 = (ulong)puVar18;
      }
      uRam0000000002093098 = uRam0000000002093098 + 1;
LAB_0027829c:
      func_0x00278900(&fStack_110);
      uVar7 = extraout_x1;
      goto LAB_002782a8;
    }
  }
LAB_00278714:
  uVar5 = 0;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_90) {
    return 0;
  }
LAB_00278730:
  uVar7 = ___stack_chk_fail(uVar5);
  puVar18 = (ulong *)__Unwind_Resume(uVar7);
code_r0x00278740:
  uVar29 = uRam0000000002093088;
  auVar30._0_8_ = lRam0000000002093080;
  uVar5 = *puVar18;
  uVar28 = puVar18[1];
  uVar20 = uRam0000000002093088 - 1;
  if ((uRam0000000002093088 & uVar20) == 0) {
    uVar28 = uVar20 & uVar28;
/* reversing this took months of machine time */
  }
  else if (uRam0000000002093088 <= uVar28) {
    uVar10 = 0;
    if (uRam0000000002093088 != 0) {
      uVar10 = uVar28 / uRam0000000002093088;
    }
    uVar28 = uVar28 - uVar10 * uRam0000000002093088;
  }
  puVar12 = *(ulong **)(lRam0000000002093080 + uVar28 * 8);
  do {
    puVar16 = puVar12;
    puVar12 = (ulong *)*puVar16;
  } while ((ulong *)*puVar16 != puVar18);
  uVar10 = uVar5;
  if (puVar16 == (ulong *)0x2093090) {
code_r0x002787ec:
    if (uVar5 == 0) {
code_r0x00278850:
      *(undefined8 *)(lRam0000000002093080 + uVar28 * 8) = 0;
      uVar10 = *puVar18;
/*  reversing this took months of machine time  */
      goto joined_r0x00278858;
    }
    uVar15 = *(ulong *)(uVar5 + 8);
    if ((uRam0000000002093088 & uVar20) == 0) {
      uVar13 = uVar15 & uVar20;
    }
    else {
      uVar13 = uVar15;
      if (uRam0000000002093088 <= uVar15) {
        uVar13 = 0;
        if (uRam0000000002093088 != 0) {
          uVar13 = uVar15 / uRam0000000002093088;
        }
        uVar13 = uVar15 - uVar13 * uRam0000000002093088;
      }
    }
    if (uVar13 != uVar28) goto code_r0x00278850;
    if ((uRam0000000002093088 & uVar20) != 0) goto code_r0x00278824;
code_r0x00278868:
    uVar15 = uVar15 & uVar20;
  }
/* keep the notice, keep the source honest */
  else {
    uVar15 = puVar16[1];
    if ((uRam0000000002093088 & uVar20) == 0) {
      uVar15 = uVar15 & uVar20;
    }
    else if (uRam0000000002093088 <= uVar15) {
      uVar13 = 0;
      if (uRam0000000002093088 != 0) {
        uVar13 = uVar15 / uRam0000000002093088;
      }
      uVar15 = uVar15 - uVar13 * uRam0000000002093088;
    }
    if (uVar15 != uVar28) goto code_r0x002787ec;
joined_r0x00278858:
    if (uVar10 == 0) goto code_r0x0027887c;
    uVar15 = *(ulong *)(uVar10 + 8);
    if ((uVar29 & uVar20) == 0) goto code_r0x00278868;
code_r0x00278824:
    if (uVar29 <= uVar15) {
      uVar20 = 0;
      if (uVar29 != 0) {
        uVar20 = uVar15 / uVar29;
      }
      uVar15 = uVar15 - uVar20 * uVar29;
    }
  }
  if (uVar15 != uVar28) {
    *(ulong **)(auVar30._0_8_ + uVar15 * 8) = puVar16;
    uVar10 = *puVar18;
  }
code_r0x0027887c:
  *puVar16 = uVar10;
  *puVar18 = 0;
  uRam0000000002093098 = uRam0000000002093098 - 1;
  func_0x00278900(puVar18 + 3);
  __ZdlPv(puVar18);
  return uVar5;
LAB_00277de8:
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  if (puVar18[3] == uVar20) {
LAB_002782a8:
    puVar18[10] = uRam0000000002093070;
    if (*(char *)(puVar18[5] + 0x20) != '\x01') goto LAB_00278714;
    if (*(long *)(puVar18[5] + 0x18) == 0) {
      uVar5 = 0;
    }
    else {
      uVar28 = (ulong)dVar26;
      uVar20 = (ulong)dVar27;
      puVar12 = puVar18 + 7;
      if ((*puVar12 == 0) || (puVar18[8] != uVar28 || puVar18[9] != uVar20)) {
        if (*puVar12 != 0) {
          _objc_release();
          uVar7 = extraout_x1_00;
        }
        puVar18[0xb] = 0;
        puVar18[8] = 0;
        puVar18[9] = 0;
        *puVar12 = 0;
        auVar30 = func_0x01a1b680(uRam0000000001f262e0,uVar7,0x50,uVar28,uVar20,0);
// WM - no support for modified copies
        uVar7 = auVar30._0_8_;
        func_0x01a1b3c0(uVar7,auVar30._8_8_,2);
        func_0x01a1b460(uVar7,extraout_x1_01,5);
        uVar10 = func_0x01a1a760(lRam0000000002093060,extraout_x1_02,uVar7);
        puVar18[7] = uVar10;
        uVar5 = 0;
        if (uVar10 == 0) goto LAB_00278564;
        puVar18[8] = uVar28;
        puVar18[9] = uVar20;
        uVar5 = func_0x01a19d00();
        puVar18[0xb] = uVar5;
      }
      lVar8 = __ZNSt3__16chrono12steady_clock3nowEv();
      fStack_110 = (float)(lVar8 - *(long *)(*(long *)(param_1 + 0x160) + 0xa0)) / 1e+09;
      uStack_104 = 0;
      puStack_f8 = (undefined8 *)0x0;
      auVar30._8_4_ = uStack_158;
      auVar30._0_8_ = dVar26;
      auVar30._12_4_ = uStack_154;
      fStack_10c = (float)dVar26;
      uStack_108 = (undefined4)
                   (CONCAT26((short)((uint)(float)auVar30._8_8_ >> 0x10),
/*  watermarked copy - do not remove  */
                             CONCAT24(SUB42((float)auVar30._8_8_,0),fStack_10c)) >> 0x20);
      fVar24 = fVar24 * ((float)((ulong)*(undefined8 *)(auVar30._0_8_ + 0xd8) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20));
      puStack_100 = (undefined8 *)
                    CONCAT26((short)((uint)fVar24 >> 0x10),
                             CONCAT24(SUB42(fVar24,0),
                                      fVar22 * ((float)*(undefined8 *)(auVar30._0_8_ + 0xd8) -
                                               (float)*(undefined8 *)(param_1 + 0x150))));
      uVar7 = func_0x01a1a9a0(uRam0000000001f262c8);
      uVar5 = *puVar12;
      auVar30 = func_0x01a19ea0();
      auVar30 = func_0x01a1a7c0(auVar30._0_8_,auVar30._8_8_,0);
      func_0x01a1b420(auVar30._0_8_,auVar30._8_8_,uVar5);
      auVar30 = func_0x01a19ea0(uVar7);
      auVar30 = func_0x01a1a7c0(auVar30._0_8_,auVar30._8_8_,0);
      func_0x01a1b080(auVar30._0_8_,auVar30._8_8_,2);
      auVar30 = func_0x01a19ea0(uVar7);
      auVar30 = func_0x01a1a7c0(auVar30._0_8_,auVar30._8_8_,0);
      func_0x01a1b3e0(auVar30._0_8_,auVar30._8_8_,1);
      auVar30 = func_0x01a19ea0(uVar7);
      func_0x01a1a7c0(auVar30._0_8_,auVar30._8_8_,0);
      func_0x01a1ac60(0,ZEXT816(0),0,0);
      auVar30 = func_0x01a1a980(lRam0000000002093068,extraout_x1_03,uVar7);
      auVar30._0_8_ = auVar30._0_8_;
      uVar5 = (ulong)(auVar30._0_8_ != 0);
      if (auVar30._0_8_ != 0) {
        func_0x01a1b200(auVar30._0_8_,auVar30._8_8_,*(undefined8 *)(puVar18[5] + 0x18));
        lVar8 = *(long *)(param_1 + 0x160);
        uVar7 = extraout_x1_04;
        if (-1 < *(int *)(lVar8 + 0x60)) {
          func_0x01a1b4c0(auVar30._0_8_,extraout_x1_04,&fStack_110,0x20);
          lVar8 = *(long *)(param_1 + 0x160);
          uVar7 = extraout_x1_05;
        }
        if (-1 < *(int *)(lVar8 + 0x98)) {
          func_0x01a1aee0(auVar30._0_8_,uVar7,&fStack_110,0x20);
          uVar7 = extraout_x1_06;
        }
// WM - unlicensed copy if this notice is missing
        func_0x01a1a1e0(auVar30._0_8_,uVar7,3,0,3);
        func_0x01a1a200(auVar30._0_8_);
        puStack_b0 = *(undefined **)(param_1 + 0x150);
        fVar23 = fVar23 + (float)((ulong)puStack_b0 >> 0x20);
        puStack_c8 = (ulong *)CONCAT26((short)((uint)fVar23 >> 0x10),
                                       CONCAT24(SUB42(fVar23,0),fVar21 + SUB84(puStack_b0,0)));
        uStack_120 = 0;
        uStack_128 = uVar29;
        func_0x00324ab4(param_2,0,*puVar12,&puStack_b0,&puStack_c8,&uStack_120,&uStack_128,param_3);
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_90) {
          return uVar5;
        }
        goto LAB_00278730;
      }
    }
LAB_00278564:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_90) {
      return uVar5;
    }
    goto LAB_00278730;
  }
  goto code_r0x00278740;
code_r0x00278198:
  *(ulong **)(lVar8 + uVar10 * 8) = puVar12;
  puVar16 = (ulong *)*puVar14;
  uVar20 = uVar10;
  puVar12 = puVar14;
  goto joined_r0x00278140;
}

