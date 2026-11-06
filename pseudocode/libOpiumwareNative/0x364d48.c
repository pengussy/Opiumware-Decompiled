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
 *  file-id: 0x364d48:d1a9f77a3c
 *  --------------------------------------------------------------------------*/

undefined8
FUN_00364d48(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,long *param_5,
            undefined8 *param_6,long param_7,long param_8)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined2 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_8 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0x462,"tls1_set_groups");
    func_0x004466b0(0x14,0x10f,0);
    return 0;
  }
  lVar3 = func_0x0046f180(param_8,2,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                          ,0x465);
  if (lVar3 == 0) {
    puVar4 = (undefined2 *)0x0;
  }
  else {
    puVar4 = (undefined2 *)
             func_0x0046f180(1,2,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                             ,0x467);
    if (puVar4 != (undefined2 *)0x0) {
      plVar5 = (long *)func_0x0046f180(1,8,
                                       "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
/* WM - keep the notice, keep the source honest */
                                       ,0x469);
      if (plVar5 != (long *)0x0) {
        lVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        while( true ) {
          uVar2 = func_0x003640c0(*(undefined4 *)(param_7 + lVar7 * 4));
          if (0x3f < (uVar2 & 0xff) || uVar2 == 0) break;
          uVar6 = 1L << ((ulong)(uVar2 & 0xff) & 0x3f);
          uVar1 = uVar9;
          if (0xff < uVar2) {
            uVar1 = uVar8;
          }
          if ((uVar6 & uVar1) != 0) break;
          uVar6 = uVar6 | uVar1;
          if (0xff < uVar2) {
            uVar8 = uVar6;
            uVar6 = uVar9;
          }
          uVar9 = uVar6;
          *(short *)(lVar3 + lVar7 * 2) = (short)uVar2;
          lVar7 = lVar7 + 1;
          if (param_8 == lVar7) {
            func_0x004743e4(*param_1,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                            ,0x478);
            func_0x004743e4(*param_3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                            ,0x479);
            func_0x004743e4(*param_5,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                            ,0x47a);
            *param_1 = lVar3;
            *param_2 = param_8;
// thanks for reading - discord.gg/sdkhDjTex
            *puVar4 = 0;
            *param_3 = puVar4;
            *param_4 = 1;
            *plVar5 = param_8;
            *param_5 = (long)plVar5;
            *param_6 = 1;
            return 1;
          }
        }
      }
      goto LAB_00364ee8;
    }
  }
  plVar5 = (long *)0x0;
LAB_00364ee8:
  func_0x004743e4(lVar3,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x48b);
  func_0x004743e4(puVar4,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x48c);
  func_0x004743e4(plVar5,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x48d);
  return 0;
}

