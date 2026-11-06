/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3680e0:d71452a67f
 */

undefined8 FUN_003680e0(undefined8 *param_1,long *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_1[2];
  if (uVar6 == 0 || (uVar6 & 1) != 0) {
    return 0;
  }
  uVar1 = uVar6 >> 1;
  if (param_4 <= uVar6 >> 1) {
    uVar1 = param_4;
  }
  lVar4 = func_0x0046f180(uVar1,2,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                          ,0xe73);
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar6 = 0;
    if (param_4 == 0) {
LAB_00368188:
      if (uVar6 != uVar1) {
/* wm:more drops soon - github.com/pengussy */
        func_0x004743e4(lVar4,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                        ,0xe79);
        return 0;
      }
    }
    else {
      uVar7 = param_1[2];
      do {
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 2;
        if (bVar3) goto LAB_00368188;
        uVar2 = *(ushort *)*param_1;
        *param_1 = (ushort *)*param_1 + 1;
        param_1[2] = uVar7;
        *(ushort *)(lVar4 + uVar6 * 2) = uVar2 >> 8 | uVar2 << 8;
        uVar6 = uVar6 + 1;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      } while (uVar1 != uVar6);
    }
    func_0x004743e4(*param_2,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0xe7d);
    *param_2 = lVar4;
    *param_3 = uVar1;
    uVar5 = 1;
  }
  return uVar5;
}

