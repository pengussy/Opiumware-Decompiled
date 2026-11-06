/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x363c78:2e5de2cb32
   =========================================================================== */

void FUN_00363c78(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x0047b504(*param_1,&DAT_00363cc4,param_1);
  if (iVar1 != 0) {
    func_0x0035bca0(param_1,0x5c,0,
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    "?*X25519MLKEM768:?SecP256r1MLKEM768:?curveSM2MLKEM768 / ?*X25519:?secp256r1 / ?X448:?secp384r1:?secp521r1 / ?curveSM2 / ?ffdhe2048:?ffdhe3072"
                   );
  }
  return;
}

