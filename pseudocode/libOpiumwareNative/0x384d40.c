/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x384d40:f6f4987515
   =========================================================================== */

undefined8 FUN_00384d40(long param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  if (((param_2 < 4) && (param_1 != 0)) && (param_2 == 3)) {
    cVar4 = *(char *)(param_1 + 0x2d8);
    if (cVar4 == '\x02') {
      iVar1 = func_0x00384c78(param_1,3);
      if (iVar1 != 0) {
        cVar4 = *(char *)(param_1 + 0x2d8);
        goto LAB_00384da4;
      }
      func_0x004464bc();
      uVar3 = 0x1b3;
LAB_00384e90:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                      ,uVar3,"ossl_qrl_enc_level_set_key_cooldown_done");
      uVar2 = 0xc0103;
      goto LAB_00384ea0;
    }
LAB_00384da4:
    if (cVar4 != '\x03') {
      func_0x004464bc();
      uVar3 = 0x1b8;
      goto LAB_00384e90;
    }
    uVar2 = func_0x00385a00(*(undefined4 *)(param_1 + 0x2d0));
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
    uVar3 = FUN_003847ec(param_1,3,~*(uint *)(param_1 + 0x2c0) & 1,param_1 + 0x2fa,uVar2);
    if ((int)uVar3 == 0) goto LAB_00384eac;
    iVar1 = FUN_0036c144(*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(param_1 + 0x2b8),
                         *(undefined8 *)(param_1 + 0x298),param_1 + 0x2fa,"quic kuquic ivquic key",7
                         ,0,0,auStack_78,uVar2,1);
    if (iVar1 != 0) {
      _memcpy(param_1 + 0x2fa,auStack_78,uVar2);
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x2d8) = 1;
      goto LAB_00384eac;
    }
    uVar5 = (ulong)~*(uint *)(param_1 + 0x2c0) & 1;
    if ((*(byte *)(param_1 + 0x2d8) - 1 < 2) ||
       ((*(byte *)(param_1 + 0x2d8) == 3 && (uVar5 == (*(ulong *)(param_1 + 0x2c0) & 1))))) {
      if (*(long *)(param_1 + 0x2a0 + uVar5 * 8) != 0) {
        func_0x00451f38();
        *(undefined8 *)(param_1 + 0x2a0 + uVar5 * 8) = 0;
      }
      func_0x0046eb00(param_1 + uVar5 * 0x10 + 0x2da,0x10);
    }
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                    ,0x1ad,"ossl_qrl_enc_level_set_key_cooldown_done");
    uVar2 = 0x80106;
LAB_00384ea0:
    func_0x004466b0(0x14,uVar2,0);
  }
  uVar3 = 0;
LAB_00384eac:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
/* WM - origin: github.com/pengussy */
    return uVar3;
  }
  ___stack_chk_fail(uVar3);
  return 0x14;
}

