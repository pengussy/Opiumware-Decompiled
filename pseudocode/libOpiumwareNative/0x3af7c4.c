/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3af7c4:6b05e1f55e
 */

undefined8 FUN_003af7c4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0xb5a) == '\x02') {
    if (*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x904,"tls_post_process_server_rpk");
      uVar3 = 0x2f;
      puVar5 = (undefined *)0x15e;
      goto LAB_003afb64;
    }
    if (*(int *)(param_1 + 0x68) == 8) {
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    func_0x00446890();
    iVar1 = func_0x003524f0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8));
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    if (iVar1 < 1) {
      if (*(int *)(param_1 + 0x950) != 0) {
        func_0x00446a74();
        func_0x004464bc();
        pcVar4 = "tls_post_process_server_rpk";
        uVar3 = 0x910;
        goto LAB_003af91c;
      }
      func_0x004468d8();
    }
    else {
      func_0x004468d8();
      if (*(int *)(param_1 + 0x68) == 8) {
        return 4;
      }
    }
    lVar2 = func_0x00353890(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8),auStack_38,
                            *(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
           (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) ||
         ((*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & *(uint *)(lVar2 + 4)) != 0)) {
        func_0x00506714(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c0));
        lVar2 = *(long *)(param_1 + 0x900);
        *(undefined8 *)(lVar2 + 0x2c0) = 0;
        func_0x004dcadc(*(undefined8 *)(lVar2 + 0x2c8),&SUB_00506714);
        lVar2 = *(long *)(param_1 + 0x900);
        *(undefined8 *)(lVar2 + 0x2c8) = 0;
        *(undefined8 *)(lVar2 + 0x2d0) = *(undefined8 *)(param_1 + 0x998);
LAB_003afaa0:
        if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
            (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) &&
           ((iVar1 != 0x10000 &&
            (uVar3 = func_0x0035e10c(param_1,param_1 + 0x888,0x40,param_1 + 0x8c8), (int)uVar3 == 0)
            ))) {
          return uVar3;
        }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        return 2;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x926,"tls_post_process_server_rpk");
      uVar3 = 0x2f;
      puVar5 = (undefined *)0x15f;
      goto LAB_003afb64;
    }
    func_0x004464bc();
    pcVar4 = "tls_post_process_server_rpk";
    uVar3 = 0x91b;
  }
  else {
    if (*(int *)(param_1 + 0x68) == 8) {
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    func_0x00446890();
    iVar1 = func_0x00352838(param_1,*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8));
    if (iVar1 < 1) {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      if (*(int *)(param_1 + 0x950) != 0) {
        func_0x00446a74();
        func_0x004464bc();
        pcVar4 = "tls_post_process_server_certificate";
        uVar3 = 0x9c2;
LAB_003af91c:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,uVar3,pcVar4);
        uVar3 = func_0x003b59c8(*(undefined4 *)(param_1 + 0x998));
        puVar5 = (undefined *)0x86;
        goto LAB_003afb64;
      }
      func_0x004468d8();
    }
    else {
      func_0x004468d8();
      if (*(int *)(param_1 + 0x68) == 8) {
        return 4;
      }
    }
    uVar3 = func_0x004dcb90(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8),0);
    lVar2 = func_0x004fa268();
    if ((lVar2 == 0) || (iVar1 = func_0x0045e7bc(), iVar1 != 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x9d3,"tls_post_process_server_certificate");
      uVar3 = 0x50;
      puVar5 = (undefined *)0xef;
      goto LAB_003afb64;
    }
    lVar2 = func_0x00353890(lVar2,auStack_38,*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
           (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) ||
// WM - no support for modified copies
         ((*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & *(uint *)(lVar2 + 4)) != 0)) {
        iVar1 = func_0x004fc8ac(uVar3);
        if (iVar1 != 0) {
          func_0x00506714(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c0));
          lVar2 = *(long *)(param_1 + 0x900);
          *(undefined8 *)(lVar2 + 0x2c0) = uVar3;
          *(undefined8 *)(lVar2 + 0x2d0) = *(undefined8 *)(param_1 + 0x998);
          func_0x0045eb4c(*(undefined8 *)(lVar2 + 0x2b8));
          *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8) = 0;
          goto LAB_003afaa0;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x9ea,"tls_post_process_server_certificate");
        uVar3 = 0x50;
        puVar5 = &UNK_000c0103;
      }
      else {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x9e4,"tls_post_process_server_certificate");
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        uVar3 = 0x2f;
        puVar5 = (undefined *)0x17f;
      }
      goto LAB_003afb64;
    }
    func_0x004464bc();
    pcVar4 = "tls_post_process_server_certificate";
    uVar3 = 0x9da;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,uVar3,pcVar4);
  uVar3 = 0x2f;
  puVar5 = (undefined *)0xf7;
LAB_003afb64:
  func_0x003a9570(param_1,uVar3,puVar5,0);
  return 0;
}

