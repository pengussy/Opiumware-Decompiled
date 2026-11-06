/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x32857c:d8bcd4f81c
 */

uint * FUN_0032857c(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  ushort *puVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  
  iVar2 = *(int *)(param_2 + 0x30);
  if (iVar2 == *(int *)(param_2 + 0x34)) {
    iVar10 = 8;
    if (iVar2 != 0) {
      iVar10 = iVar2 + iVar2 / 2;
    }
    if (iVar10 <= iVar2 + 1) {
      iVar10 = iVar2 + 1;
/*  proprietary - see LICENSE - do not sell  */
    }
    lVar9 = func_0x002fd6d8((long)iVar10 * 0x2c);
    if (*(long *)(param_2 + 0x38) != 0) {
      _memcpy(lVar9,*(long *)(param_2 + 0x38),(long)*(int *)(param_2 + 0x30) * 0x2c);
      func_0x002fda6c(*(undefined8 *)(param_2 + 0x38));
    }
    *(long *)(param_2 + 0x38) = lVar9;
    *(int *)(param_2 + 0x34) = iVar10;
    iVar10 = *(int *)(param_2 + 0x30);
  }
  else {
    lVar9 = *(long *)(param_2 + 0x38);
    iVar10 = iVar2;
  }
  puVar11 = (undefined8 *)(lVar9 + (long)iVar10 * 0x2c);
  uVar15 = param_4[1];
  uVar14 = *param_4;
  uVar19 = param_4[3];
  uVar18 = param_4[2];
  uVar21 = *(undefined8 *)((long)param_4 + 0x1c);
  *(undefined8 *)((long)puVar11 + 0x24) = *(undefined8 *)((long)param_4 + 0x24);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  *(undefined8 *)((long)puVar11 + 0x1c) = uVar21;
  puVar11[1] = uVar15;
  *puVar11 = uVar14;
  puVar11[3] = uVar19;
  puVar11[2] = uVar18;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
  puVar13 = (uint *)(*(long *)(param_2 + 0x38) + (long)iVar2 * 0x2c);
  if (puVar13[10] != 0xffffffff) {
    puVar1 = (ushort *)
             (*(long *)(*(long *)(param_1 + 0x2b0) + 0x68) +
             ((long)((ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0x2b0) + 0x78) +
                                     ((ulong)puVar13[10] & 0x7ffff) * 4) << 0x2c) >> 0x2c) * 8);
    uVar4 = *puVar1;
    fVar16 = *(float *)(param_1 + 0x54);
    fVar20 = *(float *)(param_1 + 0x58);
    uVar5 = puVar1[1];
    puVar13[6] = (uint)(fVar16 * (float)uVar4);
    puVar13[7] = (uint)(fVar20 * (float)uVar5);
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar13[8] = (uint)(fVar16 * (float)((uint)uVar6 + (uint)uVar4));
    puVar13[9] = (uint)(fVar20 * (float)((uint)uVar7 + (uint)uVar5));
    *(uint *)(param_2 + 0x4c) =
         *(uint *)(param_2 + 0x4c) & 0xfc000000 |
         *(uint *)(param_2 + 0x4c) + (uint)uVar7 * (uint)uVar6 & 0x3ffffff;
  }
  if (param_3 != 0) {
    fVar16 = *(float *)(**(long **)(*(long *)(param_2 + 0x58) + 0x28) + 0x3c);
    if (fVar16 == 0.0) {
      fVar16 = 1.0;
    }
    else {
/* WM - origin: github.com/pengussy */
      fVar16 = *(float *)(param_2 + 0x14) / fVar16;
    }
    fVar17 = (float)puVar13[1];
    fVar20 = fVar16 * *(float *)(param_3 + 0x58);
    fVar16 = fVar16 * *(float *)(param_3 + 0x5c);
    if (fVar17 <= fVar16) {
      fVar16 = fVar17;
    }
    if (fVar20 <= fVar17) {
      fVar20 = fVar16;
    }
    cVar3 = *(char *)(param_3 + 0x36);
    if (fVar20 != fVar17) {
      fVar17 = (fVar20 - fVar17) * 0.5;
      fVar16 = (float)(int)fVar17;
      if (cVar3 == '\0') {
        fVar16 = fVar17;
      }
      puVar13[2] = (uint)(fVar16 + (float)puVar13[2]);
/* do not claim this as your own */
      puVar13[4] = (uint)(fVar16 + (float)puVar13[4]);
    }
    fVar16 = (float)(int)(fVar20 + 0.5);
    if (cVar3 == '\0') {
      fVar16 = fVar20;
    }
    puVar13[1] = (uint)(*(float *)(param_3 + 0x60) + fVar16);
  }
  uVar12 = *puVar13;
  if ((uVar12 & 1) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x56) = 1;
    *(undefined1 *)(param_1 + 0x53) = 1;
    uVar12 = *puVar13;
  }
  uVar8 = uVar12 >> 6;
  func_0x00332cac(param_2,uVar8 + 1);
  *(uint *)(*(long *)(param_2 + 8) + (ulong)uVar8 * 4) = puVar13[1];
  *(short *)(*(long *)(param_2 + 0x28) + (ulong)uVar8 * 2) = (short)iVar2;
  lVar9 = *(long *)(param_2 + 0x58) + (ulong)(uVar12 >> 0x16);
  *(byte *)(lVar9 + 0x34) = *(byte *)(lVar9 + 0x34) | (byte)(1 << (ulong)(uVar12 >> 0x13 & 7));
  return puVar13;
}

