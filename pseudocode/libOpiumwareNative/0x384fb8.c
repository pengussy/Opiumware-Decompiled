/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x384fb8:9795112791
 */

/* WARNING: Possible PIC construction at 0x00384fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00385034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00384ff0) */
/* WARNING: Removing unreachable block (ram,0x00385038) */

void FUN_00384fb8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x388);
  if (lVar2 == 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x370);
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      func_0x004743e4(plVar1,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_tx.c"
                      ,0x8c);
      plVar1 = (long *)lVar2;
    }
    lVar2 = *(long *)(param_1 + 0x3b0);
    uVar3 = 0x9b;
  }
  else {
// thanks for reading - discord.gg/sdkhDjTex
    uVar3 = 0x8c;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (lVar2,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_tx.c"
               ,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

