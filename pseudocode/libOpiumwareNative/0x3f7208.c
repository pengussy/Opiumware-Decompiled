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
 *  file-id: 0x3f7208:834d22b337
 *  --------------------------------------------------------------------------*/

bool FUN_003f7208(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  int iVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  ulong *puVar31;
  ulong *puVar32;
  ulong uVar33;
  ulong uVar34;
  int iVar35;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  ulong uVar37;
  ulong uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
// WM - watermarked copy - do not remove
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  ulong uVar103;
  ulong *puStack_98;
  ulong *puStack_90;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  FUN_003f1890(param_4);
  lVar13 = FUN_003f1a40(param_4);
  if ((lVar13 != 0) && (iVar11 = func_0x019e85d0(param_3), 1 < iVar11)) {
    do {
      iVar12 = func_0x003fd410(lVar13,iVar11 + -1,0xffffffff,0,0,param_4);
      if (iVar12 == 0) goto LAB_003f7310;
      iVar12 = func_0x003f89fc(lVar13);
    } while (iVar12 != 0);
    iVar11 = FUN_003f7064(param_1,param_2,lVar13,param_3,param_4);
// stripping the watermark breaks the license
    if (iVar11 != 0) {
      FUN_003f1890(param_4);
      puStack_70 = (undefined8 *)FUN_003f1a40(param_4);
      puStack_78 = (undefined8 *)FUN_003f1a40(param_4);
      puVar14 = (undefined8 *)FUN_003f1a40(param_4);
      puStack_68 = (undefined8 *)FUN_003f1a40(param_4);
      if ((((puStack_68 != (undefined8 *)0x0) &&
           (iVar11 = FUN_003f5e88(puVar14,param_1,param_3), iVar11 != 0)) &&
          (iVar11 = func_0x003f89fc(puVar14), iVar11 == 0)) &&
         (lVar15 = func_0x019e8960(puStack_68,param_3), lVar15 != 0)) {
        iVar11 = func_0x019e85d0(puVar14);
        iVar12 = func_0x019e85d0(puStack_68);
        uVar1 = *(uint *)(param_3 + 1);
        uVar34 = (ulong)uVar1;
        lVar15 = func_0x003f8b8c(puVar14,uVar34);
        if (lVar15 != 0) {
          puVar31 = (ulong *)*puVar14;
          uVar2 = *(uint *)(puVar14 + 1);
          if ((int)uVar2 < (int)uVar1) {
            _bzero(puVar31 + (int)uVar2,(ulong)(uVar1 + ~uVar2) * 8 + 8);
          }
          *(uint *)(puVar14 + 1) = uVar1;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          lVar15 = func_0x003f8b8c(puStack_70,uVar34);
          if (lVar15 != 0) {
            puVar32 = (ulong *)*puStack_70;
            *puVar32 = 1;
            if (1 < (int)uVar1) {
              _bzero(puVar32 + 1,(ulong)(uVar1 - 1) << 3);
            }
            *(uint *)(puStack_70 + 1) = uVar1;
            lVar15 = func_0x003f8b8c(puStack_78,uVar34);
            if (lVar15 != 0) {
              puStack_90 = (ulong *)*puStack_78;
              uVar33 = (ulong)(uVar1 - 1);
              if (0 < (int)uVar1) {
                _bzero(puStack_90,uVar34 * 8);
              }
              *(uint *)(puStack_78 + 1) = uVar1;
              uVar24 = uVar33 & 0xfffffffc;
              uVar25 = uVar34 & 0x7ffffffc;
              puStack_98 = (ulong *)*puStack_68;
LAB_003f746c:
              puVar9 = puStack_78;
              if (iVar11 != 0) {
                do {
                  uVar29 = *puVar31;
                  if ((uVar29 & 1) != 0) {
                    iVar35 = iVar11;
                    if (0x40 < iVar11) goto LAB_003f763c;
                    goto LAB_003f7630;
                  }
                  uVar28 = -(*puVar32 & 1);
                  puVar16 = (ulong *)*param_3;
                  uVar17 = *puVar16 & uVar28 ^ *puVar32;
                  if ((int)uVar1 < 2) {
                    uVar21 = 0;
                  }
                  else {
/* WM - do not claim this as your own */
                    uVar21 = uVar33;
                    if (uVar1 < 5) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = 0;
                      if (((puVar16 + uVar33 + 1 <= puVar31 || puVar31 + uVar33 + 1 <= puVar16 + 1)
                           && (puVar32 + uVar33 + 1 <= puVar31 || puVar31 + uVar33 + 1 <= puVar32))
                         && (puVar16 + uVar33 + 1 <= puVar32 || puVar32 + uVar33 + 1 <= puVar16 + 1)
                         ) {
                        bVar62 = (byte)uVar17;
                        bVar63 = (byte)(uVar17 >> 8);
                        bVar64 = (byte)(uVar17 >> 0x10);
                        bVar65 = (byte)(uVar17 >> 0x18);
                        bVar66 = (byte)(uVar17 >> 0x20);
                        bVar67 = (byte)(uVar17 >> 0x28);
                        bVar68 = (byte)(uVar17 >> 0x30);
                        bVar69 = (byte)(uVar17 >> 0x38);
                        puVar19 = puVar16 + 3;
                        uVar46 = (undefined1)uVar29;
                        uVar47 = (undefined1)(uVar29 >> 8);
                        uVar48 = (undefined1)(uVar29 >> 0x10);
                        uVar49 = (undefined1)(uVar29 >> 0x18);
                        uVar50 = (undefined1)(uVar29 >> 0x20);
                        uVar51 = (undefined1)(uVar29 >> 0x28);
                        uVar52 = (undefined1)(uVar29 >> 0x30);
                        uVar53 = (undefined1)(uVar29 >> 0x38);
                        puVar22 = puVar32 + 2;
                        puVar23 = puVar31 + 2;
                        uVar17 = uVar24;
                        uVar54 = uVar46;
/* if you paid for this, you were scammed - github.com/pengussy */
                        uVar55 = uVar47;
                        uVar56 = uVar48;
                        uVar57 = uVar49;
                        uVar58 = uVar50;
                        uVar59 = uVar51;
                        uVar60 = uVar52;
                        uVar61 = uVar53;
                        bVar70 = bVar62;
                        bVar71 = bVar63;
                        bVar72 = bVar64;
                        bVar73 = bVar65;
                        bVar74 = bVar66;
                        bVar75 = bVar67;
                        bVar76 = bVar68;
                        bVar77 = bVar69;
                        do {
                          puVar26 = puVar23 + -1;
                          uVar103 = *puVar23;
                          uVar87 = (undefined1)(uVar103 >> 8);
                          uVar89 = (undefined1)(uVar103 >> 0x10);
                          uVar91 = (undefined1)(uVar103 >> 0x18);
                          uVar93 = (undefined1)(uVar103 >> 0x20);
                          uVar95 = (undefined1)(uVar103 >> 0x28);
                          uVar97 = (undefined1)(uVar103 >> 0x30);
                          uVar99 = (undefined1)(uVar103 >> 0x38);
                          uVar30 = *puVar26;
                          auVar101[1] = uVar47;
                          auVar101[0] = uVar46;
                          auVar101[2] = uVar48;
                          auVar101[3] = uVar49;
                          auVar101[4] = uVar50;
                          auVar101[5] = uVar51;
                          auVar101[6] = uVar52;
                          auVar101[7] = uVar53;
                          auVar101[8] = uVar54;
                          auVar101[9] = uVar55;
                          auVar101[10] = uVar56;
/* more drops soon - github.com/pengussy */
                          auVar101[0xb] = uVar57;
                          auVar101[0xc] = uVar58;
                          auVar101[0xd] = uVar59;
                          auVar101[0xe] = uVar60;
                          auVar101[0xf] = uVar61;
                          auVar5[9] = uVar87;
                          auVar5._0_9_ = *(unkbyte9 *)puVar26;
                          auVar5[10] = uVar89;
                          auVar5[0xb] = uVar91;
                          auVar5[0xc] = uVar93;
                          auVar5[0xd] = uVar95;
                          auVar5[0xe] = uVar97;
                          auVar5[0xf] = uVar99;
                          auVar101 = NEON_ext(auVar101,auVar5,8,1);
                          uVar29 = puVar23[2];
                          uVar54 = (undefined1)uVar29;
                          uVar55 = (undefined1)(uVar29 >> 8);
                          uVar56 = (undefined1)(uVar29 >> 0x10);
/* WM - proprietary - see LICENSE - do not sell */
                          uVar57 = (undefined1)(uVar29 >> 0x18);
                          uVar58 = (undefined1)(uVar29 >> 0x20);
                          uVar59 = (undefined1)(uVar29 >> 0x28);
                          uVar60 = (undefined1)(uVar29 >> 0x30);
                          uVar61 = (undefined1)(uVar29 >> 0x38);
                          uVar18 = puVar23[1];
                          uVar46 = (undefined1)uVar18;
                          uVar47 = (undefined1)(uVar18 >> 8);
                          uVar48 = (undefined1)(uVar18 >> 0x10);
                          uVar49 = (undefined1)(uVar18 >> 0x18);
                          uVar50 = (undefined1)(uVar18 >> 0x20);
                          uVar51 = (undefined1)(uVar18 >> 0x28);
                          uVar52 = (undefined1)(uVar18 >> 0x30);
                          uVar53 = (undefined1)(uVar18 >> 0x38);
                          auVar102[9] = uVar55;
                          auVar102._0_9_ = *(unkbyte9 *)(puVar23 + 1);
                          auVar102[10] = uVar56;
                          auVar102[0xb] = uVar57;
/* WM - found on a paste site? it was re-uploaded illegally */
                          auVar102[0xc] = uVar58;
                          auVar102[0xd] = uVar59;
                          auVar102[0xe] = uVar60;
                          auVar102[0xf] = uVar61;
                          auVar6[9] = uVar87;
                          auVar6._0_9_ = *(unkbyte9 *)puVar26;
                          auVar6[10] = uVar89;
                          auVar6[0xb] = uVar91;
                          auVar6[0xc] = uVar93;
                          auVar6[0xd] = uVar95;
                          auVar6[0xe] = uVar97;
                          auVar6[0xf] = uVar99;
                          auVar102 = NEON_ext(auVar6,auVar102,8,1);
                          puVar23[-1] = (uVar103 << 0x3f) + (auVar101._8_8_ >> 1);
                          puVar23[-2] = (uVar30 << 0x3f) + (auVar101._0_8_ >> 1);
                          puVar23[1] = (uVar29 << 0x3f) + (auVar102._8_8_ >> 1);
                          *puVar23 = (uVar18 << 0x3f) + (auVar102._0_8_ >> 1);
                          uVar30 = *puVar22;
                          uVar18 = puVar22[-1];
                          uVar37 = puVar19[1];
                          uVar103 = *puVar19;
                          bVar36 = (byte)uVar28;
                          bVar38 = (byte)(uVar28 >> 8);
                          bVar39 = (byte)(uVar28 >> 0x10);
                          bVar40 = (byte)(uVar28 >> 0x18);
                          bVar41 = (byte)(uVar28 >> 0x20);
                          bVar42 = (byte)(uVar28 >> 0x28);
                          bVar43 = (byte)(uVar28 >> 0x30);
                          bVar44 = (byte)(uVar28 >> 0x38);
                          bVar78 = (byte)puVar19[-2] & bVar36 ^ (byte)uVar18;
                          bVar79 = *(byte *)((long)puVar19 + -0xf) & bVar38 ^ (byte)(uVar18 >> 8);
                          bVar80 = *(byte *)((long)puVar19 + -0xe) & bVar39 ^ (byte)(uVar18 >> 0x10)
                          ;
                          bVar81 = *(byte *)((long)puVar19 + -0xd) & bVar40 ^ (byte)(uVar18 >> 0x18)
                          ;
                          bVar82 = *(byte *)((long)puVar19 + -0xc) & bVar41 ^ (byte)(uVar18 >> 0x20)
                          ;
                          bVar83 = *(byte *)((long)puVar19 + -0xb) & bVar42 ^ (byte)(uVar18 >> 0x28)
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                          ;
                          bVar84 = *(byte *)((long)puVar19 + -10) & bVar43 ^ (byte)(uVar18 >> 0x30);
                          bVar85 = *(byte *)((long)puVar19 + -9) & bVar44 ^ (byte)(uVar18 >> 0x38);
                          bVar86 = (byte)puVar19[-1] & bVar36 ^ (byte)uVar30;
                          bVar88 = *(byte *)((long)puVar19 + -7) & bVar38 ^ (byte)(uVar30 >> 8);
                          bVar90 = *(byte *)((long)puVar19 + -6) & bVar39 ^ (byte)(uVar30 >> 0x10);
                          bVar92 = *(byte *)((long)puVar19 + -5) & bVar40 ^ (byte)(uVar30 >> 0x18);
                          bVar94 = *(byte *)((long)puVar19 + -4) & bVar41 ^ (byte)(uVar30 >> 0x20);
                          bVar96 = *(byte *)((long)puVar19 + -3) & bVar42 ^ (byte)(uVar30 >> 0x28);
                          bVar98 = *(byte *)((long)puVar19 + -2) & bVar43 ^ (byte)(uVar30 >> 0x30);
                          bVar100 = *(byte *)((long)puVar19 + -1) & bVar44 ^ (byte)(uVar30 >> 0x38);
                          auVar3[1] = bVar63;
                          auVar3[0] = bVar62;
                          auVar3[2] = bVar64;
                          auVar3[3] = bVar65;
                          auVar3[4] = bVar66;
                          auVar3[5] = bVar67;
                          auVar3[6] = bVar68;
                          auVar3[7] = bVar69;
                          auVar3[8] = bVar70;
                          auVar3[9] = bVar71;
                          auVar3[10] = bVar72;
                          auVar3[0xb] = bVar73;
                          auVar3[0xc] = bVar74;
                          auVar3[0xd] = bVar75;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                          auVar3[0xe] = bVar76;
                          auVar3[0xf] = bVar77;
                          auVar7[1] = bVar79;
                          auVar7[0] = bVar78;
                          auVar7[2] = bVar80;
                          auVar7[3] = bVar81;
                          auVar7[4] = bVar82;
                          auVar7[5] = bVar83;
                          auVar7[6] = bVar84;
                          auVar7[7] = bVar85;
                          auVar7[8] = bVar86;
                          auVar7[9] = bVar88;
                          auVar7[10] = bVar90;
                          auVar7[0xb] = bVar92;
                          auVar7[0xc] = bVar94;
                          auVar7[0xd] = bVar96;
                          auVar7[0xe] = bVar98;
                          auVar7[0xf] = bVar100;
                          auVar102 = NEON_ext(auVar3,auVar7,8,1);
                          bVar62 = (byte)uVar103 & bVar36 ^ (byte)puVar22[1];
                          bVar63 = (byte)(uVar103 >> 8) & bVar38 ^ *(byte *)((long)puVar22 + 9);
                          bVar64 = (byte)(uVar103 >> 0x10) & bVar39 ^ *(byte *)((long)puVar22 + 10);
                          bVar65 = (byte)(uVar103 >> 0x18) & bVar40 ^ *(byte *)((long)puVar22 + 0xb)
                          ;
                          bVar66 = (byte)(uVar103 >> 0x20) & bVar41 ^ *(byte *)((long)puVar22 + 0xc)
                          ;
                          bVar67 = (byte)(uVar103 >> 0x28) & bVar42 ^ *(byte *)((long)puVar22 + 0xd)
                          ;
                          bVar68 = (byte)(uVar103 >> 0x30) & bVar43 ^ *(byte *)((long)puVar22 + 0xe)
                          ;
                          bVar69 = (byte)(uVar103 >> 0x38) & bVar44 ^ *(byte *)((long)puVar22 + 0xf)
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                          ;
                          bVar70 = (byte)uVar37 & bVar36 ^ (byte)puVar22[2];
                          bVar71 = (byte)(uVar37 >> 8) & bVar38 ^ *(byte *)((long)puVar22 + 0x11);
                          bVar72 = (byte)(uVar37 >> 0x10) & bVar39 ^ *(byte *)((long)puVar22 + 0x12)
                          ;
                          bVar73 = (byte)(uVar37 >> 0x18) & bVar40 ^ *(byte *)((long)puVar22 + 0x13)
                          ;
                          bVar74 = (byte)(uVar37 >> 0x20) & bVar41 ^ *(byte *)((long)puVar22 + 0x14)
                          ;
                          bVar75 = (byte)(uVar37 >> 0x28) & bVar42 ^ *(byte *)((long)puVar22 + 0x15)
                          ;
                          bVar76 = (byte)(uVar37 >> 0x30) & bVar43 ^ *(byte *)((long)puVar22 + 0x16)
                          ;
                          bVar77 = (byte)(uVar37 >> 0x38) & bVar44 ^ *(byte *)((long)puVar22 + 0x17)
                          ;
                          auVar4[1] = bVar63;
                          auVar4[0] = bVar62;
                          auVar4[2] = bVar64;
                          auVar4[3] = bVar65;
                          auVar4[4] = bVar66;
                          auVar4[5] = bVar67;
                          auVar4[6] = bVar68;
                          auVar4[7] = bVar69;
                          auVar4[8] = bVar70;
// found on a paste site? it was re-uploaded illegally
                          auVar4[9] = bVar71;
                          auVar4[10] = bVar72;
                          auVar4[0xb] = bVar73;
                          auVar4[0xc] = bVar74;
                          auVar4[0xd] = bVar75;
                          auVar4[0xe] = bVar76;
                          auVar4[0xf] = bVar77;
                          auVar8[1] = bVar79;
                          auVar8[0] = bVar78;
                          auVar8[2] = bVar80;
                          auVar8[3] = bVar81;
                          auVar8[4] = bVar82;
                          auVar8[5] = bVar83;
                          auVar8[6] = bVar84;
                          auVar8[7] = bVar85;
                          auVar8[8] = bVar86;
                          auVar8[9] = bVar88;
                          auVar8[10] = bVar90;
                          auVar8[0xb] = bVar92;
                          auVar8[0xc] = bVar94;
                          auVar8[0xd] = bVar96;
                          auVar8[0xe] = bVar98;
                          auVar8[0xf] = bVar100;
                          auVar101 = NEON_ext(auVar8,auVar4,8,1);
                          puVar22[-1] = (CONCAT17(bVar100,CONCAT16(bVar98,CONCAT15(bVar96,CONCAT14(
                                                  bVar94,CONCAT13(bVar92,CONCAT12(bVar90,CONCAT11(
                                                  bVar88,bVar86))))))) << 0x3f) +
                                        (auVar102._8_8_ >> 1);
                          puVar22[-2] = (CONCAT17(bVar85,CONCAT16(bVar84,CONCAT15(bVar83,CONCAT14(
                                                  bVar82,CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(
                                                  bVar79,bVar78))))))) << 0x3f) +
                                        (auVar102._0_8_ >> 1);
                          puVar22[1] = (CONCAT17(bVar77,CONCAT16(bVar76,CONCAT15(bVar75,CONCAT14(
                                                  bVar74,CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(
/* WM - unlicensed copy if this notice is missing */
                                                  bVar71,bVar70))))))) << 0x3f) +
                                       (auVar101._8_8_ >> 1);
                          *puVar22 = (CONCAT17(bVar69,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(
                                                  bVar66,CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(
                                                  bVar63,bVar62))))))) << 0x3f) +
                                     (auVar101._0_8_ >> 1);
                          puVar23 = puVar23 + 4;
                          puVar22 = puVar22 + 4;
                          puVar19 = puVar19 + 4;
                          uVar17 = uVar17 - 4;
                        } while (uVar17 != 0);
                        uVar17 = CONCAT17(bVar77,CONCAT16(bVar76,CONCAT15(bVar75,CONCAT14(bVar74,
                                                  CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,
                                                  bVar70)))))));
                        uVar18 = uVar24;
                        if (uVar24 == uVar33) goto LAB_003f74a4;
                      }
                    }
                    puVar19 = puVar32 + uVar18 + 1;
                    puVar23 = puVar31 + uVar18 + 1;
                    lVar15 = uVar33 - uVar18;
                    puVar16 = puVar16 + uVar18;
                    uVar18 = uVar17;
                    uVar30 = uVar29;
                    do {
                      puVar16 = puVar16 + 1;
                      uVar29 = *puVar23;
// WM - more drops soon - github.com/pengussy
                      puVar23[-1] = uVar30 >> 1 | uVar29 << 0x3f;
                      uVar17 = *puVar16 & uVar28 ^ *puVar19;
                      puVar19[-1] = uVar18 >> 1 | uVar17 << 0x3f;
                      puVar19 = puVar19 + 1;
                      puVar23 = puVar23 + 1;
                      lVar15 = lVar15 + -1;
                      uVar18 = uVar17;
                      uVar30 = uVar29;
                    } while (lVar15 != 0);
                  }
LAB_003f74a4:
                  puVar31[uVar21] = uVar29 >> 1;
                  puVar32[uVar21] = uVar17 >> 1;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              iVar11 = 0;
              uVar29 = *puVar31;
LAB_003f7630:
              if (uVar29 == 0) goto LAB_003f7308;
              iVar35 = iVar11;
              if (uVar29 != 1) {
LAB_003f763c:
                if (iVar35 < iVar12) {
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  puVar16 = (ulong *)*puStack_70;
                  puStack_78 = puStack_70;
                  puStack_70 = puVar9;
                  puVar19 = (ulong *)*puVar14;
                  puVar31 = puStack_98;
                  puVar32 = puStack_90;
                  puVar9 = puStack_68;
                  puStack_68 = puVar14;
                  iVar11 = iVar12;
                  iVar20 = iVar35;
                }
                else {
                  puVar16 = puStack_90;
                  puVar19 = puStack_98;
                  puVar9 = puVar14;
                  iVar11 = iVar35;
                  iVar20 = iVar12;
                }
                puVar14 = puVar9;
                if (0 < (int)uVar1) {
                  if (uVar1 < 6) {
                    uVar29 = 0;
                  }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                  else {
                    uVar29 = 0;
                    puVar23 = puVar31 + uVar34;
                    puVar22 = puVar32 + uVar34;
                    if (((puVar23 <= puVar32 || puVar22 <= puVar31) &&
                        (puVar19 + uVar34 <= puVar31 || puVar23 <= puVar19)) &&
                       ((puVar16 + uVar34 <= puVar31 || puVar23 <= puVar16 &&
                        ((puVar19 + uVar34 <= puVar32 || puVar22 <= puVar19 &&
                         (puVar16 + uVar34 <= puVar32 || puVar22 <= puVar16)))))) {
                      puVar23 = puVar19 + 2;
                      puVar22 = puVar32 + 2;
                      puVar26 = puVar31 + 2;
                      puVar27 = puVar16 + 2;
                      uVar29 = uVar25;
                      do {
                        uVar45 = puVar23[-1];
                        uVar37 = puVar23[-2];
                        uVar28 = puVar23[1];
                        uVar17 = *puVar23;
                        uVar18 = puVar26[-1];
                        uVar21 = puVar26[-2];
                        uVar103 = puVar26[1];
                        uVar30 = *puVar26;
                        puVar26[-1] = CONCAT17((byte)(uVar18 >> 0x38) ^ (byte)(uVar45 >> 0x38),
                                               CONCAT16((byte)(uVar18 >> 0x30) ^
                                                        (byte)(uVar45 >> 0x30),
                                                        CONCAT15((byte)(uVar18 >> 0x28) ^
                                                                 (byte)(uVar45 >> 0x28),
                                                                 CONCAT14((byte)(uVar18 >> 0x20) ^
                                                                          (byte)(uVar45 >> 0x20),
                                                                          CONCAT13((byte)(uVar18 >>
                                                                                         0x18) ^
/*  proprietary - see LICENSE - do not sell  */
                                                                                   (byte)(uVar45 >>
                                                                                         0x18),
                                                                                   CONCAT12((byte)(
                                                  uVar18 >> 0x10) ^ (byte)(uVar45 >> 0x10),
                                                  CONCAT11((byte)(uVar18 >> 8) ^ (byte)(uVar45 >> 8)
                                                           ,(byte)uVar18 ^ (byte)uVar45)))))));
                        puVar26[-2] = CONCAT17((byte)(uVar21 >> 0x38) ^ (byte)(uVar37 >> 0x38),
                                               CONCAT16((byte)(uVar21 >> 0x30) ^
                                                        (byte)(uVar37 >> 0x30),
                                                        CONCAT15((byte)(uVar21 >> 0x28) ^
                                                                 (byte)(uVar37 >> 0x28),
                                                                 CONCAT14((byte)(uVar21 >> 0x20) ^
                                                                          (byte)(uVar37 >> 0x20),
                                                                          CONCAT13((byte)(uVar21 >>
                                                                                         0x18) ^
                                                                                   (byte)(uVar37 >>
                                                                                         0x18),
                                                                                   CONCAT12((byte)(
                                                  uVar21 >> 0x10) ^ (byte)(uVar37 >> 0x10),
                                                  CONCAT11((byte)(uVar21 >> 8) ^ (byte)(uVar37 >> 8)
                                                           ,(byte)uVar21 ^ (byte)uVar37)))))));
                        puVar26[1] = CONCAT17((byte)(uVar103 >> 0x38) ^ (byte)(uVar28 >> 0x38),
                                              CONCAT16((byte)(uVar103 >> 0x30) ^
                                                       (byte)(uVar28 >> 0x30),
                                                       CONCAT15((byte)(uVar103 >> 0x28) ^
                                                                (byte)(uVar28 >> 0x28),
                                                                CONCAT14((byte)(uVar103 >> 0x20) ^
                                                                         (byte)(uVar28 >> 0x20),
                                                                         CONCAT13((byte)(uVar103 >>
                                                                                        0x18) ^
                                                                                  (byte)(uVar28 >>
                                                                                        0x18),
                                                                                  CONCAT12((byte)(
                                                  uVar103 >> 0x10) ^ (byte)(uVar28 >> 0x10),
                                                  CONCAT11((byte)(uVar103 >> 8) ^
/*  stripping the watermark breaks the license  */
                                                           (byte)(uVar28 >> 8),
                                                           (byte)uVar103 ^ (byte)uVar28)))))));
                        *puVar26 = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)(uVar17 >> 0x38),
                                            CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)(uVar17 >> 0x30)
                                                     ,CONCAT15((byte)(uVar30 >> 0x28) ^
                                                               (byte)(uVar17 >> 0x28),
                                                               CONCAT14((byte)(uVar30 >> 0x20) ^
                                                                        (byte)(uVar17 >> 0x20),
                                                                        CONCAT13((byte)(uVar30 >>
                                                                                       0x18) ^
                                                                                 (byte)(uVar17 >>
                                                                                       0x18),
                                                                                 CONCAT12((byte)(
                                                  uVar30 >> 0x10) ^ (byte)(uVar17 >> 0x10),
                                                  CONCAT11((byte)(uVar30 >> 8) ^ (byte)(uVar17 >> 8)
                                                           ,(byte)uVar30 ^ (byte)uVar17)))))));
                        uVar45 = puVar27[-1];
                        uVar37 = puVar27[-2];
                        uVar28 = puVar27[1];
                        uVar17 = *puVar27;
                        uVar18 = puVar22[-1];
                        uVar21 = puVar22[-2];
                        uVar103 = puVar22[1];
                        uVar30 = *puVar22;
                        puVar23 = puVar23 + 4;
                        puVar22[-1] = CONCAT17((byte)(uVar18 >> 0x38) ^ (byte)(uVar45 >> 0x38),
                                               CONCAT16((byte)(uVar18 >> 0x30) ^
                                                        (byte)(uVar45 >> 0x30),
                                                        CONCAT15((byte)(uVar18 >> 0x28) ^
                                                                 (byte)(uVar45 >> 0x28),
                                                                 CONCAT14((byte)(uVar18 >> 0x20) ^
                                                                          (byte)(uVar45 >> 0x20),
                                                                          CONCAT13((byte)(uVar18 >>
/* found on a paste site? it was re-uploaded illegally */
                                                                                         0x18) ^
                                                                                   (byte)(uVar45 >>
                                                                                         0x18),
                                                                                   CONCAT12((byte)(
                                                  uVar18 >> 0x10) ^ (byte)(uVar45 >> 0x10),
                                                  CONCAT11((byte)(uVar18 >> 8) ^ (byte)(uVar45 >> 8)
                                                           ,(byte)uVar18 ^ (byte)uVar45)))))));
                        puVar22[-2] = CONCAT17((byte)(uVar21 >> 0x38) ^ (byte)(uVar37 >> 0x38),
                                               CONCAT16((byte)(uVar21 >> 0x30) ^
                                                        (byte)(uVar37 >> 0x30),
                                                        CONCAT15((byte)(uVar21 >> 0x28) ^
                                                                 (byte)(uVar37 >> 0x28),
                                                                 CONCAT14((byte)(uVar21 >> 0x20) ^
                                                                          (byte)(uVar37 >> 0x20),
                                                                          CONCAT13((byte)(uVar21 >>
                                                                                         0x18) ^
                                                                                   (byte)(uVar37 >>
                                                                                         0x18),
                                                                                   CONCAT12((byte)(
                                                  uVar21 >> 0x10) ^ (byte)(uVar37 >> 0x10),
                                                  CONCAT11((byte)(uVar21 >> 8) ^ (byte)(uVar37 >> 8)
                                                           ,(byte)uVar21 ^ (byte)uVar37)))))));
                        puVar22[1] = CONCAT17((byte)(uVar103 >> 0x38) ^ (byte)(uVar28 >> 0x38),
                                              CONCAT16((byte)(uVar103 >> 0x30) ^
                                                       (byte)(uVar28 >> 0x30),
                                                       CONCAT15((byte)(uVar103 >> 0x28) ^
                                                                (byte)(uVar28 >> 0x28),
                                                                CONCAT14((byte)(uVar103 >> 0x20) ^
                                                                         (byte)(uVar28 >> 0x20),
                                                                         CONCAT13((byte)(uVar103 >>
                                                                                        0x18) ^
                                                                                  (byte)(uVar28 >>
                                                                                        0x18),
                                                                                  CONCAT12((byte)(
/*  chat: discord.gg/sdkhDjTex  */
                                                  uVar103 >> 0x10) ^ (byte)(uVar28 >> 0x10),
                                                  CONCAT11((byte)(uVar103 >> 8) ^
                                                           (byte)(uVar28 >> 8),
                                                           (byte)uVar103 ^ (byte)uVar28)))))));
                        *puVar22 = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)(uVar17 >> 0x38),
                                            CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)(uVar17 >> 0x30)
                                                     ,CONCAT15((byte)(uVar30 >> 0x28) ^
                                                               (byte)(uVar17 >> 0x28),
                                                               CONCAT14((byte)(uVar30 >> 0x20) ^
                                                                        (byte)(uVar17 >> 0x20),
                                                                        CONCAT13((byte)(uVar30 >>
                                                                                       0x18) ^
                                                                                 (byte)(uVar17 >>
                                                                                       0x18),
                                                                                 CONCAT12((byte)(
                                                  uVar30 >> 0x10) ^ (byte)(uVar17 >> 0x10),
                                                  CONCAT11((byte)(uVar30 >> 8) ^ (byte)(uVar17 >> 8)
                                                           ,(byte)uVar30 ^ (byte)uVar17)))))));
                        puVar22 = puVar22 + 4;
                        puVar26 = puVar26 + 4;
                        puVar27 = puVar27 + 4;
                        uVar29 = uVar29 - 4;
                      } while (uVar29 != 0);
                      uVar29 = uVar25;
                      if (uVar25 == uVar34) goto LAB_003f76d0;
                    }
                  }
                  lVar15 = uVar34 - uVar29;
                  puVar23 = puVar32 + uVar29;
                  puVar22 = puVar16 + uVar29;
/*  found on a paste site? it was re-uploaded illegally  */
                  puVar26 = puVar31 + uVar29;
                  puVar27 = puVar19 + uVar29;
                  do {
                    *puVar26 = *puVar26 ^ *puVar27;
                    *puVar23 = *puVar23 ^ *puVar22;
                    lVar15 = lVar15 + -1;
                    puVar23 = puVar23 + 1;
                    puVar22 = puVar22 + 1;
                    puVar26 = puVar26 + 1;
                    puVar27 = puVar27 + 1;
                  } while (lVar15 != 0);
                }
LAB_003f76d0:
                bVar10 = iVar12 == iVar35;
                puStack_98 = puVar19;
                puStack_90 = puVar16;
                iVar12 = iVar20;
                if (bVar10) {
                  uVar2 = iVar11 + 0x3e;
                  if (0 < iVar11) {
                    uVar2 = iVar11 - 1;
                  }
                  lVar15 = (long)((ulong)uVar2 << 0x20) >> 0x26;
                  iVar35 = ~((int)uVar2 >> 6) << 6;
                  do {
                    puVar16 = puVar31 + lVar15;
                    iVar35 = iVar35 + 0x40;
                    bVar10 = lVar15 == 0;
                    lVar15 = lVar15 + -1;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    if (bVar10) break;
                  } while (*puVar16 == 0);
                  iVar11 = func_0x003f8974();
                  iVar11 = iVar11 - iVar35;
                }
                goto LAB_003f746c;
              }
              func_0x019e8c64(puStack_70);
              lVar15 = func_0x019e8960(param_1,puStack_70);
              func_0x003f19bc(param_4);
              if (lVar15 != 0) {
                iVar11 = FUN_003f7064(param_1,param_1,lVar13,param_3,param_4);
                bVar10 = iVar11 != 0;
                goto LAB_003f7314;
              }
              goto LAB_003f7310;
            }
          }
        }
      }
LAB_003f7308:
      func_0x003f19bc(param_4);
    }
  }
LAB_003f7310:
  bVar10 = false;
LAB_003f7314:
  func_0x003f19bc(param_4);
  return bVar10;
}

