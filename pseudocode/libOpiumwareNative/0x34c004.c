/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x34c004:0f8beaf745
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0034c04c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0034c050) */

void FUN_0034c004(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  uVar1 = func_0x004dc468(*param_1,&DAT_0034c448);
  func_0x004dcadc(uVar1,FUN_0034bf64);
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1[2],
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
               ,0x2a2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

