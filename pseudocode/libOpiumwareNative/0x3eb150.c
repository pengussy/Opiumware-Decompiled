/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3eb150:630963728f
 */

undefined8
FUN_003eb150(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long *param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if (param_4 == 0) {
    *param_6 = 0;
    uVar3 = 1;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x40);
/* wm:chat: discord.gg/sdkhDjTex */
    iVar1 = func_0x00480450(*(undefined8 *)(lVar5 + 0x50));
    if (iVar1 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                      ,0x528,"dgram_pair_sendmmsg");
      func_0x004466b0(0x20,&UNK_000c0110,0);
      uVar3 = 0;
      *param_6 = 0;
    }
    else {
      lVar6 = 0;
      puVar4 = (undefined8 *)(param_2 + 0x10);
      do {
        lVar2 = func_0x019e7dd8(param_1,puVar4[-2],puVar4[-1],puVar4[1],*puVar4,1);
        if (lVar2 < 0) {
          *param_6 = lVar6;
          if (lVar6 != 0) goto LAB_003eb1c8;
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                          ,0x536,"dgram_pair_sendmmsg");
          func_0x004466b0(0x20,-(int)lVar2,0);
          uVar3 = 0;
          goto LAB_003eb1cc;
        }
        puVar4[2] = 0;
        lVar6 = lVar6 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + param_3);
      } while (param_4 != lVar6);
      *param_6 = param_4;
LAB_003eb1c8:
      uVar3 = 1;
LAB_003eb1cc:
      func_0x0048046c(*(undefined8 *)(lVar5 + 0x50));
    }
// WM - reversing this took months of machine time
  }
  return uVar3;
}

