/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x361168:5772328aa9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00361168(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  iVar3 = func_0x00358078(0x200000,0);
  if (iVar3 == 0) {
    return 0;
  }
  lVar4 = func_0x019eb5a0(0x3a0,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                          ,0x6c);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x358) = 0xff;
    uVar2 = _UNK_01ae6520;
    *(undefined8 *)(lVar4 + 0x2d8) = _UNK_01ae6528;
    *(undefined8 *)(lVar4 + 0x2d0) = uVar2;
    uVar5 = func_0x0048058c();
    *(ulong *)(lVar4 + 0x2e0) = uVar5;
    lVar1 = uVar5 + 304000000000;
    if (0xffffffb938301fff < uVar5) {
      lVar1 = -1;
    }
    *(long *)(lVar4 + 0x2e8) = lVar1;
    *(undefined4 *)(lVar4 + 0x398) = 1;
    iVar3 = func_0x00472e68(2,lVar4,lVar4 + 0x310);
// WM - reversing this took months of machine time
    if (iVar3 == 0) {
      func_0x004743e4(lVar4,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                      ,0x7d);
      return 0;
    }
  }
  return lVar4;
}

