/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x349118:a93b671464
   =========================================================================== */

undefined8 FUN_00349118(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0;
  if (param_1 != 0) {
    if ((((*(long **)(param_1 + 0xb60) == (long *)0x0) || (param_2 == 0)) ||
        (**(long **)(param_1 + 0xb60) == 0)) || (*(long *)(param_1 + 8) == 0)) {
      func_0x004464bc();
      uVar5 = 0x2ba;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 3000);
      uVar7 = *(undefined8 *)(param_1 + 0xbc0);
      uVar5 = *(undefined8 *)(param_1 + 0xbc8);
      uStack_68 = *(undefined8 *)(param_1 + 0xbd0);
      iVar2 = func_0x019ec1d8(param_2,&uStack_70);
      if ((iVar2 == 0) || (uStack_70 < 4)) {
        func_0x004464bc();
        uVar5 = 0x2c3;
      }
      else {
        uStack_70 = uStack_70 - 4;
        lVar3 = func_0x004764b4(param_2);
        uVar1 = uStack_70;
        lVar8 = *(long *)(param_1 + 0xbd8);
        iVar2 = func_0x00476494(param_2);
        if (iVar2 == 0) {
          func_0x004464bc();
          uVar5 = 0x2d1;
        }
        else {
          lVar4 = func_0x019eb5a0(uVar5,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                  ,0x2d7);
          if (lVar4 == 0) {
            func_0x004464bc();
            uVar5 = 0x2d9;
          }
          else {
            _memcpy(lVar4,uVar6,uVar7);
            func_0x004743e4(*(undefined8 *)(param_1 + 3000),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0x2e1);
            *(undefined8 *)(param_1 + 3000) = 0;
            iVar2 = func_0x0046b724(*(undefined8 *)(param_1 + 0xc78),(lVar3 - uVar1) + lVar8,
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                                    &uStack_68,lVar3 - uVar1,uStack_70,lVar4,uVar5);
            func_0x004743e4(lVar4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0x2e5);
            if (iVar2 == 1) {
              func_0x019ec1d8(param_2,&uStack_70);
              func_0x004764b4(param_2);
              return 1;
            }
            func_0x004464bc();
            uVar5 = 0x2e7;
          }
        }
      }
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,uVar5,"ossl_ech_aad_and_encrypt");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
  return 0;
}

