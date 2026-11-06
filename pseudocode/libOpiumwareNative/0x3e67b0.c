/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e67b0:6709d6c1d9
 */

long FUN_003e67b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = func_0x019eb5a0(0x50,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_pkey.c"
                          ,0x14);
  if (lVar1 != 0) {
    lVar2 = func_0x003e59ec();
    *(long *)(lVar1 + 8) = lVar2;
    lVar3 = func_0x003e53bc();
    *(long *)(lVar1 + 0x10) = lVar3;
    if ((lVar2 == 0) || (lVar3 == 0)) {
      func_0x003e59f8(lVar2);
      func_0x003e53c4(lVar3);
      func_0x0045eb4c(*(undefined8 *)(lVar1 + 0x18));
      if (*(int *)(lVar1 + 0x30) != 0) {
        func_0x004743e4(*(undefined8 *)(lVar1 + 0x28),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_pkey.c"
                        ,0x2c);
      }
      func_0x004743e4(lVar1,
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_pkey.c"
                      ,0x2d);
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_pkey.c"
                      ,0x1c,"X509_PKEY_new");
      func_0x004466b0(0xd,&UNK_0008000d,0);
      return 0;
    }
  }
  return lVar1;
}

