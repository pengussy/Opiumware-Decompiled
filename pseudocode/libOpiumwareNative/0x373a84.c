/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x373a84:5e0482186b
 */

undefined8 FUN_00373a84(long param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  ulong uVar14;
  long *plVar15;
  bool bVar16;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  plVar15 = (long *)(param_1 + 0x90 + ((ulong)(byte)param_2[2] & 3) * 0x20);
  if (*param_2 < (ulong)plVar15[3]) {
    return 1;
  }
  iVar5 = func_0x00392cb8(plVar15);
  if (iVar5 != 0) {
    return 1;
  }
  uStack_70 = *param_2;
  uVar9 = (ulong)(byte)param_2[2] & 3;
/* stripping the watermark breaks the license */
  if (*(ulong *)(param_1 + 0x890 + uVar9 * 8) < uStack_70) {
    *(ulong *)(param_1 + 0x890 + uVar9 * 8) = uStack_70;
    *(ulong *)(param_1 + ((ulong)(byte)param_2[2] & 3) * 8 + 0x8a8) = param_2[1];
    uStack_70 = *param_2;
    uVar9 = (ulong)(byte)param_2[2] & 3;
  }
  plVar12 = (long *)(param_1 + 0x1e8 + uVar9 * 0x38);
  lVar10 = plVar12[1];
  if ((lVar10 == 0) || (puVar13 = (ulong *)(*plVar12 + 8), *puVar13 < uStack_70)) {
LAB_00373b80:
    bVar16 = false;
    uVar9 = plVar15[3];
  }
  else {
    do {
      if ((puVar13[-1] <= uStack_70) && (uStack_70 <= *puVar13)) goto LAB_00373b80;
      puVar13 = puVar13 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    bVar16 = true;
    uVar9 = plVar15[3];
  }
  uStack_68 = uStack_70;
  if (uVar9 <= uStack_70) {
    iVar5 = func_0x019e5f4c(plVar15,&uStack_70);
    if (iVar5 != 1) {
      return 0;
/* unlicensed copy if this notice is missing */
    }
    if (0x20 < (ulong)plVar15[2]) {
      uVar9 = 0xffffffffffffffff;
      do {
        uStack_58 = *(ulong *)(*plVar15 + 0x18);
        uStack_60 = *(undefined8 *)(*plVar15 + 0x10);
        uVar11 = uVar9;
        if (uVar9 <= uStack_58) {
          uVar11 = uStack_58;
        }
        bVar4 = uVar9 != 0xffffffffffffffff;
        uVar9 = uStack_58;
        if (bVar4) {
          uVar9 = uVar11;
        }
        func_0x019e626c(plVar15,&uStack_60);
      } while (0x20 < (ulong)plVar15[2]);
      if ((uVar9 != 0xffffffffffffffff) && ((ulong)plVar15[3] <= uVar9)) {
        uStack_60 = 0;
        uStack_58 = uVar9;
        iVar5 = func_0x019e626c(plVar15,&uStack_60);
        if (iVar5 == 1) {
          plVar15[3] = uVar9 + 1;
        }
      }
    }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  }
  if (((byte)param_2[2] >> 2 & 1) != 0) {
    uVar9 = (ulong)(byte)param_2[2] & 3;
    if (*(char *)(param_1 + 0x1ce + uVar9) == '\0') {
      uVar11 = param_2[1];
      lVar10 = param_1 + uVar9 * 4;
      uVar1 = *(int *)(lVar10 + 0x908) + 1;
      *(uint *)(lVar10 + 0x908) = uVar1;
      if (*(char *)(param_1 + uVar9 + 0x1d1) == '\0') {
        bVar16 = true;
      }
      if (((bVar16) || (1 < uVar1)) ||
         ((lVar10 = param_1 + 0x90 + uVar9 * 0x20, *(long *)(lVar10 + 0x10) != 0 &&
          (((plVar15 = (long *)(param_1 + 0x1e8 + uVar9 * 0x38), plVar15[1] != 0 &&
            (lVar10 = *(long *)(lVar10 + 8), uVar6 = *(ulong *)(lVar10 + 0x10),
            uVar6 == *(ulong *)(lVar10 + 0x18))) && (*(long *)(*plVar15 + 8) + 1U < uVar6)))))) {
        *(undefined1 *)(param_1 + 0x1ce + uVar9) = 1;
        *(undefined8 *)(param_1 + uVar9 * 8 + 0x918) = 0xffffffffffffffff;
        pcVar8 = *(code **)(param_1 + 0x950);
        if (pcVar8 == (code *)0x0) goto LAB_00373d34;
        uVar7 = *(undefined8 *)(param_1 + 0x958);
        uVar6 = 0;
/*  thanks for reading - discord.gg/sdkhDjTex  */
      }
      else {
        uVar14 = *(ulong *)(param_1 + 0x918 + uVar9 * 8);
        uVar6 = uVar11 + *(ulong *)(param_1 + 0x938);
        if (CARRY8(uVar11,*(ulong *)(param_1 + 0x938))) {
          uVar6 = 0xffffffffffffffff;
        }
        if (1 < (uint)uVar9) {
          uVar11 = uVar6;
        }
        uVar6 = uVar11;
        if ((uVar14 != 0xffffffffffffffff) && (uVar6 = uVar14, uVar11 <= uVar14)) {
          uVar6 = uVar11;
        }
        *(ulong *)(param_1 + 0x918 + uVar9 * 8) = uVar6;
        pcVar8 = *(code **)(param_1 + 0x950);
        if (pcVar8 == (code *)0x0) goto LAB_00373d34;
        uVar7 = *(undefined8 *)(param_1 + 0x958);
      }
      (*pcVar8)(uVar6,uVar9,uVar7);
    }
  }
LAB_00373d34:
  bVar2 = (byte)param_2[2];
  bVar3 = bVar2 >> 3 & 3;
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      param_1 = param_1 + ((ulong)bVar2 & 3) * 8;
      *(long *)(param_1 + 0x8d8) = *(long *)(param_1 + 0x8d8) + 1;
    }
  }
  else {
    param_1 = param_1 + ((ulong)bVar2 & 3) * 8;
    if (bVar3 == 3) {
      *(long *)(param_1 + 0x8f0) = *(long *)(param_1 + 0x8f0) + 1;
    }
    else {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      *(long *)(param_1 + 0x8c0) = *(long *)(param_1 + 0x8c0) + 1;
    }
  }
  return 1;
}

