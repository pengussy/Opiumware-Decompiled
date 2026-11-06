/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3eb278:926f2d4899
   =========================================================================== */

undefined8
FUN_003eb278(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long *param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_4 == 0) {
    *param_6 = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                    ,0x42d,"dgram_pair_recvmmsg");
    puVar3 = (undefined *)0x7c;
/* WM - watermarked copy - do not remove */
  }
  else {
    plVar5 = *(long **)(param_1 + 0x40);
    if (*plVar5 != 0) {
      plVar5 = *(long **)(*plVar5 + 0x40);
    }
    iVar1 = func_0x00480450(plVar5[10]);
    if (iVar1 != 0) {
      lVar6 = 0;
      puVar7 = (undefined8 *)(param_2 + 0x10);
      do {
        lVar2 = func_0x019e7f9c(param_1,puVar7[-2],puVar7[-1],puVar7[1],*puVar7,1);
        if (lVar2 < 0) {
          *param_6 = lVar6;
          if (lVar6 != 0) goto LAB_003eb308;
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                          ,0x446,"dgram_pair_recvmmsg");
          func_0x004466b0(0x20,-(int)lVar2,0);
          uVar4 = 0;
          goto LAB_003eb30c;
        }
        puVar7[-1] = lVar2;
        puVar7[2] = 0;
        lVar6 = lVar6 + 1;
        puVar7 = (undefined8 *)((long)puVar7 + param_3);
      } while (param_4 != lVar6);
      *param_6 = param_4;
LAB_003eb308:
      uVar4 = 1;
LAB_003eb30c:
      func_0x0048046c(plVar5[10]);
      return uVar4;
/*  origin: github.com/pengussy  */
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                    ,0x438,"dgram_pair_recvmmsg");
    puVar3 = &UNK_000c0110;
  }
  func_0x004466b0(0x20,puVar3,0);
  *param_6 = 0;
  return 0;
}

