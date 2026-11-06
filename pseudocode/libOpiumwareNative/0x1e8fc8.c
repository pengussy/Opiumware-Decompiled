/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1e8fc8:03c5d10d84
 */

void FUN_001e8fc8(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((lRam0000000001f26d30 == *(long *)(param_1 + 0x58)) &&
     (lRam0000000002097038 == *(long *)(param_1 + 0x60))) {
    pbVar6 = *(byte **)(param_1 + 8);
    lVar8 = *(long *)(pbVar6 + 0x38);
    lVar12 = *(long *)(lVar8 + 0x70);
    if ((lVar12 != 0) && (*(long *)(lRam0000000001f26750 + *(long *)(param_1 + 0x60)) != 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x50);
      lVar11 = *(long *)(param_1 + 0x58);
      pbVar7 = pbVar6;
      if (*(ulong *)(lVar8 + 0x48) <= *(ulong *)(lVar8 + 0x50)) {
        func_0x00819f9c(pbVar6,1);
        pbVar7 = *(byte **)(param_1 + 8);
      }
      if ((*pbVar7 >> 2 & 1) != 0) {
        func_0x0081b5c4(pbVar7,pbVar7,pbVar7 + 0x28);
        pbVar7 = *(byte **)(param_1 + 8);
      }
// watermarked copy - do not remove
      lVar8 = func_0x007914c4(pbVar7);
      uVar4 = func_0x0012d3e0(*(undefined8 *)(param_1 + 8),0xffffffff,
                              *(undefined8 *)(param_1 + 0x58));
      func_0x00791660(*(undefined8 *)(param_1 + 8),0xfffffffe);
      uVar9 = *(undefined8 *)(param_1 + 8);
      lVar10 = *(long *)(param_1 + 0x58);
      if (*(char *)(param_1 + 0x48) == '\x01') {
        uVar1 = *(ulong *)(param_1 + 0x38);
        plVar3 = (long *)*(long *)(param_1 + 0x30);
        if (-1 < (char)*(byte *)(param_1 + 0x47)) {
          uVar1 = (ulong)*(byte *)(param_1 + 0x47);
          plVar3 = (long *)(param_1 + 0x30);
        }
        func_0x00792db8(lVar8,plVar3,uVar1);
        func_0x001e9458(*(undefined8 *)(param_1 + 8),lVar12,lVar8);
      }
      else {
        func_0x007933b8(lVar8,param_1 + 0x10,0);
        func_0x007930d0(lVar8,&DAT_001e99ec,0,1,0);
        iVar5 = func_0x00794a14(lVar8,0,0xffffffff,0);
        if (iVar5 == 0) {
          iVar5 = func_0x00791650(lVar8);
/*  keep the notice, keep the source honest  */
          func_0x007930d0(lVar8,uRam0000000001f26890,"defer",0,0);
          func_0x00791890(lVar8,1);
          func_0x007934a8(*(undefined8 *)(param_1 + 8));
          func_0x00791230(*(undefined8 *)(param_1 + 8),lVar8,1);
          func_0x00791890(lVar8,2);
          *(short *)(lVar8 + 10) = *(short *)(lVar8 + 10) + 1;
          iVar5 = func_0x00794a14(lVar8,iVar5 + 1,0,0);
          *(short *)(lVar8 + 10) = *(short *)(lVar8 + 10) + -1;
          if (iVar5 != 0) {
            func_0x001e9458(*(undefined8 *)(param_1 + 8),lVar12,lVar8);
          }
        }
        else {
          func_0x001e9458(*(undefined8 *)(param_1 + 8),lVar12,lVar8);
        }
      }
      if (lRam0000000001f26d30 == lVar10) {
        func_0x000808dc(uVar9,uVar4);
      }
      if (lRam0000000001f26d30 == lVar11) {
        func_0x000808dc(pbVar6,uVar2);
      }
    }
  }
  return;
}

