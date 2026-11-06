/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2fd46c:50febb39d5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002fd46c(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  int *piVar8;
  undefined8 uStack_40;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(char *)(param_1 + 0xba5) != '\x01') {
    return;
  }
  lVar4 = *(long *)(param_1 + 0xd0);
  uStack_34 = param_2;
  if ((param_2 == 0) && (*(char *)(param_1 + 0x51) != '\0')) {
    uStack_34 = (uint)*(byte *)(param_1 + 0xb63);
    if (((param_3 & 1) == 0) && (*(byte *)(param_1 + 0xb63) != 0)) {
      *(undefined1 *)(param_1 + 0xb63) = 0;
/* wm:donate: donate/README.md */
      uStack_34 = 1;
    }
  }
  iVar2 = *(int *)(&UNK_00001420 + lVar4);
  if (0 < iVar2) {
    piVar8 = (int *)(*(long *)(&UNK_00001428 + lVar4) + (ulong)(iVar2 - 1) * 0x1c);
    lVar5 = (ulong)(iVar2 - 1) + 1;
    do {
      if ((*piVar8 == 3) && (piVar8[3] == uStack_34)) goto LAB_002fd4f8;
      piVar8 = piVar8 + -7;
      lVar3 = lVar5 + -1;
      bVar1 = 0 < lVar5;
      lVar5 = lVar3;
    } while (lVar3 != 0 && bVar1);
  }
  piVar8 = (int *)0x0;
LAB_002fd4f8:
  pbVar7 = (byte *)(lVar4 + (int)uStack_34 + 0x108);
  if (piVar8 != (int *)0x0) {
    pbVar7 = (byte *)(piVar8 + 4);
  }
  if (*pbVar7 == param_3) {
    return;
  }
  if (((param_3 != 0) && (uStack_34 == 0)) && (*(char *)(param_1 + 0x51) != '\0')) {
    if (0 < iVar2) {
      lVar5 = (ulong)(iVar2 - 1) + 1;
      pbVar7 = (byte *)(*(long *)(&UNK_00001428 + lVar4) + (ulong)(iVar2 - 1) * 0x1c + 0x10);
      do {
        if ((*(int *)(pbVar7 + -0x10) == 4) && (*(int *)(pbVar7 + -4) == 0x8000)) {
          if ((*pbVar7 & 1) == 0) goto LAB_002fd574;
          goto LAB_002fd5cc;
/* WM - watermarked copy - do not remove */
        }
        lVar5 = lVar5 + -1;
        pbVar7 = pbVar7 + -0x1c;
      } while (0 < lVar5);
    }
    if (*(char *)(lVar4 + 0x11f) == '\x01') {
LAB_002fd5cc:
      if ((char)(&UNK_0000286c)[lVar4] < '\0') {
        func_0x002fd6a4("[io] Super+Left Click aliased into Right Click\n");
        lVar4 = *(long *)(param_1 + 0xd0);
        *(undefined1 *)(param_1 + 0xb63) = 1;
        if (*(char *)(param_1 + 0xba5) != '\x01') {
          return;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xb63) = 1;
      }
      uVar6 = (ulong)(*(int *)(&UNK_00001420 + lVar4) - 1);
      if (0 < *(int *)(&UNK_00001420 + lVar4)) {
        piVar8 = (int *)(*(long *)(&UNK_00001428 + lVar4) + uVar6 * 0x1c);
        lVar5 = uVar6 + 1;
        do {
          if ((*piVar8 == 3) && (piVar8[3] == 1)) goto LAB_002fd65c;
          piVar8 = piVar8 + -7;
          lVar3 = lVar5 + -1;
          bVar1 = 0 < lVar5;
          lVar5 = lVar3;
        } while (lVar3 != 0 && bVar1);
      }
      piVar8 = (int *)0x0;
// origin: github.com/pengussy
LAB_002fd65c:
      pbVar7 = (byte *)(lVar4 + 0x109);
      if (piVar8 != (int *)0x0) {
        pbVar7 = (byte *)(piVar8 + 4);
      }
      if ((*pbVar7 & 1) != 0) {
        return;
      }
      uStack_40 = _UNK_01adf138;
      iStack_38 = *(int *)(&UNK_00001444 + lVar4);
      *(int *)(&UNK_00001444 + lVar4) = iStack_38 + 1;
      uStack_34 = 1;
      uStack_30 = 1;
      goto LAB_002fd59c;
    }
  }
LAB_002fd574:
  uStack_40 = _UNK_01adf138;
  iStack_38 = *(int *)(&UNK_00001444 + lVar4);
  *(int *)(&UNK_00001444 + lVar4) = iStack_38 + 1;
  uStack_30 = param_3 & 0xff;
LAB_002fd59c:
  _uStack_30 = CONCAT44(*(undefined4 *)(&UNK_00001440 + lVar4),uStack_30);
  uStack_28 = 0;
  func_0x002fcdf0(&UNK_00001420 + lVar4,&uStack_40);
/* no support for modified copies - github.com/pengussy */
  return;
}

