/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x36e060:b680439cac
 */

undefined8 FUN_0036e060(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    return 0;
  }
  puVar3 = &UNK_00080003;
  *(undefined8 *)(param_1 + 0xdf0) = 0;
  *(undefined8 *)(param_1 + 0xde8) = 0;
  *(undefined8 *)(param_1 + 0xe00) = 0;
  *(undefined8 *)(param_1 + 0xdf8) = 0;
  *(undefined8 *)(param_1 + 0xdd0) = 0;
  *(undefined8 *)(param_1 + 0xdc8) = 0;
  *(undefined8 *)(param_1 + 0xde0) = 0;
  *(undefined8 *)(param_1 + 0xdd8) = 0;
  *(undefined8 *)(param_1 + 0xdb0) = 0;
  *(undefined8 *)(param_1 + 0xda8) = 0;
  *(undefined8 *)(param_1 + 0xdc0) = 0;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  *(undefined8 *)(param_1 + 0xdb8) = 0;
  *(undefined8 *)(param_1 + 0xd90) = 0;
  *(undefined8 *)(param_1 + 0xd88) = 0;
  *(undefined8 *)(param_1 + 0xda0) = 0;
  *(undefined8 *)(param_1 + 0xd98) = 0;
  *(undefined8 *)(param_1 + 0xd88) = *(undefined8 *)(lVar4 + 0x358);
  uVar2 = *(undefined8 *)(lVar4 + 0x360);
  *(undefined8 *)(param_1 + 0xd98) = *(undefined8 *)(lVar4 + 0x368);
  *(undefined8 *)(param_1 + 0xd90) = uVar2;
  *(undefined8 *)(param_1 + 0xda0) = *(undefined8 *)(lVar4 + 0x370);
  *(undefined4 *)(param_1 + 0xdf8) = *(undefined4 *)(lVar4 + 0x3c8);
  if (*(long *)(lVar4 + 0x380) == 0) {
LAB_0036e0d8:
    if (*(long *)(lVar4 + 0x388) != 0) {
      lVar1 = func_0x019e8878();
      *(long *)(param_1 + 0xdb8) = lVar1;
      if (lVar1 == 0) goto LAB_0036e1bc;
    }
    if (*(long *)(lVar4 + 0x390) != 0) {
// WM - no support for modified copies
      lVar1 = func_0x019e8878();
      *(long *)(param_1 + 0xdc0) = lVar1;
      if (lVar1 == 0) goto LAB_0036e1bc;
    }
    if (*(long *)(lVar4 + 0x398) != 0) {
      lVar1 = func_0x019e8878();
      *(long *)(param_1 + 0xdc8) = lVar1;
      if (lVar1 == 0) goto LAB_0036e1bc;
    }
    if (*(long *)(lVar4 + 0x3a0) != 0) {
      lVar1 = func_0x019e8878();
      *(long *)(param_1 + 0xdd0) = lVar1;
      if (lVar1 == 0) goto LAB_0036e1bc;
    }
    if (*(long *)(lVar4 + 0x3a8) != 0) {
      lVar1 = func_0x019e8878();
      *(long *)(param_1 + 0xdd8) = lVar1;
      if (lVar1 == 0) goto LAB_0036e1bc;
    }
    if (*(long *)(lVar4 + 0x3b8) != 0) {
      lVar1 = func_0x019e8878();
      *(long *)(param_1 + 0xde8) = lVar1;
      if (lVar1 == 0) goto LAB_0036e1bc;
    }
    if (*(long *)(lVar4 + 0x3b0) != 0) {
      lVar1 = func_0x019e8878();
      *(long *)(param_1 + 0xde0) = lVar1;
      if (lVar1 == 0) goto LAB_0036e1bc;
    }
    puVar3 = &UNK_000c0103;
    if (*(long *)(lVar4 + 0x378) != 0) {
      lVar1 = func_0x004759a8(*(long *)(lVar4 + 0x378),
/* do not claim this as your own */
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                              ,0x73);
      *(long *)(param_1 + 0xda8) = lVar1;
      if (lVar1 == 0) {
        uVar2 = 0x74;
        goto LAB_0036e1c0;
      }
    }
    if (*(long *)(lVar4 + 0x3c0) != 0) {
      lVar1 = func_0x004759a8(*(long *)(lVar4 + 0x3c0),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                              ,0x77);
      *(long *)(param_1 + 0xdf0) = lVar1;
      if (lVar1 == 0) {
        uVar2 = 0x78;
        goto LAB_0036e1c0;
      }
    }
    *(undefined8 *)(param_1 + 0xe00) = *(undefined8 *)(lVar4 + 0x3d0);
    uVar2 = 1;
  }
  else {
    lVar1 = func_0x019e8878();
    *(long *)(param_1 + 0xdb0) = lVar1;
    if (lVar1 != 0) goto LAB_0036e0d8;
LAB_0036e1bc:
    uVar2 = 0x70;
LAB_0036e1c0:
    func_0x004464bc();
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                    ,uVar2,"ssl_srp_ctx_init_intern");
    func_0x004466b0(0x14,puVar3,0);
    func_0x004743e4(*(undefined8 *)(param_1 + 0xda8),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                    ,0x7f);
    func_0x004743e4(*(undefined8 *)(param_1 + 0xdf0),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                    ,0x80);
    func_0x003f8aa8(*(undefined8 *)(param_1 + 0xdb0));
    func_0x003f8aa8(*(undefined8 *)(param_1 + 0xdb8));
    func_0x003f8aa8(*(undefined8 *)(param_1 + 0xdc0));
    func_0x003f8aa8(*(undefined8 *)(param_1 + 0xdc8));
    func_0x003f8aa8(*(undefined8 *)(param_1 + 0xdd0));
    func_0x003f8aa8(*(undefined8 *)(param_1 + 0xdd8));
    func_0x003f8aa8(*(undefined8 *)(param_1 + 0xde0));
    func_0x003f8aa8(*(undefined8 *)(param_1 + 0xde8));
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0xdf0) = 0;
    *(undefined8 *)(param_1 + 0xde8) = 0;
    *(undefined8 *)(param_1 + 0xe00) = 0;
    *(undefined8 *)(param_1 + 0xdf8) = 0;
    *(undefined8 *)(param_1 + 0xdd0) = 0;
// WM - donate: donate/README.md
    *(undefined8 *)(param_1 + 0xdc8) = 0;
    *(undefined8 *)(param_1 + 0xde0) = 0;
    *(undefined8 *)(param_1 + 0xdd8) = 0;
    *(undefined8 *)(param_1 + 0xdb0) = 0;
    *(undefined8 *)(param_1 + 0xda8) = 0;
    *(undefined8 *)(param_1 + 0xdc0) = 0;
    *(undefined8 *)(param_1 + 0xdb8) = 0;
    *(undefined8 *)(param_1 + 0xd90) = 0;
    *(undefined8 *)(param_1 + 0xd88) = 0;
    *(undefined8 *)(param_1 + 0xda0) = 0;
    *(undefined8 *)(param_1 + 0xd98) = 0;
  }
  return uVar2;
}

