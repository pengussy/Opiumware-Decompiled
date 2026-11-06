/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2cca18:661b7a5a03
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

long FUN_002cca18(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined2 uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined4 uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  int *piVar26;
  ulong *puVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  ulong *puVar32;
  int iVar33;
// proprietary - see LICENSE - do not sell
  long lVar34;
  long lVar35;
  ulong uVar36;
  ulong *puVar37;
  ulong *puVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 *puVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  uint uStack_b4;
  ulong auStack_70 [2];
  
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar20 = puVar2 + -2;
  lVar10 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar8 = (ulong)uVar7;
  uVar9 = *(uint *)(param_1 + 0x1c);
  uVar12 = *(uint *)(param_1 + 0x100);
  uVar29 = *(uint *)(param_1 + 0x110);
  if (uVar29 < 5) {
    uVar29 = 4;
  }
  if (5 < uVar29) {
    uVar29 = 6;
  }
  uVar13 = *(uint *)(param_1 + 0x10c);
  uVar30 = uVar13;
  if (uVar13 < 5) {
    uVar30 = 4;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  }
  if (5 < uVar30) {
    uVar30 = 6;
  }
  uVar43 = *param_3;
  uStack_b4 = param_3[1];
  *(undefined4 *)(param_1 + 300) = 0;
  puVar3 = (ulong *)(lVar10 + uVar8);
  puVar25 = param_4;
  if (param_4 == puVar3) {
    puVar25 = (ulong *)((long)param_4 + 1);
  }
  uVar42 = *(uint *)(param_1 + 0x2c);
  uVar22 = (ulong)uVar42;
  iVar15 = (int)puVar20 - (int)(ulong *)(lVar10 + uVar22);
  iVar33 = 8;
  if (iVar15 + 1U < 8) {
    iVar33 = iVar15 + 1;
/* wm:chat: discord.gg/sdkhDjTex */
  }
  iVar15 = 0;
  if ((ulong *)(lVar10 + uVar22) <= puVar20) {
    iVar15 = iVar33;
  }
  uVar31 = (ulong)(iVar15 + uVar42);
  if (uVar42 < iVar15 + uVar42) {
    lVar34 = *(long *)(param_1 + 0x70);
    lVar35 = *(long *)(param_1 + 0x38);
    uVar36 = *(ulong *)(param_1 + 0x60);
    uVar40 = (ulong)(0x38 - *(int *)(param_1 + 0x34));
    uVar42 = 0x18 - *(int *)(param_1 + 0x34);
    lVar16 = param_1 + 0x40;
    if (uVar13 < 5) {
      if (uVar29 == 6) {
        do {
          uVar19 = (*(long *)(lVar10 + uVar22) * -0x30e4432340650000 ^ uVar36) >> (uVar40 & 0x3f);
          uVar17 = (ulong)(((uint)(uVar19 >> 8) & 0xffffff) << (ulong)(uVar30 & 0x1f));
          Hint_Prefetch(lVar34 + uVar17 * 4,0,0,0);
          Hint_Prefetch(lVar35 + uVar17,0,0,0);
/* more drops soon - github.com/pengussy - github.com/pengussy */
          *(int *)(lVar16 + (uVar22 & 7) * 4) = (int)uVar19;
          uVar22 = uVar22 + 1;
        } while (uVar31 != uVar22);
      }
      else if (uVar29 == 5) {
        do {
          uVar19 = (*(long *)(lVar10 + uVar22) * -0x30e4432345000000 ^ uVar36) >> (uVar40 & 0x3f);
          uVar17 = (ulong)(((uint)(uVar19 >> 8) & 0xffffff) << (ulong)(uVar30 & 0x1f));
          Hint_Prefetch(lVar34 + uVar17 * 4,0,0,0);
          Hint_Prefetch(lVar35 + uVar17,0,0,0);
          *(int *)(lVar16 + (uVar22 & 7) * 4) = (int)uVar19;
          uVar22 = uVar22 + 1;
        } while (uVar31 != uVar22);
      }
      else {
        do {
          uVar18 = (*(int *)(lVar10 + uVar22) * -0x61c8864f ^ (uint)uVar36) >>
                   (ulong)(uVar42 & 0x1f);
          uVar40 = (ulong)((uVar18 >> 8) << (ulong)(uVar30 & 0x1f));
          Hint_Prefetch(lVar34 + uVar40 * 4,0,0,0);
          Hint_Prefetch(lVar35 + uVar40,0,0,0);
          *(uint *)(lVar16 + (uVar22 & 7) * 4) = uVar18;
          uVar22 = uVar22 + 1;
        } while (uVar31 != uVar22);
      }
    }
    else {
      do {
        if (uVar29 == 6) {
          uVar19 = *(long *)(lVar10 + uVar22) * -0x30e4432340650000;
LAB_002ccb70:
          uVar18 = (uint)((uVar19 ^ uVar36) >> (uVar40 & 0x3f));
        }
        else {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          if (uVar29 == 5) {
            uVar19 = *(long *)(lVar10 + uVar22) * -0x30e4432345000000;
            goto LAB_002ccb70;
          }
          uVar18 = (*(int *)(lVar10 + uVar22) * -0x61c8864f ^ (uint)uVar36) >>
                   (ulong)(uVar42 & 0x1f);
        }
        uVar19 = (ulong)((uVar18 >> 8) << (ulong)(uVar30 & 0x1f));
        lVar1 = lVar34 + uVar19 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar35 + uVar19;
        Hint_Prefetch(lVar1,0,0,0);
        if (uVar13 != 5) {
          Hint_Prefetch(lVar1 + 0x20,0,0,0);
        }
        *(uint *)(lVar16 + (uVar22 & 7) * 4) = uVar18;
        uVar22 = uVar22 + 1;
      } while (uVar31 != uVar22);
    }
  }
  if (puVar25 < puVar20) {
// WM - reversing this took months of machine time
    puVar4 = (ulong *)(lVar11 + uVar8);
    uVar12 = 1 << (ulong)(uVar12 & 0x1f);
    puVar23 = puVar2 + -4;
    do {
      iVar15 = (int)puVar25 - (int)lVar10;
      iVar33 = iVar15 + 1;
      iVar6 = iVar33 - uVar12;
      if ((uint)(iVar33 - *(int *)(param_1 + 0x1c)) <= uVar12 || *(int *)(param_1 + 0x28) != 0) {
        iVar6 = *(int *)(param_1 + 0x1c);
      }
      uVar42 = iVar33 - uVar43;
      lVar16 = lVar11;
      if (uVar7 <= uVar42) {
        lVar16 = lVar10;
      }
      if (((uint)(iVar33 - iVar6) < uVar43 || 0xfffffffc < uVar42 - uVar7) ||
         (*(int *)((long)puVar25 + 1U) != *(int *)(lVar16 + (ulong)uVar42))) {
        uVar22 = 0;
      }
      else {
        puVar32 = puVar4;
        if (uVar7 <= uVar42) {
          puVar32 = puVar2;
/* wm:proprietary - see LICENSE - do not sell */
        }
        lVar16 = func_0x002ad924((long)puVar25 + 5,(int *)(lVar16 + (ulong)uVar42) + 1,puVar2,
                                 puVar32,puVar3);
        uVar22 = lVar16 + 4;
      }
      auStack_70[0] = 999999999;
      if (uVar29 == 6) {
        if (uVar30 == 6) {
          uVar36 = func_0x002d6450(param_1,puVar25,puVar2,auStack_70);
          uVar31 = uVar36;
          if (uVar36 <= uVar22) {
            uVar31 = uVar22;
          }
        }
        else {
          if (uVar30 == 5) {
            uVar36 = func_0x002d5e3c(param_1,puVar25,puVar2);
            uVar31 = uVar36;
            if (uVar36 <= uVar22) {
              uVar31 = uVar22;
            }
            goto joined_r0x002ccf18;
          }
          uVar36 = func_0x002d5840(param_1,puVar25,puVar2);
          uVar31 = uVar36;
          if (uVar36 <= uVar22) {
            uVar31 = uVar22;
          }
        }
        if (3 < uVar31) goto LAB_002ccf1c;
LAB_002ccd04:
        *(uint *)(param_1 + 300) = (uint)(0x8ff < (ulong)((long)puVar25 - (long)param_4));
        puVar25 = (ulong *)((long)puVar25 + ((ulong)((long)puVar25 - (long)param_4) >> 8) + 1);
      }
      else {
/*  watermarked copy - do not remove  */
        if (uVar29 == 5) {
          if (uVar30 == 6) {
            uVar36 = func_0x002d5208(param_1,puVar25,puVar2);
            uVar31 = uVar36;
            if (uVar36 <= uVar22) {
              uVar31 = uVar22;
            }
          }
          else if (uVar30 == 5) {
            uVar36 = func_0x002d4bf4(param_1,puVar25,puVar2);
            uVar31 = uVar36;
            if (uVar36 <= uVar22) {
              uVar31 = uVar22;
            }
          }
          else {
            uVar36 = func_0x002d45f8(param_1,puVar25,puVar2);
            uVar31 = uVar36;
            if (uVar36 <= uVar22) {
              uVar31 = uVar22;
            }
          }
        }
        else if (uVar30 == 6) {
          uVar36 = func_0x002d3fc4(param_1,puVar25,puVar2);
          uVar31 = uVar36;
          if (uVar36 <= uVar22) {
            uVar31 = uVar22;
          }
        }
        else if (uVar30 == 5) {
          uVar36 = func_0x002d39b4(param_1,puVar25,puVar2);
          uVar31 = uVar36;
          if (uVar36 <= uVar22) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
            uVar31 = uVar22;
          }
        }
        else {
          uVar36 = func_0x002d33bc(param_1,puVar25,puVar2);
          uVar31 = uVar36;
          if (uVar36 <= uVar22) {
            uVar31 = uVar22;
          }
        }
joined_r0x002ccf18:
        if (uVar31 < 4) goto LAB_002ccd04;
LAB_002ccf1c:
        uVar40 = auStack_70[0];
        puVar32 = puVar25;
        if (uVar36 <= uVar22) {
          uVar40 = 1;
          puVar32 = (ulong *)((long)puVar25 + 1U);
        }
joined_r0x002ccf48:
        iVar33 = iVar15;
        puVar24 = puVar32;
        puVar27 = puVar25;
        uVar22 = uVar31;
        uVar36 = uVar40;
        if (puVar25 < puVar20) {
          do {
            puVar25 = (ulong *)((long)puVar27 + 1);
            iVar15 = iVar33 + 1;
            if (uVar36 != 0) {
              iVar6 = iVar15 - uVar12;
              if ((uint)(iVar15 - *(int *)(param_1 + 0x1c)) <= uVar12 ||
                  *(int *)(param_1 + 0x28) != 0) {
                iVar6 = *(int *)(param_1 + 0x1c);
              }
// unlicensed copy if this notice is missing
              uVar42 = iVar15 - uVar43;
              lVar16 = lVar11;
              if (uVar7 <= uVar42) {
                lVar16 = lVar10;
              }
              if (uVar43 <= (uint)(iVar15 - iVar6) && uVar42 - uVar7 < 0xfffffffd) {
                if (*(int *)puVar25 == *(int *)(lVar16 + (ulong)uVar42)) {
                  puVar32 = puVar4;
                  if (uVar7 <= uVar42) {
                    puVar32 = puVar2;
                  }
                  uVar31 = func_0x002ad924((long)puVar27 + 5,(int *)(lVar16 + (ulong)uVar42) + 1,
                                           puVar2,puVar32,puVar3);
                  if (uVar31 < 0xfffffffffffffffc) {
                    if ((int)LZCOUNT((int)uVar36) + (int)uVar22 * 3 + -0x1e < (int)(uVar31 + 4) * 3)
                    {
                      uVar36 = 1;
                      puVar24 = puVar25;
                      uVar22 = uVar31 + 4;
                    }
                  }
                }
              }
            }
            auStack_70[0] = 999999999;
            if (uVar29 == 6) {
              if (uVar30 == 6) {
                uVar31 = func_0x002d6450(param_1,puVar25,puVar2,auStack_70);
              }
              else if (uVar30 == 5) {
                uVar31 = func_0x002d5e3c(param_1,puVar25,puVar2);
/* if you paid for this, you were scammed - github.com/pengussy */
              }
              else {
                uVar31 = func_0x002d5840(param_1,puVar25,puVar2);
              }
            }
            else if (uVar29 == 5) {
              if (uVar30 == 6) {
                uVar31 = func_0x002d5208(param_1,puVar25,puVar2);
              }
              else if (uVar30 == 5) {
                uVar31 = func_0x002d4bf4(param_1,puVar25,puVar2);
              }
              else {
                uVar31 = func_0x002d45f8(param_1,puVar25,puVar2);
              }
            }
            else if (uVar30 == 6) {
              uVar31 = func_0x002d3fc4(param_1,puVar25,puVar2);
            }
            else if (uVar30 == 5) {
              uVar31 = func_0x002d39b4(param_1,puVar25,puVar2);
            }
            else {
              uVar31 = func_0x002d33bc(param_1,puVar25,puVar2);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            }
            if (3 < uVar31) {
              uVar40 = auStack_70[0];
              puVar32 = puVar25;
              if ((int)LZCOUNT((int)uVar36) + (int)uVar22 * 4 + -0x1b <
                  (int)LZCOUNT((int)auStack_70[0]) + (int)uVar31 * 4 + -0x1f)
              goto joined_r0x002ccf48;
            }
            puVar32 = puVar24;
            uVar31 = uVar22;
            uVar40 = uVar36;
            if (puVar20 <= puVar25) break;
            puVar25 = (ulong *)((long)puVar27 + 2);
            iVar33 = iVar33 + 2;
            if (uVar36 != 0) {
              iVar15 = iVar33 - uVar12;
              if ((uint)(iVar33 - *(int *)(param_1 + 0x1c)) <= uVar12 ||
                  *(int *)(param_1 + 0x28) != 0) {
                iVar15 = *(int *)(param_1 + 0x1c);
              }
              uVar42 = iVar33 - uVar43;
              lVar16 = lVar11;
              if (uVar7 <= uVar42) {
                lVar16 = lVar10;
/* stripping the watermark breaks the license - github.com/pengussy */
              }
              if (uVar43 <= (uint)(iVar33 - iVar15) && uVar42 - uVar7 < 0xfffffffd) {
                if (*(int *)puVar25 == *(int *)(lVar16 + (ulong)uVar42)) {
                  puVar32 = puVar4;
                  if (uVar7 <= uVar42) {
                    puVar32 = puVar2;
                  }
                  uVar31 = func_0x002ad924((long)puVar27 + 6,(int *)(lVar16 + (ulong)uVar42) + 1,
                                           puVar2,puVar32,puVar3);
                  if (uVar31 < 0xfffffffffffffffc) {
                    if ((int)LZCOUNT((int)uVar36) + (int)uVar22 * 4 + -0x1e < (int)(uVar31 + 4) * 4)
                    {
                      uVar36 = 1;
                      puVar24 = puVar25;
                      uVar22 = uVar31 + 4;
                    }
                  }
                }
              }
            }
            auStack_70[0] = 999999999;
            if (uVar29 == 6) {
              if (uVar30 == 6) {
                uVar19 = func_0x002d6450(param_1,puVar25,puVar2,auStack_70);
              }
              else if (uVar30 == 5) {
                uVar19 = func_0x002d5e3c(param_1,puVar25,puVar2);
              }
              else {
                uVar19 = func_0x002d5840(param_1,puVar25,puVar2);
              }
            }
            else if (uVar29 == 5) {
              if (uVar30 == 6) {
                uVar19 = func_0x002d5208(param_1,puVar25,puVar2);
              }
              else if (uVar30 == 5) {
                uVar19 = func_0x002d4bf4(param_1,puVar25,puVar2);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
              }
              else {
                uVar19 = func_0x002d45f8(param_1,puVar25,puVar2);
              }
            }
            else if (uVar30 == 6) {
              uVar19 = func_0x002d3fc4(param_1,puVar25,puVar2);
            }
            else if (uVar30 == 5) {
              uVar19 = func_0x002d39b4(param_1,puVar25,puVar2);
            }
            else {
              uVar19 = func_0x002d33bc(param_1,puVar25,puVar2);
            }
            puVar32 = puVar24;
            uVar31 = uVar22;
            uVar40 = uVar36;
            if ((uVar19 < 4) ||
               ((int)LZCOUNT((int)auStack_70[0]) + (int)uVar19 * 4 + -0x1f <=
                (int)LZCOUNT((int)uVar36) + (int)uVar22 * 4 + -0x18)) break;
            puVar24 = puVar25;
            puVar27 = puVar25;
            uVar22 = uVar19;
            uVar36 = auStack_70[0];
            puVar32 = puVar25;
            uVar31 = uVar19;
            uVar40 = auStack_70[0];
            if (puVar20 <= puVar25) break;
          } while( true );
        }
        uVar21 = (undefined4)uVar40;
        if (uVar40 < 4) {
          puVar25 = (ulong *)param_2[3];
          uVar42 = uVar43;
          uVar43 = uStack_b4;
// WM - thanks for reading - discord.gg/sdkhDjTex
joined_r0x002cd524:
          uVar22 = (long)puVar32 - (long)param_4;
          if (puVar23 < puVar32) goto LAB_002cd528;
LAB_002cd4a4:
          uVar36 = *param_4;
          puVar25[1] = param_4[1];
          *puVar25 = uVar36;
          if (0x10 < uVar22) {
            lVar16 = param_2[3];
            uVar36 = param_4[2];
            *(ulong *)(lVar16 + 0x18) = param_4[3];
            *(ulong *)(lVar16 + 0x10) = uVar36;
            if (uVar22 - 0x10 < 0x11) goto LAB_002cd4cc;
            puVar25 = (ulong *)(lVar16 + 0x20);
            puVar24 = param_4 + 6;
            do {
              uVar36 = puVar24[-2];
              puVar25[1] = puVar24[-1];
              *puVar25 = uVar36;
              uVar36 = *puVar24;
// WM - found on a paste site? it was re-uploaded illegally
              puVar25[3] = puVar24[1];
              puVar25[2] = uVar36;
              puVar25 = puVar25 + 4;
              puVar24 = puVar24 + 4;
            } while (puVar25 < (ulong *)(lVar16 + uVar22));
            goto LAB_002cd69c;
          }
LAB_002cd4cc:
          param_2[3] = param_2[3] + uVar22;
          piVar26 = (int *)param_2[1];
        }
        else {
          uVar22 = (long)puVar32 + (3 - (uVar40 + lVar10));
          puVar25 = (ulong *)(lVar11 + (ulong)uVar9);
          lVar16 = lVar11;
          if (uVar7 <= (uint)uVar22) {
            puVar25 = puVar3;
            lVar16 = lVar10;
          }
          if ((puVar32 <= param_4) ||
             (uVar22 = uVar22 & 0xffffffff, (ulong *)(lVar16 + uVar22) <= puVar25)) {
            uVar42 = uVar21 - 3;
            puVar25 = (ulong *)param_2[3];
            goto joined_r0x002cd524;
          }
          puVar24 = (ulong *)(lVar16 + uVar22);
          puVar27 = puVar32;
          do {
            puVar32 = (ulong *)((long)puVar27 + -1);
            puVar24 = (ulong *)((long)puVar24 + -1);
            if (*(char *)puVar32 != *(char *)puVar24) {
              uVar22 = (long)puVar27 - (long)param_4;
              puVar25 = (ulong *)param_2[3];
              puVar32 = puVar27;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              goto joined_r0x002cd5b8;
            }
            uVar31 = uVar31 + 1;
          } while ((param_4 < puVar32) && (puVar27 = puVar32, puVar25 < puVar24));
          uVar22 = (long)puVar32 - (long)param_4;
          puVar25 = (ulong *)param_2[3];
joined_r0x002cd5b8:
          uVar42 = uVar21 - 3;
          if (puVar32 <= puVar23) goto LAB_002cd4a4;
LAB_002cd528:
          puVar24 = puVar25;
          if (param_4 <= puVar23) {
            puVar24 = (ulong *)((long)puVar25 + ((long)puVar23 - (long)param_4));
            uVar36 = *param_4;
            puVar27 = puVar25 + 2;
            puVar25[1] = param_4[1];
            *puVar25 = uVar36;
            if (0x10 < (ulong)((long)puVar23 - (long)param_4)) {
              do {
                uVar36 = param_4[2];
                puVar27[1] = param_4[3];
                *puVar27 = uVar36;
                uVar36 = param_4[4];
                puVar27[3] = param_4[5];
                puVar27[2] = uVar36;
                puVar27 = puVar27 + 4;
                param_4 = param_4 + 4;
              } while (puVar27 < puVar24);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            }
            param_4 = puVar23;
          }
          if (param_4 < puVar32) {
            uVar36 = (long)puVar32 - (long)param_4;
            if ((7 < uVar36) && (0x3f < (ulong)((long)puVar24 - (long)param_4))) {
              if (uVar36 < 0x40) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar36 & 0xffffffffffffffc0;
                puVar25 = puVar24 + 4;
                puVar27 = param_4 + 4;
                uVar40 = uVar19;
                do {
                  uVar17 = puVar27[-4];
                  uVar45 = puVar27[-1];
                  uVar44 = puVar27[-2];
                  uVar47 = puVar27[1];
                  uVar46 = *puVar27;
                  uVar49 = puVar27[3];
                  uVar48 = puVar27[2];
                  puVar25[-3] = puVar27[-3];
                  puVar25[-4] = uVar17;
                  puVar25[-1] = uVar45;
                  puVar25[-2] = uVar44;
                  puVar25[1] = uVar47;
                  *puVar25 = uVar46;
                  puVar25[3] = uVar49;
/* WM - keep the notice, keep the source honest */
                  puVar25[2] = uVar48;
                  uVar40 = uVar40 - 0x40;
                  puVar25 = puVar25 + 8;
                  puVar27 = puVar27 + 8;
                } while (uVar40 != 0);
                if (uVar36 == uVar19) goto LAB_002cd69c;
                if ((uVar36 & 0x38) == 0) {
                  puVar24 = (ulong *)((long)puVar24 + uVar19);
                  param_4 = (ulong *)((long)param_4 + uVar19);
                  goto LAB_002cd68c;
                }
              }
              uVar40 = uVar36 & 0xfffffffffffffff8;
              lVar16 = uVar19 - uVar40;
              puVar28 = (undefined8 *)((long)puVar24 + uVar19);
              puVar41 = (undefined8 *)((long)param_4 + uVar19);
              do {
                *puVar28 = *puVar41;
                lVar16 = lVar16 + 8;
                puVar28 = puVar28 + 1;
                puVar41 = puVar41 + 1;
              } while (lVar16 != 0);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
              puVar24 = (ulong *)((long)puVar24 + uVar40);
              param_4 = (ulong *)((long)param_4 + uVar40);
              if (uVar36 == uVar40) goto LAB_002cd69c;
            }
LAB_002cd68c:
            do {
              puVar25 = (ulong *)((long)param_4 + 1);
              *(char *)puVar24 = (char)*param_4;
              puVar24 = (ulong *)((long)puVar24 + 1);
              param_4 = puVar25;
            } while (puVar25 != puVar32);
          }
LAB_002cd69c:
          param_2[3] = param_2[3] + uVar22;
          piVar26 = (int *)param_2[1];
          if (0xffff < uVar22) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar26 - *param_2) >> 3);
          }
        }
        *(short *)(piVar26 + 1) = (short)uVar22;
        *piVar26 = uVar21;
        uVar14 = (undefined2)(uVar31 - 3);
        if (uVar31 - 3 < 0x10000) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          *(undefined2 *)((long)piVar26 + 6) = uVar14;
          param_2[1] = (long)(piVar26 + 2);
          iVar33 = *(int *)(param_1 + 300);
        }
        else {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar26 - *param_2) >> 3);
          *(undefined2 *)((long)piVar26 + 6) = uVar14;
          param_2[1] = (long)(piVar26 + 2);
          iVar33 = *(int *)(param_1 + 300);
        }
        if (iVar33 != 0) {
          uVar18 = *(uint *)(param_1 + 0x2c);
          uVar22 = (ulong)uVar18;
          iVar15 = (int)puVar20 - (int)(ulong *)(lVar10 + uVar22);
          iVar33 = 8;
          if (iVar15 + 1U < 8) {
            iVar33 = iVar15 + 1;
          }
          iVar15 = 0;
          if ((ulong *)(lVar10 + uVar22) <= puVar20) {
            iVar15 = iVar33;
          }
          if (uVar18 < iVar15 + uVar18) {
            lVar16 = *(long *)(param_1 + 0x70);
            lVar34 = *(long *)(param_1 + 0x38);
            iVar33 = *(int *)(param_1 + 0x34);
            uVar36 = *(ulong *)(param_1 + 0x60);
            do {
              if (uVar29 == 5) {
                uVar40 = *(long *)(lVar10 + uVar22) * -0x30e4432345000000;
LAB_002cd794:
                uVar40 = (uVar40 ^ uVar36) >> ((ulong)(0x38 - iVar33) & 0x3f);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
                uVar39 = (uint)uVar40;
                uVar40 = (ulong)(((uint)(uVar40 >> 8) & 0xffffff) << (ulong)(uVar30 & 0x1f));
                lVar35 = lVar16 + uVar40 * 4;
                Hint_Prefetch(lVar35,0,0,0);
                if (4 < uVar13) goto LAB_002cd7e0;
LAB_002cd754:
                lVar35 = lVar34 + uVar40;
LAB_002cd758:
                Hint_Prefetch(lVar35,0,0,0);
              }
              else {
                if (uVar29 == 6) {
                  uVar40 = *(long *)(lVar10 + uVar22) * -0x30e4432340650000;
                  goto LAB_002cd794;
                }
                uVar39 = (*(int *)(lVar10 + uVar22) * -0x61c8864f ^ (uint)uVar36) >>
                         (ulong)(0x18U - iVar33 & 0x1f);
                uVar40 = (ulong)((uVar39 >> 8) << (ulong)(uVar30 & 0x1f));
/* wm:watermarked copy - do not remove */
                lVar35 = lVar16 + uVar40 * 4;
                Hint_Prefetch(lVar35,0,0,0);
                if (uVar13 < 5) goto LAB_002cd754;
LAB_002cd7e0:
                Hint_Prefetch(lVar35 + 0x40,0,0,0);
                lVar35 = lVar34 + uVar40;
                Hint_Prefetch(lVar35,0,0,0);
                if (uVar13 != 5) {
                  lVar35 = lVar35 + 0x20;
                  goto LAB_002cd758;
                }
              }
              *(uint *)(param_1 + 0x40 + (uVar22 & 7) * 4) = uVar39;
              uVar22 = uVar22 + 1;
            } while (iVar15 + uVar18 != uVar22);
          }
          *(undefined4 *)(param_1 + 300) = 0;
        }
        piVar26 = piVar26 + 2;
        param_4 = (ulong *)((long)puVar32 + uVar31);
        if (puVar20 < param_4) {
          puVar25 = param_4;
/* unlicensed copy if this notice is missing */
          uStack_b4 = uVar43;
          uVar43 = uVar42;
        }
        else {
          uVar18 = uVar43;
          do {
            uVar43 = uVar18;
            uVar18 = uVar42;
            iVar15 = (int)param_4 - (int)lVar10;
            iVar33 = iVar15 - uVar12;
            if ((uint)(iVar15 - *(int *)(param_1 + 0x1c)) <= uVar12 || *(int *)(param_1 + 0x28) != 0
               ) {
              iVar33 = *(int *)(param_1 + 0x1c);
            }
            uVar42 = iVar15 - uVar43;
            lVar16 = lVar11;
            if (uVar7 <= uVar42) {
              lVar16 = lVar10;
/*  do not claim this as your own  */
            }
            if (((uint)(iVar15 - iVar33) < uVar43 || 0xfffffffc < uVar42 - uVar7) ||
               (piVar5 = (int *)(lVar16 + (ulong)uVar42), (int)*param_4 != *piVar5)) {
              puVar25 = param_4;
              uStack_b4 = uVar43;
              uVar43 = uVar18;
              break;
            }
            puVar25 = puVar4;
            if (uVar7 <= uVar42) {
              puVar25 = puVar2;
            }
            puVar32 = (ulong *)((long)param_4 + 4);
            puVar24 = (ulong *)(piVar5 + 1);
            puVar27 = (ulong *)((long)puVar32 + ((long)puVar25 - (long)puVar24));
            if (puVar2 <= puVar27) {
              puVar27 = puVar2;
            }
            if (puVar32 < (ulong *)((long)puVar27 - 7U)) {
              if (*puVar24 == *puVar32) {
                lVar34 = 0;
                puVar37 = (ulong *)((long)param_4 + 0xc);
                puVar38 = (ulong *)(lVar16 + (ulong)uVar42 + 0xc);
                do {
                  if ((ulong *)((long)puVar27 - 7U) <= puVar37) goto LAB_002cd920;
                  uVar22 = *puVar38;
                  uVar31 = *puVar37;
                  lVar34 = lVar34 + 8;
                  puVar37 = puVar37 + 1;
                  puVar38 = puVar38 + 1;
                } while (uVar22 == uVar31);
                uVar31 = uVar31 ^ uVar22;
                uVar22 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
// stripping the watermark breaks the license
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = lVar34 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              }
              else {
                uVar22 = *puVar32 ^ *puVar24;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar24 + uVar22) == puVar25) goto LAB_002cda18;
joined_r0x002cd984:
              if (puVar23 < param_4) goto LAB_002cd988;
LAB_002cdaf0:
              puVar25 = (ulong *)param_2[3];
              uVar31 = *param_4;
              puVar25[1] = param_4[1];
              *puVar25 = uVar31;
              piVar26 = (int *)param_2[1];
              *(undefined2 *)(piVar26 + 1) = 0;
              *piVar26 = 1;
            }
            else {
              puVar37 = puVar32;
              puVar38 = puVar24;
LAB_002cd920:
              if (puVar37 < (ulong *)((long)puVar27 - 3U)) {
                if ((int)*puVar38 == (int)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 4);
                  puVar38 = (ulong *)((long)puVar38 + 4);
                }
                if (puVar37 < (ulong *)((long)puVar27 - 1U)) goto LAB_002cd9d4;
/* wm:stripping the watermark breaks the license */
              }
              else if (puVar37 < (ulong *)((long)puVar27 - 1U)) {
LAB_002cd9d4:
                if ((short)*puVar38 == (short)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 2);
                  puVar38 = (ulong *)((long)puVar38 + 2);
                }
              }
              if (puVar37 < puVar27) {
                if ((char)*puVar38 == (char)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 1);
                }
              }
              uVar22 = (long)puVar37 - (long)puVar32;
              if ((ulong *)((long)puVar24 + uVar22) != puVar25) goto joined_r0x002cd984;
LAB_002cda18:
              puVar32 = (ulong *)((long)puVar32 + uVar22);
              if (puVar32 < (ulong *)((long)puVar2 - 7U)) {
                if (*puVar3 == *puVar32) {
                  lVar16 = 0;
                  puVar25 = (ulong *)((long)param_4 + uVar22 + 0xc);
                  puVar24 = (ulong *)(uVar8 + lVar10);
                  do {
                    puVar24 = puVar24 + 1;
                    if ((ulong *)((long)puVar2 - 7U) <= puVar25) goto LAB_002cda8c;
                    uVar31 = *puVar25;
                    lVar16 = lVar16 + 8;
                    puVar25 = puVar25 + 1;
                  } while (*puVar24 == uVar31);
                  uVar31 = uVar31 ^ *puVar24;
                  uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                  uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                  uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
/* wm:donate: donate/README.md */
                  ;
                  uVar22 = lVar16 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3) + uVar22;
                }
                else {
                  uVar31 = *puVar32 ^ *puVar3;
                  uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                  uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                  uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
                  ;
                  uVar22 = ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3) + uVar22;
                }
                goto joined_r0x002cd984;
              }
              puVar25 = puVar32;
              puVar24 = puVar3;
// WM - keep the notice, keep the source honest
LAB_002cda8c:
              if (puVar25 < (ulong *)((long)puVar2 - 3U)) {
                if ((int)*puVar24 == (int)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 4);
                  puVar24 = (ulong *)((long)puVar24 + 4);
                }
              }
              if (puVar25 < (ulong *)((long)puVar2 - 1U)) {
                if (*(short *)puVar24 == *(short *)puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 2);
                  puVar24 = (ulong *)((long)puVar24 + 2);
                }
              }
              if (puVar25 < puVar2) {
                if ((char)*puVar24 == (char)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 1);
                }
              }
              uVar22 = (long)puVar25 + (uVar22 - (long)puVar32);
              if (param_4 <= puVar23) goto LAB_002cdaf0;
LAB_002cd988:
              *(undefined2 *)(piVar26 + 1) = 0;
/* WM - if you paid for this, you were scammed */
              *piVar26 = 1;
            }
            if (0xffff < uVar22 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar26 - *param_2) >> 3);
            }
            *(short *)((long)piVar26 + 6) = (short)(uVar22 + 1);
            piVar26 = piVar26 + 2;
            param_4 = (ulong *)((long)param_4 + uVar22 + 4);
            param_2[1] = (long)piVar26;
            puVar25 = param_4;
            uStack_b4 = uVar18;
            uVar42 = uVar43;
          } while (param_4 <= puVar20);
        }
      }
    } while (puVar25 < puVar20);
  }
  *param_3 = uVar43;
  param_3[1] = uStack_b4;
  return (long)puVar2 - (long)param_4;
}

