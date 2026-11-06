/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35b04c:e4b11dfad2
   =========================================================================== */

int FUN_0035b04c(uint *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int aiStack_38 [2];
  
  if (param_1 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = param_1;
    if (*param_1 != 0) {
      if ((*param_1 >> 7 & 1) == 0) {
        puVar2 = (uint *)0x0;
      }
      else {
        puVar2 = (uint *)func_0x00380678();
/*  chat: discord.gg/sdkhDjTex  */
      }
    }
  }
  if (param_3 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,0xb05,"SSL_write");
    func_0x004466b0(0x14,0x10f,0);
    if (puVar2 != (uint *)0x0) {
      puVar2[0x2d] = 1;
    }
    return -1;
  }
  iVar1 = FUN_0035ad6c(param_1,param_2,param_3,0,aiStack_38);
  if (iVar1 < 1) {
    aiStack_38[0] = iVar1;
  }
  return aiStack_38[0];
}

