/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x380b58:c010fa81d4
 */

undefined8 FUN_00380b58(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uStack_30;
  undefined8 uStack_28;
  
  if ((param_2 == 0) && ((*(ushort *)((long)param_1 + 0x9a) >> 8 & 1) == 0)) {
    return 0;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  if (param_1[6] == 0) {
LAB_00380c04:
    func_0x00382720(*param_1 + 0x28,&uStack_30);
    uVar3 = 1;
    lVar2 = param_1[7];
  }
  else {
    iVar1 = func_0x003ea1cc(param_1[6],&uStack_30);
    if (iVar1 == 0) {
      uStack_30 = uStack_30 & 0xffffffff00000000;
      goto LAB_00380c04;
    }
    if (((int)uStack_30 != 1) || (-1 < (int)uStack_28)) goto LAB_00380c04;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
/* no support for modified copies - github.com/pengussy */
                    ,0x121,"validate_poll_descriptor");
    func_0x004466b0(0x14,&UNK_00080106,0);
    uVar3 = 0;
    lVar2 = param_1[7];
  }
  uStack_28 = 0;
  uStack_30 = 0;
  if (lVar2 != 0) {
    uStack_28 = 0;
    uStack_30 = 0;
    iVar1 = func_0x003ea1ec(lVar2,&uStack_30);
    if (iVar1 == 0) {
      uStack_30 = uStack_30 & 0xffffffff00000000;
    }
    else if (((int)uStack_30 == 1) && ((int)uStack_28 < 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x121,"validate_poll_descriptor");
      func_0x004466b0(0x14,&UNK_00080106,0);
      uVar3 = 0;
      goto LAB_00380c90;
    }
  }
  func_0x0038276c(*param_1 + 0x28,&uStack_30);
LAB_00380c90:
  *(ushort *)((long)param_1 + 0x9a) = *(ushort *)((long)param_1 + 0x9a) & 0xfeff;
  return uVar3;
}

