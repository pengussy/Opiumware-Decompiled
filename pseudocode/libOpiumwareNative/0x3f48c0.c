/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3f48c0:c54051fe68
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_003f48c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  iVar1 = func_0x003f95d8(param_3,1);
  if ((iVar1 != 0) || (iVar1 = func_0x003f89fc(param_3), iVar1 != 0)) {
    *param_5 = 1;
    return 0;
  }
  *param_5 = 0;
  iVar1 = func_0x003f8a9c(param_2,4);
  if ((iVar1 != 0) || (iVar1 = func_0x003f8a9c(param_3,4), iVar1 != 0)) {
    FUN_003f1890(param_4);
    lVar4 = FUN_003f1a40(param_4);
    lVar5 = FUN_003f1a40(param_4);
    lVar6 = FUN_003f1a40(param_4);
    uVar7 = FUN_003f1a40(param_4);
    lVar8 = FUN_003f1a40(param_4);
    lVar9 = FUN_003f1a40(param_4);
    lVar10 = FUN_003f1a40(param_4);
    lStack_80 = 0;
    if (lVar10 == 0) goto joined_r0x003f4eb8;
    lStack_80 = param_1;
    if ((param_1 == 0) && (lStack_80 = FUN_003f8b2c(), lStack_80 == 0)) {
LAB_003f4e28:
      FUN_003f8aa8(lStack_80);
    }
    else {
      iVar1 = func_0x003f8c08(lVar6,1);
      if (iVar1 != 0) {
        func_0x003f95cc(lVar9);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        lVar10 = func_0x019e8960(lVar5,param_2);
        if ((lVar10 != 0) && (lVar10 = func_0x019e8960(lVar4,param_3), lVar10 != 0)) {
          *(undefined4 *)(lVar4 + 0x10) = 0;
          if ((*(int *)(lVar5 + 0x10) != 0) || (iVar1 = func_0x003f9044(lVar5,lVar4), -1 < iVar1)) {
            func_0x00392bc8(auStack_78);
            func_0x003f9720(auStack_78,lVar5,4);
            iVar1 = FUN_003f9878(lVar5,auStack_78,lVar4,param_4);
            if (iVar1 == 0) goto joined_r0x003f4eb8;
          }
          iVar1 = func_0x003f89fc(lVar5);
          if (iVar1 == 0) {
            lVar10 = lVar9;
            iVar1 = -1;
            lStack_88 = lVar4;
            do {
              iVar2 = iVar1;
              lVar9 = lVar6;
              lVar4 = lVar5;
              lVar6 = lVar10;
              func_0x00392bc8(auStack_78);
              func_0x003f9720(auStack_78,lStack_88,4);
              iVar1 = FUN_003f1d68(uVar7,lVar8,auStack_78,lVar4,param_4);
              if (((iVar1 == 0) || (iVar1 = func_0x003fb99c(lStack_88,uVar7,lVar9), iVar1 == 0)) ||
                 (iVar1 = func_0x003ee9fc(lStack_88,lStack_88,lVar6), iVar1 == 0))
              goto joined_r0x003f4eb8;
              iVar3 = func_0x003f89fc(lVar8);
              lVar10 = lVar9;
              lVar5 = lVar8;
              lVar8 = lVar6;
              lVar6 = lStack_88;
              iVar1 = -iVar2;
              lStack_88 = lVar4;
            } while (iVar3 == 0);
            if (0 < iVar2) goto LAB_003f4a6c;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
          }
          else {
LAB_003f4a6c:
            iVar1 = func_0x003eeef4(lVar9,param_3,lVar9);
            if (iVar1 == 0) goto joined_r0x003f4eb8;
          }
          iVar1 = func_0x003f9610(lVar4);
          if (iVar1 == 0) {
            *param_5 = 1;
          }
          else if ((*(int *)(lVar9 + 0x10) == 0) &&
                  (iVar1 = func_0x003f9044(lVar9,param_3), iVar1 < 0)) {
            lVar5 = func_0x019e8960(lStack_80,lVar9);
            if (lVar5 != 0) goto LAB_003f4ad4;
          }
          else {
            iVar1 = FUN_003f9878(lStack_80,lVar9,param_3,param_4);
            if (iVar1 != 0) {
LAB_003f4ad4:
              *param_5 = 0;
              goto LAB_003f4e30;
            }
          }
        }
      }
joined_r0x003f4eb8:
      if (param_1 == 0) goto LAB_003f4e28;
    }
    lStack_80 = 0;
LAB_003f4e30:
    func_0x003f19bc(param_4);
    return lStack_80;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  }
  FUN_003f1890(param_4);
  lVar8 = FUN_003f1a40(param_4);
  lVar5 = FUN_003f1a40(param_4);
  lVar6 = FUN_003f1a40(param_4);
  puVar11 = (undefined8 *)FUN_003f1a40(param_4);
  lStack_90 = FUN_003f1a40(param_4);
  lStack_a0 = FUN_003f1a40(param_4);
  lVar4 = FUN_003f1a40(param_4);
  if (lVar4 == 0) {
    lVar9 = 0;
LAB_003f5120:
    if (param_1 == 0) goto LAB_003f5124;
  }
  else {
    lVar9 = param_1;
    if ((param_1 != 0) || (lVar9 = FUN_003f8b2c(), lVar9 != 0)) {
      iVar1 = func_0x003f8c08(lVar6,1);
      if (iVar1 != 0) {
        func_0x003f95cc(lStack_a0);
        lVar10 = func_0x019e8960(lVar5,param_2);
        if (((lVar10 != 0) && (lVar10 = func_0x019e8960(lVar8,param_3), lVar10 != 0)) &&
           (((*(undefined4 *)(lVar8 + 0x10) = 0, *(int *)(lVar5 + 0x10) == 0 &&
             (iVar1 = func_0x003f9044(lVar5,lVar8), iVar1 < 0)) ||
            (iVar1 = FUN_003f9878(lVar5,lVar5,lVar8,param_4), iVar1 != 0)))) {
          iVar1 = func_0x003f96e0(param_3);
          if ((iVar1 == 0) || (iVar1 = func_0x019e85d0(param_3), 0x800 < iVar1)) {
            iVar1 = func_0x003f89fc(lVar5);
            if (iVar1 == 0) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
              lVar10 = lStack_a0;
              iVar1 = -1;
LAB_003f4f04:
              lStack_a0 = lVar6;
              iVar3 = iVar1;
              lVar6 = lVar8;
              lVar8 = lVar5;
              lVar12 = lVar10;
              iVar1 = func_0x019e85d0(lVar6);
              iVar2 = func_0x019e85d0(lVar8);
              lVar5 = lVar6;
              if (iVar1 == iVar2) {
                iVar1 = func_0x003f8c08(puVar11,1);
                if (iVar1 == 0) goto LAB_003f5120;
              }
              else {
                iVar1 = func_0x019e85d0(lVar6);
                iVar2 = func_0x019e85d0(lVar8);
/* keep the notice, keep the source honest - github.com/pengussy */
                if (iVar1 != iVar2 + 1) {
                  iVar1 = FUN_003f1d68(puVar11,lStack_90,lVar6,lVar8,param_4);
                  goto joined_r0x003f50b0;
                }
                iVar1 = func_0x003fe938(lVar4,lVar8);
                if (iVar1 == 0) goto LAB_003f5120;
                iVar1 = func_0x003f9044(lVar6,lVar4);
                if (-1 < iVar1) {
                  iVar1 = func_0x003eeef4(lStack_90,lVar6,lVar4);
                  if ((iVar1 != 0) && (iVar1 = func_0x003ee9fc(puVar11,lVar4,lVar8), iVar1 != 0)) {
                    iVar1 = func_0x003f9044(lVar6,puVar11);
                    if (iVar1 < 0) {
                      iVar1 = func_0x003f8c08(puVar11,2);
                      goto joined_r0x003f50b0;
                    }
                    iVar1 = func_0x003f8c08(puVar11,3);
                    if (iVar1 != 0) {
                      lVar5 = lStack_90;
/*  proprietary - see LICENSE - do not sell  */
                      goto LAB_003f5044;
                    }
                  }
                  goto LAB_003f5120;
                }
                iVar1 = func_0x003f8c08(puVar11,1);
                if (iVar1 == 0) goto LAB_003f5120;
              }
LAB_003f5044:
              iVar1 = func_0x003eeef4(lStack_90,lVar5,lVar8);
joined_r0x003f50b0:
              if (iVar1 == 0) goto LAB_003f5120;
              iVar1 = func_0x003f9610(puVar11);
              if (iVar1 == 0) {
                iVar1 = func_0x003f9644(puVar11,2);
                if (iVar1 == 0) {
                  iVar1 = func_0x003f9644(puVar11,4);
                  if (iVar1 == 0) {
                    if (*(int *)(puVar11 + 1) == 1) {
                      lVar5 = func_0x019e8960(lVar6,lStack_a0);
                      if (lVar5 == 0) goto LAB_003f5120;
                      iVar1 = func_0x00400274(lVar6,*(undefined8 *)*puVar11);
                    }
                    else {
                      iVar1 = func_0x003fb99c(lVar6,puVar11,lStack_a0,param_4);
                    }
// keep the notice, keep the source honest
                  }
                  else {
                    iVar1 = FUN_003feb74(lVar6,lStack_a0,2);
                  }
                }
                else {
                  iVar1 = func_0x003fe938(lVar6,lStack_a0);
                }
                if (iVar1 == 0) goto LAB_003f5120;
                iVar1 = func_0x003ee9fc(lVar6,lVar6,lVar12);
              }
              else {
                iVar1 = func_0x003ee9fc(lVar6,lStack_a0,lVar12);
              }
              if (iVar1 == 0) goto LAB_003f5120;
              iVar2 = func_0x003f89fc(lStack_90);
              lVar10 = lStack_a0;
              lVar5 = lStack_90;
              iVar1 = -iVar3;
              lStack_90 = lVar12;
              if (iVar2 != 0) goto LAB_003f5160;
              goto LAB_003f4f04;
            }
          }
// no support for modified copies
          else {
            iVar1 = func_0x003f89fc(lVar5);
            if (iVar1 == 0) {
              iVar1 = 0;
              do {
                while (iVar2 = func_0x019e8ca4(lVar5,iVar1), iVar2 == 0) {
                  iVar2 = func_0x003f96e0(lVar6);
                  if ((iVar2 != 0) && (iVar2 = func_0x003eebd8(lVar6,lVar6,param_3), iVar2 == 0))
                  goto LAB_003f5120;
                  iVar1 = iVar1 + 1;
                  iVar2 = func_0x003fe9f0(lVar6,lVar6);
                  if (iVar2 == 0) goto LAB_003f5120;
                }
                if ((iVar1 != 0) && (iVar1 = FUN_003fee0c(lVar5,lVar5,iVar1), iVar1 == 0))
                goto LAB_003f5120;
                iVar1 = 0;
                while (iVar2 = func_0x019e8ca4(lVar8,iVar1), iVar2 == 0) {
                  iVar2 = func_0x003f96e0(lStack_a0);
                  if ((iVar2 != 0) &&
                     (iVar2 = func_0x003eebd8(lStack_a0,lStack_a0,param_3), iVar2 == 0))
                  goto LAB_003f5120;
                  iVar2 = func_0x003fe9f0(lStack_a0,lStack_a0);
                  iVar1 = iVar1 + 1;
                  if (iVar2 == 0) goto LAB_003f5120;
                }
                if ((iVar1 != 0) && (iVar1 = FUN_003fee0c(lVar8,lVar8,iVar1), iVar1 == 0))
                goto LAB_003f5120;
                iVar1 = func_0x003f9044(lVar5,lVar8);
                if (iVar1 < 0) {
                  iVar1 = func_0x003eebd8(lStack_a0,lStack_a0,lVar6);
                  if (iVar1 == 0) goto LAB_003f5120;
                  lVar4 = lVar8;
                  lVar10 = lVar5;
                }
                else {
                  iVar1 = func_0x003eebd8(lVar6,lVar6,lStack_a0);
                  if (iVar1 == 0) goto LAB_003f5120;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
                  lVar4 = lVar5;
                  lVar10 = lVar8;
                }
                iVar1 = FUN_003eed38(lVar4,lVar4,lVar10);
                if (iVar1 == 0) goto LAB_003f5120;
                iVar2 = func_0x003f89fc(lVar5);
                iVar1 = 0;
              } while (iVar2 == 0);
            }
          }
          goto LAB_003f4e58;
        }
      }
      goto LAB_003f5120;
    }
    lVar9 = 0;
LAB_003f5124:
    FUN_003f8aa8(lVar9);
  }
  lVar9 = 0;
LAB_003f5130:
  func_0x003f19bc(param_4);
  return lVar9;
LAB_003f5160:
  if (0 < iVar3) {
LAB_003f4e58:
    iVar1 = func_0x003eeef4(lStack_a0,param_3,lStack_a0);
    if (iVar1 == 0) goto LAB_003f5120;
  }
  iVar1 = func_0x003f9610(lVar8);
  if (iVar1 == 0) {
    *param_5 = 1;
  }
  else if ((*(int *)(lStack_a0 + 0x10) == 0) &&
          (iVar1 = func_0x003f9044(lStack_a0,param_3), iVar1 < 0)) {
/* wm:origin: github.com/pengussy */
    lVar5 = func_0x019e8960(lVar9,lStack_a0);
    if (lVar5 != 0) goto LAB_003f5130;
  }
  else {
    iVar1 = FUN_003f9878(lVar9,lStack_a0,param_3,param_4);
    if (iVar1 != 0) goto LAB_003f5130;
  }
  goto LAB_003f5120;
}

