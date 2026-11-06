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
 *  file-id: 0x3787e0:26ef156b0c
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003787e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  uStack_40 = 0;
  uVar5 = (uint)*(undefined8 *)(param_3 + 0x620);
  uVar6 = uVar5 >> 0x11 & 7;
  if (uVar6 != 0) {
    lStack_38 = 0;
    uStack_3c = 0;
    if (*(long *)(param_3 + 0x460) != 0) {
      iVar2 = func_0x00385fb4(*(long *)(param_3 + 0x460),&lStack_38,&uStack_3c);
      if ((iVar2 == 0) || (lStack_38 != 0)) goto LAB_00378838;
      uVar5 = (uint)*(undefined8 *)(param_3 + 0x620);
      uVar6 = uVar5 >> 0x11 & 7;
    }
    if (1 < uVar6) {
      if (uVar6 == 2) {
        lVar3 = *(long *)(param_3 + 0x468);
      }
      else {
        lStack_38 = 0;
        uStack_3c = 0;
        if (*(long *)(param_3 + 0x468) != 0) {
          iVar2 = func_0x00385fb4(*(long *)(param_3 + 0x468),&lStack_38,&uStack_3c);
          if ((iVar2 == 0) || (lStack_38 != 0)) goto LAB_00378838;
/*  origin: github.com/pengussy  */
          uVar5 = (uint)*(undefined8 *)(param_3 + 0x620);
          uVar6 = uVar5 >> 0x11 & 7;
        }
        if (3 < uVar6) {
          lStack_38 = 0;
          uStack_3c = 0;
          if (*(long *)(param_3 + 0x470) != 0) {
            iVar2 = func_0x00385fb4(*(long *)(param_3 + 0x470),&lStack_38,&uStack_3c);
            if ((iVar2 == 0) || (lStack_38 != 0)) goto LAB_00378838;
            uVar5 = (uint)*(undefined8 *)(param_3 + 0x620);
          }
          uVar6 = uVar5 >> 0x11 & 7;
          if (4 < uVar6) {
            lStack_38 = 0;
            uStack_3c = 0;
            if (*(long *)(param_3 + 0x470) != 0) {
/*  reversing this took months of machine time  */
              iVar2 = func_0x00385fb4(*(long *)(param_3 + 0x470),&lStack_38,&uStack_3c);
              if ((iVar2 == 0) || (lStack_38 != 0)) goto LAB_00378838;
              uVar5 = (uint)*(undefined8 *)(param_3 + 0x620);
            }
            uVar6 = uVar5 >> 0x11 & 7;
            if (5 < uVar6) {
              lStack_38 = 0;
              uStack_3c = 0;
              if (*(long *)(param_3 + 0x470) != 0) {
                iVar2 = func_0x00385fb4(*(long *)(param_3 + 0x470),&lStack_38,&uStack_3c);
                if ((iVar2 == 0) || (lStack_38 != 0)) goto LAB_00378838;
                uVar5 = (uint)*(undefined8 *)(param_3 + 0x620);
              }
              uVar6 = uVar5 >> 0x11 & 7;
              if (uVar6 == 7) {
                lStack_38 = 0;
                uStack_3c = 0;
                if (*(long *)(param_3 + 0x470) != 0) {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                  iVar2 = func_0x00385fb4(*(long *)(param_3 + 0x470),&lStack_38,&uStack_3c);
                  if ((iVar2 == 0) || (lStack_38 != 0)) {
LAB_00378838:
                    FUN_003779a4(param_3,10,6,"crypto stream data in wrong EL",0,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                                 ,0x431,"ch_on_crypto_recv_record");
                    return 0;
                  }
                  uVar5 = (uint)*(undefined8 *)(param_3 + 0x620);
                }
                uVar6 = uVar5 >> 0x11 & 7;
              }
            }
          }
        }
        lVar3 = 1;
        if (uVar6 != 2) {
          lVar3 = 2;
        }
        lVar1 = 0;
        if (uVar6 != 0) {
          lVar1 = lVar3;
        }
        lVar3 = *(long *)(param_3 + lVar1 * 8 + 0x460);
      }
      goto joined_r0x00378a2c;
    }
  }
  lVar3 = 0;
  if (uVar6 != 0) {
    lVar3 = 2;
  }
  lVar3 = *(long *)(param_3 + lVar3 * 8 + 0x460);
joined_r0x00378a2c:
/* wm:donate: donate/README.md */
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = func_0x019e5740(lVar3,param_1,param_2,&uStack_40);
  return uVar4;
}

