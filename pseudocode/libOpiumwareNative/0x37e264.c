/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x37e264:ea0868fe54
 */

void FUN_0037e264(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = iVar1 + -1;
  LORelease();
  if (iVar1 == 1) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar1) {
    return;
  }
  func_0x004dfbb0(param_1 + 2);
  func_0x0046e774(*param_1,&DAT_0037e2d8);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  func_0x0046e088(*param_1);
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
               ,0x1353);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

