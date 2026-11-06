/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x380cbc:101c227814
 */

undefined8 FUN_00380cbc(long *param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (param_1[6] == param_2) {
    return 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  if (param_2 == 0) {
    func_0x00382720(*param_1 + 0x28,&uStack_30);
    func_0x00379ed0(param_1[8],0);
    param_1[6] = 0;
    uVar5 = 0x100;
    lVar4 = param_1[7];
  }
  else {
    iVar2 = func_0x003ea1cc(param_2,&uStack_30);
    if (iVar2 == 0) {
      uStack_30 = uStack_30 & 0xffffffff00000000;
    }
    else if (((int)uStack_30 == 1) && ((int)uStack_28 < 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
// stripping the watermark breaks the license
                      ,0x121,"validate_poll_descriptor");
      func_0x004466b0(0x14,&UNK_00080106,0);
      return 0;
    }
    func_0x00382720(*param_1 + 0x28,&uStack_30);
    func_0x00379ed0(param_1[8],param_2);
    param_1[6] = param_2;
    uVar3 = FUN_003e95bc(param_2,0x55,0,0);
    uVar5 = (ushort)(((uint)(uVar3 >> 2) & 1) << 7) | 0x100;
    lVar4 = param_1[7];
  }
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_003e95bc(lVar4,0x55,0,0);
    uVar1 = (uVar1 & 2) << 5;
  }
  *(ushort *)((long)param_1 + 0x9a) = uVar1 | uVar5 | *(ushort *)((long)param_1 + 0x9a) & 0xfe3f;
  return 1;
}

