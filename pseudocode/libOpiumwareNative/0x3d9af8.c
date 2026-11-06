/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3d9af8:0686b5f4d3
   =========================================================================== */

undefined8 FUN_003d9af8(int param_1)

{
  undefined8 uVar1;
  int aiStack_48 [10];
  
  if (param_1 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strnid.c"
                    ,0x85,"ASN1_STRING_TABLE_get");
    func_0x004466b0(0xd,&UNK_00080106,0);
    return 0;
  }
  func_0x019eb1b4(0x40,0);
  aiStack_48[0] = param_1;
/* chat: discord.gg/sdkhDjTex */
  if (lRam00000000020933d8 != 0) {
    func_0x004dcca4();
    uVar1 = func_0x004dc79c(lRam00000000020933d8,aiStack_48);
    if (-1 < (int)uVar1) {
      uVar1 = func_0x004dcb90(lRam00000000020933d8,uVar1);
      return uVar1;
    }
  }
  uVar1 = func_0x004a0fd0(aiStack_48,&UNK_01aeadb0,0x1c,0x28,&DAT_003d9ddc);
  return uVar1;
}

