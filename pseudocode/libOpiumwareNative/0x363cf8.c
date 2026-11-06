/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x363cf8:123c7161bb
 */

undefined8 FUN_00363cf8(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = func_0x0047b504(*param_1,&DAT_00363dd8,param_1);
  if ((int)uVar2 != 0) {
    if (param_1[0xda] != 0) {
      func_0x004743e4(param_1[0x2c],
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0x2c1);
      lVar3 = func_0x0046f1f4(param_1[0xda],8,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x2c2);
      param_1[0x2c] = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      if (param_1[0xda] != 0) {
        lVar6 = 0;
        lVar3 = 0;
        uVar7 = 0;
        do {
          lVar5 = param_1[0xd9] + lVar6;
/* no support for modified copies */
          lVar4 = *(long *)(lVar5 + 0x40);
          if ((lVar4 == 0) && (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0)) {
            lVar4 = *(long *)(param_1[0xd9] + lVar6 + 0x10);
          }
          uVar1 = func_0x004a0f94(lVar4);
          lVar5 = param_1[0x2c];
          *(undefined4 *)(lVar5 + lVar3) = uVar1;
          ((undefined4 *)(lVar5 + lVar3))[1] = 0;
          uVar7 = uVar7 + 1;
          lVar3 = lVar3 + 8;
          lVar6 = lVar6 + 0x68;
        } while (uVar7 < (ulong)param_1[0xda]);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

