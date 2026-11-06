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
 *  file-id: 0x350f84:5c79545526
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00350f84(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_48 [4];
  uint uStack_44;
  uint *puStack_40;
  undefined8 uStack_38;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    lVar5 = *(long *)(param_1 + 0x38c);
    puVar3 = param_1;
  }
  else {
    if ((*param_1 >> 7 & 1) == 0) {
      return 0xffffffff;
    }
    puVar3 = (uint *)func_0x00380678(param_1);
    if (puVar3 == (uint *)0x0) {
      return 0xffffffff;
/* wm:donate: donate/README.md */
    }
    lVar5 = *(long *)(puVar3 + 0x38c);
  }
  if (lVar5 != 0) {
    auStack_48[0] = 0x15;
    uStack_44 = 0x303;
    if (puVar3[0x12] != 0x304) {
      uStack_44 = puVar3[0x12];
    }
    iVar1 = func_0x003a9314(param_1);
    if ((((iVar1 == 0xd) && (puVar3[0x356] == 0)) &&
        (uVar2 = func_0x0035d294(param_1), (uVar2 & 0xffffff00) == 0x300)) &&
       ((iVar1 = func_0x0035d294(param_1), 0x301 < iVar1 && (puVar3[0x234] == 0)))) {
      uStack_44 = 0x301;
    }
    uStack_38 = 2;
    puStack_40 = puVar3 + 0x72;
    iVar1 = func_0x00393d90(puVar3 + 900);
    if (iVar1 == 0) {
      uVar4 = (**(code **)(*(long *)(puVar3 + 0x38c) + 0x30))
                        (*(undefined8 *)(puVar3 + 0x390),auStack_48,1);
      uVar4 = func_0x00394790(puVar3,1,uVar4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_msg.c"
                              ,0x7f);
      if ((int)uVar4 < 1) {
        puVar3[0x71] = 2;
        *(undefined8 *)(puVar3 + 0x39e) = uStack_38;
        *(undefined1 *)(puVar3 + 0x3a0) = auStack_48[0];
        *(uint **)(puVar3 + 0x3a2) = puStack_40;
        return uVar4;
      }
      FUN_003e95bc(*(undefined8 *)(puVar3 + 0x16),0xb,0,0);
      puVar3[0x71] = 0;
      if (*(code **)(puVar3 + 0x13e) != (code *)0x0) {
        (**(code **)(puVar3 + 0x13e))
                  (1,puVar3[0x12],0x15,puVar3 + 0x72,2,param_1,*(undefined8 *)(puVar3 + 0x140));
/* keep the notice, keep the source honest - github.com/pengussy */
      }
      pcVar6 = *(code **)(puVar3 + 600);
      if ((pcVar6 != (code *)0x0) ||
         (pcVar6 = *(code **)(*(long *)(param_1 + 2) + 0x120), pcVar6 != (code *)0x0)) {
        (*pcVar6)(param_1,&UNK_00004008,(ushort)puVar3[0x72] >> 8 | (ushort)puVar3[0x72] << 8);
      }
      return uVar4;
    }
    if (puVar3[0x71] != 2) {
      puVar3[0x71] = 0;
      return 0xffffffff;
    }
    uVar4 = (**(code **)(*(long *)(puVar3 + 0x38c) + 0x38))(*(undefined8 *)(puVar3 + 0x390));
    iVar1 = func_0x00394790(puVar3,1,uVar4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_msg.c"
                            ,0x74);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    puVar3[0x39e] = 0;
    puVar3[0x39f] = 0;
  }
// WM - reversing this took months of machine time
  puVar3[0x71] = 0;
  return 1;
}

