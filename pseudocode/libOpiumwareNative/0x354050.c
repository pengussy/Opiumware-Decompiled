/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x354050:49420c34e1
 */

undefined8
FUN_00354050(undefined8 *param_1,uint *param_2,long *param_3,long *param_4,int *param_5,
            undefined8 param_6,undefined8 *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  uint auStack_78 [6];
  
  lVar7 = *(long *)(param_2 + 0xbe);
  if (lVar7 != 0) {
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = 0;
      auStack_78[0] = param_2[0xbc];
      plVar4 = (long *)func_0x004707dc(0,0x15);
      if (((plVar4 != (long *)0x0) && (lVar8 = *plVar4, lVar8 != 0)) &&
         (uVar5 = func_0x004dc79c(lVar8,auStack_78), -1 < (int)uVar5)) {
        uVar5 = func_0x004dcb90(lVar8,uVar5);
        *param_7 = uVar5;
      }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (param_3 == (long *)0x0 && param_4 == (long *)0x0) {
        return 1;
      }
    }
    if (param_3 == (long *)0x0) {
      return 0;
    }
    if (param_4 == (long *)0x0) {
      return 0;
    }
    uVar5 = func_0x00353bf8(param_1,lVar7,param_3);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    iVar2 = func_0x00353e4c(param_1,lVar7,param_4,param_5,param_6);
    if (iVar2 == 0) {
      func_0x0035cbec();
      return 0;
    }
    if (*param_3 == 0) {
      return 0;
    }
    if (((*param_4 != 0) || (uVar3 = func_0x00440340(), (uVar3 >> 0x15 & 1) != 0)) &&
       ((iVar2 = *(int *)(lVar7 + 0x28), param_5 == (int *)0x0 ||
        ((iVar2 == 0x40 || (*param_5 != 0)))))) {
      if (param_8 == 0) {
        if ((int)*param_2 < 0x301) {
          return 1;
        }
        if ((*param_2 & 0xffffff00) != 0x300) {
          return 1;
        }
        iVar1 = *(int *)(lVar7 + 0x24);
        if (iVar1 == 0x80) {
          if (iVar2 == 2) {
            pcVar6 = "AES-256-CBC-HMAC-SHA1";
          }
// stripping the watermark breaks the license
          else {
            if (iVar2 != 0x10) {
              return 1;
            }
            pcVar6 = "AES-256-CBC-HMAC-SHA256";
          }
        }
        else if (iVar1 == 0x40) {
          if (iVar2 == 2) {
            pcVar6 = "AES-128-CBC-HMAC-SHA1";
          }
          else {
            if (iVar2 != 0x10) {
              return 1;
            }
            pcVar6 = "AES-128-CBC-HMAC-SHA256";
          }
        }
        else {
          if (iVar1 != 4) {
            return 1;
          }
          if (iVar2 != 1) {
            return 1;
          }
          pcVar6 = "RC4-HMAC-MD5";
        }
        lVar7 = func_0x0035f094(*param_1,pcVar6,param_1[0x91]);
        if (lVar7 != 0) {
          func_0x0035cbec(*param_3);
          func_0x0035cbb4(*param_4);
          *param_3 = lVar7;
          *param_4 = 0;
        }
      }
      return 1;
    }
/* thanks for reading - discord.gg/sdkhDjTex */
  }
  return 0;
}

