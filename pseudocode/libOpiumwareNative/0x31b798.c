/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x31b798:d76f472713
 */

void FUN_0031b798(int param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  lVar5 = lRam00000000020973e0;
  puVar1 = (undefined8 *)(&UNK_00001e9c + lRam00000000020973e0);
  if (*(long *)(lRam00000000020973e0 + 0x1ff8) != param_2) {
    if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 2 & 1) != 0) {
      func_0x002fd6a4("[focus] SetNavWindow(\"%s\")\n");
    }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    lVar2 = lRam00000000020973e0;
    *(long *)(lVar5 + 0x1ff8) = param_2;
    *(undefined8 *)(&UNK_00002050 + lVar5) = 0xffffffffffffffff;
    *(undefined2 *)(&UNK_00002098 + lVar5) = 0;
    (&UNK_0000205a)[lVar5] = 0;
    if (((&UNK_00002099)[lVar2] & 1) == 0) {
      bVar6 = (&UNK_0000205a)[lVar2];
    }
    else {
      bVar6 = 1;
    }
    (&UNK_00002059)[lVar2] = bVar6 & 1;
  }
  uVar3 = *(uint *)(param_2 + 0x170);
  *(int *)(&UNK_00001ff4 + lVar5) = param_1;
  *(uint *)(&UNK_00002004 + lVar5) = uVar3;
  func_0x00317ed4(*(undefined4 *)(&UNK_00001e3c + lVar5));
  *(int *)(param_2 + (ulong)uVar3 * 4 + 0x3f0) = param_1;
  if (*(int *)(&UNK_00001e80 + lVar5) == param_1) {
    lVar2 = param_2 + (ulong)uVar3 * 0x10;
// donate: donate/README.md
    uVar9 = *puVar1;
    fVar7 = (float)*(undefined8 *)(param_2 + 0x128);
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x128) >> 0x20);
    *(ulong *)(lVar2 + 0x400) =
         CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001ea4 + lVar5) >> 0x20) - fVar8,
                  (float)*(undefined8 *)(&UNK_00001ea4 + lVar5) - fVar7);
    *(ulong *)(lVar2 + 0x3f8) = CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar8,(float)uVar9 - fVar7)
    ;
    *(undefined4 *)(&UNK_00002008 + lVar5) = *(undefined4 *)(&UNK_00001e84 + lVar5);
    iVar4 = *(int *)(&UNK_00001520 + lVar5);
  }
  else {
    *(undefined4 *)(&UNK_00002008 + lVar5) = 0;
    iVar4 = *(int *)(&UNK_00001520 + lVar5);
  }
  if (param_1 == iVar4) {
    (&UNK_00001ff3)[lVar5] = 1;
  }
  if ((*(uint *)(&UNK_0000153c + lVar5) & 0xfffffffe) == 2) {
    (&UNK_00001ff1)[lVar5] = 1;
  }
  else if (*(char *)(lVar5 + 0x76) == '\x01') {
    *(undefined1 *)(lVar5 + 0x1ff0) = 0;
  }
  *(undefined8 *)
   (*(long *)(*(long *)(lRam00000000020973e0 + 0x1ff8) + 0x3d8) +
    (ulong)*(uint *)(&UNK_00002004 + lRam00000000020973e0) * 8 + 0x418) = 0x7f7fffff7f7fffff;
  return;
}

