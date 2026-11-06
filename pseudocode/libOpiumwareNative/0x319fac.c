/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x319fac:00ee1b821e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00319fac(void)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
/* stripping the watermark breaks the license */
  byte bVar22;
  long lVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = lRam00000000020973e0;
  uVar7 = 0xffffffff;
  uVar16 = 0x23;
  pbVar18 = (byte *)"##Tooltip_Error";
  do {
    while (((pbVar1 = pbVar18 + 1, uVar16 != 0x23 || (*pbVar1 != 0x23)) || (pbVar18[2] != 0x23))) {
      uVar7 = *(uint *)(&UNK_01adf190 + (ulong)(uVar7 & 0xff ^ uVar16) * 4) ^ uVar7 >> 8;
      uVar16 = (uint)*pbVar1;
      pbVar18 = pbVar1;
      if (*pbVar1 == 0) goto LAB_0031a03c;
    }
    uVar7 = 0xffffffff;
    uVar16 = (uint)pbVar18[3];
    pbVar18 = pbVar18 + 3;
  } while (uVar16 != 0);
LAB_0031a03c:
/* no support for modified copies */
  puVar9 = *(uint **)(&UNK_00001490 + lRam00000000020973e0);
  uVar17 = (ulong)*(int *)(&UNK_00001488 + lRam00000000020973e0);
  puVar2 = puVar9 + uVar17 * 4;
  puVar10 = puVar9;
  if (*(int *)(&UNK_00001488 + lRam00000000020973e0) != 0) {
    do {
      uVar19 = uVar17 >> 1;
      puVar9 = puVar10 + uVar19 * 4 + 4;
      uVar17 = uVar17 + ~uVar19;
      if (~uVar7 <= puVar10[uVar19 * 4]) {
        puVar9 = puVar10;
        uVar17 = uVar19;
      }
      puVar10 = puVar9;
    } while (uVar17 != 0);
  }
  if ((puVar9 == puVar2) || (*puVar9 != ~uVar7)) {
    bVar22 = 0;
  }
  else {
    bVar22 = 0;
    if ((*(char *)(lRam00000000020973e0 + 0x11c) == '\x01') && (*(long *)(puVar9 + 2) != 0)) {
      bVar22 = *(byte *)(*(long *)(puVar9 + 2) + 0xcd);
    }
  }
  uVar25 = *(undefined8 *)(lRam00000000020973e0 + 0xdf8);
  uVar6 = *(undefined8 *)(lRam00000000020973e0 + 0xdf0);
  uStack_54 = 4;
  uStack_48 = *(undefined8 *)(lRam00000000020973e0 + 0xdf8);
  uStack_50 = *(undefined8 *)(lRam00000000020973e0 + 0xdf0);
  func_0x002fedbc(&UNK_00001f50 + lRam00000000020973e0,&uStack_54);
  if (*(int *)(&UNK_00001f4c + lVar5) != 4) {
    fVar24 = (float)_UNK_01adf0d0;
    uVar17 = (ulong)_UNK_01adf0d0 >> 0x20;
// WM - if you paid for this, you were scammed
    fVar26 = (float)uVar6;
    fVar27 = (float)((ulong)uVar6 >> 0x20);
    fVar28 = (float)uVar25;
    fVar29 = (float)((ulong)uVar25 >> 0x20);
    *(ulong *)(lVar5 + 0xdf8) =
         CONCAT44(fVar29 + ((float)((ulong)_UNK_01adf0d8 >> 0x20) - fVar29) * 0.15,
                  fVar28 + ((float)_UNK_01adf0d8 - fVar28) * 0.15);
    *(ulong *)(lVar5 + 0xdf0) =
         CONCAT44(fVar27 + ((float)uVar17 - fVar27) * 0.15,fVar26 + (fVar24 - fVar26) * 0.15);
  }
  lVar12 = lRam00000000020973e0;
  if ((bVar22 & 1) != 0) {
    *(uint *)(&UNK_00001ed0 + lRam00000000020973e0) =
         *(uint *)(&UNK_00001ed0 + lRam00000000020973e0) | 1;
    *(undefined8 *)(&UNK_00001ee0 + lVar12) = *(undefined8 *)(&UNK_00002838 + lVar5);
    *(undefined8 *)(&UNK_00001ee8 + lVar12) = 0;
    *(undefined4 *)(&UNK_00001ed4 + lVar12) = 1;
  }
  uVar6 = FUN_0030ed68("##Tooltip_Error",0,0x200016f);
  lVar12 = lRam00000000020973e0;
  if (*(int *)(&UNK_00001f50 + lRam00000000020973e0) < 1) {
    FUN_002ff090("Calling PopStyleColor() too many times!");
    iVar14 = *(int *)(&UNK_00001f50 + lVar12);
    iVar8 = iVar14;
    if (iVar14 < 1) goto LAB_0031a1bc;
  }
  else {
    iVar14 = 1;
    iVar8 = *(int *)(&UNK_00001f50 + lRam00000000020973e0);
/*  stripping the watermark breaks the license  */
  }
  uVar7 = iVar14 + 1;
  do {
    lVar11 = *(long *)(&UNK_00001f58 + lVar12) + (long)iVar8 * 0x14;
    uVar25 = *(undefined8 *)(lVar11 + -0x10);
    puVar3 = (undefined8 *)(lVar12 + 0xdb0 + (long)*(int *)(lVar11 + -0x14) * 0x10);
    puVar3[1] = *(undefined8 *)(lVar11 + -8);
    *puVar3 = uVar25;
    iVar8 = *(int *)(&UNK_00001f50 + lVar12) + -1;
    *(int *)(&UNK_00001f50 + lVar12) = iVar8;
    uVar7 = uVar7 - 1;
  } while (1 < uVar7);
LAB_0031a1bc:
  if ((int)uVar6 == 0) {
    FUN_00314208();
  }
  else if (*(short *)(*(long *)(&UNK_000014a8 + lVar5) + 0xda) == 1) {
    func_0x003407bc("MESSAGE FROM DEAR IMGUI");
    lVar11 = lRam00000000020973e0;
    lVar23 = *(long *)(&UNK_000014a8 + lVar5);
    lVar12 = *(long *)(&UNK_00001450 + lRam00000000020973e0);
    iVar14 = *(int *)(&UNK_00001448 + lRam00000000020973e0);
    lVar15 = *(long *)(lVar12 + (long)iVar14 * 8 + -8);
    if ((lVar15 != lVar23) && (1 < iVar14 && *(long *)(lVar15 + 0x3c0) != lVar23)) {
      uVar17 = (ulong)(iVar14 - 1);
      uVar19 = 1;
      do {
        uVar7 = (int)uVar17 - 1;
        uVar17 = (ulong)uVar7;
        if (*(long *)(lVar12 + uVar17 * 8) == lVar23) {
          lVar12 = lVar12 + uVar17 * 8;
          _memmove(lVar12,lVar12 + 8,-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3);
          *(long *)(*(long *)(&UNK_00001450 + lVar11) + (long)*(int *)(&UNK_00001448 + lVar11) * 8 +
                   -8) = lVar23;
          lVar23 = *(long *)(&UNK_000014a8 + lVar5);
          break;
        }
/* unlicensed copy if this notice is missing */
        uVar19 = (ulong)((int)uVar19 + 1);
      } while (0 < (int)uVar7);
    }
    lVar12 = lRam00000000020973e0;
    lVar11 = *(long *)(&UNK_00001460 + lRam00000000020973e0);
    if (*(long *)(lVar11 + (long)*(int *)(&UNK_00001458 + lRam00000000020973e0) * 8 + -8) != lVar23)
    {
      lVar13 = (long)*(int *)(&UNK_00001458 + lRam00000000020973e0) + -1;
      lVar15 = lVar13;
      if ((int)*(short *)(lVar23 + 0xe2) < (int)lVar13) {
        lVar20 = (long)(int)*(short *)(lVar23 + 0xe2);
        lVar15 = (long)(int)lVar13;
        lVar21 = lVar15 - lVar20;
        plVar4 = (long *)(lVar11 + lVar20 * 8);
        do {
          lVar20 = plVar4[1];
          *plVar4 = lVar20;
          *(short *)(lVar20 + 0xe2) = *(short *)(lVar20 + 0xe2) + -1;
          lVar21 = lVar21 + -1;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          plVar4 = plVar4 + 1;
        } while (lVar21 != 0);
      }
      *(long *)(lVar11 + lVar15 * 8) = lVar23;
      *(short *)(lVar23 + 0xe2) = (short)lVar13;
    }
    *(undefined8 *)(&UNK_00002838 + lVar5) =
         *(undefined8 *)(*(long *)(&UNK_000014a8 + lVar12) + 0x28);
  }
  return uVar6;
}

