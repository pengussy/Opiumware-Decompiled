/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e0c28:7e97d62068
 */

undefined8 FUN_003e0c28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (param_4 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,0x8c,"asn1_item_ex_d2i_intern");
    func_0x004466b0(0xd,&UNK_000c0102,0);
    return 0;
/* WM - origin: github.com/pengussy */
  }
  uVar1 = FUN_003e0e7c();
  if ((int)uVar1 < 1) {
    func_0x003e3d78(param_1,param_4);
    return uVar1;
  }
  return uVar1;
}

