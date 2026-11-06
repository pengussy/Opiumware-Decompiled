/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37a3b0:30535a07d5
 */

undefined8 * FUN_0037a3b0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)
           func_0x019eb5a0(0xa8,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_engine.c"
                           ,0x1e);
  if (puVar3 != (undefined8 *)0x0) {
    uVar4 = *param_1;
    puVar3[1] = param_1[1];
    *puVar3 = uVar4;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
    uVar4 = param_1[2];
    uVar1 = param_1[3];
    puVar3[2] = uVar4;
    iVar2 = func_0x00382654(puVar3 + 5,&DAT_0037a59c,puVar3,uVar4,0,uVar1);
    if (iVar2 == 0) {
      func_0x004743e4(puVar3,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_engine.c"
                      ,0x26);
      return (undefined8 *)0x0;
    }
  }
  return puVar3;
}

