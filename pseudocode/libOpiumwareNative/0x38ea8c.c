/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x38ea8c:6fc854d764
 */

undefined8 FUN_0038ea8c(undefined8 param_1,ulong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  if (0x14 < param_2) {
    return 0;
  }
  *param_3 = (char)param_2;
  uVar1 = func_0x004b242c(param_1,param_3 + 1,param_2,0);
  if ((int)uVar1 != 1) {
    func_0x004464bc();
/* found on a paste site? it was re-uploaded illegally */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_types.c"
                    ,0x17,"ossl_quic_gen_rand_conn_id");
    func_0x004466b0(0x14,&UNK_00080024,0);
    uVar1 = 0;
    *param_3 = 0;
  }
  return uVar1;
}

