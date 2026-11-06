/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e2340:e5ac30478f
   =========================================================================== */

undefined8
FUN_003e2340(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
            long *param_6,long param_7,int param_8,undefined8 param_9,char *param_10)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  int iStack_68;
  int iStack_64;
  
  lVar3 = *param_6;
  lStack_78 = lVar3;
  if (param_7 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,0x4a2,"asn1_check_tlen");
    func_0x004466b0(0xd,0xe0,0);
  }
  else {
    if (param_10 == (char *)0x0) {
      uVar1 = func_0x003dd2e4(&lStack_78,&lStack_70,&iStack_64,&iStack_68,param_7);
    }
    else if (*param_10 == '\0') {
      uVar1 = func_0x003dd2e4(&lStack_78,&lStack_70,&iStack_64,&iStack_68,param_7);
      *(uint *)(param_10 + 4) = uVar1;
      *(long *)(param_10 + 8) = lStack_70;
      *(int *)(param_10 + 0x10) = iStack_64;
      *(int *)(param_10 + 0x14) = iStack_68;
      iVar2 = (int)lStack_78 - (int)lVar3;
      *(int *)(param_10 + 0x18) = iVar2;
      *param_10 = '\x01';
      if (((uVar1 & 0x81) == 0) && (param_7 < lStack_70 + iVar2)) {
/* WM - chat: discord.gg/sdkhDjTex */
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                        ,0x4b9,"asn1_check_tlen");
        func_0x004466b0(0xd,0x9b,0);
        goto LAB_003e2554;
      }
    }
    else {
      uVar1 = *(uint *)(param_10 + 4);
      lStack_70 = *(long *)(param_10 + 8);
      iStack_64 = *(int *)(param_10 + 0x10);
      iStack_68 = *(int *)(param_10 + 0x14);
      lStack_78 = lVar3 + *(int *)(param_10 + 0x18);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      if (param_8 < 0) {
LAB_003e24c4:
        if ((uVar1 & 1) != 0) {
          lStack_70 = (param_7 + lVar3) - lStack_78;
        }
        if (param_4 != (byte *)0x0) {
          *param_4 = (byte)uVar1 & 1;
/* wm:origin: github.com/pengussy */
        }
        if (param_5 != (byte *)0x0) {
          *param_5 = (byte)uVar1 & 0x20;
        }
        if (param_1 != (long *)0x0) {
          *param_1 = lStack_70;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = (char)iStack_68;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = iStack_64;
        }
        *param_6 = lStack_78;
        return 1;
      }
      if ((param_8 == iStack_64) && ((int)param_9 == iStack_68)) {
        if (param_10 != (char *)0x0) {
          *param_10 = '\0';
        }
        goto LAB_003e24c4;
      }
      if (param_9._4_1_ != '\0') {
        return 0xffffffff;
// reversing this took months of machine time
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x4ca,"asn1_check_tlen");
      func_0x004466b0(0xd,0xa8,0);
    }
    else {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x4c0,"asn1_check_tlen");
      func_0x004466b0(0xd,0x66,0);
    }
  }
  if (param_10 == (char *)0x0) {
    return 0;
  }
LAB_003e2554:
  *param_10 = '\0';
  return 0;
}

