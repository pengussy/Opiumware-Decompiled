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
 *  file-id: 0x2c4d0c:3533efaa27
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

long FUN_002c4d0c(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

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
  undefined2 uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined4 uVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong *puVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  ulong *puVar27;
  int *piVar28;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  ulong *puVar29;
  undefined8 *puVar30;
  int iVar31;
  long lVar32;
  ulong *puVar33;
  ulong *puVar34;
  int iVar35;
  ulong *puVar36;
  ulong uVar37;
  ulong *puVar38;
  ulong *puVar39;
  ulong uVar40;
  ulong *puVar41;
  uint uVar42;
  ulong uVar43;
  undefined8 *puVar44;
  int iVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  int iStack_a0;
  ulong auStack_70 [2];
  
  puVar3 = (ulong *)((long)param_4 + param_5);
  puVar36 = puVar3 + -2;
  lVar46 = *(long *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x18);
  uVar23 = *(uint *)(param_1 + 0x110);
  if (uVar23 < 5) {
    uVar23 = 4;
  }
  if (5 < uVar23) {
    uVar23 = 6;
// WM - keep the notice, keep the source honest
  }
  uVar11 = *(uint *)(param_1 + 0x10c);
  uVar24 = uVar11;
  if (uVar11 < 5) {
    uVar24 = 4;
  }
  if (5 < uVar24) {
    uVar24 = 6;
  }
  iVar45 = *param_3;
  iStack_a0 = param_3[1];
  puVar20 = *(ulong **)(param_1 + 0xf8);
  puVar8 = (ulong *)*puVar20;
  uVar9 = puVar20[1];
  puVar4 = (ulong *)(lVar46 + (ulong)uVar10);
  puVar5 = (ulong *)(uVar9 + (uint)puVar20[3]);
  puVar20 = param_4;
  if ((((int)param_4 - (int)puVar4) - (int)puVar5) + (int)puVar8 == 0) {
    puVar20 = (ulong *)((long)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  uVar12 = *(uint *)(param_1 + 0x2c);
  uVar21 = (ulong)uVar12;
  iVar35 = (int)puVar36 - (int)(ulong *)(lVar46 + uVar21);
  iVar31 = 8;
  if (iVar35 + 1U < 8) {
    iVar31 = iVar35 + 1;
  }
  iVar35 = 0;
  if ((ulong *)(lVar46 + uVar21) <= puVar36) {
    iVar35 = iVar31;
  }
/* unlicensed copy if this notice is missing - github.com/pengussy */
  uVar25 = (ulong)(iVar35 + uVar12);
  if (uVar12 < iVar35 + uVar12) {
    lVar26 = *(long *)(param_1 + 0x70);
    lVar32 = *(long *)(param_1 + 0x38);
    uVar37 = *(ulong *)(param_1 + 0x60);
    uVar40 = (ulong)(0x38 - *(int *)(param_1 + 0x34));
    uVar12 = 0x18 - *(int *)(param_1 + 0x34);
    lVar15 = param_1 + 0x40;
    if (uVar11 < 5) {
      if (uVar23 == 6) {
        do {
          uVar17 = (*(long *)(lVar46 + uVar21) * -0x30e4432340650000 ^ uVar37) >> (uVar40 & 0x3f);
          uVar43 = (ulong)(((uint)(uVar17 >> 8) & 0xffffff) << (ulong)(uVar24 & 0x1f));
          Hint_Prefetch(lVar26 + uVar43 * 4,0,0,0);
          Hint_Prefetch(lVar32 + uVar43,0,0,0);
          *(int *)(lVar15 + (uVar21 & 7) * 4) = (int)uVar17;
          uVar21 = uVar21 + 1;
        } while (uVar25 != uVar21);
      }
      else if (uVar23 == 5) {
        do {
          uVar17 = (*(long *)(lVar46 + uVar21) * -0x30e4432345000000 ^ uVar37) >> (uVar40 & 0x3f);
          uVar43 = (ulong)(((uint)(uVar17 >> 8) & 0xffffff) << (ulong)(uVar24 & 0x1f));
          Hint_Prefetch(lVar26 + uVar43 * 4,0,0,0);
          Hint_Prefetch(lVar32 + uVar43,0,0,0);
          *(int *)(lVar15 + (uVar21 & 7) * 4) = (int)uVar17;
          uVar21 = uVar21 + 1;
        } while (uVar25 != uVar21);
      }
      else {
        do {
          uVar16 = (*(int *)(lVar46 + uVar21) * -0x61c8864f ^ (uint)uVar37) >>
                   (ulong)(uVar12 & 0x1f);
          uVar40 = (ulong)((uVar16 >> 8) << (ulong)(uVar24 & 0x1f));
          Hint_Prefetch(lVar26 + uVar40 * 4,0,0,0);
          Hint_Prefetch(lVar32 + uVar40,0,0,0);
          *(uint *)(lVar15 + (uVar21 & 7) * 4) = uVar16;
          uVar21 = uVar21 + 1;
/* stripping the watermark breaks the license */
        } while (uVar25 != uVar21);
      }
    }
    else {
      do {
        if (uVar23 == 6) {
          uVar17 = *(long *)(lVar46 + uVar21) * -0x30e4432340650000;
LAB_002c4e74:
          uVar16 = (uint)((uVar17 ^ uVar37) >> (uVar40 & 0x3f));
        }
        else {
          if (uVar23 == 5) {
            uVar17 = *(long *)(lVar46 + uVar21) * -0x30e4432345000000;
            goto LAB_002c4e74;
          }
          uVar16 = (*(int *)(lVar46 + uVar21) * -0x61c8864f ^ (uint)uVar37) >>
                   (ulong)(uVar12 & 0x1f);
        }
        uVar17 = (ulong)((uVar16 >> 8) << (ulong)(uVar24 & 0x1f));
        lVar1 = lVar26 + uVar17 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar32 + uVar17;
        Hint_Prefetch(lVar1,0,0,0);
        if (uVar11 != 5) {
          Hint_Prefetch(lVar1 + 0x20,0,0,0);
        }
        *(uint *)(lVar15 + (uVar21 & 7) * 4) = uVar16;
        uVar21 = uVar21 + 1;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      } while (uVar25 != uVar21);
    }
  }
  if (puVar20 < puVar36) {
    uVar12 = uVar10 + ((int)uVar9 - (int)puVar8);
    puVar22 = (ulong *)((long)puVar3 - 7);
    puVar18 = puVar3 + -4;
    puVar2 = (ulong *)((ulong)uVar10 + lVar46 + 8);
    do {
      iVar31 = (int)lVar46;
      uVar16 = (((int)puVar20 - iVar31) - iVar45) + 1;
      piVar28 = (int *)(uVar9 + (uVar16 - uVar12));
      if (uVar10 <= uVar16) {
        piVar28 = (int *)(lVar46 + (ulong)uVar16);
      }
      if ((uVar16 - uVar10 < 0xfffffffd) && (*piVar28 == *(int *)((long)puVar20 + 1U))) {
        puVar27 = puVar8;
        if (uVar10 <= uVar16) {
          puVar27 = puVar3;
        }
        lVar15 = func_0x002ad924((long)puVar20 + 5,piVar28 + 1,puVar3,puVar27,puVar4);
        uVar21 = lVar15 + 4;
// WM - more drops soon - github.com/pengussy
      }
      else {
        uVar21 = 0;
      }
      auStack_70[0] = 999999999;
      if (uVar23 == 6) {
        if (uVar24 == 6) {
          uVar37 = func_0x002db1a0(param_1,puVar20,puVar3,auStack_70);
          uVar25 = uVar37;
          if (uVar37 <= uVar21) {
            uVar25 = uVar21;
          }
          goto joined_r0x002c51d8;
        }
        if (uVar24 == 5) {
          uVar37 = func_0x002daaa8();
          uVar25 = uVar37;
          if (uVar37 <= uVar21) {
            uVar25 = uVar21;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          }
          goto joined_r0x002c51d8;
        }
        uVar37 = func_0x002da3e4();
        uVar25 = uVar37;
        if (uVar37 <= uVar21) {
          uVar25 = uVar21;
        }
joined_r0x002c51bc:
        if (uVar25 < 4) goto LAB_002c5008;
LAB_002c51f8:
        uVar40 = auStack_70[0];
        puVar27 = puVar20;
        if (uVar37 <= uVar21) {
          uVar40 = 1;
          puVar27 = (ulong *)((long)puVar20 + 1U);
        }
joined_r0x002c521c:
        do {
          puVar33 = puVar27;
          uVar21 = uVar25;
          puVar29 = puVar20;
          uVar37 = uVar40;
          if (puVar36 <= puVar29) break;
          puVar20 = (ulong *)((long)puVar29 + 1);
          uVar16 = ((int)puVar20 - iVar31) - iVar45;
          piVar28 = (int *)(uVar9 + (uVar16 - uVar12));
          if (uVar10 <= uVar16) {
            piVar28 = (int *)(lVar46 + (ulong)uVar16);
          }
          if (uVar16 - uVar10 < 0xfffffffd) {
            if (*piVar28 == *(int *)puVar20) {
              puVar27 = puVar8;
              if (uVar10 <= uVar16) {
                puVar27 = puVar3;
              }
              puVar41 = (ulong *)((long)puVar29 + 5);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              puVar34 = (ulong *)(piVar28 + 1);
              puVar6 = (ulong *)((long)puVar41 + ((long)puVar27 - (long)puVar34));
              if (puVar3 <= puVar6) {
                puVar6 = puVar3;
              }
              if (puVar41 < (ulong *)((long)puVar6 - 7U)) {
                if (*puVar34 == *puVar41) {
                  lVar15 = 0;
                  puVar38 = (ulong *)((long)puVar29 + 0xd);
                  puVar39 = (ulong *)(piVar28 + 3);
                  do {
                    if ((ulong *)((long)puVar6 - 7U) <= puVar38) goto LAB_002c53c4;
                    uVar40 = *puVar39;
                    uVar25 = *puVar38;
                    lVar15 = lVar15 + 8;
                    puVar38 = puVar38 + 1;
                    puVar39 = puVar39 + 1;
                  } while (uVar40 == uVar25);
                  uVar25 = uVar25 ^ uVar40;
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  uVar25 = lVar15 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
                }
                else {
                  uVar25 = *puVar41 ^ *puVar34;
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  uVar25 = (ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3;
                }
              }
              else {
                puVar38 = puVar41;
                puVar39 = puVar34;
LAB_002c53c4:
                if (puVar38 < (ulong *)((long)puVar6 - 3U)) {
                  if ((int)*puVar39 == (int)*puVar38) {
                    puVar38 = (ulong *)((long)puVar38 + 4);
                    puVar39 = (ulong *)((long)puVar39 + 4);
                  }
                  if (puVar38 < (ulong *)((long)puVar6 - 1U)) goto LAB_002c5468;
                }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                else if (puVar38 < (ulong *)((long)puVar6 - 1U)) {
LAB_002c5468:
                  if ((short)*puVar39 == (short)*puVar38) {
                    puVar38 = (ulong *)((long)puVar38 + 2);
                    puVar39 = (ulong *)((long)puVar39 + 2);
                  }
                }
                if (puVar38 < puVar6) {
                  if ((char)*puVar39 == (char)*puVar38) {
                    puVar38 = (ulong *)((long)puVar38 + 1);
                  }
                }
                uVar25 = (long)puVar38 - (long)puVar41;
              }
              if ((ulong *)((long)puVar34 + uVar25) == puVar27) {
                puVar41 = (ulong *)((long)puVar41 + uVar25);
                if (puVar41 < puVar22) {
                  if (*puVar4 == *puVar41) {
                    lVar15 = 0;
                    puVar27 = (ulong *)((long)puVar29 + uVar25 + 0xd);
                    puVar34 = puVar2;
                    do {
                      if (puVar22 <= puVar27) goto LAB_002c5528;
                      uVar17 = *puVar34;
                      uVar40 = *puVar27;
                      lVar15 = lVar15 + 8;
                      puVar27 = puVar27 + 1;
                      puVar34 = puVar34 + 1;
                    } while (uVar17 == uVar40);
/* wm:reversing this took months of machine time */
                    uVar40 = uVar40 ^ uVar17;
                    uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1
                    ;
                    uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2
                    ;
                    uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
                    uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar40 & 0xffff0000ffff) << 0x10;
                    uVar40 = lVar15 + ((ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3);
                  }
                  else {
                    uVar40 = *puVar41 ^ *puVar4;
                    uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1
                    ;
                    uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2
                    ;
                    uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
                    uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar40 & 0xffff0000ffff) << 0x10;
                    uVar40 = (ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3;
                  }
                  uVar25 = uVar40 + uVar25;
                }
                else {
                  puVar27 = puVar41;
                  puVar34 = puVar4;
LAB_002c5528:
/* no support for modified copies - github.com/pengussy */
                  if (puVar27 < (ulong *)((long)puVar3 - 3U)) {
                    if ((int)*puVar34 == (int)*puVar27) {
                      puVar27 = (ulong *)((long)puVar27 + 4);
                      puVar34 = (ulong *)((long)puVar34 + 4);
                    }
                  }
                  if (puVar27 < (ulong *)((long)puVar3 - 1U)) {
                    if (*(short *)puVar34 == *(short *)puVar27) {
                      puVar27 = (ulong *)((long)puVar27 + 2);
                      puVar34 = (ulong *)((long)puVar34 + 2);
                    }
                  }
                  if (puVar27 < puVar3) {
                    if ((char)*puVar34 == (char)*puVar27) {
                      puVar27 = (ulong *)((long)puVar27 + 1);
                    }
// do not claim this as your own
                  }
                  uVar25 = (long)puVar27 + (uVar25 - (long)puVar41);
                }
              }
              if (uVar25 < 0xfffffffffffffffc) {
                if ((int)LZCOUNT((int)uVar37) + (int)uVar21 * 3 + -0x1e < (int)(uVar25 + 4) * 3) {
                  uVar37 = 1;
                  puVar33 = puVar20;
                  uVar21 = uVar25 + 4;
                }
              }
            }
          }
          auStack_70[0] = 999999999;
          if (uVar23 == 6) {
            if (uVar24 == 6) {
              uVar25 = func_0x002db1a0(param_1,puVar20,puVar3,auStack_70);
            }
            else if (uVar24 == 5) {
              uVar25 = func_0x002daaa8(param_1,puVar20,puVar3);
            }
            else {
              uVar25 = func_0x002da3e4(param_1,puVar20,puVar3);
            }
          }
          else if (uVar23 == 5) {
            if (uVar24 == 6) {
              uVar25 = func_0x002d9cd0(param_1,puVar20,puVar3);
            }
            else if (uVar24 == 5) {
              uVar25 = func_0x002d95d8(param_1,puVar20,puVar3);
            }
            else {
              uVar25 = func_0x002d8f14(param_1,puVar20,puVar3);
            }
          }
          else if (uVar24 == 6) {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
            uVar25 = func_0x002d8804(param_1,puVar20,puVar3);
          }
          else if (uVar24 == 5) {
            uVar25 = func_0x002d8110(param_1,puVar20,puVar3);
          }
          else {
            uVar25 = func_0x002d7a50(param_1,puVar20,puVar3);
          }
          if (3 < uVar25) {
            uVar40 = auStack_70[0];
            puVar27 = puVar20;
            if ((int)LZCOUNT((int)uVar37) + (int)uVar21 * 4 + -0x1b <
                (int)LZCOUNT((int)auStack_70[0]) + (int)uVar25 * 4 + -0x1f) goto joined_r0x002c521c;
          }
          if (puVar36 <= puVar20) break;
          puVar20 = (ulong *)((long)puVar29 + 2);
          uVar16 = ((int)puVar20 - iVar31) - iVar45;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          piVar28 = (int *)(uVar9 + (uVar16 - uVar12));
          if (uVar10 <= uVar16) {
            piVar28 = (int *)(lVar46 + (ulong)uVar16);
          }
          if (uVar16 - uVar10 < 0xfffffffd) {
            if (*piVar28 != *(int *)puVar20) goto LAB_002c582c;
            puVar27 = puVar8;
            if (uVar10 <= uVar16) {
              puVar27 = puVar3;
            }
            uVar25 = func_0x002ad924((long)puVar29 + 6,piVar28 + 1,puVar3,puVar27,puVar4);
            if (uVar25 < 0xfffffffffffffffc) {
              if ((int)LZCOUNT((int)uVar37) + (int)uVar21 * 4 + -0x1e < (int)(uVar25 + 4) * 4) {
                uVar37 = 1;
                puVar33 = puVar20;
                uVar21 = uVar25 + 4;
              }
              goto LAB_002c582c;
            }
            if (uVar23 != 6) goto LAB_002c5844;
LAB_002c58c8:
            auStack_70[0] = 999999999;
            if (uVar24 == 6) {
              uVar25 = func_0x002db1a0(param_1,puVar20,puVar3,auStack_70);
            }
            else if (uVar24 == 5) {
              uVar25 = func_0x002daaa8(param_1,puVar20,puVar3);
            }
            else {
              uVar25 = func_0x002da3e4(param_1,puVar20,puVar3);
// WM - thanks for reading - discord.gg/sdkhDjTex
            }
          }
          else {
LAB_002c582c:
            if (uVar23 == 6) goto LAB_002c58c8;
LAB_002c5844:
            auStack_70[0] = 999999999;
            if (uVar23 == 5) {
              if (uVar24 == 6) {
                uVar25 = func_0x002d9cd0(param_1,puVar20,puVar3);
              }
              else if (uVar24 == 5) {
                uVar25 = func_0x002d95d8(param_1,puVar20,puVar3);
              }
              else {
                uVar25 = func_0x002d8f14(param_1,puVar20,puVar3);
              }
            }
            else if (uVar24 == 6) {
              uVar25 = func_0x002d8804(param_1,puVar20,puVar3);
            }
            else if (uVar24 == 5) {
              uVar25 = func_0x002d8110(param_1,puVar20,puVar3);
            }
            else {
              uVar25 = func_0x002d7a50(param_1,puVar20,puVar3);
            }
          }
          if (uVar25 < 4) break;
          uVar40 = auStack_70[0];
          puVar27 = puVar20;
        } while ((int)LZCOUNT((int)uVar37) + (int)uVar21 * 4 + -0x18 <
                 (int)LZCOUNT((int)auStack_70[0]) + (int)uVar25 * 4 + -0x1f);
        uVar19 = (undefined4)uVar37;
        if (uVar37 < 4) {
          puVar20 = (ulong *)param_2[3];
joined_r0x002c5a78:
/* WM - more drops soon - github.com/pengussy */
          uVar25 = (long)puVar33 - (long)param_4;
          if (puVar18 < puVar33) goto LAB_002c5a7c;
LAB_002c5a04:
          uVar37 = *param_4;
          puVar20[1] = param_4[1];
          *puVar20 = uVar37;
          if (0x10 < uVar25) {
            lVar15 = param_2[3];
            uVar37 = param_4[2];
            *(ulong *)(lVar15 + 0x18) = param_4[3];
            *(ulong *)(lVar15 + 0x10) = uVar37;
            if (uVar25 - 0x10 < 0x11) goto LAB_002c5a2c;
            puVar20 = (ulong *)(lVar15 + 0x20);
            puVar27 = param_4 + 6;
            do {
              uVar37 = puVar27[-2];
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
              puVar20[1] = puVar27[-1];
              *puVar20 = uVar37;
              uVar37 = *puVar27;
              puVar20[3] = puVar27[1];
              puVar20[2] = uVar37;
              puVar20 = puVar20 + 4;
              puVar27 = puVar27 + 4;
            } while (puVar20 < (ulong *)(lVar15 + uVar25));
            goto LAB_002c5bec;
          }
LAB_002c5a2c:
          param_2[3] = param_2[3] + uVar25;
          piVar28 = (int *)param_2[1];
        }
        else {
          uVar25 = (long)puVar33 + (-0xfffffffd - (uVar37 + lVar46));
          lVar15 = uVar9 - uVar12;
          puVar20 = puVar5;
          if (uVar10 <= (uint)uVar25) {
            lVar15 = lVar46;
            puVar20 = puVar4;
          }
          iStack_a0 = iVar45;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          if ((puVar33 <= param_4) ||
             (uVar25 = uVar25 & 0xffffffff, (ulong *)(lVar15 + uVar25) <= puVar20)) {
            iVar45 = uVar19 + -3;
            puVar20 = (ulong *)param_2[3];
            goto joined_r0x002c5a78;
          }
          puVar27 = (ulong *)(lVar15 + uVar25);
          puVar29 = puVar33;
          do {
            puVar33 = (ulong *)((long)puVar29 + -1);
            puVar27 = (ulong *)((long)puVar27 + -1);
            if (*(char *)puVar33 != *(char *)puVar27) {
              uVar25 = (long)puVar29 - (long)param_4;
              puVar20 = (ulong *)param_2[3];
              puVar33 = puVar29;
              goto joined_r0x002c5b0c;
            }
            uVar21 = uVar21 + 1;
          } while ((param_4 < puVar33) && (puVar29 = puVar33, puVar20 < puVar27));
          uVar25 = (long)puVar33 - (long)param_4;
          puVar20 = (ulong *)param_2[3];
/*  donate: donate/README.md  */
joined_r0x002c5b0c:
          iVar45 = uVar19 + -3;
          if (puVar33 <= puVar18) goto LAB_002c5a04;
LAB_002c5a7c:
          puVar27 = puVar20;
          if (param_4 <= puVar18) {
            puVar27 = (ulong *)((long)puVar20 + ((long)puVar18 - (long)param_4));
            uVar37 = *param_4;
            puVar29 = puVar20 + 2;
            puVar20[1] = param_4[1];
            *puVar20 = uVar37;
            if (0x10 < (ulong)((long)puVar18 - (long)param_4)) {
              do {
                uVar37 = param_4[2];
                puVar29[1] = param_4[3];
                *puVar29 = uVar37;
                uVar37 = param_4[4];
// chat: discord.gg/sdkhDjTex
                puVar29[3] = param_4[5];
                puVar29[2] = uVar37;
                puVar29 = puVar29 + 4;
                param_4 = param_4 + 4;
              } while (puVar29 < puVar27);
            }
            param_4 = puVar18;
          }
          if (param_4 < puVar33) {
            uVar37 = (long)puVar33 - (long)param_4;
            if ((7 < uVar37) && (0x3f < (ulong)((long)puVar27 - (long)param_4))) {
              if (uVar37 < 0x40) {
                uVar17 = 0;
              }
              else {
                uVar17 = uVar37 & 0xffffffffffffffc0;
                puVar20 = puVar27 + 4;
                puVar29 = param_4 + 4;
                uVar40 = uVar17;
                do {
                  uVar43 = puVar29[-4];
                  uVar48 = puVar29[-1];
                  uVar47 = puVar29[-2];
/* wm:more drops soon - github.com/pengussy */
                  uVar50 = puVar29[1];
                  uVar49 = *puVar29;
                  uVar52 = puVar29[3];
                  uVar51 = puVar29[2];
                  puVar20[-3] = puVar29[-3];
                  puVar20[-4] = uVar43;
                  puVar20[-1] = uVar48;
                  puVar20[-2] = uVar47;
                  puVar20[1] = uVar50;
                  *puVar20 = uVar49;
                  puVar20[3] = uVar52;
                  puVar20[2] = uVar51;
                  uVar40 = uVar40 - 0x40;
                  puVar20 = puVar20 + 8;
                  puVar29 = puVar29 + 8;
                } while (uVar40 != 0);
                if (uVar37 == uVar17) goto LAB_002c5bec;
                if ((uVar37 & 0x38) == 0) {
                  puVar27 = (ulong *)((long)puVar27 + uVar17);
                  param_4 = (ulong *)((long)param_4 + uVar17);
                  goto LAB_002c5bdc;
                }
              }
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
              uVar40 = uVar37 & 0xfffffffffffffff8;
              lVar15 = uVar17 - uVar40;
              puVar30 = (undefined8 *)((long)puVar27 + uVar17);
              puVar44 = (undefined8 *)((long)param_4 + uVar17);
              do {
                *puVar30 = *puVar44;
                lVar15 = lVar15 + 8;
                puVar30 = puVar30 + 1;
                puVar44 = puVar44 + 1;
              } while (lVar15 != 0);
              puVar27 = (ulong *)((long)puVar27 + uVar40);
              param_4 = (ulong *)((long)param_4 + uVar40);
              if (uVar37 == uVar40) goto LAB_002c5bec;
            }
LAB_002c5bdc:
            do {
              puVar20 = (ulong *)((long)param_4 + 1);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
              *(char *)puVar27 = (char)*param_4;
              puVar27 = (ulong *)((long)puVar27 + 1);
              param_4 = puVar20;
            } while (puVar20 != puVar33);
          }
LAB_002c5bec:
          param_2[3] = param_2[3] + uVar25;
          piVar28 = (int *)param_2[1];
          if (0xffff < uVar25) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
          }
        }
        *(short *)(piVar28 + 1) = (short)uVar25;
        *piVar28 = uVar19;
        uVar13 = (undefined2)(uVar21 - 3);
        if (uVar21 - 3 < 0x10000) {
          *(undefined2 *)((long)piVar28 + 6) = uVar13;
          param_2[1] = (long)(piVar28 + 2);
          iVar35 = *(int *)(param_1 + 300);
/* WM - origin: github.com/pengussy */
        }
        else {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
          *(undefined2 *)((long)piVar28 + 6) = uVar13;
          param_2[1] = (long)(piVar28 + 2);
          iVar35 = *(int *)(param_1 + 300);
        }
        if (iVar35 != 0) {
          uVar16 = *(uint *)(param_1 + 0x2c);
          uVar25 = (ulong)uVar16;
          iVar14 = (int)puVar36 - (int)(ulong *)(lVar46 + uVar25);
          iVar35 = 8;
          if (iVar14 + 1U < 8) {
            iVar35 = iVar14 + 1;
          }
          iVar14 = 0;
          if ((ulong *)(lVar46 + uVar25) <= puVar36) {
            iVar14 = iVar35;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          }
          if (uVar16 < iVar14 + uVar16) {
            lVar15 = *(long *)(param_1 + 0x70);
            lVar26 = *(long *)(param_1 + 0x38);
            iVar35 = *(int *)(param_1 + 0x34);
            uVar37 = *(ulong *)(param_1 + 0x60);
            do {
              if (uVar23 == 5) {
                uVar40 = *(long *)(lVar46 + uVar25) * -0x30e4432345000000;
LAB_002c5ce8:
                uVar40 = (uVar40 ^ uVar37) >> ((ulong)(0x38 - iVar35) & 0x3f);
                uVar42 = (uint)uVar40;
                uVar40 = (ulong)(((uint)(uVar40 >> 8) & 0xffffff) << (ulong)(uVar24 & 0x1f));
                lVar32 = lVar15 + uVar40 * 4;
                Hint_Prefetch(lVar32,0,0,0);
                if (4 < uVar11) goto LAB_002c5d34;
LAB_002c5ca8:
                lVar32 = lVar26 + uVar40;
LAB_002c5cac:
                Hint_Prefetch(lVar32,0,0,0);
              }
              else {
                if (uVar23 == 6) {
                  uVar40 = *(long *)(lVar46 + uVar25) * -0x30e4432340650000;
                  goto LAB_002c5ce8;
                }
                uVar42 = (*(int *)(lVar46 + uVar25) * -0x61c8864f ^ (uint)uVar37) >>
                         (ulong)(0x18U - iVar35 & 0x1f);
                uVar40 = (ulong)((uVar42 >> 8) << (ulong)(uVar24 & 0x1f));
                lVar32 = lVar15 + uVar40 * 4;
                Hint_Prefetch(lVar32,0,0,0);
                if (uVar11 < 5) goto LAB_002c5ca8;
LAB_002c5d34:
                Hint_Prefetch(lVar32 + 0x40,0,0,0);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                lVar32 = lVar26 + uVar40;
                Hint_Prefetch(lVar32,0,0,0);
                if (uVar11 != 5) {
                  lVar32 = lVar32 + 0x20;
                  goto LAB_002c5cac;
                }
              }
              *(uint *)(param_1 + 0x40 + (uVar25 & 7) * 4) = uVar42;
              uVar25 = uVar25 + 1;
            } while (iVar14 + uVar16 != uVar25);
          }
          *(undefined4 *)(param_1 + 300) = 0;
        }
        piVar28 = piVar28 + 2;
        param_4 = (ulong *)((long)puVar33 + uVar21);
        if (puVar36 < param_4) {
          puVar20 = param_4;
        }
        else {
          do {
            iVar35 = iStack_a0;
/* watermarked copy - do not remove */
            iStack_a0 = iVar45;
            uVar16 = ((int)param_4 - iVar31) - iVar35;
            lVar15 = uVar9 - uVar12;
            if (uVar10 <= uVar16) {
              lVar15 = lVar46;
            }
            if ((0xfffffffc < uVar16 - uVar10) ||
               (piVar7 = (int *)(lVar15 + (ulong)uVar16), *piVar7 != (int)*param_4)) {
              puVar20 = param_4;
              iVar45 = iStack_a0;
              iStack_a0 = iVar35;
              break;
            }
            puVar20 = puVar8;
            if (uVar10 <= uVar16) {
              puVar20 = puVar3;
            }
            puVar27 = (ulong *)((long)param_4 + 4);
            puVar29 = (ulong *)(piVar7 + 1);
            puVar33 = (ulong *)((long)puVar27 + ((long)puVar20 - (long)puVar29));
            if (puVar3 <= puVar33) {
              puVar33 = puVar3;
            }
            if (puVar27 < (ulong *)((long)puVar33 - 7U)) {
              if (*puVar29 == *puVar27) {
                lVar26 = 0;
                puVar41 = (ulong *)((long)param_4 + 0xc);
                puVar34 = (ulong *)(lVar15 + (ulong)uVar16 + 0xc);
/* do not claim this as your own - github.com/pengussy */
                do {
                  if ((ulong *)((long)puVar33 - 7U) <= puVar41) goto LAB_002c5e48;
                  uVar21 = *puVar34;
                  uVar25 = *puVar41;
                  lVar26 = lVar26 + 8;
                  puVar41 = puVar41 + 1;
                  puVar34 = puVar34 + 1;
                } while (uVar21 == uVar25);
                uVar25 = uVar25 ^ uVar21;
                uVar21 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar26 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              }
              else {
                uVar21 = *puVar27 ^ *puVar29;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar29 + uVar21) == puVar20) goto LAB_002c5f48;
joined_r0x002c5eac:
              if (puVar18 < param_4) goto LAB_002c5eb0;
LAB_002c601c:
              puVar20 = (ulong *)param_2[3];
              uVar25 = *param_4;
              puVar20[1] = param_4[1];
              *puVar20 = uVar25;
              piVar28 = (int *)param_2[1];
              *(undefined2 *)(piVar28 + 1) = 0;
              *piVar28 = 1;
            }
            else {
              puVar41 = puVar27;
              puVar34 = puVar29;
LAB_002c5e48:
              if (puVar41 < (ulong *)((long)puVar33 - 3U)) {
                if ((int)*puVar34 == (int)*puVar41) {
                  puVar41 = (ulong *)((long)puVar41 + 4);
                  puVar34 = (ulong *)((long)puVar34 + 4);
                }
// WM - if you paid for this, you were scammed
                if (puVar41 < (ulong *)((long)puVar33 - 1U)) goto LAB_002c5f04;
              }
              else if (puVar41 < (ulong *)((long)puVar33 - 1U)) {
LAB_002c5f04:
                if ((short)*puVar34 == (short)*puVar41) {
                  puVar41 = (ulong *)((long)puVar41 + 2);
                  puVar34 = (ulong *)((long)puVar34 + 2);
                }
              }
              if (puVar41 < puVar33) {
                if ((char)*puVar34 == (char)*puVar41) {
                  puVar41 = (ulong *)((long)puVar41 + 1);
                }
              }
              uVar21 = (long)puVar41 - (long)puVar27;
              if ((ulong *)((long)puVar29 + uVar21) != puVar20) goto joined_r0x002c5eac;
LAB_002c5f48:
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
              puVar27 = (ulong *)((long)puVar27 + uVar21);
              if (puVar27 < puVar22) {
                if (*puVar4 == *puVar27) {
                  lVar15 = 0;
                  puVar20 = (ulong *)((long)param_4 + uVar21 + 0xc);
                  puVar29 = puVar2;
                  do {
                    if (puVar22 <= puVar20) goto LAB_002c5fbc;
                    uVar37 = *puVar29;
                    uVar25 = *puVar20;
                    lVar15 = lVar15 + 8;
                    puVar20 = puVar20 + 1;
                    puVar29 = puVar29 + 1;
                  } while (uVar37 == uVar25);
                  uVar25 = uVar25 ^ uVar37;
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  uVar21 = lVar15 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) + uVar21;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                }
                else {
                  uVar25 = *puVar27 ^ *puVar4;
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  uVar21 = ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) + uVar21;
                }
                goto joined_r0x002c5eac;
              }
              puVar20 = puVar27;
              puVar29 = puVar4;
LAB_002c5fbc:
              if (puVar20 < (ulong *)((long)puVar3 - 3U)) {
                if ((int)*puVar29 == (int)*puVar20) {
                  puVar20 = (ulong *)((long)puVar20 + 4);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                  puVar29 = (ulong *)((long)puVar29 + 4);
                }
              }
              if (puVar20 < (ulong *)((long)puVar3 - 1U)) {
                if (*(short *)puVar29 == *(short *)puVar20) {
                  puVar20 = (ulong *)((long)puVar20 + 2);
                  puVar29 = (ulong *)((long)puVar29 + 2);
                }
              }
              if (puVar20 < puVar3) {
                if ((char)*puVar29 == (char)*puVar20) {
                  puVar20 = (ulong *)((long)puVar20 + 1);
                }
              }
              uVar21 = (long)puVar20 + (uVar21 - (long)puVar27);
              if (param_4 <= puVar18) goto LAB_002c601c;
LAB_002c5eb0:
              *(undefined2 *)(piVar28 + 1) = 0;
              *piVar28 = 1;
            }
            if (0xffff < uVar21 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
            }
            *(short *)((long)piVar28 + 6) = (short)(uVar21 + 1);
            piVar28 = piVar28 + 2;
            param_4 = (ulong *)((long)param_4 + uVar21 + 4);
            param_2[1] = (long)piVar28;
            puVar20 = param_4;
            iVar45 = iVar35;
          } while (param_4 <= puVar36);
        }
      }
// reversing this took months of machine time
      else {
        if (uVar23 == 5) {
          if (uVar24 == 6) {
            uVar37 = func_0x002d9cd0();
            uVar25 = uVar37;
            if (uVar37 <= uVar21) {
              uVar25 = uVar21;
            }
          }
          else {
            if (uVar24 != 5) {
              uVar37 = func_0x002d8f14();
              uVar25 = uVar37;
              if (uVar37 <= uVar21) {
                uVar25 = uVar21;
              }
              goto joined_r0x002c51bc;
            }
            uVar37 = func_0x002d95d8();
            uVar25 = uVar37;
            if (uVar37 <= uVar21) {
              uVar25 = uVar21;
            }
          }
        }
        else if (uVar24 == 6) {
          uVar37 = func_0x002d8804();
          uVar25 = uVar37;
          if (uVar37 <= uVar21) {
            uVar25 = uVar21;
          }
        }
        else if (uVar24 == 5) {
          uVar37 = func_0x002d8110();
          uVar25 = uVar37;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          if (uVar37 <= uVar21) {
            uVar25 = uVar21;
          }
        }
        else {
          uVar37 = func_0x002d7a50();
          uVar25 = uVar37;
          if (uVar37 <= uVar21) {
            uVar25 = uVar21;
          }
        }
joined_r0x002c51d8:
        if (3 < uVar25) goto LAB_002c51f8;
LAB_002c5008:
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar20 - (long)param_4));
        puVar20 = (ulong *)((long)puVar20 + ((ulong)((long)puVar20 - (long)param_4) >> 8) + 1);
      }
    } while (puVar20 < puVar36);
/*  keep the notice, keep the source honest  */
  }
  *param_3 = iVar45;
  param_3[1] = iStack_a0;
  return (long)puVar3 - (long)param_4;
}

