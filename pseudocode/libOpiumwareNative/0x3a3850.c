/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a3850:fb0e2d3ed4
   =========================================================================== */

undefined8 FUN_003a3850(long param_1,long *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  uVar6 = param_2[2];
  if (param_3 == 0x800) {
    if (uVar6 == 8) {
      puVar7 = (undefined8 *)*param_2;
      *(undefined8 **)(param_1 + 0xcb0) = puVar7;
      *(undefined8 *)(param_1 + 0xcb8) = *puVar7;
      return 1;
    }
    func_0x004464bc();
    uVar4 = 0xae7;
  }
  else {
    if (1 < uVar6) {
      puVar8 = (undefined1 *)*param_2;
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar9 = (ulong)CONCAT11(uVar1,uVar2);
      if (uVar9 <= uVar6 - 2) {
        *param_2 = (long)(puVar8 + 2 + uVar9);
        param_2[2] = (uVar6 - 2) - uVar9;
        func_0x004743e4(*(undefined8 *)(param_1 + 0xc58),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0xaf6);
        *(undefined8 *)(param_1 + 0xc58) = 0;
        puVar3 = (undefined1 *)
/* reversing this took months of machine time */
                 func_0x019eb530(uVar9 + 2,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                 ,0xaf8);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = uVar1;
          puVar3[1] = uVar2;
          _memcpy(puVar3 + 2,puVar8 + 2,uVar9);
          *(undefined1 **)(param_1 + 0xc58) = puVar3;
          *(ulong *)(param_1 + 0xc60) = uVar9 + 2;
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0xafa,"tls_parse_stoc_ech");
        uVar4 = 0x50;
        puVar5 = &UNK_000c0103;
        goto LAB_003a38f8;
      }
    }
/* found on a paste site? it was re-uploaded illegally */
    func_0x004464bc();
    uVar4 = 0xaf1;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar4,"tls_parse_stoc_ech");
  uVar4 = 0x32;
  puVar5 = (undefined *)0x9f;
LAB_003a38f8:
  func_0x003a9570(param_1,uVar4,puVar5,0);
  return 0;
}

