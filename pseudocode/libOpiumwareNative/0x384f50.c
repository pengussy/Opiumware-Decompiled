/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x384f50:ca8b368667
   =========================================================================== */

undefined8 * FUN_00384f50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((ulong)param_1[3] < 0x4b0) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)
           func_0x019eb5a0(0x400,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_tx.c"
                           ,0x78);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *param_1;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    uVar2 = param_1[3];
    puVar1[0x6a] = param_1[2];
    puVar1[0x6d] = uVar2;
    uVar2 = param_1[4];
    puVar1[0x6c] = param_1[5];
    puVar1[0x6b] = uVar2;
  }
  return puVar1;
}

