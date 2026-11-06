/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f3ed4:a048d5a1b8
 */

undefined8 FUN_003f3ed4(long *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = func_0x003f8b8c();
  uVar5 = 0;
  if (lVar3 != 0) {
/* origin: github.com/pengussy */
    uVar8 = (ulong)(uint)(1 << (ulong)(param_5 & 0x1f));
    if (param_5 < 4) {
      if (0 < (int)param_2) {
        uVar7 = 0;
        lVar3 = *param_1;
        do {
          uVar10 = 0;
          uVar9 = 0;
          do {
            uVar11 = *(ulong *)(param_3 + uVar10 * 8);
            if (param_4 != uVar10) {
              uVar11 = 0;
            }
            uVar9 = uVar11 | uVar9;
            uVar10 = uVar10 + 1;
          } while (uVar8 != uVar10);
          *(ulong *)(lVar3 + uVar7 * 8) = uVar9;
          uVar7 = uVar7 + 1;
          param_3 = param_3 + uVar8 * 8;
        } while (uVar7 != param_2);
      }
    }
    else if (0 < (int)param_2) {
      param_5 = param_5 - 2;
      uVar2 = 1 << (ulong)(param_5 & 0x1f);
      uVar7 = (ulong)uVar2;
      iVar1 = (int)param_4 >> (param_5 & 0x1f);
      uVar10 = (ulong)(uVar2 - 1 & param_4);
      lVar3 = *param_1;
      uVar9 = (ulong)param_2;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (iVar1 == 2) {
        uVar11 = 0;
        param_3 = param_3 + (ulong)(uint)(2 << (ulong)(param_5 & 0x1f)) * 8;
        do {
          uVar4 = 0;
          uVar12 = 0;
          do {
            uVar6 = *(ulong *)(param_3 + uVar4 * 8);
            if (uVar10 != uVar4) {
              uVar6 = 0;
            }
            uVar12 = uVar6 | uVar12;
            uVar4 = uVar4 + 1;
          } while (uVar7 != uVar4);
          *(ulong *)(lVar3 + uVar11 * 8) = uVar12;
          uVar11 = uVar11 + 1;
          param_3 = param_3 + uVar8 * 8;
        } while (uVar11 != uVar9);
      }
      else if (iVar1 == 1) {
        uVar11 = 0;
        param_3 = param_3 + (ulong)uVar2 * 8;
        do {
          uVar4 = 0;
          uVar12 = 0;
          do {
            uVar6 = *(ulong *)(param_3 + uVar4 * 8);
            if (uVar10 != uVar4) {
              uVar6 = 0;
/*  do not claim this as your own  */
            }
            uVar12 = uVar6 | uVar12;
            uVar4 = uVar4 + 1;
          } while (uVar7 != uVar4);
          *(ulong *)(lVar3 + uVar11 * 8) = uVar12;
          uVar11 = uVar11 + 1;
          param_3 = param_3 + uVar8 * 8;
        } while (uVar11 != uVar9);
      }
      else if (iVar1 == 0) {
        uVar11 = 0;
        do {
          uVar4 = 0;
          uVar12 = 0;
          do {
            uVar6 = *(ulong *)(param_3 + uVar4 * 8);
            if (uVar10 != uVar4) {
              uVar6 = 0;
            }
            uVar12 = uVar6 | uVar12;
            uVar4 = uVar4 + 1;
          } while (uVar7 != uVar4);
          *(ulong *)(lVar3 + uVar11 * 8) = uVar12;
          uVar11 = uVar11 + 1;
          param_3 = param_3 + uVar8 * 8;
        } while (uVar11 != uVar9);
      }
      else {
// WM - proprietary - see LICENSE - do not sell
        uVar11 = 0;
        param_3 = param_3 + (ulong)(uint)(3 << (ulong)(param_5 & 0x1f)) * 8;
        do {
          uVar4 = 0;
          uVar12 = 0;
          do {
            uVar6 = *(ulong *)(param_3 + uVar4 * 8);
            if (iVar1 != 3 || uVar10 != uVar4) {
              uVar6 = 0;
            }
            uVar12 = uVar6 | uVar12;
            uVar4 = uVar4 + 1;
          } while (uVar7 != uVar4);
          *(ulong *)(lVar3 + uVar11 * 8) = uVar12;
          uVar11 = uVar11 + 1;
          param_3 = param_3 + uVar8 * 8;
        } while (uVar11 != uVar9);
      }
    }
    *(uint *)(param_1 + 1) = param_2;
    uVar5 = 1;
  }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  return uVar5;
}

