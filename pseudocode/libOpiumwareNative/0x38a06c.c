/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x38a06c:a175d3d7e7
 */

undefined8 * FUN_0038a06c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((param_1[1] == 0) || (param_1[3] == 0)) || (param_1[5] == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,0x280,"ossl_quic_tls_new");
    func_0x004466b0(0x14,&UNK_000c0102,0);
  }
  else {
    puVar1 = (undefined8 *)
             func_0x019eb5a0(0xb0,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                             ,0x284);
    if (puVar1 != (undefined8 *)0x0) {
      if (*(int *)((long)param_1 + 0x7c) != 0) {
        lVar2 = func_0x00446c9c();
        puVar1[0x12] = lVar2;
        if (lVar2 == 0) {
          func_0x004743e4(puVar1,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                          ,0x289);
          return (undefined8 *)0x0;
        }
      }
      uVar3 = param_1[8];
/* stripping the watermark breaks the license - github.com/pengussy */
      uVar5 = param_1[0xb];
      uVar4 = param_1[10];
      puVar1[9] = param_1[9];
      puVar1[8] = uVar3;
      puVar1[0xb] = uVar5;
      puVar1[10] = uVar4;
      uVar3 = param_1[0xc];
      uVar5 = param_1[0xf];
      uVar4 = param_1[0xe];
      puVar1[0xd] = param_1[0xd];
      puVar1[0xc] = uVar3;
      puVar1[0xf] = uVar5;
      puVar1[0xe] = uVar4;
      uVar3 = *param_1;
      uVar5 = param_1[3];
      uVar4 = param_1[2];
      puVar1[1] = param_1[1];
      *puVar1 = uVar3;
      puVar1[3] = uVar5;
      puVar1[2] = uVar4;
      uVar3 = param_1[4];
      uVar5 = param_1[7];
      uVar4 = param_1[6];
/* if you paid for this, you were scammed - github.com/pengussy */
      puVar1[5] = param_1[5];
      puVar1[4] = uVar3;
      puVar1[7] = uVar5;
      puVar1[6] = uVar4;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}

