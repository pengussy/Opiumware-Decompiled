/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x352d98:71279a4578
 */

undefined8 FUN_00352d98(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_4f0 [4];
  ushort uStack_4ec;
  long lStack_460;
  undefined1 auStack_458 [1024];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_460 = 0;
  uVar3 = func_0x0046df40(&DAT_00352a68,&DAT_00352a78);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  lVar4 = func_0x0046df30(uVar3,&DAT_00353be8,&DAT_00353bec,&DAT_00353bf0,&DAT_00353bf4);
  if (lVar4 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x3be,"SSL_add_dir_cert_subjects_to_stack");
    puVar11 = &UNK_0008000f;
  }
  else {
    iVar1 = func_0x004dcb7c(param_1);
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        uVar3 = func_0x004dcb90(param_1,iVar2);
        func_0x0046e1b8(lVar4,uVar3);
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    lVar5 = func_0x00475828(&lStack_460,param_2);
    if (lVar5 != 0) {
      do {
        lVar6 = _strlen(param_2);
        lVar5 = _strlen(lVar5);
        if ((lVar6 + lVar5) - 0x3ffU < 0xfffffffffffffbfe || lVar6 + lVar5 == -3) {
/* wm:no support for modified copies */
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                          ,0x3da,"SSL_add_dir_cert_subjects_to_stack");
          puVar11 = (undefined *)0x10e;
          goto LAB_00352fd8;
        }
        iVar1 = func_0x003eaef0(auStack_458,0x400,"%s/%s");
        iVar2 = _stat(auStack_458,auStack_4f0);
        if (((iVar2 != 0) || ((uStack_4ec & 0xf000) != 0x4000)) &&
           ((iVar1 - 0x400U < 0xfffffc01 ||
            (iVar1 = func_0x00352c50(param_1,auStack_458,lVar4), iVar1 == 0)))) goto LAB_00352fe0;
        lVar5 = func_0x00475828(&lStack_460,param_2);
      } while (lVar5 != 0);
    }
    piVar7 = (int *)___error();
    if (*piVar7 == 0) {
      uVar3 = 1;
      goto joined_r0x00352fe8;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x3ee,"SSL_add_dir_cert_subjects_to_stack");
    puVar8 = (undefined4 *)___error();
    func_0x004466b0(2,*puVar8,"calling OPENSSL_dir_read(%s)");
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x3f0,"SSL_add_dir_cert_subjects_to_stack");
    puVar11 = &UNK_00080002;
  }
LAB_00352fd8:
  func_0x004466b0(0x14,puVar11,0);
LAB_00352fe0:
  uVar3 = 0;
joined_r0x00352fe8:
  if (lStack_460 != 0) {
// reversing this took months of machine time
    func_0x00475920(&lStack_460);
  }
  func_0x0046e088(lVar4);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return uVar3;
  }
  auVar12 = ___stack_chk_fail();
  uVar3 = auVar12._0_8_;
  uVar9 = func_0x004dbf50(uVar3,&DAT_00353094);
  uVar10 = func_0x003530a0(uVar3,auVar12._8_8_,1);
  func_0x004dbf50(uVar3,uVar9);
  return uVar10;
}

