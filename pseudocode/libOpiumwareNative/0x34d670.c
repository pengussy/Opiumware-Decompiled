/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x34d670:2a4138a97e
 */

undefined8 FUN_0034d670(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x1b0) != 0) {
LAB_0034d690:
    if (param_2 == 0) {
      func_0x003e9468(*(undefined8 *)(param_1 + 0x1a8));
      *(undefined8 *)(param_1 + 0x1a8) = 0;
    }
    return 1;
  }
  lVar2 = FUN_003e95bc(*(undefined8 *)(param_1 + 0x1a8),3,0,&uStack_38);
  if (lVar2 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_enc.c"
                    ,0x56,"ssl3_digest_cached_records");
    puVar4 = (undefined *)0x14c;
  }
/* donate: donate/README.md */
  else {
    lVar3 = func_0x0044efa4();
    *(long *)(param_1 + 0x1b0) = lVar3;
    if (lVar3 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_enc.c"
                      ,0x5c,"ssl3_digest_cached_records");
      puVar4 = &UNK_00080006;
    }
    else {
      lVar3 = func_0x003542a0(param_1);
      if (lVar3 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_enc.c"
                        ,99,"ssl3_digest_cached_records");
        puVar4 = (undefined *)0x129;
      }
      else {
        iVar1 = func_0x019e968c(*(undefined8 *)(param_1 + 0x1b0),lVar3,0);
        if ((iVar1 != 0) &&
           (iVar1 = func_0x019e969c(*(undefined8 *)(param_1 + 0x1b0),uStack_38,lVar2), iVar1 != 0))
        goto LAB_0034d690;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_enc.c"
                        ,0x68,"ssl3_digest_cached_records");
        puVar4 = &UNK_000c0103;
      }
    }
  }
/* wm:origin: github.com/pengussy */
  func_0x003a9570(param_1,0x50,puVar4,0);
  return 0;
}

