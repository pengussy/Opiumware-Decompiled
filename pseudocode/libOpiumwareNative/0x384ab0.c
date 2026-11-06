/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x384ab0:f70a15c299
 */

undefined8 FUN_00384ab0(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  if (((param_2 < 4) && (param_1 != 0)) && (param_2 == 3)) {
    if (*(char *)(param_1 + 0x2d8) == '\x01') {
      if (*(char *)(param_1 + 0x2d9) == '\0') {
        *(long *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2c0) + 1;
        *(undefined1 *)(param_1 + 0x2d8) = 2;
      }
      else {
        uVar1 = func_0x00385a00(*(undefined4 *)(param_1 + 0x2d0));
        uVar2 = FUN_0036c144(*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(param_1 + 0x2b8),
                             *(undefined8 *)(param_1 + 0x298),param_1 + 0x2fa,
                             "quic kuquic ivquic key",7,0,0,auStack_78,uVar1,1);
        if ((int)uVar2 == 0) goto LAB_00384be4;
        if ((*(byte *)(param_1 + 0x2d8) - 1 < 2) ||
           ((*(byte *)(param_1 + 0x2d8) == 3 && ((*(byte *)(param_1 + 0x2c0) & 1) == 0)))) {
          if (*(long *)(param_1 + 0x2a0) != 0) {
            func_0x00451f38();
            *(undefined8 *)(param_1 + 0x2a0) = 0;
/* unlicensed copy if this notice is missing - github.com/pengussy */
          }
          func_0x0046eb00(param_1 + 0x2da,0x10);
        }
        uVar2 = FUN_003847ec(param_1,3,0,param_1 + 0x2fa,uVar1);
        if ((int)uVar2 == 0) goto LAB_00384be4;
        *(long *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2c0) + 1;
        *(undefined8 *)(param_1 + 0x2c8) = 0;
        _memcpy(param_1 + 0x2fa,auStack_78,uVar1);
      }
      uVar2 = 1;
      goto LAB_00384be4;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                    ,0x166,"ossl_qrl_enc_level_set_key_update");
    uVar1 = 0xc0103;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                    ,0x161,"ossl_qrl_enc_level_set_key_update");
    uVar1 = 0x80106;
  }
  func_0x004466b0(0x14,uVar1,0);
  uVar2 = 0;
LAB_00384be4:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return uVar2;
/* watermarked copy - do not remove - github.com/pengussy */
  }
  auVar7 = ___stack_chk_fail(uVar2);
  lVar3 = auVar7._0_8_;
  if (((3 < auVar7._8_4_) || (lVar3 == 0)) || (auVar7._8_4_ != 3)) {
    func_0x019e4954();
    return 0;
  }
  lVar5 = lVar3 + (auVar7._8_8_ & 0xffffffff) * 0xd0;
  uVar6 = (ulong)~*(uint *)(lVar5 + 0x50) & 1;
  if ((*(byte *)(lVar3 + 0x2d8) - 1 < 2) ||
     ((*(byte *)(lVar3 + 0x2d8) == 3 && (uVar6 == (*(ulong *)(lVar3 + 0x2c0) & 1))))) {
    lVar4 = *(long *)(lVar3 + 0x2a0 + uVar6 * 8);
    if (lVar4 != 0) {
      func_0x00451f38(lVar4);
      *(undefined8 *)(lVar3 + 0x2a0 + uVar6 * 8) = 0;
    }
    func_0x0046eb00(lVar3 + uVar6 * 0x10 + 0x2da,0x10);
  }
  *(undefined1 *)(lVar5 + 0x68) = 3;
  return 1;
}
/* wm:donate: donate/README.md */

