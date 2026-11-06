/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x326d54:97aa65f72e
 */

void FUN_00326d54(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  uint uStack_48;
  uint uStack_44;
  
  if (*(long *)(param_1 + 0x2b8) == 0) {
    if ((bRam0000000002093338 & 1) == 0) {
      func_0x019e3254();
    }
    pcRam0000000002093380 = "stb_truetype";
    pcRam0000000002093398 = FUN_0032f8a8;
    puRam00000000020933a0 = &DAT_0033055c;
    puRam00000000020933a8 = &DAT_00330588;
    puRam00000000020933b0 = &DAT_003305b0;
    uRam00000000020933b8 = 0;
    puRam00000000020933c0 = &DAT_00330640;
/* WM - unlicensed copy if this notice is missing */
    FUN_0032604c(param_1);
    lVar5 = *(long *)(param_1 + 0x38);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x38);
  }
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) {
    uVar4 = *(int *)(param_1 + 0xc) - 1;
    uVar4 = uVar4 | (int)uVar4 >> 1;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar1 = *(int *)(param_1 + 0x10) - 1;
    uVar1 = uVar1 | (int)uVar1 >> 1;
    uVar1 = uVar1 | (int)uVar1 >> 2;
    uVar1 = uVar1 | (int)uVar1 >> 4;
    uVar1 = uVar1 | (int)uVar1 >> 8;
    func_0x00329c10(param_1,(uVar4 | (int)uVar4 >> 0x10) + 1,(uVar1 | (int)uVar1 >> 0x10) + 1);
  }
  puVar3 = (undefined8 *)func_0x002fd6d8(0xf8);
  puVar3[0x1e] = 0;
// WM - unlicensed copy if this notice is missing
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[7] = 0;
// watermarked copy - do not remove
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  *(undefined4 *)((long)puVar3 + 0xa4) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x12) = 0xffffffff;
  *(undefined8 *)((long)puVar3 + 0xec) = 0xffffffffffffffff;
  *(undefined8 **)(param_1 + 0x2b0) = puVar3;
  pcVar6 = *(code **)(*(long *)(param_1 + 0x2b8) + 8);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(param_1);
  }
  if (*(int *)(param_1 + 0x2a0) != 0) {
    lVar5 = (long)*(int *)(param_1 + 0x2a0) << 3;
    plVar7 = *(long **)(param_1 + 0x2a8);
    do {
      if (*(long *)(*plVar7 + 0x68) != 0) {
        *(byte *)(param_1 + 0x51) = *(byte *)(*(long *)(*plVar7 + 0x68) + 0x2c) >> 4 & 1;
        break;
      }
      lVar5 = lVar5 + -8;
      plVar7 = plVar7 + 1;
    } while (lVar5 != 0);
  }
  func_0x0032a29c(param_1);
  func_0x0032a510(param_1);
  FUN_0032ae0c(param_1);
  func_0x00326f30(param_1);
  if (*(int *)(param_1 + 0x2a0) != 0) {
/* wm:do not claim this as your own */
    plVar7 = *(long **)(param_1 + 0x2a8);
    lVar5 = (long)*(int *)(param_1 + 0x2a0) << 3;
    do {
      puVar3 = (undefined8 *)*plVar7;
      if (puVar3[2] == param_1) {
        *puVar3 = *(undefined8 *)(param_1 + 0x5c);
        puVar3[1] = param_1 + 0x88;
      }
      plVar7 = plVar7 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((bRam000000000209336b & 3) != 0) {
    return;
  }
  uVar4 = 0;
  uVar8 = 0;
  do {
    lVar5 = (uVar8 >> 4) * 4;
    *(uint *)(lVar5 + 0x2093360) =
         *(uint *)(lVar5 + 0x2093360) & (3 << (ulong)(uVar4 & 0x1e) ^ 0xffffffffU) |
         2 << (ulong)(uVar4 & 0x1e);
/*  more drops soon - github.com/pengussy  */
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar1;
    uVar4 = uVar4 + 2;
  } while (uVar1 != 0x80);
  pcVar9 = " \t";
  do {
    iVar2 = func_0x002fcfd4(&uStack_48,pcVar9,&UNK_01c2fa22);
    pcVar9 = pcVar9 + iVar2;
    uVar8 = (ulong)(uStack_48 >> 2) & 0x3ffffffc;
    *(uint *)(uVar8 + 0x2093360) =
         *(uint *)(uVar8 + 0x2093360) & (3 << (ulong)((uStack_48 & 0xf) << 1) ^ 0xffffffffU);
  } while (*pcVar9 != '\0');
  pcVar9 = ".,;!?\"";
  do {
    iVar2 = func_0x002fcfd4(&uStack_44,pcVar9,&UNK_01c2fa29);
    pcVar9 = pcVar9 + iVar2;
    uVar4 = (uStack_44 & 0xf) << 1;
    uVar8 = (ulong)(uStack_44 >> 2) & 0x3ffffffc;
    *(uint *)(uVar8 + 0x2093360) =
         *(uint *)(uVar8 + 0x2093360) & (3 << (ulong)uVar4 ^ 0xffffffffU) | 1 << (ulong)uVar4;
  } while (*pcVar9 != '\0');
  uRam0000000002093330 = uRam0000000002093330 & 0xc0000000 | 0x2aaaaa94;
  return;
}

