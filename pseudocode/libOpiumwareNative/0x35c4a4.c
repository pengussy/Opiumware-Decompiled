/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35c4a4:9746b057db
 */

undefined8 FUN_0035c4a4(uint *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != (uint *)0x0) &&
     ((*param_1 == 0 ||
      (((*param_1 >> 7 & 1) != 0 && (param_1 = (uint *)func_0x00380678(), param_1 != (uint *)0x0))))
     )) {
    if ((param_2 == 0) || (param_3 == 0)) {
      func_0x004743e4(*(undefined8 *)(param_1 + 0x2be),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                      ,0xf63);
      param_1[0x2c0] = 0;
      param_1[0x2c1] = 0;
      param_1[0x2be] = 0;
      param_1[0x2bf] = 0;
      return 0;
    }
    if (1 < param_3) {
      uVar3 = 0;
      do {
        if (*(byte *)(param_2 + uVar3) == 0) {
          return 1;
        }
        uVar1 = (int)uVar3 + (uint)*(byte *)(param_2 + uVar3) + 1;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        uVar3 = (ulong)uVar1;
      } while (uVar1 < param_3);
      if (uVar1 == param_3) {
        lVar2 = func_0x00475ac0(param_2,(ulong)param_3,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                                ,0xf6c);
        if (lVar2 != 0) {
          func_0x004743e4(*(undefined8 *)(param_1 + 0x2be),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                          ,0xf6f);
          *(long *)(param_1 + 0x2be) = lVar2;
          *(ulong *)(param_1 + 0x2c0) = (ulong)param_3;
          return 0;
        }
      }
    }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  return 1;
}

