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
 *  file-id: 0x1a238:65a77c1617
 *  --------------------------------------------------------------------------*/

void FUN_0001a238(undefined8 *param_1,long param_2,long *param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong *puStack_a8;
  undefined7 uStack_a0;
  char cStack_99;
  ulong uStack_98;
  ulong *puStack_90;
  undefined7 uStack_88;
  byte bStack_81;
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar2 = param_3[1];
  if (*param_3 != lVar2) {
    lVar5 = *param_3 + 0x18;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    do {
      uVar6 = lVar5 - 0x18;
      FUN_0001b874(&uStack_b0,*(long *)(param_2 + 0x10) + 8,uVar6,lVar5);
      puVar4 = puStack_90;
      if (-1 < (char)bStack_81) {
        puVar4 = (ulong *)(ulong)bStack_81;
      }
      if (puVar4 == (ulong *)0x0) {
LAB_0001a348:
        if (-1 < cStack_99) goto LAB_0001a350;
LAB_0001a380:
        if (puStack_a8 != (ulong *)0x0) {
          uStack_d0 = (ulong)*(uint *)(lVar5 + 0x18);
          func_0x00017ae8(&uStack_c8,uStack_b0);
          goto LAB_0001a39c;
        }
LAB_0001a3e8:
        uVar3 = (uint)(char)bStack_81;
        puVar4 = puStack_90;
        if (-1 < (int)uVar3) {
          puVar4 = (ulong *)(ulong)bStack_81;
        }
/* wm:proprietary - see LICENSE - do not sell */
        if (puVar4 != (ulong *)0x0) goto LAB_0001a400;
LAB_0001a430:
        uStack_68 = *(ulong *)(param_4 + 8);
        uStack_d0 = uVar6;
        uStack_c8 = param_4;
        puStack_c0 = &uStack_68;
        puStack_80 = &uStack_68;
        uStack_78 = uVar6;
        uStack_70 = param_4;
        func_0x0001bed0(uStack_68 < *(ulong *)(param_4 + 0x10),&uStack_d0,&puStack_80);
        *(ulong *)(param_4 + 8) = uStack_68;
        if ((char)bStack_81 < '\0') goto LAB_0001a46c;
      }
      else {
        uStack_d0 = CONCAT44(1,*(undefined4 *)(lVar5 + 0x18));
        if ((char)bStack_81 < '\0') {
          func_0x00017ae8(&uStack_c8,uStack_98);
        }
        else {
          puStack_c0 = puStack_90;
          uStack_c8 = uStack_98;
          uStack_b8 = CONCAT17(bStack_81,uStack_88);
        }
        puVar4 = *(ulong **)(param_5 + 8);
        if (puVar4 < *(ulong **)(param_5 + 0x10)) {
          *puVar4 = uStack_d0;
          puVar4[3] = uStack_b8;
          puVar4[2] = (ulong)puStack_c0;
          puVar4[1] = uStack_c8;
          puStack_c0 = (ulong *)0x0;
          uStack_b8 = 0;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          uStack_c8 = 0;
          puVar4 = puVar4 + 4;
        }
        else {
          puVar4 = (ulong *)func_0x0001bd34(param_5,&uStack_d0);
        }
        *(ulong **)(param_5 + 8) = puVar4;
        if (-1 < (long)uStack_b8) goto LAB_0001a348;
        __ZdlPv(uStack_c8);
        if (cStack_99 < '\0') goto LAB_0001a380;
LAB_0001a350:
        if (cStack_99 == '\0') goto LAB_0001a3e8;
        uStack_d0 = (ulong)*(uint *)(lVar5 + 0x18);
        puStack_c0 = puStack_a8;
        uStack_c8 = uStack_b0;
        uStack_b8 = CONCAT17(cStack_99,uStack_a0);
LAB_0001a39c:
        puVar4 = *(ulong **)(param_5 + 8);
        if (puVar4 < *(ulong **)(param_5 + 0x10)) {
          *puVar4 = uStack_d0;
          puVar4[3] = uStack_b8;
          puVar4[2] = (ulong)puStack_c0;
          puVar4[1] = uStack_c8;
          puStack_c0 = (ulong *)0x0;
          uStack_b8 = 0;
          uStack_c8 = 0;
          puVar4 = puVar4 + 4;
        }
        else {
          puVar4 = (ulong *)func_0x0001bd34(param_5,&uStack_d0);
        }
        *(ulong **)(param_5 + 8) = puVar4;
        if (-1 < (long)uStack_b8) goto LAB_0001a3e8;
        __ZdlPv(uStack_c8);
        uVar3 = (uint)(char)bStack_81;
        puVar4 = puStack_90;
        if (-1 < (int)uVar3) {
          puVar4 = (ulong *)(ulong)bStack_81;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        }
        if (puVar4 == (ulong *)0x0) goto LAB_0001a430;
LAB_0001a400:
        if ((uVar3 >> 7 & 1) != 0) {
LAB_0001a46c:
          __ZdlPv(uStack_98);
        }
      }
      if (cStack_99 < '\0') {
        __ZdlPv(uStack_b0);
      }
      lVar1 = lVar5 + 0x20;
      lVar5 = lVar5 + 0x38;
    } while (lVar1 != lVar2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
// origin: github.com/pengussy
  func_0x0001c274();
  return;
}

