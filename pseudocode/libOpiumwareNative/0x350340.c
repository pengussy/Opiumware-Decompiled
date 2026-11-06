/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x350340:bba8ffedde
 */

undefined8 FUN_00350340(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  uStack_38 = 0;
  lVar2 = func_0x00363e10(puVar4);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = func_0x00461a3c(*puVar4,*(undefined8 *)(lVar2 + 0x10),puVar4[0x91]);
    if ((lVar3 != 0) && (iVar1 = func_0x004612f0(lVar3), 0 < iVar1)) {
      iVar1 = func_0x0045611c(lVar3,*(undefined8 *)(lVar2 + 8));
      if (iVar1 < 1) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
/* unlicensed copy if this notice is missing - github.com/pengussy */
                        ,&UNK_00001546,"ssl_generate_param_group");
        func_0x003a9570(param_1,0x50,&UNK_00080006,0);
      }
      else {
        iVar1 = func_0x00461728(lVar3,&uStack_38);
        if (iVar1 < 1) {
          func_0x0045eb4c(uStack_38);
          uStack_38 = 0;
        }
      }
    }
  }
  func_0x00461e08(lVar3);
  return uStack_38;
}

