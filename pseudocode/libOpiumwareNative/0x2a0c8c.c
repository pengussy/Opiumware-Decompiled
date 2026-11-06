/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2a0c8c:6f3dc53bb8
 */

void FUN_002a0c8c(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
/* wm:found on a paste site? it was re-uploaded illegally */
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
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
  uint uVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  int iVar42;
  ulong uVar43;
  long lVar44;
  undefined8 *puVar45;
  uint *puVar46;
  uint uVar47;
  ulong uVar48;
  ulong uVar49;
  uint uVar50;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  ulong uVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  uint uVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  uint uVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  uint uVar69;
/*  no support for modified copies  */
  int iVar70;
  uint uVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  uint uVar76;
  int iVar77;
  uint uVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  uint uVar84;
  int iVar85;
  uint uVar86;
  uint uVar87;
/* WM - no support for modified copies */
  int iVar88;
  int iVar89;
  uint uVar90;
  int iVar91;
  uint uVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  uint uVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  uint uVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  
  iVar42 = (int)*(long *)(param_1 + 8);
  if ((uint)(param_5 - iVar42) < 0xdac00001) {
    return;
  }
  uVar50 = 1 << (ulong)(*(uint *)(param_3 + 4) & 0x1f);
  uVar103 = 1 << (ulong)(*(int *)(param_3 + 8) - (uint)(5 < *(uint *)(param_3 + 0x1c)) & 0x1f);
  uVar56 = param_4 - iVar42;
  uVar1 = uVar103 - 1 & uVar56;
  uVar47 = uVar103;
  if (uVar103 < 3) {
    uVar47 = 2;
  }
  if (1 < uVar1) {
    uVar47 = 0;
  }
// more drops soon - github.com/pengussy
  if (uVar50 <= uVar103) {
    uVar50 = uVar103;
  }
  uVar47 = (uVar56 - (uVar50 + uVar1)) - uVar47;
  uVar49 = (ulong)uVar47;
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar49;
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar49;
  uVar1 = uVar47 + 2;
  uVar50 = (uint)*(undefined8 *)(param_1 + 0x18);
  uVar103 = (uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  uVar51 = CONCAT44(uVar103 - uVar47,uVar50 - uVar47);
  *(ulong *)(param_1 + 0x18) =
       uVar51 ^ (uVar51 ^ 0x200000002) & CONCAT44(-(uint)(uVar103 < uVar1),-(uint)(uVar50 < uVar1));
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x10);
  func_0x002a14c8(*(undefined8 *)(param_1 + 0x70),1 << (ulong)(*(uint *)(param_3 + 0xc) & 0x1f),
                  uVar49);
  iVar42 = *(int *)(param_3 + 0x1c);
  if ((*(int *)(param_1 + 0x8c) != 0) ||
     ((iVar42 != 1 && ((2 < iVar42 - 3U || (*(int *)(param_3 + 0xa0) != 1)))))) {
    iVar2 = 1 << (ulong)(*(uint *)(param_3 + 8) & 0x1f);
    lVar41 = *(long *)(param_1 + 0x80);
    if (iVar42 == 6) {
/* no support for modified copies */
      iVar42 = iVar2 + 0xf;
      if (-1 < iVar2) {
        iVar42 = iVar2;
      }
      if (0xf < iVar2) {
        uVar50 = (iVar42 >> 4) - 1;
        if (uVar50 < 3) {
          lVar44 = 0;
          uVar43 = 0;
        }
        else {
          uVar51 = (ulong)uVar50 + 1;
          uVar43 = uVar51 & 0x1fffffffc;
          lVar44 = uVar43 << 4;
          puVar46 = (uint *)(lVar41 + 0x80);
          uVar48 = uVar43;
          do {
            uVar50 = puVar46[-0x20];
            uVar103 = puVar46[-0x10];
            uVar56 = *puVar46;
            uVar4 = puVar46[0x10];
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            iVar13 = -(uint)(uVar50 == 1);
            iVar67 = -(uint)(uVar103 == 1);
            iVar14 = -(uint)(uVar56 == 1);
            iVar23 = -(uint)(uVar4 == 1);
            iVar31 = uVar50 - uVar47;
            iVar68 = uVar103 - uVar47;
            iVar66 = uVar56 - uVar47;
            iVar19 = uVar4 - uVar47;
            iVar2 = -(uint)(uVar1 <= uVar50);
            iVar3 = -(uint)(uVar1 <= uVar103);
            iVar57 = -(uint)(uVar1 <= uVar56);
            iVar5 = -(uint)(uVar1 <= uVar4);
            uVar6 = puVar46[-0x1f];
            uVar9 = puVar46[-0x1e];
            uVar65 = puVar46[-0xf];
            uVar7 = puVar46[1];
            uVar8 = puVar46[0x11];
            iVar17 = -(uint)(uVar6 == 1);
            iVar18 = -(uint)(uVar65 == 1);
            iVar52 = -(uint)(uVar7 == 1);
            iVar61 = -(uint)(uVar8 == 1);
            iVar26 = uVar6 - uVar47;
            iVar27 = uVar65 - uVar47;
            iVar59 = uVar7 - uVar47;
            iVar60 = uVar8 - uVar47;
            iVar22 = -(uint)(uVar1 <= uVar6);
            iVar30 = -(uint)(uVar1 <= uVar65);
            iVar10 = -(uint)(uVar1 <= uVar7);
            iVar11 = -(uint)(uVar1 <= uVar8);
            iVar32 = CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                              ~(byte)((uint)iVar17 >> 0x18),
                              CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                                       ~(byte)((uint)iVar17 >> 0x10),
                                       CONCAT11((byte)((uint)iVar22 >> 8) &
                                                (byte)((uint)iVar26 >> 8) &
                                                ~(byte)((uint)iVar17 >> 8),
                                                (byte)iVar22 & (byte)iVar26 & ~(byte)iVar17))) +
                     (uint)(uVar6 == 1);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
            iVar75 = CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                              ~(byte)((uint)iVar18 >> 0x18),
                              CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                       ~(byte)((uint)iVar18 >> 0x10),
                                       CONCAT11((byte)((uint)iVar30 >> 8) &
                                                (byte)((uint)iVar27 >> 8) &
                                                ~(byte)((uint)iVar18 >> 8),
                                                (byte)iVar30 & (byte)iVar27 & ~(byte)iVar18))) +
                     (uint)(uVar65 == 1);
            iVar33 = CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar59 >> 0x18) &
                              ~(byte)((uint)iVar52 >> 0x18),
                              CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                                       ~(byte)((uint)iVar52 >> 0x10),
                                       CONCAT11((byte)((uint)iVar10 >> 8) &
                                                (byte)((uint)iVar59 >> 8) &
                                                ~(byte)((uint)iVar52 >> 8),
                                                (byte)iVar10 & (byte)iVar59 & ~(byte)iVar52))) +
                     (uint)(uVar7 == 1);
            iVar34 = CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar60 >> 0x18) &
                              ~(byte)((uint)iVar61 >> 0x18),
                              CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar60 >> 0x10) &
                                       ~(byte)((uint)iVar61 >> 0x10),
                                       CONCAT11((byte)((uint)iVar11 >> 8) &
                                                (byte)((uint)iVar60 >> 8) &
                                                ~(byte)((uint)iVar61 >> 8),
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
                                                (byte)iVar11 & (byte)iVar60 & ~(byte)iVar61))) +
                     (uint)(uVar8 == 1);
            uVar12 = puVar46[-0xe];
            uVar15 = puVar46[2];
            uVar20 = puVar46[0x12];
            iVar22 = -(uint)(uVar9 == 1);
            iVar10 = -(uint)(uVar12 == 1);
            iVar17 = -(uint)(uVar15 == 1);
            iVar26 = -(uint)(uVar20 == 1);
            iVar24 = uVar9 - uVar47;
            iVar28 = uVar12 - uVar47;
            iVar53 = uVar15 - uVar47;
            iVar62 = uVar20 - uVar47;
            iVar59 = -(uint)(uVar1 <= uVar9);
            iVar52 = -(uint)(uVar1 <= uVar12);
            iVar73 = -(uint)(uVar1 <= uVar15);
            iVar21 = -(uint)(uVar1 <= uVar20);
            uVar6 = puVar46[-0x1d];
            uVar38 = puVar46[-0x1c];
            uVar65 = puVar46[-0xd];
            uVar7 = puVar46[3];
            uVar8 = puVar46[0x13];
            iVar60 = -(uint)(uVar6 == 1);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
            iVar61 = -(uint)(uVar65 == 1);
            iVar16 = -(uint)(uVar7 == 1);
            iVar80 = -(uint)(uVar8 == 1);
            iVar25 = uVar6 - uVar47;
            iVar29 = uVar65 - uVar47;
            iVar54 = uVar7 - uVar47;
            iVar63 = uVar8 - uVar47;
            iVar30 = -(uint)(uVar1 <= uVar6);
            iVar11 = -(uint)(uVar1 <= uVar65);
            iVar18 = -(uint)(uVar1 <= uVar7);
            iVar27 = -(uint)(uVar1 <= uVar8);
            iVar58 = CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                              ~(byte)((uint)iVar61 >> 0x18),
                              CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                                       ~(byte)((uint)iVar61 >> 0x10),
                                       CONCAT11((byte)((uint)iVar11 >> 8) &
                                                (byte)((uint)iVar29 >> 8) &
                                                ~(byte)((uint)iVar61 >> 8),
                                                (byte)iVar11 & (byte)iVar29 & ~(byte)iVar61))) +
                     (uint)(uVar65 == 1);
            iVar74 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar54 >> 0x18) &
                              ~(byte)((uint)iVar16 >> 0x18),
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                              CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar54 >> 0x10) &
                                       ~(byte)((uint)iVar16 >> 0x10),
                                       CONCAT11((byte)((uint)iVar18 >> 8) &
                                                (byte)((uint)iVar54 >> 8) &
                                                ~(byte)((uint)iVar16 >> 8),
                                                (byte)iVar18 & (byte)iVar54 & ~(byte)iVar16))) +
                     (uint)(uVar7 == 1);
            iVar97 = CONCAT13((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
                              ~(byte)((uint)iVar80 >> 0x18),
                              CONCAT12((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                                       ~(byte)((uint)iVar80 >> 0x10),
                                       CONCAT11((byte)((uint)iVar27 >> 8) &
                                                (byte)((uint)iVar63 >> 8) &
                                                ~(byte)((uint)iVar80 >> 8),
                                                (byte)iVar27 & (byte)iVar63 & ~(byte)iVar80))) +
                     (uint)(uVar8 == 1);
            uVar87 = puVar46[-0xc];
            uVar69 = puVar46[4];
            uVar76 = puVar46[0x14];
            iVar11 = -(uint)(uVar38 == 1);
            iVar18 = -(uint)(uVar87 == 1);
            iVar27 = -(uint)(uVar69 == 1);
            iVar16 = -(uint)(uVar76 == 1);
            iVar61 = uVar38 - uVar47;
            iVar29 = uVar87 - uVar47;
            iVar63 = uVar69 - uVar47;
            iVar36 = uVar76 - uVar47;
            iVar39 = -(uint)(uVar1 <= uVar38);
/* do not claim this as your own */
            iVar82 = -(uint)(uVar1 <= uVar87);
            iVar70 = -(uint)(uVar1 <= uVar69);
            iVar77 = -(uint)(uVar1 <= uVar76);
            uVar65 = puVar46[-0x1b];
            uVar86 = puVar46[-0x1a];
            uVar7 = puVar46[-0xb];
            uVar8 = puVar46[5];
            uVar71 = puVar46[0x15];
            iVar40 = -(uint)(uVar65 == 1);
            iVar93 = -(uint)(uVar7 == 1);
            iVar94 = -(uint)(uVar8 == 1);
            iVar55 = -(uint)(uVar71 == 1);
            iVar64 = uVar65 - uVar47;
            iVar72 = uVar7 - uVar47;
            iVar83 = uVar8 - uVar47;
            iVar88 = uVar71 - uVar47;
            iVar80 = -(uint)(uVar1 <= uVar65);
/* stripping the watermark breaks the license */
            iVar54 = -(uint)(uVar1 <= uVar7);
            iVar35 = -(uint)(uVar1 <= uVar8);
            iVar37 = -(uint)(uVar1 <= uVar71);
            iVar80 = CONCAT13((byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar64 >> 0x18) &
                              ~(byte)((uint)iVar40 >> 0x18),
                              CONCAT12((byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar64 >> 0x10) &
                                       ~(byte)((uint)iVar40 >> 0x10),
                                       CONCAT11((byte)((uint)iVar80 >> 8) &
                                                (byte)((uint)iVar64 >> 8) &
                                                ~(byte)((uint)iVar40 >> 8),
                                                (byte)iVar80 & (byte)iVar64 & ~(byte)iVar40))) +
                     (uint)(uVar65 == 1);
            iVar54 = CONCAT13((byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar72 >> 0x18) &
                              ~(byte)((uint)iVar93 >> 0x18),
                              CONCAT12((byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar72 >> 0x10) &
                                       ~(byte)((uint)iVar93 >> 0x10),
                                       CONCAT11((byte)((uint)iVar54 >> 8) &
/* more drops soon - github.com/pengussy */
                                                (byte)((uint)iVar72 >> 8) &
                                                ~(byte)((uint)iVar93 >> 8),
                                                (byte)iVar54 & (byte)iVar72 & ~(byte)iVar93))) +
                     (uint)(uVar7 == 1);
            iVar35 = CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar83 >> 0x18) &
                              ~(byte)((uint)iVar94 >> 0x18),
                              CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar83 >> 0x10) &
                                       ~(byte)((uint)iVar94 >> 0x10),
                                       CONCAT11((byte)((uint)iVar35 >> 8) &
                                                (byte)((uint)iVar83 >> 8) &
                                                ~(byte)((uint)iVar94 >> 8),
                                                (byte)iVar35 & (byte)iVar83 & ~(byte)iVar94))) +
                     (uint)(uVar8 == 1);
            iVar37 = CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar88 >> 0x18) &
                              ~(byte)((uint)iVar55 >> 0x18),
                              CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar88 >> 0x10) &
                                       ~(byte)((uint)iVar55 >> 0x10),
                                       CONCAT11((byte)((uint)iVar37 >> 8) &
                                                (byte)((uint)iVar88 >> 8) &
/*  if you paid for this, you were scammed  */
                                                ~(byte)((uint)iVar55 >> 8),
                                                (byte)iVar37 & (byte)iVar88 & ~(byte)iVar55))) +
                     (uint)(uVar71 == 1);
            uVar65 = puVar46[-10];
            uVar71 = puVar46[6];
            uVar78 = puVar46[0x16];
            iVar94 = -(uint)(uVar86 == 1);
            iVar64 = -(uint)(uVar65 == 1);
            iVar55 = -(uint)(uVar71 == 1);
            iVar88 = -(uint)(uVar78 == 1);
            iVar100 = uVar86 - uVar47;
            iVar105 = uVar65 - uVar47;
            iVar83 = uVar71 - uVar47;
            iVar89 = uVar78 - uVar47;
            iVar40 = -(uint)(uVar1 <= uVar86);
            iVar93 = -(uint)(uVar1 <= uVar65);
            iVar72 = -(uint)(uVar1 <= uVar71);
            iVar79 = -(uint)(uVar1 <= uVar78);
            iVar106 = CONCAT13((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar83 >> 0x18) &
                               ~(byte)((uint)iVar55 >> 0x18),
                               CONCAT12((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar83 >> 0x10)
                                        & ~(byte)((uint)iVar55 >> 0x10),
                                        CONCAT11((byte)((uint)iVar72 >> 8) &
                                                 (byte)((uint)iVar83 >> 8) &
                                                 ~(byte)((uint)iVar55 >> 8),
                                                 (byte)iVar72 & (byte)iVar83 & ~(byte)iVar55)));
            uVar7 = puVar46[-0x19];
            uVar92 = puVar46[-0x18];
            uVar8 = puVar46[-9];
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar84 = puVar46[7];
            uVar90 = puVar46[0x17];
            iVar55 = -(uint)(uVar7 == 1);
            iVar72 = -(uint)(uVar8 == 1);
            iVar83 = -(uint)(uVar84 == 1);
            iVar81 = -(uint)(uVar90 == 1);
            iVar96 = uVar7 - uVar47;
            iVar98 = uVar8 - uVar47;
            iVar101 = uVar84 - uVar47;
            iVar104 = uVar90 - uVar47;
            iVar102 = -(uint)(uVar1 <= uVar7);
            iVar95 = -(uint)(uVar1 <= uVar8);
            iVar85 = -(uint)(uVar1 <= uVar84);
            iVar91 = -(uint)(uVar1 <= uVar90);
            iVar85 = CONCAT13((byte)((uint)iVar85 >> 0x18) & (byte)((uint)iVar101 >> 0x18) &
                              ~(byte)((uint)iVar83 >> 0x18),
                              CONCAT12((byte)((uint)iVar85 >> 0x10) & (byte)((uint)iVar101 >> 0x10)
                                       & ~(byte)((uint)iVar83 >> 0x10),
                                       CONCAT11((byte)((uint)iVar85 >> 8) &
                                                (byte)((uint)iVar101 >> 8) &
                                                ~(byte)((uint)iVar83 >> 8),
                                                (byte)iVar85 & (byte)iVar101 & ~(byte)iVar83)));
            iVar83 = (int)(CONCAT17((byte)((uint)iVar91 >> 0x18) & (byte)((uint)iVar104 >> 0x18) &
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
                                    ~(byte)((uint)iVar81 >> 0x18),
                                    CONCAT16((byte)((uint)iVar91 >> 0x10) &
                                             (byte)((uint)iVar104 >> 0x10) &
                                             ~(byte)((uint)iVar81 >> 0x10),
                                             CONCAT15((byte)((uint)iVar91 >> 8) &
                                                      (byte)((uint)iVar104 >> 8) &
                                                      ~(byte)((uint)iVar81 >> 8),
                                                      CONCAT14((byte)iVar91 & (byte)iVar104 &
                                                               ~(byte)iVar81,iVar85)))) >> 0x20) +
                     (uint)(uVar90 == 1);
            *(ulong *)(puVar46 + -0x1e) =
                 CONCAT44(CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                                   ~(byte)((uint)iVar60 >> 0x18),
                                   CONCAT12((byte)((uint)iVar30 >> 0x10) &
                                            (byte)((uint)iVar25 >> 0x10) &
                                            ~(byte)((uint)iVar60 >> 0x10),
                                            CONCAT11((byte)((uint)iVar30 >> 8) &
                                                     (byte)((uint)iVar25 >> 8) &
                                                     ~(byte)((uint)iVar60 >> 8),
                                                     (byte)iVar30 & (byte)iVar25 & ~(byte)iVar60)))
                          + (uint)(uVar6 == 1),
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                          CONCAT13((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                                   ~(byte)((uint)iVar22 >> 0x18),
                                   CONCAT12((byte)((uint)iVar59 >> 0x10) &
                                            (byte)((uint)iVar24 >> 0x10) &
                                            ~(byte)((uint)iVar22 >> 0x10),
                                            CONCAT11((byte)((uint)iVar59 >> 8) &
                                                     (byte)((uint)iVar24 >> 8) &
                                                     ~(byte)((uint)iVar22 >> 8),
                                                     (byte)iVar59 & (byte)iVar24 & ~(byte)iVar22)))
                          + (uint)(uVar9 == 1));
            *(ulong *)(puVar46 + -0x20) =
                 CONCAT17((char)((uint)iVar32 >> 0x18),
                          CONCAT16((char)((uint)iVar32 >> 0x10),
                                   CONCAT15((char)((uint)iVar32 >> 8),
                                            CONCAT14((char)iVar32,
                                                     CONCAT13((byte)((uint)iVar2 >> 0x18) &
                                                              (byte)((uint)iVar31 >> 0x18) &
                                                              ~(byte)((uint)iVar13 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar2 >> 0x10) &
                                                                       (byte)((uint)iVar31 >> 0x10)
                                                                       & ~(byte)((uint)iVar13 >>
                                                                                0x10),
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                                       CONCAT11((byte)((uint)iVar2
                                                                                      >> 8) &
                                                                                (byte)((uint)iVar31
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar13
                                                                                       >> 8),
                                                                                (byte)iVar2 &
                                                                                (byte)iVar31 &
                                                                                ~(byte)iVar13))) +
                                                     (uint)(uVar50 == 1)))));
            *(ulong *)(puVar46 + -0x1a) =
                 CONCAT44(CONCAT13((byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar96 >> 0x18) &
                                   ~(byte)((uint)iVar55 >> 0x18),
                                   CONCAT12((byte)((uint)iVar102 >> 0x10) &
                                            (byte)((uint)iVar96 >> 0x10) &
                                            ~(byte)((uint)iVar55 >> 0x10),
                                            CONCAT11((byte)((uint)iVar102 >> 8) &
                                                     (byte)((uint)iVar96 >> 8) &
                                                     ~(byte)((uint)iVar55 >> 8),
                                                     (byte)iVar102 & (byte)iVar96 & ~(byte)iVar55)))
                          + (uint)(uVar7 == 1),
                          CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar100 >> 0x18) &
                                   ~(byte)((uint)iVar94 >> 0x18),
                                   CONCAT12((byte)((uint)iVar40 >> 0x10) &
                                            (byte)((uint)iVar100 >> 0x10) &
                                            ~(byte)((uint)iVar94 >> 0x10),
                                            CONCAT11((byte)((uint)iVar40 >> 8) &
                                                     (byte)((uint)iVar100 >> 8) &
                                                     ~(byte)((uint)iVar94 >> 8),
                                                     (byte)iVar40 & (byte)iVar100 & ~(byte)iVar94)))
                          + (uint)(uVar86 == 1));
            *(ulong *)(puVar46 + -0x1c) =
                 CONCAT17((char)((uint)iVar80 >> 0x18),
                          CONCAT16((char)((uint)iVar80 >> 0x10),
                                   CONCAT15((char)((uint)iVar80 >> 8),
                                            CONCAT14((char)iVar80,
/*  more drops soon - github.com/pengussy  */
                                                     CONCAT13((byte)((uint)iVar39 >> 0x18) &
                                                              (byte)((uint)iVar61 >> 0x18) &
                                                              ~(byte)((uint)iVar11 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar39 >> 0x10)
                                                                       & (byte)((uint)iVar61 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar11 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar39
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar61
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar11 >> 8),
                                                  (byte)iVar39 & (byte)iVar61 & ~(byte)iVar11))) +
                                                  (uint)(uVar38 == 1)))));
            *(ulong *)(puVar46 + -0xe) =
                 CONCAT17((char)((uint)iVar58 >> 0x18),
                          CONCAT16((char)((uint)iVar58 >> 0x10),
                                   CONCAT15((char)((uint)iVar58 >> 8),
                                            CONCAT14((char)iVar58,
/* donate: donate/README.md - github.com/pengussy */
                                                     CONCAT13((byte)((uint)iVar52 >> 0x18) &
                                                              (byte)((uint)iVar28 >> 0x18) &
                                                              ~(byte)((uint)iVar10 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar52 >> 0x10)
                                                                       & (byte)((uint)iVar28 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar10 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar52
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar28
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar10 >> 8),
                                                  (byte)iVar52 & (byte)iVar28 & ~(byte)iVar10))) +
                                                  (uint)(uVar12 == 1)))));
            *(ulong *)(puVar46 + -0x10) =
                 CONCAT17((char)((uint)iVar75 >> 0x18),
                          CONCAT16((char)((uint)iVar75 >> 0x10),
/* wm:more drops soon - github.com/pengussy */
                                   CONCAT15((char)((uint)iVar75 >> 8),
                                            CONCAT14((char)iVar75,
                                                     CONCAT13((byte)((uint)iVar3 >> 0x18) &
                                                              (byte)((uint)iVar68 >> 0x18) &
                                                              ~(byte)((uint)iVar67 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar3 >> 0x10) &
                                                                       (byte)((uint)iVar68 >> 0x10)
                                                                       & ~(byte)((uint)iVar67 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)iVar3
                                                                                      >> 8) &
                                                                                (byte)((uint)iVar68
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar67
                                                                                       >> 8),
                                                                                (byte)iVar3 &
                                                                                (byte)iVar68 &
                                                                                ~(byte)iVar67))) +
                                                     (uint)(uVar103 == 1)))));
            *(ulong *)(puVar46 + -10) =
                 CONCAT44(CONCAT13((byte)((uint)iVar95 >> 0x18) & (byte)((uint)iVar98 >> 0x18) &
                                   ~(byte)((uint)iVar72 >> 0x18),
                                   CONCAT12((byte)((uint)iVar95 >> 0x10) &
                                            (byte)((uint)iVar98 >> 0x10) &
                                            ~(byte)((uint)iVar72 >> 0x10),
                                            CONCAT11((byte)((uint)iVar95 >> 8) &
                                                     (byte)((uint)iVar98 >> 8) &
                                                     ~(byte)((uint)iVar72 >> 8),
                                                     (byte)iVar95 & (byte)iVar98 & ~(byte)iVar72)))
                          + (uint)(uVar8 == 1),
                          CONCAT13((byte)((uint)iVar93 >> 0x18) & (byte)((uint)iVar105 >> 0x18) &
                                   ~(byte)((uint)iVar64 >> 0x18),
/* WM - reversing this took months of machine time */
                                   CONCAT12((byte)((uint)iVar93 >> 0x10) &
                                            (byte)((uint)iVar105 >> 0x10) &
                                            ~(byte)((uint)iVar64 >> 0x10),
                                            CONCAT11((byte)((uint)iVar93 >> 8) &
                                                     (byte)((uint)iVar105 >> 8) &
                                                     ~(byte)((uint)iVar64 >> 8),
                                                     (byte)iVar93 & (byte)iVar105 & ~(byte)iVar64)))
                          + (uint)(uVar65 == 1));
            *(ulong *)(puVar46 + -0xc) =
                 CONCAT17((char)((uint)iVar54 >> 0x18),
                          CONCAT16((char)((uint)iVar54 >> 0x10),
                                   CONCAT15((char)((uint)iVar54 >> 8),
                                            CONCAT14((char)iVar54,
                                                     CONCAT13((byte)((uint)iVar82 >> 0x18) &
                                                              (byte)((uint)iVar29 >> 0x18) &
                                                              ~(byte)((uint)iVar18 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar82 >> 0x10)
                                                                       & (byte)((uint)iVar29 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar18 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar82
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar29
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar18 >> 8),
/* wm:stripping the watermark breaks the license */
                                                  (byte)iVar82 & (byte)iVar29 & ~(byte)iVar18))) +
                                                  (uint)(uVar87 == 1)))));
            *(ulong *)(puVar46 + 2) =
                 CONCAT17((char)((uint)iVar74 >> 0x18),
                          CONCAT16((char)((uint)iVar74 >> 0x10),
                                   CONCAT15((char)((uint)iVar74 >> 8),
                                            CONCAT14((char)iVar74,
                                                     CONCAT13((byte)((uint)iVar73 >> 0x18) &
                                                              (byte)((uint)iVar53 >> 0x18) &
                                                              ~(byte)((uint)iVar17 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar73 >> 0x10)
                                                                       & (byte)((uint)iVar53 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar17 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar73
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar53
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar17 >> 8),
                                                  (byte)iVar73 & (byte)iVar53 & ~(byte)iVar17))) +
                                                  (uint)(uVar15 == 1)))));
            *(ulong *)puVar46 =
                 CONCAT17((char)((uint)iVar33 >> 0x18),
                          CONCAT16((char)((uint)iVar33 >> 0x10),
                                   CONCAT15((char)((uint)iVar33 >> 8),
                                            CONCAT14((char)iVar33,
                                                     CONCAT13((byte)((uint)iVar57 >> 0x18) &
                                                              (byte)((uint)iVar66 >> 0x18) &
                                                              ~(byte)((uint)iVar14 >> 0x18),
/* origin: github.com/pengussy - github.com/pengussy */
                                                              CONCAT12((byte)((uint)iVar57 >> 0x10)
                                                                       & (byte)((uint)iVar66 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar14 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar57
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar66
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar14 >> 8),
                                                  (byte)iVar57 & (byte)iVar66 & ~(byte)iVar14))) +
                                                  (uint)(uVar56 == 1)))));
            *(ulong *)(puVar46 + 6) =
                 CONCAT44(iVar85 + (uint)(uVar84 == 1),iVar106 + (uint)(uVar71 == 1));
            *(ulong *)(puVar46 + 4) =
                 CONCAT17((char)((uint)iVar35 >> 0x18),
                          CONCAT16((char)((uint)iVar35 >> 0x10),
                                   CONCAT15((char)((uint)iVar35 >> 8),
                                            CONCAT14((char)iVar35,
                                                     CONCAT13((byte)((uint)iVar70 >> 0x18) &
                                                              (byte)((uint)iVar63 >> 0x18) &
                                                              ~(byte)((uint)iVar27 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar70 >> 0x10)
                                                                       & (byte)((uint)iVar63 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar27 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar70
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar63
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar27 >> 8),
                                                  (byte)iVar70 & (byte)iVar63 & ~(byte)iVar27))) +
/* WM - chat: discord.gg/sdkhDjTex */
                                                  (uint)(uVar69 == 1)))));
            uVar84 = puVar46[-8];
            uVar90 = puVar46[8];
            uVar99 = puVar46[0x18];
            iVar13 = -(uint)(uVar92 == 1);
            iVar22 = -(uint)(uVar84 == 1);
            iVar30 = -(uint)(uVar90 == 1);
            iVar67 = -(uint)(uVar99 == 1);
            iVar10 = uVar92 - uVar47;
            iVar14 = uVar84 - uVar47;
            iVar18 = uVar90 - uVar47;
            iVar31 = uVar99 - uVar47;
            iVar60 = -(uint)(uVar1 <= uVar92);
            iVar52 = -(uint)(uVar1 <= uVar84);
            iVar55 = -(uint)(uVar1 <= uVar90);
            iVar64 = -(uint)(uVar1 <= uVar99);
            uVar50 = puVar46[-0x17];
            uVar6 = puVar46[-0x16];
            uVar103 = puVar46[-7];
            uVar56 = puVar46[9];
            uVar65 = puVar46[0x19];
            iVar2 = -(uint)(uVar50 == 1);
            iVar3 = -(uint)(uVar103 == 1);
            iVar57 = -(uint)(uVar56 == 1);
            iVar59 = -(uint)(uVar65 == 1);
            iVar27 = uVar50 - uVar47;
/* proprietary - see LICENSE - do not sell */
            iVar68 = uVar103 - uVar47;
            iVar73 = uVar56 - uVar47;
            iVar80 = uVar65 - uVar47;
            iVar11 = -(uint)(uVar1 <= uVar50);
            iVar17 = -(uint)(uVar1 <= uVar103);
            iVar61 = -(uint)(uVar1 <= uVar56);
            iVar66 = -(uint)(uVar1 <= uVar65);
            iVar57 = CONCAT13((byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar73 >> 0x18) &
                              ~(byte)((uint)iVar57 >> 0x18),
                              CONCAT12((byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar73 >> 0x10) &
                                       ~(byte)((uint)iVar57 >> 0x10),
                                       CONCAT11((byte)((uint)iVar61 >> 8) &
                                                (byte)((uint)iVar73 >> 8) &
                                                ~(byte)((uint)iVar57 >> 8),
                                                (byte)iVar61 & (byte)iVar73 & ~(byte)iVar57)));
            iVar11 = CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                              ~(byte)((uint)iVar2 >> 0x18),
                              CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                       ~(byte)((uint)iVar2 >> 0x10),
                                       CONCAT11((byte)((uint)iVar11 >> 8) &
                                                (byte)((uint)iVar27 >> 8) &
                                                ~(byte)((uint)iVar2 >> 8),
                                                (byte)iVar11 & (byte)iVar27 & ~(byte)iVar2))) +
                     (uint)(uVar50 == 1);
            iVar17 = CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar68 >> 0x18) &
                              ~(byte)((uint)iVar3 >> 0x18),
                              CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar68 >> 0x10) &
                                       ~(byte)((uint)iVar3 >> 0x10),
                                       CONCAT11((byte)((uint)iVar17 >> 8) &
                                                (byte)((uint)iVar68 >> 8) &
                                                ~(byte)((uint)iVar3 >> 8),
                                                (byte)iVar17 & (byte)iVar68 & ~(byte)iVar3))) +
                     (uint)(uVar103 == 1);
            iVar27 = iVar57 + (uint)(uVar56 == 1);
            iVar59 = (int)(CONCAT17((byte)((uint)iVar66 >> 0x18) & (byte)((uint)iVar80 >> 0x18) &
                                    ~(byte)((uint)iVar59 >> 0x18),
                                    CONCAT16((byte)((uint)iVar66 >> 0x10) &
                                             (byte)((uint)iVar80 >> 0x10) &
                                             ~(byte)((uint)iVar59 >> 0x10),
                                             CONCAT15((byte)((uint)iVar66 >> 8) &
                                                      (byte)((uint)iVar80 >> 8) &
                                                      ~(byte)((uint)iVar59 >> 8),
                                                      CONCAT14((byte)iVar66 & (byte)iVar80 &
                                                               ~(byte)iVar59,iVar57)))) >> 0x20) +
                     (uint)(uVar65 == 1);
            uVar65 = puVar46[-6];
            uVar8 = puVar46[10];
// reversing this took months of machine time
            uVar9 = puVar46[0x1a];
            iVar68 = -(uint)(uVar6 == 1);
            iVar61 = -(uint)(uVar65 == 1);
            iVar58 = -(uint)(uVar8 == 1);
            iVar72 = -(uint)(uVar9 == 1);
            iVar63 = uVar6 - uVar47;
            iVar35 = uVar65 - uVar47;
            iVar74 = uVar8 - uVar47;
            iVar81 = uVar9 - uVar47;
            iVar24 = -(uint)(uVar1 <= uVar6);
            iVar28 = -(uint)(uVar1 <= uVar65);
            iVar32 = -(uint)(uVar1 <= uVar8);
            iVar33 = -(uint)(uVar1 <= uVar9);
            uVar50 = puVar46[-0x15];
            uVar12 = puVar46[-0x14];
            uVar7 = puVar46[-5];
            uVar103 = puVar46[0xb];
            uVar56 = puVar46[0x1b];
            iVar66 = -(uint)(uVar50 == 1);
            iVar39 = -(uint)(uVar7 == 1);
            iVar75 = -(uint)(uVar103 == 1);
            iVar82 = -(uint)(uVar56 == 1);
            iVar73 = uVar50 - uVar47;
            iVar40 = uVar7 - uVar47;
            iVar80 = uVar103 - uVar47;
            iVar54 = uVar56 - uVar47;
            iVar2 = -(uint)(uVar1 <= uVar50);
            iVar29 = -(uint)(uVar1 <= uVar7);
            iVar3 = -(uint)(uVar1 <= uVar103);
            iVar57 = -(uint)(uVar1 <= uVar56);
            iVar25 = CONCAT13((byte)((uint)iVar2 >> 0x18) & (byte)((uint)iVar73 >> 0x18) &
                              ~(byte)((uint)iVar66 >> 0x18),
                              CONCAT12((byte)((uint)iVar2 >> 0x10) & (byte)((uint)iVar73 >> 0x10) &
                                       ~(byte)((uint)iVar66 >> 0x10),
                                       CONCAT11((byte)((uint)iVar2 >> 8) & (byte)((uint)iVar73 >> 8)
                                                & ~(byte)((uint)iVar66 >> 8),
                                                (byte)iVar2 & (byte)iVar73 & ~(byte)iVar66))) +
                     (uint)(uVar50 == 1);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
            iVar75 = CONCAT13((byte)((uint)iVar3 >> 0x18) & (byte)((uint)iVar80 >> 0x18) &
                              ~(byte)((uint)iVar75 >> 0x18),
                              CONCAT12((byte)((uint)iVar3 >> 0x10) & (byte)((uint)iVar80 >> 0x10) &
                                       ~(byte)((uint)iVar75 >> 0x10),
                                       CONCAT11((byte)((uint)iVar3 >> 8) & (byte)((uint)iVar80 >> 8)
                                                & ~(byte)((uint)iVar75 >> 8),
                                                (byte)iVar3 & (byte)iVar80 & ~(byte)iVar75))) +
                     (uint)(uVar103 == 1);
            iVar54 = CONCAT13((byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar54 >> 0x18) &
                              ~(byte)((uint)iVar82 >> 0x18),
                              CONCAT12((byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar54 >> 0x10) &
                                       ~(byte)((uint)iVar82 >> 0x10),
                                       CONCAT11((byte)((uint)iVar57 >> 8) &
                                                (byte)((uint)iVar54 >> 8) &
                                                ~(byte)((uint)iVar82 >> 8),
                                                (byte)iVar57 & (byte)iVar54 & ~(byte)iVar82))) +
                     (uint)(uVar56 == 1);
            *(ulong *)(puVar46 + 0x12) =
                 CONCAT17((char)((uint)iVar97 >> 0x18),
                          CONCAT16((char)((uint)iVar97 >> 0x10),
                                   CONCAT15((char)((uint)iVar97 >> 8),
                                            CONCAT14((char)iVar97,
                                                     CONCAT13((byte)((uint)iVar21 >> 0x18) &
                                                              (byte)((uint)iVar62 >> 0x18) &
                                                              ~(byte)((uint)iVar26 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar21 >> 0x10)
                                                                       & (byte)((uint)iVar62 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar26 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar21
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar62
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                                                  iVar26 >> 8),
                                                  (byte)iVar21 & (byte)iVar62 & ~(byte)iVar26))) +
                                                  (uint)(uVar20 == 1)))));
            *(ulong *)(puVar46 + 0x10) =
                 CONCAT17((char)((uint)iVar34 >> 0x18),
                          CONCAT16((char)((uint)iVar34 >> 0x10),
                                   CONCAT15((char)((uint)iVar34 >> 8),
                                            CONCAT14((char)iVar34,
                                                     CONCAT13((byte)((uint)iVar5 >> 0x18) &
                                                              (byte)((uint)iVar19 >> 0x18) &
                                                              ~(byte)((uint)iVar23 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar5 >> 0x10) &
                                                                       (byte)((uint)iVar19 >> 0x10)
                                                                       & ~(byte)((uint)iVar23 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)iVar5
                                                                                      >> 8) &
                                                                                (byte)((uint)iVar19
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar23
                                                                                       >> 8),
                                                                                (byte)iVar5 &
                                                                                (byte)iVar19 &
                                                                                ~(byte)iVar23))) +
                                                     (uint)(uVar4 == 1)))));
            *(ulong *)(puVar46 + 0x16) =
                 CONCAT17((char)((uint)iVar83 >> 0x18),
                          CONCAT16((char)((uint)iVar83 >> 0x10),
                                   CONCAT15((char)((uint)iVar83 >> 8),
                                            CONCAT14((char)iVar83,
                                                     (int)(CONCAT17((byte)((uint)iVar79 >> 0x18) &
                                                                    (byte)((uint)iVar89 >> 0x18) &
                                                                    ~(byte)((uint)iVar88 >> 0x18),
                                                                    CONCAT16((byte)((uint)iVar79 >>
                                                                                   0x10) &
                                                                             (byte)((uint)iVar89 >>
                                                                                   0x10) &
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                                                                             ~(byte)((uint)iVar88 >>
                                                                                    0x10),
                                                                             CONCAT15((byte)((uint)
                                                  iVar79 >> 8) & (byte)((uint)iVar89 >> 8) &
                                                  ~(byte)((uint)iVar88 >> 8),
                                                  CONCAT14((byte)iVar79 & (byte)iVar89 &
                                                           ~(byte)iVar88,iVar106)))) >> 0x20) +
                                                  (uint)(uVar78 == 1)))));
            *(ulong *)(puVar46 + 0x14) =
                 CONCAT17((char)((uint)iVar37 >> 0x18),
                          CONCAT16((char)((uint)iVar37 >> 0x10),
                                   CONCAT15((char)((uint)iVar37 >> 8),
                                            CONCAT14((char)iVar37,
                                                     CONCAT13((byte)((uint)iVar77 >> 0x18) &
                                                              (byte)((uint)iVar36 >> 0x18) &
                                                              ~(byte)((uint)iVar16 >> 0x18),
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                                                              CONCAT12((byte)((uint)iVar77 >> 0x10)
                                                                       & (byte)((uint)iVar36 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar16 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar77
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar36
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar16 >> 8),
                                                  (byte)iVar77 & (byte)iVar36 & ~(byte)iVar16))) +
                                                  (uint)(uVar76 == 1)))));
            uVar20 = puVar46[-4];
            uVar86 = puVar46[0xc];
            uVar69 = puVar46[0x1c];
            iVar2 = -(uint)(uVar12 == 1);
            iVar3 = -(uint)(uVar20 == 1);
            iVar57 = -(uint)(uVar86 == 1);
            iVar5 = -(uint)(uVar69 == 1);
            iVar23 = uVar12 - uVar47;
            iVar66 = uVar20 - uVar47;
            iVar16 = uVar86 - uVar47;
            iVar21 = uVar69 - uVar47;
            iVar34 = -(uint)(uVar1 <= uVar12);
            iVar37 = -(uint)(uVar1 <= uVar20);
            iVar83 = -(uint)(uVar1 <= uVar86);
            iVar88 = -(uint)(uVar1 <= uVar69);
            uVar50 = puVar46[-0x13];
            uVar15 = puVar46[-0x12];
            uVar103 = puVar46[-3];
            uVar56 = puVar46[0xd];
            uVar4 = puVar46[0x1d];
            iVar93 = -(uint)(uVar50 == 1);
            iVar94 = -(uint)(uVar103 == 1);
/* found on a paste site? it was re-uploaded illegally */
            iVar97 = -(uint)(uVar56 == 1);
            iVar100 = -(uint)(uVar4 == 1);
            iVar36 = uVar50 - uVar47;
            iVar82 = uVar103 - uVar47;
            iVar102 = uVar56 - uVar47;
            iVar105 = uVar4 - uVar47;
            iVar26 = -(uint)(uVar1 <= uVar50);
            iVar73 = -(uint)(uVar1 <= uVar103);
            iVar19 = -(uint)(uVar1 <= uVar56);
            iVar80 = -(uint)(uVar1 <= uVar4);
            uVar71 = puVar46[-2];
            uVar87 = puVar46[0xe];
            uVar76 = puVar46[0x1e];
            uVar38 = puVar46[-0x11];
            iVar26 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                              ~(byte)((uint)iVar93 >> 0x18),
                              CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                                       ~(byte)((uint)iVar93 >> 0x10),
                                       CONCAT11((byte)((uint)iVar26 >> 8) &
                                                (byte)((uint)iVar36 >> 8) &
                                                ~(byte)((uint)iVar93 >> 8),
                                                (byte)iVar26 & (byte)iVar36 & ~(byte)iVar93))) +
                     (uint)(uVar50 == 1);
            iVar73 = CONCAT13((byte)((uint)iVar73 >> 0x18) & (byte)((uint)iVar82 >> 0x18) &
                              ~(byte)((uint)iVar94 >> 0x18),
                              CONCAT12((byte)((uint)iVar73 >> 0x10) & (byte)((uint)iVar82 >> 0x10) &
                                       ~(byte)((uint)iVar94 >> 0x10),
                                       CONCAT11((byte)((uint)iVar73 >> 8) &
                                                (byte)((uint)iVar82 >> 8) &
                                                ~(byte)((uint)iVar94 >> 8),
                                                (byte)iVar73 & (byte)iVar82 & ~(byte)iVar94))) +
                     (uint)(uVar103 == 1);
            iVar19 = CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar102 >> 0x18) &
                              ~(byte)((uint)iVar97 >> 0x18),
                              CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar102 >> 0x10)
// WM - if you paid for this, you were scammed
                                       & ~(byte)((uint)iVar97 >> 0x10),
                                       CONCAT11((byte)((uint)iVar19 >> 8) &
                                                (byte)((uint)iVar102 >> 8) &
                                                ~(byte)((uint)iVar97 >> 8),
                                                (byte)iVar19 & (byte)iVar102 & ~(byte)iVar97))) +
                     (uint)(uVar56 == 1);
            iVar80 = CONCAT13((byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar105 >> 0x18) &
                              ~(byte)((uint)iVar100 >> 0x18),
                              CONCAT12((byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar105 >> 0x10)
                                       & ~(byte)((uint)iVar100 >> 0x10),
                                       CONCAT11((byte)((uint)iVar80 >> 8) &
                                                (byte)((uint)iVar105 >> 8) &
                                                ~(byte)((uint)iVar100 >> 8),
                                                (byte)iVar80 & (byte)iVar105 & ~(byte)iVar100))) +
                     (uint)(uVar4 == 1);
            iVar102 = -(uint)(uVar15 == 1);
            iVar95 = -(uint)(uVar71 == 1);
            iVar94 = -(uint)(uVar87 == 1);
            iVar53 = -(uint)(uVar76 == 1);
            iVar77 = uVar15 - uVar47;
            iVar85 = uVar71 - uVar47;
            iVar97 = uVar87 - uVar47;
            iVar101 = uVar76 - uVar47;
/* chat: discord.gg/sdkhDjTex */
            iVar36 = -(uint)(uVar1 <= uVar15);
            iVar82 = -(uint)(uVar1 <= uVar71);
            iVar93 = -(uint)(uVar1 <= uVar87);
            iVar100 = -(uint)(uVar1 <= uVar76);
            iVar97 = CONCAT13((byte)((uint)iVar93 >> 0x18) & (byte)((uint)iVar97 >> 0x18) &
                              ~(byte)((uint)iVar94 >> 0x18),
                              CONCAT12((byte)((uint)iVar93 >> 0x10) & (byte)((uint)iVar97 >> 0x10) &
                                       ~(byte)((uint)iVar94 >> 0x10),
                                       CONCAT11((byte)((uint)iVar93 >> 8) &
                                                (byte)((uint)iVar97 >> 8) &
                                                ~(byte)((uint)iVar94 >> 8),
                                                (byte)iVar93 & (byte)iVar97 & ~(byte)iVar94)));
            uVar50 = puVar46[-1];
            uVar103 = puVar46[0xf];
            uVar56 = puVar46[0x1f];
            iVar105 = uVar38 - uVar47;
            iVar96 = uVar50 - uVar47;
            iVar98 = uVar103 - uVar47;
            iVar62 = uVar56 - uVar47;
/* origin: github.com/pengussy */
            iVar79 = -(uint)(uVar1 <= uVar38);
            iVar89 = -(uint)(uVar1 <= uVar50);
            iVar91 = -(uint)(uVar1 <= uVar103);
            iVar104 = -(uint)(uVar1 <= uVar56);
            iVar93 = -(uint)(uVar38 == 1);
            iVar94 = -(uint)(uVar50 == 1);
            iVar70 = -(uint)(uVar103 == 1);
            iVar106 = -(uint)(uVar56 == 1);
            iVar98 = CONCAT13((byte)((uint)iVar91 >> 0x18) & (byte)((uint)iVar98 >> 0x18) &
                              ~(byte)((uint)iVar70 >> 0x18),
                              CONCAT12((byte)((uint)iVar91 >> 0x10) & (byte)((uint)iVar98 >> 0x10) &
                                       ~(byte)((uint)iVar70 >> 0x10),
                                       CONCAT11((byte)((uint)iVar91 >> 8) &
                                                (byte)((uint)iVar98 >> 8) &
                                                ~(byte)((uint)iVar70 >> 8),
                                                (byte)iVar91 & (byte)iVar98 & ~(byte)iVar70)));
            iVar62 = (int)(CONCAT17((byte)((uint)iVar104 >> 0x18) & (byte)((uint)iVar62 >> 0x18) &
                                    ~(byte)((uint)iVar106 >> 0x18),
/* wm:donate: donate/README.md */
                                    CONCAT16((byte)((uint)iVar104 >> 0x10) &
                                             (byte)((uint)iVar62 >> 0x10) &
                                             ~(byte)((uint)iVar106 >> 0x10),
                                             CONCAT15((byte)((uint)iVar104 >> 8) &
                                                      (byte)((uint)iVar62 >> 8) &
                                                      ~(byte)((uint)iVar106 >> 8),
                                                      CONCAT14((byte)iVar104 & (byte)iVar62 &
                                                               ~(byte)iVar106,iVar98)))) >> 0x20) +
                     (uint)(uVar56 == 1);
            *(ulong *)(puVar46 + -0x16) =
                 CONCAT17((char)((uint)iVar25 >> 0x18),
                          CONCAT16((char)((uint)iVar25 >> 0x10),
                                   CONCAT15((char)((uint)iVar25 >> 8),
                                            CONCAT14((char)iVar25,
                                                     CONCAT13((byte)((uint)iVar24 >> 0x18) &
                                                              (byte)((uint)iVar63 >> 0x18) &
                                                              ~(byte)((uint)iVar68 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar24 >> 0x10)
                                                                       & (byte)((uint)iVar63 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar68 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar24
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar63
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar68 >> 8),
                                                  (byte)iVar24 & (byte)iVar63 & ~(byte)iVar68))) +
                                                  (uint)(uVar6 == 1)))));
// chat: discord.gg/sdkhDjTex
            *(ulong *)(puVar46 + -0x18) =
                 CONCAT17((char)((uint)iVar11 >> 0x18),
                          CONCAT16((char)((uint)iVar11 >> 0x10),
                                   CONCAT15((char)((uint)iVar11 >> 8),
                                            CONCAT14((char)iVar11,
                                                     CONCAT13((byte)((uint)iVar60 >> 0x18) &
                                                              (byte)((uint)iVar10 >> 0x18) &
                                                              ~(byte)((uint)iVar13 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar60 >> 0x10)
                                                                       & (byte)((uint)iVar10 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar13 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar60
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar10
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar13 >> 8),
                                                  (byte)iVar60 & (byte)iVar10 & ~(byte)iVar13))) +
                                                  (uint)(uVar92 == 1)))));
            *(ulong *)(puVar46 + -0x12) =
                 CONCAT44(CONCAT13((byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar105 >> 0x18) &
                                   ~(byte)((uint)iVar93 >> 0x18),
                                   CONCAT12((byte)((uint)iVar79 >> 0x10) &
                                            (byte)((uint)iVar105 >> 0x10) &
                                            ~(byte)((uint)iVar93 >> 0x10),
                                            CONCAT11((byte)((uint)iVar79 >> 8) &
                                                     (byte)((uint)iVar105 >> 8) &
                                                     ~(byte)((uint)iVar93 >> 8),
                                                     (byte)iVar79 & (byte)iVar105 & ~(byte)iVar93)))
                          + (uint)(uVar38 == 1),
                          CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar77 >> 0x18) &
                                   ~(byte)((uint)iVar102 >> 0x18),
// WM - stripping the watermark breaks the license
                                   CONCAT12((byte)((uint)iVar36 >> 0x10) &
                                            (byte)((uint)iVar77 >> 0x10) &
                                            ~(byte)((uint)iVar102 >> 0x10),
                                            CONCAT11((byte)((uint)iVar36 >> 8) &
                                                     (byte)((uint)iVar77 >> 8) &
                                                     ~(byte)((uint)iVar102 >> 8),
                                                     (byte)iVar36 & (byte)iVar77 & ~(byte)iVar102)))
                          + (uint)(uVar15 == 1));
            *(ulong *)(puVar46 + -0x14) =
                 CONCAT17((char)((uint)iVar26 >> 0x18),
                          CONCAT16((char)((uint)iVar26 >> 0x10),
                                   CONCAT15((char)((uint)iVar26 >> 8),
                                            CONCAT14((char)iVar26,
                                                     CONCAT13((byte)((uint)iVar34 >> 0x18) &
                                                              (byte)((uint)iVar23 >> 0x18) &
                                                              ~(byte)((uint)iVar2 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar34 >> 0x10)
                                                                       & (byte)((uint)iVar23 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar2 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar34
                                                                                      >> 8) &
                                                                                (byte)((uint)iVar23
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar2
                                                                                       >> 8),
                                                                                (byte)iVar34 &
                                                                                (byte)iVar23 &
/*  found on a paste site? it was re-uploaded illegally  */
                                                                                ~(byte)iVar2))) +
                                                     (uint)(uVar12 == 1)))));
            *(ulong *)(puVar46 + -6) =
                 CONCAT44(CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar40 >> 0x18) &
                                   ~(byte)((uint)iVar39 >> 0x18),
                                   CONCAT12((byte)((uint)iVar29 >> 0x10) &
                                            (byte)((uint)iVar40 >> 0x10) &
                                            ~(byte)((uint)iVar39 >> 0x10),
                                            CONCAT11((byte)((uint)iVar29 >> 8) &
                                                     (byte)((uint)iVar40 >> 8) &
                                                     ~(byte)((uint)iVar39 >> 8),
                                                     (byte)iVar29 & (byte)iVar40 & ~(byte)iVar39)))
                          + (uint)(uVar7 == 1),
                          CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                                   ~(byte)((uint)iVar61 >> 0x18),
                                   CONCAT12((byte)((uint)iVar28 >> 0x10) &
                                            (byte)((uint)iVar35 >> 0x10) &
                                            ~(byte)((uint)iVar61 >> 0x10),
/*  reversing this took months of machine time  */
                                            CONCAT11((byte)((uint)iVar28 >> 8) &
                                                     (byte)((uint)iVar35 >> 8) &
                                                     ~(byte)((uint)iVar61 >> 8),
                                                     (byte)iVar28 & (byte)iVar35 & ~(byte)iVar61)))
                          + (uint)(uVar65 == 1));
            *(ulong *)(puVar46 + -8) =
                 CONCAT17((char)((uint)iVar17 >> 0x18),
                          CONCAT16((char)((uint)iVar17 >> 0x10),
                                   CONCAT15((char)((uint)iVar17 >> 8),
                                            CONCAT14((char)iVar17,
                                                     CONCAT13((byte)((uint)iVar52 >> 0x18) &
                                                              (byte)((uint)iVar14 >> 0x18) &
                                                              ~(byte)((uint)iVar22 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar52 >> 0x10)
                                                                       & (byte)((uint)iVar14 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar22 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar52
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar14
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar22 >> 8),
                                                  (byte)iVar52 & (byte)iVar14 & ~(byte)iVar22))) +
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                                                  (uint)(uVar84 == 1)))));
            *(ulong *)(puVar46 + -2) =
                 CONCAT44(CONCAT13((byte)((uint)iVar89 >> 0x18) & (byte)((uint)iVar96 >> 0x18) &
                                   ~(byte)((uint)iVar94 >> 0x18),
                                   CONCAT12((byte)((uint)iVar89 >> 0x10) &
                                            (byte)((uint)iVar96 >> 0x10) &
                                            ~(byte)((uint)iVar94 >> 0x10),
                                            CONCAT11((byte)((uint)iVar89 >> 8) &
                                                     (byte)((uint)iVar96 >> 8) &
                                                     ~(byte)((uint)iVar94 >> 8),
                                                     (byte)iVar89 & (byte)iVar96 & ~(byte)iVar94)))
                          + (uint)(uVar50 == 1),
                          CONCAT13((byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar85 >> 0x18) &
                                   ~(byte)((uint)iVar95 >> 0x18),
                                   CONCAT12((byte)((uint)iVar82 >> 0x10) &
                                            (byte)((uint)iVar85 >> 0x10) &
                                            ~(byte)((uint)iVar95 >> 0x10),
                                            CONCAT11((byte)((uint)iVar82 >> 8) &
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
                                                     (byte)((uint)iVar85 >> 8) &
                                                     ~(byte)((uint)iVar95 >> 8),
                                                     (byte)iVar82 & (byte)iVar85 & ~(byte)iVar95)))
                          + (uint)(uVar71 == 1));
            *(ulong *)(puVar46 + -4) =
                 CONCAT17((char)((uint)iVar73 >> 0x18),
                          CONCAT16((char)((uint)iVar73 >> 0x10),
                                   CONCAT15((char)((uint)iVar73 >> 8),
                                            CONCAT14((char)iVar73,
                                                     CONCAT13((byte)((uint)iVar37 >> 0x18) &
                                                              (byte)((uint)iVar66 >> 0x18) &
                                                              ~(byte)((uint)iVar3 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar37 >> 0x10)
                                                                       & (byte)((uint)iVar66 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar3 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar37
                                                                                      >> 8) &
                                                                                (byte)((uint)iVar66
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar3
                                                                                       >> 8),
                                                                                (byte)iVar37 &
                                                                                (byte)iVar66 &
                                                                                ~(byte)iVar3))) +
                                                     (uint)(uVar20 == 1)))));
            *(ulong *)(puVar46 + 10) =
                 CONCAT17((char)((uint)iVar75 >> 0x18),
                          CONCAT16((char)((uint)iVar75 >> 0x10),
                                   CONCAT15((char)((uint)iVar75 >> 8),
// WM - donate: donate/README.md
                                            CONCAT14((char)iVar75,
                                                     CONCAT13((byte)((uint)iVar32 >> 0x18) &
                                                              (byte)((uint)iVar74 >> 0x18) &
                                                              ~(byte)((uint)iVar58 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar32 >> 0x10)
                                                                       & (byte)((uint)iVar74 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar58 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar32
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar74
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar58 >> 8),
                                                  (byte)iVar32 & (byte)iVar74 & ~(byte)iVar58))) +
                                                  (uint)(uVar8 == 1)))));
            *(ulong *)(puVar46 + 8) =
                 CONCAT17((char)((uint)iVar27 >> 0x18),
                          CONCAT16((char)((uint)iVar27 >> 0x10),
                                   CONCAT15((char)((uint)iVar27 >> 8),
                                            CONCAT14((char)iVar27,
                                                     CONCAT13((byte)((uint)iVar55 >> 0x18) &
                                                              (byte)((uint)iVar18 >> 0x18) &
                                                              ~(byte)((uint)iVar30 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar55 >> 0x10)
                                                                       & (byte)((uint)iVar18 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar30 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar55
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar18
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar30 >> 8),
                                                  (byte)iVar55 & (byte)iVar18 & ~(byte)iVar30))) +
                                                  (uint)(uVar90 == 1)))));
            *(ulong *)(puVar46 + 0xe) =
/* WM - if you paid for this, you were scammed */
                 CONCAT44(iVar98 + (uint)(uVar103 == 1),iVar97 + (uint)(uVar87 == 1));
            *(ulong *)(puVar46 + 0xc) =
                 CONCAT17((char)((uint)iVar19 >> 0x18),
                          CONCAT16((char)((uint)iVar19 >> 0x10),
                                   CONCAT15((char)((uint)iVar19 >> 8),
                                            CONCAT14((char)iVar19,
                                                     CONCAT13((byte)((uint)iVar83 >> 0x18) &
                                                              (byte)((uint)iVar16 >> 0x18) &
                                                              ~(byte)((uint)iVar57 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar83 >> 0x10)
                                                                       & (byte)((uint)iVar16 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar57 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar83
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar16
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar57 >> 8),
                                                  (byte)iVar83 & (byte)iVar16 & ~(byte)iVar57))) +
                                                  (uint)(uVar86 == 1)))));
            *(ulong *)(puVar46 + 0x1a) =
                 CONCAT17((char)((uint)iVar54 >> 0x18),
                          CONCAT16((char)((uint)iVar54 >> 0x10),
                                   CONCAT15((char)((uint)iVar54 >> 8),
                                            CONCAT14((char)iVar54,
                                                     CONCAT13((byte)((uint)iVar33 >> 0x18) &
                                                              (byte)((uint)iVar81 >> 0x18) &
                                                              ~(byte)((uint)iVar72 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar33 >> 0x10)
                                                                       & (byte)((uint)iVar81 >> 0x10
                                                                               ) &
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                                                                       ~(byte)((uint)iVar72 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar33
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar81
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar72 >> 8),
                                                  (byte)iVar33 & (byte)iVar81 & ~(byte)iVar72))) +
                                                  (uint)(uVar9 == 1)))));
            *(ulong *)(puVar46 + 0x18) =
                 CONCAT17((char)((uint)iVar59 >> 0x18),
                          CONCAT16((char)((uint)iVar59 >> 0x10),
                                   CONCAT15((char)((uint)iVar59 >> 8),
                                            CONCAT14((char)iVar59,
                                                     CONCAT13((byte)((uint)iVar64 >> 0x18) &
                                                              (byte)((uint)iVar31 >> 0x18) &
                                                              ~(byte)((uint)iVar67 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar64 >> 0x10)
                                                                       & (byte)((uint)iVar31 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar67 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)iVar64
                                                                                       >> 8) &
                                                                                 (byte)((uint)iVar31
                                                                                       >> 8) &
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                                                                                 ~(byte)((uint)
                                                  iVar67 >> 8),
                                                  (byte)iVar64 & (byte)iVar31 & ~(byte)iVar67))) +
                                                  (uint)(uVar99 == 1)))));
            *(ulong *)(puVar46 + 0x1e) =
                 CONCAT17((char)((uint)iVar62 >> 0x18),
                          CONCAT16((char)((uint)iVar62 >> 0x10),
                                   CONCAT15((char)((uint)iVar62 >> 8),
                                            CONCAT14((char)iVar62,
                                                     (int)(CONCAT17((byte)((uint)iVar100 >> 0x18) &
                                                                    (byte)((uint)iVar101 >> 0x18) &
                                                                    ~(byte)((uint)iVar53 >> 0x18),
                                                                    CONCAT16((byte)((uint)iVar100 >>
                                                                                   0x10) &
                                                                             (byte)((uint)iVar101 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar53 >>
                                                                                    0x10),
                                                                             CONCAT15((byte)((uint)
                                                  iVar100 >> 8) & (byte)((uint)iVar101 >> 8) &
                                                  ~(byte)((uint)iVar53 >> 8),
                                                  CONCAT14((byte)iVar100 & (byte)iVar101 &
                                                           ~(byte)iVar53,iVar97)))) >> 0x20) +
                                                  (uint)(uVar76 == 1)))));
            *(ulong *)(puVar46 + 0x1c) =
                 CONCAT17((char)((uint)iVar80 >> 0x18),
/*  proprietary - see LICENSE - do not sell  */
                          CONCAT16((char)((uint)iVar80 >> 0x10),
                                   CONCAT15((char)((uint)iVar80 >> 8),
                                            CONCAT14((char)iVar80,
                                                     CONCAT13((byte)((uint)iVar88 >> 0x18) &
                                                              (byte)((uint)iVar21 >> 0x18) &
                                                              ~(byte)((uint)iVar5 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar88 >> 0x10)
                                                                       & (byte)((uint)iVar21 >> 0x10
                                                                               ) &
                                                                       ~(byte)((uint)iVar5 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar88
                                                                                      >> 8) &
                                                                                (byte)((uint)iVar21
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar5
                                                                                       >> 8),
                                                                                (byte)iVar88 &
                                                                                (byte)iVar21 &
                                                                                ~(byte)iVar5))) +
                                                     (uint)(uVar69 == 1)))));
            puVar46 = puVar46 + 0x40;
            uVar48 = uVar48 - 4;
          } while (uVar48 != 0);
          if (uVar51 == uVar43) goto LAB_002a12c0;
        }
/*  chat: discord.gg/sdkhDjTex  */
        iVar42 = (iVar42 >> 4) - (int)uVar43;
        puVar45 = (undefined8 *)(lVar41 + lVar44 * 4 + 0x20);
        do {
          uVar50 = (uint)puVar45[-4];
          iVar10 = -(uint)(uVar50 == 1);
          uVar103 = (uint)((ulong)puVar45[-4] >> 0x20);
          iVar13 = -(uint)(uVar103 == 1);
          uVar56 = (uint)puVar45[-3];
          iVar17 = -(uint)(uVar56 == 1);
          uVar4 = (uint)((ulong)puVar45[-3] >> 0x20);
          iVar22 = -(uint)(uVar4 == 1);
          iVar26 = uVar50 - uVar47;
          iVar30 = uVar103 - uVar47;
          iVar59 = uVar56 - uVar47;
          iVar67 = uVar4 - uVar47;
          iVar2 = -(uint)(uVar1 <= uVar50);
          iVar3 = -(uint)(uVar1 <= uVar103);
          iVar57 = -(uint)(uVar1 <= uVar56);
          iVar5 = -(uint)(uVar1 <= uVar4);
          iVar3 = CONCAT13((byte)((uint)iVar3 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                           ~(byte)((uint)iVar13 >> 0x18),
                           CONCAT12((byte)((uint)iVar3 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                                    ~(byte)((uint)iVar13 >> 0x10),
                                    CONCAT11((byte)((uint)iVar3 >> 8) & (byte)((uint)iVar30 >> 8) &
                                             ~(byte)((uint)iVar13 >> 8),
                                             (byte)iVar3 & (byte)iVar30 & ~(byte)iVar13))) +
                  (uint)(uVar103 == 1);
          iVar5 = CONCAT13((byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar67 >> 0x18) &
                           ~(byte)((uint)iVar22 >> 0x18),
                           CONCAT12((byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar67 >> 0x10) &
                                    ~(byte)((uint)iVar22 >> 0x10),
                                    CONCAT11((byte)((uint)iVar5 >> 8) & (byte)((uint)iVar67 >> 8) &
                                             ~(byte)((uint)iVar22 >> 8),
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                             (byte)iVar5 & (byte)iVar67 & ~(byte)iVar22))) +
                  (uint)(uVar4 == 1);
          uVar103 = (uint)puVar45[-2];
          iVar11 = -(uint)(uVar103 == 1);
          uVar4 = (uint)((ulong)puVar45[-2] >> 0x20);
          iVar14 = -(uint)(uVar4 == 1);
          uVar6 = (uint)puVar45[-1];
          iVar18 = -(uint)(uVar6 == 1);
          uVar65 = (uint)((ulong)puVar45[-1] >> 0x20);
          iVar23 = -(uint)(uVar65 == 1);
          iVar27 = uVar103 - uVar47;
          iVar31 = uVar4 - uVar47;
          iVar60 = uVar6 - uVar47;
          iVar68 = uVar65 - uVar47;
          iVar13 = -(uint)(uVar1 <= uVar103);
          iVar22 = -(uint)(uVar1 <= uVar4);
          iVar30 = -(uint)(uVar1 <= uVar6);
          iVar67 = -(uint)(uVar1 <= uVar65);
          iVar22 = CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                            ~(byte)((uint)iVar14 >> 0x18),
                            CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                     ~(byte)((uint)iVar14 >> 0x10),
                                     CONCAT11((byte)((uint)iVar22 >> 8) & (byte)((uint)iVar31 >> 8)
                                              & ~(byte)((uint)iVar14 >> 8),
// watermarked copy - do not remove
                                              (byte)iVar22 & (byte)iVar31 & ~(byte)iVar14))) +
                   (uint)(uVar4 == 1);
          iVar67 = CONCAT13((byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar68 >> 0x18) &
                            ~(byte)((uint)iVar23 >> 0x18),
                            CONCAT12((byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar68 >> 0x10) &
                                     ~(byte)((uint)iVar23 >> 0x10),
                                     CONCAT11((byte)((uint)iVar67 >> 8) & (byte)((uint)iVar68 >> 8)
                                              & ~(byte)((uint)iVar23 >> 8),
                                              (byte)iVar67 & (byte)iVar68 & ~(byte)iVar23))) +
                   (uint)(uVar65 == 1);
          puVar45[-3] = CONCAT17((char)((uint)iVar5 >> 0x18),
                                 CONCAT16((char)((uint)iVar5 >> 0x10),
                                          CONCAT15((char)((uint)iVar5 >> 8),
                                                   CONCAT14((char)iVar5,
                                                            CONCAT13((byte)((uint)iVar57 >> 0x18) &
                                                                     (byte)((uint)iVar59 >> 0x18) &
                                                                     ~(byte)((uint)iVar17 >> 0x18),
                                                                     CONCAT12((byte)((uint)iVar57 >>
                                                                                    0x10) &
                                                                              (byte)((uint)iVar59 >>
                                                                                    0x10) &
                                                                              ~(byte)((uint)iVar17
                                                                                     >> 0x10),
                                                                              CONCAT11((byte)((uint)
                                                  iVar57 >> 8) & (byte)((uint)iVar59 >> 8) &
                                                  ~(byte)((uint)iVar17 >> 8),
                                                  (byte)iVar57 & (byte)iVar59 & ~(byte)iVar17))) +
                                                  (uint)(uVar56 == 1)))));
/* watermarked copy - do not remove */
          puVar45[-4] = CONCAT17((char)((uint)iVar3 >> 0x18),
                                 CONCAT16((char)((uint)iVar3 >> 0x10),
                                          CONCAT15((char)((uint)iVar3 >> 8),
                                                   CONCAT14((char)iVar3,
                                                            CONCAT13((byte)((uint)iVar2 >> 0x18) &
                                                                     (byte)((uint)iVar26 >> 0x18) &
                                                                     ~(byte)((uint)iVar10 >> 0x18),
                                                                     CONCAT12((byte)((uint)iVar2 >>
                                                                                    0x10) &
                                                                              (byte)((uint)iVar26 >>
                                                                                    0x10) &
                                                                              ~(byte)((uint)iVar10
                                                                                     >> 0x10),
                                                                              CONCAT11((byte)((uint)
                                                  iVar2 >> 8) & (byte)((uint)iVar26 >> 8) &
                                                  ~(byte)((uint)iVar10 >> 8),
                                                  (byte)iVar2 & (byte)iVar26 & ~(byte)iVar10))) +
                                                  (uint)(uVar50 == 1)))));
          puVar45[-1] = CONCAT17((char)((uint)iVar67 >> 0x18),
                                 CONCAT16((char)((uint)iVar67 >> 0x10),
                                          CONCAT15((char)((uint)iVar67 >> 8),
                                                   CONCAT14((char)iVar67,
                                                            CONCAT13((byte)((uint)iVar30 >> 0x18) &
// origin: github.com/pengussy
                                                                     (byte)((uint)iVar60 >> 0x18) &
                                                                     ~(byte)((uint)iVar18 >> 0x18),
                                                                     CONCAT12((byte)((uint)iVar30 >>
                                                                                    0x10) &
                                                                              (byte)((uint)iVar60 >>
                                                                                    0x10) &
                                                                              ~(byte)((uint)iVar18
                                                                                     >> 0x10),
                                                                              CONCAT11((byte)((uint)
                                                  iVar30 >> 8) & (byte)((uint)iVar60 >> 8) &
                                                  ~(byte)((uint)iVar18 >> 8),
                                                  (byte)iVar30 & (byte)iVar60 & ~(byte)iVar18))) +
                                                  (uint)(uVar6 == 1)))));
          puVar45[-2] = CONCAT17((char)((uint)iVar22 >> 0x18),
                                 CONCAT16((char)((uint)iVar22 >> 0x10),
                                          CONCAT15((char)((uint)iVar22 >> 8),
                                                   CONCAT14((char)iVar22,
                                                            CONCAT13((byte)((uint)iVar13 >> 0x18) &
                                                                     (byte)((uint)iVar27 >> 0x18) &
                                                                     ~(byte)((uint)iVar11 >> 0x18),
                                                                     CONCAT12((byte)((uint)iVar13 >>
                                                                                    0x10) &
                                                                              (byte)((uint)iVar27 >>
                                                                                    0x10) &
                                                                              ~(byte)((uint)iVar11
                                                                                     >> 0x10),
                                                                              CONCAT11((byte)((uint)
                                                  iVar13 >> 8) & (byte)((uint)iVar27 >> 8) &
                                                  ~(byte)((uint)iVar11 >> 8),
// WM - watermarked copy - do not remove
                                                  (byte)iVar13 & (byte)iVar27 & ~(byte)iVar11))) +
                                                  (uint)(uVar103 == 1)))));
          uVar50 = (uint)*puVar45;
          iVar10 = -(uint)(uVar50 == 1);
          uVar103 = (uint)((ulong)*puVar45 >> 0x20);
          iVar13 = -(uint)(uVar103 == 1);
          uVar56 = (uint)puVar45[1];
          iVar17 = -(uint)(uVar56 == 1);
          uVar4 = (uint)((ulong)puVar45[1] >> 0x20);
          iVar22 = -(uint)(uVar4 == 1);
          iVar26 = uVar50 - uVar47;
          iVar30 = uVar103 - uVar47;
          iVar59 = uVar56 - uVar47;
          iVar67 = uVar4 - uVar47;
          iVar2 = -(uint)(uVar1 <= uVar50);
          iVar3 = -(uint)(uVar1 <= uVar103);
          iVar57 = -(uint)(uVar1 <= uVar56);
          iVar5 = -(uint)(uVar1 <= uVar4);
          iVar3 = CONCAT13((byte)((uint)iVar3 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                           ~(byte)((uint)iVar13 >> 0x18),
                           CONCAT12((byte)((uint)iVar3 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                                    ~(byte)((uint)iVar13 >> 0x10),
                                    CONCAT11((byte)((uint)iVar3 >> 8) & (byte)((uint)iVar30 >> 8) &
                                             ~(byte)((uint)iVar13 >> 8),
                                             (byte)iVar3 & (byte)iVar30 & ~(byte)iVar13))) +
                  (uint)(uVar103 == 1);
// WM - do not claim this as your own
          iVar5 = CONCAT13((byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar67 >> 0x18) &
                           ~(byte)((uint)iVar22 >> 0x18),
                           CONCAT12((byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar67 >> 0x10) &
                                    ~(byte)((uint)iVar22 >> 0x10),
                                    CONCAT11((byte)((uint)iVar5 >> 8) & (byte)((uint)iVar67 >> 8) &
                                             ~(byte)((uint)iVar22 >> 8),
                                             (byte)iVar5 & (byte)iVar67 & ~(byte)iVar22))) +
                  (uint)(uVar4 == 1);
          uVar103 = (uint)puVar45[2];
          iVar11 = uVar103 - uVar47;
          uVar4 = (uint)((ulong)puVar45[2] >> 0x20);
          iVar14 = uVar4 - uVar47;
          uVar6 = (uint)puVar45[3];
          iVar18 = uVar6 - uVar47;
          uVar65 = (uint)((ulong)puVar45[3] >> 0x20);
          iVar23 = uVar65 - uVar47;
          iVar27 = -(uint)(uVar1 <= uVar103);
          iVar31 = -(uint)(uVar1 <= uVar4);
          iVar60 = -(uint)(uVar1 <= uVar6);
          iVar68 = -(uint)(uVar1 <= uVar65);
          iVar13 = -(uint)(uVar103 == 1);
          iVar22 = -(uint)(uVar4 == 1);
          iVar30 = -(uint)(uVar6 == 1);
          iVar67 = -(uint)(uVar65 == 1);
          iVar22 = CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar14 >> 0x18) &
                            ~(byte)((uint)iVar22 >> 0x18),
                            CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar14 >> 0x10) &
                                     ~(byte)((uint)iVar22 >> 0x10),
                                     CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar14 >> 8)
                                              & ~(byte)((uint)iVar22 >> 8),
                                              (byte)iVar31 & (byte)iVar14 & ~(byte)iVar22))) +
/* wm:if you paid for this, you were scammed */
                   (uint)(uVar4 == 1);
          iVar67 = CONCAT13((byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                            ~(byte)((uint)iVar67 >> 0x18),
                            CONCAT12((byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                                     ~(byte)((uint)iVar67 >> 0x10),
                                     CONCAT11((byte)((uint)iVar68 >> 8) & (byte)((uint)iVar23 >> 8)
                                              & ~(byte)((uint)iVar67 >> 8),
                                              (byte)iVar68 & (byte)iVar23 & ~(byte)iVar67))) +
                   (uint)(uVar65 == 1);
          puVar45[1] = CONCAT17((char)((uint)iVar5 >> 0x18),
                                CONCAT16((char)((uint)iVar5 >> 0x10),
                                         CONCAT15((char)((uint)iVar5 >> 8),
                                                  CONCAT14((char)iVar5,
                                                           CONCAT13((byte)((uint)iVar57 >> 0x18) &
                                                                    (byte)((uint)iVar59 >> 0x18) &
                                                                    ~(byte)((uint)iVar17 >> 0x18),
                                                                    CONCAT12((byte)((uint)iVar57 >>
                                                                                   0x10) &
                                                                             (byte)((uint)iVar59 >>
                                                                                   0x10) &
/* if you paid for this, you were scammed - github.com/pengussy */
                                                                             ~(byte)((uint)iVar17 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  iVar57 >> 8) & (byte)((uint)iVar59 >> 8) &
                                                  ~(byte)((uint)iVar17 >> 8),
                                                  (byte)iVar57 & (byte)iVar59 & ~(byte)iVar17))) +
                                                  (uint)(uVar56 == 1)))));
          *puVar45 = CONCAT17((char)((uint)iVar3 >> 0x18),
                              CONCAT16((char)((uint)iVar3 >> 0x10),
                                       CONCAT15((char)((uint)iVar3 >> 8),
                                                CONCAT14((char)iVar3,
                                                         CONCAT13((byte)((uint)iVar2 >> 0x18) &
                                                                  (byte)((uint)iVar26 >> 0x18) &
                                                                  ~(byte)((uint)iVar10 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar2 >>
                                                                                 0x10) &
                                                                           (byte)((uint)iVar26 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar10 >>
                                                                                  0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar2 >> 8) & (byte)((uint)iVar26 >> 8) &
                                                  ~(byte)((uint)iVar10 >> 8),
                                                  (byte)iVar2 & (byte)iVar26 & ~(byte)iVar10))) +
                                                  (uint)(uVar50 == 1)))));
          puVar45[3] = CONCAT17((char)((uint)iVar67 >> 0x18),
                                CONCAT16((char)((uint)iVar67 >> 0x10),
                                         CONCAT15((char)((uint)iVar67 >> 8),
                                                  CONCAT14((char)iVar67,
                                                           CONCAT13((byte)((uint)iVar60 >> 0x18) &
// keep the notice, keep the source honest
                                                                    (byte)((uint)iVar18 >> 0x18) &
                                                                    ~(byte)((uint)iVar30 >> 0x18),
                                                                    CONCAT12((byte)((uint)iVar60 >>
                                                                                   0x10) &
                                                                             (byte)((uint)iVar18 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar30 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  iVar60 >> 8) & (byte)((uint)iVar18 >> 8) &
                                                  ~(byte)((uint)iVar30 >> 8),
                                                  (byte)iVar60 & (byte)iVar18 & ~(byte)iVar30))) +
                                                  (uint)(uVar6 == 1)))));
          puVar45[2] = CONCAT17((char)((uint)iVar22 >> 0x18),
                                CONCAT16((char)((uint)iVar22 >> 0x10),
                                         CONCAT15((char)((uint)iVar22 >> 8),
                                                  CONCAT14((char)iVar22,
                                                           CONCAT13((byte)((uint)iVar27 >> 0x18) &
                                                                    (byte)((uint)iVar11 >> 0x18) &
                                                                    ~(byte)((uint)iVar13 >> 0x18),
                                                                    CONCAT12((byte)((uint)iVar27 >>
                                                                                   0x10) &
                                                                             (byte)((uint)iVar11 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar13 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  iVar27 >> 8) & (byte)((uint)iVar11 >> 8) &
                                                  ~(byte)((uint)iVar13 >> 8),
// WM - thanks for reading - discord.gg/sdkhDjTex
                                                  (byte)iVar27 & (byte)iVar11 & ~(byte)iVar13))) +
                                                  (uint)(uVar103 == 1)))));
          iVar42 = iVar42 + -1;
          puVar45 = puVar45 + 8;
        } while (iVar42 != 0);
      }
    }
    else {
      func_0x002a14c8(lVar41,iVar2,uVar49);
    }
  }
LAB_002a12c0:
  if (*(uint *)(param_1 + 0x30) != 0) {
    func_0x002a14c8(*(undefined8 *)(param_1 + 0x78),1 << (ulong)(*(uint *)(param_1 + 0x30) & 0x1f),
                    uVar49);
  }
  if (*(ulong *)(param_2 + 0x20) < *(ulong *)(param_2 + 0x18)) {
    *(ulong *)(param_2 + 0x20) = *(ulong *)(param_2 + 0x18);
  }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  iVar42 = 0;
  if (uVar47 <= *(uint *)(param_1 + 0x2c)) {
    iVar42 = *(uint *)(param_1 + 0x2c) - uVar47;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x2c) = iVar42;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}

