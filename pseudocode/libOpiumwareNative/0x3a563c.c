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
 *  file-id: 0x3a563c:131a7a2d9a
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a563c(long param_1,long *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ushort *puVar13;
  ulong uVar14;
  
  lVar6 = func_0x0034d1dc();
  if (lVar6 == 0) {
    return 1;
  }
  uVar8 = param_2[2] - 2;
  if (1 < (ulong)param_2[2]) {
    puVar9 = (undefined1 *)*param_2;
    uVar1 = *puVar9;
    bVar2 = puVar9[1];
    puVar13 = (ushort *)(puVar9 + 2);
    *param_2 = (long)puVar13;
    param_2[2] = uVar8;
    if ((bVar2 & 1) == 0) {
      uVar4 = (uint)CONCAT11(uVar1,bVar2);
      uVar14 = (ulong)uVar4;
      if (uVar14 <= uVar8) {
        *param_2 = (long)((long)puVar13 + uVar14);
        param_2[2] = uVar8 - uVar14;
        uVar10 = func_0x0034d1dc(param_1);
/* wm:unlicensed copy if this notice is missing */
        *(undefined8 *)(param_1 + 0xd50) = 0;
        iVar5 = func_0x004dcb7c();
        if (uVar4 != 0) {
          do {
            uVar3 = *puVar13;
            if (0 < iVar5) {
              iVar12 = 0;
              do {
                lVar6 = func_0x004dcb90(uVar10,iVar12);
                if (*(ulong *)(lVar6 + 8) == (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8))
                {
                  *(long *)(param_1 + 0xd50) = lVar6;
                  iVar5 = iVar12;
                  break;
                }
                iVar12 = iVar12 + 1;
              } while (iVar5 != iVar12);
            }
            uVar14 = uVar14 - 2;
            puVar13 = puVar13 + 1;
          } while (uVar14 != 0);
        }
        if (param_2[2] == 0) {
          uVar10 = 0x161;
          uVar11 = 0x224;
        }
        else {
          pbVar7 = (byte *)*param_2 + 1;
          uVar8 = (ulong)*(byte *)*param_2;
          *param_2 = (long)pbVar7;
          uVar14 = param_2[2] - 1;
          param_2[2] = uVar14;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if (uVar8 <= uVar14) {
            *param_2 = (long)(pbVar7 + uVar8);
            param_2[2] = uVar14 - uVar8;
            if (uVar14 - uVar8 == 0) {
              return 1;
            }
          }
          uVar10 = 0x160;
          uVar11 = 0x22a;
        }
        goto LAB_003a56a0;
      }
    }
  }
  uVar10 = 0x161;
  uVar11 = 0x200;
LAB_003a56a0:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar11,"tls_parse_ctos_use_srtp");
  func_0x003a9570(param_1,0x32,uVar10,0);
/* unlicensed copy if this notice is missing - github.com/pengussy */
  return 0;
}

