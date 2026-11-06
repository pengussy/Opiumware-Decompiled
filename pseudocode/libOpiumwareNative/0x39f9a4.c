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
 *  file-id: 0x39f9a4:2ad5aefc05
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039f9a4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (((param_4 == 0) && (*(long *)(param_1 + 0xd20) != 0)) &&
     (((param_3 != 0x80 ||
       (((*(int *)(param_1 + 0x78) != 0 || (*(long *)(param_1 + 0xb60) == 0)) ||
        (*(int *)(param_1 + 0xc3c) != 0)))) ||
      (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
    iVar1 = func_0x019ec0a0(param_2,0x12,2);
    if ((iVar1 == 0) || (iVar1 = func_0x019ec0a0(param_2,0,2), iVar1 == 0)) {
      func_0x004464bc();
/* wm:more drops soon - github.com/pengussy */
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x2af,"tls_construct_ctos_sct");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

