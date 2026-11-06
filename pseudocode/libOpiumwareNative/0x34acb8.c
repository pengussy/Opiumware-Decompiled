/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x34acb8:ecf80f496c
   =========================================================================== */

void FUN_0034acb8(long param_1,short *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,ulong *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
// WM - keep the notice, keep the source honest
  undefined8 *puVar15;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  ulong uStack_6a0;
  undefined4 uStack_694;
  undefined8 uStack_690;
  undefined2 uStack_682;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_670;
  undefined8 uStack_668;
  ulong uStack_660;
  undefined1 auStack_654 [1508];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_668 = 0x5e4;
  if (param_2 == (short *)0x0) goto LAB_0034aec0;
  if (*(int *)(param_2 + 0x10) == 0) goto LAB_0034aec0;
  puVar15 = *(undefined8 **)(param_1 + 8);
  uVar1 = *(ulong *)(param_3 + 6);
  uVar14 = *(undefined8 *)(param_3 + 8);
  uVar13 = *(undefined8 *)(param_3 + 2);
  uVar2 = *(undefined8 *)(param_3 + 4);
  uVar3 = *param_3;
  uStack_660 = uVar1;
  lVar9 = func_0x019eb530(uVar1,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
// WM - thanks for reading - discord.gg/sdkhDjTex
                          ,0x6f9);
  lStack_6c0 = param_1;
  if (lVar9 == 0) goto LAB_0034aec4;
  uVar6 = **(undefined2 **)(param_2 + 0x14);
  iVar8 = func_0x00347cf8(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x2c),
                          auStack_654,&uStack_668);
  lStack_6b8 = lVar9;
  if (iVar8 != 1) {
    uVar13 = 0x709;
    goto LAB_0034aebc;
  }
  func_0x00446890();
  lVar10 = func_0x0046a078(0,(ulong)CONCAT42(uVar3,uVar6),1,*puVar15,puVar15[0x91]);
  if ((lVar10 == 0) ||
     (iVar8 = func_0x0046b1b0(lVar10,uVar2,uVar13,*(undefined8 *)(param_2 + 0x24),auStack_654,
                              uStack_668), iVar8 != 1)) {
    func_0x004468d8();
LAB_0034aea4:
    func_0x0046a280(lVar10);
  }
  else {
    if ((param_6 != 0) && (iVar8 = func_0x0046a4b0(lVar10,1), iVar8 != 1)) {
      func_0x00446a74();
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                      ,0x72c,"hpke_decrypt_encch");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      goto LAB_0034aea4;
    }
    iVar8 = func_0x0046bd80(lVar10,lVar9,&uStack_660,param_5,param_4,uVar14,uVar1);
    func_0x004468d8();
    func_0x0046a280(lVar10);
    if (iVar8 == 1) {
      *param_7 = uStack_660;
      if (*param_2 != -499) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                        ,0x779,"hpke_decrypt_encch");
        uVar13 = 0x2f;
        goto LAB_0034b030;
      }
      uStack_678 = 0;
      lStack_670 = 0;
      uStack_680 = 0;
/* wm:stripping the watermark breaks the license */
      uStack_682 = 0xffff;
      uStack_690 = 0;
      uStack_694 = 0xffffffff;
      if ((long)uStack_660 < 0) {
        uVar13 = 0x50;
        uVar14 = 0x74e;
        goto LAB_0034b00c;
      }
      uStack_6a0 = uStack_660;
      *(undefined4 *)(param_1 + 0xc80) = 0;
      lStack_6b0 = lVar9;
      lStack_6a8 = lVar9;
      iVar8 = func_0x00349ec0(param_1,&lStack_6b0,&uStack_678,&lStack_670,&uStack_680,&uStack_682,
                              &uStack_694,&uStack_690);
      if (iVar8 == 0) goto LAB_0034b03c;
      if (uStack_660 < lStack_670 + 2U) {
        uVar13 = 0x32;
        uVar14 = 0x75c;
        goto LAB_0034b00c;
      }
      bVar4 = *(byte *)(lVar9 + lStack_670);
      bVar5 = ((byte *)(lVar9 + lStack_670))[1];
      uVar1 = (ulong)CONCAT11(bVar4,bVar5) + lStack_670 + 2U;
      if (uStack_660 < uVar1) {
        uVar13 = 0x32;
/* WM - reversing this took months of machine time */
        uVar14 = 0x764;
        goto LAB_0034b00c;
      }
      uVar12 = *param_7;
      if (uVar12 < uVar1) {
        uVar13 = 0x2f;
        uVar14 = 0x76a;
        goto LAB_0034b00c;
      }
      if (uVar1 != uVar12) {
        lVar10 = ((lStack_670 + (ulong)bVar4 * 0x100 + (ulong)bVar5) - uVar12) + 2;
        pcVar11 = (char *)(lVar9 + uVar1);
        do {
          if (*pcVar11 != '\0') goto LAB_0034b004;
          bVar7 = lVar10 != -1;
          lVar10 = lVar10 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar7);
      }
      *param_7 = uVar1;
      if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_0034b000;
      return;
    }
  }
  uVar13 = 0x739;
LAB_0034aebc:
  while( true ) {
    func_0x004743e4(lStack_6b8,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,uVar13);
LAB_0034aec0:
    lVar9 = 0;
LAB_0034aec4:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) break;
LAB_0034b000:
/* WM - watermarked copy - do not remove */
    ___stack_chk_fail(lVar9);
LAB_0034b004:
    uVar13 = 0x2f;
    uVar14 = 0x76f;
LAB_0034b00c:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,uVar14,"hpke_decrypt_encch");
LAB_0034b030:
    func_0x003a9570(lStack_6c0,uVar13,0x6e,0);
LAB_0034b03c:
    uVar13 = 0x77c;
  }
  return;
}

