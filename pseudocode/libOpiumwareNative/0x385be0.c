/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x385be0:f86f672b55
   =========================================================================== */

undefined8 FUN_00385be0(long *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
/* wm:no support for modified copies */
  ulong uVar16;
  
  if (param_2 == param_1[1]) {
    return 1;
  }
  if (((ulong)(param_1[2] - param_1[3]) <= param_2) &&
     (lVar7 = func_0x019eb530(param_2,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/ring_buf.h"
                              ,0xf4), lVar7 != 0)) {
    uVar1 = param_1[2];
    uVar3 = param_1[3];
    if (uVar3 <= uVar1) {
      lVar2 = *param_1;
      uVar4 = param_1[1];
      uVar16 = uVar3;
      if (uVar4 == 0) {
LAB_00385d7c:
        if (param_3 == 0) {
          func_0x004743e4(lVar2,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/ring_buf.h"
                          ,0x3c);
        }
        else {
          func_0x00474404(lVar2,uVar4,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/ring_buf.h"
                          ,0x3a);
        }
        *param_1 = lVar7;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        param_1[1] = param_2;
        param_1[2] = uVar16;
        param_1[3] = uVar3;
        return 1;
      }
      uVar14 = 0;
      do {
        uVar15 = uVar14 + uVar3;
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar15 / uVar4;
        }
        lVar9 = uVar15 - uVar5 * uVar4;
        uVar13 = uVar4 - lVar9;
        uVar5 = uVar1 - uVar15;
        if (uVar13 <= uVar1 - uVar15) {
          uVar5 = uVar13;
        }
        if (uVar5 == 0) goto LAB_00385d7c;
        uVar13 = (uVar3 + param_2) - uVar16;
        uVar15 = uVar5;
        if (uVar13 <= uVar5) {
          uVar15 = uVar13;
        }
        uVar13 = 0;
        if (0x4000000000000000 - uVar16 <= uVar15) {
          uVar15 = 0x4000000000000000 - uVar16;
        }
        if (uVar15 != 0) {
          lVar9 = lVar2 + lVar9;
          do {
            uVar6 = 0;
            if (param_2 != 0) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
              uVar6 = uVar16 / param_2;
            }
            lVar10 = uVar16 - uVar6 * param_2;
            uVar12 = param_2 - lVar10;
            uVar6 = uVar15;
            if (uVar12 <= uVar15) {
              uVar6 = uVar12;
            }
            _memcpy(lVar7 + lVar10,lVar9,uVar6);
            lVar9 = lVar9 + uVar6;
            uVar13 = uVar6 + uVar13;
            uVar16 = uVar16 + uVar6;
            uVar11 = (uVar3 + param_2) - uVar16;
            uVar12 = uVar15 - uVar6;
            if (uVar11 <= uVar15 - uVar6) {
              uVar12 = uVar11;
            }
            uVar15 = uVar12;
            if (0x4000000000000000 - uVar16 <= uVar12) {
/* wm:origin: github.com/pengussy */
              uVar15 = 0x4000000000000000 - uVar16;
            }
          } while (uVar15 != 0);
        }
        if (uVar13 != uVar5) {
          uVar8 = 0x106;
          goto LAB_00385c78;
        }
        uVar14 = uVar5 + uVar14;
      } while ((!CARRY8(uVar3,uVar14)) && (uVar3 + uVar14 <= uVar1));
    }
    uVar8 = 0xfe;
LAB_00385c78:
    func_0x004743e4(lVar7,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/ring_buf.h"
                    ,uVar8);
  }
  return 0;
}

