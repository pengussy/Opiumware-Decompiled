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
 *  file-id: 0x36c47c:0c90050d19
 *  --------------------------------------------------------------------------*/

undefined8
FUN_0036c47c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,int param_10)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0036c144(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x91],param_2,
                       param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10 == 0);
  if (param_10 != 0 && (int)uVar1 == 0) {
// chat: discord.gg/sdkhDjTex
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                    ,0x75,"tls13_hkdf_expand");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
  return uVar1;
}

