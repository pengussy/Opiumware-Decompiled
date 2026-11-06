/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x375118:f19f2d269c
   =========================================================================== */

undefined8 * FUN_00375118(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)
           func_0x019eb5a0(0x648,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                           ,0x1d3);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *param_1;
    uVar2 = *(uint *)(param_1 + 4);
    uVar5 = puVar3[0xc4];
    puVar3[6] = param_1[5];
    uVar6 = param_1[1];
    puVar3[8] = param_1[2];
    puVar3[7] = uVar6;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    puVar3[0x85] = param_1[3];
    uVar1 = *(uint *)(param_1 + 6);
    puVar3[0xc4] = uVar5 & 0xfffff80000000000 | (ulong)(*(uint *)((long)param_1 + 0x34) & 1) << 0x2a
                   | uVar5 & 0x1fffc000000 | uVar5 & 0x1ffffff | ((ulong)uVar2 & 1) << 0x19 |
                     ((ulong)uVar1 & 1) << 0x29;
    if (((uVar1 & 1) != 0) && (param_1[7] != 0)) {
      lVar4 = func_0x004759a8(param_1[7],
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                              ,0x1e1);
      puVar3[200] = lVar4;
      if (lVar4 == 0) {
        func_0x004743e4(puVar3,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                        ,0x1e2);
        return (undefined8 *)0x0;
      }
    }
  }
  return puVar3;
}

