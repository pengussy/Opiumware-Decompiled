/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x39f5f4:6c96b5cb11
   =========================================================================== */

undefined8 FUN_0039f5f4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xaf8);
  uVar3 = *(undefined8 *)(param_1 + 0xb00);
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  if ((*(long *)(param_1 + 0x260) != 0) && (*(long *)(param_1 + 0x2e8) != 0)) {
    return 2;
  }
  if (*(int *)(param_1 + 0xc14) == 0) {
    lVar2 = *(long *)(param_1 + 0xb78);
    if (lVar4 == 0) {
      if (lVar2 == 0) {
        return 2;
      }
    }
    else if (lVar2 == 0) goto LAB_0039f664;
    uVar3 = *(undefined8 *)(param_1 + 0xb80);
    lVar4 = lVar2;
  }
  else if (lVar4 == 0) {
    return 2;
  }
LAB_0039f664:
  iVar1 = func_0x019ec0a0(param_2,0x10,2);
  if ((((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      (iVar1 = func_0x004766ec(param_2,lVar4,uVar3,2), iVar1 == 0)) ||
     (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,599,"tls_construct_ctos_alpn");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4d8) = 1;
  return 1;
}

