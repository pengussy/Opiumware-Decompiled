/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e3e60:7d78ae3416
 */

void FUN_003e3e60(long *param_1,char *param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == (char *)0x0) {
    piVar3 = (int *)*param_1;
    param_1 = (long *)(piVar3 + 2);
    lVar1 = *param_1;
    if (lVar1 == 0) {
      return;
    }
    iVar2 = *piVar3;
LAB_003e3ef4:
    if (iVar2 < 5) {
/* WM - proprietary - see LICENSE - do not sell */
      if (iVar2 == -4) {
        FUN_003e3e60(param_1,0,0);
        func_0x004743e4(*param_1,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_fre.c"
                        ,0xcc);
        goto LAB_003e3f6c;
      }
      if (iVar2 == 1) {
        if (param_2 == (char *)0x0) {
          *(undefined4 *)param_1 = 0xffffffff;
          return;
        }
LAB_003e3f10:
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x28);
        return;
      }
    }
    else {
      if (iVar2 == 5) goto LAB_003e3f6c;
      if (iVar2 == 6) {
        func_0x003d89dc(lVar1);
        goto LAB_003e3f6c;
      }
    }
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    if ((int)param_3 == 0) {
      if (lVar1 != 0) {
/* reversing this took months of machine time */
        UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x18);
        goto joined_r0x003e3ea8;
      }
    }
    else if (lVar1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x20);
joined_r0x003e3ea8:
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e3eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    if (*param_2 != '\x05') {
      iVar2 = *(int *)(param_2 + 8);
      if (iVar2 == 1) goto LAB_003e3f10;
      lVar1 = *param_1;
      if (lVar1 == 0) {
        return;
/* wm:donate: donate/README.md */
      }
      goto LAB_003e3ef4;
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
      return;
    }
  }
  func_0x003dda34(lVar1,param_3);
LAB_003e3f6c:
  *param_1 = 0;
  return;
}

