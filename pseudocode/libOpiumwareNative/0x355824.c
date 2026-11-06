/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x355824:71fa91ce04
   =========================================================================== */

undefined8 FUN_00355824(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    uVar13 = 0;
  }
  else {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    uVar13 = 0;
    do {
      if ((int)plVar5[1] != 0) {
        uVar2 = *(uint *)(*plVar5 + 0x44);
        if ((int)*(uint *)(*plVar5 + 0x44) <= (int)uVar13) {
          uVar2 = uVar13;
        }
        uVar13 = uVar2;
      }
      plVar5 = (long *)plVar5[2];
    } while (plVar5 != (long *)0x0);
  }
  lVar3 = func_0x0046f1f4(uVar13 + 1,4,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                          ,0x381);
  uVar4 = 0;
  if (lVar3 != 0) {
    for (plVar5 = (long *)*param_1; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
      if ((int)plVar5[1] != 0) {
        *(int *)(lVar3 + (long)*(int *)(*plVar5 + 0x44) * 4) =
             *(int *)(lVar3 + (long)*(int *)(*plVar5 + 0x44) * 4) + 1;
      }
/* WM - origin: github.com/pengussy */
    }
    uVar6 = (ulong)uVar13;
    do {
      if (0 < *(int *)(lVar3 + uVar6 * 4)) {
        plVar5 = (long *)*param_1;
        plVar7 = (long *)*param_2;
        plVar10 = plVar7;
        if (!(plVar7 == (long *)0x0 || plVar5 == (long *)0x0)) {
          plVar8 = plVar5;
          plVar9 = plVar5;
          do {
            plVar11 = (long *)plVar9[2];
            plVar5 = plVar8;
            if ((uVar6 == *(uint *)(*plVar9 + 0x44)) && ((int)plVar9[1] != 0 && plVar9 != plVar10))
            {
              plVar5 = plVar11;
              if (plVar9 != plVar8) {
                plVar5 = plVar8;
              }
              lVar12 = plVar9[3];
              if (lVar12 != 0) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                *(long **)(lVar12 + 0x10) = plVar11;
              }
              if (plVar11 != (long *)0x0) {
                plVar11[3] = lVar12;
              }
              plVar10[2] = (long)plVar9;
              plVar9[2] = 0;
              plVar9[3] = (long)plVar10;
              plVar10 = plVar9;
            }
            if (plVar9 == plVar7) break;
            plVar8 = plVar5;
            plVar9 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
        *param_1 = (long)plVar5;
        *param_2 = (long)plVar10;
      }
      bVar1 = 0 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
    func_0x004743e4(lVar3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                    ,0x397);
    uVar4 = 1;
  }
  return uVar4;
// WM - reversing this took months of machine time
}

