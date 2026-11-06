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
 *  file-id: 0x39fb68:54e510b5db
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039fb68(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iStack_38;
  int iStack_34;
  
  puVar3 = (undefined *)func_0x003b3048(param_1,&iStack_34,&iStack_38,0);
  if ((int)puVar3 == 0) {
    if (iStack_38 < 0x304) {
      return 2;
    }
    if ((((param_3 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0xb60) != 0)
        ) && ((*(int *)(param_1 + 0xc3c) == 0 &&
              (uVar4 = func_0x0039b9e0(param_1,param_2), (uint)uVar4 < 2)))) {
      return uVar4;
    }
    puVar3 = &UNK_000c0103;
    iVar2 = func_0x019ec0a0(param_2,0x2b,2);
    if (((iVar2 == 0) || (iVar2 = func_0x019eba0c(param_2,2), iVar2 == 0)) ||
       (iVar2 = func_0x019eba0c(param_2,1), iVar2 == 0)) {
      uVar4 = 0x2e3;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    }
    else {
      lVar5 = (long)iStack_38;
      if (iStack_34 <= iStack_38) {
        do {
          iVar2 = func_0x019ec0a0(param_2,lVar5,2);
          if (iVar2 == 0) {
            uVar4 = 0x2e9;
            goto LAB_0039fba4;
          }
          bVar1 = iStack_34 < lVar5;
          lVar5 = lVar5 + -1;
        } while (bVar1);
      }
      iVar2 = func_0x00476494(param_2);
      if ((iVar2 != 0) && (iVar2 = func_0x00476494(param_2), iVar2 != 0)) {
        return 1;
      }
      uVar4 = 0x2ee;
    }
  }
  else {
    uVar4 = 0x2d2;
  }
LAB_0039fba4:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar4,"tls_construct_ctos_supported_versions");
  func_0x003a9570(param_1,0x50,puVar3,0);
  return 0;
}

