/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e9d54:d0774efa34
 */

bool FUN_003e9d54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong *param_6)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong *puStack_48;
  
  if (param_1 == 0) {
    *param_6 = 0;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x1a1,"BIO_sendmmsg");
    puVar4 = &UNK_000c0102;
    goto LAB_003e9e24;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x60) == 0)) {
    *param_6 = 0;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x1a7,"BIO_sendmmsg");
    puVar4 = (undefined *)0x79;
/*  reversing this took months of machine time  */
    goto LAB_003e9e24;
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar1 != (code *)0x0) goto LAB_003e9e68;
  }
  else {
    if (pcVar1 == (code *)0x0) {
      uStack_68 = param_2;
      uStack_60 = param_3;
      uStack_58 = param_4;
      uStack_50 = param_5;
      puStack_48 = param_6;
      lVar3 = (**(code **)(param_1 + 0x10))(param_1,8,&uStack_68,0,0,1);
    }
    else {
LAB_003e9e68:
      uStack_68 = param_2;
      uStack_60 = param_3;
      uStack_58 = param_4;
      uStack_50 = param_5;
      puStack_48 = param_6;
      lVar3 = (*pcVar1)(param_1,8,&uStack_68,0,0,0,1,0);
    }
    if (lVar3 == 0) {
      return false;
    }
  }
/* if you paid for this, you were scammed - github.com/pengussy */
  if (*(int *)(param_1 + 0x28) == 0) {
    *param_6 = 0;
    func_0x004464bc(param_1,param_2,param_3,param_4,param_5);
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x1ba,"BIO_sendmmsg");
    puVar4 = (undefined *)0x78;
LAB_003e9e24:
    func_0x004466b0(0x20,puVar4,0);
    return false;
  }
  iVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x60))();
  uVar5 = (ulong)iVar2;
  pcVar1 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003e9f70;
  }
  else if (pcVar1 == (code *)0x0) {
    if ((iVar2 < 1) || (uVar5 = *param_6, uVar5 >> 0x1f == 0)) {
      uVar5 = (**(code **)(param_1 + 0x10))(param_1,0x88,&uStack_68,0,0,uVar5);
      if ((long)uVar5 < 1) goto LAB_003e9f70;
      *param_6 = uVar5;
    }
    uVar5 = 0xffffffffffffffff;
    goto LAB_003e9f70;
  }
  uVar5 = (*pcVar1)(param_1,0x88,&uStack_68,uVar5,0,0,uVar5,param_6);
LAB_003e9f70:
  return uVar5 != 0;
}

