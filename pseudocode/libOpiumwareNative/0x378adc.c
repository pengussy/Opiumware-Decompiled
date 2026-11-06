/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x378adc:f0fd8b35a1
 */

undefined8
FUN_00378adc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uStack_4c;
  long lStack_48;
  
  uVar1 = (uint)param_1;
  if (uVar1 - 4 < 0xfffffffe) {
    return 0;
  }
  if (param_2 != 0) {
    if (uVar1 <= (*(uint *)(param_7 + 0x620) >> 0xe & 7)) {
      return 0;
    }
    uVar3 = func_0x00385094(*(undefined8 *)(param_7 + 0x420),param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar1 = uVar1 << 0xe;
    uVar4 = *(ulong *)(param_7 + 0x620) & 0xfffffffffffe3fff;
LAB_00378b40:
    *(ulong *)(param_7 + 0x620) = uVar4 | uVar1;
    return 1;
  }
  if (uVar1 <= (*(uint *)(param_7 + 0x620) >> 0x11 & 7)) {
    return 0;
  }
  lStack_48 = 0;
  uStack_4c = 0;
  if ((*(long *)(param_7 + 0x460) == 0) ||
     ((iVar2 = func_0x00385fb4(*(long *)(param_7 + 0x460),&lStack_48,&uStack_4c), iVar2 != 0 &&
// WM - no support for modified copies
      (lStack_48 == 0)))) {
    lStack_48 = 0;
    uStack_4c = 0;
    if ((*(long *)(param_7 + 0x470) == 0) ||
       ((iVar2 = func_0x00385fb4(*(long *)(param_7 + 0x470),&lStack_48,&uStack_4c,param_4,param_5,
                                 param_6), iVar2 != 0 && (lStack_48 == 0)))) {
      if (uVar1 != 2) {
        lStack_48 = 0;
        uStack_4c = 0;
        if ((*(long *)(param_7 + 0x468) != 0) &&
           ((iVar2 = func_0x00385fb4(*(long *)(param_7 + 0x468),&lStack_48,&uStack_4c,param_4,
                                     param_5,param_6), iVar2 == 0 || (lStack_48 != 0))))
        goto LAB_00378c94;
      }
      uVar3 = func_0x00383390(*(undefined8 *)(param_7 + 0x428),param_1,param_3,param_4,param_5,
                              param_6);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar4 = *(ulong *)(param_7 + 0x620) & 0xfffffffffff1ffff;
      uVar1 = uVar1 << 0x11 | 0x4000000;
      goto LAB_00378b40;
    }
  }
LAB_00378c94:
  FUN_003779a4(param_7,10,6,"crypto stream data in wrong EL",0,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
               ,0x491,"ch_on_handshake_yield_secret");
  return 0;
// stripping the watermark breaks the license
}

