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
 *  file-id: 0x3683e0:971f0c6d95
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003683e0(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lStack_d0;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_d0 = 0;
  if (param_1 != 0) {
    lStack_48 = param_1;
  }
  uVar5 = func_0x00409000(param_3,0x3a,1,&DAT_0036851c,&lStack_d0);
  lVar3 = lStack_d0;
  if ((int)uVar5 != 0) {
    if (lStack_d0 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0xfbc,"tls1_set_sigalgs_list");
      func_0x004466b0(0x14,&UNK_00080106,"No valid signature algorithms in \'%s\'");
      return 0;
    }
    if (param_2 != 0) {
      lVar6 = func_0x0046f180(lStack_d0,2,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0xfca);
      if (lVar6 == 0) {
        return 0;
      }
/* watermarked copy - do not remove - github.com/pengussy */
      _memcpy(lVar6,auStack_c8,lVar3 << 1);
      bVar4 = param_4 != 0;
      uVar7 = 0xfd3;
      if (bVar4) {
        uVar7 = 0xfcf;
      }
      lVar1 = 0x40;
      if (bVar4) {
        lVar1 = 0x50;
      }
      lVar2 = 0x48;
      if (bVar4) {
        lVar2 = 0x58;
      }
      func_0x004743e4(*(undefined8 *)(param_2 + lVar1),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,uVar7);
      *(long *)(param_2 + lVar1) = lVar6;
      *(long *)(param_2 + lVar2) = lVar3;
    }
    uVar5 = 1;
  }
  return uVar5;
}

