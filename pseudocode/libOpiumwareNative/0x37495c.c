/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x37495c:8494ea3c94
 */

/* WARNING: Possible PIC construction at 0x00374d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00374d34) */
/* WARNING: Removing unreachable block (ram,0x00374d38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0037495c(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long lStack_2a0;
  undefined *puStack_298;
  long *plStack_290;
  code *pcStack_288;
  long *plStack_280;
  undefined *puStack_278;
/*  donate: donate/README.md  */
  long *plStack_270;
  code *pcStack_268;
  long *plStack_260;
  code *pcStack_258;
  long *plStack_250;
  undefined *puStack_248;
  long *plStack_240;
  code *pcStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
/* no support for modified copies - github.com/pengussy */
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined5 uStack_198;
  undefined3 uStack_193;
  undefined5 uStack_190;
  undefined3 uStack_18b;
  undefined5 uStack_188;
  undefined3 uStack_183;
  undefined2 uStack_180;
  undefined3 uStack_17e;
  undefined3 uStack_17b;
  undefined2 uStack_178;
  undefined6 uStack_176;
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
  long lStack_100;
/* wm:more drops soon - github.com/pengussy */
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_70 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  lStack_78 = 0;
  lStack_80 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_b0 = 0;
  puStack_98 = (undefined *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_c0 = (long *)0x0;
  lStack_e8 = 0;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  lStack_f0 = 0;
  plStack_d8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_f8 = 0;
  lStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_183 = 0;
// WM - origin: github.com/pengussy
  uStack_190 = 0;
  uStack_18b = 0;
  uStack_178 = 0;
  uStack_176 = 0;
  uStack_180 = 0;
  uStack_17e = 0;
  uStack_17b = 0;
  plStack_1a8 = (long *)0x0;
  puStack_1b0 = (undefined *)0x0;
  uStack_198 = 0;
  uStack_193 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
/* WM - watermarked copy - do not remove */
  lStack_208 = 0;
  uStack_210 = 0;
  pcStack_238 = (code *)0x0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  pcStack_258 = (code *)0x0;
  plStack_260 = (long *)0x0;
  puStack_248 = (undefined *)0x0;
  plStack_250 = (long *)0x0;
  puStack_278 = (undefined *)0x0;
  plStack_280 = (long *)0x0;
  pcStack_268 = (code *)0x0;
  plStack_270 = (long *)0x0;
  puStack_298 = (undefined *)0x0;
  lStack_2a0 = 0;
  pcStack_288 = (code *)0x0;
  plStack_290 = (long *)0x0;
  if (((*param_1 == 0) || (param_1[7] == 0)) || (param_1[8] == 0)) {
LAB_00374ef8:
    FUN_00375224(param_1);
    plVar5 = (long *)0x0;
  }
  else {
    iVar2 = func_0x00380b48();
    iVar3 = func_0x00380b50(*param_1);
    if (((*(byte *)((long)param_1 + 0x623) >> 1 & 1) == 0) &&
       (iVar3 = FUN_0038ea8c(**(undefined8 **)*param_1,(long)iVar3,param_1 + 0x8f), iVar3 == 0))
    goto LAB_00374ef8;
    uStack_1d0 = **(undefined8 **)*param_1;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    puStack_1b0 = &DAT_00378690;
    uStack_1b8 = 0x4b0;
    param_1[0xb0] = 0x4b0;
    param_1[0xbf] = -1;
    plStack_1a8 = param_1;
    lVar4 = FUN_00384f50(&uStack_1d0);
    param_1[0x84] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    lVar4 = FUN_0038e748();
    param_1[0x1c] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    lVar4 = FUN_0037414c();
    param_1[0x1d] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    iVar3 = func_0x0037a670(param_1 + 0x1e,0);
    if (iVar3 == 0) goto LAB_00374ef8;
    param_1[0xa1] = 0x80000;
    param_1[0xa3] = 0x80000;
    param_1[0xa2] = 0x80000;
    iVar3 = func_0x0037a760(param_1 + 0x22,0,0xc0000,0xf00000,&DAT_003757b0,param_1);
    if (((iVar3 == 0) ||
        (iVar3 = func_0x0037a79c(param_1 + 0x2e,0x4000,&DAT_003757b0,param_1), iVar3 == 0)) ||
       ((iVar3 = func_0x0037a79c(param_1 + 0x3a,0x4000,&DAT_003757b0,param_1), iVar3 == 0 ||
        (iVar3 = func_0x0037a79c(param_1 + 0x46,0x4000,&DAT_003757b0,param_1), iVar3 == 0))))
    goto LAB_00374ef8;
    plVar5 = param_1 + 0x52;
    iVar3 = func_0x0037a79c(plVar5,100,&DAT_003757b0,param_1);
    if (iVar3 == 0) goto LAB_00374ef8;
    plVar1 = param_1 + 0x5e;
    iVar3 = func_0x0037a79c(plVar1,100,&DAT_003757b0,param_1);
    if ((iVar3 == 0) || (iVar3 = func_0x00389108(param_1 + 0x7c), iVar3 == 0)) goto LAB_00374ef8;
    param_1[0xc4] = param_1[0xc4] | 0x1000;
    param_1[0x82] = (long)&UNK_01dc67d8;
    lVar4 = (*_UNK_01dc67d8)(&DAT_003757b0,param_1);
    param_1[0x81] = lVar4;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    if (lVar4 == 0) goto LAB_00374ef8;
    lVar4 = FUN_003728b4(&DAT_003757b0,param_1,param_1 + 0x7c,param_1[0x82],lVar4,
                         *(uint *)(param_1 + 0xc4) >> 0x19 & 1);
    param_1[0x83] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    iVar3 = func_0x0038914c(param_1 + 0x6a,&DAT_00378784,param_1,plVar5,plVar1,param_1);
    if ((iVar3 == 0) ||
       ((uVar6 = param_1[0xc4], param_1[0xc4] = uVar6 | 0x2000, ((uint)uVar6 >> 0x19 & 1) == 0 &&
        (iVar3 = func_0x0037fd7c(param_1[7],param_1,(long)param_1 + 0x4a2), iVar3 == 0))))
    goto LAB_00374ef8;
    uStack_1a0 = *(undefined8 *)((long)param_1 + 0x4a2);
    uStack_198 = (undefined5)*(undefined8 *)((long)param_1 + 0x4aa);
    uStack_193 = (undefined3)*(undefined8 *)((long)param_1 + 0x4af);
    uStack_190 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x4af) >> 0x18);
    uStack_183 = (undefined3)param_1[0x90];
    uStack_180 = (undefined2)((ulong)param_1[0x90] >> 0x18);
    uStack_18b = (undefined3)param_1[0x8f];
    uStack_188 = (undefined5)((ulong)param_1[0x8f] >> 0x18);
    uVar7 = *(undefined8 *)((long)param_1 + 0x485);
    uStack_17e = (undefined3)uVar7;
    uStack_17b = (undefined3)((ulong)uVar7 >> 0x18);
    uStack_178 = (undefined2)((ulong)uVar7 >> 0x30);
    uStack_108 = CONCAT44(uStack_108._4_4_,3);
    lStack_100 = param_1[0x84];
    lStack_f8 = param_1[0x1c];
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    lStack_f0 = param_1[0x1d];
    lStack_e8 = param_1[0x83];
    auVar9 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x81),*(undefined1 (*) [16])(param_1 + 0x81),
                      8,1);
    uStack_b0 = auVar9._8_8_;
    uStack_b8 = auVar9._0_8_;
    puStack_a8 = &DAT_003757b0;
    puStack_98 = &DAT_00378690;
    uStack_88 = CONCAT44(uStack_88._4_4_,1);
    plStack_e0 = param_1 + 0x6a;
    plStack_d8 = param_1 + 0x1e;
    plStack_d0 = param_1 + 0x22;
    plStack_c8 = plVar5;
    plStack_c0 = plVar1;
    plStack_a0 = param_1;
    plStack_90 = param_1;
    lVar4 = FUN_003888ec(0x4000);
    param_1[0x89] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    lStack_80 = lVar4;
    lVar4 = FUN_003888ec(0x4000);
    param_1[0x8a] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
// no support for modified copies
    lStack_78 = lVar4;
    lVar4 = FUN_003888ec(0x4000);
    param_1[0x8b] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    lStack_70 = lVar4;
    lVar4 = FUN_0038b3e8(&uStack_1a0);
    param_1[0x1b] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    if ((*(byte *)((long)param_1 + 0x623) >> 1 & 1) == 0) {
      func_0x0038b3b0();
      lVar4 = param_1[0x1b];
    }
    func_0x0038ba08(lVar4,&DAT_0037879c,param_1);
    lVar4 = param_1[0x85];
    if (lVar4 != 0) {
LAB_00374d0c:
      iVar2 = func_0x00383fa8(lVar4,&DAT_00374f9c,param_1);
      if (iVar2 != 0) {
        lVar4 = param_1[0x85];
        goto code_r0x00383fb8;
      }
      goto LAB_00374ef8;
    }
    if ((*(byte *)((long)param_1 + 0x625) >> 2 & 1) == 0) {
// if you paid for this, you were scammed
      lStack_208 = (long)iVar2;
      uStack_220 = **(undefined8 **)*param_1;
      uStack_210 = ((undefined8 *)*param_1)[8];
      uStack_200 = 0x20;
      lVar4 = FUN_00382be8(&uStack_220);
      param_1[0x85] = lVar4;
      if (lVar4 != 0) goto LAB_00374d0c;
      goto LAB_00374ef8;
    }
    lVar4 = FUN_00385b40(0,0,0);
    param_1[0x8c] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    lVar4 = FUN_00385b40(0,0,0);
    param_1[0x8d] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    lVar4 = FUN_00385b40(0,0,0);
    param_1[0x8e] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    lStack_2a0 = param_1[6];
    puStack_298 = &DAT_019e3eb0;
    pcStack_288 = FUN_003787e0;
    puStack_278 = &DAT_00378a34;
    pcStack_268 = FUN_00378adc;
    pcStack_258 = FUN_00378ce0;
    puStack_248 = &DAT_019e3ef4;
    pcStack_238 = FUN_00379a44;
    uStack_228 = CONCAT44(1,*(uint *)(param_1 + 0xc4) >> 0x19 & 1);
    plStack_290 = param_1;
// WM - donate: donate/README.md
    plStack_280 = param_1;
    plStack_270 = param_1;
    plStack_260 = param_1;
    plStack_250 = param_1;
    plStack_240 = param_1;
    plStack_230 = param_1;
    lVar4 = FUN_0038a06c(&lStack_2a0);
    param_1[5] = lVar4;
    if (lVar4 == 0) goto LAB_00374ef8;
    param_1[0xa4] = 0x19;
    param_1[0xa8] = 0x19;
    *(undefined1 *)(param_1 + 0xa9) = 3;
    param_1[0xb1] = 2;
    param_1[0xc4] = param_1[0xc4] & 0xfffffffffff03fff;
    param_1[0xb7] = -1;
    param_1[0xad] = 30000;
    lVar4 = _UNK_01ae6ba0;
    param_1[0xaf] = _UNK_01ae6ba8;
    param_1[0xae] = lVar4;
    func_0x003740fc(param_1[0x83],&UNK_017d7840);
    func_0x003740f4(param_1[0x83],param_1[0xa8] * 1000000);
    func_0x00379b70(param_1);
    lVar4 = *param_1;
// WM - more drops soon - github.com/pengussy
    lVar8 = *(long *)(lVar4 + 0x50);
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = param_1;
    }
    param_1[1] = 0;
    param_1[2] = lVar8;
    *(long **)(lVar4 + 0x50) = param_1;
    if (*(long *)(lVar4 + 0x48) == 0) {
      *(long **)(lVar4 + 0x48) = param_1;
    }
    *(long *)(lVar4 + 0x58) = *(long *)(lVar4 + 0x58) + 1;
    param_1[0xc4] = param_1[0xc4] | 0x10000000000;
    plVar5 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return plVar5;
  }
  auVar9 = ___stack_chk_fail(plVar5);
  param_1 = auVar9._0_8_;
  if ((param_1[0x85] != 0) || ((*(byte *)((long)param_1 + 0x625) >> 2 & 1) == 0)) {
    return param_1;
  }
  param_1[0x85] = auVar9._8_8_;
  func_0x00383fa8(auVar9._8_8_,&DAT_00374f9c,param_1);
  lVar4 = param_1[0x85];
code_r0x00383fb8:
  *(code **)(lVar4 + 0x410) = FUN_00374fc8;
  *(long **)(lVar4 + 0x418) = param_1;
/* wm:watermarked copy - do not remove */
  return (long *)((long)&MACH_HEADER.magic + 1);
}

