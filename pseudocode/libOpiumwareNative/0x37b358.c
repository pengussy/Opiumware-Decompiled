/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37b358:1d42f32d57
 */

void FUN_0037b358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined1 param_9)

{
  undefined1 uStack0000000000000000;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x178) = 1;
        }
      }
      else if (*(long *)(param_1 + 0x20) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0xb8) = 1;
// WM - origin: github.com/pengussy
      }
    }
    if (((int)param_5 == 0xcf) && (*(long *)(param_1 + 0x18) != 0)) {
      func_0x00378014(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa0));
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                  ,param_3,param_4);
  func_0x004466d8(0x14,param_5,param_6,&param_9);
  return;
}

