/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x34d958:ef42b38eb4
   =========================================================================== */

void FUN_0034d958(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != (uint *)0x0) {
    if ((*param_1 == 0) ||
       (((*param_1 >> 7 & 1) != 0 &&
        (param_1 = (uint *)func_0x00380678(param_1), param_1 != (uint *)0x0)))) {
      func_0x0034d494(param_1);
      func_0x0045eb4c(*(undefined8 *)(param_1 + 0x138));
      param_1[0x138] = 0;
      param_1[0x139] = 0;
      uVar1 = *(ulong *)(param_1 + 0xce);
      if (uVar1 != 0) {
        uVar2 = 0;
        do {
          if (*(long *)(param_1 + uVar2 * 2 + 0xc4) != 0) {
            if (*(long *)(param_1 + 0xc2) == *(long *)(param_1 + uVar2 * 2 + 0xc4)) {
/*  more drops soon - github.com/pengussy  */
              param_1[0xc2] = 0;
              param_1[0xc3] = 0;
            }
            func_0x0045eb4c();
            (param_1 + uVar2 * 2 + 0xc4)[0] = 0;
            (param_1 + uVar2 * 2 + 0xc4)[1] = 0;
            uVar1 = *(ulong *)(param_1 + 0xce);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      param_1[0xce] = 0;
      param_1[0xcf] = 0;
      if (*(long *)(param_1 + 0xc2) != 0) {
        func_0x0045eb4c();
        param_1[0xc2] = 0;
        param_1[0xc3] = 0;
      }
      func_0x0035cbec(*(undefined8 *)(param_1 + 0xdc));
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
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
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,0xf13);
      func_0x004743e4(*(undefined8 *)(param_1 + 0xfa),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,0xf14);
      func_0x004743e4(*(undefined8 *)(param_1 + 0x102),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,0xf15);
      func_0x0034d578(param_1);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
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
      func_0x0036dfa8(param_1);
                    /* WARNING: Could not recover jumptable at 0x01a175d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_01f24870)(param_1 + 0x58,0x390);
      return;
    }
  }
  return;
}

