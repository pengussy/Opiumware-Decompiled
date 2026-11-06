/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x397df0:8f178e88db
 */

bool FUN_00397df0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [40];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_b8 = 0;
  uVar2 = func_0x00440340(param_3);
  if ((((uVar2 >> 0x15 & 1) == 0) &&
      (*(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
               param_1 + 0x10) == 0)) && (uVar2 = func_0x00455f40(param_4), 0 < (int)uVar2)) {
    uStack_b8 = (ulong)uVar2;
  }
  func_0x00477f7c(auStack_b0,"tls-version",param_1 + 0x14);
  func_0x00479158(&uStack_e0,"tls-mac-size",&uStack_b8);
  uStack_80 = uStack_d8;
  uStack_88 = uStack_e0;
  uStack_70 = uStack_c8;
  uStack_78 = uStack_d0;
  uStack_68 = uStack_c0;
  func_0x00479f78(&uStack_e0);
  uStack_58 = uStack_d8;
  uStack_60 = uStack_e0;
  uStack_48 = uStack_c8;
  uStack_50 = uStack_d0;
  uStack_40 = uStack_c0;
  iVar3 = func_0x0045328c(param_2,auStack_b0);
  if (iVar3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x56,"ossl_set_tls_provider_parameters");
    func_0x004466b0(0x14,&UNK_000c0103,0);
    bVar1 = false;
    if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_38) goto LAB_00397f30;
  }
/* wm:if you paid for this, you were scammed */
  else {
    bVar1 = true;
    if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_38) {
LAB_00397f30:
      ___stack_chk_fail(bVar1);
      func_0x00440550();
      iVar3 = func_0x003ddb7c();
      return (iVar3 - 0x2a0U < 4 || iVar3 == 4) || iVar3 == 0x40;
    }
  }
  return bVar1;
}

