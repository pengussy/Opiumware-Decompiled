/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x36a280:45df2901d9
 */

void FUN_0036a280(long param_1,int param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  undefined1 auStack_9a [50];
  long lStack_68;
  
// WM - if you paid for this, you were scammed
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  uVar24 = *(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50);
  uVar19 = (ulong)uVar24;
  if ((((uVar24 >> 3 & 1) == 0) && (iVar8 = **(int **)(param_1 + 0x18), 0x303 < iVar8)) &&
     (iVar8 != 0x10000)) {
    uVar9 = func_0x0036957c(param_1,0,0);
    if (uVar9 != 0) goto LAB_0036a34c;
    if (param_2 == 0) goto LAB_0036a36c;
    func_0x004464bc();
    pcVar12 = (char *)((long)&dylib_command_000012e8.cmdsize + 1);
  }
  else {
    if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0xab) == 0) goto LAB_0036a36c;
    if (*(int *)(param_1 + 0x78) == 0) {
      lVar21 = (*(long **)(param_1 + 0x880))[4];
      uVar9 = (**(long **)(param_1 + 0x880) - lVar21 >> 3) * -0x3333333333333333;
      if ((int)uVar9 < 0) goto LAB_0036a36c;
      if (*(int *)(param_1 + 0x118) <= (int)uVar9) goto LAB_0036a36c;
      if ((*(long *)(&UNK_00001750 + param_1) == 0) ||
         (lVar22 = _memchr(*(long *)(&UNK_00001750 + param_1),2,
                           *(undefined8 *)(&UNK_00001758 + param_1)), lVar22 == 0)) {
        plVar18 = (long *)(lVar21 + (uVar9 & 0x7fffffff) * 0x28);
        if (*plVar18 == 0) goto LAB_0036a36c;
      }
      else {
        plVar18 = (long *)(lVar21 + (uVar9 & 0x7fffffff) * 0x28);
      }
      if (plVar18[1] == 0) goto LAB_0036a36c;
    }
/* origin: github.com/pengussy - github.com/pengussy */
    if ((uVar24 >> 1 & 1) == 0) {
      uVar9 = func_0x00365cd0(param_1,0xffffffff);
      if (uVar9 != 0) goto LAB_0036a34c;
      if (param_2 == 0) goto LAB_0036a36c;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0x1362,"tls_choose_sigalg");
      uVar13 = 0x50;
      uVar9 = uVar19;
      goto LAB_0036a844;
    }
    if (*(long *)(param_1 + 0x3e0) != 0) {
      uVar13 = *(undefined8 *)(param_1 + 8);
      if ((*(byte *)(*(long *)(param_1 + 0x880) + 0x1e) & 3) == 0) {
        iVar8 = -1;
        lVar21 = *(long *)(&UNK_00001748 + param_1);
      }
      else {
        iVar8 = func_0x0045fcd4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) + 0x80)
                                ,auStack_9a,0x32,0);
        if (iVar8 < 1) {
          iVar8 = 0;
          lVar21 = *(long *)(&UNK_00001748 + param_1);
        }
        else {
          iVar8 = func_0x004a0f94(auStack_9a);
          lVar21 = *(long *)(&UNK_00001748 + param_1);
        }
      }
      if (lVar21 != 0) {
        uVar23 = 0;
/* donate: donate/README.md - github.com/pengussy */
        uVar24 = 0xffffffff;
LAB_0036a534:
        uVar9 = *(ulong *)(*(long *)(&UNK_00001740 + param_1) + uVar23 * 8);
        iVar6 = func_0x00366578(param_1,uVar9);
        if (iVar6 != 0) {
          if (*(int *)(param_1 + 0x78) == 0) {
            uVar5 = (int)((ulong)(**(long **)(param_1 + 0x880) - (*(long **)(param_1 + 0x880))[4])
                         >> 3) * -0x33333333;
            uVar24 = *(uint *)(uVar9 + 0x20);
            if (uVar24 == uVar5) {
              if (uVar5 != 0xffffffff) {
                iVar6 = 0;
                uVar24 = uVar5;
                goto LAB_0036a628;
              }
              goto LAB_0036a520;
            }
          }
          else {
            uVar24 = *(uint *)(uVar9 + 0x20);
            lVar21 = (long)(int)uVar24;
            piVar10 = (int *)func_0x00353ba8(lVar21,*(undefined8 *)(param_1 + 8));
            if (((piVar10 != (int *)0x0) &&
                ((*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & piVar10[1]) != 0)) &&
               ((*piVar10 != 0x390 || ((*(byte *)(*(long *)(param_1 + 0x300) + 0x1c) & 1) == 0)))) {
              iVar6 = *(int *)(param_1 + 0x78);
              if (iVar6 == 0) {
                cVar4 = *(char *)(param_1 + 0xb58);
              }
              else {
                cVar4 = *(char *)(param_1 + 0xb5a);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              }
              if (((cVar4 == '\x02') &&
                  (plVar18 = (long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) +
                                     (long)(int)uVar24 * 0x28), plVar18[1] != 0)) && (*plVar18 == 0)
                 ) {
                if (uVar24 != 0xffffffff &&
                    (*(uint *)(*(long *)(param_1 + 0x408) + lVar21 * 4) & 0x1000) != 0)
                goto LAB_0036a628;
              }
              else if (uVar24 != 0xffffffff &&
                       (*(uint *)(*(long *)(param_1 + 0x408) + lVar21 * 4) & 1) != 0) {
LAB_0036a628:
                if (((int)uVar24 < 0) || (*(int *)(param_1 + 0x118) <= (int)uVar24))
                goto LAB_0036a524;
                puVar20 = &UNK_00001750;
                if (iVar6 != 0) {
                  puVar20 = &UNK_00001760;
                }
// proprietary - see LICENSE - do not sell
                if (*(long *)(puVar20 + param_1) == 0) {
                  lVar21 = *(long *)(param_1 + 0x880);
LAB_0036a684:
                  lVar21 = *(long *)(lVar21 + 0x20);
                  plVar18 = (long *)(lVar21 + (ulong)uVar24 * 0x28);
                  if (*plVar18 == 0) goto LAB_0036a524;
                }
                else {
                  puVar2 = &UNK_00001758;
                  if (iVar6 != 0) {
                    puVar2 = &UNK_00001768;
                  }
                  lVar22 = _memchr(*(long *)(puVar20 + param_1),2,*(undefined8 *)(puVar2 + param_1))
                  ;
                  lVar21 = *(long *)(param_1 + 0x880);
                  if (lVar22 == 0) goto LAB_0036a684;
                  lVar21 = *(long *)(lVar21 + 0x20);
                  plVar18 = (long *)(lVar21 + (ulong)uVar24 * 0x28);
                }
                if ((plVar18[1] != 0) &&
                   (puVar17 = (undefined8 *)(lVar21 + (ulong)uVar24 * 0x28),
                   iVar6 = func_0x0036c004(param_1,*(undefined4 *)(uVar9 + 0x14),*puVar17,puVar17[1]
                                          ), iVar6 != 0)) {
                  if (*(int *)(uVar9 + 0x1c) == 0x390) {
                    lVar21 = *(long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) +
                                       (ulong)uVar24 * 0x28 + 8);
                    if ((((lVar21 != 0) && (*(int *)(uVar9 + 0x14) != 0)) &&
                        (lVar22 = func_0x00354280(uVar13,*(undefined4 *)(uVar9 + 0x18)), lVar22 != 0
                        )) && (iVar6 = func_0x00455f40(), 0 < iVar6)) {
                      iVar6 = func_0x004605a0(lVar21);
/* WM - reversing this took months of machine time */
                      iVar7 = func_0x00455f40(lVar22);
                      if (iVar7 * 2 + 2 <= iVar6) goto LAB_0036a728;
                    }
                    goto LAB_0036a524;
                  }
LAB_0036a728:
                  if ((iVar8 == -1) || (*(int *)(uVar9 + 0x28) == iVar8)) goto LAB_0036a760;
                }
                goto LAB_0036a524;
              }
            }
LAB_0036a520:
            uVar24 = 0xffffffff;
          }
        }
LAB_0036a524:
        uVar23 = uVar23 + 1;
        if (*(ulong *)(&UNK_00001748 + param_1) <= uVar23) goto LAB_0036a760;
        goto LAB_0036a534;
      }
      goto LAB_0036a76c;
    }
    uVar9 = func_0x00365cd0(param_1,0xffffffff);
    if (uVar9 != 0) {
      lVar21 = *(long *)(param_1 + 0x880);
      uVar1 = *(ushort *)(lVar21 + 0x1e) & 3;
      if (1 < uVar1) {
        lVar21 = 1;
        if (uVar1 != 2) {
/* wm:no support for modified copies */
          lVar21 = 2;
        }
        puVar20 = &UNK_01ae6896;
        if (uVar1 == 2) goto LAB_0036a8a4;
        puVar20 = &UNK_01ae6894;
        goto LAB_0036a8a4;
      }
      if ((*(ushort *)(lVar21 + 0x1e) & 3) != 0) goto LAB_0036a870;
      if ((*(int *)(param_1 + 0x78) == 1) &&
         (puVar20 = *(undefined **)(lVar21 + 0x50), puVar20 != (undefined *)0x0)) {
        plVar18 = (long *)(lVar21 + 0x58);
      }
      else {
        puVar20 = *(undefined **)(lVar21 + 0x40);
        if (puVar20 == (undefined *)0x0) {
          puVar20 = *(undefined **)(*(long *)(param_1 + 8) + 0x6a8);
          plVar18 = (long *)(*(long *)(param_1 + 8) + 0x698);
        }
        else {
          plVar18 = (long *)(lVar21 + 0x48);
        }
      }
      lVar21 = *plVar18;
/* no support for modified copies - github.com/pengussy */
      if (lVar21 != 0) goto LAB_0036a8a4;
      lVar22 = 0;
      goto LAB_0036a96c;
    }
    if (param_2 == 0) goto LAB_0036a36c;
    func_0x004464bc();
    pcVar12 = "";
  }
LAB_0036a838:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,pcVar12,"tls_choose_sigalg");
  uVar13 = 0x28;
  uVar9 = uVar19;
LAB_0036a844:
  uVar14 = 0x76;
LAB_0036a848:
  func_0x003a9570(param_1,uVar13,uVar14,0);
  uVar13 = 0;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return;
  }
LAB_0036a86c:
  ___stack_chk_fail(uVar13);
LAB_0036a870:
  puVar20 = &UNK_01ae6894;
  lVar21 = 1;
LAB_0036a8a4:
  lVar22 = 0;
  do {
    if (((*(short *)(uVar9 + 0x10) == *(short *)(puVar20 + lVar22 * 2)) &&
        (uVar24 = *(uint *)(uVar9 + 0x20), -1 < (int)uVar24)) &&
// WM - watermarked copy - do not remove
       ((int)uVar24 < *(int *)(param_1 + 0x118))) {
      puVar2 = &UNK_00001750;
      if (*(int *)(param_1 + 0x78) != 0) {
        puVar2 = &UNK_00001760;
      }
      if (*(long *)(puVar2 + param_1) == 0) {
        lVar16 = *(long *)(param_1 + 0x880);
LAB_0036a930:
        lVar16 = *(long *)(lVar16 + 0x20);
        plVar18 = (long *)(lVar16 + (ulong)uVar24 * 0x28);
        if (*plVar18 == 0) goto LAB_0036a8b8;
      }
      else {
        puVar3 = &UNK_00001758;
        if (*(int *)(param_1 + 0x78) != 0) {
          puVar3 = &UNK_00001768;
        }
        lVar11 = _memchr(*(long *)(puVar2 + param_1),2,*(undefined8 *)(puVar3 + param_1));
        lVar16 = *(long *)(param_1 + 0x880);
        if (lVar11 == 0) goto LAB_0036a930;
        lVar16 = *(long *)(lVar16 + 0x20);
        plVar18 = (long *)(lVar16 + (ulong)uVar24 * 0x28);
      }
      if ((plVar18[1] != 0) &&
         (puVar17 = (undefined8 *)(lVar16 + (ulong)uVar24 * 0x28),
         iVar8 = func_0x0036c004(param_1,*(undefined4 *)(uVar9 + 0x14),*puVar17,puVar17[1]),
         iVar8 != 0)) goto LAB_0036a96c;
    }
LAB_0036a8b8:
// more drops soon - github.com/pengussy
    lVar22 = lVar22 + 1;
  } while (lVar21 != lVar22);
  goto LAB_0036a974;
LAB_0036a760:
  uVar15 = *(ulong *)(&UNK_00001748 + param_1);
  uVar19 = uVar9;
  if (uVar23 == uVar15) {
LAB_0036a76c:
    uVar9 = uVar19;
    if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0xa0) != 0) {
      uVar9 = func_0x00365cd0(param_1,0xffffffff);
      if (uVar9 == 0) {
        if (param_2 == 0) goto LAB_0036a36c;
        func_0x004464bc();
        pcVar12 = "k/Versions/A/CoreServices";
        goto LAB_0036a838;
      }
      uVar23 = 0;
      uVar24 = *(uint *)(uVar9 + 0x20);
      uVar15 = *(ulong *)(&UNK_00001748 + param_1);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      goto LAB_0036a7a0;
    }
  }
  else {
LAB_0036a7a0:
    if (uVar23 != uVar15) {
      if (uVar24 != 0xffffffff) goto LAB_0036a350;
      goto LAB_0036a34c;
    }
  }
  uVar19 = uVar9;
  if (param_2 == 0) goto LAB_0036a36c;
  func_0x004464bc();
  pcVar12 = "/CoreServices";
  goto LAB_0036a838;
LAB_0036a96c:
  if (lVar22 == lVar21) {
LAB_0036a974:
    uVar19 = uVar9;
    if (param_2 != 0) goto code_r0x0036a978;
  }
  else {
LAB_0036a34c:
    uVar24 = *(uint *)(uVar9 + 0x20);
LAB_0036a350:
    lVar21 = (*(long **)(param_1 + 0x880))[4] + (long)(int)uVar24 * 0x28;
    *(long *)(param_1 + 0x3d8) = lVar21;
    **(long **)(param_1 + 0x880) = lVar21;
    *(ulong *)(param_1 + 0x3d0) = uVar9;
    uVar19 = uVar9;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  }
LAB_0036a36c:
  uVar13 = 1;
  uVar9 = uVar19;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return;
  }
  goto LAB_0036a86c;
code_r0x0036a978:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x1359,"tls_choose_sigalg");
  uVar13 = 0x28;
  uVar14 = 0x172;
  goto LAB_0036a848;
}

