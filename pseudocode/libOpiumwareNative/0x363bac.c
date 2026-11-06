/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x363bac:3208e9f5eb
 */

void FUN_00363bac(uint *param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = param_1;
    if ((*param_1 == 0) ||
       (((*param_1 >> 7 & 1) != 0 &&
        (puVar1 = (uint *)func_0x00380678(param_1), puVar1 != (uint *)0x0)))) {
      func_0x004743e4(*(undefined8 *)(puVar1 + 0x2b4),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0x7c);
      if (param_1 != (uint *)0x0) {
        if ((*param_1 == 0) ||
           (((*param_1 >> 7 & 1) != 0 &&
            (param_1 = (uint *)func_0x00380678(param_1), param_1 != (uint *)0x0)))) {
          func_0x0034d494(param_1);
          func_0x0045eb4c(*(undefined8 *)(param_1 + 0x138));
          param_1[0x138] = 0;
          param_1[0x139] = 0;
          uVar2 = *(ulong *)(param_1 + 0xce);
          if (uVar2 != 0) {
            uVar3 = 0;
            do {
              if (*(long *)(param_1 + uVar3 * 2 + 0xc4) != 0) {
                if (*(long *)(param_1 + 0xc2) == *(long *)(param_1 + uVar3 * 2 + 0xc4)) {
                  param_1[0xc2] = 0;
                  param_1[0xc3] = 0;
                }
                func_0x0045eb4c();
                (param_1 + uVar3 * 2 + 0xc4)[0] = 0;
                (param_1 + uVar3 * 2 + 0xc4)[1] = 0;
/* donate: donate/README.md */
                uVar2 = *(ulong *)(param_1 + 0xce);
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < uVar2);
          }
          param_1[0xce] = 0;
          param_1[0xcf] = 0;
          if (*(long *)(param_1 + 0xc2) != 0) {
            func_0x0045eb4c();
            param_1[0xc2] = 0;
            param_1[0xc3] = 0;
          }
          func_0x0035cbec(*(undefined8 *)(param_1 + 0xdc));
          func_0x0035cbb4(*(undefined8 *)(param_1 + 0xde));
          func_0x004743e4(*(undefined8 *)(param_1 + 0xd2),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,0xf0f);
          func_0x004dcadc(*(undefined8 *)(param_1 + 0xd6),&SUB_005044a0);
          func_0x004743e4(*(undefined8 *)(param_1 + 0xe8),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,0xf11);
          func_0x00474404(*(undefined8 *)(param_1 + 0xec),*(undefined8 *)(param_1 + 0xee),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,0xf12);
          func_0x004743e4(*(undefined8 *)(param_1 + 0xf8),
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,0xf13);
          func_0x004743e4(*(undefined8 *)(param_1 + 0xfa),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,0xf14);
          func_0x004743e4(*(undefined8 *)(param_1 + 0x102),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,0xf15);
          func_0x0034d578(param_1);
          func_0x004743e4(*(undefined8 *)(param_1 + 0x12e),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,0xf17);
          func_0x004743e4(*(undefined8 *)(param_1 + 0x132),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,0xf18);
          func_0x0038a160(*(undefined8 *)(param_1 + 0x56));
          func_0x004743e4(*(undefined8 *)(param_1 + 0xf0),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,0xf1c);
          FUN_0036dfa8(param_1);
                    /* WARNING: Could not recover jumptable at 0x01a175d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__bzero_01f24870)(param_1 + 0x58,0x390);
          return;
        }
      }
      return;
    }
  }
  return;
}

