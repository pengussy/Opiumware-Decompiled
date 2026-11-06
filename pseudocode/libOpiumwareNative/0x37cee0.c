/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37cee0:96fadbaaaa
 */

undefined8 FUN_0037cee0(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined1 auStack_58 [24];
  long lStack_40;
  
  iVar2 = FUN_0037e724(param_1,auStack_58,1);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
/*  donate: donate/README.md  */
  uVar1 = *(ushort *)(lStack_40 + 0x150);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 & 1) != 0) {
      FUN_0037b358(0,extraout_x1,0x6f9,"ossl_quic_set_accept_state",0x118,0);
      return 0xffffffff;
    }
    *(ushort *)(lStack_40 + 0x150) = uVar1 | 4;
  }
  uVar3 = func_0x0037c928(param_1);
  return uVar3;
}

