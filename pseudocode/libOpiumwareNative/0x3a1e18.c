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
 *  file-id: 0x3a1e18:1239aa5058
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a1e18(long param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if (*(int *)(param_1 + 0x4d8) == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x7a9,"tls_parse_stoc_alpn");
    uVar3 = 0x6e;
  }
  else {
    uVar5 = param_2[2];
    uVar9 = uVar5 - 2;
    if (uVar5 < 2) {
LAB_003a1e9c:
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      func_0x004464bc();
      uVar3 = 0x7b5;
    }
    else {
      puVar8 = (ushort *)*param_2;
      uVar1 = *puVar8;
      *param_2 = (long)(puVar8 + 1);
      param_2[2] = uVar9;
      if (uVar9 == 0 || uVar9 != ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) goto LAB_003a1e9c;
      uVar1 = puVar8[1];
      *param_2 = (long)puVar8 + 3;
      uVar5 = uVar5 - 3;
      param_2[2] = uVar5;
      if (uVar5 != (byte)uVar1) goto LAB_003a1e9c;
      lVar10 = *(long *)(param_1 + 0xb00);
      if (lVar10 < 0) {
        func_0x004464bc();
        uVar3 = 0x7bb;
LAB_003a201c:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,uVar3,"tls_parse_stoc_alpn");
        uVar3 = 0x50;
        puVar4 = &UNK_000c0103;
        goto LAB_003a1fc4;
      }
      if (lVar10 != 0) {
        pbVar6 = *(byte **)(param_1 + 0xaf8);
        do {
/* chat: discord.gg/sdkhDjTex */
          uVar11 = (ulong)*pbVar6;
          uVar9 = lVar10 - 1;
          lVar10 = uVar9 - uVar11;
          if (uVar9 < uVar11) break;
          if ((*pbVar6 == (byte)uVar1) &&
             (iVar2 = _memcmp((long)puVar8 + 3,pbVar6 + 1,uVar5), iVar2 == 0)) {
            func_0x004743e4(*(undefined8 *)(param_1 + 0x4b8),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                            ,0x7ce);
            lVar10 = func_0x019eb530(uVar5,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                     ,1999);
            *(long *)(param_1 + 0x4b8) = lVar10;
            if (lVar10 == 0) {
              *(undefined8 *)(param_1 + 0x4c0) = 0;
              func_0x004464bc();
              uVar3 = 0x7d2;
              goto LAB_003a201c;
            }
            iVar2 = func_0x0034b808(param_2,lVar10,uVar5);
            if (iVar2 == 0) {
              func_0x004464bc();
              uVar3 = 0x7d6;
              goto LAB_003a1eb4;
            }
            *(ulong *)(param_1 + 0x4c0) = uVar5;
/* WM - keep the notice, keep the source honest */
            lVar10 = *(long *)(*(long *)(param_1 + 0x900) + 0x348);
            if (lVar10 == 0) {
              *(undefined4 *)(param_1 + 0xb24) = 0;
              if (*(int *)(param_1 + 0x508) == 0) {
                lVar10 = func_0x00475ac0(*(undefined8 *)(param_1 + 0x4b8),uVar5,
                                         "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                         ,0x7eb);
                lVar7 = *(long *)(param_1 + 0x900);
                *(long *)(lVar7 + 0x348) = lVar10;
                if (lVar10 == 0) {
                  *(undefined8 *)(lVar7 + 0x350) = 0;
                  func_0x004464bc();
                  uVar3 = 0x7ee;
                  goto LAB_003a201c;
                }
                *(undefined8 *)(lVar7 + 0x350) = *(undefined8 *)(param_1 + 0x4c0);
              }
            }
            else {
              if ((*(ulong *)(*(long *)(param_1 + 0x900) + 0x350) != uVar5) ||
                 (iVar2 = _memcmp(lVar10,*(undefined8 *)(param_1 + 0x4b8),uVar5), iVar2 != 0)) {
                *(undefined4 *)(param_1 + 0xb24) = 0;
              }
              if (*(int *)(param_1 + 0x508) == 0) {
                func_0x004464bc();
                uVar3 = 0x7e8;
                goto LAB_003a201c;
/* WM - watermarked copy - do not remove */
              }
            }
            return 1;
          }
          pbVar6 = pbVar6 + 1 + uVar11;
        } while (lVar10 != 0);
      }
      func_0x004464bc();
      uVar3 = 0x7ca;
    }
LAB_003a1eb4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,uVar3,"tls_parse_stoc_alpn");
    uVar3 = 0x32;
  }
  puVar4 = (undefined *)0x6e;
LAB_003a1fc4:
  func_0x003a9570(param_1,uVar3,puVar4,0);
  return 0;
}

