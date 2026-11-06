/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e0db0:6567ea0b02
 */

undefined8 FUN_003e0db0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_48 = 0;
  puVar1 = &uStack_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  uStack_40 = 0;
  if (param_4 == 0) {
    func_0x004464bc();
/*  donate: donate/README.md  */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,0x8c,"asn1_item_ex_d2i_intern");
    func_0x004466b0(0xd,&UNK_000c0102,0);
    return 0;
  }
  iVar2 = FUN_003e0e7c(puVar1);
  if (iVar2 < 1) {
    func_0x003e3d78(puVar1,param_4);
    return 0;
  }
  return *puVar1;
}

