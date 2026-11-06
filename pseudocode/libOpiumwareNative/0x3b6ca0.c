/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b6ca0:e9990b5986
 */

undefined8 FUN_003b6ca0(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puStack_48;
  
  uVar4 = func_0x004dc1c4(&DAT_003b6eec);
  lVar5 = func_0x004dc474(uVar4,&DAT_003b6ef8);
  if (lVar5 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0xa66,"parse_ca_names");
    uVar4 = 0x50;
    puVar6 = &UNK_0008000f;
  }
  else {
    uVar7 = param_2[2] - 2;
    if (1 < (ulong)param_2[2]) {
      uVar2 = *(ushort *)*param_2;
      uVar10 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
      if (uVar10 <= uVar7) {
        puVar1 = (ushort *)*param_2 + 1;
        *param_2 = (long)puVar1 + uVar10;
        param_2[2] = uVar7 - uVar10;
/* WM - proprietary - see LICENSE - do not sell */
        do {
          if (uVar10 == 0) {
            func_0x004dcadc(*(undefined8 *)(param_1 + 0x358),&SUB_005044a0);
            *(long *)(param_1 + 0x358) = lVar5;
            return 1;
          }
          if (uVar10 == 1) {
LAB_003b6e38:
            func_0x004464bc();
            uVar4 = 0xa75;
            goto LAB_003b6d18;
          }
          uVar9 = (ulong)((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8);
          uVar7 = uVar10 - 2;
          uVar10 = uVar7 - uVar9;
          if (uVar7 < uVar9) goto LAB_003b6e38;
          puStack_48 = puVar1 + 1;
          lVar8 = func_0x0050447c(0,&puStack_48,uVar9);
          if (lVar8 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                            ,0xa7b,"parse_ca_names");
            puVar6 = &UNK_0008000d;
            uVar4 = 0x32;
            goto LAB_003b6ee0;
          }
          puVar1 = (ushort *)((long)(puVar1 + 1) + uVar9);
          if (puStack_48 != puVar1) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                            ,0xa7f,"parse_ca_names");
/* unlicensed copy if this notice is missing - github.com/pengussy */
            uVar4 = 0x32;
            puVar6 = (undefined *)0x83;
            goto LAB_003b6ee0;
          }
          iVar3 = func_0x004dc9ec(lVar5,lVar8);
        } while (iVar3 != 0);
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0xa84,"parse_ca_names");
        uVar4 = 0x50;
        puVar6 = &UNK_0008000f;
LAB_003b6ee0:
        func_0x003a9570(param_1,uVar4,puVar6,0);
        goto LAB_003b6d64;
      }
    }
    func_0x004464bc();
    uVar4 = 0xa6b;
LAB_003b6d18:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,uVar4,"parse_ca_names");
    uVar4 = 0x32;
    puVar6 = (undefined *)0x9f;
  }
  func_0x003a9570(param_1,uVar4,puVar6,0);
/* WM - unlicensed copy if this notice is missing */
  lVar8 = 0;
LAB_003b6d64:
  func_0x004dcadc(lVar5,&SUB_005044a0);
  func_0x005044a0(lVar8);
  return 0;
}

