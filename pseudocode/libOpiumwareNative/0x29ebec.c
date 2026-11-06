/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x29ebec:2b0b423a42
 */

ulong FUN_0029ebec(int *param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  int *param_6,ulong param_7,uint param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined *puVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
/* if you paid for this, you were scammed - github.com/pengussy */
  byte bVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  
  uVar9 = 0;
  if (param_6 != (int *)0x0) {
    uVar9 = param_7;
  }
  if ((param_5 == 0xffffffffffffffff) && (uVar9 == 0)) {
    puVar14 = (undefined *)0xffffffffffffffff;
  }
/* wm:found on a paste site? it was re-uploaded illegally */
  else {
    lVar10 = 500;
    if (uVar9 == 0 || param_5 != 0xffffffffffffffff) {
      lVar10 = 0;
    }
    puVar14 = (undefined *)(uVar9 + param_5 + lVar10);
  }
  uVar16 = (ulong)(puVar14 < (undefined *)0x40001);
  if (puVar14 < &UNK_00020001) {
    uVar16 = uVar16 + 1;
  }
  if (puVar14 < &UNK_00004001) {
    uVar16 = uVar16 + 1;
  }
  if (param_8 == 0) {
    uVar11 = 3;
LAB_0029ec68:
    puVar17 = (uint *)(&UNK_01adc860 + (ulong)uVar11 * 0x1c + uVar16 * 0x284);
    uVar12 = puVar17[5];
  }
  else {
    if (-1 < (int)param_8) {
      uVar11 = param_8;
      if (0x15 < param_8) {
        uVar11 = 0x16;
      }
      goto LAB_0029ec68;
    }
    uVar11 = 0;
    puVar17 = (uint *)(&UNK_01adc860 + uVar16 * 0x284);
    uVar12 = param_8;
    if (param_8 < 0xfffe0001) {
      uVar12 = 0xfffe0000;
    }
/* WM - more drops soon - github.com/pengussy */
    uVar12 = -uVar12;
  }
  uVar25 = *(undefined8 *)(puVar17 + 3);
  uVar23 = puVar17[2];
  uVar6 = puVar17[3];
  uVar15 = *puVar17;
  uVar22 = puVar17[1];
  uVar11 = *(uint *)(&UNK_01adc878 + uVar16 * 0x284 + (ulong)uVar11 * 0x1c);
  if ((param_5 < 0x40000001) && (uVar9 < 0x40000001)) {
    uVar19 = 6;
    if (0x3f < uVar9 + param_5) {
      uVar19 = 0x20 - (int)LZCOUNT((int)(uVar9 + param_5) + -1);
    }
    if (uVar19 <= uVar15) {
      uVar15 = uVar19;
    }
LAB_0029ed08:
    uVar24 = 1L << ((ulong)uVar15 & 0x3f);
    uVar16 = uVar24 + uVar9;
    uVar19 = 0x1f;
    if (uVar16 >> 0x1f == 0) {
// thanks for reading - discord.gg/sdkhDjTex
      uVar19 = 0x20 - (int)LZCOUNT((int)uVar16 + -1);
    }
    uVar20 = uVar15;
    if (uVar24 < uVar9 + param_5) {
      uVar20 = uVar19;
    }
    uVar19 = uVar15;
    if (uVar9 != 0) {
      uVar19 = uVar20;
    }
    if (uVar19 + 1 <= uVar23) {
      uVar23 = uVar19 + 1;
    }
    uVar20 = uVar19 + (5 < uVar11);
    if (uVar22 - (5 < uVar11) <= uVar19) {
      uVar20 = uVar22;
    }
    uVar22 = uVar20;
  }
  else if (param_5 != 0xffffffffffffffff) goto LAB_0029ed08;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  uVar19 = uVar15;
  if (uVar15 < 0xb) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    uVar19 = 10;
  }
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  uVar20 = uVar6;
  if (5 < uVar6) {
    uVar20 = 6;
  }
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  uVar5 = 0x1c;
  if (3 < uVar6) {
    uVar5 = uVar20 | 0x18;
/*  watermarked copy - do not remove  */
  }
  uVar6 = uVar23;
  if (uVar5 <= uVar23) {
    uVar6 = uVar5;
  }
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  if (0xfffffffc < uVar11 - 6) {
    uVar23 = uVar6;
  }
  uVar6 = 3;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (param_8 != 0) {
    uVar6 = param_8;
  }
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x75] = uVar19;
  param_1[0x76] = uVar22;
  param_1[0x77] = uVar23;
  *(undefined8 *)(param_1 + 0x78) = uVar25;
  param_1[0x7a] = uVar12;
  param_1[0x7b] = uVar11;
/* WM - stripping the watermark breaks the license */
  param_1[0x7c] = 1;
  param_1[0x7f] = uVar6;
  if (uVar11 - 6 < 0xfffffffd) {
    param_1[0x9c] = 2;
    if (6 < uVar11) {
      iVar13 = 1;
      if (uVar15 < 0x11) {
        iVar13 = 2;
      }
      param_1[0x97] = iVar13;
      iVar13 = 1;
      if (uVar15 < 0x1b) {
        iVar13 = 2;
      }
      goto LAB_0029ee4c;
    }
  }
  else {
    iVar13 = 1;
    if (uVar15 < 0xf) {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      iVar13 = 2;
    }
    param_1[0x9c] = iVar13;
  }
  iVar13 = 2;
  param_1[0x97] = 2;
LAB_0029ee4c:
  param_1[0x8c] = iVar13;
  param_1[0x9a] = 0x20000;
  param_1[0x9b] = 0;
  iVar13 = 1;
  if ((int)uVar6 < 10) {
    iVar13 = 2;
  }
  param_1[0xaa] = iVar13;
  uVar9 = FUN_0029f1ec(param_1,param_1 + 0x74,param_5,param_7,0,0);
  if (0xffffffffffffff88 < uVar9) {
    return uVar9;
  }
  iVar13 = 0;
  if ((param_6 != (int *)0x0) && (7 < param_7)) {
    lVar10 = *(long *)(param_1 + 0x326);
    uVar25 = *(undefined8 *)(param_1 + 0x376);
    *(undefined4 *)(&UNK_000015f8 + lVar10) = 8;
    *(undefined8 *)(&UNK_000015f0 + lVar10) = 0x400000001;
    *(undefined4 *)(lVar10 + 0x808) = 0;
    *(undefined4 *)(&UNK_000015e4 + lVar10) = 0;
    *(undefined8 *)(&UNK_000015e8 + lVar10) = 0;
    if (*param_6 == -0x13cf5bc9) {
      if (param_1[0x46] == 0) {
        iVar13 = param_6[1];
        uVar9 = FUN_0029e40c(lVar10,uVar25,param_6,param_7);
      }
      else {
        iVar13 = 0;
        uVar9 = FUN_0029e40c(lVar10,uVar25,param_6,param_7);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      }
      if (0xffffffffffffff88 < uVar9) {
        return uVar9;
      }
      FUN_002a36cc(param_1 + 0x32a,0,param_1 + 0xb0,param_1 + 0x3c,(long)param_6 + uVar9,
                   param_7 - uVar9,0,0);
    }
    else {
      FUN_002a36cc(param_1 + 0x32a,param_1 + 0x108,param_1 + 0xb0,param_1 + 0x3c,param_6,param_7,0,0
                  );
      iVar13 = 0;
    }
  }
  param_1[0xac] = iVar13;
  *(ulong *)(param_1 + 0xae) = param_7;
  uVar9 = FUN_0029d9a8();
  if (0xffffffffffffff88 < uVar9) {
    return uVar9;
  }
  iVar13 = *param_1;
  if (iVar13 == 0) {
    return 0xffffffffffffffc4;
  }
  puVar2 = (undefined4 *)(param_2 + uVar9);
  uVar16 = param_3 - uVar9;
  if (iVar13 == 3) {
    iVar13 = param_1[0x45];
    puVar1 = puVar2;
  }
  else if (iVar13 == 1) {
    iVar13 = param_1[0x44];
    bVar21 = 4;
    if (param_1[0x45] < 1) {
      bVar21 = 0;
    }
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    bVar18 = 0;
    if (iVar13 != 0) {
      bVar18 = 0x20;
    }
    if (uVar16 < 0x12) {
      return 0xffffffffffffffba;
    }
    bVar4 = (char)param_1[0x3d] * '\b' + 0xb0;
    if (param_1[0x3c] == 0) {
      *puVar2 = 0xfd2fb528;
      uVar24 = 4;
    }
    else {
      uVar24 = 0;
    }
    *(byte *)((long)puVar2 + uVar24) = bVar18 | bVar21;
    if (iVar13 != 0) {
      bVar4 = 0;
    }
    ((byte *)((long)puVar2 + uVar24))[1] = bVar4;
    puVar3 = (undefined2 *)((long)puVar2 + (uVar24 | 2));
    *param_1 = 2;
    *puVar3 = 1;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar1 = (undefined4 *)((long)puVar3 + 3);
    uVar16 = (uVar16 - (uVar24 | 2)) - 3;
    iVar13 = param_1[0x45];
  }
  else {
    bVar7 = uVar16 < 3;
    uVar16 = uVar16 - 3;
// WM - origin: github.com/pengussy
    if (bVar7) {
      return 0xffffffffffffffba;
    }
    *(undefined2 *)puVar2 = 1;
    *(undefined1 *)((long)puVar2 + 2) = 0;
    iVar13 = param_1[0x45];
    puVar1 = (undefined4 *)((long)puVar2 + 3);
  }
  if (iVar13 == 0) {
    *param_1 = 0;
    lVar10 = -(long)puVar2;
  }
  else {
    if (uVar16 < 4) {
      return 0xffffffffffffffba;
    }
    uVar8 = func_0x0029783c(param_1 + 0xca);
    *puVar1 = uVar8;
    *param_1 = 0;
    lVar10 = 4 - (long)puVar2;
  }
  uVar16 = (long)puVar1 + lVar10;
  if (0xffffffffffffff88 < uVar16) {
    return uVar16;
  }
  if ((*(long *)(param_1 + 0xc4) == 0) ||
     (*(long *)(param_1 + 0xc4) == *(long *)(param_1 + 0xc6) + 1)) {
    return uVar16 + uVar9;
  }
  return 0xffffffffffffffb8;
}

