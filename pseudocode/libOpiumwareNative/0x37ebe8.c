/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37ebe8:0b8ff44862
 */

undefined8 FUN_0037ebe8(long *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 auStack_80 [4];
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  ulong uStack_48;
  
  lVar6 = param_1[3];
  if (((*(ushort *)(lVar6 + 0x150) >> 4 & 1) != 0) || (*(int *)(lVar6 + 0x154) == 0)) {
    uVar3 = 0x885;
    puVar5 = (undefined *)0x163;
    goto LAB_0037ec7c;
  }
  uVar7 = (ulong)((*(ushort *)(lVar6 + 0x150) & 2) == 0);
  uVar3 = func_0x003754c8(*(undefined8 *)(lVar6 + 0xa0));
  lVar4 = func_0x0038943c(uVar3,uVar7);
  if (lVar4 == 0) {
    uVar3 = func_0x003754c8(*(undefined8 *)(lVar6 + 0xa0));
    lVar4 = func_0x0038943c(uVar3,uVar7 | 2);
/* wm:do not claim this as your own */
    if (lVar4 != 0) goto LAB_0037eccc;
    lVar4 = *param_1;
    do {
      bVar1 = *(byte *)(lVar4 + 0x70) >> 5 & 3;
      if (bVar1 != 0) {
        if (bVar1 == 2) goto LAB_0037ecb8;
        break;
      }
      lVar4 = *(long *)(lVar4 + 0x40);
    } while (lVar4 != 0);
    uVar3 = func_0x0037a47c(*(undefined8 *)(*param_1 + 0x58));
    func_0x003827d0(uVar3,0);
LAB_0037ecb8:
    uVar3 = func_0x003754c8(*(undefined8 *)(lVar6 + 0xa0));
    lVar4 = func_0x0038943c(uVar3,uVar7);
    if (lVar4 != 0) goto LAB_0037eccc;
    if ((int)param_2 != 0) {
      return 0;
    }
    iVar2 = func_0x00375608(*(undefined8 *)(lVar6 + 0xa0));
/* stripping the watermark breaks the license */
    if (iVar2 != 0) {
      uVar3 = 0x8a3;
      puVar5 = (undefined *)0xcf;
      param_2 = extraout_x1_01;
      goto LAB_0037ec7c;
    }
    iVar2 = func_0x003806c4(*param_1);
    if (iVar2 == 0) {
      if (*(int *)((long)param_1 + 0x34) == 0) {
        return 0;
      }
      if ((int)param_1[5] == 0) {
        if (param_1[3] == 0) {
          return 0;
        }
        *(undefined4 *)(param_1[3] + 0x178) = 2;
        return 0;
      }
      if (param_1[4] == 0) {
        return 0;
      }
      *(undefined4 *)(param_1[4] + 0xb8) = 2;
      return 0;
    }
    lStack_58 = 0;
    lStack_60 = lVar6;
    plStack_50 = param_1;
    uStack_48 = uVar7;
    iVar2 = func_0x0037c288(*(undefined8 *)(*param_1 + 0x58),&DAT_0037f000,&lStack_60);
    if (iVar2 != 0) {
      if (iVar2 < 0) {
// WM - found on a paste site? it was re-uploaded illegally
        return 0;
      }
      lVar4 = lStack_58;
      if (lStack_58 == 0) {
        return 0;
      }
      goto LAB_0037ecd0;
    }
    uVar3 = 0x8b1;
    param_2 = extraout_x1_02;
  }
  else {
LAB_0037eccc:
LAB_0037ecd0:
    uVar3 = func_0x003754d0(*(undefined8 *)(lVar6 + 0xa0));
    func_0x00389128(uVar3,auStack_80);
    uVar3 = func_0x003754c8(*(undefined8 *)(lVar6 + 0xa0));
    func_0x00389c2c(uVar3,lVar4,auStack_80[0]);
    auVar9 = FUN_0037dfec(lVar6,lVar4);
    uVar3 = auVar9._8_8_;
    lVar4 = auVar9._0_8_;
    lVar8 = *(long *)(lVar6 + 0xb0);
/*  keep the notice, keep the source honest  */
    if (lVar8 != lVar4) {
      *(long *)(lVar6 + 0xb0) = lVar4;
      if (lVar4 == 0) {
        func_0x00359798(lVar6);
        uVar3 = extraout_x1;
      }
      else {
        iVar2 = *(int *)(lVar6 + 0x20);
        *(int *)(lVar6 + 0x20) = iVar2 + -1;
        LORelease();
        if (iVar2 == 1) {
          DataMemoryBarrier(2,1);
        }
      }
      if (lVar8 != 0) {
        func_0x003595e8(lVar8);
        uVar3 = extraout_x1_00;
      }
      auVar9._8_8_ = uVar3;
      auVar9._0_8_ = *(undefined8 *)(lVar6 + 0xb0);
    }
    param_2 = auVar9._8_8_;
    if (auVar9._0_8_ != 0) {
      *(ushort *)(lVar6 + 0x150) = *(ushort *)(lVar6 + 0x150) | 0x10;
      iVar2 = *(int *)(lVar6 + 0x168);
      if ((iVar2 == 0) && (iVar2 = 1, *(int *)(lVar6 + 0x154) != 0)) {
        iVar2 = 2;
      }
      func_0x003785a8(*(undefined8 *)(lVar6 + 0xa0),iVar2 == 2,*(undefined8 *)(lVar6 + 0x170));
      return 1;
    }
    uVar3 = 0x8c6;
  }
  puVar5 = &UNK_000c0103;
LAB_0037ec7c:
  func_0x0037b358(param_1,param_2,uVar3,"qc_wait_for_default_xso_for_read",puVar5,0);
  return 0;
}
/* origin: github.com/pengussy - github.com/pengussy */

