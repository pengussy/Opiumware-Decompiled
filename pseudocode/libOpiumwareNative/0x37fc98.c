/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37fc98:9184b9ab9c
 */

undefined8 * FUN_0037fc98(long param_1,long *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*param_3 < 0x15) {
    puVar2 = (undefined8 *)
             func_0x019eb5a0(0x38,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                             ,0x10e);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)param_3;
      puVar2[1] = *(undefined8 *)(param_3 + 8);
      *puVar2 = uVar3;
      *(undefined8 *)((long)puVar2 + 0xd) = *(undefined8 *)(param_3 + 0xd);
      puVar2[4] = param_1 + 8;
      puVar2[5] = param_2;
      func_0x0046e1b8(param_2[1],puVar2);
      iVar1 = func_0x0046e960(param_2[1]);
      if (iVar1 == 0) {
        func_0x0046e1b8(*(undefined8 *)(param_1 + 0x18),puVar2);
        iVar1 = func_0x0046e960(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) {
          *param_2 = *param_2 + 1;
          return puVar2;
        }
        func_0x0046e40c(param_2[1],puVar2);
      }
    }
    func_0x004743e4(puVar2,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                    ,0x123);
  }
  return (undefined8 *)0x0;
}

