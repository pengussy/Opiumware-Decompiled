/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x344348:b6422f768d
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x00344400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00344404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00344348(long param_1,undefined8 param_2,long param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar8;
  undefined8 *extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 *extraout_x1_08;
  undefined8 extraout_x1_09;
  int *piVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long *unaff_x19;
  ushort *puVar12;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  int iVar17;
// watermarked copy - do not remove
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
// found on a paste site? it was re-uploaded illegally
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_01f20200;
  func_0x002feb94();
  lVar3 = func_0x00306aac();
  iVar17 = (int)((float)*(undefined8 *)(param_1 + 0x28) * (float)*(undefined8 *)(param_1 + 0x30));
  iVar19 = (int)((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) *
                (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20));
  uStack_130 = CONCAT44(iVar19,iVar17);
  uStack_128 = 0;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,(float)uStack_e0);
  uStack_d8 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
  uStack_d0 = (double)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
  if ((0 < iVar17 && 0 < iVar19) &&
     (uStack_e0 = CONCAT44(uStack_e0._4_4_,(float)uStack_e0),
     uStack_d8 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8),
     uStack_d0 = (double)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0),
     *(int *)(param_1 + 0x10) != 0)) {
/*  stripping the watermark breaks the license  */
    plVar14 = *(long **)(lVar3 + 0x98);
    lVar3 = *plVar14;
    piVar9 = *(int **)(param_1 + 0x40);
    if ((piVar9 != (int *)0x0) && (*piVar9 != 0)) {
      unaff_x19 = *(long **)(piVar9 + 2);
      unaff_x22 = (long)*piVar9 << 3;
      do {
        lVar4 = *unaff_x19;
        if (*(int *)(lVar4 + 4) != 0) {
          puVar16 = (undefined *)0x344404;
          unaff_x24 = lVar3;
          goto code_r0x003448a0;
        }
        unaff_x19 = unaff_x19 + 1;
        unaff_x22 = unaff_x22 + -8;
      } while (unaff_x22 != 0);
    }
    unaff_x22 = func_0x01a1a9c0(lVar3);
    auVar29 = func_0x01a1a260(lVar3);
    lVar4 = func_0x01a1a7e0(unaff_x22,auVar29._8_8_,auVar29._0_8_);
/* watermarked copy - do not remove */
    if (lVar4 == 0) {
      unaff_x22 = func_0x01a1a260(lVar3);
      auVar29 = func_0x01a1a160(param_2);
      lVar4 = func_0x01a1a9e0(lVar3,auVar29._8_8_,unaff_x22,auVar29._0_8_);
      uVar5 = func_0x01a1a9c0(lVar3);
      auVar29 = func_0x01a1a260(lVar3);
      func_0x01a1b140(uVar5,auVar29._8_8_,lVar4,auVar29._0_8_);
    }
    iVar17 = *(int *)(param_1 + 8);
    unaff_x23 = (long)*(int *)(param_1 + 0xc) * 0x14;
    auVar29 = func_0x01a1a160(param_2);
    unaff_x24 = func_0x01a1a140(lVar3,auVar29._8_8_,unaff_x23,auVar29._0_8_);
    uStack_160 = param_2;
    auVar29 = func_0x01a1a160(param_2);
    uStack_140 = func_0x01a1a140(lVar3,auVar29._8_8_,(long)iVar17 << 1,auVar29._0_8_);
    plVar14[1] = param_3;
    plStack_168 = plVar14;
    func_0x00344a7c(param_1,param_3,lVar4,unaff_x24,0);
    uVar7 = _UNK_01adb7d8;
    uVar5 = _UNK_01adb7d0;
    puVar15 = extraout_x1;
    if (*(int *)(param_1 + 0x10) != 0) {
      lVar13 = 0;
      lVar3 = 0;
      uVar25 = *(undefined8 *)(param_1 + 0x20);
      uVar27 = *(undefined8 *)(param_1 + 0x30);
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      puStack_158 = puVar11 + *(int *)(param_1 + 0x10);
      uVar28 = NEON_ucvtf(uStack_130,4);
      uStack_128 = _UNK_01ae5c88;
      uStack_130 = _UNK_01ae5c80;
      lStack_148 = param_1;
      do {
        piVar9 = (int *)*puVar11;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        puStack_150 = puVar11;
        func_0x01a19e00(unaff_x24);
        lVar6 = func_0x01a19f60();
        _memcpy(lVar6 + lVar13,*(undefined8 *)(piVar9 + 10),(long)piVar9[8] * 0x14);
        func_0x01a19e00(uStack_140);
        lVar6 = func_0x01a19f60();
        lStack_138 = lVar3;
        _memcpy(lVar6 + lVar3,*(undefined8 *)(piVar9 + 6),(long)piVar9[4] << 1);
        puVar15 = extraout_x1_00;
        if (0 < *piVar9) {
          unaff_x23 = 0;
          unaff_x22 = 0;
          do {
            lVar3 = *(long *)(piVar9 + 2);
            puVar15 = (undefined8 *)(lVar3 + unaff_x23);
            pcVar10 = (code *)puVar15[6];
            if (pcVar10 == (code *)0x0) {
              fVar24 = (float)uVar25;
              fVar26 = (float)((ulong)uVar25 >> 0x20);
              fVar21 = (float)uVar27;
              fVar18 = fVar21 * ((float)*puVar15 - fVar24);
              fVar23 = (float)((ulong)uVar27 >> 0x20);
              fVar20 = fVar23 * ((float)((ulong)*puVar15 >> 0x20) - fVar26);
              iVar17 = -(uint)(fVar18 < 0.0);
              iVar19 = -(uint)(fVar20 < 0.0);
              fVar18 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                                       CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                                ~(byte)((uint)iVar17 >> 0x10),
                                                CONCAT11((byte)((uint)fVar18 >> 8) &
                                                         ~(byte)((uint)iVar17 >> 8),
                                                         SUB41(fVar18,0) & ~(byte)iVar17)));
              fVar21 = fVar21 * ((float)puVar15[1] - fVar24);
              fVar23 = fVar23 * ((float)((ulong)puVar15[1] >> 0x20) - fVar26);
              uVar22 = CONCAT44(fVar23,fVar21);
              uVar22 = uVar22 ^ (uVar22 ^ uVar28) &
                                CONCAT44(-(uint)((float)(uVar28 >> 0x20) < fVar23),
// do not claim this as your own
                                         -(uint)((float)uVar28 < fVar21));
              fVar21 = (float)uVar22;
              fVar20 = (float)(CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18)
                                        ,CONCAT16((byte)((uint)fVar20 >> 0x10) &
                                                  ~(byte)((uint)iVar19 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar20 >> 8) &
                                                           ~(byte)((uint)iVar19 >> 8),
                                                           CONCAT14(SUB41(fVar20,0) & ~(byte)iVar19,
                                                                    fVar18)))) >> 0x20);
              fVar23 = (float)(uVar22 >> 0x20);
              if ((((bool)(~(fVar21 <= fVar18) & 1)) && ((bool)(~(fVar23 <= fVar20) & 1))) &&
                 (lVar6 = lVar3 + unaff_x23, *(int *)(lVar6 + 0x28) != 0)) {
                uStack_e0 = (long)fVar18;
                uStack_d8 = (long)fVar20;
                uStack_d0 = (double)(long)(fVar21 - fVar18);
                dStack_c8 = (double)(long)(fVar23 - fVar20);
                func_0x01a1b2c0(param_3,puVar15,&uStack_e0);
                plVar14 = (long *)(lVar6 + 0x18);
                if (*(long *)(lVar6 + 0x10) != 0) {
                  plVar14 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
                }
                uVar8 = extraout_x1_02;
                if (*plVar14 != 0) {
                  func_0x01a1af40(param_3,extraout_x1_02,*plVar14,0);
                  uVar8 = extraout_x1_03;
                }
                func_0x01a1b4a0(param_3,uVar8,
                                lVar13 + (ulong)*(uint *)(lVar3 + unaff_x23 + 0x20) * 0x14,0);
                uVar2 = *(undefined4 *)(lVar6 + 0x28);
/* thanks for reading - discord.gg/sdkhDjTex */
                auVar29 = func_0x01a19e00(uStack_140);
                func_0x01a1a1c0(param_3,auVar29._8_8_,3,uVar2,0,auVar29._0_8_,
                                lStack_138 + (ulong)*(uint *)(lVar3 + unaff_x23 + 0x24) * 2);
                puVar15 = extraout_x1_04;
                param_1 = lStack_148;
              }
            }
            else if (pcVar10 == (code *)&DAT_00344c08) {
              auVar29 = func_0x002feb94();
              uVar8 = auVar29._8_8_;
              if (auVar29._0_8_ == 0) {
                puVar15 = (undefined8 *)0x0;
              }
              else {
                auVar29 = func_0x00306aac();
                uVar8 = auVar29._8_8_;
                puVar15 = *(undefined8 **)(auVar29._0_8_ + 0x98);
              }
              func_0x01a1ad40(param_3,uVar8,0);
              auVar29 = func_0x01a1a120(*puVar15);
              func_0x01a1adc0(param_3,auVar29._8_8_,auVar29._0_8_);
              uStack_e0._0_4_ = 0.0;
              uStack_e0._4_4_ = 0;
// thanks for reading - discord.gg/sdkhDjTex
              uStack_d8._0_4_ = 0;
              uStack_d8._4_4_ = 0;
              uStack_d0 = (double)((float)*(undefined8 *)(param_1 + 0x28) *
                                  (float)*(undefined8 *)(param_1 + 0x30));
              dStack_c8 = (double)((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) *
                                  (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20));
              uStack_b8 = uStack_128;
              uStack_c0 = uStack_130;
              func_0x01a1b520(param_3,extraout_x1_05,&uStack_e0);
              fVar18 = (float)*(undefined8 *)(param_1 + 0x20);
              fVar21 = fVar18 + (float)*(undefined8 *)(param_1 + 0x28);
              fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
              fVar23 = fVar20 + (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
              uStack_d8._4_4_ = 0;
              uStack_d0._0_4_ = 0;
              uStack_e0._4_4_ = 0;
              uStack_d8._0_4_ = 0;
              dStack_c8 = 0.0;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              uStack_c0 = 0;
              uStack_e0._0_4_ = 2.0 / (fVar21 - fVar18);
              uStack_d0._4_4_ = 2.0 / (fVar20 - fVar23);
              uStack_b0 = CONCAT44((fVar20 + fVar23) / (fVar23 - fVar20),
                                   (fVar18 + fVar21) / (fVar18 - fVar21));
              uStack_b8 = uVar7;
              uStack_a8 = uVar5;
              func_0x01a1b4c0(param_3,extraout_x1_06,&uStack_e0,0x40,1);
              func_0x01a1b200(param_3,extraout_x1_07,lVar4);
              auVar29 = func_0x01a1aa60(*puVar15);
              func_0x01a1af20(param_3,auVar29._8_8_,auVar29._0_8_,0);
              auVar29 = func_0x01a19e00(unaff_x24);
              func_0x01a1b480(param_3,auVar29._8_8_,auVar29._0_8_,lVar13,0);
              puVar15 = extraout_x1_08;
            }
            else {
              (*pcVar10)(piVar9);
              puVar15 = extraout_x1_01;
            }
            unaff_x22 = unaff_x22 + 1;
            unaff_x23 = unaff_x23 + 0x48;
          } while (unaff_x22 < *piVar9);
        }
        lVar13 = lVar13 + (long)piVar9[8] * 0x14;
/* no support for modified copies - github.com/pengussy */
        lVar3 = lStack_138 + (long)piVar9[4] * 2;
        puVar11 = puStack_150 + 1;
      } while (puVar11 != puStack_158);
    }
    unaff_x19 = plStack_168;
    lStack_f8 = *plStack_168;
    puStack_118 = PTR___NSConcreteStackBlock_01f201f0;
    uStack_110 = _UNK_01adb7e0;
    puStack_108 = &DAT_00344c0c;
    puStack_100 = &UNK_01dc22c0;
    uStack_e8 = uStack_140;
    lStack_f0 = unaff_x24;
    func_0x01a19c60(uStack_160,puVar15,&puStack_118);
    unaff_x19[1] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_a0) {
    return;
  }
  puVar16 = &SUB_003448a0;
  lVar4 = ___stack_chk_fail();
code_r0x003448a0:
  lStack_1b0 = unaff_x24;
  lStack_1a8 = unaff_x23;
  lStack_1a0 = unaff_x22;
  lStack_198 = param_1;
  lStack_190 = param_3;
  plStack_188 = unaff_x19;
  puStack_180 = auStack_98 + 0x88;
  puStack_178 = puVar16;
  auVar29 = func_0x002feb94();
  uVar5 = auVar29._8_8_;
// keep the notice, keep the source honest
  if (auVar29._0_8_ == 0) {
    puVar15 = (undefined8 *)0x0;
    iVar17 = *(int *)(lVar4 + 4);
  }
  else {
    auVar29 = func_0x00306aac();
    uVar5 = auVar29._8_8_;
    puVar15 = *(undefined8 **)(auVar29._0_8_ + 0x98);
    iVar17 = *(int *)(lVar4 + 4);
  }
  if (iVar17 == 4) {
    if (0 < *(int *)(lVar4 + 0x50)) {
      lVar3 = *(long *)(lVar4 + 8);
      if (lVar3 != 0) {
        func_0x01a1b0c0(lVar3,uVar5,0);
        *(long *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      *(undefined4 *)(lVar4 + 4) = 1;
// WM - reversing this took months of machine time
      if (((*(byte *)(lVar4 + 0x57) & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) {
        *(undefined4 *)(lVar4 + 4) = 2;
        return;
      }
    }
  }
  else {
    if (iVar17 == 3) {
      if (*(int *)(lVar4 + 0x40) != 0) {
        uVar5 = *(undefined8 *)(lVar4 + 8);
        puVar12 = *(ushort **)(lVar4 + 0x48);
        puVar1 = puVar12 + (long)*(int *)(lVar4 + 0x40) * 4;
        do {
          auVar29 = func_0x01a1a600(uVar5);
          uStack_1e0 = (ulong)*puVar12;
          uStack_1d8 = (ulong)puVar12[1];
          uStack_1c8 = (ulong)puVar12[2];
          uStack_1c0 = (ulong)puVar12[3];
          uStack_1d0 = 0;
          uStack_1b8 = 1;
          func_0x01a1aa00(auVar29._0_8_,auVar29._8_8_,&uStack_1e0,0,
                          *(long *)(lVar4 + 0x28) +
                          (uStack_1e0 + (long)*(int *)(lVar4 + 0x1c) * (long)(int)(uint)puVar12[1])
                          * (long)*(int *)(lVar4 + 0x24),(long)*(int *)(lVar4 + 0x1c) << 2);
          puVar12 = puVar12 + 4;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
        } while (puVar12 != puVar1);
      }
      *(undefined4 *)(lVar4 + 4) = 0;
      return;
    }
    if (iVar17 == 2) {
      auVar29 = func_0x01a1b680(uRam0000000001f262e0,uVar5,0x46,(long)*(int *)(lVar4 + 0x1c),
                                (long)*(int *)(lVar4 + 0x20),0);
      uVar5 = auVar29._0_8_;
      func_0x01a1b460(uVar5,auVar29._8_8_,1);
      func_0x01a1b3c0(uVar5,extraout_x1_09,1);
      auVar29 = func_0x01a1a160(*puVar15);
      auVar29 = func_0x01a1a760(auVar29._0_8_,auVar29._8_8_,uVar5);
      uVar5 = auVar29._0_8_;
      uStack_1c8 = (ulong)*(int *)(lVar4 + 0x1c);
      uStack_1c0 = (ulong)*(int *)(lVar4 + 0x20);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
// WM - watermarked copy - do not remove
      uStack_1d0 = 0;
      uStack_1b8 = 1;
      func_0x01a1aa00(uVar5,auVar29._8_8_,&uStack_1e0,0,*(undefined8 *)(lVar4 + 0x28),
                      uStack_1c8 << 2);
      auVar29 = _objc_alloc(uRam0000000001f263a0);
      uVar7 = func_0x01a1a3a0(auVar29._0_8_,auVar29._8_8_,uVar5);
      *(undefined4 *)(lVar4 + 4) = 0;
      *(undefined8 *)(lVar4 + 8) = uVar7;
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
    }
  }
  return;
}

