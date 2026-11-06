/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3be48c:134c9a7bbf
   =========================================================================== */

undefined8 FUN_003be48c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x900) + 0x2d8);
  puVar3 = (undefined *)(uVar4 / 1000000000);
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    puVar1 = &UNK_00093a80;
    if (uVar4 < 0x2260ff9290001) {
      puVar1 = puVar3;
    }
    iVar2 = func_0x019ec0a0(param_2,(ulong)puVar1 & 0xffffffff,4);
  }
  else {
    if (*(int *)(param_1 + 0x508) != 0) {
      puVar3 = (undefined *)0x0;
    }
    iVar2 = func_0x019ec0a0(param_2,(ulong)puVar3 & 0xffffffff,4);
  }
  if (iVar2 == 0) {
    uVar5 = 0x108c;
  }
  else if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
           (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) &&
          ((iVar2 != 0x10000 &&
           ((iVar2 = func_0x019ec0a0(param_2,param_3,4), iVar2 == 0 ||
            (iVar2 = func_0x004766ec(param_2,param_4,8,1), iVar2 == 0)))))) {
    uVar5 = 0x1093;
  }
  else {
    iVar2 = func_0x019eba0c(param_2,2);
    if (iVar2 != 0) {
      return 1;
    }
    uVar5 = 0x109a;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,uVar5,"create_ticket_prequel");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

