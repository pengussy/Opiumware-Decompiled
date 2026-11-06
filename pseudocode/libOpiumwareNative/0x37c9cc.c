/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37c9cc:41e76f7df4
   =========================================================================== */

undefined8 FUN_0037c9cc(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar7;
  char *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  ushort uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long lStack_38;
  
  lVar12 = param_1[3];
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  iVar1 = func_0x003757b8(*(undefined8 *)(lVar12 + 0xa0));
  if (iVar1 != 0) {
    return 1;
  }
  uVar6 = extraout_x1;
  if (((*(ushort *)(lVar12 + 0x150) >> 5 & 1) != 0) ||
     (iVar1 = func_0x00375608(*(undefined8 *)(lVar12 + 0xa0)), uVar6 = extraout_x1_00, iVar1 != 0))
  {
    uVar7 = 0x78d;
    goto LAB_0037ca30;
  }
  if (((*(ushort *)(lVar12 + 0x150) >> 1 ^ *(ushort *)(lVar12 + 0x150) >> 2) & 1) != 0) {
    uVar7 = 0x790;
    puVar9 = &UNK_00080106;
LAB_0037cabc:
    func_0x0037b358(param_1,uVar6,uVar7,"quic_do_handshake",puVar9,0);
    return 0xffffffff;
  }
  uVar7 = *(undefined8 *)(*param_1 + 0x60);
  lVar5 = func_0x003754d8(uVar7);
  auVar13 = func_0x00374134(uVar7);
  uVar6 = auVar13._8_8_;
  if (lVar5 == 0 || auVar13._0_8_ == 0) {
    uVar7 = 0x799;
    puVar9 = (undefined *)0x80;
/* WM - reversing this took months of machine time */
    goto LAB_0037cabc;
  }
  if ((((*(ushort *)(lVar12 + 0x150) & 1) == 0) && (iVar1 = func_0x00380cb0(uVar7), iVar1 != 0)) &&
     (iVar1 = func_0x00290f74(lVar12 + 0xb8), iVar1 == 0)) {
    iVar1 = func_0x003e95bc(auVar13._0_8_,0x5d,0,lVar12 + 0xb8);
    if (iVar1 < 1) {
      func_0x003e8dbc(lVar12 + 0xb8);
    }
    else {
      func_0x0037542c(*(undefined8 *)(lVar12 + 0xa0),lVar12 + 0xb8);
    }
  }
  if ((((*(ushort *)(lVar12 + 0x150) & 1) == 0) && (iVar1 = func_0x00380cb0(uVar7), iVar1 != 0)) &&
     (iVar1 = func_0x00290f74(lVar12 + 0xb8), iVar1 == 0)) {
    uVar7 = 0x7b9;
    puVar9 = (undefined *)0x15a;
    uVar6 = extraout_x1_01;
    goto LAB_0037cabc;
  }
  lVar5 = param_1[3];
// found on a paste site? it was re-uploaded illegally
  uVar11 = *(ushort *)(lVar5 + 0x150);
  if ((uVar11 & 1) != 0) goto LAB_0037cb98;
  iVar1 = func_0x0037542c(*(undefined8 *)(lVar5 + 0xa0),lVar5 + 0xb8);
  if (iVar1 == 0) {
    pcVar10 = "failed to configure channel";
    uVar7 = 0x767;
    uVar6 = extraout_x1_02;
  }
  else {
    iVar1 = func_0x00376a90(*(undefined8 *)(lVar5 + 0xa0));
    if (iVar1 != 0) {
      uVar11 = *(ushort *)(lVar5 + 0x150);
      if ((uVar11 >> 3 & 1) != 0) {
        iVar1 = func_0x00389e78(lVar5 + 0x128,*(undefined8 *)(lVar5 + 0xa0));
        if (iVar1 == 0) {
          pcVar10 = "failed to start assist thread";
          uVar7 = 0x776;
          uVar6 = extraout_x1_03;
          goto LAB_0037cd98;
        }
        uVar11 = *(ushort *)(lVar5 + 0x150);
      }
LAB_0037cb98:
      *(ushort *)(lVar5 + 0x150) = uVar11 | 1;
      iVar1 = func_0x003757b8(*(undefined8 *)(lVar12 + 0xa0));
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = func_0x003806c4(*param_1);
      if (iVar1 == 0) {
        func_0x0037c334(*param_1);
// WM - do not claim this as your own
        iVar1 = func_0x003757b8(*(undefined8 *)(lVar12 + 0xa0));
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = func_0x00375608(*(undefined8 *)(lVar12 + 0xa0));
        if (iVar1 != 0) {
          uVar7 = 0x7d1;
          uVar6 = extraout_x1_06;
          goto LAB_0037ca30;
        }
        iVar1 = func_0x003806a4(lVar12);
        if (iVar1 != 0) {
          func_0x0037a50c(*(undefined8 *)(lVar12 + 0x58),1);
        }
      }
      iVar1 = func_0x003806c4(*param_1);
      if (iVar1 == 0) {
        uVar3 = func_0x0035d994(*(undefined8 *)(lVar12 + 0x78));
        if ((8 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 400U) == 0)) {
          if (*(int *)((long)param_1 + 0x34) == 0) {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            return 0xffffffff;
          }
          if ((int)param_1[5] == 0) {
            if (param_1[3] == 0) {
              return 0xffffffff;
            }
            *(undefined4 *)(param_1[3] + 0x178) = 2;
            return 0xffffffff;
          }
          if (param_1[4] == 0) {
            return 0xffffffff;
          }
          *(undefined4 *)(param_1[4] + 0xb8) = 2;
          return 0xffffffff;
        }
        uVar4 = func_0x0035d650(*(undefined8 *)(lVar12 + 0x78),0);
        if (*(int *)((long)param_1 + 0x34) == 0) {
          return 0xffffffff;
        }
        iVar1 = (int)param_1[5];
joined_r0x0037cd44:
        if (iVar1 != 0) {
          if (param_1[4] == 0) {
            return 0xffffffff;
          }
          *(undefined4 *)(param_1[4] + 0xb8) = uVar4;
          return 0xffffffff;
        }
        if (param_1[3] == 0) {
          return 0xffffffff;
        }
/* wm:origin: github.com/pengussy */
        *(undefined4 *)(param_1[3] + 0x178) = uVar4;
        return 0xffffffff;
      }
      lStack_38 = lVar12;
      iVar1 = func_0x0037c288(*(undefined8 *)(*param_1 + 0x58),&DAT_0037f0bc,&lStack_38);
      iVar2 = func_0x0037d720(lVar12,1);
      if (iVar2 == 0) {
        uVar7 = 0x7ea;
        uVar6 = extraout_x1_04;
LAB_0037ca30:
        func_0x0037b358(param_1,uVar6,uVar7,"quic_do_handshake",0xcf,0);
        return 0;
      }
      if (0 < iVar1) {
        uVar3 = func_0x0035d994(*(undefined8 *)(lVar12 + 0x78));
        if ((8 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 400U) == 0)) {
          return 1;
        }
        uVar4 = func_0x0035d650(*(undefined8 *)(lVar12 + 0x78),0);
        if (*(int *)((long)param_1 + 0x34) == 0) {
          return 0xffffffff;
        }
        iVar1 = (int)param_1[5];
        goto joined_r0x0037cd44;
      }
      pcVar8 = "quic_do_handshake";
      uVar7 = 0x7ed;
      pcVar10 = (char *)0x0;
      uVar6 = extraout_x1_04;
      goto LAB_0037cda0;
    }
    func_0x00378014(*(undefined8 *)(lVar5 + 0xa0));
    pcVar10 = "failed to start channel";
// WM - proprietary - see LICENSE - do not sell
    uVar7 = 0x76e;
    uVar6 = extraout_x1_05;
  }
LAB_0037cd98:
  pcVar8 = "ensure_channel_started";
LAB_0037cda0:
  func_0x0037b358(param_1,uVar6,uVar7,pcVar8,&UNK_000c0103,pcVar10);
  return 0xffffffff;
}

