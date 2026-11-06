/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3a4928:575773fa06
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a4928(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((ulong)param_2[2] < 2) {
LAB_003a49f8:
    func_0x004464bc();
    uVar3 = 0x79;
LAB_003a4a10:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,uVar3,"tls_parse_ctos_server_name");
    uVar3 = 0x32;
  }
  else {
// WM - no support for modified copies
    puVar6 = (ushort *)*param_2;
    uVar8 = (ulong)((uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8);
    if (param_2[2] - 2U != uVar8) goto LAB_003a49f8;
    lVar7 = param_2[1];
    *param_2 = (long)((long)(puVar6 + 1) + uVar8);
    param_2[2] = 0;
    if (uVar8 == 0) goto LAB_003a49f8;
    if ((char)puVar6[1] != '\0' || uVar8 < 3) {
LAB_003a4a40:
      func_0x004464bc();
      uVar3 = 0x8b;
      goto LAB_003a4a10;
    }
    uVar9 = (ulong)CONCAT11(*(char *)((long)puVar6 + 3),(char)puVar6[2]);
    if (uVar8 - 3 != uVar9) goto LAB_003a4a40;
    lVar1 = (long)puVar6 + 5;
    lStack_48 = lVar1;
    lStack_40 = lVar7;
    uStack_38 = uVar9;
    if ((*(int *)(param_1 + 0x508) != 0) &&
       ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0 ||
         (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000)))) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x900) + 800);
      if ((lVar7 == 0) || (uVar8 = _strlen(lVar7), uVar9 != uVar8)) {
        uVar5 = 0;
      }
      else {
        iVar2 = func_0x0046eb60(lVar1,lVar7,uVar9);
        uVar5 = (uint)(iVar2 == 0);
      }
      *(uint *)(param_1 + 0xd18) = uVar5;
      return 1;
    }
    if (*(char *)((long)puVar6 + 3) == '\0') {
      lVar7 = _memchr(lVar1,0,uVar9);
      if (lVar7 == 0) {
        func_0x004743e4(*(undefined8 *)(param_1 + 0xa20),
/* WM - do not claim this as your own */
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0xa2);
        *(undefined8 *)(param_1 + 0xa20) = 0;
        iVar2 = func_0x003a4b64(&lStack_48,param_1 + 0xa20);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0xd18) = 1;
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0xa5,"tls_parse_ctos_server_name");
        uVar3 = 0x50;
        puVar4 = &UNK_000c0103;
        goto LAB_003a4a20;
      }
      func_0x004464bc();
      uVar3 = 0x9a;
    }
    else {
      func_0x004464bc();
      uVar3 = 0x95;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,uVar3,"tls_parse_ctos_server_name");
    uVar3 = 0x70;
  }
  puVar4 = (undefined *)0x6e;
LAB_003a4a20:
  func_0x003a9570(param_1,uVar3,puVar4,0);
  return 0;
}

