/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2cbe20:2d110bbce0
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_002cbe20(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  uint uVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong uVar30;
  ulong *puVar31;
  undefined8 *puVar32;
// do not claim this as your own
  long lVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong auStack_70 [2];
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar26 = puVar1 + -1;
  lVar9 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar7 = (ulong)uVar6;
  uVar8 = *(uint *)(param_1 + 0x1c);
  uVar24 = *(uint *)(param_1 + 0x110);
  if (uVar24 < 5) {
    uVar24 = 4;
  }
  if (5 < uVar24) {
    uVar24 = 6;
  }
  uVar35 = *param_3;
/* wm:donate: donate/README.md */
  uVar37 = param_3[1];
  *(undefined4 *)(param_1 + 300) = 0;
  puVar2 = (ulong *)(lVar9 + uVar7);
  puVar20 = param_4;
  if (param_4 == puVar2) {
    puVar20 = (ulong *)((long)param_4 + 1);
  }
  if (puVar20 < puVar26) {
    puVar3 = (ulong *)(lVar10 + uVar7);
    uVar11 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
    puVar18 = puVar1 + -4;
    do {
      iVar36 = (int)puVar20 - (int)lVar9;
      iVar17 = iVar36 + 1;
      iVar5 = iVar17 - uVar11;
      if ((uint)(iVar17 - *(int *)(param_1 + 0x1c)) <= uVar11 || *(int *)(param_1 + 0x28) != 0) {
        iVar5 = *(int *)(param_1 + 0x1c);
      }
// reversing this took months of machine time
      uVar34 = iVar17 - uVar35;
      lVar14 = lVar10;
      if (uVar6 <= uVar34) {
        lVar14 = lVar9;
      }
      if (((uint)(iVar17 - iVar5) < uVar35 || 0xfffffffc < uVar34 - uVar6) ||
         (*(int *)((long)puVar20 + 1U) != *(int *)(lVar14 + (ulong)uVar34))) {
        uVar16 = 0;
      }
      else {
        puVar19 = puVar3;
        if (uVar6 <= uVar34) {
          puVar19 = puVar1;
        }
        lVar14 = func_0x002ad924((long)puVar20 + 5,(int *)(lVar14 + (ulong)uVar34) + 1,puVar1,
                                 puVar19,puVar2);
        uVar16 = lVar14 + 4;
      }
      auStack_70[0] = 999999999;
      if (uVar24 == 6) {
        uVar15 = func_0x002d2e74(param_1,puVar20,puVar1,auStack_70);
        uVar27 = uVar15;
        if (uVar15 <= uVar16) {
          uVar27 = uVar16;
        }
joined_r0x002cc008:
        if (3 < uVar27) goto LAB_002cc024;
LAB_002cbef8:
        *(uint *)(param_1 + 300) = (uint)(0x8ff < (ulong)((long)puVar20 - (long)param_4));
        puVar20 = (ulong *)((long)puVar20 + ((ulong)((long)puVar20 - (long)param_4) >> 8) + 1);
      }
      else {
        if (uVar24 != 5) {
/*  watermarked copy - do not remove  */
          uVar15 = func_0x002d27b4();
          uVar27 = uVar15;
          if (uVar15 <= uVar16) {
            uVar27 = uVar16;
          }
          goto joined_r0x002cc008;
        }
        uVar15 = func_0x002d2b14();
        uVar27 = uVar15;
        if (uVar15 <= uVar16) {
          uVar27 = uVar16;
        }
        if (uVar27 < 4) goto LAB_002cbef8;
LAB_002cc024:
        uVar30 = auStack_70[0];
        puVar19 = puVar20;
        if (uVar15 <= uVar16) {
          uVar30 = 1;
          puVar19 = (ulong *)((long)puVar20 + 1U);
        }
        while( true ) {
          puVar25 = puVar19;
          uVar16 = uVar27;
          puVar19 = puVar25;
          puVar21 = puVar20;
/*  no support for modified copies  */
          uVar15 = uVar30;
          if (puVar26 <= puVar20) break;
          while( true ) {
            puVar25 = (ulong *)((long)puVar21 + 1);
            iVar17 = iVar36 + 1;
            uVar27 = uVar16;
            if (uVar15 != 0) {
              iVar5 = iVar17 - uVar11;
              if ((uint)(iVar17 - *(int *)(param_1 + 0x1c)) <= uVar11 ||
                  *(int *)(param_1 + 0x28) != 0) {
                iVar5 = *(int *)(param_1 + 0x1c);
              }
              uVar34 = iVar17 - uVar35;
              lVar14 = lVar10;
              if (uVar6 <= uVar34) {
                lVar14 = lVar9;
              }
              if (uVar35 <= (uint)(iVar17 - iVar5) && uVar34 - uVar6 < 0xfffffffd) {
                if (*(int *)puVar25 == *(int *)(lVar14 + (ulong)uVar34)) {
                  puVar20 = puVar3;
                  if (uVar6 <= uVar34) {
                    puVar20 = puVar1;
                  }
                  uVar30 = func_0x002ad924((long)puVar21 + 5,(int *)(lVar14 + (ulong)uVar34) + 1,
                                           puVar1,puVar20,puVar2);
                  if (uVar30 < 0xfffffffffffffffc) {
                    if ((int)LZCOUNT((int)uVar15) + (int)uVar16 * 3 + -0x1e < (int)(uVar30 + 4) * 3)
                    {
                      uVar15 = 1;
                      puVar19 = puVar25;
                      uVar27 = uVar30 + 4;
                    }
                  }
                }
              }
            }
            auStack_70[0] = 999999999;
/*  thanks for reading - discord.gg/sdkhDjTex  */
            if (uVar24 == 6) {
              uVar16 = func_0x002d2e74(param_1,puVar25,puVar1,auStack_70);
            }
            else if (uVar24 == 5) {
              uVar16 = func_0x002d2b14(param_1,puVar25,puVar1);
            }
            else {
              uVar16 = func_0x002d27b4(param_1,puVar25,puVar1);
            }
            if ((uVar16 < 4) ||
               ((int)LZCOUNT((int)auStack_70[0]) + (int)uVar16 * 4 + -0x1f <=
                (int)LZCOUNT((int)uVar15) + (int)uVar27 * 4 + -0x1b)) break;
            puVar19 = puVar25;
            puVar21 = puVar25;
            uVar15 = auStack_70[0];
            iVar36 = iVar17;
            if (puVar26 <= puVar25) goto joined_r0x002cc3e8;
          }
          bVar12 = puVar26 <= puVar25;
          puVar25 = puVar19;
          uVar16 = uVar27;
          if (bVar12) break;
          puVar20 = (ulong *)((long)puVar21 + 2);
          iVar36 = iVar36 + 2;
          if (uVar15 != 0) {
            iVar17 = iVar36 - uVar11;
            if ((uint)(iVar36 - *(int *)(param_1 + 0x1c)) <= uVar11 || *(int *)(param_1 + 0x28) != 0
               ) {
              iVar17 = *(int *)(param_1 + 0x1c);
            }
/* more drops soon - github.com/pengussy - github.com/pengussy */
            uVar34 = iVar36 - uVar35;
            lVar14 = lVar10;
            if (uVar6 <= uVar34) {
              lVar14 = lVar9;
            }
            if ((uVar35 <= (uint)(iVar36 - iVar17) && uVar34 - uVar6 < 0xfffffffd) &&
               (*(int *)puVar20 == *(int *)(lVar14 + (ulong)uVar34))) {
              puVar19 = puVar3;
              if (uVar6 <= uVar34) {
                puVar19 = puVar1;
              }
              uVar30 = func_0x002ad924((long)puVar21 + 6,(int *)(lVar14 + (ulong)uVar34) + 1,puVar1,
                                       puVar19,puVar2);
              if ((uVar30 < 0xfffffffffffffffc) &&
                 ((int)LZCOUNT((int)uVar15) + (int)uVar27 * 4 + -0x1e < (int)(uVar30 + 4) * 4)) {
                uVar15 = 1;
                puVar25 = puVar20;
                uVar16 = uVar30 + 4;
              }
            }
          }
          auStack_70[0] = 999999999;
          if (uVar24 == 6) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
            uVar27 = func_0x002d2e74(param_1,puVar20,puVar1,auStack_70);
          }
          else if (uVar24 == 5) {
            uVar27 = func_0x002d2b14(param_1,puVar20,puVar1);
          }
          else {
            uVar27 = func_0x002d27b4(param_1,puVar20,puVar1);
          }
          if (uVar27 < 4) break;
          uVar30 = auStack_70[0];
          puVar19 = puVar20;
          if ((int)LZCOUNT((int)auStack_70[0]) + (int)uVar27 * 4 + -0x1f <=
              (int)LZCOUNT((int)uVar15) + (int)uVar16 * 4 + -0x18) break;
        }
joined_r0x002cc3e8:
        iVar17 = (int)uVar15;
        if (uVar15 < 4) {
          puVar20 = (ulong *)param_2[3];
          uVar34 = uVar35;
          uVar35 = uVar37;
joined_r0x002cc40c:
          uVar27 = (long)puVar25 - (long)param_4;
          if (puVar25 <= puVar18) goto LAB_002cc410;
LAB_002cc4d0:
          puVar19 = puVar20;
          if (param_4 <= puVar18) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
            puVar19 = (ulong *)((long)puVar20 + ((long)puVar18 - (long)param_4));
            uVar15 = *param_4;
            puVar21 = puVar20 + 2;
            puVar20[1] = param_4[1];
            *puVar20 = uVar15;
            if (0x10 < (ulong)((long)puVar18 - (long)param_4)) {
              do {
                uVar15 = param_4[2];
                puVar21[1] = param_4[3];
                *puVar21 = uVar15;
                uVar15 = param_4[4];
                puVar21[3] = param_4[5];
                puVar21[2] = uVar15;
                puVar21 = puVar21 + 4;
                param_4 = param_4 + 4;
              } while (puVar21 < puVar19);
            }
            param_4 = puVar18;
          }
          if (param_4 < puVar25) {
            uVar15 = (long)puVar25 - (long)param_4;
            if ((7 < uVar15) && (0x3f < (ulong)((long)puVar19 - (long)param_4))) {
              if (uVar15 < 0x40) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                uVar28 = 0;
              }
              else {
                uVar28 = uVar15 & 0xffffffffffffffc0;
                puVar20 = puVar19 + 4;
                puVar21 = param_4 + 4;
                uVar30 = uVar28;
                do {
                  uVar38 = puVar21[-4];
                  uVar40 = puVar21[-1];
                  uVar39 = puVar21[-2];
                  uVar42 = puVar21[1];
                  uVar41 = *puVar21;
                  uVar44 = puVar21[3];
                  uVar43 = puVar21[2];
                  puVar20[-3] = puVar21[-3];
                  puVar20[-4] = uVar38;
                  puVar20[-1] = uVar40;
                  puVar20[-2] = uVar39;
                  puVar20[1] = uVar42;
                  *puVar20 = uVar41;
                  puVar20[3] = uVar44;
                  puVar20[2] = uVar43;
                  uVar30 = uVar30 - 0x40;
                  puVar20 = puVar20 + 8;
                  puVar21 = puVar21 + 8;
                } while (uVar30 != 0);
                if (uVar15 == uVar28) goto LAB_002cc604;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
                if ((uVar15 & 0x38) == 0) {
                  puVar19 = (ulong *)((long)puVar19 + uVar28);
                  param_4 = (ulong *)((long)param_4 + uVar28);
                  goto LAB_002cc5f4;
                }
              }
              uVar30 = uVar15 & 0xfffffffffffffff8;
              lVar14 = uVar28 - uVar30;
              puVar22 = (undefined8 *)((long)puVar19 + uVar28);
              puVar32 = (undefined8 *)((long)param_4 + uVar28);
              do {
                *puVar22 = *puVar32;
                lVar14 = lVar14 + 8;
                puVar22 = puVar22 + 1;
                puVar32 = puVar32 + 1;
              } while (lVar14 != 0);
              puVar19 = (ulong *)((long)puVar19 + uVar30);
              param_4 = (ulong *)((long)param_4 + uVar30);
              if (uVar15 == uVar30) goto LAB_002cc604;
            }
LAB_002cc5f4:
// WM - keep the notice, keep the source honest
            do {
              puVar20 = (ulong *)((long)param_4 + 1);
              *(char *)puVar19 = (char)*param_4;
              puVar19 = (ulong *)((long)puVar19 + 1);
              param_4 = puVar20;
            } while (puVar20 != puVar25);
          }
LAB_002cc604:
          param_2[3] = param_2[3] + uVar27;
          piVar23 = (int *)param_2[1];
          if (0xffff < uVar27) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar23 - *param_2) >> 3);
            *(short *)(piVar23 + 1) = (short)uVar27;
            *piVar23 = iVar17;
            goto joined_r0x002cc458;
          }
          *(short *)(piVar23 + 1) = (short)uVar27;
          *piVar23 = iVar17;
          uVar27 = uVar16 - 3;
          if (uVar27 < 0x10000) goto LAB_002cc630;
LAB_002cc45c:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar23 - *param_2) >> 3);
          *(short *)((long)piVar23 + 6) = (short)uVar27;
          piVar23 = piVar23 + 2;
          param_2[1] = (long)piVar23;
          iVar17 = *(int *)(param_1 + 300);
        }
        else {
          uVar27 = (long)puVar25 + (3 - (uVar15 + lVar9));
          puVar20 = (ulong *)(lVar10 + (ulong)uVar8);
          lVar14 = lVar10;
          if (uVar6 <= (uint)uVar27) {
            puVar20 = puVar2;
            lVar14 = lVar9;
          }
/* reversing this took months of machine time - github.com/pengussy */
          if ((puVar25 <= param_4) ||
             (uVar27 = uVar27 & 0xffffffff, (ulong *)(lVar14 + uVar27) <= puVar20)) {
            uVar34 = iVar17 - 3;
            puVar20 = (ulong *)param_2[3];
            goto joined_r0x002cc40c;
          }
          puVar19 = (ulong *)(lVar14 + uVar27);
          puVar21 = puVar25;
          do {
            puVar25 = (ulong *)((long)puVar21 + -1);
            puVar19 = (ulong *)((long)puVar19 + -1);
            if (*(char *)puVar25 != *(char *)puVar19) {
              uVar27 = (long)puVar21 - (long)param_4;
              puVar20 = (ulong *)param_2[3];
              puVar25 = puVar21;
              goto joined_r0x002cc4cc;
            }
            uVar16 = uVar16 + 1;
          } while ((param_4 < puVar25) && (puVar21 = puVar25, puVar20 < puVar19));
          uVar27 = (long)puVar25 - (long)param_4;
          puVar20 = (ulong *)param_2[3];
joined_r0x002cc4cc:
          uVar34 = iVar17 - 3;
          if (puVar18 < puVar25) goto LAB_002cc4d0;
LAB_002cc410:
          uVar15 = *param_4;
          puVar20[1] = param_4[1];
          *puVar20 = uVar15;
          if (0x10 < uVar27) {
            lVar14 = param_2[3];
            uVar15 = param_4[2];
            *(ulong *)(lVar14 + 0x18) = param_4[3];
            *(ulong *)(lVar14 + 0x10) = uVar15;
            if (0x10 < uVar27 - 0x10) {
              puVar20 = (ulong *)(lVar14 + 0x20);
              puVar19 = param_4 + 6;
              do {
                uVar15 = puVar19[-2];
// WM - found on a paste site? it was re-uploaded illegally
                puVar20[1] = puVar19[-1];
                *puVar20 = uVar15;
                uVar15 = *puVar19;
                puVar20[3] = puVar19[1];
                puVar20[2] = uVar15;
                puVar20 = puVar20 + 4;
                puVar19 = puVar19 + 4;
              } while (puVar20 < (ulong *)(lVar14 + uVar27));
              goto LAB_002cc604;
            }
          }
          param_2[3] = param_2[3] + uVar27;
          piVar23 = (int *)param_2[1];
          *(short *)(piVar23 + 1) = (short)uVar27;
          *piVar23 = iVar17;
joined_r0x002cc458:
          uVar27 = uVar16 - 3;
          if (0xffff < uVar27) goto LAB_002cc45c;
LAB_002cc630:
          *(short *)((long)piVar23 + 6) = (short)uVar27;
          piVar23 = piVar23 + 2;
          param_2[1] = (long)piVar23;
          iVar17 = *(int *)(param_1 + 300);
        }
        if (iVar17 != 0) {
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar25 + uVar16);
        if (puVar26 < param_4) {
          puVar20 = param_4;
          uVar37 = uVar35;
          uVar35 = uVar34;
        }
        else {
          uVar13 = uVar35;
          do {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
            uVar35 = uVar13;
            uVar13 = uVar34;
            iVar36 = (int)param_4 - (int)lVar9;
            iVar17 = iVar36 - uVar11;
            if ((uint)(iVar36 - *(int *)(param_1 + 0x1c)) <= uVar11 || *(int *)(param_1 + 0x28) != 0
               ) {
              iVar17 = *(int *)(param_1 + 0x1c);
            }
            uVar37 = iVar36 - uVar35;
            lVar14 = lVar10;
            if (uVar6 <= uVar37) {
              lVar14 = lVar9;
            }
            if (((uint)(iVar36 - iVar17) < uVar35 || 0xfffffffc < uVar37 - uVar6) ||
               (piVar4 = (int *)(lVar14 + (ulong)uVar37), (int)*param_4 != *piVar4)) {
              puVar20 = param_4;
              uVar37 = uVar35;
              uVar35 = uVar13;
              break;
            }
            puVar20 = puVar3;
            if (uVar6 <= uVar37) {
              puVar20 = puVar1;
            }
            puVar19 = (ulong *)((long)param_4 + 4);
            puVar25 = (ulong *)(piVar4 + 1);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            puVar21 = (ulong *)((long)puVar19 + ((long)puVar20 - (long)puVar25));
            if (puVar1 <= puVar21) {
              puVar21 = puVar1;
            }
            if (puVar19 < (ulong *)((long)puVar21 - 7U)) {
              if (*puVar25 == *puVar19) {
                lVar33 = 0;
                puVar29 = (ulong *)((long)param_4 + 0xc);
                puVar31 = (ulong *)(lVar14 + (ulong)uVar37 + 0xc);
                do {
                  if ((ulong *)((long)puVar21 - 7U) <= puVar29) goto LAB_002cc758;
                  uVar16 = *puVar31;
                  uVar27 = *puVar29;
                  lVar33 = lVar33 + 8;
                  puVar29 = puVar29 + 1;
                  puVar31 = puVar31 + 1;
                } while (uVar16 == uVar27);
                uVar27 = uVar27 ^ uVar16;
                uVar16 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                uVar16 = lVar33 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
              }
              else {
                uVar16 = *puVar19 ^ *puVar25;
                uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
// chat: discord.gg/sdkhDjTex
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar25 + uVar16) == puVar20) goto LAB_002cc850;
joined_r0x002cc7bc:
              if (param_4 <= puVar18) goto LAB_002cc924;
LAB_002cc7c0:
              *(undefined2 *)(piVar23 + 1) = 0;
              *piVar23 = 1;
            }
            else {
              puVar29 = puVar19;
              puVar31 = puVar25;
LAB_002cc758:
              if (puVar29 < (ulong *)((long)puVar21 - 3U)) {
                if ((int)*puVar31 == (int)*puVar29) {
                  puVar29 = (ulong *)((long)puVar29 + 4);
                  puVar31 = (ulong *)((long)puVar31 + 4);
                }
                if (puVar29 < (ulong *)((long)puVar21 - 1U)) goto LAB_002cc80c;
              }
              else if (puVar29 < (ulong *)((long)puVar21 - 1U)) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
LAB_002cc80c:
                if ((short)*puVar31 == (short)*puVar29) {
                  puVar29 = (ulong *)((long)puVar29 + 2);
                  puVar31 = (ulong *)((long)puVar31 + 2);
                }
              }
              if (puVar29 < puVar21) {
                if ((char)*puVar31 == (char)*puVar29) {
                  puVar29 = (ulong *)((long)puVar29 + 1);
                }
              }
              uVar16 = (long)puVar29 - (long)puVar19;
              if ((ulong *)((long)puVar25 + uVar16) != puVar20) goto joined_r0x002cc7bc;
LAB_002cc850:
              puVar19 = (ulong *)((long)puVar19 + uVar16);
              if (puVar19 < (ulong *)((long)puVar1 - 7U)) {
                if (*puVar2 == *puVar19) {
                  lVar14 = 0;
                  puVar20 = (ulong *)((long)param_4 + uVar16 + 0xc);
                  puVar25 = (ulong *)(uVar7 + lVar9);
                  do {
                    puVar25 = puVar25 + 1;
                    if ((ulong *)((long)puVar1 - 7U) <= puVar20) goto LAB_002cc8c4;
                    uVar27 = *puVar20;
                    lVar14 = lVar14 + 8;
                    puVar20 = puVar20 + 1;
                  } while (*puVar25 == uVar27);
                  uVar27 = uVar27 ^ *puVar25;
                  uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                  uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                  uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
/* keep the notice, keep the source honest */
                  uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10
                  ;
                  uVar16 = lVar14 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) + uVar16;
                }
                else {
                  uVar27 = *puVar19 ^ *puVar2;
                  uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                  uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                  uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                  uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10
                  ;
                  uVar16 = ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) + uVar16;
                }
                goto joined_r0x002cc7bc;
              }
/*  do not claim this as your own  */
              puVar20 = puVar19;
              puVar25 = puVar2;
LAB_002cc8c4:
              if (puVar20 < (ulong *)((long)puVar1 - 3U)) {
                if ((int)*puVar25 == (int)*puVar20) {
                  puVar20 = (ulong *)((long)puVar20 + 4);
                  puVar25 = (ulong *)((long)puVar25 + 4);
                }
              }
              if (puVar20 < (ulong *)((long)puVar1 - 1U)) {
                if (*(short *)puVar25 == *(short *)puVar20) {
                  puVar20 = (ulong *)((long)puVar20 + 2);
                  puVar25 = (ulong *)((long)puVar25 + 2);
                }
              }
              if (puVar20 < puVar1) {
                if ((char)*puVar25 == (char)*puVar20) {
                  puVar20 = (ulong *)((long)puVar20 + 1);
                }
              }
              uVar16 = (long)puVar20 + (uVar16 - (long)puVar19);
              if (puVar18 < param_4) goto LAB_002cc7c0;
LAB_002cc924:
              puVar20 = (ulong *)param_2[3];
              uVar27 = *param_4;
              puVar20[1] = param_4[1];
              *puVar20 = uVar27;
              piVar23 = (int *)param_2[1];
              *(undefined2 *)(piVar23 + 1) = 0;
              *piVar23 = 1;
            }
            if (0xffff < uVar16 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar23 - *param_2) >> 3);
            }
            *(short *)((long)piVar23 + 6) = (short)(uVar16 + 1);
            piVar23 = piVar23 + 2;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
            param_4 = (ulong *)((long)param_4 + uVar16 + 4);
            param_2[1] = (long)piVar23;
            puVar20 = param_4;
            uVar37 = uVar13;
            uVar34 = uVar35;
          } while (param_4 <= puVar26);
        }
      }
    } while (puVar20 < puVar26);
  }
  *param_3 = uVar35;
  param_3[1] = uVar37;
  return (long)puVar1 - (long)param_4;
}

