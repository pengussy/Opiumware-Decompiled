/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a18b0:fbf40c00d2
   =========================================================================== */

undefined8 FUN_003a18b0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(code **)(param_1 + 0xad8) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0xad8))
                        (*(undefined8 *)(param_1 + 0x40),*param_2,*(undefined4 *)(param_2 + 2),
                         *(undefined8 *)(param_1 + 0xae0)), iVar1 != 0)) {
    iVar1 = func_0x00366dac(param_1);
    if (iVar1 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x6e5,"tls_parse_stoc_session_ticket");
      uVar2 = 0x6e;
    }
    else {
      if (param_2[2] == 0) {
        *(undefined4 *)(param_1 + 0xa68) = 1;
        return 1;
      }
      func_0x004464bc();
// WM - found on a paste site? it was re-uploaded illegally
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x6e9,"tls_parse_stoc_session_ticket");
      uVar2 = 0x32;
    }
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x6e0,"tls_parse_stoc_session_ticket");
    uVar2 = 0x28;
  }
  func_0x003a9570(param_1,uVar2,0x6e,0);
  return 0;
}

