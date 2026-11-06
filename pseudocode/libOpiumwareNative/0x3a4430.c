/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a4430:7eb6bca783
 */

undefined8
FUN_003a4430(long param_1,long *param_2,int param_3,undefined8 param_4,uint param_5,long param_6,
            long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  
  if ((param_6 != 0) || (param_7 == 0)) {
    uVar10 = (uint)param_4;
    if (param_2 == (long *)0x0) {
      param_2 = (long *)(*(long *)(param_1 + 0x158) + 0x80);
    }
    if ((((uVar10 == 0x12) && (param_1 != 0)) && ((param_5 >> 7 & 1) != 0)) &&
       (iVar3 = func_0x0035e7a0(param_1), iVar3 != 0)) {
      return 0;
// WM - chat: discord.gg/sdkhDjTex
    }
    uVar4 = func_0x003a45f0(param_4);
    uVar1 = 0;
    if (uVar10 != 0x12) {
      uVar1 = uVar4;
    }
    if ((uVar10 >> 0x10 == 0) && ((uVar1 & 1) == 0)) {
      puVar2 = (ushort *)*param_2;
      lVar5 = param_2[1];
      if (lVar5 != 0) {
        if (param_3 == 2) {
          lVar6 = lVar5;
          puVar7 = puVar2;
          do {
            if (uVar10 == *puVar7) {
              return 0;
            }
            lVar6 = lVar6 + -1;
            puVar7 = puVar7 + 0x1c;
          } while (lVar6 != 0);
        }
        else {
          puVar7 = puVar2 + 2;
          lVar6 = lVar5;
          do {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            if ((uVar10 == puVar7[-2]) && (param_3 == *(int *)puVar7 || *(int *)puVar7 == 2)) {
              return 0;
            }
            puVar7 = puVar7 + 0x1c;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      lVar5 = func_0x019eb634(puVar2,lVar5 * 0x38 + 0x38,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                              ,0x206);
      if (lVar5 != 0) {
        *param_2 = lVar5;
        puVar8 = (undefined8 *)(lVar5 + param_2[1] * 0x38);
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[5] = param_9;
        puVar8[6] = 0;
        *(int *)((long)puVar8 + 4) = param_3;
        *(uint *)(puVar8 + 1) = param_5;
        puVar8[2] = param_6;
        puVar8[3] = param_7;
        *(short *)puVar8 = (short)param_4;
        uVar9 = 4;
        if (param_1 != 0) {
          uVar9 = 0;
        }
        *(undefined4 *)((long)puVar8 + 0xc) = uVar9;
// more drops soon - github.com/pengussy
        puVar8[4] = param_8;
        puVar8[6] = param_10;
        param_2[1] = param_2[1] + 1;
        return 1;
      }
    }
  }
  return 0;
}

