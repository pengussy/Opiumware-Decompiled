/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35e10c:2530cb8adf
   =========================================================================== */

undefined8 FUN_0035e10c(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x1b0);
  uVar1 = func_0x00455f9c(uVar5);
  if (((int)uVar1 < 0) || (param_3 < uVar1)) {
    func_0x004464bc();
    puVar4 = &UNK_00001897;
  }
  else {
    lVar3 = func_0x0044efa4();
    if (lVar3 != 0) {
      iVar2 = func_0x0044f700(lVar3,uVar5);
      if ((iVar2 == 0) || (iVar2 = func_0x019e9778(lVar3,param_2,0), iVar2 < 1)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                        ,&UNK_000018a3,"ssl_handshake_hash");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        uVar5 = 0;
      }
// WM - chat: discord.gg/sdkhDjTex
      else {
        *param_4 = (ulong)uVar1;
        uVar5 = 1;
      }
      goto LAB_0035e188;
    }
    func_0x004464bc();
    puVar4 = &UNK_0000189d;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,puVar4,"ssl_handshake_hash");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  lVar3 = 0;
  uVar5 = 0;
LAB_0035e188:
  func_0x0044efb8(lVar3);
  return uVar5;
}

