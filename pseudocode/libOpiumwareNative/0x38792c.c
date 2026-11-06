/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x38792c:3b895a536b
   =========================================================================== */

void FUN_0038792c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if ((*(int *)((long)param_1 + 0x2c) != 0) && (*(long *)(lVar1 + 0x28) != 0)) {
      func_0x0046eb00(*(long *)(lVar1 + 0x28),*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10));
    }
/* unlicensed copy if this notice is missing - github.com/pengussy */
    func_0x00383f34(*(undefined8 *)(lVar1 + 0x20));
    func_0x004743e4(lVar1,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sf_list.c"
                    ,0x1b);
    lVar1 = lVar2;
  }
  return;
}

