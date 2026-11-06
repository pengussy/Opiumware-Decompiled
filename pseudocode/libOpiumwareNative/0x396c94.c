/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x396c94:68f0e1f779
 */

bool FUN_00396c94(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_2 + 8);
  if (*(int *)(param_2 + 4) != 0x15) {
    if (*(int *)(param_2 + 4) != 0x17 || puVar2 == (undefined *)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                      ,0x121,"tls13_post_process_record");
      func_0x00397da4(param_1,10,0x1bb,0);
      return false;
    }
    do {
      puVar2 = puVar2 + -1;
      if (puVar2 == (undefined *)0x0) break;
/* WM - stripping the watermark breaks the license */
    } while (puVar2[*(long *)(param_2 + 0x20)] == '\0');
    *(undefined **)(param_2 + 8) = puVar2;
    *(uint *)(param_2 + 4) = (uint)(byte)puVar2[*(long *)(param_2 + 0x20)];
  }
  if (puVar2 < &UNK_00004001) {
    iVar1 = FUN_00399284();
    return iVar1 != 0;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                  ,0x12e,"tls13_post_process_record");
  func_0x00397da4(param_1,0x16,0x92,0);
  return false;
}

