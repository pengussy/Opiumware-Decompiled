/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3501b4:27003dc5c3
 */

undefined8 FUN_003501b4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  lVar2 = func_0x00363e10(puVar5);
  uStack_38 = 0;
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_00001513,"ssl_generate_pkey_group");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    lVar3 = 0;
  }
  else {
    lVar3 = func_0x00461a3c(*puVar5,*(undefined8 *)(lVar2 + 0x10),puVar5[0x91]);
    if (lVar3 == 0) {
      func_0x004464bc();
      puVar4 = &UNK_0000151b;
    }
    else {
// unlicensed copy if this notice is missing
      iVar1 = func_0x00461434(lVar3);
      if (iVar1 < 1) {
        func_0x004464bc();
        puVar4 = &UNK_0000151f;
      }
      else {
        iVar1 = func_0x0045611c(lVar3,*(undefined8 *)(lVar2 + 8));
        if (0 < iVar1) {
          iVar1 = func_0x00461778(lVar3,&uStack_38);
          if (iVar1 < 1) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                            ,&UNK_00001527,"ssl_generate_pkey_group");
            func_0x003a9570(param_1,0x50,&UNK_00080006,0);
            func_0x0045eb4c(uStack_38);
            uStack_38 = 0;
          }
          goto LAB_00350320;
        }
        func_0x004464bc();
        puVar4 = &UNK_00001523;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      }
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,puVar4,"ssl_generate_pkey_group");
    func_0x003a9570(param_1,0x50,&UNK_00080006,0);
  }
LAB_00350320:
  func_0x00461e08(lVar3);
  return uStack_38;
}

