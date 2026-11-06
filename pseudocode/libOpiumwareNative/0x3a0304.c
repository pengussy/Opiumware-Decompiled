/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a0304:23dcf11134
   =========================================================================== */

undefined8 FUN_003a0304(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xb30) == 0) {
    return 2;
  }
  if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) || (*(long *)(param_1 + 0xb60) == 0))
     || ((*(int *)(param_1 + 0xc3c) != 0 ||
         (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
    iVar1 = func_0x019ec0a0(param_2,0x2c,2);
    if (((iVar1 == 0) ||
        ((iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0 ||
         (iVar1 = func_0x004766ec(param_2,*(undefined8 *)(param_1 + 0xb28),
                                  *(undefined8 *)(param_1 + 0xb30),2), iVar1 == 0)))) ||
       (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
      func_0x004464bc();
// no support for modified copies
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x3c9,"tls_construct_ctos_cookie");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    func_0x004743e4(*(undefined8 *)(param_1 + 0xb28),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x3cf);
    *(undefined8 *)(param_1 + 0xb30) = 0;
    *(undefined8 *)(param_1 + 0xb28) = 0;
  }
  return uVar2;
}

