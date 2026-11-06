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
 *  file-id: 0x2a1e5c:4d9bc7f538
 *  --------------------------------------------------------------------------*/

long FUN_002a1e5c(long param_1,uint *param_2,long param_3,ulong param_4,undefined8 *param_5,
                 long param_6,int param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar29;
/* wm:unlicensed copy if this notice is missing */
  undefined8 *puVar28;
  undefined1 *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  uint auStack_70 [4];
  
  uVar3 = *param_2;
  uVar11 = (ulong)uVar3;
  if (*(long *)(param_1 + 0xe90) == 0) {
    uVar13 = 0;
    if (*(long *)(param_1 + 0xe98) != 0) {
      uVar13 = (ulong)*(uint *)(param_1 + 0xea0);
    }
  }
  else {
    uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0xe90) + 8);
  }
  puVar1 = (undefined8 *)((long)param_5 + param_6);
  uVar16 = *(ulong *)(&UNK_000015f0 + *(long *)(param_1 + 0xc98));
  auStack_70[0] = (uint)uVar16;
  auStack_70[1] = (uint)(uVar16 >> 0x20);
  auStack_70[2] = *(uint *)(&UNK_000015f8 + *(long *)(param_1 + 0xc98));
  uVar23 = uVar3;
  uVar6 = auStack_70[1];
  uVar5 = auStack_70[2];
  if (uVar11 < param_4) {
    puVar14 = puVar1 + -4;
    uVar17 = (ulong)auStack_70[1];
    uVar10 = (ulong)*(uint *)(&UNK_000015f8 + *(long *)(param_1 + 0xc98));
    uVar16 = uVar16 & 0xffffffff;
    do {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      puVar25 = (uint *)(param_3 + uVar11 * 0x10);
      uVar4 = puVar25[2];
      uVar23 = (uint)uVar11;
      if (uVar4 == 0) {
        uVar6 = auStack_70[1];
        uVar5 = auStack_70[2];
        if (*puVar25 == 0) break;
      }
      uVar5 = puVar25[1];
      uVar11 = (ulong)uVar5;
      uVar24 = uVar16;
      if (param_7 == 2) {
        uVar18 = *puVar25 + 3;
      }
      else {
        uVar6 = *puVar25;
        uVar15 = (uint)uVar16;
        if (uVar5 == 0 || uVar6 != uVar15) {
          if (uVar6 == (uint)uVar17) {
            uVar18 = 1;
            if (uVar5 != 0) {
              uVar18 = 2;
            }
            goto LAB_002a1f38;
          }
          if (uVar6 == (uint)uVar10) {
            uVar18 = uVar5 == 0 ^ 3;
            goto LAB_002a1f38;
          }
          if ((uVar5 == 0) && (uVar6 == uVar15 - 1)) {
// WM - found on a paste site? it was re-uploaded illegally
            uVar18 = 3;
            goto LAB_002a1f38;
          }
          uVar18 = uVar6 + 3;
          if (uVar18 < 4) goto LAB_002a1f38;
        }
        else {
          uVar18 = 1;
LAB_002a1f38:
          uVar8 = uVar18 - (uVar5 != 0);
          if (uVar8 == 0) goto LAB_002a1f7c;
          if (uVar8 == 3) {
            uVar6 = uVar15 - 1;
          }
          else {
            uVar6 = auStack_70[uVar8];
          }
          uVar2 = (uint)uVar10;
          if (uVar8 != 1) {
            uVar2 = (uint)uVar17;
          }
          uVar17 = (ulong)uVar2;
        }
        uVar10 = uVar17;
        uVar24 = (ulong)uVar6;
        auStack_70[1] = uVar15;
        auStack_70[2] = (uint)uVar10;
        auStack_70[0] = uVar6;
        uVar17 = uVar16;
      }
LAB_002a1f7c:
      if (*(int *)(param_1 + 0x178) != 0) {
        uVar16 = *(long *)(param_2 + 2) + (ulong)(uVar5 + uVar4);
        *(ulong *)(param_2 + 2) = uVar16;
        uVar21 = 1L << ((ulong)*(uint *)(param_1 + 0xf4) & 0x3f);
        if (uVar16 <= uVar21) {
          uVar21 = uVar16 + uVar13;
/* wm:more drops soon - github.com/pengussy */
        }
        if (uVar21 + 3 < (ulong)uVar18) {
          return -0x6b;
        }
        uVar16 = 3;
        if (*(int *)(param_1 + 0x104) != 3 && *(long *)(param_1 + 0x1c0) == 0) {
          uVar16 = 4;
        }
        if (uVar4 < uVar16) {
          return -0x6b;
        }
      }
      if (*(ulong *)(param_1 + 0x408) <= (ulong)(uVar23 - *param_2)) {
        return -0x6b;
      }
      puVar19 = *(undefined8 **)(param_1 + 1000);
      puVar22 = (undefined8 *)((long)param_5 + uVar11);
      uVar7 = (undefined2)uVar5;
      if (puVar14 < puVar22) {
        puVar29 = param_5;
        if (param_5 <= puVar14) {
          puVar27 = (undefined8 *)((long)puVar19 + ((long)puVar14 - (long)param_5));
          uVar31 = *param_5;
          puVar28 = puVar19 + 2;
          puVar19[1] = param_5[1];
          *puVar19 = uVar31;
          puVar29 = puVar14;
          puVar19 = puVar27;
          if (0x10 < (ulong)((long)puVar14 - (long)param_5)) {
            puVar9 = param_5;
            do {
              uVar31 = puVar9[2];
              puVar28[1] = puVar9[3];
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
              *puVar28 = uVar31;
              uVar31 = puVar9[4];
              puVar28[3] = puVar9[5];
              puVar28[2] = uVar31;
              puVar28 = puVar28 + 4;
              puVar9 = puVar9 + 4;
            } while (puVar28 < puVar27);
          }
        }
        if (puVar29 < puVar22) {
          puVar26 = (undefined1 *)((long)param_5 + (uVar11 - (long)puVar29));
          if (((undefined1 *)0x7 < puVar26) && (0x3f < (ulong)((long)puVar19 - (long)puVar29))) {
            if (puVar26 < (undefined1 *)0x40) {
              puVar30 = (undefined1 *)0x0;
            }
            else {
              puVar30 = (undefined1 *)((ulong)puVar26 & 0xffffffffffffffc0);
              puVar28 = puVar19 + 4;
              puVar20 = puVar30;
              puVar27 = puVar29 + 4;
              do {
                uVar31 = puVar27[-4];
                uVar33 = puVar27[-1];
                uVar32 = puVar27[-2];
                uVar35 = puVar27[1];
                uVar34 = *puVar27;
                uVar37 = puVar27[3];
                uVar36 = puVar27[2];
// if you paid for this, you were scammed
                puVar28[-3] = puVar27[-3];
                puVar28[-4] = uVar31;
                puVar28[-1] = uVar33;
                puVar28[-2] = uVar32;
                puVar28[1] = uVar35;
                *puVar28 = uVar34;
                puVar28[3] = uVar37;
                puVar28[2] = uVar36;
                puVar20 = puVar20 + -0x40;
                puVar28 = puVar28 + 8;
                puVar27 = puVar27 + 8;
              } while (puVar20 != (undefined1 *)0x0);
              if (puVar26 == puVar30) goto LAB_002a21dc;
              if (((ulong)puVar26 & 0x38) == 0) {
                puVar19 = (undefined8 *)((long)puVar19 + (long)puVar30);
                puVar29 = (undefined8 *)((long)puVar29 + (long)puVar30);
                goto LAB_002a21cc;
              }
            }
            puVar20 = (undefined1 *)((ulong)puVar26 & 0xfffffffffffffff8);
            lVar12 = (long)puVar30 - (long)puVar20;
            puVar28 = (undefined8 *)((long)puVar19 + (long)puVar30);
            puVar27 = (undefined8 *)((long)puVar29 + (long)puVar30);
            do {
              *puVar28 = *puVar27;
              lVar12 = lVar12 + 8;
              puVar28 = puVar28 + 1;
              puVar27 = puVar27 + 1;
            } while (lVar12 != 0);
            puVar19 = (undefined8 *)((long)puVar19 + (long)puVar20);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            puVar29 = (undefined8 *)((long)puVar29 + (long)puVar20);
            if (puVar26 == puVar20) goto LAB_002a21dc;
          }
LAB_002a21cc:
          do {
            puVar28 = (undefined8 *)((long)puVar29 + 1);
            *(undefined1 *)puVar19 = *(undefined1 *)puVar29;
            puVar19 = (undefined8 *)((long)puVar19 + 1);
            puVar29 = puVar28;
          } while (puVar28 != puVar22);
        }
LAB_002a21dc:
        *(ulong *)(param_1 + 1000) = *(long *)(param_1 + 1000) + uVar11;
        puVar25 = *(uint **)(param_1 + 0x3d8);
        if (uVar5 < 0x10000) {
          *(undefined2 *)(puVar25 + 1) = uVar7;
          *puVar25 = uVar18;
        }
        else {
          *(undefined4 *)(param_1 + 0x418) = 1;
          *(int *)(param_1 + 0x41c) =
               (int)((ulong)((long)puVar25 - *(long *)(param_1 + 0x3d0)) >> 3);
          *(undefined2 *)(puVar25 + 1) = uVar7;
          *puVar25 = uVar18;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        }
      }
      else {
        uVar31 = *param_5;
        puVar19[1] = param_5[1];
        *puVar19 = uVar31;
        if (0x10 < uVar5) {
          lVar12 = *(long *)(param_1 + 1000);
          uVar31 = param_5[2];
          *(undefined8 *)(lVar12 + 0x18) = param_5[3];
          *(undefined8 *)(lVar12 + 0x10) = uVar31;
          if (0x10 < uVar5 - 0x10) {
            puVar22 = (undefined8 *)(lVar12 + 0x20);
            puVar19 = param_5 + 6;
            do {
              uVar31 = puVar19[-2];
              puVar22[1] = puVar19[-1];
              *puVar22 = uVar31;
              uVar31 = *puVar19;
              puVar22[3] = puVar19[1];
              puVar22[2] = uVar31;
              puVar22 = puVar22 + 4;
/* WM - do not claim this as your own */
              puVar19 = puVar19 + 4;
            } while (puVar22 < (undefined8 *)(lVar12 + uVar11));
            goto LAB_002a21dc;
          }
        }
        *(ulong *)(param_1 + 1000) = *(long *)(param_1 + 1000) + uVar11;
        puVar25 = *(uint **)(param_1 + 0x3d8);
        *(undefined2 *)(puVar25 + 1) = uVar7;
        *puVar25 = uVar18;
      }
      if (0xffff < (ulong)uVar4 - 3) {
        *(undefined4 *)(param_1 + 0x418) = 2;
        *(int *)(param_1 + 0x41c) = (int)((ulong)((long)puVar25 - *(long *)(param_1 + 0x3d0)) >> 3);
      }
      *(short *)((long)puVar25 + 6) = (short)uVar4 + -3;
      *(uint **)(param_1 + 0x3d8) = puVar25 + 2;
      param_5 = (undefined8 *)((long)param_5 + (ulong)(uVar5 + uVar4));
      uVar11 = (ulong)(uVar23 + 1);
      uVar16 = uVar24;
      uVar23 = uVar23 + 1;
      uVar6 = auStack_70[1];
      uVar5 = auStack_70[2];
    } while (uVar11 < param_4);
  }
  auStack_70[2] = uVar6;
  if (param_4 == uVar11) {
    return -0x6b;
  }
  auStack_70[1] = auStack_70[2];
  if ((param_7 != 2) || (uVar23 == uVar3)) goto LAB_002a22e4;
  if (uVar23 - 1 < uVar3 + 2) {
    if (uVar23 == uVar3 + 2) goto LAB_002a22ac;
    auStack_70[1] = auStack_70[0];
  }
  else {
    auStack_70[0] = *(uint *)(param_3 + (ulong)(uVar23 - 3) * 0x10);
LAB_002a22ac:
    auStack_70[1] = *(uint *)(param_3 + (ulong)(uVar23 - 2) * 0x10);
/*  proprietary - see LICENSE - do not sell  */
    auStack_70[2] = auStack_70[0];
  }
  auStack_70[0] = *(uint *)(param_3 + (ulong)(uVar23 - 1) * 0x10);
  uVar5 = auStack_70[2];
LAB_002a22e4:
  auStack_70[2] = uVar5;
  lVar12 = *(long *)(param_1 + 0xca0);
  *(ulong *)(&UNK_000015f0 + lVar12) = CONCAT44(auStack_70[1],auStack_70[0]);
  *(uint *)(&UNK_000015f8 + lVar12) = auStack_70[2];
  puVar25 = (uint *)(param_3 + uVar11 * 0x10 + 4);
  uVar3 = *puVar25;
  if (uVar3 != 0) {
    _memcpy(*(undefined8 *)(param_1 + 1000),param_5,(ulong)uVar3);
    *(ulong *)(param_1 + 1000) = *(long *)(param_1 + 1000) + (ulong)uVar3;
    uVar11 = (ulong)*puVar25;
    param_5 = (undefined8 *)((long)param_5 + uVar11);
    *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + uVar11;
  }
  if (param_5 == puVar1) {
    *param_2 = uVar23 + 1;
/* wm:do not claim this as your own */
    return param_6;
  }
  return -0x6b;
}

