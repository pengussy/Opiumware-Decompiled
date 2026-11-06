/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3a904c:eb893a51fd
 *  --------------------------------------------------------------------------*/

char * FUN_003a904c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_40 = 0;
  uStack_38 = 0;
  if (param_3 == 0x800) {
    if ((*(int *)(param_1 + 0xc30) == 1) || (*(int *)(param_1 + 0xc28) == 1)) {
      if (*(short *)(param_1 + 0xc20) != -499) {
LAB_003a91f0:
        pcVar2 = (char *)0x2;
        goto LAB_003a92d4;
      }
      uStack_30 = 0;
      iVar1 = func_0x019ec0a0(param_2,0xfe0d,2);
      if ((iVar1 != 0) && (iVar1 = func_0x004766ec(param_2,&uStack_30,8,2), iVar1 != 0)) {
LAB_003a90d4:
        pcVar2 = (char *)0x1;
        goto LAB_003a92d4;
      }
      func_0x004464bc();
      uVar3 = 0x9db;
/* more drops soon - github.com/pengussy */
    }
    else {
      if ((*(short *)(param_1 + 0xc20) != -499) || (*(int *)(param_1 + 0xc18) != 1))
      goto LAB_003a91f0;
      iVar1 = func_0x004b242c(**(undefined8 **)(param_1 + 8),&uStack_30,8,0x100);
      if (iVar1 < 1) {
        uVar3 = 0x9ee;
      }
      else {
        iVar1 = func_0x019ec0a0(param_2,*(undefined2 *)(param_1 + 0xc20),2);
        if ((iVar1 != 0) && (iVar1 = func_0x004766ec(param_2,&uStack_30,8,2), iVar1 != 0))
        goto LAB_003a90d4;
        uVar3 = 0x9f3;
      }
      func_0x004464bc();
    }
LAB_003a92b4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,uVar3,"tls_construct_stoc_ech");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
  else {
    if (((*(int *)(param_1 + 0xc3c) != 1) || (*(short *)(param_1 + 0xc20) != -499)) ||
       (*(long *)(param_1 + 0xb60) == 0)) goto LAB_003a91f0;
    iVar1 = func_0x00348424(param_1,&uStack_38,&lStack_40);
    if (iVar1 != 1) {
      func_0x004464bc();
      uVar3 = 0xa14;
      goto LAB_003a92b4;
    }
/* wm:keep the notice, keep the source honest */
    if (lStack_40 == 0) {
      func_0x004743e4(uStack_38,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                      ,0xa1f);
      pcVar2 = (char *)0x2;
      goto LAB_003a92d4;
    }
    iVar1 = func_0x019ec0a0(param_2,0xfe0d,2);
    if (((iVar1 != 0) && (iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0)) &&
       ((iVar1 = func_0x004766ec(param_2,uStack_38,lStack_40,2), iVar1 != 0 &&
        (iVar1 = func_0x00476494(param_2), iVar1 != 0)))) {
      func_0x004743e4(uStack_38,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                      ,0xa2a);
      goto LAB_003a90d4;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0xa26,"tls_construct_stoc_ech");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    func_0x004743e4(uStack_38,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0xa27);
  }
  pcVar2 = (char *)0x0;
LAB_003a92d4:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
    return pcVar2;
  }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  ___stack_chk_fail(pcVar2);
  return 
  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
  ;
}

