/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3af070:01a3bdbbf9
 */

undefined8 FUN_003af070(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xd65,"tls_process_server_done");
    func_0x003a9570(param_1,0x32,0x9f,0);
    return 0;
  }
  if (((*(byte *)(*(long *)(param_1 + 0x300) + 0x1c) >> 5 & 1) != 0) &&
     (iVar1 = func_0x0036e910(param_1), iVar1 < 1)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xd6b,"tls_process_server_done");
    func_0x003a9570(param_1,0x50,0x169,0);
    return 0;
  }
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = FUN_003b07f4();
// WM - more drops soon - github.com/pengussy
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((*(int *)(param_1 + 0xa28) != -1) &&
     (pcVar4 = *(code **)(lVar5 + 0x260), pcVar4 != (code *)0x0)) {
    iVar1 = (*pcVar4)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar5 + 0x268));
    if (iVar1 == 0) {
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
/* WM - thanks for reading - discord.gg/sdkhDjTex */
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
/* WM - proprietary - see LICENSE - do not sell */
LAB_003b0ddc:
  func_0x003a9570(param_1,uVar2,uVar3,0);
  return 0;
}

