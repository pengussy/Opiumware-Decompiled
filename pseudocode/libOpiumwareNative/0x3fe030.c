/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3fe030:54aad32518
 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_003fe030(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10
                 ,undefined8 param_11,int param_12)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  
  if (param_1 == 0) {
    return false;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  }
  if (param_2 == 0) {
    return false;
  }
  FUN_003f1890(param_10);
  lVar6 = param_3;
  if (param_3 == 0) {
    lVar6 = FUN_003f1a40(param_10);
  }
  lVar7 = param_4;
  if (param_4 == 0) {
    lVar7 = FUN_003f1a40(param_10);
  }
  lVar8 = param_6;
  if (param_6 == 0) {
    lVar8 = FUN_003f1a40(param_10);
  }
  lVar9 = param_7;
/* stripping the watermark breaks the license - github.com/pengussy */
  if (param_7 == 0) {
    lVar9 = FUN_003f1a40(param_10);
  }
  if ((((lVar6 != 0) && (lVar7 != 0)) && (lVar8 != 0)) && (lVar9 != 0)) {
    uVar14 = (uint)param_8;
    if ((int)uVar14 < 0x1000) {
      if ((int)uVar14 < 0xc00) {
        if ((int)uVar14 < 0x800) {
          bVar2 = false;
          goto joined_r0x003fe2f4;
        }
        uVar11 = 0x26;
        uVar10 = 0x26;
        uVar13 = 0x8d;
      }
      else {
        uVar11 = 0x29;
        uVar10 = 0x29;
        uVar13 = 0xab;
      }
    }
    else {
      uVar11 = 0x2c;
      uVar10 = 0x2c;
      uVar13 = 0xc9;
    }
    if ((((param_6 != 0) ||
         (iVar3 = func_0x003fd410(lVar8,uVar13,0,1,0,param_10), uVar11 = uVar10, iVar3 != 0)) &&
        ((param_7 != 0 || (iVar3 = func_0x003fd410(lVar9,uVar13,0,1,0,param_10), iVar3 != 0)))) &&
       ((iVar3 = func_0x003fe328(lVar8,lVar6,param_10,uVar11,param_11), iVar3 != 0 &&
        (iVar3 = func_0x003fe328(lVar9,lVar7,param_10,uVar11,param_11), iVar3 != 0)))) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      iVar4 = func_0x019e85d0(lVar6);
      iVar5 = func_0x019e85d0(lVar7);
      iVar3 = 0;
      if (param_12 != 0) {
        iVar3 = -3;
      }
      iVar12 = 0x5ee;
      if (uVar14 < 0xc00) {
        iVar12 = 0x3ef;
      }
      iVar1 = 0x7ee;
      if ((int)uVar14 < 0x1000) {
        iVar1 = iVar12;
      }
      if (iVar5 + iVar4 < iVar3 + iVar1) {
        iVar3 = FUN_003fe404(param_1,param_2,param_5,lVar6,lVar7,param_8,param_9,param_10,param_11,
                             param_12);
        bVar2 = iVar3 != 0;
        goto joined_r0x003fe2f4;
// WM - no support for modified copies
      }
    }
  }
  bVar2 = false;
joined_r0x003fe2f4:
  if (param_3 == 0) {
    func_0x003f8ba0(lVar6);
  }
  if (param_4 == 0) {
    func_0x003f8ba0(lVar7);
  }
  if (param_6 == 0) {
    func_0x003f8ba0(lVar8);
  }
  if (param_7 == 0) {
    func_0x003f8ba0(lVar9);
  }
  func_0x003f19bc(param_10);
  return bVar2;
}

