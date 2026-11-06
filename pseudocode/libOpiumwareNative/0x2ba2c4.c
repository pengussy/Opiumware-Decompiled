/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2ba2c4:6296cba949
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_002ba2c4(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  int *piVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  int *piVar26;
  int iVar27;
  long lVar28;
  ulong *puVar29;
  int iVar30;
  ulong uVar31;
/* wm:donate: donate/README.md */
  ulong uVar32;
  ulong *puVar33;
  ulong *puVar34;
  uint uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  ulong *puVar38;
  long lVar39;
  int iVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uStack_68;
/* more drops soon - github.com/pengussy */
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar15 = puVar1 + -2;
  lVar39 = *(long *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar19 = *(uint *)(param_1 + 0x110);
  if (uVar19 < 5) {
    uVar19 = 4;
  }
  if (5 < uVar19) {
    uVar19 = 6;
  }
  uVar7 = *(uint *)(param_1 + 0x10c);
  uVar20 = uVar7;
  if (uVar7 < 5) {
    uVar20 = 4;
  }
  if (5 < uVar20) {
    uVar20 = 6;
  }
  iVar30 = *param_3;
  iVar40 = param_3[1];
  puVar16 = *(ulong **)(param_1 + 0xf8);
  puVar4 = (ulong *)*puVar16;
  uVar5 = puVar16[1];
  puVar2 = (ulong *)(lVar39 + (ulong)uVar6);
  puVar16 = (ulong *)(uVar5 + (uint)puVar16[3]);
  puVar23 = param_4;
  if ((((int)param_4 - (int)puVar2) - (int)puVar16) + (int)puVar4 == 0) {
    puVar23 = (ulong *)((long)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  uVar8 = *(uint *)(param_1 + 0x2c);
  uVar17 = (ulong)uVar8;
  iVar10 = (int)puVar15 - (int)(ulong *)(lVar39 + uVar17);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  iVar27 = 8;
  if (iVar10 + 1U < 8) {
    iVar27 = iVar10 + 1;
  }
  iVar10 = 0;
  if ((ulong *)(lVar39 + uVar17) <= puVar15) {
    iVar10 = iVar27;
  }
  uVar21 = (ulong)(iVar10 + uVar8);
  if (uVar8 < iVar10 + uVar8) {
    lVar22 = *(long *)(param_1 + 0x70);
    lVar28 = *(long *)(param_1 + 0x38);
    uVar31 = *(ulong *)(param_1 + 0x60);
    uVar32 = (ulong)(0x38 - *(int *)(param_1 + 0x34));
    uVar8 = 0x18 - *(int *)(param_1 + 0x34);
    lVar18 = param_1 + 0x40;
    if (uVar7 < 5) {
      if (uVar19 == 6) {
// WM - found on a paste site? it was re-uploaded illegally
        do {
          uVar12 = (*(long *)(lVar39 + uVar17) * -0x30e4432340650000 ^ uVar31) >> (uVar32 & 0x3f);
          uVar36 = (ulong)(((uint)(uVar12 >> 8) & 0xffffff) << (ulong)(uVar20 & 0x1f));
          Hint_Prefetch(lVar22 + uVar36 * 4,0,0,0);
          Hint_Prefetch(lVar28 + uVar36,0,0,0);
          *(int *)(lVar18 + (uVar17 & 7) * 4) = (int)uVar12;
          uVar17 = uVar17 + 1;
        } while (uVar21 != uVar17);
      }
      else if (uVar19 == 5) {
        do {
          uVar12 = (*(long *)(lVar39 + uVar17) * -0x30e4432345000000 ^ uVar31) >> (uVar32 & 0x3f);
          uVar36 = (ulong)(((uint)(uVar12 >> 8) & 0xffffff) << (ulong)(uVar20 & 0x1f));
          Hint_Prefetch(lVar22 + uVar36 * 4,0,0,0);
          Hint_Prefetch(lVar28 + uVar36,0,0,0);
          *(int *)(lVar18 + (uVar17 & 7) * 4) = (int)uVar12;
/*  stripping the watermark breaks the license  */
          uVar17 = uVar17 + 1;
        } while (uVar21 != uVar17);
      }
      else {
        do {
          uVar11 = (*(int *)(lVar39 + uVar17) * -0x61c8864f ^ (uint)uVar31) >> (ulong)(uVar8 & 0x1f)
          ;
          uVar32 = (ulong)((uVar11 >> 8) << (ulong)(uVar20 & 0x1f));
          Hint_Prefetch(lVar22 + uVar32 * 4,0,0,0);
          Hint_Prefetch(lVar28 + uVar32,0,0,0);
          *(uint *)(lVar18 + (uVar17 & 7) * 4) = uVar11;
          uVar17 = uVar17 + 1;
        } while (uVar21 != uVar17);
      }
    }
    else {
      do {
        if (uVar19 == 6) {
          uVar12 = *(long *)(lVar39 + uVar17) * -0x30e4432340650000;
LAB_002ba424:
          uVar11 = (uint)((uVar12 ^ uVar31) >> (uVar32 & 0x3f));
        }
        else {
          if (uVar19 == 5) {
            uVar12 = *(long *)(lVar39 + uVar17) * -0x30e4432345000000;
            goto LAB_002ba424;
          }
          uVar11 = (*(int *)(lVar39 + uVar17) * -0x61c8864f ^ (uint)uVar31) >> (ulong)(uVar8 & 0x1f)
          ;
        }
        uVar12 = (ulong)((uVar11 >> 8) << (ulong)(uVar20 & 0x1f));
        lVar13 = lVar22 + uVar12 * 4;
        Hint_Prefetch(lVar13,0,0,0);
        Hint_Prefetch(lVar13 + 0x40,0,0,0);
        lVar13 = lVar28 + uVar12;
        Hint_Prefetch(lVar13,0,0,0);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
        if (uVar7 != 5) {
          Hint_Prefetch(lVar13 + 0x20,0,0,0);
        }
        *(uint *)(lVar18 + (uVar17 & 7) * 4) = uVar11;
        uVar17 = uVar17 + 1;
      } while (uVar21 != uVar17);
    }
  }
  if (puVar23 < puVar15) {
    uVar8 = uVar6 + ((int)uVar5 - (int)puVar4);
    puVar14 = puVar1 + -4;
    lVar18 = uVar5 - uVar8;
    do {
      puVar38 = (ulong *)((long)puVar23 + 1);
      uVar11 = (((int)puVar23 - (int)lVar39) - iVar30) + 1;
      piVar26 = (int *)(uVar5 + (uVar11 - uVar8));
      if (uVar6 <= uVar11) {
        piVar26 = (int *)(lVar39 + (ulong)uVar11);
      }
      if ((uVar11 - uVar6 < 0xfffffffd) && (*piVar26 == *(int *)puVar38)) {
        puVar24 = puVar4;
/* proprietary - see LICENSE - do not sell */
        if (uVar6 <= uVar11) {
          puVar24 = puVar1;
        }
        lVar22 = func_0x002ad924((long)puVar23 + 5,piVar26 + 1,puVar1,puVar24,puVar2);
        uVar17 = lVar22 + 4;
        iVar27 = 1;
LAB_002ba7b8:
        uVar21 = (long)puVar38 - (long)param_4;
        puVar23 = (ulong *)param_2[3];
        iVar10 = iVar30;
joined_r0x002ba8c0:
        uVar9 = (undefined2)uVar21;
        if (puVar14 < puVar38) {
          puVar24 = puVar23;
          if (param_4 <= puVar14) {
            puVar24 = (ulong *)((long)puVar23 + ((long)puVar14 - (long)param_4));
            uVar31 = *param_4;
            puVar29 = puVar23 + 2;
            puVar23[1] = param_4[1];
            *puVar23 = uVar31;
            if (0x10 < (ulong)((long)puVar14 - (long)param_4)) {
              do {
                uVar31 = param_4[2];
                puVar29[1] = param_4[3];
                *puVar29 = uVar31;
                uVar31 = param_4[4];
                puVar29[3] = param_4[5];
                puVar29[2] = uVar31;
                puVar29 = puVar29 + 4;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                param_4 = param_4 + 4;
              } while (puVar29 < puVar24);
            }
            param_4 = puVar14;
          }
          if (param_4 < puVar38) {
            uVar31 = (long)puVar38 - (long)param_4;
            if ((7 < uVar31) && (0x3f < (ulong)((long)puVar24 - (long)param_4))) {
              if (uVar31 < 0x40) {
                uVar12 = 0;
              }
              else {
                uVar12 = uVar31 & 0xffffffffffffffc0;
                puVar23 = puVar24 + 4;
                puVar29 = param_4 + 4;
                uVar32 = uVar12;
                do {
                  uVar36 = puVar29[-4];
/* WM - watermarked copy - do not remove */
                  uVar42 = puVar29[-1];
                  uVar41 = puVar29[-2];
                  uVar44 = puVar29[1];
                  uVar43 = *puVar29;
                  uVar46 = puVar29[3];
                  uVar45 = puVar29[2];
                  puVar23[-3] = puVar29[-3];
                  puVar23[-4] = uVar36;
                  puVar23[-1] = uVar42;
                  puVar23[-2] = uVar41;
                  puVar23[1] = uVar44;
                  *puVar23 = uVar43;
                  puVar23[3] = uVar46;
                  puVar23[2] = uVar45;
                  uVar32 = uVar32 - 0x40;
                  puVar23 = puVar23 + 8;
                  puVar29 = puVar29 + 8;
                } while (uVar32 != 0);
                if (uVar31 == uVar12) goto LAB_002ba9d0;
                if ((uVar31 & 0x38) == 0) {
                  puVar24 = (ulong *)((long)puVar24 + uVar12);
                  param_4 = (ulong *)((long)param_4 + uVar12);
                  goto LAB_002ba9c0;
                }
              }
              uVar32 = uVar31 & 0xfffffffffffffff8;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              lVar22 = uVar12 - uVar32;
              puVar25 = (undefined8 *)((long)puVar24 + uVar12);
              puVar37 = (undefined8 *)((long)param_4 + uVar12);
              do {
                *puVar25 = *puVar37;
                lVar22 = lVar22 + 8;
                puVar25 = puVar25 + 1;
                puVar37 = puVar37 + 1;
              } while (lVar22 != 0);
              puVar24 = (ulong *)((long)puVar24 + uVar32);
              param_4 = (ulong *)((long)param_4 + uVar32);
              if (uVar31 == uVar32) goto LAB_002ba9d0;
            }
LAB_002ba9c0:
            do {
              puVar23 = (ulong *)((long)param_4 + 1);
              *(char *)puVar24 = (char)*param_4;
              puVar24 = (ulong *)((long)puVar24 + 1);
              param_4 = puVar23;
            } while (puVar23 != puVar38);
          }
LAB_002ba9d0:
          param_2[3] = param_2[3] + uVar21;
          piVar26 = (int *)param_2[1];
          if (0xffff < uVar21) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar26 - *param_2) >> 3);
            *(undefined2 *)(piVar26 + 1) = uVar9;
            *piVar26 = iVar27;
            goto joined_r0x002ba918;
          }
          *(undefined2 *)(piVar26 + 1) = uVar9;
          *piVar26 = iVar27;
          if (uVar17 - 3 < 0x10000) goto LAB_002baa00;
/* WM - stripping the watermark breaks the license */
LAB_002bae9c:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar26 - *param_2) >> 3);
          *(short *)((long)piVar26 + 6) = (short)uVar17 + -3;
          piVar26 = piVar26 + 2;
          param_2[1] = (long)piVar26;
          iVar30 = *(int *)(param_1 + 300);
        }
        else {
          uVar31 = *param_4;
          puVar23[1] = param_4[1];
          *puVar23 = uVar31;
          if (0x10 < uVar21) {
            lVar22 = param_2[3];
            uVar31 = param_4[2];
            *(ulong *)(lVar22 + 0x18) = param_4[3];
            *(ulong *)(lVar22 + 0x10) = uVar31;
            if (0x10 < uVar21 - 0x10) {
              puVar23 = (ulong *)(lVar22 + 0x20);
              puVar24 = param_4 + 6;
              do {
                uVar31 = puVar24[-2];
                puVar23[1] = puVar24[-1];
                *puVar23 = uVar31;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                uVar31 = *puVar24;
                puVar23[3] = puVar24[1];
                puVar23[2] = uVar31;
                puVar23 = puVar23 + 4;
                puVar24 = puVar24 + 4;
              } while (puVar23 < (ulong *)(lVar22 + uVar21));
              goto LAB_002ba9d0;
            }
          }
          param_2[3] = param_2[3] + uVar21;
          piVar26 = (int *)param_2[1];
          *(undefined2 *)(piVar26 + 1) = uVar9;
          *piVar26 = iVar27;
joined_r0x002ba918:
          if (0xffff < uVar17 - 3) goto LAB_002bae9c;
LAB_002baa00:
          *(short *)((long)piVar26 + 6) = (short)uVar17 + -3;
          piVar26 = piVar26 + 2;
          param_2[1] = (long)piVar26;
          iVar30 = *(int *)(param_1 + 300);
        }
        if (iVar30 != 0) {
// chat: discord.gg/sdkhDjTex
          uVar11 = *(uint *)(param_1 + 0x2c);
          uVar21 = (ulong)uVar11;
          iVar27 = (int)puVar15 - (int)(ulong *)(lVar39 + uVar21);
          iVar30 = 8;
          if (iVar27 + 1U < 8) {
            iVar30 = iVar27 + 1;
          }
          iVar27 = 0;
          if ((ulong *)(lVar39 + uVar21) <= puVar15) {
            iVar27 = iVar30;
          }
          if (uVar11 < iVar27 + uVar11) {
            lVar22 = *(long *)(param_1 + 0x70);
            lVar28 = *(long *)(param_1 + 0x38);
            iVar30 = *(int *)(param_1 + 0x34);
            uVar31 = *(ulong *)(param_1 + 0x60);
            do {
              if (uVar19 == 5) {
                uVar32 = *(long *)(lVar39 + uVar21) * -0x30e4432345000000;
LAB_002baaa8:
                uVar32 = (uVar32 ^ uVar31) >> ((ulong)(0x38 - iVar30) & 0x3f);
                uVar35 = (uint)uVar32;
                uVar32 = (ulong)(((uint)(uVar32 >> 8) & 0xffffff) << (ulong)(uVar20 & 0x1f));
                lVar13 = lVar22 + uVar32 * 4;
                Hint_Prefetch(lVar13,0,0,0);
                if (4 < uVar7) goto LAB_002baaf4;
LAB_002baa68:
                lVar13 = lVar28 + uVar32;
LAB_002baa6c:
                Hint_Prefetch(lVar13,0,0,0);
              }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              else {
                if (uVar19 == 6) {
                  uVar32 = *(long *)(lVar39 + uVar21) * -0x30e4432340650000;
                  goto LAB_002baaa8;
                }
                uVar35 = (*(int *)(lVar39 + uVar21) * -0x61c8864f ^ (uint)uVar31) >>
                         (ulong)(0x18U - iVar30 & 0x1f);
                uVar32 = (ulong)((uVar35 >> 8) << (ulong)(uVar20 & 0x1f));
                lVar13 = lVar22 + uVar32 * 4;
                Hint_Prefetch(lVar13,0,0,0);
                if (uVar7 < 5) goto LAB_002baa68;
LAB_002baaf4:
                Hint_Prefetch(lVar13 + 0x40,0,0,0);
                lVar13 = lVar28 + uVar32;
                Hint_Prefetch(lVar13,0,0,0);
                if (uVar7 != 5) {
                  lVar13 = lVar13 + 0x20;
                  goto LAB_002baa6c;
                }
              }
              *(uint *)(param_1 + 0x40 + (uVar21 & 7) * 4) = uVar35;
              uVar21 = uVar21 + 1;
            } while (iVar27 + uVar11 != uVar21);
          }
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar38 + uVar17);
        if (puVar15 < param_4) {
          puVar23 = param_4;
          iVar30 = iVar10;
        }
        else {
          do {
            iVar30 = iVar40;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
            iVar27 = iVar10;
            uVar11 = ((int)param_4 - (int)lVar39) - iVar30;
            lVar22 = lVar18;
            if (uVar6 <= uVar11) {
              lVar22 = lVar39;
            }
            if ((0xfffffffc < uVar11 - uVar6) ||
               (piVar3 = (int *)(lVar22 + (ulong)uVar11), *piVar3 != (int)*param_4)) {
              puVar23 = param_4;
              iVar40 = iVar30;
              iVar30 = iVar27;
              break;
            }
            puVar23 = puVar4;
            if (uVar6 <= uVar11) {
              puVar23 = puVar1;
            }
            puVar38 = (ulong *)((long)param_4 + 4);
            puVar24 = (ulong *)(piVar3 + 1);
            puVar29 = (ulong *)((long)puVar38 + ((long)puVar23 - (long)puVar24));
            if (puVar1 <= puVar29) {
              puVar29 = puVar1;
            }
            if (puVar38 < (ulong *)((long)puVar29 - 7U)) {
              if (*puVar24 == *puVar38) {
                lVar28 = 0;
                puVar33 = (ulong *)((long)param_4 + 0xc);
                puVar34 = (ulong *)(lVar22 + (ulong)uVar11 + 0xc);
                do {
                  if ((ulong *)((long)puVar29 - 7U) <= puVar33) goto LAB_002bac04;
                  uVar17 = *puVar34;
/* WM - donate: donate/README.md */
                  uVar21 = *puVar33;
                  lVar28 = lVar28 + 8;
                  puVar33 = puVar33 + 1;
                  puVar34 = puVar34 + 1;
                } while (uVar17 == uVar21);
                uVar21 = uVar21 ^ uVar17;
                uVar17 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
                uVar17 = lVar28 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
              }
              else {
                uVar17 = *puVar38 ^ *puVar24;
                uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
                uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar24 + uVar17) == puVar23) goto LAB_002bacfc;
joined_r0x002badb0:
              if (param_4 <= puVar14) goto LAB_002bae24;
LAB_002bac50:
              *(undefined2 *)(piVar26 + 1) = 0;
              *piVar26 = 1;
            }
            else {
              puVar33 = puVar38;
              puVar34 = puVar24;
LAB_002bac04:
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              if (puVar33 < (ulong *)((long)puVar29 - 3U)) {
                if ((int)*puVar34 == (int)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 4);
                  puVar34 = (ulong *)((long)puVar34 + 4);
                }
                if (puVar33 < (ulong *)((long)puVar29 - 1U)) goto LAB_002bacb8;
              }
              else if (puVar33 < (ulong *)((long)puVar29 - 1U)) {
LAB_002bacb8:
                if ((short)*puVar34 == (short)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 2);
                  puVar34 = (ulong *)((long)puVar34 + 2);
                }
              }
              if (puVar33 < puVar29) {
                if ((char)*puVar34 == (char)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 1);
                }
              }
              uVar17 = (long)puVar33 - (long)puVar38;
              if ((ulong *)((long)puVar24 + uVar17) != puVar23) goto joined_r0x002badb0;
LAB_002bacfc:
              puVar38 = (ulong *)((long)puVar38 + uVar17);
              if ((ulong *)((long)puVar1 - 7U) <= puVar38) {
                puVar23 = puVar38;
                puVar24 = puVar2;
LAB_002bad70:
                if (puVar23 < (ulong *)((long)puVar1 - 3U)) {
                  if ((int)*puVar24 == (int)*puVar23) {
                    puVar23 = (ulong *)((long)puVar23 + 4);
                    puVar24 = (ulong *)((long)puVar24 + 4);
                  }
                }
                if (puVar23 < (ulong *)((long)puVar1 - 1U)) {
                  if ((short)*puVar24 == (short)*puVar23) {
                    puVar23 = (ulong *)((long)puVar23 + 2);
                    puVar24 = (ulong *)((long)puVar24 + 2);
                  }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                }
                if (puVar23 < puVar1) {
                  if ((char)*puVar24 == (char)*puVar23) {
                    puVar23 = (ulong *)((long)puVar23 + 1);
                  }
                }
                uVar17 = (long)puVar23 + (uVar17 - (long)puVar38);
                goto joined_r0x002badb0;
              }
              if (*puVar2 != *puVar38) {
                uVar21 = *puVar38 ^ *puVar2;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar17 = ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) + uVar17;
                goto joined_r0x002badb0;
              }
              lVar22 = 0;
              puVar23 = (ulong *)((long)param_4 + uVar17 + 0xc);
              puVar24 = (ulong *)((ulong)uVar6 + lVar39);
              do {
/* found on a paste site? it was re-uploaded illegally */
                puVar24 = puVar24 + 1;
                if ((ulong *)((long)puVar1 - 7U) <= puVar23) goto LAB_002bad70;
                uVar21 = *puVar23;
                lVar22 = lVar22 + 8;
                puVar23 = puVar23 + 1;
              } while (*puVar24 == uVar21);
              uVar21 = uVar21 ^ *puVar24;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar17 = lVar22 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) + uVar17;
              if (puVar14 < param_4) goto LAB_002bac50;
LAB_002bae24:
              puVar23 = (ulong *)param_2[3];
              uVar21 = *param_4;
              puVar23[1] = param_4[1];
              *puVar23 = uVar21;
              piVar26 = (int *)param_2[1];
/* wm:reversing this took months of machine time */
              *(undefined2 *)(piVar26 + 1) = 0;
              *piVar26 = 1;
            }
            if (0xffff < uVar17 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar26 - *param_2) >> 3);
            }
            *(short *)((long)piVar26 + 6) = (short)(uVar17 + 1);
            piVar26 = piVar26 + 2;
            param_4 = (ulong *)((long)param_4 + uVar17 + 4);
            param_2[1] = (long)piVar26;
            puVar23 = param_4;
            iVar10 = iVar30;
            iVar40 = iVar27;
          } while (param_4 <= puVar15);
        }
      }
      else {
        uStack_68 = 999999999;
        if (uVar19 == 6) {
          if (uVar20 == 6) {
            uVar17 = func_0x002db1a0(param_1,puVar23,puVar1,&uStack_68);
          }
          else if (uVar20 == 5) {
            uVar17 = func_0x002daaa8();
          }
          else {
            uVar17 = func_0x002da3e4();
          }
        }
        else if (uVar19 == 5) {
// origin: github.com/pengussy
          if (uVar20 == 6) {
            uVar17 = func_0x002d9cd0();
          }
          else if (uVar20 == 5) {
            uVar17 = func_0x002d95d8();
          }
          else {
            uVar17 = func_0x002d8f14();
          }
        }
        else if (uVar20 == 6) {
          uVar17 = func_0x002d8804();
        }
        else if (uVar20 == 5) {
          uVar17 = func_0x002d8110();
        }
        else {
          uVar17 = func_0x002d7a50();
        }
        if (uVar17 == 0) {
          uVar21 = 1;
        }
        else {
          uVar21 = uStack_68;
          puVar38 = puVar23;
        }
        iVar27 = (int)uVar21;
        if (3 < uVar17) {
          if (uStack_68 < 4) goto LAB_002ba7b8;
          uVar21 = (long)puVar23 + (-uStack_68 - lVar39) + -0xfffffffd;
          lVar22 = lVar18;
          puVar24 = puVar16;
          if (uVar6 <= (uint)uVar21) {
            lVar22 = lVar39;
/* no support for modified copies */
            puVar24 = puVar2;
          }
          if ((param_4 < puVar23) &&
             (uVar21 = uVar21 & 0xffffffff, puVar24 < (ulong *)(lVar22 + uVar21))) {
            puVar23 = (ulong *)(lVar22 + uVar21);
            while( true ) {
              puVar29 = (ulong *)((long)puVar38 + -1);
              puVar23 = (ulong *)((long)puVar23 + -1);
              if (*(char *)puVar29 != *(char *)puVar23) break;
              uVar17 = uVar17 + 1;
              puVar38 = puVar29;
              if ((puVar29 <= param_4) || (puVar23 <= puVar24)) break;
            }
          }
          uVar21 = (long)puVar38 - (long)param_4;
          puVar23 = (ulong *)param_2[3];
          iVar10 = iVar27 + -3;
          iVar40 = iVar30;
          goto joined_r0x002ba8c0;
        }
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar23 - (long)param_4));
        puVar23 = (ulong *)((long)puVar23 + ((ulong)((long)puVar23 - (long)param_4) >> 8) + 1);
      }
    } while (puVar23 < puVar15);
  }
  *param_3 = iVar30;
  param_3[1] = iVar40;
  return (long)puVar1 - (long)param_4;
}

