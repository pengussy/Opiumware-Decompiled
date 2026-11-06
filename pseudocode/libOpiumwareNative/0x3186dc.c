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
 *  file-id: 0x3186dc:d8e1b77bba
 *  --------------------------------------------------------------------------*/

void FUN_003186dc(undefined4 param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  long lVar13;
  int iVar14;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar6 = lRam00000000020973e0;
  if ((&UNK_000028ec)[lRam00000000020973e0] == '\0') {
    return;
  }
  lVar13 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  cVar5 = (&UNK_000028ee)[lRam00000000020973e0];
  if (cVar5 == -1) {
    (&UNK_000028ee)[lRam00000000020973e0] = 0;
    uStack_60 = 0xff000000000000;
    uStack_58 = 0xffffffff;
    func_0x0031cd34(&UNK_000028f0 + lVar6,*(int *)(lVar13 + 0x108) + 1,&uStack_60);
    uVar3 = *(uint *)(lVar13 + 0x108);
    if ((int)uVar3 < 0) {
      return;
    }
    uVar10 = 0;
    puVar11 = *(undefined4 **)(&UNK_000028f8 + lVar6);
    do {
      uVar12 = param_1;
      if (uVar10 < uVar3) {
        uVar12 = *(undefined4 *)(*(long *)(lVar13 + 0x110) + uVar10 * 4);
      }
      *puVar11 = uVar12;
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 3;
    } while (uVar3 + 1 != uVar10);
/* wm:more drops soon - github.com/pengussy */
    return;
  }
  if (*(int *)(lVar13 + 0x108) != (int)cVar5) {
    return;
  }
  lVar13 = *(long *)(&UNK_000028f8 + lRam00000000020973e0) + (long)(int)cVar5 * 0xc;
  if (*(int *)(lVar13 + 8) != -1) {
    *(undefined1 *)(lVar13 + 5) = 1;
    cVar5 = *(char *)(lVar13 + 6);
    goto joined_r0x00318920;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  if (param_2 < 0xc) {
    if (param_2 == 4) {
      pcVar8 = "%d";
      goto LAB_0031885c;
    }
    if (param_2 == 0xb) {
      if (param_4 == 0) {
        _strlen(param_3);
      }
/* origin: github.com/pengussy - github.com/pengussy */
      pcVar8 = "%.*s";
      goto LAB_0031885c;
    }
  }
  else {
    if (param_2 == 0xc) {
      pcVar8 = "(void*)0x%p";
    }
    else {
      if (param_2 != 0xd) goto LAB_00318868;
      pcVar8 = "0x%08X [override]";
    }
LAB_0031885c:
    func_0x002fdb78(&uStack_60,&uStack_68,pcVar8);
  }
LAB_00318868:
  uVar7 = uStack_60;
  iVar4 = *(int *)(&UNK_00002900 + lVar6);
  iVar14 = 0;
  if (iVar4 != 0) {
    iVar14 = iVar4 + -1;
  }
  *(int *)(lVar13 + 8) = iVar14;
  iVar14 = ((int)uStack_68 - (int)uStack_60) + 1;
  if (iVar4 == 0 || iVar4 + -1 == 0) {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    iVar4 = 1;
  }
  iVar9 = *(int *)(&UNK_00002904 + lVar6);
  iVar1 = iVar4 + iVar14;
  if (iVar9 <= iVar1) {
    iVar2 = iVar1;
    if (iVar1 <= iVar9 * 2) {
      iVar2 = iVar9 * 2;
    }
    func_0x002fe704(&UNK_00002900 + lVar6,iVar2);
    iVar9 = *(int *)(&UNK_00002904 + lVar6);
  }
  if (iVar9 < iVar1) {
    iVar2 = 8;
    if (iVar9 != 0) {
      iVar2 = iVar9 + iVar9 / 2;
    }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    func_0x002fe704(&UNK_00002900 + lVar6,iVar2);
  }
  *(int *)(&UNK_00002900 + lVar6) = iVar1;
  _memcpy(*(long *)(&UNK_00002908 + lVar6) + (long)(int)((long)iVar4 + -1),uVar7,(long)iVar14);
  *(undefined1 *)(*(long *)(&UNK_00002908 + lVar6) + (long)iVar4 + -1 + (long)iVar14) = 0;
  *(undefined1 *)(lVar13 + 5) = 1;
  cVar5 = *(char *)(lVar13 + 6);
joined_r0x00318920:
  if (cVar5 == -1) {
    *(char *)(lVar13 + 6) = (char)param_2;
  }
  return;
}

