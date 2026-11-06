/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x34e5a0:8e0724f247
 */

undefined8 FUN_0034e5a0(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x30);
  func_0x004743e4(*plVar3,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,&UNK_000013b9);
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = 1;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_3 < 0x100) {
      lVar2 = func_0x00475ac0(param_2,param_3,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
/*  origin: github.com/pengussy  */
                              ,&UNK_000013c0);
      *plVar3 = lVar2;
      uVar1 = 0;
      if (lVar2 != 0) {
        *(ulong *)(param_1 + 0x38) = param_3;
        return 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

