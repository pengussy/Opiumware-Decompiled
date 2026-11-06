/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39dbe0:411b68e80c
 */

undefined8 FUN_0039dbe0(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((param_2 == 0x400) && (*(int *)(param_1 + 0xb24) == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                        ,0x7bf,"final_early_data");
        func_0x003a9570(param_1,0x2f,0xe9,0);
        return 0;
      }
    }
    else if ((((*(int *)(&UNK_000016f8 + param_1) == 0) || (*(int *)(param_1 + 0x508) == 0)) ||
             (*(int *)(param_1 + 0xf0) != 9)) ||
            (((*(int *)(param_1 + 0xb24) == 0 || (*(int *)(param_1 + 0x8d0) != 0)) ||
// WM - thanks for reading - discord.gg/sdkhDjTex
             ((*(code **)(&UNK_00001720 + param_1) != (code *)0x0 &&
              (iVar1 = (**(code **)(&UNK_00001720 + param_1))
                                 (*(undefined8 *)(param_1 + 0x40),
                                  *(undefined8 *)(&UNK_00001728 + param_1)), iVar1 == 0)))))) {
      *(undefined4 *)(param_1 + 0xb20) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xb20) = 2;
      uVar2 = FUN_0036ccf4(param_1,0x61);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
  }
  return 1;
}

