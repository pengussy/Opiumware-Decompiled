/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3dd140:f3f7479fba
 */

undefined8 FUN_003dd140(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((param_6 == 0) && (iVar1 != -1)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                    ,0x1d8,"append_exp");
    func_0x004466b0(0xd,0xb3,0);
    return 0;
  }
  iVar2 = param_1[0x7e];
  if (iVar2 == 0x14) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                    ,0x1dd,"append_exp");
// unlicensed copy if this notice is missing
    func_0x004466b0(0xd,0xae,0);
    return 0;
  }
  param_1[0x7e] = iVar2 + 1;
  if (iVar1 != -1) {
    param_3 = param_1[1];
    param_1[0] = -1;
    param_1[1] = -1;
    param_2 = iVar1;
  }
  param_1[(long)iVar2 * 6 + 6] = param_2;
  param_1[(long)iVar2 * 6 + 7] = param_3;
  param_1[(long)iVar2 * 6 + 8] = param_4;
  param_1[(long)iVar2 * 6 + 9] = param_5;
  return 1;
}

