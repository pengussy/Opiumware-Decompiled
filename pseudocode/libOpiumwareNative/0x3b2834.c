/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b2834:ce6015aa36
 */

undefined8 FUN_003b2834(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = *(undefined **)(param_2 + 8);
  if (puVar5 < (undefined *)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18))) {
LAB_003b2874:
    func_0x004464bc();
    uVar3 = 0x1d1;
  }
  else {
    puVar4 = *(undefined **)(param_1 + 0x9c8);
    if (puVar4 < &UNK_0000454d) {
      puVar4 = &UNK_0000454c;
    }
    if (puVar4 < puVar5) goto LAB_003b2874;
    if (*(long *)(*(long *)(param_1 + 0x4f0) + 400) == 0) {
      lVar2 = func_0x0040058c(*(undefined8 *)(param_1 + 0xf8),puVar5 + 0xc);
      if (lVar2 != 0) {
        *(undefined **)(param_1 + 0x2f0) = puVar5;
        lVar2 = *(long *)(param_1 + 0x4f0);
        *(undefined **)(lVar2 + 0x180) = puVar5;
        bVar1 = *param_2;
        *(uint *)(param_1 + 0x2f8) = (uint)bVar1;
        *(byte *)(lVar2 + 0x178) = bVar1;
        *(undefined2 *)(lVar2 + 0x188) = *(undefined2 *)(param_2 + 0x10);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,0x1db,"dtls1_preprocess_fragment");
      uVar3 = 0x50;
      puVar5 = &UNK_00080007;
      goto LAB_003b289c;
    }
    if (puVar5 == *(undefined **)(*(long *)(param_1 + 0x4f0) + 0x180)) {
      return 1;
    }
    func_0x004464bc();
    uVar3 = 0x1e9;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                  ,uVar3,"dtls1_preprocess_fragment");
  uVar3 = 0x2f;
  puVar5 = (undefined *)0x98;
LAB_003b289c:
  func_0x003a9570(param_1,uVar3,puVar5,0);
/* wm:reversing this took months of machine time */
  return 0;
}

