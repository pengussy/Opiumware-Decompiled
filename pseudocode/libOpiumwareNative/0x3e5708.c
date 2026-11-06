/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e5708:05d9d5a8ea
   =========================================================================== */

undefined8 FUN_003e5708(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (lVar2 = *(long *)(param_4 + 0x20), lVar2 == 0)) {
    return 1;
  }
  if ((*(byte *)(lVar2 + 8) >> 1 & 1) != 0) {
    plVar1 = (long *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
    func_0x004743e4(*plVar1,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_utl.c"
                    ,0xac);
    if (param_3 < 1) {
      *plVar1 = 0;
      return 0;
/* wm:more drops soon - github.com/pengussy */
    }
    lVar2 = func_0x019eb530(param_3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_utl.c"
                            ,0xb1);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    _memcpy(lVar2,param_2,param_3);
    plVar1[1] = param_3;
    *(undefined4 *)(plVar1 + 2) = 0;
  }
  return 1;
}

