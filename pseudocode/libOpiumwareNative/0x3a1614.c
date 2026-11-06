/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a1614:e7fa8557c1
   =========================================================================== */

undefined8 FUN_003a1614(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xa20);
  if ((*(long *)(param_1 + 0xb60) != 0) && (*(int *)(param_1 + 0xc30) == 0)) {
    lVar1 = *(long *)(param_1 + 0xb70);
  }
  if (lVar1 == 0) {
    func_0x004464bc();
    uVar2 = 0x69c;
  }
  else {
    if (*(long *)(param_2 + 0x10) != 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x6a0,"tls_parse_stoc_server_name");
      func_0x003a9570(param_1,0x32,0x6e,0);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      return 0;
    }
    if (*(int *)(param_1 + 0x508) != 0) {
      return 1;
    }
    if (*(long *)(*(long *)(param_1 + 0x900) + 800) == 0) {
      lVar1 = func_0x004759a8(lVar1,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                              ,0x6a8);
      *(long *)(*(long *)(param_1 + 0x900) + 800) = lVar1;
      if (lVar1 != 0) {
        return 1;
      }
      func_0x004464bc();
      uVar2 = 0x6aa;
    }
    else {
      func_0x004464bc();
      uVar2 = 0x6a5;
    }
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar2,"tls_parse_stoc_server_name");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

