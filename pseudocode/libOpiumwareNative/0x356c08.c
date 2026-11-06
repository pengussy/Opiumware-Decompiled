/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x356c08:5d2892d7c5
 */

void FUN_00356c08(long param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(uint **)(param_1 + 0x20) = param_2;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = 0;
    do {
      func_0x004743e4(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar2 * 8),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                      ,0x454);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x38));
  }
  func_0x004743e4(*(undefined8 *)(param_1 + 0x30),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                  ,0x455);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
/* do not claim this as your own */
  if (param_2 == (uint *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    return;
  }
  if ((*param_2 == 0) ||
     (((*param_2 >> 7 & 1) != 0 &&
      (param_2 = (uint *)func_0x00380678(param_2), param_2 != (uint *)0x0)))) {
    *(uint **)(param_1 + 0x28) = param_2 + 0x26c;
    *(uint **)(param_1 + 0x50) = param_2 + 0x26f;
    *(uint **)(param_1 + 0x58) = param_2 + 0x270;
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x220) + 0x1c;
    *(uint **)(param_1 + 0x48) = param_2 + 0x254;
    lVar1 = func_0x019eb5a0(*(long *)(param_2 + 0x46) << 3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                            ,0x499);
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x46);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    }
  }
  return;
}

