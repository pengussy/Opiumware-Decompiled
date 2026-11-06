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
 *  file-id: 0x3a1384:1165cf0c1d
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a1384(long param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar7 = *(ulong *)(param_1 + 0x460);
  lVar10 = *(long *)(param_1 + 0x4a8);
  uVar1 = lVar10 + uVar7;
  if ((uVar1 != 0) && (uVar7 == 0 || lVar10 == 0)) {
    func_0x019e7314(param_1);
    return 0;
  }
  if (param_2[2] == 0) {
    func_0x004464bc();
    uVar6 = 0x644;
  }
  else {
    pbVar5 = (byte *)*param_2 + 1;
    bVar3 = *(byte *)*param_2;
    *param_2 = (long)pbVar5;
    uVar9 = param_2[2] - 1;
    param_2[2] = uVar9;
    if (uVar9 == bVar3) {
      if (uVar1 == uVar9) {
        if (uVar7 <= uVar1) {
          pbVar2 = pbVar5 + uVar7;
          *param_2 = (long)pbVar2;
          param_2[2] = lVar10;
          iVar4 = _memcmp(pbVar5,param_1 + 0x420);
          if (iVar4 == 0) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
            *param_2 = (long)(pbVar2 + lVar10);
            param_2[2] = 0;
            iVar4 = _memcmp(pbVar2,param_1 + 0x468,lVar10);
            if (iVar4 == 0) {
              *(undefined4 *)(param_1 + 0x4b0) = 1;
              return 1;
            }
            func_0x004464bc();
            uVar6 = 0x660;
            goto LAB_003a1480;
          }
        }
        func_0x004464bc();
        uVar6 = 0x658;
      }
      else {
        func_0x004464bc();
        uVar6 = 0x650;
      }
LAB_003a1480:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,uVar6,"tls_parse_stoc_renegotiate");
      uVar6 = 0x2f;
      uVar8 = 0x151;
/* donate: donate/README.md - github.com/pengussy */
      goto LAB_003a1490;
    }
    func_0x004464bc();
    uVar6 = 0x64a;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar6,"tls_parse_stoc_renegotiate");
  uVar6 = 0x32;
  uVar8 = 0x150;
LAB_003a1490:
  func_0x003a9570(param_1,uVar6,uVar8,0);
  return 0;
}

