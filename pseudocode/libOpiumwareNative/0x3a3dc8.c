/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a3dc8:c89e178d0b
 */

undefined8
FUN_003a3dc8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  lVar10 = *(long *)(param_1 + 0x880);
  if (*(long *)(lVar10 + 0x88) != 0) {
    uVar11 = 0;
    uVar3 = (uint)param_2;
/* watermarked copy - do not remove - github.com/pengussy */
    do {
      lStack_78 = 0;
      uStack_70 = 0;
      puVar9 = (ushort *)(*(long *)(lVar10 + 0x80) + uVar11 * 0x38);
      iVar1 = func_0x0039c50c(param_1,*(undefined4 *)(puVar9 + 4),param_2,param_6);
      if ((iVar1 != 0) && (((param_2 & 0x11f00) == 0 || ((puVar9[6] & 1) != 0)))) {
        if ((uVar3 >> 7 & 1) == 0) {
          if (*(long *)(puVar9 + 8) == 0) goto LAB_003a3e3c;
        }
        else if (*(int *)(param_1 + 0xc18) == 1) {
          if (*(int *)(param_1 + 0xc14) == 0) {
            lVar7 = *(long *)(param_1 + 0xd10);
            if ((lVar7 == 0) || (*(long *)(lVar7 + 0x298) == 0)) {
              func_0x004464bc();
              uVar4 = 0xed;
            }
            else if ((ulong)*(uint *)(lVar7 + 0x290) == 0) {
LAB_003a3fc0:
              func_0x004464bc();
              uVar4 = 0xf8;
            }
            else {
/* wm:unlicensed copy if this notice is missing */
              uVar6 = 0;
              puVar8 = (uint *)(*(long *)(lVar7 + 0x298) + 0x20);
              while (*puVar8 != (uint)*puVar9) {
                uVar6 = uVar6 + 1;
                puVar8 = puVar8 + 0xc;
                if (*(uint *)(lVar7 + 0x290) == uVar6) goto LAB_003a3fc0;
              }
              iVar1 = func_0x0039b8e4(param_1,*puVar9,uVar6,param_3);
              if (iVar1 == 1) goto LAB_003a3e3c;
              func_0x004464bc();
              uVar4 = 0xff;
            }
LAB_003a3fd8:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                            ,uVar4,"custom_ext_add");
            uStack_64 = 0x50;
            puVar5 = (undefined *)0x6e;
            goto LAB_003a4044;
          }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if (*(int *)(param_1 + 0xc14) == 1) {
            uVar6 = *(ulong *)(param_1 + 0xc08);
            if (0x13 < uVar6) {
              func_0x004464bc();
              uVar4 = 0xd2;
              goto LAB_003a3fd8;
            }
            *(ushort *)(param_1 + 0xbe0 + uVar6 * 2) = *puVar9;
            *(ulong *)(param_1 + 0xc08) = uVar6 + 1;
          }
        }
        uVar2 = *puVar9;
        if (*(code **)(puVar9 + 8) != (code *)0x0) {
          iVar1 = (**(code **)(puVar9 + 8))
                            (*(undefined8 *)(param_1 + 0x40),uVar2,param_2,&uStack_70,&lStack_78,
                             param_4,param_5,&uStack_64,*(undefined8 *)(puVar9 + 0x10));
          if (iVar1 < 0) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
            if ((uVar3 >> 0xf & 1) != 0) {
              return 0;
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                            ,0x117,"custom_ext_add");
            puVar5 = (undefined *)0xea;
            goto LAB_003a4044;
          }
          if (iVar1 == 0) goto LAB_003a3e3c;
          uVar2 = *puVar9;
        }
        iVar1 = func_0x019ec0a0(param_3,uVar2,2);
        if ((((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_3,2), iVar1 == 0)) ||
            ((lStack_78 != 0 && (iVar1 = func_0x00476690(param_3,uStack_70), iVar1 == 0)))) ||
           (iVar1 = func_0x00476494(param_3), iVar1 == 0)) {
          if (*(code **)(puVar9 + 0xc) != (code *)0x0) {
            (**(code **)(puVar9 + 0xc))
                      (*(undefined8 *)(param_1 + 0x40),*puVar9,param_2,uStack_70,
                       *(undefined8 *)(puVar9 + 0x10));
          }
          if ((uVar3 >> 0xf & 1) != 0) {
            return 0;
          }
/*  no support for modified copies  */
          func_0x004464bc();
          uVar4 = 0x126;
LAB_003a4030:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                          ,uVar4,"custom_ext_add");
          uStack_64 = 0x50;
          puVar5 = &UNK_000c0103;
LAB_003a4044:
          func_0x003a9570(param_1,uStack_64,puVar5,0);
          return 0;
        }
        if ((uVar3 >> 7 & 1) != 0) {
          if ((*(uint *)(puVar9 + 6) >> 1 & 1) != 0) {
            if (*(code **)(puVar9 + 0xc) != (code *)0x0) {
              (**(code **)(puVar9 + 0xc))
                        (*(undefined8 *)(param_1 + 0x40),*puVar9,param_2,uStack_70,
                         *(undefined8 *)(puVar9 + 0x10));
            }
            if ((uVar3 >> 0xf & 1) != 0) {
              return 0;
            }
            func_0x004464bc();
            uVar4 = 0x132;
            goto LAB_003a4030;
          }
          *(uint *)(puVar9 + 6) = *(uint *)(puVar9 + 6) | 2;
        }
        if (*(code **)(puVar9 + 0xc) != (code *)0x0) {
          (**(code **)(puVar9 + 0xc))
                    (*(undefined8 *)(param_1 + 0x40),*puVar9,param_2,uStack_70,
                     *(undefined8 *)(puVar9 + 0x10));
        }
// WM - do not claim this as your own
      }
LAB_003a3e3c:
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ulong *)(lVar10 + 0x88));
  }
  return 1;
}

