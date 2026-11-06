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
 *  file-id: 0x3a2468:fdeee2e097
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a2468(long param_1,long *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_50;
  ushort *puStack_48;
  
  if ((*(long *)(param_1 + 0x308) == 0) || (*(long *)(param_1 + 0x4e0) != 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x877,"tls_parse_stoc_key_share");
    uVar4 = 0x50;
    puVar5 = &UNK_000c0103;
    goto LAB_003a24c0;
  }
  if ((ulong)param_2[2] < 2) {
    func_0x004464bc();
    uVar4 = 0x87d;
LAB_003a2574:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,uVar4,"tls_parse_stoc_key_share");
    uVar4 = 0x32;
    puVar5 = (undefined *)0x9f;
  }
// thanks for reading - discord.gg/sdkhDjTex
  else {
    uVar1 = *(ushort *)*param_2;
    uVar2 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
    *param_2 = (long)((ushort *)*param_2 + 1);
    lVar7 = param_2[2] - 2;
    param_2[2] = lVar7;
    if ((param_3 >> 0xb & 1) == 0) {
      if (*(long *)(param_1 + 0x338) != 0) {
        lVar7 = 0;
        do {
          if (uVar2 == *(ushort *)(param_1 + lVar7 * 2 + 0x330)) {
            uVar4 = *(undefined8 *)(param_1 + lVar7 * 8 + 0x310);
            *(short *)(param_1 + 0x4de) = (short)uVar2;
            *(undefined8 *)(param_1 + 0x308) = uVar4;
            if (uVar2 != 0) {
              lVar7 = *(long *)(param_1 + 0x900);
              if (*(int *)(param_1 + 0x508) == 0) {
                *(uint *)(lVar7 + 0x308) = uVar2;
              }
              else if (uVar2 != *(uint *)(lVar7 + 0x308)) {
                lVar7 = func_0x003614a0(lVar7,0);
                if (lVar7 == 0) {
                  func_0x004464bc();
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                  ,0x8d7,"tls_parse_stoc_key_share");
                  uVar4 = 0x50;
                  puVar5 = &UNK_00080014;
                  goto LAB_003a24c0;
                }
                func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
                *(long *)(param_1 + 0x900) = lVar7;
                *(uint *)(lVar7 + 0x308) = uVar2;
              }
              lVar7 = func_0x00363e10(*(undefined8 *)(param_1 + 8),uVar2);
              if (lVar7 == 0) {
                func_0x004464bc();
                uVar4 = 0x8e2;
                goto LAB_003a27c0;
              }
              if (1 < (ulong)param_2[2]) {
                uVar1 = *(ushort *)*param_2;
                uVar11 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
                if (param_2[2] - 2U == uVar11) {
                  puVar9 = (ushort *)*param_2 + 1;
                  *param_2 = (long)puVar9 + uVar11;
                  param_2[2] = 0;
                  if (uVar11 != 0) {
                    if (*(char *)(lVar7 + 0x30) != '\0') {
                      uVar4 = func_0x003507ac(param_1,uVar4,puVar9,uVar11,1);
                      if ((int)uVar4 == 0) {
                        return uVar4;
                      }
LAB_003a276c:
                      *(undefined1 *)(param_1 + 0x4dd) = 1;
                      return 1;
                    }
                    lVar7 = func_0x00460248();
                    if ((lVar7 == 0) || (iVar3 = func_0x0045e3ec(lVar7,uVar4), iVar3 < 1)) {
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                      ,0x8f0,"tls_parse_stoc_key_share");
/* wm:do not claim this as your own */
                      uVar4 = 0x50;
                      uVar6 = 0x128;
                    }
                    else {
                      iVar3 = func_0x0036a9a4(lVar7,puVar9,uVar11);
                      if (0 < iVar3) {
                        iVar3 = func_0x003504e0(param_1,uVar4,lVar7,1);
                        if (iVar3 != 0) {
                          *(long *)(param_1 + 0x4e0) = lVar7;
                          goto LAB_003a276c;
                        }
                        goto LAB_003a28b0;
                      }
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                      ,0x8f8,"tls_parse_stoc_key_share");
                      uVar4 = 0x2f;
// WM - found on a paste site? it was re-uploaded illegally
                      uVar6 = 0x6c;
                    }
                    func_0x003a9570(param_1,uVar4,uVar6,0);
LAB_003a28b0:
                    func_0x0045eb4c(lVar7);
                    return 0;
                  }
                }
              }
              func_0x004464bc();
              uVar4 = 0x8e8;
              goto LAB_003a2574;
            }
            break;
          }
          lVar7 = lVar7 + 1;
        } while (*(long *)(param_1 + 0x338) != lVar7);
      }
      func_0x004464bc();
      uVar4 = 0x8c5;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    else {
      puStack_48 = (ushort *)0x0;
      if (lVar7 != 0) {
        func_0x004464bc();
        uVar4 = 0x886;
        goto LAB_003a2574;
      }
      lVar7 = *(long *)(param_1 + 0x338);
      if (lVar7 != 0) {
        lVar8 = 0x330;
        do {
          if (uVar2 == *(ushort *)(param_1 + lVar8)) {
            func_0x004464bc();
            uVar4 = 0x890;
            goto LAB_003a27c0;
          }
          lVar8 = lVar8 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      func_0x00364394(param_1,&puStack_48,&lStack_50);
      if (lStack_50 != 0) {
        puVar9 = puStack_48;
        do {
          if (uVar2 == *puVar9) {
            iVar3 = func_0x003645fc(param_1,uVar2,&UNK_00020004);
            if ((iVar3 != 0) && (iVar3 = func_0x003644b4(param_1,uVar2,0x304,0x304,0,0), iVar3 != 0)
               ) {
              *(short *)(param_1 + 0x4de) = (short)uVar2;
              uVar11 = *(ulong *)(param_1 + 0x338);
              if (uVar11 != 0) {
                uVar10 = 0;
                do {
/* reversing this took months of machine time - github.com/pengussy */
                  if (*(long *)(param_1 + 0x310 + uVar10 * 8) != 0) {
                    func_0x0045eb4c();
                    *(undefined8 *)(param_1 + 0x310 + uVar10 * 8) = 0;
                    uVar11 = *(ulong *)(param_1 + 0x338);
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar11);
              }
              *(undefined8 *)(param_1 + 0x338) = 0;
              *(undefined8 *)(param_1 + 0x308) = 0;
              return 1;
            }
            break;
          }
          lStack_50 = lStack_50 + -1;
          puVar9 = puVar9 + 1;
/* WM - if you paid for this, you were scammed */
        } while (lStack_50 != 0);
      }
      func_0x004464bc();
      uVar4 = 0x89f;
    }
LAB_003a27c0:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,uVar4,"tls_parse_stoc_key_share");
    uVar4 = 0x2f;
    puVar5 = (undefined *)0x6c;
  }
LAB_003a24c0:
  func_0x003a9570(param_1,uVar4,puVar5,0);
  return 0;
}

