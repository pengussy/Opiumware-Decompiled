/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x34beb4:6dd56567e0
 */

ulong * FUN_0034beb4(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)func_0x019eb5a0(0x10,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                                    ,0x43);
  if (puVar1 != (ulong *)0x0) {
    uVar2 = *param_1;
    *puVar1 = uVar2;
    puVar1[1] = 0;
    if ((uVar2 & 0xffff0000) != 0) {
      uVar2 = func_0x00475ac0(param_1[1],*(undefined2 *)((long)param_1 + 2),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                              ,0x4a);
/* found on a paste site? it was re-uploaded illegally */
      puVar1[1] = uVar2;
      if (uVar2 == 0) {
        func_0x004743e4(0,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                        ,0x3c);
        func_0x004743e4(puVar1,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                        ,0x3d);
        return (ulong *)0x0;
      }
    }
  }
  return puVar1;
}

