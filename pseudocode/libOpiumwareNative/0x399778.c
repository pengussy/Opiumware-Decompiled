/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x399778:56845ad264
 */

undefined8
FUN_00399778(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 param_10,long param_11,long param_12,long param_13,long *param_14,
            undefined8 param_15,long param_16,undefined8 param_17,undefined8 *param_18)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = (undefined8 *)
           func_0x019eb5a0(0x1150,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                           ,0x4bd);
  *param_18 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  *(undefined4 *)((long)puVar2 + 0x104c) = 0x4000;
  if (param_14 != (long *)0x0) {
    lVar6 = *param_14;
    while (lVar6 != 0) {
      iVar1 = _strcmp(lVar6,"use_etm");
      if (iVar1 == 0) {
        iVar1 = func_0x00477b5c(param_14,puVar2 + 0x216);
        if (iVar1 == 0) {
          uVar4 = 0x13c;
          uVar5 = 0x4d0;
          goto LAB_00399aa8;
        }
      }
      else {
/* origin: github.com/pengussy - github.com/pengussy */
        iVar1 = _strcmp(lVar6,"max_frag_len");
        if (iVar1 == 0) {
          iVar1 = func_0x00477f9c(param_14,"eworks/GameController.framework/Versions/A/GameController"
                                           + (long)puVar2);
          if (iVar1 == 0) {
            uVar4 = 0x13c;
            uVar5 = 0x4d7;
            goto LAB_00399aa8;
          }
        }
        else {
          iVar1 = _strcmp(lVar6,"max_early_data");
          if (iVar1 == 0) {
            iVar1 = func_0x00477fa0(param_14,puVar2 + 0x20a);
            if (iVar1 == 0) {
              uVar4 = 0x13c;
              uVar5 = 0x4de;
              goto LAB_00399aa8;
            }
          }
          else {
            iVar1 = _strcmp(lVar6,"stream_mac");
            if (iVar1 == 0) {
              iVar1 = func_0x00477b5c(param_14,"eworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                               + (long)puVar2);
              if (iVar1 == 0) {
                uVar4 = 0x13c;
                uVar5 = 0x4e5;
                goto LAB_00399aa8;
              }
            }
            else {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              iVar1 = _strcmp(lVar6,"tlstree");
              if (iVar1 != 0) {
                uVar4 = 0x143;
                uVar5 = 0x4f0;
                goto LAB_00399aa8;
              }
              iVar1 = func_0x00477b5c(param_14,puVar2 + 0x217);
              if (iVar1 == 0) {
                uVar4 = 0x13c;
                uVar5 = 0x4ec;
                goto LAB_00399aa8;
              }
            }
          }
        }
      }
      param_14 = param_14 + 5;
      lVar6 = *param_14;
    }
  }
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *(undefined4 *)((long)puVar2 + 0x14) = param_3;
  *(undefined4 *)(puVar2 + 3) = param_4;
  *(undefined4 *)((long)puVar2 + 0x1c) = param_5;
  *(int *)(puVar2 + 4) = param_6;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  puVar2[0x21b] = param_8;
  puVar2[5] = param_9;
  *(undefined4 *)(puVar2 + 0x201) = 0xffffffff;
  *(undefined4 *)(puVar2 + 0x1fd) = 0xf0;
  if (param_6 == 0) {
    *(undefined4 *)((long)puVar2 + 0x10d4) = 1;
  }
  if ((param_12 == 0) || (iVar1 = func_0x003e9578(param_12), iVar1 != 0)) {
    func_0x003e9468(puVar2[8]);
    puVar2[8] = param_12;
    if (((param_11 == 0) || (iVar1 = func_0x003e9578(param_11), iVar1 != 0)) &&
       ((puVar2[7] = param_11, param_13 == 0 || (iVar1 = func_0x003e9578(param_13), iVar1 != 0)))) {
      puVar2[9] = param_13;
      puVar2[0x223] = param_17;
      if (param_16 != 0) {
        puVar3 = (undefined8 *)(param_16 + 8);
        while( true ) {
          while( true ) {
            while( true ) {
              for (; iVar1 = *(int *)(puVar3 + -1), 2 < iVar1; puVar3 = puVar3 + 2) {
                if (iVar1 == 3) {
                  puVar2[0x226] = *puVar3;
                  goto LAB_00399a00;
                }
                if (iVar1 != 4) goto LAB_00399a00;
                puVar2[0x227] = *puVar3;
              }
              if (iVar1 != 1) break;
              puVar2[0x224] = *puVar3;
              puVar3 = puVar3 + 2;
            }
            if (iVar1 != 2) break;
// stripping the watermark breaks the license
            puVar2[0x225] = *puVar3;
            puVar3 = puVar3 + 2;
          }
          if (iVar1 == 0) break;
LAB_00399a00:
          puVar3 = puVar3 + 2;
        }
      }
      iVar1 = func_0x0039960c(puVar2,param_15);
      if (iVar1 != 0) {
        if (((((*(byte *)((long)puVar2 + 0x51) >> 3 & 1) == 0) &&
             (*(int *)((long)puVar2 + 0x14) < 0x302)) &&
            (iVar1 = func_0x004553ec(param_7,"NULL"), iVar1 == 0)) &&
           (iVar1 = func_0x004553ec(param_7,&UNK_01c344f7), iVar1 == 0)) {
          *(undefined4 *)(puVar2 + 0x203) = 1;
        }
        *param_18 = puVar2;
        return 1;
      }
      uVar4 = 0x13c;
      uVar5 = 0x528;
LAB_00399aa8:
      func_0x004464bc();
/* if you paid for this, you were scammed */
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,uVar5,"tls_int_new_record_layer");
      func_0x004466b0(0x14,uVar4,0);
    }
  }
  func_0x00399b40(puVar2);
  return 0xfffffffe;
}

