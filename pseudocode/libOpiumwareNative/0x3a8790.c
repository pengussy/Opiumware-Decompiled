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
 *  file-id: 0x3a8790:c76ad3fd3f
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a8790(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_30 = 0x17020203;
  uStack_48 = _UNK_01ae6e83;
  uStack_50 = _UNK_01ae6e7b;
  uStack_38 = _UNK_01ae6e93;
  uStack_40 = _UNK_01ae6e8b;
  if (((*(uint *)(*(long *)(param_1 + 0x300) + 0x18) & 0xfffe) == 0x80) &&
     (iVar1 = func_0x0035e284(), unaff_x19 = param_1, iVar1 < 0)) {
    iVar1 = func_0x00476690(param_2,&uStack_50,0x24);
    if (iVar1 == 0) goto LAB_003a8850;
    uVar2 = 1;
// unlicensed copy if this notice is missing
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
      return;
    }
  }
  else {
    uVar2 = 2;
    param_1 = unaff_x19;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
      return;
    }
  }
  do {
    ___stack_chk_fail(uVar2);
LAB_003a8850:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x8af,"tls_construct_stoc_cryptopro_bug");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    uVar2 = 0;
  } while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_28);
  return;
}

