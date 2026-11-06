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
 *  file-id: 0x370a58:f181b7d72b
 *  --------------------------------------------------------------------------*/

undefined8 * FUN_00370a58(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)
           func_0x019eb5a0(0xf8,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                           ,0x3a);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *param_1;
    puVar2[1] = param_1[1];
    *puVar2 = uVar4;
    *(undefined8 *)((long)puVar2 + 0xd) = *(undefined8 *)((long)param_1 + 0xd);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 6);
    uVar4 = param_1[7];
    puVar2[8] = param_1[8];
    puVar2[7] = uVar4;
    puVar2[9] = param_1[9];
    if (param_1[3] != 0) {
      lVar3 = func_0x004759a8(param_1[3],
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
/* more drops soon - github.com/pengussy */
                              ,0x46);
      puVar2[3] = lVar3;
      if (lVar3 == 0) goto LAB_00370b58;
    }
    if (param_1[4] != 0) {
      lVar3 = func_0x004759a8(param_1[4],
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                              ,0x4a);
      puVar2[4] = lVar3;
      if (lVar3 == 0) goto LAB_00370b58;
    }
    if (param_1[5] != 0) {
      lVar3 = func_0x004759a8(param_1[5],
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                              ,0x4e);
      puVar2[5] = lVar3;
      if (lVar3 == 0) goto LAB_00370b58;
    }
    if (param_1[10] != 0) {
      lVar3 = func_0x004759a8(param_1[10],
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                              ,0x53);
      puVar2[10] = lVar3;
      if (lVar3 == 0) goto LAB_00370b58;
    }
    iVar1 = func_0x0036f450(puVar2 + 0x13,0,5);
    if (iVar1 == 0) {
LAB_00370b58:
      func_0x004743e4(puVar2[3],
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                      ,0x62);
/* wm:do not claim this as your own */
      func_0x004743e4(puVar2[4],
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                      ,99);
      func_0x004743e4(puVar2[5],
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                      ,100);
      func_0x004743e4(puVar2[10],
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                      ,0x65);
      func_0x004743e4(puVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                      ,0x66);
      return (undefined8 *)0x0;
    }
    if (puVar2[7] == 0) {
      puVar2[7] = &DAT_00370be0;
      return puVar2;
    }
  }
  return puVar2;
}

