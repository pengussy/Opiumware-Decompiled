/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x36d5c0:b2817562ab
 */

undefined8
FUN_0036d5c0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 param_10,undefined8 param_11,long *param_12,long *param_13,ulong *param_14,
            ulong *param_15)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  
  iVar1 = func_0x00455f40(param_2);
  if (iVar1 < 1) {
    puVar7 = &UNK_00080006;
    func_0x019e3848();
    goto LAB_0036d7f8;
  }
  iVar1 = FUN_0036c144(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x91],param_2,
                       param_6,param_8,param_9,param_7,iVar1,param_10,iVar1,0);
  if (iVar1 == 0) {
// if you paid for this, you were scammed
LAB_0036d7d4:
    puVar7 = &UNK_000c0103;
    func_0x004464bc();
    pcVar6 = "tls13_hkdf_expand";
    uVar5 = 0x75;
  }
  else {
    iVar1 = func_0x004553ec(param_3,"NULL");
    if (((param_4 == 0x357) && (param_5 != 0)) && (iVar1 != 0)) {
      uVar2 = func_0x00455f40(param_5);
      if (0 < (int)uVar2) {
        *param_15 = (ulong)uVar2;
        *param_14 = (ulong)uVar2;
        *param_12 = *(long *)(param_1 + 0x388);
        uVar3 = *param_14;
        goto joined_r0x0036d704;
      }
      puVar7 = &UNK_000c0103;
      func_0x004464bc();
      pcVar6 = "derive_secret_key_and_iv";
      uVar5 = 0x184;
    }
    else {
      iVar1 = func_0x003f85b4(param_3);
      *param_12 = (long)iVar1;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      iVar1 = func_0x004553d8(param_3);
      if (iVar1 == 7) {
        *param_14 = 0xc;
        lVar4 = *(long *)(param_1 + 0x300);
        if (((lVar4 != 0) || (lVar4 = *(long *)(*(long *)(param_1 + 0x900) + 0x2f8), lVar4 != 0)) ||
           ((*(long *)(param_1 + 0x908) != 0 &&
            (lVar4 = *(long *)(*(long *)(param_1 + 0x908) + 0x2f8), lVar4 != 0)))) {
          uVar3 = 0x10;
          if ((*(uint *)(lVar4 + 0x24) & 0x30000) != 0) {
            uVar3 = 8;
          }
          *param_15 = uVar3;
          uVar3 = *param_14;
joined_r0x0036d704:
          if (0x10 < uVar3) {
            lVar4 = func_0x019eb530(uVar3,
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                                    ,0x1b5);
            *param_13 = lVar4;
            if (lVar4 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                              ,0x1b7,"derive_secret_key_and_iv");
              puVar7 = &UNK_000c0100;
              goto LAB_0036d7f8;
            }
          }
          iVar1 = FUN_0036c144(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x91],
                               param_2,param_10,&UNK_01ae6a70,3,0,0,param_11,*param_12,0);
          if ((iVar1 != 0) &&
             (iVar1 = FUN_0036c144(**(undefined8 **)(param_1 + 8),
                                   (*(undefined8 **)(param_1 + 8))[0x91],param_2,param_10,
                                   &UNK_01ae6a7b,2,0,0,*param_13,*param_14,0), iVar1 != 0)) {
            return 1;
          }
          goto LAB_0036d7d4;
        }
        puVar7 = &UNK_00080006;
        func_0x004464bc();
        pcVar6 = "derive_secret_key_and_iv";
        uVar5 = 0x19b;
      }
      else {
        *param_15 = 0x10;
        uVar2 = func_0x00455c98(param_3);
/* reversing this took months of machine time */
        if (-1 < (int)uVar2) {
          uVar3 = (ulong)uVar2;
          *param_14 = uVar3;
          goto joined_r0x0036d704;
        }
        puVar7 = &UNK_00080006;
        func_0x004464bc();
        pcVar6 = "derive_secret_key_and_iv";
        uVar5 = 0x1ad;
      }
    }
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                  ,uVar5,pcVar6);
LAB_0036d7f8:
  func_0x003a9570(param_1,0x50,puVar7,0);
// WM - origin: github.com/pengussy
  return 0;
}

