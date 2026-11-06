/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3ec97c:0009ae6eca
   =========================================================================== */

undefined8 FUN_003ec97c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  plVar1 = (long *)func_0x019eb5a0(0x10,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_mem.c"
                                   ,0x6f);
  uVar4 = 0;
  if (plVar1 != (long *)0x0) {
    lVar2 = func_0x0040032c(param_2);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      func_0x004743e4(plVar1,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_mem.c"
                      ,0x74);
      return 0;
    }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    puVar3 = (undefined8 *)
             func_0x019eb5a0(0x20,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_mem.c"
                             ,0x77);
    plVar1[1] = (long)puVar3;
    puVar5 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) {
      func_0x00400378(puVar5);
      func_0x004743e4(plVar1,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_mem.c"
                      ,0x79);
      return 0;
    }
    uVar4 = *puVar5;
    uVar7 = puVar5[3];
    uVar6 = puVar5[2];
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    puVar3[1] = puVar5[1];
    *puVar3 = uVar4;
    puVar3[3] = uVar7;
    puVar3[2] = uVar6;
    *(undefined8 *)(param_1 + 0x28) = 0x100000001;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000;
    *(long **)(param_1 + 0x40) = plVar1;
    uVar4 = 1;
  }
  return uVar4;
}

