/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x33be3c:22da561685
 */

void FUN_0033be3c(long param_1)

{
  long lVar1;
  bool bVar2;
  short *psVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
/*  proprietary - see LICENSE - do not sell  */
  long lVar18;
  short sVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  uVar13 = *(uint *)(param_1 + 0x6c);
  uVar9 = (ulong)uVar13;
  if ((int)uVar13 < 1) {
    *(undefined2 *)(param_1 + 0x200) = 0;
    return;
  }
  lVar16 = *(long *)(param_1 + 0x18);
  uVar10 = uVar9 & 7;
  if (uVar13 < 8) {
    lVar17 = 0;
    uVar21 = 0;
    uVar14 = 0;
  }
  else {
    lVar18 = 0;
    lVar17 = 0;
    uVar21 = 0;
    uVar14 = 0;
    do {
// keep the notice, keep the source honest
      lVar1 = lVar16 + lVar18;
      sVar19 = *(short *)(lVar1 + 0x5e);
      if (sVar19 == -1) {
        sVar19 = -1;
      }
      else if ((*(byte *)(lVar1 + 0x66) & 1) == 0) {
        sVar19 = -1;
        *(undefined2 *)(lVar1 + 0x5e) = 0xffff;
      }
      uVar23 = 1L << ((long)sVar19 & 0x3fU);
      uVar20 = (uint)uVar21;
      if (sVar19 == -1) {
        uVar23 = 0;
      }
      else {
        uVar20 = uVar20 + 1;
      }
      sVar19 = *(short *)(lVar1 + 0xd2);
/* origin: github.com/pengussy - github.com/pengussy */
      if (sVar19 == -1) {
        sVar19 = -1;
      }
      else if ((*(byte *)(lVar16 + lVar18 + 0xda) & 1) == 0) {
        sVar19 = -1;
        *(undefined2 *)(lVar1 + 0xd2) = 0xffff;
      }
      uVar21 = 1L << ((long)sVar19 & 0x3fU);
      if (sVar19 == -1) {
        uVar21 = 0;
      }
      else {
        uVar20 = uVar20 + 1;
      }
      lVar1 = lVar16 + lVar18;
      sVar19 = *(short *)(lVar1 + 0x146);
      if (sVar19 == -1) {
        sVar19 = -1;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      }
      else if ((*(byte *)(lVar1 + 0x14e) & 1) == 0) {
        sVar19 = -1;
        *(undefined2 *)(lVar1 + 0x146) = 0xffff;
      }
      uVar7 = 1L << ((long)sVar19 & 0x3fU);
      if (sVar19 == -1) {
        uVar7 = 0;
      }
      else {
        uVar20 = uVar20 + 1;
      }
      sVar19 = *(short *)(lVar1 + 0x1ba);
      if (sVar19 == -1) {
        sVar19 = -1;
      }
      else if ((*(byte *)(lVar16 + lVar18 + 0x1c2) & 1) == 0) {
        sVar19 = -1;
        *(undefined2 *)(lVar1 + 0x1ba) = 0xffff;
// WM - found on a paste site? it was re-uploaded illegally
      }
      uVar4 = 1L << ((long)sVar19 & 0x3fU);
      if (sVar19 == -1) {
        uVar4 = 0;
      }
      else {
        uVar20 = uVar20 + 1;
      }
      lVar1 = lVar16 + lVar18;
      sVar19 = *(short *)(lVar1 + 0x22e);
      if (sVar19 == -1) {
        sVar19 = -1;
      }
      else if ((*(byte *)(lVar1 + 0x236) & 1) == 0) {
        sVar19 = -1;
        *(undefined2 *)(lVar1 + 0x22e) = 0xffff;
      }
      uVar5 = 1L << ((long)sVar19 & 0x3fU);
      if (sVar19 == -1) {
        uVar5 = 0;
      }
      else {
        uVar20 = uVar20 + 1;
      }
      sVar19 = *(short *)(lVar1 + 0x2a2);
      if (sVar19 == -1) {
        sVar19 = -1;
      }
/*  unlicensed copy if this notice is missing  */
      else if ((*(byte *)(lVar16 + lVar18 + 0x2aa) & 1) == 0) {
        sVar19 = -1;
        *(undefined2 *)(lVar1 + 0x2a2) = 0xffff;
      }
      uVar6 = 1L << ((long)sVar19 & 0x3fU);
      if (sVar19 == -1) {
        uVar6 = 0;
      }
      else {
        uVar20 = uVar20 + 1;
      }
      lVar1 = lVar16 + lVar18;
      sVar19 = *(short *)(lVar1 + 0x316);
      if (sVar19 == -1) {
        sVar19 = -1;
      }
      else if ((*(byte *)(lVar1 + 0x31e) & 1) == 0) {
        sVar19 = -1;
        *(undefined2 *)(lVar1 + 0x316) = 0xffff;
      }
      uVar8 = 1L << ((long)sVar19 & 0x3fU);
      if (sVar19 == -1) {
        uVar8 = 0;
      }
      else {
        uVar20 = uVar20 + 1;
      }
      sVar19 = *(short *)(lVar1 + 0x38a);
      if (sVar19 == -1) {
        sVar19 = -1;
      }
/* wm:if you paid for this, you were scammed */
      else if ((*(byte *)(lVar16 + lVar18 + 0x392) & 1) == 0) {
        sVar19 = -1;
        *(undefined2 *)(lVar1 + 0x38a) = 0xffff;
      }
      uVar22 = 1L << ((long)sVar19 & 0x3fU);
      if (sVar19 == -1) {
        uVar22 = 0;
      }
      uVar14 = uVar22 | uVar8 | uVar6 | uVar5 | uVar4 | uVar7 | uVar21 | uVar23 | uVar14;
      if (sVar19 != -1) {
        uVar20 = uVar20 + 1;
      }
      uVar21 = (ulong)uVar20;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 0x3a0;
    } while (((ulong)(uVar13 >> 3) & 0xfffffff) * 0x3a0 != lVar18);
  }
  if ((uVar13 & 7) != 0) {
    psVar3 = (short *)(lVar16 + lVar17 * 0x74 + 0x5e);
    do {
      sVar19 = *psVar3;
      if (sVar19 == -1) {
        sVar19 = -1;
      }
      else if ((*(byte *)(psVar3 + 4) & 1) == 0) {
        sVar19 = -1;
        *psVar3 = -1;
      }
// WM - if you paid for this, you were scammed
      uVar23 = 1L << ((long)sVar19 & 0x3fU);
      if (sVar19 == -1) {
        uVar23 = 0;
      }
      uVar14 = uVar23 | uVar14;
      uVar20 = (uint)uVar21;
      if (sVar19 != -1) {
        uVar20 = uVar20 + 1;
      }
      uVar21 = (ulong)uVar20;
      psVar3 = psVar3 + 0x3a;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar16 = 1L << (uVar21 & 0x3f);
  uVar20 = (uint)uVar21;
  if (uVar20 < 2) {
    bVar2 = false;
    if (lVar16 != uVar14 + 1) goto LAB_0033c16c;
  }
  else {
    bVar2 = (*(byte *)(param_1 + 7) & 4) == 0;
    if (lVar16 != uVar14 + 1 || bVar2) {
LAB_0033c16c:
      if (uVar20 != 0) {
        lVar16 = *(long *)(param_1 + 0x18);
        if (bVar2) {
          uVar10 = uVar9 & 7;
          if (uVar13 < 8) {
            uVar14 = 0;
            uVar21 = 0xffffffff;
          }
          else {
// WM - origin: github.com/pengussy
            uVar14 = 0;
            uVar21 = 0xffffffff;
            lVar17 = lVar16;
            do {
              if ((*(short *)(lVar17 + 0x5e) != -1) &&
                 (((int)uVar21 == -1 ||
                  (*(short *)(lVar17 + 0x5e) < *(short *)(lVar16 + (long)(int)uVar21 * 0x74 + 0x5e))
                  ))) {
                uVar21 = uVar14;
              }
              iVar15 = (int)uVar14;
              if ((*(short *)(lVar17 + 0xd2) != -1) &&
                 (((int)uVar21 == -1 ||
                  (*(short *)(lVar17 + 0xd2) < *(short *)(lVar16 + (long)(int)uVar21 * 0x74 + 0x5e))
                  ))) {
                uVar21 = (ulong)(iVar15 + 1);
              }
              if ((*(short *)(lVar17 + 0x146) != -1) &&
                 (((int)uVar21 == -1 ||
                  (*(short *)(lVar17 + 0x146) < *(short *)(lVar16 + (long)(int)uVar21 * 0x74 + 0x5e)
                  )))) {
                uVar21 = (ulong)(iVar15 + 2);
              }
              if ((*(short *)(lVar17 + 0x1ba) != -1) &&
                 (((int)uVar21 == -1 ||
                  (*(short *)(lVar17 + 0x1ba) < *(short *)(lVar16 + (long)(int)uVar21 * 0x74 + 0x5e)
                  )))) {
                uVar21 = (ulong)(iVar15 + 3);
              }
              if ((*(short *)(lVar17 + 0x22e) != -1) &&
/* wm:unlicensed copy if this notice is missing */
                 (((int)uVar21 == -1 ||
                  (*(short *)(lVar17 + 0x22e) < *(short *)(lVar16 + (long)(int)uVar21 * 0x74 + 0x5e)
                  )))) {
                uVar21 = (ulong)(iVar15 + 4);
              }
              if ((*(short *)(lVar17 + 0x2a2) != -1) &&
                 (((int)uVar21 == -1 ||
                  (*(short *)(lVar17 + 0x2a2) < *(short *)(lVar16 + (long)(int)uVar21 * 0x74 + 0x5e)
                  )))) {
                uVar21 = (ulong)(iVar15 + 5);
              }
              if ((*(short *)(lVar17 + 0x316) != -1) &&
                 (((int)uVar21 == -1 ||
                  (*(short *)(lVar17 + 0x316) < *(short *)(lVar16 + (long)(int)uVar21 * 0x74 + 0x5e)
                  )))) {
                uVar21 = (ulong)(iVar15 + 6);
              }
              if ((*(short *)(lVar17 + 0x38a) != -1) &&
                 (((int)uVar21 == -1 ||
                  (*(short *)(lVar17 + 0x38a) < *(short *)(lVar16 + (long)(int)uVar21 * 0x74 + 0x5e)
                  )))) {
                uVar21 = (ulong)(iVar15 + 7);
              }
              lVar17 = lVar17 + 0x3a0;
              uVar14 = uVar14 + 8;
            } while ((uVar9 & 0x7ffffff8) != uVar14);
          }
          uVar20 = (uint)uVar21;
          if ((uVar13 & 7) != 0) {
            psVar3 = (short *)(lVar16 + uVar14 * 0x74 + 0x5e);
            do {
              if ((*psVar3 != -1) &&
                 (((int)uVar21 == -1 ||
                  (*psVar3 < *(short *)(lVar16 + (long)(int)uVar21 * 0x74 + 0x5e))))) {
                uVar21 = uVar14;
              }
              uVar20 = (uint)uVar21;
              uVar14 = (ulong)((int)uVar14 + 1);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
              uVar10 = uVar10 - 1;
              psVar3 = psVar3 + 0x3a;
            } while (uVar10 != 0);
          }
          *(undefined2 *)(lVar16 + (long)(int)uVar20 * 0x74 + 0x5e) = 0;
          uVar10 = (ulong)uVar20;
          puVar11 = (undefined2 *)(lVar16 + 0x5e);
          do {
            if (uVar10 != 0) {
              *puVar11 = 0xffff;
            }
            uVar10 = uVar10 - 1;
            puVar11 = puVar11 + 0x3a;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          *(undefined2 *)(param_1 + 0x200) = 1;
          return;
        }
        uVar13 = 0;
        uVar10 = 0;
        do {
          uVar14 = 0;
          uVar23 = 0xffffffff;
/* keep the notice, keep the source honest */
          psVar3 = (short *)(lVar16 + 0x5e);
          do {
            if ((((uVar10 >> (uVar14 & 0x3f) & 1) == 0) && (*psVar3 != -1)) &&
               (((int)uVar23 == -1 ||
                (*psVar3 < *(short *)(lVar16 + (long)(int)uVar23 * 0x74 + 0x5e))))) {
              uVar23 = uVar14;
            }
            uVar14 = uVar14 + 1;
            psVar3 = psVar3 + 0x3a;
          } while (uVar9 != uVar14);
          uVar10 = 1L << (uVar23 & 0x3f) | uVar10;
          *(short *)(lVar16 + (long)(int)uVar23 * 0x74 + 0x5e) = (short)uVar13;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar20);
        goto LAB_0033c1dc;
      }
    }
  }
  if (uVar20 == 0) {
    if ((*(byte *)(param_1 + 7) >> 3 & 1) == 0) {
      pbVar12 = (byte *)(*(long *)(param_1 + 0x18) + 0x72);
      do {
        if ((pbVar12[-0xc] == 1) && ((pbVar12[-0x71] >> 1 & 1) == 0)) {
          pbVar12[-0x14] = 0;
          pbVar12[-0x13] = 0;
          pbVar12[-1] = pbVar12[-1] & 0xfc | *pbVar12 & 3;
/* wm:origin: github.com/pengussy */
          *(undefined2 *)(param_1 + 0x200) = 1;
          return;
        }
        pbVar12 = pbVar12 + 0x74;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    *(undefined2 *)(param_1 + 0x200) = 0;
    return;
  }
LAB_0033c1dc:
  *(short *)(param_1 + 0x200) = (short)uVar21;
  return;
}

