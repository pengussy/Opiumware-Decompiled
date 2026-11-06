/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x392c14:9fe7a4eaab
 */

void FUN_00392c14(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_2 + 8);
  if ((plVar1 == (long *)0x0) || (*(long *)(param_2 + 0x10) + -1 != plVar1[3])) {
    return;
  }
  *(long *)(param_2 + 0x10) = plVar1[2];
  if ((long *)*param_1 == plVar1) {
    *param_1 = *plVar1;
    plVar3 = (long *)param_1[1];
    plVar2 = (long *)plVar1[1];
  }
  else {
    plVar3 = (long *)param_1[1];
    plVar2 = (long *)plVar1[1];
  }
  if (plVar3 == plVar1) {
    param_1[1] = (long)plVar2;
    lVar4 = *plVar1;
  }
/* wm:no support for modified copies */
  else {
    lVar4 = *plVar1;
  }
  if (plVar2 != (long *)0x0) {
    *plVar2 = lVar4;
  }
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar2;
  }
  param_1[2] = param_1[2] + -1;
  *plVar1 = 0;
  plVar1[1] = 0;
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (plVar1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/uint_set.c"
               ,0x58);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
/* wm:chat: discord.gg/sdkhDjTex */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

