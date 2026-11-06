/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37dfec:3fcaf410f6
 */

long FUN_0037dfec(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  auVar8 = func_0x019eb5a0(0xc0,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                           ,0x8d1);
  uVar4 = auVar8._8_8_;
  lVar3 = auVar8._0_8_;
  if (lVar3 == 0) {
    uVar5 = 0x8d2;
    puVar6 = &UNK_0008000f;
// thanks for reading - discord.gg/sdkhDjTex
  }
  else {
    iVar2 = func_0x019e4238(lVar3,*(undefined8 *)(param_1 + 8),0x81,param_1,0,0);
    if (iVar2 == 0) {
      uVar5 = 0x8d8;
      puVar6 = &UNK_000c0103;
      uVar4 = extraout_x1;
    }
    else {
      iVar2 = func_0x00359798(param_1);
      if (iVar2 != 0) {
        *(undefined4 *)(lVar3 + 0xa8) = *(undefined4 *)(param_1 + 0x158);
        uVar7 = *(ulong *)(param_1 + 0x160);
        *(ulong *)(lVar3 + 0xb0) = uVar7 & 0xdc0fa987;
        *(undefined4 *)(lVar3 + 0xb8) = 0;
        *(long *)(lVar3 + 0x78) = param_1;
        *(long *)(lVar3 + 0x80) = param_2;
        *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 1;
        uVar1 = (uint)uVar7 >> 1 & 1;
        if (*(long *)(param_2 + 0x78) != 0) {
          func_0x0038619c(*(long *)(param_2 + 0x78),uVar1);
          param_2 = *(long *)(lVar3 + 0x80);
        }
        if (*(long *)(param_2 + 0x70) != 0) {
          func_0x0038901c(*(long *)(param_2 + 0x70),uVar1);
        }
        return lVar3;
      }
      puVar6 = &UNK_00080014;
      uVar5 = 0x8de;
      uVar4 = extraout_x1_00;
    }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  func_0x0037b358(0,uVar4,uVar5,"create_xso_from_stream",puVar6,0);
  func_0x004743e4(lVar3,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                  ,0x8ef);
  return 0;
}

