/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x31ba38:53f5142f38
 */

void FUN_0031ba38(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  
  lVar5 = lRam00000000020973e0;
  if (*(long *)(lRam00000000020973e0 + 0x1ff8) == 0) {
    return;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  }
  puVar1 = &UNK_00001ff3 + lRam00000000020973e0;
  iVar9 = *(int *)(&UNK_00002068 + lRam00000000020973e0);
  if (*(int *)(&UNK_00001ff4 + lRam00000000020973e0) != iVar9) {
    *(undefined4 *)(&UNK_000021c0 + lRam00000000020973e0) =
         *(undefined4 *)(lRam00000000020973e0 + 0x2000);
    *(int *)(&UNK_000021c4 + lVar5) = iVar9;
    *(undefined4 *)(&UNK_000021c8 + lVar5) = *(undefined4 *)(&UNK_0000206c + lVar5);
    *(undefined4 *)(&UNK_000021cc + lVar5) = 0;
    (&UNK_000021d0)[lVar5] = 0;
    (&UNK_000021d1)[lVar5] = (byte)(*(uint *)(&UNK_00002080 + lVar5) >> 0x15) & 1;
  }
  lVar6 = lVar5;
  if (((byte)(&UNK_0000286c)[lVar5] >> 4 & 1) != 0) {
    func_0x002fd6a4("[nav] NavInitRequest: ApplyResult: NavID 0x%08X in Layer %d Window \"%s\"\n");
    iVar9 = *(int *)(&UNK_00002068 + lVar5);
    lVar6 = lRam00000000020973e0;
  }
  uVar2 = *(uint *)(&UNK_00002004 + lVar5);
  uVar3 = *(undefined4 *)(&UNK_0000206c + lVar5);
  *(int *)(&UNK_00001ff4 + lVar6) = iVar9;
  *(uint *)(&UNK_00002004 + lVar6) = uVar2;
  func_0x00317ed4(uVar3);
  lVar6 = *(long *)(lVar6 + 0x1ff8);
  *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x3f0) = iVar9;
  lVar6 = lVar6 + (ulong)uVar2 * 0x10;
  uVar10 = *(undefined8 *)(&UNK_00002070 + lVar5);
  *(undefined8 *)(lVar6 + 0x400) = *(undefined8 *)(&UNK_00002078 + lVar5);
  *(undefined8 *)(lVar6 + 0x3f8) = uVar10;
  lVar6 = lRam00000000020973e0;
  lVar8 = *(long *)(lRam00000000020973e0 + 0x1ff8);
  *(undefined8 *)
   (*(long *)(lVar8 + 0x3d8) + (ulong)*(uint *)(&UNK_00002004 + lRam00000000020973e0) * 8 + 0x418) =
       0x7f7fffff7f7fffff;
  *puVar1 = 1;
/*  reversing this took months of machine time  */
  if (*(long *)(&UNK_00002090 + lVar5) != -1) {
    *(long *)(&UNK_00002050 + lVar5) = *(long *)(&UNK_00002090 + lVar5);
  }
  if ((&UNK_0000205b)[lVar5] != '\x01') {
    return;
  }
  if ((*(byte *)(lVar8 + 0x16) & 1) == 0) {
    if (*(int *)(&UNK_00002048 + lVar6) == 3) {
      bVar4 = *(byte *)(lVar6 + 0x28) >> 1;
joined_r0x0031bba0:
      if ((bVar4 & 1) == 0) goto LAB_0031bb70;
    }
    else if (*(int *)(&UNK_00002048 + lVar6) == 2) {
      bVar4 = *(byte *)(lVar6 + 0x28);
      goto joined_r0x0031bba0;
    }
    if (*(char *)(lVar6 + 0x76) != '\x01') goto LAB_0031bb78;
    uVar7 = 1;
  }
  else {
LAB_0031bb70:
    uVar7 = 0;
  }
  *(undefined1 *)(lVar6 + 0x1ff0) = uVar7;
LAB_0031bb78:
  *(undefined2 *)(&UNK_00001ff1 + lVar6) = 0x101;
  return;
}

