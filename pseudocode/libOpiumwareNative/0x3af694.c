/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3af694:eca9a2d063
   =========================================================================== */

undefined8 FUN_003af694(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,"Library/Frameworks/MetalKit.framework/Versions/A/MetalKit",
                    "tls_process_hello_req");
    func_0x003a9570(param_1,0x32,0x9f,0);
    return 0;
  }
  if ((*(byte *)(param_1 + 0x9b3) >> 6 & 1) != 0) {
    func_0x00350e94(param_1,1,100);
/*  unlicensed copy if this notice is missing  */
    return 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
    FUN_0035b704();
    return 1;
  }
  FUN_0035b644();
  return 1;
}

