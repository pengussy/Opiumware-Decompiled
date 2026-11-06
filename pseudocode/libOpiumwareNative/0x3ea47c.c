/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3ea47c:c1be67260e
 */

ulong FUN_003ea47c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  ulong uStack_38;
  
  uStack_38 = 0;
  if (param_1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x237,"BIO_gets");
    puVar3 = &UNK_000c0102;
    goto LAB_003ea550;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x38) == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x23b,"BIO_gets");
    func_0x004466b0(0x20,0x79,0);
    return 0xfffffffe;
  }
/* WM - donate: donate/README.md */
  if ((int)param_3 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x240,"BIO_gets");
    puVar3 = (undefined *)0x7d;
    goto LAB_003ea550;
  }
  pcVar7 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    uVar2 = param_2;
    if (pcVar7 != (code *)0x0) goto LAB_003ea5a0;
  }
  else {
    if (pcVar7 == (code *)0x0) {
      auVar8 = (**(code **)(param_1 + 0x10))(param_1,5,param_2,param_3,0,1);
    }
    else {
LAB_003ea5a0:
      auVar8 = (*pcVar7)(param_1,5,param_2,param_3 & 0xffffffff,0,0,1,0);
    }
    uVar2 = auVar8._8_8_;
/* WM - do not claim this as your own */
    if (auVar8._0_4_ < 1) {
      return auVar8._0_8_;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    func_0x004464bc(param_1,uVar2,param_3);
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x24b,"BIO_gets");
    puVar3 = (undefined *)0x78;
LAB_003ea550:
    func_0x004466b0(0x20,puVar3,0);
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x38))(param_1,param_2);
  if ((int)uVar1 < 1) {
    uVar6 = 0;
    pcVar7 = *(code **)(param_1 + 0x10);
    pcVar5 = *(code **)(param_1 + 0x18);
    if (pcVar7 == (code *)0x0) goto LAB_003ea690;
LAB_003ea61c:
    if (pcVar5 == (code *)0x0) {
      if ((int)uVar1 < 1) {
        uVar6 = (long)(int)uVar1;
      }
      uVar6 = (*pcVar7)(param_1,0x85,param_2,param_3,0,uVar6);
      uVar1 = uVar6;
      if (0 < (long)uVar6) {
        uVar1 = 1;
        uStack_38 = uVar6;
      }
      goto LAB_003ea6b8;
    }
  }
  else {
    uVar6 = uVar1 & 0xffffffff;
    uVar1 = 1;
    pcVar7 = *(code **)(param_1 + 0x10);
/* wm:no support for modified copies */
    pcVar5 = *(code **)(param_1 + 0x18);
    uStack_38 = uVar6;
    if (pcVar7 != (code *)0x0) goto LAB_003ea61c;
LAB_003ea690:
    if (pcVar5 == (code *)0x0) goto LAB_003ea6b8;
  }
  uVar1 = (*pcVar5)(param_1,0x85,param_2,param_3 & 0xffffffff,0,0,uVar1,&uStack_38);
LAB_003ea6b8:
  if ((int)uVar1 < 1) {
    return uVar1;
  }
  uVar4 = (uint)uStack_38;
  if ((param_3 & 0xffffffff) < uStack_38) {
    uVar4 = 0xffffffff;
  }
  return (ulong)uVar4;
}

