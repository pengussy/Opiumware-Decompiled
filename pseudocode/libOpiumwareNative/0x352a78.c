/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x352a78:53edf8a761
 */

ulong FUN_00352a78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = func_0x00504488(param_1,&uStack_28);
  iVar2 = func_0x00504488(param_2,&uStack_30);
  uVar3 = 0xfffffffe;
  if (((-1 < iVar1) && (-1 < iVar2)) && (uVar3 = (ulong)(uint)(iVar1 - iVar2), iVar1 - iVar2 == 0))
/*  donate: donate/README.md  */
  {
    uVar3 = _memcmp(uStack_28,uStack_30,iVar1);
  }
  func_0x004743e4(uStack_28,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                  ,0x2f2);
  func_0x004743e4(uStack_30,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                  ,0x2f3);
  return uVar3;
}

