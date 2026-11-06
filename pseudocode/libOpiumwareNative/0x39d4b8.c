/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x39d4b8:f0b8e0acfa
   =========================================================================== */

undefined8 FUN_0039d4b8(long param_1)

{
  char *pcVar1;
  long lVar2;
  
  if ((((*(int *)(param_1 + 0x78) != 0) || (*(long *)(param_1 + 0xa78) == 0)) ||
      (*(long *)(param_1 + 0xa70) == 0)) ||
     ((*(char **)(param_1 + 0xa88) == (char *)0x0 ||
      (lVar2 = *(long *)(param_1 + 0xa80), lVar2 == 0)))) {
    return 1;
  }
  pcVar1 = *(char **)(param_1 + 0xa88);
  if ((*(uint *)(*(long *)(param_1 + 0x300) + 0x1c) & 4) == 0 &&
      (*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & 8) == 0) {
    return 1;
  }
  do {
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (*pcVar1 == '\0') {
      if (lVar2 != 0) {
        return 1;
      }
      break;
    }
    lVar2 = lVar2 + -1;
    pcVar1 = pcVar1 + 1;
  } while (lVar2 != 0);
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                  ,0x566,"final_ec_pt_formats");
  func_0x003a9570(param_1,0x2f,0x9d,0);
  return 0;
}

