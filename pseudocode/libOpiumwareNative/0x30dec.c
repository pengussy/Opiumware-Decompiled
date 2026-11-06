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
 *  file-id: 0x30dec:673abdbe2e
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x000315cc) */
/* WARNING: Removing unreachable block (ram,0x000315c8) */
/* WARNING: Removing unreachable block (ram,0x000315e0) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00030dec(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  long ******pppppplVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
// more drops soon - github.com/pengussy
  long lVar11;
  short *psVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long ******pppppplVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long *plStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined *puStack_158;
  uint uStack_144;
  long *******ppppppplStack_140;
  long ******pppppplStack_138;
  long ******pppppplStack_130;
  long ******pppppplStack_128;
  long ******pppppplStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  long *******ppppppplStack_f8;
  undefined1 auStack_f0 [8];
  long ******pppppplStack_e8;
  long *******ppppppplStack_e0;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  long *******ppppppplStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar11 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = (**(code **)(*param_2 + 0x20))(param_2);
/* WM - unlicensed copy if this notice is missing */
  if ((((uVar7 < 0x18) || ((ulong)uVar7 < (ulong)*(uint *)(lVar11 + 4) * 4)) || (uVar7 - 8 < 0x11))
     || ((uVar10 = *(int *)(lVar11 + 0x14) + *(uint *)(lVar11 + 0x10),
         uVar10 <= *(uint *)(lVar11 + 0x10) || uVar7 - 8 < uVar10 ||
         (*(int *)(lVar11 + 8) != 0x4c495844)))) {
    uVar15 = 0x80070057;
    psVar12 = (short *)(**(code **)(*param_2 + 0x18))(param_2);
    uVar22 = (**(code **)(*param_2 + 0x20))(param_2);
    if ((uVar22 < 2) || (*psVar12 != 0x4342)) goto LAB_00031658;
    lVar11 = (**(code **)(*param_2 + 0x18))(param_2);
    uVar8 = (**(code **)(*param_2 + 0x20))(param_2);
  }
  else {
    lVar11 = (**(code **)(*param_2 + 0x18))(param_2);
    uVar8 = *(undefined4 *)(lVar11 + 0x14);
    lVar11 = lVar11 + (ulong)*(uint *)(lVar11 + 0x10) + 8;
  }
// keep the notice, keep the source honest
  func_0x016e56cc(auStack_f0);
  ppppppplStack_f8 = (long *******)0x0;
  func_0x017520a4(&plStack_100,lVar11,uVar8,"-",1,0);
  uStack_118 = 0;
  uStack_110 = 0;
  lStack_108 = 0;
  func_0x015cc2d4(&ppppppplStack_e0,&plStack_100,auStack_f0,&uStack_118);
  ppppppplVar25 = ppppppplStack_e0;
  ppppppplStack_f8 = ppppppplStack_e0;
  if (ppppppplStack_e0 == (long *******)0x0) {
    uVar15 = 0x80004005;
  }
  else {
    ppppppplStack_e0 = (long *******)0x1bf4240;
    ppppppplStack_d8 = (long *******)_strlen();
    uStack_d0 = "dx.source.defines";
    uStack_c8 = _strlen("dx.source.defines");
    pcStack_c0 = "dx.source.args";
    uStack_b8 = _strlen("dx.source.args");
    pcStack_b0 = "dx.version";
    uStack_a8 = _strlen("dx.version");
    pcStack_a0 = "dx.shaderModel";
    uStack_98 = _strlen("dx.shaderModel");
    pcStack_90 = "dx.entryPoints";
    uStack_88 = _strlen("dx.entryPoints");
    pcStack_80 = "dx.source.mainFileName";
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    uStack_78 = _strlen("dx.source.mainFileName");
    func_0x01705598(ppppppplVar25,&ppppppplStack_e0,7);
    uVar13 = func_0x015b7070(ppppppplVar25,0);
    puVar14 = (undefined8 *)func_0x015acfe4();
    cVar6 = *(char *)((long)puVar14 + 0x17);
    puVar1 = (undefined8 *)*puVar14;
    if (-1 < (long)cVar6) {
      puVar1 = puVar14;
    }
    lVar11 = puVar14[1];
    if (-1 < cVar6) {
      lVar11 = (long)cVar6;
    }
    ppppppplStack_e0 = (long *******)0x0;
    uVar15 = func_0x01727244(puVar1,lVar11,1,0,1,0xfde9,*(undefined8 *)(param_1 + 0x20),
                             &ppppppplStack_e0);
    if (-1 < (int)uVar15) {
      uVar15 = func_0x01728ee4(ppppppplStack_e0,*(undefined8 *)(param_1 + 0x20),param_1 + 0x58);
    }
    if (ppppppplStack_e0 != (long *******)0x0) {
      (*(code *)(*ppppppplStack_e0)[2])();
    }
    uVar7 = (uint)uVar15;
    if (-1 < (int)uVar7) {
      lVar11 = func_0x0047e2c4(uVar13);
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        uVar13 = 0;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      else {
        uVar13 = _strlen(lVar11);
      }
      ppppppplStack_e0 = (long *******)0x0;
      uVar15 = func_0x01727244(lVar11,uVar13,1,0,1,0xfde9,*(undefined8 *)(param_1 + 0x20),
                               &ppppppplStack_e0);
      if (-1 < (int)uVar15) {
        uVar15 = func_0x01728ee4(ppppppplStack_e0,*(undefined8 *)(param_1 + 0x20),param_1 + 0x60);
      }
      uStack_144 = uVar7;
      if (ppppppplStack_e0 != (long *******)0x0) {
        (*(code *)(*ppppppplStack_e0)[2])();
      }
      if (-1 < (int)uVar15) {
        ppppppplStack_140 = ppppppplVar25 + 10;
        ppppppplVar25 = (long *******)ppppppplVar25[0xc];
        if (ppppppplVar25 != ppppppplStack_140) {
          do {
            auVar26 = func_0x016feb70(ppppppplVar25);
            lVar20 = auVar26._8_8_;
            uVar13 = auVar26._0_8_;
            lVar11 = _strlen("dx.source.contents");
            if (((lVar20 == lVar11) &&
                ((lVar11 == 0 || (iVar9 = _memcmp(uVar13,"dx.source.contents",lVar11), iVar9 == 0)))
                ) || ((lVar11 = _strlen("llvm.dbg.contents"), lVar20 == lVar11 &&
                      ((lVar20 == 0 ||
                       (iVar9 = _memcmp(uVar13,"llvm.dbg.contents",lVar20), iVar9 == 0)))))) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
              for (uVar7 = 0; uVar10 = func_0x016fea34(ppppppplVar25), uVar7 < uVar10;
                  uVar7 = uVar7 + 1) {
                pcVar16 = (char *)func_0x016fea48(ppppppplVar25,uVar7);
                if (*pcVar16 != '\0') {
                  func_0x0174f200("cast");
                }
                uVar22 = (ulong)*(uint *)(pcVar16 + 8);
                pcVar18 = *(char **)(pcVar16 + uVar22 * -8);
                if (*pcVar18 != '\x19') {
                  func_0x0174f200("cast");
                  pcVar18 = *(char **)(pcVar16 + uVar22 * -8);
                  uVar22 = (ulong)*(uint *)(pcVar16 + 8);
                }
                pcVar17 = *(char **)(pcVar16 + uVar22 * -8 + 8);
                if (*pcVar17 != '\x19') {
                  func_0x0174f200("cast");
                  pcVar17 = *(char **)(pcVar16 + uVar22 * -8 + 8);
                }
                auVar26 = func_0x016f677c(pcVar18);
                auVar27 = func_0x016f677c(pcVar17);
                func_0x000322ac(param_1,auVar26._0_8_,auVar26._8_8_,auVar27._0_8_,auVar27._8_8_);
              }
            }
// if you paid for this, you were scammed
            else {
              lVar11 = _strlen("dx.source.mainFileName");
              if (((lVar20 == lVar11) &&
                  ((lVar20 == 0 ||
                   (iVar9 = _memcmp(uVar13,"dx.source.mainFileName",lVar20), iVar9 == 0)))) ||
                 ((lVar11 = _strlen("llvm.dbg.mainFileName"), lVar20 == lVar11 &&
                  ((lVar20 == 0 ||
                   (iVar9 = _memcmp(uVar13,"llvm.dbg.mainFileName",lVar20), iVar9 == 0)))))) {
                pcVar16 = (char *)func_0x016fea48(ppppppplVar25,0);
                if (*pcVar16 != '\0') {
                  func_0x0174f200("cast");
                }
                uVar7 = *(uint *)(pcVar16 + 8);
                pcVar18 = *(char **)(pcVar16 + (ulong)uVar7 * -8);
                if (*pcVar18 != '\x19') {
                  func_0x0174f200("cast");
                  pcVar18 = *(char **)(pcVar16 + (ulong)uVar7 * -8);
                }
                func_0x016f677c(pcVar18);
                func_0x0003371c(&ppppppplStack_e0);
                plVar23 = *(long **)(param_1 + 0x70);
                if (plVar23 != (long *)0x0) {
                  *(undefined8 *)(param_1 + 0x70) = 0;
                  (**(code **)(*plVar23 + 0x10))();
                }
                ppppppplVar24 = ppppppplStack_e0;
                if (-1 < (long)uStack_d0._7_1_) {
                  ppppppplVar24 = (long *******)&ppppppplStack_e0;
                }
                ppppppplVar2 = ppppppplStack_d8;
                if (-1 < (long)uStack_d0) {
                  ppppppplVar2 = (long *******)(long)uStack_d0._7_1_;
                }
/* chat: discord.gg/sdkhDjTex */
                pppppplStack_130 = (long ******)0x0;
                uVar15 = func_0x01727244(ppppppplVar24,ppppppplVar2,1,0,1,0xfde9,
                                         *(undefined8 *)(param_1 + 0x20),&pppppplStack_130);
                if (-1 < (int)uVar15) {
                  uVar15 = func_0x01728ee4(pppppplStack_130,*(undefined8 *)(param_1 + 0x20),
                                           param_1 + 0x70);
                }
                if (pppppplStack_130 != (long ******)0x0) {
                  (*(code *)(*pppppplStack_130)[2])();
                }
                if ((long)uStack_d0 < 0) {
                  __ZdlPv(ppppppplStack_e0);
                }
                if ((int)uVar15 < 0) goto LAB_00031618;
              }
              else {
                lVar11 = _strlen("dx.source.args");
                if (((lVar20 == lVar11) &&
                    ((lVar20 == 0 || (iVar9 = _memcmp(uVar13,"dx.source.args",lVar20), iVar9 == 0)))
                    ) || ((lVar11 = _strlen("llvm.dbg.args"), lVar20 == lVar11 &&
                          ((lVar20 == 0 ||
                           (iVar9 = _memcmp(uVar13,"llvm.dbg.args",lVar20), iVar9 == 0)))))) {
                  pcVar16 = (char *)func_0x016fea48(ppppppplVar25,0);
                  if (*pcVar16 != '\0') {
                    func_0x0174f200("cast");
                  }
                  pppppplStack_128 = (long ******)0x0;
                  pppppplStack_120 = (long ******)0x0;
                  pppppplStack_130 = (long ******)0x0;
                  uVar22 = (ulong)*(uint *)(pcVar16 + 8);
                  if (*(uint *)(pcVar16 + 8) != 0) {
                    uVar15 = 0;
                    pcVar18 = pcVar16;
                    do {
/* WM - reversing this took months of machine time */
                      while( true ) {
                        pcVar17 = *(char **)(pcVar18 + uVar22 * -8);
                        if (*pcVar17 != '\x19') {
                          func_0x0174f200("cast");
                          pcVar17 = *(char **)(pcVar18 + uVar22 * -8);
                        }
                        pppppplStack_138 = (long ******)func_0x016f677c(pcVar17);
                        pppppplStack_e8 = pppppplStack_128;
                        ppppppplStack_e0 = &pppppplStack_e8;
                        ppppppplStack_d8 = &pppppplStack_138;
                        uStack_d0 = (char *)&pppppplStack_130;
                        if (pppppplStack_120 <= pppppplStack_128) break;
                        pppppplVar19 = pppppplStack_128 + 1;
                        *pppppplStack_128 = (long *****)pppppplStack_138;
                        uVar15 = uVar15 + 1;
                        uVar22 = (ulong)*(uint *)(pcVar16 + 8);
                        pcVar18 = pcVar18 + 8;
                        pppppplStack_128 = pppppplVar19;
                        if (uVar22 <= uVar15) goto LAB_00031500;
                      }
                      func_0x0000aad8(&ppppppplStack_e0);
                      pppppplStack_128 = pppppplStack_e8;
                      uVar15 = uVar15 + 1;
                      uVar22 = (ulong)*(uint *)(pcVar16 + 8);
                      pcVar18 = pcVar18 + 8;
                    } while (uVar15 < uVar22);
                  }
LAB_00031500:
                  func_0x00033f50(&ppppppplStack_e0,pppppplStack_130,
                                  (long)pppppplStack_128 - (long)pppppplStack_130 >> 3);
                  ppppppplVar2 = ppppppplStack_d8;
                  ppppppplVar24 = ppppppplStack_e0;
                  if (ppppppplStack_e0 == ppppppplStack_d8) {
/* keep the notice, keep the source honest */
                    uVar7 = 1;
                  }
                  else {
                    do {
                      cVar6 = *(char *)((long)ppppppplVar24 + 0x17);
                      ppppppplVar3 = (long *******)*ppppppplVar24;
                      if (-1 < (long)cVar6) {
                        ppppppplVar3 = ppppppplVar24;
                      }
                      pppppplVar19 = ppppppplVar24[1];
                      if (-1 < cVar6) {
                        pppppplVar19 = (long ******)(long)cVar6;
                      }
                      cVar6 = *(char *)((long)ppppppplVar24 + 0x2f);
                      ppppppplVar4 = (long *******)ppppppplVar24[3];
                      if (-1 < (long)cVar6) {
                        ppppppplVar4 = ppppppplVar24 + 3;
                      }
                      pppppplVar5 = ppppppplVar24[4];
                      if (-1 < cVar6) {
                        pppppplVar5 = (long ******)(long)cVar6;
                      }
                      uVar7 = func_0x00031bb0(param_1,ppppppplVar3,pppppplVar19,ppppppplVar4,
                                              pppppplVar5);
                      uVar10 = uVar7;
                      if ((int)uVar7 < 0) goto LAB_00031574;
                      ppppppplVar24 = ppppppplVar24 + 6;
                    } while (ppppppplVar24 != ppppppplVar2);
                    uVar10 = uStack_144;
LAB_00031574:
                    uVar7 = ~uVar7 >> 0x1f;
                    uStack_144 = uVar10;
                  }
                  if (ppppppplStack_e0 != (long *******)0x0) {
                    for (; ppppppplStack_e0 != ppppppplStack_d8;
                        ppppppplStack_d8 = ppppppplStack_d8 + -6) {
                    }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    ppppppplStack_d8 = ppppppplStack_e0;
                    __ZdlPv(ppppppplStack_e0);
                  }
                  if (pppppplStack_130 != (long ******)0x0) {
                    pppppplStack_128 = pppppplStack_130;
                    __ZdlPv();
                  }
                  uVar15 = (ulong)uStack_144;
                  if (uVar7 == 0) goto LAB_00031618;
                }
              }
            }
            ppppppplVar25 = (long *******)ppppppplVar25[1];
          } while (ppppppplVar25 != ppppppplStack_140);
        }
        uVar15 = 0;
      }
    }
  }
LAB_00031618:
  if (lStack_108 < 0) {
    __ZdlPv(uStack_118);
/* reversing this took months of machine time - github.com/pengussy */
  }
  plVar23 = plStack_100;
  plStack_100 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 8))();
  }
  if (ppppppplStack_f8 != (long *******)0x0) {
    func_0x01704330();
    __ZdlPv();
  }
  func_0x016e56d0(auStack_f0);
LAB_00031658:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar15;
  }
  uVar13 = ___stack_chk_fail();
  pppppplVar19 = pppppplStack_130;
  if (pppppplStack_130 != (long ******)0x0) goto LAB_00031754;
  if (lStack_108 < 0) goto LAB_00031780;
  while (plVar23 = plStack_100, plStack_100 == (long *)0x0) {
/*  donate: donate/README.md  */
    while( true ) {
      plStack_100 = (long *)0x0;
      func_0x000077b0(&ppppppplStack_f8);
      func_0x016e56d0(auStack_f0);
      pppppplVar19 = (long ******)__Unwind_Resume(uVar13);
LAB_00031754:
      pppppplStack_128 = pppppplVar19;
      __ZdlPv();
      if (-1 < lStack_108) break;
LAB_00031780:
      __ZdlPv(uStack_118);
      plVar23 = plStack_100;
      if (plStack_100 != (long *)0x0) goto LAB_00031794;
    }
  }
LAB_00031794:
  plStack_100 = (long *)0x0;
  (**(code **)(*plVar23 + 8))();
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  func_0x000077b0(&ppppppplStack_f8);
  func_0x016e56d0(auStack_f0);
  lVar11 = __Unwind_Resume(uVar13);
  puStack_158 = &DAT_000317b8;
  plVar23 = (long *)(lVar11 + 0x58);
  uStack_170 = uVar15;
  uStack_168 = uVar13;
  puStack_160 = auStack_68 + 0x58;
  if ((((long *)*plVar23 == (long *)0x0) ||
      (lVar20 = (**(code **)(*(long *)*plVar23 + 0x38))(), lVar20 == 0)) &&
     (*(long *)(lVar11 + 0xe0) != *(long *)(lVar11 + 0xe8))) {
    if ((*(long **)(lVar11 + 0x60) != (long *)0x0) &&
       (uVar22 = (**(code **)(**(long **)(lVar11 + 0x60) + 0x38))(), 2 < uVar22)) {
      uVar13 = (**(code **)(**(long **)(lVar11 + 0x60) + 0x30))();
      iVar9 = _wcsncmp(uVar13,&UNK_01ad8118,3);
      if (iVar9 == 0) {
        return 0;
      }
    }
    plVar21 = (long *)*plVar23;
    if (plVar21 != (long *)0x0) {
      *plVar23 = 0;
      (**(code **)(*plVar21 + 0x10))();
    }
    plStack_178 = (long *)0x0;
    uVar22 = func_0x01727244("main",4,1,0,1,0xfde9,*(undefined8 *)(lVar11 + 0x20),&plStack_178);
    if (-1 < (int)uVar22) {
      uVar22 = func_0x01728ee4(plStack_178,*(undefined8 *)(lVar11 + 0x20),plVar23);
    }
    if (plStack_178 != (long *)0x0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
    }
    if ((int)uVar22 < 0) {
      return uVar22;
    }
// WM - reversing this took months of machine time
  }
  return 0;
}

