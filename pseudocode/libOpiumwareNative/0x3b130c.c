/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b130c:6bfbe52ae4
 */

undefined8 FUN_003b130c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  uVar2 = 0xc0103;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0xdd0) != 0) {
    iVar3 = func_0x019e85d0();
    uVar1 = iVar3 + 0xe;
    if (-8 < iVar3) {
      uVar1 = iVar3 + 7;
    }
    iVar3 = func_0x004763b0(param_2,(long)((ulong)uVar1 << 0x20) >> 0x23,&uStack_38,2);
    if (iVar3 != 0) {
      func_0x019e8b94(*(undefined8 *)(param_1 + 0xdd0),uStack_38);
      func_0x004743e4(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x360),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xf8d);
      lVar4 = func_0x004759a8(*(undefined8 *)(param_1 + 0xda8),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xf8e);
      *(long *)(*(long *)(param_1 + 0x900) + 0x360) = lVar4;
      if (lVar4 != 0) {
        return 1;
      }
      uVar2 = 0x8000f;
      uVar5 = 0xf90;
      goto LAB_003b13c4;
    }
  }
  uVar5 = 0xf88;
LAB_003b13c4:
/* WM - unlicensed copy if this notice is missing */
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,uVar5,"tls_construct_cke_srp");
  func_0x003a9570(param_1,0x50,uVar2,0);
  return 0;
}

