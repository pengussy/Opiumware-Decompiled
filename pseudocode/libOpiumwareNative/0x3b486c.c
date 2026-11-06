/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b486c:fa8a761769
   =========================================================================== */

undefined8 FUN_003b486c(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  ushort *puVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  byte *pbStack_78;
  ushort *puStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = 0;
  puVar14 = *(undefined8 **)(param_1 + 8);
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
      (iVar5 = **(int **)(param_1 + 0x18), iVar5 < 0x304)) || (iVar5 == 0x10000)) goto LAB_003b49a8;
  if (param_2[2] == 0) {
LAB_003b48d4:
/* if you paid for this, you were scammed - github.com/pengussy */
    func_0x004464bc();
    uVar6 = 0x4b3;
LAB_003b48ec:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,uVar6,"tls_process_rpk");
    uVar6 = 0x11a;
LAB_003b4a60:
    func_0x003a9570(param_1,0x32,uVar6,0);
    uVar6 = 0;
  }
  else {
    bVar1 = *(byte *)*param_2;
    uVar8 = (ulong)bVar1;
    uVar11 = param_2[2] - 1;
    if (uVar11 < uVar8) goto LAB_003b48d4;
    pbVar9 = (byte *)*param_2 + 1;
    *param_2 = (long)(pbVar9 + uVar8);
    param_2[2] = uVar11 - uVar8;
    if (*(int *)(param_1 + 0x78) != 0) {
      if (*(long *)(param_1 + 0xd68) == 0) {
        if (bVar1 != 0) {
          func_0x004464bc();
          uVar6 = 0x4b9;
          goto LAB_003b48ec;
        }
        goto LAB_003b49a8;
      }
      if ((*(ulong *)(param_1 + 0xd70) == uVar8) &&
         (iVar5 = func_0x0046eb60(pbVar9,*(long *)(param_1 + 0xd68),uVar8), iVar5 == 0))
      goto LAB_003b49a8;
      func_0x004464bc();
      uVar6 = 0x4be;
      goto LAB_003b48ec;
    }
    if (bVar1 != 0) {
/* WM - proprietary - see LICENSE - do not sell */
      func_0x004464bc();
      uVar6 = 0x4c4;
      goto LAB_003b48ec;
    }
LAB_003b49a8:
    uVar8 = param_2[2];
    if (uVar8 < 3) {
LAB_003b4a38:
      func_0x004464bc();
      uVar6 = 0x4cc;
LAB_003b4a50:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,uVar6,"tls_process_rpk");
      uVar6 = 0x9f;
      goto LAB_003b4a60;
    }
    pbVar12 = (byte *)*param_2;
    uVar11 = (ulong)*pbVar12 << 0x10 | (ulong)pbVar12[1] << 8 | (ulong)pbVar12[2];
    pbVar9 = pbVar12 + 3;
    *param_2 = (long)pbVar9;
    param_2[2] = uVar8 - 3;
    if (uVar8 - 3 != uVar11) goto LAB_003b4a38;
    if (uVar11 == 0) {
      return 1;
    }
    uVar13 = uVar11;
    uVar16 = uVar11;
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
        (iVar5 = **(int **)(param_1 + 0x18), 0x303 < iVar5)) && (iVar5 != 0x10000)) {
      if (uVar11 < 3) {
        func_0x004464bc();
        uVar6 = 0x4e1;
        goto LAB_003b4a50;
      }
      bVar1 = pbVar12[3];
      bVar2 = pbVar12[4];
/* stripping the watermark breaks the license */
      bVar3 = pbVar12[5];
      pbVar9 = pbVar12 + 6;
      *param_2 = (long)pbVar9;
      uVar13 = uVar8 - 6;
      param_2[2] = uVar13;
      uVar16 = (ulong)bVar1 << 0x10 | (ulong)bVar2 << 8 | (ulong)bVar3;
      if (uVar16 != 0) {
        if (uVar16 <= uVar13) goto LAB_003b4ab4;
        func_0x004464bc();
        uVar6 = 0x4ee;
        goto LAB_003b4a50;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x4e6,"tls_process_rpk");
      uVar6 = 0x15d;
      goto LAB_003b4a60;
    }
LAB_003b4ab4:
    *param_2 = (long)(pbVar9 + uVar16);
    param_2[2] = uVar13 - uVar16;
    pbStack_78 = pbVar9;
    lVar15 = func_0x0050593c(0,&pbStack_78,uVar16,*puVar14,puVar14[0x91]);
    if (lVar15 == 0 || pbStack_78 != pbVar9 + uVar16) {
      func_0x004464bc();
      uVar6 = 0x4f4;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
LAB_003b4b14:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,uVar6,"tls_process_rpk");
      uVar6 = 0x32;
      uVar7 = 0x9f;
LAB_003b4b64:
      func_0x003a9570(param_1,uVar6,uVar7,0);
      uVar6 = 0;
      goto LAB_003b4a70;
    }
    iVar5 = func_0x0045e7bc(lVar15);
    if (iVar5 != 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x4f9,"tls_process_rpk");
      uVar6 = 0x50;
      uVar7 = 0xef;
      goto LAB_003b4b64;
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
        (iVar5 = **(int **)(param_1 + 0x18), 0x303 < iVar5)) && (iVar5 != 0x10000)) {
      uVar8 = param_2[2];
      if (uVar8 == (uVar11 - uVar16) - 3) {
        if (1 < uVar8) {
          puVar10 = (ushort *)*param_2 + 1;
          uVar4 = *(ushort *)*param_2;
          uVar11 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
          if (uVar8 - 2 == uVar11) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            lStack_68 = param_2[1];
            *param_2 = (long)puVar10 + uVar11;
            param_2[2] = 0;
            puStack_70 = puVar10;
            uStack_60 = uVar11;
            iVar5 = FUN_0039bb1c(param_1,&puStack_70,0x10000,&uStack_58,0,1);
            if ((iVar5 == 0) ||
               (iVar5 = func_0x0039c418(param_1,0x10000,uStack_58,0,0,1), iVar5 == 0)) {
              uVar6 = 0;
              goto LAB_003b4a70;
            }
            goto LAB_003b4c20;
          }
        }
        func_0x004464bc();
        uVar6 = 0x505;
        goto LAB_003b4b14;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x500,"tls_process_rpk");
      uVar6 = 0x32;
      uVar7 = 0x10f;
      goto LAB_003b4b64;
    }
LAB_003b4c20:
    if (param_3 == (long *)0x0) {
      uVar6 = 1;
/* reversing this took months of machine time */
      goto LAB_003b4a70;
    }
    *param_3 = lVar15;
    uVar6 = 1;
  }
  lVar15 = 0;
LAB_003b4a70:
  func_0x004743e4(uStack_58,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                  ,0x51b);
  func_0x0045eb4c(lVar15);
  return uVar6;
}

