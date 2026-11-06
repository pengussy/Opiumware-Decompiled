/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x34d008:f32768aa28
 */

undefined8
FUN_0034d008(int *param_1,undefined1 param_2,undefined8 param_3,undefined *param_4,
            undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 != 0) {
    return 0xffffffff;
  }
  iVar1 = func_0x003a934c();
  if ((iVar1 != 0) && (iVar1 = func_0x003a9624(param_1), iVar1 == 0)) {
    uVar3 = (**(code **)(param_1 + 0x1c))(param_1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if ((int)uVar3 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/d1_msg.c"
                      ,0x1b,"dtls1_write_app_data_bytes");
// WM - chat: discord.gg/sdkhDjTex
      uVar3 = 0xe5;
      goto LAB_0034d07c;
    }
  }
  if (param_4 < &UNK_00004001) {
    if ((undefined *)0x4000 < param_4) {
      func_0x019e6c2c();
      return 0xffffffff;
    }
    param_1[0x1a] = 1;
    if ((param_1[0x71] < 1) ||
       (uVar3 = (**(code **)(*(long *)(param_1 + 6) + 0x90))(param_1), 0 < (int)uVar3)) {
      if (param_4 == (undefined *)0x0) {
        return 0;
      }
      uVar2 = func_0x0035f01c(param_1);
      if ((undefined *)(uVar2 & 0xffffffff) < param_4) {
/*  proprietary - see LICENSE - do not sell  */
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_d1.c"
                        ,0x285,"do_dtls1_write");
        func_0x003a9570(param_1,0x50,0xc2,0);
        uVar3 = 0;
      }
      else {
        if ((**(int **)(param_1 + 6) == 0x1ffff) && (param_1[0x270] != 0x100)) {
          iStack_54 = 0xfeff;
        }
        else {
          iStack_54 = param_1[0x12];
        }
        auStack_58[0] = param_2;
        uStack_50 = param_3;
        puStack_48 = param_4;
        uVar3 = (**(code **)(*(long *)(param_1 + 0x38c) + 0x30))
                          (*(undefined8 *)(param_1 + 0x390),auStack_58,1);
        uVar3 = func_0x00394790(param_1,1,uVar3,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_d1.c"
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
                                ,0x298);
        if (0 < (int)uVar3) {
          *param_5 = param_4;
          return uVar3;
        }
      }
    }
    return uVar3;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/d1_msg.c"
                  ,0x21,"dtls1_write_app_data_bytes");
  uVar3 = 0x14e;
LAB_0034d07c:
  func_0x004466b0(0x14,uVar3,0);
  return 0xffffffff;
}

