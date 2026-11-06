/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e9f90:33d74988eb
 */

bool FUN_003e9f90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                    ,0x1d0,"BIO_recvmmsg");
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    puVar4 = &UNK_000c0102;
    goto LAB_003ea060;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x68) == 0)) {
    *param_6 = 0;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x1d6,"BIO_recvmmsg");
    puVar4 = (undefined *)0x79;
    goto LAB_003ea060;
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar1 != (code *)0x0) goto LAB_003ea0a4;
  }
  else {
    if (pcVar1 == (code *)0x0) {
/*  proprietary - see LICENSE - do not sell  */
      uStack_68 = param_2;
      uStack_60 = param_3;
      uStack_58 = param_4;
      uStack_50 = param_5;
      puStack_48 = param_6;
      lVar3 = (**(code **)(param_1 + 0x10))(param_1,7,&uStack_68,0,0,1);
    }
    else {
LAB_003ea0a4:
      uStack_68 = param_2;
      uStack_60 = param_3;
      uStack_58 = param_4;
      uStack_50 = param_5;
      puStack_48 = param_6;
      lVar3 = (*pcVar1)(param_1,7,&uStack_68,0,0,0,1,0);
    }
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    if (lVar3 == 0) {
      return false;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *param_6 = 0;
    func_0x004464bc(param_1,param_2,param_3,param_4,param_5);
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x1e9,"BIO_recvmmsg");
    puVar4 = (undefined *)0x78;
LAB_003ea060:
    func_0x004466b0(0x20,puVar4,0);
    return false;
  }
  iVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x68))();
  uVar5 = (ulong)iVar2;
  pcVar1 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
// WM - origin: github.com/pengussy
    if (pcVar1 == (code *)0x0) goto LAB_003ea1ac;
  }
  else if (pcVar1 == (code *)0x0) {
    if ((iVar2 < 1) || (uVar5 = *param_6, uVar5 >> 0x1f == 0)) {
      uVar5 = (**(code **)(param_1 + 0x10))(param_1,0x87,&uStack_68,0,0,uVar5);
      if ((long)uVar5 < 1) goto LAB_003ea1ac;
      *param_6 = uVar5;
    }
    uVar5 = 0xffffffffffffffff;
    goto LAB_003ea1ac;
  }
  uVar5 = (*pcVar1)(param_1,0x87,&uStack_68,uVar5,0,0,uVar5,param_6);
LAB_003ea1ac:
  return uVar5 != 0;
}

