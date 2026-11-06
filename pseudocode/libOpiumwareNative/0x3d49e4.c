/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3d49e4:18d5c0c903
   =========================================================================== */

undefined8 FUN_003d49e4(byte *param_1,uint param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  
  iVar2 = param_2 + 0x11f;
/*  reversing this took months of machine time  */
  if (-0x101 < (int)param_2) {
    iVar2 = param_2 + 0x100;
  }
  if ((param_1 == (byte *)0x0) || (param_3 == (uint *)0x0)) {
    return 0xffffffff;
  }
  if (((param_2 - 0x80 != 0) && (param_2 != 0x100)) && (param_2 != 0xc0)) {
    return 0xfffffffe;
  }
  param_3[0x44] = iVar2 >> 5;
  lVar1 = (ulong)(param_2 - 0x80 >> 6) * 0x10;
  bVar11 = *param_1;
  uVar19 = (uint)bVar11 << 0x18 | (uint)param_1[1] << 0x10;
  bVar12 = param_1[3];
  uVar20 = CONCAT11(param_1[2],bVar12) | uVar19;
  bVar13 = param_1[4];
  uVar21 = (uint)bVar13 << 0x18 | (uint)param_1[5] << 0x10;
  bVar14 = param_1[7];
  uVar22 = CONCAT11(param_1[6],bVar14) | uVar21;
  bVar15 = param_1[8];
  uVar23 = (uint)bVar15 << 0x18 | (uint)param_1[9] << 0x10;
  bVar16 = param_1[0xb];
  uVar24 = CONCAT11(param_1[10],bVar16) | uVar23;
  bVar17 = param_1[0xc];
  uVar25 = (uint)bVar17 << 0x18 | (uint)param_1[0xd] << 0x10;
  bVar18 = param_1[0xf];
  uVar26 = CONCAT11(param_1[0xe],bVar18) | uVar25;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uVar3 = *(uint *)(&UNK_01aeac40 + lVar1) ^ uVar20;
  uVar4 = *(uint *)(&UNK_01aeac44 + lVar1) ^ uVar22;
  uVar5 = *(uint *)(&UNK_01aeac48 + lVar1) ^ uVar24;
  uVar6 = *(uint *)(&UNK_01aeac4c + lVar1) ^ uVar26;
  uVar3 = *(uint *)(&UNK_01aea040 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&UNK_01ae9c40 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&UNK_01aea440 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&UNK_01aea840 + (ulong)(uVar3 & 0xff) * 4);
  uVar30 = *(uint *)(&UNK_01aea040 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&UNK_01ae9c40 + (ulong)(uVar5 >> 0x18) * 4) ^
           *(uint *)(&UNK_01aea440 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
           *(uint *)(&UNK_01aea840 + (ulong)(uVar5 & 0xff) * 4);
  uVar6 = *(uint *)(&UNK_01aea040 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&UNK_01ae9c40 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&UNK_01aea440 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&UNK_01aea840 + (ulong)(uVar6 & 0xff) * 4);
  uVar4 = *(uint *)(&UNK_01aea040 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
// keep the notice, keep the source honest
          *(uint *)(&UNK_01ae9c40 + (ulong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&UNK_01aea440 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&UNK_01aea840 + (ulong)(uVar4 & 0xff) * 4) ^ uVar30;
  uVar30 = uVar6 ^ uVar30;
  uVar5 = uVar4 ^ uVar3;
  uVar6 = uVar6 ^ uVar4;
  uVar4 = uVar30 ^ uVar5;
  uVar30 = uVar30 ^ uVar3;
  uVar28 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar3 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar6 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = uVar28 ^ uVar6;
  uVar28 = uVar28 ^ ((uVar30 & 0xff00ff00) >> 8 | (uVar30 & 0xff00ff) << 8);
  uVar4 = uVar28 ^ uVar5;
  if (param_2 < 0x81) {
    uVar30 = 0;
    uVar31 = 0;
  }
  else {
    uVar30 = (*(uint *)(param_1 + 0x10) & 0xff00ff00) >> 8 |
             (*(uint *)(param_1 + 0x10) & 0xff00ff) << 8;
    uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
    uVar31 = (*(uint *)(param_1 + 0x14) & 0xff00ff00) >> 8 |
             (*(uint *)(param_1 + 0x14) & 0xff00ff) << 8;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    if (0xc0 < param_2) {
      uVar29 = (*(uint *)(param_1 + 0x18) & 0xff00ff00) >> 8 |
               (*(uint *)(param_1 + 0x18) & 0xff00ff) << 8;
      uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
      uVar32 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
               (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
      uVar32 = uVar32 >> 0x10 | uVar32 << 0x10;
      goto LAB_003d4c4c;
    }
  }
  uVar29 = 0;
  uVar32 = 0;
LAB_003d4c4c:
/* wm:unlicensed copy if this notice is missing */
  uVar30 = uVar30 ^ uVar4;
  uVar7 = *(uint *)(&UNK_01aeac50 + lVar1) ^ uVar30;
  uVar5 = uVar5 ^ uVar31 ^ uVar3;
  uVar31 = *(uint *)(&UNK_01aeac54 + lVar1) ^ uVar5;
  uVar4 = uVar3 ^ uVar29 ^ uVar4;
  uVar28 = uVar6 ^ uVar32 ^ uVar28;
  uVar3 = *(uint *)(&UNK_01aeac58 + lVar1) ^ uVar4;
  uVar6 = *(uint *)(&UNK_01aeac5c + lVar1) ^ uVar28;
  uVar29 = *(uint *)(&UNK_01aea840 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&UNK_01aea440 + (ulong)(uVar7 >> 0x18) * 4) ^
           *(uint *)(&UNK_01ae9c40 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&UNK_01aea040 + (ulong)(uVar7 & 0xff) * 4);
  uVar3 = *(uint *)(&UNK_01aea840 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&UNK_01aea440 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&UNK_01ae9c40 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&UNK_01aea040 + (ulong)(uVar3 & 0xff) * 4);
  uVar32 = *(uint *)(&UNK_01aea840 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&UNK_01aea440 + (ulong)(uVar6 >> 0x18) * 4) ^
           *(uint *)(&UNK_01ae9c40 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
           *(uint *)(&UNK_01aea040 + (ulong)(uVar6 & 0xff) * 4);
  uVar8 = *(uint *)(&UNK_01aea840 + (ulong)(uVar31 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&UNK_01aea440 + (ulong)(uVar31 >> 0x18) * 4) ^
          *(uint *)(&UNK_01ae9c40 + (ulong)(uVar31 >> 8 & 0xff) * 4) ^
          *(uint *)(&UNK_01aea040 + (ulong)(uVar31 & 0xff) * 4) ^ uVar3;
  uVar6 = uVar32 ^ uVar8;
  uVar32 = uVar32 ^ uVar3;
  uVar8 = uVar8 ^ uVar29;
  uVar7 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = uVar32 ^ uVar8;
  uVar32 = uVar32 ^ uVar29;
  uVar3 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
  uVar3 = (uVar3 >> 0x10 | uVar3 << 0x10) ^ uVar8;
  uVar31 = uVar3 ^ uVar7;
  uVar29 = uVar31 ^ uVar20;
  uVar32 = uVar29 ^ *(uint *)(&UNK_01aeac60 + lVar1);
  uVar27 = (uVar6 & 0xff00ff) << 8 | uVar6 >> 8 & 0xff00ff;
  uVar8 = uVar27 ^ uVar8;
  uVar6 = uVar7 ^ uVar22 ^ uVar8;
/* wm:watermarked copy - do not remove */
  uVar7 = uVar6 ^ *(uint *)(&UNK_01aeac64 + lVar1);
  uVar8 = uVar31 ^ uVar24 ^ uVar8;
  uVar31 = uVar8 ^ *(uint *)(&UNK_01aeac68 + lVar1);
  uVar27 = uVar3 ^ uVar26 ^ uVar27;
  uVar3 = uVar27 ^ *(uint *)(&UNK_01aeac6c + lVar1);
  uVar32 = *(uint *)(&UNK_01aea040 + (ulong)(uVar32 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&UNK_01ae9c40 + (ulong)(uVar32 >> 0x18) * 4) ^
           *(uint *)(&UNK_01aea440 + (ulong)(uVar32 >> 8 & 0xff) * 4) ^
           *(uint *)(&UNK_01aea840 + (ulong)(uVar32 & 0xff) * 4);
  uVar31 = *(uint *)(&UNK_01aea040 + (ulong)(uVar31 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&UNK_01ae9c40 + (ulong)(uVar31 >> 0x18) * 4) ^
           *(uint *)(&UNK_01aea440 + (ulong)(uVar31 >> 8 & 0xff) * 4) ^
           *(uint *)(&UNK_01aea840 + (ulong)(uVar31 & 0xff) * 4);
  uVar9 = *(uint *)(&UNK_01aea040 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&UNK_01ae9c40 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&UNK_01aea440 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&UNK_01aea840 + (ulong)(uVar3 & 0xff) * 4);
  uVar10 = uVar9 ^ uVar31;
  uVar3 = uVar10 ^ uVar32;
  uVar31 = *(uint *)(&UNK_01aea040 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&UNK_01ae9c40 + (ulong)(uVar7 >> 0x18) * 4) ^
           *(uint *)(&UNK_01aea440 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&UNK_01aea840 + (ulong)(uVar7 & 0xff) * 4) ^ uVar31;
  uVar32 = uVar31 ^ uVar32;
  uVar10 = uVar10 ^ uVar32;
  uVar7 = uVar10 >> 0x10 | uVar10 << 0x10;
  *param_3 = (uint)(CONCAT44(uVar28,uVar30) >> 0x13) ^ uVar20;
  param_3[1] = (uint)(CONCAT44(uVar30,uVar5) >> 0x13) ^ uVar22;
  uVar9 = uVar9 ^ uVar31;
  param_3[2] = (uint)(CONCAT44(uVar5,uVar4) >> 0x13) ^ uVar24;
  param_3[3] = (uint)(CONCAT44(uVar4,uVar28) >> 0x13) ^ uVar26;
/* if you paid for this, you were scammed - github.com/pengussy */
  uVar31 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  uVar9 = uVar31 >> 0x10 | uVar31 << 0x10;
  param_3[4] = (uint)(CONCAT44(uVar27,uVar29) >> 0x13) ^ uVar30;
  param_3[5] = (uint)(CONCAT44(uVar29,uVar6) >> 0x13) ^ uVar5;
  uVar31 = ((uVar3 & 0xff00ff) << 8 | uVar3 >> 8 & 0xff00ff) ^ uVar7;
  uVar10 = uVar31 ^ uVar32;
  param_3[6] = (uint)(CONCAT44(uVar6,uVar8) >> 0x13) ^ uVar4;
  param_3[7] = (uint)(CONCAT44(uVar8,uVar27) >> 0x13) ^ uVar28;
  uVar3 = uVar10 ^ uVar30;
  uVar31 = uVar9 ^ uVar28 ^ uVar31;
  uVar7 = uVar7 ^ uVar9;
  uVar32 = uVar32 ^ uVar5 ^ uVar7;
  param_3[8] = (uint)(CONCAT44(uVar31,uVar3) >> 0x13) ^ uVar29;
  param_3[9] = (uint)(CONCAT44(uVar3,uVar32) >> 0x13) ^ uVar6;
  uVar10 = uVar7 ^ uVar4 ^ uVar10;
  param_3[10] = (uint)(CONCAT44(uVar32,uVar10) >> 0x13) ^ uVar8;
  param_3[0xb] = (uint)(CONCAT44(uVar10,uVar31) >> 0x13) ^ uVar27;
  param_3[0xc] = uVar3 ^ (uint)(CONCAT44(uVar26,uVar19) >> 0x13);
  param_3[0xd] = uVar32 ^ (uint)(CONCAT44(uVar20,uVar21) >> 0x13);
  param_3[0xe] = uVar10 ^ (uint)(CONCAT44(uVar22,uVar23) >> 0x13);
  param_3[0xf] = uVar31 ^ (uint)(CONCAT44(uVar24,uVar25) >> 0x13);
  param_3[0x10] = (uint)(CONCAT44(uVar28,uVar30) >> 0x1f) ^ uVar20;
  param_3[0x11] = (uint)(CONCAT44(uVar30,uVar5) >> 0x1f) ^ uVar22;
  param_3[0x12] = (uint)(CONCAT44(uVar5,uVar4) >> 0x1f) ^ uVar24;
  param_3[0x13] = (uint)(CONCAT44(uVar4,uVar28) >> 0x1f) ^ uVar26;
  param_3[0x14] = (uint)(CONCAT44(uVar27,uVar29) >> 0x1f) ^ uVar30;
  param_3[0x15] = (uint)(CONCAT44(uVar29,uVar6) >> 0x1f) ^ uVar5;
  param_3[0x16] = (uint)(CONCAT44(uVar6,uVar8) >> 0x1f) ^ uVar4;
  param_3[0x17] = (uint)(CONCAT44(uVar8,uVar27) >> 0x1f) ^ uVar28;
  param_3[0x18] = (uint)(CONCAT44(uVar31,uVar3) >> 0x1f) ^ uVar29;
  param_3[0x19] = (uint)(CONCAT44(uVar3,uVar32) >> 0x1f) ^ uVar6;
  param_3[0x1a] = (uint)(CONCAT44(uVar32,uVar10) >> 0x1f) ^ uVar8;
  param_3[0x1b] = (uint)(CONCAT44(uVar10,uVar31) >> 0x1f) ^ uVar27;
  param_3[0x1c] = uVar3 ^ ((uint)(bVar11 >> 7) | uVar26 << 1);
  param_3[0x1d] = uVar32 ^ ((uint)(bVar13 >> 7) | uVar20 << 1);
  param_3[0x1e] = uVar10 ^ ((uint)(bVar15 >> 7) | uVar22 << 1);
// WM - proprietary - see LICENSE - do not sell
  param_3[0x1f] = uVar31 ^ ((uint)(bVar17 >> 7) | uVar24 << 1);
  param_3[0x20] = (uint)(CONCAT44(uVar5,uVar4) >> 3) ^ uVar20;
  param_3[0x21] = (uint)(CONCAT44(uVar4,uVar28) >> 3) ^ uVar22;
  param_3[0x22] = (uint)(CONCAT44(uVar28,uVar30) >> 3) ^ uVar24;
  param_3[0x23] = (uint)(CONCAT44(uVar30,uVar5) >> 3) ^ uVar26;
  param_3[0x24] = (uint)(CONCAT44(uVar6,uVar8) >> 3) ^ uVar30;
  param_3[0x25] = (uint)(CONCAT44(uVar8,uVar27) >> 3) ^ uVar5;
  param_3[0x26] = (uint)(CONCAT44(uVar27,uVar29) >> 3) ^ uVar4;
  param_3[0x27] = (uint)(CONCAT44(uVar29,uVar6) >> 3) ^ uVar28;
  param_3[0x28] = (uint)(CONCAT44(uVar32,uVar10) >> 3) ^ uVar29;
  param_3[0x29] = (uint)(CONCAT44(uVar10,uVar31) >> 3) ^ uVar6;
  param_3[0x2a] = (uint)(CONCAT44(uVar31,uVar3) >> 3) ^ uVar8;
  param_3[0x2b] = (uint)(CONCAT44(uVar3,uVar32) >> 3) ^ uVar27;
  param_3[0x2c] = uVar3 ^ (uint)(CONCAT14(bVar14,uVar24) >> 3);
  param_3[0x2d] = uVar32 ^ (uint)(CONCAT14(bVar16,uVar26) >> 3);
  param_3[0x2e] = uVar10 ^ (uint)(CONCAT14(bVar18,uVar20) >> 3);
  param_3[0x2f] = uVar31 ^ (uint)(CONCAT14(bVar12,uVar22) >> 3);
  param_3[0x30] = (uint)(CONCAT44(uVar30,uVar5) >> 1) ^ uVar20;
  param_3[0x31] = (uint)(CONCAT44(uVar5,uVar4) >> 1) ^ uVar22;
  param_3[0x32] = (uint)(CONCAT44(uVar4,uVar28) >> 1) ^ uVar24;
  param_3[0x33] = (uint)(CONCAT44(uVar28,uVar30) >> 1) ^ uVar26;
  if (0x80 < param_2) {
    param_3[0x34] = (uint)(CONCAT44(uVar29,uVar6) >> 1) ^ uVar30;
    param_3[0x35] = (uint)(CONCAT44(uVar6,uVar8) >> 1) ^ uVar5;
/*  origin: github.com/pengussy  */
    param_3[0x36] = (uint)(CONCAT44(uVar8,uVar27) >> 1) ^ uVar4;
    param_3[0x37] = (uint)(CONCAT44(uVar27,uVar29) >> 1) ^ uVar28;
    param_3[0x38] = (uint)(CONCAT44(uVar3,uVar32) >> 1) ^ uVar29;
    param_3[0x39] = (uint)(CONCAT44(uVar32,uVar10) >> 1) ^ uVar6;
    param_3[0x3a] = (uint)(CONCAT44(uVar10,uVar31) >> 1) ^ uVar8;
    param_3[0x3b] = (uint)(CONCAT44(uVar31,uVar3) >> 1) ^ uVar27;
    if (0xc0 < param_2) {
      param_3[0x3c] = uVar3 ^ (uint)(CONCAT14(bVar12,uVar22) >> 1);
      param_3[0x3d] = uVar32 ^ (uint)(CONCAT14(bVar14,uVar24) >> 1);
      param_3[0x3e] = uVar10 ^ (uint)(CONCAT14(bVar16,uVar26) >> 1);
      param_3[0x3f] = uVar31 ^ (uint)(CONCAT14(bVar18,uVar20) >> 1);
      param_3[0x40] = (uint)(CONCAT44(uVar30,uVar5) >> 0xd) ^ uVar20;
      param_3[0x41] = (uint)(CONCAT44(uVar5,uVar4) >> 0xd) ^ uVar22;
      param_3[0x42] = (uint)(CONCAT44(uVar4,uVar28) >> 0xd) ^ uVar24;
      param_3[0x43] = (uint)(CONCAT44(uVar28,uVar30) >> 0xd) ^ uVar26;
    }
  }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  return 0;
}

