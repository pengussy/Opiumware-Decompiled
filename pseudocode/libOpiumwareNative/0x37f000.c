/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37f000:4d643d3fce
 */

ulong FUN_0037f000(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  
  lVar3 = *param_1;
  if ((((*(ushort *)(lVar3 + 0x150) >> 5 & 1) != 0) ||
      (iVar1 = func_0x00375608(*(undefined8 *)(lVar3 + 0xa0)), param_2 = extraout_x1, iVar1 != 0))
     || (iVar1 = func_0x003755c8(*(undefined8 *)(lVar3 + 0xa0)), param_2 = extraout_x1_00,
        iVar1 == 0)) {
    FUN_0037b358(param_1[2],param_2,0x864,"quic_wait_for_stream",0xcf,0);
    return 0xffffffff;
/*  proprietary - see LICENSE - do not sell  */
  }
  uVar2 = func_0x003754c8(*(undefined8 *)(*param_1 + 0xa0));
  lVar3 = func_0x0038943c(uVar2,param_1[3]);
  param_1[1] = lVar3;
  if (lVar3 == 0) {
    uVar2 = func_0x003754c8(*(undefined8 *)(*param_1 + 0xa0));
    lVar3 = func_0x0038943c(uVar2,param_1[3] | 2);
    param_1[1] = lVar3;
    return (ulong)(lVar3 != 0);
  }
  return 1;
}

