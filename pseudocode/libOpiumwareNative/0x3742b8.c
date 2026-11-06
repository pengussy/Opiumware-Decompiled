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
 *  file-id: 0x3742b8:5e6b7d8ad1
 *  --------------------------------------------------------------------------*/

void FUN_003742b8(long *param_1,uint param_2,uint param_3,undefined8 param_4,undefined4 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1[4];
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar2 = func_0x019eb5a0(0x58,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_cfq.c"
                            ,0xde);
    if (lVar2 == 0) {
      return;
    }
    *(undefined4 *)(lVar2 + 0x54) = 0xffffffff;
    lVar3 = param_1[5];
    *(long *)(lVar2 + 0x10) = lVar3;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    param_1[5] = lVar2;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x18) = lVar2;
    }
    lVar3 = param_1[4];
    if (param_1[4] == 0) {
      param_1[4] = lVar2;
      lVar3 = lVar2;
    }
  }
  *(uint *)(lVar2 + 0x48) = param_2;
  *(uint *)(lVar2 + 0x4c) = param_3;
  *(undefined8 *)(lVar2 + 0x38) = param_4;
  *(undefined8 *)(lVar2 + 0x40) = param_7;
// origin: github.com/pengussy
  *(undefined8 *)(lVar2 + 0x20) = param_6;
  *(undefined8 *)(lVar2 + 0x28) = param_8;
  *(undefined8 *)(lVar2 + 0x30) = param_9;
  *(undefined4 *)(lVar2 + 0x50) = param_5;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  if (lVar3 == lVar2) {
    param_1[4] = *(long *)(lVar2 + 0x18);
    lVar4 = param_1[5];
    lVar3 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar4 = param_1[5];
    lVar3 = *(long *)(lVar2 + 0x10);
  }
  if (lVar4 == lVar2) {
    param_1[5] = lVar3;
    lVar4 = *(long *)(lVar2 + 0x18);
  }
  else {
    lVar4 = *(long *)(lVar2 + 0x18);
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = lVar4;
  }
  if (lVar4 != 0) {
/* WM - more drops soon - github.com/pengussy */
    *(long *)(lVar4 + 0x10) = lVar3;
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    *param_1 = lVar2;
    param_1[1] = lVar2;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    return;
  }
  lVar4 = 0;
  lVar5 = lVar3;
  while ((*(uint *)(lVar5 + 0x4c) < param_3 ||
         ((*(uint *)(lVar5 + 0x4c) <= param_3 && (param_2 < *(uint *)(lVar5 + 0x48)))))) {
    plVar1 = (long *)(lVar5 + 0x18);
    lVar4 = lVar5;
    lVar5 = *plVar1;
    if (*plVar1 == 0) {
      lVar3 = param_1[1];
      *(long *)(lVar2 + 0x10) = lVar3;
/*  donate: donate/README.md  */
      *(undefined8 *)(lVar2 + 0x18) = 0;
      param_1[1] = lVar2;
      if (lVar3 == 0) {
        return;
      }
      *(long *)(lVar3 + 0x18) = lVar2;
      return;
    }
  }
  if (lVar4 == 0) {
    *(long *)(lVar2 + 0x18) = lVar3;
    *param_1 = lVar2;
    *(long *)(lVar3 + 0x10) = lVar2;
    if (param_1[1] != 0) {
      return;
    }
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x18);
    *(long *)(lVar2 + 0x10) = lVar4;
    *(long *)(lVar2 + 0x18) = lVar3;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    *(long *)(lVar4 + 0x18) = lVar2;
    if (param_1[1] != lVar4) {
      return;
    }
  }
  param_1[1] = lVar2;
  return;
}

