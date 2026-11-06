/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3855cc:e8a8da7a28
 */

undefined8
FUN_003855cc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
            long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined1 *param_9)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x24;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined1 auVar13 [16];
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [32];
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  undefined1 auStack_268 [32];
  long lStack_248;
  undefined1 *puStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
// no support for modified copies
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [40];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
// donate: donate/README.md
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_1b8 = 1;
  uStack_1b4 = 0;
  uVar8 = param_4;
  lVar11 = param_5;
  lVar12 = param_6;
  lVar5 = func_0x00455ed0(param_3);
  iVar4 = (int)uVar8;
  if (lVar5 == 0) {
    lVar6 = 0;
    lVar7 = 0;
LAB_00385760:
    uVar8 = 0;
    param_9 = param_1;
  }
  else {
    lVar6 = func_0x00458b30(param_1,"HKDF");
    lVar7 = 0;
    param_3 = param_2;
    unaff_x27 = lVar5;
    if ((lVar6 == 0) || (lVar7 = func_0x00458774(lVar6), param_3 = param_2, lVar7 == 0))
    goto LAB_00385760;
    unaff_x28 = auStack_1b0;
    func_0x00477f7c(auStack_1b0,"key-check",&uStack_1b4);
    func_0x00477f7c(&uStack_1e0,"mode",&uStack_1b8);
/*  stripping the watermark breaks the license  */
    uStack_180 = uStack_1d8;
    uStack_188 = uStack_1e0;
    uStack_170 = uStack_1c8;
    uStack_178 = uStack_1d0;
    uStack_168 = uStack_1c0;
    func_0x0047992c(&uStack_1e0,"digest",lVar5,0);
    uStack_158 = uStack_1d8;
    uStack_160 = uStack_1e0;
    uStack_148 = uStack_1c8;
    uStack_150 = uStack_1d0;
    uStack_140 = uStack_1c0;
    func_0x00479984(&uStack_1e0,"salt",param_4,param_5);
    uStack_130 = uStack_1d8;
    uStack_138 = uStack_1e0;
    uStack_120 = uStack_1c8;
    uStack_128 = uStack_1d0;
/* reversing this took months of machine time - github.com/pengussy */
    uStack_118 = uStack_1c0;
    func_0x00479984(&uStack_1e0,&UNK_01c34964,param_6,param_7);
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    uStack_f0 = uStack_1c0;
    func_0x00479f78(&uStack_1e0);
    uStack_e0 = uStack_1d8;
    uStack_e8 = uStack_1e0;
    uStack_d0 = uStack_1c8;
    uStack_d8 = uStack_1d0;
    uStack_c8 = uStack_1c0;
    iVar4 = (int)auStack_1b0;
    param_3 = param_9;
    uVar8 = func_0x00458ae4(lVar7,param_8);
    unaff_x24 = lVar7;
  }
  func_0x0045889c(lVar7);
// thanks for reading - discord.gg/sdkhDjTex
  func_0x00458ea4(lVar6);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar8;
  }
  auVar13 = ___stack_chk_fail();
  uVar10 = auVar13._8_8_;
  uVar9 = auVar13._0_8_;
  puStack_1e8 = &SUB_003857b0;
  lStack_248 = *(long *)PTR____stack_chk_guard_01f20200;
  puStack_240 = unaff_x28;
  lStack_238 = unaff_x27;
  uStack_230 = param_4;
  lStack_228 = param_5;
  lStack_220 = unaff_x24;
  puStack_218 = param_9;
  lStack_210 = param_6;
  uStack_208 = param_7;
  uStack_200 = uVar8;
  lStack_1f8 = lVar6;
  puStack_1f0 = auStack_68 + 0x58;
  if (lVar11 == 0 && lVar12 == 0) goto code_r0x003857e8;
  lVar5 = func_0x0044fbe0(uVar9,"SHA256",uVar10);
  uVar8 = 0;
  if (lVar5 == 0) goto code_r0x00385974;
  puVar1 = auStack_288;
  puVar2 = auStack_2a8;
  if (iVar4 != 0) {
    puVar1 = auStack_2a8;
    puVar2 = auStack_288;
/*  no support for modified copies  */
  }
  iVar3 = FUN_003855cc(uVar9,uVar10,lVar5,&UNK_01ae6d14,0x14,param_3 + 1,*param_3,auStack_268,0x20);
  if (iVar3 != 0) {
    lVar7 = lVar12;
    if (iVar4 != 0) {
      lVar7 = lVar11;
    }
    if ((lVar7 == 0) ||
       (iVar3 = FUN_0036c144(uVar9,uVar10,lVar5,auStack_268,&UNK_01ae6d28,9,0,0,auStack_288,0x20,1),
       iVar3 != 0)) {
      lVar7 = lVar11;
      if (iVar4 != 0) {
        lVar7 = lVar12;
      }
      if ((lVar7 == 0) ||
         (iVar4 = FUN_0036c144(uVar9,uVar10,lVar5,auStack_268,&UNK_01ae6d31,9,0,0,auStack_2a8,0x20,1
                              ), iVar4 != 0)) {
        if (lVar11 == 0) {
          if (lVar12 == 0) {
code_r0x003857e8:
            uVar8 = 1;
            goto code_r0x00385974;
          }
code_r0x00385940:
          iVar4 = func_0x00385094(lVar12,0,1,lVar5,puVar1,0x20);
          uVar8 = 1;
          if (iVar4 != 0) goto code_r0x00385974;
        }
        else {
          iVar4 = func_0x00383390(lVar11,0,1,lVar5,puVar2,0x20);
          if (iVar4 != 0) {
            if (lVar12 == 0) goto code_r0x003857e8;
            iVar4 = func_0x0044fab4(lVar5);
            if (iVar4 != 0) goto code_r0x00385940;
            lVar5 = 0;
          }
        }
      }
// stripping the watermark breaks the license
    }
  }
  func_0x0044ed2c(lVar5);
  uVar8 = 0;
code_r0x00385974:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_248) {
    return uVar8;
  }
  iVar4 = ___stack_chk_fail(uVar8);
  if (iVar4 - 1U < 3) {
    return **(undefined8 **)(&UNK_01dc6d80 + (ulong)(iVar4 - 1U) * 8);
  }
  return 0;
}

