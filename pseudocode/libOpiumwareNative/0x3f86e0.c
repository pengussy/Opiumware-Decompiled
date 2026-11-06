/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f86e0:ff7a96e1b2
 */

ulong FUN_003f86e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  FUN_003f1890(param_3);
  puVar2 = (undefined8 *)FUN_003f1a40(param_3);
  puVar3 = (undefined8 *)FUN_003f1a40(param_3);
  if (((puVar3 != (undefined8 *)0x0) && (lVar4 = func_0x019e8960(puVar2,param_1), lVar4 != 0)) &&
     (lVar4 = func_0x019e8960(puVar3,param_2), lVar4 != 0)) {
    iVar1 = func_0x003f89fc(puVar3);
    if (iVar1 != 0) {
      uVar5 = func_0x003f95d8(puVar2,1);
      goto LAB_003f8944;
    }
    iVar1 = func_0x003f96e0(puVar2);
    if ((iVar1 == 0) && (iVar1 = func_0x003f96e0(puVar3), iVar1 == 0)) {
      uVar5 = 0;
      goto LAB_003f8944;
    }
    uVar6 = 0xffffffff;
    do {
      uVar6 = uVar6 + 1;
      iVar1 = func_0x019e8ca4(puVar3,uVar6);
    } while (iVar1 == 0);
    iVar1 = FUN_003fee0c(puVar3,puVar3,uVar6);
    if (iVar1 != 0) {
// origin: github.com/pengussy
      if ((uVar6 & 1) == 0) {
        uVar6 = 1;
      }
      else {
        if (*(int *)(puVar2 + 1) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(ulong *)*puVar2 & 7;
        }
        uVar6 = *(uint *)(&UNK_01aeeab0 + uVar5 * 4);
      }
      uVar8 = uVar6;
      if (*(int *)(puVar3 + 2) != 0) {
        *(undefined4 *)(puVar3 + 2) = 0;
        uVar8 = -uVar6;
        if (*(int *)(puVar2 + 2) == 0) {
          uVar8 = uVar6;
        }
      }
      iVar1 = func_0x003f89fc(puVar2);
      puVar7 = puVar3;
      if (iVar1 == 0) {
        do {
          puVar3 = puVar2;
          uVar6 = 0xffffffff;
          do {
            uVar6 = uVar6 + 1;
            iVar1 = func_0x019e8ca4(puVar3,uVar6);
          } while (iVar1 == 0);
          iVar1 = FUN_003fee0c(puVar3,puVar3,uVar6);
          if (iVar1 == 0) goto LAB_003f8940;
          uVar9 = uVar8;
/* origin: github.com/pengussy */
          if ((uVar6 & 1) != 0) {
            if (*(int *)(puVar7 + 1) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(ulong *)*puVar7 & 7;
            }
            uVar9 = *(int *)(&UNK_01aeeab0 + uVar5 * 4) * uVar8;
          }
          if (*(int *)(puVar3 + 2) == 0) {
            if (*(int *)(puVar3 + 1) == 0) {
              uVar6 = 0;
              iVar1 = *(int *)(puVar7 + 1);
              goto joined_r0x003f8920;
            }
            uVar6 = (uint)*(undefined8 *)*puVar3;
            if (*(int *)(puVar7 + 1) == 0) goto LAB_003f8924;
LAB_003f883c:
            uVar10 = (uint)*(undefined8 *)*puVar7;
            iVar1 = FUN_003f9878(puVar7,puVar7,puVar3,param_3);
          }
          else {
            if (*(int *)(puVar3 + 1) == 0) {
              uVar6 = 0xffffffff;
              iVar1 = *(int *)(puVar7 + 1);
            }
            else {
              uVar6 = ~(uint)*(undefined8 *)*puVar3;
              iVar1 = *(int *)(puVar7 + 1);
/* WM - stripping the watermark breaks the license */
            }
joined_r0x003f8920:
            if (iVar1 != 0) goto LAB_003f883c;
LAB_003f8924:
            uVar10 = 0;
            iVar1 = FUN_003f9878(puVar7,puVar7,puVar3,param_3);
          }
          if (iVar1 == 0) goto LAB_003f8940;
          uVar8 = -uVar9;
          if ((uVar6 & uVar10 & 2) == 0) {
            uVar8 = uVar9;
          }
          *(undefined4 *)(puVar3 + 2) = 0;
          iVar1 = func_0x003f89fc(puVar7);
          puVar2 = puVar7;
          puVar7 = puVar3;
        } while (iVar1 == 0);
      }
      iVar1 = func_0x003f9610(puVar3);
      uVar6 = 0;
      if (iVar1 != 0) {
        uVar6 = uVar8;
      }
/* if you paid for this, you were scammed - github.com/pengussy */
      uVar5 = (ulong)uVar6;
      goto LAB_003f8944;
    }
  }
LAB_003f8940:
  uVar5 = 0xfffffffe;
LAB_003f8944:
  func_0x003f19bc(param_3);
  return uVar5;
}

