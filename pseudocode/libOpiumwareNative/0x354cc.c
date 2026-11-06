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
 *  file-id: 0x354cc:42e6b5aba3
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000354cc(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 uStack_49;
  undefined8 ****ppppuStack_48;
  
  if (((param_3 == 0) || (param_4 < 0x10)) ||
     (uVar3 = *(uint *)(param_3 + 0xc), (ulong)param_4 - 0x10 < (ulong)uVar3)) {
    return 0;
  }
  if ((uVar3 != 0) && (*(char *)(param_3 + (ulong)(uVar3 - 1) + 0x10) != '\0')) {
    return 0;
  }
  FUN_00017a2c(&lStack_58);
  lVar7 = lStack_58;
  uVar5 = _strlen(lStack_58);
  if (0x7ffffffffffffff6 < uVar5) {
    FUN_0000aa50();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x35704);
    (*pcVar4)();
  }
  if (uVar5 < 0x17) {
/* wm:proprietary - see LICENSE - do not sell */
    uStack_60 = CONCAT17((char)uVar5,(undefined7)uStack_60);
    ppppuVar6 = &ppppuStack_70;
  }
  else {
    uVar1 = (uVar5 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    ppppuVar6 = (undefined8 ****)__Znwm(uVar2);
    uStack_60 = uVar2 | 0x8000000000000000;
    ppppuStack_70 = ppppuVar6;
    uStack_68 = uVar5;
  }
  _memmove(ppppuVar6,lVar7,uVar5);
  *(undefined1 *)((long)ppppuVar6 + uVar5) = 0;
  func_0x00038600(&lStack_b0,param_3);
  auVar11 = func_0x000382b0(param_1 + 0x68,&lStack_b0);
  puVar8 = auVar11._8_8_;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  puVar10 = (undefined8 *)*puVar8;
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)__Znwm(0x60);
    puVar10[5] = uStack_a8;
    puVar10[4] = lStack_b0;
    puVar10[7] = uStack_98;
    puVar10[6] = uStack_a0;
    puVar10[8] = lStack_90;
    uStack_a0 = 0;
    uStack_98 = 0;
    puVar10[10] = uStack_80;
    puVar10[9] = uStack_88;
    puVar10[0xb] = lStack_78;
    lStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_78 = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = auVar11._0_8_;
    *puVar8 = puVar10;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    puVar9 = puVar10;
    if (**(long **)(param_1 + 0x68) != 0) {
      *(long *)(param_1 + 0x68) = **(long **)(param_1 + 0x68);
      puVar9 = (undefined8 *)*puVar8;
    }
    func_0x0001c604(*(undefined8 *)(param_1 + 0x70),puVar9);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  }
  if (lStack_78 < 0) {
    __ZdlPv(uStack_88);
  }
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  lStack_b0 = param_1 + 0x50;
  ppppuStack_48 = &ppppuStack_70;
  lVar7 = func_0x000386dc(&lStack_b0,&ppppuStack_70,&UNK_01bd2568,&ppppuStack_48,&uStack_49);
  *(undefined8 **)(lVar7 + 0x38) = puVar10 + 4;
  if ((long)uStack_60 < 0) {
    __ZdlPv(ppppuStack_70);
  }
  if (lStack_58 != 0) {
    __ZdaPv();
  }
  return 1;
}

