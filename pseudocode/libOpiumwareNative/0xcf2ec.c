/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xcf2ec:f5094e3ec1
 */

byte * FUN_000cf2ec(undefined8 param_1,ulong param_2,long *param_3,ulong param_4,byte *param_5)

{
  undefined *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte bVar16;
  ulong extraout_x8;
  ulong uVar17;
  ulong extraout_x8_00;
  byte *unaff_x19;
  byte *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar18;
  ulong unaff_x26;
  ulong unaff_x27;
  long *plVar19;
  long unaff_x28;
  undefined1 auVar20 [16];
  long lStack_1a8;
  ulong uStack_1a0;
// keep the notice, keep the source honest
  long lStack_198;
  ulong uStack_190;
  byte bStack_181;
  byte bStack_180;
  undefined1 uStack_17f;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  byte *pbStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  byte *pbStack_118;
  long lStack_110;
  undefined *puStack_108;
  long *plStack_f8;
  code *UNRECOVERED_JUMPTABLE;
  byte bStack_e1;
  undefined2 uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  char cStack_78;
  undefined8 uStack_68;
  
  uVar18 = uRam0000000001f27140;
  uVar13 = uRam0000000001f270e0;
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  pbVar7 = (byte *)0x0;
  uVar17 = param_4;
  pbVar14 = param_5;
  if (pcRam0000000001f26fa8 == (code *)0x0) {
LAB_000cf630:
    param_5 = unaff_x22;
    param_4 = unaff_x23;
    uVar13 = unaff_x24;
    uVar18 = unaff_x25;
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
      return pbVar7;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = pcRam0000000001f26fa8;
    unaff_x19 = (byte *)(*pcRam000000000205ddf8)();
    pbVar7 = (byte *)(*pcRam000000000205de10)(*unaff_x19);
    if (((((extraout_x8 & 1) == 0) && ((*pbVar7 & 1) == 0)) && (cRam0000000001f270e8 == '\x01')) &&
       ((cRam0000000002097053 == '\x01' && (iRam0000000001f270ec != 0)))) {
/* wm:stripping the watermark breaks the license */
      bVar2 = *unaff_x19;
      unaff_x27 = (ulong)bVar2;
      *unaff_x19 = 1;
      uStack_e0 = 0;
      iStack_dc = 0;
      uStack_d8 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_c4 = 0;
      if (((param_3 == (long *)0x0) ||
          ((unaff_x28 = *param_3, unaff_x28 == 0 || (*(long *)(unaff_x28 + 0x10) == 0)))) ||
         (*(code **)(unaff_x28 + 0x18) == (code *)0x0)) {
LAB_000cf5f4:
        if (((ulong)param_5 & 1) == 0) {
          uVar17 = 0;
        }
        pbVar14 = (byte *)((ulong)param_5 & 1);
        pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      }
      else {
/* unlicensed copy if this notice is missing */
        plStack_f8 = param_3;
        unaff_x26 = (**(code **)(unaff_x28 + 0x18))(param_3);
        iStack_dc = (int)unaff_x26;
        uStack_e0 = CONCAT11((char)plStack_f8[1],1);
        bVar16 = 1;
        if (iStack_dc - 1U >> 0x14 == 0) {
          lVar8 = (**(code **)(unaff_x28 + 0x10))(plStack_f8);
          if (lVar8 == 0) {
            uStack_e0 = uStack_e0 & 0xff00;
            param_3 = plStack_f8;
            goto LAB_000cf5f4;
          }
          func_0x001481e0(&uStack_d8,lVar8,lVar8 + (unaff_x26 & 0xffffffff));
          bVar16 = (byte)uStack_e0;
        }
        param_3 = plStack_f8;
        if (((bVar16 & 1) == 0) || (0xfffff < iStack_dc - 1U)) goto LAB_000cf5f4;
        bStack_e1 = 0;
        if ((uint)param_2 < 0xe) {
          lVar8 = (param_2 & 0xffffffff) * 0xc;
          lStack_c0 = *(long *)(&UNK_01ad8bd4 + lVar8);
          uStack_b8 = (ulong)(byte)(&UNK_01ad8bdc)[lVar8] | param_2 << 0x20 | 0x100;
        }
        else {
          lStack_c0 = 0;
          uStack_b8 = 0xffffffff00000100;
        }
        pbVar14 = &bStack_e1;
        uVar17 = uVar13;
        uVar9 = func_0x000cdd50(&uStack_d8,&lStack_c0,uVar18,uVar13);
        param_3 = plStack_f8;
        if ((bStack_e1 & 1) == 0) {
          if ((uVar9 & 1) == 0) {
/* WM - chat: discord.gg/sdkhDjTex */
            uVar17 = param_4;
            if (((ulong)param_5 & 1) == 0) {
              uVar17 = 0;
            }
            pbVar14 = (byte *)((ulong)param_5 & 1);
            pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,plStack_f8,uVar17);
          }
          else {
            bVar16 = uStack_e0._1_1_;
            uVar13 = (ulong)uStack_e0._1_1_;
            uStack_b8 = 0;
            lStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
            uStack_90 = 0;
            pcStack_80 = pcRam0000000001f26fb8;
            cStack_78 = '\0';
            if ((pcRam0000000001f26fb0 != (code *)0x0) && (pcRam0000000001f26fb8 != (code *)0x0)) {
              puVar4 = (undefined *)CONCAT44(uStack_d4,uStack_d8);
              uVar17 = (long)CONCAT44(uStack_cc,uStack_d0) - (long)puVar4;
              if (uVar17 >> 0x20 == 0) {
                puVar1 = &UNK_01ad8c7c;
                if (puVar4 != (undefined *)CONCAT44(uStack_cc,uStack_d0)) {
                  puVar1 = puVar4;
                }
                uVar18 = 1;
                (*pcRam0000000001f26fb0)(&lStack_c0,puVar1,uVar17,1);
                cStack_78 = '\x01';
                uStack_b8 = CONCAT71(uStack_b8._1_7_,bVar16);
                param_3 = &lStack_c0;
              }
            }
            uVar17 = param_4;
            if (((ulong)param_5 & 1) == 0) {
              uVar17 = 0;
            }
            pbVar14 = (byte *)((ulong)param_5 & 1);
            pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,uVar17);
            if (cStack_78 == '\x01') {
              (*pcStack_80)(&lStack_c0);
            }
          }
        }
        else {
          pbVar7 = (byte *)0x0;
        }
      }
      if (CONCAT44(uStack_d4,uStack_d8) != 0) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        uStack_d0 = uStack_d8;
        uStack_cc = uStack_d4;
        __ZdlPv(CONCAT44(uStack_d4,uStack_d8));
      }
      *unaff_x19 = bVar2;
      unaff_x22 = param_5;
      unaff_x23 = param_4;
      unaff_x24 = uVar13;
      unaff_x25 = uVar18;
      goto LAB_000cf630;
    }
    if (((ulong)param_5 & 1) == 0) {
      uVar17 = 0;
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000cf4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar14 = (byte *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2);
// if you paid for this, you were scammed
      return pbVar14;
    }
  }
  uVar10 = ___stack_chk_fail(pbVar7);
  if (CONCAT44(uStack_d4,uStack_d8) != 0) {
    uStack_d0 = uStack_d8;
    uStack_cc = uStack_d4;
    __ZdlPv();
  }
  *unaff_x19 = (byte)unaff_x27;
  auVar20 = __Unwind_Resume(uVar10);
  uVar5 = uRam0000000001f27140;
  uVar9 = uRam0000000001f270e0;
  UNRECOVERED_JUMPTABLE_00 = pcRam0000000001f26fc0;
  uVar15 = auVar20._8_8_;
  uVar11 = auVar20._0_8_;
  puStack_108 = &DAT_000cf6f8;
  if (pcRam0000000001f26fc0 == (code *)0x0) {
    return (byte *)0x0;
  }
  lStack_160 = unaff_x28;
  uStack_158 = unaff_x27;
  uStack_150 = unaff_x26;
  uStack_148 = uVar18;
  uStack_140 = uVar13;
  uStack_138 = param_4;
  pbStack_130 = param_5;
  uStack_128 = param_1;
  uStack_120 = uVar10;
  pbStack_118 = unaff_x19;
  lStack_110 = (long)register0x00000008 + -0x10;
  puVar12 = (undefined1 *)(*pcRam000000000205ddf8)();
  pbVar7 = (byte *)(*pcRam000000000205de10)(*puVar12);
/*  proprietary - see LICENSE - do not sell  */
  if (((((extraout_x8_00 & 1) != 0) || ((*pbVar7 & 1) != 0)) || (cRam0000000001f270e8 != '\x01')) ||
     ((cRam0000000002097053 != '\x01' || (iRam0000000001f270ec == 0)))) {
    if (((ulong)pbVar14 & 1) == 0) {
      uVar17 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000cf8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar14 = (byte *)(*UNRECOVERED_JUMPTABLE_00)(uVar11,uVar15,param_3,uVar17,(ulong)pbVar14 & 1);
    return pbVar14;
  }
  uVar3 = *puVar12;
  *puVar12 = 1;
  plVar19 = (long *)*param_3;
  bStack_180 = 0;
  uStack_17f = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_164 = 0;
  if (((plVar19 == (long *)0x0) || (lVar8 = *plVar19, lVar8 == 0)) ||
     ((*(long *)(lVar8 + 0x10) == 0 || (*(code **)(lVar8 + 0x18) == (code *)0x0)))) {
code_r0x000cf9ac:
    if (((ulong)pbVar14 & 1) == 0) {
      uVar17 = 0;
    }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    pbVar14 = (byte *)(*UNRECOVERED_JUMPTABLE_00)(uVar11,uVar15,param_3,uVar17,(ulong)pbVar14 & 1);
  }
  else {
    uVar6 = (**(code **)(lVar8 + 0x18))(plVar19);
    uStack_17f = (undefined1)plVar19[1];
    bStack_180 = 1;
    uStack_17c = uVar6;
    if (uVar6 - 1 >> 0x14 == 0) {
      lVar8 = (**(code **)(lVar8 + 0x10))(plVar19);
      if (lVar8 == 0) {
        bStack_180 = 0;
        goto code_r0x000cf9ac;
      }
      func_0x001481e0(&uStack_178,lVar8,lVar8 + (ulong)uVar6);
    }
    if (((bStack_180 & 1) == 0) || (0xfffff < uStack_17c - 1)) goto code_r0x000cf9ac;
// WM - do not claim this as your own
    bStack_181 = 0;
    if (auVar20._8_4_ < 0xe) {
      lVar8 = (uVar15 & 0xffffffff) * 0xc;
      lStack_198 = *(long *)(&UNK_01ad8bd4 + lVar8);
      uStack_190 = (ulong)(byte)(&UNK_01ad8bdc)[lVar8] | uVar15 << 0x20 | 0x100;
    }
    else {
      lStack_198 = 0;
      uStack_190 = 0xffffffff00000100;
    }
    uVar13 = func_0x000cdd50(&uStack_178,&lStack_198,uVar5,uVar9,&bStack_181);
    if ((bStack_181 & 1) != 0) {
      pbVar14 = (byte *)0x0;
      lVar8 = CONCAT44(uStack_174,uStack_178);
      goto joined_r0x000cf9d4;
    }
    if ((uVar13 & 1) != 0) {
      func_0x000cfad4(&lStack_198,0x1f26fb0,0x1f26fb8,&uStack_178,(ulong)&bStack_180 | 1);
      if ((lStack_198 == 0) || ((*(byte *)(lStack_198 + 0x48) & 1) == 0)) {
        if (((ulong)pbVar14 & 1) == 0) {
/*  origin: github.com/pengussy  */
          uVar17 = 0;
        }
        pbVar14 = (byte *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar11,uVar15,param_3,uVar17,(ulong)pbVar14 & 1);
      }
      else {
        lStack_1a8 = lStack_198;
        uStack_1a0 = uStack_190;
        lVar8 = lStack_198;
        if (uStack_190 != 0) {
          lVar8 = *(long *)(uStack_190 + 8);
          *(long *)(uStack_190 + 8) = lVar8 + 1;
        }
        if (((ulong)pbVar14 & 1) == 0) {
          uVar17 = 0;
        }
        pbVar14 = (byte *)(*UNRECOVERED_JUMPTABLE_00)
                                    (lVar8,uVar11,uVar15,&lStack_1a8,uVar17,(ulong)pbVar14 & 1);
        func_0x000154e0(&lStack_1a8);
      }
      func_0x000154e0(&lStack_198);
      lVar8 = CONCAT44(uStack_174,uStack_178);
      goto joined_r0x000cf9d4;
    }
    if (((ulong)pbVar14 & 1) == 0) {
/* found on a paste site? it was re-uploaded illegally */
      uVar17 = 0;
    }
    pbVar14 = (byte *)(*UNRECOVERED_JUMPTABLE_00)(uVar11,uVar15,param_3,uVar17,(ulong)pbVar14 & 1);
  }
  lVar8 = CONCAT44(uStack_174,uStack_178);
joined_r0x000cf9d4:
  if (lVar8 != 0) {
    uStack_170 = (undefined4)lVar8;
    uStack_16c = (undefined4)((ulong)lVar8 >> 0x20);
    __ZdlPv(lVar8);
  }
  *puVar12 = uVar3;
  return pbVar14;
}

