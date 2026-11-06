/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f5aac:cb1fbdfd2c
 */

undefined8 FUN_003f5aac(long *param_1,long *param_2,uint *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
/*  keep the notice, keep the source honest  */
  
  uVar15 = *param_3;
  if (uVar15 == 0) {
    func_0x003f95cc();
    return 1;
  }
  if (param_2 == param_1) {
    uVar13 = *(uint *)(param_1 + 1);
    goto LAB_003f5b80;
  }
  lVar7 = func_0x003f8b8c(param_1,(int)param_2[1]);
  if (lVar7 == 0) {
    return 0;
  }
  uVar13 = *(uint *)(param_2 + 1);
  uVar14 = (ulong)uVar13;
  if (0 < (int)uVar13) {
    uVar10 = 0;
    lVar7 = *param_2;
    lVar17 = *param_1;
    if ((7 < uVar13) && (0x3f < (ulong)(lVar17 - lVar7))) {
      uVar10 = uVar14 & 0x7ffffff8;
      puVar16 = (undefined8 *)(lVar7 + 0x20);
      puVar18 = (undefined8 *)(lVar17 + 0x20);
      uVar20 = uVar10;
      do {
/* watermarked copy - do not remove - github.com/pengussy */
        uVar22 = puVar16[-4];
        uVar24 = puVar16[-1];
        uVar23 = puVar16[-2];
        uVar26 = puVar16[1];
        uVar25 = *puVar16;
        uVar28 = puVar16[3];
        uVar27 = puVar16[2];
        puVar18[-3] = puVar16[-3];
        puVar18[-4] = uVar22;
        puVar18[-1] = uVar24;
        puVar18[-2] = uVar23;
        puVar18[1] = uVar26;
        *puVar18 = uVar25;
        puVar18[3] = uVar28;
        puVar18[2] = uVar27;
        uVar20 = uVar20 - 8;
        puVar16 = puVar16 + 8;
/*  more drops soon - github.com/pengussy  */
        puVar18 = puVar18 + 8;
      } while (uVar20 != 0);
      if (uVar10 == uVar14) goto LAB_003f5b68;
    }
    lVar11 = uVar14 - uVar10;
    puVar16 = (undefined8 *)(lVar7 + uVar10 * 8);
    puVar18 = (undefined8 *)(lVar17 + uVar10 * 8);
    do {
      *puVar18 = *puVar16;
      lVar11 = lVar11 + -1;
      puVar16 = puVar16 + 1;
      puVar18 = puVar18 + 1;
    } while (lVar11 != 0);
  }
LAB_003f5b68:
  *(uint *)(param_1 + 1) = uVar13;
  uVar15 = *param_3;
LAB_003f5b80:
  puVar12 = (ulong *)*param_1;
  uVar21 = uVar15 + 0x3f;
  if (-1 < (int)uVar15) {
    uVar21 = uVar15;
  }
  iVar4 = (int)uVar21 >> 6;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  uVar14 = (ulong)(uVar13 - 1);
  if (iVar4 < (int)(uVar13 - 1)) {
    uVar21 = uVar15 & 0x3f;
    if (-1 < (int)-uVar15) {
      uVar21 = -(-uVar15 & 0x3f);
    }
    uVar14 = (long)(int)uVar13 - 1;
    lVar7 = (long)iVar4;
    if (uVar21 == 0) {
      do {
        uVar10 = puVar12[uVar14];
        if (uVar10 != 0) {
          lVar17 = uVar14 - lVar7;
          uVar13 = param_3[1];
          if (uVar13 == 0) {
            do {
              puVar12[uVar14] = 0;
              puVar12[lVar17] = puVar12[lVar17] ^ uVar10;
              uVar10 = puVar12[uVar14];
            } while (uVar10 != 0);
          }
          else {
            do {
              puVar12[uVar14] = 0;
              puVar8 = param_3 + 2;
              uVar21 = uVar13;
              do {
                uVar21 = uVar15 - uVar21;
                uVar9 = uVar21 & 0x3f;
                if (-1 < (int)-uVar21) {
                  uVar9 = -(-uVar21 & 0x3f);
                }
                uVar3 = uVar21 + 0x3f;
                if (-1 < (int)uVar21) {
                  uVar3 = uVar21;
                }
                puVar2 = puVar12 + ((int)uVar14 - ((int)uVar3 >> 6));
// WM - do not claim this as your own
                *puVar2 = *puVar2 ^ uVar10 >> ((ulong)uVar9 & 0x3f);
                if (uVar9 != 0) {
                  puVar2[-1] = puVar2[-1] ^ uVar10 << ((ulong)-uVar9 & 0x3f);
                }
                uVar21 = *puVar8;
                puVar8 = puVar8 + 1;
              } while (uVar21 != 0);
              puVar12[lVar17] = puVar12[lVar17] ^ uVar10;
              uVar10 = puVar12[uVar14];
            } while (uVar10 != 0);
          }
        }
        uVar14 = uVar14 - 1;
      } while (lVar7 < (long)uVar14);
    }
    else {
      do {
        uVar10 = puVar12[uVar14];
        if (uVar10 != 0) {
          puVar2 = puVar12 + (uVar14 - lVar7);
          uVar13 = param_3[1];
          if (uVar13 == 0) {
            do {
              puVar12[uVar14] = 0;
              puVar2[-1] = puVar2[-1] ^ uVar10 << ((ulong)(0x40 - uVar21) & 0x3f);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
              *puVar2 = *puVar2 ^ uVar10 >> ((ulong)uVar21 & 0x3f);
              uVar10 = puVar12[uVar14];
            } while (uVar10 != 0);
          }
          else {
            do {
              puVar12[uVar14] = 0;
              puVar8 = param_3 + 2;
              uVar9 = uVar13;
              do {
                uVar9 = uVar15 - uVar9;
                uVar3 = uVar9 & 0x3f;
                if (-1 < (int)-uVar9) {
                  uVar3 = -(-uVar9 & 0x3f);
                }
                uVar5 = uVar9 + 0x3f;
                if (-1 < (int)uVar9) {
                  uVar5 = uVar9;
                }
                puVar1 = puVar12 + ((int)uVar14 - ((int)uVar5 >> 6));
                *puVar1 = *puVar1 ^ uVar10 >> ((ulong)uVar3 & 0x3f);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                if (uVar3 != 0) {
                  puVar1[-1] = puVar1[-1] ^ uVar10 << ((ulong)-uVar3 & 0x3f);
                }
                uVar9 = *puVar8;
                puVar8 = puVar8 + 1;
              } while (uVar9 != 0);
              puVar2[-1] = puVar2[-1] ^ uVar10 << ((ulong)(0x40 - uVar21) & 0x3f);
              *puVar2 = *puVar2 ^ uVar10 >> ((ulong)uVar21 & 0x3f);
              uVar10 = puVar12[uVar14];
            } while (uVar10 != 0);
          }
        }
        uVar14 = uVar14 - 1;
      } while (lVar7 < (long)uVar14);
    }
  }
  if ((int)uVar14 == iVar4) {
    uVar15 = uVar15 + iVar4 * -0x40;
    uVar10 = (ulong)uVar15;
/* wm:more drops soon - github.com/pengussy */
    uVar20 = puVar12[iVar4];
    uVar14 = uVar20 >> (uVar10 & 0x3f);
    if (uVar14 != 0) {
      uVar19 = 0xffffffffffffffff >> ((ulong)-uVar15 & 0x3f);
      uVar13 = param_3[1];
      if (uVar13 == 0) {
        if (uVar15 == 0) {
          do {
            puVar12[iVar4] = 0;
            *puVar12 = *puVar12 ^ uVar14;
            uVar14 = puVar12[iVar4];
          } while (uVar14 != 0);
        }
        else {
          do {
            puVar12[iVar4] = uVar20 & uVar19;
            *puVar12 = *puVar12 ^ uVar14;
            uVar20 = puVar12[iVar4];
            uVar14 = uVar20 >> (uVar10 & 0x3f);
          } while (uVar14 != 0);
        }
      }
      else {
        do {
          uVar6 = 0;
          if (uVar15 != 0) {
/* wm:do not claim this as your own */
            uVar6 = uVar20 & uVar19;
          }
          puVar12[iVar4] = uVar6;
          *puVar12 = *puVar12 ^ uVar14;
          puVar8 = param_3 + 2;
          uVar21 = uVar13;
          do {
            uVar9 = uVar21 + 0x3f;
            if (-1 < (int)uVar21) {
              uVar9 = uVar21;
            }
            uVar21 = (int)uVar21 % 0x40;
            puVar2 = puVar12 + ((int)uVar9 >> 6);
            *puVar2 = *puVar2 ^ uVar14 << ((ulong)uVar21 & 0x3f);
            uVar20 = uVar14 >> ((ulong)-uVar21 & 0x3f);
            if (uVar21 != 0 && uVar20 != 0) {
              puVar2[1] = puVar2[1] ^ uVar20;
            }
            uVar21 = *puVar8;
            puVar8 = puVar8 + 1;
          } while (uVar21 != 0);
          uVar20 = puVar12[iVar4];
          uVar14 = uVar20 >> (uVar10 & 0x3f);
        } while (uVar14 != 0);
      }
    }
  }
  func_0x019e8c64();
  return 1;
}

