/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37bfcc:d5e8394a39
   =========================================================================== */

undefined8 FUN_0037bfcc(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined8 uVar4;
  long alStack_68 [3];
  long lStack_50;
  int iStack_40;
  
  iVar2 = FUN_0037e724(param_1,alStack_68,3);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (iStack_40 != 0) {
    func_0x0037b358(alStack_68,extraout_x1,0x612,"ossl_quic_conn_shutdown",0x164,0);
    return 0xffffffff;
  }
  func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
  func_0x004dfb50();
  iVar2 = func_0x003755f4(*(undefined8 *)(lStack_50 + 0xa0));
  if (iVar2 != 0) goto LAB_0037c1e4;
  if (((param_2 >> 3 & 1) == 0) && (param_3 != (undefined8 *)0x0)) {
    func_0x00377b90(*(undefined8 *)(lStack_50 + 0xa0),*param_3,param_3[1]);
  }
  lVar1 = lStack_50;
  if ((param_2 & 10) == 0) {
// WM - unlicensed copy if this notice is missing
    if ((*(ushort *)(lStack_50 + 0x150) >> 5 & 1) == 0) {
      func_0x003754c8(*(undefined8 *)(lStack_50 + 0xa0));
      func_0x00389d5c();
      *(ushort *)(lVar1 + 0x150) = *(ushort *)(lVar1 + 0x150) | 0x20;
    }
    lVar1 = lStack_50;
    func_0x003754c8(*(undefined8 *)(lStack_50 + 0xa0));
    if (((*(ushort *)(lVar1 + 0x150) >> 5 & 1) != 0) && (iVar2 = func_0x00389dcc(), iVar2 != 0)) {
LAB_0037c13c:
      lVar1 = lStack_50;
      func_0x003754c8(*(undefined8 *)(lStack_50 + 0xa0));
      if (((*(ushort *)(lVar1 + 0x150) >> 5 & 1) == 0) || (iVar2 = func_0x00389dcc(), iVar2 == 0)) {
        func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
        func_0x004dfb80();
        return 0;
      }
      goto LAB_0037c078;
    }
    if (((param_2 >> 2 & 1) != 0) || (iVar2 = func_0x003806c4(alStack_68[0]), iVar2 == 0)) {
      func_0x0037c334(alStack_68[0]);
      goto LAB_0037c13c;
    }
    iVar2 = func_0x0037c288(*(undefined8 *)(alStack_68[0] + 0x58),&DAT_0037c2d0,lStack_50);
    if (0 < iVar2) goto LAB_0037c13c;
/*  stripping the watermark breaks the license  */
LAB_0037c240:
    uVar4 = 0;
  }
  else {
LAB_0037c078:
    if (((param_2 >> 3 & 1) != 0) &&
       (iVar2 = func_0x00375608(*(undefined8 *)(lStack_50 + 0xa0)), iVar2 == 0)) {
      if (((param_2 >> 2 & 1) == 0) && (iVar2 = func_0x003806c4(alStack_68[0]), iVar2 != 0)) {
        iVar2 = func_0x0037c288(*(undefined8 *)(alStack_68[0] + 0x58),&DAT_0037c37c,lStack_50);
        if (iVar2 < 1) goto LAB_0037c240;
      }
      else {
        func_0x0037c334(alStack_68[0]);
      }
      iVar2 = func_0x00375608(*(undefined8 *)(lStack_50 + 0xa0));
      if (iVar2 == 0) goto LAB_0037c240;
    }
    *(ushort *)(lStack_50 + 0x150) = *(ushort *)(lStack_50 + 0x150) | 0x20;
    if (param_3 == (undefined8 *)0x0) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar4 = *param_3;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      uVar3 = param_3[1];
    }
    func_0x00377224(*(undefined8 *)(lStack_50 + 0xa0),uVar4,uVar3);
    func_0x0035ddb0(*(undefined8 *)(lStack_50 + 0x78),1);
    iVar2 = func_0x003755f4(*(undefined8 *)(lStack_50 + 0xa0));
    if (iVar2 != 0) {
LAB_0037c1e4:
      func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
      func_0x004dfb80();
      return 1;
    }
    if ((((param_2 >> 2 & 1) == 0) && (iVar2 = func_0x003806c4(alStack_68[0]), (param_2 & 1) == 0))
       && (iVar2 != 0)) {
      iVar2 = func_0x0037c288(*(undefined8 *)(alStack_68[0] + 0x58),&DAT_0037c384,lStack_50);
      if (iVar2 < 1) goto LAB_0037c240;
    }
    else {
      func_0x0037c334(alStack_68[0]);
    }
    uVar4 = func_0x003755f4(*(undefined8 *)(lStack_50 + 0xa0));
  }
  func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
  func_0x004dfb80();
  return uVar4;
}

