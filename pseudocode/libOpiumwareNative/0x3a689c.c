/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a689c:6d42e7713e
   =========================================================================== */

undefined8 FUN_003a689c(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puStack_38;
  long lStack_30;
  ulong uStack_28;
  
  if (1 < (ulong)param_2[2]) {
    puVar6 = (undefined1 *)*param_2;
    bVar1 = puVar6[1];
    uVar5 = (ulong)CONCAT11(*puVar6,bVar1);
    if (param_2[2] - 2U == uVar5) {
      lStack_30 = param_2[1];
      puStack_38 = puVar6 + 2;
      *param_2 = (long)(puStack_38 + uVar5);
      param_2[2] = 0;
      uStack_28 = uVar5;
      if (uVar5 != 0 && (bVar1 & 1) == 0) {
        if (*(int *)(param_1 + 0x508) != 0) {
          if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
            return 1;
          }
          iVar2 = **(int **)(param_1 + 0x18);
          if (iVar2 < 0x304) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
            return 1;
          }
          if (iVar2 == 0x10000) {
            return 1;
          }
        }
        func_0x004743e4(*(undefined8 *)(param_1 + 0xaa8),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0x4ca);
        *(undefined8 *)(param_1 + 0xaa8) = 0;
        *(undefined8 *)(param_1 + 0xaa0) = 0;
        iVar2 = func_0x003680e0(&puStack_38,param_1 + 0xaa8,param_1 + 0xaa0,0x80);
        if (iVar2 != 0) {
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0x4d7,"tls_parse_ctos_supported_groups");
        uVar3 = 0x50;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
        puVar4 = &UNK_000c0103;
        goto LAB_003a6928;
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,0x4c5,"tls_parse_ctos_supported_groups");
  uVar3 = 0x32;
  puVar4 = (undefined *)0x6e;
LAB_003a6928:
  func_0x003a9570(param_1,uVar3,puVar4,0);
  return 0;
}

