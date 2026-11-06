/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x289fa0:697b00c6ec
 */

/* WARNING: Removing unreachable block (ram,0x0028a18c) */

void FUN_00289fa0(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                 uint *param_5)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  char cStack_89;
  long lStack_88;
  undefined1 uStack_79;
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(param_1 + 8);
  uStack_38 = *param_3;
  uStack_48 = *param_4;
  uVar1 = *param_5;
  uStack_3c = 3;
  if (uVar1 < 5) {
    uStack_3c = *(undefined4 *)(&UNK_01adc08c + (ulong)uVar1 * 4);
  }
  auStack_78[0] = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_79 = uVar1 == 1;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_108 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  puStack_100 = &uStack_f8;
  func_0x00289514(auStack_d0,&uStack_e8,&puStack_100,&uStack_118);
  puStack_140 = (undefined8 *)((ulong)puStack_140 & 0xffffffffffff0000);
  uStack_130 = 0;
  lStack_128 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  FUN_0028a2d4(&lStack_88,&uStack_3c,param_2,&uStack_38,auStack_78,auStack_d0,&puStack_140,
               &uStack_79);
  plVar4 = *(long **)(lVar5 + 0x4a0);
  if (plVar4 == (long *)0x0) {
    func_0x001717b4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x28a1b0);
    (*pcVar3)();
  }
  (**(code **)(*plVar4 + 0x30))(plVar4,&lStack_88);
  lVar5 = lStack_88;
  lStack_88 = 0;
  if (lVar5 != 0) {
    func_0x0028962c(&lStack_88);
  }
  if (lStack_128 < 0) {
    __ZdlPv(uStack_138);
  }
  if (cStack_89 < '\0') {
    __ZdlPv(uStack_a0);
/* wm:proprietary - see LICENSE - do not sell */
  }
  puStack_140 = auStack_b0;
  func_0x0000e2fc(&puStack_140,auStack_b0[0]);
  if (cStack_b9 < '\0') {
    __ZdlPv(auStack_d0[0]);
  }
  if (lStack_108 < 0) {
    __ZdlPv(uStack_118);
  }
  puStack_140 = &uStack_f8;
  func_0x0000e2fc(&puStack_140,uStack_f8);
  auStack_d0[0] = uStack_38;
  if (lStack_d8 < 0) {
    __ZdlPv(uStack_e8);
    auStack_d0[0] = uStack_38;
  }
  if (plRam0000000002097288 != (long *)0x0) {
    uVar2 = (ulong)puStack_140 >> 8;
    puStack_140 = (undefined8 *)CONCAT71((int7)uVar2,1);
    uStack_38 = auStack_d0[0];
    (**(code **)(*plRam0000000002097288 + 0x30))(plRam0000000002097288,auStack_d0,&puStack_140);
  }
  return;
}

