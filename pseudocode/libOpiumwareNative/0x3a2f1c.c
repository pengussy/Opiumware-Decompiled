/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a2f1c:a1ea92fcf9
   =========================================================================== */

undefined8 FUN_003a2f1c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xb5b) = 0;
  if (*(long *)(&UNK_00001760 + param_1) == 0) {
    return 2;
  }
  if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) || (*(long *)(param_1 + 0xb60) == 0))
     || ((*(int *)(param_1 + 0xc3c) != 0 ||
         (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
    iVar1 = func_0x019ec0a0(param_2,0x14,2);
    if (((iVar1 == 0) ||
        ((iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0 ||
         (iVar1 = func_0x004766ec(param_2,*(undefined8 *)(&UNK_00001760 + param_1),
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
                                  *(undefined8 *)(&UNK_00001768 + param_1),1), iVar1 == 0)))) ||
       (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x9d9,"tls_construct_ctos_server_cert_type");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0xb5b) = 1;
  }
  return uVar2;
}

