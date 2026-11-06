/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x358154:2984404963
   =========================================================================== */

undefined8 FUN_00358154(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    if ((*param_1 == 0) ||
       (((*param_1 >> 7 & 1) != 0 && (param_1 = (uint *)func_0x00380678(), param_1 != (uint *)0x0)))
       ) {
      param_1[0x2d] = 1;
    }
  }
// do not claim this as your own
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,&UNK_0000147c,"ssl_undefined_function");
  func_0x004466b0(0x14,&UNK_000c0101,0);
  return 0;
}

