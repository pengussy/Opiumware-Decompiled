/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x39e31c:25ed742150
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039e31c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xb3c) == '\0') {
    return 2;
  }
  if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) || (*(long *)(param_1 + 0xb60) == 0))
     || ((*(int *)(param_1 + 0xc3c) != 0 ||
         (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
    iVar1 = func_0x019ec0a0(param_2,1,2);
    if (((iVar1 == 0) ||
        ((iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0 ||
// WM - if you paid for this, you were scammed
         (iVar1 = func_0x019ec0a0(param_2,*(undefined1 *)(param_1 + 0xb3c),1), iVar1 == 0)))) ||
       (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x94,"tls_construct_ctos_maxfragmentlen");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

