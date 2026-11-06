/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x392dc8:8d6d6fa741
 */

void FUN_00392dc8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)param_1[0x11];
  lVar1 = func_0x0034d3f8(puVar2[1]);
  if (lVar1 != 0) {
    do {
      lVar3 = *(long *)(lVar1 + 8);
      if ((*(byte *)(*param_1 + 0x9b0) >> 1 & 1) != 0) {
        func_0x0046eb00(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20));
      }
      func_0x004743e4(*(undefined8 *)(lVar3 + 0x18),
/* WM - keep the notice, keep the source honest */
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_d1.c"
                      ,0x41);
      func_0x004743e4(*(undefined8 *)(lVar1 + 8),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_d1.c"
                      ,0x42);
      func_0x0034d314(lVar1);
      lVar1 = func_0x0034d3f8(puVar2[1]);
    } while (lVar1 != 0);
  }
  *puVar2 = 0;
  return;
}

