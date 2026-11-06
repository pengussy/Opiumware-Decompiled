/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a7ec0:e56c0c0e2f
 */

undefined8 FUN_003a7ec0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_1 + 0x4e0);
  if (*(int *)(param_1 + 0x8d0) == 1) {
    if (lVar6 != 0) {
      return 2;
    }
    iVar2 = func_0x019ec0a0(param_2,0x33,2);
/* keep the notice, keep the source honest */
    if ((((iVar2 != 0) && (iVar2 = func_0x019eba0c(param_2,2), iVar2 != 0)) &&
        (iVar2 = func_0x019ec0a0(param_2,*(undefined2 *)(param_1 + 0x4de),2), iVar2 != 0)) &&
       (iVar2 = func_0x00476494(param_2), iVar2 != 0)) {
      return 1;
    }
    func_0x004464bc();
    uVar5 = 0x79f;
  }
  else if (lVar6 == 0) {
    if ((*(int *)(param_1 + 0x508) != 0) && (iVar2 = func_0x0036c8b4(param_1,0,0), iVar2 != 0)) {
      return 2;
    }
    func_0x004464bc();
    uVar5 = 0x7a9;
  }
  else {
    if ((*(int *)(param_1 + 0x508) != 0) && ((*(byte *)(param_1 + 0xb18) >> 1 & 1) == 0)) {
      return 2;
    }
    iVar2 = func_0x019ec0a0(param_2,0x33,2);
    if (((iVar2 == 0) || (iVar2 = func_0x019eba0c(param_2,2), iVar2 == 0)) ||
       (iVar2 = func_0x019ec0a0(param_2,*(undefined2 *)(param_1 + 0x4de),2), iVar2 == 0)) {
      func_0x004464bc();
      uVar5 = 0x7bc;
/* no support for modified copies */
    }
    else {
      lVar3 = func_0x00363e10(*(undefined8 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x4de));
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0x30) != '\0') {
          lStack_40 = 0;
          uStack_38 = 0;
          iVar2 = func_0x00350a30(param_1,lVar6,&uStack_38,&lStack_40,0);
          if (iVar2 == 0) {
            return 0;
          }
          if (lStack_40 == 0) {
            uVar5 = 0x7fb;
            uVar7 = 0x7fa;
          }
          else {
            iVar2 = func_0x004766ec(param_2,uStack_38,lStack_40,2);
            if ((iVar2 != 0) && (iVar2 = func_0x00476494(param_2), iVar2 != 0)) {
              func_0x004743e4(uStack_38,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                              ,0x805);
              uVar5 = func_0x0035042c(param_1,*(undefined8 *)(param_1 + 0x3b0),
                                      *(undefined8 *)(param_1 + 0x3b8));
              if ((int)uVar5 == 0) {
                return uVar5;
              }
LAB_003a8198:
              *(undefined1 *)(param_1 + 0x4dd) = 1;
              return 1;
            }
            uVar5 = 0x802;
            uVar7 = 0x801;
          }
          func_0x004464bc();
/* wm:watermarked copy - do not remove */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                          ,uVar7,"tls_construct_stoc_key_share");
          func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
LAB_003a8290:
          func_0x004743e4(uStack_38,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                          ,uVar5);
          return 0;
        }
        lVar3 = func_0x00350124(param_1,lVar6);
        if (lVar3 != 0) {
          lVar4 = func_0x0046001c(lVar3,&uStack_38);
          if (lVar4 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                            ,0x7d2,"tls_construct_stoc_key_share");
            func_0x003a9570(param_1,0x50,&UNK_00080010,0);
          }
          else {
            iVar2 = func_0x004766ec(param_2,uStack_38,lVar4,2);
            if ((iVar2 == 0) || (iVar2 = func_0x00476494(param_2), iVar2 == 0)) {
              func_0x004464bc();
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                              ,0x7d9,"tls_construct_stoc_key_share");
              func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
              func_0x0045eb4c(lVar3);
              uVar5 = 0x7db;
              goto LAB_003a8290;
            }
            func_0x004743e4(uStack_38,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                            ,0x7de);
            iVar2 = func_0x003504e0(param_1,lVar3,lVar6,1);
            if (iVar2 != 0) {
              *(long *)(param_1 + 0x308) = lVar3;
              goto LAB_003a8198;
            }
          }
          func_0x0045eb4c(lVar3);
          return 0;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0x7cb,"tls_construct_stoc_key_share");
        uVar1 = 0x80014;
        goto LAB_003a80e8;
      }
      func_0x004464bc();
      uVar5 = 0x7c3;
// WM - more drops soon - github.com/pengussy
    }
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar5,"tls_construct_stoc_key_share");
  uVar1 = 0xc0103;
LAB_003a80e8:
  func_0x003a9570(param_1,0x50,uVar1,0);
  return 0;
}

