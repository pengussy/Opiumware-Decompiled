/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x34bd30:2d48ea93af
 */

undefined8 FUN_0034bd30(undefined8 param_1,undefined8 param_2,uint param_3,long *param_4)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = param_4[2];
  while( true ) {
    if (lVar3 == 0) {
      uVar7 = 0x2f;
      uVar8 = 0x5fd;
      goto LAB_0034be24;
    }
    if (lVar3 == 1) break;
    puVar5 = (ushort *)*param_4;
    uVar1 = *puVar5;
    *param_4 = (long)(puVar5 + 1);
    param_4[2] = lVar3 - 2U;
    if (lVar3 - 2U < 2) break;
    uVar6 = (ulong)((uint)(puVar5[1] >> 8) | (puVar5[1] & 0xff00ff) << 8);
    puVar5 = puVar5 + 2;
    *param_4 = (long)puVar5;
    uVar4 = lVar3 - 4;
    param_4[2] = uVar4;
    lVar3 = uVar4 - uVar6;
    if (uVar4 < uVar6) break;
    *param_4 = (long)puVar5 + uVar6;
    param_4[2] = lVar3;
    if (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) == param_3) {
      iVar2 = func_0x019ec0a0(param_2,param_3,2);
      if (((iVar2 != 0) && (iVar2 = func_0x019ec0a0(param_2,uVar6,2), iVar2 != 0)) &&
         (iVar2 = func_0x00476690(param_2,puVar5,uVar6), iVar2 != 0)) {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        return 1;
      }
      uVar7 = 0x50;
      uVar8 = 0x5f6;
LAB_0034be24:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,uVar8,"ech_copy_ext");
      func_0x003a9570(param_1,uVar7,0x6e,0);
      return 0;
    }
  }
  uVar7 = 0x32;
  uVar8 = 0x5ef;
  goto LAB_0034be24;
}

