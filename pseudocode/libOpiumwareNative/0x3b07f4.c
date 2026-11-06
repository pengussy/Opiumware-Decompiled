/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b07f4:3d6cf43b55
   =========================================================================== */

undefined8 FUN_003b07f4(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lStack_38;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
  if ((uVar1 & 0xab) == 0) {
    return 1;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  uVar4 = func_0x003b3e1c();
  lVar5 = func_0x00353890(uVar4,&lStack_38,*(undefined8 *)(param_1 + 8));
  if ((lVar5 == 0) || ((*(uint *)(lVar5 + 4) & uVar1) == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,"rk/Versions/A/Metal","ssl3_check_cert_and_algorithm");
    uVar4 = 0x28;
    puVar6 = (undefined *)0xdd;
  }
  else if ((uVar2 & 0x41) == 0 || lStack_38 == 0) {
    if (((uVar2 >> 1 & 1) == 0) || (*(long *)(param_1 + 0x4e0) != 0)) {
      if (((*(uint *)(lVar5 + 4) >> 3 & 1) == 0) ||
         ((*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) != 0 ||
          (iVar3 = func_0x0035d2f8(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c0),param_1),
/*  chat: discord.gg/sdkhDjTex  */
          iVar3 != 0)))) {
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,"","ssl3_check_cert_and_algorithm");
      uVar4 = 0x28;
      puVar6 = (undefined *)0x130;
    }
    else {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,"/A/Metal","ssl3_check_cert_and_algorithm");
      uVar4 = 0x50;
      puVar6 = &UNK_000c0103;
    }
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,"sions/A/Metal","ssl3_check_cert_and_algorithm");
    uVar4 = 0x28;
    puVar6 = (undefined *)0xa9;
  }
  func_0x003a9570(param_1,uVar4,puVar6,0);
  return 0;
}

