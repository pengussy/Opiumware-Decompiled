/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3d7038:eb7531b47f
 */

long FUN_003d7038(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if ((param_1[1] & 0xfffffeff) != param_3) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,0x20c,"asn1_string_to_bn");
    func_0x004466b0(0xd,0xe1,0);
    return 0;
  }
  lVar1 = func_0x003f8c78(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,0x212,"asn1_string_to_bn");
    func_0x004466b0(0xd,0x69,0);
    return 0;
  }
  if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
    func_0x003f9408(lVar1,1);
  }
  return lVar1;
}

