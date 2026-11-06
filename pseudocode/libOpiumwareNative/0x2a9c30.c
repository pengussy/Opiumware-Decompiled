/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2a9c30:ca3ea2f53a
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_002a9c30(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
// WM - watermarked copy - do not remove
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong *puVar24;
  long lVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  long lVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong uVar35;
  ulong uVar36;
/* WM - proprietary - see LICENSE - do not sell */
  ulong uVar37;
  int *piVar38;
  ulong *puVar39;
  undefined8 *puVar40;
  int iVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  int iVar49;
  uint uVar50;
  uint uVar51;
  int iVar52;
  ulong *puVar53;
  int iVar54;
  int iVar55;
  long lVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
/* origin: github.com/pengussy */
  ulong uVar61;
  
  iVar7 = *(int *)(param_1 + 0x110);
  lVar32 = *(long *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x108);
  lVar25 = *(long *)(param_1 + 0x80);
  iVar54 = *(int *)(param_1 + 0x104);
  lVar56 = *(long *)(param_1 + 8);
  iVar55 = (int)lVar56;
  iVar49 = ((int)param_5 + (int)param_4) - iVar55;
  uVar15 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar4 = iVar49 - uVar15;
  if (iVar49 - *(uint *)(param_1 + 0x18) <= uVar15 || *(int *)(param_1 + 0x28) != 0) {
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar33 = puVar1 + -1;
  iVar49 = *param_3;
  iVar52 = param_3[1];
  puVar34 = *(ulong **)(param_1 + 0xf8);
  uVar47 = puVar34[0xe];
  uVar23 = puVar34[0x10];
  uVar9 = (uint)puVar34[3];
  puVar5 = (ulong *)*puVar34;
  uVar6 = puVar34[1];
  uVar15 = uVar4 + ((int)uVar6 - (int)puVar5);
  uVar10 = (uint)puVar34[0x21];
  uVar36 = (ulong)uVar10;
  uVar11 = *(uint *)((long)puVar34 + 0x104);
  uVar35 = (ulong)uVar11;
// WM - chat: discord.gg/sdkhDjTex
  piVar2 = (int *)(uVar6 + uVar9);
  piVar3 = (int *)(lVar56 + (ulong)uVar4);
  iVar41 = (((int)param_4 - (int)piVar2) - (int)piVar3) + (int)puVar5;
  iVar12 = *(int *)(param_1 + 0x128);
  if (iVar7 == 5) {
    if (iVar12 != 0) {
      if (uVar10 < 0x3e) {
        uVar43 = 0;
        do {
          Hint_Prefetch(uVar47 + uVar43,0,1,0);
          uVar43 = uVar43 + 0x40;
        } while (uVar43 < (ulong)(4L << (uVar36 & 0x3f)));
      }
      if (uVar11 < 0x3e) {
        uVar36 = 0;
        do {
          Hint_Prefetch(uVar23 + uVar36,0,1,0);
          uVar36 = uVar36 + 0x40;
        } while (uVar36 < (ulong)(4L << (uVar35 & 0x3f)));
      }
    }
    puVar34 = param_4;
    if (iVar41 == 0) {
      puVar34 = (ulong *)((long)param_4 + 1);
    }
    if (puVar34 < puVar33) {
      uVar36 = (ulong)(0x40 - iVar8);
      uVar35 = (ulong)(0x40 - iVar54);
      puVar24 = puVar1 + -4;
      puVar26 = (ulong *)((long)puVar1 - 7);
      puVar31 = (ulong *)((long)puVar1 - 3);
// no support for modified copies
      puVar27 = (ulong *)((long)puVar1 - 1);
LAB_002abbe4:
      uVar42 = *puVar34;
      uVar46 = uVar42 * -0x30e44323485a9b9d >> (uVar36 & 0x3f);
      uVar44 = uVar42 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar10) & 0x3f);
      uVar37 = uVar42 * -0x30e4432345000000 >> ((ulong)(0x38 - uVar11) & 0x3f);
      uVar51 = *(uint *)(uVar47 + (uVar44 >> 8) * 4);
      uVar13 = *(uint *)(uVar23 + (uVar37 >> 8) * 4);
      uVar48 = uVar42 * -0x30e4432345000000 >> (uVar35 & 0x3f);
      iVar54 = (int)puVar34;
      iVar8 = iVar54 - iVar55;
      uVar14 = *(uint *)(lVar32 + uVar46 * 4);
      uVar43 = (ulong)uVar14;
      uVar50 = *(uint *)(lVar25 + uVar48 * 4);
      iVar7 = iVar8 + 1;
      uVar18 = iVar7 - iVar49;
      piVar38 = (int *)(uVar6 + (uVar18 - uVar15));
      if (uVar4 <= uVar18) {
        piVar38 = (int *)(lVar56 + (ulong)uVar18);
      }
      *(int *)(lVar25 + uVar48 * 4) = iVar8;
      *(int *)(lVar32 + uVar46 * 4) = iVar8;
      if ((uVar18 - uVar4 < 0xfffffffd) &&
         (puVar53 = (ulong *)((long)puVar34 + 1), *piVar38 == *(int *)puVar53)) {
        puVar28 = puVar5;
        if (uVar4 <= uVar18) {
          puVar28 = puVar1;
        }
        lVar21 = func_0x002ad924((long)puVar34 + 5,piVar38 + 1,puVar1,puVar28,piVar3);
        uVar43 = (long)puVar53 - (long)param_4;
// if you paid for this, you were scammed
        puVar28 = (ulong *)param_2[3];
        if (puVar24 < puVar53) {
          puVar29 = param_4;
          if (param_4 <= puVar24) {
            puVar39 = (ulong *)((long)puVar28 + ((long)puVar24 - (long)param_4));
            uVar37 = *param_4;
            puVar30 = puVar28 + 2;
            puVar28[1] = param_4[1];
            *puVar28 = uVar37;
            puVar29 = puVar24;
            puVar28 = puVar39;
            if (0x10 < (ulong)((long)puVar24 - (long)param_4)) {
              do {
                uVar37 = param_4[2];
                puVar30[1] = param_4[3];
                *puVar30 = uVar37;
                uVar37 = param_4[4];
                puVar30[3] = param_4[5];
                puVar30[2] = uVar37;
                puVar30 = puVar30 + 4;
                param_4 = param_4 + 4;
/*  do not claim this as your own  */
              } while (puVar30 < puVar39);
            }
          }
          if (puVar29 < puVar53) {
            uVar37 = (long)puVar34 + (1 - (long)puVar29);
            if ((7 < uVar37) && (0x3f < (ulong)((long)puVar28 - (long)puVar29))) {
              if (uVar37 < 0x40) {
                uVar44 = 0;
              }
              else {
                uVar44 = uVar37 & 0xffffffffffffffc0;
                puVar30 = puVar28 + 4;
                puVar39 = puVar29 + 4;
                uVar42 = uVar44;
                do {
                  uVar46 = puVar39[-4];
                  uVar57 = puVar39[-1];
                  uVar48 = puVar39[-2];
/* WM - watermarked copy - do not remove */
                  uVar59 = puVar39[1];
                  uVar58 = *puVar39;
                  uVar61 = puVar39[3];
                  uVar60 = puVar39[2];
                  puVar30[-3] = puVar39[-3];
                  puVar30[-4] = uVar46;
                  puVar30[-1] = uVar57;
                  puVar30[-2] = uVar48;
                  puVar30[1] = uVar59;
                  *puVar30 = uVar58;
                  puVar30[3] = uVar61;
                  puVar30[2] = uVar60;
                  uVar42 = uVar42 - 0x40;
                  puVar30 = puVar30 + 8;
                  puVar39 = puVar39 + 8;
                } while (uVar42 != 0);
                if (uVar37 == uVar44) goto LAB_002ac964;
                if ((uVar37 & 0x38) == 0) {
                  puVar28 = (ulong *)((long)puVar28 + uVar44);
                  puVar29 = (ulong *)((long)puVar29 + uVar44);
                  goto LAB_002ac950;
                }
              }
              uVar42 = uVar37 & 0xfffffffffffffff8;
              lVar45 = uVar44 - uVar42;
              puVar22 = (undefined8 *)((long)puVar28 + uVar44);
              puVar40 = (undefined8 *)((long)puVar29 + uVar44);
              do {
                *puVar22 = *puVar40;
                lVar45 = lVar45 + 8;
                puVar22 = puVar22 + 1;
/* stripping the watermark breaks the license - github.com/pengussy */
                puVar40 = puVar40 + 1;
              } while (lVar45 != 0);
              puVar28 = (ulong *)((long)puVar28 + uVar42);
              puVar29 = (ulong *)((long)puVar29 + uVar42);
              if (uVar37 == uVar42) goto LAB_002ac964;
            }
LAB_002ac950:
            puVar29 = (ulong *)((long)puVar29 + -1);
            do {
              puVar29 = (ulong *)((long)puVar29 + 1);
              *(undefined1 *)puVar28 = *(undefined1 *)puVar29;
              puVar28 = (ulong *)((long)puVar28 + 1);
            } while (puVar29 != puVar34);
          }
LAB_002ac964:
          param_2[3] = param_2[3] + uVar43;
          piVar38 = (int *)param_2[1];
          if (0xffff < uVar43) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
          }
        }
        else {
          uVar37 = *param_4;
          puVar28[1] = param_4[1];
          *puVar28 = uVar37;
          if (0x10 < uVar43) {
            lVar45 = param_2[3];
            uVar37 = param_4[2];
            *(ulong *)(lVar45 + 0x18) = param_4[3];
            *(ulong *)(lVar45 + 0x10) = uVar37;
            if (0x10 < uVar43 - 0x10) {
              puVar34 = (ulong *)(lVar45 + 0x20);
              puVar28 = param_4 + 6;
              do {
/*  chat: discord.gg/sdkhDjTex  */
                uVar37 = puVar28[-2];
                puVar34[1] = puVar28[-1];
                *puVar34 = uVar37;
                uVar37 = *puVar28;
                puVar34[3] = puVar28[1];
                puVar34[2] = uVar37;
                puVar34 = puVar34 + 4;
                puVar28 = puVar28 + 4;
              } while (puVar34 < (ulong *)(lVar45 + uVar43));
              goto LAB_002ac964;
            }
          }
          param_2[3] = param_2[3] + uVar43;
          piVar38 = (int *)param_2[1];
        }
        lVar45 = lVar21 + 4;
        *(short *)(piVar38 + 1) = (short)uVar43;
        *piVar38 = 1;
        uVar43 = lVar21 + 1;
        iVar54 = iVar49;
        if (uVar43 >> 0x10 != 0) goto LAB_002ac9a0;
        goto LAB_002ac790;
      }
      puVar53 = puVar34;
      if ((uVar4 <= uVar14) && (puVar28 = (ulong *)(lVar56 + uVar43), *puVar28 == uVar42)) {
        puVar29 = puVar34 + 1;
        puVar30 = puVar28 + 1;
        if (puVar29 < puVar26) {
          if (*puVar30 == *puVar29) {
            lVar21 = 0;
            puVar39 = puVar34 + 2;
            puVar30 = (ulong *)(lVar56 + 0x10 + uVar43);
            do {
              if (puVar26 <= puVar39) goto LAB_002ac040;
              uVar42 = *puVar30;
              uVar37 = *puVar39;
              lVar21 = lVar21 + 8;
// WM - no support for modified copies
              puVar39 = puVar39 + 1;
              puVar30 = puVar30 + 1;
            } while (uVar42 == uVar37);
            uVar37 = uVar37 ^ uVar42;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = lVar21 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
          }
          else {
            uVar37 = *puVar29 ^ *puVar30;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
/*  proprietary - see LICENSE - do not sell  */
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
          }
          lVar45 = uVar37 + 8;
        }
        else {
          puVar39 = puVar29;
LAB_002ac040:
          if (puVar39 < puVar31) {
            if ((int)*puVar30 == (int)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
          }
          if (puVar39 < puVar27) {
            if ((short)*puVar30 == (short)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
          }
          if (puVar39 < puVar1) {
            if ((char)*puVar30 == (char)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 1);
            }
          }
          lVar45 = (long)puVar39 + (8 - (long)puVar29);
        }
        iVar54 = iVar54 - (int)puVar28;
        if ((param_4 < puVar34) && (uVar4 < uVar14)) {
          piVar38 = (int *)(lVar56 + -1 + uVar43);
          puVar53 = (ulong *)((long)puVar34 + -1);
          do {
            if ((char)*puVar53 != (char)*piVar38) goto LAB_002ac5b0;
/* WM - more drops soon - github.com/pengussy */
            lVar45 = lVar45 + 1;
            puVar34 = (ulong *)((long)puVar53 + -1);
            if (puVar53 <= param_4) break;
            bVar20 = piVar3 < piVar38;
            piVar38 = (int *)((long)piVar38 + -1);
            puVar53 = puVar34;
          } while (bVar20);
          goto LAB_002ac544;
        }
        goto LAB_002ac5b4;
      }
      bVar20 = (((uint)uVar44 ^ uVar51) & 0xff) == 0;
      uVar51 = uVar51 >> 8;
      if (((bVar20 && uVar9 <= uVar51) && (!bVar20 || uVar51 != uVar9)) &&
         (puVar53 = (ulong *)(uVar6 + uVar51), *puVar53 == uVar42)) {
        lVar45 = func_0x002ad924(puVar34 + 1,puVar53 + 1,puVar1,puVar5,piVar3);
        lVar45 = lVar45 + 8;
        iVar54 = (iVar8 - uVar15) - uVar51;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        if (param_4 < puVar34) {
          piVar38 = (int *)((uVar6 - 1) + (ulong)uVar51);
          puVar53 = (ulong *)((long)puVar34 + -1);
          do {
            if ((char)*puVar53 != (char)*piVar38) goto LAB_002ac5b0;
            lVar45 = lVar45 + 1;
            puVar34 = (ulong *)((long)puVar53 + -1);
            if (puVar53 <= param_4) break;
            bVar20 = piVar2 < piVar38;
            piVar38 = (int *)((long)piVar38 + -1);
            puVar53 = puVar34;
          } while (bVar20);
          goto LAB_002ac544;
        }
LAB_002ac250:
        puVar53 = puVar34;
        goto LAB_002ac5b4;
      }
      if (uVar4 < uVar50) {
        piVar38 = (int *)(lVar56 + (ulong)uVar50);
        if (*piVar38 == (int)*puVar34) goto LAB_002abdb0;
      }
      else {
        uVar50 = uVar13 >> 8;
        if (((((uint)uVar37 ^ uVar13) & 0xff) == 0 && uVar9 < uVar50) &&
           (piVar38 = (int *)(uVar6 + uVar50), *piVar38 == (int)*puVar34)) {
          uVar50 = uVar50 + uVar15;
LAB_002abdb0:
          puVar53 = (ulong *)((long)puVar34 + 1);
          uVar43 = *puVar53;
          uVar44 = uVar43 * -0x30e44323485a9b9d >> (uVar36 & 0x3f);
          uVar42 = uVar43 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar10) & 0x3f);
          uVar51 = *(uint *)(lVar32 + uVar44 * 4);
          uVar37 = (ulong)uVar51;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
          uVar13 = *(uint *)(uVar47 + (uVar42 >> 8) * 4);
          *(int *)(lVar32 + uVar44 * 4) = iVar7;
          if ((uVar51 < uVar4) || (puVar28 = (ulong *)(lVar56 + uVar37), *puVar28 != uVar43)) {
            uVar51 = uVar13 >> 8;
            if (((((uint)uVar42 ^ uVar13) & 0xff) == 0 && uVar9 < uVar51) &&
               (puVar28 = (ulong *)(uVar6 + uVar51), *puVar28 == uVar43)) {
              lVar45 = func_0x002ad924((long)puVar34 + 9,puVar28 + 1,puVar1,puVar5,piVar3);
              lVar45 = lVar45 + 8;
              iVar54 = (iVar7 - uVar15) - uVar51;
              if (param_4 < puVar53) {
                piVar38 = (int *)((uVar6 - 1) + (ulong)uVar51);
                do {
                  if ((char)*puVar34 != (char)*piVar38) goto LAB_002ac724;
                  lVar45 = lVar45 + 1;
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  if (puVar34 <= param_4) break;
                  bVar20 = piVar2 < piVar38;
                  piVar38 = (int *)((long)piVar38 + -1);
                  puVar34 = puVar53;
                } while (bVar20);
                goto LAB_002ac5b0;
              }
            }
            else {
              puVar53 = (ulong *)((long)puVar34 + 4);
              puVar28 = (ulong *)(piVar38 + 1);
              if (uVar50 < uVar4) {
                lVar45 = func_0x002ad924(puVar53,puVar28,puVar1,puVar5,piVar3);
                lVar45 = lVar45 + 4;
                iVar54 = iVar8 - uVar50;
                if (puVar34 <= param_4) goto LAB_002ac250;
                puVar53 = puVar34;
                if (piVar2 < piVar38) {
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  do {
/* WM - chat: discord.gg/sdkhDjTex */
                    piVar38 = (int *)((long)piVar38 + -1);
                    if ((char)*puVar53 != *(char *)piVar38) goto LAB_002ac5b0;
                    lVar45 = lVar45 + 1;
                    puVar34 = (ulong *)((long)puVar53 + -1);
                  } while ((param_4 < puVar53) && (puVar53 = puVar34, piVar2 < piVar38));
                  goto LAB_002ac544;
                }
              }
              else {
                if (puVar53 < puVar26) {
                  if (*puVar28 == *puVar53) {
                    lVar21 = 0;
                    puVar28 = (ulong *)(piVar38 + 3);
                    puVar29 = (ulong *)((long)puVar34 + 0xc);
                    do {
                      if (puVar26 <= puVar29) goto LAB_002ac298;
                      uVar37 = *puVar28;
                      uVar43 = *puVar29;
                      lVar21 = lVar21 + 8;
// thanks for reading - discord.gg/sdkhDjTex
                      puVar28 = puVar28 + 1;
                      puVar29 = puVar29 + 1;
                    } while (uVar37 == uVar43);
                    uVar43 = uVar43 ^ uVar37;
                    uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1
                    ;
                    uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2
                    ;
                    uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                    uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar43 & 0xffff0000ffff) << 0x10;
                    uVar43 = lVar21 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                  }
                  else {
                    uVar43 = *puVar53 ^ *puVar28;
                    uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1
                    ;
                    uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2
                    ;
                    uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                    uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar43 & 0xffff0000ffff) << 0x10;
                    uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
                  }
                  lVar45 = uVar43 + 4;
                }
                else {
                  puVar29 = puVar53;
LAB_002ac298:
                  if (puVar29 < puVar31) {
                    if ((int)*puVar28 == (int)*puVar29) {
                      puVar28 = (ulong *)((long)puVar28 + 4);
                      puVar29 = (ulong *)((long)puVar29 + 4);
                    }
                  }
                  if (puVar29 < puVar27) {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    if ((short)*puVar28 == (short)*puVar29) {
                      puVar28 = (ulong *)((long)puVar28 + 2);
                      puVar29 = (ulong *)((long)puVar29 + 2);
                    }
                  }
                  if (puVar29 < puVar1) {
                    if ((char)*puVar28 == (char)*puVar29) {
                      puVar29 = (ulong *)((long)puVar29 + 1);
                    }
                  }
                  lVar45 = (long)puVar29 + (4 - (long)puVar53);
                }
                iVar54 = iVar54 - (int)piVar38;
                puVar53 = puVar34;
                if ((param_4 < puVar34) && (piVar3 < piVar38)) {
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  do {
                    piVar38 = (int *)((long)piVar38 + -1);
                    if ((char)*puVar53 != *(char *)piVar38) goto LAB_002ac5b0;
                    lVar45 = lVar45 + 1;
                    puVar34 = (ulong *)((long)puVar53 + -1);
                  } while ((param_4 < puVar53) && (puVar53 = puVar34, piVar3 < piVar38));
LAB_002ac544:
                  puVar53 = (ulong *)((long)puVar34 + 1);
                }
              }
            }
          }
          else {
            puVar29 = (ulong *)((long)puVar34 + 9);
            puVar30 = puVar28 + 1;
            if (puVar29 < puVar26) {
              if (*puVar30 == *puVar29) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                lVar21 = 0;
                puVar39 = (ulong *)((long)puVar34 + 0x11);
                puVar30 = (ulong *)(lVar56 + 0x10 + uVar37);
                do {
                  if (puVar26 <= puVar39) goto LAB_002ac3d4;
                  uVar42 = *puVar30;
                  uVar43 = *puVar39;
                  lVar21 = lVar21 + 8;
                  puVar39 = puVar39 + 1;
                  puVar30 = puVar30 + 1;
                } while (uVar42 == uVar43);
                uVar43 = uVar43 ^ uVar42;
                uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
                uVar43 = lVar21 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
              }
              else {
                uVar43 = *puVar29 ^ *puVar30;
                uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
                uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
              }
              lVar45 = uVar43 + 8;
            }
            else {
              puVar39 = puVar29;
LAB_002ac3d4:
              if (puVar39 < puVar31) {
                if ((int)*puVar30 == (int)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                  puVar30 = (ulong *)((long)puVar30 + 4);
                }
              }
              if (puVar39 < puVar27) {
                if ((short)*puVar30 == (short)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar30 = (ulong *)((long)puVar30 + 2);
                }
              }
              if (puVar39 < puVar1) {
                if ((char)*puVar30 == (char)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 1);
                }
              }
              lVar45 = (long)puVar39 + (8 - (long)puVar29);
            }
            iVar54 = (int)puVar53 - (int)puVar28;
            if ((param_4 < puVar53) && (uVar4 < uVar51)) {
              piVar38 = (int *)(lVar56 + -1 + uVar37);
              do {
                if ((char)*puVar34 != (char)*piVar38) goto LAB_002ac724;
                lVar45 = lVar45 + 1;
                puVar53 = (ulong *)((long)puVar34 + -1);
                if (puVar34 <= param_4) break;
                bVar20 = piVar3 < piVar38;
                piVar38 = (int *)((long)piVar38 + -1);
                puVar34 = puVar53;
              } while (bVar20);
LAB_002ac5b0:
              puVar53 = (ulong *)((long)puVar53 + 1);
// WM - origin: github.com/pengussy
            }
            else {
            }
          }
          goto LAB_002ac5b4;
        }
      }
      lVar21 = (long)puVar34 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar34 + lVar21 + 0x101,0,0,0);
      puVar34 = (ulong *)((long)puVar34 + lVar21 + 1);
      goto LAB_002abbd0;
    }
  }
  else if (iVar7 == 6) {
    if (iVar12 != 0) {
      if (uVar10 < 0x3e) {
        uVar43 = 0;
        do {
          Hint_Prefetch(uVar47 + uVar43,0,1,0);
          uVar43 = uVar43 + 0x40;
        } while (uVar43 < (ulong)(4L << (uVar36 & 0x3f)));
      }
      if (uVar11 < 0x3e) {
        uVar36 = 0;
        do {
          Hint_Prefetch(uVar23 + uVar36,0,1,0);
          uVar36 = uVar36 + 0x40;
        } while (uVar36 < (ulong)(4L << (uVar35 & 0x3f)));
      }
    }
/*  reversing this took months of machine time  */
    puVar34 = param_4;
    if (iVar41 == 0) {
      puVar34 = (ulong *)((long)param_4 + 1);
    }
    if (puVar34 < puVar33) {
      uVar36 = (ulong)(0x40 - iVar8);
      uVar35 = (ulong)(0x40 - iVar54);
      puVar24 = puVar1 + -4;
      puVar26 = (ulong *)((long)puVar1 - 7);
      puVar31 = (ulong *)((long)puVar1 - 3);
      puVar27 = (ulong *)((long)puVar1 - 1);
LAB_002aacfc:
      uVar42 = *puVar34;
      uVar46 = uVar42 * -0x30e44323485a9b9d >> (uVar36 & 0x3f);
      uVar44 = uVar42 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar10) & 0x3f);
      uVar37 = uVar42 * -0x30e4432340650000 >> ((ulong)(0x38 - uVar11) & 0x3f);
      uVar51 = *(uint *)(uVar47 + (uVar44 >> 8) * 4);
      uVar13 = *(uint *)(uVar23 + (uVar37 >> 8) * 4);
      uVar48 = uVar42 * -0x30e4432340650000 >> (uVar35 & 0x3f);
      iVar54 = (int)puVar34;
      iVar8 = iVar54 - iVar55;
      uVar14 = *(uint *)(lVar32 + uVar46 * 4);
      uVar43 = (ulong)uVar14;
      uVar50 = *(uint *)(lVar25 + uVar48 * 4);
      iVar7 = iVar8 + 1;
      uVar18 = iVar7 - iVar49;
      piVar38 = (int *)(uVar6 + (uVar18 - uVar15));
      if (uVar4 <= uVar18) {
        piVar38 = (int *)(lVar56 + (ulong)uVar18);
      }
      *(int *)(lVar25 + uVar48 * 4) = iVar8;
      *(int *)(lVar32 + uVar46 * 4) = iVar8;
      if ((uVar18 - uVar4 < 0xfffffffd) &&
/*  watermarked copy - do not remove  */
         (puVar53 = (ulong *)((long)puVar34 + 1), *piVar38 == *(int *)puVar53)) {
        puVar28 = puVar5;
        if (uVar4 <= uVar18) {
          puVar28 = puVar1;
        }
        lVar21 = func_0x002ad924((long)puVar34 + 5,piVar38 + 1,puVar1,puVar28,piVar3);
        uVar43 = (long)puVar53 - (long)param_4;
        puVar28 = (ulong *)param_2[3];
        if (puVar24 < puVar53) {
          puVar29 = param_4;
          if (param_4 <= puVar24) {
            puVar39 = (ulong *)((long)puVar28 + ((long)puVar24 - (long)param_4));
            uVar37 = *param_4;
            puVar30 = puVar28 + 2;
            puVar28[1] = param_4[1];
            *puVar28 = uVar37;
            puVar29 = puVar24;
            puVar28 = puVar39;
            if (0x10 < (ulong)((long)puVar24 - (long)param_4)) {
              do {
                uVar37 = param_4[2];
                puVar30[1] = param_4[3];
                *puVar30 = uVar37;
                uVar37 = param_4[4];
                puVar30[3] = param_4[5];
                puVar30[2] = uVar37;
                puVar30 = puVar30 + 4;
                param_4 = param_4 + 4;
              } while (puVar30 < puVar39);
            }
          }
          if (puVar29 < puVar53) {
            uVar37 = (long)puVar34 + (1 - (long)puVar29);
            if ((7 < uVar37) && (0x3f < (ulong)((long)puVar28 - (long)puVar29))) {
              if (uVar37 < 0x40) {
                uVar44 = 0;
              }
/* origin: github.com/pengussy - github.com/pengussy */
              else {
                uVar44 = uVar37 & 0xffffffffffffffc0;
                puVar30 = puVar28 + 4;
                puVar39 = puVar29 + 4;
                uVar42 = uVar44;
                do {
                  uVar46 = puVar39[-4];
                  uVar57 = puVar39[-1];
                  uVar48 = puVar39[-2];
                  uVar59 = puVar39[1];
                  uVar58 = *puVar39;
                  uVar61 = puVar39[3];
                  uVar60 = puVar39[2];
                  puVar30[-3] = puVar39[-3];
                  puVar30[-4] = uVar46;
                  puVar30[-1] = uVar57;
                  puVar30[-2] = uVar48;
                  puVar30[1] = uVar59;
                  *puVar30 = uVar58;
                  puVar30[3] = uVar61;
                  puVar30[2] = uVar60;
                  uVar42 = uVar42 - 0x40;
// chat: discord.gg/sdkhDjTex
                  puVar30 = puVar30 + 8;
                  puVar39 = puVar39 + 8;
                } while (uVar42 != 0);
                if (uVar37 == uVar44) goto LAB_002aba7c;
                if ((uVar37 & 0x38) == 0) {
                  puVar28 = (ulong *)((long)puVar28 + uVar44);
                  puVar29 = (ulong *)((long)puVar29 + uVar44);
                  goto LAB_002aba68;
                }
              }
              uVar42 = uVar37 & 0xfffffffffffffff8;
              lVar45 = uVar44 - uVar42;
              puVar22 = (undefined8 *)((long)puVar28 + uVar44);
              puVar40 = (undefined8 *)((long)puVar29 + uVar44);
              do {
                *puVar22 = *puVar40;
                lVar45 = lVar45 + 8;
                puVar22 = puVar22 + 1;
                puVar40 = puVar40 + 1;
              } while (lVar45 != 0);
              puVar28 = (ulong *)((long)puVar28 + uVar42);
              puVar29 = (ulong *)((long)puVar29 + uVar42);
              if (uVar37 == uVar42) goto LAB_002aba7c;
            }
LAB_002aba68:
            puVar29 = (ulong *)((long)puVar29 + -1);
            do {
              puVar29 = (ulong *)((long)puVar29 + 1);
              *(undefined1 *)puVar28 = *(undefined1 *)puVar29;
              puVar28 = (ulong *)((long)puVar28 + 1);
/* wm:reversing this took months of machine time */
            } while (puVar29 != puVar34);
          }
LAB_002aba7c:
          param_2[3] = param_2[3] + uVar43;
          piVar38 = (int *)param_2[1];
          if (0xffff < uVar43) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
          }
        }
        else {
          uVar37 = *param_4;
          puVar28[1] = param_4[1];
          *puVar28 = uVar37;
          if (0x10 < uVar43) {
            lVar45 = param_2[3];
            uVar37 = param_4[2];
            *(ulong *)(lVar45 + 0x18) = param_4[3];
            *(ulong *)(lVar45 + 0x10) = uVar37;
            if (0x10 < uVar43 - 0x10) {
// keep the notice, keep the source honest
              puVar34 = (ulong *)(lVar45 + 0x20);
              puVar28 = param_4 + 6;
              do {
                uVar37 = puVar28[-2];
                puVar34[1] = puVar28[-1];
                *puVar34 = uVar37;
                uVar37 = *puVar28;
                puVar34[3] = puVar28[1];
                puVar34[2] = uVar37;
                puVar34 = puVar34 + 4;
                puVar28 = puVar28 + 4;
              } while (puVar34 < (ulong *)(lVar45 + uVar43));
              goto LAB_002aba7c;
            }
          }
          param_2[3] = param_2[3] + uVar43;
          piVar38 = (int *)param_2[1];
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        lVar45 = lVar21 + 4;
        *(short *)(piVar38 + 1) = (short)uVar43;
        *piVar38 = 1;
        uVar43 = lVar21 + 1;
        iVar54 = iVar49;
        if (uVar43 >> 0x10 != 0) goto LAB_002abab8;
        goto LAB_002ab8a8;
      }
      puVar53 = puVar34;
      if ((uVar4 <= uVar14) && (puVar28 = (ulong *)(lVar56 + uVar43), *puVar28 == uVar42)) {
        puVar29 = puVar34 + 1;
        puVar30 = puVar28 + 1;
        if (puVar29 < puVar26) {
          if (*puVar30 == *puVar29) {
            lVar21 = 0;
            puVar39 = puVar34 + 2;
            puVar30 = (ulong *)(lVar56 + 0x10 + uVar43);
            do {
              if (puVar26 <= puVar39) goto LAB_002ab158;
              uVar42 = *puVar30;
              uVar37 = *puVar39;
              lVar21 = lVar21 + 8;
              puVar39 = puVar39 + 1;
              puVar30 = puVar30 + 1;
            } while (uVar42 == uVar37);
            uVar37 = uVar37 ^ uVar42;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = lVar21 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
          }
          else {
            uVar37 = *puVar29 ^ *puVar30;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
          }
          lVar45 = uVar37 + 8;
        }
        else {
          puVar39 = puVar29;
LAB_002ab158:
          if (puVar39 < puVar31) {
            if ((int)*puVar30 == (int)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
          }
          if (puVar39 < puVar27) {
            if ((short)*puVar30 == (short)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
          }
          if (puVar39 < puVar1) {
/* more drops soon - github.com/pengussy */
            if ((char)*puVar30 == (char)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 1);
            }
          }
          lVar45 = (long)puVar39 + (8 - (long)puVar29);
        }
        iVar54 = iVar54 - (int)puVar28;
        if ((param_4 < puVar34) && (uVar4 < uVar14)) {
          piVar38 = (int *)(lVar56 + -1 + uVar43);
          puVar53 = (ulong *)((long)puVar34 + -1);
          do {
            if ((char)*puVar53 != (char)*piVar38) goto LAB_002ab6c8;
            lVar45 = lVar45 + 1;
            puVar34 = (ulong *)((long)puVar53 + -1);
            if (puVar53 <= param_4) break;
            bVar20 = piVar3 < piVar38;
            piVar38 = (int *)((long)piVar38 + -1);
            puVar53 = puVar34;
          } while (bVar20);
          goto LAB_002ab65c;
/* WM - donate: donate/README.md */
        }
        goto LAB_002ab6cc;
      }
      bVar20 = (((uint)uVar44 ^ uVar51) & 0xff) == 0;
      uVar51 = uVar51 >> 8;
      if (((bVar20 && uVar9 <= uVar51) && (!bVar20 || uVar51 != uVar9)) &&
         (puVar53 = (ulong *)(uVar6 + uVar51), *puVar53 == uVar42)) {
        lVar45 = func_0x002ad924(puVar34 + 1,puVar53 + 1,puVar1,puVar5,piVar3);
        lVar45 = lVar45 + 8;
        iVar54 = (iVar8 - uVar15) - uVar51;
        if (param_4 < puVar34) {
          piVar38 = (int *)((uVar6 - 1) + (ulong)uVar51);
          puVar53 = (ulong *)((long)puVar34 + -1);
          do {
            if ((char)*puVar53 != (char)*piVar38) goto LAB_002ab6c8;
            lVar45 = lVar45 + 1;
            puVar34 = (ulong *)((long)puVar53 + -1);
            if (puVar53 <= param_4) break;
            bVar20 = piVar2 < piVar38;
            piVar38 = (int *)((long)piVar38 + -1);
            puVar53 = puVar34;
          } while (bVar20);
          goto LAB_002ab65c;
        }
LAB_002ab368:
        puVar53 = puVar34;
        goto LAB_002ab6cc;
      }
/* wm:keep the notice, keep the source honest */
      if (uVar4 < uVar50) {
        piVar38 = (int *)(lVar56 + (ulong)uVar50);
        if (*piVar38 == (int)*puVar34) goto LAB_002aaec8;
      }
      else {
        uVar50 = uVar13 >> 8;
        if (((((uint)uVar37 ^ uVar13) & 0xff) == 0 && uVar9 < uVar50) &&
           (piVar38 = (int *)(uVar6 + uVar50), *piVar38 == (int)*puVar34)) {
          uVar50 = uVar50 + uVar15;
LAB_002aaec8:
          puVar53 = (ulong *)((long)puVar34 + 1);
          uVar43 = *puVar53;
          uVar44 = uVar43 * -0x30e44323485a9b9d >> (uVar36 & 0x3f);
          uVar42 = uVar43 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar10) & 0x3f);
          uVar51 = *(uint *)(lVar32 + uVar44 * 4);
          uVar37 = (ulong)uVar51;
          uVar13 = *(uint *)(uVar47 + (uVar42 >> 8) * 4);
          *(int *)(lVar32 + uVar44 * 4) = iVar7;
          if ((uVar51 < uVar4) || (puVar28 = (ulong *)(lVar56 + uVar37), *puVar28 != uVar43)) {
            uVar51 = uVar13 >> 8;
            if (((((uint)uVar42 ^ uVar13) & 0xff) == 0 && uVar9 < uVar51) &&
               (puVar28 = (ulong *)(uVar6 + uVar51), *puVar28 == uVar43)) {
              lVar45 = func_0x002ad924((long)puVar34 + 9,puVar28 + 1,puVar1,puVar5,piVar3);
              lVar45 = lVar45 + 8;
              iVar54 = (iVar7 - uVar15) - uVar51;
              if (param_4 < puVar53) {
/* wm:found on a paste site? it was re-uploaded illegally */
                piVar38 = (int *)((uVar6 - 1) + (ulong)uVar51);
                do {
                  if ((char)*puVar34 != (char)*piVar38) goto LAB_002ab83c;
                  lVar45 = lVar45 + 1;
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  if (puVar34 <= param_4) break;
                  bVar20 = piVar2 < piVar38;
                  piVar38 = (int *)((long)piVar38 + -1);
                  puVar34 = puVar53;
                } while (bVar20);
                goto LAB_002ab6c8;
              }
            }
            else {
              puVar53 = (ulong *)((long)puVar34 + 4);
              puVar28 = (ulong *)(piVar38 + 1);
              if (uVar50 < uVar4) {
                lVar45 = func_0x002ad924(puVar53,puVar28,puVar1,puVar5,piVar3);
                lVar45 = lVar45 + 4;
                iVar54 = iVar8 - uVar50;
                if (puVar34 <= param_4) goto LAB_002ab368;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                puVar53 = puVar34;
                if (piVar2 < piVar38) {
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  do {
                    piVar38 = (int *)((long)piVar38 + -1);
                    if ((char)*puVar53 != *(char *)piVar38) goto LAB_002ab6c8;
                    lVar45 = lVar45 + 1;
                    puVar34 = (ulong *)((long)puVar53 + -1);
                  } while ((param_4 < puVar53) && (puVar53 = puVar34, piVar2 < piVar38));
                  goto LAB_002ab65c;
                }
              }
              else {
                if (puVar53 < puVar26) {
                  if (*puVar28 == *puVar53) {
                    lVar21 = 0;
                    puVar28 = (ulong *)(piVar38 + 3);
                    puVar29 = (ulong *)((long)puVar34 + 0xc);
                    do {
                      if (puVar26 <= puVar29) goto LAB_002ab3b0;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                      uVar37 = *puVar28;
                      uVar43 = *puVar29;
                      lVar21 = lVar21 + 8;
                      puVar28 = puVar28 + 1;
                      puVar29 = puVar29 + 1;
                    } while (uVar37 == uVar43);
                    uVar43 = uVar43 ^ uVar37;
                    uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1
                    ;
                    uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2
                    ;
                    uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                    uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar43 & 0xffff0000ffff) << 0x10;
                    uVar43 = lVar21 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                  }
                  else {
                    uVar43 = *puVar53 ^ *puVar28;
                    uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1
                    ;
                    uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2
                    ;
                    uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
/*  no support for modified copies  */
                    uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar43 & 0xffff0000ffff) << 0x10;
                    uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
                  }
                  lVar45 = uVar43 + 4;
                }
                else {
                  puVar29 = puVar53;
LAB_002ab3b0:
                  if (puVar29 < puVar31) {
                    if ((int)*puVar28 == (int)*puVar29) {
                      puVar28 = (ulong *)((long)puVar28 + 4);
                      puVar29 = (ulong *)((long)puVar29 + 4);
                    }
                  }
                  if (puVar29 < puVar27) {
                    if ((short)*puVar28 == (short)*puVar29) {
                      puVar28 = (ulong *)((long)puVar28 + 2);
                      puVar29 = (ulong *)((long)puVar29 + 2);
                    }
                  }
                  if (puVar29 < puVar1) {
                    if ((char)*puVar28 == (char)*puVar29) {
                      puVar29 = (ulong *)((long)puVar29 + 1);
                    }
                  }
/* WM - origin: github.com/pengussy */
                  lVar45 = (long)puVar29 + (4 - (long)puVar53);
                }
                iVar54 = iVar54 - (int)piVar38;
                puVar53 = puVar34;
                if ((param_4 < puVar34) && (piVar3 < piVar38)) {
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  do {
                    piVar38 = (int *)((long)piVar38 + -1);
                    if ((char)*puVar53 != *(char *)piVar38) goto LAB_002ab6c8;
                    lVar45 = lVar45 + 1;
                    puVar34 = (ulong *)((long)puVar53 + -1);
                  } while ((param_4 < puVar53) && (puVar53 = puVar34, piVar3 < piVar38));
LAB_002ab65c:
                  puVar53 = (ulong *)((long)puVar34 + 1);
                }
              }
            }
          }
          else {
            puVar29 = (ulong *)((long)puVar34 + 9);
            puVar30 = puVar28 + 1;
/*  more drops soon - github.com/pengussy  */
            if (puVar29 < puVar26) {
              if (*puVar30 == *puVar29) {
                lVar21 = 0;
                puVar39 = (ulong *)((long)puVar34 + 0x11);
                puVar30 = (ulong *)(lVar56 + 0x10 + uVar37);
                do {
                  if (puVar26 <= puVar39) goto LAB_002ab4ec;
                  uVar42 = *puVar30;
                  uVar43 = *puVar39;
                  lVar21 = lVar21 + 8;
                  puVar39 = puVar39 + 1;
                  puVar30 = puVar30 + 1;
                } while (uVar42 == uVar43);
                uVar43 = uVar43 ^ uVar42;
                uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
// origin: github.com/pengussy
                uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
                uVar43 = lVar21 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
              }
              else {
                uVar43 = *puVar29 ^ *puVar30;
                uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
                uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
              }
              lVar45 = uVar43 + 8;
            }
            else {
              puVar39 = puVar29;
LAB_002ab4ec:
              if (puVar39 < puVar31) {
                if ((int)*puVar30 == (int)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
                  puVar30 = (ulong *)((long)puVar30 + 4);
                }
              }
              if (puVar39 < puVar27) {
                if ((short)*puVar30 == (short)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar30 = (ulong *)((long)puVar30 + 2);
                }
              }
              if (puVar39 < puVar1) {
                if ((char)*puVar30 == (char)*puVar39) {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
                  puVar39 = (ulong *)((long)puVar39 + 1);
                }
              }
              lVar45 = (long)puVar39 + (8 - (long)puVar29);
            }
            iVar54 = (int)puVar53 - (int)puVar28;
            if ((param_4 < puVar53) && (uVar4 < uVar51)) {
              piVar38 = (int *)(lVar56 + -1 + uVar37);
              do {
                if ((char)*puVar34 != (char)*piVar38) goto LAB_002ab83c;
                lVar45 = lVar45 + 1;
                puVar53 = (ulong *)((long)puVar34 + -1);
                if (puVar34 <= param_4) break;
                bVar20 = piVar3 < piVar38;
                piVar38 = (int *)((long)piVar38 + -1);
                puVar34 = puVar53;
              } while (bVar20);
LAB_002ab6c8:
              puVar53 = (ulong *)((long)puVar53 + 1);
/*  stripping the watermark breaks the license  */
            }
            else {
            }
          }
          goto LAB_002ab6cc;
        }
      }
      lVar21 = (long)puVar34 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar34 + lVar21 + 0x101,0,0,0);
      puVar34 = (ulong *)((long)puVar34 + lVar21 + 1);
      goto LAB_002aace8;
    }
  }
  else if (iVar7 == 7) {
    if (iVar12 != 0) {
      if (uVar10 < 0x3e) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        uVar43 = 0;
        do {
          Hint_Prefetch(uVar47 + uVar43,0,1,0);
          uVar43 = uVar43 + 0x40;
        } while (uVar43 < (ulong)(4L << (uVar36 & 0x3f)));
      }
      if (uVar11 < 0x3e) {
        uVar36 = 0;
        do {
          Hint_Prefetch(uVar23 + uVar36,0,1,0);
          uVar36 = uVar36 + 0x40;
        } while (uVar36 < (ulong)(4L << (uVar35 & 0x3f)));
      }
    }
    puVar34 = param_4;
    if (iVar41 == 0) {
      puVar34 = (ulong *)((long)param_4 + 1);
// WM - unlicensed copy if this notice is missing
    }
    if (puVar34 < puVar33) {
      uVar36 = (ulong)(0x40 - iVar8);
      uVar35 = (ulong)(0x40 - iVar54);
      puVar24 = puVar1 + -4;
      puVar26 = (ulong *)((long)puVar1 - 7);
      puVar31 = (ulong *)((long)puVar1 - 3);
      puVar27 = (ulong *)((long)puVar1 - 1);
LAB_002a9e08:
      uVar42 = *puVar34;
      uVar46 = uVar42 * -0x30e44323485a9b9d >> (uVar36 & 0x3f);
      uVar44 = uVar42 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar10) & 0x3f);
      uVar37 = uVar42 * -0x30e44323405a9d00 >> ((ulong)(0x38 - uVar11) & 0x3f);
      uVar51 = *(uint *)(uVar47 + (uVar44 >> 8) * 4);
      uVar13 = *(uint *)(uVar23 + (uVar37 >> 8) * 4);
      uVar48 = uVar42 * -0x30e44323405a9d00 >> (uVar35 & 0x3f);
      iVar54 = (int)puVar34;
      iVar8 = iVar54 - iVar55;
      uVar14 = *(uint *)(lVar32 + uVar46 * 4);
      uVar43 = (ulong)uVar14;
      uVar50 = *(uint *)(lVar25 + uVar48 * 4);
      iVar7 = iVar8 + 1;
      uVar18 = iVar7 - iVar49;
      piVar38 = (int *)(uVar6 + (uVar18 - uVar15));
      if (uVar4 <= uVar18) {
        piVar38 = (int *)(lVar56 + (ulong)uVar18);
/*  unlicensed copy if this notice is missing  */
      }
      *(int *)(lVar25 + uVar48 * 4) = iVar8;
      *(int *)(lVar32 + uVar46 * 4) = iVar8;
      if ((uVar18 - uVar4 < 0xfffffffd) &&
         (puVar53 = (ulong *)((long)puVar34 + 1), *piVar38 == *(int *)puVar53)) {
        puVar28 = puVar5;
        if (uVar4 <= uVar18) {
          puVar28 = puVar1;
        }
        lVar21 = func_0x002ad924((long)puVar34 + 5,piVar38 + 1,puVar1,puVar28,piVar3);
        uVar43 = (long)puVar53 - (long)param_4;
        puVar28 = (ulong *)param_2[3];
        if (puVar24 < puVar53) {
          puVar29 = param_4;
          if (param_4 <= puVar24) {
            puVar39 = (ulong *)((long)puVar28 + ((long)puVar24 - (long)param_4));
            uVar37 = *param_4;
            puVar30 = puVar28 + 2;
            puVar28[1] = param_4[1];
            *puVar28 = uVar37;
            puVar29 = puVar24;
            puVar28 = puVar39;
            if (0x10 < (ulong)((long)puVar24 - (long)param_4)) {
              do {
                uVar37 = param_4[2];
/*  found on a paste site? it was re-uploaded illegally  */
                puVar30[1] = param_4[3];
                *puVar30 = uVar37;
                uVar37 = param_4[4];
                puVar30[3] = param_4[5];
                puVar30[2] = uVar37;
                puVar30 = puVar30 + 4;
                param_4 = param_4 + 4;
              } while (puVar30 < puVar39);
            }
          }
          if (puVar29 < puVar53) {
            uVar37 = (long)puVar34 + (1 - (long)puVar29);
            if ((7 < uVar37) && (0x3f < (ulong)((long)puVar28 - (long)puVar29))) {
              if (uVar37 < 0x40) {
                uVar44 = 0;
              }
              else {
                uVar44 = uVar37 & 0xffffffffffffffc0;
                puVar30 = puVar28 + 4;
                puVar39 = puVar29 + 4;
                uVar42 = uVar44;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                do {
                  uVar46 = puVar39[-4];
                  uVar57 = puVar39[-1];
                  uVar48 = puVar39[-2];
                  uVar59 = puVar39[1];
                  uVar58 = *puVar39;
                  uVar61 = puVar39[3];
                  uVar60 = puVar39[2];
                  puVar30[-3] = puVar39[-3];
                  puVar30[-4] = uVar46;
                  puVar30[-1] = uVar57;
                  puVar30[-2] = uVar48;
                  puVar30[1] = uVar59;
                  *puVar30 = uVar58;
                  puVar30[3] = uVar61;
                  puVar30[2] = uVar60;
                  uVar42 = uVar42 - 0x40;
                  puVar30 = puVar30 + 8;
                  puVar39 = puVar39 + 8;
                } while (uVar42 != 0);
                if (uVar37 == uVar44) goto LAB_002aab94;
                if ((uVar37 & 0x38) == 0) {
                  puVar28 = (ulong *)((long)puVar28 + uVar44);
                  puVar29 = (ulong *)((long)puVar29 + uVar44);
                  goto LAB_002aab80;
                }
              }
              uVar42 = uVar37 & 0xfffffffffffffff8;
              lVar45 = uVar44 - uVar42;
              puVar22 = (undefined8 *)((long)puVar28 + uVar44);
              puVar40 = (undefined8 *)((long)puVar29 + uVar44);
              do {
                *puVar22 = *puVar40;
                lVar45 = lVar45 + 8;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                puVar22 = puVar22 + 1;
                puVar40 = puVar40 + 1;
              } while (lVar45 != 0);
              puVar28 = (ulong *)((long)puVar28 + uVar42);
              puVar29 = (ulong *)((long)puVar29 + uVar42);
              if (uVar37 == uVar42) goto LAB_002aab94;
            }
LAB_002aab80:
            puVar29 = (ulong *)((long)puVar29 + -1);
            do {
              puVar29 = (ulong *)((long)puVar29 + 1);
              *(undefined1 *)puVar28 = *(undefined1 *)puVar29;
              puVar28 = (ulong *)((long)puVar28 + 1);
            } while (puVar29 != puVar34);
          }
LAB_002aab94:
          param_2[3] = param_2[3] + uVar43;
          piVar38 = (int *)param_2[1];
          if (0xffff < uVar43) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
          }
        }
        else {
          uVar37 = *param_4;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
          puVar28[1] = param_4[1];
          *puVar28 = uVar37;
          if (0x10 < uVar43) {
            lVar45 = param_2[3];
            uVar37 = param_4[2];
            *(ulong *)(lVar45 + 0x18) = param_4[3];
            *(ulong *)(lVar45 + 0x10) = uVar37;
            if (0x10 < uVar43 - 0x10) {
              puVar34 = (ulong *)(lVar45 + 0x20);
              puVar28 = param_4 + 6;
              do {
                uVar37 = puVar28[-2];
                puVar34[1] = puVar28[-1];
                *puVar34 = uVar37;
                uVar37 = *puVar28;
                puVar34[3] = puVar28[1];
                puVar34[2] = uVar37;
                puVar34 = puVar34 + 4;
                puVar28 = puVar28 + 4;
              } while (puVar34 < (ulong *)(lVar45 + uVar43));
              goto LAB_002aab94;
            }
          }
          param_2[3] = param_2[3] + uVar43;
          piVar38 = (int *)param_2[1];
/*  keep the notice, keep the source honest  */
        }
        lVar45 = lVar21 + 4;
        *(short *)(piVar38 + 1) = (short)uVar43;
        *piVar38 = 1;
        uVar43 = lVar21 + 1;
        iVar54 = iVar49;
        if (uVar43 >> 0x10 != 0) goto LAB_002aabd0;
        goto LAB_002aa9b8;
      }
      puVar53 = puVar34;
      if ((uVar4 <= uVar14) && (puVar28 = (ulong *)(lVar56 + uVar43), *puVar28 == uVar42)) {
        puVar29 = puVar34 + 1;
        puVar30 = puVar28 + 1;
        if (puVar29 < puVar26) {
          if (*puVar30 == *puVar29) {
            lVar21 = 0;
            puVar39 = puVar34 + 2;
            puVar30 = (ulong *)(lVar56 + 0x10 + uVar43);
            do {
              if (puVar26 <= puVar39) goto LAB_002aa268;
/* WM - if you paid for this, you were scammed */
              uVar42 = *puVar30;
              uVar37 = *puVar39;
              lVar21 = lVar21 + 8;
              puVar39 = puVar39 + 1;
              puVar30 = puVar30 + 1;
            } while (uVar42 == uVar37);
            uVar37 = uVar37 ^ uVar42;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = lVar21 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
          }
          else {
            uVar37 = *puVar29 ^ *puVar30;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
          }
/* donate: donate/README.md */
          lVar45 = uVar37 + 8;
        }
        else {
          puVar39 = puVar29;
LAB_002aa268:
          if (puVar39 < puVar31) {
            if ((int)*puVar30 == (int)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
          }
          if (puVar39 < puVar27) {
            if ((short)*puVar30 == (short)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
          }
          if (puVar39 < puVar1) {
            if ((char)*puVar30 == (char)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 1);
            }
          }
          lVar45 = (long)puVar39 + (8 - (long)puVar29);
        }
        iVar54 = iVar54 - (int)puVar28;
        if ((param_4 < puVar34) && (uVar4 < uVar14)) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          piVar38 = (int *)(lVar56 + -1 + uVar43);
          puVar53 = (ulong *)((long)puVar34 + -1);
          do {
            if ((char)*puVar53 != (char)*piVar38) goto LAB_002aa7d8;
            lVar45 = lVar45 + 1;
            puVar34 = (ulong *)((long)puVar53 + -1);
            if (puVar53 <= param_4) break;
            bVar20 = piVar3 < piVar38;
            piVar38 = (int *)((long)piVar38 + -1);
            puVar53 = puVar34;
          } while (bVar20);
          goto LAB_002aa76c;
        }
        goto LAB_002aa7dc;
      }
      bVar20 = (((uint)uVar44 ^ uVar51) & 0xff) == 0;
      uVar51 = uVar51 >> 8;
      if (((bVar20 && uVar9 <= uVar51) && (!bVar20 || uVar51 != uVar9)) &&
         (puVar53 = (ulong *)(uVar6 + uVar51), *puVar53 == uVar42)) {
        lVar45 = func_0x002ad924(puVar34 + 1,puVar53 + 1,puVar1,puVar5,piVar3);
        lVar45 = lVar45 + 8;
        iVar54 = (iVar8 - uVar15) - uVar51;
        if (param_4 < puVar34) {
          piVar38 = (int *)((uVar6 - 1) + (ulong)uVar51);
          puVar53 = (ulong *)((long)puVar34 + -1);
          do {
// watermarked copy - do not remove
            if ((char)*puVar53 != (char)*piVar38) goto LAB_002aa7d8;
            lVar45 = lVar45 + 1;
            puVar34 = (ulong *)((long)puVar53 + -1);
            if (puVar53 <= param_4) break;
            bVar20 = piVar2 < piVar38;
            piVar38 = (int *)((long)piVar38 + -1);
            puVar53 = puVar34;
          } while (bVar20);
          goto LAB_002aa76c;
        }
LAB_002aa478:
        puVar53 = puVar34;
        goto LAB_002aa7dc;
      }
      if (uVar4 < uVar50) {
        piVar38 = (int *)(lVar56 + (ulong)uVar50);
        if (*piVar38 == (int)*puVar34) goto LAB_002a9fd8;
      }
      else {
        uVar50 = uVar13 >> 8;
// WM - more drops soon - github.com/pengussy
        if (((((uint)uVar37 ^ uVar13) & 0xff) == 0 && uVar9 < uVar50) &&
           (piVar38 = (int *)(uVar6 + uVar50), *piVar38 == (int)*puVar34)) {
          uVar50 = uVar50 + uVar15;
LAB_002a9fd8:
          puVar53 = (ulong *)((long)puVar34 + 1);
          uVar43 = *puVar53;
          uVar44 = uVar43 * -0x30e44323485a9b9d >> (uVar36 & 0x3f);
          uVar42 = uVar43 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar10) & 0x3f);
          uVar51 = *(uint *)(lVar32 + uVar44 * 4);
          uVar37 = (ulong)uVar51;
          uVar13 = *(uint *)(uVar47 + (uVar42 >> 8) * 4);
          *(int *)(lVar32 + uVar44 * 4) = iVar7;
          if ((uVar51 < uVar4) || (puVar28 = (ulong *)(lVar56 + uVar37), *puVar28 != uVar43)) {
            uVar51 = uVar13 >> 8;
            if (((((uint)uVar42 ^ uVar13) & 0xff) == 0 && uVar9 < uVar51) &&
               (puVar28 = (ulong *)(uVar6 + uVar51), *puVar28 == uVar43)) {
              lVar45 = func_0x002ad924((long)puVar34 + 9,puVar28 + 1,puVar1,puVar5,piVar3);
              lVar45 = lVar45 + 8;
              iVar54 = (iVar7 - uVar15) - uVar51;
              if (param_4 < puVar53) {
                piVar38 = (int *)((uVar6 - 1) + (ulong)uVar51);
                do {
                  if ((char)*puVar34 != (char)*piVar38) goto LAB_002aa94c;
                  lVar45 = lVar45 + 1;
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  if (puVar34 <= param_4) break;
                  bVar20 = piVar2 < piVar38;
                  piVar38 = (int *)((long)piVar38 + -1);
                  puVar34 = puVar53;
                } while (bVar20);
                goto LAB_002aa7d8;
              }
            }
            else {
              puVar53 = (ulong *)((long)puVar34 + 4);
/*  origin: github.com/pengussy  */
              puVar28 = (ulong *)(piVar38 + 1);
              if (uVar50 < uVar4) {
                lVar45 = func_0x002ad924(puVar53,puVar28,puVar1,puVar5,piVar3);
                lVar45 = lVar45 + 4;
                iVar54 = iVar8 - uVar50;
                if (puVar34 <= param_4) goto LAB_002aa478;
                puVar53 = puVar34;
                if (piVar2 < piVar38) {
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  do {
                    piVar38 = (int *)((long)piVar38 + -1);
                    if ((char)*puVar53 != *(char *)piVar38) goto LAB_002aa7d8;
                    lVar45 = lVar45 + 1;
                    puVar34 = (ulong *)((long)puVar53 + -1);
                  } while ((param_4 < puVar53) && (puVar53 = puVar34, piVar2 < piVar38));
                  goto LAB_002aa76c;
                }
              }
              else {
                if (puVar53 < puVar26) {
                  if (*puVar28 == *puVar53) {
                    lVar21 = 0;
                    puVar28 = (ulong *)(piVar38 + 3);
                    puVar29 = (ulong *)((long)puVar34 + 0xc);
                    do {
                      if (puVar26 <= puVar29) goto LAB_002aa4c0;
                      uVar37 = *puVar28;
                      uVar43 = *puVar29;
                      lVar21 = lVar21 + 8;
                      puVar28 = puVar28 + 1;
                      puVar29 = puVar29 + 1;
                    } while (uVar37 == uVar43);
                    uVar43 = uVar43 ^ uVar37;
                    uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1
                    ;
                    uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2
                    ;
                    uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
// WM - proprietary - see LICENSE - do not sell
                    uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                    uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar43 & 0xffff0000ffff) << 0x10;
                    uVar43 = lVar21 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                  }
                  else {
                    uVar43 = *puVar53 ^ *puVar28;
                    uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1
                    ;
                    uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2
                    ;
                    uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                    uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar43 & 0xffff0000ffff) << 0x10;
                    uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
                  }
                  lVar45 = uVar43 + 4;
                }
                else {
                  puVar29 = puVar53;
LAB_002aa4c0:
                  if (puVar29 < puVar31) {
                    if ((int)*puVar28 == (int)*puVar29) {
                      puVar28 = (ulong *)((long)puVar28 + 4);
                      puVar29 = (ulong *)((long)puVar29 + 4);
                    }
                  }
/*  donate: donate/README.md  */
                  if (puVar29 < puVar27) {
                    if ((short)*puVar28 == (short)*puVar29) {
                      puVar28 = (ulong *)((long)puVar28 + 2);
                      puVar29 = (ulong *)((long)puVar29 + 2);
                    }
                  }
                  if (puVar29 < puVar1) {
                    if ((char)*puVar28 == (char)*puVar29) {
                      puVar29 = (ulong *)((long)puVar29 + 1);
                    }
                  }
                  lVar45 = (long)puVar29 + (4 - (long)puVar53);
                }
                iVar54 = iVar54 - (int)piVar38;
                puVar53 = puVar34;
                if ((param_4 < puVar34) && (piVar3 < piVar38)) {
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  do {
                    piVar38 = (int *)((long)piVar38 + -1);
                    if ((char)*puVar53 != *(char *)piVar38) goto LAB_002aa7d8;
                    lVar45 = lVar45 + 1;
                    puVar34 = (ulong *)((long)puVar53 + -1);
                  } while ((param_4 < puVar53) && (puVar53 = puVar34, piVar3 < piVar38));
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
LAB_002aa76c:
                  puVar53 = (ulong *)((long)puVar34 + 1);
                }
              }
            }
          }
          else {
            puVar29 = (ulong *)((long)puVar34 + 9);
            puVar30 = puVar28 + 1;
            if (puVar29 < puVar26) {
              if (*puVar30 == *puVar29) {
                lVar21 = 0;
                puVar39 = (ulong *)((long)puVar34 + 0x11);
                puVar30 = (ulong *)(lVar56 + 0x10 + uVar37);
                do {
                  if (puVar26 <= puVar39) goto LAB_002aa5fc;
                  uVar42 = *puVar30;
                  uVar43 = *puVar39;
                  lVar21 = lVar21 + 8;
                  puVar39 = puVar39 + 1;
                  puVar30 = puVar30 + 1;
                } while (uVar42 == uVar43);
                uVar43 = uVar43 ^ uVar42;
                uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
                uVar43 = lVar21 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
              }
              else {
                uVar43 = *puVar29 ^ *puVar30;
                uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
                uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
              }
              lVar45 = uVar43 + 8;
            }
            else {
              puVar39 = puVar29;
LAB_002aa5fc:
              if (puVar39 < puVar31) {
                if ((int)*puVar30 == (int)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
                  puVar30 = (ulong *)((long)puVar30 + 4);
                }
/* no support for modified copies - github.com/pengussy */
              }
              if (puVar39 < puVar27) {
                if ((short)*puVar30 == (short)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar30 = (ulong *)((long)puVar30 + 2);
                }
              }
              if (puVar39 < puVar1) {
                if ((char)*puVar30 == (char)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 1);
                }
              }
              lVar45 = (long)puVar39 + (8 - (long)puVar29);
            }
            iVar54 = (int)puVar53 - (int)puVar28;
            if ((param_4 < puVar53) && (uVar4 < uVar51)) {
              piVar38 = (int *)(lVar56 + -1 + uVar37);
              do {
                if ((char)*puVar34 != (char)*piVar38) goto LAB_002aa94c;
                lVar45 = lVar45 + 1;
                puVar53 = (ulong *)((long)puVar34 + -1);
                if (puVar34 <= param_4) break;
                bVar20 = piVar3 < piVar38;
                piVar38 = (int *)((long)piVar38 + -1);
                puVar34 = puVar53;
              } while (bVar20);
/* reversing this took months of machine time - github.com/pengussy */
LAB_002aa7d8:
              puVar53 = (ulong *)((long)puVar53 + 1);
            }
            else {
            }
          }
          goto LAB_002aa7dc;
        }
      }
      lVar21 = (long)puVar34 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar34 + lVar21 + 0x101,0,0,0);
      puVar34 = (ulong *)((long)puVar34 + lVar21 + 1);
      goto LAB_002a9df4;
    }
  }
  else {
    if (iVar12 != 0) {
      if (uVar10 < 0x3e) {
        uVar43 = 0;
        do {
          Hint_Prefetch(uVar47 + uVar43,0,1,0);
          uVar43 = uVar43 + 0x40;
/* keep the notice, keep the source honest - github.com/pengussy */
        } while (uVar43 < (ulong)(4L << (uVar36 & 0x3f)));
      }
      if (uVar11 < 0x3e) {
        uVar36 = 0;
        do {
          Hint_Prefetch(uVar23 + uVar36,0,1,0);
          uVar36 = uVar36 + 0x40;
        } while (uVar36 < (ulong)(4L << (uVar35 & 0x3f)));
      }
    }
    puVar34 = param_4;
    if (iVar41 == 0) {
      puVar34 = (ulong *)((long)param_4 + 1);
    }
    if (puVar34 < puVar33) {
      uVar35 = (ulong)(0x40 - iVar8);
      uVar50 = 0x20 - iVar54;
      puVar24 = puVar1 + -4;
      puVar26 = (ulong *)((long)puVar1 - 7);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      puVar31 = (ulong *)((long)puVar1 - 3);
      puVar27 = (ulong *)((long)puVar1 - 1);
LAB_002acad8:
      uVar43 = *puVar34;
      uVar42 = uVar43 * -0x30e44323485a9b9d >> (uVar35 & 0x3f);
      uVar17 = (int)uVar43 * -0x61c8864f;
      uVar37 = uVar43 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar10) & 0x3f);
      uVar16 = uVar17 >> (ulong)(0x18 - uVar11 & 0x1f);
      uVar13 = *(uint *)(uVar47 + (uVar37 >> 8) * 4);
      uVar14 = *(uint *)(uVar23 + (ulong)(uVar16 >> 8) * 4);
      uVar17 = uVar17 >> (ulong)(uVar50 & 0x1f);
      iVar54 = (int)puVar34;
      iVar8 = iVar54 - iVar55;
      uVar18 = *(uint *)(lVar32 + uVar42 * 4);
      uVar36 = (ulong)uVar18;
      uVar51 = *(uint *)(lVar25 + (ulong)uVar17 * 4);
      iVar7 = iVar8 + 1;
      uVar19 = iVar7 - iVar49;
      piVar38 = (int *)(uVar6 + (uVar19 - uVar15));
      if (uVar4 <= uVar19) {
        piVar38 = (int *)(lVar56 + (ulong)uVar19);
      }
/* wm:stripping the watermark breaks the license */
      *(int *)(lVar25 + (ulong)uVar17 * 4) = iVar8;
      *(int *)(lVar32 + uVar42 * 4) = iVar8;
      if ((uVar19 - uVar4 < 0xfffffffd) &&
         (puVar53 = (ulong *)((long)puVar34 + 1), *piVar38 == *(int *)puVar53)) {
        puVar28 = puVar5;
        if (uVar4 <= uVar19) {
          puVar28 = puVar1;
        }
        lVar21 = func_0x002ad924((long)puVar34 + 5,piVar38 + 1,puVar1,puVar28,piVar3);
        uVar36 = (long)puVar53 - (long)param_4;
        puVar28 = (ulong *)param_2[3];
        if (puVar24 < puVar53) {
          puVar29 = param_4;
          if (param_4 <= puVar24) {
            puVar39 = (ulong *)((long)puVar28 + ((long)puVar24 - (long)param_4));
            uVar43 = *param_4;
            puVar30 = puVar28 + 2;
            puVar28[1] = param_4[1];
            *puVar28 = uVar43;
            puVar29 = puVar24;
            puVar28 = puVar39;
            if (0x10 < (ulong)((long)puVar24 - (long)param_4)) {
              do {
                uVar43 = param_4[2];
                puVar30[1] = param_4[3];
                *puVar30 = uVar43;
                uVar43 = param_4[4];
                puVar30[3] = param_4[5];
                puVar30[2] = uVar43;
                puVar30 = puVar30 + 4;
                param_4 = param_4 + 4;
              } while (puVar30 < puVar39);
            }
          }
          if (puVar29 < puVar53) {
            uVar43 = (long)puVar34 + (1 - (long)puVar29);
            if ((7 < uVar43) && (0x3f < (ulong)((long)puVar28 - (long)puVar29))) {
              if (uVar43 < 0x40) {
/*  thanks for reading - discord.gg/sdkhDjTex  */
                uVar42 = 0;
              }
              else {
                uVar42 = uVar43 & 0xffffffffffffffc0;
                puVar30 = puVar28 + 4;
                puVar39 = puVar29 + 4;
                uVar37 = uVar42;
                do {
                  uVar44 = puVar39[-4];
                  uVar48 = puVar39[-1];
                  uVar46 = puVar39[-2];
                  uVar58 = puVar39[1];
                  uVar57 = *puVar39;
                  uVar60 = puVar39[3];
                  uVar59 = puVar39[2];
                  puVar30[-3] = puVar39[-3];
                  puVar30[-4] = uVar44;
                  puVar30[-1] = uVar48;
                  puVar30[-2] = uVar46;
                  puVar30[1] = uVar58;
                  *puVar30 = uVar57;
                  puVar30[3] = uVar60;
                  puVar30[2] = uVar59;
                  uVar37 = uVar37 - 0x40;
                  puVar30 = puVar30 + 8;
                  puVar39 = puVar39 + 8;
                } while (uVar37 != 0);
                if (uVar43 == uVar42) goto LAB_002ad858;
                if ((uVar43 & 0x38) == 0) {
/* wm:proprietary - see LICENSE - do not sell */
                  puVar28 = (ulong *)((long)puVar28 + uVar42);
                  puVar29 = (ulong *)((long)puVar29 + uVar42);
                  goto LAB_002ad844;
                }
              }
              uVar37 = uVar43 & 0xfffffffffffffff8;
              lVar45 = uVar42 - uVar37;
              puVar22 = (undefined8 *)((long)puVar28 + uVar42);
              puVar40 = (undefined8 *)((long)puVar29 + uVar42);
              do {
                *puVar22 = *puVar40;
                lVar45 = lVar45 + 8;
                puVar22 = puVar22 + 1;
                puVar40 = puVar40 + 1;
              } while (lVar45 != 0);
              puVar28 = (ulong *)((long)puVar28 + uVar37);
              puVar29 = (ulong *)((long)puVar29 + uVar37);
              if (uVar43 == uVar37) goto LAB_002ad858;
            }
LAB_002ad844:
            puVar29 = (ulong *)((long)puVar29 + -1);
            do {
              puVar29 = (ulong *)((long)puVar29 + 1);
              *(undefined1 *)puVar28 = *(undefined1 *)puVar29;
              puVar28 = (ulong *)((long)puVar28 + 1);
            } while (puVar29 != puVar34);
          }
LAB_002ad858:
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          param_2[3] = param_2[3] + uVar36;
          piVar38 = (int *)param_2[1];
          if (0xffff < uVar36) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
          }
        }
        else {
          uVar43 = *param_4;
          puVar28[1] = param_4[1];
          *puVar28 = uVar43;
          if (0x10 < uVar36) {
            lVar45 = param_2[3];
            uVar43 = param_4[2];
            *(ulong *)(lVar45 + 0x18) = param_4[3];
            *(ulong *)(lVar45 + 0x10) = uVar43;
            if (0x10 < uVar36 - 0x10) {
              puVar34 = (ulong *)(lVar45 + 0x20);
              puVar28 = param_4 + 6;
              do {
                uVar43 = puVar28[-2];
/* WM - do not claim this as your own */
                puVar34[1] = puVar28[-1];
                *puVar34 = uVar43;
                uVar43 = *puVar28;
                puVar34[3] = puVar28[1];
                puVar34[2] = uVar43;
                puVar34 = puVar34 + 4;
                puVar28 = puVar28 + 4;
              } while (puVar34 < (ulong *)(lVar45 + uVar36));
              goto LAB_002ad858;
            }
          }
          param_2[3] = param_2[3] + uVar36;
          piVar38 = (int *)param_2[1];
        }
        lVar45 = lVar21 + 4;
        *(short *)(piVar38 + 1) = (short)uVar36;
        *piVar38 = 1;
        uVar36 = lVar21 + 1;
        iVar54 = iVar49;
        if (uVar36 >> 0x10 != 0) goto LAB_002ad894;
        goto LAB_002ad680;
      }
      puVar53 = puVar34;
      if ((uVar4 <= uVar18) && (puVar28 = (ulong *)(lVar56 + uVar36), *puVar28 == uVar43)) {
        puVar29 = puVar34 + 1;
        puVar30 = puVar28 + 1;
        if (puVar29 < puVar26) {
          if (*puVar30 == *puVar29) {
            lVar21 = 0;
            puVar39 = puVar34 + 2;
            puVar30 = (ulong *)(lVar56 + 0x10 + uVar36);
            do {
              if (puVar26 <= puVar39) goto LAB_002acf30;
              uVar37 = *puVar30;
              uVar43 = *puVar39;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
              lVar21 = lVar21 + 8;
              puVar39 = puVar39 + 1;
              puVar30 = puVar30 + 1;
            } while (uVar37 == uVar43);
            uVar43 = uVar43 ^ uVar37;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = lVar21 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
          }
          else {
            uVar43 = *puVar29 ^ *puVar30;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
          }
          lVar45 = uVar43 + 8;
        }
        else {
          puVar39 = puVar29;
LAB_002acf30:
          if (puVar39 < puVar31) {
            if ((int)*puVar30 == (int)*puVar39) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
              puVar39 = (ulong *)((long)puVar39 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
          }
          if (puVar39 < puVar27) {
            if ((short)*puVar30 == (short)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
          }
          if (puVar39 < puVar1) {
            if ((char)*puVar30 == (char)*puVar39) {
              puVar39 = (ulong *)((long)puVar39 + 1);
            }
          }
          lVar45 = (long)puVar39 + (8 - (long)puVar29);
        }
        iVar54 = iVar54 - (int)puVar28;
        if ((param_4 < puVar34) && (uVar4 < uVar18)) {
/* wm:if you paid for this, you were scammed */
          piVar38 = (int *)(lVar56 + -1 + uVar36);
          puVar53 = (ulong *)((long)puVar34 + -1);
          do {
            if ((char)*puVar53 != (char)*piVar38) goto LAB_002ad4a0;
            lVar45 = lVar45 + 1;
            puVar34 = (ulong *)((long)puVar53 + -1);
            if (puVar53 <= param_4) break;
            bVar20 = piVar3 < piVar38;
            piVar38 = (int *)((long)piVar38 + -1);
            puVar53 = puVar34;
          } while (bVar20);
          goto LAB_002ad434;
        }
        goto LAB_002ad4a4;
      }
      bVar20 = (((uint)uVar37 ^ uVar13) & 0xff) == 0;
      uVar13 = uVar13 >> 8;
      if (((bVar20 && uVar9 <= uVar13) && (!bVar20 || uVar13 != uVar9)) &&
         (puVar53 = (ulong *)(uVar6 + uVar13), *puVar53 == uVar43)) {
/* found on a paste site? it was re-uploaded illegally */
        lVar45 = func_0x002ad924(puVar34 + 1,puVar53 + 1,puVar1,puVar5,piVar3);
        lVar45 = lVar45 + 8;
        iVar54 = (iVar8 - uVar15) - uVar13;
        if (param_4 < puVar34) {
          piVar38 = (int *)((uVar6 - 1) + (ulong)uVar13);
          puVar53 = (ulong *)((long)puVar34 + -1);
          do {
            if ((char)*puVar53 != (char)*piVar38) goto LAB_002ad4a0;
            lVar45 = lVar45 + 1;
            puVar34 = (ulong *)((long)puVar53 + -1);
            if (puVar53 <= param_4) break;
            bVar20 = piVar2 < piVar38;
            piVar38 = (int *)((long)piVar38 + -1);
            puVar53 = puVar34;
          } while (bVar20);
          goto LAB_002ad434;
        }
LAB_002ad140:
        puVar53 = puVar34;
        goto LAB_002ad4a4;
      }
      if (uVar4 < uVar51) {
        piVar38 = (int *)(lVar56 + (ulong)uVar51);
        if (*piVar38 == (int)*puVar34) goto LAB_002acca0;
      }
      else {
        uVar51 = uVar14 >> 8;
        if ((((uVar16 ^ uVar14) & 0xff) == 0 && uVar9 < uVar51) &&
           (piVar38 = (int *)(uVar6 + uVar51), *piVar38 == (int)*puVar34)) {
          uVar51 = uVar51 + uVar15;
LAB_002acca0:
          puVar53 = (ulong *)((long)puVar34 + 1);
          uVar36 = *puVar53;
          uVar42 = uVar36 * -0x30e44323485a9b9d >> (uVar35 & 0x3f);
          uVar37 = uVar36 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar10) & 0x3f);
          uVar13 = *(uint *)(lVar32 + uVar42 * 4);
          uVar43 = (ulong)uVar13;
          uVar14 = *(uint *)(uVar47 + (uVar37 >> 8) * 4);
/* wm:unlicensed copy if this notice is missing */
          *(int *)(lVar32 + uVar42 * 4) = iVar7;
          if ((uVar13 < uVar4) || (puVar28 = (ulong *)(lVar56 + uVar43), *puVar28 != uVar36)) {
            uVar13 = uVar14 >> 8;
            if (((((uint)uVar37 ^ uVar14) & 0xff) == 0 && uVar9 < uVar13) &&
               (puVar28 = (ulong *)(uVar6 + uVar13), *puVar28 == uVar36)) {
              lVar45 = func_0x002ad924((long)puVar34 + 9,puVar28 + 1,puVar1,puVar5,piVar3);
              lVar45 = lVar45 + 8;
              iVar54 = (iVar7 - uVar15) - uVar13;
              if (param_4 < puVar53) {
                piVar38 = (int *)((uVar6 - 1) + (ulong)uVar13);
                do {
                  if ((char)*puVar34 != (char)*piVar38) goto LAB_002ad614;
                  lVar45 = lVar45 + 1;
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  if (puVar34 <= param_4) break;
                  bVar20 = piVar2 < piVar38;
                  piVar38 = (int *)((long)piVar38 + -1);
                  puVar34 = puVar53;
                } while (bVar20);
                goto LAB_002ad4a0;
              }
            }
            else {
              puVar53 = (ulong *)((long)puVar34 + 4);
              puVar28 = (ulong *)(piVar38 + 1);
/* chat: discord.gg/sdkhDjTex */
              if (uVar51 < uVar4) {
                lVar45 = func_0x002ad924(puVar53,puVar28,puVar1,puVar5,piVar3);
                lVar45 = lVar45 + 4;
                iVar54 = iVar8 - uVar51;
                if (puVar34 <= param_4) goto LAB_002ad140;
                puVar53 = puVar34;
                if (piVar2 < piVar38) {
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  do {
                    piVar38 = (int *)((long)piVar38 + -1);
                    if ((char)*puVar53 != *(char *)piVar38) goto LAB_002ad4a0;
                    lVar45 = lVar45 + 1;
                    puVar34 = (ulong *)((long)puVar53 + -1);
                  } while ((param_4 < puVar53) && (puVar53 = puVar34, piVar2 < piVar38));
                  goto LAB_002ad434;
                }
              }
              else {
                if (puVar53 < puVar26) {
                  if (*puVar28 == *puVar53) {
                    lVar21 = 0;
                    puVar28 = (ulong *)(piVar38 + 3);
                    puVar29 = (ulong *)((long)puVar34 + 0xc);
                    do {
                      if (puVar26 <= puVar29) goto LAB_002ad188;
                      uVar43 = *puVar28;
                      uVar36 = *puVar29;
                      lVar21 = lVar21 + 8;
                      puVar28 = puVar28 + 1;
                      puVar29 = puVar29 + 1;
                    } while (uVar43 == uVar36);
                    uVar36 = uVar36 ^ uVar43;
                    uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1
/* wm:do not claim this as your own */
                    ;
                    uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2
                    ;
                    uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
                    uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar36 & 0xffff0000ffff) << 0x10;
                    uVar36 = lVar21 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
                  }
                  else {
                    uVar36 = *puVar53 ^ *puVar28;
                    uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1
                    ;
                    uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2
                    ;
                    uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
                    uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 |
/* keep the notice, keep the source honest */
                             (uVar36 & 0xffff0000ffff) << 0x10;
                    uVar36 = (ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3;
                  }
                  lVar45 = uVar36 + 4;
                }
                else {
                  puVar29 = puVar53;
LAB_002ad188:
                  if (puVar29 < puVar31) {
                    if ((int)*puVar28 == (int)*puVar29) {
                      puVar28 = (ulong *)((long)puVar28 + 4);
                      puVar29 = (ulong *)((long)puVar29 + 4);
                    }
                  }
                  if (puVar29 < puVar27) {
                    if ((short)*puVar28 == (short)*puVar29) {
                      puVar28 = (ulong *)((long)puVar28 + 2);
                      puVar29 = (ulong *)((long)puVar29 + 2);
                    }
                  }
                  if (puVar29 < puVar1) {
                    if ((char)*puVar28 == (char)*puVar29) {
                      puVar29 = (ulong *)((long)puVar29 + 1);
                    }
/* unlicensed copy if this notice is missing - github.com/pengussy */
                  }
                  lVar45 = (long)puVar29 + (4 - (long)puVar53);
                }
                iVar54 = iVar54 - (int)piVar38;
                puVar53 = puVar34;
                if ((param_4 < puVar34) && (piVar3 < piVar38)) {
                  puVar53 = (ulong *)((long)puVar34 + -1);
                  do {
                    piVar38 = (int *)((long)piVar38 + -1);
                    if ((char)*puVar53 != *(char *)piVar38) goto LAB_002ad4a0;
                    lVar45 = lVar45 + 1;
                    puVar34 = (ulong *)((long)puVar53 + -1);
                  } while ((param_4 < puVar53) && (puVar53 = puVar34, piVar3 < piVar38));
LAB_002ad434:
                  puVar53 = (ulong *)((long)puVar34 + 1);
                }
              }
            }
          }
          else {
            puVar29 = (ulong *)((long)puVar34 + 9);
            puVar30 = puVar28 + 1;
            if (puVar29 < puVar26) {
/* WM - found on a paste site? it was re-uploaded illegally */
              if (*puVar30 == *puVar29) {
                lVar21 = 0;
                puVar39 = (ulong *)((long)puVar34 + 0x11);
                puVar30 = (ulong *)(lVar56 + 0x10 + uVar43);
                do {
                  if (puVar26 <= puVar39) goto LAB_002ad2c4;
                  uVar37 = *puVar30;
                  uVar36 = *puVar39;
                  lVar21 = lVar21 + 8;
                  puVar39 = puVar39 + 1;
                  puVar30 = puVar30 + 1;
                } while (uVar37 == uVar36);
                uVar36 = uVar36 ^ uVar37;
                uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
                uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
                uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
                uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
                uVar36 = lVar21 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
              }
              else {
                uVar36 = *puVar29 ^ *puVar30;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
                uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
                uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
                uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
                uVar36 = (ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3;
              }
              lVar45 = uVar36 + 8;
            }
            else {
              puVar39 = puVar29;
LAB_002ad2c4:
              if (puVar39 < puVar31) {
                if ((int)*puVar30 == (int)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
                  puVar30 = (ulong *)((long)puVar30 + 4);
                }
              }
              if (puVar39 < puVar27) {
                if ((short)*puVar30 == (short)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar30 = (ulong *)((long)puVar30 + 2);
/* reversing this took months of machine time */
                }
              }
              if (puVar39 < puVar1) {
                if ((char)*puVar30 == (char)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 1);
                }
              }
              lVar45 = (long)puVar39 + (8 - (long)puVar29);
            }
            iVar54 = (int)puVar53 - (int)puVar28;
            if ((param_4 < puVar53) && (uVar4 < uVar13)) {
              piVar38 = (int *)(lVar56 + -1 + uVar43);
              do {
                if ((char)*puVar34 != (char)*piVar38) goto LAB_002ad614;
                lVar45 = lVar45 + 1;
                puVar53 = (ulong *)((long)puVar34 + -1);
                if (puVar34 <= param_4) break;
                bVar20 = piVar3 < piVar38;
                piVar38 = (int *)((long)piVar38 + -1);
                puVar34 = puVar53;
/* WM - reversing this took months of machine time */
              } while (bVar20);
LAB_002ad4a0:
              puVar53 = (ulong *)((long)puVar53 + 1);
            }
            else {
            }
          }
          goto LAB_002ad4a4;
        }
      }
      lVar21 = (long)puVar34 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar34 + lVar21 + 0x101,0,0,0);
      puVar34 = (ulong *)((long)puVar34 + lVar21 + 1);
      goto LAB_002acac4;
    }
  }
LAB_002ad8e4:
  *param_3 = iVar49;
  param_3[1] = iVar52;
  return (long)puVar1 - (long)param_4;
LAB_002ac724:
  puVar53 = (ulong *)((long)puVar34 + 1);
LAB_002ac5b4:
  uVar43 = (long)puVar53 - (long)param_4;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  puVar34 = (ulong *)param_2[3];
  if (puVar53 <= puVar24) {
    uVar37 = *param_4;
    puVar34[1] = param_4[1];
    *puVar34 = uVar37;
    if (0x10 < uVar43) {
      lVar21 = param_2[3];
      uVar37 = param_4[2];
      *(ulong *)(lVar21 + 0x18) = param_4[3];
      *(ulong *)(lVar21 + 0x10) = uVar37;
      if (0x10 < uVar43 - 0x10) {
        puVar34 = (ulong *)(lVar21 + 0x20);
        puVar28 = param_4 + 6;
        do {
          uVar37 = puVar28[-2];
          puVar34[1] = puVar28[-1];
          *puVar34 = uVar37;
          uVar37 = *puVar28;
          puVar34[3] = puVar28[1];
          puVar34[2] = uVar37;
          puVar34 = puVar34 + 4;
          puVar28 = puVar28 + 4;
        } while (puVar34 < (ulong *)(lVar21 + uVar43));
        goto LAB_002ac758;
      }
    }
    param_2[3] = param_2[3] + uVar43;
    piVar38 = (int *)param_2[1];
    goto LAB_002ac770;
  }
  puVar28 = puVar34;
  if (param_4 <= puVar24) {
    puVar28 = (ulong *)((long)puVar34 + ((long)puVar24 - (long)param_4));
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    uVar37 = *param_4;
    puVar29 = puVar34 + 2;
    puVar34[1] = param_4[1];
    *puVar34 = uVar37;
    if (0x10 < (ulong)((long)puVar24 - (long)param_4)) {
      do {
        uVar37 = param_4[2];
        puVar29[1] = param_4[3];
        *puVar29 = uVar37;
        uVar37 = param_4[4];
        puVar29[3] = param_4[5];
        puVar29[2] = uVar37;
        puVar29 = puVar29 + 4;
        param_4 = param_4 + 4;
      } while (puVar29 < puVar28);
    }
    param_4 = puVar24;
  }
  if (param_4 < puVar53) {
    uVar37 = (long)puVar53 - (long)param_4;
    if ((7 < uVar37) && (0x3f < (ulong)((long)puVar28 - (long)param_4))) {
      if (uVar37 < 0x40) {
        uVar44 = 0;
      }
      else {
        uVar44 = uVar37 & 0xffffffffffffffc0;
        puVar34 = puVar28 + 4;
        puVar29 = param_4 + 4;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar42 = uVar44;
        do {
          uVar46 = puVar29[-4];
          uVar57 = puVar29[-1];
          uVar48 = puVar29[-2];
          uVar59 = puVar29[1];
          uVar58 = *puVar29;
          uVar61 = puVar29[3];
          uVar60 = puVar29[2];
          puVar34[-3] = puVar29[-3];
          puVar34[-4] = uVar46;
          puVar34[-1] = uVar57;
          puVar34[-2] = uVar48;
          puVar34[1] = uVar59;
          *puVar34 = uVar58;
          puVar34[3] = uVar61;
          puVar34[2] = uVar60;
          uVar42 = uVar42 - 0x40;
          puVar34 = puVar34 + 8;
          puVar29 = puVar29 + 8;
        } while (uVar42 != 0);
        if (uVar37 == uVar44) goto LAB_002ac758;
        if ((uVar37 & 0x38) == 0) {
          puVar28 = (ulong *)((long)puVar28 + uVar44);
          param_4 = (ulong *)((long)param_4 + uVar44);
          goto LAB_002ac748;
        }
      }
      uVar42 = uVar37 & 0xfffffffffffffff8;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      lVar21 = uVar44 - uVar42;
      puVar22 = (undefined8 *)((long)param_4 + uVar44);
      puVar40 = (undefined8 *)((long)puVar28 + uVar44);
      do {
        *puVar40 = *puVar22;
        lVar21 = lVar21 + 8;
        puVar22 = puVar22 + 1;
        puVar40 = puVar40 + 1;
      } while (lVar21 != 0);
      puVar28 = (ulong *)((long)puVar28 + uVar42);
      param_4 = (ulong *)((long)param_4 + uVar42);
      if (uVar37 == uVar42) goto LAB_002ac758;
    }
LAB_002ac748:
    do {
      puVar34 = (ulong *)((long)param_4 + 1);
      *(char *)puVar28 = (char)*param_4;
      puVar28 = (ulong *)((long)puVar28 + 1);
// proprietary - see LICENSE - do not sell
      param_4 = puVar34;
    } while (puVar34 != puVar53);
  }
LAB_002ac758:
  param_2[3] = param_2[3] + uVar43;
  piVar38 = (int *)param_2[1];
  if (0xffff < uVar43) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_002ac770:
  *(short *)(piVar38 + 1) = (short)uVar43;
  *piVar38 = iVar54 + 3;
  uVar43 = lVar45 - 3;
  iVar52 = iVar49;
  if (0xffff < uVar43) {
LAB_002ac9a0:
    *(undefined4 *)(param_2 + 9) = 2;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_002ac790:
  *(short *)((long)piVar38 + 6) = (short)uVar43;
  piVar38 = piVar38 + 2;
  param_2[1] = (long)piVar38;
  param_4 = (ulong *)((long)puVar53 + lVar45);
  if (puVar33 < param_4) {
LAB_002abbcc:
    iVar49 = iVar54;
    puVar34 = param_4;
  }
  else {
    uVar50 = iVar8 + 2;
    lVar21 = *(long *)(lVar56 + (ulong)uVar50);
    *(uint *)(lVar32 + ((ulong)(lVar21 * -0x30e44323485a9b9d) >> (uVar36 & 0x3f)) * 4) = uVar50;
    *(int *)(lVar32 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar36 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar55;
    *(uint *)(lVar25 + ((ulong)(lVar21 * -0x30e4432345000000) >> (uVar35 & 0x3f)) * 4) = uVar50;
    *(int *)(lVar25 + ((ulong)(*(long *)((long)param_4 - 1U) * -0x30e4432345000000) >>
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 1U) - iVar55;
    iVar7 = iVar52;
    do {
      iVar52 = iVar54;
      iVar49 = iVar7;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      iVar7 = (int)param_4 - iVar55;
      uVar50 = iVar7 - iVar49;
      lVar21 = uVar6 - uVar15;
      if (uVar4 <= uVar50) {
        lVar21 = lVar56;
      }
      if ((0xfffffffc < uVar50 - uVar4) || (*(int *)(lVar21 + (ulong)uVar50) != (int)*param_4)) {
        iVar54 = iVar52;
        iVar52 = iVar49;
        goto LAB_002abbcc;
      }
      puVar34 = puVar5;
      if (uVar4 <= uVar50) {
        puVar34 = puVar1;
      }
      lVar21 = func_0x002ad924((int *)((long)param_4 + 4),(int *)(lVar21 + (ulong)uVar50) + 1,puVar1
                               ,puVar34,piVar3);
      if (param_4 <= puVar24) {
        puVar34 = (ulong *)param_2[3];
        uVar43 = *param_4;
        puVar34[1] = param_4[1];
        *puVar34 = uVar43;
        piVar38 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar38 + 1) = 0;
      *piVar38 = 1;
      if (0xffff < lVar21 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
      }
      *(short *)((long)piVar38 + 6) = (short)(lVar21 + 1U);
      uVar43 = *param_4;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      *(int *)(lVar25 + (uVar43 * -0x30e4432345000000 >> (uVar35 & 0x3f)) * 4) = iVar7;
      piVar38 = piVar38 + 2;
      *(int *)(lVar32 + (uVar43 * -0x30e44323485a9b9d >> (uVar36 & 0x3f)) * 4) = iVar7;
      param_4 = (ulong *)((long)param_4 + lVar21 + 4);
      param_2[1] = (long)piVar38;
      puVar34 = param_4;
      iVar7 = iVar52;
      iVar54 = iVar49;
    } while (param_4 <= puVar33);
  }
LAB_002abbd0:
  if (puVar33 <= puVar34) goto LAB_002ad8e4;
  goto LAB_002abbe4;
LAB_002ab83c:
  puVar53 = (ulong *)((long)puVar34 + 1);
LAB_002ab6cc:
  uVar43 = (long)puVar53 - (long)param_4;
  puVar34 = (ulong *)param_2[3];
  if (puVar53 <= puVar24) {
    uVar37 = *param_4;
    puVar34[1] = param_4[1];
    *puVar34 = uVar37;
    if (0x10 < uVar43) {
      lVar21 = param_2[3];
      uVar37 = param_4[2];
      *(ulong *)(lVar21 + 0x18) = param_4[3];
      *(ulong *)(lVar21 + 0x10) = uVar37;
      if (0x10 < uVar43 - 0x10) {
        puVar34 = (ulong *)(lVar21 + 0x20);
        puVar28 = param_4 + 6;
        do {
          uVar37 = puVar28[-2];
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
          puVar34[1] = puVar28[-1];
          *puVar34 = uVar37;
          uVar37 = *puVar28;
          puVar34[3] = puVar28[1];
          puVar34[2] = uVar37;
          puVar34 = puVar34 + 4;
          puVar28 = puVar28 + 4;
        } while (puVar34 < (ulong *)(lVar21 + uVar43));
        goto LAB_002ab870;
      }
    }
    param_2[3] = param_2[3] + uVar43;
    piVar38 = (int *)param_2[1];
    goto LAB_002ab888;
  }
  puVar28 = puVar34;
  if (param_4 <= puVar24) {
    puVar28 = (ulong *)((long)puVar34 + ((long)puVar24 - (long)param_4));
    uVar37 = *param_4;
    puVar29 = puVar34 + 2;
    puVar34[1] = param_4[1];
    *puVar34 = uVar37;
/* wm:watermarked copy - do not remove */
    if (0x10 < (ulong)((long)puVar24 - (long)param_4)) {
      do {
        uVar37 = param_4[2];
        puVar29[1] = param_4[3];
        *puVar29 = uVar37;
        uVar37 = param_4[4];
        puVar29[3] = param_4[5];
        puVar29[2] = uVar37;
        puVar29 = puVar29 + 4;
        param_4 = param_4 + 4;
      } while (puVar29 < puVar28);
    }
    param_4 = puVar24;
  }
  if (param_4 < puVar53) {
    uVar37 = (long)puVar53 - (long)param_4;
    if ((7 < uVar37) && (0x3f < (ulong)((long)puVar28 - (long)param_4))) {
      if (uVar37 < 0x40) {
        uVar44 = 0;
      }
      else {
        uVar44 = uVar37 & 0xffffffffffffffc0;
        puVar34 = puVar28 + 4;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
        puVar29 = param_4 + 4;
        uVar42 = uVar44;
        do {
          uVar46 = puVar29[-4];
          uVar57 = puVar29[-1];
          uVar48 = puVar29[-2];
          uVar59 = puVar29[1];
          uVar58 = *puVar29;
          uVar61 = puVar29[3];
          uVar60 = puVar29[2];
          puVar34[-3] = puVar29[-3];
          puVar34[-4] = uVar46;
          puVar34[-1] = uVar57;
          puVar34[-2] = uVar48;
          puVar34[1] = uVar59;
          *puVar34 = uVar58;
          puVar34[3] = uVar61;
          puVar34[2] = uVar60;
          uVar42 = uVar42 - 0x40;
          puVar34 = puVar34 + 8;
          puVar29 = puVar29 + 8;
        } while (uVar42 != 0);
        if (uVar37 == uVar44) goto LAB_002ab870;
        if ((uVar37 & 0x38) == 0) {
          puVar28 = (ulong *)((long)puVar28 + uVar44);
          param_4 = (ulong *)((long)param_4 + uVar44);
          goto LAB_002ab860;
        }
      }
      uVar42 = uVar37 & 0xfffffffffffffff8;
      lVar21 = uVar44 - uVar42;
      puVar22 = (undefined8 *)((long)param_4 + uVar44);
      puVar40 = (undefined8 *)((long)puVar28 + uVar44);
      do {
        *puVar40 = *puVar22;
// found on a paste site? it was re-uploaded illegally
        lVar21 = lVar21 + 8;
        puVar22 = puVar22 + 1;
        puVar40 = puVar40 + 1;
      } while (lVar21 != 0);
      puVar28 = (ulong *)((long)puVar28 + uVar42);
      param_4 = (ulong *)((long)param_4 + uVar42);
      if (uVar37 == uVar42) goto LAB_002ab870;
    }
LAB_002ab860:
    do {
      puVar34 = (ulong *)((long)param_4 + 1);
      *(char *)puVar28 = (char)*param_4;
      puVar28 = (ulong *)((long)puVar28 + 1);
      param_4 = puVar34;
    } while (puVar34 != puVar53);
  }
LAB_002ab870:
  param_2[3] = param_2[3] + uVar43;
  piVar38 = (int *)param_2[1];
  if (0xffff < uVar43) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_002ab888:
  *(short *)(piVar38 + 1) = (short)uVar43;
  *piVar38 = iVar54 + 3;
  uVar43 = lVar45 - 3;
  iVar52 = iVar49;
  if (0xffff < uVar43) {
LAB_002abab8:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_002ab8a8:
// WM - stripping the watermark breaks the license
  *(short *)((long)piVar38 + 6) = (short)uVar43;
  piVar38 = piVar38 + 2;
  param_2[1] = (long)piVar38;
  param_4 = (ulong *)((long)puVar53 + lVar45);
  if (puVar33 < param_4) {
LAB_002aace4:
    iVar49 = iVar54;
    puVar34 = param_4;
  }
  else {
    uVar50 = iVar8 + 2;
    lVar21 = *(long *)(lVar56 + (ulong)uVar50);
    *(uint *)(lVar32 + ((ulong)(lVar21 * -0x30e44323485a9b9d) >> (uVar36 & 0x3f)) * 4) = uVar50;
    *(int *)(lVar32 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar36 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar55;
    *(uint *)(lVar25 + ((ulong)(lVar21 * -0x30e4432340650000) >> (uVar35 & 0x3f)) * 4) = uVar50;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    *(int *)(lVar25 + ((ulong)(*(long *)((long)param_4 - 1U) * -0x30e4432340650000) >>
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 1U) - iVar55;
    iVar7 = iVar52;
    do {
      iVar52 = iVar54;
      iVar49 = iVar7;
      iVar7 = (int)param_4 - iVar55;
      uVar50 = iVar7 - iVar49;
      lVar21 = uVar6 - uVar15;
      if (uVar4 <= uVar50) {
        lVar21 = lVar56;
      }
      if ((0xfffffffc < uVar50 - uVar4) || (*(int *)(lVar21 + (ulong)uVar50) != (int)*param_4)) {
        iVar54 = iVar52;
        iVar52 = iVar49;
        goto LAB_002aace4;
      }
      puVar34 = puVar5;
      if (uVar4 <= uVar50) {
// more drops soon - github.com/pengussy
        puVar34 = puVar1;
      }
      lVar21 = func_0x002ad924((int *)((long)param_4 + 4),(int *)(lVar21 + (ulong)uVar50) + 1,puVar1
                               ,puVar34,piVar3);
      if (param_4 <= puVar24) {
        puVar34 = (ulong *)param_2[3];
        uVar43 = *param_4;
        puVar34[1] = param_4[1];
        *puVar34 = uVar43;
        piVar38 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar38 + 1) = 0;
      *piVar38 = 1;
      if (0xffff < lVar21 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
      }
      *(short *)((long)piVar38 + 6) = (short)(lVar21 + 1U);
      uVar43 = *param_4;
      *(int *)(lVar25 + (uVar43 * -0x30e4432340650000 >> (uVar35 & 0x3f)) * 4) = iVar7;
      piVar38 = piVar38 + 2;
/* wm:no support for modified copies */
      *(int *)(lVar32 + (uVar43 * -0x30e44323485a9b9d >> (uVar36 & 0x3f)) * 4) = iVar7;
      param_4 = (ulong *)((long)param_4 + lVar21 + 4);
      param_2[1] = (long)piVar38;
      puVar34 = param_4;
      iVar7 = iVar52;
      iVar54 = iVar49;
    } while (param_4 <= puVar33);
  }
LAB_002aace8:
  if (puVar33 <= puVar34) goto LAB_002ad8e4;
  goto LAB_002aacfc;
LAB_002aa94c:
  puVar53 = (ulong *)((long)puVar34 + 1);
LAB_002aa7dc:
  uVar43 = (long)puVar53 - (long)param_4;
  puVar34 = (ulong *)param_2[3];
  if (puVar53 <= puVar24) {
    uVar37 = *param_4;
    puVar34[1] = param_4[1];
    *puVar34 = uVar37;
    if (0x10 < uVar43) {
      lVar21 = param_2[3];
      uVar37 = param_4[2];
      *(ulong *)(lVar21 + 0x18) = param_4[3];
      *(ulong *)(lVar21 + 0x10) = uVar37;
      if (0x10 < uVar43 - 0x10) {
        puVar34 = (ulong *)(lVar21 + 0x20);
        puVar28 = param_4 + 6;
        do {
          uVar37 = puVar28[-2];
          puVar34[1] = puVar28[-1];
          *puVar34 = uVar37;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          uVar37 = *puVar28;
          puVar34[3] = puVar28[1];
          puVar34[2] = uVar37;
          puVar34 = puVar34 + 4;
          puVar28 = puVar28 + 4;
        } while (puVar34 < (ulong *)(lVar21 + uVar43));
        goto LAB_002aa980;
      }
    }
    param_2[3] = param_2[3] + uVar43;
    piVar38 = (int *)param_2[1];
    goto LAB_002aa998;
  }
  puVar28 = puVar34;
  if (param_4 <= puVar24) {
    puVar28 = (ulong *)((long)puVar34 + ((long)puVar24 - (long)param_4));
    uVar37 = *param_4;
    puVar29 = puVar34 + 2;
    puVar34[1] = param_4[1];
    *puVar34 = uVar37;
    if (0x10 < (ulong)((long)puVar24 - (long)param_4)) {
      do {
        uVar37 = param_4[2];
        puVar29[1] = param_4[3];
        *puVar29 = uVar37;
        uVar37 = param_4[4];
        puVar29[3] = param_4[5];
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        puVar29[2] = uVar37;
        puVar29 = puVar29 + 4;
        param_4 = param_4 + 4;
      } while (puVar29 < puVar28);
    }
    param_4 = puVar24;
  }
  if (param_4 < puVar53) {
    uVar37 = (long)puVar53 - (long)param_4;
    if ((7 < uVar37) && (0x3f < (ulong)((long)puVar28 - (long)param_4))) {
      if (uVar37 < 0x40) {
        uVar44 = 0;
      }
      else {
        uVar44 = uVar37 & 0xffffffffffffffc0;
        puVar34 = puVar28 + 4;
        puVar29 = param_4 + 4;
        uVar42 = uVar44;
        do {
          uVar46 = puVar29[-4];
          uVar57 = puVar29[-1];
          uVar48 = puVar29[-2];
          uVar59 = puVar29[1];
          uVar58 = *puVar29;
          uVar61 = puVar29[3];
          uVar60 = puVar29[2];
          puVar34[-3] = puVar29[-3];
          puVar34[-4] = uVar46;
          puVar34[-1] = uVar57;
          puVar34[-2] = uVar48;
          puVar34[1] = uVar59;
          *puVar34 = uVar58;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          puVar34[3] = uVar61;
          puVar34[2] = uVar60;
          uVar42 = uVar42 - 0x40;
          puVar34 = puVar34 + 8;
          puVar29 = puVar29 + 8;
        } while (uVar42 != 0);
        if (uVar37 == uVar44) goto LAB_002aa980;
        if ((uVar37 & 0x38) == 0) {
          puVar28 = (ulong *)((long)puVar28 + uVar44);
          param_4 = (ulong *)((long)param_4 + uVar44);
          goto LAB_002aa970;
        }
      }
      uVar42 = uVar37 & 0xfffffffffffffff8;
      lVar21 = uVar44 - uVar42;
      puVar22 = (undefined8 *)((long)param_4 + uVar44);
      puVar40 = (undefined8 *)((long)puVar28 + uVar44);
      do {
        *puVar40 = *puVar22;
        lVar21 = lVar21 + 8;
        puVar22 = puVar22 + 1;
        puVar40 = puVar40 + 1;
      } while (lVar21 != 0);
      puVar28 = (ulong *)((long)puVar28 + uVar42);
      param_4 = (ulong *)((long)param_4 + uVar42);
      if (uVar37 == uVar42) goto LAB_002aa980;
    }
LAB_002aa970:
/* WM - no support for modified copies */
    do {
      puVar34 = (ulong *)((long)param_4 + 1);
      *(char *)puVar28 = (char)*param_4;
      puVar28 = (ulong *)((long)puVar28 + 1);
      param_4 = puVar34;
    } while (puVar34 != puVar53);
  }
LAB_002aa980:
  param_2[3] = param_2[3] + uVar43;
  piVar38 = (int *)param_2[1];
  if (0xffff < uVar43) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_002aa998:
  *(short *)(piVar38 + 1) = (short)uVar43;
  *piVar38 = iVar54 + 3;
  uVar43 = lVar45 - 3;
  iVar52 = iVar49;
  if (0xffff < uVar43) {
// WM - do not claim this as your own
LAB_002aabd0:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_002aa9b8:
  *(short *)((long)piVar38 + 6) = (short)uVar43;
  piVar38 = piVar38 + 2;
  param_2[1] = (long)piVar38;
  param_4 = (ulong *)((long)puVar53 + lVar45);
  iVar7 = iVar52;
  iVar49 = iVar54;
  if (puVar33 < param_4) {
LAB_002a9df0:
    iVar52 = iVar7;
    puVar34 = param_4;
  }
  else {
    uVar50 = iVar8 + 2;
    lVar21 = *(long *)(lVar56 + (ulong)uVar50);
    *(uint *)(lVar32 + ((ulong)(lVar21 * -0x30e44323485a9b9d) >> (uVar36 & 0x3f)) * 4) = uVar50;
    *(int *)(lVar32 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar36 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar55;
    *(uint *)(lVar25 + ((ulong)(lVar21 * -0x30e44323405a9d00) >> (uVar35 & 0x3f)) * 4) = uVar50;
    *(int *)(lVar25 + ((ulong)(*(long *)((long)param_4 - 1U) * -0x30e44323405a9d00) >>
/* do not claim this as your own */
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 1U) - iVar55;
    do {
      iVar49 = iVar52;
      iVar52 = iVar54;
      iVar7 = (int)param_4 - iVar55;
      uVar50 = iVar7 - iVar49;
      lVar21 = uVar6 - uVar15;
      if (uVar4 <= uVar50) {
        lVar21 = lVar56;
      }
      if ((0xfffffffc < uVar50 - uVar4) || (*(int *)(lVar21 + (ulong)uVar50) != (int)*param_4)) {
        iVar7 = iVar49;
        iVar49 = iVar52;
        goto LAB_002a9df0;
      }
      puVar34 = puVar5;
      if (uVar4 <= uVar50) {
        puVar34 = puVar1;
      }
      lVar21 = func_0x002ad924((int *)((long)param_4 + 4),(int *)(lVar21 + (ulong)uVar50) + 1,puVar1
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
                               ,puVar34,piVar3);
      if (param_4 <= puVar24) {
        puVar34 = (ulong *)param_2[3];
        uVar43 = *param_4;
        puVar34[1] = param_4[1];
        *puVar34 = uVar43;
        piVar38 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar38 + 1) = 0;
      *piVar38 = 1;
      if (0xffff < lVar21 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
      }
      *(short *)((long)piVar38 + 6) = (short)(lVar21 + 1U);
      uVar43 = *param_4;
      *(int *)(lVar25 + (uVar43 * -0x30e44323405a9d00 >> (uVar35 & 0x3f)) * 4) = iVar7;
      piVar38 = piVar38 + 2;
      *(int *)(lVar32 + (uVar43 * -0x30e44323485a9b9d >> (uVar36 & 0x3f)) * 4) = iVar7;
      param_4 = (ulong *)((long)param_4 + lVar21 + 4);
      param_2[1] = (long)piVar38;
      puVar34 = param_4;
      iVar54 = iVar49;
    } while (param_4 <= puVar33);
  }
LAB_002a9df4:
  if (puVar33 <= puVar34) goto LAB_002ad8e4;
  goto LAB_002a9e08;
LAB_002ad614:
  puVar53 = (ulong *)((long)puVar34 + 1);
LAB_002ad4a4:
  uVar36 = (long)puVar53 - (long)param_4;
  puVar34 = (ulong *)param_2[3];
/* proprietary - see LICENSE - do not sell */
  if (puVar53 <= puVar24) {
    uVar43 = *param_4;
    puVar34[1] = param_4[1];
    *puVar34 = uVar43;
    if (0x10 < uVar36) {
      lVar21 = param_2[3];
      uVar43 = param_4[2];
      *(ulong *)(lVar21 + 0x18) = param_4[3];
      *(ulong *)(lVar21 + 0x10) = uVar43;
      if (0x10 < uVar36 - 0x10) {
        puVar34 = (ulong *)(lVar21 + 0x20);
        puVar28 = param_4 + 6;
        do {
          uVar43 = puVar28[-2];
          puVar34[1] = puVar28[-1];
          *puVar34 = uVar43;
          uVar43 = *puVar28;
          puVar34[3] = puVar28[1];
          puVar34[2] = uVar43;
          puVar34 = puVar34 + 4;
          puVar28 = puVar28 + 4;
        } while (puVar34 < (ulong *)(lVar21 + uVar36));
        goto LAB_002ad648;
      }
    }
// WM - donate: donate/README.md
    param_2[3] = param_2[3] + uVar36;
    piVar38 = (int *)param_2[1];
    goto LAB_002ad660;
  }
  puVar28 = puVar34;
  if (param_4 <= puVar24) {
    puVar28 = (ulong *)((long)puVar34 + ((long)puVar24 - (long)param_4));
    uVar43 = *param_4;
    puVar29 = puVar34 + 2;
    puVar34[1] = param_4[1];
    *puVar34 = uVar43;
    if (0x10 < (ulong)((long)puVar24 - (long)param_4)) {
      do {
        uVar43 = param_4[2];
        puVar29[1] = param_4[3];
        *puVar29 = uVar43;
        uVar43 = param_4[4];
        puVar29[3] = param_4[5];
        puVar29[2] = uVar43;
        puVar29 = puVar29 + 4;
        param_4 = param_4 + 4;
      } while (puVar29 < puVar28);
    }
    param_4 = puVar24;
  }
  if (param_4 < puVar53) {
    uVar43 = (long)puVar53 - (long)param_4;
    if ((7 < uVar43) && (0x3f < (ulong)((long)puVar28 - (long)param_4))) {
      if (uVar43 < 0x40) {
        uVar42 = 0;
      }
/* if you paid for this, you were scammed */
      else {
        uVar42 = uVar43 & 0xffffffffffffffc0;
        puVar34 = puVar28 + 4;
        puVar29 = param_4 + 4;
        uVar37 = uVar42;
        do {
          uVar44 = puVar29[-4];
          uVar48 = puVar29[-1];
          uVar46 = puVar29[-2];
          uVar58 = puVar29[1];
          uVar57 = *puVar29;
          uVar60 = puVar29[3];
          uVar59 = puVar29[2];
          puVar34[-3] = puVar29[-3];
          puVar34[-4] = uVar44;
          puVar34[-1] = uVar48;
          puVar34[-2] = uVar46;
          puVar34[1] = uVar58;
          *puVar34 = uVar57;
// WM - thanks for reading - discord.gg/sdkhDjTex
          puVar34[3] = uVar60;
          puVar34[2] = uVar59;
          uVar37 = uVar37 - 0x40;
          puVar34 = puVar34 + 8;
          puVar29 = puVar29 + 8;
        } while (uVar37 != 0);
        if (uVar43 == uVar42) goto LAB_002ad648;
        if ((uVar43 & 0x38) == 0) {
          puVar28 = (ulong *)((long)puVar28 + uVar42);
          param_4 = (ulong *)((long)param_4 + uVar42);
          goto LAB_002ad638;
        }
      }
      uVar37 = uVar43 & 0xfffffffffffffff8;
      lVar21 = uVar42 - uVar37;
      puVar22 = (undefined8 *)((long)param_4 + uVar42);
      puVar40 = (undefined8 *)((long)puVar28 + uVar42);
      do {
        *puVar40 = *puVar22;
        lVar21 = lVar21 + 8;
        puVar22 = puVar22 + 1;
        puVar40 = puVar40 + 1;
/* wm:origin: github.com/pengussy */
      } while (lVar21 != 0);
      puVar28 = (ulong *)((long)puVar28 + uVar37);
      param_4 = (ulong *)((long)param_4 + uVar37);
      if (uVar43 == uVar37) goto LAB_002ad648;
    }
LAB_002ad638:
    do {
      puVar34 = (ulong *)((long)param_4 + 1);
      *(char *)puVar28 = (char)*param_4;
      puVar28 = (ulong *)((long)puVar28 + 1);
      param_4 = puVar34;
    } while (puVar34 != puVar53);
  }
LAB_002ad648:
  param_2[3] = param_2[3] + uVar36;
  piVar38 = (int *)param_2[1];
  if (0xffff < uVar36) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_002ad660:
  *(short *)(piVar38 + 1) = (short)uVar36;
  *piVar38 = iVar54 + 3;
  uVar36 = lVar45 - 3;
  iVar52 = iVar49;
  if (0xffff < uVar36) {
LAB_002ad894:
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_002ad680:
  *(short *)((long)piVar38 + 6) = (short)uVar36;
  piVar38 = piVar38 + 2;
  param_2[1] = (long)piVar38;
  param_4 = (ulong *)((long)puVar53 + lVar45);
  if (puVar33 < param_4) {
LAB_002acac0:
    iVar49 = iVar54;
    puVar34 = param_4;
  }
  else {
    uVar51 = iVar8 + 2;
    *(uint *)(lVar32 + ((ulong)(*(long *)(lVar56 + (ulong)uVar51) * -0x30e44323485a9b9d) >>
                       (uVar35 & 0x3f)) * 4) = uVar51;
    *(int *)(lVar32 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar55;
    *(uint *)(lVar25 + (ulong)((uint)(*(int *)(lVar56 + (ulong)uVar51) * -0x61c8864f) >>
                              (ulong)(uVar50 & 0x1f)) * 4) = uVar51;
    *(int *)(lVar25 + (ulong)((uint)(*(int *)((long)param_4 - 1U) * -0x61c8864f) >>
                             (ulong)(uVar50 & 0x1f)) * 4) =
         (int)(int *)((long)param_4 - 1U) - iVar55;
    iVar7 = iVar52;
    do {
      iVar52 = iVar54;
      iVar49 = iVar7;
      iVar7 = (int)param_4 - iVar55;
      uVar51 = iVar7 - iVar49;
      lVar21 = uVar6 - uVar15;
      if (uVar4 <= uVar51) {
        lVar21 = lVar56;
// do not claim this as your own
      }
      if ((0xfffffffc < uVar51 - uVar4) || (*(int *)(lVar21 + (ulong)uVar51) != (int)*param_4)) {
        iVar54 = iVar52;
        iVar52 = iVar49;
        goto LAB_002acac0;
      }
      puVar34 = puVar5;
      if (uVar4 <= uVar51) {
        puVar34 = puVar1;
      }
      lVar21 = func_0x002ad924((int *)((long)param_4 + 4),(int *)(lVar21 + (ulong)uVar51) + 1,puVar1
                               ,puVar34,piVar3);
      if (param_4 <= puVar24) {
        puVar34 = (ulong *)param_2[3];
        uVar36 = *param_4;
        puVar34[1] = param_4[1];
        *puVar34 = uVar36;
        piVar38 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar38 + 1) = 0;
      *piVar38 = 1;
      if (0xffff < lVar21 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
      }
      *(short *)((long)piVar38 + 6) = (short)(lVar21 + 1U);
      piVar38 = piVar38 + 2;
      *(int *)(lVar25 + (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar50 & 0x1f)) * 4)
// WM - if you paid for this, you were scammed
           = iVar7;
      *(int *)(lVar32 + (*param_4 * -0x30e44323485a9b9d >> (uVar35 & 0x3f)) * 4) = iVar7;
      param_4 = (ulong *)((long)param_4 + lVar21 + 4);
      param_2[1] = (long)piVar38;
      puVar34 = param_4;
      iVar7 = iVar52;
      iVar54 = iVar49;
    } while (param_4 <= puVar33);
  }
LAB_002acac4:
  if (puVar33 <= puVar34) goto LAB_002ad8e4;
  goto LAB_002acad8;
}

