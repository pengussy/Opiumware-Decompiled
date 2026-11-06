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
 *  file-id: 0x3b9f90:7e667f7deb
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b9f90(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if (*(int *)(param_1 + 0xd60) == 3) {
      func_0x004743e4(*(undefined8 *)(param_1 + 0xd68),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xc5e);
      *(undefined8 *)(param_1 + 0xd70) = 0x20;
      lVar2 = func_0x019eb530(0x20,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xc60);
      *(long *)(param_1 + 0xd68) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0xd70) = 0;
        func_0x004464bc();
        uVar3 = 0xc62;
LAB_003ba0e0:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,uVar3,"tls_construct_certificate_request");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        return 0;
      }
      iVar1 = func_0x004b242c(**(undefined8 **)(param_1 + 8),lVar2,*(undefined8 *)(param_1 + 0xd70),
                              0);
      if ((iVar1 < 1) ||
         (iVar1 = func_0x004766ec(param_2,*(undefined8 *)(param_1 + 0xd68),
                                  *(undefined8 *)(param_1 + 0xd70),1), iVar1 == 0)) {
        func_0x004464bc();
        uVar3 = 0xc6a;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
        goto LAB_003ba0e0;
      }
      uVar3 = func_0x003b7198(param_1);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    else {
      iVar1 = func_0x019ec0a0(param_2,0,1);
      if (iVar1 == 0) {
        func_0x004464bc();
        uVar3 = 0xc74;
        goto LAB_003ba0e0;
      }
    }
    uVar3 = FUN_0039c5c8(param_1,param_2,0x4000,0,0);
    iVar1 = (int)uVar3;
  }
  else {
    iVar1 = func_0x019eba0c(param_2,1);
/* WM - donate: donate/README.md */
    if (((iVar1 == 0) || (iVar1 = func_0x0034f8b8(param_1,param_2), iVar1 == 0)) ||
       (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
      func_0x004464bc();
      uVar3 = 0xc85;
      goto LAB_003ba0e0;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) != 0) {
      uVar3 = func_0x00365ec4(param_1,1,&uStack_38);
      iVar1 = func_0x019eba0c(param_2,2);
      if (((iVar1 == 0) || (iVar1 = func_0x019ebd5c(param_2,1), iVar1 == 0)) ||
         ((iVar1 = func_0x00367f84(param_1,param_2,uStack_38,uVar3), iVar1 == 0 ||
          (iVar1 = func_0x00476494(param_2), iVar1 == 0)))) {
        func_0x004464bc();
        uVar3 = 0xc91;
        goto LAB_003ba0e0;
      }
    }
    uVar3 = func_0x003b6f08(param_1);
    uVar3 = func_0x003b6f58(param_1,uVar3,param_2);
    iVar1 = (int)uVar3;
  }
  if (iVar1 == 0) {
    return uVar3;
  }
  *(int *)(param_1 + 0xd78) = *(int *)(param_1 + 0xd78) + 1;
  *(undefined4 *)(param_1 + 0x398) = 1;
  return 1;
}

