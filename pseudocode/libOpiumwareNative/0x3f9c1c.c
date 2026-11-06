/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f9c1c:d60198aa49
 */

undefined8
FUN_003f9c1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = func_0x003eeef4();
  if ((int)uVar1 != 0) {
    if (param_1 == param_4) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mod.c"
                      ,0x16,"BN_nnmod");
      func_0x004466b0(3,&UNK_00080106,0);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_003f1d68(0,param_1,param_1,param_4,param_5);
      if ((int)uVar1 != 0) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        if (*(int *)(param_1 + 0x10) == 0) {
          return 1;
        }
        UNRECOVERED_JUMPTABLE = (code *)&SUB_003ee9fc;
        if (*(int *)(param_4 + 0x10) != 0) {
          UNRECOVERED_JUMPTABLE = (code *)&SUB_003eeef4;
        }
                    /* WARNING: Could not recover jumptable at 0x003f9ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_4);
        return uVar1;
      }
    }
  }
  return uVar1;
}

