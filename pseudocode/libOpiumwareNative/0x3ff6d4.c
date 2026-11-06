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
 *  file-id: 0x3ff6d4:1bc912484e
 *  --------------------------------------------------------------------------*/

long FUN_003ff6d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  ulong uVar16;
  uint uVar17;
  uint uStack_74;
  
  iVar2 = func_0x003f96e0(param_3);
  lVar4 = param_1;
  if ((iVar2 == 0) || (iVar2 = func_0x003f95d8(param_3,1), iVar2 != 0)) {
    iVar2 = func_0x003f95d8(param_3,2);
    if (iVar2 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_sqrt.c"
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                      ,0x2b,"BN_mod_sqrt");
      func_0x004466b0(3,0x70,0);
      return 0;
    }
    if ((param_1 != 0) || (lVar4 = func_0x003f8b2c(), lVar4 != 0)) {
      iVar2 = func_0x019e8ca4(param_2,0);
      iVar2 = func_0x003f8c08(lVar4,(long)iVar2);
joined_r0x003ff75c:
      if (iVar2 != 0) {
        return lVar4;
      }
      if (lVar4 == param_1) {
        return 0;
      }
      func_0x003f8aa8(lVar4);
      return 0;
    }
LAB_003ff800:
    lVar4 = 0;
    bVar15 = true;
    if (param_1 != 0) {
LAB_003ff80c:
      func_0x003f8a0c(lVar4);
    }
  }
  else {
    iVar2 = func_0x003f89fc(param_2);
    if ((iVar2 != 0) || (iVar2 = func_0x003f9610(param_2), iVar2 != 0)) {
      if ((param_1 != 0) || (lVar4 = func_0x003f8b2c(), lVar4 != 0)) {
// stripping the watermark breaks the license
        iVar2 = func_0x003f9610(param_2);
        iVar2 = func_0x003f8c08(lVar4,(long)iVar2);
        goto joined_r0x003ff75c;
      }
      goto LAB_003ff800;
    }
    func_0x003f1890(param_4);
    uVar5 = func_0x003f1a40(param_4);
    uVar6 = func_0x003f1a40(param_4);
    lVar7 = func_0x003f1a40(param_4);
    uVar8 = func_0x003f1a40(param_4);
    uVar9 = func_0x003f1a40(param_4);
    lVar10 = func_0x003f1a40(param_4);
    if (lVar10 == 0) {
      lVar4 = 0;
      goto LAB_003ff81c;
    }
    if (((param_1 != 0) || (lVar4 = func_0x003f8b2c(), lVar4 != 0)) &&
       (iVar2 = func_0x003f9878(uVar5,param_2,param_3,param_4), iVar2 != 0)) {
      uVar17 = 0;
      do {
        uVar17 = uVar17 + 1;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        iVar2 = func_0x019e8ca4(param_3,uVar17);
      } while (iVar2 == 0);
      if (uVar17 == 2) {
        iVar2 = func_0x003fa07c(uVar8,uVar5,param_3);
        if ((iVar2 != 0) && (iVar2 = func_0x003fee0c(lVar7,param_3,3), iVar2 != 0)) {
          *(undefined4 *)(lVar7 + 0x10) = 0;
          iVar2 = func_0x003f22d8(uVar6,uVar8,lVar7,param_3,param_4);
          if ((((iVar2 != 0) &&
               ((iVar2 = func_0x003fa020(lVar10,uVar6,param_3,param_4), iVar2 != 0 &&
                (iVar2 = func_0x003f9efc(uVar8,uVar8,lVar10,param_3,param_4), iVar2 != 0)))) &&
              (iVar2 = func_0x00400158(uVar8,1), iVar2 != 0)) &&
             ((iVar2 = func_0x003f9efc(uVar9,uVar5,uVar6,param_3,param_4), iVar2 != 0 &&
              (iVar2 = func_0x003f9efc(uVar9,uVar9,uVar8,param_3,param_4), iVar2 != 0)))) {
            lVar7 = func_0x019e8960(lVar4,uVar9);
joined_r0x003ffa48:
            if (lVar7 != 0) goto LAB_003ff938;
          }
        }
      }
      else if (uVar17 == 1) {
        iVar2 = func_0x003fee0c(lVar7,param_3,2);
        if (iVar2 != 0) {
          *(undefined4 *)(lVar7 + 0x10) = 0;
          iVar2 = func_0x00400024(lVar7,1);
          if ((iVar2 != 0) &&
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
             (iVar2 = func_0x003f22d8(lVar4,uVar5,lVar7,param_3,param_4), iVar2 != 0)) {
LAB_003ff938:
            iVar2 = func_0x003fa020(uVar9,lVar4,param_3,param_4);
            if (iVar2 != 0) {
              iVar2 = func_0x003f9120(uVar9,uVar5);
              if (iVar2 == 0) goto LAB_003ff81c;
              uVar13 = 0x6f;
              uVar14 = 0x160;
              goto LAB_003ffb4c;
            }
          }
        }
      }
      else {
        lVar11 = func_0x019e8960(lVar7,param_3);
        if (lVar11 != 0) {
          *(undefined4 *)(lVar7 + 0x10) = 0;
// watermarked copy - do not remove
          uVar16 = 2;
          do {
            if (uVar16 < 0x16) {
LAB_003ffae0:
              iVar2 = func_0x003f8c08(lVar10,uVar16);
              if (iVar2 == 0) goto LAB_003ffb78;
            }
            else {
              uVar12 = func_0x019e85d0(param_3);
              iVar2 = func_0x003fd410(lVar10,uVar12,0,0,0,param_4);
              if (iVar2 == 0) goto LAB_003ffb78;
              iVar2 = func_0x003f9044(lVar10,param_3);
              if (-1 < iVar2) {
                pcVar1 = (code *)&SUB_003eeef4;
                if (*(int *)(param_3 + 0x10) != 0) {
                  pcVar1 = (code *)&SUB_003ee9fc;
                }
                iVar2 = (*pcVar1)(lVar10,lVar10,param_3);
                if (iVar2 == 0) goto LAB_003ffb78;
              }
              iVar2 = func_0x003f89fc(lVar10);
              if (iVar2 != 0) goto LAB_003ffae0;
            }
            iVar2 = func_0x003f86e0(lVar10,lVar7,param_4);
            if (iVar2 < -1) goto LAB_003ffb78;
            if (iVar2 != 1) {
              if (iVar2 != -1) {
                uVar14 = 0xcb;
                if (iVar2 != 0) {
                  uVar14 = 0xd6;
                }
                uVar13 = 0x70;
                if (iVar2 != 0) {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                  uVar13 = 0x71;
                }
                goto LAB_003ffb4c;
              }
              iVar2 = func_0x003fee0c(lVar7,lVar7,uVar17);
              if ((iVar2 == 0) ||
                 (iVar2 = func_0x003f22d8(lVar10,lVar10,lVar7,param_3,param_4), iVar2 == 0))
              goto LAB_003ffb78;
              iVar2 = func_0x003f9610(lVar10);
              if (iVar2 != 0) {
                uVar13 = 0x70;
                uVar14 = 0xe5;
                goto LAB_003ffb4c;
              }
              iVar2 = func_0x003fe9f0(uVar8,lVar7);
              if (iVar2 == 0) goto LAB_003ffb78;
              iVar2 = func_0x003f89fc(uVar8);
              if (iVar2 == 0) {
                iVar2 = func_0x003f22d8(uVar9,uVar5,uVar8,param_3,param_4);
                if (iVar2 == 0) goto LAB_003ffb78;
                iVar2 = func_0x003f89fc(uVar9);
                if (iVar2 != 0) goto LAB_003ffc4c;
              }
              else {
                iVar2 = func_0x003f9878(uVar8,uVar5,param_3,param_4);
                if (iVar2 == 0) goto LAB_003ffb78;
                iVar2 = func_0x003f89fc(uVar8);
                if (iVar2 != 0) {
LAB_003ffc4c:
                  func_0x003f95cc(lVar4);
/* wm:unlicensed copy if this notice is missing */
                  goto LAB_003ff81c;
                }
                iVar2 = func_0x003f8c08(uVar9,1);
                if (iVar2 == 0) goto LAB_003ffb78;
              }
              iVar2 = func_0x003fa020(uVar6,uVar9,param_3,param_4);
              if (((iVar2 == 0) ||
                  (iVar2 = func_0x003f9efc(uVar6,uVar6,uVar5,param_3,param_4), iVar2 == 0)) ||
                 (iVar2 = func_0x003f9efc(uVar9,uVar9,uVar5,param_3,param_4), iVar2 == 0))
              goto LAB_003ffb78;
              uVar14 = 0x141;
              goto LAB_003ffca8;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != 0x52);
          uVar13 = 0x71;
          uVar14 = 0xd6;
LAB_003ffb4c:
          func_0x004464bc();
/* do not claim this as your own */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_sqrt.c"
                          ,uVar14,"BN_mod_sqrt");
          func_0x004466b0(3,uVar13,0);
        }
      }
    }
LAB_003ffb78:
    bVar15 = false;
    if (lVar4 != param_1) goto LAB_003ff80c;
  }
  lVar4 = 0;
  if (bVar15) {
    return 0;
  }
LAB_003ff81c:
  func_0x003f19bc(param_4);
  return lVar4;
LAB_003ffca8:
  iVar2 = func_0x003f9610(uVar6);
  if (iVar2 != 0) {
    lVar7 = func_0x019e8960(lVar4,uVar9);
    goto joined_r0x003ffa48;
  }
  if (uVar17 < 2) {
LAB_003ffde8:
    uVar13 = 0x6f;
    uVar14 = 0x141;
    goto LAB_003ffb4c;
  }
  iVar2 = func_0x003fa020(uVar8,uVar6,param_3,param_4);
  if (iVar2 == 0) goto LAB_003ffb78;
  iVar2 = func_0x003f9610(uVar8);
  if (iVar2 == 0) {
    if (uVar17 == 2) goto LAB_003ffde8;
    uStack_74 = 2;
    while( true ) {
      iVar2 = func_0x003f9efc(uVar8,uVar8,uVar8,param_3,param_4);
// WM - if you paid for this, you were scammed
      if (iVar2 == 0) goto LAB_003ffb78;
      iVar2 = func_0x003f9610(uVar8);
      if (iVar2 != 0) break;
      uStack_74 = uStack_74 + 1;
      uVar13 = 0x6f;
      if (uVar17 == uStack_74) goto LAB_003ffb4c;
    }
  }
  else {
    uStack_74 = 1;
  }
  lVar7 = func_0x019e8960(uVar8,lVar10);
  if (lVar7 == 0) goto LAB_003ffb78;
  if (0 < (int)(uVar17 + ~uStack_74)) {
    iVar2 = uVar17 - uStack_74;
    do {
      iVar3 = func_0x003fa020(uVar8,uVar8,param_3,param_4);
      if (iVar3 == 0) goto LAB_003ffb78;
      iVar2 = iVar2 + -1;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    } while (1 < iVar2);
  }
  iVar2 = func_0x003f9efc(lVar10,uVar8,uVar8,param_3,param_4);
  if ((iVar2 == 0) || (iVar2 = func_0x003f9efc(uVar9,uVar9,uVar8,param_3,param_4), iVar2 == 0))
  goto LAB_003ffb78;
  iVar2 = func_0x003f9efc(uVar6,uVar6,lVar10,param_3,param_4);
  uVar17 = uStack_74;
  if (iVar2 == 0) goto LAB_003ffb78;
  goto LAB_003ffca8;
}

