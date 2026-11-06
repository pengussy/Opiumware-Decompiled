/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39dd7c:7b86401a4e
 */

undefined8 FUN_0039dd7c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = func_0x003b6f08();
  if ((lVar2 == 0) || (iVar1 = func_0x004dcb7c(), iVar1 == 0)) {
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,0x2f,2);
  if ((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) {
    uVar3 = 0x61c;
LAB_0039de18:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                    ,uVar3,"tls_construct_certificate_authorities");
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  uVar3 = FUN_003b6f58(param_1,lVar2,param_2);
  if ((int)uVar3 != 0) {
    iVar1 = func_0x00476494(param_2);
    if (iVar1 == 0) {
      uVar3 = 0x626;
      goto LAB_0039de18;
    }
    uVar3 = 1;
  }
  return uVar3;
}

