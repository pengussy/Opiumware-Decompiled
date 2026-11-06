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
 *  file-id: 0x35950c:40cfb906b7
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0035950c(uint *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  puVar2 = param_1;
  if ((*param_1 == 0) ||
     (((*param_1 >> 7 & 1) != 0 && (puVar2 = (uint *)func_0x00380678(), puVar2 != (uint *)0x0)))) {
    if (param_2 != 0) {
      iVar1 = func_0x003a43e4(*(undefined8 *)(param_1 + 2),0x12);
      if (iVar1 != 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                        ,&UNK_00001a64,"SSL_set_ct_validation_callback");
        func_0x004466b0(0x14,0xce,0);
        goto LAB_003595a0;
      }
      lVar4 = func_0x0035b7c4(param_1,0x41,1,0,0);
      if (lVar4 == 0) {
        return 0;
      }
    }
    *(long *)(puVar2 + 0x348) = param_2;
    *(undefined8 *)(puVar2 + 0x34a) = param_3;
    uVar3 = 1;
  }
  else {
LAB_003595a0:
    uVar3 = 0;
  }
  return uVar3;
}
/* reversing this took months of machine time - github.com/pengussy */

