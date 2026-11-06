/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2d6a88:bea9866633
   =========================================================================== */

void FUN_002d6a88(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  int *piVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  
  lVar17 = *(long *)(param_1 + 0x80);
  uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f);
  lVar22 = *(long *)(param_1 + 8);
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar15 = (uint)((long)param_2 - lVar22);
  uVar18 = *(uint *)(param_1 + 0x2c);
  uVar11 = (ulong)uVar18;
  uVar1 = uVar15 - uVar6;
  if (uVar15 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x28) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1c);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  }
  uVar6 = 0;
  if (uVar5 <= uVar15) {
    uVar6 = uVar15 - uVar5;
  }
  iVar20 = 1 << (ulong)(*(uint *)(param_1 + 0x10c) & 0x1f);
  puVar16 = *(undefined8 **)(param_1 + 0xf8);
  lVar19 = *(long *)(param_1 + 0x70);
  uVar21 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f));
  uVar8 = 0x20 - *(int *)(param_1 + 0x108);
  if (*(int *)(param_1 + 300) == 0) {
    if (uVar18 < uVar15) {
      do {
        uVar18 = (uint)(*(int *)(lVar22 + uVar11) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
        *(undefined4 *)(lVar17 + (ulong)((uint)uVar11 & uVar21) * 4) =
             *(undefined4 *)(lVar19 + (ulong)uVar18 * 4);
        *(uint *)(lVar19 + (ulong)uVar18 * 4) = (uint)uVar11;
        uVar11 = uVar11 + 1;
      } while (uVar11 < ((long)param_2 - lVar22 & 0xffffffffU));
    }
  }
  else if (uVar18 < uVar15) {
    uVar7 = (uint)(*(int *)(lVar22 + uVar11) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
    *(undefined4 *)(lVar17 + (ulong)(uVar18 & uVar21) * 4) =
         *(undefined4 *)(lVar19 + (ulong)uVar7 * 4);
    *(uint *)(lVar19 + (ulong)uVar7 * 4) = uVar18;
  }
  *(uint *)(param_1 + 0x2c) = uVar15;
  iVar4 = (int)*param_2;
  uVar18 = *(uint *)(lVar19 + (ulong)((uint)(iVar4 * -0x61c8864f) >> (ulong)(uVar8 & 0x1f)) * 4);
  if (uVar18 < uVar1) {
    uVar9 = 3;
LAB_002d6ba8:
    uVar18 = 1 << (ulong)(*(uint *)((long)puVar16 + 0x104) & 0x1f);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar3 = *puVar16;
    lVar17 = puVar16[1];
    uVar5 = (int)uVar3 - (int)lVar17;
    uVar1 = 0;
    if (uVar18 <= uVar5) {
      uVar1 = uVar5 - uVar18;
    }
    if (iVar20 != 0) {
      uVar6 = *(uint *)(puVar16 + 3);
      uVar21 = *(uint *)(puVar16[0xe] +
                        (ulong)((uint)(iVar4 * -0x61c8864f) >>
                               (ulong)(-*(int *)(puVar16 + 0x21) & 0x1f)) * 4);
      if (uVar6 <= uVar21) {
        lVar19 = puVar16[0x10];
        do {
          iVar20 = iVar20 + -1;
          piVar14 = (int *)(lVar17 + (ulong)uVar21);
          if (*piVar14 == iVar4) {
            lVar10 = func_0x002ad924((int *)((long)param_2 + 4),piVar14 + 1,param_3,uVar3,
                                     lVar22 + (ulong)uVar2);
            uVar11 = lVar10 + 4;
// WM - no support for modified copies
            if (uVar9 < uVar11) {
              *param_4 = (ulong)((uVar15 + uVar5 + 3) - (uVar2 + uVar21));
              uVar9 = uVar11;
              if ((ulong *)((long)param_2 + uVar11) == param_3) {
                return;
              }
            }
          }
          if (uVar21 <= uVar1) {
            return;
          }
          if (iVar20 == 0) {
            return;
          }
          uVar21 = *(uint *)(lVar19 + (ulong)(uVar21 & uVar18 - 1) * 4);
        } while (uVar6 <= uVar21);
        return;
      }
    }
    return;
  }
  uVar11 = 3;
  if ((ulong *)((long)param_3 + -7) <= param_2) {
    do {
      piVar14 = (int *)(lVar22 + (ulong)uVar18);
      if (*(int *)((long)piVar14 + (uVar11 - 3)) == *(int *)((long)param_2 + (uVar11 - 3))) {
        puVar13 = param_2;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        if (param_2 < (ulong *)((long)param_3 + -3)) {
          lVar19 = 4;
          if (*piVar14 != iVar4) {
            lVar19 = 0;
          }
          piVar14 = (int *)((long)piVar14 + lVar19);
          puVar13 = (ulong *)((long)param_2 + lVar19);
        }
        if (puVar13 < (ulong *)((long)param_3 + -1)) {
          if ((short)*piVar14 == (short)*puVar13) {
            puVar13 = (ulong *)((long)puVar13 + 2);
            piVar14 = (int *)((long)piVar14 + 2);
          }
        }
        if (puVar13 < param_3) {
          if ((char)*piVar14 == (char)*puVar13) {
            puVar13 = (ulong *)((long)puVar13 + 1);
          }
          uVar9 = (long)puVar13 - (long)param_2;
        }
        else {
          uVar9 = (long)puVar13 - (long)param_2;
        }
        if (uVar11 < uVar9) {
          *param_4 = (ulong)((uVar15 + 3) - uVar18);
          uVar11 = uVar9;
          if (puVar13 == param_3) goto LAB_002d6ba8;
        }
      }
      uVar9 = uVar11;
      if ((uVar18 <= uVar6) || (iVar20 = iVar20 + -1, iVar20 == 0)) goto LAB_002d6ba8;
      uVar18 = *(uint *)(lVar17 + (ulong)(uVar18 & uVar5 - 1) * 4);
      uVar11 = uVar9;
/* wm:origin: github.com/pengussy */
      if (uVar18 < uVar1) goto LAB_002d6ba8;
    } while( true );
  }
  do {
    puVar13 = (ulong *)(lVar22 + (ulong)uVar18);
    if (*(int *)((long)puVar13 + (uVar11 - 3)) == *(int *)((long)param_2 + (uVar11 - 3))) {
      if (*puVar13 == *param_2) {
        lVar19 = 0;
        do {
          puVar12 = (ulong *)((long)param_2 + lVar19 + 8);
          if ((ulong *)((long)param_3 + -7) <= puVar12) {
            piVar14 = (int *)((long)puVar13 + lVar19 + 8);
            if (puVar12 < (ulong *)((long)param_3 + -3)) {
              if (*piVar14 == (int)*puVar12) {
                puVar12 = (ulong *)((long)param_2 + lVar19 + 0xc);
                piVar14 = (int *)((long)puVar13 + lVar19 + 0xc);
              }
            }
            if (puVar12 < (ulong *)((long)param_3 + -1)) {
              if ((short)*piVar14 == (short)*puVar12) {
                puVar12 = (ulong *)((long)puVar12 + 2);
                piVar14 = (int *)((long)piVar14 + 2);
/* wm:watermarked copy - do not remove */
              }
            }
            if (puVar12 < param_3) {
              if ((char)*piVar14 == (char)*puVar12) {
                puVar12 = (ulong *)((long)puVar12 + 1);
              }
            }
            uVar9 = (long)puVar12 - (long)param_2;
            goto joined_r0x002d6db0;
          }
          uVar9 = *(ulong *)((long)puVar13 + lVar19 + 8);
          lVar19 = lVar19 + 8;
        } while (uVar9 == *puVar12);
        uVar9 = *puVar12 ^ uVar9;
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lVar19 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
      }
      else {
        uVar9 = *param_2 ^ *puVar13;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
      }
joined_r0x002d6db0:
      if (uVar11 < uVar9) {
        *param_4 = (ulong)((uVar15 + 3) - uVar18);
        uVar11 = uVar9;
        if ((ulong *)((long)param_2 + uVar9) == param_3) goto LAB_002d6ba8;
      }
    }
    uVar9 = uVar11;
    if ((uVar18 <= uVar6) || (iVar20 = iVar20 + -1, iVar20 == 0)) goto LAB_002d6ba8;
    uVar18 = *(uint *)(lVar17 + (ulong)(uVar18 & uVar5 - 1) * 4);
    uVar11 = uVar9;
    if (uVar18 < uVar1) goto LAB_002d6ba8;
  } while( true );
}

