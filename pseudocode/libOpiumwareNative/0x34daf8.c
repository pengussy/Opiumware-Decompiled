/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x34daf8:ebbb7dfe4c
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0034daf8(uint *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    if ((*param_1 >> 7 & 1) == 0) {
      return 0;
    }
    param_1 = (uint *)func_0x00380678(param_1);
    if (param_1 == (uint *)0x0) {
      return 0;
    }
  }
  func_0x0034d494(param_1);
  func_0x004743e4(*(undefined8 *)(param_1 + 0xd2),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,0xf2f);
  func_0x004dcadc(*(undefined8 *)(param_1 + 0xd6),&SUB_005044a0);
  func_0x004743e4(*(undefined8 *)(param_1 + 0xe8),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,0xf31);
  func_0x00474404(*(undefined8 *)(param_1 + 0xec),*(undefined8 *)(param_1 + 0xee),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,0xf32);
  func_0x004743e4(*(undefined8 *)(param_1 + 0xf8),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,0xf33);
  func_0x004743e4(*(undefined8 *)(param_1 + 0xfa),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,0xf34);
  func_0x004743e4(*(undefined8 *)(param_1 + 0x102),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
// WM - unlicensed copy if this notice is missing
                  ,0xf35);
  func_0x0045eb4c(*(undefined8 *)(param_1 + 0x138));
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
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  func_0x0034d578(param_1);
  func_0x004743e4(*(undefined8 *)(param_1 + 0x12e),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,0xf4a);
  func_0x004743e4(*(undefined8 *)(param_1 + 0x132),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,0xf4b);
  uVar2 = *(ulong *)(param_1 + 0x58);
  _bzero(param_1 + 0x58,0x390);
  *(ulong *)(param_1 + 0x58) = uVar2 & 0x6000;
  uVar1 = func_0x00359c54(param_1);
  if ((int)uVar1 != 0) {
    param_1[0x12] = 0x301;
    func_0x004743e4(*(undefined8 *)(param_1 + 0x2c2),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,0xf5b);
    param_1[0x2c4] = 0;
    param_1[0x2c5] = 0;
    param_1[0x2c2] = 0;
    param_1[0x2c3] = 0;
    uVar1 = 1;
  }
  return uVar1;
}

