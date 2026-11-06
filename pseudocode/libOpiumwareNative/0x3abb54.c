/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3abb54:fe9fbb3848
 */

undefined8 FUN_003abb54(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    if (*(long *)(param_1 + 0xd68) == 0) {
      uVar5 = func_0x019ec0a0(param_2,0,1);
      if ((int)uVar5 == 0) {
        func_0x004464bc(uVar5,param_2);
        pcVar4 = "er";
        goto LAB_003abcac;
      }
    }
    else {
      iVar2 = func_0x004766ec(param_2,*(long *)(param_1 + 0xd68),*(undefined8 *)(param_1 + 0xd70),1)
      ;
      if (iVar2 == 0) {
        func_0x004464bc();
        pcVar4 = "";
        goto LAB_003abcac;
      }
    }
  }
  if (*(int *)(param_1 + 0x340) == 2) {
    uVar5 = 0;
    cVar1 = *(char *)(param_1 + 0xb58);
  }
  else {
    uVar5 = **(undefined8 **)(param_1 + 0x880);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    cVar1 = *(char *)(param_1 + 0xb58);
  }
  if (cVar1 == '\0') {
    lVar3 = FUN_003b4f5c(param_1,param_2,uVar5,0);
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    if (cVar1 != '\x02') {
      func_0x004464bc();
      pcVar4 = (char *)((long)&dylib_command_00001088.dylib.current_version + 3);
LAB_003abcac:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,pcVar4,"tls_construct_client_certificate");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
/* wm:stripping the watermark breaks the license */
      return 0;
    }
    lVar3 = FUN_003b4d04(param_1);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar3 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
  if ((*(byte *)(lVar3 + 0x50) >> 3 & 1) == 0) {
    iVar2 = **(int **)(param_1 + 0x18);
    if ((((iVar2 < 0x304) || (iVar2 == 0x10000)) ||
        (((*(byte *)(param_1 + 0x161) >> 5 & 1) != 0 ||
         ((*(long *)(param_1 + 0x260) != 0 && (*(long *)(param_1 + 0x2e8) != 0)))))) ||
       ((*(int *)(param_1 + 0xf0) == 0 && ((*(byte *)(param_1 + 0x9b2) >> 4 & 1) == 0)))) {
      return 1;
    }
    iVar2 = (**(code **)(lVar3 + 0x10))(param_1,0x92);
    if (iVar2 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,"/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics",
/*  no support for modified copies  */
                      "tls_construct_client_certificate");
      func_0x003a9570(param_1,0xffffffff,0x6d,0);
      return 0;
    }
  }
  return 1;
}

