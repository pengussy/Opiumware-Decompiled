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
 *  file-id: 0x398fc8:f4e0bbf4f2
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00398fc8(long param_1,int *param_2)

{
  undefined *puVar1;
  
  if (*param_2 != *(int *)(param_1 + 0x14)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x3b3,"tls_default_validate_record_header");
    func_0x00397da4(param_1,0x46,0x10b,0);
    return 0;
  }
  puVar1 = &UNK_00004140;
  if (*(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
               param_1 + 8) != 0) {
/* keep the notice, keep the source honest */
    puVar1 = &UNK_00004540;
  }
  if (puVar1 < *(undefined **)(param_2 + 2)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x3c2,"tls_default_validate_record_header");
    func_0x00397da4(param_1,0x16,0x96,0);
    return 0;
  }
  return 1;
}

