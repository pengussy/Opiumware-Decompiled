/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2d2e74:e459fa7825
 */

ulong FUN_002d2e74(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

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
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  
  lVar19 = *(long *)(param_1 + 0x80);
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar8 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar14 = (uint)((long)param_2 - lVar4);
  uVar13 = *(uint *)(param_1 + 0x2c);
  uVar17 = (ulong)uVar13;
  uVar2 = uVar14 - uVar8;
  if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar8 || *(int *)(param_1 + 0x28) != 0) {
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
  uVar8 = 0;
  if (uVar7 <= uVar14) {
    uVar8 = uVar14 - uVar7;
  }
  uVar6 = *(uint *)(param_1 + 0x10c);
  lVar15 = *(long *)(param_1 + 0x70);
  uVar9 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f));
  uVar16 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
  if (*(int *)(param_1 + 300) == 0) {
    if (uVar13 < uVar14) {
      do {
        uVar10 = (ulong)(*(long *)(lVar4 + uVar17) * -0x30e4432340650000) >> (uVar16 & 0x3f);
        *(undefined4 *)(lVar19 + (ulong)((uint)uVar17 & uVar9) * 4) =
             *(undefined4 *)(lVar15 + uVar10 * 4);
        *(uint *)(lVar15 + uVar10 * 4) = (uint)uVar17;
        uVar17 = uVar17 + 1;
      } while (uVar17 < ((long)param_2 - lVar4 & 0xffffffffU));
    }
  }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  else if (uVar13 < uVar14) {
    uVar17 = (ulong)(*(long *)(lVar4 + uVar17) * -0x30e4432340650000) >> (uVar16 & 0x3f);
    *(undefined4 *)(lVar19 + (ulong)(uVar13 & uVar9) * 4) = *(undefined4 *)(lVar15 + uVar17 * 4);
    *(uint *)(lVar15 + uVar17 * 4) = uVar13;
  }
  uVar17 = *param_2;
  *(uint *)(param_1 + 0x2c) = uVar14;
  uVar13 = *(uint *)(lVar15 + (uVar17 * -0x30e4432340650000 >> (uVar16 & 0x3f)) * 4);
  if (uVar13 < uVar2) {
    uVar17 = 3;
  }
  else {
    iVar18 = 1 << (ulong)(uVar6 & 0x1f);
    uVar17 = 3;
    do {
      uVar16 = (ulong)uVar13;
      if (uVar13 < uVar3) {
        piVar1 = (int *)(lVar5 + uVar16);
        if (*piVar1 == (int)*param_2) {
          lVar15 = func_0x002ad924((int *)((long)param_2 + 4),piVar1 + 1,param_3,
                                   lVar5 + (ulong)uVar3,lVar4 + (ulong)uVar3);
          uVar16 = lVar15 + 4;
          goto joined_r0x002d3114;
        }
      }
      else {
        puVar11 = (ulong *)(lVar4 + uVar16);
        if (*(int *)((long)puVar11 + (uVar17 - 3)) == *(int *)((long)param_2 + (uVar17 - 3))) {
          puVar12 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar11 == *param_2) {
              lVar15 = 0;
              puVar11 = (ulong *)(lVar4 + 8 + uVar16);
              do {
                puVar12 = puVar12 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar12) goto LAB_002d30bc;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
                uVar16 = *puVar11;
                lVar15 = lVar15 + 8;
                puVar11 = puVar11 + 1;
              } while (uVar16 == *puVar12);
              uVar16 = *puVar12 ^ uVar16;
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = lVar15 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
            }
            else {
              uVar16 = *param_2 ^ *puVar11;
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
            }
          }
          else {
LAB_002d30bc:
            if (puVar12 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar11 == (int)*puVar12) {
                puVar11 = (ulong *)((long)puVar11 + 4);
                puVar12 = (ulong *)((long)puVar12 + 4);
              }
            }
            if (puVar12 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar11 == (short)*puVar12) {
                puVar11 = (ulong *)((long)puVar11 + 2);
                puVar12 = (ulong *)((long)puVar12 + 2);
/*  donate: donate/README.md  */
              }
            }
            if (puVar12 < param_3) {
              if ((char)*puVar11 == (char)*puVar12) {
                puVar12 = (ulong *)((long)puVar12 + 1);
              }
            }
            uVar16 = (long)puVar12 - (long)param_2;
          }
joined_r0x002d3114:
          if (uVar17 < uVar16) {
            *param_4 = (ulong)((uVar14 + 3) - uVar13);
            uVar17 = uVar16;
            if ((ulong *)((long)param_2 + uVar16) == param_3) {
              return uVar16;
            }
          }
        }
      }
      if ((uVar13 <= uVar8) || (iVar18 = iVar18 + -1, iVar18 == 0)) {
        return uVar17;
      }
      uVar13 = *(uint *)(lVar19 + (ulong)(uVar13 & uVar7 - 1) * 4);
    } while (uVar2 <= uVar13);
  }
  return uVar17;
}

