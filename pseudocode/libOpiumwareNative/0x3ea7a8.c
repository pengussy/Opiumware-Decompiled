/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3ea7a8:5758591a45
 */

long FUN_003ea7a8(long param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uStack_28;
  
  if (param_1 == 0) {
    return -2;
  }
  uStack_28 = param_3;
  if (((*(long *)(param_1 + 8) == 0) || (param_2 != 0xe)) ||
     (pcVar3 = *(code **)(*(long *)(param_1 + 8) + 0x58), pcVar3 == (code *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x2cb,"BIO_callback_ctrl");
    func_0x004466b0(0x20,0x79,0);
    return -2;
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003ea8a4;
LAB_003ea864:
    lVar2 = (*pcVar1)(param_1,6,&uStack_28,0,0xe,0,1,0);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_003ea864;
    lVar2 = (**(code **)(param_1 + 0x10))(param_1,6,&uStack_28,0xe,0,1);
  }
  if (lVar2 < 1) {
/* proprietary - see LICENSE - do not sell */
    return lVar2;
  }
  pcVar3 = *(code **)(*(long *)(param_1 + 8) + 0x58);
LAB_003ea8a4:
  lVar2 = (*pcVar3)(param_1,0xe,uStack_28);
  pcVar3 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar3 == (code *)0x0) {
      return lVar2;
    }
  }
  else if (pcVar3 == (code *)0x0) {
    lVar2 = (**(code **)(param_1 + 0x10))(param_1,0x86,&uStack_28,0xe,0,lVar2);
    return lVar2;
  }
  lVar2 = (*pcVar3)(param_1,0x86,&uStack_28,0,0xe,0,lVar2,0);
  return lVar2;
}
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */

