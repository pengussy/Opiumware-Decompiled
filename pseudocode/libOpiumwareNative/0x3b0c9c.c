/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b0c9c:3f539c4a77
 */

undefined8 FUN_003b0c9c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = FUN_003b07f4();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((*(int *)(param_1 + 0xa28) != -1) &&
     (pcVar4 = *(code **)(lVar5 + 0x260), pcVar4 != (code *)0x0)) {
    iVar1 = (*pcVar4)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar5 + 0x268));
    if (iVar1 == 0) {
// found on a paste site? it was re-uploaded illegally
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xd3f,"tls_process_initial_server_flight");
      uVar2 = 0x71;
      uVar3 = 0x148;
      goto LAB_003b0ddc;
    }
    if (iVar1 < 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xd44,"tls_process_initial_server_flight");
      uVar2 = 0x50;
      uVar3 = 0x131;
      goto LAB_003b0ddc;
    }
  }
  if (((*(long *)(param_1 + 0xd20) != 0) && (iVar1 = FUN_0035e7b0(param_1), iVar1 == 0)) &&
     ((*(byte *)(param_1 + 0x950) & 1) != 0)) {
    return 0;
  }
  if ((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc18) != 1)) {
    return 1;
  }
  if (*(int *)(param_1 + 0xc30) == 1) {
    return 1;
  }
  if (*(int *)(param_1 + 0xc3c) == 1) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0xc34) = 1;
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,0xd59,"tls_process_initial_server_flight");
  uVar2 = 0x79;
  uVar3 = 0x1a8;
/*  do not claim this as your own  */
LAB_003b0ddc:
  func_0x003a9570(param_1,uVar2,uVar3,0);
  return 0;
}

