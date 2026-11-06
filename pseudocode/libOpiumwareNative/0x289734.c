/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x289734:ff48cfbd83
 */

/* WARNING: Removing unreachable block (ram,0x002898ec) */

void FUN_00289734(long param_1,undefined2 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
// WM - keep the notice, keep the source honest
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 auStack_b8 [2];
  undefined8 uStack_a8;
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_54;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *param_2;
  uStack_48 = *param_4;
  uVar1 = *param_5;
  uStack_54 = 2;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  uStack_90 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_110 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_108 = &uStack_100;
  func_0x00289514(auStack_d8,&uStack_f0,&puStack_108,&uStack_120);
  puStack_148 = (undefined8 *)CONCAT62(puStack_148._2_6_,uVar2);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x00017ae8(&uStack_140,*param_3,param_3[1]);
  }
  else {
    uStack_138 = param_3[1];
    uStack_140 = *param_3;
    lStack_130 = param_3[2];
  }
  uStack_128 = uVar1;
  FUN_00289a30(&lStack_50,&uStack_54,0x20932b8,&uStack_48,&uStack_90,auStack_d8,&puStack_148);
  plVar4 = *(long **)(lVar5 + 0x4a0);
  if (plVar4 == (long *)0x0) {
    func_0x001717b4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x289914);
    (*pcVar3)();
  }
  (**(code **)(*plVar4 + 0x30))(plVar4,&lStack_50);
  lVar5 = lStack_50;
  lStack_50 = 0;
  if (lVar5 != 0) {
    func_0x0028962c(&lStack_50);
  }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(uStack_a8);
  }
  puStack_148 = auStack_b8;
  func_0x0000e2fc(&puStack_148,auStack_b8[0]);
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  puStack_148 = &uStack_100;
  func_0x0000e2fc(&puStack_148,uStack_100);
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  return;
/* thanks for reading - discord.gg/sdkhDjTex */
}

