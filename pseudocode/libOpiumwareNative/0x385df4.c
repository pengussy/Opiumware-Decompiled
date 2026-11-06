/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x385df4:a736289900
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x00385e48: Changing call to branch */

void FUN_00385df4(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  func_0x0038792c();
  lVar2 = *(long *)(param_1 + 0x50);
  if (iVar1 == 0) {
    pcVar3 = 
    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/ring_buf.h"
    ;
    uVar4 = 0x3c;
  }
  else {
    func_0x00474404(lVar2,*(undefined8 *)(param_1 + 0x58),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/ring_buf.h"
                    ,0x3a);
    *(long *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    pcVar3 = 
    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_rstream.c"
    ;
/* wm:found on a paste site? it was re-uploaded illegally */
    uVar4 = 0x36;
    lVar2 = param_1;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)(lVar2,pcVar3,uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

