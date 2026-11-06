/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e6a9c:745fce0a1e
 */

void FUN_003e6a9c(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack0000000000000000;
  
  lVar2 = func_0x0047f8d4(4,1);
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                    ,0x9e,"async_start_func");
    func_0x004466d8(0x33,&UNK_000c0103,0,&uStack0000000000000000);
/* WM - proprietary - see LICENSE - do not sell */
    return;
  }
  do {
    lVar3 = *(long *)(lVar2 + 0x440);
    uVar1 = (**(code **)(lVar3 + 0x440))(*(undefined8 *)(lVar3 + 0x448));
    *(undefined4 *)(lVar3 + 0x450) = uVar1;
    *(undefined4 *)(lVar3 + 0x454) = 3;
    func_0x003e6b28(lVar3,lVar2);
  } while( true );
}

