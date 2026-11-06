/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3be0a4:39119d0650
   =========================================================================== */

undefined8 FUN_003be0a4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_28;
  
  lStack_28 = 0;
  iVar1 = FUN_003b486c(param_1,param_2,&lStack_28);
  if (iVar1 != 0) {
    if (lStack_28 == 0) {
      if (((*(uint *)(param_1 + 0x950) ^ 0xffffffff) & 3) != 0) goto LAB_003be150;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xf1f,"tls_process_client_rpk");
      uVar2 = 0x74;
      puVar4 = (undefined *)0xc7;
    }
/*  donate: donate/README.md  */
    else {
      iVar1 = func_0x003524f0(param_1);
      if (0 < iVar1) {
LAB_003be150:
        lVar3 = *(long *)(param_1 + 0x900);
        if (*(int *)(param_1 + 0xd60) == 4) {
          lVar3 = func_0x003614a0(lVar3,0);
          if (lVar3 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xf34,"tls_process_client_rpk");
            uVar2 = 0x50;
            puVar4 = &UNK_000c0100;
            goto LAB_003be258;
          }
          func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
          *(long *)(param_1 + 0x900) = lVar3;
        }
        func_0x00506714(*(undefined8 *)(lVar3 + 0x2c0));
        lVar3 = *(long *)(param_1 + 0x900);
        *(undefined8 *)(lVar3 + 0x2c0) = 0;
        func_0x004dcadc(*(undefined8 *)(lVar3 + 0x2c8),&SUB_00506714);
        lVar3 = *(long *)(param_1 + 0x900);
        *(undefined8 *)(lVar3 + 0x2c8) = 0;
        func_0x0045eb4c(*(undefined8 *)(lVar3 + 0x2b8));
// more drops soon - github.com/pengussy
        lVar3 = *(long *)(param_1 + 0x900);
        *(long *)(lVar3 + 0x2b8) = lStack_28;
        lStack_28 = 0;
        *(undefined8 *)(lVar3 + 0x2d0) = *(undefined8 *)(param_1 + 0x998);
        if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
          uVar2 = 3;
          goto LAB_003be264;
        }
        iVar1 = **(int **)(param_1 + 0x18);
        uVar2 = 3;
        if ((iVar1 < 0x304) || (iVar1 == 0x10000)) goto LAB_003be264;
        iVar1 = func_0x0034d670(param_1,1);
        if ((iVar1 != 0) &&
           (iVar1 = func_0x0035e10c(param_1,param_1 + 0x888,0x40,param_1 + 0x8c8), iVar1 != 0)) {
          *(undefined8 *)(&UNK_00001710 + param_1) = 0;
          goto LAB_003be264;
        }
        goto LAB_003be260;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xf25,"tls_process_client_rpk");
      uVar2 = func_0x003b59c8(*(undefined4 *)(param_1 + 0x998));
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      puVar4 = (undefined *)0x86;
    }
LAB_003be258:
    func_0x003a9570(param_1,uVar2,puVar4,0);
  }
LAB_003be260:
  uVar2 = 0;
LAB_003be264:
  func_0x0045eb4c(lStack_28);
  return uVar2;
}

