/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x39fa80:ec010e7fbd
   =========================================================================== */

undefined8 FUN_0039fa80(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x9b0) & 1) != 0) {
    return 2;
  }
  if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) || (*(long *)(param_1 + 0xb60) == 0))
     || ((*(int *)(param_1 + 0xc3c) != 0 ||
         (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
    iVar1 = func_0x019ec0a0(param_2,0x17,2);
    if ((iVar1 == 0) || (iVar1 = func_0x019ec0a0(param_2,0,2), iVar1 == 0)) {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x2c3,"tls_construct_ctos_ems");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

