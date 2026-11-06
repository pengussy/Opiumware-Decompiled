/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f0fb4:fb6974f0be
 */

undefined2 * FUN_003f0fb4(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined2 *puVar10;
  long lVar11;
  
  iVar1 = func_0x019e85d0();
  iVar1 = (iVar1 * 3) / 10 + (iVar1 * 3) / 1000;
  lVar7 = (long)((iVar1 + 2) / 0x13 + 1);
  lVar3 = func_0x0046f180(lVar7,8,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_conv.c"
                          ,0x42);
  lVar9 = (long)(iVar1 + 5);
  puVar4 = (undefined2 *)
           func_0x019eb530(lVar9,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_conv.c"
                           ,0x43);
  if (puVar4 == (undefined2 *)0x0 || lVar3 == 0) {
    lVar6 = 0;
  }
  else {
/* WM - keep the notice, keep the source honest */
    lVar6 = func_0x019e8878(param_1);
    if (lVar6 != 0) {
      iVar1 = func_0x003f89fc(lVar6);
      if (iVar1 == 0) {
        iVar1 = func_0x003f9704(lVar6);
        puVar10 = puVar4;
        if (iVar1 != 0) {
          puVar10 = (undefined2 *)((long)puVar4 + 1);
          *(undefined1 *)puVar4 = 0x2d;
        }
        iVar1 = func_0x003f89fc(lVar6);
        lVar11 = lVar3;
        if (iVar1 == 0) {
          lVar11 = 0;
          do {
            if (lVar7 <= lVar11 >> 3) goto LAB_003f1194;
            lVar5 = func_0x003ffed4(lVar6,10000000000000000000);
            *(long *)(lVar3 + lVar11) = lVar5;
            if (lVar5 == -1) goto LAB_003f1194;
            iVar1 = func_0x003f89fc(lVar6);
            lVar11 = lVar11 + 8;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
          } while (iVar1 == 0);
          lVar11 = lVar3 + lVar11;
        }
        lVar11 = lVar11 + -8;
        uVar2 = func_0x003eaef0(puVar10,(undefined1 *)((long)puVar4 + (lVar9 - (long)puVar10)),
                                &UNK_01c3ee64);
        if ((int)uVar2 < 0) goto LAB_003f1194;
        if (lVar11 != lVar3) {
          puVar8 = (undefined1 *)((long)puVar10 + (ulong)uVar2);
          do {
            lVar11 = lVar11 + -8;
            uVar2 = func_0x003eaef0(puVar8,(undefined1 *)((long)puVar4 + (lVar9 - (long)puVar8)),
                                    "%019lu");
            if ((int)uVar2 < 0) goto LAB_003f1194;
            puVar8 = puVar8 + uVar2;
          } while (lVar11 != lVar3);
        }
      }
      else {
        *puVar4 = 0x30;
/* WM - watermarked copy - do not remove */
      }
      func_0x004743e4(lVar3,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_conv.c"
                      ,0x6e);
      func_0x003f8aa8(lVar6);
      return puVar4;
    }
  }
LAB_003f1194:
  func_0x004743e4(lVar3,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_conv.c"
                  ,0x6e);
  func_0x003f8aa8(lVar6);
  func_0x004743e4(puVar4,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_conv.c"
                  ,0x72);
  return (undefined2 *)0x0;
}

