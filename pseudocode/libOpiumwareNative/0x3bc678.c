/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3bc678:9adcbb2998
   =========================================================================== */

undefined8 FUN_003bc678(long param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2[2] != 0) {
    bVar3 = *(byte *)*param_2;
    uVar9 = (ulong)bVar3;
    uVar8 = param_2[2] - 1;
    if (uVar9 <= uVar8) {
      pbVar1 = (byte *)*param_2 + 1;
      pbVar2 = pbVar1 + uVar9;
      *param_2 = (long)pbVar2;
      lVar5 = uVar8 - uVar9;
      param_2[2] = lVar5;
      if (lVar5 != 0) {
        uVar8 = (ulong)*pbVar2;
        lVar4 = (lVar5 - 1U) - uVar8;
        if (uVar8 <= lVar5 - 1U) {
          *param_2 = (long)(pbVar2 + uVar8 + 1);
          param_2[2] = lVar4;
          if (lVar4 == 0) {
            func_0x004743e4(*(undefined8 *)(param_1 + 0xb08),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                            ,0x1e7);
            *(undefined8 *)(param_1 + 0xb08) = 0;
            if (bVar3 == 0) {
LAB_003bc720:
              *(ulong *)(param_1 + 0xb10) = uVar9;
              return 3;
            }
// do not claim this as your own
            lVar5 = func_0x00475ac0(pbVar1,uVar9,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                    ,0x1f0);
            *(long *)(param_1 + 0xb08) = lVar5;
            if (lVar5 != 0) goto LAB_003bc720;
            *(undefined8 *)(param_1 + 0xb10) = 0;
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,"ystem.B.dylib","tls_process_next_proto");
            uVar6 = 0x50;
            puVar7 = &UNK_000c0103;
            goto LAB_003bc760;
          }
        }
      }
    }
  }
  func_0x004464bc();
/* wm:unlicensed copy if this notice is missing */
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,"b/libSystem.B.dylib","tls_process_next_proto");
  uVar6 = 0x32;
  puVar7 = (undefined *)0x9f;
LAB_003bc760:
  func_0x003a9570(param_1,uVar6,puVar7,0);
  return 0;
}

