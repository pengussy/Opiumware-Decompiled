/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x70a14:27a015a503
 */

/* WARNING: Possible PIC construction at 0x00070ac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00070ac4) */
/* WARNING: Removing unreachable block (ram,0x00071000) */
/* WARNING: Removing unreachable block (ram,0x00070ac8) */
/* WARNING: Removing unreachable block (ram,0x0007101c) */
/* WARNING: Removing unreachable block (ram,0x00070b00) */
/* WARNING: Removing unreachable block (ram,0x00070b6c) */
/* WARNING: Removing unreachable block (ram,0x00070c4c) */
/* WARNING: Removing unreachable block (ram,0x00071024) */
/* WARNING: Removing unreachable block (ram,0x00070c80) */
/* WARNING: Removing unreachable block (ram,0x00070c9c) */
/* WARNING: Removing unreachable block (ram,0x00070f48) */
/* WARNING: Removing unreachable block (ram,0x00791680) */
/* WARNING: Removing unreachable block (ram,0x007916a8) */
/* WARNING: Removing unreachable block (ram,0x007916b8) */
/* WARNING: Removing unreachable block (ram,0x007916bc) */
/* WARNING: Removing unreachable block (ram,0x007916c0) */
/* WARNING: Removing unreachable block (ram,0x007916c8) */
/* WARNING: Removing unreachable block (ram,0x007916dc) */
/* WARNING: Removing unreachable block (ram,0x007917dc) */
/* WARNING: Removing unreachable block (ram,0x0079182c) */
/* WARNING: Removing unreachable block (ram,0x00791848) */
/* WARNING: Removing unreachable block (ram,0x00791838) */
/* WARNING: Removing unreachable block (ram,0x00791808) */
/* WARNING: Removing unreachable block (ram,0x00791820) */
/* WARNING: Removing unreachable block (ram,0x00791874) */
/* WARNING: Removing unreachable block (ram,0x00791864) */
/* WARNING: Removing unreachable block (ram,0x0079187c) */
/* WARNING: Removing unreachable block (ram,0x00791700) */
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
/* WARNING: Removing unreachable block (ram,0x0079170c) */
/* WARNING: Removing unreachable block (ram,0x00791718) */
/* WARNING: Removing unreachable block (ram,0x0079171c) */
/* WARNING: Removing unreachable block (ram,0x0079172c) */
/* WARNING: Removing unreachable block (ram,0x0079173c) */
/* WARNING: Removing unreachable block (ram,0x00791778) */
/* WARNING: Removing unreachable block (ram,0x00791790) */
/* WARNING: Removing unreachable block (ram,0x007917ac) */
/* WARNING: Removing unreachable block (ram,0x00791750) */
/* WARNING: Removing unreachable block (ram,0x007917b4) */
/* WARNING: Removing unreachable block (ram,0x007917c4) */

void FUN_00070a14(byte *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
// more drops soon - github.com/pengussy
  byte *pbVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined8 unaff_x30;
  undefined1 auStack_60 [16];
  
  puVar1 = auStack_60;
  puVar6 = auStack_60 + 0x50;
  func_0x007911b0(param_1,4);
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  func_0x00793a78(param_1,0xffffd8f0,0x208ecd2,0);
  iVar2 = func_0x00791be4(param_1,0xffffffff);
  if (iVar2 == 7) {
    pbVar3 = param_1 + 0x48;
    puVar4 = *(undefined8 **)pbVar3;
    *puVar4 = param_2;
    *(undefined4 *)((long)puVar4 + 0xc) = 8;
    lVar5 = *(long *)pbVar3;
    *(long *)pbVar3 = lVar5 + 0x10;
    if (param_3 == 0) {
      func_0x00792a48(param_1);
    }
    else {
// WM - proprietary - see LICENSE - do not sell
      *(long *)(lVar5 + 0x10) = param_3;
      *(undefined4 *)(lVar5 + 0x1c) = 8;
      *(long *)pbVar3 = *(long *)pbVar3 + 0x10;
    }
    func_0x00794428(param_1,0xfffffffd);
    puVar1 = (undefined1 *)register0x00000008;
    param_3 = unaff_x20;
    param_2 = unaff_x21;
    puVar6 = unaff_x29;
  }
  else {
    unaff_x30 = 0x70ac4;
    unaff_x19 = param_1;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = param_2;
  *(long *)(puVar1 + -0x20) = param_3;
  *(byte **)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = puVar6;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
/* WM - keep the notice, keep the source honest */
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0x10;
  return;
}

