/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3f9efc:d1b8688276
 */

undefined8 FUN_003f9efc(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_003f1890(param_5);
  lVar3 = FUN_003f1a40(param_5);
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = func_0x003ff218(lVar3,param_2,param_5);
    }
    else {
      iVar2 = func_0x003fb99c(lVar3,param_2,param_3,param_5);
    }
    if (iVar2 != 0) {
      if (param_1 == param_4) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mod.c"
                        ,0x16,"BN_nnmod");
        func_0x004466b0(3,&UNK_00080106,0);
      }
      else {
        iVar2 = func_0x003f1d68(0,param_1,lVar3,param_4,param_5);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            pcVar1 = (code *)&SUB_003ee9fc;
            if (*(int *)(param_4 + 0x10) != 0) {
              pcVar1 = (code *)&SUB_003eeef4;
            }
            iVar2 = (*pcVar1)(param_1,param_1,param_4);
            if (iVar2 == 0) goto LAB_003f9ffc;
          }
          uVar4 = 1;
          goto LAB_003fa000;
        }
      }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    }
  }
LAB_003f9ffc:
  uVar4 = 0;
LAB_003fa000:
  func_0x003f19bc(param_5);
  return uVar4;
}

