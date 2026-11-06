/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x28c8ac:863e540a61
 */

void FUN_0028c8ac(char *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  long *plVar4;
  char cVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar11 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar11 < 0) {
    uVar11 = param_2[1];
  }
  auVar12._8_8_ = 0;
/* wm:keep the notice, keep the source honest */
  auVar12._0_8_ = uVar11 + 2;
  uVar6 = SUB168(auVar12 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe;
  uVar9 = uVar6 * 2;
  if (0x7ffffffffffffff6 < uVar9) {
    auVar12 = func_0x0000aa50();
    auVar12._8_8_ = auVar12._8_8_;
    plVar7 = auVar12._0_8_;
    plVar10 = plVar7 + 1;
    *plVar10 = 0;
    *plVar7 = (long)plVar10;
    plVar7[2] = 0;
    if (*(long *)(auVar12._8_8_ + 0x10) != 0) {
      plVar4 = (long *)func_0x00173020(plVar7,*(undefined8 *)(auVar12._8_8_ + 8),plVar7);
      plVar7[1] = (long)plVar4;
      plVar4[2] = (long)plVar10;
      do {
        plVar10 = plVar4;
        plVar4 = (long *)*plVar10;
      } while (plVar4 != (long *)0x0);
      *plVar7 = (long)plVar10;
      plVar7[2] = *(long *)(auVar12._8_8_ + 0x10);
    }
    return;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  }
  if (uVar9 < 0x17) {
    param_1[0x17] = (char)uVar9;
    pcVar3 = param_1;
    if (uVar6 != 0) goto LAB_0028c940;
  }
  else {
    uVar6 = (uVar9 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar6 != 0x18) {
      uVar1 = uVar6;
    }
    pcVar3 = (char *)__Znwm(uVar1);
    *(char **)param_1 = pcVar3;
    *(ulong *)(param_1 + 8) = uVar9;
    *(ulong *)(param_1 + 0x10) = uVar1 | 0x8000000000000000;
LAB_0028c940:
    _bzero(pcVar3,uVar9);
  }
  pcVar3[uVar9] = '\0';
  pcVar3 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar3 = param_1;
  }
// WM - watermarked copy - do not remove
  uVar6 = 0;
  if (uVar11 != 2) {
    pcVar8 = pcVar3;
    do {
      plVar7 = param_2;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        plVar7 = (long *)*param_2;
      }
      *pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [*(byte *)((long)plVar7 + uVar6) >> 2];
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        bVar2 = *(byte *)(*param_2 + uVar6);
        cVar5 = *(char *)((long)param_2 + 0x17);
      }
      else {
        bVar2 = *(byte *)((long)param_2 + uVar6);
        cVar5 = *(char *)((long)param_2 + 0x17);
/*  chat: discord.gg/sdkhDjTex  */
      }
      plVar7 = param_2;
      if (cVar5 < '\0') {
        plVar7 = (long *)*param_2;
      }
      pcVar8[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [((ulong)bVar2 & 3) << 4 | (ulong)(*(byte *)((long)plVar7 + uVar6 + 1) >> 4)];
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        bVar2 = *(byte *)(*param_2 + uVar6 + 1);
        cVar5 = *(char *)((long)param_2 + 0x17);
      }
      else {
        bVar2 = *(byte *)((long)param_2 + uVar6 + 1);
        cVar5 = *(char *)((long)param_2 + 0x17);
      }
      plVar7 = param_2;
      if (cVar5 < '\0') {
        plVar7 = (long *)*param_2;
      }
      pcVar8[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
/* wm:more drops soon - github.com/pengussy */
                  [((ulong)bVar2 & 0xf) << 2 | (ulong)(*(byte *)((long)plVar7 + uVar6 + 2) >> 6)];
      plVar7 = param_2;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        plVar7 = (long *)*param_2;
      }
      pcVar3 = pcVar8 + 4;
      pcVar8[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(ulong)*(byte *)((long)plVar7 + uVar6 + 2) & 0x3f];
      uVar6 = uVar6 + 3;
      pcVar8 = pcVar3;
    } while (uVar6 < uVar11 - 2);
  }
  if (uVar11 <= uVar6) {
    return;
  }
  plVar7 = param_2;
/* WM - if you paid for this, you were scammed */
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    plVar7 = (long *)*param_2;
  }
  *pcVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
            [*(byte *)((long)plVar7 + uVar6) >> 2];
  if (uVar6 == uVar11 - 1) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      param_2 = (long *)*param_2;
    }
    pcVar3[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [((ulong)*(byte *)((long)param_2 + uVar6) & 3) * 0x10];
    cVar5 = '=';
    goto LAB_0028cb1c;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    uVar11 = ((ulong)*(byte *)(*param_2 + uVar6) & 3) << 4;
    if (-1 < *(char *)((long)param_2 + 0x17)) goto LAB_0028caf8;
LAB_0028cb58:
    pcVar3[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [uVar11 | *(byte *)(*param_2 + uVar6 + 1) >> 4];
    cVar5 = *(char *)((long)param_2 + 0x17);
  }
  else {
    uVar11 = ((ulong)*(byte *)((long)param_2 + uVar6) & 3) << 4;
    if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_0028cb58;
LAB_0028caf8:
    pcVar3[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [uVar11 | *(byte *)((long)param_2 + uVar6 + 1) >> 4];
    cVar5 = *(char *)((long)param_2 + 0x17);
  }
  if (cVar5 < '\0') {
/*  watermarked copy - do not remove  */
    param_2 = (long *)*param_2;
  }
  cVar5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
          [((ulong)*(byte *)((long)param_2 + uVar6 + 1) & 0xf) * 4];
LAB_0028cb1c:
  pcVar3[2] = cVar5;
  pcVar3[3] = '=';
  return;
}

