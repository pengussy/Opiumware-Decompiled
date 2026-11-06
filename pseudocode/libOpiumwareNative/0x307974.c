/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x307974:c5b858dee2
 */

void FUN_00307974(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  bool bVar14;
  bool bVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  byte bVar21;
  byte bVar22;
  bool bVar23;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  uint uVar24;
  float fVar25;
  
  lVar13 = lRam00000000020973e0;
  fVar25 = *(float *)(lRam00000000020973e0 + 0xcec);
  if (*(float *)(lRam00000000020973e0 + 0xcec) < *(float *)(lRam00000000020973e0 + 0xcf0)) {
    fVar25 = *(float *)(lRam00000000020973e0 + 0xcf0);
  }
  if (fVar25 < *(float *)(lRam00000000020973e0 + 0xc9c)) {
    fVar25 = *(float *)(lRam00000000020973e0 + 0xc9c);
  }
  *(float *)(&UNK_0000149c + lRam00000000020973e0) = fVar25;
  func_0x00307d24(param_1,0,&UNK_000014b0 + lVar13,&UNK_000014b8 + lVar13);
  lVar16 = *(long *)(&UNK_000014b0 + lVar13);
  *(long *)(&UNK_000014c0 + lVar13) = lVar16;
  uVar24 = *(uint *)(&UNK_00001fb0 + lRam00000000020973e0);
  if (0 < (int)uVar24) {
    uVar17 = (ulong)uVar24 + 1;
    plVar20 = (long *)(*(long *)(&UNK_00001fb8 + lRam00000000020973e0) + (ulong)uVar24 * 0x38 +
                      -0x30);
    do {
      lVar19 = *plVar20;
      if ((lVar19 != 0) && ((*(byte *)(lVar19 + 0x17) >> 3 & 1) != 0)) {
/* stripping the watermark breaks the license */
        if ((lVar16 != 0) &&
           (lVar18 = *(long *)(lVar16 + 0x3c0), *(long *)(lVar18 + 0x3c0) != lVar19))
        goto LAB_00307a28;
        bVar2 = true;
        goto LAB_00307a48;
      }
      uVar17 = uVar17 - 1;
      plVar20 = plVar20 + -7;
    } while (1 < uVar17);
  }
  bVar2 = false;
LAB_00307a48:
  bVar14 = true;
  goto LAB_00307a4c;
  while (lVar18 = *(long *)(lVar18 + 0x3b8), lVar18 != 0) {
LAB_00307a28:
    bVar14 = lVar18 == lVar19;
    if (bVar14) break;
  }
  bVar2 = true;
LAB_00307a4c:
  iVar3 = *(int *)(&UNK_00001fb0 + lVar13);
/* proprietary - see LICENSE - do not sell */
  bVar15 = bVar2;
  if (lVar16 != 0) {
    bVar15 = true;
  }
  bVar1 = 0 < iVar3 || lVar16 != 0;
  if (*(char *)(lVar13 + 0xb30) == '\x01') {
    *(bool *)(lVar13 + 0xb80) = bVar1;
    *(bool *)(lVar13 + 0xb85) = bVar15;
  }
  bVar6 = *(byte *)(lVar13 + 0x108);
  if (((bVar6 & 1) == 0) && (*(char *)(lVar13 + 0xb4e) != '\x01')) {
    uVar24 = 0xffffffff;
    bVar23 = true;
    cVar7 = *(char *)(lVar13 + 0xb31);
  }
  else {
    bVar23 = false;
    uVar24 = 0;
    cVar7 = *(char *)(lVar13 + 0xb31);
  }
  if (cVar7 == '\x01') {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    *(bool *)(lVar13 + 0xb81) = bVar1;
    *(bool *)(lVar13 + 0xb86) = bVar15;
  }
  lVar19 = lVar13 + 0xb08;
  bVar8 = *(byte *)(lVar13 + 0x109);
  if ((((bVar8 & 1) != 0) || (*(char *)(lVar13 + 0xb4f) == '\x01')) &&
     ((bVar23 || (*(double *)(lVar13 + 0xb10) < *(double *)(lVar19 + (long)(int)uVar24 * 8))))) {
    uVar24 = 1;
  }
  if (*(char *)(lVar13 + 0xb32) == '\x01') {
    *(bool *)(lVar13 + 0xb82) = bVar1;
    *(bool *)(lVar13 + 0xb87) = bVar15;
  }
  bVar9 = *(byte *)(lVar13 + 0x10a);
  if ((((bVar9 & 1) != 0) || (*(char *)(lVar13 + 0xb50) == '\x01')) &&
     ((uVar24 == 0xffffffff ||
      (*(double *)(lVar13 + 0xb18) < *(double *)(lVar19 + (ulong)uVar24 * 8))))) {
    uVar24 = 2;
  }
  if (*(char *)(lVar13 + 0xb33) == '\x01') {
    *(bool *)(lVar13 + 0xb83) = bVar1;
    *(bool *)(lVar13 + 0xb88) = bVar15;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  }
  bVar10 = *(byte *)(lVar13 + 0x10b);
  if ((((bVar10 & 1) != 0) || (*(char *)(lVar13 + 0xb51) == '\x01')) &&
     ((uVar24 == 0xffffffff ||
      (*(double *)(lVar13 + 0xb20) < *(double *)(lVar19 + (ulong)uVar24 * 8))))) {
    uVar24 = 3;
  }
  if (*(char *)(lVar13 + 0xb34) == '\x01') {
    *(bool *)(lVar13 + 0xb84) = bVar1;
    *(bool *)(lVar13 + 0xb89) = bVar15;
  }
  uVar4 = *(uint *)(lVar13 + 0x28);
  bVar11 = *(byte *)(lVar13 + 0x10c);
  if (((bVar11 & 1) == 0) && (*(char *)(lVar13 + 0xb52) != '\x01')) {
    bVar15 = false;
    if ((uVar4 & 0x10) == 0) {
      bVar15 = bVar14;
    }
    if (uVar24 == 0xffffffff) {
      bVar21 = 1;
      bVar22 = 1;
      cVar7 = (&UNK_00002220)[lVar13];
/*  origin: github.com/pengussy  */
      goto joined_r0x00307bcc;
    }
  }
  else {
    if ((uVar24 == 0xffffffff) ||
       (*(double *)(lVar13 + 0xb28) < *(double *)(lVar19 + (ulong)uVar24 * 8))) {
      uVar24 = 4;
    }
    bVar15 = false;
    if ((uVar4 & 0x10) == 0) {
      bVar15 = bVar14;
    }
  }
  bVar21 = *(byte *)(lVar13 + 0xb80 + (ulong)uVar24);
  bVar22 = *(byte *)(lVar13 + 0xb85 + (ulong)uVar24);
  cVar7 = (&UNK_00002220)[lVar13];
joined_r0x00307bcc:
  bVar12 = bVar21;
  if (cVar7 == '\x01') {
    bVar12 = bVar21 | (byte)(&UNK_00002224)[lVar13] >> 4 & 1;
  }
  if ((bVar12 & bVar15) == 0) {
    lVar16 = 0;
    *(undefined8 *)(&UNK_000014b0 + lVar13) = 0;
    *(undefined8 *)(&UNK_000014b8 + lVar13) = 0;
  }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  iVar5 = *(int *)(&UNK_00002a64 + lVar13);
  if (iVar5 == -1) {
    bVar14 = lVar16 != 0 ||
             (bVar11 != 0 || (bVar10 != 0 || (bVar9 != 0 || (bVar8 != 0 || bVar6 != 0))));
    bVar21 = bVar21 & bVar14;
    if (0 < iVar3) {
      bVar21 = 1;
    }
    *(byte *)(lVar13 + 0xd0) = bVar21;
    *(byte *)(lVar13 + 0xad4) = bVar22 & bVar14 | bVar2;
    *(undefined1 *)(lVar13 + 0xd1) = 0;
  }
  else {
    *(bool *)(lVar13 + 0xad4) = iVar5 != 0;
    *(bool *)(lVar13 + 0xd0) = iVar5 != 0;
    *(undefined1 *)(lVar13 + 0xd1) = 0;
  }
  if ((uVar4 >> 6 & 1) == 0) {
    if (*(int *)(&UNK_0000151c + lVar13) != 0) {
      bVar2 = true;
    }
    if ((bVar2) ||
       ((((uVar4 & 1) != 0 && ((*(byte *)(lVar13 + 0xd5) & 1) != 0)) &&
/* wm:more drops soon - github.com/pengussy */
        (*(char *)(lVar13 + 0x73) == '\x01')))) {
      *(undefined1 *)(lVar13 + 0xd1) = 1;
    }
  }
  if (*(int *)(&UNK_00002a68 + lVar13) != -1) {
    *(bool *)(lVar13 + 0xd1) = *(int *)(&UNK_00002a68 + lVar13) != 0;
  }
  *(bool *)(lVar13 + 0xd2) = *(int *)(&UNK_00002a6c + lVar13) - 1U < 0xfffffffe;
  return;
}

