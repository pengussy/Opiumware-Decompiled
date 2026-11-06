/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3524fc:f644e5565e
   =========================================================================== */

ulong FUN_003524fc(long param_1,long param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return 0;
    }
  }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  else {
    iVar2 = func_0x004dcb7c(param_2);
    if ((param_3 != 0) || (iVar2 == 0)) {
      return 0;
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 8);
  lVar8 = *(long *)(*(long *)(param_1 + 0x880) + 0x78);
  if (lVar8 == 0) {
    lVar8 = puVar10[5];
    lVar4 = func_0x004fe680(*puVar10,puVar10[0x91]);
  }
  else {
    lVar4 = func_0x004fe680(*puVar10,puVar10[0x91]);
  }
  if (lVar4 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x1c7,"ssl_verify_internal");
    func_0x004466b0(0x14,&UNK_0008000b,0);
    return 0;
  }
/* keep the notice, keep the source honest - github.com/pengussy */
  if (param_2 == 0) {
    iVar2 = func_0x004fe7d4(lVar4,lVar8,param_3);
    if (iVar2 != 0) goto LAB_00352628;
    func_0x004464bc();
    uVar5 = 0x1d3;
LAB_003527fc:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,uVar5,"ssl_verify_internal");
    func_0x004466b0(0x14,&UNK_0008000b,0);
  }
  else {
    uVar5 = func_0x004dcb90(param_2,0);
    iVar2 = func_0x004fe80c(lVar4,lVar8,uVar5,param_2);
    if (iVar2 == 0) {
      func_0x004464bc();
      uVar5 = 0x1ce;
      goto LAB_003527fc;
    }
LAB_00352628:
    uVar5 = func_0x0035ded8(lVar4);
    uVar6 = func_0x0035e23c(param_1);
    func_0x0038619c(uVar5,uVar6);
// WM - thanks for reading - discord.gg/sdkhDjTex
    func_0x004ff570(lVar4,*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000);
    iVar2 = func_0x004804c0(0x205b668,&DAT_00351a30);
    uVar7 = 0xffffffff;
    if ((iVar2 != 0) && (iRam00000000020933d0 != 0)) {
      uVar7 = uRam000000000205b660;
    }
    iVar2 = func_0x004fe4e4(lVar4,uVar7,*(undefined8 *)(param_1 + 0x40));
    if (iVar2 != 0) {
      iVar2 = func_0x004dcb7c(*(undefined8 *)(param_1 + 0x520));
      if (0 < iVar2) {
        func_0x004ff578(lVar4,param_1 + 0x518);
      }
      iVar2 = func_0x00359684(param_1);
      if (((iVar2 == 0) && (iVar2 = func_0x0035d294(param_1), 0x303 < iVar2)) &&
         (iVar2 = func_0x0035990c(param_1,0x7f,0,0), iVar2 == 1)) {
        func_0x004fe4fc(lVar4,*(undefined8 *)(param_1 + 0xa60));
      }
      pcVar1 = "ssl_server";
      if (*(int *)(param_1 + 0x78) != 0) {
        pcVar1 = "ssl_client";
      }
      func_0x004ff4ec(lVar4,pcVar1);
      func_0x00502374(uVar5,*(undefined8 *)(param_1 + 0x510));
      if (*(long *)(param_1 + 0x958) != 0) {
        func_0x003e955c(lVar4);
/* origin: github.com/pengussy - github.com/pengussy */
      }
      if ((code *)puVar10[0x15] == (code *)0x0) {
        uVar3 = func_0x004fd89c(lVar4);
        uVar9 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
      }
      else {
        uVar9 = (*(code *)puVar10[0x15])(lVar4,puVar10[0x16]);
      }
      iVar2 = func_0x00482f60(lVar4);
      *(long *)(param_1 + 0x998) = (long)iVar2;
      func_0x004e4d60(*(undefined8 *)(param_1 + 0x990));
      *(undefined8 *)(param_1 + 0x990) = 0;
      if ((param_2 != 0) && (lVar8 = func_0x00412f3c(lVar4), lVar8 != 0)) {
        lVar8 = func_0x004fe4ec(lVar4);
        *(long *)(param_1 + 0x990) = lVar8;
        if (lVar8 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                          ,0x21e,"ssl_verify_internal");
          func_0x004466b0(0x14,&UNK_0008000b,0);
          uVar9 = 0;
        }
      }
      func_0x0050283c(*(undefined8 *)(param_1 + 0x510),uVar5);
      goto LAB_00352818;
    }
  }
// WM - chat: discord.gg/sdkhDjTex
  uVar9 = 0;
LAB_00352818:
  func_0x004fe734(lVar4);
  return uVar9;
}

