/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x393094:cdf06a88f7
 */

undefined4 FUN_00393094(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = param_1[0x17];
  if (uVar4 < (ulong)param_1[0x16]) {
    uVar5 = 1;
    do {
      while( true ) {
        lVar6 = *param_1;
        param_1[0x17] = uVar4 + 1;
        plVar1 = param_1 + uVar4 * 8 + 0x18;
        if (*plVar1 != 0) break;
        func_0x004743e4(plVar1[3],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                        ,0x248);
        lVar7 = 0;
        plVar1[3] = 0;
        *(long *)(lVar6 + 0xec8) = *(long *)(lVar6 + 0xec8) + 1;
        lVar6 = plVar1[4];
        plVar1[4] = lVar6;
        if (lVar6 == 0) {
LAB_003930e4:
          plVar1[5] = 0;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          uVar4 = param_1[0x17];
          if ((ulong)param_1[0x16] <= uVar4) goto LAB_003931dc;
        }
        else {
LAB_0039319c:
          plVar1[5] = plVar1[5] + lVar7;
          uVar4 = param_1[0x17];
          if ((ulong)param_1[0x16] <= uVar4) goto LAB_003931dc;
        }
      }
      lVar7 = plVar1[4];
      uVar3 = (**(code **)(*(long *)(lVar6 + 0xe28) + 0x48))
                        (*(undefined8 *)(lVar6 + 0xe38),*plVar1,lVar7);
      iVar2 = func_0x00394790(lVar6,0,uVar3,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                              ,0x23e);
      if (0 < iVar2) {
        if (lVar7 == plVar1[4]) {
          *(long *)(lVar6 + 0xec8) = *(long *)(lVar6 + 0xec8) + 1;
          plVar1[4] = 0;
        }
        else {
          lVar6 = plVar1[4] - lVar7;
          plVar1[4] = lVar6;
          if (lVar6 != 0) goto LAB_0039319c;
        }
        goto LAB_003930e4;
      }
      uVar5 = 0;
/*  more drops soon - github.com/pengussy  */
      uVar4 = param_1[0x17];
    } while (uVar4 < (ulong)param_1[0x16]);
  }
  else {
    uVar5 = 1;
  }
LAB_003931dc:
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  func_0x003e9468(param_1[7]);
  param_1[7] = 0;
  lVar6 = param_1[3];
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 8))(param_1[5]);
  }
  if (param_1[4] != 0) {
    (**(code **)(param_1[4] + 8))(param_1[6]);
  }
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (param_1[0x11] != 0) {
    func_0x00392dc8(param_1);
  }
// origin: github.com/pengussy
  return uVar5;
}

