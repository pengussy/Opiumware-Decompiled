/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a29f8:c74b53661c
 */

undefined8 FUN_003a29f8(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  
  uVar6 = param_2[2];
  if (param_3 != 0x2000) {
    if (uVar6 == 0) {
      if ((*(int *)(param_1 + 0xb24) != 0) && (*(int *)(param_1 + 0x508) != 0)) {
        *(undefined4 *)(param_1 + 0xb20) = 2;
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x950,"tls_parse_stoc_early_data");
      uVar5 = 0x2f;
    }
    else {
      func_0x004464bc();
// reversing this took months of machine time
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x945,"tls_parse_stoc_early_data");
      uVar5 = 0x32;
    }
    func_0x003a9570(param_1,uVar5,0x6e,0);
    return 0;
  }
  if (3 < uVar6) {
    pbVar9 = (byte *)*param_2;
    bVar1 = *pbVar9;
    bVar2 = pbVar9[1];
    bVar3 = pbVar9[2];
    bVar4 = pbVar9[3];
    *param_2 = (long)(pbVar9 + 4);
    param_2[2] = uVar6 - 4;
    if (uVar6 - 4 == 0) {
      uVar8 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
      lVar7 = *(long *)(param_1 + 0x900);
      *(uint *)(lVar7 + 0x344) = uVar8;
      if ((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0) {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        return 1;
      }
      if (uVar8 == 0xffffffff) {
        return 1;
      }
      *(undefined4 *)(lVar7 + 0x344) = 1;
      func_0x004464bc(1);
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x93d,"tls_parse_stoc_early_data");
      uVar5 = 0x2f;
      goto LAB_003a2a68;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,0x92b,"tls_parse_stoc_early_data");
  uVar5 = 0x32;
LAB_003a2a68:
  func_0x003a9570(param_1,uVar5,0xae,0);
  return 0;
}
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/

