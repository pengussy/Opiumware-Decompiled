/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39fd00:bbfc40c846
 */

undefined8 FUN_0039fd00(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x9b0);
  if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) || (*(long *)(param_1 + 0xb60) == 0))
     || ((*(int *)(param_1 + 0xc3c) != 0 ||
         (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
    iVar1 = func_0x019ec0a0(param_2,0x2d,2);
    if ((((iVar1 == 0) ||
         ((iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0 ||
          (iVar1 = func_0x019eba0c(param_2,1), iVar1 == 0)))) ||
        ((iVar1 = func_0x019ec0a0(param_2,1,1), iVar1 == 0 ||
         (((((uint)uVar4 >> 10 & 1) != 0 && (iVar1 = func_0x019ec0a0(param_2,0,1), iVar1 == 0)) ||
          (iVar1 = func_0x00476494(param_2), iVar1 == 0)))))) ||
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
       (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x30a,"tls_construct_ctos_psk_kex_modes");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    uVar3 = 2;
    if ((uVar4 & 0x400) != 0) {
      uVar3 = 3;
    }
    *(undefined4 *)(param_1 + 0xb18) = uVar3;
    uVar2 = 1;
  }
  return uVar2;
}

