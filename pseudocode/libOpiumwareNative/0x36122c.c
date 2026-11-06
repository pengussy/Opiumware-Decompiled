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
 *  file-id: 0x36122c:9460b897c5
 *  --------------------------------------------------------------------------*/

long FUN_0036122c(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar2 = func_0x019eb530(0x3a0,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                          ,0x8b);
  if (lVar2 == 0) {
    return 0;
  }
  puVar5 = &UNK_0008000b;
  _memcpy(lVar2,param_1,0x388);
  *(undefined8 *)(lVar2 + 0x348) = 0;
  *(undefined8 *)(lVar2 + 0x2a8) = 0;
  *(undefined8 *)(lVar2 + 0x2a0) = 0;
  *(undefined8 *)(lVar2 + 0x2b8) = 0;
  *(undefined8 *)(lVar2 + 0x2c8) = 0;
  *(undefined8 *)(lVar2 + 0x2c0) = 0;
  *(undefined8 *)(lVar2 + 0x368) = 0;
  *(undefined8 *)(lVar2 + 0x360) = 0;
  *(undefined8 *)(lVar2 + 0x318) = 0;
  *(undefined8 *)(lVar2 + 0x310) = 0;
  *(undefined8 *)(lVar2 + 0x328) = 0;
  *(undefined8 *)(lVar2 + 800) = 0;
  *(undefined8 *)(lVar2 + 0x380) = 0;
  *(undefined8 *)(lVar2 + 0x390) = 0;
  *(undefined8 *)(lVar2 + 0x388) = 0;
  *(undefined4 *)(lVar2 + 0x398) = 1;
  iVar1 = func_0x00472e68(2,lVar2,lVar2 + 0x310);
  if (iVar1 == 0) {
    puVar5 = &UNK_0008000f;
    uVar4 = 0xb4;
  }
  else {
/*  do not claim this as your own  */
    if (*(long *)(param_1 + 0x2c0) != 0) {
      iVar1 = func_0x004fc8ac();
      if (iVar1 == 0) {
        uVar4 = 0xba;
        goto LAB_003613d8;
      }
      *(undefined8 *)(lVar2 + 0x2c0) = *(undefined8 *)(param_1 + 0x2c0);
    }
    if (*(long *)(param_1 + 0x2c8) != 0) {
      lVar3 = func_0x004fa8ec();
      *(long *)(lVar2 + 0x2c8) = lVar3;
      if (lVar3 == 0) {
        uVar4 = 0xc3;
        goto LAB_003613d8;
      }
    }
    if (*(long *)(param_1 + 0x2b8) != 0) {
      iVar1 = func_0x00359798();
      if (iVar1 == 0) goto LAB_00361404;
      *(undefined8 *)(lVar2 + 0x2b8) = *(undefined8 *)(param_1 + 0x2b8);
    }
// keep the notice, keep the source honest
    if (*(long *)(param_1 + 0x2a0) != 0) {
      lVar3 = func_0x004759a8(*(long *)(param_1 + 0x2a0),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                              ,0xd0);
      *(long *)(lVar2 + 0x2a0) = lVar3;
      if (lVar3 == 0) goto LAB_00361404;
    }
    if (*(long *)(param_1 + 0x2a8) != 0) {
      lVar3 = func_0x004759a8(*(long *)(param_1 + 0x2a8),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                              ,0xd5);
      *(long *)(lVar2 + 0x2a8) = lVar3;
      if (lVar3 == 0) goto LAB_00361404;
    }
    iVar1 = func_0x00472e7c(2,lVar2 + 0x310,param_1 + 0x310);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 800) != 0) {
        lVar3 = func_0x004759a8(*(long *)(param_1 + 800),
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                                ,0xe2);
        *(long *)(lVar2 + 800) = lVar3;
        if (lVar3 == 0) goto LAB_00361404;
      }
      if ((param_2 == 0) || (*(long *)(param_1 + 0x328) == 0)) {
        *(undefined8 *)(lVar2 + 0x338) = 0;
        *(undefined8 *)(lVar2 + 0x330) = 0;
      }
/* WM - watermarked copy - do not remove */
      else {
        lVar3 = func_0x00475ac0(*(long *)(param_1 + 0x328),*(undefined8 *)(param_1 + 0x330),
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                                ,0xe8);
        *(long *)(lVar2 + 0x328) = lVar3;
        if (lVar3 == 0) goto LAB_00361404;
      }
      if (*(long *)(param_1 + 0x348) != 0) {
        lVar3 = func_0x00475ac0(*(long *)(param_1 + 0x348),*(undefined8 *)(param_1 + 0x350),
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                                ,0xf2);
        *(long *)(lVar2 + 0x348) = lVar3;
        if (lVar3 == 0) goto LAB_00361404;
      }
      if (*(long *)(param_1 + 0x360) != 0) {
        lVar3 = func_0x004759a8(*(long *)(param_1 + 0x360),
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                                ,0xf9);
        *(long *)(lVar2 + 0x360) = lVar3;
        if (lVar3 == 0) goto LAB_00361404;
      }
      if (*(long *)(param_1 + 0x368) == 0) {
        return lVar2;
      }
      lVar3 = func_0x00475ac0(*(long *)(param_1 + 0x368),*(undefined8 *)(param_1 + 0x370),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                              ,0x100);
      *(long *)(lVar2 + 0x368) = lVar3;
      if (lVar3 != 0) {
        return lVar2;
      }
      goto LAB_00361404;
/* thanks for reading - discord.gg/sdkhDjTex */
    }
    puVar5 = &UNK_0008000f;
    uVar4 = 0xdd;
  }
LAB_003613d8:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,uVar4,"ssl_session_dup_intern");
  func_0x004466b0(0x14,puVar5,0);
LAB_00361404:
  func_0x00361b60(lVar2);
  return 0;
}

