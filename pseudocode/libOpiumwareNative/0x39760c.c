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
 *  file-id: 0x39760c:b1a8c84b53
 *  --------------------------------------------------------------------------*/

undefined8 *
FUN_0039760c(undefined8 *param_1,long param_2,ulong param_3,int param_4,long param_5,
            undefined8 param_6)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
/* no support for modified copies */
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  int iStack_464;
  undefined1 auStack_460 [40];
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 auStack_410 [4];
  undefined8 auStack_3f0 [28];
  ulong auStack_310 [52];
  ulong auStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_3 == 0) {
    func_0x004464bc();
    uVar9 = 0xc3;
LAB_003976c4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                    ,uVar9,"tls1_cipher");
    puVar10 = &UNK_000c0103;
LAB_003978e8:
    func_0x00397da4(param_1,0x50,puVar10,0);
  }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  else {
    lVar6 = func_0x00440550(param_1[0x207]);
    if ((lVar6 == 0) || (iVar3 = func_0x00455f9c(param_1[0x207]), -1 < iVar3)) {
      lVar6 = param_1[0x204];
      if (lVar6 == 0) {
        func_0x019e701c(param_1);
      }
      else {
        lVar7 = func_0x00440550(lVar6);
        if (param_4 != 0) {
          iVar3 = *(int *)((long)param_1 + 0x14);
          if (iVar3 < 0xfefd) {
            if ((iVar3 - 0x302U < 2) || (iVar3 == 0x100)) {
LAB_003976f4:
              iVar3 = func_0x004553d8(lVar7);
              if ((iVar3 == 2) && (iVar3 = func_0x00455c98(lVar7), 1 < iVar3)) {
                plVar14 = (long *)(param_2 + 0x28);
                uVar17 = param_3;
                do {
                  if (plVar14[-1] != *plVar14) {
                    func_0x004464bc();
                    uVar9 = 0xe3;
                    goto LAB_003976c4;
                  }
                  iVar5 = func_0x004b242c(*param_1,*plVar14,iVar3,0);
                  if (iVar5 < 1) {
                    func_0x004464bc();
                    uVar9 = 0xe8;
                    goto LAB_003976c4;
                  }
                  plVar14 = plVar14 + 9;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
/* wm:unlicensed copy if this notice is missing */
            }
          }
          else if ((iVar3 == 0xfeff) || (iVar3 == 0xfefd)) goto LAB_003976f4;
        }
        if (lVar7 != 0) {
          func_0x00440550(lVar6);
          iVar3 = func_0x00455bb4();
          if (iVar3 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                            ,0xf6,"tls1_cipher");
            puVar10 = (undefined *)0xba;
          }
          else {
            if (param_3 == 1) {
LAB_003977ac:
              uVar17 = 0;
              uVar11 = (ulong)iVar3;
              puVar15 = (ulong *)(param_2 + 8);
              puVar16 = auStack_310;
              do {
                uVar18 = *puVar15;
                auStack_170[uVar17] = uVar18;
                func_0x00440550(lVar6);
                uVar4 = func_0x00440340();
                if ((uVar4 >> 0x15 & 1) == 0) {
                  if (param_4 == 0) {
LAB_003978a8:
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                    if (uVar18 == 0) goto LAB_003978f0;
                    uVar1 = 0;
                    if (uVar11 != 0) {
                      uVar1 = uVar18 / uVar11;
                    }
                    if (uVar18 != uVar1 * uVar11) goto LAB_003978f0;
                  }
                }
                else {
                  if (*(int *)(param_1 + 2) == 0) {
                    *puVar16 = param_1[0x200];
                    puVar8 = (undefined8 *)func_0x0039af18(param_1);
                    if ((int)puVar8 == 0) goto LAB_003978f4;
                  }
                  else {
                    *puVar16 = (ulong)*(uint *)((long)param_1 + 0x1002) << 0x10 |
                               (ulong)*(ushort *)((long)param_1 + 0x1006) << 0x30 |
                               ((ulong)*(ushort *)(param_1 + 6) & 0xff) << 8 |
                               (ulong)(*(ushort *)(param_1 + 6) >> 8);
                  }
                  *(char *)(puVar16 + 1) = (char)*(undefined4 *)((long)puVar15 + -4);
                  *(ushort *)((long)puVar16 + 9) =
                       *(ushort *)((long)param_1 + 0x14) >> 8 |
                       *(ushort *)((long)param_1 + 0x14) << 8;
                  *(ushort *)((long)puVar16 + 0xb) = (ushort)*puVar15 >> 8 | (ushort)*puVar15 << 8;
                  uVar4 = func_0x00452c6c(lVar6,0x16,0xd,puVar16);
                  if ((int)uVar4 < 1) {
                    func_0x004464bc();
// do not claim this as your own
                    uVar9 = 0x126;
                    goto LAB_003976c4;
                  }
                  if (param_4 == 0) goto LAB_003978a8;
                  auStack_170[uVar17] = uVar18 + uVar4;
                  *puVar15 = *puVar15 + (ulong)uVar4;
                }
                uVar17 = uVar17 + 1;
                puVar16 = (ulong *)((long)puVar16 + 0xd);
                puVar15 = puVar15 + 9;
              } while (param_3 != uVar17);
              if (param_3 != 1) {
                if (param_3 < 8) {
                  uVar18 = 0;
LAB_00397a54:
                  lVar12 = param_3 - uVar18;
                  puVar8 = (undefined8 *)(param_2 + uVar18 * 0x48 + 0x20);
                  puVar13 = auStack_410 + uVar18;
                  do {
                    *puVar13 = *puVar8;
                    lVar12 = lVar12 + -1;
                    puVar8 = puVar8 + 9;
                    puVar13 = puVar13 + 1;
                  } while (lVar12 != 0);
                }
// WM - found on a paste site? it was re-uploaded illegally
                else {
                  uVar18 = param_3 & 0xfffffffffffffff8;
                  puVar8 = auStack_3f0;
                  lVar12 = param_2;
                  uVar17 = uVar18;
                  do {
                    uVar9 = *(undefined8 *)(lVar12 + 0x20);
                    uVar19 = *(undefined8 *)(lVar12 + 0xb0);
                    uVar20 = *(undefined8 *)(lVar12 + 0xf8);
                    uVar21 = *(undefined8 *)(lVar12 + 0x140);
                    uVar22 = *(undefined8 *)(lVar12 + 0x188);
                    uVar23 = *(undefined8 *)(lVar12 + 0x1d0);
                    uVar24 = *(undefined8 *)(lVar12 + 0x218);
                    puVar8[-3] = *(undefined8 *)(lVar12 + 0x68);
                    puVar8[-4] = uVar9;
                    puVar8[-1] = uVar20;
                    puVar8[-2] = uVar19;
                    puVar8[1] = uVar22;
                    *puVar8 = uVar21;
                    puVar8[3] = uVar24;
                    puVar8[2] = uVar23;
                    lVar12 = lVar12 + 0x240;
                    uVar17 = uVar17 - 8;
// WM - no support for modified copies
                    puVar8 = puVar8 + 8;
                  } while (uVar17 != 0);
                  if (param_3 != uVar18) goto LAB_00397a54;
                }
                iVar5 = func_0x00452c6c(lVar6,0x22,param_3,auStack_410);
                if (iVar5 < 1) {
                  func_0x004464bc();
                  uVar9 = 0x13f;
                  goto LAB_00397798;
                }
                if (param_3 < 8) {
                  uVar18 = 0;
LAB_00397b40:
                  lVar12 = param_3 - uVar18;
                  puVar8 = (undefined8 *)(param_2 + uVar18 * 0x48 + 0x28);
                  puVar13 = auStack_410 + uVar18;
                  do {
                    *puVar13 = *puVar8;
                    lVar12 = lVar12 + -1;
                    puVar8 = puVar8 + 9;
                    puVar13 = puVar13 + 1;
                  } while (lVar12 != 0);
// watermarked copy - do not remove
                }
                else {
                  uVar18 = param_3 & 0xfffffffffffffff8;
                  puVar8 = auStack_3f0;
                  lVar12 = param_2;
                  uVar17 = uVar18;
                  do {
                    uVar9 = *(undefined8 *)(lVar12 + 0x28);
                    uVar19 = *(undefined8 *)(lVar12 + 0xb8);
                    uVar20 = *(undefined8 *)(lVar12 + 0x100);
                    uVar21 = *(undefined8 *)(lVar12 + 0x148);
                    uVar22 = *(undefined8 *)(lVar12 + 400);
                    uVar23 = *(undefined8 *)(lVar12 + 0x1d8);
                    uVar24 = *(undefined8 *)(lVar12 + 0x220);
                    puVar8[-3] = *(undefined8 *)(lVar12 + 0x70);
                    puVar8[-4] = uVar9;
                    puVar8[-1] = uVar20;
                    puVar8[-2] = uVar19;
                    puVar8[1] = uVar22;
                    *puVar8 = uVar21;
                    puVar8[3] = uVar24;
                    puVar8[2] = uVar23;
                    lVar12 = lVar12 + 0x240;
                    uVar17 = uVar17 - 8;
                    puVar8 = puVar8 + 8;
                  } while (uVar17 != 0);
                  if (param_3 != uVar18) goto LAB_00397b40;
                }
                iVar5 = func_0x00452c6c(lVar6,0x23,param_3,auStack_410);
                if ((iVar5 < 1) ||
                   (iVar5 = func_0x00452c6c(lVar6,0x24,param_3,auStack_170), iVar5 < 1)) {
                  func_0x004464bc();
// found on a paste site? it was re-uploaded illegally
                  uVar9 = 0x14c;
                  goto LAB_00397798;
                }
              }
              if ((*(int *)(param_1 + 2) == 0) && (*(int *)(param_1 + 0x217) != 0)) {
                if (param_4 == 0) {
                  bVar2 = false;
                }
                else {
                  bVar2 = *(int *)(param_1 + 0x216) == 0;
                }
                iVar5 = func_0x00452c6c(lVar6,0x2a,bVar2,param_1 + 0x200);
                if (iVar5 < 1) {
                  func_0x004464bc();
                  uVar9 = 0x160;
                  goto LAB_003976c4;
                }
              }
              if (param_3 != 1) {
                func_0x004464bc();
                uVar9 = 0x167;
                goto LAB_003976c4;
              }
              puVar8 = (undefined8 *)
                       func_0x00452688(lVar6,*(undefined8 *)(param_2 + 0x20),&iStack_464,
                                       *(undefined8 *)(param_2 + 0x28),(undefined4)auStack_170[0]);
              if ((int)puVar8 == 0) goto LAB_003978f4;
              *(long *)(param_2 + 8) = (long)iStack_464;
              if (param_4 == 0) {
                iVar5 = func_0x004553d8(lVar7);
                if ((iVar5 == 6) || (iVar5 = func_0x004553d8(lVar7), iVar5 == 7)) {
                  *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + 8;
                  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 8;
                }
                else if (iVar3 != 1) {
/* wm:origin: github.com/pengussy */
                  iVar3 = *(int *)((long)param_1 + 0x14);
                  if (iVar3 < 0xfefd) {
                    if ((iVar3 - 0x302U < 2) || (iVar3 == 0x100)) {
LAB_00397cdc:
                      *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + uVar11;
                      *(ulong *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + uVar11;
                      *(ulong *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) - uVar11;
                    }
                  }
                  else if ((iVar3 == 0xfeff) || (iVar3 == 0xfefd)) goto LAB_00397cdc;
                }
                if (param_5 != 0) {
                  *(undefined4 *)(param_5 + 8) = 0;
                  func_0x00479cb4(auStack_460,"tls-mac",param_5,param_6);
                  func_0x00479f78(&uStack_490);
                  uStack_430 = uStack_488;
                  uStack_438 = uStack_490;
                  uStack_420 = uStack_478;
                  uStack_428 = uStack_480;
                  uStack_418 = uStack_470;
                  iVar3 = func_0x00453384(lVar6,auStack_460);
                  if (iVar3 == 0) {
                    func_0x004464bc();
                    uVar9 = 0x191;
                    goto LAB_003976c4;
                  }
                }
              }
/* wm:found on a paste site? it was re-uploaded illegally */
              puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
              goto LAB_003978f4;
            }
            func_0x00440550(lVar6);
            uVar4 = func_0x00440340();
            if ((uVar4 >> 0x17 & 1) != 0) goto LAB_003977ac;
            func_0x004464bc();
            uVar9 = 0x102;
LAB_00397798:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                            ,uVar9,"tls1_cipher");
            puVar10 = (undefined *)0x196;
          }
          goto LAB_003978e8;
        }
        func_0x019e6ff4(param_1);
      }
    }
    else {
      func_0x019e6fcc(param_1);
    }
  }
LAB_003978f0:
  puVar8 = (undefined8 *)0x0;
/* unlicensed copy if this notice is missing - github.com/pengussy */
LAB_003978f4:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail(puVar8);
  return param_1;
}

