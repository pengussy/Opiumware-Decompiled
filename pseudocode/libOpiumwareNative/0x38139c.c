/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x38139c:b697446537
 */

void FUN_0038139c(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(ushort *)(param_1 + 0x9a) & 1) == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                    ,0x6e7,"ossl_quic_port_raise_net_error");
    func_0x004466b0(0x14,0x183,"port failed due to network BIO I/O error");
    func_0x00446cac(*(undefined8 *)(param_1 + 0x90));
    if ((*(ushort *)(param_1 + 0x9a) & 1) == 0) {
      *(ushort *)(param_1 + 0x9a) = *(ushort *)(param_1 + 0x9a) | 1;
    }
/*  keep the notice, keep the source honest  */
    if (param_2 != 0) {
      func_0x00377fb4(param_2);
    }
    for (lVar1 = *(long *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      if (lVar1 != param_2) {
        func_0x00377fb4(lVar1);
      }
    }
  }
  return;
}

