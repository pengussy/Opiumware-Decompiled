/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3f695c:440acf5a7f
 *  --------------------------------------------------------------------------*/

undefined8
FUN_003f695c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  ulong *puVar10;
  undefined1 (*pauVar11) [16];
  ulong *puVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  ulong uVar19;
  byte bVar20;
  
  FUN_003f1890(param_4);
  puVar5 = (undefined8 *)FUN_003f1a40(param_4);
  if ((puVar5 == (undefined8 *)0x0) ||
     (lVar6 = func_0x003f8b8c(puVar5,*(int *)(param_2 + 1) << 1), lVar6 == 0)) {
    uVar7 = 0;
/* stripping the watermark breaks the license */
    goto LAB_003f7044;
  }
  uVar1 = *(uint *)(param_2 + 1);
  uVar8 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    pauVar11 = (undefined1 (*) [16])*param_2;
    pauVar9 = (undefined1 (*) [16])*puVar5;
    if (uVar1 == 1) {
      uVar13 = 1;
    }
    else {
      pauVar14 = (undefined1 (*) [16])(*pauVar11 + uVar8 * 8);
      if ((pauVar14 <= pauVar9) || (uVar13 = uVar8, pauVar9 + uVar8 <= pauVar11)) {
        uVar13 = uVar8 & 1;
        uVar16 = uVar8 & 0x7ffffffe;
        pauVar2 = pauVar9 + uVar8;
        do {
          pauVar14 = pauVar14 + -1;
          auVar18 = NEON_ext(*pauVar14,*pauVar14,8,1);
          uVar17 = auVar18._0_8_;
          bVar3 = auVar18[7];
          uVar19 = auVar18._8_8_;
          bVar4 = auVar18[0xf];
          bVar20 = bVar3 >> 2 & 0x10 | bVar3 >> 4 & 1 | bVar3 >> 1 & 0x40 | bVar3 >> 3 & 4;
          *(long *)(pauVar2[-2] + 8) =
               (long)(CONCAT18(bVar4 >> 2 & 0x10 | bVar4 >> 4 & 1 |
                               bVar4 >> 1 & 0x40 | bVar4 >> 3 & 4,
                               CONCAT17((byte)(uVar19 >> 0x36) & 0x10 | bVar4 & 1 |
                                        (byte)(uVar19 >> 0x35) & 0x40 | (byte)(uVar19 >> 0x37) & 4,
                                        CONCAT16((byte)(uVar19 >> 0x32) & 0x10 |
                                                 (byte)(uVar19 >> 0x34) & 1 |
                                                 (byte)(uVar19 >> 0x31) & 0x40 |
                                                 (byte)(uVar19 >> 0x33) & 4,
                                                 CONCAT15((byte)(uVar19 >> 0x2e) & 0x10 |
                                                          auVar18[0xe] & 1 |
                                                          (byte)(uVar19 >> 0x2d) & 0x40 |
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                          (byte)(uVar19 >> 0x2f) & 4,
                                                          CONCAT14((byte)(uVar19 >> 0x2a) & 0x10 |
                                                                   (byte)(uVar19 >> 0x2c) & 1 |
                                                                   (byte)(uVar19 >> 0x29) & 0x40 |
                                                                   (byte)(uVar19 >> 0x2b) & 4,
                                                                   CONCAT13((byte)(uVar19 >> 0x26) &
                                                                            0x10 | auVar18[0xd] & 1
                                                                            | (byte)(uVar19 >> 0x25)
                                                                              & 0x40 | (byte)(uVar19
                                                                                             >> 0x27
                                                  ) & 4,CONCAT12((byte)(uVar19 >> 0x22) & 0x10 |
                                                                 (byte)(uVar19 >> 0x24) & 1 |
                                                                 (byte)(uVar19 >> 0x21) & 0x40 |
                                                                 (byte)(uVar19 >> 0x23) & 4,
                                                                 CONCAT11((byte)(uVar19 >> 0x1e) &
                                                                          0x10 | auVar18[0xc] & 1 |
                                                                          (byte)(uVar19 >> 0x1d) &
                                                                          0x40 | (byte)(uVar19 >>
                                                                                       0x1f) & 4,
                                                                          bVar20)))))))) >> 8);
          pauVar2[-2][0] =
               (byte)((uVar19 & 0x3fffffffffffffc4) << 2) | auVar18[8] & 1 |
               (byte)((uVar19 & 0x1fffffffffffffe8) << 3) | auVar18[8] * '\x02' & 4;
          pauVar2[-2][1] =
               (byte)(uVar19 >> 2) & 0x10 | (byte)(uVar19 >> 4) & 1 |
               (byte)(uVar19 >> 1) & 0x40 | (byte)(uVar19 >> 3) & 4;
          pauVar2[-2][2] =
               (byte)(uVar19 >> 6) & 0x10 | auVar18[9] & 1 |
               (byte)(uVar19 >> 5) & 0x40 | (byte)(uVar19 >> 7) & 4;
          pauVar2[-2][3] =
               (byte)(uVar19 >> 10) & 0x10 | (byte)(uVar19 >> 0xc) & 1 |
               (byte)(uVar19 >> 9) & 0x40 | (byte)(uVar19 >> 0xb) & 4;
          pauVar2[-2][4] =
               (byte)(uVar19 >> 0xe) & 0x10 | auVar18[10] & 1 |
               (byte)(uVar19 >> 0xd) & 0x40 | (byte)(uVar19 >> 0xf) & 4;
          pauVar2[-2][5] =
               (byte)(uVar19 >> 0x12) & 0x10 | (byte)(uVar19 >> 0x14) & 1 |
// WM - origin: github.com/pengussy
               (byte)(uVar19 >> 0x11) & 0x40 | (byte)(uVar19 >> 0x13) & 4;
          pauVar2[-2][6] =
               (byte)(uVar19 >> 0x16) & 0x10 | auVar18[0xb] & 1 |
               (byte)(uVar19 >> 0x15) & 0x40 | (byte)(uVar19 >> 0x17) & 4;
          pauVar2[-2][7] =
               (byte)(uVar19 >> 0x1a) & 0x10 | (byte)(uVar19 >> 0x1c) & 1 |
               (byte)(uVar19 >> 0x19) & 0x40 | (byte)(uVar19 >> 0x1b) & 4;
          *(ulong *)(pauVar2[-1] + 8) =
               CONCAT17(bVar20,CONCAT16((byte)(uVar17 >> 0x36) & 0x10 | bVar3 & 1 |
                                        (byte)(uVar17 >> 0x35) & 0x40 | (byte)(uVar17 >> 0x37) & 4,
                                        CONCAT15((byte)(uVar17 >> 0x32) & 0x10 |
                                                 (byte)(uVar17 >> 0x34) & 1 |
                                                 (byte)(uVar17 >> 0x31) & 0x40 |
                                                 (byte)(uVar17 >> 0x33) & 4,
                                                 CONCAT14((byte)(uVar17 >> 0x2e) & 0x10 |
                                                          auVar18[6] & 1 |
                                                          (byte)(uVar17 >> 0x2d) & 0x40 |
                                                          (byte)(uVar17 >> 0x2f) & 4,
                                                          CONCAT13((byte)(uVar17 >> 0x2a) & 0x10 |
                                                                   (byte)(uVar17 >> 0x2c) & 1 |
                                                                   (byte)(uVar17 >> 0x29) & 0x40 |
                                                                   (byte)(uVar17 >> 0x2b) & 4,
                                                                   CONCAT12((byte)(uVar17 >> 0x26) &
/* wm:watermarked copy - do not remove */
                                                                            0x10 | auVar18[5] & 1 |
                                                                            (byte)(uVar17 >> 0x25) &
                                                                            0x40 | (byte)(uVar17 >>
                                                                                         0x27) & 4,
                                                                            CONCAT11((byte)(uVar17 
                                                  >> 0x22) & 0x10 | (byte)(uVar17 >> 0x24) & 1 |
                                                  (byte)(uVar17 >> 0x21) & 0x40 |
                                                  (byte)(uVar17 >> 0x23) & 4,
                                                  (byte)(uVar17 >> 0x1e) & 0x10 | auVar18[4] & 1 |
                                                  (byte)(uVar17 >> 0x1d) & 0x40 |
                                                  (byte)(uVar17 >> 0x1f) & 4)))))));
          pauVar2[-1][0] =
               (byte)((uVar17 & 0x3fffffffffffffc4) << 2) | auVar18[0] & 1 |
               (byte)((uVar17 & 0x1fffffffffffffe8) << 3) | auVar18[0] * '\x02' & 4;
          pauVar2[-1][1] =
               (byte)(uVar17 >> 2) & 0x10 | (byte)(uVar17 >> 4) & 1 |
               (byte)(uVar17 >> 1) & 0x40 | (byte)(uVar17 >> 3) & 4;
          pauVar2[-1][2] =
               (byte)(uVar17 >> 6) & 0x10 | auVar18[1] & 1 |
// WM - do not claim this as your own
               (byte)(uVar17 >> 5) & 0x40 | (byte)(uVar17 >> 7) & 4;
          pauVar2[-1][3] =
               (byte)(uVar17 >> 10) & 0x10 | (byte)(uVar17 >> 0xc) & 1 |
               (byte)(uVar17 >> 9) & 0x40 | (byte)(uVar17 >> 0xb) & 4;
          pauVar2[-1][4] =
               (byte)(uVar17 >> 0xe) & 0x10 | auVar18[2] & 1 |
               (byte)(uVar17 >> 0xd) & 0x40 | (byte)(uVar17 >> 0xf) & 4;
          pauVar2[-1][5] =
               (byte)(uVar17 >> 0x12) & 0x10 | (byte)(uVar17 >> 0x14) & 1 |
               (byte)(uVar17 >> 0x11) & 0x40 | (byte)(uVar17 >> 0x13) & 4;
          pauVar2[-1][6] =
               (byte)(uVar17 >> 0x16) & 0x10 | auVar18[3] & 1 |
               (byte)(uVar17 >> 0x15) & 0x40 | (byte)(uVar17 >> 0x17) & 4;
          pauVar2[-1][7] =
               (byte)(uVar17 >> 0x1a) & 0x10 | (byte)(uVar17 >> 0x1c) & 1 |
               (byte)(uVar17 >> 0x19) & 0x40 | (byte)(uVar17 >> 0x1b) & 4;
          uVar16 = uVar16 - 2;
          pauVar2 = pauVar2 + -2;
        } while (uVar16 != 0);
        if ((uVar8 & 0x7ffffffe) == uVar8) goto LAB_003f7020;
      }
    }
    uVar8 = uVar13 + 1;
    puVar10 = (ulong *)(pauVar9[uVar13 - 1] + 8);
    puVar12 = (ulong *)(*pauVar11 + uVar13 * 8);
    do {
      puVar12 = puVar12 + -1;
      uVar13 = *puVar12;
      uVar15 = (uint)(uVar13 >> 0x20);
      *puVar10 = uVar13 >> 0x1e & 0x10 | uVar13 >> 0x20 & 1 |
                 uVar13 >> 0x1d & 0x40 | uVar13 >> 0x1f & 4 |
                 (ulong)(uVar15 >> 0x1a & 0x10 | uVar15 >> 0x1c & 1 |
                        uVar15 >> 0x19 & 0x40 | uVar15 >> 0x1b & 4) << 0x38 |
/* WM - keep the notice, keep the source honest */
                 (ulong)(uVar15 >> 0x16 & 0x10 | (byte)(uVar13 >> 0x38) & 1 |
                        uVar15 >> 0x15 & 0x40 | uVar15 >> 0x17 & 4) << 0x30 |
                 (ulong)(uVar15 >> 0x12 & 0x10 | uVar15 >> 0x14 & 1 |
                        uVar15 >> 0x11 & 0x40 | uVar15 >> 0x13 & 4) << 0x28 |
                 (ulong)(uVar15 >> 0xe & 0x10 | (ushort)(uVar13 >> 0x30) & 1 |
                        uVar15 >> 0xd & 0x40 | uVar15 >> 0xf & 4) << 0x20 |
                 (uVar13 >> 0x2a & 0x10 | uVar13 >> 0x2c & 1 |
                 uVar13 >> 0x29 & 0x40 | uVar13 >> 0x2b & 4) << 0x18 |
                 (uVar13 >> 0x26 & 0x10 | uVar13 >> 0x28 & 1 |
                 uVar13 >> 0x25 & 0x40 | uVar13 >> 0x27 & 4) << 0x10 |
                 (uVar13 >> 0x22 & 0x10 | uVar13 >> 0x24 & 1 |
                 uVar13 >> 0x21 & 0x40 | uVar13 >> 0x23 & 4) << 8;
      uVar13 = *puVar12;
      uVar15 = (uint)uVar13;
      *(ulong *)*(undefined1 (*) [16])(puVar10 + -1) =
           (uVar13 >> 2 & 1) << 4 | (uVar13 >> 3 & 1) << 6 | uVar13 & 1 | (uVar13 >> 1 & 1) << 2 |
           (ulong)((uint)(uVar13 >> 0x1a) & 0x10 | uVar15 >> 0x1c & 1 |
                   ((uint)(uVar13 >> 0x1f) & 1) << 6 | (uint)(uVar13 >> 0x1b) & 4) << 0x38 |
           (ulong)(uVar15 >> 0x16 & 0x10 | uVar15 >> 0x18 & 1 |
                  uVar15 >> 0x15 & 0x40 | uVar15 >> 0x17 & 4) << 0x30 |
           (ulong)(uVar15 >> 0x12 & 0x10 | uVar15 >> 0x14 & 1 |
                  uVar15 >> 0x11 & 0x40 | uVar15 >> 0x13 & 4) << 0x28 |
           (ulong)(uVar15 >> 0xe & 0x10 | uVar15 >> 0x10 & 1 |
                  uVar15 >> 0xd & 0x40 | uVar15 >> 0xf & 4) << 0x20 |
           (uVar13 >> 10 & 0x10 | uVar13 >> 0xc & 1 | uVar13 >> 9 & 0x40 | uVar13 >> 0xb & 4) <<
           0x18 | (uVar13 >> 6 & 0x10 | uVar13 >> 8 & 1 | uVar13 >> 5 & 0x40 | uVar13 >> 7 & 4) <<
                  0x10 |
           (uVar13 >> 2 & 0x10 | uVar13 >> 4 & 1 | uVar13 >> 1 & 0x40 | uVar13 >> 3 & 4) << 8;
      uVar8 = uVar8 - 1;
      puVar10 = puVar10 + -2;
    } while (1 < uVar8);
  }
LAB_003f7020:
  *(uint *)(puVar5 + 1) = uVar1 << 1;
  func_0x019e8c64(puVar5);
/* more drops soon - github.com/pengussy - github.com/pengussy */
  uVar7 = func_0x003f5aac(param_1,puVar5,param_3);
LAB_003f7044:
  func_0x003f19bc(param_4);
  return uVar7;
}

