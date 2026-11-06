/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x37f6c8:06906fb706
 */

ulong FUN_0037f6c8(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + 0x18);
  if ((*(ushort *)(lVar3 + 0x150) >> 5 & 1) == 0) {
    iVar1 = func_0x00375608(*(undefined8 *)(lVar3 + 0xa0));
    if (iVar1 == 0) {
      iVar1 = func_0x003755c8(*(undefined8 *)(lVar3 + 0xa0));
      lVar2 = *param_1;
      param_2 = extraout_x1_00;
      if (iVar1 != 0) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
        iVar1 = FUN_0037f44c(lVar2,param_1[1],param_1[2],param_1[3],param_1[4],(int)param_1[5]);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        return (ulong)(*(long *)param_1[4] != 0);
      }
    }
    else {
      lVar2 = *param_1;
      param_2 = extraout_x1;
    }
  }
  FUN_0037b358(lVar2,param_2,0xbee,"quic_read_again",0xcf,0);
  return 0xffffffff;
}

