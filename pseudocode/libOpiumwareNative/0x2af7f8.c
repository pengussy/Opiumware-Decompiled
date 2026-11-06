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
 *  file-id: 0x2af7f8:8249f0d974
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

long FUN_002af7f8(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  ulong *puVar9;
  bool bVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  int *piVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong *puVar29;
  ulong *puVar30;
  int iVar31;
  long lVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong uVar35;
  ulong *puVar36;
  int iVar37;
  ulong uVar38;
  ulong *puVar39;
  ulong uVar40;
  long lVar41;
  ulong *puVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  
  iVar37 = *(int *)(param_1 + 0x110);
  lVar28 = *(long *)(param_1 + 0x70);
  uVar6 = *(uint *)(param_1 + 0x114);
  if (uVar6 < 2) {
    uVar6 = 1;
  }
/* more drops soon - github.com/pengussy */
  uVar35 = (ulong)(uVar6 + 1);
  lVar32 = *(long *)(param_1 + 8);
  puVar2 = (ulong *)(param_5 + (long)param_4);
  iVar31 = (int)lVar32;
  iVar26 = (int)puVar2 - iVar31;
  uVar16 = *(uint *)(param_1 + 0x18);
  uVar19 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  bVar10 = *(int *)(param_1 + 0x28) != 0;
  uVar6 = iVar26 - uVar19;
  if (bVar10 || iVar26 - uVar16 <= uVar19) {
    uVar6 = uVar16;
  }
  puVar33 = puVar2 + -1;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  puVar3 = (ulong *)(lVar32 + (ulong)uVar6);
  puVar30 = param_4;
  if (param_4 == puVar3) {
    puVar30 = (ulong *)((long)param_4 + 1);
  }
  iVar26 = (int)puVar30 - iVar31;
  uVar8 = iVar26 - uVar19;
  if (bVar10 || iVar26 - uVar16 <= uVar19) {
    uVar8 = uVar16;
  }
  uVar8 = iVar26 - uVar8;
  uVar16 = 0;
  if (uVar5 <= uVar8) {
    uVar16 = uVar5;
/*  keep the notice, keep the source honest  */
  }
  uVar19 = 0;
  if (uVar4 <= uVar8) {
    uVar19 = uVar4;
  }
  lVar1 = lVar32 + 2;
  puVar34 = (ulong *)((long)puVar30 + uVar35);
  puVar29 = (ulong *)((long)puVar34 + 1);
  if (*(uint *)(param_1 + 0x100) < 0x13) {
    if (iVar37 == 5) {
      if (puVar29 < puVar33) {
        uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
        puVar36 = (ulong *)((long)puVar2 - 7);
        puVar21 = puVar2 + -4;
LAB_002b1ac8:
        puVar42 = (ulong *)((long)puVar30 + 1);
        uVar13 = *puVar42;
        puVar14 = puVar30 + 0x10;
        uVar22 = *puVar30 * -0x30e4432345000000 >> (uVar11 & 0x3f);
        uVar40 = (ulong)*(uint *)(lVar28 + uVar22 * 4);
        lVar15 = -(ulong)uVar19;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
        uVar23 = uVar35;
        if (uVar19 == 0) {
          while( true ) {
            uVar13 = uVar13 * -0x30e4432345000000 >> (uVar11 & 0x3f);
            uVar12 = (int)puVar30 - iVar31;
            *(uint *)(lVar28 + uVar22 * 4) = uVar12;
            piVar24 = (int *)&UNK_01add8a4;
            if (uVar6 <= (uint)uVar40) {
              piVar24 = (int *)(lVar32 + uVar40);
            }
            if (((int)*puVar30 == *piVar24) && (uVar6 <= (uint)uVar40)) goto LAB_002b1dc0;
            uVar17 = *(uint *)(lVar28 + uVar13 * 4);
            uVar40 = (ulong)uVar17;
            uVar22 = *puVar34 * -0x30e4432345000000 >> (uVar11 & 0x3f);
            uVar12 = (int)puVar42 - iVar31;
            *(uint *)(lVar28 + uVar13 * 4) = uVar12;
// chat: discord.gg/sdkhDjTex
            piVar24 = (int *)&UNK_01add8a4;
            if (uVar6 <= uVar17) {
              piVar24 = (int *)(lVar32 + uVar40);
            }
            if (((int)*puVar42 == *piVar24) && (uVar13 = uVar22, uVar6 <= uVar17)) break;
            uVar40 = (ulong)*(uint *)(lVar28 + uVar22 * 4);
            uVar13 = *puVar29;
            puVar39 = (ulong *)((long)puVar34 + uVar23);
            uVar38 = uVar23;
            if (puVar14 <= puVar39) {
              Hint_Prefetch(puVar29 + 8,0,0,0);
              Hint_Prefetch(puVar29 + 0x10,0,0,0);
              puVar14 = puVar14 + 0x10;
              uVar38 = uVar23 + 1;
            }
            puVar9 = (ulong *)((long)puVar29 + uVar23);
            puVar42 = puVar29;
            uVar23 = uVar38;
            puVar30 = puVar34;
            puVar34 = puVar39;
            puVar29 = puVar9;
            if (puVar33 <= puVar9) goto LAB_002b3cb8;
          }
LAB_002b1dcc:
          iVar37 = (int)puVar34;
          puVar30 = puVar42;
          if (uVar23 < 5) goto LAB_002b1de4;
          goto LAB_002b1dec;
        }
        while( true ) {
          iVar37 = *(int *)((long)puVar34 + lVar15);
          uVar13 = uVar13 * -0x30e4432345000000 >> (uVar11 & 0x3f);
          uVar12 = (int)puVar30 - iVar31;
// WM - stripping the watermark breaks the license
          *(uint *)(lVar28 + uVar22 * 4) = uVar12;
          if ((int)*puVar34 == iVar37) break;
          piVar24 = (int *)&UNK_01add8a4;
          if (uVar6 <= (uint)uVar40) {
            piVar24 = (int *)(lVar32 + uVar40);
          }
          if (((int)*puVar30 == *piVar24) && (uVar6 <= (uint)uVar40)) goto LAB_002b1dc0;
          uVar17 = *(uint *)(lVar28 + uVar13 * 4);
          uVar40 = (ulong)uVar17;
          uVar22 = *puVar34 * -0x30e4432345000000 >> (uVar11 & 0x3f);
          uVar12 = (int)puVar42 - iVar31;
          *(uint *)(lVar28 + uVar13 * 4) = uVar12;
          piVar24 = (int *)&UNK_01add8a4;
          if (uVar6 <= uVar17) {
            piVar24 = (int *)(lVar32 + uVar40);
          }
          if (((int)*puVar42 == *piVar24) && (uVar13 = uVar22, uVar6 <= uVar17)) goto LAB_002b1dcc;
          uVar40 = (ulong)*(uint *)(lVar28 + uVar22 * 4);
          uVar13 = *puVar29;
          puVar39 = (ulong *)((long)puVar34 + uVar23);
          uVar38 = uVar23;
          if (puVar14 <= puVar39) {
            Hint_Prefetch(puVar29 + 8,0,0,0);
            Hint_Prefetch(puVar29 + 0x10,0,0,0);
            puVar14 = puVar14 + 0x10;
// unlicensed copy if this notice is missing
            uVar38 = uVar23 + 1;
          }
          puVar9 = (ulong *)((long)puVar29 + uVar23);
          puVar42 = puVar29;
          uVar23 = uVar38;
          puVar30 = puVar34;
          puVar34 = puVar39;
          puVar29 = puVar9;
          if (puVar33 <= puVar9) goto LAB_002b3cc0;
        }
        bVar10 = *(char *)((long)puVar34 - 1) == *(char *)((long)puVar34 + lVar15 + -1);
        uVar23 = (ulong)bVar10;
        lVar41 = 4;
        if (bVar10) {
          lVar41 = 5;
        }
        puVar30 = (ulong *)((long)puVar34 - uVar23);
        puVar34 = (ulong *)((long)puVar34 + (lVar15 - uVar23));
        *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
        iVar37 = 1;
        puVar29 = (ulong *)((long)puVar34 + lVar41);
        puVar14 = (ulong *)((long)puVar30 + lVar41);
        uVar17 = uVar19;
        goto joined_r0x002b1cf8;
/* chat: discord.gg/sdkhDjTex */
      }
    }
    else if (iVar37 == 6) {
      if (puVar29 < puVar33) {
        uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
        puVar36 = (ulong *)((long)puVar2 - 7);
        puVar21 = puVar2 + -4;
LAB_002b0a28:
        puVar42 = (ulong *)((long)puVar30 + 1);
        uVar13 = *puVar42;
        puVar14 = puVar30 + 0x10;
        uVar22 = *puVar30 * -0x30e4432340650000 >> (uVar11 & 0x3f);
        uVar40 = (ulong)*(uint *)(lVar28 + uVar22 * 4);
        lVar15 = -(ulong)uVar19;
        uVar23 = uVar35;
        if (uVar19 == 0) {
          do {
            uVar13 = uVar13 * -0x30e4432340650000 >> (uVar11 & 0x3f);
            uVar12 = (int)puVar30 - iVar31;
/*  proprietary - see LICENSE - do not sell  */
            *(uint *)(lVar28 + uVar22 * 4) = uVar12;
            piVar24 = (int *)&UNK_01add8a4;
            if (uVar6 <= (uint)uVar40) {
              piVar24 = (int *)(lVar32 + uVar40);
            }
            if (((int)*puVar30 == *piVar24) && (uVar6 <= (uint)uVar40)) goto LAB_002b0c6c;
            uVar17 = *(uint *)(lVar28 + uVar13 * 4);
            uVar40 = (ulong)uVar17;
            uVar22 = *puVar34 * -0x30e4432340650000 >> (uVar11 & 0x3f);
            uVar12 = (int)puVar42 - iVar31;
            *(uint *)(lVar28 + uVar13 * 4) = uVar12;
            piVar24 = (int *)&UNK_01add8a4;
            if (uVar6 <= uVar17) {
              piVar24 = (int *)(lVar32 + uVar40);
            }
            if ((int)*puVar42 == *piVar24) {
              uVar13 = uVar22;
              puVar30 = puVar42;
              puVar42 = puVar34;
              if (uVar6 <= uVar17) goto LAB_002b0c58;
            }
            uVar40 = (ulong)*(uint *)(lVar28 + uVar22 * 4);
            uVar13 = *puVar29;
            puVar42 = (ulong *)((long)puVar34 + uVar23);
            uVar38 = uVar23;
            if (puVar14 <= puVar42) {
              Hint_Prefetch(puVar29 + 8,0,0,0);
              Hint_Prefetch(puVar29 + 0x10,0,0,0);
              puVar14 = puVar14 + 0x10;
              uVar38 = uVar23 + 1;
            }
            puVar39 = (ulong *)((long)puVar29 + uVar23);
            uVar23 = uVar38;
            puVar30 = puVar34;
            puVar34 = puVar42;
            puVar42 = puVar29;
            puVar29 = puVar39;
            if (puVar33 <= puVar39) goto LAB_002b3cb8;
/* no support for modified copies - github.com/pengussy */
          } while( true );
        }
        while( true ) {
          iVar37 = *(int *)((long)puVar34 + lVar15);
          uVar13 = uVar13 * -0x30e4432340650000 >> (uVar11 & 0x3f);
          uVar12 = (int)puVar30 - iVar31;
          *(uint *)(lVar28 + uVar22 * 4) = uVar12;
          if ((int)*puVar34 == iVar37) break;
          piVar24 = (int *)&UNK_01add8a4;
          if (uVar6 <= (uint)uVar40) {
            piVar24 = (int *)(lVar32 + uVar40);
          }
          if (((int)*puVar30 == *piVar24) && (uVar6 <= (uint)uVar40)) goto LAB_002b0c6c;
          uVar17 = *(uint *)(lVar28 + uVar13 * 4);
          uVar40 = (ulong)uVar17;
          uVar22 = *puVar34 * -0x30e4432340650000 >> (uVar11 & 0x3f);
// more drops soon - github.com/pengussy
          uVar12 = (int)puVar42 - iVar31;
          *(uint *)(lVar28 + uVar13 * 4) = uVar12;
          piVar24 = (int *)&UNK_01add8a4;
          if (uVar6 <= uVar17) {
            piVar24 = (int *)(lVar32 + uVar40);
          }
          if ((int)*puVar42 == *piVar24) {
            uVar13 = uVar22;
            puVar30 = puVar42;
            puVar42 = puVar34;
            if (uVar6 <= uVar17) goto LAB_002b0c58;
          }
          uVar40 = (ulong)*(uint *)(lVar28 + uVar22 * 4);
          uVar13 = *puVar29;
          puVar42 = (ulong *)((long)puVar34 + uVar23);
          uVar38 = uVar23;
          if (puVar14 <= puVar42) {
            Hint_Prefetch(puVar29 + 8,0,0,0);
            Hint_Prefetch(puVar29 + 0x10,0,0,0);
            puVar14 = puVar14 + 0x10;
            uVar38 = uVar23 + 1;
          }
          puVar39 = (ulong *)((long)puVar29 + uVar23);
          uVar23 = uVar38;
          puVar30 = puVar34;
          puVar34 = puVar42;
          puVar42 = puVar29;
          puVar29 = puVar39;
          if (puVar33 <= puVar39) goto LAB_002b3cc0;
        }
        bVar10 = *(char *)((long)puVar34 - 1) == *(char *)((long)puVar34 + lVar15 + -1);
        uVar23 = (ulong)bVar10;
        lVar41 = 4;
        if (bVar10) {
          lVar41 = 5;
        }
/* wm:stripping the watermark breaks the license */
        puVar30 = (ulong *)((long)puVar34 - uVar23);
        puVar34 = (ulong *)((long)puVar34 + (lVar15 - uVar23));
        *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
        iVar37 = 1;
        goto LAB_002b0d18;
      }
    }
    else if (iVar37 == 7) {
      if (puVar29 < puVar33) {
        uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
        puVar36 = (ulong *)((long)puVar2 - 7);
        puVar21 = puVar2 + -4;
LAB_002af940:
        puVar42 = (ulong *)((long)puVar30 + 1);
        uVar22 = *puVar42;
        puVar14 = puVar30 + 0x10;
        uVar13 = *puVar30 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
        uVar40 = (ulong)*(uint *)(lVar28 + uVar13 * 4);
        lVar15 = -(ulong)uVar19;
        uVar23 = uVar35;
        if (uVar19 == 0) {
          while( true ) {
            puVar39 = puVar29;
            uVar22 = uVar22 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
            uVar12 = (int)puVar30 - iVar31;
            *(uint *)(lVar28 + uVar13 * 4) = uVar12;
            piVar24 = (int *)&UNK_01add8a4;
            if (uVar6 <= (uint)uVar40) {
              piVar24 = (int *)(lVar32 + uVar40);
            }
            if (((int)*puVar30 == *piVar24) && (uVar6 <= (uint)uVar40)) goto LAB_002afb6c;
            uVar17 = *(uint *)(lVar28 + uVar22 * 4);
            uVar40 = (ulong)uVar17;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
            uVar13 = *puVar34 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
            uVar12 = (int)puVar42 - iVar31;
            *(uint *)(lVar28 + uVar22 * 4) = uVar12;
            piVar24 = (int *)&UNK_01add8a4;
            if (uVar6 <= uVar17) {
              piVar24 = (int *)(lVar32 + uVar40);
            }
            if (((int)*puVar42 == *piVar24) && (puVar30 = puVar42, uVar6 <= uVar17)) break;
            uVar40 = (ulong)*(uint *)(lVar28 + uVar13 * 4);
            uVar22 = *puVar39;
            puVar42 = (ulong *)((long)puVar34 + uVar23);
            uVar38 = uVar23;
            if (puVar14 <= puVar42) {
              Hint_Prefetch(puVar39 + 8,0,0,0);
              Hint_Prefetch(puVar39 + 0x10,0,0,0);
              puVar14 = puVar14 + 0x10;
              uVar38 = uVar23 + 1;
            }
            puVar29 = (ulong *)((long)puVar39 + uVar23);
/* unlicensed copy if this notice is missing */
            uVar23 = uVar38;
            puVar30 = puVar34;
            puVar34 = puVar42;
            puVar42 = puVar39;
            if (puVar33 <= puVar29) goto LAB_002b3cb8;
          }
LAB_002afb78:
          iVar37 = (int)puVar34;
          uVar22 = uVar13;
          if (uVar23 < 5) goto LAB_002afb90;
          goto LAB_002afb98;
        }
        while( true ) {
          puVar39 = puVar29;
          iVar37 = *(int *)((long)puVar34 + lVar15);
          uVar22 = uVar22 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
          uVar12 = (int)puVar30 - iVar31;
          *(uint *)(lVar28 + uVar13 * 4) = uVar12;
          if ((int)*puVar34 == iVar37) break;
          piVar24 = (int *)&UNK_01add8a4;
          if (uVar6 <= (uint)uVar40) {
            piVar24 = (int *)(lVar32 + uVar40);
          }
          if (((int)*puVar30 == *piVar24) && (uVar6 <= (uint)uVar40)) goto LAB_002afb6c;
          uVar17 = *(uint *)(lVar28 + uVar22 * 4);
          uVar40 = (ulong)uVar17;
          uVar13 = *puVar34 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
          uVar12 = (int)puVar42 - iVar31;
          *(uint *)(lVar28 + uVar22 * 4) = uVar12;
          piVar24 = (int *)&UNK_01add8a4;
/* thanks for reading - discord.gg/sdkhDjTex */
          if (uVar6 <= uVar17) {
            piVar24 = (int *)(lVar32 + uVar40);
          }
          if (((int)*puVar42 == *piVar24) && (puVar30 = puVar42, uVar6 <= uVar17))
          goto LAB_002afb78;
          uVar40 = (ulong)*(uint *)(lVar28 + uVar13 * 4);
          uVar22 = *puVar39;
          puVar42 = (ulong *)((long)puVar34 + uVar23);
          uVar38 = uVar23;
          if (puVar14 <= puVar42) {
            Hint_Prefetch(puVar39 + 8,0,0,0);
            Hint_Prefetch(puVar39 + 0x10,0,0,0);
            puVar14 = puVar14 + 0x10;
            uVar38 = uVar23 + 1;
          }
          puVar29 = (ulong *)((long)puVar39 + uVar23);
          uVar23 = uVar38;
          puVar30 = puVar34;
          puVar34 = puVar42;
          puVar42 = puVar39;
          if (puVar33 <= puVar29) goto LAB_002b3cc0;
        }
        bVar10 = *(char *)((long)puVar34 - 1) == *(char *)((long)puVar34 + lVar15 + -1);
        uVar23 = (ulong)bVar10;
        lVar41 = 4;
        if (bVar10) {
          lVar41 = 5;
        }
        puVar30 = (ulong *)((long)puVar34 - uVar23);
        puVar34 = (ulong *)((long)puVar34 + (lVar15 - uVar23));
        *(int *)(lVar28 + uVar22 * 4) = (int)puVar42 - iVar31;
        iVar37 = 1;
        goto LAB_002afc38;
      }
    }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    else if (puVar29 < puVar33) {
      uVar12 = 0x20 - *(int *)(param_1 + 0x108);
      puVar36 = (ulong *)((long)puVar2 - 7);
      puVar21 = puVar2 + -4;
LAB_002b2b98:
      puVar42 = (ulong *)((long)puVar30 + 1);
      iVar37 = *(int *)puVar42;
      puVar14 = puVar30 + 0x10;
      uVar13 = (ulong)((uint)((int)*puVar30 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
      uVar23 = (ulong)*(uint *)(lVar28 + uVar13 * 4);
      lVar15 = -(ulong)uVar19;
      uVar11 = uVar35;
      if (uVar19 == 0) {
        do {
          uVar22 = (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
          uVar17 = (int)puVar30 - iVar31;
          *(uint *)(lVar28 + uVar13 * 4) = uVar17;
          piVar24 = (int *)&UNK_01add8a4;
          if (uVar6 <= (uint)uVar23) {
            piVar24 = (int *)(lVar32 + uVar23);
          }
          if (((int)*puVar30 == *piVar24) && (uVar6 <= (uint)uVar23)) goto LAB_002b2e2c;
          uVar18 = *(uint *)(lVar28 + uVar22 * 4);
          uVar23 = (ulong)uVar18;
          uVar13 = (ulong)((uint)((int)*puVar34 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
          uVar17 = (int)puVar42 - iVar31;
// origin: github.com/pengussy
          *(uint *)(lVar28 + uVar22 * 4) = uVar17;
          piVar24 = (int *)&UNK_01add8a4;
          if (uVar6 <= uVar18) {
            piVar24 = (int *)(lVar32 + uVar23);
          }
          if ((int)*puVar42 == *piVar24) {
            puVar30 = puVar42;
            uVar22 = uVar13;
            if (uVar6 <= uVar18) goto LAB_002b2e90;
          }
          uVar23 = (ulong)*(uint *)(lVar28 + uVar13 * 4);
          iVar37 = (int)*puVar29;
          puVar42 = (ulong *)((long)puVar34 + uVar11);
          uVar22 = uVar11;
          if (puVar14 <= puVar42) {
            Hint_Prefetch(puVar29 + 8,0,0,0);
            Hint_Prefetch(puVar29 + 0x10,0,0,0);
            puVar14 = puVar14 + 0x10;
            uVar22 = uVar11 + 1;
          }
          puVar39 = (ulong *)((long)puVar29 + uVar11);
          uVar11 = uVar22;
          puVar30 = puVar34;
          puVar34 = puVar42;
          puVar42 = puVar29;
          puVar29 = puVar39;
          if (puVar33 <= puVar39) goto LAB_002b3cb8;
        } while( true );
      }
      while( true ) {
        iVar26 = *(int *)((long)puVar34 + lVar15);
        uVar22 = (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
        uVar17 = (int)puVar30 - iVar31;
        *(uint *)(lVar28 + uVar13 * 4) = uVar17;
        iVar37 = (int)*puVar34;
        if (iVar37 == iVar26) break;
        piVar24 = (int *)&UNK_01add8a4;
        if (uVar6 <= (uint)uVar23) {
/* reversing this took months of machine time - github.com/pengussy */
          piVar24 = (int *)(lVar32 + uVar23);
        }
        if ((int)*puVar30 == *piVar24) {
          if (uVar6 <= (uint)uVar23) goto LAB_002b2e2c;
          iVar37 = (int)*puVar34;
        }
        uVar18 = *(uint *)(lVar28 + uVar22 * 4);
        uVar23 = (ulong)uVar18;
        uVar13 = (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
        uVar17 = (int)puVar42 - iVar31;
        *(uint *)(lVar28 + uVar22 * 4) = uVar17;
        piVar24 = (int *)&UNK_01add8a4;
        if (uVar6 <= uVar18) {
          piVar24 = (int *)(lVar32 + uVar23);
        }
        if ((int)*puVar42 == *piVar24) {
          puVar30 = puVar42;
          uVar22 = uVar13;
          if (uVar6 <= uVar18) goto LAB_002b2e90;
        }
        uVar23 = (ulong)*(uint *)(lVar28 + uVar13 * 4);
        iVar37 = (int)*puVar29;
        puVar42 = (ulong *)((long)puVar34 + uVar11);
        uVar22 = uVar11;
        if (puVar14 <= puVar42) {
          Hint_Prefetch(puVar29 + 8,0,0,0);
          Hint_Prefetch(puVar29 + 0x10,0,0,0);
          puVar14 = puVar14 + 0x10;
          uVar22 = uVar11 + 1;
        }
        puVar39 = (ulong *)((long)puVar29 + uVar11);
        uVar11 = uVar22;
        puVar30 = puVar34;
        puVar34 = puVar42;
/* wm:proprietary - see LICENSE - do not sell */
        puVar42 = puVar29;
        puVar29 = puVar39;
        if (puVar33 <= puVar39) goto LAB_002b3cc0;
      }
      bVar10 = *(char *)((long)puVar34 - 1) == *(char *)((long)puVar34 + lVar15 + -1);
      uVar11 = (ulong)bVar10;
      lVar41 = 4;
      if (bVar10) {
        lVar41 = 5;
      }
      puVar30 = (ulong *)((long)puVar34 - uVar11);
      puVar34 = (ulong *)((long)puVar34 + (lVar15 - uVar11));
      *(int *)(lVar28 + uVar22 * 4) = (int)puVar42 - iVar31;
      iVar37 = 1;
      puVar29 = (ulong *)((long)puVar34 + lVar41);
      puVar14 = (ulong *)((long)puVar30 + lVar41);
      uVar18 = uVar19;
      goto joined_r0x002b2dc4;
    }
  }
  else if (iVar37 == 5) {
    if (puVar29 < puVar33) {
      uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
      puVar36 = (ulong *)((long)puVar2 - 7);
      puVar21 = puVar2 + -4;
LAB_002b235c:
      puVar42 = (ulong *)((long)puVar30 + 1);
      uVar13 = *puVar42;
      puVar14 = puVar30 + 0x10;
      uVar22 = *puVar30 * -0x30e4432345000000 >> (uVar11 & 0x3f);
      uVar12 = *(uint *)(lVar28 + uVar22 * 4);
      lVar15 = -(ulong)uVar19;
      uVar23 = uVar35;
      if (uVar19 == 0) {
        do {
          uVar13 = uVar13 * -0x30e4432345000000 >> (uVar11 & 0x3f);
/* WM - do not claim this as your own */
          uVar17 = (int)puVar30 - iVar31;
          *(uint *)(lVar28 + uVar22 * 4) = uVar17;
          if ((uVar6 <= uVar12) && ((int)*puVar30 == *(int *)(lVar32 + (ulong)uVar12)))
          goto LAB_002b25c8;
          uVar12 = *(uint *)(lVar28 + uVar13 * 4);
          uVar22 = *puVar34 * -0x30e4432345000000 >> (uVar11 & 0x3f);
          uVar17 = (int)puVar42 - iVar31;
          *(uint *)(lVar28 + uVar13 * 4) = uVar17;
          if (uVar6 <= uVar12) {
            puVar30 = puVar42;
            uVar13 = uVar22;
            if ((int)*puVar42 == *(int *)(lVar32 + (ulong)uVar12)) goto LAB_002b25b4;
          }
          uVar12 = *(uint *)(lVar28 + uVar22 * 4);
          uVar13 = *puVar29;
          puVar42 = (ulong *)((long)puVar34 + uVar23);
          uVar40 = uVar23;
          if (puVar14 <= puVar42) {
            Hint_Prefetch(puVar29 + 8,0,0,0);
            Hint_Prefetch(puVar29 + 0x10,0,0,0);
            puVar14 = puVar14 + 0x10;
            uVar40 = uVar23 + 1;
          }
          puVar39 = (ulong *)((long)puVar29 + uVar23);
          uVar23 = uVar40;
          puVar30 = puVar34;
          puVar34 = puVar42;
          puVar42 = puVar29;
          puVar29 = puVar39;
          if (puVar33 <= puVar39) goto LAB_002b3cb8;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        } while( true );
      }
      while( true ) {
        iVar37 = *(int *)((long)puVar34 + lVar15);
        uVar13 = uVar13 * -0x30e4432345000000 >> (uVar11 & 0x3f);
        uVar17 = (int)puVar30 - iVar31;
        *(uint *)(lVar28 + uVar22 * 4) = uVar17;
        if ((int)*puVar34 == iVar37) break;
        if ((uVar6 <= uVar12) && ((int)*puVar30 == *(int *)(lVar32 + (ulong)uVar12)))
        goto LAB_002b25c8;
        uVar12 = *(uint *)(lVar28 + uVar13 * 4);
        uVar22 = *puVar34 * -0x30e4432345000000 >> (uVar11 & 0x3f);
        uVar17 = (int)puVar42 - iVar31;
        *(uint *)(lVar28 + uVar13 * 4) = uVar17;
        if (uVar6 <= uVar12) {
          puVar30 = puVar42;
          uVar13 = uVar22;
          if ((int)*puVar42 == *(int *)(lVar32 + (ulong)uVar12)) goto LAB_002b25b4;
        }
        uVar12 = *(uint *)(lVar28 + uVar22 * 4);
        uVar13 = *puVar29;
        puVar42 = (ulong *)((long)puVar34 + uVar23);
        uVar40 = uVar23;
        if (puVar14 <= puVar42) {
          Hint_Prefetch(puVar29 + 8,0,0,0);
          Hint_Prefetch(puVar29 + 0x10,0,0,0);
          puVar14 = puVar14 + 0x10;
          uVar40 = uVar23 + 1;
        }
        puVar39 = (ulong *)((long)puVar29 + uVar23);
        uVar23 = uVar40;
        puVar30 = puVar34;
        puVar34 = puVar42;
        puVar42 = puVar29;
        puVar29 = puVar39;
        if (puVar33 <= puVar39) goto LAB_002b3cc0;
      }
// WM - reversing this took months of machine time
      bVar10 = *(char *)((long)puVar34 - 1) == *(char *)((long)puVar34 + lVar15 + -1);
      uVar23 = (ulong)bVar10;
      lVar41 = 4;
      if (bVar10) {
        lVar41 = 5;
      }
      puVar30 = (ulong *)((long)puVar34 - uVar23);
      puVar34 = (ulong *)((long)puVar34 + (lVar15 - uVar23));
      *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
      iVar37 = 1;
      puVar29 = (ulong *)((long)puVar34 + lVar41);
      puVar14 = (ulong *)((long)puVar30 + lVar41);
      uVar18 = uVar19;
      goto joined_r0x002b254c;
    }
  }
  else if (iVar37 == 6) {
    if (puVar29 < puVar33) {
      uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
      puVar36 = (ulong *)((long)puVar2 - 7);
      puVar21 = puVar2 + -4;
LAB_002b1284:
// if you paid for this, you were scammed
      puVar42 = (ulong *)((long)puVar30 + 1);
      uVar13 = *puVar42;
      puVar14 = puVar30 + 0x10;
      uVar22 = *puVar30 * -0x30e4432340650000 >> (uVar11 & 0x3f);
      uVar12 = *(uint *)(lVar28 + uVar22 * 4);
      lVar15 = -(ulong)uVar19;
      uVar23 = uVar35;
      if (uVar19 == 0) {
        do {
          uVar13 = uVar13 * -0x30e4432340650000 >> (uVar11 & 0x3f);
          uVar17 = (int)puVar30 - iVar31;
          *(uint *)(lVar28 + uVar22 * 4) = uVar17;
          if ((uVar6 <= uVar12) && ((int)*puVar30 == *(int *)(lVar32 + (ulong)uVar12)))
          goto LAB_002b14f0;
          uVar12 = *(uint *)(lVar28 + uVar13 * 4);
          uVar22 = *puVar34 * -0x30e4432340650000 >> (uVar11 & 0x3f);
          uVar17 = (int)puVar42 - iVar31;
          *(uint *)(lVar28 + uVar13 * 4) = uVar17;
          if (uVar6 <= uVar12) {
            puVar30 = puVar42;
            uVar13 = uVar22;
            if ((int)*puVar42 == *(int *)(lVar32 + (ulong)uVar12)) goto LAB_002b14dc;
          }
          uVar12 = *(uint *)(lVar28 + uVar22 * 4);
          uVar13 = *puVar29;
          puVar42 = (ulong *)((long)puVar34 + uVar23);
          uVar40 = uVar23;
          if (puVar14 <= puVar42) {
            Hint_Prefetch(puVar29 + 8,0,0,0);
            Hint_Prefetch(puVar29 + 0x10,0,0,0);
            puVar14 = puVar14 + 0x10;
            uVar40 = uVar23 + 1;
          }
/* wm:unlicensed copy if this notice is missing */
          puVar39 = (ulong *)((long)puVar29 + uVar23);
          uVar23 = uVar40;
          puVar30 = puVar34;
          puVar34 = puVar42;
          puVar42 = puVar29;
          puVar29 = puVar39;
          if (puVar33 <= puVar39) goto LAB_002b3cb8;
        } while( true );
      }
      while( true ) {
        iVar37 = *(int *)((long)puVar34 + lVar15);
        uVar13 = uVar13 * -0x30e4432340650000 >> (uVar11 & 0x3f);
        uVar17 = (int)puVar30 - iVar31;
        *(uint *)(lVar28 + uVar22 * 4) = uVar17;
        if ((int)*puVar34 == iVar37) break;
        if ((uVar6 <= uVar12) && ((int)*puVar30 == *(int *)(lVar32 + (ulong)uVar12)))
        goto LAB_002b14f0;
        uVar12 = *(uint *)(lVar28 + uVar13 * 4);
        uVar22 = *puVar34 * -0x30e4432340650000 >> (uVar11 & 0x3f);
        uVar17 = (int)puVar42 - iVar31;
        *(uint *)(lVar28 + uVar13 * 4) = uVar17;
        if (uVar6 <= uVar12) {
          puVar30 = puVar42;
          uVar13 = uVar22;
          if ((int)*puVar42 == *(int *)(lVar32 + (ulong)uVar12)) goto LAB_002b14dc;
        }
        uVar12 = *(uint *)(lVar28 + uVar22 * 4);
        uVar13 = *puVar29;
        puVar42 = (ulong *)((long)puVar34 + uVar23);
        uVar40 = uVar23;
        if (puVar14 <= puVar42) {
          Hint_Prefetch(puVar29 + 8,0,0,0);
          Hint_Prefetch(puVar29 + 0x10,0,0,0);
          puVar14 = puVar14 + 0x10;
          uVar40 = uVar23 + 1;
/* origin: github.com/pengussy */
        }
        puVar39 = (ulong *)((long)puVar29 + uVar23);
        uVar23 = uVar40;
        puVar30 = puVar34;
        puVar34 = puVar42;
        puVar42 = puVar29;
        puVar29 = puVar39;
        if (puVar33 <= puVar39) goto LAB_002b3cc0;
      }
      bVar10 = *(char *)((long)puVar34 - 1) == *(char *)((long)puVar34 + lVar15 + -1);
      uVar23 = (ulong)bVar10;
      lVar41 = 4;
      if (bVar10) {
        lVar41 = 5;
      }
      puVar30 = (ulong *)((long)puVar34 - uVar23);
      puVar34 = (ulong *)((long)puVar34 + (lVar15 - uVar23));
      *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
      iVar37 = 1;
      puVar29 = (ulong *)((long)puVar34 + lVar41);
      puVar14 = (ulong *)((long)puVar30 + lVar41);
      uVar18 = uVar19;
      goto joined_r0x002b1474;
    }
  }
  else if (iVar37 == 7) {
    if (puVar29 < puVar33) {
      uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
      puVar36 = (ulong *)((long)puVar2 - 7);
      puVar21 = puVar2 + -4;
LAB_002b01e4:
/* reversing this took months of machine time */
      puVar42 = (ulong *)((long)puVar30 + 1);
      uVar13 = *puVar42;
      puVar14 = puVar30 + 0x10;
      uVar22 = *puVar30 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
      uVar12 = *(uint *)(lVar28 + uVar22 * 4);
      lVar15 = -(ulong)uVar19;
      uVar23 = uVar35;
      if (uVar19 == 0) {
        do {
          uVar13 = uVar13 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
          uVar17 = (int)puVar30 - iVar31;
          *(uint *)(lVar28 + uVar22 * 4) = uVar17;
          if ((uVar6 <= uVar12) && ((int)*puVar30 == *(int *)(lVar32 + (ulong)uVar12)))
          goto LAB_002b0450;
          uVar12 = *(uint *)(lVar28 + uVar13 * 4);
          uVar22 = *puVar34 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
          uVar17 = (int)puVar42 - iVar31;
          *(uint *)(lVar28 + uVar13 * 4) = uVar17;
          if (uVar6 <= uVar12) {
// found on a paste site? it was re-uploaded illegally
            puVar30 = puVar42;
            uVar13 = uVar22;
            if ((int)*puVar42 == *(int *)(lVar32 + (ulong)uVar12)) goto LAB_002b043c;
          }
          uVar12 = *(uint *)(lVar28 + uVar22 * 4);
          uVar13 = *puVar29;
          puVar42 = (ulong *)((long)puVar34 + uVar23);
          uVar40 = uVar23;
          if (puVar14 <= puVar42) {
            Hint_Prefetch(puVar29 + 8,0,0,0);
            Hint_Prefetch(puVar29 + 0x10,0,0,0);
            puVar14 = puVar14 + 0x10;
            uVar40 = uVar23 + 1;
          }
          puVar39 = (ulong *)((long)puVar29 + uVar23);
          uVar23 = uVar40;
          puVar30 = puVar34;
          puVar34 = puVar42;
          puVar42 = puVar29;
          puVar29 = puVar39;
          if (puVar33 <= puVar39) goto LAB_002b3cb8;
        } while( true );
      }
      while( true ) {
        iVar37 = *(int *)((long)puVar34 + lVar15);
        uVar13 = uVar13 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
        uVar17 = (int)puVar30 - iVar31;
        *(uint *)(lVar28 + uVar22 * 4) = uVar17;
        if ((int)*puVar34 == iVar37) break;
        if ((uVar6 <= uVar12) && ((int)*puVar30 == *(int *)(lVar32 + (ulong)uVar12)))
        goto LAB_002b0450;
        uVar12 = *(uint *)(lVar28 + uVar13 * 4);
        uVar22 = *puVar34 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
        uVar17 = (int)puVar42 - iVar31;
        *(uint *)(lVar28 + uVar13 * 4) = uVar17;
        if (uVar6 <= uVar12) {
          puVar30 = puVar42;
// no support for modified copies
          uVar13 = uVar22;
          if ((int)*puVar42 == *(int *)(lVar32 + (ulong)uVar12)) goto LAB_002b043c;
        }
        uVar12 = *(uint *)(lVar28 + uVar22 * 4);
        uVar13 = *puVar29;
        puVar42 = (ulong *)((long)puVar34 + uVar23);
        uVar40 = uVar23;
        if (puVar14 <= puVar42) {
          Hint_Prefetch(puVar29 + 8,0,0,0);
          Hint_Prefetch(puVar29 + 0x10,0,0,0);
          puVar14 = puVar14 + 0x10;
          uVar40 = uVar23 + 1;
        }
        puVar39 = (ulong *)((long)puVar29 + uVar23);
        uVar23 = uVar40;
        puVar30 = puVar34;
        puVar34 = puVar42;
        puVar42 = puVar29;
        puVar29 = puVar39;
        if (puVar33 <= puVar39) goto LAB_002b3cc0;
      }
      bVar10 = *(char *)((long)puVar34 - 1) == *(char *)((long)puVar34 + lVar15 + -1);
      uVar23 = (ulong)bVar10;
      lVar41 = 4;
      if (bVar10) {
        lVar41 = 5;
      }
      puVar30 = (ulong *)((long)puVar34 - uVar23);
      puVar34 = (ulong *)((long)puVar34 + (lVar15 - uVar23));
// stripping the watermark breaks the license
      *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
      iVar37 = 1;
      puVar29 = (ulong *)((long)puVar34 + lVar41);
      puVar14 = (ulong *)((long)puVar30 + lVar41);
      uVar18 = uVar19;
      goto joined_r0x002b03d4;
    }
  }
  else if (puVar29 < puVar33) {
    uVar12 = 0x20 - *(int *)(param_1 + 0x108);
    puVar36 = (ulong *)((long)puVar2 - 7);
    puVar21 = puVar2 + -4;
LAB_002b3458:
    puVar42 = (ulong *)((long)puVar30 + 1);
    iVar37 = *(int *)puVar42;
    puVar14 = puVar30 + 0x10;
    uVar23 = (ulong)((uint)((int)*puVar30 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
    uVar17 = *(uint *)(lVar28 + uVar23 * 4);
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    lVar15 = -(ulong)uVar19;
    uVar11 = uVar35;
    if (uVar19 == 0) {
      do {
        uVar13 = (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
        uVar18 = (int)puVar30 - iVar31;
        *(uint *)(lVar28 + uVar23 * 4) = uVar18;
        if ((uVar6 <= uVar17) && ((int)*puVar30 == *(int *)(lVar32 + (ulong)uVar17)))
        goto LAB_002b3734;
        uVar17 = *(uint *)(lVar28 + uVar13 * 4);
        uVar23 = (ulong)((uint)((int)*puVar34 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
        uVar18 = (int)puVar42 - iVar31;
        *(uint *)(lVar28 + uVar13 * 4) = uVar18;
        if (uVar6 <= uVar17) {
          puVar30 = puVar42;
          uVar13 = uVar23;
          if ((int)*puVar42 == *(int *)(lVar32 + (ulong)uVar17)) goto LAB_002b3720;
        }
        uVar17 = *(uint *)(lVar28 + uVar23 * 4);
        iVar37 = (int)*puVar29;
        puVar42 = (ulong *)((long)puVar34 + uVar11);
/*  thanks for reading - discord.gg/sdkhDjTex  */
        uVar13 = uVar11;
        if (puVar14 <= puVar42) {
          Hint_Prefetch(puVar29 + 8,0,0,0);
          Hint_Prefetch(puVar29 + 0x10,0,0,0);
          puVar14 = puVar14 + 0x10;
          uVar13 = uVar11 + 1;
        }
        puVar39 = (ulong *)((long)puVar29 + uVar11);
        uVar11 = uVar13;
        puVar30 = puVar34;
        puVar34 = puVar42;
        puVar42 = puVar29;
        puVar29 = puVar39;
        if (puVar33 <= puVar39) goto LAB_002b3cb8;
      } while( true );
    }
    while( true ) {
      iVar26 = *(int *)((long)puVar34 + lVar15);
      uVar13 = (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
      uVar18 = (int)puVar30 - iVar31;
      *(uint *)(lVar28 + uVar23 * 4) = uVar18;
      if ((int)*puVar34 == iVar26) break;
      if ((uVar6 <= uVar17) && ((int)*puVar30 == *(int *)(lVar32 + (ulong)uVar17)))
      goto LAB_002b3734;
      uVar17 = *(uint *)(lVar28 + uVar13 * 4);
      uVar23 = (ulong)((uint)((int)*puVar34 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f));
      uVar18 = (int)puVar42 - iVar31;
      *(uint *)(lVar28 + uVar13 * 4) = uVar18;
      if (uVar6 <= uVar17) {
        puVar30 = puVar42;
        uVar13 = uVar23;
        if ((int)*puVar42 == *(int *)(lVar32 + (ulong)uVar17)) goto LAB_002b3720;
      }
      uVar17 = *(uint *)(lVar28 + uVar23 * 4);
      iVar37 = (int)*puVar29;
      puVar42 = (ulong *)((long)puVar34 + uVar11);
      uVar13 = uVar11;
/*  donate: donate/README.md  */
      if (puVar14 <= puVar42) {
        Hint_Prefetch(puVar29 + 8,0,0,0);
        Hint_Prefetch(puVar29 + 0x10,0,0,0);
        puVar14 = puVar14 + 0x10;
        uVar13 = uVar11 + 1;
      }
      puVar39 = (ulong *)((long)puVar29 + uVar11);
      uVar11 = uVar13;
      puVar30 = puVar34;
      puVar34 = puVar42;
      puVar42 = puVar29;
      puVar29 = puVar39;
      if (puVar33 <= puVar39) goto LAB_002b3cc0;
    }
    bVar10 = *(char *)((long)puVar34 - 1) == *(char *)((long)puVar34 + lVar15 + -1);
    uVar11 = (ulong)bVar10;
    lVar41 = 4;
    if (bVar10) {
      lVar41 = 5;
    }
    puVar30 = (ulong *)((long)puVar34 - uVar11);
    puVar34 = (ulong *)((long)puVar34 + (lVar15 - uVar11));
/* if you paid for this, you were scammed - github.com/pengussy */
    *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
    iVar37 = 1;
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar14 = (ulong *)((long)puVar30 + lVar41);
    uVar20 = uVar19;
    goto joined_r0x002b3650;
  }
LAB_002b3cc0:
  uVar6 = uVar4;
  if (uVar4 <= uVar8) {
    uVar6 = 0;
  }
  if (uVar5 <= uVar8) {
    uVar5 = 0;
  }
  if (uVar19 != 0) {
    uVar6 = uVar19;
  }
  if (uVar19 == 0 || uVar4 <= uVar8) {
    uVar4 = uVar5;
  }
  if (uVar16 != 0) {
    uVar4 = uVar16;
  }
  *param_3 = uVar6;
  param_3[1] = uVar4;
  return (long)puVar2 - (long)param_4;
LAB_002b1dc0:
  iVar37 = (int)puVar42;
LAB_002b1de4:
  *(int *)(lVar28 + uVar13 * 4) = iVar37 - iVar31;
LAB_002b1dec:
  puVar34 = (ulong *)(lVar32 + uVar40);
  uVar17 = (int)puVar30 - (int)puVar34;
  iVar37 = uVar17 + 3;
  if ((uVar6 < (uint)uVar40) && (param_4 < puVar30)) {
    lVar41 = 4;
    puVar29 = (ulong *)(lVar32 + -1 + uVar40);
// WM - watermarked copy - do not remove
    while( true ) {
      puVar34 = puVar29;
      puVar29 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar29 != (char)*puVar34) break;
      lVar41 = lVar41 + 1;
      puVar30 = puVar29;
      if ((puVar29 <= param_4) || (puVar29 = (ulong *)((long)puVar34 + -1), puVar34 <= puVar3))
      goto LAB_002b1f88;
    }
    puVar34 = (ulong *)((long)puVar34 + 1);
LAB_002b1f88:
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar14 = (ulong *)((long)puVar30 + lVar41);
    if (puVar14 < puVar36) goto LAB_002b1cfc;
LAB_002b1e7c:
    puVar34 = puVar14;
LAB_002b1e80:
    if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
      if ((int)*puVar29 == (int)*puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 4);
// thanks for reading - discord.gg/sdkhDjTex
        puVar34 = (ulong *)((long)puVar34 + 4);
      }
    }
    if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
      if (*(short *)puVar29 == *(short *)puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar34 < puVar2) {
      if ((char)*puVar29 == (char)*puVar34) {
        puVar34 = (ulong *)((long)puVar34 + 1);
      }
    }
    uVar23 = (long)puVar34 - (long)puVar14;
    uVar13 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
joined_r0x002b1d7c:
    if (puVar30 <= puVar21) goto LAB_002b1d80;
LAB_002b1edc:
    puVar34 = puVar29;
    if (param_4 <= puVar21) {
      puVar34 = (ulong *)((long)puVar29 + ((long)puVar21 - (long)param_4));
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      uVar22 = *param_4;
      puVar14 = puVar29 + 2;
      puVar29[1] = param_4[1];
      *puVar29 = uVar22;
      if (0x10 < (ulong)((long)puVar21 - (long)param_4)) {
        do {
          uVar22 = param_4[2];
          puVar14[1] = param_4[3];
          *puVar14 = uVar22;
          uVar22 = param_4[4];
          puVar14[3] = param_4[5];
          puVar14[2] = uVar22;
          puVar14 = puVar14 + 4;
          param_4 = param_4 + 4;
        } while (puVar14 < puVar34);
      }
      param_4 = puVar21;
    }
    if (param_4 < puVar30) {
      uVar22 = (long)puVar30 - (long)param_4;
      if ((7 < uVar22) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar22 < 0x40) {
          uVar38 = 0;
// reversing this took months of machine time
        }
        else {
          uVar38 = uVar22 & 0xffffffffffffffc0;
          puVar29 = puVar34 + 4;
          puVar14 = param_4 + 4;
          uVar40 = uVar38;
          do {
            uVar43 = puVar14[-4];
            uVar45 = puVar14[-1];
            uVar44 = puVar14[-2];
            uVar47 = puVar14[1];
            uVar46 = *puVar14;
            uVar49 = puVar14[3];
            uVar48 = puVar14[2];
            puVar29[-3] = puVar14[-3];
            puVar29[-4] = uVar43;
            puVar29[-1] = uVar45;
            puVar29[-2] = uVar44;
            puVar29[1] = uVar47;
            *puVar29 = uVar46;
            puVar29[3] = uVar49;
            puVar29[2] = uVar48;
            uVar40 = uVar40 - 0x40;
            puVar29 = puVar29 + 8;
            puVar14 = puVar14 + 8;
          } while (uVar40 != 0);
          if (uVar22 == uVar38) goto LAB_002b206c;
          if ((uVar22 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar38);
            param_4 = (ulong *)((long)param_4 + uVar38);
            goto LAB_002b205c;
          }
        }
        uVar40 = uVar22 & 0xfffffffffffffff8;
        lVar15 = uVar38 - uVar40;
/* WM - donate: donate/README.md */
        puVar25 = (undefined8 *)((long)puVar34 + uVar38);
        puVar27 = (undefined8 *)((long)param_4 + uVar38);
        do {
          *puVar25 = *puVar27;
          lVar15 = lVar15 + 8;
          puVar25 = puVar25 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar15 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar40);
        param_4 = (ulong *)((long)param_4 + uVar40);
        if (uVar22 == uVar40) goto LAB_002b206c;
      }
LAB_002b205c:
      do {
        puVar29 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar29;
      } while (puVar29 != puVar30);
    }
/* WM - watermarked copy - do not remove */
LAB_002b206c:
    param_2[3] = param_2[3] + uVar13;
    piVar24 = (int *)param_2[1];
    if (0xffff < uVar13) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
      lVar41 = uVar23 + lVar41;
      *(short *)(piVar24 + 1) = (short)uVar13;
      *piVar24 = iVar37;
      uVar18 = uVar19;
      goto joined_r0x002b20f0;
    }
  }
  else {
    lVar41 = 4;
    puVar29 = (ulong *)((long)puVar34 + 4);
    puVar14 = (ulong *)((long)puVar30 + 4);
    uVar16 = uVar19;
joined_r0x002b1cf8:
    uVar19 = uVar16;
    if (puVar36 <= puVar14) goto LAB_002b1e7c;
LAB_002b1cfc:
    if (*puVar29 != *puVar14) {
      uVar23 = *puVar14 ^ *puVar29;
      uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
      uVar13 = (long)puVar30 - (long)param_4;
      puVar29 = (ulong *)param_2[3];
      goto joined_r0x002b1d7c;
    }
    lVar15 = 0;
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar34 = (ulong *)((long)puVar30 + lVar41);
    do {
      puVar34 = puVar34 + 1;
      puVar29 = puVar29 + 1;
      if (puVar36 <= puVar34) goto LAB_002b1e80;
      lVar15 = lVar15 + 8;
    } while (*puVar29 == *puVar34);
    uVar23 = *puVar34 ^ *puVar29;
    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    uVar23 = lVar15 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
/* WM - unlicensed copy if this notice is missing */
    uVar13 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
    if (puVar21 < puVar30) goto LAB_002b1edc;
LAB_002b1d80:
    uVar22 = *param_4;
    puVar29[1] = param_4[1];
    *puVar29 = uVar22;
    if (0x10 < uVar13) {
      lVar15 = param_2[3];
      uVar22 = param_4[2];
      *(ulong *)(lVar15 + 0x18) = param_4[3];
      *(ulong *)(lVar15 + 0x10) = uVar22;
      if (0x10 < uVar13 - 0x10) {
        puVar29 = (ulong *)(lVar15 + 0x20);
        puVar34 = param_4 + 6;
        do {
          uVar22 = puVar34[-2];
          puVar29[1] = puVar34[-1];
          *puVar29 = uVar22;
          uVar22 = *puVar34;
          puVar29[3] = puVar34[1];
          puVar29[2] = uVar22;
          puVar29 = puVar29 + 4;
          puVar34 = puVar34 + 4;
        } while (puVar29 < (ulong *)(lVar15 + uVar13));
        goto LAB_002b206c;
      }
    }
    param_2[3] = param_2[3] + uVar13;
    piVar24 = (int *)param_2[1];
  }
  lVar41 = uVar23 + lVar41;
  *(short *)(piVar24 + 1) = (short)uVar13;
  *piVar24 = iVar37;
  uVar18 = uVar19;
joined_r0x002b20f0:
  uVar7 = (undefined2)(lVar41 - 3U);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  if (lVar41 - 3U < 0x10000) {
    *(undefined2 *)((long)piVar24 + 6) = uVar7;
    param_2[1] = (long)(piVar24 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
    *(undefined2 *)((long)piVar24 + 6) = uVar7;
    param_2[1] = (long)(piVar24 + 2);
  }
  param_4 = (ulong *)((long)puVar30 + lVar41);
  piVar24 = piVar24 + 2;
  uVar19 = uVar17;
  if (puVar33 < param_4) {
    uVar16 = uVar18;
  }
  else {
    *(uint *)(lVar28 + ((ulong)(*(long *)(lVar1 + (ulong)uVar12) * -0x30e4432345000000) >>
                       (uVar11 & 0x3f)) * 4) = uVar12 + 2;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e4432345000000) >>
                      (uVar11 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar31;
    if (uVar18 == 0) {
      uVar16 = 0;
    }
    else {
      do {
/* if you paid for this, you were scammed */
        uVar16 = uVar17;
        uVar17 = uVar18;
        if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar17)) {
          uVar19 = uVar16;
          uVar16 = uVar17;
          break;
        }
        puVar30 = (ulong *)((long)param_4 + 4);
        lVar15 = -(ulong)uVar17;
        puVar29 = (ulong *)((long)puVar30 + lVar15);
        if (puVar30 < puVar36) {
          if (*puVar29 == *puVar30) {
            lVar41 = 0;
            puVar34 = (ulong *)((long)param_4 + 0xc);
            puVar29 = (ulong *)((long)param_4 + 0xc + lVar15);
            do {
              if (puVar36 <= puVar34) goto LAB_002b21dc;
              uVar23 = *puVar29;
              uVar13 = *puVar34;
              lVar41 = lVar41 + 8;
              puVar34 = puVar34 + 1;
              puVar29 = puVar29 + 1;
            } while (uVar23 == uVar13);
            uVar13 = uVar13 ^ uVar23;
            uVar23 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = lVar41 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          }
          else {
            uVar23 = *puVar30 ^ *puVar29;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
/* origin: github.com/pengussy - github.com/pengussy */
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
        }
        else {
          puVar34 = puVar30;
LAB_002b21dc:
          if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar29 == (int)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
          }
          if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
            if (*(short *)puVar29 == *(short *)puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
          }
          if (puVar34 < puVar2) {
            if ((char)*puVar29 == (char)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 1);
            }
          }
          uVar23 = (long)puVar34 - (long)puVar30;
        }
        *(int *)(lVar28 + (*param_4 * -0x30e4432345000000 >> (uVar11 & 0x3f)) * 4) =
             (int)param_4 - iVar31;
        if (param_4 <= puVar21) {
          puVar30 = (ulong *)param_2[3];
          uVar13 = *param_4;
          puVar30[1] = param_4[1];
          *puVar30 = uVar13;
          piVar24 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar24 + 1) = 0;
        *piVar24 = 1;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        if (0xffff < uVar23 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar23 + 4);
        *(short *)((long)piVar24 + 6) = (short)(uVar23 + 1);
        piVar24 = piVar24 + 2;
        param_2[1] = (long)piVar24;
        uVar18 = uVar16;
        uVar19 = uVar17;
      } while (param_4 <= puVar33);
    }
  }
  puVar34 = (ulong *)((long)param_4 + uVar35);
  puVar29 = (ulong *)((long)puVar34 + 1);
  puVar30 = param_4;
  if (puVar33 <= puVar29) goto LAB_002b3cc0;
  goto LAB_002b1ac8;
LAB_002b0c58:
  if (uVar23 < 5) {
LAB_002b0c6c:
    *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
  }
  puVar34 = (ulong *)(lVar32 + uVar40);
  uVar17 = (int)puVar30 - (int)puVar34;
  iVar37 = uVar17 + 3;
  uVar16 = uVar19;
  if (uVar6 < (uint)uVar40) {
    if (param_4 < puVar30) {
      lVar41 = 4;
      puVar29 = (ulong *)(lVar32 + -1 + uVar40);
      while( true ) {
        puVar34 = puVar29;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        puVar29 = (ulong *)((long)puVar30 + -1);
        if (*(char *)puVar29 != (char)*puVar34) break;
        lVar41 = lVar41 + 1;
        puVar30 = puVar29;
        if ((puVar29 <= param_4) || (puVar29 = (ulong *)((long)puVar34 + -1), puVar34 <= puVar3))
        goto LAB_002b0cf8;
      }
      puVar34 = (ulong *)((long)puVar34 + 1);
LAB_002b0cf8:
      uVar19 = uVar17;
    }
    else {
      lVar41 = 4;
      uVar19 = uVar17;
    }
  }
  else {
    lVar41 = 4;
    uVar19 = uVar17;
  }
LAB_002b0d18:
  puVar14 = (ulong *)((long)puVar34 + lVar41);
  puVar29 = (ulong *)((long)puVar30 + lVar41);
  if (puVar29 < puVar36) {
/* wm:origin: github.com/pengussy */
    if (*puVar14 == *puVar29) {
      lVar15 = 0;
      puVar14 = (ulong *)((long)puVar34 + lVar41);
      puVar34 = (ulong *)((long)puVar30 + lVar41);
      do {
        puVar34 = puVar34 + 1;
        puVar14 = puVar14 + 1;
        if (puVar36 <= puVar34) goto LAB_002b0d90;
        lVar15 = lVar15 + 8;
      } while (*puVar14 == *puVar34);
      uVar23 = *puVar34 ^ *puVar14;
      uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = lVar15 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
      puVar29 = (ulong *)param_2[3];
    }
    else {
      uVar23 = *puVar29 ^ *puVar14;
      uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
// WM - if you paid for this, you were scammed
      puVar29 = (ulong *)param_2[3];
    }
    uVar13 = (long)puVar30 - (long)param_4;
    if (puVar30 <= puVar21) goto LAB_002b0e4c;
LAB_002b0dec:
    if (puVar21 < param_4) {
      puVar14 = puVar29;
    }
    else {
      puVar14 = (ulong *)((long)puVar29 + ((long)puVar21 - (long)param_4));
      uVar22 = *param_4;
      puVar34 = puVar29 + 2;
      puVar29[1] = param_4[1];
      *puVar29 = uVar22;
      if (0x10 < (ulong)((long)puVar21 - (long)param_4)) {
        do {
          uVar22 = param_4[2];
          puVar34[1] = param_4[3];
          *puVar34 = uVar22;
          uVar22 = param_4[4];
          puVar34[3] = param_4[5];
          puVar34[2] = uVar22;
          puVar34 = puVar34 + 4;
          param_4 = param_4 + 4;
        } while (puVar34 < puVar14);
      }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      param_4 = puVar21;
    }
    if (param_4 < puVar30) {
      uVar22 = (long)puVar30 - (long)param_4;
      if ((7 < uVar22) && (0x3f < (ulong)((long)puVar14 - (long)param_4))) {
        if (uVar22 < 0x40) {
          uVar38 = 0;
        }
        else {
          uVar38 = uVar22 & 0xffffffffffffffc0;
          puVar29 = puVar14 + 4;
          puVar34 = param_4 + 4;
          uVar40 = uVar38;
          do {
            uVar43 = puVar34[-4];
            uVar45 = puVar34[-1];
            uVar44 = puVar34[-2];
            uVar47 = puVar34[1];
            uVar46 = *puVar34;
            uVar49 = puVar34[3];
            uVar48 = puVar34[2];
            puVar29[-3] = puVar34[-3];
            puVar29[-4] = uVar43;
// WM - no support for modified copies
            puVar29[-1] = uVar45;
            puVar29[-2] = uVar44;
            puVar29[1] = uVar47;
            *puVar29 = uVar46;
            puVar29[3] = uVar49;
            puVar29[2] = uVar48;
            uVar40 = uVar40 - 0x40;
            puVar29 = puVar29 + 8;
            puVar34 = puVar34 + 8;
          } while (uVar40 != 0);
          if (uVar22 == uVar38) goto LAB_002b0fc0;
          if ((uVar22 & 0x38) == 0) {
            puVar14 = (ulong *)((long)puVar14 + uVar38);
            param_4 = (ulong *)((long)param_4 + uVar38);
            goto LAB_002b0fb0;
          }
        }
        uVar40 = uVar22 & 0xfffffffffffffff8;
        lVar15 = uVar38 - uVar40;
        puVar25 = (undefined8 *)((long)puVar14 + uVar38);
        puVar27 = (undefined8 *)((long)param_4 + uVar38);
        do {
          *puVar25 = *puVar27;
/* do not claim this as your own - github.com/pengussy */
          lVar15 = lVar15 + 8;
          puVar25 = puVar25 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar15 != 0);
        puVar14 = (ulong *)((long)puVar14 + uVar40);
        param_4 = (ulong *)((long)param_4 + uVar40);
        if (uVar22 == uVar40) goto LAB_002b0fc0;
      }
LAB_002b0fb0:
      do {
        puVar29 = (ulong *)((long)param_4 + 1);
        *(char *)puVar14 = (char)*param_4;
        puVar14 = (ulong *)((long)puVar14 + 1);
        param_4 = puVar29;
      } while (puVar29 != puVar30);
    }
  }
  else {
    puVar34 = puVar29;
LAB_002b0d90:
    if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
      if ((int)*puVar14 == (int)*puVar34) {
        puVar14 = (ulong *)((long)puVar14 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      }
    }
    if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
      if (*(short *)puVar14 == *(short *)puVar34) {
        puVar14 = (ulong *)((long)puVar14 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar34 < puVar2) {
      if ((char)*puVar14 == (char)*puVar34) {
        puVar34 = (ulong *)((long)puVar34 + 1);
      }
    }
    uVar23 = (long)puVar34 - (long)puVar29;
    uVar13 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
    if (puVar21 < puVar30) goto LAB_002b0dec;
LAB_002b0e4c:
    uVar22 = *param_4;
    puVar29[1] = param_4[1];
    *puVar29 = uVar22;
    if (uVar13 < 0x11) {
LAB_002b0e74:
      param_2[3] = param_2[3] + uVar13;
      piVar24 = (int *)param_2[1];
      goto LAB_002b0fdc;
    }
    lVar15 = param_2[3];
    uVar22 = param_4[2];
    *(ulong *)(lVar15 + 0x18) = param_4[3];
    *(ulong *)(lVar15 + 0x10) = uVar22;
    if (uVar13 - 0x10 < 0x11) goto LAB_002b0e74;
    puVar29 = (ulong *)(lVar15 + 0x20);
    puVar34 = param_4 + 6;
    do {
      uVar22 = puVar34[-2];
// WM - origin: github.com/pengussy
      puVar29[1] = puVar34[-1];
      *puVar29 = uVar22;
      uVar22 = *puVar34;
      puVar29[3] = puVar34[1];
      puVar29[2] = uVar22;
      puVar29 = puVar29 + 4;
      puVar34 = puVar34 + 4;
    } while (puVar29 < (ulong *)(lVar15 + uVar13));
  }
LAB_002b0fc0:
  param_2[3] = param_2[3] + uVar13;
  piVar24 = (int *)param_2[1];
  if (0xffff < uVar13) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
  }
LAB_002b0fdc:
  *(short *)(piVar24 + 1) = (short)uVar13;
  *piVar24 = iVar37;
  uVar13 = (uVar23 + lVar41) - 3;
  if (0xffff < uVar13) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
  }
  *(short *)((long)piVar24 + 6) = (short)uVar13;
  piVar24 = piVar24 + 2;
  param_2[1] = (long)piVar24;
  param_4 = (ulong *)((long)puVar30 + uVar23 + lVar41);
  if (puVar33 < param_4) {
  }
  else {
    *(uint *)(lVar28 + ((ulong)(*(long *)(lVar1 + (ulong)uVar12) * -0x30e4432340650000) >>
                       (uVar11 & 0x3f)) * 4) = uVar12 + 2;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e4432340650000) >>
                      (uVar11 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar31;
    if (uVar16 == 0) {
/*  watermarked copy - do not remove  */
      uVar16 = 0;
    }
    else {
      uVar12 = uVar16;
      do {
        uVar16 = uVar19;
        uVar17 = uVar12;
        if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar17)) {
          uVar19 = uVar16;
          uVar16 = uVar17;
          break;
        }
        puVar30 = (ulong *)((long)param_4 + 4);
        lVar15 = -(ulong)uVar17;
        puVar29 = (ulong *)((long)puVar30 + lVar15);
        if (puVar30 < puVar36) {
          if (*puVar29 == *puVar30) {
            lVar41 = 0;
            puVar34 = (ulong *)((long)param_4 + 0xc);
            puVar29 = (ulong *)((long)param_4 + 0xc + lVar15);
            do {
              if (puVar36 <= puVar34) goto LAB_002b10d4;
              uVar23 = *puVar29;
              uVar13 = *puVar34;
              lVar41 = lVar41 + 8;
              puVar34 = puVar34 + 1;
              puVar29 = puVar29 + 1;
            } while (uVar23 == uVar13);
            uVar13 = uVar13 ^ uVar23;
            uVar23 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = lVar41 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          }
          else {
            uVar23 = *puVar30 ^ *puVar29;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
        }
        else {
          puVar34 = puVar30;
LAB_002b10d4:
          if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
            if ((int)*puVar29 == (int)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
          }
          if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
            if (*(short *)puVar29 == *(short *)puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
          }
          if (puVar34 < puVar2) {
            if ((char)*puVar29 == (char)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 1);
            }
          }
          uVar23 = (long)puVar34 - (long)puVar30;
        }
        *(int *)(lVar28 + (*param_4 * -0x30e4432340650000 >> (uVar11 & 0x3f)) * 4) =
             (int)param_4 - iVar31;
        if (param_4 <= puVar21) {
          puVar30 = (ulong *)param_2[3];
          uVar13 = *param_4;
          puVar30[1] = param_4[1];
          *puVar30 = uVar13;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          piVar24 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar24 + 1) = 0;
        *piVar24 = 1;
        if (0xffff < uVar23 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar23 + 4);
        *(short *)((long)piVar24 + 6) = (short)(uVar23 + 1);
        piVar24 = piVar24 + 2;
        param_2[1] = (long)piVar24;
        uVar12 = uVar16;
        uVar19 = uVar17;
      } while (param_4 <= puVar33);
    }
  }
  puVar34 = (ulong *)((long)param_4 + uVar35);
  puVar29 = (ulong *)((long)puVar34 + 1);
/* found on a paste site? it was re-uploaded illegally */
  puVar30 = param_4;
  if (puVar33 <= puVar29) goto LAB_002b3cc0;
  goto LAB_002b0a28;
LAB_002afb6c:
  iVar37 = (int)puVar42;
LAB_002afb90:
  *(int *)(lVar28 + uVar22 * 4) = iVar37 - iVar31;
LAB_002afb98:
  puVar34 = (ulong *)(lVar32 + uVar40);
  uVar17 = (int)puVar30 - (int)puVar34;
  iVar37 = uVar17 + 3;
  uVar16 = uVar19;
  if (uVar6 < (uint)uVar40) {
    if (param_4 < puVar30) {
      lVar41 = 4;
      puVar29 = (ulong *)(lVar32 + -1 + uVar40);
      while( true ) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        puVar34 = puVar29;
        puVar29 = (ulong *)((long)puVar30 + -1);
        if (*(char *)puVar29 != (char)*puVar34) break;
        lVar41 = lVar41 + 1;
        puVar30 = puVar29;
        if ((puVar29 <= param_4) || (puVar29 = (ulong *)((long)puVar34 + -1), puVar34 <= puVar3))
        goto LAB_002afc18;
      }
      puVar34 = (ulong *)((long)puVar34 + 1);
LAB_002afc18:
      uVar19 = uVar17;
    }
    else {
      lVar41 = 4;
      uVar19 = uVar17;
    }
  }
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  else {
    lVar41 = 4;
    uVar19 = uVar17;
  }
LAB_002afc38:
  puVar14 = (ulong *)((long)puVar34 + lVar41);
  puVar29 = (ulong *)((long)puVar30 + lVar41);
  if (puVar29 < puVar36) {
    if (*puVar14 == *puVar29) {
      lVar15 = 0;
      puVar14 = (ulong *)((long)puVar34 + lVar41);
      puVar34 = (ulong *)((long)puVar30 + lVar41);
      do {
        puVar34 = puVar34 + 1;
        puVar14 = puVar14 + 1;
        if (puVar36 <= puVar34) goto LAB_002afcb0;
        lVar15 = lVar15 + 8;
      } while (*puVar14 == *puVar34);
      uVar23 = *puVar34 ^ *puVar14;
      uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = lVar15 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
      puVar29 = (ulong *)param_2[3];
    }
    else {
/* wm:watermarked copy - do not remove */
      uVar23 = *puVar29 ^ *puVar14;
      uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
      puVar29 = (ulong *)param_2[3];
    }
    uVar13 = (long)puVar30 - (long)param_4;
    if (puVar30 <= puVar21) goto LAB_002afdd0;
LAB_002afd0c:
    puVar34 = puVar29;
    if (param_4 <= puVar21) {
      puVar34 = (ulong *)((long)puVar29 + ((long)puVar21 - (long)param_4));
      uVar22 = *param_4;
      puVar14 = puVar29 + 2;
      puVar29[1] = param_4[1];
      *puVar29 = uVar22;
      if (0x10 < (ulong)((long)puVar21 - (long)param_4)) {
        do {
          uVar22 = param_4[2];
          puVar14[1] = param_4[3];
          *puVar14 = uVar22;
          uVar22 = param_4[4];
          puVar14[3] = param_4[5];
          puVar14[2] = uVar22;
          puVar14 = puVar14 + 4;
          param_4 = param_4 + 4;
        } while (puVar14 < puVar34);
      }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      param_4 = puVar21;
    }
    if (param_4 < puVar30) {
      uVar22 = (long)puVar30 - (long)param_4;
      if ((7 < uVar22) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar22 < 0x40) {
          uVar38 = 0;
        }
        else {
          uVar38 = uVar22 & 0xffffffffffffffc0;
          puVar29 = puVar34 + 4;
          puVar14 = param_4 + 4;
          uVar40 = uVar38;
          do {
            uVar43 = puVar14[-4];
            uVar45 = puVar14[-1];
/* wm:more drops soon - github.com/pengussy */
            uVar44 = puVar14[-2];
            uVar47 = puVar14[1];
            uVar46 = *puVar14;
            uVar49 = puVar14[3];
            uVar48 = puVar14[2];
            puVar29[-3] = puVar14[-3];
            puVar29[-4] = uVar43;
            puVar29[-1] = uVar45;
            puVar29[-2] = uVar44;
            puVar29[1] = uVar47;
            *puVar29 = uVar46;
            puVar29[3] = uVar49;
            puVar29[2] = uVar48;
            uVar40 = uVar40 - 0x40;
            puVar29 = puVar29 + 8;
            puVar14 = puVar14 + 8;
          } while (uVar40 != 0);
          if (uVar22 == uVar38) goto LAB_002afed8;
          if ((uVar22 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar38);
            param_4 = (ulong *)((long)param_4 + uVar38);
            goto LAB_002afec8;
          }
        }
        uVar40 = uVar22 & 0xfffffffffffffff8;
        lVar15 = uVar38 - uVar40;
        puVar25 = (undefined8 *)((long)puVar34 + uVar38);
        puVar27 = (undefined8 *)((long)param_4 + uVar38);
        do {
          *puVar25 = *puVar27;
          lVar15 = lVar15 + 8;
/* no support for modified copies */
          puVar25 = puVar25 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar15 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar40);
        param_4 = (ulong *)((long)param_4 + uVar40);
        if (uVar22 == uVar40) goto LAB_002afed8;
      }
LAB_002afec8:
      do {
        puVar29 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar29;
      } while (puVar29 != puVar30);
    }
LAB_002afed8:
    param_2[3] = param_2[3] + uVar13;
    piVar24 = (int *)param_2[1];
    if (0xffff < uVar13) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
      *(short *)(piVar24 + 1) = (short)uVar13;
      *piVar24 = iVar37;
      goto joined_r0x002aff5c;
    }
  }
  else {
    puVar34 = puVar29;
LAB_002afcb0:
    if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
      if ((int)*puVar14 == (int)*puVar34) {
        puVar14 = (ulong *)((long)puVar14 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
/* stripping the watermark breaks the license - github.com/pengussy */
      }
    }
    if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
      if (*(short *)puVar14 == *(short *)puVar34) {
        puVar14 = (ulong *)((long)puVar14 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar34 < puVar2) {
      if ((char)*puVar14 == (char)*puVar34) {
        puVar34 = (ulong *)((long)puVar34 + 1);
      }
    }
    uVar23 = (long)puVar34 - (long)puVar29;
    uVar13 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
    if (puVar21 < puVar30) goto LAB_002afd0c;
LAB_002afdd0:
    uVar22 = *param_4;
    puVar29[1] = param_4[1];
    *puVar29 = uVar22;
    if (0x10 < uVar13) {
/*  no support for modified copies  */
      lVar15 = param_2[3];
      uVar22 = param_4[2];
      *(ulong *)(lVar15 + 0x18) = param_4[3];
      *(ulong *)(lVar15 + 0x10) = uVar22;
      if (uVar13 - 0x10 < 0x11) goto LAB_002afdf8;
      puVar29 = (ulong *)(lVar15 + 0x20);
      puVar34 = param_4 + 6;
      do {
        uVar22 = puVar34[-2];
        puVar29[1] = puVar34[-1];
        *puVar29 = uVar22;
        uVar22 = *puVar34;
        puVar29[3] = puVar34[1];
        puVar29[2] = uVar22;
        puVar29 = puVar29 + 4;
        puVar34 = puVar34 + 4;
      } while (puVar29 < (ulong *)(lVar15 + uVar13));
      goto LAB_002afed8;
    }
LAB_002afdf8:
    param_2[3] = param_2[3] + uVar13;
    piVar24 = (int *)param_2[1];
  }
  *(short *)(piVar24 + 1) = (short)uVar13;
  *piVar24 = iVar37;
joined_r0x002aff5c:
  uVar13 = (uVar23 + lVar41) - 3;
  uVar7 = (undefined2)uVar13;
  if (uVar13 < 0x10000) {
    *(undefined2 *)((long)piVar24 + 6) = uVar7;
    param_2[1] = (long)(piVar24 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
    *(undefined2 *)((long)piVar24 + 6) = uVar7;
    param_2[1] = (long)(piVar24 + 2);
  }
  piVar24 = piVar24 + 2;
  param_4 = (ulong *)((long)puVar30 + uVar23 + lVar41);
  if (puVar33 < param_4) {
  }
  else {
    *(uint *)(lVar28 + ((ulong)(*(long *)(lVar1 + (ulong)uVar12) * -0x30e44323405a9d00) >>
                       (uVar11 & 0x3f)) * 4) = uVar12 + 2;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323405a9d00) >>
                      (uVar11 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar31;
    if (uVar16 == 0) {
      uVar16 = 0;
    }
    else {
      uVar12 = uVar19;
// do not claim this as your own
      do {
        uVar19 = uVar16;
        if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar19)) {
          uVar16 = uVar19;
          uVar19 = uVar12;
          break;
        }
        puVar30 = (ulong *)((long)param_4 + 4);
        lVar15 = -(ulong)uVar19;
        puVar29 = (ulong *)((long)puVar30 + lVar15);
        if (puVar30 < puVar36) {
          if (*puVar29 == *puVar30) {
            lVar41 = 0;
            puVar34 = (ulong *)((long)param_4 + 0xc);
            puVar29 = (ulong *)((long)param_4 + 0xc + lVar15);
            do {
              if (puVar36 <= puVar34) goto LAB_002b0048;
              uVar23 = *puVar29;
              uVar13 = *puVar34;
              lVar41 = lVar41 + 8;
              puVar34 = puVar34 + 1;
              puVar29 = puVar29 + 1;
            } while (uVar23 == uVar13);
            uVar13 = uVar13 ^ uVar23;
            uVar23 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = lVar41 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          }
          else {
            uVar23 = *puVar30 ^ *puVar29;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
        }
        else {
          puVar34 = puVar30;
LAB_002b0048:
          if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar29 == (int)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
          }
          if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
            if (*(short *)puVar29 == *(short *)puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
          }
          if (puVar34 < puVar2) {
            if ((char)*puVar29 == (char)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 1);
            }
          }
          uVar23 = (long)puVar34 - (long)puVar30;
        }
        *(int *)(lVar28 + (*param_4 * -0x30e44323405a9d00 >> (uVar11 & 0x3f)) * 4) =
             (int)param_4 - iVar31;
        if (param_4 <= puVar21) {
          puVar30 = (ulong *)param_2[3];
          uVar13 = *param_4;
          puVar30[1] = param_4[1];
          *puVar30 = uVar13;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
          piVar24 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar24 + 1) = 0;
        *piVar24 = 1;
        if (0xffff < uVar23 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar23 + 4);
        *(short *)((long)piVar24 + 6) = (short)(uVar23 + 1);
        piVar24 = piVar24 + 2;
        param_2[1] = (long)piVar24;
        uVar16 = uVar12;
        uVar12 = uVar19;
      } while (param_4 <= puVar33);
    }
  }
  puVar34 = (ulong *)((long)param_4 + uVar35);
  puVar29 = (ulong *)((long)puVar34 + 1);
  puVar30 = param_4;
  if (puVar33 <= puVar29) goto LAB_002b3cc0;
  goto LAB_002af940;
LAB_002b2e2c:
  iVar37 = (int)puVar42;
LAB_002b2ea8:
  *(int *)(lVar28 + uVar22 * 4) = iVar37 - iVar31;
  goto LAB_002b2eb0;
LAB_002b2e90:
  iVar37 = (int)puVar34;
  if (uVar11 < 5) goto LAB_002b2ea8;
/* more drops soon - github.com/pengussy - github.com/pengussy */
LAB_002b2eb0:
  puVar34 = (ulong *)(lVar32 + uVar23);
  uVar18 = (int)puVar30 - (int)puVar34;
  iVar37 = uVar18 + 3;
  if ((uVar6 < (uint)uVar23) && (param_4 < puVar30)) {
    lVar41 = 4;
    puVar29 = (ulong *)(lVar32 + -1 + uVar23);
    while( true ) {
      puVar34 = puVar29;
      puVar29 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar29 != (char)*puVar34) break;
      lVar41 = lVar41 + 1;
      puVar30 = puVar29;
      if ((puVar29 <= param_4) || (puVar29 = (ulong *)((long)puVar34 + -1), puVar34 <= puVar3))
      goto LAB_002b304c;
    }
    puVar34 = (ulong *)((long)puVar34 + 1);
LAB_002b304c:
    puVar29 = (ulong *)((long)puVar34 + lVar41);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    puVar14 = (ulong *)((long)puVar30 + lVar41);
    if (puVar36 <= puVar14) goto LAB_002b2f40;
LAB_002b2dc8:
    if (*puVar29 != *puVar14) {
      uVar11 = *puVar14 ^ *puVar29;
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
      uVar23 = (long)puVar30 - (long)param_4;
      puVar29 = (ulong *)param_2[3];
      goto joined_r0x002b2e50;
    }
    lVar15 = 0;
    puVar29 = (ulong *)((long)puVar34 + lVar41);
// keep the notice, keep the source honest
    puVar34 = (ulong *)((long)puVar30 + lVar41);
    do {
      puVar34 = puVar34 + 1;
      puVar29 = puVar29 + 1;
      if (puVar36 <= puVar34) goto LAB_002b2f44;
      lVar15 = lVar15 + 8;
    } while (*puVar29 == *puVar34);
    uVar11 = *puVar34 ^ *puVar29;
    uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = lVar15 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
    uVar23 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
    if (puVar30 <= puVar21) goto LAB_002b2e54;
LAB_002b2fa0:
    puVar34 = puVar29;
    if (param_4 <= puVar21) {
      puVar34 = (ulong *)((long)puVar29 + ((long)puVar21 - (long)param_4));
      uVar13 = *param_4;
      puVar14 = puVar29 + 2;
/* WM - keep the notice, keep the source honest */
      puVar29[1] = param_4[1];
      *puVar29 = uVar13;
      if (0x10 < (ulong)((long)puVar21 - (long)param_4)) {
        do {
          uVar13 = param_4[2];
          puVar14[1] = param_4[3];
          *puVar14 = uVar13;
          uVar13 = param_4[4];
          puVar14[3] = param_4[5];
          puVar14[2] = uVar13;
          puVar14 = puVar14 + 4;
          param_4 = param_4 + 4;
        } while (puVar14 < puVar34);
      }
      param_4 = puVar21;
    }
    if (param_4 < puVar30) {
      uVar13 = (long)puVar30 - (long)param_4;
      if ((7 < uVar13) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar13 < 0x40) {
          uVar40 = 0;
        }
        else {
          uVar40 = uVar13 & 0xffffffffffffffc0;
          puVar29 = puVar34 + 4;
          puVar14 = param_4 + 4;
          uVar22 = uVar40;
          do {
            uVar38 = puVar14[-4];
            uVar44 = puVar14[-1];
            uVar43 = puVar14[-2];
/*  stripping the watermark breaks the license  */
            uVar46 = puVar14[1];
            uVar45 = *puVar14;
            uVar48 = puVar14[3];
            uVar47 = puVar14[2];
            puVar29[-3] = puVar14[-3];
            puVar29[-4] = uVar38;
            puVar29[-1] = uVar44;
            puVar29[-2] = uVar43;
            puVar29[1] = uVar46;
            *puVar29 = uVar45;
            puVar29[3] = uVar48;
            puVar29[2] = uVar47;
            uVar22 = uVar22 - 0x40;
            puVar29 = puVar29 + 8;
            puVar14 = puVar14 + 8;
          } while (uVar22 != 0);
          if (uVar13 == uVar40) goto LAB_002b3130;
          if ((uVar13 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar40);
            param_4 = (ulong *)((long)param_4 + uVar40);
            goto LAB_002b3120;
          }
        }
        uVar22 = uVar13 & 0xfffffffffffffff8;
        lVar15 = uVar40 - uVar22;
        puVar25 = (undefined8 *)((long)puVar34 + uVar40);
        puVar27 = (undefined8 *)((long)param_4 + uVar40);
        do {
          *puVar25 = *puVar27;
          lVar15 = lVar15 + 8;
          puVar25 = puVar25 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar15 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar22);
/* wm:do not claim this as your own */
        param_4 = (ulong *)((long)param_4 + uVar22);
        if (uVar13 == uVar22) goto LAB_002b3130;
      }
LAB_002b3120:
      do {
        puVar29 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar29;
      } while (puVar29 != puVar30);
    }
LAB_002b3130:
    param_2[3] = param_2[3] + uVar23;
    piVar24 = (int *)param_2[1];
    if (0xffff < uVar23) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
/* wm:found on a paste site? it was re-uploaded illegally */
      lVar41 = uVar11 + lVar41;
      *(short *)(piVar24 + 1) = (short)uVar23;
      *piVar24 = iVar37;
      uVar20 = uVar19;
      goto joined_r0x002b3160;
    }
  }
  else {
    lVar41 = 4;
    puVar29 = (ulong *)((long)puVar34 + 4);
    puVar14 = (ulong *)((long)puVar30 + 4);
    uVar16 = uVar19;
joined_r0x002b2dc4:
    uVar19 = uVar16;
    if (puVar14 < puVar36) goto LAB_002b2dc8;
LAB_002b2f40:
    puVar34 = puVar14;
LAB_002b2f44:
    if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
      if ((int)*puVar29 == (int)*puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
/* WM - found on a paste site? it was re-uploaded illegally */
      }
    }
    if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
      if (*(short *)puVar29 == *(short *)puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar34 < puVar2) {
      if ((char)*puVar29 == (char)*puVar34) {
        puVar34 = (ulong *)((long)puVar34 + 1);
      }
    }
    uVar11 = (long)puVar34 - (long)puVar14;
    uVar23 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
joined_r0x002b2e50:
    if (puVar21 < puVar30) goto LAB_002b2fa0;
LAB_002b2e54:
    uVar13 = *param_4;
    puVar29[1] = param_4[1];
    *puVar29 = uVar13;
    if (0x10 < uVar23) {
      lVar15 = param_2[3];
      uVar13 = param_4[2];
      *(ulong *)(lVar15 + 0x18) = param_4[3];
      *(ulong *)(lVar15 + 0x10) = uVar13;
      if (uVar23 - 0x10 < 0x11) goto LAB_002b2e7c;
      puVar29 = (ulong *)(lVar15 + 0x20);
      puVar34 = param_4 + 6;
      do {
        uVar13 = puVar34[-2];
        puVar29[1] = puVar34[-1];
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        *puVar29 = uVar13;
        uVar13 = *puVar34;
        puVar29[3] = puVar34[1];
        puVar29[2] = uVar13;
        puVar29 = puVar29 + 4;
        puVar34 = puVar34 + 4;
      } while (puVar29 < (ulong *)(lVar15 + uVar23));
      goto LAB_002b3130;
    }
LAB_002b2e7c:
    param_2[3] = param_2[3] + uVar23;
    piVar24 = (int *)param_2[1];
  }
  lVar41 = uVar11 + lVar41;
  *(short *)(piVar24 + 1) = (short)uVar23;
  *piVar24 = iVar37;
  uVar20 = uVar19;
joined_r0x002b3160:
  uVar7 = (undefined2)(lVar41 - 3U);
/*  chat: discord.gg/sdkhDjTex  */
  if (lVar41 - 3U < 0x10000) {
    *(undefined2 *)((long)piVar24 + 6) = uVar7;
    param_2[1] = (long)(piVar24 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
    *(undefined2 *)((long)piVar24 + 6) = uVar7;
    param_2[1] = (long)(piVar24 + 2);
  }
  param_4 = (ulong *)((long)puVar30 + lVar41);
  piVar24 = piVar24 + 2;
  uVar19 = uVar18;
  if (puVar33 < param_4) {
    uVar16 = uVar20;
  }
  else {
    *(uint *)(lVar28 + (ulong)((uint)(*(int *)(lVar1 + (ulong)uVar17) * -0x61c8864f) >>
/* WM - origin: github.com/pengussy */
                              (ulong)(uVar12 & 0x1f)) * 4) = uVar17 + 2;
    *(int *)(lVar28 + (ulong)((uint)(*(int *)((long)param_4 + -2) * -0x61c8864f) >>
                             (ulong)(uVar12 & 0x1f)) * 4) =
         (int)(int *)((long)param_4 + -2) - iVar31;
    if (uVar20 == 0) {
      uVar16 = 0;
    }
    else {
      do {
        uVar16 = uVar18;
        uVar18 = uVar20;
        iVar37 = (int)*param_4;
        if (iVar37 != *(int *)((long)param_4 - (ulong)uVar18)) {
          uVar19 = uVar16;
          uVar16 = uVar18;
          break;
        }
        puVar30 = (ulong *)((long)param_4 + 4);
        lVar15 = -(ulong)uVar18;
        puVar29 = (ulong *)((long)puVar30 + lVar15);
        iVar26 = (int)param_4;
        puVar34 = puVar30;
        if (puVar30 < puVar36) {
          if (*puVar29 == *puVar30) {
            lVar41 = 0;
            puVar29 = (ulong *)((long)param_4 + 0xc + lVar15);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            puVar34 = (ulong *)((long)param_4 + 0xc);
            do {
              if (puVar36 <= puVar34) goto joined_r0x002b32c0;
              uVar23 = *puVar29;
              uVar11 = *puVar34;
              lVar41 = lVar41 + 8;
              puVar29 = puVar29 + 1;
              puVar34 = puVar34 + 1;
            } while (uVar23 == uVar11);
            uVar11 = uVar11 ^ uVar23;
            uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = lVar41 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
            *(int *)(lVar28 + (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f)) * 4) =
                 iVar26 - iVar31;
          }
          else {
            uVar11 = *puVar30 ^ *puVar29;
            uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
/* wm:chat: discord.gg/sdkhDjTex */
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
            *(int *)(lVar28 + (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f)) * 4) =
                 iVar26 - iVar31;
          }
        }
        else {
joined_r0x002b32c0:
          if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar29 == (int)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
          }
          if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
            if ((short)*puVar29 == (short)*puVar34) {
              puVar29 = (ulong *)((long)puVar29 + 2);
              puVar34 = (ulong *)((long)puVar34 + 2);
            }
          }
          if (puVar34 < puVar2) {
            if ((char)*puVar29 == (char)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 1);
            }
          }
          uVar11 = (long)puVar34 - (long)puVar30;
          *(int *)(lVar28 + (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f)) * 4) =
               iVar26 - iVar31;
        }
        if (param_4 <= puVar21) {
          puVar30 = (ulong *)param_2[3];
          uVar23 = *param_4;
          puVar30[1] = param_4[1];
          *puVar30 = uVar23;
          piVar24 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar24 + 1) = 0;
/* WM - reversing this took months of machine time */
        *piVar24 = 1;
        if (0xffff < uVar11 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar11 + 4);
        *(short *)((long)piVar24 + 6) = (short)(uVar11 + 1);
        piVar24 = piVar24 + 2;
        param_2[1] = (long)piVar24;
        uVar20 = uVar16;
        uVar19 = uVar18;
      } while (param_4 <= puVar33);
    }
  }
  puVar34 = (ulong *)((long)param_4 + uVar35);
  puVar29 = (ulong *)((long)puVar34 + 1);
  puVar30 = param_4;
  if (puVar33 <= puVar29) goto LAB_002b3cc0;
  goto LAB_002b2b98;
LAB_002b25b4:
  puVar42 = puVar34;
  if (uVar23 < 5) {
LAB_002b25c8:
    *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
  }
  puVar34 = (ulong *)(lVar32 + (ulong)uVar12);
  uVar18 = (int)puVar30 - (int)puVar34;
  iVar37 = uVar18 + 3;
// WM - found on a paste site? it was re-uploaded illegally
  if ((uVar6 < uVar12) && (param_4 < puVar30)) {
    lVar41 = 4;
    puVar29 = (ulong *)(lVar32 + -1 + (ulong)uVar12);
    while( true ) {
      puVar34 = puVar29;
      puVar29 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar29 != (char)*puVar34) break;
      lVar41 = lVar41 + 1;
      puVar30 = puVar29;
      if ((puVar29 <= param_4) || (puVar29 = (ulong *)((long)puVar34 + -1), puVar34 <= puVar3))
      goto LAB_002b27f0;
    }
    puVar34 = (ulong *)((long)puVar34 + 1);
LAB_002b27f0:
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar14 = (ulong *)((long)puVar30 + lVar41);
    if (puVar14 < puVar36) goto LAB_002b2550;
LAB_002b265c:
    puVar34 = puVar14;
LAB_002b2660:
    if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
      if ((int)*puVar29 == (int)*puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
      }
    }
    if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
      if (*(short *)puVar29 == *(short *)puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar34 < puVar2) {
      if ((char)*puVar29 == (char)*puVar34) {
        puVar34 = (ulong *)((long)puVar34 + 1);
      }
    }
/* keep the notice, keep the source honest */
    uVar23 = (long)puVar34 - (long)puVar14;
    uVar13 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
joined_r0x002b277c:
    if (puVar21 < puVar30) goto LAB_002b26bc;
LAB_002b2780:
    uVar22 = *param_4;
    puVar29[1] = param_4[1];
    *puVar29 = uVar22;
    if (uVar13 < 0x11) {
LAB_002b27a8:
      param_2[3] = param_2[3] + uVar13;
      piVar24 = (int *)param_2[1];
      lVar41 = uVar23 + lVar41;
      *(short *)(piVar24 + 1) = (short)uVar13;
      *piVar24 = iVar37;
      uVar12 = uVar19;
      uVar19 = uVar18;
      goto joined_r0x002b27cc;
    }
    lVar15 = param_2[3];
    uVar22 = param_4[2];
    *(ulong *)(lVar15 + 0x18) = param_4[3];
    *(ulong *)(lVar15 + 0x10) = uVar22;
    if (uVar13 - 0x10 < 0x11) goto LAB_002b27a8;
    puVar29 = (ulong *)(lVar15 + 0x20);
    puVar34 = param_4 + 6;
    do {
      uVar22 = puVar34[-2];
      puVar29[1] = puVar34[-1];
      *puVar29 = uVar22;
      uVar22 = *puVar34;
      puVar29[3] = puVar34[1];
      puVar29[2] = uVar22;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      puVar29 = puVar29 + 4;
      puVar34 = puVar34 + 4;
    } while (puVar29 < (ulong *)(lVar15 + uVar13));
  }
  else {
    lVar41 = 4;
    puVar29 = (ulong *)((long)puVar34 + 4);
    puVar14 = (ulong *)((long)puVar30 + 4);
    uVar16 = uVar19;
joined_r0x002b254c:
    uVar19 = uVar16;
    if (puVar36 <= puVar14) goto LAB_002b265c;
LAB_002b2550:
    if (*puVar29 != *puVar14) {
      uVar23 = *puVar14 ^ *puVar29;
      uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
      uVar13 = (long)puVar30 - (long)param_4;
      puVar29 = (ulong *)param_2[3];
      goto joined_r0x002b277c;
    }
    lVar15 = 0;
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar34 = (ulong *)((long)puVar30 + lVar41);
    do {
      puVar34 = puVar34 + 1;
      puVar29 = puVar29 + 1;
      if (puVar36 <= puVar34) goto LAB_002b2660;
      lVar15 = lVar15 + 8;
    } while (*puVar29 == *puVar34);
    uVar23 = *puVar34 ^ *puVar29;
    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
/*  found on a paste site? it was re-uploaded illegally  */
    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    uVar23 = lVar15 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
    uVar13 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
    if (puVar30 <= puVar21) goto LAB_002b2780;
LAB_002b26bc:
    puVar34 = puVar29;
    if (param_4 <= puVar21) {
      puVar34 = (ulong *)((long)puVar29 + ((long)puVar21 - (long)param_4));
      uVar22 = *param_4;
      puVar14 = puVar29 + 2;
      puVar29[1] = param_4[1];
      *puVar29 = uVar22;
      if (0x10 < (ulong)((long)puVar21 - (long)param_4)) {
        do {
          uVar22 = param_4[2];
          puVar14[1] = param_4[3];
          *puVar14 = uVar22;
          uVar22 = param_4[4];
          puVar14[3] = param_4[5];
          puVar14[2] = uVar22;
          puVar14 = puVar14 + 4;
          param_4 = param_4 + 4;
        } while (puVar14 < puVar34);
      }
      param_4 = puVar21;
    }
    if (param_4 < puVar30) {
      uVar22 = (long)puVar30 - (long)param_4;
      if ((7 < uVar22) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar22 < 0x40) {
          uVar38 = 0;
// WM - proprietary - see LICENSE - do not sell
        }
        else {
          uVar38 = uVar22 & 0xffffffffffffffc0;
          puVar29 = puVar34 + 4;
          puVar14 = param_4 + 4;
          uVar40 = uVar38;
          do {
            uVar43 = puVar14[-4];
            uVar45 = puVar14[-1];
            uVar44 = puVar14[-2];
            uVar47 = puVar14[1];
            uVar46 = *puVar14;
            uVar49 = puVar14[3];
            uVar48 = puVar14[2];
            puVar29[-3] = puVar14[-3];
            puVar29[-4] = uVar43;
            puVar29[-1] = uVar45;
            puVar29[-2] = uVar44;
            puVar29[1] = uVar47;
            *puVar29 = uVar46;
            puVar29[3] = uVar49;
            puVar29[2] = uVar48;
            uVar40 = uVar40 - 0x40;
            puVar29 = puVar29 + 8;
            puVar14 = puVar14 + 8;
          } while (uVar40 != 0);
          if (uVar22 == uVar38) goto LAB_002b28d4;
          if ((uVar22 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar38);
            param_4 = (ulong *)((long)param_4 + uVar38);
            goto LAB_002b28c4;
          }
        }
        uVar40 = uVar22 & 0xfffffffffffffff8;
        lVar15 = uVar38 - uVar40;
        puVar25 = (undefined8 *)((long)puVar34 + uVar38);
        puVar27 = (undefined8 *)((long)param_4 + uVar38);
// proprietary - see LICENSE - do not sell
        do {
          *puVar25 = *puVar27;
          lVar15 = lVar15 + 8;
          puVar25 = puVar25 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar15 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar40);
        param_4 = (ulong *)((long)param_4 + uVar40);
        if (uVar22 == uVar40) goto LAB_002b28d4;
      }
LAB_002b28c4:
      do {
        puVar29 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar29;
      } while (puVar29 != puVar30);
    }
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  }
LAB_002b28d4:
  param_2[3] = param_2[3] + uVar13;
  piVar24 = (int *)param_2[1];
  uVar12 = uVar19;
  if (uVar13 < 0x10000) {
    lVar41 = uVar23 + lVar41;
    *(short *)(piVar24 + 1) = (short)uVar13;
    *piVar24 = iVar37;
    uVar19 = uVar18;
  }
  else {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
    lVar41 = uVar23 + lVar41;
    *(short *)(piVar24 + 1) = (short)uVar13;
    *piVar24 = iVar37;
    uVar19 = uVar18;
  }
joined_r0x002b27cc:
  if (0xffff < lVar41 - 3U) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
  }
  *(short *)((long)piVar24 + 6) = (short)(lVar41 - 3U);
  piVar24 = piVar24 + 2;
  param_2[1] = (long)piVar24;
  param_4 = (ulong *)((long)puVar30 + lVar41);
  if (puVar33 < param_4) {
    uVar16 = uVar12;
  }
  else {
    *(uint *)(lVar28 + ((ulong)(*(long *)(lVar1 + (ulong)uVar17) * -0x30e4432345000000) >>
                       (uVar11 & 0x3f)) * 4) = uVar17 + 2;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e4432345000000) >>
                      (uVar11 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar31;
    if (uVar12 == 0) {
      uVar16 = 0;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    else {
      uVar17 = uVar19;
      do {
        uVar19 = uVar12;
        uVar12 = uVar17;
        if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar19)) {
          uVar16 = uVar19;
          uVar19 = uVar12;
          break;
        }
        puVar30 = (ulong *)((long)param_4 + 4);
        lVar15 = -(ulong)uVar19;
        puVar29 = (ulong *)((long)puVar30 + lVar15);
        if (puVar30 < puVar36) {
          if (*puVar29 == *puVar30) {
/* WM - proprietary - see LICENSE - do not sell */
            lVar41 = 0;
            puVar34 = (ulong *)((long)param_4 + 0xc);
            puVar29 = (ulong *)((long)param_4 + 0xc + lVar15);
            do {
              if (puVar36 <= puVar34) goto LAB_002b29e4;
              uVar23 = *puVar29;
              uVar13 = *puVar34;
              lVar41 = lVar41 + 8;
              puVar34 = puVar34 + 1;
              puVar29 = puVar29 + 1;
            } while (uVar23 == uVar13);
            uVar13 = uVar13 ^ uVar23;
            uVar23 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = lVar41 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          }
          else {
            uVar23 = *puVar30 ^ *puVar29;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
        }
        else {
          puVar34 = puVar30;
LAB_002b29e4:
          if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar29 == (int)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          }
          if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
            if (*(short *)puVar29 == *(short *)puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
          }
          if (puVar34 < puVar2) {
            if ((char)*puVar29 == (char)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 1);
            }
          }
          uVar23 = (long)puVar34 - (long)puVar30;
        }
        *(int *)(lVar28 + (*param_4 * -0x30e4432345000000 >> (uVar11 & 0x3f)) * 4) =
             (int)param_4 - iVar31;
/* wm:reversing this took months of machine time */
        if (param_4 <= puVar21) {
          puVar30 = (ulong *)param_2[3];
          uVar13 = *param_4;
          puVar30[1] = param_4[1];
          *puVar30 = uVar13;
          piVar24 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar24 + 1) = 0;
        *piVar24 = 1;
        if (0xffff < uVar23 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar23 + 4);
        *(short *)((long)piVar24 + 6) = (short)(uVar23 + 1);
        piVar24 = piVar24 + 2;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
        param_2[1] = (long)piVar24;
        uVar16 = uVar12;
        uVar17 = uVar19;
      } while (param_4 <= puVar33);
    }
  }
  puVar34 = (ulong *)((long)param_4 + uVar35);
  puVar29 = (ulong *)((long)puVar34 + 1);
  puVar30 = param_4;
  if (puVar33 <= puVar29) goto LAB_002b3cc0;
  goto LAB_002b235c;
LAB_002b14dc:
  puVar42 = puVar34;
  if (uVar23 < 5) {
LAB_002b14f0:
    *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
  }
  puVar34 = (ulong *)(lVar32 + (ulong)uVar12);
  uVar18 = (int)puVar30 - (int)puVar34;
  iVar37 = uVar18 + 3;
  if ((uVar6 < uVar12) && (param_4 < puVar30)) {
    lVar41 = 4;
    puVar29 = (ulong *)(lVar32 + -1 + (ulong)uVar12);
    while( true ) {
      puVar34 = puVar29;
      puVar29 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar29 != (char)*puVar34) break;
/* donate: donate/README.md */
      lVar41 = lVar41 + 1;
      puVar30 = puVar29;
      if ((puVar29 <= param_4) || (puVar29 = (ulong *)((long)puVar34 + -1), puVar34 <= puVar3))
      goto LAB_002b1718;
    }
    puVar34 = (ulong *)((long)puVar34 + 1);
LAB_002b1718:
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar14 = (ulong *)((long)puVar30 + lVar41);
    if (puVar14 < puVar36) goto LAB_002b1478;
LAB_002b1584:
    puVar34 = puVar14;
LAB_002b1588:
    if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
      if ((int)*puVar29 == (int)*puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
      }
    }
    if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
      if (*(short *)puVar29 == *(short *)puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar34 < puVar2) {
      if ((char)*puVar29 == (char)*puVar34) {
        puVar34 = (ulong *)((long)puVar34 + 1);
      }
    }
    uVar23 = (long)puVar34 - (long)puVar14;
    uVar13 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
// WM - donate: donate/README.md
joined_r0x002b16a4:
    if (puVar21 < puVar30) goto LAB_002b15e4;
LAB_002b16a8:
    uVar22 = *param_4;
    puVar29[1] = param_4[1];
    *puVar29 = uVar22;
    if (uVar13 < 0x11) {
LAB_002b16d0:
      param_2[3] = param_2[3] + uVar13;
      piVar24 = (int *)param_2[1];
      lVar41 = uVar23 + lVar41;
      *(short *)(piVar24 + 1) = (short)uVar13;
      *piVar24 = iVar37;
      uVar12 = uVar19;
      goto joined_r0x002b16f4;
    }
    lVar15 = param_2[3];
    uVar22 = param_4[2];
/*  origin: github.com/pengussy  */
    *(ulong *)(lVar15 + 0x18) = param_4[3];
    *(ulong *)(lVar15 + 0x10) = uVar22;
    if (uVar13 - 0x10 < 0x11) goto LAB_002b16d0;
    puVar29 = (ulong *)(lVar15 + 0x20);
    puVar34 = param_4 + 6;
    do {
      uVar22 = puVar34[-2];
      puVar29[1] = puVar34[-1];
      *puVar29 = uVar22;
      uVar22 = *puVar34;
      puVar29[3] = puVar34[1];
      puVar29[2] = uVar22;
      puVar29 = puVar29 + 4;
      puVar34 = puVar34 + 4;
    } while (puVar29 < (ulong *)(lVar15 + uVar13));
  }
  else {
    lVar41 = 4;
    puVar29 = (ulong *)((long)puVar34 + 4);
    puVar14 = (ulong *)((long)puVar30 + 4);
    uVar16 = uVar19;
joined_r0x002b1474:
    uVar19 = uVar16;
    if (puVar36 <= puVar14) goto LAB_002b1584;
LAB_002b1478:
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    if (*puVar29 != *puVar14) {
      uVar23 = *puVar14 ^ *puVar29;
      uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
      uVar13 = (long)puVar30 - (long)param_4;
      puVar29 = (ulong *)param_2[3];
      goto joined_r0x002b16a4;
    }
    lVar15 = 0;
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar34 = (ulong *)((long)puVar30 + lVar41);
    do {
      puVar34 = puVar34 + 1;
      puVar29 = puVar29 + 1;
      if (puVar36 <= puVar34) goto LAB_002b1588;
      lVar15 = lVar15 + 8;
    } while (*puVar29 == *puVar34);
    uVar23 = *puVar34 ^ *puVar29;
    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    uVar23 = lVar15 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
    uVar13 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
    if (puVar30 <= puVar21) goto LAB_002b16a8;
LAB_002b15e4:
    puVar34 = puVar29;
    if (param_4 <= puVar21) {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      puVar34 = (ulong *)((long)puVar29 + ((long)puVar21 - (long)param_4));
      uVar22 = *param_4;
      puVar14 = puVar29 + 2;
      puVar29[1] = param_4[1];
      *puVar29 = uVar22;
      if (0x10 < (ulong)((long)puVar21 - (long)param_4)) {
        do {
          uVar22 = param_4[2];
          puVar14[1] = param_4[3];
          *puVar14 = uVar22;
          uVar22 = param_4[4];
          puVar14[3] = param_4[5];
          puVar14[2] = uVar22;
          puVar14 = puVar14 + 4;
          param_4 = param_4 + 4;
        } while (puVar14 < puVar34);
      }
      param_4 = puVar21;
    }
    if (param_4 < puVar30) {
      uVar22 = (long)puVar30 - (long)param_4;
      if ((7 < uVar22) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar22 < 0x40) {
          uVar38 = 0;
/* wm:donate: donate/README.md */
        }
        else {
          uVar38 = uVar22 & 0xffffffffffffffc0;
          puVar29 = puVar34 + 4;
          puVar14 = param_4 + 4;
          uVar40 = uVar38;
          do {
            uVar43 = puVar14[-4];
            uVar45 = puVar14[-1];
            uVar44 = puVar14[-2];
            uVar47 = puVar14[1];
            uVar46 = *puVar14;
            uVar49 = puVar14[3];
            uVar48 = puVar14[2];
            puVar29[-3] = puVar14[-3];
            puVar29[-4] = uVar43;
            puVar29[-1] = uVar45;
            puVar29[-2] = uVar44;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            puVar29[1] = uVar47;
            *puVar29 = uVar46;
            puVar29[3] = uVar49;
            puVar29[2] = uVar48;
            uVar40 = uVar40 - 0x40;
            puVar29 = puVar29 + 8;
            puVar14 = puVar14 + 8;
          } while (uVar40 != 0);
          if (uVar22 == uVar38) goto LAB_002b17fc;
          if ((uVar22 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar38);
            param_4 = (ulong *)((long)param_4 + uVar38);
            goto LAB_002b17ec;
          }
        }
        uVar40 = uVar22 & 0xfffffffffffffff8;
        lVar15 = uVar38 - uVar40;
        puVar25 = (undefined8 *)((long)puVar34 + uVar38);
        puVar27 = (undefined8 *)((long)param_4 + uVar38);
        do {
          *puVar25 = *puVar27;
          lVar15 = lVar15 + 8;
          puVar25 = puVar25 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar15 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar40);
        param_4 = (ulong *)((long)param_4 + uVar40);
        if (uVar22 == uVar40) goto LAB_002b17fc;
      }
LAB_002b17ec:
      do {
/* WM - stripping the watermark breaks the license */
        puVar29 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar29;
      } while (puVar29 != puVar30);
    }
  }
LAB_002b17fc:
  param_2[3] = param_2[3] + uVar13;
  piVar24 = (int *)param_2[1];
  uVar12 = uVar19;
  if (uVar13 < 0x10000) {
    lVar41 = uVar23 + lVar41;
    *(short *)(piVar24 + 1) = (short)uVar13;
    *piVar24 = iVar37;
  }
  else {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
    lVar41 = uVar23 + lVar41;
    *(short *)(piVar24 + 1) = (short)uVar13;
    *piVar24 = iVar37;
  }
joined_r0x002b16f4:
  if (0xffff < lVar41 - 3U) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
  }
  *(short *)((long)piVar24 + 6) = (short)(lVar41 - 3U);
  piVar24 = piVar24 + 2;
  param_2[1] = (long)piVar24;
  param_4 = (ulong *)((long)puVar30 + lVar41);
  uVar19 = uVar18;
  if (puVar33 < param_4) {
    uVar16 = uVar12;
/*  do not claim this as your own  */
  }
  else {
    *(uint *)(lVar28 + ((ulong)(*(long *)(lVar1 + (ulong)uVar17) * -0x30e4432340650000) >>
                       (uVar11 & 0x3f)) * 4) = uVar17 + 2;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e4432340650000) >>
                      (uVar11 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar31;
    if (uVar12 == 0) {
      uVar16 = 0;
    }
    else {
      do {
        uVar16 = uVar18;
        uVar18 = uVar12;
        if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar18)) {
          uVar19 = uVar16;
          uVar16 = uVar18;
          break;
        }
        puVar30 = (ulong *)((long)param_4 + 4);
        lVar15 = -(ulong)uVar18;
        puVar29 = (ulong *)((long)puVar30 + lVar15);
        if (puVar30 < puVar36) {
          if (*puVar29 == *puVar30) {
            lVar41 = 0;
            puVar34 = (ulong *)((long)param_4 + 0xc);
            puVar29 = (ulong *)((long)param_4 + 0xc + lVar15);
            do {
/*  unlicensed copy if this notice is missing  */
              if (puVar36 <= puVar34) goto LAB_002b190c;
              uVar23 = *puVar29;
              uVar13 = *puVar34;
              lVar41 = lVar41 + 8;
              puVar34 = puVar34 + 1;
              puVar29 = puVar29 + 1;
            } while (uVar23 == uVar13);
            uVar13 = uVar13 ^ uVar23;
            uVar23 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = lVar41 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          }
          else {
            uVar23 = *puVar30 ^ *puVar29;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
        }
        else {
          puVar34 = puVar30;
LAB_002b190c:
          if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar29 == (int)*puVar34) {
// WM - unlicensed copy if this notice is missing
              puVar34 = (ulong *)((long)puVar34 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
          }
          if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
            if (*(short *)puVar29 == *(short *)puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
          }
          if (puVar34 < puVar2) {
            if ((char)*puVar29 == (char)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 1);
            }
          }
          uVar23 = (long)puVar34 - (long)puVar30;
        }
        *(int *)(lVar28 + (*param_4 * -0x30e4432340650000 >> (uVar11 & 0x3f)) * 4) =
             (int)param_4 - iVar31;
        if (param_4 <= puVar21) {
          puVar30 = (ulong *)param_2[3];
          uVar13 = *param_4;
          puVar30[1] = param_4[1];
          *puVar30 = uVar13;
          piVar24 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar24 + 1) = 0;
        *piVar24 = 1;
        if (0xffff < uVar23 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
/* keep the notice, keep the source honest - github.com/pengussy */
        }
        param_4 = (ulong *)((long)param_4 + uVar23 + 4);
        *(short *)((long)piVar24 + 6) = (short)(uVar23 + 1);
        piVar24 = piVar24 + 2;
        param_2[1] = (long)piVar24;
        uVar19 = uVar18;
        uVar12 = uVar16;
      } while (param_4 <= puVar33);
    }
  }
  puVar34 = (ulong *)((long)param_4 + uVar35);
  puVar29 = (ulong *)((long)puVar34 + 1);
  puVar30 = param_4;
  if (puVar33 <= puVar29) goto LAB_002b3cc0;
  goto LAB_002b1284;
LAB_002b043c:
  puVar42 = puVar34;
  if (uVar23 < 5) {
LAB_002b0450:
    *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
  }
  puVar34 = (ulong *)(lVar32 + (ulong)uVar12);
  uVar18 = (int)puVar30 - (int)puVar34;
  iVar37 = uVar18 + 3;
  if ((uVar6 < uVar12) && (param_4 < puVar30)) {
    lVar41 = 4;
    puVar29 = (ulong *)(lVar32 + -1 + (ulong)uVar12);
    while( true ) {
      puVar34 = puVar29;
      puVar29 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar29 != (char)*puVar34) break;
      lVar41 = lVar41 + 1;
      puVar30 = puVar29;
      if ((puVar29 <= param_4) || (puVar29 = (ulong *)((long)puVar34 + -1), puVar34 <= puVar3))
      goto LAB_002b0678;
    }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    puVar34 = (ulong *)((long)puVar34 + 1);
LAB_002b0678:
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar14 = (ulong *)((long)puVar30 + lVar41);
    if (puVar14 < puVar36) goto LAB_002b03d8;
LAB_002b04e4:
    puVar34 = puVar14;
LAB_002b04e8:
    if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
      if ((int)*puVar29 == (int)*puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
      }
    }
    if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
      if (*(short *)puVar29 == *(short *)puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      }
    }
    if (puVar34 < puVar2) {
      if ((char)*puVar29 == (char)*puVar34) {
        puVar34 = (ulong *)((long)puVar34 + 1);
      }
    }
    uVar23 = (long)puVar34 - (long)puVar14;
    uVar13 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
joined_r0x002b0604:
    if (puVar21 < puVar30) goto LAB_002b0544;
LAB_002b0608:
    uVar22 = *param_4;
    puVar29[1] = param_4[1];
    *puVar29 = uVar22;
    if (uVar13 < 0x11) {
LAB_002b0630:
      param_2[3] = param_2[3] + uVar13;
      piVar24 = (int *)param_2[1];
      lVar41 = uVar23 + lVar41;
      *(short *)(piVar24 + 1) = (short)uVar13;
      *piVar24 = iVar37;
      uVar12 = uVar19;
      goto joined_r0x002b0654;
    }
    lVar15 = param_2[3];
/*  if you paid for this, you were scammed  */
    uVar22 = param_4[2];
    *(ulong *)(lVar15 + 0x18) = param_4[3];
    *(ulong *)(lVar15 + 0x10) = uVar22;
    if (uVar13 - 0x10 < 0x11) goto LAB_002b0630;
    puVar29 = (ulong *)(lVar15 + 0x20);
    puVar34 = param_4 + 6;
    do {
      uVar22 = puVar34[-2];
      puVar29[1] = puVar34[-1];
      *puVar29 = uVar22;
      uVar22 = *puVar34;
      puVar29[3] = puVar34[1];
      puVar29[2] = uVar22;
      puVar29 = puVar29 + 4;
      puVar34 = puVar34 + 4;
    } while (puVar29 < (ulong *)(lVar15 + uVar13));
  }
  else {
    lVar41 = 4;
    puVar29 = (ulong *)((long)puVar34 + 4);
    puVar14 = (ulong *)((long)puVar30 + 4);
    uVar16 = uVar19;
joined_r0x002b03d4:
    uVar19 = uVar16;
    if (puVar36 <= puVar14) goto LAB_002b04e4;
LAB_002b03d8:
    if (*puVar29 != *puVar14) {
      uVar23 = *puVar14 ^ *puVar29;
      uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
      uVar13 = (long)puVar30 - (long)param_4;
      puVar29 = (ulong *)param_2[3];
/* unlicensed copy if this notice is missing - github.com/pengussy */
      goto joined_r0x002b0604;
    }
    lVar15 = 0;
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar34 = (ulong *)((long)puVar30 + lVar41);
    do {
      puVar34 = puVar34 + 1;
      puVar29 = puVar29 + 1;
      if (puVar36 <= puVar34) goto LAB_002b04e8;
      lVar15 = lVar15 + 8;
    } while (*puVar29 == *puVar34);
    uVar23 = *puVar34 ^ *puVar29;
    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    uVar23 = lVar15 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
    uVar13 = (long)puVar30 - (long)param_4;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    puVar29 = (ulong *)param_2[3];
    if (puVar30 <= puVar21) goto LAB_002b0608;
LAB_002b0544:
    puVar34 = puVar29;
    if (param_4 <= puVar21) {
      puVar34 = (ulong *)((long)puVar29 + ((long)puVar21 - (long)param_4));
      uVar22 = *param_4;
      puVar14 = puVar29 + 2;
      puVar29[1] = param_4[1];
      *puVar29 = uVar22;
      if (0x10 < (ulong)((long)puVar21 - (long)param_4)) {
        do {
          uVar22 = param_4[2];
          puVar14[1] = param_4[3];
          *puVar14 = uVar22;
          uVar22 = param_4[4];
          puVar14[3] = param_4[5];
          puVar14[2] = uVar22;
          puVar14 = puVar14 + 4;
          param_4 = param_4 + 4;
        } while (puVar14 < puVar34);
      }
      param_4 = puVar21;
    }
// WM - keep the notice, keep the source honest
    if (param_4 < puVar30) {
      uVar22 = (long)puVar30 - (long)param_4;
      if ((7 < uVar22) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar22 < 0x40) {
          uVar38 = 0;
        }
        else {
          uVar38 = uVar22 & 0xffffffffffffffc0;
          puVar29 = puVar34 + 4;
          puVar14 = param_4 + 4;
          uVar40 = uVar38;
          do {
            uVar43 = puVar14[-4];
            uVar45 = puVar14[-1];
            uVar44 = puVar14[-2];
            uVar47 = puVar14[1];
            uVar46 = *puVar14;
            uVar49 = puVar14[3];
            uVar48 = puVar14[2];
            puVar29[-3] = puVar14[-3];
            puVar29[-4] = uVar43;
/* wm:no support for modified copies */
            puVar29[-1] = uVar45;
            puVar29[-2] = uVar44;
            puVar29[1] = uVar47;
            *puVar29 = uVar46;
            puVar29[3] = uVar49;
            puVar29[2] = uVar48;
            uVar40 = uVar40 - 0x40;
            puVar29 = puVar29 + 8;
            puVar14 = puVar14 + 8;
          } while (uVar40 != 0);
          if (uVar22 == uVar38) goto LAB_002b075c;
          if ((uVar22 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar38);
            param_4 = (ulong *)((long)param_4 + uVar38);
            goto LAB_002b074c;
          }
        }
        uVar40 = uVar22 & 0xfffffffffffffff8;
        lVar15 = uVar38 - uVar40;
        puVar25 = (undefined8 *)((long)puVar34 + uVar38);
        puVar27 = (undefined8 *)((long)param_4 + uVar38);
        do {
          *puVar25 = *puVar27;
          lVar15 = lVar15 + 8;
          puVar25 = puVar25 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar15 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar40);
        param_4 = (ulong *)((long)param_4 + uVar40);
        if (uVar22 == uVar40) goto LAB_002b075c;
      }
LAB_002b074c:
      do {
/*  more drops soon - github.com/pengussy  */
        puVar29 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar29;
      } while (puVar29 != puVar30);
    }
  }
LAB_002b075c:
  param_2[3] = param_2[3] + uVar13;
  piVar24 = (int *)param_2[1];
  uVar12 = uVar19;
  if (uVar13 < 0x10000) {
    lVar41 = uVar23 + lVar41;
    *(short *)(piVar24 + 1) = (short)uVar13;
    *piVar24 = iVar37;
  }
  else {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
    lVar41 = uVar23 + lVar41;
    *(short *)(piVar24 + 1) = (short)uVar13;
    *piVar24 = iVar37;
  }
joined_r0x002b0654:
  if (0xffff < lVar41 - 3U) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
  }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  *(short *)((long)piVar24 + 6) = (short)(lVar41 - 3U);
  piVar24 = piVar24 + 2;
  param_2[1] = (long)piVar24;
  param_4 = (ulong *)((long)puVar30 + lVar41);
  uVar19 = uVar18;
  if (puVar33 < param_4) {
    uVar16 = uVar12;
  }
  else {
    *(uint *)(lVar28 + ((ulong)(*(long *)(lVar1 + (ulong)uVar17) * -0x30e44323405a9d00) >>
                       (uVar11 & 0x3f)) * 4) = uVar17 + 2;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323405a9d00) >>
                      (uVar11 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar31;
    if (uVar12 == 0) {
      uVar16 = 0;
    }
    else {
      do {
        uVar16 = uVar18;
        uVar18 = uVar12;
        if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar18)) {
          uVar19 = uVar16;
          uVar16 = uVar18;
          break;
        }
        puVar30 = (ulong *)((long)param_4 + 4);
        lVar15 = -(ulong)uVar18;
        puVar29 = (ulong *)((long)puVar30 + lVar15);
        if (puVar30 < puVar36) {
          if (*puVar29 == *puVar30) {
            lVar41 = 0;
            puVar34 = (ulong *)((long)param_4 + 0xc);
            puVar29 = (ulong *)((long)param_4 + 0xc + lVar15);
            do {
// donate: donate/README.md
              if (puVar36 <= puVar34) goto LAB_002b086c;
              uVar23 = *puVar29;
              uVar13 = *puVar34;
              lVar41 = lVar41 + 8;
              puVar34 = puVar34 + 1;
              puVar29 = puVar29 + 1;
            } while (uVar23 == uVar13);
            uVar13 = uVar13 ^ uVar23;
            uVar23 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = lVar41 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          }
          else {
            uVar23 = *puVar30 ^ *puVar29;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
        }
        else {
          puVar34 = puVar30;
LAB_002b086c:
          if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar29 == (int)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
          }
/* proprietary - see LICENSE - do not sell */
          if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
            if (*(short *)puVar29 == *(short *)puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
          }
          if (puVar34 < puVar2) {
            if ((char)*puVar29 == (char)*puVar34) {
              puVar34 = (ulong *)((long)puVar34 + 1);
            }
          }
          uVar23 = (long)puVar34 - (long)puVar30;
        }
        *(int *)(lVar28 + (*param_4 * -0x30e44323405a9d00 >> (uVar11 & 0x3f)) * 4) =
             (int)param_4 - iVar31;
        if (param_4 <= puVar21) {
          puVar30 = (ulong *)param_2[3];
          uVar13 = *param_4;
          puVar30[1] = param_4[1];
          *puVar30 = uVar13;
/* WM - if you paid for this, you were scammed */
          piVar24 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar24 + 1) = 0;
        *piVar24 = 1;
        if (0xffff < uVar23 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
        }
        param_4 = (ulong *)((long)param_4 + uVar23 + 4);
        *(short *)((long)piVar24 + 6) = (short)(uVar23 + 1);
        piVar24 = piVar24 + 2;
        param_2[1] = (long)piVar24;
        uVar12 = uVar16;
        uVar19 = uVar18;
      } while (param_4 <= puVar33);
    }
  }
  puVar34 = (ulong *)((long)param_4 + uVar35);
  puVar29 = (ulong *)((long)puVar34 + 1);
  puVar30 = param_4;
  if (puVar33 <= puVar29) goto LAB_002b3cc0;
  goto LAB_002b01e4;
LAB_002b3cb8:
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uVar19 = 0;
  goto LAB_002b3cc0;
LAB_002b3720:
  puVar42 = puVar34;
  if (uVar11 < 5) {
LAB_002b3734:
    *(int *)(lVar28 + uVar13 * 4) = (int)puVar42 - iVar31;
  }
  puVar34 = (ulong *)(lVar32 + (ulong)uVar17);
  uVar20 = (int)puVar30 - (int)puVar34;
  iVar37 = uVar20 + 3;
  if ((uVar6 < uVar17) && (param_4 < puVar30)) {
    lVar41 = 4;
    puVar29 = (ulong *)(lVar32 + -1 + (ulong)uVar17);
    while( true ) {
      puVar34 = puVar29;
      puVar29 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar29 != (char)*puVar34) break;
      lVar41 = lVar41 + 1;
      puVar30 = puVar29;
      if ((puVar29 <= param_4) || (puVar29 = (ulong *)((long)puVar34 + -1), puVar34 <= puVar3))
      goto LAB_002b38e8;
    }
    puVar34 = (ulong *)((long)puVar34 + 1);
LAB_002b38e8:
    puVar29 = (ulong *)((long)puVar34 + lVar41);
// WM - more drops soon - github.com/pengussy
    puVar14 = (ulong *)((long)puVar30 + lVar41);
    if (puVar14 < puVar36) goto LAB_002b3654;
LAB_002b37cc:
    puVar34 = puVar14;
LAB_002b37d0:
    if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
      if ((int)*puVar29 == (int)*puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
      }
    }
    if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
      if (*(short *)puVar29 == *(short *)puVar34) {
        puVar29 = (ulong *)((long)puVar29 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar34 < puVar2) {
      if ((char)*puVar29 == (char)*puVar34) {
        puVar34 = (ulong *)((long)puVar34 + 1);
      }
    }
    uVar11 = (long)puVar34 - (long)puVar14;
    uVar23 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
joined_r0x002b36d4:
    if (puVar21 < puVar30) goto LAB_002b3830;
LAB_002b36d8:
    uVar13 = *param_4;
    puVar29[1] = param_4[1];
    *puVar29 = uVar13;
    if (0x10 < uVar23) {
      lVar15 = param_2[3];
      uVar13 = param_4[2];
      *(ulong *)(lVar15 + 0x18) = param_4[3];
// WM - thanks for reading - discord.gg/sdkhDjTex
      *(ulong *)(lVar15 + 0x10) = uVar13;
      if (uVar23 - 0x10 < 0x11) goto LAB_002b3700;
      puVar29 = (ulong *)(lVar15 + 0x20);
      puVar34 = param_4 + 6;
      do {
        uVar13 = puVar34[-2];
        puVar29[1] = puVar34[-1];
        *puVar29 = uVar13;
        uVar13 = *puVar34;
        puVar29[3] = puVar34[1];
        puVar29[2] = uVar13;
        puVar29 = puVar29 + 4;
        puVar34 = puVar34 + 4;
      } while (puVar29 < (ulong *)(lVar15 + uVar23));
      goto LAB_002b39dc;
    }
LAB_002b3700:
    param_2[3] = param_2[3] + uVar23;
    piVar24 = (int *)param_2[1];
LAB_002b39f4:
    lVar41 = uVar11 + lVar41;
    *(short *)(piVar24 + 1) = (short)uVar23;
    *piVar24 = iVar37;
    uVar11 = lVar41 - 3;
    if (uVar11 < 0x10000) goto LAB_002b3a10;
LAB_002b3a5c:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
    *(short *)((long)piVar24 + 6) = (short)uVar11;
    piVar24 = piVar24 + 2;
    param_2[1] = (long)piVar24;
    param_4 = (ulong *)((long)puVar30 + lVar41);
    if (param_4 <= puVar33) goto LAB_002b3a88;
  }
  else {
    lVar41 = 4;
    puVar29 = (ulong *)((long)puVar34 + 4);
/*  reversing this took months of machine time  */
    puVar14 = (ulong *)((long)puVar30 + 4);
    uVar16 = uVar19;
joined_r0x002b3650:
    uVar19 = uVar16;
    if (puVar36 <= puVar14) goto LAB_002b37cc;
LAB_002b3654:
    if (*puVar29 != *puVar14) {
      uVar11 = *puVar14 ^ *puVar29;
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
      uVar23 = (long)puVar30 - (long)param_4;
      puVar29 = (ulong *)param_2[3];
      goto joined_r0x002b36d4;
    }
    lVar15 = 0;
    puVar29 = (ulong *)((long)puVar34 + lVar41);
    puVar34 = (ulong *)((long)puVar30 + lVar41);
    do {
      puVar34 = puVar34 + 1;
      puVar29 = puVar29 + 1;
/* WM - no support for modified copies */
      if (puVar36 <= puVar34) goto LAB_002b37d0;
      lVar15 = lVar15 + 8;
    } while (*puVar29 == *puVar34);
    uVar11 = *puVar34 ^ *puVar29;
    uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = lVar15 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
    uVar23 = (long)puVar30 - (long)param_4;
    puVar29 = (ulong *)param_2[3];
    if (puVar30 <= puVar21) goto LAB_002b36d8;
LAB_002b3830:
    puVar34 = puVar29;
    if (param_4 <= puVar21) {
      puVar34 = (ulong *)((long)puVar29 + ((long)puVar21 - (long)param_4));
      uVar13 = *param_4;
      puVar14 = puVar29 + 2;
      puVar29[1] = param_4[1];
      *puVar29 = uVar13;
      if (0x10 < (ulong)((long)puVar21 - (long)param_4)) {
        do {
          uVar13 = param_4[2];
          puVar14[1] = param_4[3];
          *puVar14 = uVar13;
          uVar13 = param_4[4];
          puVar14[3] = param_4[5];
          puVar14[2] = uVar13;
          puVar14 = puVar14 + 4;
          param_4 = param_4 + 4;
/* watermarked copy - do not remove */
        } while (puVar14 < puVar34);
      }
      param_4 = puVar21;
    }
    if (param_4 < puVar30) {
      uVar13 = (long)puVar30 - (long)param_4;
      if ((7 < uVar13) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar13 < 0x40) {
          uVar40 = 0;
        }
        else {
          uVar40 = uVar13 & 0xffffffffffffffc0;
          puVar29 = puVar34 + 4;
          puVar14 = param_4 + 4;
          uVar22 = uVar40;
          do {
            uVar38 = puVar14[-4];
            uVar44 = puVar14[-1];
            uVar43 = puVar14[-2];
            uVar46 = puVar14[1];
            uVar45 = *puVar14;
            uVar48 = puVar14[3];
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
            uVar47 = puVar14[2];
            puVar29[-3] = puVar14[-3];
            puVar29[-4] = uVar38;
            puVar29[-1] = uVar44;
            puVar29[-2] = uVar43;
            puVar29[1] = uVar46;
            *puVar29 = uVar45;
            puVar29[3] = uVar48;
            puVar29[2] = uVar47;
            uVar22 = uVar22 - 0x40;
            puVar29 = puVar29 + 8;
            puVar14 = puVar14 + 8;
          } while (uVar22 != 0);
          if (uVar13 == uVar40) goto LAB_002b39dc;
          if ((uVar13 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar40);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
            param_4 = (ulong *)((long)param_4 + uVar40);
            goto LAB_002b39cc;
          }
        }
        uVar22 = uVar13 & 0xfffffffffffffff8;
        lVar15 = uVar40 - uVar22;
        puVar25 = (undefined8 *)((long)puVar34 + uVar40);
        puVar27 = (undefined8 *)((long)param_4 + uVar40);
        do {
          *puVar25 = *puVar27;
          lVar15 = lVar15 + 8;
          puVar25 = puVar25 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar15 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar22);
        param_4 = (ulong *)((long)param_4 + uVar22);
        if (uVar13 == uVar22) goto LAB_002b39dc;
      }
LAB_002b39cc:
      do {
        puVar29 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar29;
      } while (puVar29 != puVar30);
    }
LAB_002b39dc:
    param_2[3] = param_2[3] + uVar23;
    piVar24 = (int *)param_2[1];
    if (uVar23 < 0x10000) goto LAB_002b39f4;
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
    lVar41 = uVar11 + lVar41;
    *(short *)(piVar24 + 1) = (short)uVar23;
    *piVar24 = iVar37;
    uVar11 = lVar41 - 3;
    if (0xffff < uVar11) goto LAB_002b3a5c;
/* watermarked copy - do not remove - github.com/pengussy */
LAB_002b3a10:
    *(short *)((long)piVar24 + 6) = (short)uVar11;
    piVar24 = piVar24 + 2;
    param_2[1] = (long)piVar24;
    param_4 = (ulong *)((long)puVar30 + lVar41);
    if (param_4 <= puVar33) {
LAB_002b3a88:
      *(uint *)(lVar28 + (ulong)((uint)(*(int *)(lVar1 + (ulong)uVar18) * -0x61c8864f) >>
                                (ulong)(uVar12 & 0x1f)) * 4) = uVar18 + 2;
      *(int *)(lVar28 + (ulong)((uint)(*(int *)((long)param_4 - 2U) * -0x61c8864f) >>
                               (ulong)(uVar12 & 0x1f)) * 4) =
           (int)(int *)((long)param_4 - 2U) - iVar31;
      if (uVar19 == 0) {
        uVar16 = 0;
      }
      else {
        do {
          uVar16 = uVar20;
          uVar17 = uVar19;
          iVar37 = (int)*param_4;
          if (iVar37 != *(int *)((long)param_4 - (ulong)uVar17)) {
            uVar20 = uVar16;
            uVar16 = uVar17;
            break;
          }
          puVar30 = (ulong *)((long)param_4 + 4);
          lVar15 = -(ulong)uVar17;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          puVar29 = (ulong *)((long)puVar30 + lVar15);
          iVar26 = (int)param_4;
          if (puVar30 < puVar36) {
            if (*puVar29 == *puVar30) {
              lVar41 = 0;
              puVar29 = (ulong *)((long)param_4 + 0xc + lVar15);
              puVar34 = (ulong *)((long)param_4 + 0xc);
              do {
                if (puVar36 <= puVar34) goto LAB_002b3b5c;
                uVar23 = *puVar29;
                uVar11 = *puVar34;
                lVar41 = lVar41 + 8;
                puVar29 = puVar29 + 1;
                puVar34 = puVar34 + 1;
              } while (uVar23 == uVar11);
              uVar11 = uVar11 ^ uVar23;
              uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
              uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
              uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              uVar11 = lVar41 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
/* donate: donate/README.md - github.com/pengussy */
              *(int *)(lVar28 + (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f)) * 4)
                   = iVar26 - iVar31;
            }
            else {
              uVar11 = *puVar30 ^ *puVar29;
              uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
              uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
              uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
              *(int *)(lVar28 + (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f)) * 4)
                   = iVar26 - iVar31;
            }
          }
          else {
            puVar34 = puVar30;
LAB_002b3b5c:
            if (puVar34 < (ulong *)((long)puVar2 - 3U)) {
              if ((int)*puVar29 == (int)*puVar34) {
                puVar29 = (ulong *)((long)puVar29 + 4);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
                puVar34 = (ulong *)((long)puVar34 + 4);
              }
            }
            if (puVar34 < (ulong *)((long)puVar2 - 1U)) {
              if (*(short *)puVar29 == *(short *)puVar34) {
                puVar29 = (ulong *)((long)puVar29 + 2);
                puVar34 = (ulong *)((long)puVar34 + 2);
              }
            }
            if (puVar34 < puVar2) {
              if ((char)*puVar29 == (char)*puVar34) {
                puVar34 = (ulong *)((long)puVar34 + 1);
              }
            }
            uVar11 = (long)puVar34 - (long)puVar30;
            *(int *)(lVar28 + (ulong)((uint)(iVar37 * -0x61c8864f) >> (ulong)(uVar12 & 0x1f)) * 4) =
                 iVar26 - iVar31;
          }
          if (param_4 <= puVar21) {
            puVar30 = (ulong *)param_2[3];
            uVar23 = *param_4;
            puVar30[1] = param_4[1];
            *puVar30 = uVar23;
            piVar24 = (int *)param_2[1];
          }
          *(undefined2 *)(piVar24 + 1) = 0;
          *piVar24 = 1;
          if (0xffff < uVar11 + 1) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
          }
          param_4 = (ulong *)((long)param_4 + uVar11 + 4);
/* wm:if you paid for this, you were scammed */
          *(short *)((long)piVar24 + 6) = (short)(uVar11 + 1);
          piVar24 = piVar24 + 2;
          param_2[1] = (long)piVar24;
          uVar19 = uVar16;
          uVar20 = uVar17;
        } while (param_4 <= puVar33);
      }
      goto LAB_002b3c90;
    }
  }
  uVar16 = uVar19;
LAB_002b3c90:
  uVar19 = uVar20;
  puVar34 = (ulong *)((long)param_4 + uVar35);
  puVar29 = (ulong *)((long)puVar34 + 1);
  puVar30 = param_4;
  if (puVar33 <= puVar29) goto LAB_002b3cc0;
  goto LAB_002b3458;
}

