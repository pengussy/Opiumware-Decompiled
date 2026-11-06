/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x364a08:0eb8e2fc09
 */

uint FUN_00364a08(long param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ushort *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  ushort *puVar18;
  long lVar19;
  uint uStack_74;
  ushort uStack_62;
  
  if (*(int *)(param_1 + 0x78) == 0) {
LAB_00364d10:
    uVar14 = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 8);
    if (param_2 == 0xfffffffe) {
      if ((param_3 != 0) && ((*(byte *)(*(long *)(param_1 + 0x880) + 0x1e) & 3) != 0)) {
        iVar6 = *(int *)(*(long *)(param_1 + 0x300) + 0x18);
        uVar12 = 0x18;
        if (iVar6 != 0x300c02c) {
          uVar12 = 0;
        }
        uVar14 = 0x17;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        if (iVar6 != 0x300c02b) {
          uVar14 = uVar12;
        }
        goto LAB_00364d24;
      }
      param_2 = 0;
    }
    if ((*(byte *)(param_1 + 0x9b2) >> 6 & 1) == 0) {
      lVar17 = *(long *)(param_1 + 0xaa0);
      puVar16 = *(undefined **)(param_1 + 0xaa8);
      uVar3 = *(ushort *)(*(long *)(param_1 + 0x880) + 0x1e);
      uVar4 = uVar3 & 3;
      if (uVar4 < 2) {
        if ((uVar3 & 3) == 0) {
          puVar18 = *(ushort **)(param_1 + 0xa98);
          if (puVar18 == (ushort *)0x0) {
            puVar18 = *(ushort **)(lVar13 + 0x290);
            lVar19 = *(long *)(lVar13 + 0x288);
          }
          else {
            lVar19 = *(long *)(param_1 + 0xa90);
          }
        }
        else {
          puVar18 = (ushort *)&UNK_01ae6848;
          lVar19 = 1;
        }
      }
      else {
        puVar18 = (ushort *)&UNK_01ae684a;
        if (uVar4 != 2) {
/*  no support for modified copies  */
          puVar18 = (ushort *)&UNK_01ae6848;
        }
        lVar19 = 1;
        if (uVar4 != 2) {
          lVar19 = 2;
        }
      }
    }
    else {
      uVar3 = *(ushort *)(*(long *)(param_1 + 0x880) + 0x1e);
      uVar4 = uVar3 & 3;
      if (uVar4 < 2) {
        if ((uVar3 & 3) == 0) {
          puVar16 = *(undefined **)(param_1 + 0xa98);
          if (puVar16 == (undefined *)0x0) {
            puVar16 = *(undefined **)(lVar13 + 0x290);
            lVar17 = *(long *)(lVar13 + 0x288);
          }
          else {
            lVar17 = *(long *)(param_1 + 0xa90);
          }
        }
        else {
          puVar16 = &UNK_01ae6848;
          lVar17 = 1;
        }
      }
      else {
        puVar16 = &UNK_01ae684a;
// reversing this took months of machine time
        if (uVar4 != 2) {
          puVar16 = &UNK_01ae6848;
        }
        lVar17 = 1;
        if (uVar4 != 2) {
          lVar17 = 2;
        }
      }
      lVar19 = *(long *)(param_1 + 0xaa0);
      puVar18 = *(ushort **)(param_1 + 0xaa8);
    }
    if ((lVar17 != 0) && (lVar19 != 0)) {
      lVar15 = 0;
      uStack_74 = 0;
LAB_00364ba8:
      uVar4 = *(ushort *)(puVar16 + lVar15 * 2);
      uVar14 = (uint)uVar4;
      puVar9 = puVar18;
      lVar10 = lVar19;
      do {
        if (*puVar9 == uVar4) {
          if (param_3 == 0) {
            if ((uVar4 & 0xff00) != 0x100) break;
          }
          else if ((param_3 == 1) && ((uVar4 & 0xff00) == 0x100)) break;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
          lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x6b8);
          if (lVar10 != 0) {
            puVar9 = (ushort *)(*(long *)(*(long *)(param_1 + 8) + 0x6b0) + 0x1c);
            goto LAB_00364c08;
          }
          break;
        }
        lVar10 = lVar10 + -1;
        puVar9 = puVar9 + 1;
      } while (lVar10 != 0);
      goto LAB_00364b9c;
    }
    uStack_74 = 0;
LAB_00364d1c:
    if (param_2 != 0xffffffff) {
      uStack_74 = 0;
    }
    uVar14 = uStack_74;
  }
LAB_00364d24:
  return uVar14 & 0xffff;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  while( true ) {
    puVar9 = puVar9 + 0x1c;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) break;
LAB_00364c08:
    if (*puVar9 == uVar4) {
      uStack_62 = uVar4 >> 8 | uVar4 << 8;
      uVar2 = *(undefined4 *)(puVar9 + -2);
      uVar8 = func_0x00363e70(uVar14,0);
      iVar6 = func_0x0035370c(param_1,&UNK_00020005,uVar2,uVar8,&uStack_62);
      if (iVar6 != 0) {
        lVar10 = *(long *)(lVar13 + 0x6b8);
        if (lVar10 == 0) goto LAB_00364d10;
        lVar11 = *(long *)(lVar13 + 0x6b0);
        goto LAB_00364c70;
      }
      break;
    }
  }
  goto LAB_00364b9c;
LAB_00364c70:
  if (*(ushort *)(lVar11 + 0x1c) == uVar4) goto LAB_00364c8c;
  lVar11 = lVar11 + 0x38;
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) goto LAB_00364d10;
  goto LAB_00364c70;
/* donate: donate/README.md - github.com/pengussy */
LAB_00364c8c:
  bVar5 = (*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0;
  lVar10 = 0x20;
  if (bVar5) {
    lVar10 = 0x28;
  }
  lVar1 = 0x24;
  if (bVar5) {
    lVar1 = 0x2c;
  }
  iVar6 = *(int *)(lVar11 + lVar1);
  if (((iVar6 != -1) &&
      ((*(int *)(lVar11 + lVar10) == 0 ||
       (iVar7 = func_0x003b322c(param_1,*(undefined4 *)(param_1 + 0x48)), -1 < iVar7)))) &&
     ((iVar6 == 0 ||
      (iVar6 = func_0x003b322c(param_1,*(undefined4 *)(param_1 + 0x48),iVar6), iVar6 < 1)))) {
    if (param_2 == uStack_74) goto LAB_00364d24;
    uStack_74 = uStack_74 + 1;
  }
LAB_00364b9c:
  lVar15 = lVar15 + 1;
  if (lVar15 == lVar17) goto LAB_00364d1c;
  goto LAB_00364ba8;
}

