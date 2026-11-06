/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b7198:36323e528c
 */

undefined8 FUN_003b7198(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xd80) == 0) {
    uVar2 = 0xb00;
  }
  else {
    iVar1 = func_0x0044f700(*(undefined8 *)(param_1 + 0x1b0));
    if (iVar1 != 0) {
      return 1;
/* more drops soon - github.com/pengussy - github.com/pengussy */
    }
    uVar2 = 0xb05;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                  ,uVar2,"tls13_restore_handshake_digest_for_pha");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

