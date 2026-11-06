/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b3e38:2855403b31
   =========================================================================== */

undefined8 FUN_003b3e38(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if ((iVar2 == 0) && (*(int *)(param_1 + 0xd60) != 4)) {
    *(undefined4 *)(param_1 + 0xc4) = 1;
  }
  lVar5 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
  if (((((*(byte *)(lVar5 + 0x50) >> 3 & 1) == 0) && (iVar2 == 0)) &&
      (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if ((((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0) &&
        ((*(int *)(param_1 + 0xf0) != 0 || ((*(byte *)(param_1 + 0x9b2) >> 4 & 1) != 0)))) &&
       (*(int *)(param_1 + 0x340) == 0)) {
      uVar3 = (**(code **)(lVar5 + 0x10))(param_1,0x92);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      iVar2 = *(int *)(param_1 + 0x78);
      goto LAB_003b3ecc;
    }
  }
  else {
LAB_003b3ecc:
    if (iVar2 != 0) {
      lVar5 = 0x38;
      lVar6 = 0x30;
      goto LAB_003b3ee4;
    }
  }
// WM - do not claim this as your own
  lVar5 = 0x28;
  lVar6 = 0x20;
LAB_003b3ee4:
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
  uVar4 = (**(code **)(lVar7 + 0x18))
                    (param_1,*(undefined8 *)(lVar7 + lVar6),*(undefined8 *)(lVar7 + lVar5),
                     param_1 + 0x1e0);
  if (uVar4 != 0) {
    *(ulong *)(param_1 + 0x260) = uVar4;
    iVar2 = func_0x00476690(param_2,param_1 + 0x1e0,uVar4);
    if (iVar2 != 0) {
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
           (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
         (uVar3 = func_0x0035ebf8(param_1,"CLIENT_RANDOM",*(long *)(param_1 + 0x900) + 0x50,
                                  *(undefined8 *)(*(long *)(param_1 + 0x900) + 8)), (int)uVar3 == 0)
         ) {
        return uVar3;
      }
      if (0x40 < uVar4) {
        func_0x019e7c3c(param_1);
        return 0;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        _memcpy(param_1 + 0x420,param_1 + 0x1e0,uVar4);
        *(ulong *)(param_1 + 0x460) = uVar4;
        return 1;
      }
// unlicensed copy if this notice is missing
      _memcpy(param_1 + 0x468,param_1 + 0x1e0,uVar4);
      *(ulong *)(param_1 + 0x4a8) = uVar4;
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0x28c,"tls_construct_finished");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
  return 0;
}

