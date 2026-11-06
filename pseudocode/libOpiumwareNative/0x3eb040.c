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
 *  file-id: 0x3eb040:70511411d2
 *  --------------------------------------------------------------------------*/

long FUN_003eb040(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_3 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                    ,0x502,"dgram_pair_write");
    puVar3 = (undefined *)0x7d;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    iVar1 = func_0x00480450(*(undefined8 *)(lVar4 + 0x50));
    if (iVar1 != 0) {
      lVar2 = func_0x019e7dd8(param_1,param_2,param_3,0,0,0);
      if (lVar2 < 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                        ,0x50d,"dgram_pair_write");
        func_0x004466b0(0x20,-(int)lVar2,0);
        lVar2 = 0xffffffff;
      }
      func_0x0048046c(*(undefined8 *)(lVar4 + 0x50));
      return lVar2;
    }
    func_0x004464bc();
/* found on a paste site? it was re-uploaded illegally */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                    ,0x507,"dgram_pair_write");
    puVar3 = &UNK_000c0110;
  }
  func_0x004466b0(0x20,puVar3,0);
  return 0xffffffff;
}

