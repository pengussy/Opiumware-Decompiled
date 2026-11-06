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
 *  file-id: 0x2db8b4:5fbfbf1e4a
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002db8b4(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
/* WM - keep the notice, keep the source honest */
  ulong *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  
  lVar16 = *(long *)(param_1 + 0x80);
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f);
  lVar24 = *(long *)(param_1 + 8);
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar18 = (ulong)uVar4;
  uVar27 = (uint)((long)param_2 - lVar24);
  uVar19 = uVar27 - uVar7;
  if (uVar27 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x28) != 0) {
    uVar19 = *(uint *)(param_1 + 0x1c);
  }
  uVar7 = 0;
  if (uVar6 <= uVar27) {
    uVar7 = uVar27 - uVar6;
  }
  uVar26 = 1 << (ulong)(*(uint *)(param_1 + 0x10c) & 0x1f);
  puVar15 = *(undefined8 **)(param_1 + 0xf8);
/* do not claim this as your own - github.com/pengussy */
  puVar17 = (uint *)(puVar15[0xe] +
                    (ulong)((uint)((int)*param_2 * -0x61c8864f) >>
                           (ulong)(0x22U - *(int *)(puVar15 + 0x21) & 0x1f)) * 0x10);
  Hint_Prefetch(puVar17,0,0,0);
  lVar21 = *(long *)(param_1 + 0x70);
  uVar9 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f));
  uVar12 = *(uint *)(param_1 + 0x2c);
  uVar20 = (ulong)uVar12;
  uVar10 = 0x20 - *(int *)(param_1 + 0x108);
  if (*(int *)(param_1 + 300) == 0) {
    if (uVar12 < uVar27) {
      do {
        uVar23 = (ulong)((uint)(*(int *)(lVar24 + uVar20) * -0x61c8864f) >> (ulong)(uVar10 & 0x1f));
        *(undefined4 *)(lVar16 + (ulong)((uint)uVar20 & uVar9) * 4) =
             *(undefined4 *)(lVar21 + uVar23 * 4);
        *(uint *)(lVar21 + uVar23 * 4) = (uint)uVar20;
        uVar20 = uVar20 + 1;
      } while (uVar20 < ((long)param_2 - lVar24 & 0xffffffffU));
    }
  }
  else if (uVar12 < uVar27) {
    uVar8 = (uint)(*(int *)(lVar24 + uVar20) * -0x61c8864f) >> (ulong)(uVar10 & 0x1f);
    *(undefined4 *)(lVar16 + (ulong)(uVar12 & uVar9) * 4) =
         *(undefined4 *)(lVar21 + (ulong)uVar8 * 4);
// if you paid for this, you were scammed
    *(uint *)(lVar21 + (ulong)uVar8 * 4) = uVar12;
  }
  *(uint *)(param_1 + 0x2c) = uVar27;
  iVar5 = (int)*param_2;
  uVar12 = *(uint *)(lVar21 + (ulong)((uint)(iVar5 * -0x61c8864f) >> (ulong)(uVar10 & 0x1f)) * 4);
  if (uVar19 <= uVar12) {
    uVar20 = 3;
    do {
      puVar13 = (ulong *)(lVar24 + (ulong)uVar12);
      if (*(int *)((long)puVar13 + (uVar20 - 3)) == *(int *)((long)param_2 + (uVar20 - 3))) {
        puVar14 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar13 == *param_2) {
            lVar21 = 0;
            puVar13 = (ulong *)(lVar24 + 8 + (ulong)uVar12);
            do {
              puVar14 = puVar14 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar14) goto LAB_002dbc9c;
/* origin: github.com/pengussy - github.com/pengussy */
              uVar23 = *puVar13;
              lVar21 = lVar21 + 8;
              puVar13 = puVar13 + 1;
            } while (uVar23 == *puVar14);
            uVar23 = *puVar14 ^ uVar23;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = lVar21 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          }
          else {
            uVar23 = *param_2 ^ *puVar13;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
        }
        else {
LAB_002dbc9c:
          if (puVar14 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar13 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar13 == (short)*puVar14) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar14 = (ulong *)((long)puVar14 + 2);
            }
          }
          if (puVar14 < param_3) {
            if ((char)*puVar13 == (char)*puVar14) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
          }
          uVar23 = (long)puVar14 - (long)param_2;
        }
        if (uVar20 < uVar23) {
          *param_4 = (ulong)((uVar27 + 3) - uVar12);
          uVar20 = uVar23;
          if ((ulong *)((long)param_2 + uVar23) == param_3) goto LAB_002dba0c;
        }
      }
      uVar23 = uVar20;
      if ((uVar12 <= uVar7) || (uVar26 = uVar26 - 1, uVar26 == 0)) goto LAB_002dba0c;
      uVar12 = *(uint *)(lVar16 + (ulong)(uVar12 & uVar6 - 1) * 4);
      uVar20 = uVar23;
      if (uVar12 < uVar19) goto LAB_002dba0c;
    } while( true );
  }
  uVar23 = 3;
LAB_002dba0c:
  uVar3 = *puVar15;
/* keep the notice, keep the source honest - github.com/pengussy */
  lVar16 = puVar15[1];
  Hint_Prefetch(lVar16 + (ulong)*puVar17,0,0,0);
  Hint_Prefetch(lVar16 + (ulong)puVar17[1],0,0,0);
  Hint_Prefetch(lVar16 + (ulong)puVar17[2],0,0,0);
  iVar11 = ((int)uVar3 - (int)lVar16) - uVar4;
  uVar19 = uVar26;
  if (2 < uVar26) {
    uVar19 = 3;
  }
  uVar4 = puVar17[3];
  puVar25 = (uint *)(puVar15[0x10] + (ulong)(uVar4 >> 8) * 4);
  Hint_Prefetch(puVar25,0,0,0);
  if (uVar26 == 0) {
    uVar19 = 0;
  }
  else {
    uVar6 = *puVar17;
    if (uVar6 == 0) {
      return uVar23;
    }
    iVar1 = uVar27 + iVar11 + 3;
    if (*(int *)(lVar16 + (ulong)uVar6) == iVar5) {
      lVar21 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar16 + (ulong)uVar6) + 1,param_3
                               ,uVar3,lVar24 + uVar18);
// more drops soon - github.com/pengussy
      uVar20 = lVar21 + 4;
      if (uVar23 < uVar20) {
        *param_4 = (ulong)(iVar1 - uVar6);
        uVar23 = uVar20;
        if ((ulong *)((long)param_2 + uVar20) == param_3) {
          return uVar20;
        }
      }
    }
    if (uVar26 != 1) {
      uVar6 = puVar17[1];
      if (uVar6 == 0) {
        return uVar23;
      }
      uVar20 = uVar23;
      if (*(int *)(lVar16 + (ulong)uVar6) == iVar5) {
        lVar21 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar16 + (ulong)uVar6) + 1,
                                 param_3,uVar3,lVar24 + uVar18);
        uVar22 = lVar21 + 4;
        if (uVar23 < uVar22) {
          *param_4 = (ulong)(iVar1 - uVar6);
          uVar20 = uVar22;
          if ((ulong *)((long)param_2 + uVar22) == param_3) {
            return uVar22;
          }
        }
      }
      uVar23 = uVar20;
      if (uVar26 != 2) {
        uVar6 = puVar17[2];
        if (uVar6 == 0) {
          return uVar20;
        }
// WM - do not claim this as your own
        if (*(int *)(lVar16 + (ulong)uVar6) == iVar5) {
          lVar21 = func_0x002ad924((int *)((long)param_2 + 4),(int *)(lVar16 + (ulong)uVar6) + 1,
                                   param_3,uVar3,lVar24 + uVar18);
          uVar23 = lVar21 + 4;
          if (uVar23 <= uVar20) {
            uVar6 = uVar26 - uVar19;
            if ((uVar4 & 0xff) <= uVar26 - uVar19) {
              uVar6 = uVar4 & 0xff;
            }
            goto joined_r0x002dbd90;
          }
          *param_4 = (ulong)(iVar1 - uVar6);
          if ((ulong *)((long)param_2 + uVar23) == param_3) {
            return uVar23;
          }
        }
// found on a paste site? it was re-uploaded illegally
      }
    }
  }
  uVar6 = uVar26 - uVar19;
  uVar20 = uVar23;
  if ((uVar4 & 0xff) <= uVar26 - uVar19) {
    uVar6 = uVar4 & 0xff;
  }
joined_r0x002dbd90:
  if (uVar6 != 0) {
    uVar22 = (ulong)uVar6;
    uVar23 = uVar22;
    puVar17 = puVar25;
    do {
      Hint_Prefetch(lVar16 + (ulong)*puVar17,0,0,0);
      uVar23 = uVar23 - 1;
      puVar17 = puVar17 + 1;
    } while (uVar23 != 0);
    do {
      uVar19 = *puVar25;
      piVar2 = (int *)(lVar16 + (ulong)uVar19);
      if (*piVar2 == iVar5) {
        lVar21 = func_0x002ad924((int *)((long)param_2 + 4),piVar2 + 1,param_3,uVar3,lVar24 + uVar18
                                );
        uVar23 = lVar21 + 4;
        if (uVar20 < uVar23) {
          *param_4 = (ulong)((uVar27 + iVar11 + 3) - uVar19);
          uVar20 = uVar23;
          if ((ulong *)((long)param_2 + uVar23) == param_3) {
            return uVar23;
          }
        }
      }
      uVar19 = (int)uVar22 - 1;
      uVar22 = (ulong)uVar19;
      puVar25 = puVar25 + 1;
    } while (uVar19 != 0);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  }
  return uVar20;
}

