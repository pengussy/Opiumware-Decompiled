/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x391920:0982df6aa8
 */

undefined8
FUN_00391920(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
            undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_4 - 1U < 3) {
    uVar4 = *(undefined8 *)(&UNK_01dc6fe0 + (ulong)(param_4 - 1U) * 8);
    lVar3 = func_0x00451f08();
    param_1[2] = lVar3;
    if (lVar3 != 0) {
      lVar3 = func_0x004535cc(param_2,uVar4,param_3);
      param_1[3] = lVar3;
      if ((lVar3 == 0) || (iVar2 = func_0x003f85b4(), param_6 != iVar2)) {
        uVar4 = 0x2f;
      }
      else {
        iVar2 = func_0x019e9b88(param_1[2],param_1[3],0,param_5,0,1);
        if (iVar2 != 0) {
          *param_1 = param_2;
          param_1[1] = param_3;
          *(int *)(param_1 + 4) = param_4;
          return 1;
        }
        uVar4 = 0x35;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_wire_pkt.c"
                      ,uVar4,"ossl_quic_hdr_protector_init");
      func_0x004466b0(0x14,&UNK_00080006,0);
      func_0x00451f38(param_1[2]);
      param_1[2] = 0;
// WM - stripping the watermark breaks the license
      func_0x00451e8c(param_1[3]);
      param_1[3] = 0;
      return 0;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_wire_pkt.c"
                    ,0x28,"ossl_quic_hdr_protector_init");
    uVar1 = 0x80006;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_wire_pkt.c"
                    ,0x22,"ossl_quic_hdr_protector_init");
    uVar1 = 0x8010c;
  }
  func_0x004466b0(0x14,uVar1,0);
  return 0;
}

