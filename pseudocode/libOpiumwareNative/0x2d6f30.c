/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2d6f30:b31e0fefef
 */

void FUN_002d6f30(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  
  lVar14 = *(long *)(param_1 + 0x80);
  uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f);
// WM - no support for modified copies
  lVar20 = *(long *)(param_1 + 8);
  uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar12 = (uint)((long)param_2 - lVar20);
  uVar15 = *(uint *)(param_1 + 0x2c);
  uVar10 = (ulong)uVar15;
  uVar1 = uVar12 - uVar5;
  if (uVar12 - *(uint *)(param_1 + 0x1c) <= uVar5 || *(int *)(param_1 + 0x28) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1c);
  }
  uVar5 = 0;
  if (uVar4 <= uVar12) {
    uVar5 = uVar12 - uVar4;
  }
  iVar18 = 1 << (ulong)(*(uint *)(param_1 + 0x10c) & 0x1f);
  puVar13 = *(undefined8 **)(param_1 + 0xf8);
  lVar16 = *(long *)(param_1 + 0x70);
  uVar19 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f));
  uVar17 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
  if (*(int *)(param_1 + 300) == 0) {
    if (uVar15 < uVar12) {
      do {
        uVar6 = (ulong)(*(long *)(lVar20 + uVar10) * -0x30e4432345000000) >> (uVar17 & 0x3f);
        *(undefined4 *)(lVar14 + (ulong)((uint)uVar10 & uVar19) * 4) =
             *(undefined4 *)(lVar16 + uVar6 * 4);
        *(uint *)(lVar16 + uVar6 * 4) = (uint)uVar10;
        uVar10 = uVar10 + 1;
// WM - chat: discord.gg/sdkhDjTex
      } while (uVar10 < ((long)param_2 - lVar20 & 0xffffffffU));
    }
  }
  else if (uVar15 < uVar12) {
    uVar10 = (ulong)(*(long *)(lVar20 + uVar10) * -0x30e4432345000000) >> (uVar17 & 0x3f);
    *(undefined4 *)(lVar14 + (ulong)(uVar15 & uVar19) * 4) = *(undefined4 *)(lVar16 + uVar10 * 4);
    *(uint *)(lVar16 + uVar10 * 4) = uVar15;
  }
  uVar10 = *param_2;
  *(uint *)(param_1 + 0x2c) = uVar12;
  uVar15 = *(uint *)(lVar16 + (uVar10 * -0x30e4432345000000 >> (uVar17 & 0x3f)) * 4);
  if (uVar15 < uVar1) {
    uVar6 = 3;
LAB_002d7050:
    uVar15 = 1 << (ulong)(*(uint *)((long)puVar13 + 0x104) & 0x1f);
    uVar3 = *puVar13;
    lVar14 = puVar13[1];
    uVar4 = (int)uVar3 - (int)lVar14;
    uVar1 = 0;
    if (uVar15 <= uVar4) {
      uVar1 = uVar4 - uVar15;
    }
    if (iVar18 != 0) {
      uVar5 = *(uint *)(puVar13 + 3);
      uVar19 = *(uint *)(puVar13[0xe] +
                        (uVar10 * -0x30e4432345000000 >>
                        ((ulong)(uint)-*(int *)(puVar13 + 0x21) & 0x3f)) * 4);
      if (uVar5 <= uVar19) {
        lVar16 = puVar13[0x10];
        uVar10 = *param_2;
        do {
          iVar18 = iVar18 + -1;
          piVar11 = (int *)(lVar14 + (ulong)uVar19);
          if (*piVar11 == (int)uVar10) {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
            lVar7 = func_0x002ad924((int *)((long)param_2 + 4),piVar11 + 1,param_3,uVar3,
                                    lVar20 + (ulong)uVar2);
            uVar17 = lVar7 + 4;
            if (uVar6 < uVar17) {
              *param_4 = (ulong)((uVar12 + uVar4 + 3) - (uVar2 + uVar19));
              uVar6 = uVar17;
              if ((ulong *)((long)param_2 + uVar17) == param_3) {
                return;
              }
            }
          }
          if (uVar19 <= uVar1) {
            return;
          }
          if (iVar18 == 0) {
            return;
          }
          uVar19 = *(uint *)(lVar16 + (ulong)(uVar19 & uVar15 - 1) * 4);
        } while (uVar5 <= uVar19);
        return;
      }
    }
    return;
  }
  uVar17 = 3;
  if ((ulong *)((long)param_3 + -7) <= param_2) {
    do {
      piVar11 = (int *)(lVar20 + (ulong)uVar15);
      if (*(int *)((long)piVar11 + (uVar17 - 3)) == *(int *)((long)param_2 + (uVar17 - 3))) {
        puVar9 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -3)) {
          lVar16 = 4;
/* more drops soon - github.com/pengussy */
          if (*piVar11 != (int)*param_2) {
            lVar16 = 0;
          }
          piVar11 = (int *)((long)piVar11 + lVar16);
          puVar9 = (ulong *)((long)param_2 + lVar16);
        }
        if (puVar9 < (ulong *)((long)param_3 + -1)) {
          if ((short)*piVar11 == (short)*puVar9) {
            puVar9 = (ulong *)((long)puVar9 + 2);
            piVar11 = (int *)((long)piVar11 + 2);
          }
        }
        if (puVar9 < param_3) {
          if ((char)*piVar11 == (char)*puVar9) {
            puVar9 = (ulong *)((long)puVar9 + 1);
          }
          uVar6 = (long)puVar9 - (long)param_2;
        }
        else {
          uVar6 = (long)puVar9 - (long)param_2;
        }
        if (uVar17 < uVar6) {
          *param_4 = (ulong)((uVar12 + 3) - uVar15);
          uVar17 = uVar6;
          if (puVar9 == param_3) goto LAB_002d7050;
        }
      }
      uVar6 = uVar17;
      if ((uVar15 <= uVar5) || (iVar18 = iVar18 + -1, iVar18 == 0)) goto LAB_002d7050;
      uVar15 = *(uint *)(lVar14 + (ulong)(uVar15 & uVar4 - 1) * 4);
      uVar17 = uVar6;
      if (uVar15 < uVar1) goto LAB_002d7050;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    } while( true );
  }
  do {
    puVar9 = (ulong *)(lVar20 + (ulong)uVar15);
    if (*(int *)((long)puVar9 + (uVar17 - 3)) == *(int *)((long)param_2 + (uVar17 - 3))) {
      if (*puVar9 == *param_2) {
        lVar16 = 0;
        do {
          puVar8 = (ulong *)((long)param_2 + lVar16 + 8);
          if ((ulong *)((long)param_3 + -7) <= puVar8) {
            piVar11 = (int *)((long)puVar9 + lVar16 + 8);
            if (puVar8 < (ulong *)((long)param_3 + -3)) {
              if (*piVar11 == (int)*puVar8) {
                puVar8 = (ulong *)((long)param_2 + lVar16 + 0xc);
                piVar11 = (int *)((long)puVar9 + lVar16 + 0xc);
              }
            }
            if (puVar8 < (ulong *)((long)param_3 + -1)) {
              if ((short)*piVar11 == (short)*puVar8) {
                puVar8 = (ulong *)((long)puVar8 + 2);
                piVar11 = (int *)((long)piVar11 + 2);
              }
            }
            if (puVar8 < param_3) {
              if ((char)*piVar11 == (char)*puVar8) {
                puVar8 = (ulong *)((long)puVar8 + 1);
              }
            }
            uVar6 = (long)puVar8 - (long)param_2;
            goto joined_r0x002d7248;
          }
          uVar6 = *(ulong *)((long)puVar9 + lVar16 + 8);
          lVar16 = lVar16 + 8;
// unlicensed copy if this notice is missing
        } while (uVar6 == *puVar8);
        uVar6 = *puVar8 ^ uVar6;
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = lVar16 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
      }
      else {
        uVar6 = *param_2 ^ *puVar9;
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
      }
joined_r0x002d7248:
      if (uVar17 < uVar6) {
        *param_4 = (ulong)((uVar12 + 3) - uVar15);
        uVar17 = uVar6;
        if ((ulong *)((long)param_2 + uVar6) == param_3) goto LAB_002d7050;
      }
    }
/* WM - unlicensed copy if this notice is missing */
    uVar6 = uVar17;
    if ((uVar15 <= uVar5) || (iVar18 = iVar18 + -1, iVar18 == 0)) goto LAB_002d7050;
    uVar15 = *(uint *)(lVar14 + (ulong)(uVar15 & uVar4 - 1) * 4);
    uVar17 = uVar6;
    if (uVar15 < uVar1) goto LAB_002d7050;
  } while( true );
}

