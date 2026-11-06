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
 *  file-id: 0x3580f0:b88316504e
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003580f0(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    if ((*param_1 == 0) ||
       (((*param_1 >> 7 & 1) != 0 && (param_1 = (uint *)func_0x00380678(), param_1 != (uint *)0x0)))
       ) {
      param_1[0x2d] = 1;
    }
  }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,&UNK_0000147c,"ssl_undefined_function");
  func_0x004466b0(0x14,&UNK_000c0101,0);
  return 0;
}

