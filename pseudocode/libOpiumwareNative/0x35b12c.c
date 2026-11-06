/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35b12c:6f169c076e
 */

ulong FUN_0035b12c(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_38 [8];
  
  if (((param_1 == (uint *)0x0) || (*param_1 != 0)) ||
     (param_1[0x2d] = (uint)(param_1[0x26] == 1), param_1[0x26] == 1)) {
    return 0;
  }
  uVar6 = param_1[0x3c];
  if (4 < (int)uVar6) {
    if (uVar6 == 5) goto LAB_0035b3ec;
    if ((uVar6 == 10) || (uVar6 == 0xc)) {
      param_1[0x3c] = 6;
      uVar1 = func_0x0035ad6c();
      if (0 < (int)uVar1) {
        func_0x003e95bc(*(undefined8 *)(param_1 + 0x16),0xb,0,0);
      }
      param_1[0x3c] = uVar6;
      return (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    }
LAB_0035b22c:
    func_0x004464bc();
    uVar5 = 0xb73;
LAB_0035b248:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,uVar5,"SSL_write_early_data");
    func_0x004466b0(0x14,&UNK_000c0101,0);
    param_1[0x2d] = 1;
    return 0;
  }
  if (uVar6 == 0) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    if (((param_1[0x1e] != 0) || (iVar2 = func_0x003a93d8(), iVar2 == 0)) ||
       (((*(long *)(param_1 + 0x240) == 0 || (*(int *)(*(long *)(param_1 + 0x240) + 0x344) == 0)) &&
        (*(long *)(param_1 + 0x262) == 0)))) {
      func_0x004464bc();
      uVar5 = 0xb3c;
      goto LAB_0035b248;
    }
LAB_0035b2c4:
    param_1[0x3c] = 2;
    if (*param_1 == 0) {
      uVar6 = 0;
      puVar3 = param_1;
LAB_0035b318:
      if (*(long *)(puVar3 + 0x1c) == 0) {
        puVar3 = param_1;
        if (uVar6 != 0) {
          puVar3 = (uint *)0x0;
        }
        param_1[0x1e] = 0;
        param_1[0x21] = 0;
/*  do not claim this as your own  */
        func_0x003a942c(puVar3);
        *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(*(long *)(param_1 + 6) + 0x48);
        func_0x00393378(param_1 + 900);
      }
      iVar2 = func_0x0035a434();
LAB_0035b378:
      if (0 < iVar2) goto LAB_0035b390;
    }
    else if ((*param_1 >> 7 & 1) != 0) {
      puVar3 = (uint *)func_0x00380678();
      uVar6 = *param_1;
      if ((uVar6 >> 7 & 1) != 0) {
        iVar2 = (**(code **)(*(long *)(param_1 + 6) + 0x48))();
        goto LAB_0035b378;
      }
      if (puVar3 != (uint *)0x0) goto LAB_0035b318;
    }
    uVar6 = 1;
  }
  else {
    if (uVar6 == 1) goto LAB_0035b2c4;
    if (uVar6 != 3) goto LAB_0035b22c;
LAB_0035b390:
    param_1[0x3c] = 4;
    uVar6 = param_1[0x26e];
    param_1[0x26e] = uVar6 & 0xfffffffe;
    iVar2 = func_0x0035ad6c(param_1,param_2,param_3,0,auStack_38);
    param_1[0x26e] = param_1[0x26e] | uVar6 & 1;
    if (0 < iVar2) {
      param_1[0x3c] = 5;
LAB_0035b3ec:
      uVar4 = func_0x003aa4a8();
      if ((int)uVar4 == 1) {
/* wm:more drops soon - github.com/pengussy */
        *param_4 = param_3;
        param_1[0x3c] = 3;
        return uVar4;
      }
      return 0;
    }
    uVar6 = 3;
  }
  param_1[0x3c] = uVar6;
  return 0;
}

