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
 *  file-id: 0x3b4704:531085beba
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b4704(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xd80) != 0) {
    return 1;
  }
  uVar2 = FUN_0034d670(param_1,1);
  if ((int)uVar2 != 0) {
    lVar3 = func_0x0044efa4();
    *(long *)(param_1 + 0xd80) = lVar3;
    if (lVar3 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0xaeb,"tls13_save_handshake_digest_for_pha");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      return 0;
    }
    iVar1 = func_0x0044f700(lVar3,*(undefined8 *)(param_1 + 0x1b0));
    if (iVar1 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0xaf0,"tls13_save_handshake_digest_for_pha");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      func_0x0044efb8(*(undefined8 *)(param_1 + 0xd80));
      *(undefined8 *)(param_1 + 0xd80) = 0;
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

