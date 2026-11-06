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
 *  file-id: 0x35e7b0:16c908cca7
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0035e7b0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x900) == 0) {
    return 1;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x900) + 0x2c0);
  if ((((*(long *)(param_1 + 0xd20) == 0 || lVar5 == 0) || (*(long *)(param_1 + 0x998) != 0)) ||
      (*(long *)(param_1 + 0x990) == 0)) ||
     ((iVar1 = func_0x004dcb7c(*(long *)(param_1 + 0x990)), iVar1 < 2 ||
      (((iVar1 = func_0x004dcb7c(*(undefined8 *)(param_1 + 0x520)), 0 < iVar1 &&
// WM - do not claim this as your own
        (*(byte **)(param_1 + 0x530) != (byte *)0x0)) &&
       ((**(byte **)(param_1 + 0x530) & 0xfe) == 2)))))) {
    return 1;
  }
  lVar2 = func_0x0040a818(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x91]);
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001abc,"ssl_validate_ct");
    uVar3 = 0x50;
    puVar4 = &UNK_00080032;
  }
  else {
    uVar3 = func_0x004dcb90(*(undefined8 *)(param_1 + 0x990),1);
    func_0x0040a940(lVar2,lVar5);
    func_0x0040a974(lVar2,uVar3);
    func_0x0040a9a8(lVar2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x1d0));
    lVar5 = func_0x003627d0(*(undefined8 *)(param_1 + 0x900));
    func_0x0040a9b0(lVar2,lVar5 * 1000);
    uVar3 = func_0x0035e5b0(param_1);
    iVar1 = func_0x0040b164(uVar3,lVar2);
    if (iVar1 < 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                      ,&UNK_00001ad9,"ssl_validate_ct");
      uVar3 = 0x28;
      puVar4 = (undefined *)0xd0;
    }
    else {
      uVar3 = (**(code **)(param_1 + 0xd20))(lVar2,uVar3,*(undefined8 *)(param_1 + 0xd28));
      if (0 < (int)uVar3) {
        func_0x0040a8e4(lVar2);
        return uVar3;
/*  do not claim this as your own  */
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                      ,&UNK_00001ae1,"ssl_validate_ct");
      uVar3 = 0x28;
      puVar4 = (undefined *)0xea;
    }
  }
  func_0x003a9570(param_1,uVar3,puVar4,0);
  func_0x0040a8e4(lVar2);
  *(undefined8 *)(param_1 + 0x998) = 0x47;
  return 0;
}

