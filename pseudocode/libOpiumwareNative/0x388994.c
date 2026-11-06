/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x388994:2aea892abe
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x003889d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003889d4) */

void FUN_00388994(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  func_0x00392bd4(param_1 + 4);
  func_0x00392bd4(param_1 + 7);
  if ((*(byte *)(param_1 + 10) >> 3 & 1) == 0) {
    pcVar1 = 
    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/ring_buf.h"
    ;
    uVar2 = 0x3c;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    func_0x00474404((undefined8 *)*param_1,param_1[1],
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/ring_buf.h"
                    ,0x3a);
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = 
    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sstream.c"
    ;
    uVar2 = 0x58;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
/* keep the notice, keep the source honest */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)(param_1,pcVar1,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

