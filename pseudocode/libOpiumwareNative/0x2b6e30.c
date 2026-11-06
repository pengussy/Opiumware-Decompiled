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
 *  file-id: 0x2b6e30:02eedb5717
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

long FUN_002b6e30(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5,int param_6)

{
  char *pcVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  char *pcVar10;
  ulong *puVar11;
  bool bVar12;
  long lVar13;
  uint uVar14;
  ulong *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  char *pcVar25;
  ulong *puVar26;
  char *pcVar27;
  ulong *puVar28;
  undefined8 *puVar29;
  int *piVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong uVar33;
  uint uVar34;
/* origin: github.com/pengussy - github.com/pengussy */
  undefined8 *puVar35;
  ulong *puVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  ulong *puVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  uint uVar48;
  ulong *puVar49;
  long lVar50;
  long lVar51;
  ulong *puVar52;
  ulong *puVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  int iStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  
  uVar34 = *(uint *)(param_1 + 0x114);
  if (uVar34 < 2) {
    uVar34 = 1;
  }
  lVar47 = *(long *)(param_1 + 8);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  iVar9 = (int)lVar47;
  iVar23 = (int)param_4 - iVar9;
  iVar45 = iVar23 + (int)param_5;
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar20 = *(uint *)(param_1 + 0x18);
  uVar17 = iVar45 - uVar7;
  if (iVar45 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x28) != 0) {
    uVar17 = *(uint *)(param_1 + 0x1c);
  }
  uVar7 = uVar20;
  if (uVar20 <= uVar17) {
    uVar7 = uVar17;
  }
  if (uVar17 < uVar20) {
    uVar22 = (ulong)(uVar34 + 1);
    param_5 = (long)param_4 + param_5;
    puVar53 = (ulong *)(param_5 + -8);
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar14 = iVar23 - uVar17;
    uVar34 = uVar5;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    uVar18 = 0;
    if (uVar14 <= uVar5) {
      uVar34 = 0;
      uVar18 = uVar5;
    }
    uStack_bc = uVar4;
    uVar5 = 0;
    if (uVar14 <= uVar4) {
      uStack_bc = 0;
      uVar5 = uVar4;
    }
    puVar38 = (ulong *)((long)param_4 + uVar22);
    puVar28 = (ulong *)((long)puVar38 + 1);
    if (puVar53 <= puVar28) {
LAB_002b77c8:
      uVar17 = uVar5;
      if (uStack_bc != 0) {
        uVar17 = uStack_bc;
      }
      if (uStack_bc == 0 || uVar5 == 0) {
        uVar5 = uVar18;
      }
      if (uVar34 != 0) {
        uVar5 = uVar34;
      }
      *param_3 = uVar17;
      param_3[1] = uVar5;
      return param_5 - (long)param_4;
    }
    lVar46 = *(long *)(param_1 + 0x70);
    lVar50 = *(long *)(param_1 + 0x10);
    pcVar1 = (char *)(lVar47 + (ulong)uVar7);
    lVar2 = lVar50 + (ulong)uVar7;
    lVar40 = lVar47 + 2;
    uVar4 = 0x20 - *(int *)(param_1 + 0x108);
    uVar24 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
    puVar26 = (ulong *)(param_5 + -0x20);
/*  unlicensed copy if this notice is missing  */
LAB_002b6f50:
    if (param_6 < 6) {
      if (param_6 == 4) {
        uVar31 = (ulong)((uint)*param_4 * -0x61c8864f >> (ulong)(uVar4 & 0x1f));
        uVar43 = (ulong)((uint)(*(int *)((long)param_4 + 1) * -0x61c8864f) >> (ulong)(uVar4 & 0x1f))
        ;
        goto LAB_002b6fd4;
      }
      uVar31 = *param_4;
      uVar43 = 0xbb000000;
    }
    else if (param_6 == 6) {
      uVar31 = *param_4;
      uVar43 = 0xbf9b0000;
    }
    else {
      uVar31 = *param_4;
      uVar43 = 0xbfa56300;
    }
// no support for modified copies
    uVar31 = uVar31 * (uVar43 | 0xcf1bbcdc00000000) >> (uVar24 & 0x3f);
    uVar43 = *(long *)((long)param_4 + 1) * (uVar43 | 0xcf1bbcdc00000000) >> (uVar24 & 0x3f);
LAB_002b6fd4:
    puVar37 = param_4 + 0x10;
    uVar14 = *(uint *)(lVar46 + uVar31 * 4);
    lVar13 = lVar50;
    if (uVar7 <= uVar14) {
      lVar13 = lVar47;
    }
    uVar33 = uVar22;
    puVar32 = param_4;
    puVar36 = (ulong *)((long)param_4 + 1);
    do {
      puVar15 = puVar28;
      puVar44 = puVar38;
      uVar19 = ((int)puVar44 - iVar9) - uStack_bc;
      lVar42 = lVar50;
      if (uVar7 <= uVar19) {
        lVar42 = lVar47;
      }
      lVar16 = lVar2;
      if ((uStack_bc == 0) || (uVar7 - uVar19 < 4)) {
        uVar41 = *puVar44;
        uVar48 = (int)puVar32 - iVar9;
        *(uint *)(lVar46 + uVar31 * 4) = uVar48;
        uVar21 = (uint)*puVar44;
        if (uVar21 == ((uint)uVar41 ^ 1)) goto LAB_002b71d4;
      }
      else {
        uVar6 = *(uint *)(lVar42 + (ulong)uVar19);
        uVar48 = (int)puVar32 - iVar9;
        *(uint *)(lVar46 + uVar31 * 4) = uVar48;
        uVar21 = (uint)*puVar44;
        if (uVar21 == uVar6) {
// reversing this took months of machine time
LAB_002b71d4:
          if (uVar7 <= uVar19) {
            lVar16 = param_5;
          }
          bVar12 = *(char *)((long)puVar44 - 1) == *(char *)(lVar42 + (ulong)uVar19 + -1);
          uVar31 = (ulong)bVar12;
          lVar51 = 4;
          if (bVar12) {
            lVar51 = 5;
          }
          puVar32 = (ulong *)((long)puVar44 - uVar31);
          pcVar27 = (char *)((lVar42 + (ulong)uVar19) - uVar31);
          iStack_c4 = 1;
          puVar44 = puVar36;
          uStack_c0 = uStack_bc;
          uStack_bc = uVar34;
          goto LAB_002b72d8;
        }
      }
      if ((uVar17 <= uVar14) && ((uint)*puVar32 == *(uint *)(lVar13 + (ulong)uVar14))) {
        puVar44 = puVar36;
        goto LAB_002b722c;
      }
      uVar14 = *(uint *)(lVar46 + uVar43 * 4);
      lVar13 = lVar50;
      if (uVar7 <= uVar14) {
        lVar13 = lVar47;
      }
      if (param_6 < 6) {
        if (param_6 != 4) {
          uVar31 = *puVar44;
          uVar41 = 0xbb000000;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
          goto LAB_002b7100;
        }
        uVar31 = (ulong)(uVar21 * -0x61c8864f >> (ulong)(uVar4 & 0x1f));
        uVar48 = (int)puVar36 - iVar9;
        *(uint *)(lVar46 + uVar43 * 4) = uVar48;
      }
      else {
        if (param_6 == 6) {
          uVar31 = *puVar44;
          uVar41 = 0xbf9b0000;
        }
        else {
          uVar31 = *puVar44;
          uVar41 = 0xbfa56300;
        }
LAB_002b7100:
        uVar31 = uVar31 * (uVar41 | 0xcf1bbcdc00000000) >> (uVar24 & 0x3f);
        uVar48 = (int)puVar36 - iVar9;
        *(uint *)(lVar46 + uVar43 * 4) = uVar48;
      }
      if ((uVar17 <= uVar14) && ((uint)*puVar36 == *(uint *)(lVar13 + (ulong)uVar14)))
      goto LAB_002b7228;
      uVar14 = *(uint *)(lVar46 + uVar31 * 4);
      lVar13 = lVar50;
      if (uVar7 <= uVar14) {
        lVar13 = lVar47;
      }
      if (param_6 < 6) {
        if (param_6 != 4) {
          uVar43 = *puVar15;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
          uVar41 = 0xbb000000;
          goto LAB_002b71a0;
        }
        uVar43 = (ulong)((uint)*puVar15 * -0x61c8864f >> (ulong)(uVar4 & 0x1f));
      }
      else {
        if (param_6 == 6) {
          uVar43 = *puVar15;
          uVar41 = 0xbf9b0000;
        }
        else {
          uVar43 = *puVar15;
          uVar41 = 0xbfa56300;
        }
LAB_002b71a0:
        uVar43 = uVar43 * (uVar41 | 0xcf1bbcdc00000000) >> (uVar24 & 0x3f);
      }
      uVar41 = uVar33;
      if (puVar37 <= (long)puVar44 + uVar33) {
        Hint_Prefetch(puVar15 + 8,0,0,0);
        Hint_Prefetch(puVar15 + 0x10,0,0,0);
        puVar37 = puVar37 + 0x10;
        uVar41 = uVar33 + 1;
      }
      puVar38 = (ulong *)((long)puVar44 + uVar33);
      puVar28 = (ulong *)((long)puVar15 + uVar33);
      uVar33 = uVar41;
      puVar32 = puVar44;
      puVar36 = puVar15;
      if (puVar53 <= puVar28) goto LAB_002b77c8;
    } while( true );
/* wm:reversing this took months of machine time */
  }
  iVar45 = *(int *)(param_1 + 0x110);
  lVar47 = *(long *)(param_1 + 0x70);
  uVar34 = *(uint *)(param_1 + 0x114);
  if (uVar34 < 2) {
    uVar34 = 1;
  }
  uVar22 = (ulong)(uVar34 + 1);
  lVar40 = *(long *)(param_1 + 8);
  puVar53 = (ulong *)(param_5 + (long)param_4);
  iVar23 = (int)lVar40;
  iVar9 = (int)puVar53 - iVar23;
  uVar17 = *(uint *)(param_1 + 0x18);
  uVar20 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  bVar12 = *(int *)(param_1 + 0x28) != 0;
  uVar34 = iVar9 - uVar20;
  if (bVar12 || iVar9 - uVar17 <= uVar20) {
    uVar34 = uVar17;
  }
  puVar26 = puVar53 + -1;
  uVar4 = *param_3;
  uVar7 = param_3[1];
  puVar28 = (ulong *)(lVar40 + (ulong)uVar34);
  puVar38 = param_4;
  if (param_4 == puVar28) {
    puVar38 = (ulong *)((long)param_4 + 1);
  }
  iVar9 = (int)puVar38 - iVar23;
  uVar5 = iVar9 - uVar20;
  if (bVar12 || iVar9 - uVar17 <= uVar20) {
    uVar5 = uVar17;
  }
  uVar5 = iVar9 - uVar5;
  uVar17 = 0;
  if (uVar7 <= uVar5) {
    uVar17 = uVar7;
  }
  uVar20 = 0;
/* WM - chat: discord.gg/sdkhDjTex */
  if (uVar4 <= uVar5) {
    uVar20 = uVar4;
  }
  lVar2 = lVar40 + 2;
  puVar32 = (ulong *)((long)puVar38 + uVar22);
  puVar37 = (ulong *)((long)puVar32 + 1);
  if (*(uint *)(param_1 + 0x100) < 0x13) {
    if (iVar45 == 5) {
      if (puVar37 < puVar26) {
        uVar24 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
        puVar44 = (ulong *)((long)puVar53 - 7);
        puVar36 = puVar53 + -4;
LAB_002b1ac8:
        puVar52 = (ulong *)((long)puVar38 + 1);
        uVar43 = *puVar52;
        puVar15 = puVar38 + 0x10;
        uVar33 = *puVar38 * -0x30e4432345000000 >> (uVar24 & 0x3f);
        uVar41 = (ulong)*(uint *)(lVar47 + uVar33 * 4);
        lVar46 = -(ulong)uVar20;
        uVar31 = uVar22;
        if (uVar20 == 0) {
          while( true ) {
            uVar43 = uVar43 * -0x30e4432345000000 >> (uVar24 & 0x3f);
            uVar14 = (int)puVar38 - iVar23;
            *(uint *)(lVar47 + uVar33 * 4) = uVar14;
            puVar3 = (uint *)&UNK_01add8a4;
            if (uVar34 <= (uint)uVar41) {
              puVar3 = (uint *)(lVar40 + uVar41);
            }
            if (((uint)*puVar38 == *puVar3) && (uVar34 <= (uint)uVar41)) goto LAB_002b1dc0;
            uVar18 = *(uint *)(lVar47 + uVar43 * 4);
            uVar41 = (ulong)uVar18;
            uVar33 = *puVar32 * -0x30e4432345000000 >> (uVar24 & 0x3f);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar14 = (int)puVar52 - iVar23;
            *(uint *)(lVar47 + uVar43 * 4) = uVar14;
            puVar3 = (uint *)&UNK_01add8a4;
            if (uVar34 <= uVar18) {
              puVar3 = (uint *)(lVar40 + uVar41);
            }
            if (((uint)*puVar52 == *puVar3) && (uVar43 = uVar33, uVar34 <= uVar18)) break;
            uVar41 = (ulong)*(uint *)(lVar47 + uVar33 * 4);
            uVar43 = *puVar37;
            puVar49 = (ulong *)((long)puVar32 + uVar31);
            uVar39 = uVar31;
            if (puVar15 <= puVar49) {
              Hint_Prefetch(puVar37 + 8,0,0,0);
              Hint_Prefetch(puVar37 + 0x10,0,0,0);
              puVar15 = puVar15 + 0x10;
              uVar39 = uVar31 + 1;
            }
            puVar11 = (ulong *)((long)puVar37 + uVar31);
            puVar52 = puVar37;
            uVar31 = uVar39;
            puVar38 = puVar32;
            puVar32 = puVar49;
            puVar37 = puVar11;
            if (puVar26 <= puVar11) goto LAB_002b3cb8;
          }
LAB_002b1dcc:
          iVar45 = (int)puVar32;
          puVar38 = puVar52;
          if (uVar31 < 5) goto LAB_002b1de4;
/*  do not claim this as your own  */
          goto LAB_002b1dec;
        }
        while( true ) {
          uVar18 = *(uint *)((long)puVar32 + lVar46);
          uVar43 = uVar43 * -0x30e4432345000000 >> (uVar24 & 0x3f);
          uVar14 = (int)puVar38 - iVar23;
          *(uint *)(lVar47 + uVar33 * 4) = uVar14;
          if ((uint)*puVar32 == uVar18) break;
          puVar3 = (uint *)&UNK_01add8a4;
          if (uVar34 <= (uint)uVar41) {
            puVar3 = (uint *)(lVar40 + uVar41);
          }
          if (((uint)*puVar38 == *puVar3) && (uVar34 <= (uint)uVar41)) goto LAB_002b1dc0;
          uVar18 = *(uint *)(lVar47 + uVar43 * 4);
          uVar41 = (ulong)uVar18;
          uVar33 = *puVar32 * -0x30e4432345000000 >> (uVar24 & 0x3f);
          uVar14 = (int)puVar52 - iVar23;
          *(uint *)(lVar47 + uVar43 * 4) = uVar14;
          puVar3 = (uint *)&UNK_01add8a4;
          if (uVar34 <= uVar18) {
            puVar3 = (uint *)(lVar40 + uVar41);
          }
          if (((uint)*puVar52 == *puVar3) && (uVar43 = uVar33, uVar34 <= uVar18)) goto LAB_002b1dcc;
          uVar41 = (ulong)*(uint *)(lVar47 + uVar33 * 4);
          uVar43 = *puVar37;
          puVar49 = (ulong *)((long)puVar32 + uVar31);
          uVar39 = uVar31;
          if (puVar15 <= puVar49) {
            Hint_Prefetch(puVar37 + 8,0,0,0);
/* reversing this took months of machine time - github.com/pengussy */
            Hint_Prefetch(puVar37 + 0x10,0,0,0);
            puVar15 = puVar15 + 0x10;
            uVar39 = uVar31 + 1;
          }
          puVar11 = (ulong *)((long)puVar37 + uVar31);
          puVar52 = puVar37;
          uVar31 = uVar39;
          puVar38 = puVar32;
          puVar32 = puVar49;
          puVar37 = puVar11;
          if (puVar26 <= puVar11) goto LAB_002b3cc0;
        }
        bVar12 = *(char *)((long)puVar32 - 1) == *(char *)((long)puVar32 + lVar46 + -1);
        uVar31 = (ulong)bVar12;
        lVar50 = 4;
        if (bVar12) {
          lVar50 = 5;
        }
        puVar38 = (ulong *)((long)puVar32 - uVar31);
        puVar32 = (ulong *)((long)puVar32 + (lVar46 - uVar31));
        *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
/*  proprietary - see LICENSE - do not sell  */
        iVar45 = 1;
        puVar37 = (ulong *)((long)puVar32 + lVar50);
        puVar15 = (ulong *)((long)puVar38 + lVar50);
        uVar18 = uVar20;
        goto joined_r0x002b1cf8;
      }
    }
    else if (iVar45 == 6) {
      if (puVar37 < puVar26) {
        uVar24 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
        puVar44 = (ulong *)((long)puVar53 - 7);
        puVar36 = puVar53 + -4;
LAB_002b0a28:
        puVar52 = (ulong *)((long)puVar38 + 1);
        uVar43 = *puVar52;
        puVar15 = puVar38 + 0x10;
        uVar33 = *puVar38 * -0x30e4432340650000 >> (uVar24 & 0x3f);
        uVar41 = (ulong)*(uint *)(lVar47 + uVar33 * 4);
/* WM - no support for modified copies */
        lVar46 = -(ulong)uVar20;
        uVar31 = uVar22;
        if (uVar20 == 0) {
          do {
            uVar43 = uVar43 * -0x30e4432340650000 >> (uVar24 & 0x3f);
            uVar14 = (int)puVar38 - iVar23;
            *(uint *)(lVar47 + uVar33 * 4) = uVar14;
            puVar3 = (uint *)&UNK_01add8a4;
            if (uVar34 <= (uint)uVar41) {
              puVar3 = (uint *)(lVar40 + uVar41);
            }
            if (((uint)*puVar38 == *puVar3) && (uVar34 <= (uint)uVar41)) goto LAB_002b0c6c;
            uVar18 = *(uint *)(lVar47 + uVar43 * 4);
            uVar41 = (ulong)uVar18;
            uVar33 = *puVar32 * -0x30e4432340650000 >> (uVar24 & 0x3f);
            uVar14 = (int)puVar52 - iVar23;
            *(uint *)(lVar47 + uVar43 * 4) = uVar14;
            puVar3 = (uint *)&UNK_01add8a4;
            if (uVar34 <= uVar18) {
              puVar3 = (uint *)(lVar40 + uVar41);
            }
            if ((uint)*puVar52 == *puVar3) {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
              uVar43 = uVar33;
              puVar38 = puVar52;
              puVar52 = puVar32;
              if (uVar34 <= uVar18) goto LAB_002b0c58;
            }
            uVar41 = (ulong)*(uint *)(lVar47 + uVar33 * 4);
            uVar43 = *puVar37;
            puVar52 = (ulong *)((long)puVar32 + uVar31);
            uVar39 = uVar31;
            if (puVar15 <= puVar52) {
              Hint_Prefetch(puVar37 + 8,0,0,0);
              Hint_Prefetch(puVar37 + 0x10,0,0,0);
              puVar15 = puVar15 + 0x10;
              uVar39 = uVar31 + 1;
            }
            puVar49 = (ulong *)((long)puVar37 + uVar31);
            uVar31 = uVar39;
            puVar38 = puVar32;
            puVar32 = puVar52;
            puVar52 = puVar37;
            puVar37 = puVar49;
            if (puVar26 <= puVar49) goto LAB_002b3cb8;
          } while( true );
        }
        while( true ) {
          uVar18 = *(uint *)((long)puVar32 + lVar46);
          uVar43 = uVar43 * -0x30e4432340650000 >> (uVar24 & 0x3f);
          uVar14 = (int)puVar38 - iVar23;
          *(uint *)(lVar47 + uVar33 * 4) = uVar14;
          if ((uint)*puVar32 == uVar18) break;
          puVar3 = (uint *)&UNK_01add8a4;
/* wm:found on a paste site? it was re-uploaded illegally */
          if (uVar34 <= (uint)uVar41) {
            puVar3 = (uint *)(lVar40 + uVar41);
          }
          if (((uint)*puVar38 == *puVar3) && (uVar34 <= (uint)uVar41)) goto LAB_002b0c6c;
          uVar18 = *(uint *)(lVar47 + uVar43 * 4);
          uVar41 = (ulong)uVar18;
          uVar33 = *puVar32 * -0x30e4432340650000 >> (uVar24 & 0x3f);
          uVar14 = (int)puVar52 - iVar23;
          *(uint *)(lVar47 + uVar43 * 4) = uVar14;
          puVar3 = (uint *)&UNK_01add8a4;
          if (uVar34 <= uVar18) {
            puVar3 = (uint *)(lVar40 + uVar41);
          }
          if ((uint)*puVar52 == *puVar3) {
            uVar43 = uVar33;
            puVar38 = puVar52;
            puVar52 = puVar32;
            if (uVar34 <= uVar18) goto LAB_002b0c58;
          }
          uVar41 = (ulong)*(uint *)(lVar47 + uVar33 * 4);
          uVar43 = *puVar37;
          puVar52 = (ulong *)((long)puVar32 + uVar31);
          uVar39 = uVar31;
          if (puVar15 <= puVar52) {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
            Hint_Prefetch(puVar37 + 8,0,0,0);
            Hint_Prefetch(puVar37 + 0x10,0,0,0);
            puVar15 = puVar15 + 0x10;
            uVar39 = uVar31 + 1;
          }
          puVar49 = (ulong *)((long)puVar37 + uVar31);
          uVar31 = uVar39;
          puVar38 = puVar32;
          puVar32 = puVar52;
          puVar52 = puVar37;
          puVar37 = puVar49;
          if (puVar26 <= puVar49) goto LAB_002b3cc0;
        }
        bVar12 = *(char *)((long)puVar32 - 1) == *(char *)((long)puVar32 + lVar46 + -1);
        uVar31 = (ulong)bVar12;
        lVar50 = 4;
        if (bVar12) {
          lVar50 = 5;
        }
        puVar38 = (ulong *)((long)puVar32 - uVar31);
        puVar32 = (ulong *)((long)puVar32 + (lVar46 - uVar31));
        *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
        iVar45 = 1;
        goto LAB_002b0d18;
      }
    }
/* if you paid for this, you were scammed - github.com/pengussy */
    else if (iVar45 == 7) {
      if (puVar37 < puVar26) {
        uVar24 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
        puVar44 = (ulong *)((long)puVar53 - 7);
        puVar36 = puVar53 + -4;
LAB_002af940:
        puVar52 = (ulong *)((long)puVar38 + 1);
        uVar33 = *puVar52;
        puVar15 = puVar38 + 0x10;
        uVar43 = *puVar38 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
        uVar41 = (ulong)*(uint *)(lVar47 + uVar43 * 4);
        lVar46 = -(ulong)uVar20;
        uVar31 = uVar22;
        if (uVar20 == 0) {
          while( true ) {
            puVar49 = puVar37;
            uVar33 = uVar33 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
            uVar14 = (int)puVar38 - iVar23;
            *(uint *)(lVar47 + uVar43 * 4) = uVar14;
            puVar3 = (uint *)&UNK_01add8a4;
            if (uVar34 <= (uint)uVar41) {
              puVar3 = (uint *)(lVar40 + uVar41);
            }
            if (((uint)*puVar38 == *puVar3) && (uVar34 <= (uint)uVar41)) goto LAB_002afb6c;
            uVar18 = *(uint *)(lVar47 + uVar33 * 4);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
            uVar41 = (ulong)uVar18;
            uVar43 = *puVar32 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
            uVar14 = (int)puVar52 - iVar23;
            *(uint *)(lVar47 + uVar33 * 4) = uVar14;
            puVar3 = (uint *)&UNK_01add8a4;
            if (uVar34 <= uVar18) {
              puVar3 = (uint *)(lVar40 + uVar41);
            }
            if (((uint)*puVar52 == *puVar3) && (puVar38 = puVar52, uVar34 <= uVar18)) break;
            uVar41 = (ulong)*(uint *)(lVar47 + uVar43 * 4);
            uVar33 = *puVar49;
            puVar52 = (ulong *)((long)puVar32 + uVar31);
            uVar39 = uVar31;
            if (puVar15 <= puVar52) {
              Hint_Prefetch(puVar49 + 8,0,0,0);
              Hint_Prefetch(puVar49 + 0x10,0,0,0);
              puVar15 = puVar15 + 0x10;
              uVar39 = uVar31 + 1;
            }
            puVar37 = (ulong *)((long)puVar49 + uVar31);
            uVar31 = uVar39;
            puVar38 = puVar32;
            puVar32 = puVar52;
            puVar52 = puVar49;
            if (puVar26 <= puVar37) goto LAB_002b3cb8;
          }
LAB_002afb78:
          iVar45 = (int)puVar32;
// WM - watermarked copy - do not remove
          uVar33 = uVar43;
          if (uVar31 < 5) goto LAB_002afb90;
          goto LAB_002afb98;
        }
        while( true ) {
          puVar49 = puVar37;
          uVar18 = *(uint *)((long)puVar32 + lVar46);
          uVar33 = uVar33 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
          uVar14 = (int)puVar38 - iVar23;
          *(uint *)(lVar47 + uVar43 * 4) = uVar14;
          if ((uint)*puVar32 == uVar18) break;
          puVar3 = (uint *)&UNK_01add8a4;
          if (uVar34 <= (uint)uVar41) {
            puVar3 = (uint *)(lVar40 + uVar41);
          }
          if (((uint)*puVar38 == *puVar3) && (uVar34 <= (uint)uVar41)) goto LAB_002afb6c;
          uVar18 = *(uint *)(lVar47 + uVar33 * 4);
          uVar41 = (ulong)uVar18;
          uVar43 = *puVar32 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
          uVar14 = (int)puVar52 - iVar23;
          *(uint *)(lVar47 + uVar33 * 4) = uVar14;
          puVar3 = (uint *)&UNK_01add8a4;
          if (uVar34 <= uVar18) {
            puVar3 = (uint *)(lVar40 + uVar41);
          }
          if (((uint)*puVar52 == *puVar3) && (puVar38 = puVar52, uVar34 <= uVar18))
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          goto LAB_002afb78;
          uVar41 = (ulong)*(uint *)(lVar47 + uVar43 * 4);
          uVar33 = *puVar49;
          puVar52 = (ulong *)((long)puVar32 + uVar31);
          uVar39 = uVar31;
          if (puVar15 <= puVar52) {
            Hint_Prefetch(puVar49 + 8,0,0,0);
            Hint_Prefetch(puVar49 + 0x10,0,0,0);
            puVar15 = puVar15 + 0x10;
            uVar39 = uVar31 + 1;
          }
          puVar37 = (ulong *)((long)puVar49 + uVar31);
          uVar31 = uVar39;
          puVar38 = puVar32;
          puVar32 = puVar52;
          puVar52 = puVar49;
          if (puVar26 <= puVar37) goto LAB_002b3cc0;
        }
        bVar12 = *(char *)((long)puVar32 - 1) == *(char *)((long)puVar32 + lVar46 + -1);
        uVar31 = (ulong)bVar12;
/* WM - unlicensed copy if this notice is missing */
        lVar50 = 4;
        if (bVar12) {
          lVar50 = 5;
        }
        puVar38 = (ulong *)((long)puVar32 - uVar31);
        puVar32 = (ulong *)((long)puVar32 + (lVar46 - uVar31));
        *(int *)(lVar47 + uVar33 * 4) = (int)puVar52 - iVar23;
        iVar45 = 1;
        goto LAB_002afc38;
      }
    }
    else if (puVar37 < puVar26) {
      uVar14 = 0x20 - *(int *)(param_1 + 0x108);
      puVar44 = (ulong *)((long)puVar53 - 7);
      puVar36 = puVar53 + -4;
LAB_002b2b98:
      puVar52 = (ulong *)((long)puVar38 + 1);
      uVar18 = *(uint *)puVar52;
      puVar15 = puVar38 + 0x10;
      uVar43 = (ulong)((uint)*puVar38 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
      uVar31 = (ulong)*(uint *)(lVar47 + uVar43 * 4);
      lVar46 = -(ulong)uVar20;
      uVar24 = uVar22;
      if (uVar20 == 0) {
/* donate: donate/README.md - github.com/pengussy */
        do {
          uVar33 = (ulong)(uVar18 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
          uVar18 = (int)puVar38 - iVar23;
          *(uint *)(lVar47 + uVar43 * 4) = uVar18;
          puVar3 = (uint *)&UNK_01add8a4;
          if (uVar34 <= (uint)uVar31) {
            puVar3 = (uint *)(lVar40 + uVar31);
          }
          if (((uint)*puVar38 == *puVar3) && (uVar34 <= (uint)uVar31)) goto LAB_002b2e2c;
          uVar19 = *(uint *)(lVar47 + uVar33 * 4);
          uVar31 = (ulong)uVar19;
          uVar43 = (ulong)((uint)*puVar32 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
          uVar18 = (int)puVar52 - iVar23;
          *(uint *)(lVar47 + uVar33 * 4) = uVar18;
          puVar3 = (uint *)&UNK_01add8a4;
          if (uVar34 <= uVar19) {
            puVar3 = (uint *)(lVar40 + uVar31);
          }
          if ((uint)*puVar52 == *puVar3) {
            puVar38 = puVar52;
            uVar33 = uVar43;
            if (uVar34 <= uVar19) goto LAB_002b2e90;
          }
          uVar31 = (ulong)*(uint *)(lVar47 + uVar43 * 4);
          uVar18 = (uint)*puVar37;
          puVar52 = (ulong *)((long)puVar32 + uVar24);
          uVar33 = uVar24;
          if (puVar15 <= puVar52) {
            Hint_Prefetch(puVar37 + 8,0,0,0);
            Hint_Prefetch(puVar37 + 0x10,0,0,0);
            puVar15 = puVar15 + 0x10;
            uVar33 = uVar24 + 1;
          }
          puVar49 = (ulong *)((long)puVar37 + uVar24);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
          uVar24 = uVar33;
          puVar38 = puVar32;
          puVar32 = puVar52;
          puVar52 = puVar37;
          puVar37 = puVar49;
          if (puVar26 <= puVar49) goto LAB_002b3cb8;
        } while( true );
      }
      while( true ) {
        uVar21 = *(uint *)((long)puVar32 + lVar46);
        uVar33 = (ulong)(uVar18 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
        uVar18 = (int)puVar38 - iVar23;
        *(uint *)(lVar47 + uVar43 * 4) = uVar18;
        uVar19 = (uint)*puVar32;
        if (uVar19 == uVar21) break;
        puVar3 = (uint *)&UNK_01add8a4;
        if (uVar34 <= (uint)uVar31) {
          puVar3 = (uint *)(lVar40 + uVar31);
        }
        if ((uint)*puVar38 == *puVar3) {
          if (uVar34 <= (uint)uVar31) goto LAB_002b2e2c;
          uVar19 = (uint)*puVar32;
        }
        uVar21 = *(uint *)(lVar47 + uVar33 * 4);
        uVar31 = (ulong)uVar21;
        uVar43 = (ulong)(uVar19 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
        uVar18 = (int)puVar52 - iVar23;
        *(uint *)(lVar47 + uVar33 * 4) = uVar18;
        puVar3 = (uint *)&UNK_01add8a4;
        if (uVar34 <= uVar21) {
          puVar3 = (uint *)(lVar40 + uVar31);
        }
        if ((uint)*puVar52 == *puVar3) {
// WM - no support for modified copies
          puVar38 = puVar52;
          uVar33 = uVar43;
          if (uVar34 <= uVar21) goto LAB_002b2e90;
        }
        uVar31 = (ulong)*(uint *)(lVar47 + uVar43 * 4);
        uVar18 = (uint)*puVar37;
        puVar52 = (ulong *)((long)puVar32 + uVar24);
        uVar33 = uVar24;
        if (puVar15 <= puVar52) {
          Hint_Prefetch(puVar37 + 8,0,0,0);
          Hint_Prefetch(puVar37 + 0x10,0,0,0);
          puVar15 = puVar15 + 0x10;
          uVar33 = uVar24 + 1;
        }
        puVar49 = (ulong *)((long)puVar37 + uVar24);
        uVar24 = uVar33;
        puVar38 = puVar32;
        puVar32 = puVar52;
        puVar52 = puVar37;
        puVar37 = puVar49;
        if (puVar26 <= puVar49) goto LAB_002b3cc0;
      }
      bVar12 = *(char *)((long)puVar32 - 1) == *(char *)((long)puVar32 + lVar46 + -1);
      uVar24 = (ulong)bVar12;
      lVar50 = 4;
      if (bVar12) {
        lVar50 = 5;
      }
      puVar38 = (ulong *)((long)puVar32 - uVar24);
      puVar32 = (ulong *)((long)puVar32 + (lVar46 - uVar24));
      *(int *)(lVar47 + uVar33 * 4) = (int)puVar52 - iVar23;
      iVar45 = 1;
      puVar37 = (ulong *)((long)puVar32 + lVar50);
      puVar15 = (ulong *)((long)puVar38 + lVar50);
/* WM - stripping the watermark breaks the license */
      uVar19 = uVar20;
      goto joined_r0x002b2dc4;
    }
  }
  else if (iVar45 == 5) {
    if (puVar37 < puVar26) {
      uVar24 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
      puVar44 = (ulong *)((long)puVar53 - 7);
      puVar36 = puVar53 + -4;
LAB_002b235c:
      puVar52 = (ulong *)((long)puVar38 + 1);
      uVar43 = *puVar52;
      puVar15 = puVar38 + 0x10;
      uVar33 = *puVar38 * -0x30e4432345000000 >> (uVar24 & 0x3f);
      uVar14 = *(uint *)(lVar47 + uVar33 * 4);
      lVar46 = -(ulong)uVar20;
      uVar31 = uVar22;
      if (uVar20 == 0) {
        do {
          uVar43 = uVar43 * -0x30e4432345000000 >> (uVar24 & 0x3f);
          uVar18 = (int)puVar38 - iVar23;
          *(uint *)(lVar47 + uVar33 * 4) = uVar18;
          if ((uVar34 <= uVar14) && ((uint)*puVar38 == *(uint *)(lVar40 + (ulong)uVar14)))
          goto LAB_002b25c8;
          uVar14 = *(uint *)(lVar47 + uVar43 * 4);
          uVar33 = *puVar32 * -0x30e4432345000000 >> (uVar24 & 0x3f);
          uVar18 = (int)puVar52 - iVar23;
          *(uint *)(lVar47 + uVar43 * 4) = uVar18;
          if (uVar34 <= uVar14) {
            puVar38 = puVar52;
            uVar43 = uVar33;
            if ((uint)*puVar52 == *(uint *)(lVar40 + (ulong)uVar14)) goto LAB_002b25b4;
          }
          uVar14 = *(uint *)(lVar47 + uVar33 * 4);
          uVar43 = *puVar37;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          puVar52 = (ulong *)((long)puVar32 + uVar31);
          uVar41 = uVar31;
          if (puVar15 <= puVar52) {
            Hint_Prefetch(puVar37 + 8,0,0,0);
            Hint_Prefetch(puVar37 + 0x10,0,0,0);
            puVar15 = puVar15 + 0x10;
            uVar41 = uVar31 + 1;
          }
          puVar49 = (ulong *)((long)puVar37 + uVar31);
          uVar31 = uVar41;
          puVar38 = puVar32;
          puVar32 = puVar52;
          puVar52 = puVar37;
          puVar37 = puVar49;
          if (puVar26 <= puVar49) goto LAB_002b3cb8;
        } while( true );
      }
      while( true ) {
        uVar19 = *(uint *)((long)puVar32 + lVar46);
        uVar43 = uVar43 * -0x30e4432345000000 >> (uVar24 & 0x3f);
        uVar18 = (int)puVar38 - iVar23;
        *(uint *)(lVar47 + uVar33 * 4) = uVar18;
        if ((uint)*puVar32 == uVar19) break;
        if ((uVar34 <= uVar14) && ((uint)*puVar38 == *(uint *)(lVar40 + (ulong)uVar14)))
        goto LAB_002b25c8;
        uVar14 = *(uint *)(lVar47 + uVar43 * 4);
        uVar33 = *puVar32 * -0x30e4432345000000 >> (uVar24 & 0x3f);
        uVar18 = (int)puVar52 - iVar23;
        *(uint *)(lVar47 + uVar43 * 4) = uVar18;
        if (uVar34 <= uVar14) {
          puVar38 = puVar52;
          uVar43 = uVar33;
          if ((uint)*puVar52 == *(uint *)(lVar40 + (ulong)uVar14)) goto LAB_002b25b4;
        }
        uVar14 = *(uint *)(lVar47 + uVar33 * 4);
        uVar43 = *puVar37;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        puVar52 = (ulong *)((long)puVar32 + uVar31);
        uVar41 = uVar31;
        if (puVar15 <= puVar52) {
          Hint_Prefetch(puVar37 + 8,0,0,0);
          Hint_Prefetch(puVar37 + 0x10,0,0,0);
          puVar15 = puVar15 + 0x10;
          uVar41 = uVar31 + 1;
        }
        puVar49 = (ulong *)((long)puVar37 + uVar31);
        uVar31 = uVar41;
        puVar38 = puVar32;
        puVar32 = puVar52;
        puVar52 = puVar37;
        puVar37 = puVar49;
        if (puVar26 <= puVar49) goto LAB_002b3cc0;
      }
      bVar12 = *(char *)((long)puVar32 - 1) == *(char *)((long)puVar32 + lVar46 + -1);
      uVar31 = (ulong)bVar12;
      lVar50 = 4;
      if (bVar12) {
        lVar50 = 5;
      }
      puVar38 = (ulong *)((long)puVar32 - uVar31);
      puVar32 = (ulong *)((long)puVar32 + (lVar46 - uVar31));
      *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      iVar45 = 1;
      puVar37 = (ulong *)((long)puVar32 + lVar50);
      puVar15 = (ulong *)((long)puVar38 + lVar50);
      uVar19 = uVar20;
      goto joined_r0x002b254c;
    }
  }
  else if (iVar45 == 6) {
    if (puVar37 < puVar26) {
      uVar24 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
      puVar44 = (ulong *)((long)puVar53 - 7);
      puVar36 = puVar53 + -4;
LAB_002b1284:
      puVar52 = (ulong *)((long)puVar38 + 1);
      uVar43 = *puVar52;
      puVar15 = puVar38 + 0x10;
      uVar33 = *puVar38 * -0x30e4432340650000 >> (uVar24 & 0x3f);
      uVar14 = *(uint *)(lVar47 + uVar33 * 4);
      lVar46 = -(ulong)uVar20;
      uVar31 = uVar22;
      if (uVar20 == 0) {
        do {
          uVar43 = uVar43 * -0x30e4432340650000 >> (uVar24 & 0x3f);
          uVar18 = (int)puVar38 - iVar23;
          *(uint *)(lVar47 + uVar33 * 4) = uVar18;
          if ((uVar34 <= uVar14) && ((uint)*puVar38 == *(uint *)(lVar40 + (ulong)uVar14)))
          goto LAB_002b14f0;
          uVar14 = *(uint *)(lVar47 + uVar43 * 4);
          uVar33 = *puVar32 * -0x30e4432340650000 >> (uVar24 & 0x3f);
          uVar18 = (int)puVar52 - iVar23;
          *(uint *)(lVar47 + uVar43 * 4) = uVar18;
/* more drops soon - github.com/pengussy - github.com/pengussy */
          if (uVar34 <= uVar14) {
            puVar38 = puVar52;
            uVar43 = uVar33;
            if ((uint)*puVar52 == *(uint *)(lVar40 + (ulong)uVar14)) goto LAB_002b14dc;
          }
          uVar14 = *(uint *)(lVar47 + uVar33 * 4);
          uVar43 = *puVar37;
          puVar52 = (ulong *)((long)puVar32 + uVar31);
          uVar41 = uVar31;
          if (puVar15 <= puVar52) {
            Hint_Prefetch(puVar37 + 8,0,0,0);
            Hint_Prefetch(puVar37 + 0x10,0,0,0);
            puVar15 = puVar15 + 0x10;
            uVar41 = uVar31 + 1;
          }
          puVar49 = (ulong *)((long)puVar37 + uVar31);
          uVar31 = uVar41;
          puVar38 = puVar32;
// found on a paste site? it was re-uploaded illegally
          puVar32 = puVar52;
          puVar52 = puVar37;
          puVar37 = puVar49;
          if (puVar26 <= puVar49) goto LAB_002b3cb8;
        } while( true );
      }
      while( true ) {
        uVar19 = *(uint *)((long)puVar32 + lVar46);
        uVar43 = uVar43 * -0x30e4432340650000 >> (uVar24 & 0x3f);
        uVar18 = (int)puVar38 - iVar23;
        *(uint *)(lVar47 + uVar33 * 4) = uVar18;
        if ((uint)*puVar32 == uVar19) break;
        if ((uVar34 <= uVar14) && ((uint)*puVar38 == *(uint *)(lVar40 + (ulong)uVar14)))
        goto LAB_002b14f0;
        uVar14 = *(uint *)(lVar47 + uVar43 * 4);
        uVar33 = *puVar32 * -0x30e4432340650000 >> (uVar24 & 0x3f);
        uVar18 = (int)puVar52 - iVar23;
        *(uint *)(lVar47 + uVar43 * 4) = uVar18;
        if (uVar34 <= uVar14) {
          puVar38 = puVar52;
          uVar43 = uVar33;
          if ((uint)*puVar52 == *(uint *)(lVar40 + (ulong)uVar14)) goto LAB_002b14dc;
        }
        uVar14 = *(uint *)(lVar47 + uVar33 * 4);
        uVar43 = *puVar37;
        puVar52 = (ulong *)((long)puVar32 + uVar31);
        uVar41 = uVar31;
        if (puVar15 <= puVar52) {
          Hint_Prefetch(puVar37 + 8,0,0,0);
          Hint_Prefetch(puVar37 + 0x10,0,0,0);
          puVar15 = puVar15 + 0x10;
          uVar41 = uVar31 + 1;
        }
        puVar49 = (ulong *)((long)puVar37 + uVar31);
        uVar31 = uVar41;
        puVar38 = puVar32;
        puVar32 = puVar52;
/*  found on a paste site? it was re-uploaded illegally  */
        puVar52 = puVar37;
        puVar37 = puVar49;
        if (puVar26 <= puVar49) goto LAB_002b3cc0;
      }
      bVar12 = *(char *)((long)puVar32 - 1) == *(char *)((long)puVar32 + lVar46 + -1);
      uVar31 = (ulong)bVar12;
      lVar50 = 4;
      if (bVar12) {
        lVar50 = 5;
      }
      puVar38 = (ulong *)((long)puVar32 - uVar31);
      puVar32 = (ulong *)((long)puVar32 + (lVar46 - uVar31));
      *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
      iVar45 = 1;
      puVar37 = (ulong *)((long)puVar32 + lVar50);
      puVar15 = (ulong *)((long)puVar38 + lVar50);
      uVar19 = uVar20;
      goto joined_r0x002b1474;
    }
  }
  else if (iVar45 == 7) {
    if (puVar37 < puVar26) {
      uVar24 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
      puVar44 = (ulong *)((long)puVar53 - 7);
      puVar36 = puVar53 + -4;
LAB_002b01e4:
      puVar52 = (ulong *)((long)puVar38 + 1);
      uVar43 = *puVar52;
      puVar15 = puVar38 + 0x10;
      uVar33 = *puVar38 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
      uVar14 = *(uint *)(lVar47 + uVar33 * 4);
      lVar46 = -(ulong)uVar20;
      uVar31 = uVar22;
// WM - keep the notice, keep the source honest
      if (uVar20 == 0) {
        do {
          uVar43 = uVar43 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
          uVar18 = (int)puVar38 - iVar23;
          *(uint *)(lVar47 + uVar33 * 4) = uVar18;
          if ((uVar34 <= uVar14) && ((uint)*puVar38 == *(uint *)(lVar40 + (ulong)uVar14)))
          goto LAB_002b0450;
          uVar14 = *(uint *)(lVar47 + uVar43 * 4);
          uVar33 = *puVar32 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
          uVar18 = (int)puVar52 - iVar23;
          *(uint *)(lVar47 + uVar43 * 4) = uVar18;
          if (uVar34 <= uVar14) {
            puVar38 = puVar52;
            uVar43 = uVar33;
            if ((uint)*puVar52 == *(uint *)(lVar40 + (ulong)uVar14)) goto LAB_002b043c;
          }
          uVar14 = *(uint *)(lVar47 + uVar33 * 4);
          uVar43 = *puVar37;
          puVar52 = (ulong *)((long)puVar32 + uVar31);
          uVar41 = uVar31;
          if (puVar15 <= puVar52) {
            Hint_Prefetch(puVar37 + 8,0,0,0);
            Hint_Prefetch(puVar37 + 0x10,0,0,0);
            puVar15 = puVar15 + 0x10;
            uVar41 = uVar31 + 1;
          }
          puVar49 = (ulong *)((long)puVar37 + uVar31);
          uVar31 = uVar41;
          puVar38 = puVar32;
          puVar32 = puVar52;
          puVar52 = puVar37;
          puVar37 = puVar49;
          if (puVar26 <= puVar49) goto LAB_002b3cb8;
        } while( true );
      }
      while( true ) {
        uVar19 = *(uint *)((long)puVar32 + lVar46);
        uVar43 = uVar43 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
/* WM - keep the notice, keep the source honest */
        uVar18 = (int)puVar38 - iVar23;
        *(uint *)(lVar47 + uVar33 * 4) = uVar18;
        if ((uint)*puVar32 == uVar19) break;
        if ((uVar34 <= uVar14) && ((uint)*puVar38 == *(uint *)(lVar40 + (ulong)uVar14)))
        goto LAB_002b0450;
        uVar14 = *(uint *)(lVar47 + uVar43 * 4);
        uVar33 = *puVar32 * -0x30e44323405a9d00 >> (uVar24 & 0x3f);
        uVar18 = (int)puVar52 - iVar23;
        *(uint *)(lVar47 + uVar43 * 4) = uVar18;
        if (uVar34 <= uVar14) {
          puVar38 = puVar52;
          uVar43 = uVar33;
          if ((uint)*puVar52 == *(uint *)(lVar40 + (ulong)uVar14)) goto LAB_002b043c;
        }
        uVar14 = *(uint *)(lVar47 + uVar33 * 4);
        uVar43 = *puVar37;
        puVar52 = (ulong *)((long)puVar32 + uVar31);
        uVar41 = uVar31;
        if (puVar15 <= puVar52) {
          Hint_Prefetch(puVar37 + 8,0,0,0);
          Hint_Prefetch(puVar37 + 0x10,0,0,0);
          puVar15 = puVar15 + 0x10;
          uVar41 = uVar31 + 1;
        }
        puVar49 = (ulong *)((long)puVar37 + uVar31);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar31 = uVar41;
        puVar38 = puVar32;
        puVar32 = puVar52;
        puVar52 = puVar37;
        puVar37 = puVar49;
        if (puVar26 <= puVar49) goto LAB_002b3cc0;
      }
      bVar12 = *(char *)((long)puVar32 - 1) == *(char *)((long)puVar32 + lVar46 + -1);
      uVar31 = (ulong)bVar12;
      lVar50 = 4;
      if (bVar12) {
        lVar50 = 5;
      }
      puVar38 = (ulong *)((long)puVar32 - uVar31);
      puVar32 = (ulong *)((long)puVar32 + (lVar46 - uVar31));
      *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
      iVar45 = 1;
      puVar37 = (ulong *)((long)puVar32 + lVar50);
      puVar15 = (ulong *)((long)puVar38 + lVar50);
      uVar19 = uVar20;
      goto joined_r0x002b03d4;
    }
  }
  else if (puVar37 < puVar26) {
    uVar14 = 0x20 - *(int *)(param_1 + 0x108);
    puVar44 = (ulong *)((long)puVar53 - 7);
    puVar36 = puVar53 + -4;
LAB_002b3458:
    puVar52 = (ulong *)((long)puVar38 + 1);
    uVar18 = *(uint *)puVar52;
    puVar15 = puVar38 + 0x10;
    uVar31 = (ulong)((uint)*puVar38 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
    uVar19 = *(uint *)(lVar47 + uVar31 * 4);
/* WM - origin: github.com/pengussy */
    lVar46 = -(ulong)uVar20;
    uVar24 = uVar22;
    if (uVar20 == 0) {
      do {
        uVar43 = (ulong)(uVar18 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
        uVar18 = (int)puVar38 - iVar23;
        *(uint *)(lVar47 + uVar31 * 4) = uVar18;
        if ((uVar34 <= uVar19) && ((uint)*puVar38 == *(uint *)(lVar40 + (ulong)uVar19)))
        goto LAB_002b3734;
        uVar19 = *(uint *)(lVar47 + uVar43 * 4);
        uVar31 = (ulong)((uint)*puVar32 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
        uVar18 = (int)puVar52 - iVar23;
        *(uint *)(lVar47 + uVar43 * 4) = uVar18;
        if (uVar34 <= uVar19) {
          puVar38 = puVar52;
          uVar43 = uVar31;
          if ((uint)*puVar52 == *(uint *)(lVar40 + (ulong)uVar19)) goto LAB_002b3720;
        }
        uVar19 = *(uint *)(lVar47 + uVar31 * 4);
        uVar18 = (uint)*puVar37;
        puVar52 = (ulong *)((long)puVar32 + uVar24);
        uVar43 = uVar24;
        if (puVar15 <= puVar52) {
          Hint_Prefetch(puVar37 + 8,0,0,0);
          Hint_Prefetch(puVar37 + 0x10,0,0,0);
          puVar15 = puVar15 + 0x10;
          uVar43 = uVar24 + 1;
        }
        puVar49 = (ulong *)((long)puVar37 + uVar24);
        uVar24 = uVar43;
        puVar38 = puVar32;
        puVar32 = puVar52;
// if you paid for this, you were scammed
        puVar52 = puVar37;
        puVar37 = puVar49;
        if (puVar26 <= puVar49) goto LAB_002b3cb8;
      } while( true );
    }
    while( true ) {
      uVar21 = *(uint *)((long)puVar32 + lVar46);
      uVar43 = (ulong)(uVar18 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
      uVar18 = (int)puVar38 - iVar23;
      *(uint *)(lVar47 + uVar31 * 4) = uVar18;
      if ((uint)*puVar32 == uVar21) break;
      if ((uVar34 <= uVar19) && ((uint)*puVar38 == *(uint *)(lVar40 + (ulong)uVar19)))
      goto LAB_002b3734;
      uVar19 = *(uint *)(lVar47 + uVar43 * 4);
      uVar31 = (ulong)((uint)*puVar32 * -0x61c8864f >> (ulong)(uVar14 & 0x1f));
      uVar18 = (int)puVar52 - iVar23;
      *(uint *)(lVar47 + uVar43 * 4) = uVar18;
      if (uVar34 <= uVar19) {
        puVar38 = puVar52;
        uVar43 = uVar31;
        if ((uint)*puVar52 == *(uint *)(lVar40 + (ulong)uVar19)) goto LAB_002b3720;
      }
      uVar19 = *(uint *)(lVar47 + uVar31 * 4);
      uVar18 = (uint)*puVar37;
      puVar52 = (ulong *)((long)puVar32 + uVar24);
      uVar43 = uVar24;
      if (puVar15 <= puVar52) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        Hint_Prefetch(puVar37 + 8,0,0,0);
        Hint_Prefetch(puVar37 + 0x10,0,0,0);
        puVar15 = puVar15 + 0x10;
        uVar43 = uVar24 + 1;
      }
      puVar49 = (ulong *)((long)puVar37 + uVar24);
      uVar24 = uVar43;
      puVar38 = puVar32;
      puVar32 = puVar52;
      puVar52 = puVar37;
      puVar37 = puVar49;
      if (puVar26 <= puVar49) goto LAB_002b3cc0;
    }
    bVar12 = *(char *)((long)puVar32 - 1) == *(char *)((long)puVar32 + lVar46 + -1);
    uVar24 = (ulong)bVar12;
    lVar50 = 4;
    if (bVar12) {
      lVar50 = 5;
/* wm:stripping the watermark breaks the license */
    }
    puVar38 = (ulong *)((long)puVar32 - uVar24);
    puVar32 = (ulong *)((long)puVar32 + (lVar46 - uVar24));
    *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
    iVar45 = 1;
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar15 = (ulong *)((long)puVar38 + lVar50);
    uVar21 = uVar20;
    goto joined_r0x002b3650;
  }
LAB_002b3cc0:
  uVar34 = uVar4;
  if (uVar4 <= uVar5) {
    uVar34 = 0;
  }
  if (uVar7 <= uVar5) {
    uVar7 = 0;
  }
  if (uVar20 != 0) {
    uVar34 = uVar20;
  }
  if (uVar20 == 0 || uVar4 <= uVar5) {
    uVar4 = uVar7;
  }
  if (uVar17 != 0) {
    uVar4 = uVar17;
  }
  *param_3 = uVar34;
  param_3[1] = uVar4;
  return (long)puVar53 - (long)param_4;
LAB_002b7228:
/* do not claim this as your own - github.com/pengussy */
  uVar43 = uVar31;
  puVar32 = puVar36;
LAB_002b722c:
  uStack_c0 = uVar48 - uVar14;
  pcVar10 = (char *)(lVar50 + (ulong)uVar17);
  if (uVar20 <= uVar14) {
    lVar16 = param_5;
    pcVar10 = pcVar1;
  }
  iStack_c4 = uStack_c0 + 3;
  pcVar27 = (char *)(lVar13 + (ulong)uVar14);
  if ((pcVar10 < pcVar27) && (param_4 < puVar32)) {
    lVar51 = 4;
    pcVar27 = (char *)(lVar13 + (ulong)uVar14);
    while( true ) {
      pcVar25 = pcVar27 + -1;
      puVar28 = (ulong *)((long)puVar32 + -1);
      if (*(char *)puVar28 != *pcVar25) break;
      lVar51 = lVar51 + 1;
      pcVar27 = pcVar25;
/* stripping the watermark breaks the license - github.com/pengussy */
      puVar32 = puVar28;
      if ((pcVar25 <= pcVar10) || (puVar28 <= param_4)) break;
    }
  }
  else {
    lVar51 = 4;
  }
LAB_002b72d8:
  lVar13 = func_0x002ad924((long)puVar32 + lVar51,pcVar27 + lVar51,param_5,lVar16,pcVar1);
  uVar31 = (long)puVar32 - (long)param_4;
  puVar28 = (ulong *)param_2[3];
  if (puVar26 < puVar32) {
    puVar38 = param_4;
    if (param_4 <= puVar26) {
      puVar36 = (ulong *)((long)puVar28 + ((long)puVar26 - (long)param_4));
      uVar33 = *param_4;
      puVar37 = puVar28 + 2;
      puVar28[1] = param_4[1];
      *puVar28 = uVar33;
      puVar38 = puVar26;
      puVar28 = puVar36;
      if (0x10 < (ulong)((long)puVar26 - (long)param_4)) {
        do {
          uVar33 = param_4[2];
          puVar37[1] = param_4[3];
          *puVar37 = uVar33;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          uVar33 = param_4[4];
          puVar37[3] = param_4[5];
          puVar37[2] = uVar33;
          puVar37 = puVar37 + 4;
          param_4 = param_4 + 4;
        } while (puVar37 < puVar36);
      }
    }
    if (puVar38 < puVar32) {
      uVar33 = (long)puVar32 - (long)puVar38;
      if ((7 < uVar33) && (0x3f < (ulong)((long)puVar28 - (long)puVar38))) {
        if (uVar33 < 0x40) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar33 & 0xffffffffffffffc0;
          puVar37 = puVar28 + 4;
          puVar36 = puVar38 + 4;
          uVar41 = uVar39;
          do {
            uVar54 = puVar36[-4];
            uVar56 = puVar36[-1];
            uVar55 = puVar36[-2];
            uVar58 = puVar36[1];
            uVar57 = *puVar36;
            uVar60 = puVar36[3];
            uVar59 = puVar36[2];
            puVar37[-3] = puVar36[-3];
            puVar37[-4] = uVar54;
            puVar37[-1] = uVar56;
            puVar37[-2] = uVar55;
            puVar37[1] = uVar58;
            *puVar37 = uVar57;
            puVar37[3] = uVar60;
/* if you paid for this, you were scammed */
            puVar37[2] = uVar59;
            uVar41 = uVar41 - 0x40;
            puVar37 = puVar37 + 8;
            puVar36 = puVar36 + 8;
          } while (uVar41 != 0);
          if (uVar33 == uVar39) goto LAB_002b74bc;
          if ((uVar33 & 0x38) == 0) {
            puVar28 = (ulong *)((long)puVar28 + uVar39);
            puVar38 = (ulong *)((long)puVar38 + uVar39);
            goto LAB_002b74ac;
          }
        }
        uVar41 = uVar33 & 0xfffffffffffffff8;
        lVar42 = uVar39 - uVar41;
        puVar29 = (undefined8 *)((long)puVar28 + uVar39);
        puVar35 = (undefined8 *)((long)puVar38 + uVar39);
        do {
          *puVar29 = *puVar35;
          lVar42 = lVar42 + 8;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
        } while (lVar42 != 0);
        puVar28 = (ulong *)((long)puVar28 + uVar41);
        puVar38 = (ulong *)((long)puVar38 + uVar41);
        if (uVar33 == uVar41) goto LAB_002b74bc;
      }
LAB_002b74ac:
      do {
        puVar37 = (ulong *)((long)puVar38 + 1);
        *(char *)puVar28 = (char)*puVar38;
        puVar28 = (ulong *)((long)puVar28 + 1);
        puVar38 = puVar37;
      } while (puVar37 != puVar32);
    }
LAB_002b74bc:
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    param_2[3] = param_2[3] + uVar31;
    piVar30 = (int *)param_2[1];
    if (0xffff < uVar31) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
    }
  }
  else {
    uVar33 = *param_4;
    puVar28[1] = param_4[1];
    *puVar28 = uVar33;
    if (0x10 < uVar31) {
      lVar42 = param_2[3];
      uVar33 = param_4[2];
      *(ulong *)(lVar42 + 0x18) = param_4[3];
      *(ulong *)(lVar42 + 0x10) = uVar33;
      if (0x10 < uVar31 - 0x10) {
        puVar28 = (ulong *)(lVar42 + 0x20);
        puVar38 = param_4 + 6;
        do {
          uVar33 = puVar38[-2];
          puVar28[1] = puVar38[-1];
          *puVar28 = uVar33;
          uVar33 = *puVar38;
          puVar28[3] = puVar38[1];
          puVar28[2] = uVar33;
          puVar28 = puVar28 + 4;
          puVar38 = puVar38 + 4;
        } while (puVar28 < (ulong *)(lVar42 + uVar31));
        goto LAB_002b74bc;
      }
    }
    param_2[3] = param_2[3] + uVar31;
    piVar30 = (int *)param_2[1];
  }
  *(short *)(piVar30 + 1) = (short)uVar31;
  *piVar30 = iStack_c4;
  uVar31 = (lVar13 + lVar51) - 3;
/* keep the notice, keep the source honest */
  if (0xffff < uVar31) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
  }
  *(short *)((long)piVar30 + 6) = (short)uVar31;
  piVar30 = piVar30 + 2;
  param_2[1] = (long)piVar30;
  param_4 = (ulong *)((long)puVar32 + lVar13 + lVar51);
  if (puVar44 < param_4) {
    *(int *)(lVar46 + uVar43 * 4) = (int)puVar44 - iVar9;
  }
  if (puVar53 < param_4) {
    uVar34 = uStack_bc;
    uStack_bc = uStack_c0;
    goto LAB_002b7730;
  }
  if (param_6 < 6) {
    if (param_6 != 4) {
      lVar13 = *(long *)(lVar40 + (ulong)uVar48);
      uVar31 = 0xbb000000;
      goto LAB_002b75b4;
    }
    *(uint *)(lVar46 + (ulong)((uint)(*(int *)(lVar40 + (ulong)uVar48) * -0x61c8864f) >>
                              (ulong)(uVar4 & 0x1f)) * 4) = uVar48 + 2;
    uVar31 = (ulong)((uint)(*(int *)((long)param_4 - 2) * -0x61c8864f) >> (ulong)(uVar4 & 0x1f));
  }
  else {
    if (param_6 == 6) {
      lVar13 = *(long *)(lVar40 + (ulong)uVar48);
      uVar31 = 0xbf9b0000;
    }
/* do not claim this as your own */
    else {
      lVar13 = *(long *)(lVar40 + (ulong)uVar48);
      uVar31 = 0xbfa56300;
    }
LAB_002b75b4:
    *(uint *)(lVar46 + (lVar13 * (uVar31 | 0xcf1bbcdc00000000) >> (uVar24 & 0x3f)) * 4) = uVar48 + 2
    ;
    uVar31 = *(long *)((long)param_4 - 2) * (uVar31 | 0xcf1bbcdc00000000) >> (uVar24 & 0x3f);
  }
  *(int *)(lVar46 + uVar31 * 4) = ((int)param_4 + -2) - iVar9;
  uVar14 = uStack_bc;
  do {
    uVar19 = uStack_c0;
    iVar45 = (int)param_4 - iVar9;
    uVar34 = iVar45 - uVar14;
    lVar13 = lVar50;
    if (uVar7 <= uVar34) {
      lVar13 = lVar47;
    }
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    if (((uVar14 == 0) || (0xfffffffc < uVar34 - uVar7)) ||
       (*(uint *)(lVar13 + (ulong)uVar34) != (uint)*param_4)) {
      uVar34 = uVar14;
      uStack_bc = uVar19;
      break;
    }
    lVar42 = lVar2;
    if (uVar7 <= uVar34) {
      lVar42 = param_5;
    }
    lVar13 = func_0x002ad924((uint *)((long)param_4 + 4),(uint *)(lVar13 + (ulong)uVar34) + 1,
                             param_5,lVar42,pcVar1);
    if (param_4 <= puVar26) {
      puVar28 = (ulong *)param_2[3];
      uVar31 = *param_4;
      puVar28[1] = param_4[1];
      *puVar28 = uVar31;
      piVar30 = (int *)param_2[1];
    }
    *(undefined2 *)(piVar30 + 1) = 0;
    *piVar30 = 1;
    if (0xffff < lVar13 + 1U) {
      *(undefined4 *)(param_2 + 9) = 2;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
    }
    *(short *)((long)piVar30 + 6) = (short)(lVar13 + 1U);
    piVar30 = piVar30 + 2;
    param_2[1] = (long)piVar30;
    if (param_6 < 6) {
      if (param_6 != 4) {
        uVar31 = *param_4;
        uVar43 = 0xbb000000;
        goto LAB_002b75f0;
      }
      uVar31 = (ulong)((uint)*param_4 * -0x61c8864f >> (ulong)(uVar4 & 0x1f));
    }
/*  no support for modified copies  */
    else {
      if (param_6 == 6) {
        uVar31 = *param_4;
        uVar43 = 0xbf9b0000;
      }
      else {
        uVar31 = *param_4;
        uVar43 = 0xbfa56300;
      }
LAB_002b75f0:
      uVar31 = uVar31 * (uVar43 | 0xcf1bbcdc00000000) >> (uVar24 & 0x3f);
    }
    *(int *)(lVar46 + uVar31 * 4) = iVar45;
    param_4 = (ulong *)((long)param_4 + lVar13 + 4);
    uVar34 = uVar19;
    uStack_bc = uVar14;
    uStack_c0 = uVar14;
    uVar14 = uVar19;
  } while (param_4 <= puVar53);
LAB_002b7730:
  puVar38 = (ulong *)((long)param_4 + uVar22);
  puVar28 = (ulong *)((long)puVar38 + 1);
  if (puVar53 <= puVar28) goto LAB_002b77c8;
  goto LAB_002b6f50;
LAB_002b1dc0:
  iVar45 = (int)puVar52;
LAB_002b1de4:
  *(int *)(lVar47 + uVar43 * 4) = iVar45 - iVar23;
LAB_002b1dec:
  puVar32 = (ulong *)(lVar40 + uVar41);
  uVar18 = (int)puVar38 - (int)puVar32;
  iVar45 = uVar18 + 3;
  if ((uVar34 < (uint)uVar41) && (param_4 < puVar38)) {
    lVar50 = 4;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    puVar37 = (ulong *)(lVar40 + -1 + uVar41);
    while( true ) {
      puVar32 = puVar37;
      puVar37 = (ulong *)((long)puVar38 + -1);
      if (*(char *)puVar37 != (char)*puVar32) break;
      lVar50 = lVar50 + 1;
      puVar38 = puVar37;
      if ((puVar37 <= param_4) || (puVar37 = (ulong *)((long)puVar32 + -1), puVar32 <= puVar28))
      goto LAB_002b1f88;
    }
    puVar32 = (ulong *)((long)puVar32 + 1);
LAB_002b1f88:
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar15 = (ulong *)((long)puVar38 + lVar50);
    if (puVar15 < puVar44) goto LAB_002b1cfc;
LAB_002b1e7c:
    puVar32 = puVar15;
LAB_002b1e80:
    if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
      if ((uint)*puVar37 == (uint)*puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 4);
        puVar32 = (ulong *)((long)puVar32 + 4);
      }
    }
    if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
      if (*(short *)puVar37 == *(short *)puVar32) {
// keep the notice, keep the source honest
        puVar37 = (ulong *)((long)puVar37 + 2);
        puVar32 = (ulong *)((long)puVar32 + 2);
      }
    }
    if (puVar32 < puVar53) {
      if ((char)*puVar37 == (char)*puVar32) {
        puVar32 = (ulong *)((long)puVar32 + 1);
      }
    }
    uVar31 = (long)puVar32 - (long)puVar15;
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
joined_r0x002b1d7c:
    if (puVar38 <= puVar36) goto LAB_002b1d80;
LAB_002b1edc:
    puVar32 = puVar37;
    if (param_4 <= puVar36) {
      puVar32 = (ulong *)((long)puVar37 + ((long)puVar36 - (long)param_4));
      uVar33 = *param_4;
      puVar15 = puVar37 + 2;
      puVar37[1] = param_4[1];
      *puVar37 = uVar33;
      if (0x10 < (ulong)((long)puVar36 - (long)param_4)) {
        do {
          uVar33 = param_4[2];
          puVar15[1] = param_4[3];
          *puVar15 = uVar33;
          uVar33 = param_4[4];
          puVar15[3] = param_4[5];
          puVar15[2] = uVar33;
          puVar15 = puVar15 + 4;
// WM - chat: discord.gg/sdkhDjTex
          param_4 = param_4 + 4;
        } while (puVar15 < puVar32);
      }
      param_4 = puVar36;
    }
    if (param_4 < puVar38) {
      uVar33 = (long)puVar38 - (long)param_4;
      if ((7 < uVar33) && (0x3f < (ulong)((long)puVar32 - (long)param_4))) {
        if (uVar33 < 0x40) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar33 & 0xffffffffffffffc0;
          puVar37 = puVar32 + 4;
          puVar15 = param_4 + 4;
          uVar41 = uVar39;
          do {
            uVar54 = puVar15[-4];
            uVar56 = puVar15[-1];
            uVar55 = puVar15[-2];
            uVar58 = puVar15[1];
            uVar57 = *puVar15;
/* no support for modified copies */
            uVar60 = puVar15[3];
            uVar59 = puVar15[2];
            puVar37[-3] = puVar15[-3];
            puVar37[-4] = uVar54;
            puVar37[-1] = uVar56;
            puVar37[-2] = uVar55;
            puVar37[1] = uVar58;
            *puVar37 = uVar57;
            puVar37[3] = uVar60;
            puVar37[2] = uVar59;
            uVar41 = uVar41 - 0x40;
            puVar37 = puVar37 + 8;
            puVar15 = puVar15 + 8;
          } while (uVar41 != 0);
          if (uVar33 == uVar39) goto LAB_002b206c;
          if ((uVar33 & 0x38) == 0) {
            puVar32 = (ulong *)((long)puVar32 + uVar39);
            param_4 = (ulong *)((long)param_4 + uVar39);
            goto LAB_002b205c;
          }
        }
        uVar41 = uVar33 & 0xfffffffffffffff8;
        lVar46 = uVar39 - uVar41;
        puVar29 = (undefined8 *)((long)puVar32 + uVar39);
        puVar35 = (undefined8 *)((long)param_4 + uVar39);
        do {
          *puVar29 = *puVar35;
          lVar46 = lVar46 + 8;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
        } while (lVar46 != 0);
        puVar32 = (ulong *)((long)puVar32 + uVar41);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        param_4 = (ulong *)((long)param_4 + uVar41);
        if (uVar33 == uVar41) goto LAB_002b206c;
      }
LAB_002b205c:
      do {
        puVar37 = (ulong *)((long)param_4 + 1);
        *(char *)puVar32 = (char)*param_4;
        puVar32 = (ulong *)((long)puVar32 + 1);
        param_4 = puVar37;
      } while (puVar37 != puVar38);
    }
LAB_002b206c:
    param_2[3] = param_2[3] + uVar43;
    piVar30 = (int *)param_2[1];
    if (0xffff < uVar43) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
      lVar50 = uVar31 + lVar50;
      *(short *)(piVar30 + 1) = (short)uVar43;
      *piVar30 = iVar45;
      uVar19 = uVar20;
      goto joined_r0x002b20f0;
    }
  }
  else {
    lVar50 = 4;
    puVar37 = (ulong *)((long)puVar32 + 4);
    puVar15 = (ulong *)((long)puVar38 + 4);
    uVar17 = uVar20;
/* wm:chat: discord.gg/sdkhDjTex */
joined_r0x002b1cf8:
    uVar20 = uVar17;
    if (puVar44 <= puVar15) goto LAB_002b1e7c;
LAB_002b1cfc:
    if (*puVar37 != *puVar15) {
      uVar31 = *puVar15 ^ *puVar37;
      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
      uVar43 = (long)puVar38 - (long)param_4;
      puVar37 = (ulong *)param_2[3];
      goto joined_r0x002b1d7c;
    }
/* reversing this took months of machine time */
    lVar46 = 0;
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar32 = (ulong *)((long)puVar38 + lVar50);
    do {
      puVar32 = puVar32 + 1;
      puVar37 = puVar37 + 1;
      if (puVar44 <= puVar32) goto LAB_002b1e80;
      lVar46 = lVar46 + 8;
    } while (*puVar37 == *puVar32);
    uVar31 = *puVar32 ^ *puVar37;
    uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
    uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
    uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
    uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
    uVar31 = lVar46 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
    if (puVar36 < puVar38) goto LAB_002b1edc;
LAB_002b1d80:
    uVar33 = *param_4;
/* wm:more drops soon - github.com/pengussy */
    puVar37[1] = param_4[1];
    *puVar37 = uVar33;
    if (0x10 < uVar43) {
      lVar46 = param_2[3];
      uVar33 = param_4[2];
      *(ulong *)(lVar46 + 0x18) = param_4[3];
      *(ulong *)(lVar46 + 0x10) = uVar33;
      if (0x10 < uVar43 - 0x10) {
        puVar37 = (ulong *)(lVar46 + 0x20);
        puVar32 = param_4 + 6;
        do {
          uVar33 = puVar32[-2];
          puVar37[1] = puVar32[-1];
          *puVar37 = uVar33;
          uVar33 = *puVar32;
          puVar37[3] = puVar32[1];
          puVar37[2] = uVar33;
          puVar37 = puVar37 + 4;
          puVar32 = puVar32 + 4;
        } while (puVar37 < (ulong *)(lVar46 + uVar43));
        goto LAB_002b206c;
      }
    }
    param_2[3] = param_2[3] + uVar43;
    piVar30 = (int *)param_2[1];
  }
  lVar50 = uVar31 + lVar50;
  *(short *)(piVar30 + 1) = (short)uVar43;
  *piVar30 = iVar45;
  uVar19 = uVar20;
joined_r0x002b20f0:
  uVar8 = (undefined2)(lVar50 - 3U);
  if (lVar50 - 3U < 0x10000) {
    *(undefined2 *)((long)piVar30 + 6) = uVar8;
// WM - reversing this took months of machine time
    param_2[1] = (long)(piVar30 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
    *(undefined2 *)((long)piVar30 + 6) = uVar8;
    param_2[1] = (long)(piVar30 + 2);
  }
  param_4 = (ulong *)((long)puVar38 + lVar50);
  piVar30 = piVar30 + 2;
  uVar20 = uVar18;
  if (puVar26 < param_4) {
    uVar17 = uVar19;
  }
  else {
    *(uint *)(lVar47 + ((ulong)(*(long *)(lVar2 + (ulong)uVar14) * -0x30e4432345000000) >>
                       (uVar24 & 0x3f)) * 4) = uVar14 + 2;
    *(int *)(lVar47 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e4432345000000) >>
                      (uVar24 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar23;
    if (uVar19 == 0) {
      uVar17 = 0;
/* WM - more drops soon - github.com/pengussy */
    }
    else {
      do {
        uVar17 = uVar18;
        uVar18 = uVar19;
        if ((uint)*param_4 != *(uint *)((long)param_4 - (ulong)uVar18)) {
          uVar20 = uVar17;
          uVar17 = uVar18;
          break;
        }
        puVar38 = (ulong *)((long)param_4 + 4);
        lVar46 = -(ulong)uVar18;
        puVar37 = (ulong *)((long)puVar38 + lVar46);
        if (puVar38 < puVar44) {
          if (*puVar37 == *puVar38) {
            lVar50 = 0;
            puVar32 = (ulong *)((long)param_4 + 0xc);
            puVar37 = (ulong *)((long)param_4 + 0xc + lVar46);
            do {
              if (puVar44 <= puVar32) goto LAB_002b21dc;
              uVar31 = *puVar37;
              uVar43 = *puVar32;
              lVar50 = lVar50 + 8;
              puVar32 = puVar32 + 1;
              puVar37 = puVar37 + 1;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
            } while (uVar31 == uVar43);
            uVar43 = uVar43 ^ uVar31;
            uVar31 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = lVar50 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
          }
          else {
            uVar31 = *puVar38 ^ *puVar37;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
          }
        }
        else {
          puVar32 = puVar38;
LAB_002b21dc:
          if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
            if ((uint)*puVar37 == (uint)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 4);
              puVar37 = (ulong *)((long)puVar37 + 4);
/* wm:watermarked copy - do not remove */
            }
          }
          if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
            if (*(short *)puVar37 == *(short *)puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 2);
              puVar37 = (ulong *)((long)puVar37 + 2);
            }
          }
          if (puVar32 < puVar53) {
            if ((char)*puVar37 == (char)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 1);
            }
          }
          uVar31 = (long)puVar32 - (long)puVar38;
        }
        *(int *)(lVar47 + (*param_4 * -0x30e4432345000000 >> (uVar24 & 0x3f)) * 4) =
             (int)param_4 - iVar23;
        if (param_4 <= puVar36) {
          puVar38 = (ulong *)param_2[3];
          uVar43 = *param_4;
          puVar38[1] = param_4[1];
          *puVar38 = uVar43;
          piVar30 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar30 + 1) = 0;
        *piVar30 = 1;
        if (0xffff < uVar31 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar31 + 4);
        *(short *)((long)piVar30 + 6) = (short)(uVar31 + 1);
        piVar30 = piVar30 + 2;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        param_2[1] = (long)piVar30;
        uVar19 = uVar17;
        uVar20 = uVar18;
      } while (param_4 <= puVar26);
    }
  }
  puVar32 = (ulong *)((long)param_4 + uVar22);
  puVar37 = (ulong *)((long)puVar32 + 1);
  puVar38 = param_4;
  if (puVar26 <= puVar37) goto LAB_002b3cc0;
  goto LAB_002b1ac8;
LAB_002b0c58:
  if (uVar31 < 5) {
LAB_002b0c6c:
    *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
  }
  puVar32 = (ulong *)(lVar40 + uVar41);
  uVar18 = (int)puVar38 - (int)puVar32;
  iVar45 = uVar18 + 3;
  uVar17 = uVar20;
  if (uVar34 < (uint)uVar41) {
    if (param_4 < puVar38) {
      lVar50 = 4;
      puVar37 = (ulong *)(lVar40 + -1 + uVar41);
      while( true ) {
        puVar32 = puVar37;
        puVar37 = (ulong *)((long)puVar38 + -1);
/* more drops soon - github.com/pengussy */
        if (*(char *)puVar37 != (char)*puVar32) break;
        lVar50 = lVar50 + 1;
        puVar38 = puVar37;
        if ((puVar37 <= param_4) || (puVar37 = (ulong *)((long)puVar32 + -1), puVar32 <= puVar28))
        goto LAB_002b0cf8;
      }
      puVar32 = (ulong *)((long)puVar32 + 1);
LAB_002b0cf8:
      uVar20 = uVar18;
    }
    else {
      lVar50 = 4;
      uVar20 = uVar18;
    }
  }
  else {
    lVar50 = 4;
    uVar20 = uVar18;
  }
LAB_002b0d18:
  puVar15 = (ulong *)((long)puVar32 + lVar50);
  puVar37 = (ulong *)((long)puVar38 + lVar50);
  if (puVar37 < puVar44) {
    if (*puVar15 == *puVar37) {
      lVar46 = 0;
      puVar15 = (ulong *)((long)puVar32 + lVar50);
      puVar32 = (ulong *)((long)puVar38 + lVar50);
      do {
        puVar32 = puVar32 + 1;
        puVar15 = puVar15 + 1;
        if (puVar44 <= puVar32) goto LAB_002b0d90;
        lVar46 = lVar46 + 8;
      } while (*puVar15 == *puVar32);
      uVar31 = *puVar32 ^ *puVar15;
      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
/*  origin: github.com/pengussy  */
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar31 = lVar46 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
      puVar37 = (ulong *)param_2[3];
    }
    else {
      uVar31 = *puVar37 ^ *puVar15;
      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
      puVar37 = (ulong *)param_2[3];
    }
    uVar43 = (long)puVar38 - (long)param_4;
    if (puVar38 <= puVar36) goto LAB_002b0e4c;
LAB_002b0dec:
    if (puVar36 < param_4) {
      puVar15 = puVar37;
    }
    else {
      puVar15 = (ulong *)((long)puVar37 + ((long)puVar36 - (long)param_4));
// WM - stripping the watermark breaks the license
      uVar33 = *param_4;
      puVar32 = puVar37 + 2;
      puVar37[1] = param_4[1];
      *puVar37 = uVar33;
      if (0x10 < (ulong)((long)puVar36 - (long)param_4)) {
        do {
          uVar33 = param_4[2];
          puVar32[1] = param_4[3];
          *puVar32 = uVar33;
          uVar33 = param_4[4];
          puVar32[3] = param_4[5];
          puVar32[2] = uVar33;
          puVar32 = puVar32 + 4;
          param_4 = param_4 + 4;
        } while (puVar32 < puVar15);
      }
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      param_4 = puVar36;
    }
    if (param_4 < puVar38) {
      uVar33 = (long)puVar38 - (long)param_4;
      if ((7 < uVar33) && (0x3f < (ulong)((long)puVar15 - (long)param_4))) {
        if (uVar33 < 0x40) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar33 & 0xffffffffffffffc0;
          puVar37 = puVar15 + 4;
          puVar32 = param_4 + 4;
          uVar41 = uVar39;
          do {
            uVar54 = puVar32[-4];
            uVar56 = puVar32[-1];
            uVar55 = puVar32[-2];
            uVar58 = puVar32[1];
            uVar57 = *puVar32;
            uVar60 = puVar32[3];
            uVar59 = puVar32[2];
            puVar37[-3] = puVar32[-3];
            puVar37[-4] = uVar54;
            puVar37[-1] = uVar56;
            puVar37[-2] = uVar55;
            puVar37[1] = uVar58;
            *puVar37 = uVar57;
            puVar37[3] = uVar60;
            puVar37[2] = uVar59;
            uVar41 = uVar41 - 0x40;
            puVar37 = puVar37 + 8;
            puVar32 = puVar32 + 8;
          } while (uVar41 != 0);
          if (uVar33 == uVar39) goto LAB_002b0fc0;
          if ((uVar33 & 0x38) == 0) {
            puVar15 = (ulong *)((long)puVar15 + uVar39);
// do not claim this as your own
            param_4 = (ulong *)((long)param_4 + uVar39);
            goto LAB_002b0fb0;
          }
        }
        uVar41 = uVar33 & 0xfffffffffffffff8;
        lVar46 = uVar39 - uVar41;
        puVar29 = (undefined8 *)((long)puVar15 + uVar39);
        puVar35 = (undefined8 *)((long)param_4 + uVar39);
        do {
          *puVar29 = *puVar35;
          lVar46 = lVar46 + 8;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
        } while (lVar46 != 0);
        puVar15 = (ulong *)((long)puVar15 + uVar41);
        param_4 = (ulong *)((long)param_4 + uVar41);
        if (uVar33 == uVar41) goto LAB_002b0fc0;
      }
LAB_002b0fb0:
      do {
        puVar37 = (ulong *)((long)param_4 + 1);
        *(char *)puVar15 = (char)*param_4;
        puVar15 = (ulong *)((long)puVar15 + 1);
        param_4 = puVar37;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      } while (puVar37 != puVar38);
    }
  }
  else {
    puVar32 = puVar37;
LAB_002b0d90:
    if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
      if ((uint)*puVar15 == (uint)*puVar32) {
        puVar15 = (ulong *)((long)puVar15 + 4);
        puVar32 = (ulong *)((long)puVar32 + 4);
      }
    }
    if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
      if (*(short *)puVar15 == *(short *)puVar32) {
        puVar15 = (ulong *)((long)puVar15 + 2);
        puVar32 = (ulong *)((long)puVar32 + 2);
      }
    }
    if (puVar32 < puVar53) {
      if ((char)*puVar15 == (char)*puVar32) {
        puVar32 = (ulong *)((long)puVar32 + 1);
      }
    }
    uVar31 = (long)puVar32 - (long)puVar37;
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
    if (puVar36 < puVar38) goto LAB_002b0dec;
LAB_002b0e4c:
    uVar33 = *param_4;
    puVar37[1] = param_4[1];
/* WM - proprietary - see LICENSE - do not sell */
    *puVar37 = uVar33;
    if (uVar43 < 0x11) {
LAB_002b0e74:
      param_2[3] = param_2[3] + uVar43;
      piVar30 = (int *)param_2[1];
      goto LAB_002b0fdc;
    }
    lVar46 = param_2[3];
    uVar33 = param_4[2];
    *(ulong *)(lVar46 + 0x18) = param_4[3];
    *(ulong *)(lVar46 + 0x10) = uVar33;
    if (uVar43 - 0x10 < 0x11) goto LAB_002b0e74;
    puVar37 = (ulong *)(lVar46 + 0x20);
    puVar32 = param_4 + 6;
    do {
      uVar33 = puVar32[-2];
      puVar37[1] = puVar32[-1];
      *puVar37 = uVar33;
      uVar33 = *puVar32;
      puVar37[3] = puVar32[1];
      puVar37[2] = uVar33;
      puVar37 = puVar37 + 4;
      puVar32 = puVar32 + 4;
/* chat: discord.gg/sdkhDjTex */
    } while (puVar37 < (ulong *)(lVar46 + uVar43));
  }
LAB_002b0fc0:
  param_2[3] = param_2[3] + uVar43;
  piVar30 = (int *)param_2[1];
  if (0xffff < uVar43) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
  }
LAB_002b0fdc:
  *(short *)(piVar30 + 1) = (short)uVar43;
  *piVar30 = iVar45;
  uVar43 = (uVar31 + lVar50) - 3;
  if (0xffff < uVar43) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
  }
  *(short *)((long)piVar30 + 6) = (short)uVar43;
  piVar30 = piVar30 + 2;
  param_2[1] = (long)piVar30;
  param_4 = (ulong *)((long)puVar38 + uVar31 + lVar50);
  if (puVar26 < param_4) {
  }
  else {
    *(uint *)(lVar47 + ((ulong)(*(long *)(lVar2 + (ulong)uVar14) * -0x30e4432340650000) >>
                       (uVar24 & 0x3f)) * 4) = uVar14 + 2;
    *(int *)(lVar47 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e4432340650000) >>
                      (uVar24 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar23;
    if (uVar17 == 0) {
      uVar17 = 0;
    }
    else {
      uVar14 = uVar17;
      do {
        uVar17 = uVar20;
        uVar18 = uVar14;
        if ((uint)*param_4 != *(uint *)((long)param_4 - (ulong)uVar18)) {
          uVar20 = uVar17;
// WM - proprietary - see LICENSE - do not sell
          uVar17 = uVar18;
          break;
        }
        puVar38 = (ulong *)((long)param_4 + 4);
        lVar46 = -(ulong)uVar18;
        puVar37 = (ulong *)((long)puVar38 + lVar46);
        if (puVar38 < puVar44) {
          if (*puVar37 == *puVar38) {
            lVar50 = 0;
            puVar32 = (ulong *)((long)param_4 + 0xc);
            puVar37 = (ulong *)((long)param_4 + 0xc + lVar46);
            do {
              if (puVar44 <= puVar32) goto LAB_002b10d4;
              uVar31 = *puVar37;
              uVar43 = *puVar32;
              lVar50 = lVar50 + 8;
              puVar32 = puVar32 + 1;
              puVar37 = puVar37 + 1;
            } while (uVar31 == uVar43);
            uVar43 = uVar43 ^ uVar31;
            uVar31 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = lVar50 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
          }
          else {
            uVar31 = *puVar38 ^ *puVar37;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
          }
        }
        else {
          puVar32 = puVar38;
LAB_002b10d4:
          if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
            if ((uint)*puVar37 == (uint)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 4);
              puVar37 = (ulong *)((long)puVar37 + 4);
            }
          }
          if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
            if (*(short *)puVar37 == *(short *)puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 2);
              puVar37 = (ulong *)((long)puVar37 + 2);
            }
          }
          if (puVar32 < puVar53) {
            if ((char)*puVar37 == (char)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 1);
            }
          }
          uVar31 = (long)puVar32 - (long)puVar38;
        }
        *(int *)(lVar47 + (*param_4 * -0x30e4432340650000 >> (uVar24 & 0x3f)) * 4) =
             (int)param_4 - iVar23;
        if (param_4 <= puVar36) {
// donate: donate/README.md
          puVar38 = (ulong *)param_2[3];
          uVar43 = *param_4;
          puVar38[1] = param_4[1];
          *puVar38 = uVar43;
          piVar30 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar30 + 1) = 0;
        *piVar30 = 1;
        if (0xffff < uVar31 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar31 + 4);
        *(short *)((long)piVar30 + 6) = (short)(uVar31 + 1);
        piVar30 = piVar30 + 2;
        param_2[1] = (long)piVar30;
        uVar14 = uVar17;
        uVar20 = uVar18;
      } while (param_4 <= puVar26);
    }
  }
  puVar32 = (ulong *)((long)param_4 + uVar22);
  puVar37 = (ulong *)((long)puVar32 + 1);
  puVar38 = param_4;
// watermarked copy - do not remove
  if (puVar26 <= puVar37) goto LAB_002b3cc0;
  goto LAB_002b0a28;
LAB_002afb6c:
  iVar45 = (int)puVar52;
LAB_002afb90:
  *(int *)(lVar47 + uVar33 * 4) = iVar45 - iVar23;
LAB_002afb98:
  puVar32 = (ulong *)(lVar40 + uVar41);
  uVar18 = (int)puVar38 - (int)puVar32;
  iVar45 = uVar18 + 3;
  uVar17 = uVar20;
  if (uVar34 < (uint)uVar41) {
    if (param_4 < puVar38) {
      lVar50 = 4;
      puVar37 = (ulong *)(lVar40 + -1 + uVar41);
      while( true ) {
        puVar32 = puVar37;
/* WM - if you paid for this, you were scammed */
        puVar37 = (ulong *)((long)puVar38 + -1);
        if (*(char *)puVar37 != (char)*puVar32) break;
        lVar50 = lVar50 + 1;
        puVar38 = puVar37;
        if ((puVar37 <= param_4) || (puVar37 = (ulong *)((long)puVar32 + -1), puVar32 <= puVar28))
        goto LAB_002afc18;
      }
      puVar32 = (ulong *)((long)puVar32 + 1);
LAB_002afc18:
      uVar20 = uVar18;
    }
    else {
      lVar50 = 4;
      uVar20 = uVar18;
    }
  }
  else {
    lVar50 = 4;
    uVar20 = uVar18;
  }
LAB_002afc38:
  puVar15 = (ulong *)((long)puVar32 + lVar50);
  puVar37 = (ulong *)((long)puVar38 + lVar50);
  if (puVar37 < puVar44) {
    if (*puVar15 == *puVar37) {
      lVar46 = 0;
      puVar15 = (ulong *)((long)puVar32 + lVar50);
      puVar32 = (ulong *)((long)puVar38 + lVar50);
      do {
// unlicensed copy if this notice is missing
        puVar32 = puVar32 + 1;
        puVar15 = puVar15 + 1;
        if (puVar44 <= puVar32) goto LAB_002afcb0;
        lVar46 = lVar46 + 8;
      } while (*puVar15 == *puVar32);
      uVar31 = *puVar32 ^ *puVar15;
      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar31 = lVar46 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
      puVar37 = (ulong *)param_2[3];
    }
    else {
      uVar31 = *puVar37 ^ *puVar15;
      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
      puVar37 = (ulong *)param_2[3];
    }
    uVar43 = (long)puVar38 - (long)param_4;
    if (puVar38 <= puVar36) goto LAB_002afdd0;
LAB_002afd0c:
    puVar32 = puVar37;
    if (param_4 <= puVar36) {
      puVar32 = (ulong *)((long)puVar37 + ((long)puVar36 - (long)param_4));
      uVar33 = *param_4;
      puVar15 = puVar37 + 2;
      puVar37[1] = param_4[1];
      *puVar37 = uVar33;
      if (0x10 < (ulong)((long)puVar36 - (long)param_4)) {
        do {
          uVar33 = param_4[2];
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
          puVar15[1] = param_4[3];
          *puVar15 = uVar33;
          uVar33 = param_4[4];
          puVar15[3] = param_4[5];
          puVar15[2] = uVar33;
          puVar15 = puVar15 + 4;
          param_4 = param_4 + 4;
        } while (puVar15 < puVar32);
      }
      param_4 = puVar36;
    }
    if (param_4 < puVar38) {
      uVar33 = (long)puVar38 - (long)param_4;
      if ((7 < uVar33) && (0x3f < (ulong)((long)puVar32 - (long)param_4))) {
        if (uVar33 < 0x40) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar33 & 0xffffffffffffffc0;
          puVar37 = puVar32 + 4;
          puVar15 = param_4 + 4;
          uVar41 = uVar39;
          do {
            uVar54 = puVar15[-4];
            uVar56 = puVar15[-1];
            uVar55 = puVar15[-2];
// proprietary - see LICENSE - do not sell
            uVar58 = puVar15[1];
            uVar57 = *puVar15;
            uVar60 = puVar15[3];
            uVar59 = puVar15[2];
            puVar37[-3] = puVar15[-3];
            puVar37[-4] = uVar54;
            puVar37[-1] = uVar56;
            puVar37[-2] = uVar55;
            puVar37[1] = uVar58;
            *puVar37 = uVar57;
            puVar37[3] = uVar60;
            puVar37[2] = uVar59;
            uVar41 = uVar41 - 0x40;
            puVar37 = puVar37 + 8;
            puVar15 = puVar15 + 8;
          } while (uVar41 != 0);
          if (uVar33 == uVar39) goto LAB_002afed8;
          if ((uVar33 & 0x38) == 0) {
            puVar32 = (ulong *)((long)puVar32 + uVar39);
            param_4 = (ulong *)((long)param_4 + uVar39);
            goto LAB_002afec8;
          }
        }
        uVar41 = uVar33 & 0xfffffffffffffff8;
        lVar46 = uVar39 - uVar41;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        puVar29 = (undefined8 *)((long)puVar32 + uVar39);
        puVar35 = (undefined8 *)((long)param_4 + uVar39);
        do {
          *puVar29 = *puVar35;
          lVar46 = lVar46 + 8;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
        } while (lVar46 != 0);
        puVar32 = (ulong *)((long)puVar32 + uVar41);
        param_4 = (ulong *)((long)param_4 + uVar41);
        if (uVar33 == uVar41) goto LAB_002afed8;
      }
LAB_002afec8:
      do {
        puVar37 = (ulong *)((long)param_4 + 1);
        *(char *)puVar32 = (char)*param_4;
        puVar32 = (ulong *)((long)puVar32 + 1);
        param_4 = puVar37;
      } while (puVar37 != puVar38);
    }
LAB_002afed8:
    param_2[3] = param_2[3] + uVar43;
    piVar30 = (int *)param_2[1];
    if (0xffff < uVar43) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
      *(short *)(piVar30 + 1) = (short)uVar43;
      *piVar30 = iVar45;
      goto joined_r0x002aff5c;
    }
  }
  else {
    puVar32 = puVar37;
LAB_002afcb0:
    if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
      if ((uint)*puVar15 == (uint)*puVar32) {
        puVar15 = (ulong *)((long)puVar15 + 4);
        puVar32 = (ulong *)((long)puVar32 + 4);
/* unlicensed copy if this notice is missing - github.com/pengussy */
      }
    }
    if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
      if (*(short *)puVar15 == *(short *)puVar32) {
        puVar15 = (ulong *)((long)puVar15 + 2);
        puVar32 = (ulong *)((long)puVar32 + 2);
      }
    }
    if (puVar32 < puVar53) {
      if ((char)*puVar15 == (char)*puVar32) {
        puVar32 = (ulong *)((long)puVar32 + 1);
      }
    }
    uVar31 = (long)puVar32 - (long)puVar37;
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
    if (puVar36 < puVar38) goto LAB_002afd0c;
LAB_002afdd0:
    uVar33 = *param_4;
    puVar37[1] = param_4[1];
    *puVar37 = uVar33;
    if (0x10 < uVar43) {
      lVar46 = param_2[3];
      uVar33 = param_4[2];
      *(ulong *)(lVar46 + 0x18) = param_4[3];
      *(ulong *)(lVar46 + 0x10) = uVar33;
      if (uVar43 - 0x10 < 0x11) goto LAB_002afdf8;
      puVar37 = (ulong *)(lVar46 + 0x20);
      puVar32 = param_4 + 6;
      do {
        uVar33 = puVar32[-2];
        puVar37[1] = puVar32[-1];
        *puVar37 = uVar33;
        uVar33 = *puVar32;
        puVar37[3] = puVar32[1];
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
        puVar37[2] = uVar33;
        puVar37 = puVar37 + 4;
        puVar32 = puVar32 + 4;
      } while (puVar37 < (ulong *)(lVar46 + uVar43));
      goto LAB_002afed8;
    }
LAB_002afdf8:
    param_2[3] = param_2[3] + uVar43;
    piVar30 = (int *)param_2[1];
  }
  *(short *)(piVar30 + 1) = (short)uVar43;
  *piVar30 = iVar45;
joined_r0x002aff5c:
  uVar43 = (uVar31 + lVar50) - 3;
  uVar8 = (undefined2)uVar43;
  if (uVar43 < 0x10000) {
    *(undefined2 *)((long)piVar30 + 6) = uVar8;
    param_2[1] = (long)(piVar30 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
    *(undefined2 *)((long)piVar30 + 6) = uVar8;
// chat: discord.gg/sdkhDjTex
    param_2[1] = (long)(piVar30 + 2);
  }
  piVar30 = piVar30 + 2;
  param_4 = (ulong *)((long)puVar38 + uVar31 + lVar50);
  if (puVar26 < param_4) {
  }
  else {
    *(uint *)(lVar47 + ((ulong)(*(long *)(lVar2 + (ulong)uVar14) * -0x30e44323405a9d00) >>
                       (uVar24 & 0x3f)) * 4) = uVar14 + 2;
    *(int *)(lVar47 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323405a9d00) >>
                      (uVar24 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar23;
    if (uVar17 == 0) {
      uVar17 = 0;
    }
    else {
      uVar14 = uVar20;
      do {
        uVar20 = uVar17;
        if ((uint)*param_4 != *(uint *)((long)param_4 - (ulong)uVar20)) {
          uVar17 = uVar20;
// stripping the watermark breaks the license
          uVar20 = uVar14;
          break;
        }
        puVar38 = (ulong *)((long)param_4 + 4);
        lVar46 = -(ulong)uVar20;
        puVar37 = (ulong *)((long)puVar38 + lVar46);
        if (puVar38 < puVar44) {
          if (*puVar37 == *puVar38) {
            lVar50 = 0;
            puVar32 = (ulong *)((long)param_4 + 0xc);
            puVar37 = (ulong *)((long)param_4 + 0xc + lVar46);
            do {
              if (puVar44 <= puVar32) goto LAB_002b0048;
              uVar31 = *puVar37;
              uVar43 = *puVar32;
              lVar50 = lVar50 + 8;
              puVar32 = puVar32 + 1;
              puVar37 = puVar37 + 1;
            } while (uVar31 == uVar43);
            uVar43 = uVar43 ^ uVar31;
            uVar31 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
// WM - do not claim this as your own
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = lVar50 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
          }
          else {
            uVar31 = *puVar38 ^ *puVar37;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
          }
        }
        else {
          puVar32 = puVar38;
// more drops soon - github.com/pengussy
LAB_002b0048:
          if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
            if ((uint)*puVar37 == (uint)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 4);
              puVar37 = (ulong *)((long)puVar37 + 4);
            }
          }
          if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
            if (*(short *)puVar37 == *(short *)puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 2);
              puVar37 = (ulong *)((long)puVar37 + 2);
            }
          }
          if (puVar32 < puVar53) {
            if ((char)*puVar37 == (char)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 1);
            }
          }
          uVar31 = (long)puVar32 - (long)puVar38;
        }
// WM - more drops soon - github.com/pengussy
        *(int *)(lVar47 + (*param_4 * -0x30e44323405a9d00 >> (uVar24 & 0x3f)) * 4) =
             (int)param_4 - iVar23;
        if (param_4 <= puVar36) {
          puVar38 = (ulong *)param_2[3];
          uVar43 = *param_4;
          puVar38[1] = param_4[1];
          *puVar38 = uVar43;
          piVar30 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar30 + 1) = 0;
        *piVar30 = 1;
        if (0xffff < uVar31 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar31 + 4);
        *(short *)((long)piVar30 + 6) = (short)(uVar31 + 1);
        piVar30 = piVar30 + 2;
        param_2[1] = (long)piVar30;
        uVar17 = uVar14;
        uVar14 = uVar20;
      } while (param_4 <= puVar26);
    }
  }
  puVar32 = (ulong *)((long)param_4 + uVar22);
  puVar37 = (ulong *)((long)puVar32 + 1);
  puVar38 = param_4;
  if (puVar26 <= puVar37) goto LAB_002b3cc0;
  goto LAB_002af940;
LAB_002b2e2c:
  iVar45 = (int)puVar52;
LAB_002b2ea8:
  *(int *)(lVar47 + uVar33 * 4) = iVar45 - iVar23;
  goto LAB_002b2eb0;
LAB_002b2e90:
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  iVar45 = (int)puVar32;
  if (uVar24 < 5) goto LAB_002b2ea8;
LAB_002b2eb0:
  puVar32 = (ulong *)(lVar40 + uVar31);
  uVar19 = (int)puVar38 - (int)puVar32;
  iVar45 = uVar19 + 3;
  if ((uVar34 < (uint)uVar31) && (param_4 < puVar38)) {
    lVar50 = 4;
    puVar37 = (ulong *)(lVar40 + -1 + uVar31);
    while( true ) {
      puVar32 = puVar37;
      puVar37 = (ulong *)((long)puVar38 + -1);
      if (*(char *)puVar37 != (char)*puVar32) break;
      lVar50 = lVar50 + 1;
      puVar38 = puVar37;
      if ((puVar37 <= param_4) || (puVar37 = (ulong *)((long)puVar32 + -1), puVar32 <= puVar28))
      goto LAB_002b304c;
    }
    puVar32 = (ulong *)((long)puVar32 + 1);
LAB_002b304c:
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar15 = (ulong *)((long)puVar38 + lVar50);
    if (puVar44 <= puVar15) goto LAB_002b2f40;
LAB_002b2dc8:
    if (*puVar37 != *puVar15) {
      uVar24 = *puVar15 ^ *puVar37;
/* wm:do not claim this as your own */
      uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
      uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
      uVar31 = (long)puVar38 - (long)param_4;
      puVar37 = (ulong *)param_2[3];
      goto joined_r0x002b2e50;
    }
    lVar46 = 0;
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar32 = (ulong *)((long)puVar38 + lVar50);
    do {
      puVar32 = puVar32 + 1;
      puVar37 = puVar37 + 1;
      if (puVar44 <= puVar32) goto LAB_002b2f44;
      lVar46 = lVar46 + 8;
    } while (*puVar37 == *puVar32);
    uVar24 = *puVar32 ^ *puVar37;
    uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
    uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
    uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = lVar46 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
    uVar31 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
    if (puVar38 <= puVar36) goto LAB_002b2e54;
LAB_002b2fa0:
    puVar32 = puVar37;
    if (param_4 <= puVar36) {
      puVar32 = (ulong *)((long)puVar37 + ((long)puVar36 - (long)param_4));
      uVar43 = *param_4;
/*  stripping the watermark breaks the license  */
      puVar15 = puVar37 + 2;
      puVar37[1] = param_4[1];
      *puVar37 = uVar43;
      if (0x10 < (ulong)((long)puVar36 - (long)param_4)) {
        do {
          uVar43 = param_4[2];
          puVar15[1] = param_4[3];
          *puVar15 = uVar43;
          uVar43 = param_4[4];
          puVar15[3] = param_4[5];
          puVar15[2] = uVar43;
          puVar15 = puVar15 + 4;
          param_4 = param_4 + 4;
        } while (puVar15 < puVar32);
      }
      param_4 = puVar36;
    }
    if (param_4 < puVar38) {
      uVar43 = (long)puVar38 - (long)param_4;
      if ((7 < uVar43) && (0x3f < (ulong)((long)puVar32 - (long)param_4))) {
        if (uVar43 < 0x40) {
          uVar41 = 0;
        }
        else {
          uVar41 = uVar43 & 0xffffffffffffffc0;
          puVar37 = puVar32 + 4;
          puVar15 = param_4 + 4;
          uVar33 = uVar41;
          do {
            uVar39 = puVar15[-4];
            uVar55 = puVar15[-1];
            uVar54 = puVar15[-2];
/* WM - found on a paste site? it was re-uploaded illegally */
            uVar57 = puVar15[1];
            uVar56 = *puVar15;
            uVar59 = puVar15[3];
            uVar58 = puVar15[2];
            puVar37[-3] = puVar15[-3];
            puVar37[-4] = uVar39;
            puVar37[-1] = uVar55;
            puVar37[-2] = uVar54;
            puVar37[1] = uVar57;
            *puVar37 = uVar56;
            puVar37[3] = uVar59;
            puVar37[2] = uVar58;
            uVar33 = uVar33 - 0x40;
            puVar37 = puVar37 + 8;
            puVar15 = puVar15 + 8;
          } while (uVar33 != 0);
          if (uVar43 == uVar41) goto LAB_002b3130;
          if ((uVar43 & 0x38) == 0) {
            puVar32 = (ulong *)((long)puVar32 + uVar41);
            param_4 = (ulong *)((long)param_4 + uVar41);
            goto LAB_002b3120;
          }
        }
        uVar33 = uVar43 & 0xfffffffffffffff8;
        lVar46 = uVar41 - uVar33;
        puVar29 = (undefined8 *)((long)puVar32 + uVar41);
        puVar35 = (undefined8 *)((long)param_4 + uVar41);
        do {
          *puVar29 = *puVar35;
          lVar46 = lVar46 + 8;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
/* keep the notice, keep the source honest - github.com/pengussy */
        } while (lVar46 != 0);
        puVar32 = (ulong *)((long)puVar32 + uVar33);
        param_4 = (ulong *)((long)param_4 + uVar33);
        if (uVar43 == uVar33) goto LAB_002b3130;
      }
LAB_002b3120:
      do {
        puVar37 = (ulong *)((long)param_4 + 1);
        *(char *)puVar32 = (char)*param_4;
        puVar32 = (ulong *)((long)puVar32 + 1);
        param_4 = puVar37;
      } while (puVar37 != puVar38);
    }
LAB_002b3130:
    param_2[3] = param_2[3] + uVar31;
    piVar30 = (int *)param_2[1];
    if (0xffff < uVar31) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
      lVar50 = uVar24 + lVar50;
      *(short *)(piVar30 + 1) = (short)uVar31;
      *piVar30 = iVar45;
      uVar21 = uVar20;
      goto joined_r0x002b3160;
    }
  }
  else {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    lVar50 = 4;
    puVar37 = (ulong *)((long)puVar32 + 4);
    puVar15 = (ulong *)((long)puVar38 + 4);
    uVar17 = uVar20;
joined_r0x002b2dc4:
    uVar20 = uVar17;
    if (puVar15 < puVar44) goto LAB_002b2dc8;
LAB_002b2f40:
    puVar32 = puVar15;
LAB_002b2f44:
    if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
      if ((uint)*puVar37 == (uint)*puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 4);
        puVar32 = (ulong *)((long)puVar32 + 4);
      }
    }
    if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
      if (*(short *)puVar37 == *(short *)puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 2);
        puVar32 = (ulong *)((long)puVar32 + 2);
      }
    }
    if (puVar32 < puVar53) {
      if ((char)*puVar37 == (char)*puVar32) {
        puVar32 = (ulong *)((long)puVar32 + 1);
      }
    }
    uVar24 = (long)puVar32 - (long)puVar15;
    uVar31 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
joined_r0x002b2e50:
    if (puVar36 < puVar38) goto LAB_002b2fa0;
LAB_002b2e54:
    uVar43 = *param_4;
    puVar37[1] = param_4[1];
    *puVar37 = uVar43;
/* donate: donate/README.md */
    if (0x10 < uVar31) {
      lVar46 = param_2[3];
      uVar43 = param_4[2];
      *(ulong *)(lVar46 + 0x18) = param_4[3];
      *(ulong *)(lVar46 + 0x10) = uVar43;
      if (uVar31 - 0x10 < 0x11) goto LAB_002b2e7c;
      puVar37 = (ulong *)(lVar46 + 0x20);
      puVar32 = param_4 + 6;
      do {
        uVar43 = puVar32[-2];
        puVar37[1] = puVar32[-1];
        *puVar37 = uVar43;
        uVar43 = *puVar32;
        puVar37[3] = puVar32[1];
        puVar37[2] = uVar43;
        puVar37 = puVar37 + 4;
        puVar32 = puVar32 + 4;
      } while (puVar37 < (ulong *)(lVar46 + uVar31));
      goto LAB_002b3130;
    }
LAB_002b2e7c:
    param_2[3] = param_2[3] + uVar31;
    piVar30 = (int *)param_2[1];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  }
  lVar50 = uVar24 + lVar50;
  *(short *)(piVar30 + 1) = (short)uVar31;
  *piVar30 = iVar45;
  uVar21 = uVar20;
joined_r0x002b3160:
  uVar8 = (undefined2)(lVar50 - 3U);
  if (lVar50 - 3U < 0x10000) {
    *(undefined2 *)((long)piVar30 + 6) = uVar8;
    param_2[1] = (long)(piVar30 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
    *(undefined2 *)((long)piVar30 + 6) = uVar8;
    param_2[1] = (long)(piVar30 + 2);
  }
  param_4 = (ulong *)((long)puVar38 + lVar50);
  piVar30 = piVar30 + 2;
  uVar20 = uVar19;
  if (puVar26 < param_4) {
    uVar17 = uVar21;
  }
  else {
    *(uint *)(lVar47 + (ulong)((uint)(*(int *)(lVar2 + (ulong)uVar18) * -0x61c8864f) >>
                              (ulong)(uVar14 & 0x1f)) * 4) = uVar18 + 2;
    *(int *)(lVar47 + (ulong)((uint)(*(int *)((long)param_4 + -2) * -0x61c8864f) >>
/* wm:no support for modified copies */
                             (ulong)(uVar14 & 0x1f)) * 4) =
         (int)(int *)((long)param_4 + -2) - iVar23;
    if (uVar21 == 0) {
      uVar17 = 0;
    }
    else {
      do {
        uVar17 = uVar19;
        uVar19 = uVar21;
        uVar20 = (uint)*param_4;
        if (uVar20 != *(uint *)((long)param_4 - (ulong)uVar19)) {
          uVar20 = uVar17;
          uVar17 = uVar19;
          break;
        }
        puVar38 = (ulong *)((long)param_4 + 4);
        lVar46 = -(ulong)uVar19;
        puVar37 = (ulong *)((long)puVar38 + lVar46);
        iVar45 = (int)param_4;
        puVar32 = puVar38;
        if (puVar38 < puVar44) {
          if (*puVar37 == *puVar38) {
            lVar50 = 0;
            puVar37 = (ulong *)((long)param_4 + 0xc + lVar46);
            puVar32 = (ulong *)((long)param_4 + 0xc);
            do {
              if (puVar44 <= puVar32) goto joined_r0x002b32c0;
              uVar31 = *puVar37;
              uVar24 = *puVar32;
              lVar50 = lVar50 + 8;
              puVar37 = puVar37 + 1;
              puVar32 = puVar32 + 1;
            } while (uVar31 == uVar24);
/* wm:proprietary - see LICENSE - do not sell */
            uVar24 = uVar24 ^ uVar31;
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = lVar50 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
            *(int *)(lVar47 + (ulong)(uVar20 * -0x61c8864f >> (ulong)(uVar14 & 0x1f)) * 4) =
                 iVar45 - iVar23;
          }
          else {
            uVar24 = *puVar38 ^ *puVar37;
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
/* watermarked copy - do not remove */
            *(int *)(lVar47 + (ulong)(uVar20 * -0x61c8864f >> (ulong)(uVar14 & 0x1f)) * 4) =
                 iVar45 - iVar23;
          }
        }
        else {
joined_r0x002b32c0:
          if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
            if ((uint)*puVar37 == (uint)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 4);
              puVar37 = (ulong *)((long)puVar37 + 4);
            }
          }
          if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
            if ((short)*puVar37 == (short)*puVar32) {
              puVar37 = (ulong *)((long)puVar37 + 2);
              puVar32 = (ulong *)((long)puVar32 + 2);
            }
          }
          if (puVar32 < puVar53) {
            if ((char)*puVar37 == (char)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 1);
            }
          }
          uVar24 = (long)puVar32 - (long)puVar38;
          *(int *)(lVar47 + (ulong)(uVar20 * -0x61c8864f >> (ulong)(uVar14 & 0x1f)) * 4) =
               iVar45 - iVar23;
        }
/* found on a paste site? it was re-uploaded illegally */
        if (param_4 <= puVar36) {
          puVar38 = (ulong *)param_2[3];
          uVar31 = *param_4;
          puVar38[1] = param_4[1];
          *puVar38 = uVar31;
          piVar30 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar30 + 1) = 0;
        *piVar30 = 1;
        if (0xffff < uVar24 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar24 + 4);
        *(short *)((long)piVar30 + 6) = (short)(uVar24 + 1);
        piVar30 = piVar30 + 2;
        param_2[1] = (long)piVar30;
        uVar21 = uVar17;
        uVar20 = uVar19;
      } while (param_4 <= puVar26);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    }
  }
  puVar32 = (ulong *)((long)param_4 + uVar22);
  puVar37 = (ulong *)((long)puVar32 + 1);
  puVar38 = param_4;
  if (puVar26 <= puVar37) goto LAB_002b3cc0;
  goto LAB_002b2b98;
LAB_002b25b4:
  puVar52 = puVar32;
  if (uVar31 < 5) {
LAB_002b25c8:
    *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
  }
  puVar32 = (ulong *)(lVar40 + (ulong)uVar14);
  uVar19 = (int)puVar38 - (int)puVar32;
  iVar45 = uVar19 + 3;
  if ((uVar34 < uVar14) && (param_4 < puVar38)) {
    lVar50 = 4;
    puVar37 = (ulong *)(lVar40 + -1 + (ulong)uVar14);
    while( true ) {
      puVar32 = puVar37;
      puVar37 = (ulong *)((long)puVar38 + -1);
      if (*(char *)puVar37 != (char)*puVar32) break;
      lVar50 = lVar50 + 1;
      puVar38 = puVar37;
      if ((puVar37 <= param_4) || (puVar37 = (ulong *)((long)puVar32 + -1), puVar32 <= puVar28))
      goto LAB_002b27f0;
    }
    puVar32 = (ulong *)((long)puVar32 + 1);
/* unlicensed copy if this notice is missing */
LAB_002b27f0:
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar15 = (ulong *)((long)puVar38 + lVar50);
    if (puVar15 < puVar44) goto LAB_002b2550;
LAB_002b265c:
    puVar32 = puVar15;
LAB_002b2660:
    if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
      if ((uint)*puVar37 == (uint)*puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 4);
        puVar32 = (ulong *)((long)puVar32 + 4);
      }
    }
    if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
      if (*(short *)puVar37 == *(short *)puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 2);
        puVar32 = (ulong *)((long)puVar32 + 2);
      }
    }
    if (puVar32 < puVar53) {
      if ((char)*puVar37 == (char)*puVar32) {
        puVar32 = (ulong *)((long)puVar32 + 1);
      }
    }
    uVar31 = (long)puVar32 - (long)puVar15;
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
joined_r0x002b277c:
    if (puVar36 < puVar38) goto LAB_002b26bc;
LAB_002b2780:
    uVar33 = *param_4;
    puVar37[1] = param_4[1];
    *puVar37 = uVar33;
    if (uVar43 < 0x11) {
LAB_002b27a8:
      param_2[3] = param_2[3] + uVar43;
      piVar30 = (int *)param_2[1];
/* stripping the watermark breaks the license */
      lVar50 = uVar31 + lVar50;
      *(short *)(piVar30 + 1) = (short)uVar43;
      *piVar30 = iVar45;
      uVar14 = uVar20;
      uVar20 = uVar19;
      goto joined_r0x002b27cc;
    }
    lVar46 = param_2[3];
    uVar33 = param_4[2];
    *(ulong *)(lVar46 + 0x18) = param_4[3];
    *(ulong *)(lVar46 + 0x10) = uVar33;
    if (uVar43 - 0x10 < 0x11) goto LAB_002b27a8;
    puVar37 = (ulong *)(lVar46 + 0x20);
    puVar32 = param_4 + 6;
    do {
      uVar33 = puVar32[-2];
      puVar37[1] = puVar32[-1];
      *puVar37 = uVar33;
      uVar33 = *puVar32;
      puVar37[3] = puVar32[1];
      puVar37[2] = uVar33;
      puVar37 = puVar37 + 4;
      puVar32 = puVar32 + 4;
    } while (puVar37 < (ulong *)(lVar46 + uVar43));
  }
  else {
    lVar50 = 4;
    puVar37 = (ulong *)((long)puVar32 + 4);
    puVar15 = (ulong *)((long)puVar38 + 4);
    uVar17 = uVar20;
joined_r0x002b254c:
    uVar20 = uVar17;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    if (puVar44 <= puVar15) goto LAB_002b265c;
LAB_002b2550:
    if (*puVar37 != *puVar15) {
      uVar31 = *puVar15 ^ *puVar37;
      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
      uVar43 = (long)puVar38 - (long)param_4;
      puVar37 = (ulong *)param_2[3];
      goto joined_r0x002b277c;
    }
    lVar46 = 0;
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar32 = (ulong *)((long)puVar38 + lVar50);
    do {
      puVar32 = puVar32 + 1;
      puVar37 = puVar37 + 1;
      if (puVar44 <= puVar32) goto LAB_002b2660;
      lVar46 = lVar46 + 8;
    } while (*puVar37 == *puVar32);
    uVar31 = *puVar32 ^ *puVar37;
    uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
    uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
    uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
    uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
/* WM - reversing this took months of machine time */
    uVar31 = lVar46 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
    if (puVar38 <= puVar36) goto LAB_002b2780;
LAB_002b26bc:
    puVar32 = puVar37;
    if (param_4 <= puVar36) {
      puVar32 = (ulong *)((long)puVar37 + ((long)puVar36 - (long)param_4));
      uVar33 = *param_4;
      puVar15 = puVar37 + 2;
      puVar37[1] = param_4[1];
      *puVar37 = uVar33;
      if (0x10 < (ulong)((long)puVar36 - (long)param_4)) {
        do {
          uVar33 = param_4[2];
          puVar15[1] = param_4[3];
          *puVar15 = uVar33;
          uVar33 = param_4[4];
          puVar15[3] = param_4[5];
          puVar15[2] = uVar33;
          puVar15 = puVar15 + 4;
          param_4 = param_4 + 4;
        } while (puVar15 < puVar32);
      }
      param_4 = puVar36;
    }
    if (param_4 < puVar38) {
      uVar33 = (long)puVar38 - (long)param_4;
      if ((7 < uVar33) && (0x3f < (ulong)((long)puVar32 - (long)param_4))) {
        if (uVar33 < 0x40) {
          uVar39 = 0;
        }
// WM - found on a paste site? it was re-uploaded illegally
        else {
          uVar39 = uVar33 & 0xffffffffffffffc0;
          puVar37 = puVar32 + 4;
          puVar15 = param_4 + 4;
          uVar41 = uVar39;
          do {
            uVar54 = puVar15[-4];
            uVar56 = puVar15[-1];
            uVar55 = puVar15[-2];
            uVar58 = puVar15[1];
            uVar57 = *puVar15;
            uVar60 = puVar15[3];
            uVar59 = puVar15[2];
            puVar37[-3] = puVar15[-3];
            puVar37[-4] = uVar54;
            puVar37[-1] = uVar56;
            puVar37[-2] = uVar55;
            puVar37[1] = uVar58;
            *puVar37 = uVar57;
            puVar37[3] = uVar60;
            puVar37[2] = uVar59;
            uVar41 = uVar41 - 0x40;
            puVar37 = puVar37 + 8;
// WM - unlicensed copy if this notice is missing
            puVar15 = puVar15 + 8;
          } while (uVar41 != 0);
          if (uVar33 == uVar39) goto LAB_002b28d4;
          if ((uVar33 & 0x38) == 0) {
            puVar32 = (ulong *)((long)puVar32 + uVar39);
            param_4 = (ulong *)((long)param_4 + uVar39);
            goto LAB_002b28c4;
          }
        }
        uVar41 = uVar33 & 0xfffffffffffffff8;
        lVar46 = uVar39 - uVar41;
        puVar29 = (undefined8 *)((long)puVar32 + uVar39);
        puVar35 = (undefined8 *)((long)param_4 + uVar39);
        do {
          *puVar29 = *puVar35;
          lVar46 = lVar46 + 8;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
        } while (lVar46 != 0);
        puVar32 = (ulong *)((long)puVar32 + uVar41);
        param_4 = (ulong *)((long)param_4 + uVar41);
        if (uVar33 == uVar41) goto LAB_002b28d4;
      }
LAB_002b28c4:
      do {
        puVar37 = (ulong *)((long)param_4 + 1);
        *(char *)puVar32 = (char)*param_4;
        puVar32 = (ulong *)((long)puVar32 + 1);
        param_4 = puVar37;
      } while (puVar37 != puVar38);
    }
  }
LAB_002b28d4:
  param_2[3] = param_2[3] + uVar43;
  piVar30 = (int *)param_2[1];
/* thanks for reading - discord.gg/sdkhDjTex */
  uVar14 = uVar20;
  if (uVar43 < 0x10000) {
    lVar50 = uVar31 + lVar50;
    *(short *)(piVar30 + 1) = (short)uVar43;
    *piVar30 = iVar45;
    uVar20 = uVar19;
  }
  else {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
    lVar50 = uVar31 + lVar50;
    *(short *)(piVar30 + 1) = (short)uVar43;
    *piVar30 = iVar45;
    uVar20 = uVar19;
  }
joined_r0x002b27cc:
  if (0xffff < lVar50 - 3U) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
  }
  *(short *)((long)piVar30 + 6) = (short)(lVar50 - 3U);
  piVar30 = piVar30 + 2;
  param_2[1] = (long)piVar30;
  param_4 = (ulong *)((long)puVar38 + lVar50);
  if (puVar26 < param_4) {
    uVar17 = uVar14;
  }
  else {
/* wm:if you paid for this, you were scammed */
    *(uint *)(lVar47 + ((ulong)(*(long *)(lVar2 + (ulong)uVar18) * -0x30e4432345000000) >>
                       (uVar24 & 0x3f)) * 4) = uVar18 + 2;
    *(int *)(lVar47 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e4432345000000) >>
                      (uVar24 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar23;
    if (uVar14 == 0) {
      uVar17 = 0;
    }
    else {
      uVar18 = uVar20;
      do {
        uVar20 = uVar14;
        uVar14 = uVar18;
        if ((uint)*param_4 != *(uint *)((long)param_4 - (ulong)uVar20)) {
          uVar17 = uVar20;
          uVar20 = uVar14;
          break;
        }
        puVar38 = (ulong *)((long)param_4 + 4);
        lVar46 = -(ulong)uVar20;
        puVar37 = (ulong *)((long)puVar38 + lVar46);
// origin: github.com/pengussy
        if (puVar38 < puVar44) {
          if (*puVar37 == *puVar38) {
            lVar50 = 0;
            puVar32 = (ulong *)((long)param_4 + 0xc);
            puVar37 = (ulong *)((long)param_4 + 0xc + lVar46);
            do {
              if (puVar44 <= puVar32) goto LAB_002b29e4;
              uVar31 = *puVar37;
              uVar43 = *puVar32;
              lVar50 = lVar50 + 8;
              puVar32 = puVar32 + 1;
              puVar37 = puVar37 + 1;
            } while (uVar31 == uVar43);
            uVar43 = uVar43 ^ uVar31;
            uVar31 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = lVar50 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
          }
          else {
            uVar31 = *puVar38 ^ *puVar37;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
          }
        }
        else {
          puVar32 = puVar38;
LAB_002b29e4:
          if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
            if ((uint)*puVar37 == (uint)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 4);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
              puVar37 = (ulong *)((long)puVar37 + 4);
            }
          }
          if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
            if (*(short *)puVar37 == *(short *)puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 2);
              puVar37 = (ulong *)((long)puVar37 + 2);
            }
          }
          if (puVar32 < puVar53) {
            if ((char)*puVar37 == (char)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 1);
            }
          }
          uVar31 = (long)puVar32 - (long)puVar38;
        }
        *(int *)(lVar47 + (*param_4 * -0x30e4432345000000 >> (uVar24 & 0x3f)) * 4) =
             (int)param_4 - iVar23;
        if (param_4 <= puVar36) {
          puVar38 = (ulong *)param_2[3];
          uVar43 = *param_4;
          puVar38[1] = param_4[1];
          *puVar38 = uVar43;
          piVar30 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar30 + 1) = 0;
        *piVar30 = 1;
        if (0xffff < uVar31 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar31 + 4);
        *(short *)((long)piVar30 + 6) = (short)(uVar31 + 1);
        piVar30 = piVar30 + 2;
        param_2[1] = (long)piVar30;
// WM - donate: donate/README.md
        uVar17 = uVar14;
        uVar18 = uVar20;
      } while (param_4 <= puVar26);
    }
  }
  puVar32 = (ulong *)((long)param_4 + uVar22);
  puVar37 = (ulong *)((long)puVar32 + 1);
  puVar38 = param_4;
  if (puVar26 <= puVar37) goto LAB_002b3cc0;
  goto LAB_002b235c;
LAB_002b14dc:
  puVar52 = puVar32;
  if (uVar31 < 5) {
LAB_002b14f0:
    *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
  }
  puVar32 = (ulong *)(lVar40 + (ulong)uVar14);
  uVar19 = (int)puVar38 - (int)puVar32;
  iVar45 = uVar19 + 3;
  if ((uVar34 < uVar14) && (param_4 < puVar38)) {
    lVar50 = 4;
    puVar37 = (ulong *)(lVar40 + -1 + (ulong)uVar14);
    while( true ) {
      puVar32 = puVar37;
      puVar37 = (ulong *)((long)puVar38 + -1);
      if (*(char *)puVar37 != (char)*puVar32) break;
      lVar50 = lVar50 + 1;
      puVar38 = puVar37;
      if ((puVar37 <= param_4) || (puVar37 = (ulong *)((long)puVar32 + -1), puVar32 <= puVar28))
      goto LAB_002b1718;
    }
    puVar32 = (ulong *)((long)puVar32 + 1);
/* watermarked copy - do not remove - github.com/pengussy */
LAB_002b1718:
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar15 = (ulong *)((long)puVar38 + lVar50);
    if (puVar15 < puVar44) goto LAB_002b1478;
LAB_002b1584:
    puVar32 = puVar15;
LAB_002b1588:
    if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
      if ((uint)*puVar37 == (uint)*puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 4);
        puVar32 = (ulong *)((long)puVar32 + 4);
      }
    }
    if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
      if (*(short *)puVar37 == *(short *)puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 2);
        puVar32 = (ulong *)((long)puVar32 + 2);
      }
    }
    if (puVar32 < puVar53) {
      if ((char)*puVar37 == (char)*puVar32) {
        puVar32 = (ulong *)((long)puVar32 + 1);
      }
    }
    uVar31 = (long)puVar32 - (long)puVar15;
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
joined_r0x002b16a4:
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    if (puVar36 < puVar38) goto LAB_002b15e4;
LAB_002b16a8:
    uVar33 = *param_4;
    puVar37[1] = param_4[1];
    *puVar37 = uVar33;
    if (uVar43 < 0x11) {
LAB_002b16d0:
      param_2[3] = param_2[3] + uVar43;
      piVar30 = (int *)param_2[1];
      lVar50 = uVar31 + lVar50;
      *(short *)(piVar30 + 1) = (short)uVar43;
      *piVar30 = iVar45;
      uVar14 = uVar20;
      goto joined_r0x002b16f4;
    }
    lVar46 = param_2[3];
    uVar33 = param_4[2];
    *(ulong *)(lVar46 + 0x18) = param_4[3];
    *(ulong *)(lVar46 + 0x10) = uVar33;
    if (uVar43 - 0x10 < 0x11) goto LAB_002b16d0;
    puVar37 = (ulong *)(lVar46 + 0x20);
    puVar32 = param_4 + 6;
    do {
      uVar33 = puVar32[-2];
      puVar37[1] = puVar32[-1];
      *puVar37 = uVar33;
      uVar33 = *puVar32;
      puVar37[3] = puVar32[1];
      puVar37[2] = uVar33;
      puVar37 = puVar37 + 4;
/* no support for modified copies - github.com/pengussy */
      puVar32 = puVar32 + 4;
    } while (puVar37 < (ulong *)(lVar46 + uVar43));
  }
  else {
    lVar50 = 4;
    puVar37 = (ulong *)((long)puVar32 + 4);
    puVar15 = (ulong *)((long)puVar38 + 4);
    uVar17 = uVar20;
joined_r0x002b1474:
    uVar20 = uVar17;
    if (puVar44 <= puVar15) goto LAB_002b1584;
LAB_002b1478:
    if (*puVar37 != *puVar15) {
      uVar31 = *puVar15 ^ *puVar37;
      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
      uVar43 = (long)puVar38 - (long)param_4;
      puVar37 = (ulong *)param_2[3];
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      goto joined_r0x002b16a4;
    }
    lVar46 = 0;
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar32 = (ulong *)((long)puVar38 + lVar50);
    do {
      puVar32 = puVar32 + 1;
      puVar37 = puVar37 + 1;
      if (puVar44 <= puVar32) goto LAB_002b1588;
      lVar46 = lVar46 + 8;
    } while (*puVar37 == *puVar32);
    uVar31 = *puVar32 ^ *puVar37;
    uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
    uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
    uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
/*  keep the notice, keep the source honest  */
    uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
    uVar31 = lVar46 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
    if (puVar38 <= puVar36) goto LAB_002b16a8;
LAB_002b15e4:
    puVar32 = puVar37;
    if (param_4 <= puVar36) {
      puVar32 = (ulong *)((long)puVar37 + ((long)puVar36 - (long)param_4));
      uVar33 = *param_4;
      puVar15 = puVar37 + 2;
      puVar37[1] = param_4[1];
      *puVar37 = uVar33;
      if (0x10 < (ulong)((long)puVar36 - (long)param_4)) {
        do {
          uVar33 = param_4[2];
          puVar15[1] = param_4[3];
          *puVar15 = uVar33;
          uVar33 = param_4[4];
          puVar15[3] = param_4[5];
          puVar15[2] = uVar33;
          puVar15 = puVar15 + 4;
          param_4 = param_4 + 4;
        } while (puVar15 < puVar32);
      }
      param_4 = puVar36;
    }
    if (param_4 < puVar38) {
      uVar33 = (long)puVar38 - (long)param_4;
      if ((7 < uVar33) && (0x3f < (ulong)((long)puVar32 - (long)param_4))) {
        if (uVar33 < 0x40) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar33 & 0xffffffffffffffc0;
          puVar37 = puVar32 + 4;
          puVar15 = param_4 + 4;
/* wm:keep the notice, keep the source honest */
          uVar41 = uVar39;
          do {
            uVar54 = puVar15[-4];
            uVar56 = puVar15[-1];
            uVar55 = puVar15[-2];
            uVar58 = puVar15[1];
            uVar57 = *puVar15;
            uVar60 = puVar15[3];
            uVar59 = puVar15[2];
            puVar37[-3] = puVar15[-3];
            puVar37[-4] = uVar54;
            puVar37[-1] = uVar56;
            puVar37[-2] = uVar55;
            puVar37[1] = uVar58;
            *puVar37 = uVar57;
            puVar37[3] = uVar60;
            puVar37[2] = uVar59;
            uVar41 = uVar41 - 0x40;
            puVar37 = puVar37 + 8;
            puVar15 = puVar15 + 8;
          } while (uVar41 != 0);
          if (uVar33 == uVar39) goto LAB_002b17fc;
          if ((uVar33 & 0x38) == 0) {
            puVar32 = (ulong *)((long)puVar32 + uVar39);
            param_4 = (ulong *)((long)param_4 + uVar39);
            goto LAB_002b17ec;
          }
        }
        uVar41 = uVar33 & 0xfffffffffffffff8;
        lVar46 = uVar39 - uVar41;
        puVar29 = (undefined8 *)((long)puVar32 + uVar39);
        puVar35 = (undefined8 *)((long)param_4 + uVar39);
        do {
          *puVar29 = *puVar35;
          lVar46 = lVar46 + 8;
          puVar29 = puVar29 + 1;
// WM - origin: github.com/pengussy
          puVar35 = puVar35 + 1;
        } while (lVar46 != 0);
        puVar32 = (ulong *)((long)puVar32 + uVar41);
        param_4 = (ulong *)((long)param_4 + uVar41);
        if (uVar33 == uVar41) goto LAB_002b17fc;
      }
LAB_002b17ec:
      do {
        puVar37 = (ulong *)((long)param_4 + 1);
        *(char *)puVar32 = (char)*param_4;
        puVar32 = (ulong *)((long)puVar32 + 1);
        param_4 = puVar37;
      } while (puVar37 != puVar38);
    }
  }
LAB_002b17fc:
  param_2[3] = param_2[3] + uVar43;
  piVar30 = (int *)param_2[1];
  uVar14 = uVar20;
/*  watermarked copy - do not remove  */
  if (uVar43 < 0x10000) {
    lVar50 = uVar31 + lVar50;
    *(short *)(piVar30 + 1) = (short)uVar43;
    *piVar30 = iVar45;
  }
  else {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
    lVar50 = uVar31 + lVar50;
    *(short *)(piVar30 + 1) = (short)uVar43;
    *piVar30 = iVar45;
  }
joined_r0x002b16f4:
  if (0xffff < lVar50 - 3U) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
  }
  *(short *)((long)piVar30 + 6) = (short)(lVar50 - 3U);
  piVar30 = piVar30 + 2;
  param_2[1] = (long)piVar30;
  param_4 = (ulong *)((long)puVar38 + lVar50);
  uVar20 = uVar19;
  if (puVar26 < param_4) {
    uVar17 = uVar14;
  }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  else {
    *(uint *)(lVar47 + ((ulong)(*(long *)(lVar2 + (ulong)uVar18) * -0x30e4432340650000) >>
                       (uVar24 & 0x3f)) * 4) = uVar18 + 2;
    *(int *)(lVar47 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e4432340650000) >>
                      (uVar24 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar23;
    if (uVar14 == 0) {
      uVar17 = 0;
    }
    else {
      do {
        uVar17 = uVar19;
        uVar19 = uVar14;
        if ((uint)*param_4 != *(uint *)((long)param_4 - (ulong)uVar19)) {
          uVar20 = uVar17;
          uVar17 = uVar19;
          break;
        }
        puVar38 = (ulong *)((long)param_4 + 4);
        lVar46 = -(ulong)uVar19;
        puVar37 = (ulong *)((long)puVar38 + lVar46);
        if (puVar38 < puVar44) {
          if (*puVar37 == *puVar38) {
            lVar50 = 0;
            puVar32 = (ulong *)((long)param_4 + 0xc);
            puVar37 = (ulong *)((long)param_4 + 0xc + lVar46);
            do {
              if (puVar44 <= puVar32) goto LAB_002b190c;
              uVar31 = *puVar37;
              uVar43 = *puVar32;
              lVar50 = lVar50 + 8;
              puVar32 = puVar32 + 1;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
              puVar37 = puVar37 + 1;
            } while (uVar31 == uVar43);
            uVar43 = uVar43 ^ uVar31;
            uVar31 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = lVar50 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
          }
          else {
            uVar31 = *puVar38 ^ *puVar37;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
          }
        }
        else {
          puVar32 = puVar38;
/*  thanks for reading - discord.gg/sdkhDjTex  */
LAB_002b190c:
          if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
            if ((uint)*puVar37 == (uint)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 4);
              puVar37 = (ulong *)((long)puVar37 + 4);
            }
          }
          if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
            if (*(short *)puVar37 == *(short *)puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 2);
              puVar37 = (ulong *)((long)puVar37 + 2);
            }
          }
          if (puVar32 < puVar53) {
            if ((char)*puVar37 == (char)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 1);
            }
          }
          uVar31 = (long)puVar32 - (long)puVar38;
        }
        *(int *)(lVar47 + (*param_4 * -0x30e4432340650000 >> (uVar24 & 0x3f)) * 4) =
             (int)param_4 - iVar23;
        if (param_4 <= puVar36) {
          puVar38 = (ulong *)param_2[3];
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          uVar43 = *param_4;
          puVar38[1] = param_4[1];
          *puVar38 = uVar43;
          piVar30 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar30 + 1) = 0;
        *piVar30 = 1;
        if (0xffff < uVar31 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar31 + 4);
        *(short *)((long)piVar30 + 6) = (short)(uVar31 + 1);
        piVar30 = piVar30 + 2;
        param_2[1] = (long)piVar30;
        uVar20 = uVar19;
        uVar14 = uVar17;
      } while (param_4 <= puVar26);
    }
  }
  puVar32 = (ulong *)((long)param_4 + uVar22);
  puVar37 = (ulong *)((long)puVar32 + 1);
  puVar38 = param_4;
  if (puVar26 <= puVar37) goto LAB_002b3cc0;
  goto LAB_002b1284;
LAB_002b043c:
  puVar52 = puVar32;
  if (uVar31 < 5) {
LAB_002b0450:
    *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
  }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  puVar32 = (ulong *)(lVar40 + (ulong)uVar14);
  uVar19 = (int)puVar38 - (int)puVar32;
  iVar45 = uVar19 + 3;
  if ((uVar34 < uVar14) && (param_4 < puVar38)) {
    lVar50 = 4;
    puVar37 = (ulong *)(lVar40 + -1 + (ulong)uVar14);
    while( true ) {
      puVar32 = puVar37;
      puVar37 = (ulong *)((long)puVar38 + -1);
      if (*(char *)puVar37 != (char)*puVar32) break;
      lVar50 = lVar50 + 1;
      puVar38 = puVar37;
      if ((puVar37 <= param_4) || (puVar37 = (ulong *)((long)puVar32 + -1), puVar32 <= puVar28))
      goto LAB_002b0678;
    }
    puVar32 = (ulong *)((long)puVar32 + 1);
LAB_002b0678:
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar15 = (ulong *)((long)puVar38 + lVar50);
    if (puVar15 < puVar44) goto LAB_002b03d8;
LAB_002b04e4:
    puVar32 = puVar15;
LAB_002b04e8:
    if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
      if ((uint)*puVar37 == (uint)*puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 4);
        puVar32 = (ulong *)((long)puVar32 + 4);
      }
    }
    if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
      if (*(short *)puVar37 == *(short *)puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 2);
        puVar32 = (ulong *)((long)puVar32 + 2);
      }
    }
    if (puVar32 < puVar53) {
/*  chat: discord.gg/sdkhDjTex  */
      if ((char)*puVar37 == (char)*puVar32) {
        puVar32 = (ulong *)((long)puVar32 + 1);
      }
    }
    uVar31 = (long)puVar32 - (long)puVar15;
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
joined_r0x002b0604:
    if (puVar36 < puVar38) goto LAB_002b0544;
LAB_002b0608:
    uVar33 = *param_4;
    puVar37[1] = param_4[1];
    *puVar37 = uVar33;
    if (uVar43 < 0x11) {
LAB_002b0630:
      param_2[3] = param_2[3] + uVar43;
      piVar30 = (int *)param_2[1];
      lVar50 = uVar31 + lVar50;
      *(short *)(piVar30 + 1) = (short)uVar43;
      *piVar30 = iVar45;
      uVar14 = uVar20;
      goto joined_r0x002b0654;
    }
    lVar46 = param_2[3];
    uVar33 = param_4[2];
    *(ulong *)(lVar46 + 0x18) = param_4[3];
    *(ulong *)(lVar46 + 0x10) = uVar33;
    if (uVar43 - 0x10 < 0x11) goto LAB_002b0630;
    puVar37 = (ulong *)(lVar46 + 0x20);
    puVar32 = param_4 + 6;
    do {
      uVar33 = puVar32[-2];
      puVar37[1] = puVar32[-1];
      *puVar37 = uVar33;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar33 = *puVar32;
      puVar37[3] = puVar32[1];
      puVar37[2] = uVar33;
      puVar37 = puVar37 + 4;
      puVar32 = puVar32 + 4;
    } while (puVar37 < (ulong *)(lVar46 + uVar43));
  }
  else {
    lVar50 = 4;
    puVar37 = (ulong *)((long)puVar32 + 4);
    puVar15 = (ulong *)((long)puVar38 + 4);
    uVar17 = uVar20;
joined_r0x002b03d4:
    uVar20 = uVar17;
    if (puVar44 <= puVar15) goto LAB_002b04e4;
LAB_002b03d8:
    if (*puVar37 != *puVar15) {
      uVar31 = *puVar15 ^ *puVar37;
      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
      uVar43 = (long)puVar38 - (long)param_4;
      puVar37 = (ulong *)param_2[3];
      goto joined_r0x002b0604;
    }
    lVar46 = 0;
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar32 = (ulong *)((long)puVar38 + lVar50);
    do {
      puVar32 = puVar32 + 1;
/*  if you paid for this, you were scammed  */
      puVar37 = puVar37 + 1;
      if (puVar44 <= puVar32) goto LAB_002b04e8;
      lVar46 = lVar46 + 8;
    } while (*puVar37 == *puVar32);
    uVar31 = *puVar32 ^ *puVar37;
    uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
    uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
    uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
    uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
    uVar31 = lVar46 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
    uVar43 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
    if (puVar38 <= puVar36) goto LAB_002b0608;
LAB_002b0544:
    puVar32 = puVar37;
    if (param_4 <= puVar36) {
      puVar32 = (ulong *)((long)puVar37 + ((long)puVar36 - (long)param_4));
      uVar33 = *param_4;
      puVar15 = puVar37 + 2;
      puVar37[1] = param_4[1];
/* origin: github.com/pengussy */
      *puVar37 = uVar33;
      if (0x10 < (ulong)((long)puVar36 - (long)param_4)) {
        do {
          uVar33 = param_4[2];
          puVar15[1] = param_4[3];
          *puVar15 = uVar33;
          uVar33 = param_4[4];
          puVar15[3] = param_4[5];
          puVar15[2] = uVar33;
          puVar15 = puVar15 + 4;
          param_4 = param_4 + 4;
        } while (puVar15 < puVar32);
      }
      param_4 = puVar36;
    }
    if (param_4 < puVar38) {
      uVar33 = (long)puVar38 - (long)param_4;
      if ((7 < uVar33) && (0x3f < (ulong)((long)puVar32 - (long)param_4))) {
        if (uVar33 < 0x40) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar33 & 0xffffffffffffffc0;
          puVar37 = puVar32 + 4;
          puVar15 = param_4 + 4;
          uVar41 = uVar39;
          do {
// WM - thanks for reading - discord.gg/sdkhDjTex
            uVar54 = puVar15[-4];
            uVar56 = puVar15[-1];
            uVar55 = puVar15[-2];
            uVar58 = puVar15[1];
            uVar57 = *puVar15;
            uVar60 = puVar15[3];
            uVar59 = puVar15[2];
            puVar37[-3] = puVar15[-3];
            puVar37[-4] = uVar54;
            puVar37[-1] = uVar56;
            puVar37[-2] = uVar55;
            puVar37[1] = uVar58;
            *puVar37 = uVar57;
            puVar37[3] = uVar60;
            puVar37[2] = uVar59;
            uVar41 = uVar41 - 0x40;
            puVar37 = puVar37 + 8;
            puVar15 = puVar15 + 8;
          } while (uVar41 != 0);
          if (uVar33 == uVar39) goto LAB_002b075c;
          if ((uVar33 & 0x38) == 0) {
            puVar32 = (ulong *)((long)puVar32 + uVar39);
            param_4 = (ulong *)((long)param_4 + uVar39);
            goto LAB_002b074c;
          }
        }
        uVar41 = uVar33 & 0xfffffffffffffff8;
        lVar46 = uVar39 - uVar41;
        puVar29 = (undefined8 *)((long)puVar32 + uVar39);
        puVar35 = (undefined8 *)((long)param_4 + uVar39);
        do {
          *puVar29 = *puVar35;
          lVar46 = lVar46 + 8;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
        } while (lVar46 != 0);
        puVar32 = (ulong *)((long)puVar32 + uVar41);
        param_4 = (ulong *)((long)param_4 + uVar41);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        if (uVar33 == uVar41) goto LAB_002b075c;
      }
LAB_002b074c:
      do {
        puVar37 = (ulong *)((long)param_4 + 1);
        *(char *)puVar32 = (char)*param_4;
        puVar32 = (ulong *)((long)puVar32 + 1);
        param_4 = puVar37;
      } while (puVar37 != puVar38);
    }
  }
LAB_002b075c:
  param_2[3] = param_2[3] + uVar43;
  piVar30 = (int *)param_2[1];
  uVar14 = uVar20;
  if (uVar43 < 0x10000) {
    lVar50 = uVar31 + lVar50;
    *(short *)(piVar30 + 1) = (short)uVar43;
    *piVar30 = iVar45;
  }
  else {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
    lVar50 = uVar31 + lVar50;
    *(short *)(piVar30 + 1) = (short)uVar43;
    *piVar30 = iVar45;
/*  reversing this took months of machine time  */
  }
joined_r0x002b0654:
  if (0xffff < lVar50 - 3U) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
  }
  *(short *)((long)piVar30 + 6) = (short)(lVar50 - 3U);
  piVar30 = piVar30 + 2;
  param_2[1] = (long)piVar30;
  param_4 = (ulong *)((long)puVar38 + lVar50);
  uVar20 = uVar19;
  if (puVar26 < param_4) {
    uVar17 = uVar14;
  }
  else {
    *(uint *)(lVar47 + ((ulong)(*(long *)(lVar2 + (ulong)uVar18) * -0x30e44323405a9d00) >>
                       (uVar24 & 0x3f)) * 4) = uVar18 + 2;
    *(int *)(lVar47 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323405a9d00) >>
                      (uVar24 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar23;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    if (uVar14 == 0) {
      uVar17 = 0;
    }
    else {
      do {
        uVar17 = uVar19;
        uVar19 = uVar14;
        if ((uint)*param_4 != *(uint *)((long)param_4 - (ulong)uVar19)) {
          uVar20 = uVar17;
          uVar17 = uVar19;
          break;
        }
        puVar38 = (ulong *)((long)param_4 + 4);
        lVar46 = -(ulong)uVar19;
        puVar37 = (ulong *)((long)puVar38 + lVar46);
        if (puVar38 < puVar44) {
          if (*puVar37 == *puVar38) {
            lVar50 = 0;
            puVar32 = (ulong *)((long)param_4 + 0xc);
            puVar37 = (ulong *)((long)param_4 + 0xc + lVar46);
            do {
              if (puVar44 <= puVar32) goto LAB_002b086c;
              uVar31 = *puVar37;
              uVar43 = *puVar32;
              lVar50 = lVar50 + 8;
              puVar32 = puVar32 + 1;
              puVar37 = puVar37 + 1;
/* wm:donate: donate/README.md */
            } while (uVar31 == uVar43);
            uVar43 = uVar43 ^ uVar31;
            uVar31 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = lVar50 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
          }
          else {
            uVar31 = *puVar38 ^ *puVar37;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
          }
        }
        else {
          puVar32 = puVar38;
LAB_002b086c:
          if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
            if ((uint)*puVar37 == (uint)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 4);
              puVar37 = (ulong *)((long)puVar37 + 4);
            }
          }
          if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
            if (*(short *)puVar37 == *(short *)puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 2);
              puVar37 = (ulong *)((long)puVar37 + 2);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
            }
          }
          if (puVar32 < puVar53) {
            if ((char)*puVar37 == (char)*puVar32) {
              puVar32 = (ulong *)((long)puVar32 + 1);
            }
          }
          uVar31 = (long)puVar32 - (long)puVar38;
        }
        *(int *)(lVar47 + (*param_4 * -0x30e44323405a9d00 >> (uVar24 & 0x3f)) * 4) =
             (int)param_4 - iVar23;
        if (param_4 <= puVar36) {
          puVar38 = (ulong *)param_2[3];
          uVar43 = *param_4;
          puVar38[1] = param_4[1];
          *puVar38 = uVar43;
          piVar30 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar30 + 1) = 0;
        *piVar30 = 1;
        if (0xffff < uVar31 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar31 + 4);
        *(short *)((long)piVar30 + 6) = (short)(uVar31 + 1);
        piVar30 = piVar30 + 2;
        param_2[1] = (long)piVar30;
        uVar14 = uVar17;
        uVar20 = uVar19;
      } while (param_4 <= puVar26);
    }
  }
/* wm:origin: github.com/pengussy */
  puVar32 = (ulong *)((long)param_4 + uVar22);
  puVar37 = (ulong *)((long)puVar32 + 1);
  puVar38 = param_4;
  if (puVar26 <= puVar37) goto LAB_002b3cc0;
  goto LAB_002b01e4;
LAB_002b3cb8:
  uVar20 = 0;
  goto LAB_002b3cc0;
LAB_002b3720:
  puVar52 = puVar32;
  if (uVar24 < 5) {
LAB_002b3734:
    *(int *)(lVar47 + uVar43 * 4) = (int)puVar52 - iVar23;
  }
  puVar32 = (ulong *)(lVar40 + (ulong)uVar19);
  uVar21 = (int)puVar38 - (int)puVar32;
  iVar45 = uVar21 + 3;
  if ((uVar34 < uVar19) && (param_4 < puVar38)) {
    lVar50 = 4;
// thanks for reading - discord.gg/sdkhDjTex
    puVar37 = (ulong *)(lVar40 + -1 + (ulong)uVar19);
    while( true ) {
      puVar32 = puVar37;
      puVar37 = (ulong *)((long)puVar38 + -1);
      if (*(char *)puVar37 != (char)*puVar32) break;
      lVar50 = lVar50 + 1;
      puVar38 = puVar37;
      if ((puVar37 <= param_4) || (puVar37 = (ulong *)((long)puVar32 + -1), puVar32 <= puVar28))
      goto LAB_002b38e8;
    }
    puVar32 = (ulong *)((long)puVar32 + 1);
LAB_002b38e8:
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar15 = (ulong *)((long)puVar38 + lVar50);
    if (puVar15 < puVar44) goto LAB_002b3654;
LAB_002b37cc:
    puVar32 = puVar15;
LAB_002b37d0:
    if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
      if ((uint)*puVar37 == (uint)*puVar32) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        puVar37 = (ulong *)((long)puVar37 + 4);
        puVar32 = (ulong *)((long)puVar32 + 4);
      }
    }
    if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
      if (*(short *)puVar37 == *(short *)puVar32) {
        puVar37 = (ulong *)((long)puVar37 + 2);
        puVar32 = (ulong *)((long)puVar32 + 2);
      }
    }
    if (puVar32 < puVar53) {
      if ((char)*puVar37 == (char)*puVar32) {
        puVar32 = (ulong *)((long)puVar32 + 1);
      }
    }
    uVar24 = (long)puVar32 - (long)puVar15;
    uVar31 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
joined_r0x002b36d4:
    if (puVar36 < puVar38) goto LAB_002b3830;
LAB_002b36d8:
    uVar43 = *param_4;
    puVar37[1] = param_4[1];
    *puVar37 = uVar43;
    if (0x10 < uVar31) {
/* wm:unlicensed copy if this notice is missing */
      lVar46 = param_2[3];
      uVar43 = param_4[2];
      *(ulong *)(lVar46 + 0x18) = param_4[3];
      *(ulong *)(lVar46 + 0x10) = uVar43;
      if (uVar31 - 0x10 < 0x11) goto LAB_002b3700;
      puVar37 = (ulong *)(lVar46 + 0x20);
      puVar32 = param_4 + 6;
      do {
        uVar43 = puVar32[-2];
        puVar37[1] = puVar32[-1];
        *puVar37 = uVar43;
        uVar43 = *puVar32;
        puVar37[3] = puVar32[1];
        puVar37[2] = uVar43;
        puVar37 = puVar37 + 4;
        puVar32 = puVar32 + 4;
      } while (puVar37 < (ulong *)(lVar46 + uVar31));
      goto LAB_002b39dc;
    }
LAB_002b3700:
    param_2[3] = param_2[3] + uVar31;
    piVar30 = (int *)param_2[1];
LAB_002b39f4:
    lVar50 = uVar24 + lVar50;
    *(short *)(piVar30 + 1) = (short)uVar31;
    *piVar30 = iVar45;
    uVar24 = lVar50 - 3;
    if (uVar24 < 0x10000) goto LAB_002b3a10;
LAB_002b3a5c:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
/* WM - watermarked copy - do not remove */
    *(short *)((long)piVar30 + 6) = (short)uVar24;
    piVar30 = piVar30 + 2;
    param_2[1] = (long)piVar30;
    param_4 = (ulong *)((long)puVar38 + lVar50);
    if (param_4 <= puVar26) goto LAB_002b3a88;
  }
  else {
    lVar50 = 4;
    puVar37 = (ulong *)((long)puVar32 + 4);
    puVar15 = (ulong *)((long)puVar38 + 4);
    uVar17 = uVar20;
joined_r0x002b3650:
    uVar20 = uVar17;
    if (puVar44 <= puVar15) goto LAB_002b37cc;
LAB_002b3654:
    if (*puVar37 != *puVar15) {
      uVar24 = *puVar15 ^ *puVar37;
      uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
      uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
/* WM - do not claim this as your own */
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
      uVar31 = (long)puVar38 - (long)param_4;
      puVar37 = (ulong *)param_2[3];
      goto joined_r0x002b36d4;
    }
    lVar46 = 0;
    puVar37 = (ulong *)((long)puVar32 + lVar50);
    puVar32 = (ulong *)((long)puVar38 + lVar50);
    do {
      puVar32 = puVar32 + 1;
      puVar37 = puVar37 + 1;
      if (puVar44 <= puVar32) goto LAB_002b37d0;
      lVar46 = lVar46 + 8;
    } while (*puVar37 == *puVar32);
    uVar24 = *puVar32 ^ *puVar37;
    uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
    uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
    uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = lVar46 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
    uVar31 = (long)puVar38 - (long)param_4;
    puVar37 = (ulong *)param_2[3];
    if (puVar38 <= puVar36) goto LAB_002b36d8;
LAB_002b3830:
    puVar32 = puVar37;
    if (param_4 <= puVar36) {
      puVar32 = (ulong *)((long)puVar37 + ((long)puVar36 - (long)param_4));
      uVar43 = *param_4;
      puVar15 = puVar37 + 2;
      puVar37[1] = param_4[1];
/* proprietary - see LICENSE - do not sell */
      *puVar37 = uVar43;
      if (0x10 < (ulong)((long)puVar36 - (long)param_4)) {
        do {
          uVar43 = param_4[2];
          puVar15[1] = param_4[3];
          *puVar15 = uVar43;
          uVar43 = param_4[4];
          puVar15[3] = param_4[5];
          puVar15[2] = uVar43;
          puVar15 = puVar15 + 4;
          param_4 = param_4 + 4;
        } while (puVar15 < puVar32);
      }
      param_4 = puVar36;
    }
    if (param_4 < puVar38) {
      uVar43 = (long)puVar38 - (long)param_4;
      if ((7 < uVar43) && (0x3f < (ulong)((long)puVar32 - (long)param_4))) {
        if (uVar43 < 0x40) {
          uVar41 = 0;
        }
        else {
          uVar41 = uVar43 & 0xffffffffffffffc0;
/* WM - donate: donate/README.md */
          puVar37 = puVar32 + 4;
          puVar15 = param_4 + 4;
          uVar33 = uVar41;
          do {
            uVar39 = puVar15[-4];
            uVar55 = puVar15[-1];
            uVar54 = puVar15[-2];
            uVar57 = puVar15[1];
            uVar56 = *puVar15;
            uVar59 = puVar15[3];
            uVar58 = puVar15[2];
            puVar37[-3] = puVar15[-3];
            puVar37[-4] = uVar39;
            puVar37[-1] = uVar55;
            puVar37[-2] = uVar54;
            puVar37[1] = uVar57;
            *puVar37 = uVar56;
            puVar37[3] = uVar59;
            puVar37[2] = uVar58;
            uVar33 = uVar33 - 0x40;
            puVar37 = puVar37 + 8;
            puVar15 = puVar15 + 8;
/*  donate: donate/README.md  */
          } while (uVar33 != 0);
          if (uVar43 == uVar41) goto LAB_002b39dc;
          if ((uVar43 & 0x38) == 0) {
            puVar32 = (ulong *)((long)puVar32 + uVar41);
            param_4 = (ulong *)((long)param_4 + uVar41);
            goto LAB_002b39cc;
          }
        }
        uVar33 = uVar43 & 0xfffffffffffffff8;
        lVar46 = uVar41 - uVar33;
        puVar29 = (undefined8 *)((long)puVar32 + uVar41);
        puVar35 = (undefined8 *)((long)param_4 + uVar41);
        do {
          *puVar29 = *puVar35;
          lVar46 = lVar46 + 8;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
        } while (lVar46 != 0);
        puVar32 = (ulong *)((long)puVar32 + uVar33);
        param_4 = (ulong *)((long)param_4 + uVar33);
        if (uVar43 == uVar33) goto LAB_002b39dc;
      }
LAB_002b39cc:
      do {
        puVar37 = (ulong *)((long)param_4 + 1);
        *(char *)puVar32 = (char)*param_4;
/*  more drops soon - github.com/pengussy  */
        puVar32 = (ulong *)((long)puVar32 + 1);
        param_4 = puVar37;
      } while (puVar37 != puVar38);
    }
LAB_002b39dc:
    param_2[3] = param_2[3] + uVar31;
    piVar30 = (int *)param_2[1];
    if (uVar31 < 0x10000) goto LAB_002b39f4;
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
    lVar50 = uVar24 + lVar50;
    *(short *)(piVar30 + 1) = (short)uVar31;
    *piVar30 = iVar45;
    uVar24 = lVar50 - 3;
    if (0xffff < uVar24) goto LAB_002b3a5c;
LAB_002b3a10:
    *(short *)((long)piVar30 + 6) = (short)uVar24;
    piVar30 = piVar30 + 2;
    param_2[1] = (long)piVar30;
    param_4 = (ulong *)((long)puVar38 + lVar50);
    if (param_4 <= puVar26) {
LAB_002b3a88:
      *(uint *)(lVar47 + (ulong)((uint)(*(int *)(lVar2 + (ulong)uVar18) * -0x61c8864f) >>
                                (ulong)(uVar14 & 0x1f)) * 4) = uVar18 + 2;
      *(int *)(lVar47 + (ulong)((uint)(*(int *)((long)param_4 - 2U) * -0x61c8864f) >>
// WM - if you paid for this, you were scammed
                               (ulong)(uVar14 & 0x1f)) * 4) =
           (int)(int *)((long)param_4 - 2U) - iVar23;
      if (uVar20 == 0) {
        uVar17 = 0;
      }
      else {
        do {
          uVar17 = uVar21;
          uVar18 = uVar20;
          uVar20 = (uint)*param_4;
          if (uVar20 != *(uint *)((long)param_4 - (ulong)uVar18)) {
            uVar21 = uVar17;
            uVar17 = uVar18;
            break;
          }
          puVar38 = (ulong *)((long)param_4 + 4);
          lVar46 = -(ulong)uVar18;
          puVar37 = (ulong *)((long)puVar38 + lVar46);
          iVar45 = (int)param_4;
          if (puVar38 < puVar44) {
            if (*puVar37 == *puVar38) {
              lVar50 = 0;
              puVar37 = (ulong *)((long)param_4 + 0xc + lVar46);
              puVar32 = (ulong *)((long)param_4 + 0xc);
              do {
                if (puVar44 <= puVar32) goto LAB_002b3b5c;
                uVar31 = *puVar37;
                uVar24 = *puVar32;
                lVar50 = lVar50 + 8;
                puVar37 = puVar37 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar31 == uVar24);
              uVar24 = uVar24 ^ uVar31;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
/* origin: github.com/pengussy - github.com/pengussy */
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = lVar50 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
              *(int *)(lVar47 + (ulong)(uVar20 * -0x61c8864f >> (ulong)(uVar14 & 0x1f)) * 4) =
                   iVar45 - iVar23;
            }
            else {
              uVar24 = *puVar38 ^ *puVar37;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
              *(int *)(lVar47 + (ulong)(uVar20 * -0x61c8864f >> (ulong)(uVar14 & 0x1f)) * 4) =
                   iVar45 - iVar23;
            }
          }
          else {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
            puVar32 = puVar38;
LAB_002b3b5c:
            if (puVar32 < (ulong *)((long)puVar53 - 3U)) {
              if ((uint)*puVar37 == (uint)*puVar32) {
                puVar37 = (ulong *)((long)puVar37 + 4);
                puVar32 = (ulong *)((long)puVar32 + 4);
              }
            }
            if (puVar32 < (ulong *)((long)puVar53 - 1U)) {
              if (*(short *)puVar37 == *(short *)puVar32) {
                puVar37 = (ulong *)((long)puVar37 + 2);
                puVar32 = (ulong *)((long)puVar32 + 2);
              }
            }
            if (puVar32 < puVar53) {
              if ((char)*puVar37 == (char)*puVar32) {
                puVar32 = (ulong *)((long)puVar32 + 1);
              }
            }
            uVar24 = (long)puVar32 - (long)puVar38;
            *(int *)(lVar47 + (ulong)(uVar20 * -0x61c8864f >> (ulong)(uVar14 & 0x1f)) * 4) =
                 iVar45 - iVar23;
          }
          if (param_4 <= puVar36) {
            puVar38 = (ulong *)param_2[3];
            uVar31 = *param_4;
            puVar38[1] = param_4[1];
            *puVar38 = uVar31;
            piVar30 = (int *)param_2[1];
          }
          *(undefined2 *)(piVar30 + 1) = 0;
          *piVar30 = 1;
          if (0xffff < uVar24 + 1) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar30 - *param_2) >> 3);
          }
          param_4 = (ulong *)((long)param_4 + uVar24 + 4);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
          *(short *)((long)piVar30 + 6) = (short)(uVar24 + 1);
          piVar30 = piVar30 + 2;
          param_2[1] = (long)piVar30;
          uVar20 = uVar17;
          uVar21 = uVar18;
        } while (param_4 <= puVar26);
      }
      goto LAB_002b3c90;
    }
  }
  uVar17 = uVar20;
LAB_002b3c90:
  uVar20 = uVar21;
  puVar32 = (ulong *)((long)param_4 + uVar22);
  puVar37 = (ulong *)((long)puVar32 + 1);
  puVar38 = param_4;
  if (puVar26 <= puVar37) goto LAB_002b3cc0;
  goto LAB_002b3458;
}

