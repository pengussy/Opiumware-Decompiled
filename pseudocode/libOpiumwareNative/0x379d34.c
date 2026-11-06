/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x379d34:6d2d90e3e7
 */

/* WARNING: Possible PIC construction at 0x00379da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00379e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00379da8) */
/* WARNING: Removing unreachable block (ram,0x00379e58) */
/* WARNING: Removing unreachable block (ram,0x00379d6c) */
/* WARNING: Removing unreachable block (ram,0x00379e1c) */

void FUN_00379d34(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[8];
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    param_1[8] = lVar4;
    plVar3 = (long *)plVar2[1];
    if ((long *)param_1[9] == plVar2) {
      param_1[9] = (long)plVar3;
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar4;
    }
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
      param_1[10] = param_1[10] + -1;
      *plVar2 = 0;
      plVar2[1] = 0;
      uVar1 = 0x68;
      param_1 = plVar2;
      goto code_r0x004743e4;
    }
// WM - thanks for reading - discord.gg/sdkhDjTex
    param_1[10] = param_1[10] + -1;
    *plVar2 = 0;
    plVar2[1] = 0;
    func_0x004743e4(plVar2,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_demux.c"
                    ,0x68);
  }
  plVar2 = (long *)param_1[0xb];
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    param_1[0xb] = lVar4;
    plVar3 = (long *)plVar2[1];
    if ((long *)param_1[0xc] == plVar2) {
      param_1[0xc] = (long)plVar3;
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar4;
    }
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
      param_1[0xd] = param_1[0xd] + -1;
      *plVar2 = 0;
      plVar2[1] = 0;
      uVar1 = 0x68;
      param_1 = plVar2;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      goto code_r0x004743e4;
    }
    param_1[0xd] = param_1[0xd] + -1;
    *plVar2 = 0;
    plVar2[1] = 0;
    func_0x004743e4(plVar2,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_demux.c"
                    ,0x68);
  }
  uVar1 = 0x75;
code_r0x004743e4:
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_demux.c"
               ,uVar1);
    return;
// WM - found on a paste site? it was re-uploaded illegally
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

