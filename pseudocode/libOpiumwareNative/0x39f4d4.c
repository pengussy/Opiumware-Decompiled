/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39f4d4:4710f12faa
 */

undefined8 FUN_0039f4d4(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(*(long *)(param_1 + 8) + 0x2e8) == 0) {
    return 2;
  }
  if ((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) {
    if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) || (*(long *)(param_1 + 0xb60) == 0)
        ) || ((*(int *)(param_1 + 0xc3c) != 0 || (uVar2 = func_0x0039b9e0(), 1 < (uint)uVar2)))) {
      iVar1 = func_0x019ec0a0(param_2,&UNK_00003374,2);
      if ((iVar1 == 0) || (iVar1 = func_0x019ec0a0(param_2,0,2), iVar1 == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                        ,0x227,"tls_construct_ctos_npn");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        return 0;
      }
      return 1;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

