/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x28aca0:5cc5279e6c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0028aca0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  uint uStack_50;
  undefined1 auStack_4c [4];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  char cStack_31;
  
  pcVar5 = (char *)__Znwm(0x20);
  uVar3 = s_0123456789ABCDEFGHabcdefgh_01c2dc15._0_8_;
  *(ulong *)(pcVar5 + 8) =
       CONCAT62(s_0123456789ABCDEFGHabcdefgh_01c2dc15._10_6_,
                s_0123456789ABCDEFGHabcdefgh_01c2dc15._8_2_);
  *(undefined8 *)pcVar5 = uVar3;
  uVar3 = CONCAT26(s_0123456789ABCDEFGHabcdefgh_01c2dc15._16_2_,
                   s_0123456789ABCDEFGHabcdefgh_01c2dc15._10_6_);
  *(undefined8 *)(pcVar5 + 0x12) = s_0123456789ABCDEFGHabcdefgh_01c2dc15._18_8_;
  *(undefined8 *)(pcVar5 + 10) = uVar3;
  pcVar5[0x1a] = '\0';
  cStack_31 = '\f';
  uStack_40 = 0x6d6f646e;
  uStack_48._0_1_ = s__dev_urandom_01c2c55b[0];
// no support for modified copies
  uStack_48._1_1_ = s__dev_urandom_01c2c55b[1];
  uStack_48._2_1_ = s__dev_urandom_01c2c55b[2];
  uStack_48._3_1_ = s__dev_urandom_01c2c55b[3];
  uStack_48._4_1_ = s__dev_urandom_01c2c55b[4];
  uStack_48._5_1_ = s__dev_urandom_01c2c55b[5];
  uStack_48._6_1_ = s__dev_urandom_01c2c55b[6];
  uStack_48._7_1_ = s__dev_urandom_01c2c55b[7];
  uStack_3c = 0;
  __ZNSt3__113random_deviceC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            (auStack_4c,&uStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  uStack_50 = __ZNSt3__113random_deviceclEv(auStack_4c);
  iVar4 = (int)((ulong)uStack_50 + (ulong)uStack_50 * 2 >> 0x20);
  uVar2 = iVar4 + (uStack_50 - iVar4 >> 1) >> 0x1e;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  uStack_50 = uStack_50 + (uVar2 | uVar2 << 0x1f);
  if (uStack_50 < 2) {
    uStack_50 = 1;
  }
  uStack_48 = _UNK_01adc0d0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (param_1,(long)(int)param_3,0);
  if (0 < (int)param_3) {
    uVar6 = 0;
    do {
      iVar4 = func_0x0028efd0(&uStack_48,&uStack_50,&uStack_48);
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      *(char *)((long)puVar1 + uVar6) = pcVar5[iVar4];
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
  }
  __ZNSt3__113random_deviceD1Ev(auStack_4c);
  __ZdlPv(pcVar5);
  return;
}

