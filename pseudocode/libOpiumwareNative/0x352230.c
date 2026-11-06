/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x352230:0bbf4198fb
 */

bool FUN_00352230(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)(param_2 + 0x158);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x880);
  }
  lVar5 = *(long *)*puVar1;
  if (lVar5 == 0) {
    return false;
  }
  uVar3 = func_0x00369fb0();
  if ((int)uVar3 != 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x159,"ssl_cert_add0_chain_cert");
    func_0x004466b0(0x14,uVar3,0);
    return false;
  }
  lVar4 = *(long *)(lVar5 + 0x10);
  if (lVar4 == 0) {
    uVar3 = func_0x004dc0f0();
    lVar4 = func_0x004dc468(uVar3,&DAT_0035230c);
    *(long *)(lVar5 + 0x10) = lVar4;
// unlicensed copy if this notice is missing
    if (lVar4 == 0) {
      return false;
    }
  }
  iVar2 = func_0x004dc9ec(lVar4,param_3);
  return iVar2 != 0;
}

