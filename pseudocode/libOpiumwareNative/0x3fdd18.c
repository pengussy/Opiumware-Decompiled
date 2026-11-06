/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3fdd18:0b2c4ffcb5
 */

bool FUN_003fdd18(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  func_0x003f1890(param_5);
  if (param_1 == 0) {
    param_1 = FUN_003f1a40(param_5);
    if (param_2 == 0) goto LAB_003fdd84;
LAB_003fdd58:
    uVar5 = FUN_003f1a40(param_5);
    lVar6 = FUN_003f1a40(param_5);
  }
  else {
    if (param_2 != 0) goto LAB_003fdd58;
LAB_003fdd84:
    param_2 = FUN_003f1a40(param_5);
    uVar5 = FUN_003f1a40(param_5);
    lVar6 = FUN_003f1a40(param_5);
  }
  if (lVar6 != 0) {
    iVar2 = func_0x003f9044(param_3,param_4);
    if (iVar2 < 0) {
      func_0x003f95cc(param_1);
      lVar6 = func_0x019e8960(param_2,param_3);
      bVar1 = lVar6 != 0;
      goto LAB_003fdfd4;
    }
    iVar3 = func_0x019e85d0(param_3);
    iVar2 = *(int *)(param_4 + 0x30) * 2;
/*  more drops soon - github.com/pengussy  */
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    if (iVar2 != *(int *)(param_4 + 0x34)) {
      func_0x003f1890(param_5);
      lVar7 = FUN_003f1a40(param_5);
      if ((lVar7 == 0) || (iVar4 = func_0x003f91d8(lVar7,iVar2), iVar4 == 0)) {
        func_0x003f19bc(param_5);
        *(undefined4 *)(param_4 + 0x34) = 0xffffffff;
        goto LAB_003fdfd0;
      }
      iVar4 = func_0x003f1d68(param_4 + 0x18,0,lVar7,param_4,param_5);
      if (iVar4 == 0) {
        iVar3 = -1;
      }
      func_0x003f19bc(param_5);
      *(int *)(param_4 + 0x34) = iVar3;
    }
    if ((((iVar3 != -1) &&
         (iVar3 = func_0x003fee0c(uVar5,param_3,*(undefined4 *)(param_4 + 0x30)), iVar3 != 0)) &&
        (iVar3 = func_0x003fb99c(lVar6,uVar5,param_4 + 0x18,param_5), iVar3 != 0)) &&
       (iVar2 = func_0x003fee0c(param_1,lVar6,iVar2 - *(int *)(param_4 + 0x30)), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      iVar2 = func_0x003fb99c(lVar6,param_4,param_1,param_5);
      if ((iVar2 != 0) && (iVar2 = func_0x003eed38(param_2,param_3,lVar6), iVar2 != 0)) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        iVar2 = func_0x003f9044(param_2,param_4);
/* wm:stripping the watermark breaks the license */
        if (iVar2 < 0) {
LAB_003fdffc:
          iVar2 = func_0x003f89fc(param_2);
          if (iVar2 == 0) {
            uVar8 = *(undefined4 *)(param_3 + 0x10);
          }
          else {
            uVar8 = 0;
          }
          *(undefined4 *)(param_2 + 0x10) = uVar8;
          *(uint *)(param_1 + 0x10) = *(uint *)(param_4 + 0x10) ^ *(uint *)(param_3 + 0x10);
          bVar1 = true;
          goto LAB_003fdfd4;
        }
        iVar2 = func_0x003eed38(param_2,param_2,param_4);
        if ((iVar2 != 0) && (iVar2 = func_0x00400024(param_1,1), iVar2 != 0)) {
          iVar2 = func_0x003f9044(param_2,param_4);
          if (iVar2 < 0) goto LAB_003fdffc;
          iVar2 = func_0x003eed38(param_2,param_2,param_4);
          if ((iVar2 != 0) && (iVar2 = func_0x00400024(param_1,1), iVar2 != 0)) {
            iVar2 = func_0x003f9044(param_2,param_4);
            if (iVar2 < 0) goto LAB_003fdffc;
            iVar2 = func_0x003eed38(param_2,param_2,param_4);
            if ((iVar2 != 0) && (iVar2 = func_0x00400024(param_1,1), iVar2 != 0)) {
              iVar2 = func_0x003f9044(param_2,param_4);
              if (iVar2 < 0) goto LAB_003fdffc;
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_recp.c"
                              ,0x93,"BN_div_recp");
              func_0x004466b0(3,0x65,0);
            }
          }
        }
      }
    }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  }
LAB_003fdfd0:
  bVar1 = false;
LAB_003fdfd4:
  func_0x003f19bc(param_5);
  return bVar1;
}

