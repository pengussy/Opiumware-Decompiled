/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2a14c8:1489b1a11b
 */

void FUN_002a14c8(long param_1,int param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  ulong uVar44;
  long lVar45;
  undefined8 *puVar46;
  uint *puVar47;
  ulong uVar48;
  byte bVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  byte bVar54;
  int iVar55;
  int iVar56;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  int iVar57;
  int iVar58;
  int iVar59;
  undefined4 uVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  
  iVar43 = param_2 + 0xf;
  if (-1 < param_2) {
    iVar43 = param_2;
  }
  if (0xf < param_2) {
    uVar1 = param_3 + 2;
    uVar3 = (iVar43 >> 4) - 1;
    if (uVar3 < 3) {
      lVar45 = 0;
      uVar44 = 0;
    }
    else {
      uVar2 = (ulong)uVar3 + 1;
      uVar44 = uVar2 & 0x1fffffffc;
      lVar45 = uVar44 << 4;
/* reversing this took months of machine time */
      puVar47 = (uint *)(param_1 + 0x80);
      uVar48 = uVar44;
      do {
        iVar11 = puVar47[-0x20] - param_3;
        iVar21 = puVar47[-0x10] - param_3;
        iVar29 = *puVar47 - param_3;
        iVar14 = puVar47[0x10] - param_3;
        iVar7 = -(uint)(uVar1 <= puVar47[-0x20]);
        iVar8 = -(uint)(uVar1 <= puVar47[-0x10]);
        iVar9 = -(uint)(uVar1 <= *puVar47);
        iVar10 = -(uint)(uVar1 <= puVar47[0x10]);
        bVar49 = (byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar21 >> 0x18);
        iVar35 = puVar47[-0x1f] - param_3;
        iVar36 = puVar47[-0xf] - param_3;
        iVar50 = puVar47[1] - param_3;
        iVar53 = puVar47[0x11] - param_3;
        iVar12 = -(uint)(uVar1 <= puVar47[-0x1f]);
        iVar22 = -(uint)(uVar1 <= puVar47[-0xf]);
        iVar30 = -(uint)(uVar1 <= puVar47[1]);
        iVar15 = -(uint)(uVar1 <= puVar47[0x11]);
        iVar13 = puVar47[-0x1e] - param_3;
        iVar25 = puVar47[-0xe] - param_3;
        iVar33 = puVar47[2] - param_3;
        iVar16 = puVar47[0x12] - param_3;
        iVar19 = -(uint)(uVar1 <= puVar47[-0x1e]);
        iVar23 = -(uint)(uVar1 <= puVar47[-0xe]);
        iVar27 = -(uint)(uVar1 <= puVar47[2]);
        iVar31 = -(uint)(uVar1 <= puVar47[0x12]);
        iVar18 = puVar47[-0x1d] - param_3;
        iVar26 = puVar47[-0xd] - param_3;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        iVar34 = puVar47[3] - param_3;
        iVar17 = puVar47[0x13] - param_3;
        iVar20 = -(uint)(uVar1 <= puVar47[-0x1d]);
        iVar24 = -(uint)(uVar1 <= puVar47[-0xd]);
        iVar28 = -(uint)(uVar1 <= puVar47[3]);
        iVar32 = -(uint)(uVar1 <= puVar47[0x13]);
        iVar37 = puVar47[-0x1c] - param_3;
        iVar38 = puVar47[-0xc] - param_3;
        iVar39 = puVar47[4] - param_3;
        iVar40 = puVar47[0x14] - param_3;
        iVar41 = -(uint)(uVar1 <= puVar47[-0x1c]);
        iVar61 = -(uint)(uVar1 <= puVar47[-0xc]);
        iVar51 = -(uint)(uVar1 <= puVar47[4]);
        iVar56 = -(uint)(uVar1 <= puVar47[0x14]);
        bVar54 = (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar38 >> 0x18);
        iVar63 = puVar47[-0x1b] - param_3;
        iVar66 = puVar47[-0xb] - param_3;
        iVar69 = puVar47[5] - param_3;
// if you paid for this, you were scammed
        iVar73 = puVar47[0x15] - param_3;
        iVar42 = -(uint)(uVar1 <= puVar47[-0x1b]);
        iVar72 = -(uint)(uVar1 <= puVar47[-0xb]);
        iVar52 = -(uint)(uVar1 <= puVar47[5]);
        iVar57 = -(uint)(uVar1 <= puVar47[0x15]);
        iVar64 = puVar47[-0x1a] - param_3;
        iVar67 = puVar47[-10] - param_3;
        iVar70 = puVar47[6] - param_3;
        iVar74 = puVar47[0x16] - param_3;
        iVar55 = -(uint)(uVar1 <= puVar47[-0x1a]);
        iVar58 = -(uint)(uVar1 <= puVar47[-10]);
        iVar59 = -(uint)(uVar1 <= puVar47[6]);
        iVar62 = -(uint)(uVar1 <= puVar47[0x16]);
        uVar60 = CONCAT13((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar70 >> 0x18),
                          CONCAT12((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar70 >> 0x10),
                                   CONCAT11((byte)((uint)iVar59 >> 8) & (byte)((uint)iVar70 >> 8),
                                            (byte)iVar59 & (byte)iVar70)));
        iVar65 = puVar47[-0x19] - param_3;
        iVar68 = puVar47[-9] - param_3;
        iVar71 = puVar47[7] - param_3;
        iVar75 = puVar47[0x17] - param_3;
        iVar59 = -(uint)(uVar1 <= puVar47[-0x19]);
        iVar70 = -(uint)(uVar1 <= puVar47[-9]);
        iVar76 = -(uint)(uVar1 <= puVar47[7]);
        iVar77 = -(uint)(uVar1 <= puVar47[0x17]);
        *(ulong *)(puVar47 + -0x1e) =
             CONCAT44(CONCAT13((byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar18 >> 0x18),
                               CONCAT12((byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar18 >> 0x10),
                                        CONCAT11((byte)((uint)iVar20 >> 8) &
                                                 (byte)((uint)iVar18 >> 8),
                                                 (byte)iVar20 & (byte)iVar18))),
                      CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                               CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                                        CONCAT11((byte)((uint)iVar19 >> 8) &
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                                                 (byte)((uint)iVar13 >> 8),
                                                 (byte)iVar19 & (byte)iVar13))));
        *(ulong *)(puVar47 + -0x20) =
             CONCAT17((byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                      CONCAT16((byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                               CONCAT15((byte)((uint)iVar12 >> 8) & (byte)((uint)iVar35 >> 8),
                                        CONCAT14((byte)iVar12 & (byte)iVar35,
                                                 CONCAT13((byte)((uint)iVar7 >> 0x18) &
                                                          (byte)((uint)iVar11 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar7 >> 0x10) &
                                                                   (byte)((uint)iVar11 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar7 >> 8)
                                                                            & (byte)((uint)iVar11 >>
                                                                                    8),
                                                                            (byte)iVar7 &
                                                                            (byte)iVar11)))))));
        *(ulong *)(puVar47 + -0x1a) =
             CONCAT44(CONCAT13((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar65 >> 0x18),
                               CONCAT12((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar65 >> 0x10),
                                        CONCAT11((byte)((uint)iVar59 >> 8) &
                                                 (byte)((uint)iVar65 >> 8),
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                                                 (byte)iVar59 & (byte)iVar65))),
                      CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar64 >> 0x18),
                               CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar64 >> 0x10),
                                        CONCAT11((byte)((uint)iVar55 >> 8) &
                                                 (byte)((uint)iVar64 >> 8),
                                                 (byte)iVar55 & (byte)iVar64))));
        *(ulong *)(puVar47 + -0x1c) =
             CONCAT17((byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar63 >> 0x18),
                      CONCAT16((byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar63 >> 0x10),
                               CONCAT15((byte)((uint)iVar42 >> 8) & (byte)((uint)iVar63 >> 8),
                                        CONCAT14((byte)iVar42 & (byte)iVar63,
                                                 CONCAT13((byte)((uint)iVar41 >> 0x18) &
                                                          (byte)((uint)iVar37 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar41 >> 0x10) &
                                                                   (byte)((uint)iVar37 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar41 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar37 >> 8),(byte)iVar41 & (byte)iVar37)))))));
        *(ulong *)(puVar47 + -0xe) =
             CONCAT17((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                      CONCAT16((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
// chat: discord.gg/sdkhDjTex
                               CONCAT15((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar26 >> 8),
                                        CONCAT14((byte)iVar24 & (byte)iVar26,
                                                 CONCAT13((byte)((uint)iVar23 >> 0x18) &
                                                          (byte)((uint)iVar25 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar23 >> 0x10) &
                                                                   (byte)((uint)iVar25 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar23 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar25 >> 8),(byte)iVar23 & (byte)iVar25)))))));
        *(ulong *)(puVar47 + -0x10) =
             CONCAT17((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar36 >> 0x18),
                      CONCAT16((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar36 >> 0x10),
                               CONCAT15((byte)((uint)iVar22 >> 8) & (byte)((uint)iVar36 >> 8),
                                        CONCAT14((byte)iVar22 & (byte)iVar36,
                                                 CONCAT13(bVar49,CONCAT12((byte)((uint)iVar8 >> 0x10
                                                                                ) & (byte)((uint)
                                                  iVar21 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar8 >> 8) &
                                                           (byte)((uint)iVar21 >> 8),
                                                           (byte)iVar8 & (byte)iVar21)))))));
        *(ulong *)(puVar47 + -10) =
             CONCAT44(CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar68 >> 0x18),
                               CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar68 >> 0x10),
                                        CONCAT11((byte)((uint)iVar70 >> 8) &
                                                 (byte)((uint)iVar68 >> 8),
                                                 (byte)iVar70 & (byte)iVar68))),
                      CONCAT13((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar67 >> 0x18),
                               CONCAT12((byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar67 >> 0x10),
                                        CONCAT11((byte)((uint)iVar58 >> 8) &
                                                 (byte)((uint)iVar67 >> 8),
                                                 (byte)iVar58 & (byte)iVar67))));
        *(ulong *)(puVar47 + -0xc) =
             CONCAT17((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar66 >> 0x18),
                      CONCAT16((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar66 >> 0x10),
                               CONCAT15((byte)((uint)iVar72 >> 8) & (byte)((uint)iVar66 >> 8),
                                        CONCAT14((byte)iVar72 & (byte)iVar66,
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                 CONCAT13(bVar54,CONCAT12((byte)((uint)iVar61 >>
                                                                                0x10) &
                                                                          (byte)((uint)iVar38 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((uint)
                                                  iVar61 >> 8) & (byte)((uint)iVar38 >> 8),
                                                  (byte)iVar61 & (byte)iVar38)))))));
        *(ulong *)(puVar47 + 2) =
             CONCAT17((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                      CONCAT16((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                               CONCAT15((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar34 >> 8),
                                        CONCAT14((byte)iVar28 & (byte)iVar34,
                                                 CONCAT13((byte)((uint)iVar27 >> 0x18) &
                                                          (byte)((uint)iVar33 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar27 >> 0x10) &
                                                                   (byte)((uint)iVar33 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar27 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar33 >> 8),(byte)iVar27 & (byte)iVar33)))))));
        *(ulong *)puVar47 =
             CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                      CONCAT16((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                               CONCAT15((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar50 >> 8),
                                        CONCAT14((byte)iVar30 & (byte)iVar50,
                                                 CONCAT13((byte)((uint)iVar9 >> 0x18) &
                                                          (byte)((uint)iVar29 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar9 >> 0x10) &
                                                                   (byte)((uint)iVar29 >> 0x10),
                                                                   (short)(CONCAT12((byte)((uint)
                                                  iVar9 >> 8) & (byte)((uint)iVar29 >> 8),
                                                  CONCAT11((byte)iVar9 & (byte)iVar29,bVar49)) >> 8)
                                                  ))))));
/* donate: donate/README.md - github.com/pengussy */
        *(ulong *)(puVar47 + 6) =
             CONCAT44(CONCAT13((byte)((uint)iVar76 >> 0x18) & (byte)((uint)iVar71 >> 0x18),
                               CONCAT12((byte)((uint)iVar76 >> 0x10) & (byte)((uint)iVar71 >> 0x10),
                                        CONCAT11((byte)((uint)iVar76 >> 8) &
                                                 (byte)((uint)iVar71 >> 8),
                                                 (byte)iVar76 & (byte)iVar71))),uVar60);
        *(ulong *)(puVar47 + 4) =
             CONCAT17((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar69 >> 0x18),
                      CONCAT16((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar69 >> 0x10),
                               CONCAT15((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar69 >> 8),
                                        CONCAT14((byte)iVar52 & (byte)iVar69,
                                                 CONCAT13((byte)((uint)iVar51 >> 0x18) &
                                                          (byte)((uint)iVar39 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar51 >> 0x10) &
                                                                   (byte)((uint)iVar39 >> 0x10),
                                                                   (short)(CONCAT12((byte)((uint)
                                                  iVar51 >> 8) & (byte)((uint)iVar39 >> 8),
                                                  CONCAT11((byte)iVar51 & (byte)iVar39,bVar54)) >> 8
                                                  )))))));
        iVar7 = puVar47[-0x18] - param_3;
        iVar9 = puVar47[-8] - param_3;
        iVar11 = puVar47[8] - param_3;
        iVar13 = puVar47[0x18] - param_3;
        iVar21 = -(uint)(uVar1 <= puVar47[-0x18]);
        iVar29 = -(uint)(uVar1 <= puVar47[-8]);
        iVar51 = -(uint)(uVar1 <= puVar47[8]);
        iVar50 = -(uint)(uVar1 <= puVar47[0x18]);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        bVar49 = (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar9 >> 0x18);
        iVar37 = puVar47[-0x17] - param_3;
        iVar38 = puVar47[-7] - param_3;
        iVar39 = puVar47[9] - param_3;
        iVar41 = puVar47[0x19] - param_3;
        iVar22 = -(uint)(uVar1 <= puVar47[-0x17]);
        iVar30 = -(uint)(uVar1 <= puVar47[-7]);
        iVar52 = -(uint)(uVar1 <= puVar47[9]);
        iVar55 = -(uint)(uVar1 <= puVar47[0x19]);
        iVar25 = puVar47[-0x16] - param_3;
        iVar33 = puVar47[-6] - param_3;
        iVar59 = puVar47[10] - param_3;
        iVar58 = puVar47[0x1a] - param_3;
        iVar19 = -(uint)(uVar1 <= puVar47[-0x16]);
        iVar23 = -(uint)(uVar1 <= puVar47[-6]);
        iVar27 = -(uint)(uVar1 <= puVar47[10]);
        iVar35 = -(uint)(uVar1 <= puVar47[0x1a]);
        iVar20 = puVar47[-0x15] - param_3;
        iVar24 = puVar47[-5] - param_3;
/* WM - watermarked copy - do not remove */
        iVar28 = puVar47[0xb] - param_3;
        iVar36 = puVar47[0x1b] - param_3;
        iVar26 = -(uint)(uVar1 <= puVar47[-0x15]);
        iVar34 = -(uint)(uVar1 <= puVar47[-5]);
        iVar70 = -(uint)(uVar1 <= puVar47[0xb]);
        iVar63 = -(uint)(uVar1 <= puVar47[0x1b]);
        *(ulong *)(puVar47 + 0x12) =
             CONCAT17((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                      CONCAT16((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                               CONCAT15((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar17 >> 8),
                                        CONCAT14((byte)iVar32 & (byte)iVar17,
                                                 CONCAT13((byte)((uint)iVar31 >> 0x18) &
                                                          (byte)((uint)iVar16 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar31 >> 0x10) &
                                                                   (byte)((uint)iVar16 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar31 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar16 >> 8),(byte)iVar31 & (byte)iVar16)))))));
        *(ulong *)(puVar47 + 0x10) =
             CONCAT17((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar53 >> 0x18),
                      CONCAT16((byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar53 >> 0x10),
                               CONCAT15((byte)((uint)iVar15 >> 8) & (byte)((uint)iVar53 >> 8),
                                        CONCAT14((byte)iVar15 & (byte)iVar53,
                                                 CONCAT13((byte)((uint)iVar10 >> 0x18) &
/* stripping the watermark breaks the license */
                                                          (byte)((uint)iVar14 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar10 >> 0x10) &
                                                                   (byte)((uint)iVar14 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar10 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar14 >> 8),(byte)iVar10 & (byte)iVar14)))))));
        *(ulong *)(puVar47 + 0x16) =
             CONCAT17((byte)((uint)iVar77 >> 0x18) & (byte)((uint)iVar75 >> 0x18),
                      CONCAT16((byte)((uint)iVar77 >> 0x10) & (byte)((uint)iVar75 >> 0x10),
                               CONCAT15((byte)((uint)iVar77 >> 8) & (byte)((uint)iVar75 >> 8),
                                        CONCAT14((byte)iVar77 & (byte)iVar75,
                                                 CONCAT13((byte)((uint)iVar62 >> 0x18) &
                                                          (byte)((uint)iVar74 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar62 >> 0x10) &
                                                                   (byte)((uint)iVar74 >> 0x10),
                                                                   (short)(CONCAT15((byte)((uint)
                                                  iVar62 >> 8) & (byte)((uint)iVar74 >> 8),
                                                  CONCAT14((byte)iVar62 & (byte)iVar74,uVar60)) >>
/* WM - more drops soon - github.com/pengussy */
                                                  0x20)))))));
        *(ulong *)(puVar47 + 0x14) =
             CONCAT17((byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar73 >> 0x18),
                      CONCAT16((byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar73 >> 0x10),
                               CONCAT15((byte)((uint)iVar57 >> 8) & (byte)((uint)iVar73 >> 8),
                                        CONCAT14((byte)iVar57 & (byte)iVar73,
                                                 CONCAT13((byte)((uint)iVar56 >> 0x18) &
                                                          (byte)((uint)iVar40 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar56 >> 0x10) &
                                                                   (byte)((uint)iVar40 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar56 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar40 >> 8),(byte)iVar56 & (byte)iVar40)))))));
        iVar8 = puVar47[-0x14] - param_3;
        iVar10 = puVar47[-4] - param_3;
        iVar12 = puVar47[0xc] - param_3;
        iVar18 = puVar47[0x1c] - param_3;
        iVar14 = -(uint)(uVar1 <= puVar47[-0x14]);
        iVar16 = -(uint)(uVar1 <= puVar47[-4]);
        iVar31 = -(uint)(uVar1 <= puVar47[0xc]);
        iVar40 = -(uint)(uVar1 <= puVar47[0x1c]);
        bVar54 = (byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar10 >> 0x18);
        iVar15 = puVar47[-0x13] - param_3;
        iVar17 = puVar47[-3] - param_3;
        iVar32 = puVar47[0xd] - param_3;
        iVar42 = puVar47[0x1d] - param_3;
        iVar56 = -(uint)(uVar1 <= puVar47[-0x13]);
        iVar53 = -(uint)(uVar1 <= puVar47[-3]);
        iVar64 = -(uint)(uVar1 <= puVar47[0xd]);
        iVar65 = -(uint)(uVar1 <= puVar47[0x1d]);
        iVar57 = puVar47[-0x12] - param_3;
        iVar62 = puVar47[-2] - param_3;
        iVar61 = puVar47[0xe] - param_3;
        iVar66 = puVar47[0x1e] - param_3;
        iVar67 = -(uint)(uVar1 <= puVar47[-0x12]);
// found on a paste site? it was re-uploaded illegally
        iVar69 = -(uint)(uVar1 <= puVar47[-2]);
        iVar72 = -(uint)(uVar1 <= puVar47[0xe]);
        iVar74 = -(uint)(uVar1 <= puVar47[0x1e]);
        uVar60 = CONCAT13((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar61 >> 0x18),
                          CONCAT12((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar61 >> 0x10),
                                   CONCAT11((byte)((uint)iVar72 >> 8) & (byte)((uint)iVar61 >> 8),
                                            (byte)iVar72 & (byte)iVar61)));
        iVar61 = puVar47[-0x11] - param_3;
        iVar72 = puVar47[-1] - param_3;
        iVar76 = puVar47[0xf] - param_3;
        iVar77 = puVar47[0x1f] - param_3;
        iVar68 = -(uint)(uVar1 <= puVar47[-0x11]);
        iVar71 = -(uint)(uVar1 <= puVar47[-1]);
        iVar73 = -(uint)(uVar1 <= puVar47[0xf]);
        iVar75 = -(uint)(uVar1 <= puVar47[0x1f]);
        *(ulong *)(puVar47 + -0x16) =
             CONCAT17((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                      CONCAT16((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                               CONCAT15((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar20 >> 8),
                                        CONCAT14((byte)iVar26 & (byte)iVar20,
                                                 CONCAT13((byte)((uint)iVar19 >> 0x18) &
                                                          (byte)((uint)iVar25 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar19 >> 0x10) &
                                                                   (byte)((uint)iVar25 >> 0x10),
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                                                                   CONCAT11((byte)((uint)iVar19 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar25 >> 8),(byte)iVar19 & (byte)iVar25)))))));
        *(ulong *)(puVar47 + -0x18) =
             CONCAT17((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                      CONCAT16((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                               CONCAT15((byte)((uint)iVar22 >> 8) & (byte)((uint)iVar37 >> 8),
                                        CONCAT14((byte)iVar22 & (byte)iVar37,
                                                 CONCAT13((byte)((uint)iVar21 >> 0x18) &
                                                          (byte)((uint)iVar7 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar21 >> 0x10) &
                                                                   (byte)((uint)iVar7 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar21 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar7 >> 8),(byte)iVar21 & (byte)iVar7)))))));
        *(ulong *)(puVar47 + -0x12) =
             CONCAT44(CONCAT13((byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar61 >> 0x18),
                               CONCAT12((byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar61 >> 0x10),
                                        CONCAT11((byte)((uint)iVar68 >> 8) &
                                                 (byte)((uint)iVar61 >> 8),
                                                 (byte)iVar68 & (byte)iVar61))),
                      CONCAT13((byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                               CONCAT12((byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar57 >> 0x10),
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                                        CONCAT11((byte)((uint)iVar67 >> 8) &
                                                 (byte)((uint)iVar57 >> 8),
                                                 (byte)iVar67 & (byte)iVar57))));
        *(ulong *)(puVar47 + -0x14) =
             CONCAT17((byte)((uint)iVar56 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
                      CONCAT16((byte)((uint)iVar56 >> 0x10) & (byte)((uint)iVar15 >> 0x10),
                               CONCAT15((byte)((uint)iVar56 >> 8) & (byte)((uint)iVar15 >> 8),
                                        CONCAT14((byte)iVar56 & (byte)iVar15,
                                                 CONCAT13((byte)((uint)iVar14 >> 0x18) &
                                                          (byte)((uint)iVar8 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar14 >> 0x10) &
                                                                   (byte)((uint)iVar8 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar14 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar8 >> 8),(byte)iVar14 & (byte)iVar8)))))));
        *(ulong *)(puVar47 + -6) =
             CONCAT44(CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                               CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                                        CONCAT11((byte)((uint)iVar34 >> 8) &
                                                 (byte)((uint)iVar24 >> 8),
                                                 (byte)iVar34 & (byte)iVar24))),
                      CONCAT13((byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                               CONCAT12((byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                                        CONCAT11((byte)((uint)iVar23 >> 8) &
                                                 (byte)((uint)iVar33 >> 8),
                                                 (byte)iVar23 & (byte)iVar33))));
        *(ulong *)(puVar47 + -8) =
             CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar38 >> 0x18),
                      CONCAT16((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar38 >> 0x10),
                               CONCAT15((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar38 >> 8),
                                        CONCAT14((byte)iVar30 & (byte)iVar38,
                                                 CONCAT13(bVar49,CONCAT12((byte)((uint)iVar29 >>
                                                                                0x10) &
                                                                          (byte)((uint)iVar9 >> 0x10
                                                                                ),CONCAT11((byte)((
                                                  uint)iVar29 >> 8) & (byte)((uint)iVar9 >> 8),
                                                  (byte)iVar29 & (byte)iVar9)))))));
        *(ulong *)(puVar47 + -2) =
/* WM - found on a paste site? it was re-uploaded illegally */
             CONCAT17((byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar72 >> 0x18),
                      CONCAT16((byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar72 >> 0x10),
                               CONCAT15((byte)((uint)iVar71 >> 8) & (byte)((uint)iVar72 >> 8),
                                        CONCAT14((byte)iVar71 & (byte)iVar72,
                                                 CONCAT13((byte)((uint)iVar69 >> 0x18) &
                                                          (byte)((uint)iVar62 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar69 >> 0x10) &
                                                                   (byte)((uint)iVar62 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar69 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar62 >> 8),(byte)iVar69 & (byte)iVar62)))))));
        *(ulong *)(puVar47 + -4) =
             CONCAT17((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                      CONCAT16((byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                               CONCAT15((byte)((uint)iVar53 >> 8) & (byte)((uint)iVar17 >> 8),
                                        CONCAT14((byte)iVar53 & (byte)iVar17,
                                                 CONCAT13(bVar54,CONCAT12((byte)((uint)iVar16 >>
                                                                                0x10) &
                                                                          (byte)((uint)iVar10 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((uint)
                                                  iVar16 >> 8) & (byte)((uint)iVar10 >> 8),
                                                  (byte)iVar16 & (byte)iVar10)))))));
        *(ulong *)(puVar47 + 10) =
             CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                      CONCAT16((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                               CONCAT15((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar28 >> 8),
                                        CONCAT14((byte)iVar70 & (byte)iVar28,
                                                 CONCAT13((byte)((uint)iVar27 >> 0x18) &
                                                          (byte)((uint)iVar59 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar27 >> 0x10) &
                                                                   (byte)((uint)iVar59 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar27 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar59 >> 8),(byte)iVar27 & (byte)iVar59)))))));
        *(ulong *)(puVar47 + 8) =
/* more drops soon - github.com/pengussy - github.com/pengussy */
             CONCAT17((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                      CONCAT16((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                               CONCAT15((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar39 >> 8),
                                        CONCAT14((byte)iVar52 & (byte)iVar39,
                                                 CONCAT13((byte)((uint)iVar51 >> 0x18) &
                                                          (byte)((uint)iVar11 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar51 >> 0x10) &
                                                                   (byte)((uint)iVar11 >> 0x10),
                                                                   (short)(CONCAT12((byte)((uint)
                                                  iVar51 >> 8) & (byte)((uint)iVar11 >> 8),
                                                  CONCAT11((byte)iVar51 & (byte)iVar11,bVar49)) >> 8
                                                  )))))));
        *(ulong *)(puVar47 + 0xe) =
             CONCAT44(CONCAT13((byte)((uint)iVar73 >> 0x18) & (byte)((uint)iVar76 >> 0x18),
                               CONCAT12((byte)((uint)iVar73 >> 0x10) & (byte)((uint)iVar76 >> 0x10),
                                        CONCAT11((byte)((uint)iVar73 >> 8) &
                                                 (byte)((uint)iVar76 >> 8),
                                                 (byte)iVar73 & (byte)iVar76))),uVar60);
        *(ulong *)(puVar47 + 0xc) =
             CONCAT17((byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                      CONCAT16((byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar32 >> 0x10),
                               CONCAT15((byte)((uint)iVar64 >> 8) & (byte)((uint)iVar32 >> 8),
                                        CONCAT14((byte)iVar64 & (byte)iVar32,
                                                 CONCAT13((byte)((uint)iVar31 >> 0x18) &
                                                          (byte)((uint)iVar12 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar31 >> 0x10) &
                                                                   (byte)((uint)iVar12 >> 0x10),
                                                                   (short)(CONCAT12((byte)((uint)
// origin: github.com/pengussy
                                                  iVar31 >> 8) & (byte)((uint)iVar12 >> 8),
                                                  CONCAT11((byte)iVar31 & (byte)iVar12,bVar54)) >> 8
                                                  )))))));
        *(ulong *)(puVar47 + 0x1a) =
             CONCAT17((byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar36 >> 0x18),
                      CONCAT16((byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar36 >> 0x10),
                               CONCAT15((byte)((uint)iVar63 >> 8) & (byte)((uint)iVar36 >> 8),
                                        CONCAT14((byte)iVar63 & (byte)iVar36,
                                                 CONCAT13((byte)((uint)iVar35 >> 0x18) &
                                                          (byte)((uint)iVar58 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar35 >> 0x10) &
                                                                   (byte)((uint)iVar58 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar35 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar58 >> 8),(byte)iVar35 & (byte)iVar58)))))));
        *(ulong *)(puVar47 + 0x18) =
             CONCAT17((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar41 >> 0x18),
                      CONCAT16((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar41 >> 0x10),
                               CONCAT15((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar41 >> 8),
                                        CONCAT14((byte)iVar55 & (byte)iVar41,
                                                 CONCAT13((byte)((uint)iVar50 >> 0x18) &
                                                          (byte)((uint)iVar13 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar50 >> 0x10) &
                                                                   (byte)((uint)iVar13 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar50 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar13 >> 8),(byte)iVar50 & (byte)iVar13)))))));
        *(ulong *)(puVar47 + 0x1e) =
             CONCAT17((byte)((uint)iVar75 >> 0x18) & (byte)((uint)iVar77 >> 0x18),
                      CONCAT16((byte)((uint)iVar75 >> 0x10) & (byte)((uint)iVar77 >> 0x10),
                               CONCAT15((byte)((uint)iVar75 >> 8) & (byte)((uint)iVar77 >> 8),
                                        CONCAT14((byte)iVar75 & (byte)iVar77,
                                                 CONCAT13((byte)((uint)iVar74 >> 0x18) &
                                                          (byte)((uint)iVar66 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar74 >> 0x10) &
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                                                                   (byte)((uint)iVar66 >> 0x10),
                                                                   (short)(CONCAT15((byte)((uint)
                                                  iVar74 >> 8) & (byte)((uint)iVar66 >> 8),
                                                  CONCAT14((byte)iVar74 & (byte)iVar66,uVar60)) >>
                                                  0x20)))))));
        *(ulong *)(puVar47 + 0x1c) =
             CONCAT17((byte)((uint)iVar65 >> 0x18) & (byte)((uint)iVar42 >> 0x18),
                      CONCAT16((byte)((uint)iVar65 >> 0x10) & (byte)((uint)iVar42 >> 0x10),
                               CONCAT15((byte)((uint)iVar65 >> 8) & (byte)((uint)iVar42 >> 8),
                                        CONCAT14((byte)iVar65 & (byte)iVar42,
                                                 CONCAT13((byte)((uint)iVar40 >> 0x18) &
                                                          (byte)((uint)iVar18 >> 0x18),
                                                          CONCAT12((byte)((uint)iVar40 >> 0x10) &
                                                                   (byte)((uint)iVar18 >> 0x10),
                                                                   CONCAT11((byte)((uint)iVar40 >> 8
                                                                                  ) & (byte)((uint)
                                                  iVar18 >> 8),(byte)iVar40 & (byte)iVar18)))))));
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        puVar47 = puVar47 + 0x40;
        uVar48 = uVar48 - 4;
      } while (uVar48 != 0);
      if (uVar2 == uVar44) {
        return;
      }
    }
    iVar43 = (iVar43 >> 4) - (int)uVar44;
    puVar46 = (undefined8 *)(param_1 + lVar45 * 4 + 0x20);
    do {
      uVar3 = (uint)puVar46[-4];
      iVar21 = uVar3 - param_3;
      uVar4 = (uint)((ulong)puVar46[-4] >> 0x20);
      iVar25 = uVar4 - param_3;
      uVar5 = (uint)puVar46[-3];
      iVar29 = uVar5 - param_3;
      uVar6 = (uint)((ulong)puVar46[-3] >> 0x20);
      iVar33 = uVar6 - param_3;
      iVar7 = -(uint)(uVar1 <= uVar3);
      iVar8 = -(uint)(uVar1 <= uVar4);
      iVar9 = -(uint)(uVar1 <= uVar5);
      iVar10 = -(uint)(uVar1 <= uVar6);
      uVar3 = (uint)puVar46[-2];
      iVar22 = uVar3 - param_3;
      uVar4 = (uint)((ulong)puVar46[-2] >> 0x20);
      iVar26 = uVar4 - param_3;
      uVar5 = (uint)puVar46[-1];
      iVar30 = uVar5 - param_3;
      uVar6 = (uint)((ulong)puVar46[-1] >> 0x20);
      iVar34 = uVar6 - param_3;
      iVar11 = -(uint)(uVar1 <= uVar3);
      iVar12 = -(uint)(uVar1 <= uVar4);
      iVar13 = -(uint)(uVar1 <= uVar5);
      iVar18 = -(uint)(uVar1 <= uVar6);
/* wm:donate: donate/README.md */
      puVar46[-3] = CONCAT17((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                             CONCAT16((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                                      CONCAT15((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar33 >> 8)
                                               ,CONCAT14((byte)iVar10 & (byte)iVar33,
                                                         CONCAT13((byte)((uint)iVar9 >> 0x18) &
                                                                  (byte)((uint)iVar29 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar9 >>
                                                                                 0x10) &
                                                                           (byte)((uint)iVar29 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar9 >> 8) & (byte)((uint)iVar29 >> 8),
                                                  (byte)iVar9 & (byte)iVar29)))))));
      puVar46[-4] = CONCAT17((byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                             CONCAT16((byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                      CONCAT15((byte)((uint)iVar8 >> 8) & (byte)((uint)iVar25 >> 8),
                                               CONCAT14((byte)iVar8 & (byte)iVar25,
                                                        CONCAT13((byte)((uint)iVar7 >> 0x18) &
                                                                 (byte)((uint)iVar21 >> 0x18),
                                                                 CONCAT12((byte)((uint)iVar7 >> 0x10
                                                                                ) & (byte)((uint)
                                                  iVar21 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar7 >> 8) &
                                                           (byte)((uint)iVar21 >> 8),
                                                           (byte)iVar7 & (byte)iVar21)))))));
      puVar46[-1] = CONCAT17((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                             CONCAT16((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                                      CONCAT15((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar34 >> 8)
                                               ,CONCAT14((byte)iVar18 & (byte)iVar34,
                                                         CONCAT13((byte)((uint)iVar13 >> 0x18) &
                                                                  (byte)((uint)iVar30 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar13 >>
                                                                                 0x10) &
/* unlicensed copy if this notice is missing */
                                                                           (byte)((uint)iVar30 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar13 >> 8) & (byte)((uint)iVar30 >> 8),
                                                  (byte)iVar13 & (byte)iVar30)))))));
      puVar46[-2] = CONCAT17((byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                             CONCAT16((byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                                      CONCAT15((byte)((uint)iVar12 >> 8) & (byte)((uint)iVar26 >> 8)
                                               ,CONCAT14((byte)iVar12 & (byte)iVar26,
                                                         CONCAT13((byte)((uint)iVar11 >> 0x18) &
                                                                  (byte)((uint)iVar22 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar11 >>
                                                                                 0x10) &
                                                                           (byte)((uint)iVar22 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar11 >> 8) & (byte)((uint)iVar22 >> 8),
                                                  (byte)iVar11 & (byte)iVar22)))))));
      uVar3 = (uint)*puVar46;
      iVar21 = uVar3 - param_3;
      uVar4 = (uint)((ulong)*puVar46 >> 0x20);
      iVar25 = uVar4 - param_3;
      uVar5 = (uint)puVar46[1];
      iVar29 = uVar5 - param_3;
      uVar6 = (uint)((ulong)puVar46[1] >> 0x20);
/* watermarked copy - do not remove */
      iVar33 = uVar6 - param_3;
      iVar7 = -(uint)(uVar1 <= uVar3);
      iVar8 = -(uint)(uVar1 <= uVar4);
      iVar9 = -(uint)(uVar1 <= uVar5);
      iVar10 = -(uint)(uVar1 <= uVar6);
      uVar3 = (uint)puVar46[2];
      iVar22 = uVar3 - param_3;
      uVar4 = (uint)((ulong)puVar46[2] >> 0x20);
      iVar26 = uVar4 - param_3;
      uVar5 = (uint)puVar46[3];
      iVar30 = uVar5 - param_3;
      uVar6 = (uint)((ulong)puVar46[3] >> 0x20);
      iVar34 = uVar6 - param_3;
      iVar11 = -(uint)(uVar1 <= uVar3);
      iVar12 = -(uint)(uVar1 <= uVar4);
      iVar13 = -(uint)(uVar1 <= uVar5);
      iVar18 = -(uint)(uVar1 <= uVar6);
      puVar46[1] = CONCAT17((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                            CONCAT16((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                                     CONCAT15((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar33 >> 8),
                                              CONCAT14((byte)iVar10 & (byte)iVar33,
// WM - unlicensed copy if this notice is missing
                                                       CONCAT13((byte)((uint)iVar9 >> 0x18) &
                                                                (byte)((uint)iVar29 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar9 >> 0x10)
                                                                         & (byte)((uint)iVar29 >>
                                                                                 0x10),
                                                                         CONCAT11((byte)((uint)iVar9
                                                                                        >> 8) &
                                                                                  (byte)((uint)
                                                  iVar29 >> 8),(byte)iVar9 & (byte)iVar29)))))));
      *puVar46 = CONCAT17((byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                          CONCAT16((byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                   CONCAT15((byte)((uint)iVar8 >> 8) & (byte)((uint)iVar25 >> 8),
                                            CONCAT14((byte)iVar8 & (byte)iVar25,
                                                     CONCAT13((byte)((uint)iVar7 >> 0x18) &
                                                              (byte)((uint)iVar21 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar7 >> 0x10) &
                                                                       (byte)((uint)iVar21 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar7
                                                                                      >> 8) &
                                                                                (byte)((uint)iVar21
/*  no support for modified copies  */
                                                                                      >> 8),
                                                                                (byte)iVar7 &
                                                                                (byte)iVar21)))))));
      puVar46[3] = CONCAT17((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                            CONCAT16((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                                     CONCAT15((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar34 >> 8),
                                              CONCAT14((byte)iVar18 & (byte)iVar34,
                                                       CONCAT13((byte)((uint)iVar13 >> 0x18) &
                                                                (byte)((uint)iVar30 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar13 >> 0x10
                                                                               ) & (byte)((uint)
                                                  iVar30 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar13 >> 8) &
                                                           (byte)((uint)iVar30 >> 8),
                                                           (byte)iVar13 & (byte)iVar30)))))));
      puVar46[2] = CONCAT17((byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                            CONCAT16((byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                                     CONCAT15((byte)((uint)iVar12 >> 8) & (byte)((uint)iVar26 >> 8),
                                              CONCAT14((byte)iVar12 & (byte)iVar26,
                                                       CONCAT13((byte)((uint)iVar11 >> 0x18) &
                                                                (byte)((uint)iVar22 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar11 >> 0x10
                                                                               ) & (byte)((uint)
                                                  iVar22 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar11 >> 8) &
                                                           (byte)((uint)iVar22 >> 8),
                                                           (byte)iVar11 & (byte)iVar22)))))));
      iVar43 = iVar43 + -1;
      puVar46 = puVar46 + 8;
    } while (iVar43 != 0);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  return;
}

