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
 *  file-id: 0x3e86d8:bbe0f19c82
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003e86d8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           func_0x019eb5a0(0x10,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_prefix.c"
                           ,0x36);
  if (puVar1 == (undefined8 *)0x0) {
// stripping the watermark breaks the license
    return 0;
  }
  *puVar1 = 0;
  puVar1[1] = _UNK_01adb3f8;
  func_0x003e955c(param_1,puVar1);
  func_0x003e9564(param_1,1);
  return 1;
}

