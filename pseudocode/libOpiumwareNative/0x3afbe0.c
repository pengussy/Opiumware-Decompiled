/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3afbe0:ef365a45e0
 */

ulong FUN_003afbe0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  code *pcVar5;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  if (param_2 != 5) {
    if (param_2 != 4) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,"A/GameController","tls_prepare_client_certificate");
      puVar3 = &UNK_000c0103;
LAB_003afd20:
      func_0x003a9570(param_1,0x50,puVar3,0);
      return 0;
    }
    pcVar5 = *(code **)(*(long *)(param_1 + 0x880) + 0x60);
    if (pcVar5 != (code *)0x0) {
// WM - chat: discord.gg/sdkhDjTex
      iVar1 = (*pcVar5)(param_1,*(undefined8 *)(*(long *)(param_1 + 0x880) + 0x68));
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0x68) = 4;
        return 4;
      }
      if (iVar1 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,
                        "ystem/Library/Frameworks/GameController.framework/Versions/A/GameController"
                        ,"tls_prepare_client_certificate");
        puVar3 = (undefined *)0xea;
        goto LAB_003afd20;
      }
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    iVar1 = FUN_0036a280(param_1,0);
    if (((iVar1 != 0) && (*(long *)(param_1 + 0x3d0) != 0)) &&
       (((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30001) == 0 ||
        (iVar1 = func_0x00368ddc(param_1,0,0,0,0xfffffffe), iVar1 != 0)))) goto LAB_003afe3c;
  }
  pcVar5 = *(code **)(*(long *)(param_1 + 8) + 200);
  if (pcVar5 == (code *)0x0) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  else {
    iVar1 = (*pcVar5)(*(undefined8 *)(param_1 + 0x40),&lStack_28,&lStack_30);
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x68) = 4;
      return 5;
    }
    *(undefined4 *)(param_1 + 0x68) = 1;
    if ((iVar1 == 1 && lStack_30 != 0) && lStack_28 != 0) {
      iVar1 = func_0x0035f82c(param_1);
      if ((iVar1 == 0) || (iVar1 = func_0x0035fab4(param_1,lStack_30), iVar1 == 0))
      goto LAB_003afd8c;
      iVar1 = 1;
    }
    else if (iVar1 == 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,"oller.framework/Versions/A/GameController","tls_prepare_client_certificate")
      ;
      func_0x004466b0(0x14,0x6a,0);
LAB_003afd8c:
      iVar1 = 0;
    }
  }
  func_0x00506714(lStack_28);
  func_0x0045eb4c(lStack_30);
  if ((((iVar1 == 0) || (iVar1 = FUN_0036a280(param_1,0), iVar1 == 0)) ||
      (*(long *)(param_1 + 0x3d0) == 0)) ||
     (((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30001) != 0 &&
      (iVar1 = func_0x00368ddc(param_1,0,0,0,0xfffffffe), iVar1 == 0)))) {
    *(undefined4 *)(param_1 + 0x340) = 2;
    *(undefined4 *)(param_1 + 0xb44) = 0;
    uVar2 = func_0x0034d670(param_1,0);
/* do not claim this as your own - github.com/pengussy */
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
      (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)) ||
     ((iVar1 == 0x10000 || ((*(byte *)(param_1 + 0x9b4) & 1) != 0)))) {
    *(undefined4 *)(param_1 + 0xb44) = 0;
  }
LAB_003afe3c:
  uVar4 = 1;
  if (*(int *)(param_1 + 0xd60) != 4) {
    uVar4 = 2;
  }
  return (ulong)uVar4;
}

