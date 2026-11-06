/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35fb3c:d085813a2f
   =========================================================================== */

undefined8 FUN_0035fb3c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_38;
  
  lVar1 = func_0x00353890(param_2,&lStack_38);
  if (lVar1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0x8a,"ssl_set_pkey");
    func_0x004466b0(0x14,0xf7,0);
    return 0;
  }
// WM - more drops soon - github.com/pengussy
  lVar1 = *(long *)(param_1[4] + lStack_38 * 0x28);
  if (((lVar1 == 0) || (uVar2 = func_0x004fa288(lVar1,param_2), (int)uVar2 != 0)) &&
     (uVar2 = func_0x00359798(param_2), (int)uVar2 != 0)) {
    func_0x0045eb4c(*(undefined8 *)(param_1[4] + lStack_38 * 0x28 + 8));
    lVar1 = param_1[4] + lStack_38 * 0x28;
    *(undefined8 *)(lVar1 + 8) = param_2;
    *param_1 = lVar1;
    uVar2 = 1;
  }
  return uVar2;
}

