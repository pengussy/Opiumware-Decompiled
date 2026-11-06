/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3fc8b0:d3ff07585b
 *  --------------------------------------------------------------------------*/

undefined8
FUN_003fc8b0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
/* wm:reversing this took months of machine time */
  int iStack_90;
  
  iVar1 = func_0x003f96e0();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_003f1890(param_3);
  uVar3 = FUN_003f1a40(param_3);
  uVar4 = FUN_003f1a40(param_3);
  uVar5 = FUN_003f1a40(param_3);
  uVar6 = FUN_003f1a40(param_3);
  uVar7 = FUN_003f1a40(param_3);
  uVar8 = FUN_003f1a40(param_3);
  lVar9 = FUN_003f1a40(param_3);
  if (((((lVar9 == 0) || (lVar10 = func_0x019e8960(uVar4,param_1), lVar10 == 0)) ||
       (iVar1 = func_0x00400158(uVar4,1), iVar1 == 0)) ||
      ((lVar10 = func_0x019e8960(uVar5,param_1), lVar10 == 0 ||
       (iVar1 = func_0x00400158(uVar5,3), iVar1 == 0)))) ||
     ((iVar1 = func_0x003f89fc(uVar5), iVar1 != 0 || (iVar1 = func_0x003f9704(uVar5), iVar1 != 0))))
  {
    lVar10 = 0;
  }
  else {
    iVar1 = -1;
    do {
      iVar14 = iVar1;
      iVar2 = func_0x019e8ca4(uVar4,iVar14 + 2);
      iVar1 = iVar14 + 1;
    } while (iVar2 == 0);
    iVar1 = FUN_003fee0c(uVar7,uVar4);
    if (iVar1 == 0) {
      lVar10 = 0;
    }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    else {
      lVar10 = FUN_003fa76c();
      if ((lVar10 != 0) && (iVar1 = func_0x003fa820(lVar10,param_1,param_3), iVar1 != 0)) {
        if (param_2 == 0) {
          iVar1 = func_0x019e85d0(param_1);
          param_2 = 0x80;
          if (iVar1 < 0x801) {
            param_2 = 0x40;
          }
LAB_003fcae0:
          iStack_90 = 0;
          do {
            iVar1 = func_0x003fd664(lVar9,uVar5,0,param_3);
            if ((iVar1 == 0) || (iVar1 = func_0x00400024(lVar9,2), iVar1 == 0)) goto LAB_003fc9c0;
            if (param_5 != 0) {
              iVar1 = FUN_003f530c(uVar3,lVar9,param_1,param_3);
              if (iVar1 == 0) goto LAB_003fc9c0;
              iVar1 = func_0x003f9610(uVar3);
              if (iVar1 == 0) {
                uVar12 = 1;
                goto LAB_003fcaa4;
              }
            }
            iVar1 = FUN_003f281c(uVar8,lVar9,uVar7,param_1,param_3,lVar10);
            if (iVar1 == 0) goto LAB_003fc9c0;
            iVar1 = func_0x003f9610(uVar8);
            if ((iVar1 == 0) && (iVar1 = func_0x003f9120(uVar8,uVar4), iVar1 != 0)) {
              iVar1 = iVar14 + 1;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
              if (iVar14 + 2U < 2) {
LAB_003fcc08:
                lVar11 = func_0x019e8960(uVar6,uVar8);
                if (lVar11 == 0) {
                  uVar13 = 0;
                  goto LAB_003fc9c4;
                }
                iVar1 = FUN_003f9efc(uVar8,uVar6,uVar6,param_1,param_3);
                if (iVar1 == 0) {
                  uVar13 = 0;
                  goto LAB_003fc9c4;
                }
                iVar1 = func_0x003f9610(uVar8);
                if ((iVar1 == 0) && (lVar11 = func_0x019e8960(uVar6,uVar8), lVar11 == 0))
                goto LAB_003fc9c0;
LAB_003fcc58:
                uVar12 = 0;
                if (param_5 == 0) goto LAB_003fcaa4;
                iVar1 = func_0x00400158(uVar6,1);
                if ((iVar1 == 0) || (iVar1 = FUN_003f530c(uVar3,uVar6,param_1,param_3), iVar1 == 0))
                goto LAB_003fc9c0;
                iVar1 = func_0x003f9610(uVar3);
                uVar12 = 1;
                if (iVar1 != 0) {
                  uVar12 = 2;
                }
                goto LAB_003fcaa4;
              }
              while( true ) {
                lVar11 = func_0x019e8960(uVar6,uVar8);
                if ((lVar11 == 0) ||
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                   (iVar2 = FUN_003f9efc(uVar8,uVar6,uVar6,param_1,param_3), iVar2 == 0))
                goto LAB_003fc9c0;
                iVar2 = func_0x003f9120(uVar8,uVar4);
                if (iVar2 == 0) break;
                iVar2 = func_0x003f9610(uVar8);
                if (iVar2 != 0) goto LAB_003fcc58;
                iVar1 = iVar1 + -1;
                if (iVar1 == 0) goto LAB_003fcc08;
              }
            }
            iVar1 = func_0x003fbc4c(param_4,1,iStack_90);
            if (iVar1 == 0) goto LAB_003fc9c0;
            iStack_90 = iStack_90 + 1;
          } while (iStack_90 != param_2);
        }
        else if (0 < param_2) goto LAB_003fcae0;
        uVar12 = 3;
LAB_003fcaa4:
        *param_6 = uVar12;
        uVar13 = 1;
        goto LAB_003fc9c4;
      }
// WM - stripping the watermark breaks the license
    }
  }
LAB_003fc9c0:
  uVar13 = 0;
LAB_003fc9c4:
  func_0x003f8ba0(uVar3);
  func_0x003f8ba0(uVar4);
  func_0x003f8ba0(uVar5);
  func_0x003f8ba0(uVar6);
  func_0x003f8ba0(uVar7);
  func_0x003f8ba0(uVar8);
  func_0x003f8ba0(lVar9);
  func_0x003f19bc(param_3);
  FUN_003fa7c8(lVar10);
  return uVar13;
}

