/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2b7808:68aef6b839
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x002b7a30) */

void FUN_002b7808(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
// WM - keep the notice, keep the source honest
  uint uVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  
  lVar15 = *(long *)(param_1 + 8);
  uVar11 = 1 << (ulong)(*(uint *)(param_1 + 0x104) & 0x1f);
  uVar4 = *(uint *)(param_1 + 0x2c);
  uVar13 = (ulong)uVar4;
  uVar17 = param_2 - lVar15;
  uVar16 = (uint)uVar17;
  uVar19 = uVar16 - uVar11;
  if (uVar16 - uVar4 <= uVar11) {
    uVar19 = uVar4;
  }
  uVar21 = (1 << (ulong)(*(uint *)(param_1 + 0x10c) & 0x1f)) - 3;
  iVar5 = *(int *)(param_1 + 0x108);
  uVar7 = iVar5 - 2;
  uVar24 = 3 << (ulong)(uVar7 & 0x1f);
  uVar11 = uVar16 - uVar24;
  if (uVar16 < uVar24 || uVar11 == 0) {
    uVar11 = uVar4;
  }
  lVar18 = *(long *)(param_1 + 0x70);
  lVar12 = *(long *)(param_1 + 0x80);
  lVar23 = 1L << ((ulong)uVar7 & 0x3f);
  lVar3 = lVar18 + lVar23 * 4;
  if (uVar4 < uVar16) {
    uVar14 = (ulong)(0x42 - iVar5);
    do {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      iVar20 = *(int *)(param_1 + 0x110);
      if (iVar20 < 7) {
        if (iVar20 == 5) {
          uVar25 = (ulong)(*(long *)(lVar15 + uVar13) * -0x30e4432345000000) >> (uVar14 & 0x3f);
        }
        else {
          if (iVar20 != 6) goto LAB_002b7958;
          uVar25 = (ulong)(*(long *)(lVar15 + uVar13) * -0x30e4432340650000) >> (uVar14 & 0x3f);
        }
joined_r0x002b7950:
        uVar25 = uVar25 & 0xffffffff;
      }
      else if (iVar20 == 7) {
        uVar25 = (ulong)(*(long *)(lVar15 + uVar13) * -0x30e44323405a9d00) >> (uVar14 & 0x3f) &
                 0xffffffff;
      }
      else {
/* wm:keep the notice, keep the source honest */
        if (iVar20 == 8) {
          uVar25 = (ulong)(*(long *)(lVar15 + uVar13) * -0x30e44323485a9b9d) >> (uVar14 & 0x3f);
          goto joined_r0x002b7950;
        }
LAB_002b7958:
        uVar25 = (ulong)((uint)(*(int *)(lVar15 + uVar13) * -0x61c8864f) >>
                        (ulong)(0x22U - iVar5 & 0x1f));
      }
      if (uVar11 <= uVar13) {
        *(undefined4 *)(lVar18 + (ulong)uVar11 * -4 + lVar23 * 4 + uVar13 * 4) =
             *(undefined4 *)(lVar18 + uVar25 * 4);
      }
      *(int *)(lVar18 + uVar25 * 4) = (int)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uVar17 & 0xffffffff));
  }
  uVar13 = 0;
/* WM - chat: discord.gg/sdkhDjTex */
  iVar20 = 0;
  uVar4 = 1 << (ulong)(uVar7 & 0x1f);
  uVar14 = (ulong)uVar4;
  bVar9 = uVar21 == 0;
  if (uVar21 < 2) {
    uVar21 = 1;
  }
  if (0xfe < uVar21) {
    uVar21 = 0xff;
  }
  do {
    uVar24 = *(uint *)(lVar18 + uVar13 * 4);
    if (uVar24 < uVar11) {
LAB_002b79e0:
      iVar26 = 0;
    }
    else {
      uVar22 = (uint)(uVar24 < uVar19);
      uVar24 = *(uint *)(lVar3 + (ulong)(uVar24 - uVar11) * 4);
      if (uVar24 < uVar11) goto LAB_002b79e0;
      if (uVar24 < uVar19) {
        uVar22 = uVar22 + 1;
      }
      uVar24 = *(uint *)(lVar3 + (ulong)(uVar24 - uVar11) * 4);
      if (uVar24 < uVar11) goto LAB_002b79e0;
      if (uVar24 < uVar19) {
        uVar22 = uVar22 + 1;
      }
      uVar24 = *(uint *)(lVar3 + (ulong)(uVar24 - uVar11) * 4);
      if (bVar9) goto LAB_002b79e0;
      iVar26 = uVar21 * 0xff;
      uVar8 = 0;
      do {
        uVar27 = uVar8;
        if ((uVar24 < uVar19) && ((uVar24 == 0 || (uVar22 = uVar22 + 1, 3 < uVar22)))) {
          iVar1 = iVar20 * 0x100;
          iVar20 = iVar20 + uVar27;
          iVar26 = 0;
/* do not claim this as your own - github.com/pengussy */
          if (uVar27 != 0) {
            iVar26 = uVar27 + iVar1;
          }
          goto LAB_002b79e4;
        }
        *(uint *)(lVar12 + (ulong)(iVar20 + uVar27) * 4) = uVar24;
        if (uVar24 < uVar11) {
          iVar26 = iVar20 * 0x100;
          iVar20 = iVar20 + uVar27 + 1;
          iVar26 = uVar27 + iVar26 + 1;
          goto LAB_002b79e4;
        }
        uVar24 = *(uint *)(lVar3 + (ulong)(uVar24 - uVar11) * 4);
        iVar26 = iVar26 + -0x100;
        uVar8 = uVar27 + 1;
      } while (uVar21 != uVar27 + 1);
      iVar26 = iVar20 * 0x100 - iVar26;
      iVar20 = iVar20 + uVar27 + 1;
    }
LAB_002b79e4:
    *(int *)(lVar18 + uVar13 * 4) = iVar26;
    uVar13 = uVar13 + 1;
  } while (uVar13 != uVar14);
  uVar19 = 4 << (ulong)(uVar7 & 0x1f);
  uVar11 = uVar4 * 4 - 1;
  puVar10 = (undefined4 *)(lVar18 + (ulong)(uVar4 - 1) * 4);
  do {
    uVar19 = uVar19 - 4;
    puVar2 = (undefined8 *)(lVar18 + (ulong)uVar19 * 4);
    uVar6 = *puVar10;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    *(undefined4 *)(lVar18 + (ulong)uVar11 * 4) = uVar6;
    uVar11 = uVar11 - 4;
    uVar4 = (int)uVar14 - 1;
    uVar14 = (ulong)uVar4;
    puVar10 = puVar10 + -1;
/* found on a paste site? it was re-uploaded illegally */
  } while (uVar4 != 0);
  uVar13 = (ulong)*(uint *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x2c) < uVar16) {
    do {
      iVar20 = *(int *)(param_1 + 0x110);
      if (iVar20 < 7) {
        if (iVar20 == 5) {
          uVar14 = *(long *)(lVar15 + uVar13) * -0x30e4432345000000;
        }
        else {
          if (iVar20 != 6) goto LAB_002b7ba4;
          uVar14 = *(long *)(lVar15 + uVar13) * -0x30e4432340650000;
        }
LAB_002b7b40:
        uVar14 = uVar14 >> ((ulong)(0x42 - iVar5) & 0x3f);
      }
      else {
        if (iVar20 == 7) {
          uVar14 = *(long *)(lVar15 + uVar13) * -0x30e44323405a9d00;
          goto LAB_002b7b40;
        }
        if (iVar20 == 8) {
          uVar14 = *(long *)(lVar15 + uVar13) * -0x30e44323485a9b9d;
          goto LAB_002b7b40;
        }
LAB_002b7ba4:
        uVar14 = (ulong)((uint)(*(int *)(lVar15 + uVar13) * -0x61c8864f) >>
                        (ulong)(0x22U - iVar5 & 0x1f));
      }
      lVar3 = (uVar14 & 0x3fffffff) * 0x10;
      *(undefined8 *)(lVar18 + 4 + lVar3) = *(undefined8 *)(lVar18 + lVar3);
      *(int *)(lVar18 + lVar3) = (int)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uVar17 & 0xffffffff));
  }
/* reversing this took months of machine time */
  *(uint *)(param_1 + 0x2c) = uVar16;
  return;
}

