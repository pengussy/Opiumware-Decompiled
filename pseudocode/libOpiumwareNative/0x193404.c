/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x193404:5de20b699e
 */

undefined8 FUN_00193404(long *param_1,int *param_2,long param_3)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 uStack_61;
  undefined1 **ppuStack_60;
  undefined1 *puStack_58;
  long *plStack_50;
  undefined1 *puStack_48;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (param_1 + 10,(long)*(char *)((long)param_1 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      param_1[5] = param_1[5] + 1;
/* wm:origin: github.com/pengussy */
      param_1[4] = param_1[4] + 1;
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
        uVar3 = *(uint *)((long)param_1 + 0x14);
      }
      else {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 == (byte *)param_1[1]) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)*pbVar2;
          *param_1 = (long)(pbVar2 + 1);
        }
        *(uint *)((long)param_1 + 0x14) = uVar3;
      }
      if (uVar3 != 0xffffffff) {
        uStack_61 = (undefined1)uVar3;
        puStack_48 = (undefined1 *)param_1[8];
        ppuStack_60 = &puStack_48;
/* thanks for reading - discord.gg/sdkhDjTex */
        puStack_58 = &uStack_61;
        plStack_50 = param_1 + 7;
        if (puStack_48 < (undefined1 *)param_1[9]) {
          *puStack_48 = uStack_61;
          param_1[8] = (long)(puStack_48 + 1);
          uVar3 = *(uint *)((long)param_1 + 0x14);
        }
        else {
          func_0x0003b960(&ppuStack_60);
          param_1[8] = (long)puStack_48;
          uVar3 = *(uint *)((long)param_1 + 0x14);
        }
        if (uVar3 == 10) {
          param_1[5] = 0;
          param_1[6] = param_1[6] + 1;
          uVar3 = 10;
        }
      }
      if (((int)uVar3 < *param_2) || (param_2[1] < (int)uVar3)) {
        param_1[0xd] = (long)"invalid string: ill-formed UTF-8 byte";
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 10,(int)(char)uVar3);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}

