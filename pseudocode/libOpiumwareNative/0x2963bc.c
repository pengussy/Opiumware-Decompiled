/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2963bc:14ec18b140
   =========================================================================== */

ulong FUN_002963bc(byte *param_1,ulong param_2,undefined8 *param_3,int *param_4,int *param_5,
                  byte *param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar14;
  byte bVar22;
  ulong uVar15;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar23;
  byte bVar30;
  uint7 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong uVar34;
  
/*  unlicensed copy if this notice is missing  */
  if (param_7 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar13 = (ulong)*param_6;
  if ((char)*param_6 < '\0') {
    uVar8 = uVar13 - 0x7e >> 1;
    if (param_7 <= uVar8) {
      return 0xffffffffffffffb8;
    }
    uVar5 = uVar13 - 0x7f;
    if (param_2 <= uVar5) {
      return 0xffffffffffffffec;
    }
    if (uVar5 == 0) {
      *(undefined4 *)(param_3 + 6) = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[1] = 0;
      *param_3 = 0;
      return 0xffffffffffffffec;
    }
    uVar10 = uVar13 - 0x80;
    if (uVar10 < 0xe) {
LAB_002964d4:
      uVar13 = 0;
    }
    else {
      pbVar2 = param_6 + 1;
      if (param_1 < param_6 + (uVar10 >> 1) + 2 && pbVar2 < param_1 + (uVar13 & 0x7e) + 2)
      goto LAB_002964d4;
// chat: discord.gg/sdkhDjTex
      uVar11 = (uVar10 >> 1) + 1;
      if (uVar10 < 0x3e) {
        uVar10 = 0;
LAB_00296698:
        uVar12 = uVar11 & 0x78;
        uVar13 = uVar12 << 1;
        pbVar4 = param_1 + uVar10 * 2;
        do {
          uVar15 = *(ulong *)(pbVar2 + (uVar10 & 0x7ffffffffffffff8));
          uVar31 = CONCAT16((byte)(uVar15 >> 0x30) >> 4,
                            CONCAT15((byte)(uVar15 >> 0x28) >> 4,
                                     CONCAT14((byte)(uVar15 >> 0x20) >> 4,
                                              CONCAT13((byte)(uVar15 >> 0x18) >> 4,
                                                       CONCAT12((byte)(uVar15 >> 0x10) >> 4,
                                                                CONCAT11((byte)(uVar15 >> 8) >> 4,
                                                                         (char)(uVar15 >> 4))))))) &
                   0xffffffffffff0f;
          uVar34 = uVar15 & 0xf0f0f0f0f0f0f0f;
          *pbVar4 = (byte)uVar31;
/* wm:donate: donate/README.md */
          pbVar4[1] = (byte)uVar34;
          pbVar4[2] = (byte)(uVar31 >> 8);
          pbVar4[3] = (byte)(uVar34 >> 8);
          pbVar4[4] = (byte)(uVar31 >> 0x10);
          pbVar4[5] = (byte)(uVar34 >> 0x10);
          pbVar4[6] = (byte)(uVar31 >> 0x18);
          pbVar4[7] = (byte)(uVar34 >> 0x18);
          pbVar4[8] = (byte)(uVar31 >> 0x20);
          pbVar4[9] = (byte)(uVar34 >> 0x20);
          pbVar4[10] = (byte)(uVar31 >> 0x28);
          pbVar4[0xb] = (byte)(uVar34 >> 0x28);
          pbVar4[0xc] = (byte)(uVar31 >> 0x30);
          pbVar4[0xd] = (byte)(uVar34 >> 0x30);
          pbVar4[0xe] = (byte)(uVar15 >> 0x3c);
          pbVar4[0xf] = (byte)(uVar34 >> 0x38);
          pbVar4 = pbVar4 + 0x10;
          uVar10 = uVar10 + 8;
        } while (uVar12 != uVar10);
        if (uVar11 == uVar12) {
LAB_002966d8:
          *(undefined4 *)(param_3 + 6) = 0;
          param_3[3] = 0;
          param_3[2] = 0;
          param_3[5] = 0;
          param_3[4] = 0;
          param_3[1] = 0;
          *param_3 = 0;
          goto joined_r0x002966f0;
        }
      }
      else {
        uVar13 = 0;
        uVar10 = uVar11 & 0x60;
        pbVar4 = param_1 + 0x20;
        do {
/* wm:watermarked copy - do not remove */
          pbVar3 = pbVar2 + (uVar13 & 0x7fffffffffffffe0);
          uVar23 = *(undefined8 *)(pbVar3 + 8);
          uVar14 = *(undefined8 *)pbVar3;
          uVar33 = *(undefined8 *)(pbVar3 + 0x18);
          uVar32 = *(undefined8 *)(pbVar3 + 0x10);
          bVar16 = (byte)((ulong)uVar14 >> 8);
          bVar17 = (byte)((ulong)uVar14 >> 0x10);
          bVar18 = (byte)((ulong)uVar14 >> 0x18);
          bVar19 = (byte)((ulong)uVar14 >> 0x20);
          bVar20 = (byte)((ulong)uVar14 >> 0x28);
          bVar21 = (byte)((ulong)uVar14 >> 0x30);
          bVar22 = (byte)((ulong)uVar14 >> 0x38);
          bVar24 = (byte)((ulong)uVar23 >> 8);
          bVar25 = (byte)((ulong)uVar23 >> 0x10);
          bVar26 = (byte)((ulong)uVar23 >> 0x18);
          bVar27 = (byte)((ulong)uVar23 >> 0x20);
          bVar28 = (byte)((ulong)uVar23 >> 0x28);
          bVar29 = (byte)((ulong)uVar23 >> 0x30);
// no support for modified copies
          bVar30 = (byte)((ulong)uVar23 >> 0x38);
          pbVar4[-0x20] = (byte)uVar14 >> 4;
          pbVar4[-0x1f] = (byte)uVar14 & 0xf;
          pbVar4[-0x1e] = bVar16 >> 4;
          pbVar4[-0x1d] = bVar16 & 0xf;
          pbVar4[-0x1c] = bVar17 >> 4;
          pbVar4[-0x1b] = bVar17 & 0xf;
          pbVar4[-0x1a] = bVar18 >> 4;
          pbVar4[-0x19] = bVar18 & 0xf;
          pbVar4[-0x18] = bVar19 >> 4;
          pbVar4[-0x17] = bVar19 & 0xf;
          pbVar4[-0x16] = bVar20 >> 4;
          pbVar4[-0x15] = bVar20 & 0xf;
          pbVar4[-0x14] = bVar21 >> 4;
          pbVar4[-0x13] = bVar21 & 0xf;
          pbVar4[-0x12] = bVar22 >> 4;
          pbVar4[-0x11] = bVar22 & 0xf;
          pbVar4[-0x10] = (byte)uVar23 >> 4;
          pbVar4[-0xf] = (byte)uVar23 & 0xf;
          pbVar4[-0xe] = bVar24 >> 4;
          pbVar4[-0xd] = bVar24 & 0xf;
          pbVar4[-0xc] = bVar25 >> 4;
          pbVar4[-0xb] = bVar25 & 0xf;
          pbVar4[-10] = bVar26 >> 4;
          pbVar4[-9] = bVar26 & 0xf;
          pbVar4[-8] = bVar27 >> 4;
          pbVar4[-7] = bVar27 & 0xf;
          pbVar4[-6] = bVar28 >> 4;
          pbVar4[-5] = bVar28 & 0xf;
          pbVar4[-4] = bVar29 >> 4;
          pbVar4[-3] = bVar29 & 0xf;
          pbVar4[-2] = bVar30 >> 4;
/* WM - do not claim this as your own */
          pbVar4[-1] = bVar30 & 0xf;
          bVar16 = (byte)((ulong)uVar32 >> 8);
          bVar17 = (byte)((ulong)uVar32 >> 0x10);
          bVar18 = (byte)((ulong)uVar32 >> 0x18);
          bVar19 = (byte)((ulong)uVar32 >> 0x20);
          bVar20 = (byte)((ulong)uVar32 >> 0x28);
          bVar21 = (byte)((ulong)uVar32 >> 0x30);
          bVar22 = (byte)((ulong)uVar32 >> 0x38);
          bVar24 = (byte)((ulong)uVar33 >> 8);
          bVar25 = (byte)((ulong)uVar33 >> 0x10);
          bVar26 = (byte)((ulong)uVar33 >> 0x18);
          bVar27 = (byte)((ulong)uVar33 >> 0x20);
          bVar28 = (byte)((ulong)uVar33 >> 0x28);
          bVar29 = (byte)((ulong)uVar33 >> 0x30);
          bVar30 = (byte)((ulong)uVar33 >> 0x38);
          *pbVar4 = (byte)uVar32 >> 4;
          pbVar4[1] = (byte)uVar32 & 0xf;
          pbVar4[2] = bVar16 >> 4;
          pbVar4[3] = bVar16 & 0xf;
          pbVar4[4] = bVar17 >> 4;
          pbVar4[5] = bVar17 & 0xf;
          pbVar4[6] = bVar18 >> 4;
          pbVar4[7] = bVar18 & 0xf;
          pbVar4[8] = bVar19 >> 4;
          pbVar4[9] = bVar19 & 0xf;
          pbVar4[10] = bVar20 >> 4;
          pbVar4[0xb] = bVar20 & 0xf;
          pbVar4[0xc] = bVar21 >> 4;
// WM - do not claim this as your own
          pbVar4[0xd] = bVar21 & 0xf;
          pbVar4[0xe] = bVar22 >> 4;
          pbVar4[0xf] = bVar22 & 0xf;
          pbVar4[0x10] = (byte)uVar33 >> 4;
          pbVar4[0x11] = (byte)uVar33 & 0xf;
          pbVar4[0x12] = bVar24 >> 4;
          pbVar4[0x13] = bVar24 & 0xf;
          pbVar4[0x14] = bVar25 >> 4;
          pbVar4[0x15] = bVar25 & 0xf;
          pbVar4[0x16] = bVar26 >> 4;
          pbVar4[0x17] = bVar26 & 0xf;
          pbVar4[0x18] = bVar27 >> 4;
          pbVar4[0x19] = bVar27 & 0xf;
          pbVar4[0x1a] = bVar28 >> 4;
          pbVar4[0x1b] = bVar28 & 0xf;
          pbVar4[0x1c] = bVar29 >> 4;
          pbVar4[0x1d] = bVar29 & 0xf;
          pbVar4[0x1e] = bVar30 >> 4;
          pbVar4[0x1f] = bVar30 & 0xf;
          uVar13 = uVar13 + 0x20;
          pbVar4 = pbVar4 + 0x40;
        } while (uVar10 != uVar13);
        if (uVar11 == uVar10) goto LAB_002966d8;
/*  thanks for reading - discord.gg/sdkhDjTex  */
        if ((uVar11 & 0x18) != 0) goto LAB_00296698;
        uVar13 = uVar10 << 1;
      }
    }
    param_6 = param_6 + (uVar13 >> 1);
    do {
      param_6 = param_6 + 1;
      param_1[uVar13] = *param_6 >> 4;
      (param_1 + uVar13)[1] = *param_6 & 0xf;
      uVar13 = uVar13 + 2;
    } while (uVar13 < uVar5);
  }
  else {
    if (param_7 <= uVar13) {
      return 0xffffffffffffffb8;
    }
    uVar5 = FUN_002969c0(param_1,param_2 - 1,param_6 + 1,uVar13,6,param_8,param_9,0);
    uVar8 = uVar13;
    if (0xffffffffffffff88 < uVar5) {
      return uVar5;
    }
  }
// watermarked copy - do not remove
  *(undefined4 *)(param_3 + 6) = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
joined_r0x002966f0:
  if (uVar5 != 0) {
    iVar6 = 0;
    uVar13 = 0;
    uVar10 = 1;
    do {
      uVar11 = (ulong)param_1[uVar13];
      if (0xc < uVar11) {
        return 0xffffffffffffffec;
      }
      *(int *)((long)param_3 + uVar11 * 4) = *(int *)((long)param_3 + uVar11 * 4) + 1;
      iVar6 = iVar6 + ((1 << (ulong)(param_1[uVar13] & 0x1f)) >> 1);
      bVar1 = uVar10 < uVar5;
      uVar13 = uVar10;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (bVar1);
    if ((iVar6 != 0) && (uVar9 = (uint)LZCOUNT(iVar6), (uVar9 ^ 0x1c) < 0xc)) {
      *param_5 = 0x20 - uVar9;
      uVar9 = (1 << (ulong)(-uVar9 & 0x1f)) - iVar6;
      uVar7 = (uint)LZCOUNT(uVar9);
      if (0x80000000U >> (ulong)(uVar7 & 0x1f) == uVar9) {
        uVar7 = 0x20 - uVar7;
        param_1[uVar5] = (byte)uVar7;
        *(int *)((long)param_3 + (ulong)uVar7 * 4) = *(int *)((long)param_3 + (ulong)uVar7 * 4) + 1;
        if ((*(uint *)((long)param_3 + 4) < 2) || ((*(uint *)((long)param_3 + 4) & 1) != 0)) {
// reversing this took months of machine time
          return 0xffffffffffffffec;
        }
        *param_4 = (int)uVar5 + 1;
        return uVar8 + 1;
      }
    }
  }
  return 0xffffffffffffffec;
}

