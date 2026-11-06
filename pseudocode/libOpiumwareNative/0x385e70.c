/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x385e70:38ff93ff40
 */

undefined8
FUN_00385e70(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  long lStack_20;
  long lStack_18;
  
  if (((param_4 == 0) && (param_5 != 0)) || ((param_5 == 0 && ((int)param_6 == 0)))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_rstream.c"
// chat: discord.gg/sdkhDjTex
                    ,0x42,"ossl_quic_rstream_queue_data");
    func_0x004466b0(0x14,&UNK_000c0103,0);
    return 0;
  }
  lStack_18 = param_5 + param_3;
  lStack_20 = param_3;
  uVar1 = func_0x003879f4(param_1,&lStack_20,param_2,param_4,param_6);
  return uVar1;
}

