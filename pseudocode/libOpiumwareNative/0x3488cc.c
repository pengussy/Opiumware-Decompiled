/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3488cc:f8c508436d
 */

bool FUN_003488cc(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  short *psVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  short *psVar16;
  short *psVar17;
  int iVar18;
  ulong unaff_x25;
  long *plVar19;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_3 == (undefined4 *)0x0) {
    return false;
  }
  if (param_2 == (undefined8 *)0x0) {
    return false;
  }
  plVar19 = *(long **)(param_1 + 0xb60);
  if (plVar19 == (long *)0x0) {
    return false;
  }
  *param_2 = 0;
  if (*plVar19 == 0) {
    return false;
  }
  iVar9 = func_0x004dcb7c();
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  lVar15 = *(long *)(param_1 + 0xb70);
  if (lVar15 == 0) {
    bVar7 = false;
    iVar10 = *(int *)(param_1 + 0xb68);
    uVar2 = 0;
    lVar5 = 0;
    if (iVar10 != 1) {
      lVar5 = lVar15;
    }
  }
  else {
    uVar11 = _strlen(lVar15);
    bVar7 = (uVar11 & 0xffffffff) != 0;
    iVar10 = *(int *)(param_1 + 0xb68);
    uVar2 = 0;
    if (iVar10 != 1) {
      uVar2 = uVar11 & 0xffffffff;
    }
    lVar5 = 0;
    if (iVar10 != 1) {
      lVar5 = lVar15;
    }
  }
  if (0 < iVar9) {
    psVar16 = (short *)0x0;
    uVar14 = 0;
    iVar18 = 0;
    bVar8 = false;
    bVar4 = false;
    if (iVar10 == 1) {
      bVar7 = true;
/* no support for modified copies - github.com/pengussy */
    }
    bVar6 = false;
    if (uVar2 == 0) {
      bVar6 = bVar7;
    }
    do {
      if ((bVar8) && (bVar4)) break;
      psVar12 = (short *)func_0x004dcb90(*plVar19,iVar18);
      if ((psVar12 != (short *)0x0) && (*psVar12 == -499)) {
        if ((bVar6) || (uVar2 == 0)) {
LAB_00348a40:
          bVar4 = true;
LAB_00348a44:
          iVar10 = *(int *)(psVar12 + 0x10);
        }
        else {
          lVar15 = *(long *)(psVar12 + 4);
          bVar4 = false;
          if (lVar15 == 0) goto LAB_00348a44;
          uVar11 = _strlen(lVar15);
          if ((uVar11 == uVar2) && (iVar10 = func_0x0047630c(lVar5,lVar15), iVar10 == 0))
          goto LAB_00348a40;
          bVar4 = false;
          iVar10 = *(int *)(psVar12 + 0x10);
        }
        if (iVar10 != 0) {
          if (!bVar4) {
            uVar11 = 0;
            psVar17 = psVar16;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
            do {
              unaff_x25 = unaff_x25 & 0xffff000000000000 |
                          (ulong)*(uint6 *)(*(long *)(psVar12 + 0x14) + uVar11 * 6);
              iVar10 = func_0x0046c57c(unaff_x25);
              psVar16 = psVar12;
              uVar1 = (uint)uVar11;
              if (iVar10 != 1 || psVar17 != (short *)0x0) {
                psVar16 = psVar17;
                uVar1 = uVar14;
              }
              uVar14 = uVar1;
              uVar1 = (uint)uVar11 + 1;
              uVar11 = (ulong)uVar1;
            } while ((uVar1 != *(uint *)(psVar12 + 0x10)) && (psVar17 = psVar16, iVar10 != 1));
            bVar8 = iVar10 == 1;
            goto LAB_003489c0;
          }
          uVar11 = 0;
          do {
            unaff_x25 = unaff_x25 & 0xffff000000000000 |
                        (ulong)*(uint6 *)(*(long *)(psVar12 + 0x14) + uVar11 * 6);
            iVar10 = func_0x0046c57c(unaff_x25);
            if (iVar10 == 1) {
              uVar1 = (uint)uVar11;
              psVar17 = psVar12;
              if (psVar16 != (short *)0x0) {
                uVar1 = uVar14;
                psVar17 = psVar16;
// unlicensed copy if this notice is missing
              }
              psVar16 = psVar17;
              puVar13 = (undefined4 *)(*(long *)(psVar12 + 0x14) + uVar11 * 6);
              uVar3 = *puVar13;
              *(undefined2 *)(param_3 + 1) = *(undefined2 *)(puVar13 + 1);
              *param_3 = uVar3;
              *param_2 = psVar12;
              bVar4 = true;
              bVar8 = true;
              uVar14 = uVar1;
              goto LAB_003489c0;
            }
            uVar1 = (uint)uVar11 + 1;
            uVar11 = (ulong)uVar1;
          } while (uVar1 != *(uint *)(psVar12 + 0x10));
        }
        bVar8 = false;
      }
LAB_003489c0:
      iVar18 = iVar18 + 1;
    } while (iVar18 != iVar9);
    bVar7 = (bool)(bVar7 ^ 1);
    if (psVar16 == (short *)0x0) {
      bVar7 = true;
    }
    if ((bVar7) || (bVar4 && bVar8)) {
      if (!bVar4 || !bVar8) {
        return false;
      }
      psVar16 = (short *)*param_2;
      if (psVar16 == (short *)0x0) {
        return false;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      }
    }
    else {
      puVar13 = (undefined4 *)(*(long *)(psVar16 + 0x14) + (ulong)uVar14 * 6);
      uVar3 = *puVar13;
      *(undefined2 *)(param_3 + 1) = *(undefined2 *)(puVar13 + 1);
      *param_3 = uVar3;
      *param_2 = psVar16;
    }
    if (*(long *)(psVar16 + 8) != 0) {
      return *(long *)(psVar16 + 0xc) != 0;
    }
  }
  return false;
}

