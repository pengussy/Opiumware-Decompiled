/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2beee0:12ed59c5e7
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

long FUN_002beee0(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int *piVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
// keep the notice, keep the source honest
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong *puVar25;
  ulong *puVar26;
  int *piVar27;
  undefined8 *puVar28;
  int iVar29;
  long lVar30;
  ulong *puVar31;
  int iVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong uVar36;
  ulong *puVar37;
  ulong *puVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 *puVar41;
  long lVar42;
  int iVar43;
  ulong *puVar44;
  ulong *puVar45;
  ulong uVar46;
  ulong uVar47;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  int iStack_a0;
  ulong auStack_70 [2];
  
  puVar3 = (ulong *)((long)param_4 + param_5);
  puVar45 = puVar3 + -2;
  lVar42 = *(long *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x18);
  uVar21 = *(uint *)(param_1 + 0x110);
  if (uVar21 < 5) {
    uVar21 = 4;
  }
  if (5 < uVar21) {
    uVar21 = 6;
  }
  uVar11 = *(uint *)(param_1 + 0x10c);
/* WM - proprietary - see LICENSE - do not sell */
  uVar22 = uVar11;
  if (uVar11 < 5) {
    uVar22 = 4;
  }
  if (5 < uVar22) {
    uVar22 = 6;
  }
  iVar43 = *param_3;
  iStack_a0 = param_3[1];
  puVar17 = *(ulong **)(param_1 + 0xf8);
  puVar8 = (ulong *)*puVar17;
  uVar9 = puVar17[1];
  puVar4 = (ulong *)(lVar42 + (ulong)uVar10);
  puVar5 = (ulong *)(uVar9 + (uint)puVar17[3]);
  puVar17 = param_4;
  if ((((int)param_4 - (int)puVar4) - (int)puVar5) + (int)puVar8 == 0) {
    puVar17 = (ulong *)((long)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  uVar12 = *(uint *)(param_1 + 0x2c);
  uVar18 = (ulong)uVar12;
  iVar32 = (int)puVar45 - (int)(ulong *)(lVar42 + uVar18);
  iVar29 = 8;
  if (iVar32 + 1U < 8) {
    iVar29 = iVar32 + 1;
  }
  iVar32 = 0;
  if ((ulong *)(lVar42 + uVar18) <= puVar45) {
    iVar32 = iVar29;
  }
  uVar23 = (ulong)(iVar32 + uVar12);
  if (uVar12 < iVar32 + uVar12) {
    lVar24 = *(long *)(param_1 + 0x70);
    lVar30 = *(long *)(param_1 + 0x38);
    uVar33 = *(ulong *)(param_1 + 0x60);
    uVar36 = (ulong)(0x38 - *(int *)(param_1 + 0x34));
    uVar12 = 0x18 - *(int *)(param_1 + 0x34);
    lVar14 = param_1 + 0x40;
    if (uVar11 < 5) {
      if (uVar21 == 6) {
        do {
          uVar16 = (*(long *)(lVar42 + uVar18) * -0x30e4432340650000 ^ uVar33) >> (uVar36 & 0x3f);
          uVar40 = (ulong)(((uint)(uVar16 >> 8) & 0xffffff) << (ulong)(uVar22 & 0x1f));
          Hint_Prefetch(lVar24 + uVar40 * 4,0,0,0);
          Hint_Prefetch(lVar30 + uVar40,0,0,0);
          *(int *)(lVar14 + (uVar18 & 7) * 4) = (int)uVar16;
          uVar18 = uVar18 + 1;
        } while (uVar23 != uVar18);
      }
      else if (uVar21 == 5) {
        do {
          uVar16 = (*(long *)(lVar42 + uVar18) * -0x30e4432345000000 ^ uVar33) >> (uVar36 & 0x3f);
          uVar40 = (ulong)(((uint)(uVar16 >> 8) & 0xffffff) << (ulong)(uVar22 & 0x1f));
          Hint_Prefetch(lVar24 + uVar40 * 4,0,0,0);
          Hint_Prefetch(lVar30 + uVar40,0,0,0);
          *(int *)(lVar14 + (uVar18 & 7) * 4) = (int)uVar16;
          uVar18 = uVar18 + 1;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        } while (uVar23 != uVar18);
      }
      else {
        do {
          uVar15 = (*(int *)(lVar42 + uVar18) * -0x61c8864f ^ (uint)uVar33) >>
                   (ulong)(uVar12 & 0x1f);
          uVar36 = (ulong)((uVar15 >> 8) << (ulong)(uVar22 & 0x1f));
          Hint_Prefetch(lVar24 + uVar36 * 4,0,0,0);
          Hint_Prefetch(lVar30 + uVar36,0,0,0);
          *(uint *)(lVar14 + (uVar18 & 7) * 4) = uVar15;
          uVar18 = uVar18 + 1;
        } while (uVar23 != uVar18);
      }
    }
    else {
      do {
        if (uVar21 == 6) {
          uVar16 = *(long *)(lVar42 + uVar18) * -0x30e4432340650000;
LAB_002bf044:
          uVar15 = (uint)((uVar16 ^ uVar33) >> (uVar36 & 0x3f));
/* WM - watermarked copy - do not remove */
        }
        else {
          if (uVar21 == 5) {
            uVar16 = *(long *)(lVar42 + uVar18) * -0x30e4432345000000;
            goto LAB_002bf044;
          }
          uVar15 = (*(int *)(lVar42 + uVar18) * -0x61c8864f ^ (uint)uVar33) >>
                   (ulong)(uVar12 & 0x1f);
        }
        uVar16 = (ulong)((uVar15 >> 8) << (ulong)(uVar22 & 0x1f));
        lVar1 = lVar24 + uVar16 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar30 + uVar16;
        Hint_Prefetch(lVar1,0,0,0);
        if (uVar11 != 5) {
          Hint_Prefetch(lVar1 + 0x20,0,0,0);
        }
        *(uint *)(lVar14 + (uVar18 & 7) * 4) = uVar15;
        uVar18 = uVar18 + 1;
      } while (uVar23 != uVar18);
    }
  }
/* donate: donate/README.md */
  puVar20 = param_4;
  if (puVar17 < puVar45) {
    uVar12 = uVar10 + ((int)uVar9 - (int)puVar8);
    puVar44 = (ulong *)((long)puVar3 - 7);
    puVar19 = puVar3 + -4;
    puVar2 = (ulong *)((ulong)uVar10 + lVar42 + 8);
    do {
      iVar29 = (int)lVar42;
      uVar15 = (((int)puVar17 - iVar29) - iVar43) + 1;
      piVar27 = (int *)(uVar9 + (uVar15 - uVar12));
      if (uVar10 <= uVar15) {
        piVar27 = (int *)(lVar42 + (ulong)uVar15);
      }
      if ((uVar15 - uVar10 < 0xfffffffd) && (*piVar27 == *(int *)((long)puVar17 + 1))) {
        puVar25 = puVar8;
        if (uVar10 <= uVar15) {
          puVar25 = puVar3;
        }
        lVar14 = func_0x002ad924((long)puVar17 + 5,piVar27 + 1,puVar3,puVar25,puVar4);
        uVar18 = lVar14 + 4;
      }
/* reversing this took months of machine time - github.com/pengussy */
      else {
        uVar18 = 0;
      }
      auStack_70[0] = 999999999;
      if (uVar21 == 6) {
        if (uVar22 == 6) {
          uVar33 = func_0x002db1a0(param_1,puVar17,puVar3,auStack_70);
          uVar23 = uVar33;
          if (uVar33 <= uVar18) {
            uVar23 = uVar18;
          }
          goto joined_r0x002bf3b4;
        }
        if (uVar22 == 5) {
          uVar33 = func_0x002daaa8();
          uVar23 = uVar33;
          if (uVar33 <= uVar18) {
            uVar23 = uVar18;
          }
          goto joined_r0x002bf3b4;
        }
        uVar33 = func_0x002da3e4();
        uVar23 = uVar33;
        if (uVar33 <= uVar18) {
          uVar23 = uVar18;
        }
joined_r0x002bf398:
        if (uVar23 < 4) goto LAB_002bf1e4;
LAB_002bf3d4:
        uVar36 = auStack_70[0];
        puVar25 = puVar17;
        if (uVar33 <= uVar18) {
          uVar36 = 1;
          puVar25 = (ulong *)((long)puVar17 + 1);
        }
        if (puVar17 < puVar45) {
          lVar14 = (long)puVar17 + 0xd;
/*  unlicensed copy if this notice is missing  */
          do {
            puVar31 = (ulong *)((long)puVar17 + 1);
            uVar15 = ((int)puVar31 - iVar29) - iVar43;
            piVar27 = (int *)(uVar9 + (uVar15 - uVar12));
            if (uVar10 <= uVar15) {
              piVar27 = (int *)(lVar42 + (ulong)uVar15);
            }
            if (uVar15 - uVar10 < 0xfffffffd) {
              if (*piVar27 == *(int *)puVar31) {
                puVar26 = puVar8;
                if (uVar10 <= uVar15) {
                  puVar26 = puVar3;
                }
                puVar37 = (ulong *)((long)puVar17 + 5);
                puVar38 = (ulong *)(piVar27 + 1);
                puVar6 = (ulong *)((long)puVar37 + ((long)puVar26 - (long)puVar38));
                if (puVar3 <= puVar6) {
                  puVar6 = puVar3;
                }
                if (puVar37 < (ulong *)((long)puVar6 - 7U)) {
                  if (*puVar38 == *puVar37) {
                    lVar24 = 0xd;
                    puVar34 = (ulong *)(piVar27 + 3);
                    do {
                      puVar35 = (ulong *)((long)puVar17 + lVar24);
                      if ((ulong *)((long)puVar6 - 7U) <= puVar35) goto LAB_002bf4dc;
/*  do not claim this as your own  */
                      uVar18 = *puVar34;
                      lVar24 = lVar24 + 8;
                      puVar34 = puVar34 + 1;
                    } while (uVar18 == *puVar35);
                    uVar18 = *puVar35 ^ uVar18;
                    uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1
                    ;
                    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2
                    ;
                    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar18 & 0xffff0000ffff) << 0x10;
                    uVar18 = (lVar24 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3)) - 0xd
                    ;
                  }
                  else {
                    uVar18 = *puVar37 ^ *puVar38;
                    uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1
                    ;
                    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2
                    ;
                    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar18 & 0xffff0000ffff) << 0x10;
                    uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
                  }
                }
                else {
                  puVar34 = puVar38;
                  puVar35 = puVar37;
LAB_002bf4dc:
                  if (puVar35 < (ulong *)((long)puVar6 - 3U)) {
                    if ((int)*puVar34 == (int)*puVar35) {
                      puVar35 = (ulong *)((long)puVar35 + 4);
                      puVar34 = (ulong *)((long)puVar34 + 4);
                    }
// WM - no support for modified copies
                    if (puVar35 < (ulong *)((long)puVar6 - 1U)) goto LAB_002bf580;
                  }
                  else if (puVar35 < (ulong *)((long)puVar6 - 1U)) {
LAB_002bf580:
                    if ((short)*puVar34 == (short)*puVar35) {
                      puVar35 = (ulong *)((long)puVar35 + 2);
                      puVar34 = (ulong *)((long)puVar34 + 2);
                    }
                  }
                  if (puVar35 < puVar6) {
                    if ((char)*puVar34 == (char)*puVar35) {
                      puVar35 = (ulong *)((long)puVar35 + 1);
                    }
                  }
                  uVar18 = (long)puVar35 - (long)puVar37;
                }
                if ((ulong *)((long)puVar38 + uVar18) == puVar26) {
                  puVar37 = (ulong *)((long)puVar37 + uVar18);
                  if (puVar37 < puVar44) {
                    if (*puVar4 == *puVar37) {
                      lVar24 = 0;
                      puVar17 = (ulong *)(lVar14 + uVar18);
                      puVar26 = puVar2;
                      do {
                        if (puVar44 <= puVar17) goto LAB_002bf63c;
                        uVar16 = *puVar26;
                        uVar33 = *puVar17;
                        lVar24 = lVar24 + 8;
                        puVar17 = puVar17 + 1;
                        puVar26 = puVar26 + 1;
                      } while (uVar16 == uVar33);
                      uVar33 = uVar33 ^ uVar16;
                      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar33 & 0x5555555555555555) << 1;
// WM - reversing this took months of machine time
                      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 |
                               (uVar33 & 0x3333333333333333) << 2;
                      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar33 & 0xffff0000ffff) << 0x10;
                      uVar33 = lVar24 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
                    }
                    else {
                      uVar33 = *puVar37 ^ *puVar4;
                      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar33 & 0x5555555555555555) << 1;
                      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 |
                               (uVar33 & 0x3333333333333333) << 2;
                      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar33 & 0xffff0000ffff) << 0x10;
                      uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
                    }
                    uVar18 = uVar33 + uVar18;
                  }
                  else {
                    puVar17 = puVar37;
                    puVar26 = puVar4;
LAB_002bf63c:
                    if (puVar17 < (ulong *)((long)puVar3 - 3U)) {
                      if ((int)*puVar26 == (int)*puVar17) {
// found on a paste site? it was re-uploaded illegally
                        puVar17 = (ulong *)((long)puVar17 + 4);
                        puVar26 = (ulong *)((long)puVar26 + 4);
                      }
                    }
                    if (puVar17 < (ulong *)((long)puVar3 - 1U)) {
                      if ((short)*puVar26 == (short)*puVar17) {
                        puVar17 = (ulong *)((long)puVar17 + 2);
                        puVar26 = (ulong *)((long)puVar26 + 2);
                      }
                    }
                    if (puVar17 < puVar3) {
                      if ((char)*puVar26 == (char)*puVar17) {
                        puVar17 = (ulong *)((long)puVar17 + 1);
                      }
                    }
                    uVar18 = (long)puVar17 + (uVar18 - (long)puVar37);
                  }
                }
                if (uVar18 < 0xfffffffffffffffc) {
                  if ((int)LZCOUNT((int)uVar36) + (int)uVar23 * 3 + -0x1e < (int)(uVar18 + 4) * 3) {
                    uVar36 = 1;
                    puVar25 = puVar31;
/* origin: github.com/pengussy */
                    uVar23 = uVar18 + 4;
                  }
                }
              }
            }
            auStack_70[0] = 999999999;
            if (uVar21 == 6) {
              if (uVar22 == 6) {
                uVar18 = func_0x002db1a0(param_1,puVar31,puVar3,auStack_70);
                uVar33 = auStack_70[0];
              }
              else if (uVar22 == 5) {
                uVar18 = func_0x002daaa8(param_1,puVar31);
                uVar33 = auStack_70[0];
              }
              else {
                uVar18 = func_0x002da3e4(param_1,puVar31);
                uVar33 = auStack_70[0];
              }
            }
            else if (uVar21 == 5) {
              if (uVar22 == 6) {
                uVar18 = func_0x002d9cd0(param_1,puVar31);
                uVar33 = auStack_70[0];
              }
              else if (uVar22 == 5) {
                uVar18 = func_0x002d95d8(param_1,puVar31);
                uVar33 = auStack_70[0];
              }
              else {
                uVar18 = func_0x002d8f14(param_1,puVar31);
                uVar33 = auStack_70[0];
/* wm:unlicensed copy if this notice is missing */
              }
            }
            else if (uVar22 == 6) {
              uVar18 = func_0x002d8804(param_1,puVar31);
              uVar33 = auStack_70[0];
            }
            else if (uVar22 == 5) {
              uVar18 = func_0x002d8110(param_1,puVar31);
              uVar33 = auStack_70[0];
            }
            else {
              uVar18 = func_0x002d7a50(param_1,puVar31);
              uVar33 = auStack_70[0];
            }
            auStack_70[0] = uVar33;
            if (uVar18 < 4) goto joined_r0x002bf9e0;
            if ((int)LZCOUNT((int)uVar33) + (int)uVar18 * 4 + -0x1f <=
                (int)LZCOUNT((int)uVar36) + (int)uVar23 * 4 + -0x1b) goto joined_r0x002bf9e0;
            lVar14 = lVar14 + 1;
            puVar25 = puVar31;
            uVar23 = uVar18;
            uVar36 = uVar33;
            puVar17 = puVar31;
          } while (puVar31 != (ulong *)((long)param_4 + param_5 + -0x10));
          if (3 < uVar33) goto LAB_002bf88c;
LAB_002bf9e4:
          iVar32 = (int)uVar33;
          uVar23 = (long)puVar31 - (long)puVar20;
          puVar17 = (ulong *)param_2[3];
joined_r0x002bfae0:
          if (puVar31 <= puVar19) goto LAB_002bfa30;
LAB_002bf958:
          puVar25 = puVar17;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if (puVar20 <= puVar19) {
            puVar25 = (ulong *)((long)puVar17 + ((long)puVar19 - (long)puVar20));
            uVar33 = *puVar20;
            puVar26 = puVar17 + 2;
            puVar17[1] = puVar20[1];
            *puVar17 = uVar33;
            if (0x10 < (ulong)((long)puVar19 - (long)puVar20)) {
              do {
                uVar33 = puVar20[2];
                puVar26[1] = puVar20[3];
                *puVar26 = uVar33;
                uVar33 = puVar20[4];
                puVar26[3] = puVar20[5];
                puVar26[2] = uVar33;
                puVar26 = puVar26 + 4;
                puVar20 = puVar20 + 4;
              } while (puVar26 < puVar25);
            }
            puVar20 = puVar19;
          }
          if (puVar20 < puVar31) {
            uVar33 = (long)puVar31 - (long)puVar20;
            if ((7 < uVar33) && (0x3f < (ulong)((long)puVar25 - (long)puVar20))) {
              if (uVar33 < 0x40) {
                uVar16 = 0;
              }
              else {
                uVar16 = uVar33 & 0xffffffffffffffc0;
                puVar17 = puVar25 + 4;
                puVar26 = puVar20 + 4;
                uVar36 = uVar16;
                do {
                  uVar40 = puVar26[-4];
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                  uVar47 = puVar26[-1];
                  uVar46 = puVar26[-2];
                  uVar49 = puVar26[1];
                  uVar48 = *puVar26;
                  uVar51 = puVar26[3];
                  uVar50 = puVar26[2];
                  puVar17[-3] = puVar26[-3];
                  puVar17[-4] = uVar40;
                  puVar17[-1] = uVar47;
                  puVar17[-2] = uVar46;
                  puVar17[1] = uVar49;
                  *puVar17 = uVar48;
                  puVar17[3] = uVar51;
                  puVar17[2] = uVar50;
                  uVar36 = uVar36 - 0x40;
                  puVar17 = puVar17 + 8;
                  puVar26 = puVar26 + 8;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                } while (uVar36 != 0);
                if (uVar33 == uVar16) goto LAB_002bfba4;
                if ((uVar33 & 0x38) == 0) {
                  puVar25 = (ulong *)((long)puVar25 + uVar16);
                  puVar20 = (ulong *)((long)puVar20 + uVar16);
                  goto LAB_002bfb94;
                }
              }
              uVar36 = uVar33 & 0xfffffffffffffff8;
              lVar14 = uVar16 - uVar36;
              puVar28 = (undefined8 *)((long)puVar25 + uVar16);
              puVar41 = (undefined8 *)((long)puVar20 + uVar16);
              do {
                *puVar28 = *puVar41;
                lVar14 = lVar14 + 8;
                puVar28 = puVar28 + 1;
                puVar41 = puVar41 + 1;
/* proprietary - see LICENSE - do not sell */
              } while (lVar14 != 0);
              puVar25 = (ulong *)((long)puVar25 + uVar36);
              puVar20 = (ulong *)((long)puVar20 + uVar36);
              if (uVar33 == uVar36) goto LAB_002bfba4;
            }
LAB_002bfb94:
            do {
              puVar17 = (ulong *)((long)puVar20 + 1);
              *(char *)puVar25 = (char)*puVar20;
              puVar25 = (ulong *)((long)puVar25 + 1);
              puVar20 = puVar17;
            } while (puVar17 != puVar31);
          }
LAB_002bfba4:
          param_2[3] = param_2[3] + uVar23;
          piVar27 = (int *)param_2[1];
          if (0xffff < uVar23) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar27 - *param_2) >> 3);
            *(short *)(piVar27 + 1) = (short)uVar23;
            *piVar27 = iVar32;
            goto joined_r0x002c0070;
          }
          *(short *)(piVar27 + 1) = (short)uVar23;
          *piVar27 = iVar32;
          uVar23 = uVar18 - 3;
          if (0xffff < uVar23) goto LAB_002bfa7c;
LAB_002bfbd0:
          *(short *)((long)piVar27 + 6) = (short)uVar23;
          piVar27 = piVar27 + 2;
// stripping the watermark breaks the license
          param_2[1] = (long)piVar27;
          iVar32 = *(int *)(param_1 + 300);
        }
        else {
joined_r0x002bf9e0:
          puVar31 = puVar25;
          uVar18 = uVar23;
          uVar33 = uVar36;
          if (uVar33 < 4) goto LAB_002bf9e4;
LAB_002bf88c:
          iVar32 = (int)uVar33;
          uVar23 = (long)puVar31 + (-0xfffffffd - (uVar33 + lVar42));
          lVar14 = uVar9 - uVar12;
          puVar17 = puVar5;
          if (uVar10 <= (uint)uVar23) {
            lVar14 = lVar42;
            puVar17 = puVar4;
          }
          iStack_a0 = iVar43;
// origin: github.com/pengussy
          if ((puVar20 < puVar31) &&
             (uVar23 = uVar23 & 0xffffffff, puVar17 < (ulong *)(lVar14 + uVar23))) {
            puVar25 = (ulong *)(lVar14 + uVar23);
            puVar26 = puVar31;
            do {
              puVar31 = (ulong *)((long)puVar26 + -1);
              puVar25 = (ulong *)((long)puVar25 + -1);
              if (*(char *)puVar31 != *(char *)puVar25) {
                uVar23 = (long)puVar26 - (long)puVar20;
                puVar17 = (ulong *)param_2[3];
                iVar43 = iVar32 + -3;
                puVar31 = puVar26;
                goto joined_r0x002bfae0;
              }
              uVar18 = uVar18 + 1;
            } while ((puVar20 < puVar31) && (puVar26 = puVar31, puVar17 < puVar25));
          }
          iVar43 = iVar32 + -3;
          uVar23 = (long)puVar31 - (long)puVar20;
          puVar17 = (ulong *)param_2[3];
          if (puVar19 < puVar31) goto LAB_002bf958;
LAB_002bfa30:
          uVar33 = *puVar20;
          puVar17[1] = puVar20[1];
          *puVar17 = uVar33;
          if (0x10 < uVar23) {
            lVar14 = param_2[3];
            uVar33 = puVar20[2];
            *(ulong *)(lVar14 + 0x18) = puVar20[3];
            *(ulong *)(lVar14 + 0x10) = uVar33;
/* WM - unlicensed copy if this notice is missing */
            if (0x10 < uVar23 - 0x10) {
              puVar17 = (ulong *)(lVar14 + 0x20);
              puVar20 = puVar20 + 6;
              do {
                uVar33 = puVar20[-2];
                puVar17[1] = puVar20[-1];
                *puVar17 = uVar33;
                uVar33 = *puVar20;
                puVar17[3] = puVar20[1];
                puVar17[2] = uVar33;
                puVar17 = puVar17 + 4;
                puVar20 = puVar20 + 4;
              } while (puVar17 < (ulong *)(lVar14 + uVar23));
              goto LAB_002bfba4;
            }
          }
          param_2[3] = param_2[3] + uVar23;
          piVar27 = (int *)param_2[1];
          *(short *)(piVar27 + 1) = (short)uVar23;
          *piVar27 = iVar32;
joined_r0x002c0070:
          uVar23 = uVar18 - 3;
          if (uVar23 < 0x10000) goto LAB_002bfbd0;
LAB_002bfa7c:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar27 - *param_2) >> 3);
          *(short *)((long)piVar27 + 6) = (short)uVar23;
          piVar27 = piVar27 + 2;
          param_2[1] = (long)piVar27;
          iVar32 = *(int *)(param_1 + 300);
        }
// WM - watermarked copy - do not remove
        if (iVar32 != 0) {
          uVar15 = *(uint *)(param_1 + 0x2c);
          uVar23 = (ulong)uVar15;
          iVar13 = (int)puVar45 - (int)(ulong *)(lVar42 + uVar23);
          iVar32 = 8;
          if (iVar13 + 1U < 8) {
            iVar32 = iVar13 + 1;
          }
          iVar13 = 0;
          if ((ulong *)(lVar42 + uVar23) <= puVar45) {
            iVar13 = iVar32;
          }
          if (uVar15 < iVar13 + uVar15) {
            lVar14 = *(long *)(param_1 + 0x70);
            lVar24 = *(long *)(param_1 + 0x38);
            iVar32 = *(int *)(param_1 + 0x34);
            uVar33 = *(ulong *)(param_1 + 0x60);
            do {
              if (uVar21 == 5) {
                uVar36 = *(long *)(lVar42 + uVar23) * -0x30e4432345000000;
LAB_002bfc7c:
                uVar36 = (uVar36 ^ uVar33) >> ((ulong)(0x38 - iVar32) & 0x3f);
                uVar39 = (uint)uVar36;
                uVar36 = (ulong)(((uint)(uVar36 >> 8) & 0xffffff) << (ulong)(uVar22 & 0x1f));
                lVar30 = lVar14 + uVar36 * 4;
                Hint_Prefetch(lVar30,0,0,0);
                if (4 < uVar11) goto LAB_002bfcc8;
/* if you paid for this, you were scammed */
LAB_002bfc3c:
                lVar30 = lVar24 + uVar36;
LAB_002bfc40:
                Hint_Prefetch(lVar30,0,0,0);
              }
              else {
                if (uVar21 == 6) {
                  uVar36 = *(long *)(lVar42 + uVar23) * -0x30e4432340650000;
                  goto LAB_002bfc7c;
                }
                uVar39 = (*(int *)(lVar42 + uVar23) * -0x61c8864f ^ (uint)uVar33) >>
                         (ulong)(0x18U - iVar32 & 0x1f);
                uVar36 = (ulong)((uVar39 >> 8) << (ulong)(uVar22 & 0x1f));
                lVar30 = lVar14 + uVar36 * 4;
                Hint_Prefetch(lVar30,0,0,0);
                if (uVar11 < 5) goto LAB_002bfc3c;
LAB_002bfcc8:
                Hint_Prefetch(lVar30 + 0x40,0,0,0);
                lVar30 = lVar24 + uVar36;
                Hint_Prefetch(lVar30,0,0,0);
                if (uVar11 != 5) {
                  lVar30 = lVar30 + 0x20;
                  goto LAB_002bfc40;
                }
              }
              *(uint *)(param_1 + 0x40 + (uVar23 & 7) * 4) = uVar39;
              uVar23 = uVar23 + 1;
            } while (iVar13 + uVar15 != uVar23);
          }
          *(undefined4 *)(param_1 + 300) = 0;
        }
        puVar17 = (ulong *)((long)puVar31 + uVar18);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (puVar45 < puVar17) {
          puVar20 = puVar17;
        }
        else {
          do {
            iVar32 = iStack_a0;
            iStack_a0 = iVar43;
            uVar15 = ((int)puVar17 - iVar29) - iVar32;
            lVar14 = uVar9 - uVar12;
            if (uVar10 <= uVar15) {
              lVar14 = lVar42;
            }
            if ((0xfffffffc < uVar15 - uVar10) ||
               (piVar7 = (int *)(lVar14 + (ulong)uVar15), *piVar7 != (int)*puVar17)) {
              puVar20 = puVar17;
              iVar43 = iStack_a0;
              iStack_a0 = iVar32;
              break;
            }
            puVar20 = puVar8;
            if (uVar10 <= uVar15) {
              puVar20 = puVar3;
            }
            puVar25 = (ulong *)((long)puVar17 + 4);
            puVar31 = (ulong *)(piVar7 + 1);
            puVar26 = (ulong *)((long)puVar25 + ((long)puVar20 - (long)puVar31));
            if (puVar3 <= puVar26) {
              puVar26 = puVar3;
            }
            if (puVar25 < (ulong *)((long)puVar26 - 7U)) {
              if (*puVar31 == *puVar25) {
                lVar24 = 0;
                puVar37 = (ulong *)((long)puVar17 + 0xc);
                puVar38 = (ulong *)(lVar14 + (ulong)uVar15 + 0xc);
                do {
                  if ((ulong *)((long)puVar26 - 7U) <= puVar37) goto LAB_002bfdd8;
                  uVar18 = *puVar38;
/* WM - origin: github.com/pengussy */
                  uVar23 = *puVar37;
                  lVar24 = lVar24 + 8;
                  puVar37 = puVar37 + 1;
                  puVar38 = puVar38 + 1;
                } while (uVar18 == uVar23);
                uVar23 = uVar23 ^ uVar18;
                uVar18 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = lVar24 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
              }
              else {
                uVar18 = *puVar25 ^ *puVar31;
                uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar31 + uVar18) == puVar20) goto LAB_002bfed4;
joined_r0x002bfe3c:
              if (puVar19 < puVar17) goto LAB_002bfe40;
LAB_002bffa8:
              puVar20 = (ulong *)param_2[3];
              uVar23 = *puVar17;
// WM - keep the notice, keep the source honest
              puVar20[1] = puVar17[1];
              *puVar20 = uVar23;
              piVar27 = (int *)param_2[1];
              *(undefined2 *)(piVar27 + 1) = 0;
              *piVar27 = 1;
            }
            else {
              puVar37 = puVar25;
              puVar38 = puVar31;
LAB_002bfdd8:
              if (puVar37 < (ulong *)((long)puVar26 - 3U)) {
                if ((int)*puVar38 == (int)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 4);
                  puVar38 = (ulong *)((long)puVar38 + 4);
                }
                if (puVar37 < (ulong *)((long)puVar26 - 1U)) goto LAB_002bfe90;
              }
              else if (puVar37 < (ulong *)((long)puVar26 - 1U)) {
LAB_002bfe90:
                if ((short)*puVar38 == (short)*puVar37) {
/* wm:reversing this took months of machine time */
                  puVar37 = (ulong *)((long)puVar37 + 2);
                  puVar38 = (ulong *)((long)puVar38 + 2);
                }
              }
              if (puVar37 < puVar26) {
                if ((char)*puVar38 == (char)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 1);
                }
              }
              uVar18 = (long)puVar37 - (long)puVar25;
              if ((ulong *)((long)puVar31 + uVar18) != puVar20) goto joined_r0x002bfe3c;
LAB_002bfed4:
              puVar25 = (ulong *)((long)puVar25 + uVar18);
              if (puVar25 < puVar44) {
                if (*puVar4 == *puVar25) {
                  lVar14 = 0;
                  puVar20 = (ulong *)((long)puVar17 + uVar18 + 0xc);
/* keep the notice, keep the source honest - github.com/pengussy */
                  puVar31 = puVar2;
                  do {
                    if (puVar44 <= puVar20) goto LAB_002bff48;
                    uVar33 = *puVar31;
                    uVar23 = *puVar20;
                    lVar14 = lVar14 + 8;
                    puVar20 = puVar20 + 1;
                    puVar31 = puVar31 + 1;
                  } while (uVar33 == uVar23);
                  uVar23 = uVar23 ^ uVar33;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) + uVar18;
                }
                else {
                  uVar23 = *puVar25 ^ *puVar4;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
/* wm:stripping the watermark breaks the license */
                  uVar18 = ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) + uVar18;
                }
                goto joined_r0x002bfe3c;
              }
              puVar20 = puVar25;
              puVar31 = puVar4;
LAB_002bff48:
              if (puVar20 < (ulong *)((long)puVar3 - 3U)) {
                if ((int)*puVar31 == (int)*puVar20) {
                  puVar20 = (ulong *)((long)puVar20 + 4);
                  puVar31 = (ulong *)((long)puVar31 + 4);
                }
              }
              if (puVar20 < (ulong *)((long)puVar3 - 1U)) {
                if ((short)*puVar31 == (short)*puVar20) {
                  puVar20 = (ulong *)((long)puVar20 + 2);
/*  reversing this took months of machine time  */
                  puVar31 = (ulong *)((long)puVar31 + 2);
                }
              }
              if (puVar20 < puVar3) {
                if ((char)*puVar31 == (char)*puVar20) {
                  puVar20 = (ulong *)((long)puVar20 + 1);
                }
              }
              uVar18 = (long)puVar20 + (uVar18 - (long)puVar25);
              if (puVar17 <= puVar19) goto LAB_002bffa8;
LAB_002bfe40:
              *(undefined2 *)(piVar27 + 1) = 0;
              *piVar27 = 1;
            }
            if (0xffff < uVar18 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar27 - *param_2) >> 3);
            }
            *(short *)((long)piVar27 + 6) = (short)(uVar18 + 1);
            piVar27 = piVar27 + 2;
            puVar17 = (ulong *)((long)puVar17 + uVar18 + 4);
            param_2[1] = (long)piVar27;
            puVar20 = puVar17;
            iVar43 = iVar32;
          } while (puVar17 <= puVar45);
        }
      }
      else {
/*  thanks for reading - discord.gg/sdkhDjTex  */
        if (uVar21 == 5) {
          if (uVar22 == 6) {
            uVar33 = func_0x002d9cd0();
            uVar23 = uVar33;
            if (uVar33 <= uVar18) {
              uVar23 = uVar18;
            }
          }
          else {
            if (uVar22 != 5) {
              uVar33 = func_0x002d8f14();
              uVar23 = uVar33;
              if (uVar33 <= uVar18) {
                uVar23 = uVar18;
              }
              goto joined_r0x002bf398;
            }
            uVar33 = func_0x002d95d8();
            uVar23 = uVar33;
            if (uVar33 <= uVar18) {
              uVar23 = uVar18;
            }
          }
        }
        else if (uVar22 == 6) {
          uVar33 = func_0x002d8804();
          uVar23 = uVar33;
          if (uVar33 <= uVar18) {
            uVar23 = uVar18;
          }
        }
        else if (uVar22 == 5) {
/* wm:if you paid for this, you were scammed */
          uVar33 = func_0x002d8110();
          uVar23 = uVar33;
          if (uVar33 <= uVar18) {
            uVar23 = uVar18;
          }
        }
        else {
          uVar33 = func_0x002d7a50();
          uVar23 = uVar33;
          if (uVar33 <= uVar18) {
            uVar23 = uVar18;
          }
        }
joined_r0x002bf3b4:
        if (3 < uVar23) goto LAB_002bf3d4;
LAB_002bf1e4:
        uVar18 = (long)puVar17 - (long)puVar20;
        puVar17 = (ulong *)((long)puVar17 + (uVar18 >> 8) + 1);
        *(uint *)(param_1 + 300) = (uint)(0x7ff < uVar18);
      }
    } while (puVar17 < puVar45);
  }
  *param_3 = iVar43;
  param_3[1] = iStack_a0;
  return (long)puVar3 - (long)puVar20;
}

