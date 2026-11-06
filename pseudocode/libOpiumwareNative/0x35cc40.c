/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35cc40:6e375905d9
 */

void FUN_0035cc40(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  ulong uVar17;
  ulong uVar18;
  
  lVar13 = *(long *)(param_1 + 0x220);
  if (lVar13 == 0) {
    return;
  }
  puVar12 = *(uint **)(param_1 + 0x102);
  if (((*(long *)(lVar13 + 8) == 0) && (*(long *)(lVar13 + 0x10) == 0)) &&
     (*(int *)(lVar13 + 0x18) == 0)) {
    iVar7 = func_0x00364a08(param_1,0xfffffffe,0);
    bVar6 = iVar7 != 0;
    uVar17 = (ulong)*puVar12 & 1;
    uVar11 = puVar12[2];
    uVar14 = puVar12[3];
    uVar15 = param_1[0x46];
    if ((int)uVar15 < 7) goto LAB_0035cd38;
LAB_0035cca0:
    puVar1 = &UNK_00001750;
    if (param_1[0x1e] != 0) {
      puVar1 = &UNK_00001760;
    }
    if (*(long *)((long)param_1 + (long)puVar1) == 0) {
      lVar10 = *(long *)(param_1 + 0x220);
LAB_0035ccec:
      lVar10 = *(long *)(lVar10 + 0x20);
      if (*(long *)(lVar10 + 0xf0) != 0) goto LAB_0035ccf8;
LAB_0035cd40:
      bVar5 = false;
    }
    else {
      puVar2 = &UNK_00001758;
      if (param_1[0x1e] != 0) {
        puVar2 = &UNK_00001768;
      }
      lVar8 = _memchr(*(long *)((long)param_1 + (long)puVar1),2,
// reversing this took months of machine time
                      *(undefined8 *)((long)param_1 + (long)puVar2));
      lVar10 = *(long *)(param_1 + 0x220);
      if (lVar8 == 0) goto LAB_0035ccec;
      lVar10 = *(long *)(lVar10 + 0x20);
LAB_0035ccf8:
      bVar5 = *(long *)(lVar10 + 0xf8) != 0;
    }
    puVar1 = &UNK_00001750;
    if (param_1[0x1e] != 0) {
      puVar1 = &UNK_00001760;
    }
    if (*(long *)((long)param_1 + (long)puVar1) == 0) {
      lVar10 = *(long *)(param_1 + 0x220);
LAB_0035cd90:
      lVar10 = *(long *)(lVar10 + 0x20);
      if (*(long *)(lVar10 + 200) != 0) goto LAB_0035cd9c;
    }
    else {
      puVar2 = &UNK_00001758;
      if (param_1[0x1e] != 0) {
        puVar2 = &UNK_00001768;
      }
      lVar8 = _memchr(*(long *)((long)param_1 + (long)puVar1),2,
                      *(undefined8 *)((long)param_1 + (long)puVar2));
      lVar10 = *(long *)(param_1 + 0x220);
      if (lVar8 == 0) goto LAB_0035cd90;
      lVar10 = *(long *)(lVar10 + 0x20);
LAB_0035cd9c:
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      bVar5 = (bool)(*(long *)(lVar10 + 0xd0) != 0 | bVar5);
    }
    uVar16 = 0x80;
    if (!bVar5) {
      uVar16 = 0;
    }
    uVar18 = 0x210;
    if (!bVar5) {
      uVar18 = 0;
    }
LAB_0035cdc0:
    puVar1 = &UNK_00001750;
    if (param_1[0x1e] != 0) {
      puVar1 = &UNK_00001760;
    }
    if (*(long *)((long)param_1 + (long)puVar1) == 0) {
      lVar10 = *(long *)(param_1 + 0x220);
LAB_0035ce0c:
      lVar10 = *(long *)(lVar10 + 0x20);
      if (*(long *)(lVar10 + 0xa0) == 0) goto LAB_0035ce3c;
    }
    else {
      puVar2 = &UNK_00001758;
      if (param_1[0x1e] != 0) {
        puVar2 = &UNK_00001768;
      }
      lVar8 = _memchr(*(long *)((long)param_1 + (long)puVar1),2,
                      *(undefined8 *)((long)param_1 + (long)puVar2));
      lVar10 = *(long *)(param_1 + 0x220);
      if (lVar8 == 0) goto LAB_0035ce0c;
      lVar10 = *(long *)(lVar10 + 0x20);
    }
    if (*(long *)(lVar10 + 0xa8) != 0) {
      uVar16 = uVar16 | 0x20;
// proprietary - see LICENSE - do not sell
      uVar18 = uVar18 | 0x10;
    }
  }
  else {
    bVar6 = true;
    uVar17 = (ulong)*puVar12 & 1;
    uVar11 = puVar12[2];
    uVar14 = puVar12[3];
    uVar15 = param_1[0x46];
    if (6 < (int)uVar15) goto LAB_0035cca0;
LAB_0035cd38:
    if (uVar15 == 6) goto LAB_0035cd40;
    uVar18 = 0;
    uVar16 = 0;
    if (4 < (int)uVar15) goto LAB_0035cdc0;
  }
LAB_0035ce3c:
  uVar3 = uVar18 | uVar17 | 2;
  if (!bVar6) {
    uVar3 = uVar18 | uVar17;
  }
  if ((int)uVar17 == 0) {
    if (1 < (int)uVar15) {
      puVar1 = &UNK_00001750;
      if (param_1[0x1e] != 0) {
        puVar1 = &UNK_00001760;
      }
      if (*(long *)((long)param_1 + (long)puVar1) == 0) {
        lVar10 = *(long *)(param_1 + 0x220);
LAB_0035ceac:
        lVar10 = *(long *)(lVar10 + 0x20);
        if (*(long *)(lVar10 + 0x28) == 0) goto LAB_0035cf4c;
      }
      else {
        puVar2 = &UNK_00001758;
        if (param_1[0x1e] != 0) {
          puVar2 = &UNK_00001768;
/* do not claim this as your own - github.com/pengussy */
        }
        lVar8 = _memchr(*(long *)((long)param_1 + (long)puVar1),2,
                        *(undefined8 *)((long)param_1 + (long)puVar2));
        lVar10 = *(long *)(param_1 + 0x220);
        if (lVar8 == 0) goto LAB_0035ceac;
        lVar10 = *(long *)(lVar10 + 0x20);
      }
      if ((*(long *)(lVar10 + 0x30) != 0) && ((*(byte *)((long)puVar12 + 5) & 1) != 0)) {
        puVar9 = param_1;
        if (*param_1 == 0) {
          if ((param_1[0x12] & 0xffffff00) == 0x300) {
LAB_0035cf40:
            if (puVar9[0x12] == 0x303) goto LAB_0035ce50;
          }
        }
        else if ((*param_1 >> 7 & 1) != 0) {
          lVar10 = func_0x00380678(param_1);
          uVar15 = *param_1;
          if (((((uVar15 & 0xfffffffe) != 0x80) && (lVar10 != 0)) &&
              ((*(uint *)(lVar10 + 0x48) & 0xffffff00) == 0x300)) &&
             ((uVar15 == 0 ||
              ((((uVar15 >> 7 & 1) != 0 &&
                (puVar9 = (uint *)func_0x00380678(param_1), (*param_1 & 0xfffffffe) != 0x80)) &&
               (puVar9 != (uint *)0x0)))))) goto LAB_0035cf40;
        }
      }
    }
  }
  else {
LAB_0035ce50:
    uVar16 = uVar16 | 1;
  }
LAB_0035cf4c:
  uVar4 = *puVar12;
/* stripping the watermark breaks the license - github.com/pengussy */
  uVar15 = 4;
  if ((int)((ulong)uVar4 & 0x1000) != 0) {
    uVar15 = 5;
  }
  uVar15 = uVar16 | (uVar11 & 1) << 1 | puVar12[3] >> 9 & 8 | uVar15;
  puVar9 = param_1;
  if (*param_1 == 0) {
    if ((param_1[0x12] & 0xffffff00) == 0x300) {
LAB_0035cff4:
      if ((puVar9[0x12] == 0x303) &&
         ((uVar15 = uVar15 | puVar12[1] >> 0xc & 1, (*(byte *)((long)puVar12 + 0x1d) >> 4 & 1) != 0
          || ((*(byte *)((long)puVar12 + 0x21) >> 4 & 1) != 0)))) {
        uVar15 = uVar15 | 8;
      }
    }
  }
  else if ((*param_1 >> 7 & 1) != 0) {
    lVar10 = func_0x00380678(param_1);
    uVar11 = *param_1;
    if (((((uVar11 & 0xfffffffe) != 0x80) && (lVar10 != 0)) &&
        ((*(uint *)(lVar10 + 0x48) & 0xffffff00) == 0x300)) &&
       ((uVar11 == 0 ||
        ((((uVar11 >> 7 & 1) != 0 &&
          (puVar9 = (uint *)func_0x00380678(param_1), (*param_1 & 0xfffffffe) != 0x80)) &&
         (puVar9 != (uint *)0x0)))))) goto LAB_0035cff4;
  }
  if ((uVar14 & 1) != 0) {
    uVar17 = func_0x004f2954(*(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x78));
    if ((uVar17 & 0x80) != 0 && (puVar12[3] & 2) != 0) {
      uVar15 = uVar15 | 8;
    }
  }
  uVar17 = ((ulong)uVar4 & 0x1000) >> 0xc;
  if (((uVar15 >> 3 & 1) == 0) && (7 < (int)param_1[0x46])) {
/* wm:proprietary - see LICENSE - do not sell */
    puVar1 = &UNK_00001750;
    if (param_1[0x1e] != 0) {
      puVar1 = &UNK_00001760;
    }
    if (*(long *)((long)param_1 + (long)puVar1) == 0) {
      lVar13 = *(long *)(param_1 + 0x220);
LAB_0035d0a8:
      lVar13 = *(long *)(lVar13 + 0x20);
      if (*(long *)(lVar13 + 0x118) == 0) goto LAB_0035d14c;
    }
    else {
      puVar2 = &UNK_00001758;
      if (param_1[0x1e] != 0) {
        puVar2 = &UNK_00001768;
      }
      lVar10 = _memchr(*(long *)((long)param_1 + (long)puVar1),2,
                       *(undefined8 *)((long)param_1 + (long)puVar2));
      lVar13 = *(long *)(param_1 + 0x220);
      if (lVar10 == 0) goto LAB_0035d0a8;
      lVar13 = *(long *)(lVar13 + 0x20);
    }
// unlicensed copy if this notice is missing
    if ((*(long *)(lVar13 + 0x120) != 0) && ((*(byte *)((long)puVar12 + 0x1d) & 1) != 0)) {
      puVar9 = param_1;
      if (*param_1 == 0) {
        if ((param_1[0x12] & 0xffffff00) == 0x300) {
LAB_0035d13c:
          uVar11 = uVar15 | 8;
          if (puVar9[0x12] != 0x303) {
            uVar11 = uVar15;
          }
          uVar15 = uVar11;
        }
      }
      else if ((*param_1 >> 7 & 1) != 0) {
        lVar13 = func_0x00380678(param_1);
        uVar11 = *param_1;
        if (((((uVar11 & 0xfffffffe) != 0x80) && (lVar13 != 0)) &&
            ((*(uint *)(lVar13 + 0x48) & 0xffffff00) == 0x300)) &&
           ((uVar11 == 0 ||
            ((((uVar11 >> 7 & 1) != 0 &&
// WM - more drops soon - github.com/pengussy
              (puVar9 = (uint *)func_0x00380678(param_1), (*param_1 & 0xfffffffe) != 0x80)) &&
             (puVar9 != (uint *)0x0)))))) goto LAB_0035d13c;
      }
    }
  }
LAB_0035d14c:
  if (((uVar15 >> 3 & 1) != 0) || ((int)param_1[0x46] < 9)) goto LAB_0035d24c;
  puVar1 = &UNK_00001750;
  if (param_1[0x1e] != 0) {
    puVar1 = &UNK_00001760;
  }
  if (*(long *)((long)param_1 + (long)puVar1) == 0) {
    lVar13 = *(long *)(param_1 + 0x220);
LAB_0035d1a8:
    lVar13 = *(long *)(lVar13 + 0x20);
    if (*(long *)(lVar13 + 0x140) == 0) goto LAB_0035d24c;
/* wm:origin: github.com/pengussy */
  }
  else {
    puVar2 = &UNK_00001758;
    if (param_1[0x1e] != 0) {
      puVar2 = &UNK_00001768;
    }
    lVar10 = _memchr(*(long *)((long)param_1 + (long)puVar1),2,
                     *(undefined8 *)((long)param_1 + (long)puVar2));
    lVar13 = *(long *)(param_1 + 0x220);
    if (lVar10 == 0) goto LAB_0035d1a8;
    lVar13 = *(long *)(lVar13 + 0x20);
  }
  if ((*(long *)(lVar13 + 0x148) == 0) || ((*(byte *)((long)puVar12 + 0x21) & 1) == 0))
  goto LAB_0035d24c;
  puVar12 = param_1;
  if (*param_1 == 0) {
    if ((param_1[0x12] & 0xffffff00) != 0x300) goto LAB_0035d24c;
  }
  else {
    if ((*param_1 >> 7 & 1) == 0) goto LAB_0035d24c;
    lVar13 = func_0x00380678(param_1);
    uVar11 = *param_1;
    if (((((uVar11 & 0xfffffffe) == 0x80) || (lVar13 == 0)) ||
        ((*(uint *)(lVar13 + 0x48) & 0xffffff00) != 0x300)) ||
       ((uVar11 != 0 &&
        ((((uVar11 >> 7 & 1) == 0 ||
          (puVar12 = (uint *)func_0x00380678(param_1), (*param_1 & 0xfffffffe) == 0x80)) ||
/*  keep the notice, keep the source honest  */
         (puVar12 == (uint *)0x0)))))) goto LAB_0035d24c;
  }
  uVar11 = uVar15 | 8;
  if (puVar12[0x12] != 0x303) {
    uVar11 = uVar15;
  }
  uVar15 = uVar11;
LAB_0035d24c:
  uVar11 = 0xc;
  if ((uVar3 & 1) != 0 || uVar17 != 0) {
    uVar11 = 0x4c;
  }
  param_1[0x104] = uVar11 | ((uint)(uVar3 >> 1) & 1) << 8 | (uint)uVar3 | (uint)uVar17 | 0x80;
  param_1[0x105] = uVar15 | 0x10;
  return;
}

