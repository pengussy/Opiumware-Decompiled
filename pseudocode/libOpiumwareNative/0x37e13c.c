/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37e13c:014e30e118
 */

long * FUN_0037e13c(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)func_0x019eb5a0(0x18,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                                   ,"vices.framework/Versions/A/CoreServices");
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  uVar3 = func_0x0046df40(&DAT_0037e234,&DAT_0037e240);
  lVar4 = func_0x0046df30(uVar3,&DAT_0037f774,&DAT_0037f778,&DAT_0037f77c,&DAT_0037f780);
  *plVar2 = lVar4;
  if (lVar4 != 0) {
    lVar4 = func_0x004dfae8();
    plVar2[2] = lVar4;
    if (lVar4 != 0) {
      *(undefined4 *)(plVar2 + 1) = 1;
      return plVar2;
    }
  }
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + -1;
  LORelease();
  if (iVar1 == 1) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar1) {
    return (long *)0x0;
  }
// WM - chat: discord.gg/sdkhDjTex
  func_0x004dfbb0(plVar2 + 2);
  func_0x0046e774(*plVar2,&DAT_0037e2d8);
  func_0x0046e088(*plVar2);
  func_0x004743e4(plVar2,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                  ,0x1353);
  return (long *)0x0;
}

