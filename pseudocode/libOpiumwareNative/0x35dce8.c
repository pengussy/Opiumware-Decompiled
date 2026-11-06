/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x35dce8:23c0bcb71a
 */

undefined8 FUN_0035dce8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    return 1;
  }
  func_0x003e74d4();
  lVar1 = func_0x003e945c();
  if ((lVar1 == 0) || (lVar2 = func_0x003ea784(lVar1,0x75,1,0), lVar2 < 1)) {
    func_0x003e9468();
    func_0x004464bc();
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_000015bb,"ssl_init_wbio_buffer");
    func_0x004466b0(0x14,&UNK_00080007,0);
    return 0;
  }
  *(long *)(param_1 + 0x60) = lVar1;
  uVar3 = func_0x003ea920(lVar1,*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  (**(code **)(*(long *)(param_1 + 0xe30) + 0x58))(*(undefined8 *)(param_1 + 0xe40),uVar3);
  return 1;
}

