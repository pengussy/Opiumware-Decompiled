/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x38e910:d4bebad739
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0038e980) */

undefined8 FUN_0038e910(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x98);
  if (uVar4 == *(ulong *)(param_1 + 0xa0)) {
    if (uVar4 == 0) {
      uVar3 = 4;
/* do not claim this as your own */
    }
    else {
      uVar3 = (uVar4 << 3) / 5;
      if (0x1ff < uVar3) {
        uVar3 = 0x200;
      }
      if (uVar4 == uVar3) {
        return 0;
      }
    }
    lVar2 = func_0x019eb634(*(undefined8 *)(param_1 + 0x90),uVar3 << 5,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txpim.c"
                            ,0xad);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x90) = lVar2;
    *(ulong *)(param_1 + 0xa0) = uVar3;
    uVar4 = *(ulong *)(param_1 + 0x98);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x90);
  }
  *(ulong *)(param_1 + 0x98) = uVar4 + 1;
  puVar1 = (undefined8 *)(lVar2 + uVar4 * 0x20);
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | 1;
  return 1;
}

