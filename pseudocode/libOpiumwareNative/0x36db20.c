/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36db20:fd555cbc72
 */

undefined8
FUN_0036db20(long param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 *puStack_160;
  ulong uStack_158;
  undefined4 uStack_150;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  uint uStack_134;
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puStack_140 = param_2;
  lVar2 = func_0x003542a0();
  lVar3 = func_0x0044efa4();
  uVar5 = 0;
  if ((lVar3 != 0) && (lVar2 != 0)) {
    iVar1 = func_0x003aa548(param_1);
    if ((iVar1 != 0) && (iVar1 = func_0x019e968c(lVar3,lVar2,0), 0 < iVar1)) {
      uVar5 = 0;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      if (param_8 != 0) {
        uVar5 = param_7;
      }
      iVar1 = func_0x019e969c(lVar3,param_6,uVar5);
      if ((((0 < iVar1) && (iVar1 = func_0x019e9778(lVar3,auStack_f0,&uStack_134), 0 < iVar1)) &&
          (iVar1 = func_0x019e968c(lVar3,lVar2,0), 0 < iVar1)) &&
         (iVar1 = func_0x019e9778(lVar3,auStack_130,&uStack_138), 0 < iVar1)) {
        uStack_158 = (ulong)uStack_134;
        uStack_150 = 1;
        puStack_160 = auStack_b0;
        iVar1 = FUN_0036c144(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x91],
                             lVar2,param_1 + 0x7fc,param_4,param_5,auStack_130,uStack_138);
        if (iVar1 != 0) {
          uStack_150 = 1;
          puStack_160 = puStack_140;
          uStack_158 = param_3;
          uVar5 = FUN_0036c144(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x91],
                               lVar2,auStack_b0,"exporter",8,auStack_f0,uStack_134);
          goto LAB_0036dc94;
        }
      }
    }
    uVar5 = 0;
  }
/* more drops soon - github.com/pengussy - github.com/pengussy */
LAB_0036dc94:
  func_0x0044efb8(lVar3);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar5;
  }
  lVar2 = ___stack_chk_fail();
  uVar5 = func_0x004466d8(0x14,&UNK_000c0103,0,&puStack_160);
  if ((*(int *)(lVar2 + 0xb8) == 0) || (*(int *)(lVar2 + 0x98) != 1)) {
    *(undefined4 *)(lVar2 + 0xb8) = 1;
    if ((*(long *)(lVar2 + 0xe28) != 0) &&
       (pcVar4 = *(code **)(*(long *)(lVar2 + 0xe28) + 0x80), pcVar4 != (code *)0x0)) {
      (*pcVar4)(*(undefined8 *)(lVar2 + 0xe38),1);
    }
    *(undefined4 *)(lVar2 + 0x98) = 1;
    uVar5 = func_0x00350e94(lVar2,2,0x50);
  }
  return uVar5;
}

