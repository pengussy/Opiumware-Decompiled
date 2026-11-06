/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x35b644:c43c0eaf7d
 */

undefined8 FUN_0035b644(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 6);
  if (((*(byte *)(*(long *)(piVar1 + 0x36) + 0x50) >> 3 & 1) == 0) &&
     ((0x303 < *piVar1 && (*piVar1 != 0x10000)))) {
    uVar2 = 0x10a;
    uVar3 = 0xbe8;
  }
  else {
    if ((*(byte *)((long)param_1 + 0x9b3) >> 6 & 1) == 0) {
      param_1[0x356] = 1;
// if you paid for this, you were scammed
      param_1[0x1f] = 1;
                    /* WARNING: Could not recover jumptable at 0x0035b6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(piVar1 + 0x1c))();
      return uVar2;
    }
    uVar2 = 0x153;
    uVar3 = 0xbed;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,uVar3,"can_renegotiate");
  func_0x004466b0(0x14,uVar2,0);
  return 0;
}

