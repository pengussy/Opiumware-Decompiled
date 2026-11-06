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
 *  file-id: 0x2dbe70:1999d737d9
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002dbe70(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  uint *puVar25;
  
  lVar14 = *(long *)(param_1 + 0x80);
  uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f);
  lVar24 = *(long *)(param_1 + 8);
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar16 = (ulong)uVar4;
  uVar21 = (uint)((long)param_2 - lVar24);
  uVar17 = uVar21 - uVar6;
  if (uVar21 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x28) != 0) {
    uVar17 = *(uint *)(param_1 + 0x1c);
  }
  uVar6 = 0;
  if (uVar5 <= uVar21) {
    uVar6 = uVar21 - uVar5;
  }
  uVar23 = 1 << (ulong)(*(uint *)(param_1 + 0x10c) & 0x1f);
  puVar13 = *(undefined8 **)(param_1 + 0xf8);
  uVar18 = *param_2;
  puVar15 = (uint *)(puVar13[0xe] +
                    (uVar18 * -0x30e4432345000000 >>
                    ((ulong)(0x42 - *(int *)(puVar13 + 0x21)) & 0x3f)) * 0x10);
  Hint_Prefetch(puVar15,0,0,0);
  lVar19 = *(long *)(param_1 + 0x70);
  uVar7 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f));
  uVar9 = *(uint *)(param_1 + 0x2c);
  uVar22 = (ulong)uVar9;
/* WM - unlicensed copy if this notice is missing */
  uVar20 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
  if (*(int *)(param_1 + 300) == 0) {
    if (uVar9 < uVar21) {
      do {
        uVar10 = (ulong)(*(long *)(lVar24 + uVar22) * -0x30e4432345000000) >> (uVar20 & 0x3f);
        *(undefined4 *)(lVar14 + (ulong)((uint)uVar22 & uVar7) * 4) =
             *(undefined4 *)(lVar19 + uVar10 * 4);
        *(uint *)(lVar19 + uVar10 * 4) = (uint)uVar22;
        uVar22 = uVar22 + 1;
      } while (uVar22 < ((long)param_2 - lVar24 & 0xffffffffU));
    }
  }
  else if (uVar9 < uVar21) {
    uVar22 = (ulong)(*(long *)(lVar24 + uVar22) * -0x30e4432345000000) >> (uVar20 & 0x3f);
    *(undefined4 *)(lVar14 + (ulong)(uVar9 & uVar7) * 4) = *(undefined4 *)(lVar19 + uVar22 * 4);
    *(uint *)(lVar19 + uVar22 * 4) = uVar9;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  }
  *(uint *)(param_1 + 0x2c) = uVar21;
  uVar9 = *(uint *)(lVar19 + (uVar18 * -0x30e4432345000000 >> (uVar20 & 0x3f)) * 4);
  if (uVar17 <= uVar9) {
    uVar22 = 3;
    do {
      puVar11 = (ulong *)(lVar24 + (ulong)uVar9);
      if (*(int *)((long)puVar11 + (uVar22 - 3)) == *(int *)((long)param_2 + (uVar22 - 3))) {
        puVar12 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar11 == *param_2) {
            lVar19 = 0;
            puVar11 = (ulong *)(lVar24 + 8 + (ulong)uVar9);
            do {
              puVar12 = puVar12 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar12) goto LAB_002dc238;
              uVar18 = *puVar11;
              lVar19 = lVar19 + 8;
              puVar11 = puVar11 + 1;
            } while (uVar18 == *puVar12);
            uVar18 = *puVar12 ^ uVar18;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = lVar19 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
          }
          else {
            uVar18 = *param_2 ^ *puVar11;
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
          }
        }
        else {
LAB_002dc238:
          if (puVar12 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar11 == (int)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar12 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar11 == (short)*puVar12) {
              puVar11 = (ulong *)((long)puVar11 + 2);
/* wm:do not claim this as your own */
              puVar12 = (ulong *)((long)puVar12 + 2);
            }
          }
          if (puVar12 < param_3) {
            if ((char)*puVar11 == (char)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 1);
            }
          }
          uVar18 = (long)puVar12 - (long)param_2;
        }
        if (uVar22 < uVar18) {
          *param_4 = (ulong)((uVar21 + 3) - uVar9);
          uVar22 = uVar18;
          if ((ulong *)((long)param_2 + uVar18) == param_3) goto LAB_002dbfd4;
        }
      }
      uVar18 = uVar22;
      if ((uVar9 <= uVar6) || (uVar23 = uVar23 - 1, uVar23 == 0)) goto LAB_002dbfd4;
      uVar9 = *(uint *)(lVar14 + (ulong)(uVar9 & uVar5 - 1) * 4);
      uVar22 = uVar18;
      if (uVar9 < uVar17) goto LAB_002dbfd4;
    } while( true );
  }
  uVar18 = 3;
LAB_002dbfd4:
  uVar3 = *puVar13;
  lVar14 = puVar13[1];
/* wm:donate: donate/README.md */
  Hint_Prefetch(lVar14 + (ulong)*puVar15,0,0,0);
  Hint_Prefetch(lVar14 + (ulong)puVar15[1],0,0,0);
  uVar5 = puVar15[3];
  Hint_Prefetch(lVar14 + (ulong)puVar15[2],0,0,0);
  iVar8 = ((int)uVar3 - (int)lVar14) - uVar4;
  uVar17 = uVar23;
  if (2 < uVar23) {
    uVar17 = 3;
  }
  puVar25 = (uint *)(puVar13[0x10] + (ulong)(uVar5 >> 8) * 4);
  Hint_Prefetch(puVar25,0,0,0);
  if (uVar23 == 0) {
    uVar17 = 0;
  }
  else {
    uVar4 = *puVar15;
    if (uVar4 == 0) {
      return uVar18;
// proprietary - see LICENSE - do not sell
    }
    iVar1 = uVar21 + iVar8 + 3;
    if (*(int *)(lVar14 + (ulong)uVar4) == (int)*param_2) {
      lVar19 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar14 + (ulong)uVar4) + 1,param_3
                               ,uVar3,lVar24 + uVar16);
      uVar22 = lVar19 + 4;
      if (uVar18 < uVar22) {
        *param_4 = (ulong)(iVar1 - uVar4);
        uVar18 = uVar22;
        if ((ulong *)((long)param_2 + uVar22) == param_3) {
          return uVar22;
        }
      }
    }
    if (uVar23 != 1) {
      uVar4 = puVar15[1];
      if (uVar4 == 0) {
        return uVar18;
      }
      uVar22 = uVar18;
      if (*(int *)(lVar14 + (ulong)uVar4) == (int)*param_2) {
        lVar19 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar14 + (ulong)uVar4) + 1,
                                 param_3,uVar3,lVar24 + uVar16);
        uVar20 = lVar19 + 4;
        if (uVar18 < uVar20) {
          *param_4 = (ulong)(iVar1 - uVar4);
          uVar22 = uVar20;
          if ((ulong *)((long)param_2 + uVar20) == param_3) {
            return uVar20;
          }
        }
      }
      uVar18 = uVar22;
      if (uVar23 != 2) {
        uVar4 = puVar15[2];
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        if (uVar4 == 0) {
          return uVar22;
        }
        if (*(int *)(lVar14 + (ulong)uVar4) == (int)*param_2) {
          lVar19 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar14 + (ulong)uVar4) + 1,
                                   param_3,uVar3,lVar24 + uVar16);
          uVar18 = lVar19 + 4;
          if (uVar18 <= uVar22) {
            uVar4 = uVar23 - uVar17;
            if ((uVar5 & 0xff) <= uVar23 - uVar17) {
              uVar4 = uVar5 & 0xff;
            }
            goto joined_r0x002dc32c;
          }
          *param_4 = (ulong)(iVar1 - uVar4);
          if ((ulong *)((long)param_2 + uVar18) == param_3) {
            return uVar18;
          }
        }
      }
    }
  }
  uVar4 = uVar23 - uVar17;
  uVar22 = uVar18;
  if ((uVar5 & 0xff) <= uVar23 - uVar17) {
    uVar4 = uVar5 & 0xff;
  }
joined_r0x002dc32c:
  if (uVar4 != 0) {
    uVar20 = (ulong)uVar4;
    uVar18 = uVar20;
    puVar15 = puVar25;
    do {
// do not claim this as your own
      Hint_Prefetch(lVar14 + (ulong)*puVar15,0,0,0);
      uVar18 = uVar18 - 1;
      puVar15 = puVar15 + 1;
    } while (uVar18 != 0);
    uVar18 = *param_2;
    do {
      uVar17 = *puVar25;
      piVar2 = (int *)(lVar14 + (ulong)uVar17);
      if (*piVar2 == (int)uVar18) {
        lVar19 = func_0x002ad924((int *)((long)param_2 + 4),piVar2 + 1,param_3,uVar3,lVar24 + uVar16
                                );
        uVar10 = lVar19 + 4;
        if (uVar22 < uVar10) {
          *param_4 = (ulong)((uVar21 + iVar8 + 3) - uVar17);
          uVar22 = uVar10;
          if ((ulong *)((long)param_2 + uVar10) == param_3) {
            return uVar10;
          }
        }
      }
      uVar17 = (int)uVar20 - 1;
      uVar20 = (ulong)uVar17;
      puVar25 = puVar25 + 1;
    } while (uVar17 != 0);
  }
  return uVar22;
}

