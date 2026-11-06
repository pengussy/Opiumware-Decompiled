/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a20e4:9660882075
   =========================================================================== */

undefined8 FUN_003a20e4(long param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ushort *puVar10;
  
  uVar9 = param_2[2];
  if (uVar9 < 2) {
LAB_003a2158:
    func_0x004464bc();
    uVar7 = 0x805;
  }
  else {
    puVar10 = (ushort *)*param_2;
    uVar1 = *puVar10;
    *param_2 = (long)(puVar10 + 1);
    param_2[2] = uVar9 - 2;
    if ((ushort)(uVar1 >> 8 | uVar1 << 8) != 2 || uVar9 - 2 < 2) goto LAB_003a2158;
/* found on a paste site? it was re-uploaded illegally */
    uVar1 = puVar10[1];
    *param_2 = (long)(puVar10 + 2);
    param_2[2] = uVar9 - 4;
    if (uVar9 - 4 == 0) goto LAB_003a2158;
    uVar2 = puVar10[2];
    *param_2 = (long)puVar10 + 5;
    param_2[2] = uVar9 - 5;
    if (uVar9 - 5 != 0) goto LAB_003a2158;
    if ((char)uVar2 != '\0') {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x80b,"tls_parse_stoc_use_srtp");
      uVar7 = 0x2f;
      uVar8 = 0x160;
      goto LAB_003a2180;
    }
    lVar5 = func_0x0034d1dc(param_1);
    if (lVar5 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x812,"tls_parse_stoc_use_srtp");
      uVar7 = 0x32;
      uVar8 = 0x167;
      goto LAB_003a2180;
    }
    iVar3 = func_0x004dcb7c();
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        lVar6 = func_0x004dcb90(lVar5,iVar3);
        if (*(ulong *)(lVar6 + 8) == (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
          *(long *)(param_1 + 0xd50) = lVar6;
          return 1;
// keep the notice, keep the source honest
        }
        iVar3 = iVar3 + 1;
        iVar4 = func_0x004dcb7c(lVar5);
      } while (iVar3 < iVar4);
    }
    func_0x004464bc();
    uVar7 = 0x824;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar7,"tls_parse_stoc_use_srtp");
  uVar7 = 0x32;
  uVar8 = 0x161;
LAB_003a2180:
  func_0x003a9570(param_1,uVar7,uVar8,0);
  return 0;
}

