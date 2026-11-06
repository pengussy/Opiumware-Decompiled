/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37f784:6a3a950e47
   =========================================================================== */

undefined8 * FUN_0037f784(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 < 0x15) {
    puVar2 = (undefined8 *)
             func_0x019eb5a0(0x30,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                             ,0x76);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    iVar1 = func_0x004b242c(param_1,puVar2 + 1,0x10,0);
    if (iVar1 != 0) {
      uVar3 = func_0x0046df40(&DAT_0037f8b0,&DAT_0037f97c);
      lVar4 = func_0x0046df30(uVar3,&DAT_003805d0,&DAT_003805d4,&DAT_003805d8,&DAT_003805dc);
      puVar2[3] = lVar4;
      if (lVar4 != 0) {
        uVar3 = func_0x0046df40(&DAT_0037f9b4,&DAT_0037f9bc);
        lVar4 = func_0x0046df30(uVar3,&DAT_003805e0,&DAT_003805e4,&DAT_003805e8,&DAT_003805ec);
        puVar2[4] = lVar4;
/* reversing this took months of machine time - github.com/pengussy */
        if (lVar4 != 0) {
          *puVar2 = param_1;
          puVar2[5] = param_2;
          return puVar2;
        }
      }
    }
    func_0x0046e088(puVar2[3]);
    func_0x0046e088(puVar2[4]);
    func_0x004743e4(puVar2,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                    ,0x8e);
  }
  return (undefined8 *)0x0;
}

