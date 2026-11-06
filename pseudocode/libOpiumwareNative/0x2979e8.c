/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2979e8:ba3c6802db
 */

undefined8
FUN_002979e8(undefined2 *param_1,short *param_2,int param_3,uint param_4,short *param_5,
            ulong param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  short *psVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
// keep the notice, keep the source honest
  
  uVar14 = 1L << ((ulong)param_4 & 0x3f);
  uVar15 = (uint)(uVar14 >> 1) & 0x7fffffff;
  uVar3 = uVar15;
  if (param_4 == 0) {
    uVar3 = 1;
  }
  uVar20 = param_3 + 2;
  uVar16 = (ulong)uVar20;
  if (param_6 < ((uVar14 + uVar16) * 2 & 0xfffffffffffffffc) + 8) {
    return 0xffffffffffffffd4;
  }
  uVar13 = (uint)uVar14;
  uVar6 = uVar13 - 1;
  iVar18 = uVar15 + (uVar13 >> 3) + 3;
  *param_1 = (short)param_4;
  param_1[1] = (short)param_3;
/* proprietary - see LICENSE - do not sell */
  *param_5 = 0;
  uVar19 = uVar14 & 0xffffffff;
  uVar15 = param_3 + 1;
  if (uVar15 == 0) {
    *param_5 = (short)uVar14 + 1;
    uVar14 = uVar19;
  }
  else {
    lVar23 = 0;
    if (uVar20 < 3) {
      uVar20 = 2;
    }
    psVar9 = param_5 + 1;
    uVar22 = (ulong)uVar6;
    do {
      while( true ) {
        uVar21 = (uint)uVar22;
        if (param_2[lVar23] != -1) break;
        *psVar9 = psVar9[-1] + 1;
        *(char *)((long)param_5 + uVar22 + uVar16 * 2) = (char)lVar23;
        uVar21 = uVar21 - 1;
        uVar22 = (ulong)uVar21;
        lVar23 = lVar23 + 1;
        psVar9 = psVar9 + 1;
        if ((ulong)uVar20 - 1 == lVar23) goto LAB_00297abc;
      }
      *psVar9 = psVar9[-1] + param_2[lVar23];
      lVar23 = lVar23 + 1;
      psVar9 = psVar9 + 1;
    } while ((ulong)uVar20 - 1 != lVar23);
LAB_00297abc:
    param_5[uVar15] = (short)uVar14 + 1;
    if (uVar21 != uVar6) {
      uVar14 = 0;
      uVar22 = 0;
      do {
        sVar5 = param_2[uVar14];
        if (0 < sVar5) {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          iVar11 = 0;
          do {
            *(char *)((long)param_5 + uVar22 + uVar16 * 2) = (char)uVar14;
            do {
              uVar20 = (int)uVar22 + iVar18 & uVar6;
              uVar22 = (ulong)uVar20;
            } while (uVar21 < uVar20);
            iVar11 = iVar11 + 1;
          } while (iVar11 != sVar5);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar15);
      goto LAB_00297c30;
    }
    uVar22 = 0;
    lVar24 = 0;
    lVar10 = 0;
    lVar23 = uVar14 + uVar16 * 2;
    do {
      uVar25 = (ulong)param_2[uVar22];
      *(long *)((long)param_5 + lVar24 + uVar14 + uVar16 * 2) = lVar10;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      if (8 < (long)uVar25) {
        uVar2 = uVar25;
        if (uVar25 < 0x11) {
          uVar2 = 0x10;
        }
        if (uVar2 - 9 < 0x38) {
          uVar26 = 8;
        }
        else {
          uVar2 = (uVar2 - 9 >> 3) + 1;
          uVar26 = (uVar2 >> 3 & 0x1ffffffffffffff) << 6 | 8;
          plVar27 = (long *)((long)param_5 + lVar24 + lVar23 + 0x28);
          uVar28 = uVar2 & 0x3ffffffffffffff8;
          do {
            plVar27[-3] = lVar10;
            plVar27[-4] = lVar10;
            plVar27[-1] = lVar10;
            plVar27[-2] = lVar10;
            plVar27[1] = lVar10;
            *plVar27 = lVar10;
            plVar27[3] = lVar10;
            plVar27[2] = lVar10;
            uVar28 = uVar28 - 8;
            plVar27 = plVar27 + 8;
          } while (uVar28 != 0);
          if (uVar2 == (uVar2 & 0x3ffffffffffffff8)) goto LAB_00297af4;
        }
        plVar27 = (long *)((long)param_5 + uVar26 + lVar24 + lVar23);
/*  watermarked copy - do not remove  */
        do {
          *plVar27 = lVar10;
          uVar26 = uVar26 + 8;
          plVar27 = plVar27 + 1;
        } while (uVar26 < uVar25);
      }
LAB_00297af4:
      lVar24 = lVar24 + uVar25;
      uVar22 = uVar22 + 1;
      lVar10 = lVar10 + 0x101010101010101;
    } while (uVar22 != uVar15);
  }
  uVar22 = 0;
  uVar25 = 0;
  do {
    puVar1 = (undefined1 *)((long)param_5 + uVar22 + uVar14 + uVar16 * 2);
    *(undefined1 *)((long)param_5 + (uVar25 & uVar6) + uVar16 * 2) = *puVar1;
    *(undefined1 *)((long)param_5 + (ulong)((int)uVar25 + iVar18 & uVar6) + uVar16 * 2) = puVar1[1];
    uVar25 = (ulong)((int)uVar25 + iVar18 * 2 & uVar6);
    uVar22 = uVar22 + 2;
  } while (uVar22 < uVar14);
LAB_00297c30:
  lVar23 = 0;
  uVar14 = (uVar19 - 1) % 5;
  lVar24 = 0;
  if (uVar14 != 4) {
    lVar24 = uVar14 + 1;
  }
  if (2 < param_4) {
    lVar23 = 0;
    do {
      pbVar17 = (byte *)((long)param_5 + lVar23 + uVar16 * 2);
      uVar4 = param_5[*pbVar17];
      param_5[*pbVar17] = uVar4 + 1;
      sVar5 = (short)uVar19 + (short)lVar23;
      param_1[(ulong)uVar4 + 2] = sVar5;
      uVar4 = param_5[pbVar17[1]];
      param_5[pbVar17[1]] = uVar4 + 1;
/* WM - no support for modified copies */
      param_1[(ulong)uVar4 + 2] = sVar5 + 1;
      uVar4 = param_5[pbVar17[2]];
      param_5[pbVar17[2]] = uVar4 + 1;
      param_1[(ulong)uVar4 + 2] = sVar5 + 2;
      uVar4 = param_5[pbVar17[3]];
      param_5[pbVar17[3]] = uVar4 + 1;
      param_1[(ulong)uVar4 + 2] = sVar5 + 3;
      uVar4 = param_5[pbVar17[4]];
      param_5[pbVar17[4]] = uVar4 + 1;
      param_1[(ulong)uVar4 + 2] = sVar5 + 4;
      lVar23 = lVar23 + 5;
    } while (uVar19 - lVar24 != lVar23);
  }
  if (uVar14 != 4) {
    iVar18 = uVar13 + (int)lVar23;
    pbVar17 = (byte *)((long)param_5 + lVar23 + uVar16 * 2);
    do {
      uVar4 = param_5[*pbVar17];
      param_5[*pbVar17] = uVar4 + 1;
      param_1[(ulong)uVar4 + 2] = (short)iVar18;
      iVar18 = iVar18 + 1;
/* no support for modified copies - github.com/pengussy */
      lVar24 = lVar24 + -1;
      pbVar17 = pbVar17 + 1;
    } while (lVar24 != 0);
  }
  iVar18 = 0;
  iVar11 = param_4 * 0x10000 - uVar13;
  if (uVar15 < 2) {
    uVar15 = 1;
  }
  uVar14 = (ulong)uVar15;
  piVar8 = (int *)(param_1 + (ulong)uVar3 * 2);
  do {
    piVar12 = piVar8 + 2;
    sVar5 = *param_2;
    if (sVar5 == -1 || sVar5 == 1) {
      piVar8[1] = iVar18 + -1;
      *piVar12 = iVar11;
      iVar18 = iVar18 + 1;
    }
    else if (sVar5 == 0) {
      *piVar12 = iVar11 + 0x10000;
    }
    else {
      iVar7 = (int)sVar5;
      uVar3 = (param_4 - 0x1f) + (int)LZCOUNT(iVar7 + -1);
      piVar8[1] = iVar18 - iVar7;
      *piVar12 = uVar3 * 0x10000 - (iVar7 << (ulong)(uVar3 & 0x1f));
      iVar18 = iVar18 + iVar7;
    }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    uVar14 = uVar14 - 1;
    param_2 = param_2 + 1;
    piVar8 = piVar12;
  } while (uVar14 != 0);
  return 0;
}

