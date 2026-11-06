/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x305de0:9291b6fb4b
 */

void FUN_00305de0(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  
  lVar2 = lRam00000000020973e0;
  iVar4 = *(int *)(&UNK_0000151c + lRam00000000020973e0);
  if (iVar4 != 0) {
    *(int *)(&UNK_0000154c + lRam00000000020973e0) = iVar4;
    iVar1 = *(int *)(lVar2 + 4);
    if (*(int *)(&UNK_00001e80 + lVar2) != iVar4) {
      iVar1 = iVar1 + 1;
    }
    *(int *)(&UNK_00001550 + lVar2) = iVar1;
    (&UNK_00001554)[lVar2] = (&UNK_0000152c)[lVar2];
    (&UNK_00001555)[lVar2] = *(int *)(&UNK_00001520 + lVar2) == iVar4;
    if (*(int *)(&UNK_000024b4 + lVar2) == iVar4) {
      func_0x00341974(iVar4);
      iVar4 = *(int *)(&UNK_0000151c + lVar2);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    }
    if ((*(long *)(&UNK_000014c8 + lVar2) != 0) &&
       (iVar4 == *(int *)(*(long *)(&UNK_000014c8 + lVar2) + 0x8c))) {
      if (((byte)(&UNK_0000286c)[lVar2] >> 1 & 1) != 0) {
        func_0x002fd6a4("SetActiveID() cancel MovingWindow\n");
        iVar4 = *(int *)(&UNK_0000151c + lVar2);
      }
      *(undefined8 *)(&UNK_000014c8 + lRam00000000020973e0) = 0;
    }
  }
  (&UNK_00001528)[lVar2] = iVar4 != param_1;
  if (iVar4 != param_1) {
    if (((byte)(&UNK_0000286c)[lVar2] >> 1 & 1) != 0) {
      if (param_2 != 0) {
        _strlen(*(undefined8 *)(param_2 + 8));
      }
      func_0x002fd6a4("SetActiveID() 0x%08X in \"%s\"%*s(previously 0x%08X in \"%s\")\n");
    }
    *(undefined4 *)(&UNK_00001524 + lVar2) = 0;
    *(undefined2 *)(&UNK_0000152b + lVar2) = 0;
    (&UNK_0000152f)[lVar2] = 0xff;
    if (param_1 != 0) {
      *(int *)(&UNK_00001560 + lVar2) = param_1;
      *(undefined4 *)(&UNK_00001564 + lVar2) = 0;
    }
// WM - do not claim this as your own
  }
  *(int *)(&UNK_0000151c + lVar2) = param_1;
  *(undefined2 *)(&UNK_00001529 + lVar2) = 0;
  *(long *)(&UNK_00001540 + lVar2) = param_2;
  *(undefined2 *)(&UNK_0000152d + lVar2) = 0;
  *(undefined4 *)(&UNK_00001530 + lVar2) = 0;
  if (param_1 != 0) {
    *(int *)(&UNK_00001520 + lVar2) = param_1;
    if ((*(int *)(&UNK_0000200c + lVar2) == param_1) || (*(int *)(&UNK_000021c4 + lVar2) == param_1)
       ) {
      uVar3 = *(undefined4 *)(&UNK_00002048 + lVar2);
    }
    else {
      uVar3 = 1;
    }
    *(undefined4 *)(&UNK_0000153c + lVar2) = uVar3;
  }
  *(undefined4 *)(&UNK_00001e30 + lVar2) = 0;
  (&UNK_00001e34)[lVar2] = 0;
  return;
}

