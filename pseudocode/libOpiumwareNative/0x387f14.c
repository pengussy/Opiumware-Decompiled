/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x387f14:ca4132e381
 */

long * FUN_00387f14(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar1 = func_0x004b2208(param_1,auStack_48,0x10,0x80);
  if (iVar1 == 1) {
    plVar2 = (long *)func_0x019eb5a0(0x20,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
                                     ,0x77);
    if (plVar2 == (long *)0x0) goto LAB_00388098;
    lVar3 = func_0x004535cc(param_1,"AES-128-ECB",param_2);
    if (lVar3 != 0) {
      lVar4 = func_0x00451f08();
      *plVar2 = lVar4;
      if ((lVar4 != 0) && (iVar1 = func_0x004529d8(lVar4,lVar3,auStack_48,0,0), iVar1 != 0)) {
        func_0x00451e8c(lVar3);
        uVar5 = func_0x0046df40(&DAT_003880cc,&DAT_003880d4);
        lVar3 = func_0x0046df30(uVar5,&DAT_003888dc,&DAT_003888e0,&DAT_003888e4,&DAT_003888e8);
        plVar2[1] = lVar3;
        if (lVar3 != 0) {
          uVar5 = func_0x0046df40(&DAT_003880e8,&DAT_003880f0);
          lVar3 = func_0x0046df30(uVar5,&DAT_003888dc,&DAT_003888e0,&DAT_003888e4,&DAT_003888e8);
          plVar2[2] = lVar3;
          if (lVar3 != 0) goto LAB_00388098;
        }
        lVar3 = 0;
      }
    }
    func_0x0046e088(plVar2[2]);
    lVar4 = plVar2[1];
    if (lVar4 != 0) {
/* WM - more drops soon - github.com/pengussy */
      func_0x0046e774(lVar4,&DAT_00388198);
      func_0x0046e088(lVar4);
    }
    func_0x00451f38(*plVar2);
    func_0x004743e4(plVar2,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
                    ,0xb5);
  }
  else {
    lVar3 = 0;
  }
  func_0x00451e8c(lVar3);
  plVar2 = (long *)0x0;
LAB_00388098:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return plVar2;
  }
/* wm:more drops soon - github.com/pengussy */
  lVar3 = ___stack_chk_fail();
  return *(long **)(lVar3 + 0x10);
}

