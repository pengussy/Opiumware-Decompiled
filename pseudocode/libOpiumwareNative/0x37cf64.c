/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37cf64:041b756c8e
 */

long FUN_0037cf64(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long lStack_50;
  uint uStack_48;
  
  lVar7 = param_1[3];
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  uVar4 = param_2;
  if (param_3 != 0) {
    func_0x002f78bc(*(undefined8 *)(*param_1 + 0x58));
    func_0x004dfb50();
    uVar4 = extraout_x1;
  }
  if (((*(ushort *)(lVar7 + 0x150) >> 5 & 1) == 0) &&
     (iVar2 = func_0x00375608(*(undefined8 *)(lVar7 + 0xa0)), uVar4 = extraout_x1_00, iVar2 == 0)) {
    uVar9 = (uint)param_2;
    uVar1 = uVar9 & 1;
    if (((uVar9 >> 2 & 1) == 0) &&
       (iVar2 = func_0x00378294(*(undefined8 *)(lVar7 + 0xa0),uVar1), iVar2 == 0)) {
      uVar4 = extraout_x1_01;
      if (((uVar9 >> 1 & 1) == 0) &&
         (iVar2 = func_0x003806c4(*param_1), uVar4 = extraout_x1_02, iVar2 != 0)) {
        uVar4 = *(undefined8 *)(*param_1 + 0x58);
/* WM - more drops soon - github.com/pengussy */
        lStack_50 = lVar7;
        uStack_48 = uVar1;
        func_0x0037a4f4(uVar4,0);
        uVar4 = func_0x0037a47c(uVar4);
        iVar2 = func_0x00382870(uVar4,&DAT_0037f160,&lStack_50,0);
        uVar4 = extraout_x1_03;
        if ((((*(ushort *)(lVar7 + 0x150) >> 5 & 1) != 0) ||
            (iVar3 = func_0x00375608(*(undefined8 *)(lVar7 + 0xa0)), uVar4 = extraout_x1_04,
            iVar3 != 0)) ||
           (iVar3 = func_0x003755c8(*(undefined8 *)(lVar7 + 0xa0)), uVar4 = extraout_x1_05,
           iVar3 == 0)) {
          uVar5 = 0x92c;
          goto LAB_0037cfc4;
        }
        if (0 < iVar2) goto LAB_0037d048;
        uVar5 = 0x92f;
        puVar6 = &UNK_000c0103;
      }
      else {
        uVar5 = 0x922;
        puVar6 = (undefined *)0x19b;
      }
      goto LAB_0037cfc8;
    }
LAB_0037d048:
/*  origin: github.com/pengussy  */
    auVar11 = func_0x003782b4(*(undefined8 *)(lVar7 + 0xa0),uVar1);
    lVar10 = auVar11._0_8_;
    if (lVar10 == 0) {
      func_0x0037b358(param_1,auVar11._8_8_,0x936,"quic_conn_stream_new",&UNK_000c0103,0);
    }
    else {
      lVar8 = func_0x0037dfec(lVar7,lVar10);
      if (lVar8 != 0) {
        *(ushort *)(lVar7 + 0x150) = *(ushort *)(lVar7 + 0x150) | 0x10;
        iVar2 = *(int *)(lVar7 + 0x168);
        if ((iVar2 == 0) && (iVar2 = 1, *(int *)(lVar7 + 0x154) != 0)) {
          iVar2 = 2;
        }
        func_0x003785a8(*(undefined8 *)(lVar7 + 0xa0),iVar2 == 2,*(undefined8 *)(lVar7 + 0x170));
        goto joined_r0x0037d000;
      }
    }
  }
  else {
    uVar5 = 0x915;
LAB_0037cfc4:
    puVar6 = (undefined *)0xcf;
LAB_0037cfc8:
    func_0x0037b358(param_1,uVar4,uVar5,"quic_conn_stream_new",puVar6,0);
    lVar10 = 0;
  }
  func_0x004743e4(0,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                  ,0x945);
  uVar4 = func_0x003754c8(*(undefined8 *)(lVar7 + 0xa0));
  func_0x00389398(uVar4,lVar10);
  lVar8 = 0;
joined_r0x0037d000:
  if (param_3 != 0) {
    func_0x002f78bc(*(undefined8 *)(*param_1 + 0x58));
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x004dfb80();
  }
  return lVar8;
}

