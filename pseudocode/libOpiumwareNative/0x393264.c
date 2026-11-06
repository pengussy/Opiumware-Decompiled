/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x393264:5c7b5aa197
 */

undefined8 FUN_00393264(long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*param_2 == 0) {
    if ((param_3 == 0) || (lVar3 = param_2[4], param_3 == lVar3)) {
      func_0x004743e4(param_2[3],
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                      ,0x248);
      param_2[3] = 0;
      *(long *)(param_1 + 0xec8) = *(long *)(param_1 + 0xec8) + 1;
      lVar3 = param_2[4];
    }
  }
  else {
    if (param_3 == 0) {
      param_3 = param_2[4];
    }
    uVar2 = (**(code **)(*(long *)(param_1 + 0xe28) + 0x48))
                      (*(undefined8 *)(param_1 + 0xe38),*param_2,param_3);
    iVar1 = func_0x00394790(param_1,0,uVar2,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                            ,0x23e);
    if (iVar1 < 1) {
      return 0;
    }
    lVar3 = param_2[4];
    if (param_3 == lVar3) {
      *(long *)(param_1 + 0xec8) = *(long *)(param_1 + 0xec8) + 1;
      param_2[4] = 0;
      goto LAB_0039332c;
    }
  }
  param_2[4] = lVar3 - param_3;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  if (lVar3 - param_3 != 0) {
    param_2[5] = param_2[5] + param_3;
    return 1;
  }
LAB_0039332c:
  param_2[5] = 0;
  return 1;
}

