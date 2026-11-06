/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x39d594:4e7ceb49df
 */

undefined8 FUN_0039d594(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    func_0x004743e4(*(undefined8 *)(param_1 + 0xa50),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                    ,0x580);
    *(undefined8 *)(param_1 + 0xa58) = 0;
    *(undefined8 *)(param_1 + 0xa50) = 0;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    uVar1 = func_0x004dc468(*(undefined8 *)(param_1 + 0xa60),&DAT_0039df70);
    func_0x004dcadc(uVar1,&DAT_004a2478);
    *(undefined8 *)(param_1 + 0xa60) = 0;
    return 1;
  }
  *(undefined4 *)(param_1 + 0xa28) = 0xffffffff;
  return 1;
}

