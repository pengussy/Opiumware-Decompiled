/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b70c0:3a83c30832
   =========================================================================== */

long FUN_003b70c0(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)
           func_0x019eb530(param_4 + 0x40,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                           ,0xacf);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0xad2,"construct_key_exchange_tbs");
    func_0x003a9570(param_1,0x50,&UNK_0008000f,0);
    return 0;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  }
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uVar4 = *(undefined8 *)(param_1 + 0x1a0);
  uVar3 = *(undefined8 *)(param_1 + 0x198);
  puVar1[1] = *(undefined8 *)(param_1 + 400);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  puVar1[5] = *(undefined8 *)(param_1 + 0x170);
  puVar1[4] = uVar2;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  _memcpy(puVar1 + 8,param_3,param_4);
  *param_2 = (long)puVar1;
  return param_4 + 0x40;
}

