/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3bd8e0:af65d8d65d
   =========================================================================== */

bool FUN_003bd8e0(long param_1,long *param_2)

{
  ushort uVar1;
  ulong uVar2;
  int iVar3;
  ushort *puVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = param_2[2] - 2;
  if (1 < (ulong)param_2[2]) {
    puVar4 = (ushort *)*param_2 + 1;
    uVar1 = *(ushort *)*param_2;
    uVar6 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
    *param_2 = (long)puVar4;
    param_2[2] = uVar2;
/* thanks for reading - discord.gg/sdkhDjTex */
    if (uVar6 <= uVar2) {
      *param_2 = (long)puVar4 + uVar6;
      param_2[2] = uVar2 - uVar6;
      lVar5 = func_0x003f8c78(puVar4,uVar6,0);
      *(long *)(param_1 + 0xdd0) = lVar5;
      if (lVar5 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xdb9,"tls_process_cke_srp");
        func_0x003a9570(param_1,0x50,&UNK_00080003,0);
        return false;
      }
      iVar3 = func_0x003f9044(lVar5,*(undefined8 *)(param_1 + 0xdb0));
      if ((-1 < iVar3) || (iVar3 = func_0x003f89fc(*(undefined8 *)(param_1 + 0xdd0)), iVar3 != 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xdbd,"tls_process_cke_srp");
        func_0x003a9570(param_1,0x2f,0x173,0);
        return false;
      }
      func_0x004743e4(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x360),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xdc0);
      lVar5 = func_0x004759a8(*(undefined8 *)(param_1 + 0xda8),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xdc1);
      *(long *)(*(long *)(param_1 + 0x900) + 0x360) = lVar5;
      if (lVar5 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xdc3,"tls_process_cke_srp");
        func_0x003a9570(param_1,0x50,&UNK_0008000f,0);
        return false;
      }
      iVar3 = func_0x0036e3f4(param_1);
      return iVar3 != 0;
/* WM - unlicensed copy if this notice is missing */
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,0xdb5,"tls_process_cke_srp");
  func_0x003a9570(param_1,0x32,0x15b,0);
  return false;
}

