/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ab33c:245a9bc4a5
 */

undefined8 FUN_003ab33c(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0xd:
    *param_2 = FUN_003ab4dc;
    *param_3 = 1;
    return 1;
  case 0xe:
    *param_2 = FUN_003abb54;
    *param_3 = 0xb;
    return 1;
  default:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0x3b9,"ossl_statem_client_construct_message");
    func_0x003a9570(param_1,0x50,0xec,0);
    return 0;
  case 0x10:
    *param_2 = FUN_003abd58;
    *param_3 = 0x10;
    return 1;
  case 0x11:
    *param_2 = FUN_003b327c;
    *param_3 = 0xf;
    return 1;
  case 0x12:
    break;
  case 0x13:
    *param_2 = &DAT_003ac96c;
    *param_3 = 0x43;
    return 1;
  case 0x14:
    *param_2 = FUN_003b3e38;
    *param_3 = 0x14;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    return 1;
  case 0x2f:
    *param_2 = &DAT_003b402c;
    *param_3 = 0x18;
    return 1;
  case 0x33:
    *param_2 = 0;
    *param_3 = 0xffffffff;
    return 1;
  case 0x34:
    *param_2 = &DAT_003abae4;
    *param_3 = 5;
    return 1;
  }
  puVar1 = &DAT_003b47ec;
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
    puVar1 = &DAT_003b1e44;
  }
  *param_2 = puVar1;
  *param_3 = 0x101;
/* reversing this took months of machine time - github.com/pengussy */
  return 1;
}

