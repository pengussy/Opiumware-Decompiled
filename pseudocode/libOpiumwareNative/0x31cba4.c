/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x31cba4:f36f6394ed
 */

void FUN_0031cba4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  int iStack_64;
  
  lVar6 = lRam00000000020973e0;
  iVar4 = 0;
  if (*(int *)(&UNK_00002870 + lRam00000000020973e0) != 0) {
    iVar4 = *(int *)(&UNK_00002870 + lRam00000000020973e0) + -1;
  }
  if (*(char *)(lRam00000000020973e0 + 0x18) == '\0') {
    pcVar8 = "[%05d] ";
  }
  else {
    pcVar8 = "[%s] [%05d] ";
  }
  func_0x002fe8b0(&UNK_00002870 + lRam00000000020973e0,pcVar8);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  func_0x002fe8d8(&UNK_00002870 + lVar6,param_1,param_2);
  lVar5 = 0x20973e8;
  if (*(long *)(&UNK_00002878 + lVar6) != 0) {
    lVar5 = *(long *)(&UNK_00002878 + lVar6);
  }
  iVar3 = 0;
  if (*(int *)(&UNK_00002870 + lVar6) != 0) {
    iVar3 = *(int *)(&UNK_00002870 + lVar6) + -1;
  }
  if (iVar4 != iVar3) {
    if ((*(int *)(&UNK_00002890 + lVar6) == 0) ||
       (*(char *)(lVar5 + *(int *)(&UNK_00002890 + lVar6) + -1) == '\n')) {
      func_0x002fe9c8(&UNK_00002880 + lVar6,&UNK_00002890 + lVar6);
    }
    lVar7 = _memchr(lVar5 + iVar4,10,(long)iVar3 - (long)iVar4);
    if (lVar7 != 0) {
      uVar2 = lVar5 + iVar3;
      do {
        uVar1 = lVar7 + 1;
        if (uVar1 < uVar2) {
          iStack_64 = (int)uVar1 - (int)lVar5;
// WM - donate: donate/README.md
          func_0x002fe9c8(&UNK_00002880 + lVar6,&iStack_64);
        }
        lVar7 = _memchr(uVar1,10,uVar2 - uVar1);
      } while (lVar7 != 0);
    }
    iVar4 = *(int *)(&UNK_00002890 + lVar6);
    if (*(int *)(&UNK_00002890 + lVar6) <= iVar3) {
      iVar4 = iVar3;
    }
    *(int *)(&UNK_00002890 + lVar6) = iVar4;
  }
  if (((byte)(&UNK_0000286e)[lVar6] >> 4 & 1) != 0) {
    _printf("%s");
  }
  return;
}

