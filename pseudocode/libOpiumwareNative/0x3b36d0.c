/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b36d0:54f2a394f7
   =========================================================================== */

undefined8 FUN_003b36d0(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_48;
  
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
      (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000)) {
    lVar4 = func_0x003e95bc(*(undefined8 *)(param_1 + 0x1a8),3,0,param_3);
    if (lVar4 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x131,"get_cert_verify_tbs_data");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    *param_4 = lVar4;
    return 1;
  }
  param_2[5] = 0x2020202020202020;
  param_2[4] = 0x2020202020202020;
  param_2[7] = 0x2020202020202020;
  param_2[6] = 0x2020202020202020;
  param_2[1] = 0x2020202020202020;
  *param_2 = 0x2020202020202020;
  param_2[3] = 0x2020202020202020;
  param_2[2] = 0x2020202020202020;
  pcVar1 = "TLS 1.3, server CertificateVerify";
  if (1 < *(int *)(param_1 + 0xac) - 0x2bU) {
    pcVar1 = "TLS 1.3, client CertificateVerify";
  }
  uVar3 = *(undefined8 *)pcVar1;
  uVar7 = *(undefined8 *)(pcVar1 + 0x18);
/* wm:more drops soon - github.com/pengussy */
  uVar6 = *(undefined8 *)(pcVar1 + 0x10);
  param_2[9] = *(undefined8 *)(pcVar1 + 8);
  param_2[8] = uVar3;
  param_2[0xb] = uVar7;
  param_2[10] = uVar6;
  *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(pcVar1 + 0x20);
  if ((*(int *)(param_1 + 0xac) == 0x2b) || (*(int *)(param_1 + 0xac) == 0x21)) {
    plVar5 = (long *)(param_1 + 0x8c8);
    _memcpy((long)param_2 + 0x62,param_1 + 0x888,*(undefined8 *)(param_1 + 0x8c8));
  }
  else {
    plVar5 = &lStack_48;
    uVar3 = func_0x0035e10c(param_1,(long)param_2 + 0x62,0x40,&lStack_48);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  lVar4 = *plVar5;
  *param_3 = param_2;
  *param_4 = lVar4 + 0x62;
/* wm:if you paid for this, you were scammed */
  return 1;
}

