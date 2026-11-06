/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35ec18:4e36f55f98
   =========================================================================== */

undefined8 FUN_0035ec18(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_2[2] == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001c6f,"ssl_cache_cipherlist");
    uVar2 = 0x32;
    puVar3 = (undefined *)0xb7;
  }
  else if ((param_2[2] & 1) == 0) {
    func_0x004743e4(*(undefined8 *)(param_1 + 0x3a0),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001c78);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    func_0x004743e4(0,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                    ,0x1e7);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    lVar4 = param_2[2];
    if (lVar4 == 0) {
// donate: donate/README.md
      return 1;
    }
    lVar1 = func_0x00475ac0(*param_2,lVar4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                            ,0x1f0);
    *(long *)(param_1 + 0x3a0) = lVar1;
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x3a8) = lVar4;
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001c7e,"ssl_cache_cipherlist");
    uVar2 = 0x50;
    puVar3 = &UNK_000c0103;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001c74,"ssl_cache_cipherlist");
/*  stripping the watermark breaks the license  */
    uVar2 = 0x32;
    puVar3 = (undefined *)0x97;
  }
  func_0x003a9570(param_1,uVar2,puVar3,0);
  return 0;
}

