/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a4134:c127954a3f
 */

undefined8 FUN_003a4134(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2[1] == 0) {
    return 1;
  }
  lVar2 = func_0x00475ac0(*param_2,param_2[1] * 0x38,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                          ,0x178);
  *param_1 = lVar2;
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar5 = param_2[1];
    param_1[1] = uVar5;
    if (uVar5 != 0) {
      lVar2 = 0;
      uVar7 = 0;
      bVar1 = false;
      do {
        if (*(undefined **)(*param_2 + lVar2 + 0x10) == &DAT_003a43bc) {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          lVar8 = *param_1;
          if (bVar1) {
            lVar8 = lVar8 + lVar2;
            *(undefined8 *)(lVar8 + 0x20) = 0;
            *(undefined8 *)(lVar8 + 0x30) = 0;
          }
          else {
            lVar4 = *param_2 + lVar2;
            uVar3 = func_0x00475ac0(*(undefined8 *)(lVar4 + 0x20),0x18,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                                    ,0x166);
            lVar8 = lVar8 + lVar2;
            *(undefined8 *)(lVar8 + 0x20) = uVar3;
            lVar4 = func_0x00475ac0(*(undefined8 *)(lVar4 + 0x30),0x10,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                                    ,0x168);
            *(long *)(lVar8 + 0x30) = lVar4;
            bVar1 = *(long *)(lVar8 + 0x20) == 0 || lVar4 == 0;
            uVar5 = param_2[1];
          }
        }
        uVar7 = uVar7 + 1;
        lVar2 = lVar2 + 0x38;
      } while (uVar7 < uVar5);
      if (bVar1) {
        lVar2 = *param_1;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        uVar5 = param_1[1];
        if (uVar5 != 0) {
          uVar7 = 0;
          puVar6 = (undefined8 *)(lVar2 + 0x30);
          do {
            if ((undefined *)puVar6[-4] == &DAT_003a43bc) {
              func_0x004743e4(puVar6[-2],
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                              ,0x1c5);
              func_0x004743e4(*puVar6,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                              ,0x1c6);
              uVar5 = param_1[1];
            }
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 7;
          } while (uVar7 < uVar5);
          lVar2 = *param_1;
// WM - more drops soon - github.com/pengussy
        }
        func_0x004743e4(lVar2,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                        ,0x1c8);
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
      }
      return 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}

