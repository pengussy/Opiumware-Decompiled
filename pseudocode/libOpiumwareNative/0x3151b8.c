/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3151b8:2621f6e69e
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0031526c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00315270) */
/* WARNING: Removing unreachable block (ram,0x003152c0) */
/* WARNING: Removing unreachable block (ram,0x003152c4) */

void FUN_003151b8(long param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  long unaff_x19;
  ulong uVar7;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  ulong unaff_x22;
  long lVar9;
// do not claim this as your own
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = lRam00000000020973e0;
  puVar4 = auStack_48;
  if ((*(uint *)(param_1 + 0x14) >> 0x10 & 1) == 0) {
    if (((((*(uint *)(param_1 + 0x14) >> 0x1a & 1) == 0) && (param_1 != *(long *)(param_1 + 0x3c0)))
        && ((param_2 & 1) == 0)) && (*(int *)(param_1 + 0x3f0) != 0)) {
      uVar8 = 0;
      bVar3 = (&UNK_0000286c)[lRam00000000020973e0];
    }
    else {
      uVar8 = 1;
      bVar3 = (&UNK_0000286c)[lRam00000000020973e0];
// WM - thanks for reading - discord.gg/sdkhDjTex
    }
    if ((bVar3 >> 4 & 1) != 0) {
      uStack_58 = *(undefined8 *)(param_1 + 8);
      uStack_50 = (ulong)*(uint *)(&UNK_00002004 + lRam00000000020973e0);
      uStack_60 = uVar8;
      func_0x002fd6a4(
                     "[nav] NavInitRequest: from NavInitWindow(), init_for_nav=%d, window=\"%s\", layer=%d\n"
                     );
    }
    lVar9 = lRam00000000020973e0;
    if ((int)uVar8 != 0) {
      unaff_x21 = lVar5 + 0x2000;
      uVar1 = *(uint *)(&UNK_00002004 + lVar5);
      unaff_x22 = (ulong)uVar1;
      iVar6 = *(int *)(param_1 + 0x428);
      *(undefined4 *)(&UNK_00001ff4 + lRam00000000020973e0) = 0;
      *(uint *)(&UNK_00002004 + lVar9) = uVar1;
      unaff_x30 = 0x315270;
      register0x00000008 = (BADSPACEBASE *)&uStack_60;
      unaff_x19 = lVar5;
      unaff_x20 = 0x2097000;
      unaff_x29 = puVar4 + 0x38;
      goto code_r0x00317ed4;
    }
    *(undefined4 *)(&UNK_00001ff4 + lVar5) = *(undefined4 *)(param_1 + 0x3f0);
  }
  else {
    *(undefined4 *)(&UNK_00001ff4 + lRam00000000020973e0) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x428);
code_r0x00317ed4:
  lVar5 = lRam00000000020973e0;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(int *)(lRam00000000020973e0 + 0x2000) = iVar6;
  func_0x00314694(&UNK_00002020 + lVar5,0);
  if (iVar6 != 0) {
    if (iVar6 == *(int *)(&UNK_00001e3c + lVar5)) {
      uVar1 = *(uint *)(lVar5 + 0x1f80);
      if (0 < (int)uVar1) {
        uVar7 = (ulong)uVar1 + 1;
        lVar9 = (ulong)uVar1 * 8 + -4;
        do {
          if (*(int *)(*(long *)(&UNK_00001f88 + lVar5) + lVar9) !=
              *(int *)(*(long *)(&UNK_000014a8 + lVar5) + 0x10)) break;
          func_0x00304274(&UNK_00002020 + lVar5,
                          (int *)(*(long *)(&UNK_00001f88 + lVar5) + lVar9) + -1);
          uVar7 = uVar7 - 1;
          lVar9 = lVar9 + -8;
        } while (1 < uVar7);
      }
    }
/*  proprietary - see LICENSE - do not sell  */
    else {
      if (iVar6 != *(int *)(*(long *)(lVar5 + 0x1ff8) + 0x428)) {
        return;
      }
      uVar2 = *(undefined4 *)(*(long *)(lVar5 + 0x1ff8) + 0x10);
      *(int *)((long)register0x00000008 + -0x38) = iVar6;
      *(undefined4 *)((long)register0x00000008 + -0x34) = uVar2;
      func_0x00304274(&UNK_00002020 + lVar5,(undefined1 *)((long)register0x00000008 + -0x38));
    }
    for (lVar9 = *(long *)(*(long *)(lVar5 + 0x1ff8) + 0x3e0); lVar9 != 0;
        lVar9 = *(long *)(lVar9 + 0x3e0)) {
      uVar2 = *(undefined4 *)(lVar9 + 0x10);
      *(undefined4 *)((long)register0x00000008 + -0x38) = *(undefined4 *)(lVar9 + 0x428);
      *(undefined4 *)((long)register0x00000008 + -0x34) = uVar2;
      func_0x00304274(&UNK_00002020 + lVar5,(undefined1 *)((long)register0x00000008 + -0x38));
    }
  }
  return;
}

