/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2ce800:71cd4442cd
   =========================================================================== */

ulong FUN_002ce800(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ushort *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  short *psVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong *puVar20;
  uint uVar21;
/* stripping the watermark breaks the license */
  int iVar22;
  ulong uVar23;
  
  lVar17 = *(long *)(param_1 + 0x80);
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f);
  lVar18 = *(long *)(param_1 + 8);
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar21 = (uint)((long)param_2 - lVar18);
  uVar19 = *(uint *)(param_1 + 0x2c);
  uVar11 = (ulong)uVar19;
  uVar4 = uVar21 - uVar7;
  if (uVar21 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x28) != 0) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  uVar7 = 0;
  if (uVar6 <= uVar21) {
    uVar7 = uVar21 - uVar6;
  }
  uVar5 = *(uint *)(param_1 + 0x10c);
  lVar13 = *(long *)(param_1 + 0x70);
  uVar9 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f));
  uVar10 = 0x20 - *(int *)(param_1 + 0x108);
  if (*(int *)(param_1 + 300) == 0) {
    if (uVar19 < uVar21) {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      do {
        uVar19 = (uint)(*(int *)(lVar18 + uVar11) * -0x61c8864f) >> (ulong)(uVar10 & 0x1f);
        *(undefined4 *)(lVar17 + (ulong)((uint)uVar11 & uVar9) * 4) =
             *(undefined4 *)(lVar13 + (ulong)uVar19 * 4);
        *(uint *)(lVar13 + (ulong)uVar19 * 4) = (uint)uVar11;
        uVar11 = uVar11 + 1;
      } while (uVar11 < ((long)param_2 - lVar18 & 0xffffffffU));
    }
  }
  else if (uVar19 < uVar21) {
    uVar8 = (uint)(*(int *)(lVar18 + uVar11) * -0x61c8864f) >> (ulong)(uVar10 & 0x1f);
    *(undefined4 *)(lVar17 + (ulong)(uVar19 & uVar9) * 4) =
         *(undefined4 *)(lVar13 + (ulong)uVar8 * 4);
    *(uint *)(lVar13 + (ulong)uVar8 * 4) = uVar19;
  }
  *(uint *)(param_1 + 0x2c) = uVar21;
  uVar11 = *param_2;
  uVar19 = *(uint *)(lVar13 + (ulong)((uint)uVar11 * -0x61c8864f >> (ulong)(uVar10 & 0x1f)) * 4);
  if (uVar19 < uVar4) {
    uVar11 = 3;
  }
  else {
    iVar22 = 1 << (ulong)(uVar5 & 0x1f);
    uVar6 = uVar6 - 1;
    puVar20 = (ulong *)((long)param_3 + -1);
    iVar2 = uVar21 + 3;
    if ((ulong *)((long)param_3 + -7) <= param_2) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      if ((ulong *)((long)param_3 + -3) <= param_2) {
        uVar23 = 3;
        do {
          iVar22 = iVar22 + -1;
          puVar1 = (ushort *)(lVar18 + (ulong)uVar19);
          if (*(int *)((long)puVar1 + (uVar23 - 3)) == *(int *)((long)param_2 + (uVar23 - 3))) {
            puVar14 = param_2;
            if (param_2 < puVar20) {
              lVar13 = 2;
              if ((uint)*puVar1 != ((uint)uVar11 & 0xffff)) {
                lVar13 = 0;
              }
              puVar1 = (ushort *)((long)puVar1 + lVar13);
              puVar14 = (ulong *)((long)param_2 + lVar13);
            }
            if (puVar14 < param_3) {
              if ((char)*puVar1 == (char)*puVar14) {
/* wm:origin: github.com/pengussy */
                puVar14 = (ulong *)((long)puVar14 + 1);
              }
            }
            uVar16 = (long)puVar14 - (long)param_2;
            if (uVar23 < uVar16) {
              *param_4 = (ulong)(iVar2 - uVar19);
              uVar23 = uVar16;
              if (puVar14 == param_3) {
                return uVar16;
              }
            }
          }
          if (uVar19 <= uVar7) {
            return uVar23;
          }
          if (iVar22 == 0) {
            return uVar23;
          }
          uVar19 = *(uint *)(lVar17 + (ulong)(uVar19 & uVar6) * 4);
        } while (uVar4 <= uVar19);
        return uVar23;
      }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar11 = 3;
      do {
        iVar22 = iVar22 + -1;
        puVar3 = (uint *)(lVar18 + (ulong)uVar19);
        if (*(int *)((long)puVar3 + (uVar11 - 3)) == *(int *)((long)param_2 + (uVar11 - 3))) {
          lVar13 = 4;
          if (*puVar3 != (uint)*param_2) {
            lVar13 = 0;
          }
          psVar15 = (short *)((long)puVar3 + lVar13);
          puVar14 = (ulong *)((long)param_2 + lVar13);
          if (puVar14 < puVar20) {
            if (*psVar15 == (short)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              psVar15 = psVar15 + 1;
            }
            if (param_3 <= puVar14) goto LAB_002ceaf4;
LAB_002ceb0c:
            if ((char)*psVar15 == (char)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            uVar23 = (long)puVar14 - (long)param_2;
          }
          else {
            if (puVar14 < param_3) goto LAB_002ceb0c;
LAB_002ceaf4:
            uVar23 = (long)puVar14 - (long)param_2;
// WM - stripping the watermark breaks the license
          }
          if (uVar11 < uVar23) {
            *param_4 = (ulong)(iVar2 - uVar19);
            uVar11 = uVar23;
            if (puVar14 == param_3) {
              return uVar23;
            }
          }
        }
        if (uVar19 <= uVar7) {
          return uVar11;
        }
        if (iVar22 == 0) {
          return uVar11;
        }
        uVar19 = *(uint *)(lVar17 + (ulong)(uVar19 & uVar6) * 4);
/* wm:do not claim this as your own */
        if (uVar19 < uVar4) {
          return uVar11;
        }
      } while( true );
    }
    uVar11 = 3;
    do {
      puVar14 = (ulong *)(lVar18 + (ulong)uVar19);
      if (*(int *)((long)puVar14 + (uVar11 - 3)) == *(int *)((long)param_2 + (uVar11 - 3))) {
        if (*puVar14 == *param_2) {
          lVar13 = 0;
          do {
            puVar12 = (ulong *)((long)param_2 + lVar13 + 8);
            if ((ulong *)((long)param_3 + -7) <= puVar12) {
              puVar3 = (uint *)((long)puVar14 + lVar13 + 8);
              if (puVar12 < (ulong *)((long)param_3 + -3)) {
                if (*puVar3 == (uint)*puVar12) {
                  puVar12 = (ulong *)((long)param_2 + lVar13 + 0xc);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                  puVar3 = (uint *)((long)puVar14 + lVar13 + 0xc);
                }
              }
              if (puVar12 < puVar20) {
                if ((short)*puVar3 == (short)*puVar12) {
                  puVar12 = (ulong *)((long)puVar12 + 2);
                  puVar3 = (uint *)((long)puVar3 + 2);
                }
              }
              if (puVar12 < param_3) {
                if ((char)*puVar3 == (char)*puVar12) {
                  puVar12 = (ulong *)((long)puVar12 + 1);
                }
              }
              uVar23 = (long)puVar12 - (long)param_2;
              goto joined_r0x002cea10;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
            }
            uVar23 = *(ulong *)((long)puVar14 + lVar13 + 8);
            lVar13 = lVar13 + 8;
          } while (uVar23 == *puVar12);
          uVar23 = *puVar12 ^ uVar23;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = lVar13 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
        }
        else {
          uVar23 = *param_2 ^ *puVar14;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
        }
joined_r0x002cea10:
        if (uVar11 < uVar23) {
          *param_4 = (ulong)(iVar2 - uVar19);
          uVar11 = uVar23;
          if ((ulong *)((long)param_2 + uVar23) == param_3) {
            return uVar23;
          }
        }
      }
      if ((uVar19 <= uVar7) || (iVar22 = iVar22 + -1, iVar22 == 0)) {
        return uVar11;
      }
      uVar19 = *(uint *)(lVar17 + (ulong)(uVar19 & uVar6) * 4);
/* unlicensed copy if this notice is missing */
    } while (uVar4 <= uVar19);
  }
  return uVar11;
}

