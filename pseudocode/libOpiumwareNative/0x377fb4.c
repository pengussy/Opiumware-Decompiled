/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x377fb4:a0c9b5c3d3
 */

void FUN_00377fb4(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char *pcStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = 0;
  uStack_18 = 0;
  if ((*(ulong *)(param_1 + 0x620) >> 0x25 & 1) == 0) {
/* donate: donate/README.md - github.com/pengussy */
    *(ulong *)(param_1 + 0x620) = *(ulong *)(param_1 + 0x620) | 0x2000000000;
    uStack_38 = 1;
    pcStack_28 = "network BIO I/O error";
    uStack_20 = 0x15;
    FUN_003772a4(param_1,&uStack_38,1);
  }
  return;
}

