/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a8f44:3d70f8737c
   =========================================================================== */

undefined4 FUN_003a8f44(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(int *)(param_1 + 0xc3c) == 1) || (*(long *)(param_1 + 0xb60) == 0)) {
    return 1;
  }
  if (*(short *)(param_1 + 0xc20) == -499) {
    if (param_2[2] != 0) {
      cVar1 = *(char *)*param_2;
      *param_2 = (char *)*param_2 + 1;
      lVar2 = param_2[2] + -1;
      param_2[2] = lVar2;
      if (lVar2 == 0) {
        if (cVar1 == '\x01') {
          *(undefined4 *)(param_1 + 0xc38) = 1;
          if (*(int *)(param_1 + 0xc30) == 1) {
            return 1;
          }
          if (*(int *)(param_1 + 0xc28) == 1) {
            return 1;
          }
          uVar3 = 0x2f;
          uVar4 = 0x9b6;
        }
        else {
          uVar3 = 0x2f;
          uVar4 = 0x9b1;
        }
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
        goto LAB_003a8fbc;
      }
    }
    uVar3 = 0x32;
    uVar4 = 0x9ad;
  }
  else {
    uVar3 = 0x2f;
    uVar4 = 0x9a4;
  }
LAB_003a8fbc:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar4,"tls_parse_ctos_ech");
  func_0x003a9570(param_1,uVar3,0x6e,0);
  return 0;
}

