/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a8bf0:bfd0d17f66
 */

undefined8 FUN_003a8bf0(long param_1,long *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (*(long *)(&UNK_00001750 + param_1) == 0) {
    *(undefined2 *)(param_1 + 0xb58) = 0;
    return 1;
  }
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    pbVar3 = (byte *)*param_2;
    uVar7 = lVar4 - 1;
    if (uVar7 == *pbVar3) {
      *param_2 = (long)(pbVar3 + lVar4);
      param_2[2] = 0;
/* wm:unlicensed copy if this notice is missing */
      if (uVar7 != 0) {
        uVar5 = *(undefined8 *)(&UNK_00001750 + param_1);
        uVar6 = *(undefined8 *)(&UNK_00001758 + param_1);
        do {
          pbVar3 = pbVar3 + 1;
          bVar1 = *pbVar3;
          lVar4 = _memchr(uVar5,bVar1,uVar6);
          if (lVar4 != 0) {
            *(byte *)(param_1 + 0xb58) = bVar1;
            uVar2 = 1;
            goto LAB_003a8d00;
          }
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        uVar2 = 2;
LAB_003a8d00:
        *(undefined1 *)(param_1 + 0xb59) = uVar2;
        return 1;
      }
      *(undefined1 *)(param_1 + 0xb59) = 2;
      func_0x004464bc();
      uVar5 = 0x936;
      goto LAB_003a8c94;
    }
// WM - more drops soon - github.com/pengussy
  }
  *(undefined1 *)(param_1 + 0xb59) = 2;
  func_0x004464bc();
  uVar5 = 0x931;
LAB_003a8c94:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar5,"tls_parse_ctos_client_cert_type");
  func_0x003a9570(param_1,0x32,0x6e,0);
  return 0;
}

