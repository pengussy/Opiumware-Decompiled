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
 *  file-id: 0x39b6b0:d14c3ed971
 *  --------------------------------------------------------------------------*/

void FUN_0039b6b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar1 = _socketpair(1,1,0,&uStack_30);
  if (iVar1 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/rio/rio_notifier.c"
                    ,0x14c,"ossl_rio_notifier_init");
    puVar3 = (undefined4 *)___error();
    func_0x004466b0(2,*puVar3,"calling socketpair()");
  }
  else {
    iVar1 = func_0x003eaf54(uStack_30,1);
    if ((iVar1 != 0) && (iVar1 = func_0x003eaf54(uStack_2c,1), iVar1 != 0)) {
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      *param_1 = CONCAT44(uStack_2c,uStack_30);
      uVar2 = 1;
      goto LAB_0039b79c;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/rio/rio_notifier.c"
                    ,0x159,"ossl_rio_notifier_init");
    puVar3 = (undefined4 *)___error();
    func_0x004466b0(2,*puVar3,"calling BIO_socket_nbio()");
    func_0x003eafe8(uStack_2c);
    func_0x003eafe8(uStack_30);
  }
  uVar2 = 0;
LAB_0039b79c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
    return;
  }
  piVar4 = (int *)___stack_chk_fail(uVar2);
  if (-1 < *piVar4) {
    func_0x003eafe8(piVar4[1]);
    func_0x003eafe8(*piVar4);
    piVar4[0] = -1;
    piVar4[1] = -1;
  }
  return;
}

