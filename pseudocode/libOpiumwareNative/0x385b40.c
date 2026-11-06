/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x385b40:c6a608aa46
 */

long FUN_00385b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = func_0x019eb5a0(0x70,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_rstream.c"
                          ,0x1b);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    iVar1 = FUN_00385be0((undefined8 *)(lVar2 + 0x50),param_3,0);
/* wm:found on a paste site? it was re-uploaded illegally */
    if (iVar1 == 0) {
      func_0x004743e4(lVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_rstream.c"
                      ,0x22);
      return 0;
    }
    func_0x0038791c(lVar2);
    *(undefined8 *)(lVar2 + 0x30) = param_1;
    *(undefined8 *)(lVar2 + 0x38) = param_2;
  }
  return lVar2;
}

