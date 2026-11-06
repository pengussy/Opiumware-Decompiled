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
 *  file-id: 0x3b91c4:0918d6e440
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b91c4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x3d8);
  if (lVar4 == 0) {
    func_0x004464bc();
    pcVar3 = "ystem/Library/Frameworks/GameController.framework/Versions/A/GameController";
  }
  else {
    lVar2 = param_1;
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
         (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
       (lVar2 = func_0x019ec0a0(param_2,0,1), (int)lVar2 != 0)) {
      if (*(char *)(param_1 + 0xb5a) == '\0') {
        lVar4 = FUN_003b4f5c(param_1,param_2,lVar4,0);
      }
      else {
        if (*(char *)(param_1 + 0xb5a) != '\x02') {
          func_0x004464bc(lVar2,param_2);
          pcVar3 = "ameController.framework/Versions/A/GameController";
// WM - proprietary - see LICENSE - do not sell
          goto LAB_003b92c8;
        }
        lVar4 = FUN_003b4d04(param_1,param_2,lVar4);
      }
      if (lVar4 == 0) {
        return 0;
      }
      return 1;
    }
    func_0x004464bc(lVar2,param_2);
    pcVar3 = "rary/Frameworks/GameController.framework/Versions/A/GameController";
  }
LAB_003b92c8:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,pcVar3,"tls_construct_server_certificate");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

