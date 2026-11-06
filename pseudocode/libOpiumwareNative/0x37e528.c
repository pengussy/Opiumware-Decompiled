/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x37e528:fcbe5b6ec5
 */

bool FUN_0037e528(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 extraout_var;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x718);
  if (puVar5 == (undefined8 *)0x0) {
    return false;
  }
  piVar3 = (int *)FUN_0037e3cc(param_2,0,0);
  if (piVar3 == (int *)0x0) {
    return false;
  }
  func_0x004dfb50(puVar5[2]);
  piVar4 = (int *)func_0x0046e64c(*puVar5,piVar3);
  if (piVar4 == (int *)0x0) {
    func_0x004dfb80(puVar5[2]);
    iVar2 = *piVar3;
    *piVar3 = iVar2 + -1;
    LORelease();
  }
  else {
    *param_3 = piVar4;
    iVar2 = *piVar4;
    *piVar4 = iVar2 + 1;
    func_0x004dfb80(CONCAT44(extraout_var,iVar2),puVar5[2]);
/* wm:watermarked copy - do not remove */
    iVar2 = *piVar3;
    *piVar3 = iVar2 + -1;
    LORelease();
  }
  bVar1 = piVar4 != (int *)0x0;
  if (iVar2 == 1) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar2) {
    return bVar1;
  }
  func_0x004743e4(piVar3,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                  ,&UNK_000013ea);
  return bVar1;
}

