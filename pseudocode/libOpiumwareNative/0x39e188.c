/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39e188:9d7813d8cf
 */

undefined8 FUN_0039e188(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined1 auStack_36 [6];
  
  lVar3 = *(long *)(param_1 + 0xa20);
  lStack_40 = 0;
  if (*(long *)(param_1 + 0xb60) == 0) goto joined_r0x0039e228;
  iVar1 = func_0x003488cc(param_1,&lStack_40,auStack_36);
  if (iVar1 != 1) {
    uVar2 = 2;
    uVar4 = 0x5d;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
    goto LAB_0039e2d0;
  }
  if (*(int *)(param_1 + 0xc14) == 1) {
    lVar3 = *(long *)(param_1 + 0xa20);
joined_r0x0039e228:
    if (lVar3 == 0) {
      return 2;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc14) != 0) goto joined_r0x0039e228;
    if (*(int *)(param_1 + 0xb68) == 1) {
      return 2;
    }
    lVar3 = *(long *)(param_1 + 0xb70);
    if (lVar3 == 0) {
      lVar3 = *(long *)(lStack_40 + 8);
      goto joined_r0x0039e228;
    }
  }
  iVar1 = func_0x019ec0a0(param_2,0,2);
  if ((((iVar1 != 0) && (iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0)) &&
      (iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0)) &&
     (iVar1 = func_0x019ec0a0(param_2,0,1), iVar1 != 0)) {
    uVar2 = _strlen(lVar3);
    iVar1 = func_0x004766ec(param_2,lVar3,uVar2,2);
    if (((iVar1 != 0) && (iVar1 = func_0x00476494(param_2), iVar1 != 0)) &&
       (iVar1 = func_0x00476494(param_2), iVar1 != 0)) {
      return 1;
    }
  }
  uVar2 = 0;
  uVar4 = 0x79;
/* wm:stripping the watermark breaks the license */
LAB_0039e2d0:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar4,"tls_construct_ctos_server_name");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return uVar2;
}

