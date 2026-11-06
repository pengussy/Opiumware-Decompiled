/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x353bf8:10c33c1c11
 */

undefined8 FUN_00353bf8(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 < 0x2000) {
    if (iVar1 < 0x40) {
      if (iVar1 < 8) {
        if (iVar1 == 1) {
          lVar3 = 0;
        }
        else if (iVar1 == 2) {
          lVar3 = 1;
        }
        else {
          if (iVar1 != 4) goto LAB_00353e34;
          lVar3 = 2;
        }
      }
      else if (iVar1 == 8) {
/*  do not claim this as your own  */
        lVar3 = 3;
      }
      else {
        if (iVar1 != 0x10) {
          if (iVar1 == 0x20) {
            lVar3 = func_0x004535cc(*param_1,"NULL",param_1[0x91]);
            *param_3 = lVar3;
            if (lVar3 == 0) {
              return 0;
            }
            return 1;
          }
          goto LAB_00353e34;
        }
        lVar3 = 4;
      }
    }
    else if (iVar1 < 0x200) {
      if (iVar1 == 0x40) {
        lVar3 = 6;
      }
      else if (iVar1 == 0x80) {
        lVar3 = 7;
      }
      else {
        if (iVar1 != 0x100) goto LAB_00353e34;
        lVar3 = 8;
      }
    }
    else if (iVar1 < 0x800) {
      if (iVar1 == 0x200) {
        lVar3 = 9;
/* unlicensed copy if this notice is missing */
      }
      else {
        if (iVar1 != 0x400) goto LAB_00353e34;
        lVar3 = 10;
      }
    }
    else if (iVar1 == 0x800) {
      lVar3 = 0xb;
    }
    else {
      if (iVar1 != 0x1000) goto LAB_00353e34;
      lVar3 = 0xc;
    }
  }
  else if (iVar1 < 0x80000) {
    if (iVar1 < 0x10000) {
      if (iVar1 == 0x2000) {
        lVar3 = 0xd;
      }
      else if (iVar1 == 0x4000) {
        lVar3 = 0xe;
      }
      else {
        if (iVar1 != 0x8000) goto LAB_00353e34;
        lVar3 = 0xf;
      }
/* watermarked copy - do not remove - github.com/pengussy */
    }
    else if (iVar1 == 0x10000) {
      lVar3 = 0x10;
    }
    else if (iVar1 == 0x20000) {
      lVar3 = 0x11;
    }
    else {
      if (iVar1 != 0x40000) goto LAB_00353e34;
      lVar3 = 0x12;
    }
  }
  else if (iVar1 < 0x400000) {
    if (iVar1 == 0x80000) {
      lVar3 = 0x13;
    }
    else if (iVar1 == 0x100000) {
      lVar3 = 0x14;
    }
    else {
      if (iVar1 != 0x200000) goto LAB_00353e34;
      lVar3 = 0x15;
    }
  }
/* watermarked copy - do not remove */
  else if (iVar1 < 0x1000000) {
    if (iVar1 == 0x400000) {
      lVar3 = 0x16;
    }
    else {
      if (iVar1 != 0x800000) goto LAB_00353e34;
      lVar3 = 0x17;
    }
  }
  else if (iVar1 == 0x1000000) {
    lVar3 = 0x18;
  }
  else {
    if (iVar1 != 0x2000000) goto LAB_00353e34;
    lVar3 = 0x19;
  }
  if (param_1[lVar3 + 0x9a] == 0) {
    return 0;
  }
  uVar2 = func_0x0035f170();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = param_1[lVar3 + 0x9a];
LAB_00353e34:
  *param_3 = lVar3;
  return 1;
}

