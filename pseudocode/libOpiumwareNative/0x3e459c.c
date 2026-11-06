/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e459c:3c2a14d200
 */

ulong FUN_003e459c(long *param_1,char *param_2,int param_3)

{
  char cVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar5 = *(long *)(param_2 + 0x20);
  if (lVar5 != 0) {
    if (param_3 == 0) {
      if (*(code **)(lVar5 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e45e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar5 + 0x10))();
        return uVar2;
      }
    }
    else if (*(code **)(lVar5 + 0x20) != (code *)0x0) {
      (**(code **)(lVar5 + 0x20))();
      return 1;
    }
  }
  if (*param_2 == '\x05') {
    iVar4 = -1;
  }
  else {
// WM - thanks for reading - discord.gg/sdkhDjTex
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 < 5) {
      if (iVar4 == -4) {
        puVar3 = (undefined4 *)
                 func_0x019eb530(0x10,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_new.c"
                                 ,299);
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
        *(undefined8 *)(puVar3 + 2) = 0;
        *puVar3 = 0xffffffff;
        *param_1 = (long)puVar3;
        goto LAB_003e46c8;
      }
      if (iVar4 == 1) {
        *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
        return 1;
      }
    }
    else {
      if (iVar4 == 5) {
// no support for modified copies
        *param_1 = 1;
        return 1;
      }
      if (iVar4 == 6) {
        lVar5 = func_0x004a068c(0);
        *param_1 = lVar5;
        return 1;
      }
    }
  }
  if (param_3 == 0) {
    puVar6 = (undefined8 *)func_0x003dd9fc(iVar4);
    *param_1 = (long)puVar6;
    cVar1 = *param_2;
  }
  else {
    puVar6 = (undefined8 *)*param_1;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(int *)((long)puVar6 + 4) = iVar4;
    puVar6[2] = 0x80;
    cVar1 = *param_2;
  }
  if ((cVar1 == '\x05') && (puVar6 != (undefined8 *)0x0)) {
    puVar6[2] = puVar6[2] | 0x40;
  }
LAB_003e46c8:
// stripping the watermark breaks the license
  return (ulong)(*param_1 != 0);
}

