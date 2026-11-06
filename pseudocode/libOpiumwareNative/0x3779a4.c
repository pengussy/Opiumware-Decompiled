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
 *  file-id: 0x3779a4:29256cfefb
 *  --------------------------------------------------------------------------*/

void FUN_003779a4(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6,undefined4 param_7,undefined8 param_8)

{
  long lVar1;
  undefined4 uVar2;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar2 = 0xc0103;
  if (param_2 != 1) {
    uVar2 = 0x17e;
  }
  func_0x00391900(param_2);
  if ((*(byte *)(param_1 + 0x624) >> 6 & 1) != 0) {
    return;
  }
  if (param_5 != 0) {
    func_0x004470e4(param_5);
/*  do not claim this as your own  */
  }
  if (param_3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                    ,0xddf,"ossl_quic_channel_raise_protocol_error_loc");
    func_0x004466b0(0x14,uVar2,"QUIC error code: 0x%llx%s%s%s, reason: \"%s\"");
  }
  else {
    func_0x003918e0(param_3);
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                    ,0xdd6,"ossl_quic_channel_raise_protocol_error_loc");
    func_0x004466b0(0x14,uVar2,
                    "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                   );
  }
  if (param_6 != 0) {
    func_0x004465b0(param_6,param_7,param_8);
  }
  if (*(long *)(param_1 + 0x628) == 0) {
    lVar1 = func_0x00446c9c();
    *(long *)(param_1 + 0x628) = lVar1;
    if (lVar1 == 0) goto LAB_00377aec;
  }
  func_0x00446cac();
LAB_00377aec:
  lStack_90 = param_2;
  lStack_88 = param_3;
  uStack_80 = param_4;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uStack_78 = _strlen(param_4);
  *(ulong *)(param_1 + 0x620) = *(ulong *)(param_1 + 0x620) | 0x4000000000;
  func_0x003772a4(param_1,&lStack_90,0);
  return;
}

