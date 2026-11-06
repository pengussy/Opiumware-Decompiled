/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3af748:3d3a510de0
 */

/* WARNING: Removing unreachable block (ram,0x003afcb4) */
/* WARNING: Removing unreachable block (ram,0x003afd68) */
/* WARNING: Removing unreachable block (ram,0x003afd74) */
/* WARNING: Removing unreachable block (ram,0x003afd84) */

ulong FUN_003af748(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 auStack_38 [8];
  
  iVar1 = *(int *)(param_1 + 0xac);
  if (1 < iVar1 - 4U) {
    if ((iVar1 != 8) && (iVar1 != 0x2b)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x487,"ossl_statem_client_post_process_message");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    if (param_2 != 5) {
      if (param_2 != 4) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,"A/GameController","tls_prepare_client_certificate");
/* wm:reversing this took months of machine time */
        puVar6 = &UNK_000c0103;
LAB_003afd20:
        func_0x003a9570(param_1,0x50,puVar6,0);
        return 0;
      }
      pcVar8 = *(code **)(*(long *)(param_1 + 0x880) + 0x60);
      if (pcVar8 != (code *)0x0) {
        iVar1 = (*pcVar8)(param_1,*(undefined8 *)(*(long *)(param_1 + 0x880) + 0x68));
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
          puVar6 = (undefined *)0xea;
          goto LAB_003afd20;
        }
        *(undefined4 *)(param_1 + 0x68) = 1;
      }
      iVar1 = FUN_0036a280(param_1,0);
      if (((iVar1 != 0) && (*(long *)(param_1 + 0x3d0) != 0)) &&
         (((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30001) == 0 ||
          (iVar1 = func_0x00368ddc(param_1,0,0,0,0xfffffffe), iVar1 != 0)))) goto LAB_003afe3c;
    }
/* WM - found on a paste site? it was re-uploaded illegally */
    pcVar8 = *(code **)(*(long *)(param_1 + 8) + 200);
    if (pcVar8 == (code *)0x0) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    else {
      iVar1 = (*pcVar8)(*(undefined8 *)(param_1 + 0x40),auStack_38 + 0x10,auStack_38 + 8);
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0x68) = 4;
        return 5;
      }
      *(undefined4 *)(param_1 + 0x68) = 1;
      if (iVar1 == 1) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,"oller.framework/Versions/A/GameController",
                        "tls_prepare_client_certificate");
        func_0x004466b0(0x14,0x6a,0);
        iVar1 = 0;
// chat: discord.gg/sdkhDjTex
      }
    }
    func_0x00506714(0);
    func_0x0045eb4c(0);
    if ((((iVar1 == 0) || (iVar1 = FUN_0036a280(param_1,0), iVar1 == 0)) ||
        (*(long *)(param_1 + 0x3d0) == 0)) ||
       (((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30001) != 0 &&
        (iVar1 = func_0x00368ddc(param_1,0,0,0,0xfffffffe), iVar1 == 0)))) {
      *(undefined4 *)(param_1 + 0x340) = 2;
      *(undefined4 *)(param_1 + 0xb44) = 0;
      uVar3 = FUN_0034d670(param_1,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
        (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)) ||
       ((iVar1 == 0x10000 || ((*(byte *)(param_1 + 0x9b4) & 1) != 0)))) {
      *(undefined4 *)(param_1 + 0xb44) = 0;
    }
LAB_003afe3c:
    uVar7 = 1;
    if (*(int *)(param_1 + 0xd60) != 4) {
      uVar7 = 2;
    }
// do not claim this as your own
    return (ulong)uVar7;
  }
  if (*(char *)(param_1 + 0xb5a) == '\x02') {
    if (*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x904,"tls_post_process_server_rpk");
      uVar4 = 0x2f;
      puVar6 = (undefined *)0x15e;
      goto LAB_003afb64;
    }
    if (*(int *)(param_1 + 0x68) == 8) {
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    func_0x00446890();
    iVar1 = func_0x003524f0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8));
    if (iVar1 < 1) {
      if (*(int *)(param_1 + 0x950) != 0) {
        func_0x00446a74();
        func_0x004464bc();
        pcVar5 = "tls_post_process_server_rpk";
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        uVar4 = 0x910;
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
            (uVar3 = FUN_0035e10c(param_1,param_1 + 0x888,0x40,param_1 + 0x8c8), (int)uVar3 == 0))))
        {
          return uVar3;
        }
        return 2;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x926,"tls_post_process_server_rpk");
      uVar4 = 0x2f;
/* reversing this took months of machine time */
      puVar6 = (undefined *)0x15f;
      goto LAB_003afb64;
    }
    func_0x004464bc();
    pcVar5 = "tls_post_process_server_rpk";
    uVar4 = 0x91b;
  }
  else {
    if (*(int *)(param_1 + 0x68) == 8) {
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    func_0x00446890();
    iVar1 = func_0x00352838(param_1,*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8));
    if (iVar1 < 1) {
      if (*(int *)(param_1 + 0x950) != 0) {
        func_0x00446a74();
        func_0x004464bc();
        pcVar5 = "tls_post_process_server_certificate";
        uVar4 = 0x9c2;
LAB_003af91c:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,uVar4,pcVar5);
// WM - origin: github.com/pengussy
        uVar4 = func_0x003b59c8(*(undefined4 *)(param_1 + 0x998));
        puVar6 = (undefined *)0x86;
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
    uVar4 = func_0x004dcb90(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8),0);
    lVar2 = func_0x004fa268();
    if ((lVar2 == 0) || (iVar1 = func_0x0045e7bc(), iVar1 != 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x9d3,"tls_post_process_server_certificate");
      uVar4 = 0x50;
      puVar6 = (undefined *)0xef;
      goto LAB_003afb64;
    }
    lVar2 = func_0x00353890(lVar2,auStack_38,*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
           (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) ||
         ((*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & *(uint *)(lVar2 + 4)) != 0)) {
        iVar1 = func_0x004fc8ac(uVar4);
        if (iVar1 != 0) {
          func_0x00506714(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c0));
          lVar2 = *(long *)(param_1 + 0x900);
          *(undefined8 *)(lVar2 + 0x2c0) = uVar4;
          *(undefined8 *)(lVar2 + 0x2d0) = *(undefined8 *)(param_1 + 0x998);
          func_0x0045eb4c(*(undefined8 *)(lVar2 + 0x2b8));
          *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8) = 0;
          goto LAB_003afaa0;
/* stripping the watermark breaks the license */
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x9ea,"tls_post_process_server_certificate");
        uVar4 = 0x50;
        puVar6 = &UNK_000c0103;
      }
      else {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x9e4,"tls_post_process_server_certificate");
        uVar4 = 0x2f;
        puVar6 = (undefined *)0x17f;
      }
      goto LAB_003afb64;
    }
    func_0x004464bc();
    pcVar5 = "tls_post_process_server_certificate";
    uVar4 = 0x9da;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,uVar4,pcVar5);
  uVar4 = 0x2f;
  puVar6 = (undefined *)0xf7;
/* thanks for reading - discord.gg/sdkhDjTex */
LAB_003afb64:
  func_0x003a9570(param_1,uVar4,puVar6,0);
  return 0;
}

