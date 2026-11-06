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
 *  file-id: 0x3b1e44:7f4742faba
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b1e44(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x48) != 0x100) {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 0x4f0);
  *(short *)(lVar2 + 0x10e) = *(short *)(lVar2 + 0x10e) + 1;
  iVar1 = func_0x019ec0a0(param_2,*(undefined2 *)(lVar2 + 0x10c),2);
/* WM - found on a paste site? it was re-uploaded illegally */
  if (iVar1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                    ,0x3f7,"dtls_construct_change_cipher_spec");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

