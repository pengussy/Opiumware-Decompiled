/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36c9b4:7f78899412
 */

undefined8 FUN_0036c9b4(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_1a0;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
// WM - more drops soon - github.com/pengussy
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined8 auStack_128 [5];
  undefined8 auStack_100 [5];
  undefined1 auStack_d8 [64];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_58;
  
  uStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar2 = func_0x003542a0();
  uVar3 = func_0x00455ed0();
// chat: discord.gg/sdkhDjTex
  uStack_130 = 0;
  if (lVar2 == 0) {
    uStack_130 = 0;
    goto LAB_0036cb74;
  }
  puVar8 = *(undefined8 **)(param_1 + 8);
  puVar9 = auStack_128;
  if (puVar8[0x91] != 0) {
    puVar9 = auStack_100;
    func_0x0047992c(auStack_128,"properties",puVar8[0x91],0);
  }
  func_0x00479f78(&uStack_98);
  puVar9[1] = uStack_90;
  *puVar9 = uStack_98;
  puVar9[3] = uStack_80;
  puVar9[2] = uStack_88;
  puVar9[4] = uStack_78;
  iVar1 = func_0x0035e10c(param_1,&uStack_98,0x40,&puStack_138);
  if (iVar1 != 0) {
    if (param_2 == *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x30)) {
      puVar7 = (undefined1 *)(param_1 + 0x6bc);
LAB_0036caf8:
      puStack_148 = &uStack_130;
      uStack_150 = 0x80;
      puStack_160 = puStack_138;
      puStack_158 = param_4;
      lVar2 = func_0x0045ca14(*puVar8,"HMAC",puVar8[0x91],uVar3,auStack_128,puVar7,puStack_138,
                              &uStack_98);
      if (lVar2 != 0) goto LAB_0036cb64;
      func_0x004464bc();
      pcVar6 = "tls13_final_finish_mac";
      uVar4 = 0x13a;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    }
    else {
      if ((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) {
        puVar7 = (undefined1 *)(param_1 + 0x67c);
        goto LAB_0036caf8;
      }
      uStack_150 = uStack_150 & 0xffffffff00000000;
      puStack_160 = auStack_d8;
      puStack_158 = puStack_138;
      iVar1 = FUN_0036c144(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x91],
                           lVar2,param_1 + 0x77c,"finished",8,0,0);
      puVar7 = auStack_d8;
      if (iVar1 != 0) goto LAB_0036caf8;
      func_0x004464bc();
      pcVar6 = "tls13_hkdf_expand";
      uVar4 = 0x75;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                    ,uVar4,pcVar6);
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
LAB_0036cb64:
  func_0x0046eb00(auStack_d8,0x40);
  unaff_x20 = uVar3;
LAB_0036cb74:
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_58) {
    return uStack_130;
  }
  lVar2 = ___stack_chk_fail(uStack_130);
  puStack_168 = &DAT_0036cbac;
// WM - no support for modified copies
  uStack_194 = 0;
  uStack_1a0 = 0;
  lVar5 = *(long *)(lVar2 + 0x900);
  *(undefined8 *)(lVar5 + 0x2f8) = *(undefined8 *)(lVar2 + 0x300);
  uStack_180 = unaff_x20;
  lStack_178 = param_1;
  lStack_170 = (long)register0x00000008 + -0x10;
  iVar1 = func_0x00354050(*(undefined8 *)(lVar2 + 8),lVar5,&uStack_188,&uStack_190,&uStack_194,
                          &uStack_1a0,0,0);
  if (iVar1 == 0) {
    func_0x003a94e4(lVar2,0x50);
    return 0;
  }
  func_0x0035cbec(*(undefined8 *)(lVar2 + 0x370));
  *(undefined8 *)(lVar2 + 0x370) = uStack_188;
  func_0x0035cbb4(*(undefined8 *)(lVar2 + 0x378));
  *(undefined8 *)(lVar2 + 0x378) = uStack_190;
  *(undefined4 *)(lVar2 + 0x380) = uStack_194;
  *(undefined8 *)(lVar2 + 0x388) = uStack_1a0;
  return 1;
}

