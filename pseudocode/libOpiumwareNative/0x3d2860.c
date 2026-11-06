/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3d2860:16f592a466
 */

void FUN_003d2860(ulong *param_1,ulong *param_2,ulong param_3,long param_4,ulong *param_5,
                 int param_6)

{
  ulong *puVar2;
  ulong *puVar1;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 *extraout_x1_03;
  undefined8 *extraout_x1_04;
  undefined8 *extraout_x1_05;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong *puVar11;
  undefined1 *extraout_x14;
  undefined1 *extraout_x14_00;
  undefined1 *extraout_x14_01;
  undefined1 *extraout_x14_02;
  undefined1 *extraout_x14_03;
  undefined1 *extraout_x14_04;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  undefined1 *extraout_x14_05;
  undefined1 *extraout_x14_06;
  undefined1 *puVar12;
  undefined8 *extraout_x17;
  ulong uVar13;
  ulong uVar14;
  undefined8 extraout_d0;
  undefined8 uVar15;
  undefined8 extraout_d0_00;
  undefined8 uVar16;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_var;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 extraout_var_00;
  undefined8 uVar19;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
/* WM - no support for modified copies */
  undefined8 uVar29;
  undefined1 in_q4 [16];
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined1 in_q7 [16];
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined8 unaff_d15;
  byte bVar47;
  undefined8 in_register_000051e8;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  ulong uVar48;
  undefined1 auVar49 [16];
  byte abStack_e0 [128];
  ulong in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  
  uVar13 = in_q7._8_8_;
  uVar14 = in_q7._0_8_;
  uVar19 = in_q4._8_8_;
  uVar16 = in_q4._0_8_;
  if (0x7f < param_3) {
    param_3 = param_3 >> 4;
    lVar10 = (ulong)*(uint *)(param_4 + 0xf0) * -0x80;
    puVar1 = (ulong *)(abStack_e0 + lVar10 + 0x110);
    auVar49 = func_0x003d27c0();
    uVar15 = *(undefined8 *)(abStack_e0 + lVar10 + 0x118);
    uVar21 = *puVar1;
    extraout_x17[1] = in_register_000051e8;
    *extraout_x17 = unaff_d15;
    uVar34 = CONCAT17((byte)(uVar21 >> 0x38) ^ (byte)(uVar14 >> 0x38),
                      CONCAT16((byte)(uVar21 >> 0x30) ^ (byte)(uVar14 >> 0x30),
                               CONCAT15((byte)(uVar21 >> 0x28) ^ (byte)(uVar14 >> 0x28),
                                        CONCAT14((byte)(uVar21 >> 0x20) ^ (byte)(uVar14 >> 0x20),
                                                 CONCAT13((byte)(uVar21 >> 0x18) ^
                                                          (byte)(uVar14 >> 0x18),
                                                          CONCAT12((byte)(uVar21 >> 0x10) ^
                                                                   (byte)(uVar14 >> 0x10),
                                                                   CONCAT11((byte)(uVar21 >> 8) ^
/* WM - stripping the watermark breaks the license */
                                                                            (byte)(uVar14 >> 8),
                                                                            (byte)uVar21 ^
                                                                            (byte)uVar14)))))));
    uVar35 = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(uVar13 >> 0x38),
                      CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(uVar13 >> 0x30),
                               CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(uVar13 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                 (byte)(uVar13 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                          (byte)(uVar13 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                                   (byte)(uVar13 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar15 >>
                                                                                  8) ^
                                                                            (byte)(uVar13 >> 8),
                                                                            (byte)uVar15 ^
                                                                            (byte)uVar13)))))));
    *(ulong *)(abStack_e0 + lVar10 + 0x118) = uVar35;
    *puVar1 = uVar34;
    uVar48 = param_5[1];
    uVar21 = *param_5;
    puVar12 = extraout_x14;
    while( true ) {
      puVar3 = auVar49._0_8_;
      uVar18 = param_3 - 8;
      bVar40 = (byte)uVar21;
/* watermarked copy - do not remove - github.com/pengussy */
      bVar41 = (byte)(uVar21 >> 8);
      bVar42 = (byte)(uVar21 >> 0x10);
      bVar43 = (byte)(uVar21 >> 0x18);
      bVar44 = (byte)(uVar21 >> 0x20);
      bVar45 = (byte)(uVar21 >> 0x28);
      bVar46 = (byte)(uVar21 >> 0x30);
      bVar47 = (byte)(uVar21 >> 0x38);
      if ((long)uVar18 < 0) break;
      uVar22 = puVar3[3];
      uVar21 = puVar3[2];
      uVar25 = puVar3[5];
      uVar24 = puVar3[4];
      uVar27 = puVar3[7];
      uVar26 = puVar3[6];
      uVar30 = puVar3[9];
      uVar28 = puVar3[8];
      uVar33 = puVar3[0xb];
      uVar32 = puVar3[10];
      uVar35 = puVar3[0xd];
      uVar34 = puVar3[0xc];
      uVar13 = puVar3[0xf];
      uVar14 = puVar3[0xe];
      puVar4 = (undefined8 *)FUN_003d1b20(*puVar3,puVar3);
      uVar19 = puVar4[1];
      uVar16 = *puVar4;
      extraout_x1[1] =
           CONCAT17((byte)((ulong)extraout_var >> 0x38) ^ (byte)(uVar48 >> 0x38),
                    CONCAT16((byte)((ulong)extraout_var >> 0x30) ^ (byte)(uVar48 >> 0x30),
                             CONCAT15((byte)((ulong)extraout_var >> 0x28) ^ (byte)(uVar48 >> 0x28),
                                      CONCAT14((byte)((ulong)extraout_var >> 0x20) ^
                                               (byte)(uVar48 >> 0x20),
                                               CONCAT13((byte)((ulong)extraout_var >> 0x18) ^
                                                        (byte)(uVar48 >> 0x18),
/* WM - donate: donate/README.md */
                                                        CONCAT12((byte)((ulong)extraout_var >> 0x10)
                                                                 ^ (byte)(uVar48 >> 0x10),
                                                                 CONCAT11((byte)((ulong)extraout_var
                                                                                >> 8) ^
                                                                          (byte)(uVar48 >> 8),
                                                                          (byte)extraout_var ^
                                                                          (byte)uVar48)))))));
      *extraout_x1 = CONCAT17((byte)((ulong)extraout_d0 >> 0x38) ^ bVar47,
                              CONCAT16((byte)((ulong)extraout_d0 >> 0x30) ^ bVar46,
                                       CONCAT15((byte)((ulong)extraout_d0 >> 0x28) ^ bVar45,
                                                CONCAT14((byte)((ulong)extraout_d0 >> 0x20) ^ bVar44
                                                         ,CONCAT13((byte)((ulong)extraout_d0 >> 0x18
                                                                         ) ^ bVar43,
                                                                   CONCAT12((byte)((ulong)
                                                  extraout_d0 >> 0x10) ^ bVar42,
                                                  CONCAT11((byte)((ulong)extraout_d0 >> 8) ^ bVar41,
                                                           (byte)extraout_d0 ^ bVar40)))))));
      uVar17 = puVar4[3];
      uVar15 = puVar4[2];
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      extraout_x1[3] =
           CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                    CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                             CONCAT15((byte)(uVar22 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28),
                                      CONCAT14((byte)(uVar22 >> 0x20) ^
                                               (byte)((ulong)uVar19 >> 0x20),
                                               CONCAT13((byte)(uVar22 >> 0x18) ^
                                                        (byte)((ulong)uVar19 >> 0x18),
                                                        CONCAT12((byte)(uVar22 >> 0x10) ^
                                                                 (byte)((ulong)uVar19 >> 0x10),
                                                                 CONCAT11((byte)(uVar22 >> 8) ^
                                                                          (byte)((ulong)uVar19 >> 8)
                                                                          ,(byte)uVar22 ^
                                                                           (byte)uVar19)))))));
      extraout_x1[2] =
           CONCAT17((byte)(uVar21 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                    CONCAT16((byte)(uVar21 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                             CONCAT15((byte)(uVar21 >> 0x28) ^ (byte)((ulong)uVar16 >> 0x28),
                                      CONCAT14((byte)(uVar21 >> 0x20) ^
                                               (byte)((ulong)uVar16 >> 0x20),
                                               CONCAT13((byte)(uVar21 >> 0x18) ^
                                                        (byte)((ulong)uVar16 >> 0x18),
                                                        CONCAT12((byte)(uVar21 >> 0x10) ^
                                                                 (byte)((ulong)uVar16 >> 0x10),
                                                                 CONCAT11((byte)(uVar21 >> 8) ^
                                                                          (byte)((ulong)uVar16 >> 8)
                                                                          ,(byte)uVar21 ^
                                                                           (byte)uVar16)))))));
      uVar23 = puVar4[5];
      uVar20 = puVar4[4];
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      uVar31 = puVar4[7];
      uVar29 = puVar4[6];
      uVar19 = puVar4[9];
      uVar16 = puVar4[8];
      extraout_x1[5] =
           CONCAT17((byte)(uVar35 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)(uVar35 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)(uVar35 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)(uVar35 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)(uVar35 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)(uVar35 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)(uVar35 >> 8) ^
                                                                          (byte)((ulong)uVar17 >> 8)
                                                                          ,(byte)uVar35 ^
                                                                           (byte)uVar17)))))));
      extraout_x1[4] =
           CONCAT17((byte)(uVar34 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                    CONCAT16((byte)(uVar34 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                             CONCAT15((byte)(uVar34 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28),
                                      CONCAT14((byte)(uVar34 >> 0x20) ^
                                               (byte)((ulong)uVar15 >> 0x20),
                                               CONCAT13((byte)(uVar34 >> 0x18) ^
                                                        (byte)((ulong)uVar15 >> 0x18),
                                                        CONCAT12((byte)(uVar34 >> 0x10) ^
                                                                 (byte)((ulong)uVar15 >> 0x10),
                                                                 CONCAT11((byte)(uVar34 >> 8) ^
                                                                          (byte)((ulong)uVar15 >> 8)
// keep the notice, keep the source honest
                                                                          ,(byte)uVar34 ^
                                                                           (byte)uVar15)))))));
      extraout_x1[7] =
           CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                    CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                             CONCAT15((byte)(uVar30 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28),
                                      CONCAT14((byte)(uVar30 >> 0x20) ^
                                               (byte)((ulong)uVar23 >> 0x20),
                                               CONCAT13((byte)(uVar30 >> 0x18) ^
                                                        (byte)((ulong)uVar23 >> 0x18),
                                                        CONCAT12((byte)(uVar30 >> 0x10) ^
                                                                 (byte)((ulong)uVar23 >> 0x10),
                                                                 CONCAT11((byte)(uVar30 >> 8) ^
                                                                          (byte)((ulong)uVar23 >> 8)
                                                                          ,(byte)uVar30 ^
                                                                           (byte)uVar23)))))));
      extraout_x1[6] =
           CONCAT17((byte)(uVar28 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                    CONCAT16((byte)(uVar28 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                             CONCAT15((byte)(uVar28 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28),
                                      CONCAT14((byte)(uVar28 >> 0x20) ^
// origin: github.com/pengussy
                                               (byte)((ulong)uVar20 >> 0x20),
                                               CONCAT13((byte)(uVar28 >> 0x18) ^
                                                        (byte)((ulong)uVar20 >> 0x18),
                                                        CONCAT12((byte)(uVar28 >> 0x10) ^
                                                                 (byte)((ulong)uVar20 >> 0x10),
                                                                 CONCAT11((byte)(uVar28 >> 8) ^
                                                                          (byte)((ulong)uVar20 >> 8)
                                                                          ,(byte)uVar28 ^
                                                                           (byte)uVar20)))))));
      uVar17 = puVar4[0xb];
      uVar15 = puVar4[10];
      extraout_x1[9] =
           CONCAT17((byte)(uVar25 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                    CONCAT16((byte)(uVar25 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                             CONCAT15((byte)(uVar25 >> 0x28) ^ (byte)((ulong)uVar31 >> 0x28),
                                      CONCAT14((byte)(uVar25 >> 0x20) ^
                                               (byte)((ulong)uVar31 >> 0x20),
                                               CONCAT13((byte)(uVar25 >> 0x18) ^
                                                        (byte)((ulong)uVar31 >> 0x18),
                                                        CONCAT12((byte)(uVar25 >> 0x10) ^
                                                                 (byte)((ulong)uVar31 >> 0x10),
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                                 CONCAT11((byte)(uVar25 >> 8) ^
                                                                          (byte)((ulong)uVar31 >> 8)
                                                                          ,(byte)uVar25 ^
                                                                           (byte)uVar31)))))));
      extraout_x1[8] =
           CONCAT17((byte)(uVar24 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                    CONCAT16((byte)(uVar24 >> 0x30) ^ (byte)((ulong)uVar29 >> 0x30),
                             CONCAT15((byte)(uVar24 >> 0x28) ^ (byte)((ulong)uVar29 >> 0x28),
                                      CONCAT14((byte)(uVar24 >> 0x20) ^
                                               (byte)((ulong)uVar29 >> 0x20),
                                               CONCAT13((byte)(uVar24 >> 0x18) ^
                                                        (byte)((ulong)uVar29 >> 0x18),
                                                        CONCAT12((byte)(uVar24 >> 0x10) ^
                                                                 (byte)((ulong)uVar29 >> 0x10),
                                                                 CONCAT11((byte)(uVar24 >> 8) ^
                                                                          (byte)((ulong)uVar29 >> 8)
                                                                          ,(byte)uVar24 ^
                                                                           (byte)uVar29)))))));
      uVar23 = puVar4[0xd];
      uVar20 = puVar4[0xc];
      uVar48 = puVar4[0xf];
      uVar21 = puVar4[0xe];
      extraout_x1[0xb] =
           CONCAT17((byte)(uVar13 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                    CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                             CONCAT15((byte)(uVar13 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28),
                                      CONCAT14((byte)(uVar13 >> 0x20) ^
                                               (byte)((ulong)uVar19 >> 0x20),
                                               CONCAT13((byte)(uVar13 >> 0x18) ^
                                                        (byte)((ulong)uVar19 >> 0x18),
                                                        CONCAT12((byte)(uVar13 >> 0x10) ^
                                                                 (byte)((ulong)uVar19 >> 0x10),
// reversing this took months of machine time
                                                                 CONCAT11((byte)(uVar13 >> 8) ^
                                                                          (byte)((ulong)uVar19 >> 8)
                                                                          ,(byte)uVar13 ^
                                                                           (byte)uVar19)))))));
      extraout_x1[10] =
           CONCAT17((byte)(uVar14 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                    CONCAT16((byte)(uVar14 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                             CONCAT15((byte)(uVar14 >> 0x28) ^ (byte)((ulong)uVar16 >> 0x28),
                                      CONCAT14((byte)(uVar14 >> 0x20) ^
                                               (byte)((ulong)uVar16 >> 0x20),
                                               CONCAT13((byte)(uVar14 >> 0x18) ^
                                                        (byte)((ulong)uVar16 >> 0x18),
                                                        CONCAT12((byte)(uVar14 >> 0x10) ^
                                                                 (byte)((ulong)uVar16 >> 0x10),
                                                                 CONCAT11((byte)(uVar14 >> 8) ^
                                                                          (byte)((ulong)uVar16 >> 8)
                                                                          ,(byte)uVar14 ^
                                                                           (byte)uVar16)))))));
      extraout_x1[0xd] =
           CONCAT17((byte)(uVar27 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)(uVar27 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
// thanks for reading - discord.gg/sdkhDjTex
                             CONCAT15((byte)(uVar27 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)(uVar27 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)(uVar27 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)(uVar27 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)(uVar27 >> 8) ^
                                                                          (byte)((ulong)uVar17 >> 8)
                                                                          ,(byte)uVar27 ^
                                                                           (byte)uVar17)))))));
      extraout_x1[0xc] =
           CONCAT17((byte)(uVar26 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                    CONCAT16((byte)(uVar26 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                             CONCAT15((byte)(uVar26 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28),
                                      CONCAT14((byte)(uVar26 >> 0x20) ^
                                               (byte)((ulong)uVar15 >> 0x20),
                                               CONCAT13((byte)(uVar26 >> 0x18) ^
                                                        (byte)((ulong)uVar15 >> 0x18),
                                                        CONCAT12((byte)(uVar26 >> 0x10) ^
                                                                 (byte)((ulong)uVar15 >> 0x10),
                                                                 CONCAT11((byte)(uVar26 >> 8) ^
                                                                          (byte)((ulong)uVar15 >> 8)
                                                                          ,(byte)uVar26 ^
                                                                           (byte)uVar15)))))));
      auVar49._8_8_ = extraout_x1 + 0x10;
/* wm:unlicensed copy if this notice is missing */
      auVar49._0_8_ = puVar4 + 0x10;
      extraout_x1[0xf] =
           CONCAT17((byte)(uVar33 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                    CONCAT16((byte)(uVar33 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                             CONCAT15((byte)(uVar33 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28),
                                      CONCAT14((byte)(uVar33 >> 0x20) ^
                                               (byte)((ulong)uVar23 >> 0x20),
                                               CONCAT13((byte)(uVar33 >> 0x18) ^
                                                        (byte)((ulong)uVar23 >> 0x18),
                                                        CONCAT12((byte)(uVar33 >> 0x10) ^
                                                                 (byte)((ulong)uVar23 >> 0x10),
                                                                 CONCAT11((byte)(uVar33 >> 8) ^
                                                                          (byte)((ulong)uVar23 >> 8)
                                                                          ,(byte)uVar33 ^
                                                                           (byte)uVar23)))))));
      extraout_x1[0xe] =
           CONCAT17((byte)(uVar32 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                    CONCAT16((byte)(uVar32 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                             CONCAT15((byte)(uVar32 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28),
                                      CONCAT14((byte)(uVar32 >> 0x20) ^
// WM - do not claim this as your own
                                               (byte)((ulong)uVar20 >> 0x20),
                                               CONCAT13((byte)(uVar32 >> 0x18) ^
                                                        (byte)((ulong)uVar20 >> 0x18),
                                                        CONCAT12((byte)(uVar32 >> 0x10) ^
                                                                 (byte)((ulong)uVar20 >> 0x10),
                                                                 CONCAT11((byte)(uVar32 >> 8) ^
                                                                          (byte)((ulong)uVar20 >> 8)
                                                                          ,(byte)uVar32 ^
                                                                           (byte)uVar20)))))));
      param_3 = uVar18;
      puVar12 = extraout_x14_00;
    }
    uVar18 = uVar48;
    if (param_3 != 0) {
      uVar18 = puVar3[1];
      uVar21 = *puVar3;
      if (param_3 < 2) {
        *(long *)(abStack_e0 + lVar10 + 0xf0) = auVar49._8_8_;
        *(ulong **)(abStack_e0 + lVar10 + 0xf8) = param_5;
        *(undefined1 **)(abStack_e0 + lVar10 + 0x100) = puVar12;
// if you paid for this, you were scammed
        func_0x003ce294(puVar3,auVar49._8_8_,param_4);
        puVar12 = *(undefined1 **)(abStack_e0 + lVar10 + 0x100);
        puVar1 = (ulong *)(abStack_e0 + lVar10 + 0x110);
        puVar4 = *(undefined8 **)(abStack_e0 + lVar10 + 0xf0);
        param_5 = *(ulong **)(abStack_e0 + lVar10 + 0xf8);
        uVar19 = puVar4[1];
        uVar16 = *puVar4;
        puVar4[1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)(uVar48 >> 0x38),
                             CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)(uVar48 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                               (byte)(uVar48 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                        (byte)(uVar48 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                 (byte)(uVar48 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar19 >>
                                                                                0x10) ^
                                                                          (byte)(uVar48 >> 0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)(uVar48 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar48)))))));
        *puVar4 = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ bVar47,
                           CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ bVar46,
                                    CONCAT15((byte)((ulong)uVar16 >> 0x28) ^ bVar45,
                                             CONCAT14((byte)((ulong)uVar16 >> 0x20) ^ bVar44,
                                                      CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
// WM - thanks for reading - discord.gg/sdkhDjTex
                                                               bVar43,CONCAT12((byte)((ulong)uVar16
                                                                                     >> 0x10) ^
                                                                               bVar42,CONCAT11((byte
                                                  )((ulong)uVar16 >> 8) ^ bVar41,
                                                  (byte)uVar16 ^ bVar40)))))));
      }
      else {
        uVar24 = puVar3[3];
        uVar22 = puVar3[2];
        if (param_3 == 2) {
          puVar4 = (undefined8 *)FUN_003d1b20(puVar3);
          uVar19 = puVar4[1];
          uVar16 = *puVar4;
          uVar18 = puVar4[3];
          uVar21 = puVar4[2];
          extraout_x1_05[1] =
               CONCAT17((byte)((ulong)extraout_var_05 >> 0x38) ^ (byte)(uVar48 >> 0x38),
                        CONCAT16((byte)((ulong)extraout_var_05 >> 0x30) ^ (byte)(uVar48 >> 0x30),
                                 CONCAT15((byte)((ulong)extraout_var_05 >> 0x28) ^
                                          (byte)(uVar48 >> 0x28),
                                          CONCAT14((byte)((ulong)extraout_var_05 >> 0x20) ^
                                                   (byte)(uVar48 >> 0x20),
                                                   CONCAT13((byte)((ulong)extraout_var_05 >> 0x18) ^
                                                            (byte)(uVar48 >> 0x18),
                                                            CONCAT12((byte)((ulong)extraout_var_05
                                                                           >> 0x10) ^
                                                                     (byte)(uVar48 >> 0x10),
                                                                     CONCAT11((byte)((ulong)
                                                  extraout_var_05 >> 8) ^ (byte)(uVar48 >> 8),
                                                  (byte)extraout_var_05 ^ (byte)uVar48)))))));
          *extraout_x1_05 =
               CONCAT17((byte)((ulong)extraout_d0_05 >> 0x38) ^ bVar47,
                        CONCAT16((byte)((ulong)extraout_d0_05 >> 0x30) ^ bVar46,
                                 CONCAT15((byte)((ulong)extraout_d0_05 >> 0x28) ^ bVar45,
                                          CONCAT14((byte)((ulong)extraout_d0_05 >> 0x20) ^ bVar44,
                                                   CONCAT13((byte)((ulong)extraout_d0_05 >> 0x18) ^
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                                                            bVar43,CONCAT12((byte)((ulong)
                                                  extraout_d0_05 >> 0x10) ^ bVar42,
                                                  CONCAT11((byte)((ulong)extraout_d0_05 >> 8) ^
                                                           bVar41,(byte)extraout_d0_05 ^ bVar40)))))
                                ));
          extraout_x1_05[3] =
               CONCAT17((byte)(uVar24 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                        CONCAT16((byte)(uVar24 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                 CONCAT15((byte)(uVar24 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28),
                                          CONCAT14((byte)(uVar24 >> 0x20) ^
                                                   (byte)((ulong)uVar19 >> 0x20),
                                                   CONCAT13((byte)(uVar24 >> 0x18) ^
                                                            (byte)((ulong)uVar19 >> 0x18),
                                                            CONCAT12((byte)(uVar24 >> 0x10) ^
                                                                     (byte)((ulong)uVar19 >> 0x10),
                                                                     CONCAT11((byte)(uVar24 >> 8) ^
                                                                              (byte)((ulong)uVar19
                                                                                    >> 8),
// WM - stripping the watermark breaks the license
                                                                              (byte)uVar24 ^
                                                                              (byte)uVar19)))))));
          extraout_x1_05[2] =
               CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                        CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                                 CONCAT15((byte)(uVar22 >> 0x28) ^ (byte)((ulong)uVar16 >> 0x28),
                                          CONCAT14((byte)(uVar22 >> 0x20) ^
                                                   (byte)((ulong)uVar16 >> 0x20),
                                                   CONCAT13((byte)(uVar22 >> 0x18) ^
                                                            (byte)((ulong)uVar16 >> 0x18),
                                                            CONCAT12((byte)(uVar22 >> 0x10) ^
                                                                     (byte)((ulong)uVar16 >> 0x10),
                                                                     CONCAT11((byte)(uVar22 >> 8) ^
                                                                              (byte)((ulong)uVar16
                                                                                    >> 8),
                                                                              (byte)uVar22 ^
                                                                              (byte)uVar16)))))));
          puVar12 = extraout_x14_06;
        }
        else {
          uVar26 = puVar3[5];
          uVar25 = puVar3[4];
          if (param_3 < 4) {
            puVar4 = (undefined8 *)FUN_003d1b20(puVar3);
            uVar19 = puVar4[1];
            uVar16 = *puVar4;
            uVar17 = puVar4[3];
            uVar15 = puVar4[2];
            uVar18 = puVar4[5];
            uVar21 = puVar4[4];
            extraout_x1_04[1] =
                 CONCAT17((byte)((ulong)extraout_var_04 >> 0x38) ^ (byte)(uVar48 >> 0x38),
                          CONCAT16((byte)((ulong)extraout_var_04 >> 0x30) ^ (byte)(uVar48 >> 0x30),
                                   CONCAT15((byte)((ulong)extraout_var_04 >> 0x28) ^
                                            (byte)(uVar48 >> 0x28),
                                            CONCAT14((byte)((ulong)extraout_var_04 >> 0x20) ^
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                                                     (byte)(uVar48 >> 0x20),
                                                     CONCAT13((byte)((ulong)extraout_var_04 >> 0x18)
                                                              ^ (byte)(uVar48 >> 0x18),
                                                              CONCAT12((byte)((ulong)extraout_var_04
                                                                             >> 0x10) ^
                                                                       (byte)(uVar48 >> 0x10),
                                                                       CONCAT11((byte)((ulong)
                                                  extraout_var_04 >> 8) ^ (byte)(uVar48 >> 8),
                                                  (byte)extraout_var_04 ^ (byte)uVar48)))))));
            *extraout_x1_04 =
                 CONCAT17((byte)((ulong)extraout_d0_04 >> 0x38) ^ bVar47,
                          CONCAT16((byte)((ulong)extraout_d0_04 >> 0x30) ^ bVar46,
                                   CONCAT15((byte)((ulong)extraout_d0_04 >> 0x28) ^ bVar45,
                                            CONCAT14((byte)((ulong)extraout_d0_04 >> 0x20) ^ bVar44,
                                                     CONCAT13((byte)((ulong)extraout_d0_04 >> 0x18)
                                                              ^ bVar43,CONCAT12((byte)((ulong)
                                                  extraout_d0_04 >> 0x10) ^ bVar42,
                                                  CONCAT11((byte)((ulong)extraout_d0_04 >> 8) ^
                                                           bVar41,(byte)extraout_d0_04 ^ bVar40)))))
                                  ));
            extraout_x1_04[3] =
                 CONCAT17((byte)(uVar24 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                          CONCAT16((byte)(uVar24 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                   CONCAT15((byte)(uVar24 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28),
                                            CONCAT14((byte)(uVar24 >> 0x20) ^
                                                     (byte)((ulong)uVar19 >> 0x20),
                                                     CONCAT13((byte)(uVar24 >> 0x18) ^
                                                              (byte)((ulong)uVar19 >> 0x18),
                                                              CONCAT12((byte)(uVar24 >> 0x10) ^
                                                                       (byte)((ulong)uVar19 >> 0x10)
                                                                       ,CONCAT11((byte)(uVar24 >> 8)
                                                                                 ^ (byte)((ulong)
                                                  uVar19 >> 8),(byte)uVar24 ^ (byte)uVar19)))))));
            extraout_x1_04[2] =
                 CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                          CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
/* wm:proprietary - see LICENSE - do not sell */
                                   CONCAT15((byte)(uVar22 >> 0x28) ^ (byte)((ulong)uVar16 >> 0x28),
                                            CONCAT14((byte)(uVar22 >> 0x20) ^
                                                     (byte)((ulong)uVar16 >> 0x20),
                                                     CONCAT13((byte)(uVar22 >> 0x18) ^
                                                              (byte)((ulong)uVar16 >> 0x18),
                                                              CONCAT12((byte)(uVar22 >> 0x10) ^
                                                                       (byte)((ulong)uVar16 >> 0x10)
                                                                       ,CONCAT11((byte)(uVar22 >> 8)
                                                                                 ^ (byte)((ulong)
                                                  uVar16 >> 8),(byte)uVar22 ^ (byte)uVar16)))))));
            extraout_x1_04[5] =
                 CONCAT17((byte)(uVar35 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                          CONCAT16((byte)(uVar35 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                   CONCAT15((byte)(uVar35 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                            CONCAT14((byte)(uVar35 >> 0x20) ^
                                                     (byte)((ulong)uVar17 >> 0x20),
                                                     CONCAT13((byte)(uVar35 >> 0x18) ^
                                                              (byte)((ulong)uVar17 >> 0x18),
                                                              CONCAT12((byte)(uVar35 >> 0x10) ^
/* no support for modified copies */
                                                                       (byte)((ulong)uVar17 >> 0x10)
                                                                       ,CONCAT11((byte)(uVar35 >> 8)
                                                                                 ^ (byte)((ulong)
                                                  uVar17 >> 8),(byte)uVar35 ^ (byte)uVar17)))))));
            extraout_x1_04[4] =
                 CONCAT17((byte)(uVar34 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                          CONCAT16((byte)(uVar34 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                   CONCAT15((byte)(uVar34 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28),
                                            CONCAT14((byte)(uVar34 >> 0x20) ^
                                                     (byte)((ulong)uVar15 >> 0x20),
                                                     CONCAT13((byte)(uVar34 >> 0x18) ^
                                                              (byte)((ulong)uVar15 >> 0x18),
                                                              CONCAT12((byte)(uVar34 >> 0x10) ^
                                                                       (byte)((ulong)uVar15 >> 0x10)
                                                                       ,CONCAT11((byte)(uVar34 >> 8)
                                                                                 ^ (byte)((ulong)
                                                  uVar15 >> 8),(byte)uVar34 ^ (byte)uVar15)))))));
            puVar12 = extraout_x14_05;
          }
/*  no support for modified copies  */
          else {
            uVar28 = puVar3[7];
            uVar27 = puVar3[6];
            if (param_3 == 4) {
              puVar4 = (undefined8 *)FUN_003d1b20(puVar3);
              uVar17 = puVar4[1];
              uVar15 = *puVar4;
              uVar23 = puVar4[3];
              uVar20 = puVar4[2];
              uVar31 = puVar4[5];
              uVar29 = puVar4[4];
              extraout_x1_03[1] =
                   CONCAT17((byte)((ulong)extraout_var_03 >> 0x38) ^ (byte)(uVar48 >> 0x38),
                            CONCAT16((byte)((ulong)extraout_var_03 >> 0x30) ^ (byte)(uVar48 >> 0x30)
                                     ,CONCAT15((byte)((ulong)extraout_var_03 >> 0x28) ^
                                               (byte)(uVar48 >> 0x28),
                                               CONCAT14((byte)((ulong)extraout_var_03 >> 0x20) ^
                                                        (byte)(uVar48 >> 0x20),
                                                        CONCAT13((byte)((ulong)extraout_var_03 >>
                                                                       0x18) ^
                                                                 (byte)(uVar48 >> 0x18),
                                                                 CONCAT12((byte)((ulong)
                                                  extraout_var_03 >> 0x10) ^ (byte)(uVar48 >> 0x10),
                                                  CONCAT11((byte)((ulong)extraout_var_03 >> 8) ^
                                                           (byte)(uVar48 >> 8),
                                                           (byte)extraout_var_03 ^ (byte)uVar48)))))
                                    ));
              *extraout_x1_03 =
                   CONCAT17((byte)((ulong)extraout_d0_03 >> 0x38) ^ bVar47,
                            CONCAT16((byte)((ulong)extraout_d0_03 >> 0x30) ^ bVar46,
                                     CONCAT15((byte)((ulong)extraout_d0_03 >> 0x28) ^ bVar45,
                                              CONCAT14((byte)((ulong)extraout_d0_03 >> 0x20) ^
                                                       bVar44,CONCAT13((byte)((ulong)extraout_d0_03
                                                                             >> 0x18) ^ bVar43,
                                                                       CONCAT12((byte)((ulong)
                                                  extraout_d0_03 >> 0x10) ^ bVar42,
                                                  CONCAT11((byte)((ulong)extraout_d0_03 >> 8) ^
                                                           bVar41,(byte)extraout_d0_03 ^ bVar40)))))
/* chat: discord.gg/sdkhDjTex */
                                    ));
              uVar18 = puVar4[7];
              uVar21 = puVar4[6];
              extraout_x1_03[3] =
                   CONCAT17((byte)(uVar24 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                            CONCAT16((byte)(uVar24 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                     CONCAT15((byte)(uVar24 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28)
                                              ,CONCAT14((byte)(uVar24 >> 0x20) ^
                                                        (byte)((ulong)uVar17 >> 0x20),
                                                        CONCAT13((byte)(uVar24 >> 0x18) ^
                                                                 (byte)((ulong)uVar17 >> 0x18),
                                                                 CONCAT12((byte)(uVar24 >> 0x10) ^
                                                                          (byte)((ulong)uVar17 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(uVar24 >>
                                                                                         8) ^
                                                                                   (byte)((ulong)
                                                  uVar17 >> 8),(byte)uVar24 ^ (byte)uVar17)))))));
              extraout_x1_03[2] =
                   CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                            CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                     CONCAT15((byte)(uVar22 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28)
                                              ,CONCAT14((byte)(uVar22 >> 0x20) ^
                                                        (byte)((ulong)uVar15 >> 0x20),
                                                        CONCAT13((byte)(uVar22 >> 0x18) ^
                                                                 (byte)((ulong)uVar15 >> 0x18),
                                                                 CONCAT12((byte)(uVar22 >> 0x10) ^
                                                                          (byte)((ulong)uVar15 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(uVar22 >>
                                                                                         8) ^
                                                                                   (byte)((ulong)
// more drops soon - github.com/pengussy
                                                  uVar15 >> 8),(byte)uVar22 ^ (byte)uVar15)))))));
              extraout_x1_03[5] =
                   CONCAT17((byte)(uVar35 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                            CONCAT16((byte)(uVar35 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                                     CONCAT15((byte)(uVar35 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28)
                                              ,CONCAT14((byte)(uVar35 >> 0x20) ^
                                                        (byte)((ulong)uVar23 >> 0x20),
                                                        CONCAT13((byte)(uVar35 >> 0x18) ^
                                                                 (byte)((ulong)uVar23 >> 0x18),
                                                                 CONCAT12((byte)(uVar35 >> 0x10) ^
                                                                          (byte)((ulong)uVar23 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(uVar35 >>
                                                                                         8) ^
                                                                                   (byte)((ulong)
                                                  uVar23 >> 8),(byte)uVar35 ^ (byte)uVar23)))))));
              extraout_x1_03[4] =
                   CONCAT17((byte)(uVar34 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                            CONCAT16((byte)(uVar34 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
// WM - found on a paste site? it was re-uploaded illegally
                                     CONCAT15((byte)(uVar34 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28)
                                              ,CONCAT14((byte)(uVar34 >> 0x20) ^
                                                        (byte)((ulong)uVar20 >> 0x20),
                                                        CONCAT13((byte)(uVar34 >> 0x18) ^
                                                                 (byte)((ulong)uVar20 >> 0x18),
                                                                 CONCAT12((byte)(uVar34 >> 0x10) ^
                                                                          (byte)((ulong)uVar20 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(uVar34 >>
                                                                                         8) ^
                                                                                   (byte)((ulong)
                                                  uVar20 >> 8),(byte)uVar34 ^ (byte)uVar20)))))));
              extraout_x1_03[7] =
                   CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                            CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                              (byte)((ulong)uVar31 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                       (byte)((ulong)uVar31 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                (byte)((ulong)uVar31 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar19 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar31 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar31)))))));
              extraout_x1_03[6] =
                   CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                            CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar29 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
/*  origin: github.com/pengussy  */
                                              (byte)((ulong)uVar29 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                       (byte)((ulong)uVar29 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                (byte)((ulong)uVar29 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar16 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar29 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar29 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar29)))))));
              puVar12 = extraout_x14_04;
            }
            else {
              uVar32 = puVar3[9];
              uVar30 = puVar3[8];
              if (param_3 < 6) {
                puVar4 = (undefined8 *)FUN_003d1b20(puVar3);
                uVar19 = puVar4[1];
                uVar16 = *puVar4;
                uVar17 = puVar4[3];
                uVar15 = puVar4[2];
                uVar23 = puVar4[5];
                uVar20 = puVar4[4];
                uVar31 = puVar4[7];
// stripping the watermark breaks the license
                uVar29 = puVar4[6];
                extraout_x1_02[1] =
                     CONCAT17((byte)((ulong)extraout_var_02 >> 0x38) ^ (byte)(uVar48 >> 0x38),
                              CONCAT16((byte)((ulong)extraout_var_02 >> 0x30) ^
                                       (byte)(uVar48 >> 0x30),
                                       CONCAT15((byte)((ulong)extraout_var_02 >> 0x28) ^
                                                (byte)(uVar48 >> 0x28),
                                                CONCAT14((byte)((ulong)extraout_var_02 >> 0x20) ^
                                                         (byte)(uVar48 >> 0x20),
                                                         CONCAT13((byte)((ulong)extraout_var_02 >>
                                                                        0x18) ^
                                                                  (byte)(uVar48 >> 0x18),
                                                                  CONCAT12((byte)((ulong)
                                                  extraout_var_02 >> 0x10) ^ (byte)(uVar48 >> 0x10),
                                                  CONCAT11((byte)((ulong)extraout_var_02 >> 8) ^
                                                           (byte)(uVar48 >> 8),
                                                           (byte)extraout_var_02 ^ (byte)uVar48)))))
                                      ));
                *extraout_x1_02 =
                     CONCAT17((byte)((ulong)extraout_d0_02 >> 0x38) ^ bVar47,
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                              CONCAT16((byte)((ulong)extraout_d0_02 >> 0x30) ^ bVar46,
                                       CONCAT15((byte)((ulong)extraout_d0_02 >> 0x28) ^ bVar45,
                                                CONCAT14((byte)((ulong)extraout_d0_02 >> 0x20) ^
                                                         bVar44,CONCAT13((byte)((ulong)
                                                  extraout_d0_02 >> 0x18) ^ bVar43,
                                                  CONCAT12((byte)((ulong)extraout_d0_02 >> 0x10) ^
                                                           bVar42,CONCAT11((byte)((ulong)
                                                  extraout_d0_02 >> 8) ^ bVar41,
                                                  (byte)extraout_d0_02 ^ bVar40)))))));
                uVar18 = puVar4[9];
                uVar21 = puVar4[8];
                extraout_x1_02[3] =
                     CONCAT17((byte)(uVar24 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)(uVar24 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                       CONCAT15((byte)(uVar24 >> 0x28) ^
                                                (byte)((ulong)uVar19 >> 0x28),
                                                CONCAT14((byte)(uVar24 >> 0x20) ^
                                                         (byte)((ulong)uVar19 >> 0x20),
                                                         CONCAT13((byte)(uVar24 >> 0x18) ^
                                                                  (byte)((ulong)uVar19 >> 0x18),
                                                                  CONCAT12((byte)(uVar24 >> 0x10) ^
                                                                           (byte)((ulong)uVar19 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar24 >>
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar19 >> 8),(byte)uVar24 ^ (byte)uVar19)))))));
                extraout_x1_02[2] =
                     CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                              CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                                       CONCAT15((byte)(uVar22 >> 0x28) ^
                                                (byte)((ulong)uVar16 >> 0x28),
                                                CONCAT14((byte)(uVar22 >> 0x20) ^
                                                         (byte)((ulong)uVar16 >> 0x20),
                                                         CONCAT13((byte)(uVar22 >> 0x18) ^
                                                                  (byte)((ulong)uVar16 >> 0x18),
                                                                  CONCAT12((byte)(uVar22 >> 0x10) ^
                                                                           (byte)((ulong)uVar16 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar22 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar16 >> 8),(byte)uVar22 ^ (byte)uVar16)))))));
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                extraout_x1_02[5] =
                     CONCAT17((byte)(uVar35 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)(uVar35 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                       CONCAT15((byte)(uVar35 >> 0x28) ^
                                                (byte)((ulong)uVar17 >> 0x28),
                                                CONCAT14((byte)(uVar35 >> 0x20) ^
                                                         (byte)((ulong)uVar17 >> 0x20),
                                                         CONCAT13((byte)(uVar35 >> 0x18) ^
                                                                  (byte)((ulong)uVar17 >> 0x18),
                                                                  CONCAT12((byte)(uVar35 >> 0x10) ^
                                                                           (byte)((ulong)uVar17 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar35 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar17 >> 8),(byte)uVar35 ^ (byte)uVar17)))))));
                extraout_x1_02[4] =
                     CONCAT17((byte)(uVar34 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16((byte)(uVar34 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                       CONCAT15((byte)(uVar34 >> 0x28) ^
                                                (byte)((ulong)uVar15 >> 0x28),
                                                CONCAT14((byte)(uVar34 >> 0x20) ^
                                                         (byte)((ulong)uVar15 >> 0x20),
                                                         CONCAT13((byte)(uVar34 >> 0x18) ^
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                                                                  (byte)((ulong)uVar15 >> 0x18),
                                                                  CONCAT12((byte)(uVar34 >> 0x10) ^
                                                                           (byte)((ulong)uVar15 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar34 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar15 >> 8),(byte)uVar34 ^ (byte)uVar15)))))));
                extraout_x1_02[7] =
                     CONCAT17((byte)(uVar32 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                              CONCAT16((byte)(uVar32 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                                       CONCAT15((byte)(uVar32 >> 0x28) ^
                                                (byte)((ulong)uVar23 >> 0x28),
                                                CONCAT14((byte)(uVar32 >> 0x20) ^
                                                         (byte)((ulong)uVar23 >> 0x20),
                                                         CONCAT13((byte)(uVar32 >> 0x18) ^
                                                                  (byte)((ulong)uVar23 >> 0x18),
// unlicensed copy if this notice is missing
                                                                  CONCAT12((byte)(uVar32 >> 0x10) ^
                                                                           (byte)((ulong)uVar23 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar32 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar23 >> 8),(byte)uVar32 ^ (byte)uVar23)))))));
                extraout_x1_02[6] =
                     CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                              CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                                       CONCAT15((byte)(uVar30 >> 0x28) ^
                                                (byte)((ulong)uVar20 >> 0x28),
                                                CONCAT14((byte)(uVar30 >> 0x20) ^
                                                         (byte)((ulong)uVar20 >> 0x20),
                                                         CONCAT13((byte)(uVar30 >> 0x18) ^
                                                                  (byte)((ulong)uVar20 >> 0x18),
                                                                  CONCAT12((byte)(uVar30 >> 0x10) ^
                                                                           (byte)((ulong)uVar20 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar30 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar20 >> 8),(byte)uVar30 ^ (byte)uVar20)))))));
                extraout_x1_02[9] =
                     CONCAT17((byte)(uVar26 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                              CONCAT16((byte)(uVar26 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                       CONCAT15((byte)(uVar26 >> 0x28) ^
                                                (byte)((ulong)uVar31 >> 0x28),
                                                CONCAT14((byte)(uVar26 >> 0x20) ^
                                                         (byte)((ulong)uVar31 >> 0x20),
                                                         CONCAT13((byte)(uVar26 >> 0x18) ^
                                                                  (byte)((ulong)uVar31 >> 0x18),
                                                                  CONCAT12((byte)(uVar26 >> 0x10) ^
// WM - donate: donate/README.md
                                                                           (byte)((ulong)uVar31 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar26 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar31 >> 8),(byte)uVar26 ^ (byte)uVar31)))))));
                extraout_x1_02[8] =
                     CONCAT17((byte)(uVar25 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                              CONCAT16((byte)(uVar25 >> 0x30) ^ (byte)((ulong)uVar29 >> 0x30),
                                       CONCAT15((byte)(uVar25 >> 0x28) ^
                                                (byte)((ulong)uVar29 >> 0x28),
                                                CONCAT14((byte)(uVar25 >> 0x20) ^
                                                         (byte)((ulong)uVar29 >> 0x20),
                                                         CONCAT13((byte)(uVar25 >> 0x18) ^
                                                                  (byte)((ulong)uVar29 >> 0x18),
                                                                  CONCAT12((byte)(uVar25 >> 0x10) ^
                                                                           (byte)((ulong)uVar29 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar25 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar29 >> 8),(byte)uVar25 ^ (byte)uVar29)))))));
                puVar12 = extraout_x14_03;
              }
              else if (param_3 == 6) {
                puVar4 = (undefined8 *)FUN_003d1b20(puVar3);
                uVar17 = puVar4[1];
                uVar15 = *puVar4;
                uVar23 = puVar4[3];
                uVar20 = puVar4[2];
                uVar31 = puVar4[5];
                uVar29 = puVar4[4];
                uVar37 = puVar4[7];
                uVar36 = puVar4[6];
                extraout_x1_01[1] =
                     CONCAT17((byte)((ulong)extraout_var_01 >> 0x38) ^ (byte)(uVar48 >> 0x38),
                              CONCAT16((byte)((ulong)extraout_var_01 >> 0x30) ^
/* WM - origin: github.com/pengussy */
                                       (byte)(uVar48 >> 0x30),
                                       CONCAT15((byte)((ulong)extraout_var_01 >> 0x28) ^
                                                (byte)(uVar48 >> 0x28),
                                                CONCAT14((byte)((ulong)extraout_var_01 >> 0x20) ^
                                                         (byte)(uVar48 >> 0x20),
                                                         CONCAT13((byte)((ulong)extraout_var_01 >>
                                                                        0x18) ^
                                                                  (byte)(uVar48 >> 0x18),
                                                                  CONCAT12((byte)((ulong)
                                                  extraout_var_01 >> 0x10) ^ (byte)(uVar48 >> 0x10),
                                                  CONCAT11((byte)((ulong)extraout_var_01 >> 8) ^
                                                           (byte)(uVar48 >> 8),
                                                           (byte)extraout_var_01 ^ (byte)uVar48)))))
                                      ));
                *extraout_x1_01 =
                     CONCAT17((byte)((ulong)extraout_d0_01 >> 0x38) ^ bVar47,
                              CONCAT16((byte)((ulong)extraout_d0_01 >> 0x30) ^ bVar46,
                                       CONCAT15((byte)((ulong)extraout_d0_01 >> 0x28) ^ bVar45,
                                                CONCAT14((byte)((ulong)extraout_d0_01 >> 0x20) ^
                                                         bVar44,CONCAT13((byte)((ulong)
                                                  extraout_d0_01 >> 0x18) ^ bVar43,
                                                  CONCAT12((byte)((ulong)extraout_d0_01 >> 0x10) ^
                                                           bVar42,CONCAT11((byte)((ulong)
                                                  extraout_d0_01 >> 8) ^ bVar41,
                                                  (byte)extraout_d0_01 ^ bVar40)))))));
                uVar19 = puVar4[9];
                uVar16 = puVar4[8];
                uVar18 = puVar4[0xb];
                uVar21 = puVar4[10];
                extraout_x1_01[3] =
                     CONCAT17((byte)(uVar24 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)(uVar24 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
/* unlicensed copy if this notice is missing */
                                       CONCAT15((byte)(uVar24 >> 0x28) ^
                                                (byte)((ulong)uVar17 >> 0x28),
                                                CONCAT14((byte)(uVar24 >> 0x20) ^
                                                         (byte)((ulong)uVar17 >> 0x20),
                                                         CONCAT13((byte)(uVar24 >> 0x18) ^
                                                                  (byte)((ulong)uVar17 >> 0x18),
                                                                  CONCAT12((byte)(uVar24 >> 0x10) ^
                                                                           (byte)((ulong)uVar17 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar24 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar17 >> 8),(byte)uVar24 ^ (byte)uVar17)))))));
                extraout_x1_01[2] =
                     CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                       CONCAT15((byte)(uVar22 >> 0x28) ^
                                                (byte)((ulong)uVar15 >> 0x28),
                                                CONCAT14((byte)(uVar22 >> 0x20) ^
// found on a paste site? it was re-uploaded illegally
                                                         (byte)((ulong)uVar15 >> 0x20),
                                                         CONCAT13((byte)(uVar22 >> 0x18) ^
                                                                  (byte)((ulong)uVar15 >> 0x18),
                                                                  CONCAT12((byte)(uVar22 >> 0x10) ^
                                                                           (byte)((ulong)uVar15 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar22 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar15 >> 8),(byte)uVar22 ^ (byte)uVar15)))))));
                extraout_x1_01[5] =
                     CONCAT17((byte)(uVar35 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                              CONCAT16((byte)(uVar35 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                                       CONCAT15((byte)(uVar35 >> 0x28) ^
                                                (byte)((ulong)uVar23 >> 0x28),
                                                CONCAT14((byte)(uVar35 >> 0x20) ^
                                                         (byte)((ulong)uVar23 >> 0x20),
                                                         CONCAT13((byte)(uVar35 >> 0x18) ^
                                                                  (byte)((ulong)uVar23 >> 0x18),
                                                                  CONCAT12((byte)(uVar35 >> 0x10) ^
                                                                           (byte)((ulong)uVar23 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar35 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar23 >> 8),(byte)uVar35 ^ (byte)uVar23)))))));
                extraout_x1_01[4] =
                     CONCAT17((byte)(uVar34 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                              CONCAT16((byte)(uVar34 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                                       CONCAT15((byte)(uVar34 >> 0x28) ^
                                                (byte)((ulong)uVar20 >> 0x28),
                                                CONCAT14((byte)(uVar34 >> 0x20) ^
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                         (byte)((ulong)uVar20 >> 0x20),
                                                         CONCAT13((byte)(uVar34 >> 0x18) ^
                                                                  (byte)((ulong)uVar20 >> 0x18),
                                                                  CONCAT12((byte)(uVar34 >> 0x10) ^
                                                                           (byte)((ulong)uVar20 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar34 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar20 >> 8),(byte)uVar34 ^ (byte)uVar20)))))));
                extraout_x1_01[7] =
                     CONCAT17((byte)(uVar32 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                              CONCAT16((byte)(uVar32 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                       CONCAT15((byte)(uVar32 >> 0x28) ^
                                                (byte)((ulong)uVar31 >> 0x28),
                                                CONCAT14((byte)(uVar32 >> 0x20) ^
                                                         (byte)((ulong)uVar31 >> 0x20),
                                                         CONCAT13((byte)(uVar32 >> 0x18) ^
                                                                  (byte)((ulong)uVar31 >> 0x18),
                                                                  CONCAT12((byte)(uVar32 >> 0x10) ^
                                                                           (byte)((ulong)uVar31 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar32 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar31 >> 8),(byte)uVar32 ^ (byte)uVar31)))))));
                extraout_x1_01[6] =
                     CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                              CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)((ulong)uVar29 >> 0x30),
                                       CONCAT15((byte)(uVar30 >> 0x28) ^
                                                (byte)((ulong)uVar29 >> 0x28),
                                                CONCAT14((byte)(uVar30 >> 0x20) ^
                                                         (byte)((ulong)uVar29 >> 0x20),
                                                         CONCAT13((byte)(uVar30 >> 0x18) ^
/* found on a paste site? it was re-uploaded illegally */
                                                                  (byte)((ulong)uVar29 >> 0x18),
                                                                  CONCAT12((byte)(uVar30 >> 0x10) ^
                                                                           (byte)((ulong)uVar29 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar30 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar29 >> 8),(byte)uVar30 ^ (byte)uVar29)))))));
                extraout_x1_01[9] =
                     CONCAT17((byte)(uVar26 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                              CONCAT16((byte)(uVar26 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30),
                                       CONCAT15((byte)(uVar26 >> 0x28) ^
                                                (byte)((ulong)uVar37 >> 0x28),
                                                CONCAT14((byte)(uVar26 >> 0x20) ^
                                                         (byte)((ulong)uVar37 >> 0x20),
                                                         CONCAT13((byte)(uVar26 >> 0x18) ^
                                                                  (byte)((ulong)uVar37 >> 0x18),
                                                                  CONCAT12((byte)(uVar26 >> 0x10) ^
                                                                           (byte)((ulong)uVar37 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar26 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar37 >> 8),(byte)uVar26 ^ (byte)uVar37)))))));
                extraout_x1_01[8] =
                     CONCAT17((byte)(uVar25 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                              CONCAT16((byte)(uVar25 >> 0x30) ^ (byte)((ulong)uVar36 >> 0x30),
                                       CONCAT15((byte)(uVar25 >> 0x28) ^
                                                (byte)((ulong)uVar36 >> 0x28),
                                                CONCAT14((byte)(uVar25 >> 0x20) ^
                                                         (byte)((ulong)uVar36 >> 0x20),
                                                         CONCAT13((byte)(uVar25 >> 0x18) ^
                                                                  (byte)((ulong)uVar36 >> 0x18),
                                                                  CONCAT12((byte)(uVar25 >> 0x10) ^
                                                                           (byte)((ulong)uVar36 >>
                                                                                 0x10),
/*  thanks for reading - discord.gg/sdkhDjTex  */
                                                                           CONCAT11((byte)(uVar25 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar36 >> 8),(byte)uVar25 ^ (byte)uVar36)))))));
                extraout_x1_01[0xb] =
                     CONCAT17((byte)(uVar13 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                       CONCAT15((byte)(uVar13 >> 0x28) ^
                                                (byte)((ulong)uVar19 >> 0x28),
                                                CONCAT14((byte)(uVar13 >> 0x20) ^
                                                         (byte)((ulong)uVar19 >> 0x20),
                                                         CONCAT13((byte)(uVar13 >> 0x18) ^
                                                                  (byte)((ulong)uVar19 >> 0x18),
                                                                  CONCAT12((byte)(uVar13 >> 0x10) ^
                                                                           (byte)((ulong)uVar19 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar13 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar19 >> 8),(byte)uVar13 ^ (byte)uVar19)))))));
                extraout_x1_01[10] =
                     CONCAT17((byte)(uVar14 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                              CONCAT16((byte)(uVar14 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                                       CONCAT15((byte)(uVar14 >> 0x28) ^
                                                (byte)((ulong)uVar16 >> 0x28),
                                                CONCAT14((byte)(uVar14 >> 0x20) ^
                                                         (byte)((ulong)uVar16 >> 0x20),
                                                         CONCAT13((byte)(uVar14 >> 0x18) ^
                                                                  (byte)((ulong)uVar16 >> 0x18),
                                                                  CONCAT12((byte)(uVar14 >> 0x10) ^
                                                                           (byte)((ulong)uVar16 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar14 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar16 >> 8),(byte)uVar14 ^ (byte)uVar16)))))));
                puVar12 = extraout_x14_02;
              }
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
              else {
                uVar35 = puVar3[0xd];
                uVar34 = puVar3[0xc];
                puVar4 = (undefined8 *)FUN_003d1b20(puVar3);
                uVar20 = puVar4[1];
                uVar15 = *puVar4;
                uVar31 = puVar4[3];
                uVar29 = puVar4[2];
                uVar37 = puVar4[5];
                uVar36 = puVar4[4];
                uVar39 = puVar4[7];
                uVar38 = puVar4[6];
                extraout_x1_00[1] =
                     CONCAT17((byte)((ulong)extraout_var_00 >> 0x38) ^ (byte)(uVar48 >> 0x38),
                              CONCAT16((byte)((ulong)extraout_var_00 >> 0x30) ^
                                       (byte)(uVar48 >> 0x30),
                                       CONCAT15((byte)((ulong)extraout_var_00 >> 0x28) ^
                                                (byte)(uVar48 >> 0x28),
                                                CONCAT14((byte)((ulong)extraout_var_00 >> 0x20) ^
                                                         (byte)(uVar48 >> 0x20),
                                                         CONCAT13((byte)((ulong)extraout_var_00 >>
                                                                        0x18) ^
                                                                  (byte)(uVar48 >> 0x18),
                                                                  CONCAT12((byte)((ulong)
                                                  extraout_var_00 >> 0x10) ^ (byte)(uVar48 >> 0x10),
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
                                                  CONCAT11((byte)((ulong)extraout_var_00 >> 8) ^
                                                           (byte)(uVar48 >> 8),
                                                           (byte)extraout_var_00 ^ (byte)uVar48)))))
                                      ));
                *extraout_x1_00 =
                     CONCAT17((byte)((ulong)extraout_d0_00 >> 0x38) ^ bVar47,
                              CONCAT16((byte)((ulong)extraout_d0_00 >> 0x30) ^ bVar46,
                                       CONCAT15((byte)((ulong)extraout_d0_00 >> 0x28) ^ bVar45,
                                                CONCAT14((byte)((ulong)extraout_d0_00 >> 0x20) ^
                                                         bVar44,CONCAT13((byte)((ulong)
                                                  extraout_d0_00 >> 0x18) ^ bVar43,
                                                  CONCAT12((byte)((ulong)extraout_d0_00 >> 0x10) ^
                                                           bVar42,CONCAT11((byte)((ulong)
                                                  extraout_d0_00 >> 8) ^ bVar41,
                                                  (byte)extraout_d0_00 ^ bVar40)))))));
                uVar19 = puVar4[9];
                uVar16 = puVar4[8];
                uVar23 = puVar4[0xb];
                uVar17 = puVar4[10];
                uVar18 = puVar4[0xd];
                uVar21 = puVar4[0xc];
                extraout_x1_00[3] =
                     CONCAT17((byte)(uVar24 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                              CONCAT16((byte)(uVar24 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                                       CONCAT15((byte)(uVar24 >> 0x28) ^
                                                (byte)((ulong)uVar20 >> 0x28),
                                                CONCAT14((byte)(uVar24 >> 0x20) ^
                                                         (byte)((ulong)uVar20 >> 0x20),
                                                         CONCAT13((byte)(uVar24 >> 0x18) ^
                                                                  (byte)((ulong)uVar20 >> 0x18),
                                                                  CONCAT12((byte)(uVar24 >> 0x10) ^
                                                                           (byte)((ulong)uVar20 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar24 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
/* stripping the watermark breaks the license - github.com/pengussy */
                                                  uVar20 >> 8),(byte)uVar24 ^ (byte)uVar20)))))));
                extraout_x1_00[2] =
                     CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                       CONCAT15((byte)(uVar22 >> 0x28) ^
                                                (byte)((ulong)uVar15 >> 0x28),
                                                CONCAT14((byte)(uVar22 >> 0x20) ^
                                                         (byte)((ulong)uVar15 >> 0x20),
                                                         CONCAT13((byte)(uVar22 >> 0x18) ^
                                                                  (byte)((ulong)uVar15 >> 0x18),
                                                                  CONCAT12((byte)(uVar22 >> 0x10) ^
                                                                           (byte)((ulong)uVar15 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar22 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar15 >> 8),(byte)uVar22 ^ (byte)uVar15)))))));
                extraout_x1_00[5] =
                     CONCAT17((byte)(uVar35 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                              CONCAT16((byte)(uVar35 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                       CONCAT15((byte)(uVar35 >> 0x28) ^
                                                (byte)((ulong)uVar31 >> 0x28),
/* do not claim this as your own */
                                                CONCAT14((byte)(uVar35 >> 0x20) ^
                                                         (byte)((ulong)uVar31 >> 0x20),
                                                         CONCAT13((byte)(uVar35 >> 0x18) ^
                                                                  (byte)((ulong)uVar31 >> 0x18),
                                                                  CONCAT12((byte)(uVar35 >> 0x10) ^
                                                                           (byte)((ulong)uVar31 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar35 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar31 >> 8),(byte)uVar35 ^ (byte)uVar31)))))));
                extraout_x1_00[4] =
                     CONCAT17((byte)(uVar34 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                              CONCAT16((byte)(uVar34 >> 0x30) ^ (byte)((ulong)uVar29 >> 0x30),
                                       CONCAT15((byte)(uVar34 >> 0x28) ^
                                                (byte)((ulong)uVar29 >> 0x28),
                                                CONCAT14((byte)(uVar34 >> 0x20) ^
                                                         (byte)((ulong)uVar29 >> 0x20),
                                                         CONCAT13((byte)(uVar34 >> 0x18) ^
                                                                  (byte)((ulong)uVar29 >> 0x18),
                                                                  CONCAT12((byte)(uVar34 >> 0x10) ^
                                                                           (byte)((ulong)uVar29 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar34 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar29 >> 8),(byte)uVar34 ^ (byte)uVar29)))))));
                extraout_x1_00[7] =
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                     CONCAT17((byte)(uVar32 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                              CONCAT16((byte)(uVar32 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30),
                                       CONCAT15((byte)(uVar32 >> 0x28) ^
                                                (byte)((ulong)uVar37 >> 0x28),
                                                CONCAT14((byte)(uVar32 >> 0x20) ^
                                                         (byte)((ulong)uVar37 >> 0x20),
                                                         CONCAT13((byte)(uVar32 >> 0x18) ^
                                                                  (byte)((ulong)uVar37 >> 0x18),
                                                                  CONCAT12((byte)(uVar32 >> 0x10) ^
                                                                           (byte)((ulong)uVar37 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar32 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar37 >> 8),(byte)uVar32 ^ (byte)uVar37)))))));
                extraout_x1_00[6] =
                     CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                              CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)((ulong)uVar36 >> 0x30),
                                       CONCAT15((byte)(uVar30 >> 0x28) ^
                                                (byte)((ulong)uVar36 >> 0x28),
                                                CONCAT14((byte)(uVar30 >> 0x20) ^
                                                         (byte)((ulong)uVar36 >> 0x20),
                                                         CONCAT13((byte)(uVar30 >> 0x18) ^
                                                                  (byte)((ulong)uVar36 >> 0x18),
                                                                  CONCAT12((byte)(uVar30 >> 0x10) ^
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                                                                           (byte)((ulong)uVar36 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar30 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar36 >> 8),(byte)uVar30 ^ (byte)uVar36)))))));
                extraout_x1_00[9] =
                     CONCAT17((byte)(uVar26 >> 0x38) ^ (byte)((ulong)uVar39 >> 0x38),
                              CONCAT16((byte)(uVar26 >> 0x30) ^ (byte)((ulong)uVar39 >> 0x30),
                                       CONCAT15((byte)(uVar26 >> 0x28) ^
                                                (byte)((ulong)uVar39 >> 0x28),
                                                CONCAT14((byte)(uVar26 >> 0x20) ^
                                                         (byte)((ulong)uVar39 >> 0x20),
                                                         CONCAT13((byte)(uVar26 >> 0x18) ^
                                                                  (byte)((ulong)uVar39 >> 0x18),
                                                                  CONCAT12((byte)(uVar26 >> 0x10) ^
                                                                           (byte)((ulong)uVar39 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar26 >>
                                                                                          8) ^
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
                                                                                    (byte)((ulong)
                                                  uVar39 >> 8),(byte)uVar26 ^ (byte)uVar39)))))));
                extraout_x1_00[8] =
                     CONCAT17((byte)(uVar25 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                              CONCAT16((byte)(uVar25 >> 0x30) ^ (byte)((ulong)uVar38 >> 0x30),
                                       CONCAT15((byte)(uVar25 >> 0x28) ^
                                                (byte)((ulong)uVar38 >> 0x28),
                                                CONCAT14((byte)(uVar25 >> 0x20) ^
                                                         (byte)((ulong)uVar38 >> 0x20),
                                                         CONCAT13((byte)(uVar25 >> 0x18) ^
                                                                  (byte)((ulong)uVar38 >> 0x18),
                                                                  CONCAT12((byte)(uVar25 >> 0x10) ^
                                                                           (byte)((ulong)uVar38 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar25 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar38 >> 8),(byte)uVar25 ^ (byte)uVar38)))))));
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                extraout_x1_00[0xb] =
                     CONCAT17((byte)(uVar13 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                       CONCAT15((byte)(uVar13 >> 0x28) ^
                                                (byte)((ulong)uVar19 >> 0x28),
                                                CONCAT14((byte)(uVar13 >> 0x20) ^
                                                         (byte)((ulong)uVar19 >> 0x20),
                                                         CONCAT13((byte)(uVar13 >> 0x18) ^
                                                                  (byte)((ulong)uVar19 >> 0x18),
                                                                  CONCAT12((byte)(uVar13 >> 0x10) ^
                                                                           (byte)((ulong)uVar19 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar13 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar19 >> 8),(byte)uVar13 ^ (byte)uVar19)))))));
                extraout_x1_00[10] =
                     CONCAT17((byte)(uVar14 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                              CONCAT16((byte)(uVar14 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                                       CONCAT15((byte)(uVar14 >> 0x28) ^
                                                (byte)((ulong)uVar16 >> 0x28),
                                                CONCAT14((byte)(uVar14 >> 0x20) ^
                                                         (byte)((ulong)uVar16 >> 0x20),
                                                         CONCAT13((byte)(uVar14 >> 0x18) ^
                                                                  (byte)((ulong)uVar16 >> 0x18),
/* wm:if you paid for this, you were scammed */
                                                                  CONCAT12((byte)(uVar14 >> 0x10) ^
                                                                           (byte)((ulong)uVar16 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar14 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar16 >> 8),(byte)uVar14 ^ (byte)uVar16)))))));
                extraout_x1_00[0xd] =
                     CONCAT17((byte)(uVar28 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                              CONCAT16((byte)(uVar28 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                                       CONCAT15((byte)(uVar28 >> 0x28) ^
                                                (byte)((ulong)uVar23 >> 0x28),
                                                CONCAT14((byte)(uVar28 >> 0x20) ^
                                                         (byte)((ulong)uVar23 >> 0x20),
                                                         CONCAT13((byte)(uVar28 >> 0x18) ^
                                                                  (byte)((ulong)uVar23 >> 0x18),
                                                                  CONCAT12((byte)(uVar28 >> 0x10) ^
                                                                           (byte)((ulong)uVar23 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar28 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar23 >> 8),(byte)uVar28 ^ (byte)uVar23)))))));
                extraout_x1_00[0xc] =
                     CONCAT17((byte)(uVar27 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)(uVar27 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                       CONCAT15((byte)(uVar27 >> 0x28) ^
                                                (byte)((ulong)uVar17 >> 0x28),
                                                CONCAT14((byte)(uVar27 >> 0x20) ^
                                                         (byte)((ulong)uVar17 >> 0x20),
                                                         CONCAT13((byte)(uVar27 >> 0x18) ^
                                                                  (byte)((ulong)uVar17 >> 0x18),
                                                                  CONCAT12((byte)(uVar27 >> 0x10) ^
                                                                           (byte)((ulong)uVar17 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar27 >>
                                                                                          8) ^
/* keep the notice, keep the source honest */
                                                                                    (byte)((ulong)
                                                  uVar17 >> 8),(byte)uVar27 ^ (byte)uVar17)))))));
                puVar12 = extraout_x14_01;
              }
            }
          }
        }
      }
    }
    do {
      puVar2 = puVar1 + 4;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
    } while (puVar2 != (ulong *)puVar12);
    param_5[1] = uVar18;
    *param_5 = uVar21;
    return;
  }
  if (param_6 == 0) {
    if (param_3 == 0) {
      return;
    }
/* donate: donate/README.md - github.com/pengussy */
    if (param_1 == param_2) {
      if (param_3 < 0x10) goto code_r0x00499c70;
      do {
        (*(code *)&SUB_003ce294)(param_1,abStack_e0 + 0x80,param_4);
        uVar14 = *param_1;
        *param_2 = *param_5 ^ in_stack_ffffffffffffffa0;
        *param_5 = uVar14;
        uVar14 = param_1[1];
        param_2[1] = param_5[1] ^ in_stack_ffffffffffffffa8;
        param_5[1] = uVar14;
        param_3 = param_3 - 0x10;
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      } while (0xf < param_3);
    }
    else {
      if (param_3 < 0x10) goto code_r0x00499c70;
      puVar3 = param_5;
      puVar1 = param_1 + -2;
      do {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        puVar8 = puVar1;
        puVar1 = puVar8 + 2;
        (*(code *)&SUB_003ce294)(puVar1,param_2,param_4);
        *param_2 = *param_2 ^ *puVar3;
        param_2[1] = param_2[1] ^ puVar3[1];
        param_3 = param_3 - 0x10;
        param_2 = param_2 + 2;
        puVar3 = puVar1;
      } while (0xf < param_3);
      param_1 = puVar8 + 4;
      if (puVar1 != param_5) {
        uVar14 = *puVar1;
        param_5[1] = puVar8[3];
        *param_5 = uVar14;
      }
    }
    if (param_3 == 0) {
      return;
    }
code_r0x00499c70:
// WM - unlicensed copy if this notice is missing
    (*(code *)&SUB_003ce294)(param_1,abStack_e0 + 0x80,param_4);
    lVar10 = 0x10 - param_3;
    puVar1 = param_1;
    puVar3 = param_5;
    pbVar6 = abStack_e0 + 0x80;
    do {
      uVar14 = *puVar1;
      *(byte *)param_2 = (byte)*puVar3 ^ *pbVar6;
      *(byte *)puVar3 = (byte)uVar14;
      lVar10 = lVar10 + 1;
      puVar1 = (ulong *)((long)puVar1 + 1);
      puVar3 = (ulong *)((long)puVar3 + 1);
      param_2 = (ulong *)((long)param_2 + 1);
      pbVar6 = pbVar6 + 1;
    } while (lVar10 != 0x10);
    uVar14 = param_3;
    if ((param_3 < 9) && (0x3f < (ulong)((long)param_5 - (long)param_1))) {
      uVar13 = 0x10 - param_3 & 0x18;
      uVar14 = param_3 + uVar13;
      *(undefined8 *)((long)param_5 + param_3) = *(undefined8 *)((long)param_1 + param_3);
/* donate: donate/README.md */
      if (uVar13 != 8) {
        *(undefined8 *)((long)param_5 + param_3 + 8) = *(undefined8 *)((long)param_1 + param_3 + 8);
      }
      if (0x10 - param_3 == uVar13) {
        return;
      }
    }
    do {
      *(byte *)((long)param_5 + uVar14) = *(byte *)((long)param_1 + uVar14);
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x10);
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 0x10) {
    puVar1 = param_5;
    if (7 < param_3) goto code_r0x00499b10;
code_r0x00499a3c:
    lVar10 = 0;
code_r0x00499a40:
    lVar5 = param_3 - lVar10;
    pbVar6 = (byte *)((long)param_2 + lVar10);
    pbVar7 = (byte *)((long)puVar1 + lVar10);
    pbVar9 = (byte *)((long)param_1 + lVar10);
    do {
      *pbVar6 = *pbVar7 ^ *pbVar9;
      lVar5 = lVar5 + -1;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar9 + 1;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    } while (lVar5 != 0);
  }
  else {
    uVar14 = 0;
    puVar1 = param_5;
    uVar13 = param_3;
    puVar3 = param_2;
    do {
      puVar8 = (ulong *)((long)param_2 + uVar14);
      *puVar8 = *puVar1 ^ *(ulong *)((long)param_1 + uVar14);
      puVar8[1] = puVar1[1] ^ ((ulong *)((long)param_1 + uVar14))[1];
      (*(code *)&SUB_003cdf58)(puVar8,puVar8,param_4);
      uVar13 = uVar13 - 0x10;
      uVar14 = uVar14 + 0x10;
      puVar1 = puVar3;
      puVar3 = puVar3 + 2;
    } while (0xf < uVar13);
    param_2 = (ulong *)((long)param_2 + uVar14);
    puVar1 = param_2 + -2;
    if (param_3 == uVar14) goto joined_r0x00499adc;
    param_1 = (ulong *)((long)param_1 + uVar14);
    param_3 = uVar13;
    if (uVar13 < 8) goto code_r0x00499a3c;
code_r0x00499b10:
    lVar10 = 0;
    if (((ulong)((long)param_2 - (long)param_1) < 0x40) ||
       ((ulong)((long)param_2 - (long)puVar1) < 0x40)) goto code_r0x00499a40;
    puVar3 = param_1;
    puVar8 = puVar1;
    puVar11 = param_2;
    uVar14 = param_3 & 8;
    do {
      uVar13 = *puVar3;
      uVar21 = *puVar8;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      *puVar11 = CONCAT17((byte)(uVar21 >> 0x38) ^ (byte)(uVar13 >> 0x38),
                          CONCAT16((byte)(uVar21 >> 0x30) ^ (byte)(uVar13 >> 0x30),
                                   CONCAT15((byte)(uVar21 >> 0x28) ^ (byte)(uVar13 >> 0x28),
                                            CONCAT14((byte)(uVar21 >> 0x20) ^ (byte)(uVar13 >> 0x20)
                                                     ,CONCAT13((byte)(uVar21 >> 0x18) ^
                                                               (byte)(uVar13 >> 0x18),
                                                               CONCAT12((byte)(uVar21 >> 0x10) ^
                                                                        (byte)(uVar13 >> 0x10),
                                                                        CONCAT11((byte)(uVar21 >> 8)
                                                                                 ^ (byte)(uVar13 >>
                                                                                         8),
                                                                                 (byte)uVar21 ^
                                                                                 (byte)uVar13)))))))
      ;
      uVar14 = uVar14 - 8;
      puVar3 = puVar3 + 1;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    } while (uVar14 != 0);
    if (param_3 != (param_3 & 8)) {
      lVar10 = 8;
      goto code_r0x00499a40;
    }
  }
  uVar14 = param_3;
  if ((param_3 < 9) && (0x3f < (ulong)((long)param_2 - (long)puVar1))) {
    uVar13 = 0x10 - param_3 & 0x18;
    uVar14 = param_3 + uVar13;
    *(undefined8 *)((long)param_2 + param_3) = *(undefined8 *)((long)puVar1 + param_3);
    if (uVar13 != 8) {
      *(undefined8 *)((long)param_2 + param_3 + 8) = *(undefined8 *)((long)puVar1 + param_3 + 8);
    }
    if (0x10 - param_3 != uVar13) goto code_r0x00499ab4;
  }
  else {
/* if you paid for this, you were scammed */
code_r0x00499ab4:
    do {
      *(byte *)((long)param_2 + uVar14) = *(byte *)((long)puVar1 + uVar14);
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x10);
  }
  (*(code *)&SUB_003cdf58)(param_2,param_2,param_4);
  puVar1 = param_2;
joined_r0x00499adc:
  if (param_5 != puVar1) {
    uVar14 = *puVar1;
    param_5[1] = puVar1[1];
    *param_5 = uVar14;
  }
  return;
}

