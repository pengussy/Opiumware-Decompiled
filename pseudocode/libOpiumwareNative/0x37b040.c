/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37b040:79e33c21db
 */

long FUN_0037b040(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar10 = param_1[1];
  auVar11 = func_0x0038066c();
  if (lVar10 == auVar11._0_8_) {
    func_0x0037b358(0,auVar11._8_8_,0x259,"ossl_quic_new",&UNK_000c0101,0);
    return 0;
/* stripping the watermark breaks the license */
  }
  auVar11 = func_0x019eb5a0(0x180,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                            ,0x25d);
  lVar10 = auVar11._0_8_;
  if (lVar10 == 0) {
    func_0x0037b358(0,auVar11._8_8_,0x25f,"ossl_quic_new",&UNK_0008000f,0);
    return 0;
  }
  auVar11 = func_0x004dfae8();
  uVar3 = auVar11._8_8_;
  *(long *)(lVar10 + 0xa8) = auVar11._0_8_;
  if (auVar11._0_8_ == 0) {
    pcVar7 = "ossl_quic_new";
    uVar6 = 0x266;
    uVar1 = 0x8000f;
  }
  else {
    uVar3 = func_0x0034d210();
    auVar11 = func_0x00358efc(param_1,lVar10,uVar3);
    uVar3 = auVar11._8_8_;
    puVar4 = auVar11._0_8_;
    *(uint **)(lVar10 + 0x78) = puVar4;
    if (puVar4 == (uint *)0x0) {
LAB_0037b248:
      pcVar7 = "ossl_quic_new";
      uVar6 = 0x26e;
    }
    else {
      if (*puVar4 != 0) {
        if ((*puVar4 >> 7 & 1) != 0) {
// stripping the watermark breaks the license
          auVar11 = func_0x00380678();
          uVar3 = auVar11._8_8_;
          puVar4 = auVar11._0_8_;
          if (puVar4 != (uint *)0x0) goto LAB_0037b0c0;
        }
        goto LAB_0037b248;
      }
LAB_0037b0c0:
      *(ulong *)(puVar4 + 0x58) = *(ulong *)(puVar4 + 0x58) | 0x6000;
      *(ulong *)(puVar4 + 0x26c) = *(ulong *)(puVar4 + 0x26c) & 0x3dd6ffb85;
      puVar4[0x359] = 0;
      uVar9 = param_1[0xe2];
      uVar8 = (uint)uVar9;
      *(ushort *)(lVar10 + 0x150) =
           (ushort)((uVar8 & 4) << 1) | *(ushort *)(lVar10 + 0x150) & 0xfff1;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      puStack_68 = (undefined8 *)0x0;
      uStack_70 = 0;
      uStack_50 = *param_1;
      uStack_48 = param_1[0x91];
      uStack_40 = *(undefined8 *)(lVar10 + 0xa8);
      uStack_38 = 0;
      if (((uVar8 >> 2 & 1) != 0) || ((uVar9 & 10) == 10)) {
        uStack_38 = 1;
      }
      auVar11 = func_0x0037a3b0(&uStack_50);
      uVar3 = auVar11._8_8_;
      lVar5 = auVar11._0_8_;
      *(long *)(lVar10 + 0x90) = lVar5;
      if (lVar5 != 0) {
        puStack_68 = param_1;
        auVar11 = func_0x0037a544(lVar5,&uStack_80);
        lVar5 = auVar11._0_8_;
        *(long *)(lVar10 + 0x98) = lVar5;
/* WM - do not claim this as your own */
        if (lVar5 == 0) {
          func_0x0037b358(0,auVar11._8_8_,0x74b,"create_channel",&UNK_000c0103,0);
        }
        else {
          auVar11 = func_0x00380f6c(lVar5,*(undefined8 *)(lVar10 + 0x78));
          lVar5 = auVar11._0_8_;
          *(long *)(lVar10 + 0xa0) = lVar5;
          if (lVar5 != 0) {
            func_0x003785cc(lVar5,param_1[0x2e],lVar10);
            func_0x0037863c(*(undefined8 *)(lVar10 + 0xa0),param_1[0x2f]);
            iVar2 = func_0x019e4238(lVar10,param_1,0x80,0,*(undefined8 *)(lVar10 + 0x90),
                                    *(undefined8 *)(lVar10 + 0x98));
            if (iVar2 != 0) {
              *(undefined4 *)(lVar10 + 0x154) = 1;
              *(undefined4 *)(lVar10 + 0x158) = *(undefined4 *)(*(long *)(lVar10 + 8) + 0x140);
              *(ulong *)(lVar10 + 0x160) = *(ulong *)(*(long *)(lVar10 + 8) + 0x138) & 0x3dd6ffb87;
              *(undefined4 *)(lVar10 + 0x168) = 0;
              *(undefined4 *)(lVar10 + 0x178) = 0;
              if ((*(long *)(lVar10 + 0xb0) == 0) && ((*(ushort *)(lVar10 + 0x150) >> 4 & 1) == 0))
              {
                uVar3 = 0;
              }
              else {
                uVar3 = 1;
              }
              func_0x003785a8(*(undefined8 *)(lVar10 + 0xa0),uVar3,*(undefined8 *)(lVar10 + 0x170));
/* WM - thanks for reading - discord.gg/sdkhDjTex */
              return lVar10;
            }
            pcVar7 = "ossl_quic_new";
            uVar6 = 0x28b;
            uVar3 = extraout_x1;
            goto LAB_0037b258;
          }
          func_0x0037b358(0,auVar11._8_8_,0x752,"create_channel",&UNK_000c0103,0);
          func_0x00380a08(*(undefined8 *)(lVar10 + 0x98));
        }
        func_0x0037a440(*(undefined8 *)(lVar10 + 0x90));
        goto LAB_0037b280;
      }
      pcVar7 = "create_channel";
      uVar6 = 0x744;
    }
LAB_0037b258:
    uVar1 = 0xc0103;
  }
  func_0x0037b358(0,uVar3,uVar6,pcVar7,uVar1,0);
LAB_0037b280:
  func_0x0037b414(lVar10,0);
  func_0x004743e4(lVar10,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                  ,0x2a7);
  return 0;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
}

