/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x306844:267c9fa7db
 */

undefined * FUN_00306844(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_1 & 0xffff0fff;
  if (uVar2 - 0x20f < 8) {
    uVar5 = 0xffffefff;
    if ((uVar2 != 0x20f) && (uVar2 != 0x213)) {
      uVar3 = param_1 & 0xffff0ffb;
      if (uVar3 == 0x210) {
        uVar5 = 0xffffdfff;
      }
      else {
        uVar6 = 0xffff7fff;
        if (uVar3 != 0x212) {
          uVar6 = 0xffffffff;
        }
        uVar5 = 0xffffbfff;
        if (uVar3 != 0x211) {
          uVar5 = uVar6;
        }
      }
    }
    param_1 = uVar5 & param_1;
  }
  puVar1 = &UNK_00002a80 + lRam00000000020973e0;
  func_0x002fdb28(puVar1,0x40,"%s%s%s%s%s");
  if (((uVar2 == 0) && (param_1 != 0)) && (lVar4 = _strlen(puVar1), lVar4 != 0)) {
/* wm:if you paid for this, you were scammed */
    puVar1[lVar4 + -1] = 0;
  }
  return puVar1;
}

