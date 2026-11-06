/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x38a1a0:ab8ea91810
   =========================================================================== */

undefined8 FUN_0038a1a0(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (uint *)*param_1;
  if (puVar1 != (uint *)0x0) {
    if (*puVar1 == 0) {
      lVar2 = func_0x0035990c(puVar1,0x7b,0x304,0);
    }
    else {
      if (((*puVar1 >> 7 & 1) == 0) || (puVar1 = (uint *)func_0x00380678(), puVar1 == (uint *)0x0))
      goto LAB_0038a1ec;
      lVar2 = func_0x0035990c(*param_1,0x7b,0x304,0);
    }
    if (lVar2 != 0) {
      func_0x003eca74();
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      lVar2 = func_0x003e945c();
      if (lVar2 != 0) {
        func_0x00359df4(*param_1,lVar2,lVar2);
        func_0x0035e418(*param_1,0x100000);
        func_0x003954b4(puVar1,&UNK_01dc6d98,param_1);
        uVar3 = func_0x003a4430(0,*(long *)(puVar1 + 0x220) + 0x80,*(int *)(param_1 + 0xf) != 0,0x39
                                ,0x4a0,&DAT_0038a408,&DAT_0038a42c,param_1,&DAT_0038a430,param_1);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        *(ulong *)(puVar1 + 0x58) = *(ulong *)(puVar1 + 0x58) | 0x2000;
        return 1;
      }
      func_0x004464bc();
      uVar3 = 0x2d2;
      goto LAB_0038a204;
    }
  }
LAB_0038a1ec:
  func_0x004464bc();
  uVar3 = 0x2ce;
LAB_0038a204:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                  ,uVar3,"ossl_quic_tls_configure");
  func_0x004466b0(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")");
  if (*(int *)((long)param_1 + 0x7c) == 0) {
    return 0;
  }
  func_0x00446da0(param_1[0x12]);
  param_1[0x13] = 1;
  param_1[0x14] = "internal error";
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 2;
  func_0x004468d8();
  return 0;
}

