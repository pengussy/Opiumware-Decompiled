/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x394698:78ddb3b97c
   =========================================================================== */

undefined8 FUN_00394698(long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344);
    if ((uVar3 != 0) ||
       ((*(long *)(param_1 + 0x908) != 0 &&
        (uVar3 = *(uint *)(*(long *)(param_1 + 0x908) + 0x344), uVar3 != 0)))) goto LAB_0039470c;
    func_0x019e6d14(param_1);
  }
  else {
    uVar3 = *(uint *)(&UNK_000016fc + param_1);
    if ((*(int *)(param_1 + 0xb20) == 2) &&
       (uVar1 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344), uVar1 <= uVar3)) {
      uVar3 = uVar1;
    }
    if (uVar3 != 0) {
LAB_0039470c:
      if (param_2 + (ulong)*(uint *)(&UNK_00001700 + param_1) <= (ulong)(uVar3 + param_3)) {
        *(uint *)(&UNK_00001700 + param_1) = *(uint *)(&UNK_00001700 + param_1) + (int)param_2;
        return 1;
      }
      func_0x004464bc();
      uVar2 = 0xa8;
      goto LAB_00394738;
    }
  }
  func_0x004464bc();
  uVar2 = 0x9f;
// do not claim this as your own
LAB_00394738:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                  ,uVar2,"ossl_early_data_count_ok");
  uVar4 = 10;
  if (param_4 != 0) {
    uVar4 = 0x50;
  }
  func_0x003a9570(param_1,uVar4,0xa4,0);
  return 0;
}

