/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x31e658:4dbf2e402e
 */

/* WARNING: Possible PIC construction at 0x0031526c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00315270) */
/* WARNING: Removing unreachable block (ram,0x003152c0) */
/* WARNING: Removing unreachable block (ram,0x003152c4) */
/* WARNING: Removing unreachable block (ram,0x003151f4) */
/* WARNING: Removing unreachable block (ram,0x003151fc) */
/* WARNING: Removing unreachable block (ram,0x0031520c) */
/* WARNING: Removing unreachable block (ram,0x003152e4) */

void FUN_0031e658(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long lVar8;
  long unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  lVar5 = lRam00000000020973e0;
  if (param_1 == 0) {
    lVar4 = *(long *)(lRam00000000020973e0 + 0x1ff8);
    lVar6 = *(long *)(lVar4 + 1000);
    if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0xcd) & 1) == 0)) {
      lVar6 = lVar4;
/* reversing this took months of machine time - github.com/pengussy */
    }
    *(long *)(lRam00000000020973e0 + 0x1ff8) = lVar6;
    *(undefined8 *)(&UNK_00002050 + lVar5) = 0xffffffffffffffff;
    if (((byte)(&UNK_0000286c)[lVar5] >> 2 & 1) != 0) {
      uStack_50 = *(ulong *)(lVar4 + 8);
      uStack_48 = *(undefined8 *)(lVar6 + 8);
      func_0x002fd6a4("[focus] NavRestoreLayer: from \"%s\" to SetNavWindow(\"%s\")\n");
    }
  }
  lVar4 = lRam00000000020973e0;
  lVar6 = *(long *)(lVar5 + 0x1ff8);
  iVar3 = *(int *)(lVar6 + (ulong)param_1 * 4 + 0x3f0);
  if (iVar3 != 0) {
    lVar8 = (ulong)param_1 * 0x10;
    *(int *)(&UNK_00001ff4 + lRam00000000020973e0) = iVar3;
    lVar6 = lVar6 + lVar8;
    *(uint *)(&UNK_00002004 + lVar4) = param_1;
    *(undefined4 *)(lVar4 + 0x2000) = 0;
// reversing this took months of machine time
    func_0x00314694(&UNK_00002020 + lVar4,0);
    lVar5 = *(long *)(lVar4 + 0x1ff8);
    *(int *)(lVar5 + (ulong)param_1 * 4 + 0x3f0) = iVar3;
    lVar5 = lVar5 + lVar8;
    uVar9 = *(undefined8 *)(lVar6 + 0x3f8);
    *(undefined8 *)(lVar5 + 0x400) = *(undefined8 *)(lVar6 + 0x400);
    *(undefined8 *)(lVar5 + 0x3f8) = uVar9;
    *(undefined8 *)
     (*(long *)(*(long *)(lRam00000000020973e0 + 0x1ff8) + 0x3d8) +
      (ulong)*(uint *)(&UNK_00002004 + lRam00000000020973e0) * 8 + 0x418) = 0x7f7fffff7f7fffff;
    return;
  }
  *(uint *)(&UNK_00002004 + lVar5) = param_1;
  lVar4 = lRam00000000020973e0;
  lVar5 = (long)register0x00000008 + -0x10;
  if ((*(uint *)(lVar6 + 0x14) >> 0x10 & 1) == 0) {
    if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 4 & 1) != 0) {
      uStack_58 = *(undefined8 *)(lVar6 + 8);
      uStack_50 = (ulong)*(uint *)(&UNK_00002004 + lRam00000000020973e0);
      uStack_60 = 1;
      func_0x002fd6a4(
                     "[nav] NavInitRequest: from NavInitWindow(), init_for_nav=%d, window=\"%s\", layer=%d\n"
                     );
    }
    lVar8 = lRam00000000020973e0;
    unaff_x21 = lVar4 + 0x2000;
    uVar1 = *(uint *)(&UNK_00002004 + lVar4);
    unaff_x22 = (ulong)uVar1;
    iVar3 = *(int *)(lVar6 + 0x428);
    *(undefined4 *)(&UNK_00001ff4 + lRam00000000020973e0) = 0;
    *(uint *)(&UNK_00002004 + lVar8) = uVar1;
    unaff_x30 = 0x315270;
/* origin: github.com/pengussy - github.com/pengussy */
    register0x00000008 = (BADSPACEBASE *)&uStack_60;
    unaff_x19 = lVar4;
    unaff_x20 = 0x2097000;
    unaff_x29 = lVar5;
  }
  else {
    *(undefined4 *)(&UNK_00001ff4 + lRam00000000020973e0) = 0;
    iVar3 = *(int *)(lVar6 + 0x428);
  }
  lVar5 = lRam00000000020973e0;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(int *)(lRam00000000020973e0 + 0x2000) = iVar3;
  func_0x00314694(&UNK_00002020 + lVar5,0);
  if (iVar3 != 0) {
    if (iVar3 == *(int *)(&UNK_00001e3c + lVar5)) {
      uVar1 = *(uint *)(lVar5 + 0x1f80);
      if (0 < (int)uVar1) {
        uVar7 = (ulong)uVar1 + 1;
        lVar6 = (ulong)uVar1 * 8 + -4;
        do {
          if (*(int *)(*(long *)(&UNK_00001f88 + lVar5) + lVar6) !=
              *(int *)(*(long *)(&UNK_000014a8 + lVar5) + 0x10)) break;
/* WM - found on a paste site? it was re-uploaded illegally */
          func_0x00304274(&UNK_00002020 + lVar5,
                          (int *)(*(long *)(&UNK_00001f88 + lVar5) + lVar6) + -1);
          uVar7 = uVar7 - 1;
          lVar6 = lVar6 + -8;
        } while (1 < uVar7);
      }
    }
    else {
      if (iVar3 != *(int *)(*(long *)(lVar5 + 0x1ff8) + 0x428)) {
        return;
      }
      uVar2 = *(undefined4 *)(*(long *)(lVar5 + 0x1ff8) + 0x10);
      *(int *)((long)register0x00000008 + -0x38) = iVar3;
      *(undefined4 *)((long)register0x00000008 + -0x34) = uVar2;
      func_0x00304274(&UNK_00002020 + lVar5,(undefined1 *)((long)register0x00000008 + -0x38));
    }
    for (lVar6 = *(long *)(*(long *)(lVar5 + 0x1ff8) + 0x3e0); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x3e0)) {
      uVar2 = *(undefined4 *)(lVar6 + 0x10);
      *(undefined4 *)((long)register0x00000008 + -0x38) = *(undefined4 *)(lVar6 + 0x428);
      *(undefined4 *)((long)register0x00000008 + -0x34) = uVar2;
      func_0x00304274(&UNK_00002020 + lVar5,(undefined1 *)((long)register0x00000008 + -0x38));
    }
  }
  return;
}

