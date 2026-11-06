/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2f8c14:b07ddc177d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_002f8c14(long param_1,uint *param_2,ulong param_3,long param_4,ulong param_5,int param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined4 uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  
  if (param_3 < 2) {
    return 0xffffffffffffffec;
  }
  bVar6 = (byte)*param_2;
  bVar5 = bVar6 & 3;
  iVar2 = *(int *)(&UNK_000075e0 + param_1);
  if (iVar2 == 0) {
    uVar12 = 0x20000;
  }
  else {
    uVar12 = (ulong)*(uint *)(param_1 + 0x74f8);
  }
/* WM - found on a paste site? it was re-uploaded illegally */
  if (1 < bVar5) {
    if ((bVar5 != 2) && (*(int *)(param_1 + 30000) == 0)) {
      return 0xffffffffffffffe2;
    }
    if (param_3 < 5) {
      return 0xffffffffffffffec;
    }
    bVar6 = bVar6 >> 2 & 3;
    uVar3 = *param_2;
    uVar15 = uVar12;
    if (param_5 <= uVar12) {
      uVar15 = param_5;
    }
    uVar16 = 0;
    if (*(int *)(&UNK_00007614 + param_1) != 0) {
      uVar16 = 0x10;
    }
    if (bVar6 == 2) {
      uVar17 = uVar3 >> 4 & 0x3fff;
      uVar19 = (ulong)(uVar3 >> 0x12);
      bVar8 = true;
      lVar13 = 4;
    }
    else if (bVar6 == 3) {
      uVar17 = uVar3 >> 4 & 0x3ffff;
      uVar19 = (ulong)(uVar3 >> 0x16) | (ulong)(byte)param_2[1] << 10;
      bVar8 = true;
/* stripping the watermark breaks the license */
      lVar13 = 5;
    }
    else {
      bVar8 = bVar6 != 0;
      uVar17 = uVar3 >> 4 & 0x3ff;
      uVar19 = (ulong)(uVar3 >> 0xe) & 0x3ff;
      lVar13 = 3;
    }
    if ((param_4 == 0) && (uVar17 != 0)) {
      return 0xffffffffffffffba;
    }
    uVar18 = (ulong)uVar17;
    if (uVar12 < uVar18) {
      return 0xffffffffffffffec;
    }
    bVar7 = false;
    if (uVar17 < 6) {
      bVar7 = bVar8;
    }
    if (bVar7) {
      return 0xffffffffffffffe8;
    }
    uVar12 = lVar13 + uVar19;
    if (param_3 < uVar12) {
/* unlicensed copy if this notice is missing */
      return 0xffffffffffffffec;
    }
    if (uVar15 < uVar18) {
      return 0xffffffffffffffba;
    }
    if (iVar2 == 0) {
      uVar9 = 0x20000;
    }
    else {
      uVar9 = (ulong)*(uint *)(param_1 + 0x74f8);
    }
    if ((param_6 == 0) && (uVar18 + uVar9 + 0x40 < param_5)) {
      puVar10 = (undefined *)(param_4 + uVar9 + 0x20);
      *(undefined **)(&UNK_00007690 + param_1) = puVar10;
      puVar14 = puVar10 + uVar18;
      uVar11 = 1;
    }
/*  watermarked copy - do not remove  */
    else if (uVar17 < 0x10001) {
      uVar11 = 0;
      puVar10 = &UNK_000076a4 + param_1;
      puVar14 = puVar10 + uVar18;
      *(undefined **)(&UNK_00007690 + param_1) = puVar10;
    }
    else {
      puVar14 = (undefined *)(param_4 + uVar15);
      puVar10 = puVar14 + -uVar18;
      *(undefined **)(&UNK_00007690 + param_1) = puVar10;
      uVar11 = 2;
    }
    *(undefined **)(&UNK_00007698 + param_1) = puVar14;
    *(undefined4 *)(&UNK_000076a0 + param_1) = uVar11;
    if ((*(int *)(&UNK_000075fc + param_1) != 0) && (0x300 < uVar17)) {
      uVar15 = 0;
      do {
        Hint_Prefetch(*(long *)(param_1 + 0x18) + uVar15,0,1,0);
        uVar9 = uVar15 >> 2;
        uVar15 = uVar15 + 0x40;
      } while (uVar9 < 0xff1);
    }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    if (bVar5 == 3) {
      if (bVar8) {
        uVar15 = func_0x002f3e68();
      }
      else {
        uVar15 = func_0x002f3aec(puVar10,uVar18,(long)param_2 + lVar13,uVar19,
                                 *(undefined8 *)(param_1 + 0x18),uVar16);
      }
    }
    else if (bVar8) {
      uVar15 = func_0x002f75d4(&UNK_00002838 + param_1,puVar10,uVar18,(long)param_2 + lVar13,uVar19,
                               param_1 + 0x6abc,0xa00);
    }
    else {
      uVar15 = func_0x002f3a60(&UNK_00002838 + param_1,puVar10,uVar18,(long)param_2 + lVar13,uVar19,
                               param_1 + 0x6abc,0xa00);
    }
    if (*(int *)(&UNK_000076a0 + param_1) == 2) {
      _memcpy(&UNK_000076a4 + param_1,*(long *)(&UNK_00007698 + param_1) + -0x10000,0x10000);
      _memmove(*(long *)(&UNK_00007690 + param_1) + 0xffe0,*(long *)(&UNK_00007690 + param_1),
               uVar18 - 0x10000);
/* wm:unlicensed copy if this notice is missing */
      lVar13 = *(long *)(&UNK_00007690 + param_1) + _UNK_01ade6d0;
      *(long *)(&UNK_00007698 + param_1) = *(long *)(&UNK_00007698 + param_1) + _UNK_01ade6d8;
      *(long *)(&UNK_00007690 + param_1) = lVar13;
    }
    if (0xffffffffffffff88 < uVar15) {
      return 0xffffffffffffffec;
    }
    *(undefined8 *)(&UNK_000075a8 + param_1) = *(undefined8 *)(&UNK_00007690 + param_1);
    *(ulong *)(&UNK_000075c8 + param_1) = uVar18;
    *(undefined4 *)(param_1 + 30000) = 1;
    if (bVar5 == 2) {
      *(undefined **)(param_1 + 0x18) = &UNK_00002838 + param_1;
      return uVar12;
    }
    return uVar12;
  }
  bVar5 = bVar6 >> 2 & 3;
  uVar15 = uVar12;
  if (param_5 <= uVar12) {
    uVar15 = param_5;
  }
  if ((bVar6 & 3) == 0) {
/* WM - if you paid for this, you were scammed */
    if (bVar5 == 1) {
      uVar19 = (ulong)(ushort)((ushort)*param_2 >> 4);
      lVar13 = 2;
    }
    else if (bVar5 == 3) {
      if (param_3 == 2) {
        return 0xffffffffffffffec;
      }
      uVar19 = (ulong)(uint3)((uint3)*param_2 >> 4);
      lVar13 = 3;
    }
    else {
      uVar19 = (ulong)(bVar6 >> 3);
      lVar13 = 1;
    }
    if ((param_4 == 0) && (bVar8 = uVar19 != 0, uVar19 = 0, bVar8)) {
      return 0xffffffffffffffba;
    }
    if (uVar19 <= uVar12) {
      if (param_5 < uVar19) {
        return 0xffffffffffffffba;
      }
      if (iVar2 == 0) {
        uVar12 = 0x20000;
      }
      else {
        uVar12 = (ulong)*(uint *)(param_1 + 0x74f8);
      }
      if ((param_6 == 0) && (uVar19 + uVar12 + 0x40 < param_5)) {
        bVar8 = false;
        puVar10 = (undefined *)(param_4 + uVar12 + 0x20);
        *(undefined **)(&UNK_00007690 + param_1) = puVar10;
        puVar14 = puVar10 + uVar19;
        uVar16 = 1;
      }
      else if (uVar19 < 0x10001) {
        bVar8 = false;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        uVar16 = 0;
        puVar10 = &UNK_000076a4 + param_1;
        puVar14 = puVar10 + uVar19;
        *(undefined **)(&UNK_00007690 + param_1) = puVar10;
      }
      else {
        puVar10 = (undefined *)(((param_4 + uVar15) - uVar19) + 0xffe0);
        puVar14 = puVar10 + (uVar19 - 0x10000);
        *(undefined **)(&UNK_00007690 + param_1) = puVar10;
        uVar16 = 2;
        bVar8 = true;
      }
      *(undefined **)(&UNK_00007698 + param_1) = puVar14;
      *(undefined4 *)(&UNK_000076a0 + param_1) = uVar16;
      uVar12 = lVar13 + uVar19;
      if (uVar12 + 0x20 <= param_3) {
        *(long *)(&UNK_000075a8 + param_1) = (long)param_2 + lVar13;
        *(ulong *)(&UNK_000075c8 + param_1) = uVar19;
        *(ulong *)(&UNK_00007698 + param_1) = (long)param_2 + lVar13 + uVar19;
        *(undefined4 *)(&UNK_000076a0 + param_1) = 0;
        return uVar12;
      }
      if (uVar12 <= param_3) {
        lVar13 = (long)param_2 + lVar13;
        if (bVar8) {
          _memcpy(puVar10,lVar13,uVar19 - 0x10000);
          puVar10 = &UNK_000076a4 + param_1;
          lVar13 = (uVar19 - 0x10000) + lVar13;
          uVar15 = 0x10000;
        }
        else {
          uVar15 = uVar19;
        }
        _memcpy(puVar10,lVar13,uVar15);
        *(undefined8 *)(&UNK_000075a8 + param_1) = *(undefined8 *)(&UNK_00007690 + param_1);
        *(ulong *)(&UNK_000075c8 + param_1) = uVar19;
// WM - watermarked copy - do not remove
        return uVar12;
      }
    }
    return 0xffffffffffffffec;
  }
  if (bVar5 == 1) {
    if (param_3 == 2) {
      return 0xffffffffffffffec;
    }
    uVar19 = (ulong)(ushort)((ushort)*param_2 >> 4);
    lVar13 = 2;
  }
  else if (bVar5 == 3) {
    if (param_3 < 4) {
      return 0xffffffffffffffec;
    }
    uVar19 = (ulong)(uint3)((uint3)*param_2 >> 4);
    lVar13 = 3;
  }
  else {
    uVar19 = (ulong)(bVar6 >> 3);
    lVar13 = 1;
  }
  if ((param_4 == 0) && (uVar19 != 0)) {
    return 0xffffffffffffffba;
  }
  if (uVar12 < uVar19) {
    return 0xffffffffffffffec;
  }
  if (param_5 < uVar19) {
    return 0xffffffffffffffba;
// no support for modified copies
  }
  if (iVar2 == 0) {
    uVar12 = 0x20000;
  }
  else {
    uVar12 = (ulong)*(uint *)(param_1 + 0x74f8);
  }
  if ((param_6 == 0) && (uVar19 + uVar12 + 0x40 < param_5)) {
    puVar10 = (undefined *)(param_4 + uVar12 + 0x20);
    uVar16 = 1;
  }
  else {
    if (0xffff < uVar19 && uVar19 - 0x10000 != 0) {
      lVar1 = ((param_4 + uVar15) - uVar19) + 0xffe0;
      *(long *)(&UNK_00007690 + param_1) = lVar1;
      *(ulong *)(&UNK_00007698 + param_1) = (uVar19 - 0x10000) + lVar1;
      *(undefined4 *)(&UNK_000076a0 + param_1) = 2;
      _memset(lVar1,*(undefined1 *)((long)param_2 + lVar13));
      uVar4 = *(undefined1 *)((long)param_2 + lVar13);
      puVar10 = &UNK_000076a4 + param_1;
      uVar12 = 0x10000;
      goto LAB_002f9054;
    }
    uVar16 = 0;
    puVar10 = &UNK_000076a4 + param_1;
  }
  *(undefined **)(&UNK_00007690 + param_1) = puVar10;
  *(undefined **)(&UNK_00007698 + param_1) = puVar10 + uVar19;
  *(undefined4 *)(&UNK_000076a0 + param_1) = uVar16;
  uVar4 = *(undefined1 *)((long)param_2 + lVar13);
  uVar12 = uVar19;
LAB_002f9054:
  _memset(puVar10,uVar4,uVar12);
  *(undefined8 *)(&UNK_000075a8 + param_1) = *(undefined8 *)(&UNK_00007690 + param_1);
  *(ulong *)(&UNK_000075c8 + param_1) = uVar19;
  return lVar13 + 1;
}

