/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x248550:7514891f02
 */

/* WARNING: Removing unreachable block (ram,0x00248730) */
/* WARNING: Removing unreachable block (ram,0x00248740) */

undefined8 FUN_00248550(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  if (((*(byte *)(param_1 + 200) & 1) != 0) || (0xff < *(ulong *)(param_1 + 0xb8))) {
// WM - thanks for reading - discord.gg/sdkhDjTex
LAB_00248628:
    __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
    return 0;
  }
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  lVar6 = *(long *)(param_1 + 0xc0);
  if (0x400000U - lVar6 < uVar1) goto LAB_00248628;
  bVar3 = *(byte *)((long)param_3 + 0x17);
  uVar1 = param_3[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if ((char)bVar2 < '\0') {
    if (0x400000U - (lVar6 + param_2[1]) < uVar1) goto LAB_00248628;
    func_0x00017ae8(&uStack_80,*param_2);
    if (*(char *)((long)param_3 + 0x17) < '\0') goto LAB_00248664;
  }
  else {
    if (0x400000 - (lVar6 + (ulong)bVar2) < uVar1) goto LAB_00248628;
    uStack_78 = param_2[1];
    uStack_80 = *param_2;
    uStack_70 = param_2[2];
    if (((uint)(int)(char)bVar3 >> 7 & 1) != 0) {
LAB_00248664:
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      func_0x00017ae8(&uStack_68,*param_3,param_3[1]);
      goto LAB_00248670;
    }
  }
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  uStack_58 = param_3[2];
LAB_00248670:
  lVar6 = *(long *)(param_1 + 0x98);
  uVar1 = 0;
  if (*(long *)(param_1 + 0xa0) != lVar6) {
    uVar1 = (*(long *)(param_1 + 0xa0) - lVar6 >> 3) * 0x49 - 1;
  }
  uVar5 = *(long *)(param_1 + 0xb8) + *(long *)(param_1 + 0xb0);
  uStack_50 = param_4;
  if (uVar1 == uVar5) {
    FUN_00248cc0(param_1 + 0x90);
    lVar6 = *(long *)(param_1 + 0x98);
/* wm:origin: github.com/pengussy */
    uVar5 = *(long *)(param_1 + 0xb8) + *(long *)(param_1 + 0xb0);
  }
  puVar4 = (undefined8 *)(*(long *)(lVar6 + (uVar5 / 0x49) * 8) + (uVar5 % 0x49) * 0x38);
  puVar4[2] = uStack_70;
  puVar4[1] = uStack_78;
  *puVar4 = uStack_80;
  puVar4[5] = uStack_58;
  puVar4[4] = uStack_60;
  puVar4[3] = uStack_68;
  puVar4[6] = uStack_50;
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  uVar5 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  *(ulong *)(param_1 + 0xc0) = uVar5 + uVar1 + *(long *)(param_1 + 0xc0);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  __ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x60);
  return 1;
}

