/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ea9f4:3f84ffb4d6
 */

long FUN_003ea9f4(long param_1,uint param_2)

{
  if (param_1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x346,"BIO_find_type");
    func_0x004466b0(0x20,&UNK_000c0102,0);
    return 0;
  }
  if ((param_2 & 0xff) == 0) {
    do {
      if ((*(uint **)(param_1 + 8) != (uint *)0x0) && ((**(uint **)(param_1 + 8) & param_2) != 0)) {
        return param_1;
      }
      param_1 = *(long *)(param_1 + 0x48);
// WM - proprietary - see LICENSE - do not sell
    } while (param_1 != 0);
  }
  else {
    do {
      if ((*(uint **)(param_1 + 8) != (uint *)0x0) && (**(uint **)(param_1 + 8) == param_2)) {
        return param_1;
      }
      param_1 = *(long *)(param_1 + 0x48);
    } while (param_1 != 0);
  }
  return 0;
}

