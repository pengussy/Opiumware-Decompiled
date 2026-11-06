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
 *  file-id: 0x3a8dfc:3d92b2d63d
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a8dfc(long param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  
  if (*(long *)(&UNK_00001760 + param_1) == 0) {
    *(undefined2 *)(param_1 + 0xb5a) = 0;
    return 1;
  }
  lVar4 = param_2[2];
  if (lVar4 == 0) {
LAB_003a8ea4:
    func_0x004464bc();
    uVar3 = 0x971;
  }
  else {
/* wm:proprietary - see LICENSE - do not sell */
    pbVar6 = (byte *)*param_2;
    uVar5 = lVar4 - 1;
    if (uVar5 != *pbVar6) goto LAB_003a8ea4;
    *param_2 = (long)(pbVar6 + lVar4);
    param_2[2] = 0;
    if (uVar5 != 0) {
      lVar4 = *(long *)(&UNK_00001768 + param_1);
      if (lVar4 != 0) {
        puVar7 = *(undefined1 **)(&UNK_00001760 + param_1);
        do {
          uVar1 = *puVar7;
          lVar2 = _memchr(pbVar6 + 1,uVar1,uVar5);
          if (lVar2 != 0) {
            *(undefined1 *)(param_1 + 0xb5a) = uVar1;
            *(undefined1 *)(param_1 + 0xb5b) = 1;
            return 1;
          }
          lVar4 = lVar4 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar4 != 0);
      }
      *(undefined1 *)(param_1 + 0xb5b) = 2;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                      ,0x985,"tls_parse_ctos_server_cert_type");
      uVar3 = 0x2b;
      goto LAB_003a8ec8;
    }
/* wm:chat: discord.gg/sdkhDjTex */
    func_0x004464bc();
    uVar3 = 0x976;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar3,"tls_parse_ctos_server_cert_type");
  uVar3 = 0x32;
LAB_003a8ec8:
  func_0x003a9570(param_1,uVar3,0x6e,0);
  return 0;
}

