/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a4820:72f8eaafeb
   =========================================================================== */

undefined8 FUN_003a4820(long param_1,long *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2[2] != 0) {
    pbVar2 = (byte *)*param_2 + 1;
    uVar4 = (ulong)*(byte *)*param_2;
    *param_2 = (long)pbVar2;
    uVar5 = param_2[2] - 1;
    param_2[2] = uVar5;
    if (uVar4 <= uVar5) {
      *param_2 = (long)(pbVar2 + uVar4);
      param_2[2] = uVar5 - uVar4;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (*(ulong *)(param_1 + 0x460) == uVar4) {
        iVar1 = _memcmp(pbVar2,param_1 + 0x420);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x4b0) = 1;
          return 1;
        }
        func_0x004464bc();
        uVar3 = 0x50;
      }
      else {
        func_0x004464bc();
        uVar3 = 0x42;
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                      ,uVar3,"tls_parse_ctos_renegotiate");
      func_0x003a9570(param_1,0x28,0x151,0);
      return 0;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,0x3c,"tls_parse_ctos_renegotiate");
  func_0x003a9570(param_1,0x32,0x150,0);
  return 0;
// watermarked copy - do not remove
}

