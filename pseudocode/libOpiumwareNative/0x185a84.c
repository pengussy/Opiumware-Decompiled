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
 *  file-id: 0x185a84:bad831fbfc
 *  --------------------------------------------------------------------------*/

undefined1  [16] FUN_00185a84(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  uint7 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 uStack_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  undefined1 uStack_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  ulong uStack_48;
  undefined8 *puStack_40;
/* donate: donate/README.md */
  undefined1 uStack_35;
  undefined4 uStack_34;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 6) * 8) >> (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar11 = 0;
    lVar12 = 0;
    goto LAB_00185c84;
  }
  puStack_40 = (undefined8 *)0x0;
  uStack_48 = 3;
  puVar4 = (undefined8 *)__Znwm(0x18);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x00017ae8(puVar4,*param_2,param_2[1]);
  }
  else {
    uVar11 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar11;
    puVar4[2] = param_2[2];
  }
  puStack_40 = puVar4;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if ((param_3 & 1) == 0) {
    uStack_34 = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
    uStack_35 = 5;
    plVar5 = (long *)param_1[0xf];
    if (plVar5 == (long *)0x0) {
      func_0x001717b4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x185ca8);
      (*pcVar3)();
    }
    uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,&uStack_34,&uStack_35,&uStack_48);
    uVar11 = _uStack_60;
    if ((uVar6 & 1) != 0) goto LAB_00185b4c;
LAB_00185c40:
    _uStack_60 = uVar11;
    uVar11 = 0;
// origin: github.com/pengussy
    lVar12 = 0;
  }
  else {
LAB_00185b4c:
    puVar4 = puStack_40;
    uVar11 = _uStack_60;
    uVar2 = uStack_48._1_7_;
    uStack_60 = (undefined1)uStack_48;
    if (param_1[1] == param_1[2]) {
      uStack_48 = (ulong)uStack_48._1_7_ << 8;
      puStack_40 = (undefined8 *)0x0;
      puVar9 = (undefined1 *)*param_1;
      uVar1 = *puVar9;
      *puVar9 = uStack_60;
      _uStack_60 = CONCAT71(uVar2,uVar1);
      uStack_58 = *(undefined8 *)(puVar9 + 8);
      *(undefined8 **)(puVar9 + 8) = puVar4;
      FUN_00183bbc((ulong)&uStack_60 | 8);
      lVar12 = *param_1;
    }
    else {
      pcVar8 = *(char **)(param_1[2] + -8);
      if (pcVar8 == (char *)0x0) goto LAB_00185c40;
      _uStack_60 = uVar11;
      if (*pcVar8 == '\x02') {
        lVar12 = *(long *)(pcVar8 + 8);
        puVar7 = *(ulong **)(lVar12 + 8);
        if (puVar7 < *(ulong **)(lVar12 + 0x10)) {
          puVar7[1] = (ulong)puStack_40;
          *puVar7 = uStack_48;
          uStack_48 = uStack_48 & 0xffffffffffffff00;
          puStack_40 = (undefined8 *)0x0;
          puVar7 = puVar7 + 2;
        }
        else {
/* watermarked copy - do not remove */
          puVar7 = (ulong *)func_0x00182dd4(lVar12,&uStack_48);
        }
        *(ulong **)(lVar12 + 8) = puVar7;
        lVar12 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar6 = param_1[8] - 1;
        uVar10 = *(ulong *)(param_1[7] + (uVar6 >> 6) * 8);
        param_1[8] = uVar6;
        if ((uVar10 >> (uVar6 & 0x3f) & 1) == 0) goto LAB_00185c40;
        uStack_48 = (ulong)uStack_48._1_7_ << 8;
        puStack_40 = (undefined8 *)0x0;
        puVar9 = (undefined1 *)param_1[10];
        uVar1 = *puVar9;
        *puVar9 = uStack_60;
        _uStack_70 = CONCAT71(uVar2,uVar1);
        uStack_68 = *(undefined8 *)(puVar9 + 8);
        *(undefined8 **)(puVar9 + 8) = puVar4;
        FUN_00183bbc((ulong)&uStack_70 | 8);
        lVar12 = param_1[10];
      }
    }
    uVar11 = 1;
  }
  FUN_00183bbc(&puStack_40,uStack_48 & 0xff);
LAB_00185c84:
  auVar13._8_8_ = lVar12;
  auVar13._0_8_ = uVar11;
// WM - thanks for reading - discord.gg/sdkhDjTex
  return auVar13;
}

