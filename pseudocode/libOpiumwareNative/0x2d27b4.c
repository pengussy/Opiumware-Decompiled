/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2d27b4:011d559e78
 */

ulong FUN_002d27b4(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  
  lVar19 = *(long *)(param_1 + 0x80);
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f);
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar8 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar16 = (uint)((long)param_2 - lVar4);
  uVar15 = *(uint *)(param_1 + 0x2c);
  uVar18 = (ulong)uVar15;
  uVar2 = uVar16 - uVar8;
  if (uVar16 - *(uint *)(param_1 + 0x1c) <= uVar8 || *(int *)(param_1 + 0x28) != 0) {
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
/* no support for modified copies - github.com/pengussy */
  uVar8 = 0;
  if (uVar7 <= uVar16) {
    uVar8 = uVar16 - uVar7;
  }
  uVar6 = *(uint *)(param_1 + 0x10c);
  lVar17 = *(long *)(param_1 + 0x70);
  uVar10 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f));
  uVar11 = 0x20 - *(int *)(param_1 + 0x108);
  if (*(int *)(param_1 + 300) == 0) {
    if (uVar15 < uVar16) {
      do {
        uVar15 = (uint)(*(int *)(lVar4 + uVar18) * -0x61c8864f) >> (ulong)(uVar11 & 0x1f);
        *(undefined4 *)(lVar19 + (ulong)((uint)uVar18 & uVar10) * 4) =
             *(undefined4 *)(lVar17 + (ulong)uVar15 * 4);
        *(uint *)(lVar17 + (ulong)uVar15 * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while (uVar18 < ((long)param_2 - lVar4 & 0xffffffffU));
    }
  }
  else if (uVar15 < uVar16) {
    uVar9 = (uint)(*(int *)(lVar4 + uVar18) * -0x61c8864f) >> (ulong)(uVar11 & 0x1f);
    *(undefined4 *)(lVar19 + (ulong)(uVar15 & uVar10) * 4) =
         *(undefined4 *)(lVar17 + (ulong)uVar9 * 4);
    *(uint *)(lVar17 + (ulong)uVar9 * 4) = uVar15;
  }
  *(uint *)(param_1 + 0x2c) = uVar16;
  uVar18 = *param_2;
  uVar15 = *(uint *)(lVar17 + (ulong)((uint)((int)uVar18 * -0x61c8864f) >> (ulong)(uVar11 & 0x1f)) *
                              4);
  if (uVar15 < uVar2) {
    uVar12 = 3;
  }
  else {
    iVar20 = 1 << (ulong)(uVar6 & 0x1f);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    uVar12 = 3;
    do {
      uVar21 = (ulong)uVar15;
      if (uVar15 < uVar3) {
        piVar1 = (int *)(lVar5 + uVar21);
        if (*piVar1 == (int)uVar18) {
          lVar17 = func_0x002ad924((int *)((long)param_2 + 4),piVar1 + 1,param_3,
                                   lVar5 + (ulong)uVar3,lVar4 + (ulong)uVar3);
          uVar21 = lVar17 + 4;
          goto joined_r0x002d2a54;
        }
      }
      else {
        puVar13 = (ulong *)(lVar4 + uVar21);
        if (*(int *)((long)puVar13 + (uVar12 - 3)) == *(int *)((long)param_2 + (uVar12 - 3))) {
          puVar14 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar13 == *param_2) {
              lVar17 = 0;
              puVar13 = (ulong *)(lVar4 + 8 + uVar21);
              do {
                puVar14 = puVar14 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar14) goto LAB_002d29fc;
                uVar21 = *puVar13;
                lVar17 = lVar17 + 8;
                puVar13 = puVar13 + 1;
              } while (uVar21 == *puVar14);
              uVar21 = *puVar14 ^ uVar21;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
            }
            else {
/* WM - more drops soon - github.com/pengussy */
              uVar21 = *param_2 ^ *puVar13;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
            }
          }
          else {
LAB_002d29fc:
            if (puVar14 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar13 == (int)*puVar14) {
                puVar13 = (ulong *)((long)puVar13 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
            }
            if (puVar14 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar13 == (short)*puVar14) {
                puVar13 = (ulong *)((long)puVar13 + 2);
                puVar14 = (ulong *)((long)puVar14 + 2);
              }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
            }
            if (puVar14 < param_3) {
              if ((char)*puVar13 == (char)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 1);
              }
            }
            uVar21 = (long)puVar14 - (long)param_2;
          }
joined_r0x002d2a54:
          if (uVar12 < uVar21) {
            *param_4 = (ulong)((uVar16 + 3) - uVar15);
            uVar12 = uVar21;
            if ((ulong *)((long)param_2 + uVar21) == param_3) {
              return uVar21;
            }
          }
        }
      }
      if ((uVar15 <= uVar8) || (iVar20 = iVar20 + -1, iVar20 == 0)) {
        return uVar12;
      }
      uVar15 = *(uint *)(lVar19 + (ulong)(uVar15 & uVar7 - 1) * 4);
    } while (uVar2 <= uVar15);
  }
  return uVar12;
}

