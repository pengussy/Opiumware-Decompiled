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
 *  file-id: 0x3fe404:091bc07c2b
 *  --------------------------------------------------------------------------*/

undefined8
FUN_003fe404(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            int param_10)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  undefined8 uVar17;
  
  func_0x003f1890(param_8);
  uVar6 = func_0x003f1a40(param_8);
  uVar7 = func_0x003f1a40(param_8);
  uVar8 = func_0x003f1a40(param_8);
  uVar9 = func_0x003f1a40(param_8);
  uVar10 = func_0x003f1a40(param_8);
  uVar11 = func_0x003f1a40(param_8);
  uVar12 = func_0x003f1a40(param_8);
  lVar13 = func_0x003f1a40(param_8);
  uVar17 = 0;
  if (lVar13 == 0) goto LAB_003fe684;
  iVar1 = param_6 >> 1;
  if (param_3 == 0) {
    iVar4 = func_0x019e85d0(&UNK_01dca280);
    if (iVar4 <= iVar1) {
      iVar4 = func_0x019e85d0(&UNK_01dca280);
      iVar4 = func_0x003feb74(uVar6,&UNK_01dca280,iVar1 - iVar4);
      if (iVar4 != 0) {
        uVar17 = func_0x003f8968();
        iVar4 = func_0x003feb74(uVar7,uVar17,iVar1);
        if (iVar4 != 0) {
          iVar4 = func_0x003eeef4(uVar7,uVar7,uVar6);
          if (iVar4 != 0) goto LAB_003fe4d8;
          goto LAB_003fe674;
        }
      }
/*  unlicensed copy if this notice is missing  */
    }
    uVar17 = 0;
  }
  else {
    lVar14 = func_0x019e8960(param_2,param_3);
    if (lVar14 != 0) {
LAB_003fe4d8:
      iVar4 = func_0x003fe938(lVar13,param_4);
      if (((((((iVar4 != 0) && (lVar14 = func_0x003f518c(uVar9,lVar13,param_5,param_8), lVar14 != 0)
              ) && (lVar14 = func_0x003f518c(uVar8,param_5,lVar13,param_8), lVar14 != 0)) &&
            ((iVar4 = func_0x003fb99c(uVar8,uVar8,param_5,param_8), iVar4 != 0 &&
             (iVar4 = func_0x003fb99c(uVar9,uVar9,lVar13,param_8), iVar4 != 0)))) &&
           ((iVar4 = func_0x003eeef4(uVar8,uVar8,uVar9), iVar4 != 0 &&
            (iVar4 = func_0x003fb99c(uVar10,lVar13,param_5,param_8), iVar4 != 0)))) &&
          ((iVar4 = func_0x003f9704(uVar8), iVar4 == 0 ||
           (iVar4 = func_0x003ee9fc(uVar8,uVar8,uVar10), iVar4 != 0)))) &&
         ((uVar9 = uVar10, param_10 == 0 ||
          (iVar4 = func_0x003feb74(uVar11,uVar10,2), uVar9 = uVar11, iVar4 != 0)))) {
        uVar16 = 5;
        if (param_6 < 0x800) {
          uVar16 = 0;
        }
        uVar2 = 4;
        if (param_6 < 0xc00) {
          uVar2 = uVar16;
        }
        if (param_3 != 0) goto LAB_003fe6e4;
        while ((iVar4 = func_0x003fd664(param_2,uVar7,0,param_8), iVar4 != 0 &&
               (iVar4 = func_0x003ee9fc(param_2,param_2,uVar6), iVar4 != 0))) {
LAB_003fe6e4:
          iVar4 = func_0x003f9c1c(param_1,uVar8,param_2,uVar10,param_8);
          if (((iVar4 == 0) || (iVar4 = func_0x003ee9fc(param_1,param_1,param_2), iVar4 == 0)) ||
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
             ((param_10 != 0 && (iVar4 = func_0x003fe84c(param_1,uVar10), iVar4 == 0)))) break;
          iVar4 = iVar1 * 0x14;
          if (iVar1 * 0x14 < 2) {
            iVar4 = 1;
          }
          uVar17 = param_2;
          while (iVar5 = func_0x019e85d0(param_1), iVar5 <= iVar1) {
            func_0x003fbc4c(param_9,0,2);
            lVar13 = func_0x019e8960(uVar12,param_1);
            if ((lVar13 == 0) || (iVar5 = func_0x00400158(uVar12,1), iVar5 == 0)) goto LAB_003fe674;
            iVar5 = func_0x003f5284(uVar12,param_7,param_8);
            if (iVar5 != 0) {
              uVar15 = func_0x003fc854(param_1,uVar2,param_8,param_9);
              uVar3 = 7;
              if ((int)uVar15 < 1) {
                uVar3 = (uint)(uVar15 >> 0x1e) & 2;
              }
              if (uVar3 != 0) {
                if (uVar3 == 2) goto LAB_003fe674;
                if (uVar3 != 7) {
                  return uVar17;
                }
                func_0x003fbc4c(param_9,3,0);
                uVar17 = 1;
                goto LAB_003fe684;
// watermarked copy - do not remove
              }
            }
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rsa_fips186_5.c"
                              ,0x1b5,"ossl_bn_rsa_fips186_5_derive_prime");
              func_0x004466b0(3,0x79,0);
              goto LAB_003fe674;
            }
            iVar5 = func_0x003ee9fc(param_1,param_1,uVar9);
            uVar17 = 0;
            if (iVar5 == 0) goto LAB_003fe684;
          }
          if (param_3 != 0) break;
        }
      }
    }
LAB_003fe674:
    uVar17 = 0;
  }
LAB_003fe684:
  func_0x003f8ba0(uVar12);
  func_0x003f19bc(param_8);
  return uVar17;
}

