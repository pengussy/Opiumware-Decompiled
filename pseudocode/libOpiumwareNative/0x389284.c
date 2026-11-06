/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x389284:754790ad7c
   =========================================================================== */

long FUN_00389284(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_148 [56];
  undefined8 uStack_110;
  
  uStack_110 = param_2;
  lVar3 = func_0x0046e64c(*param_1,auStack_148);
  if ((lVar3 != 0) ||
     (lVar3 = func_0x019eb5a0(0x108,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_stream_map.c"
                              ,0x99), lVar3 == 0)) {
    return 0;
  }
  *(undefined8 *)(lVar3 + 0x38) = param_2;
  uVar4 = *(ulong *)(lVar3 + 0x100);
  uVar2 = func_0x00375624(param_1[1]);
  uVar2 = uVar2 & 1;
  uVar1 = 0x100;
  if (uVar2 != 0) {
    uVar1 = (ulong)(param_3 << 7 ^ 0xffffffff) & 0x100;
  }
  uVar5 = (ulong)(param_3 << 0xf ^ 0xffffffff) & 0x10000;
  if (((param_3 & 0xff ^ uVar2) & 1) != 0) {
    uVar5 = 0x10000;
  }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  *(ulong *)(lVar3 + 0x100) =
       uVar5 | uVar1 | uVar4 & 0xfffffffffd000000 | (ulong)(uVar2 << 0x19) | (ulong)(param_3 & 0xff)
  ;
  *(undefined8 *)(lVar3 + 0x68) = 0xffffffffffffffff;
  func_0x0046e1b8(*param_1,lVar3);
  return lVar3;
}

