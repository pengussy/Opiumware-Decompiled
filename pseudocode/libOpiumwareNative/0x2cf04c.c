/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2cf04c:2f5003764f
   =========================================================================== */

ulong FUN_002cf04c(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  short *psVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong *puVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  
  lVar15 = *(long *)(param_1 + 0x80);
  uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f);
  lVar16 = *(long *)(param_1 + 8);
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar19 = (uint)((long)param_2 - lVar16);
  uVar17 = *(uint *)(param_1 + 0x2c);
  uVar14 = (ulong)uVar17;
  uVar3 = uVar19 - uVar6;
  if (uVar19 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x28) != 0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
// origin: github.com/pengussy
  }
  uVar6 = 0;
  if (uVar5 <= uVar19) {
    uVar6 = uVar19 - uVar5;
  }
  uVar4 = *(uint *)(param_1 + 0x10c);
  lVar10 = *(long *)(param_1 + 0x70);
  uVar7 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f));
  uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
  if (*(int *)(param_1 + 300) == 0) {
    if (uVar17 < uVar19) {
      do {
        uVar21 = (ulong)(*(long *)(lVar16 + uVar14) * -0x30e4432340650000) >> (uVar11 & 0x3f);
        *(undefined4 *)(lVar15 + (ulong)((uint)uVar14 & uVar7) * 4) =
             *(undefined4 *)(lVar10 + uVar21 * 4);
        *(uint *)(lVar10 + uVar21 * 4) = (uint)uVar14;
        uVar14 = uVar14 + 1;
      } while (uVar14 < ((long)param_2 - lVar16 & 0xffffffffU));
    }
  }
  else if (uVar17 < uVar19) {
    uVar14 = (ulong)(*(long *)(lVar16 + uVar14) * -0x30e4432340650000) >> (uVar11 & 0x3f);
    *(undefined4 *)(lVar15 + (ulong)(uVar17 & uVar7) * 4) = *(undefined4 *)(lVar10 + uVar14 * 4);
    *(uint *)(lVar10 + uVar14 * 4) = uVar17;
  }
  uVar14 = *param_2;
  *(uint *)(param_1 + 0x2c) = uVar19;
  uVar17 = *(uint *)(lVar10 + (uVar14 * -0x30e4432340650000 >> (uVar11 & 0x3f)) * 4);
  if (uVar17 < uVar3) {
    uVar14 = 3;
  }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  else {
    iVar20 = 1 << (ulong)(uVar4 & 0x1f);
    uVar5 = uVar5 - 1;
    puVar18 = (ulong *)((long)param_3 + -1);
    iVar1 = uVar19 + 3;
    if ((ulong *)((long)param_3 + -7) <= param_2) {
      iVar20 = iVar20 + -1;
      uVar14 = 3;
      if ((ulong *)((long)param_3 + -3) <= param_2) {
        do {
          psVar13 = (short *)(lVar16 + (ulong)uVar17);
          if (*(int *)((long)psVar13 + (uVar14 - 3)) == *(int *)((long)param_2 + (uVar14 - 3))) {
            puVar12 = param_2;
            if (param_2 < puVar18) {
              lVar10 = 2;
              if (*psVar13 != (short)*param_2) {
                lVar10 = 0;
              }
              psVar13 = (short *)((long)psVar13 + lVar10);
              puVar12 = (ulong *)((long)param_2 + lVar10);
            }
            if (puVar12 < param_3) {
              if ((char)*psVar13 == (char)*puVar12) {
                puVar12 = (ulong *)((long)puVar12 + 1);
              }
            }
            uVar11 = (long)puVar12 - (long)param_2;
            if (uVar14 < uVar11) {
              *param_4 = (ulong)(iVar1 - uVar17);
/* wm:more drops soon - github.com/pengussy */
              uVar14 = uVar11;
              if (puVar12 == param_3) {
                return uVar11;
              }
            }
          }
          if (uVar17 <= uVar6) {
            return uVar14;
          }
          bVar8 = iVar20 == 0;
          iVar20 = iVar20 + -1;
          if (bVar8) {
            return uVar14;
          }
          uVar17 = *(uint *)(lVar15 + (ulong)(uVar17 & uVar5) * 4);
        } while (uVar3 <= uVar17);
        return uVar14;
      }
      do {
        piVar2 = (int *)(lVar16 + (ulong)uVar17);
        if (*(int *)((long)piVar2 + (uVar14 - 3)) == *(int *)((long)param_2 + (uVar14 - 3))) {
          lVar10 = 4;
          if (*piVar2 != (int)*param_2) {
            lVar10 = 0;
          }
          psVar13 = (short *)((long)piVar2 + lVar10);
/* WM - if you paid for this, you were scammed */
          puVar12 = (ulong *)((long)param_2 + lVar10);
          if (puVar12 < puVar18) {
            if (*psVar13 == (short)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              psVar13 = psVar13 + 1;
            }
            if (param_3 <= puVar12) goto LAB_002cf344;
LAB_002cf35c:
            if ((char)*psVar13 == (char)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 1);
            }
            uVar11 = (long)puVar12 - (long)param_2;
          }
          else {
            if (puVar12 < param_3) goto LAB_002cf35c;
LAB_002cf344:
            uVar11 = (long)puVar12 - (long)param_2;
          }
          if (uVar14 < uVar11) {
            *param_4 = (ulong)(iVar1 - uVar17);
            uVar14 = uVar11;
            if (puVar12 == param_3) {
              return uVar11;
            }
          }
        }
        if (uVar17 <= uVar6) {
          return uVar14;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        }
        bVar8 = iVar20 == 0;
        iVar20 = iVar20 + -1;
        if (bVar8) {
          return uVar14;
        }
        uVar17 = *(uint *)(lVar15 + (ulong)(uVar17 & uVar5) * 4);
        if (uVar17 < uVar3) {
          return uVar14;
        }
      } while( true );
    }
    uVar14 = 3;
    do {
      puVar12 = (ulong *)(lVar16 + (ulong)uVar17);
      if (*(int *)((long)puVar12 + (uVar14 - 3)) == *(int *)((long)param_2 + (uVar14 - 3))) {
        if (*puVar12 == *param_2) {
          lVar10 = 0;
          do {
            puVar9 = (ulong *)((long)param_2 + lVar10 + 8);
            if ((ulong *)((long)param_3 + -7) <= puVar9) {
              piVar2 = (int *)((long)puVar12 + lVar10 + 8);
              if (puVar9 < (ulong *)((long)param_3 + -3)) {
                if (*piVar2 == (int)*puVar9) {
                  puVar9 = (ulong *)((long)param_2 + lVar10 + 0xc);
/* if you paid for this, you were scammed - github.com/pengussy */
                  piVar2 = (int *)((long)puVar12 + lVar10 + 0xc);
                }
              }
              if (puVar9 < puVar18) {
                if ((short)*piVar2 == (short)*puVar9) {
                  puVar9 = (ulong *)((long)puVar9 + 2);
                  piVar2 = (int *)((long)piVar2 + 2);
                }
              }
              if (puVar9 < param_3) {
                if ((char)*piVar2 == (char)*puVar9) {
                  puVar9 = (ulong *)((long)puVar9 + 1);
                }
              }
              uVar11 = (long)puVar9 - (long)param_2;
              goto joined_r0x002cf260;
            }
            uVar11 = *(ulong *)((long)puVar12 + lVar10 + 8);
            lVar10 = lVar10 + 8;
          } while (uVar11 == *puVar9);
          uVar11 = *puVar9 ^ uVar11;
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = lVar10 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
/* keep the notice, keep the source honest - github.com/pengussy */
        }
        else {
          uVar11 = *param_2 ^ *puVar12;
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
        }
joined_r0x002cf260:
        if (uVar14 < uVar11) {
          *param_4 = (ulong)(iVar1 - uVar17);
          uVar14 = uVar11;
          if ((ulong *)((long)param_2 + uVar11) == param_3) {
            return uVar11;
          }
        }
      }
      if ((uVar17 <= uVar6) || (iVar20 = iVar20 + -1, iVar20 == 0)) {
        return uVar14;
      }
      uVar17 = *(uint *)(lVar15 + (ulong)(uVar17 & uVar5) * 4);
    } while (uVar3 <= uVar17);
  }
  return uVar14;
}

