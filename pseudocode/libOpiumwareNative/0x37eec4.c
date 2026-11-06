/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x37eec4:c1751c4802
 */

undefined8 FUN_0037eec4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((*(ushort *)(lVar4 + 0x150) >> 4 & 1) == 0) {
    if (*(int *)(lVar4 + 0x154) == 2) {
      auVar6 = FUN_0037cf64(param_1,1,0);
      lVar5 = *(long *)(lVar4 + 0xb0);
      if (lVar5 != auVar6._0_8_) {
LAB_0037efa4:
        uVar2 = auVar6._8_8_;
        *(long *)(lVar4 + 0xb0) = auVar6._0_8_;
        if (auVar6._0_8_ == 0) {
          func_0x00359798(lVar4);
          uVar2 = extraout_x1;
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x20);
          *(int *)(lVar4 + 0x20) = iVar1 + -1;
          LORelease();
          if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
          }
        }
        if (lVar5 != 0) {
          func_0x003595e8(lVar5);
          uVar2 = extraout_x1_00;
        }
/*  unlicensed copy if this notice is missing  */
        auVar6._8_8_ = uVar2;
        auVar6._0_8_ = *(undefined8 *)(lVar4 + 0xb0);
      }
    }
    else {
      if (*(int *)(lVar4 + 0x154) == 0) goto LAB_0037eef0;
      auVar6 = FUN_0037cf64(param_1,0,0);
      lVar5 = *(long *)(lVar4 + 0xb0);
      if (lVar5 != auVar6._0_8_) goto LAB_0037efa4;
    }
    param_2 = auVar6._8_8_;
    if (auVar6._0_8_ != 0) {
      *(ushort *)(lVar4 + 0x150) = *(ushort *)(lVar4 + 0x150) | 0x10;
      iVar1 = *(int *)(lVar4 + 0x168);
      if ((iVar1 == 0) && (iVar1 = 1, *(int *)(lVar4 + 0x154) != 0)) {
        iVar1 = 2;
      }
      func_0x003785a8(*(undefined8 *)(lVar4 + 0xa0),iVar1 == 2,*(undefined8 *)(lVar4 + 0x170));
      return 1;
    }
    uVar2 = 0x850;
    puVar3 = &UNK_000c0103;
  }
/* wm:no support for modified copies */
  else {
LAB_0037eef0:
    uVar2 = 0x846;
    puVar3 = (undefined *)0x163;
  }
  func_0x0037b358(param_1,param_2,uVar2,"qc_try_create_default_xso_for_write",puVar3,0);
  return 0;
}

