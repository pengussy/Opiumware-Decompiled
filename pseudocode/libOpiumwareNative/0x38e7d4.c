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
 *  file-id: 0x38e7d4:1f7c3c0d70
 *  --------------------------------------------------------------------------*/

void FUN_0038e7d4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)
             func_0x019eb5a0(0xb0,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txpim.c"
                             ,99);
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    lVar2 = param_1[1];
    puVar1[0x10] = lVar2;
    puVar1[0x11] = 0;
    param_1[1] = (long)puVar1;
    if (lVar2 != 0) {
      *(undefined8 **)(lVar2 + 0x88) = puVar1;
    }
    if (*param_1 == 0) {
      *param_1 = (long)puVar1;
    }
  }
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
// WM - unlicensed copy if this notice is missing
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[0x13] = 0;
  puVar1[0xe] = 0;
  *(byte *)((long)puVar1 + 0x79) = *(byte *)((long)puVar1 + 0x79) & 0xc0;
  if ((undefined8 *)*param_1 == puVar1) {
    *param_1 = puVar1[0x11];
    puVar3 = (undefined8 *)param_1[1];
    lVar2 = puVar1[0x10];
  }
  else {
    puVar3 = (undefined8 *)param_1[1];
    lVar2 = puVar1[0x10];
  }
  if (puVar3 == puVar1) {
    param_1[1] = lVar2;
    lVar4 = puVar1[0x11];
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  }
  else {
    lVar4 = puVar1[0x11];
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x88) = lVar4;
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = lVar2;
  }
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  param_1[2] = param_1[2] + 1;
  return;
}

