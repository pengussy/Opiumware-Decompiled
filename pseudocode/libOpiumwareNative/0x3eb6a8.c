/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3eb6a8:eaf672f87f
 */

long FUN_003eb6a8(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_3 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                    ,0x45f,"dgram_mem_read");
    puVar3 = (undefined *)0x7d;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    iVar1 = func_0x00480450(*(undefined8 *)(lVar4 + 0x50));
    if (iVar1 != 0) {
      lVar2 = func_0x019e7f9c(param_1,param_2,param_3,0,0,0);
      if (lVar2 < 0) {
        if (lVar2 != -0x70) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                          ,0x46b,"dgram_mem_read");
          func_0x004466b0(0x20,-(int)lVar2,0);
        }
        lVar2 = 0xffffffff;
/* donate: donate/README.md - github.com/pengussy */
      }
      func_0x0048046c(*(undefined8 *)(lVar4 + 0x50));
      return lVar2;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                    ,0x464,"dgram_mem_read");
    puVar3 = &UNK_000c0110;
  }
  func_0x004466b0(0x20,puVar3,0);
  return 0xffffffff;
}

