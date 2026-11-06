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
 *  file-id: 0x3564a0:65b18dd8a9
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003564a0(undefined8 param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  undefined1 auStack_88 [80];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_2 < 0x50) {
    ___memcpy_chk(auStack_88,param_1,(long)param_2,0x50);
    auStack_88[param_2] = 0;
    lVar3 = func_0x0034f108(auStack_88);
    unaff_x19 = param_3;
    if (lVar3 != 0) {
      iVar1 = func_0x004dcb7c(param_3);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar4 = func_0x004dcb90(param_3,iVar1);
          if (*(int *)(lVar4 + 0x18) == *(int *)(lVar3 + 0x18)) goto LAB_00356558;
          iVar1 = iVar1 + 1;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          iVar2 = func_0x004dcb7c(param_3);
        } while (iVar1 < iVar2);
      }
      iVar1 = func_0x004dc9ec(param_3,lVar3);
      if (iVar1 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                        ,0x4e7,"ciphersuite_cb");
        func_0x004466b0(0x14,&UNK_000c0103,0);
        uVar5 = 0;
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
          return 0;
        }
        goto LAB_003565d4;
      }
    }
  }
LAB_00356558:
  uVar5 = 1;
  param_3 = unaff_x19;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return 1;
  }
LAB_003565d4:
  ___stack_chk_fail(uVar5);
  return *param_3;
}

