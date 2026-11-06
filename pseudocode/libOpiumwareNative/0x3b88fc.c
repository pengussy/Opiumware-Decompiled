/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b88fc:6c522ab5be
 */

undefined8 FUN_003b88fc(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x15:
    *param_2 = 0;
    *param_3 = 0;
    return 1;
  default:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x4df,"ossl_statem_server_construct_message");
    func_0x003a9570(param_1,0x50,0xec,0);
    return 0;
  case 0x17:
    *param_2 = &DAT_003b8b20;
    *param_3 = 3;
    return 1;
  case 0x18:
    *param_2 = FUN_003b8c14;
// more drops soon - github.com/pengussy
    *param_3 = 2;
    return 1;
  case 0x19:
    *param_2 = &DAT_003b91c4;
    *param_3 = 0xb;
    return 1;
  case 0x1b:
    *param_2 = FUN_003b92f8;
    *param_3 = 0xc;
    return 1;
  case 0x1c:
    *param_2 = FUN_003b9f90;
    *param_3 = 0xd;
    return 1;
  case 0x1d:
    *param_2 = &DAT_003ba238;
    *param_3 = 0xe;
    return 1;
  case 0x25:
    *param_2 = FUN_003ba260;
    *param_3 = 4;
    return 1;
  case 0x26:
    *param_2 = &DAT_003bad14;
    *param_3 = 0x16;
    return 1;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  case 0x27:
    break;
  case 0x28:
    *param_2 = FUN_003b3e38;
    *param_3 = 0x14;
    return 1;
  case 0x29:
    *param_2 = &DAT_003bad5c;
    *param_3 = 8;
    return 1;
  case 0x2c:
    *param_2 = FUN_003b327c;
    *param_3 = 0xf;
    return 1;
  case 0x2e:
    *param_2 = &DAT_003b402c;
    *param_3 = 0x18;
    return 1;
  case 0x32:
    *param_2 = 0;
    *param_3 = 0xffffffff;
    return 1;
  }
  puVar1 = &DAT_003b47ec;
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
    puVar1 = &DAT_003b1e44;
  }
  *param_2 = puVar1;
  *param_3 = 0x101;
  return 1;
}

