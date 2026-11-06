/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x31a47c:0b5196db8d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0031a47c(uint param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = lRam00000000020973e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((((&UNK_00002221)[lRam00000000020973e0] & 1) == 0) &&
     ((&UNK_00002222)[lRam00000000020973e0] != '\x01')) {
    pcVar4 = "##Tooltip_%02d";
    if ((param_1 >> 1 & 1) == 0) goto LAB_0031a5d8;
    lVar7 = *(long *)(&UNK_00002660 + lRam00000000020973e0);
  }
  else {
    uVar6 = *(uint *)(&UNK_00001ed0 + lRam00000000020973e0);
    if ((uVar6 & 1) == 0) {
      fVar9 = *(float *)(lRam00000000020973e0 + 0xda0);
      fVar10 = *(float *)(lRam00000000020973e0 + 0x104);
/*  do not claim this as your own  */
      if (*(int *)(lRam00000000020973e0 + 0x118) == 1) {
        fVar8 = fVar9 * 0.0;
        fVar9 = fVar9 * -20.0;
        uVar2 = _UNK_01adf188;
      }
      else {
        fVar8 = fVar9 * 16.0;
        fVar9 = fVar9 * 10.0;
        uVar2 = 0;
      }
      uVar6 = uVar6 | 1;
      *(float *)(&UNK_00001ee0 + lRam00000000020973e0) =
           *(float *)(lRam00000000020973e0 + 0x100) + fVar8;
      *(float *)(&UNK_00001ee4 + lVar1) = fVar10 + fVar9;
      *(undefined8 *)(&UNK_00001ee8 + lVar1) = uVar2;
      *(undefined4 *)(&UNK_00001ed4 + lVar1) = 1;
    }
    fVar9 = *(float *)(lVar1 + 0xdfc);
    *(uint *)(&UNK_00001ed0 + lVar1) = uVar6 | 0x40;
    *(float *)(&UNK_00001f38 + lVar1) = fVar9 * 0.6;
    pcVar4 = "##Tooltip_DragDrop_%02d";
    lVar7 = *(long *)(&UNK_00002660 + lVar1);
  }
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0xcc) == '\x01')) {
    uVar6 = *(uint *)(&UNK_00001478 + lVar1);
    if (0 < (int)uVar6) {
      plVar5 = (long *)(*(long *)(&UNK_00001480 + lVar1) + (ulong)uVar6 * 0x78);
      do {
        plVar5 = plVar5 + -0xf;
        if (*plVar5 == lVar7) goto LAB_0031a5d8;
        uVar6 = uVar6 - 1;
      } while (0 < (int)uVar6);
    }
    *(undefined1 *)(lVar7 + 0xd1) = 1;
    *(undefined1 *)(lVar7 + 0xd4) = 1;
    *(undefined1 *)(lVar7 + 0xeb) = 1;
    *(short *)(&UNK_0000265e + lVar1) = *(short *)(&UNK_0000265e + lVar1) + 1;
  }
// WM - donate: donate/README.md
LAB_0031a5d8:
  lStack_50 = (long)*(short *)(&UNK_0000265e + lVar1);
  func_0x002fdb28(auStack_48,0x20,pcVar4);
  FUN_0030ed68(auStack_48,0,param_2 | 0x2030347);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
    return 1;
  }
  uVar2 = ___stack_chk_fail();
  uVar3 = func_0x003060bc(0x1000);
  if ((int)uVar3 != 0) {
    FUN_0031a47c(2,0);
    func_0x0033ddf8(uVar2,&lStack_50);
    uVar3 = FUN_00314208();
  }
  return uVar3;
}

