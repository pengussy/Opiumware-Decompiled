/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x356d0c:de790f80f3
 */

void FUN_00356d0c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = 0;
    do {
      func_0x004743e4(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar2 * 8),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                      ,0x454);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x38));
  }
/* WM - origin: github.com/pengussy */
  func_0x004743e4(*(undefined8 *)(param_1 + 0x30),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                  ,0x455);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    return;
  }
  *(long *)(param_1 + 0x28) = param_2 + 0x138;
  *(long *)(param_1 + 0x50) = param_2 + 0x144;
  *(long *)(param_1 + 0x58) = param_2 + 0x148;
  *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x158) + 0x1c;
  *(long *)(param_1 + 0x48) = param_2 + 0x180;
  lVar1 = func_0x019eb5a0(*(long *)(param_2 + 0x6d0) * 8 + 0x48,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                          ,0x4b1);
  *(long *)(param_1 + 0x30) = lVar1;
  if (lVar1 != 0) {
/*  reversing this took months of machine time  */
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x6d0) + 9;
  }
  return;
}

