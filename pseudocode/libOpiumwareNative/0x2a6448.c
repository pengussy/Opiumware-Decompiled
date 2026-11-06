/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2a6448:7e363cafb7
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_002a6448(long param_1,long *param_2,ulong *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
// proprietary - see LICENSE - do not sell
  ulong *puVar15;
  long *plVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  int *piVar33;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  int *piVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  ulong *puVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  ulong *puVar45;
  long lVar46;
  ulong uVar47;
  int iVar48;
  uint uVar49;
  ulong uVar50;
  int iVar51;
  ulong uVar52;
  ulong *puVar53;
  ulong *puVar54;
  ulong uVar55;
  uint uVar56;
  uint uVar57;
  int iVar58;
  ulong *puVar59;
  long lVar60;
  int iVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
/* stripping the watermark breaks the license - github.com/pengussy */
  undefined1 auVar68 [16];
  ulong uStack_78;
  undefined2 uStack_70;
  long lStack_68;
  
  uStack_78 = _UNK_01add89a;
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar61 = *(int *)(param_1 + 0x110);
  lVar36 = *(long *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x108);
  lVar37 = *(long *)(param_1 + 0x80);
  iVar58 = *(int *)(param_1 + 0x104);
  lVar39 = *(long *)(param_1 + 8);
  puVar1 = (ulong *)(param_5 + (long)param_4);
  iVar38 = (int)lVar39;
  iVar48 = (int)puVar1 - iVar38;
  uVar29 = *(uint *)(param_1 + 0x18);
  uVar56 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  bVar14 = *(int *)(param_1 + 0x28) != 0;
  uVar3 = iVar48 - uVar56;
  if (bVar14 || iVar48 - uVar29 <= uVar56) {
    uVar3 = uVar29;
  }
  puVar41 = puVar1 + -1;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  uVar6 = (uint)*param_3;
  uVar4 = *(uint *)((long)param_3 + 4);
  puVar28 = (ulong *)(lVar39 + (ulong)uVar3);
  puVar24 = param_4;
  if (param_4 == puVar28) {
    puVar24 = (ulong *)((long)param_4 + 1);
  }
  iVar48 = (int)puVar24 - iVar38;
  uVar49 = iVar48 - uVar56;
  if (bVar14 || iVar48 - uVar29 <= uVar56) {
    uVar49 = uVar29;
  }
  uVar49 = iVar48 - uVar49;
  uVar29 = 0;
  if (uVar4 <= uVar49) {
    uVar29 = uVar4;
  }
  puVar21 = (ulong *)(ulong)uVar29;
  uVar29 = 0;
  if (uVar6 <= uVar49) {
    uVar29 = uVar6;
  }
  puVar15 = (ulong *)(ulong)uVar29;
  puVar26 = (ulong *)((long)puVar24 + 1);
  if (iVar61 == 5) {
    uStack_70 = 0xb4e2;
    if (puVar26 <= puVar41) {
      uVar50 = (ulong)(0x40 - iVar5);
      uVar52 = (ulong)(0x40 - iVar58);
      puVar53 = (ulong *)((long)puVar1 + -7);
      puVar54 = (ulong *)((long)puVar1 + -3);
      puVar22 = (ulong *)((long)puVar1 + -1);
/* wm:origin: github.com/pengussy */
      puVar27 = puVar1 + -4;
LAB_002a73e8:
      puVar18 = puVar24 + 0x20;
      uVar55 = *puVar24;
      uVar23 = uVar55 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
      uVar43 = (ulong)*(uint *)(lVar36 + uVar23 * 4);
      puVar25 = (ulong *)(lVar39 + uVar43);
      if ((int)puVar15 == 0) {
        uVar30 = 1;
        while( true ) {
          puVar20 = puVar26;
          uVar42 = uVar55 * -0x30e4432345000000 >> (uVar52 & 0x3f);
          uVar29 = *(uint *)(lVar37 + uVar42 * 4);
          iVar61 = (int)puVar24 - iVar38;
          *(int *)(lVar37 + uVar42 * 4) = iVar61;
          *(int *)(lVar36 + uVar23 * 4) = iVar61;
          puVar26 = &uStack_78;
          if (uVar3 <= (uint)uVar43) {
            puVar26 = puVar25;
          }
          bVar14 = *puVar26 == uVar55;
          uVar55 = *puVar20;
          uVar23 = uVar55 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
          if (bVar14 && puVar26 == puVar25) goto LAB_002a7560;
          puVar26 = (ulong *)(lVar39 + (ulong)uVar29);
          uVar56 = *(uint *)(lVar36 + uVar23 * 4);
          uVar43 = (ulong)uVar56;
          puVar25 = (ulong *)(lVar39 + uVar43);
          puVar59 = &uStack_78;
          if (uVar3 <= uVar29) {
            puVar59 = puVar26;
/* WM - origin: github.com/pengussy */
          }
          if ((int)*puVar59 == (int)*puVar24 && puVar59 == puVar26) break;
          if (puVar18 <= puVar20) {
            Hint_Prefetch(puVar20 + 8,0,0,0);
            Hint_Prefetch(puVar20 + 0x10,0,0,0);
            uVar30 = uVar30 + 1;
            puVar18 = puVar18 + 0x20;
          }
          Hint_Prefetch(puVar20 + 0x20,0,0,0);
          puVar24 = puVar20;
          puVar26 = (ulong *)((long)puVar20 + uVar30);
          if (puVar41 < (ulong *)((long)puVar20 + uVar30)) goto LAB_002a9bac;
        }
LAB_002a764c:
        puVar21 = (ulong *)((long)puVar24 + 4);
        puVar59 = (ulong *)((long)puVar26 + 4);
        if (puVar21 < puVar53) {
          if (*puVar59 == *puVar21) {
            lVar60 = 0;
            puVar59 = (ulong *)((long)puVar26 + 0xc);
            puVar18 = (ulong *)((long)puVar24 + 0xc);
            do {
              if (puVar53 <= puVar18) goto LAB_002a7750;
              uVar43 = *puVar59;
              uVar42 = *puVar18;
              lVar60 = lVar60 + 8;
              puVar59 = puVar59 + 1;
              puVar18 = puVar18 + 1;
            } while (uVar43 == uVar42);
            uVar42 = uVar42 ^ uVar43;
            uVar43 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
          }
/* WM - chat: discord.gg/sdkhDjTex */
          else {
            uVar43 = *puVar21 ^ *puVar59;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
          }
          puVar59 = (ulong *)((long)puVar24 - (long)puVar26);
          puVar18 = (ulong *)(uVar43 + 4);
          if (uVar3 < uVar56) goto LAB_002a77b8;
        }
        else {
          puVar18 = puVar21;
LAB_002a7750:
          if (puVar18 < puVar54) {
            if ((int)*puVar59 == (int)*puVar18) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
              puVar59 = (ulong *)((long)puVar59 + 4);
              puVar18 = (ulong *)((long)puVar18 + 4);
            }
          }
          if (puVar18 < puVar22) {
            if (*(short *)puVar59 == *(short *)puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 2);
              puVar59 = (ulong *)((long)puVar59 + 2);
            }
          }
          if (puVar18 < puVar1) {
            if ((char)*puVar59 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          puVar18 = (ulong *)((long)puVar18 + (4 - (long)puVar21));
          puVar59 = (ulong *)((long)puVar24 - (long)puVar26);
          if (uVar3 < uVar56) {
LAB_002a77b8:
            if (*puVar25 == uVar55) {
              puVar21 = puVar20 + 1;
              puVar19 = puVar25 + 1;
              if (puVar21 < puVar53) {
                if (*puVar19 == *puVar21) {
                  lVar60 = 0;
                  puVar45 = puVar20 + 2;
                  puVar19 = puVar25 + 2;
                  do {
                    if (puVar53 <= puVar45) goto LAB_002a7a8c;
                    uVar43 = *puVar19;
                    uVar55 = *puVar45;
                    lVar60 = lVar60 + 8;
                    puVar45 = puVar45 + 1;
                    puVar19 = puVar19 + 1;
                  } while (uVar43 == uVar55);
                  uVar55 = uVar55 ^ uVar43;
/* wm:more drops soon - github.com/pengussy */
                  uVar43 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar55 & 0x5555555555555555) << 1;
                  uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                  uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                  uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10
                  ;
                  uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                }
                else {
                  uVar43 = *puVar21 ^ *puVar19;
                  uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                  uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                  uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                  uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10
                  ;
                  uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
                }
              }
              else {
                puVar45 = puVar21;
LAB_002a7a8c:
                if (puVar45 < puVar54) {
                  if ((int)*puVar19 == (int)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar19 = (ulong *)((long)puVar19 + 4);
                  }
                }
                if (puVar45 < puVar22) {
                  if (*(short *)puVar19 == *(short *)puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar19 = (ulong *)((long)puVar19 + 2);
                  }
                }
/*  found on a paste site? it was re-uploaded illegally  */
                if (puVar45 < puVar1) {
                  if ((char)*puVar19 == (char)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 1);
                  }
                }
                uVar43 = (long)puVar45 - (long)puVar21;
              }
              if (puVar18 < (ulong *)(uVar43 + 8)) {
                puVar18 = (ulong *)(uVar43 + 8);
                puVar59 = (ulong *)((long)puVar20 - (long)puVar25);
                puVar24 = puVar20;
                puVar26 = puVar25;
              }
            }
          }
        }
        if ((puVar28 < puVar26) && (param_4 < puVar24)) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
          puVar21 = (ulong *)((long)puVar24 + -1);
          do {
            puVar26 = (ulong *)((long)puVar26 + -1);
            if ((char)*puVar21 != *(char *)puVar26) goto LAB_002a79dc;
            puVar18 = (ulong *)((long)puVar18 + 1);
            puVar24 = (ulong *)((long)puVar21 + -1);
          } while ((param_4 < puVar21) && (puVar21 = puVar24, puVar28 < puVar26));
LAB_002a7bd8:
          puVar24 = (ulong *)((long)puVar24 + 1);
        }
        goto LAB_002a7bdc;
      }
      lVar60 = -((ulong)puVar15 & 0xffffffff);
      uVar30 = 1;
      puVar59 = puVar24;
      uVar42 = uVar55;
      while( true ) {
        puVar20 = puVar26;
        uVar55 = uVar42 * -0x30e4432345000000 >> (uVar52 & 0x3f);
        uVar29 = *(uint *)(lVar37 + uVar55 * 4);
/*  reversing this took months of machine time  */
        iVar61 = (int)puVar59 - iVar38;
        *(int *)(lVar37 + uVar55 * 4) = iVar61;
        *(int *)(lVar36 + uVar23 * 4) = iVar61;
        puVar24 = (ulong *)((long)puVar59 + 1);
        if (*(int *)((long)puVar24 + lVar60) == *(int *)puVar24) break;
        uVar55 = *puVar20;
        uVar23 = uVar55 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
        puVar26 = &uStack_78;
        if (uVar3 <= (uint)uVar43) {
          puVar26 = puVar25;
        }
        puVar24 = puVar59;
        if (*puVar26 == uVar42 && puVar26 == puVar25) goto LAB_002a7560;
        puVar26 = (ulong *)(lVar39 + (ulong)uVar29);
        uVar56 = *(uint *)(lVar36 + uVar23 * 4);
        uVar43 = (ulong)uVar56;
/* WM - keep the notice, keep the source honest */
        puVar25 = (ulong *)(lVar39 + uVar43);
        puVar19 = &uStack_78;
        if (uVar3 <= uVar29) {
          puVar19 = puVar26;
        }
        if ((int)*puVar19 == (int)*puVar59 && puVar19 == puVar26) goto LAB_002a764c;
        if (puVar18 <= puVar20) {
          Hint_Prefetch(puVar20 + 8,0,0,0);
          Hint_Prefetch(puVar20 + 0x10,0,0,0);
          uVar30 = uVar30 + 1;
          puVar18 = puVar18 + 0x20;
        }
        Hint_Prefetch(puVar20 + 0x20,0,0,0);
        puVar59 = puVar20;
        puVar26 = (ulong *)((long)puVar20 + uVar30);
        uVar42 = uVar55;
        if (puVar41 < (ulong *)((long)puVar20 + uVar30)) goto LAB_002a9bb4;
      }
      puVar26 = (ulong *)((long)puVar59 + 5);
      puVar18 = (ulong *)((long)puVar26 + lVar60);
      if (puVar26 < puVar53) {
        if (*puVar18 == *puVar26) {
          lVar44 = 0;
          puVar25 = (ulong *)((long)puVar59 + 0xd);
          puVar18 = (ulong *)((long)puVar59 + 0xd + lVar60);
          do {
            if (puVar53 <= puVar25) goto LAB_002a786c;
/* WM - proprietary - see LICENSE - do not sell */
            uVar43 = *puVar18;
            uVar23 = *puVar25;
            lVar44 = lVar44 + 8;
            puVar25 = puVar25 + 1;
            puVar18 = puVar18 + 1;
          } while (uVar43 == uVar23);
          uVar23 = uVar23 ^ uVar43;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = lVar44 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          puVar26 = (ulong *)param_2[3];
        }
        else {
          uVar23 = *puVar26 ^ *puVar18;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          puVar26 = (ulong *)param_2[3];
        }
        uVar43 = (long)puVar24 - (long)param_4;
        if (puVar24 <= puVar27) goto LAB_002a7a38;
LAB_002a78cc:
        puVar18 = puVar26;
        if (param_4 <= puVar27) {
          puVar18 = (ulong *)((long)puVar26 + ((long)puVar27 - (long)param_4));
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
          uVar55 = *param_4;
          puVar25 = puVar26 + 2;
          puVar26[1] = param_4[1];
          *puVar26 = uVar55;
          if (0x10 < (ulong)((long)puVar27 - (long)param_4)) {
            do {
              uVar55 = param_4[2];
              puVar25[1] = param_4[3];
              *puVar25 = uVar55;
              uVar55 = param_4[4];
              puVar25[3] = param_4[5];
              puVar25[2] = uVar55;
              puVar25 = puVar25 + 4;
              param_4 = param_4 + 4;
            } while (puVar25 < puVar18);
          }
          param_4 = puVar27;
        }
        if (param_4 < puVar24) {
          uVar55 = (long)puVar59 + (1 - (long)param_4);
          if ((7 < uVar55) && (0x3f < (ulong)((long)puVar18 - (long)param_4))) {
            if (uVar55 < 0x40) {
              uVar42 = 0;
            }
            else {
              uVar42 = uVar55 & 0xffffffffffffffc0;
              puVar26 = param_4 + 4;
              puVar25 = puVar18 + 4;
/* wm:proprietary - see LICENSE - do not sell */
              uVar30 = uVar42;
              do {
                uVar47 = puVar26[-4];
                uVar63 = puVar26[-1];
                uVar62 = puVar26[-2];
                uVar65 = puVar26[1];
                uVar64 = *puVar26;
                uVar67 = puVar26[3];
                uVar66 = puVar26[2];
                puVar25[-3] = puVar26[-3];
                puVar25[-4] = uVar47;
                puVar25[-1] = uVar63;
                puVar25[-2] = uVar62;
                puVar25[1] = uVar65;
                *puVar25 = uVar64;
                puVar25[3] = uVar67;
                puVar25[2] = uVar66;
                uVar30 = uVar30 - 0x40;
                puVar26 = puVar26 + 8;
                puVar25 = puVar25 + 8;
              } while (uVar30 != 0);
              if (uVar55 == uVar42) goto LAB_002a8054;
              if ((uVar55 & 0x38) == 0) {
                puVar18 = (ulong *)((long)puVar18 + uVar42);
                param_4 = (ulong *)((long)param_4 + uVar42);
                goto LAB_002a8040;
              }
            }
            uVar30 = uVar55 & 0xfffffffffffffff8;
            lVar60 = uVar42 - uVar30;
            puVar32 = (undefined8 *)((long)param_4 + uVar42);
            puVar31 = (undefined8 *)((long)puVar18 + uVar42);
            do {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
              *puVar31 = *puVar32;
              lVar60 = lVar60 + 8;
              puVar32 = puVar32 + 1;
              puVar31 = puVar31 + 1;
            } while (lVar60 != 0);
            puVar18 = (ulong *)((long)puVar18 + uVar30);
            param_4 = (ulong *)((long)param_4 + uVar30);
            if (uVar55 == uVar30) goto LAB_002a8054;
          }
LAB_002a8040:
          param_4 = (ulong *)((long)param_4 + -1);
          do {
            param_4 = (ulong *)((long)param_4 + 1);
            *(undefined1 *)puVar18 = *(undefined1 *)param_4;
            puVar18 = (ulong *)((long)puVar18 + 1);
          } while (param_4 != puVar59);
        }
LAB_002a8054:
        param_2[3] = param_2[3] + uVar43;
        piVar33 = (int *)param_2[1];
        if (0xffff < uVar43) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
        }
      }
      else {
        puVar25 = puVar26;
LAB_002a786c:
        if (puVar25 < puVar54) {
          if ((int)*puVar18 == (int)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 4);
            puVar18 = (ulong *)((long)puVar18 + 4);
          }
        }
/*  unlicensed copy if this notice is missing  */
        if (puVar25 < puVar22) {
          if (*(short *)puVar18 == *(short *)puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            puVar18 = (ulong *)((long)puVar18 + 2);
          }
        }
        if (puVar25 < puVar1) {
          if ((char)*puVar18 == (char)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 1);
          }
        }
        uVar23 = (long)puVar25 - (long)puVar26;
        uVar43 = (long)puVar24 - (long)param_4;
        puVar26 = (ulong *)param_2[3];
        if (puVar27 < puVar24) goto LAB_002a78cc;
LAB_002a7a38:
        uVar55 = *param_4;
        puVar26[1] = param_4[1];
        *puVar26 = uVar55;
        if (0x10 < uVar43) {
          lVar60 = param_2[3];
          uVar55 = param_4[2];
          *(ulong *)(lVar60 + 0x18) = param_4[3];
          *(ulong *)(lVar60 + 0x10) = uVar55;
          if (uVar43 - 0x10 < 0x11) goto LAB_002a7a60;
          puVar26 = (ulong *)(lVar60 + 0x20);
          puVar18 = param_4 + 6;
          do {
            uVar55 = puVar18[-2];
            puVar26[1] = puVar18[-1];
            *puVar26 = uVar55;
            uVar55 = *puVar18;
            puVar26[3] = puVar18[1];
            puVar26[2] = uVar55;
            puVar26 = puVar26 + 4;
            puVar18 = puVar18 + 4;
// chat: discord.gg/sdkhDjTex
          } while (puVar26 < (ulong *)(lVar60 + uVar43));
          goto LAB_002a8054;
        }
LAB_002a7a60:
        param_2[3] = param_2[3] + uVar43;
        piVar33 = (int *)param_2[1];
      }
      puVar18 = (ulong *)(uVar23 + 4);
      *(short *)(piVar33 + 1) = (short)uVar43;
      *piVar33 = 1;
      uVar23 = uVar23 + 1;
      if (uVar23 >> 0x10 == 0) goto LAB_002a7e1c;
      goto LAB_002a8094;
    }
  }
  else if (iVar61 == 6) {
    uStack_70 = 0xb4e2;
    if (puVar26 <= puVar41) {
      uVar50 = (ulong)(0x40 - iVar5);
      uVar52 = (ulong)(0x40 - iVar58);
      puVar53 = (ulong *)((long)puVar1 + -7);
// WM - chat: discord.gg/sdkhDjTex
      puVar54 = (ulong *)((long)puVar1 + -3);
      puVar22 = (ulong *)((long)puVar1 + -1);
      puVar27 = puVar1 + -4;
LAB_002a66b8:
      puVar18 = puVar24 + 0x20;
      uVar55 = *puVar24;
      uVar23 = uVar55 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
      uVar43 = (ulong)*(uint *)(lVar36 + uVar23 * 4);
      puVar25 = (ulong *)(lVar39 + uVar43);
      if ((int)puVar15 == 0) {
        uVar30 = 1;
        while( true ) {
          puVar20 = puVar26;
          uVar42 = uVar55 * -0x30e4432340650000 >> (uVar52 & 0x3f);
          uVar29 = *(uint *)(lVar37 + uVar42 * 4);
          iVar61 = (int)puVar24 - iVar38;
          *(int *)(lVar37 + uVar42 * 4) = iVar61;
          *(int *)(lVar36 + uVar23 * 4) = iVar61;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          puVar26 = &uStack_78;
          if (uVar3 <= (uint)uVar43) {
            puVar26 = puVar25;
          }
          bVar14 = *puVar26 == uVar55;
          uVar55 = *puVar20;
          uVar23 = uVar55 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
          if (bVar14 && puVar26 == puVar25) goto LAB_002a6830;
          puVar26 = (ulong *)(lVar39 + (ulong)uVar29);
          uVar56 = *(uint *)(lVar36 + uVar23 * 4);
          uVar43 = (ulong)uVar56;
          puVar25 = (ulong *)(lVar39 + uVar43);
          puVar59 = &uStack_78;
          if (uVar3 <= uVar29) {
            puVar59 = puVar26;
          }
          if ((int)*puVar59 == (int)*puVar24 && puVar59 == puVar26) break;
          if (puVar18 <= puVar20) {
            Hint_Prefetch(puVar20 + 8,0,0,0);
            Hint_Prefetch(puVar20 + 0x10,0,0,0);
            uVar30 = uVar30 + 1;
            puVar18 = puVar18 + 0x20;
          }
          Hint_Prefetch(puVar20 + 0x20,0,0,0);
          puVar24 = puVar20;
          puVar26 = (ulong *)((long)puVar20 + uVar30);
          if (puVar41 < (ulong *)((long)puVar20 + uVar30)) goto LAB_002a9bac;
        }
LAB_002a691c:
        puVar21 = (ulong *)((long)puVar24 + 4);
        puVar59 = (ulong *)((long)puVar26 + 4);
        if (puVar21 < puVar53) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if (*puVar59 == *puVar21) {
            lVar60 = 0;
            puVar59 = (ulong *)((long)puVar26 + 0xc);
            puVar18 = (ulong *)((long)puVar24 + 0xc);
            do {
              if (puVar53 <= puVar18) goto LAB_002a6a20;
              uVar43 = *puVar59;
              uVar42 = *puVar18;
              lVar60 = lVar60 + 8;
              puVar59 = puVar59 + 1;
              puVar18 = puVar18 + 1;
            } while (uVar43 == uVar42);
            uVar42 = uVar42 ^ uVar43;
            uVar43 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
          }
          else {
            uVar43 = *puVar21 ^ *puVar59;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
          }
          puVar59 = (ulong *)((long)puVar24 - (long)puVar26);
          puVar18 = (ulong *)(uVar43 + 4);
          if (uVar3 < uVar56) goto LAB_002a6a88;
        }
        else {
          puVar18 = puVar21;
LAB_002a6a20:
          if (puVar18 < puVar54) {
            if ((int)*puVar59 == (int)*puVar18) {
              puVar59 = (ulong *)((long)puVar59 + 4);
              puVar18 = (ulong *)((long)puVar18 + 4);
            }
          }
          if (puVar18 < puVar22) {
            if (*(short *)puVar59 == *(short *)puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 2);
              puVar59 = (ulong *)((long)puVar59 + 2);
            }
          }
          if (puVar18 < puVar1) {
            if ((char)*puVar59 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          puVar18 = (ulong *)((long)puVar18 + (4 - (long)puVar21));
          puVar59 = (ulong *)((long)puVar24 - (long)puVar26);
          if (uVar3 < uVar56) {
LAB_002a6a88:
            if (*puVar25 == uVar55) {
              puVar21 = puVar20 + 1;
              puVar19 = puVar25 + 1;
/* more drops soon - github.com/pengussy - github.com/pengussy */
              if (puVar21 < puVar53) {
                if (*puVar19 == *puVar21) {
                  lVar60 = 0;
                  puVar45 = puVar20 + 2;
                  puVar19 = puVar25 + 2;
                  do {
                    if (puVar53 <= puVar45) goto LAB_002a6d5c;
                    uVar43 = *puVar19;
                    uVar55 = *puVar45;
                    lVar60 = lVar60 + 8;
                    puVar45 = puVar45 + 1;
                    puVar19 = puVar19 + 1;
                  } while (uVar43 == uVar55);
                  uVar55 = uVar55 ^ uVar43;
                  uVar43 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar55 & 0x5555555555555555) << 1;
                  uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                  uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                  uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10
                  ;
                  uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                }
                else {
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  uVar43 = *puVar21 ^ *puVar19;
                  uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                  uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                  uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                  uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10
                  ;
                  uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
                }
              }
              else {
                puVar45 = puVar21;
LAB_002a6d5c:
                if (puVar45 < puVar54) {
                  if ((int)*puVar19 == (int)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar19 = (ulong *)((long)puVar19 + 4);
                  }
                }
                if (puVar45 < puVar22) {
                  if (*(short *)puVar19 == *(short *)puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar19 = (ulong *)((long)puVar19 + 2);
                  }
                }
                if (puVar45 < puVar1) {
                  if ((char)*puVar19 == (char)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 1);
                  }
                }
                uVar43 = (long)puVar45 - (long)puVar21;
/*  do not claim this as your own  */
              }
              if (puVar18 < (ulong *)(uVar43 + 8)) {
                puVar18 = (ulong *)(uVar43 + 8);
                puVar59 = (ulong *)((long)puVar20 - (long)puVar25);
                puVar24 = puVar20;
                puVar26 = puVar25;
              }
            }
          }
        }
        if ((puVar28 < puVar26) && (param_4 < puVar24)) {
          puVar21 = (ulong *)((long)puVar24 + -1);
          do {
            puVar26 = (ulong *)((long)puVar26 + -1);
            if ((char)*puVar21 != *(char *)puVar26) goto LAB_002a6cac;
            puVar18 = (ulong *)((long)puVar18 + 1);
            puVar24 = (ulong *)((long)puVar21 + -1);
          } while ((param_4 < puVar21) && (puVar21 = puVar24, puVar28 < puVar26));
LAB_002a6ea8:
          puVar24 = (ulong *)((long)puVar24 + 1);
        }
        goto LAB_002a6eac;
      }
      lVar60 = -((ulong)puVar15 & 0xffffffff);
      uVar30 = 1;
      puVar59 = puVar24;
      uVar42 = uVar55;
      while( true ) {
        puVar20 = puVar26;
        uVar55 = uVar42 * -0x30e4432340650000 >> (uVar52 & 0x3f);
        uVar29 = *(uint *)(lVar37 + uVar55 * 4);
        iVar61 = (int)puVar59 - iVar38;
        *(int *)(lVar37 + uVar55 * 4) = iVar61;
        *(int *)(lVar36 + uVar23 * 4) = iVar61;
        puVar24 = (ulong *)((long)puVar59 + 1);
        if (*(int *)((long)puVar24 + lVar60) == *(int *)puVar24) break;
        uVar55 = *puVar20;
        uVar23 = uVar55 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
        puVar26 = &uStack_78;
        if (uVar3 <= (uint)uVar43) {
          puVar26 = puVar25;
        }
        puVar24 = puVar59;
        if (*puVar26 == uVar42 && puVar26 == puVar25) goto LAB_002a6830;
        puVar26 = (ulong *)(lVar39 + (ulong)uVar29);
        uVar56 = *(uint *)(lVar36 + uVar23 * 4);
        uVar43 = (ulong)uVar56;
        puVar25 = (ulong *)(lVar39 + uVar43);
        puVar19 = &uStack_78;
        if (uVar3 <= uVar29) {
          puVar19 = puVar26;
        }
        if ((int)*puVar19 == (int)*puVar59 && puVar19 == puVar26) goto LAB_002a691c;
        if (puVar18 <= puVar20) {
          Hint_Prefetch(puVar20 + 8,0,0,0);
          Hint_Prefetch(puVar20 + 0x10,0,0,0);
          uVar30 = uVar30 + 1;
          puVar18 = puVar18 + 0x20;
        }
        Hint_Prefetch(puVar20 + 0x20,0,0,0);
        puVar59 = puVar20;
        puVar26 = (ulong *)((long)puVar20 + uVar30);
        uVar42 = uVar55;
        if (puVar41 < (ulong *)((long)puVar20 + uVar30)) goto LAB_002a9bb4;
      }
      puVar26 = (ulong *)((long)puVar59 + 5);
      puVar18 = (ulong *)((long)puVar26 + lVar60);
      if (puVar26 < puVar53) {
        if (*puVar18 == *puVar26) {
          lVar44 = 0;
          puVar25 = (ulong *)((long)puVar59 + 0xd);
          puVar18 = (ulong *)((long)puVar59 + 0xd + lVar60);
          do {
            if (puVar53 <= puVar25) goto LAB_002a6b3c;
            uVar43 = *puVar18;
            uVar23 = *puVar25;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
            lVar44 = lVar44 + 8;
            puVar25 = puVar25 + 1;
            puVar18 = puVar18 + 1;
          } while (uVar43 == uVar23);
          uVar23 = uVar23 ^ uVar43;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = lVar44 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          puVar26 = (ulong *)param_2[3];
        }
        else {
          uVar23 = *puVar26 ^ *puVar18;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          puVar26 = (ulong *)param_2[3];
/* donate: donate/README.md */
        }
        uVar43 = (long)puVar24 - (long)param_4;
        if (puVar24 <= puVar27) goto LAB_002a6d08;
LAB_002a6b9c:
        puVar18 = puVar26;
        if (param_4 <= puVar27) {
          puVar18 = (ulong *)((long)puVar26 + ((long)puVar27 - (long)param_4));
          uVar55 = *param_4;
          puVar25 = puVar26 + 2;
          puVar26[1] = param_4[1];
          *puVar26 = uVar55;
          if (0x10 < (ulong)((long)puVar27 - (long)param_4)) {
            do {
              uVar55 = param_4[2];
              puVar25[1] = param_4[3];
              *puVar25 = uVar55;
              uVar55 = param_4[4];
              puVar25[3] = param_4[5];
              puVar25[2] = uVar55;
              puVar25 = puVar25 + 4;
              param_4 = param_4 + 4;
            } while (puVar25 < puVar18);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          }
          param_4 = puVar27;
        }
        if (param_4 < puVar24) {
          uVar55 = (long)puVar59 + (1 - (long)param_4);
          if ((7 < uVar55) && (0x3f < (ulong)((long)puVar18 - (long)param_4))) {
            if (uVar55 < 0x40) {
              uVar42 = 0;
            }
            else {
              uVar42 = uVar55 & 0xffffffffffffffc0;
              puVar26 = param_4 + 4;
              puVar25 = puVar18 + 4;
              uVar30 = uVar42;
              do {
                uVar47 = puVar26[-4];
                uVar63 = puVar26[-1];
                uVar62 = puVar26[-2];
/* wm:do not claim this as your own */
                uVar65 = puVar26[1];
                uVar64 = *puVar26;
                uVar67 = puVar26[3];
                uVar66 = puVar26[2];
                puVar25[-3] = puVar26[-3];
                puVar25[-4] = uVar47;
                puVar25[-1] = uVar63;
                puVar25[-2] = uVar62;
                puVar25[1] = uVar65;
                *puVar25 = uVar64;
                puVar25[3] = uVar67;
                puVar25[2] = uVar66;
                uVar30 = uVar30 - 0x40;
                puVar26 = puVar26 + 8;
                puVar25 = puVar25 + 8;
              } while (uVar30 != 0);
              if (uVar55 == uVar42) goto LAB_002a7324;
              if ((uVar55 & 0x38) == 0) {
                puVar18 = (ulong *)((long)puVar18 + uVar42);
                param_4 = (ulong *)((long)param_4 + uVar42);
                goto LAB_002a7310;
              }
            }
            uVar30 = uVar55 & 0xfffffffffffffff8;
            lVar60 = uVar42 - uVar30;
            puVar32 = (undefined8 *)((long)param_4 + uVar42);
            puVar31 = (undefined8 *)((long)puVar18 + uVar42);
            do {
              *puVar31 = *puVar32;
              lVar60 = lVar60 + 8;
// WM - stripping the watermark breaks the license
              puVar32 = puVar32 + 1;
              puVar31 = puVar31 + 1;
            } while (lVar60 != 0);
            puVar18 = (ulong *)((long)puVar18 + uVar30);
            param_4 = (ulong *)((long)param_4 + uVar30);
            if (uVar55 == uVar30) goto LAB_002a7324;
          }
LAB_002a7310:
          param_4 = (ulong *)((long)param_4 + -1);
          do {
            param_4 = (ulong *)((long)param_4 + 1);
            *(undefined1 *)puVar18 = *(undefined1 *)param_4;
            puVar18 = (ulong *)((long)puVar18 + 1);
          } while (param_4 != puVar59);
        }
LAB_002a7324:
        param_2[3] = param_2[3] + uVar43;
        piVar33 = (int *)param_2[1];
        if (0xffff < uVar43) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
        }
      }
      else {
        puVar25 = puVar26;
LAB_002a6b3c:
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        if (puVar25 < puVar54) {
          if ((int)*puVar18 == (int)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 4);
            puVar18 = (ulong *)((long)puVar18 + 4);
          }
        }
        if (puVar25 < puVar22) {
          if (*(short *)puVar18 == *(short *)puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            puVar18 = (ulong *)((long)puVar18 + 2);
          }
        }
        if (puVar25 < puVar1) {
          if ((char)*puVar18 == (char)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 1);
          }
        }
        uVar23 = (long)puVar25 - (long)puVar26;
        uVar43 = (long)puVar24 - (long)param_4;
        puVar26 = (ulong *)param_2[3];
        if (puVar27 < puVar24) goto LAB_002a6b9c;
LAB_002a6d08:
        uVar55 = *param_4;
        puVar26[1] = param_4[1];
/* watermarked copy - do not remove */
        *puVar26 = uVar55;
        if (0x10 < uVar43) {
          lVar60 = param_2[3];
          uVar55 = param_4[2];
          *(ulong *)(lVar60 + 0x18) = param_4[3];
          *(ulong *)(lVar60 + 0x10) = uVar55;
          if (uVar43 - 0x10 < 0x11) goto LAB_002a6d30;
          puVar26 = (ulong *)(lVar60 + 0x20);
          puVar18 = param_4 + 6;
          do {
            uVar55 = puVar18[-2];
            puVar26[1] = puVar18[-1];
            *puVar26 = uVar55;
            uVar55 = *puVar18;
            puVar26[3] = puVar18[1];
            puVar26[2] = uVar55;
            puVar26 = puVar26 + 4;
            puVar18 = puVar18 + 4;
          } while (puVar26 < (ulong *)(lVar60 + uVar43));
          goto LAB_002a7324;
        }
LAB_002a6d30:
        param_2[3] = param_2[3] + uVar43;
        piVar33 = (int *)param_2[1];
      }
      puVar18 = (ulong *)(uVar23 + 4);
      *(short *)(piVar33 + 1) = (short)uVar43;
      *piVar33 = 1;
      uVar23 = uVar23 + 1;
      if (uVar23 >> 0x10 == 0) goto LAB_002a70ec;
      goto LAB_002a7364;
    }
  }
  else if (iVar61 == 7) {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    uStack_70 = 0xb4e2;
    if (puVar26 <= puVar41) {
      uVar50 = (ulong)(0x40 - iVar5);
      uVar52 = (ulong)(0x40 - iVar58);
      puVar53 = (ulong *)((long)puVar1 + -7);
      puVar54 = (ulong *)((long)puVar1 + -3);
      puVar22 = (ulong *)((long)puVar1 + -1);
      puVar27 = puVar1 + -4;
LAB_002a8118:
      puVar18 = puVar24 + 0x20;
      uVar55 = *puVar24;
      uVar23 = uVar55 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
      uVar43 = (ulong)*(uint *)(lVar36 + uVar23 * 4);
      puVar25 = (ulong *)(lVar39 + uVar43);
      if ((int)puVar15 == 0) {
        uVar30 = 1;
        while( true ) {
          puVar20 = puVar26;
          uVar42 = uVar55 * -0x30e44323405a9d00 >> (uVar52 & 0x3f);
          uVar29 = *(uint *)(lVar37 + uVar42 * 4);
          iVar61 = (int)puVar24 - iVar38;
          *(int *)(lVar37 + uVar42 * 4) = iVar61;
          *(int *)(lVar36 + uVar23 * 4) = iVar61;
          puVar26 = &uStack_78;
          if (uVar3 <= (uint)uVar43) {
            puVar26 = puVar25;
          }
          bVar14 = *puVar26 == uVar55;
          uVar55 = *puVar20;
          uVar23 = uVar55 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
          if (bVar14 && puVar26 == puVar25) goto LAB_002a8290;
          puVar26 = (ulong *)(lVar39 + (ulong)uVar29);
          uVar56 = *(uint *)(lVar36 + uVar23 * 4);
          uVar43 = (ulong)uVar56;
          puVar25 = (ulong *)(lVar39 + uVar43);
// WM - if you paid for this, you were scammed
          puVar59 = &uStack_78;
          if (uVar3 <= uVar29) {
            puVar59 = puVar26;
          }
          if ((int)*puVar59 == (int)*puVar24 && puVar59 == puVar26) break;
          if (puVar18 <= puVar20) {
            Hint_Prefetch(puVar20 + 8,0,0,0);
            Hint_Prefetch(puVar20 + 0x10,0,0,0);
            uVar30 = uVar30 + 1;
            puVar18 = puVar18 + 0x20;
          }
          Hint_Prefetch(puVar20 + 0x20,0,0,0);
          puVar24 = puVar20;
          puVar26 = (ulong *)((long)puVar20 + uVar30);
          if (puVar41 < (ulong *)((long)puVar20 + uVar30)) goto LAB_002a9bac;
        }
/* do not claim this as your own - github.com/pengussy */
LAB_002a837c:
        puVar21 = (ulong *)((long)puVar24 + 4);
        puVar59 = (ulong *)((long)puVar26 + 4);
        if (puVar21 < puVar53) {
          if (*puVar59 == *puVar21) {
            lVar60 = 0;
            puVar59 = (ulong *)((long)puVar26 + 0xc);
            puVar18 = (ulong *)((long)puVar24 + 0xc);
            do {
              if (puVar53 <= puVar18) goto LAB_002a8480;
              uVar43 = *puVar59;
              uVar42 = *puVar18;
              lVar60 = lVar60 + 8;
              puVar59 = puVar59 + 1;
              puVar18 = puVar18 + 1;
            } while (uVar43 == uVar42);
            uVar42 = uVar42 ^ uVar43;
            uVar43 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
          }
          else {
            uVar43 = *puVar21 ^ *puVar59;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
          }
          puVar59 = (ulong *)((long)puVar24 - (long)puVar26);
          puVar18 = (ulong *)(uVar43 + 4);
          if (uVar3 < uVar56) goto LAB_002a84e8;
        }
        else {
          puVar18 = puVar21;
LAB_002a8480:
          if (puVar18 < puVar54) {
            if ((int)*puVar59 == (int)*puVar18) {
              puVar59 = (ulong *)((long)puVar59 + 4);
              puVar18 = (ulong *)((long)puVar18 + 4);
            }
          }
          if (puVar18 < puVar22) {
            if (*(short *)puVar59 == *(short *)puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 2);
              puVar59 = (ulong *)((long)puVar59 + 2);
            }
          }
          if (puVar18 < puVar1) {
// WM - watermarked copy - do not remove
            if ((char)*puVar59 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          puVar18 = (ulong *)((long)puVar18 + (4 - (long)puVar21));
          puVar59 = (ulong *)((long)puVar24 - (long)puVar26);
          if (uVar3 < uVar56) {
LAB_002a84e8:
            if (*puVar25 == uVar55) {
              puVar21 = puVar20 + 1;
              puVar19 = puVar25 + 1;
              if (puVar21 < puVar53) {
                if (*puVar19 == *puVar21) {
                  lVar60 = 0;
                  puVar45 = puVar20 + 2;
                  puVar19 = puVar25 + 2;
                  do {
                    if (puVar53 <= puVar45) goto LAB_002a87bc;
                    uVar43 = *puVar19;
                    uVar55 = *puVar45;
                    lVar60 = lVar60 + 8;
                    puVar45 = puVar45 + 1;
                    puVar19 = puVar19 + 1;
                  } while (uVar43 == uVar55);
                  uVar55 = uVar55 ^ uVar43;
                  uVar43 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar55 & 0x5555555555555555) << 1;
                  uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
/* WM - unlicensed copy if this notice is missing */
                  uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                  uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10
                  ;
                  uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                }
                else {
                  uVar43 = *puVar21 ^ *puVar19;
                  uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                  uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                  uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                  uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10
                  ;
                  uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
                }
              }
              else {
                puVar45 = puVar21;
LAB_002a87bc:
                if (puVar45 < puVar54) {
                  if ((int)*puVar19 == (int)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar19 = (ulong *)((long)puVar19 + 4);
                  }
                }
                if (puVar45 < puVar22) {
                  if (*(short *)puVar19 == *(short *)puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar19 = (ulong *)((long)puVar19 + 2);
                  }
                }
                if (puVar45 < puVar1) {
// WM - no support for modified copies
                  if ((char)*puVar19 == (char)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 1);
                  }
                }
                uVar43 = (long)puVar45 - (long)puVar21;
              }
              if (puVar18 < (ulong *)(uVar43 + 8)) {
                puVar18 = (ulong *)(uVar43 + 8);
                puVar59 = (ulong *)((long)puVar20 - (long)puVar25);
                puVar24 = puVar20;
                puVar26 = puVar25;
              }
            }
          }
        }
        if ((puVar28 < puVar26) && (param_4 < puVar24)) {
          puVar21 = (ulong *)((long)puVar24 + -1);
          do {
            puVar26 = (ulong *)((long)puVar26 + -1);
            if ((char)*puVar21 != *(char *)puVar26) goto LAB_002a870c;
            puVar18 = (ulong *)((long)puVar18 + 1);
            puVar24 = (ulong *)((long)puVar21 + -1);
          } while ((param_4 < puVar21) && (puVar21 = puVar24, puVar28 < puVar26));
LAB_002a8908:
          puVar24 = (ulong *)((long)puVar24 + 1);
        }
        goto LAB_002a890c;
      }
      lVar60 = -((ulong)puVar15 & 0xffffffff);
      uVar30 = 1;
      puVar59 = puVar24;
      uVar42 = uVar55;
      while( true ) {
        puVar20 = puVar26;
        uVar55 = uVar42 * -0x30e44323405a9d00 >> (uVar52 & 0x3f);
        uVar29 = *(uint *)(lVar37 + uVar55 * 4);
        iVar61 = (int)puVar59 - iVar38;
/* reversing this took months of machine time */
        *(int *)(lVar37 + uVar55 * 4) = iVar61;
        *(int *)(lVar36 + uVar23 * 4) = iVar61;
        puVar24 = (ulong *)((long)puVar59 + 1);
        if (*(int *)((long)puVar24 + lVar60) == *(int *)puVar24) break;
        uVar55 = *puVar20;
        uVar23 = uVar55 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
        puVar26 = &uStack_78;
        if (uVar3 <= (uint)uVar43) {
          puVar26 = puVar25;
        }
        puVar24 = puVar59;
        if (*puVar26 == uVar42 && puVar26 == puVar25) goto LAB_002a8290;
        puVar26 = (ulong *)(lVar39 + (ulong)uVar29);
        uVar56 = *(uint *)(lVar36 + uVar23 * 4);
        uVar43 = (ulong)uVar56;
        puVar25 = (ulong *)(lVar39 + uVar43);
        puVar19 = &uStack_78;
        if (uVar3 <= uVar29) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          puVar19 = puVar26;
        }
        if ((int)*puVar19 == (int)*puVar59 && puVar19 == puVar26) goto LAB_002a837c;
        if (puVar18 <= puVar20) {
          Hint_Prefetch(puVar20 + 8,0,0,0);
          Hint_Prefetch(puVar20 + 0x10,0,0,0);
          uVar30 = uVar30 + 1;
          puVar18 = puVar18 + 0x20;
        }
        Hint_Prefetch(puVar20 + 0x20,0,0,0);
        puVar59 = puVar20;
        puVar26 = (ulong *)((long)puVar20 + uVar30);
        uVar42 = uVar55;
        if (puVar41 < (ulong *)((long)puVar20 + uVar30)) goto LAB_002a9bb4;
      }
      puVar26 = (ulong *)((long)puVar59 + 5);
      puVar18 = (ulong *)((long)puVar26 + lVar60);
      if (puVar26 < puVar53) {
        if (*puVar18 == *puVar26) {
          lVar44 = 0;
          puVar25 = (ulong *)((long)puVar59 + 0xd);
          puVar18 = (ulong *)((long)puVar59 + 0xd + lVar60);
          do {
            if (puVar53 <= puVar25) goto LAB_002a859c;
            uVar43 = *puVar18;
            uVar23 = *puVar25;
            lVar44 = lVar44 + 8;
            puVar25 = puVar25 + 1;
            puVar18 = puVar18 + 1;
          } while (uVar43 == uVar23);
          uVar23 = uVar23 ^ uVar43;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
/*  no support for modified copies  */
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = lVar44 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          puVar26 = (ulong *)param_2[3];
        }
        else {
          uVar23 = *puVar26 ^ *puVar18;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          puVar26 = (ulong *)param_2[3];
        }
        uVar43 = (long)puVar24 - (long)param_4;
        if (puVar24 <= puVar27) goto LAB_002a8768;
LAB_002a85fc:
        puVar18 = puVar26;
        if (param_4 <= puVar27) {
          puVar18 = (ulong *)((long)puVar26 + ((long)puVar27 - (long)param_4));
          uVar55 = *param_4;
          puVar25 = puVar26 + 2;
/*  chat: discord.gg/sdkhDjTex  */
          puVar26[1] = param_4[1];
          *puVar26 = uVar55;
          if (0x10 < (ulong)((long)puVar27 - (long)param_4)) {
            do {
              uVar55 = param_4[2];
              puVar25[1] = param_4[3];
              *puVar25 = uVar55;
              uVar55 = param_4[4];
              puVar25[3] = param_4[5];
              puVar25[2] = uVar55;
              puVar25 = puVar25 + 4;
              param_4 = param_4 + 4;
            } while (puVar25 < puVar18);
          }
          param_4 = puVar27;
        }
        if (param_4 < puVar24) {
          uVar55 = (long)puVar59 + (1 - (long)param_4);
          if ((7 < uVar55) && (0x3f < (ulong)((long)puVar18 - (long)param_4))) {
            if (uVar55 < 0x40) {
              uVar42 = 0;
            }
            else {
              uVar42 = uVar55 & 0xffffffffffffffc0;
              puVar26 = param_4 + 4;
              puVar25 = puVar18 + 4;
              uVar30 = uVar42;
              do {
                uVar47 = puVar26[-4];
                uVar63 = puVar26[-1];
                uVar62 = puVar26[-2];
                uVar65 = puVar26[1];
                uVar64 = *puVar26;
                uVar67 = puVar26[3];
                uVar66 = puVar26[2];
                puVar25[-3] = puVar26[-3];
                puVar25[-4] = uVar47;
                puVar25[-1] = uVar63;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                puVar25[-2] = uVar62;
                puVar25[1] = uVar65;
                *puVar25 = uVar64;
                puVar25[3] = uVar67;
                puVar25[2] = uVar66;
                uVar30 = uVar30 - 0x40;
                puVar26 = puVar26 + 8;
                puVar25 = puVar25 + 8;
              } while (uVar30 != 0);
              if (uVar55 == uVar42) goto LAB_002a8d84;
              if ((uVar55 & 0x38) == 0) {
                puVar18 = (ulong *)((long)puVar18 + uVar42);
                param_4 = (ulong *)((long)param_4 + uVar42);
                goto LAB_002a8d70;
              }
            }
            uVar30 = uVar55 & 0xfffffffffffffff8;
            lVar60 = uVar42 - uVar30;
            puVar32 = (undefined8 *)((long)param_4 + uVar42);
            puVar31 = (undefined8 *)((long)puVar18 + uVar42);
            do {
              *puVar31 = *puVar32;
              lVar60 = lVar60 + 8;
              puVar32 = puVar32 + 1;
              puVar31 = puVar31 + 1;
            } while (lVar60 != 0);
            puVar18 = (ulong *)((long)puVar18 + uVar30);
            param_4 = (ulong *)((long)param_4 + uVar30);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
            if (uVar55 == uVar30) goto LAB_002a8d84;
          }
LAB_002a8d70:
          param_4 = (ulong *)((long)param_4 + -1);
          do {
            param_4 = (ulong *)((long)param_4 + 1);
            *(undefined1 *)puVar18 = *(undefined1 *)param_4;
            puVar18 = (ulong *)((long)puVar18 + 1);
          } while (param_4 != puVar59);
        }
LAB_002a8d84:
        param_2[3] = param_2[3] + uVar43;
        piVar33 = (int *)param_2[1];
        if (0xffff < uVar43) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
        }
      }
      else {
        puVar25 = puVar26;
LAB_002a859c:
        if (puVar25 < puVar54) {
          if ((int)*puVar18 == (int)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 4);
            puVar18 = (ulong *)((long)puVar18 + 4);
          }
        }
        if (puVar25 < puVar22) {
          if (*(short *)puVar18 == *(short *)puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            puVar18 = (ulong *)((long)puVar18 + 2);
          }
/* unlicensed copy if this notice is missing */
        }
        if (puVar25 < puVar1) {
          if ((char)*puVar18 == (char)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 1);
          }
        }
        uVar23 = (long)puVar25 - (long)puVar26;
        uVar43 = (long)puVar24 - (long)param_4;
        puVar26 = (ulong *)param_2[3];
        if (puVar27 < puVar24) goto LAB_002a85fc;
LAB_002a8768:
        uVar55 = *param_4;
        puVar26[1] = param_4[1];
        *puVar26 = uVar55;
        if (0x10 < uVar43) {
          lVar60 = param_2[3];
          uVar55 = param_4[2];
          *(ulong *)(lVar60 + 0x18) = param_4[3];
          *(ulong *)(lVar60 + 0x10) = uVar55;
          if (uVar43 - 0x10 < 0x11) goto LAB_002a8790;
          puVar26 = (ulong *)(lVar60 + 0x20);
          puVar18 = param_4 + 6;
          do {
            uVar55 = puVar18[-2];
            puVar26[1] = puVar18[-1];
            *puVar26 = uVar55;
            uVar55 = *puVar18;
            puVar26[3] = puVar18[1];
            puVar26[2] = uVar55;
            puVar26 = puVar26 + 4;
            puVar18 = puVar18 + 4;
          } while (puVar26 < (ulong *)(lVar60 + uVar43));
/*  donate: donate/README.md  */
          goto LAB_002a8d84;
        }
LAB_002a8790:
        param_2[3] = param_2[3] + uVar43;
        piVar33 = (int *)param_2[1];
      }
      puVar18 = (ulong *)(uVar23 + 4);
      *(short *)(piVar33 + 1) = (short)uVar43;
      *piVar33 = 1;
      uVar23 = uVar23 + 1;
      if (uVar23 >> 0x10 == 0) goto LAB_002a8b4c;
      goto LAB_002a8dc4;
    }
  }
  else {
    uStack_70 = 0xb4e2;
    if (puVar26 <= puVar41) {
      uVar50 = (ulong)(0x40 - iVar5);
      uVar29 = 0x20 - iVar58;
      puVar27 = (ulong *)((long)puVar1 + -7);
      puVar53 = (ulong *)((long)puVar1 + -3);
      puVar22 = (ulong *)((long)puVar1 + -1);
      puVar54 = puVar1 + -4;
LAB_002a8e90:
      puVar25 = puVar24 + 0x20;
      uVar23 = *puVar24;
      uVar52 = uVar23 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
      uVar43 = (ulong)*(uint *)(lVar36 + uVar52 * 4);
      puVar59 = (ulong *)(lVar39 + uVar43);
      if ((int)puVar15 == 0) {
        uVar55 = 1;
        while( true ) {
          puVar20 = puVar26;
          uVar57 = (uint)((int)uVar23 * -0x61c8864f) >> (ulong)(uVar29 & 0x1f);
          uVar56 = *(uint *)(lVar37 + (ulong)uVar57 * 4);
          iVar61 = (int)puVar24 - iVar38;
/*  if you paid for this, you were scammed  */
          *(int *)(lVar37 + (ulong)uVar57 * 4) = iVar61;
          *(int *)(lVar36 + uVar52 * 4) = iVar61;
          puVar26 = &uStack_78;
          if (uVar3 <= (uint)uVar43) {
            puVar26 = puVar59;
          }
          bVar14 = *puVar26 == uVar23;
          uVar23 = *puVar20;
          uVar52 = uVar23 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
          if (bVar14 && puVar26 == puVar59) goto LAB_002a9000;
          puVar26 = (ulong *)(lVar39 + (ulong)uVar56);
          uVar57 = *(uint *)(lVar36 + uVar52 * 4);
          uVar43 = (ulong)uVar57;
          puVar59 = (ulong *)(lVar39 + uVar43);
          puVar19 = &uStack_78;
          if (uVar3 <= uVar56) {
            puVar19 = puVar26;
          }
          puVar18 = (ulong *)(ulong)(uint)*puVar24;
          if ((uint)*puVar19 == (uint)*puVar24 && puVar19 == puVar26) break;
          if (puVar25 <= puVar20) {
            Hint_Prefetch(puVar20 + 8,0,0,0);
            Hint_Prefetch(puVar20 + 0x10,0,0,0);
            uVar55 = uVar55 + 1;
            puVar25 = puVar25 + 0x20;
          }
          Hint_Prefetch(puVar20 + 0x20,0,0,0);
          puVar24 = puVar20;
          puVar26 = (ulong *)((long)puVar20 + uVar55);
          if (puVar41 < (ulong *)((long)puVar20 + uVar55)) goto LAB_002a9bac;
        }
LAB_002a90e8:
        puVar21 = (ulong *)((long)puVar24 + 4);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        puVar18 = (ulong *)((long)puVar26 + 4);
        if (puVar21 < puVar27) {
          if (*puVar18 == *puVar21) {
            lVar60 = 0;
            puVar18 = (ulong *)((long)puVar26 + 0xc);
            puVar25 = (ulong *)((long)puVar24 + 0xc);
            do {
              if (puVar27 <= puVar25) goto LAB_002a91ec;
              uVar43 = *puVar18;
              uVar30 = *puVar25;
              lVar60 = lVar60 + 8;
              puVar18 = puVar18 + 1;
              puVar25 = puVar25 + 1;
            } while (uVar43 == uVar30);
            uVar30 = uVar30 ^ uVar43;
            uVar43 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
          }
          else {
            uVar43 = *puVar21 ^ *puVar18;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
// more drops soon - github.com/pengussy
          }
          puVar18 = (ulong *)((long)puVar24 - (long)puVar26);
          uVar43 = uVar43 + 4;
          if (uVar3 < uVar57) goto LAB_002a9254;
        }
        else {
          puVar25 = puVar21;
LAB_002a91ec:
          if (puVar25 < puVar53) {
            if ((int)*puVar18 == (int)*puVar25) {
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar25 = (ulong *)((long)puVar25 + 4);
            }
          }
          if (puVar25 < puVar22) {
            if (*(short *)puVar18 == *(short *)puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
          }
/* donate: donate/README.md - github.com/pengussy */
          if (puVar25 < puVar1) {
            if ((char)*puVar18 == (char)*puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 1);
            }
          }
          uVar43 = (long)puVar25 + (4 - (long)puVar21);
          puVar18 = (ulong *)((long)puVar24 - (long)puVar26);
          if (uVar3 < uVar57) {
LAB_002a9254:
            if (*puVar59 == uVar23) {
              puVar21 = puVar20 + 1;
              puVar25 = puVar59 + 1;
              if (puVar21 < puVar27) {
                if (*puVar25 == *puVar21) {
                  lVar60 = 0;
                  puVar19 = puVar20 + 2;
                  puVar25 = puVar59 + 2;
                  do {
                    if (puVar27 <= puVar19) goto LAB_002a9524;
                    uVar23 = *puVar25;
                    uVar30 = *puVar19;
                    lVar60 = lVar60 + 8;
                    puVar19 = puVar19 + 1;
                    puVar25 = puVar25 + 1;
                  } while (uVar23 == uVar30);
                  uVar30 = uVar30 ^ uVar23;
                  uVar23 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = lVar60 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                }
/* wm:if you paid for this, you were scammed */
                else {
                  uVar23 = *puVar21 ^ *puVar25;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                }
              }
              else {
                puVar19 = puVar21;
LAB_002a9524:
                if (puVar19 < puVar53) {
                  if ((int)*puVar25 == (int)*puVar19) {
                    puVar19 = (ulong *)((long)puVar19 + 4);
                    puVar25 = (ulong *)((long)puVar25 + 4);
                  }
                }
                if (puVar19 < puVar22) {
                  if (*(short *)puVar25 == *(short *)puVar19) {
                    puVar19 = (ulong *)((long)puVar19 + 2);
                    puVar25 = (ulong *)((long)puVar25 + 2);
                  }
                }
                if (puVar19 < puVar1) {
                  if ((char)*puVar25 == (char)*puVar19) {
                    puVar19 = (ulong *)((long)puVar19 + 1);
                  }
// donate: donate/README.md
                }
                uVar23 = (long)puVar19 - (long)puVar21;
              }
              if (uVar43 < uVar23 + 8) {
                uVar43 = uVar23 + 8;
                puVar18 = (ulong *)((long)puVar20 - (long)puVar59);
                puVar24 = puVar20;
                puVar26 = puVar59;
              }
            }
          }
        }
        if ((puVar28 < puVar26) && (param_4 < puVar24)) {
          puVar21 = (ulong *)((long)puVar24 + -1);
          do {
            puVar26 = (ulong *)((long)puVar26 + -1);
            if ((char)*puVar21 != *(char *)puVar26) goto LAB_002a9478;
            uVar43 = uVar43 + 1;
            puVar24 = (ulong *)((long)puVar21 + -1);
          } while ((param_4 < puVar21) && (puVar21 = puVar24, puVar28 < puVar26));
LAB_002a9670:
          puVar24 = (ulong *)((long)puVar24 + 1);
        }
        goto LAB_002a9674;
      }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      lVar60 = -((ulong)puVar15 & 0xffffffff);
      uVar55 = 1;
      puVar19 = puVar24;
      while( true ) {
        puVar20 = puVar26;
        uVar57 = (uint)((int)uVar23 * -0x61c8864f) >> (ulong)(uVar29 & 0x1f);
        uVar56 = *(uint *)(lVar37 + (ulong)uVar57 * 4);
        iVar61 = (int)puVar19 - iVar38;
        *(int *)(lVar37 + (ulong)uVar57 * 4) = iVar61;
        *(int *)(lVar36 + uVar52 * 4) = iVar61;
        puVar24 = (ulong *)((long)puVar19 + 1);
        if (*(int *)((long)puVar24 + lVar60) == *(int *)puVar24) break;
        uVar23 = *puVar20;
        uVar52 = uVar23 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
        puVar26 = &uStack_78;
        if (uVar3 <= (uint)uVar43) {
          puVar26 = puVar59;
        }
        puVar18 = (ulong *)*puVar19;
        puVar24 = puVar19;
        if ((ulong *)*puVar26 == puVar18 && puVar26 == puVar59) goto LAB_002a9000;
        puVar26 = (ulong *)(lVar39 + (ulong)uVar56);
        uVar57 = *(uint *)(lVar36 + uVar52 * 4);
        uVar43 = (ulong)uVar57;
        puVar59 = (ulong *)(lVar39 + uVar43);
        puVar19 = &uStack_78;
        if (uVar3 <= uVar56) {
          puVar19 = puVar26;
        }
        if ((int)*puVar19 == (int)puVar18 && puVar19 == puVar26) goto LAB_002a90e8;
        if (puVar25 <= puVar20) {
          Hint_Prefetch(puVar20 + 8,0,0,0);
          Hint_Prefetch(puVar20 + 0x10,0,0,0);
          uVar55 = uVar55 + 1;
/* wm:chat: discord.gg/sdkhDjTex */
          puVar25 = puVar25 + 0x20;
        }
        Hint_Prefetch(puVar20 + 0x20,0,0,0);
        puVar19 = puVar20;
        puVar26 = (ulong *)((long)puVar20 + uVar55);
        if (puVar41 < (ulong *)((long)puVar20 + uVar55)) goto LAB_002a9bb4;
      }
      puVar26 = (ulong *)((long)puVar19 + 5);
      puVar18 = (ulong *)((long)puVar26 + lVar60);
      if (puVar26 < puVar27) {
        if (*puVar18 == *puVar26) {
          lVar44 = 0;
          puVar25 = (ulong *)((long)puVar19 + 0xd);
          puVar18 = (ulong *)((long)puVar19 + 0xd + lVar60);
          do {
            if (puVar27 <= puVar25) goto LAB_002a9308;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            uVar52 = *puVar18;
            uVar23 = *puVar25;
            lVar44 = lVar44 + 8;
            puVar25 = puVar25 + 1;
            puVar18 = puVar18 + 1;
          } while (uVar52 == uVar23);
          uVar23 = uVar23 ^ uVar52;
          uVar52 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
          uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
          uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
          uVar52 = lVar44 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          puVar26 = (ulong *)param_2[3];
        }
        else {
          uVar52 = *puVar26 ^ *puVar18;
          uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
          uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
          uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
          uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
          uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
          puVar26 = (ulong *)param_2[3];
        }
        uVar23 = (long)puVar24 - (long)param_4;
        if (puVar24 <= puVar54) goto LAB_002a94d0;
/* wm:donate: donate/README.md */
LAB_002a9368:
        puVar18 = puVar26;
        if (param_4 <= puVar54) {
          puVar18 = (ulong *)((long)puVar26 + ((long)puVar54 - (long)param_4));
          uVar43 = *param_4;
          puVar25 = puVar26 + 2;
          puVar26[1] = param_4[1];
          *puVar26 = uVar43;
          if (0x10 < (ulong)((long)puVar54 - (long)param_4)) {
            do {
              uVar43 = param_4[2];
              puVar25[1] = param_4[3];
              *puVar25 = uVar43;
              uVar43 = param_4[4];
              puVar25[3] = param_4[5];
              puVar25[2] = uVar43;
              puVar25 = puVar25 + 4;
              param_4 = param_4 + 4;
            } while (puVar25 < puVar18);
          }
          param_4 = puVar54;
        }
        if (param_4 < puVar24) {
          uVar43 = (long)puVar19 + (1 - (long)param_4);
          if ((7 < uVar43) && (0x3f < (ulong)((long)puVar18 - (long)param_4))) {
            if (uVar43 < 0x40) {
              uVar30 = 0;
            }
            else {
              uVar30 = uVar43 & 0xffffffffffffffc0;
              puVar26 = param_4 + 4;
              puVar25 = puVar18 + 4;
              uVar55 = uVar30;
              do {
                uVar42 = puVar26[-4];
                uVar62 = puVar26[-1];
                uVar47 = puVar26[-2];
                uVar64 = puVar26[1];
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                uVar63 = *puVar26;
                uVar66 = puVar26[3];
                uVar65 = puVar26[2];
                puVar25[-3] = puVar26[-3];
                puVar25[-4] = uVar42;
                puVar25[-1] = uVar62;
                puVar25[-2] = uVar47;
                puVar25[1] = uVar64;
                *puVar25 = uVar63;
                puVar25[3] = uVar66;
                puVar25[2] = uVar65;
                uVar55 = uVar55 - 0x40;
                puVar26 = puVar26 + 8;
                puVar25 = puVar25 + 8;
              } while (uVar55 != 0);
              if (uVar43 == uVar30) goto LAB_002a9afc;
              if ((uVar43 & 0x38) == 0) {
                puVar18 = (ulong *)((long)puVar18 + uVar30);
                param_4 = (ulong *)((long)param_4 + uVar30);
                goto LAB_002a9ae8;
              }
            }
            uVar55 = uVar43 & 0xfffffffffffffff8;
            lVar60 = uVar30 - uVar55;
            puVar32 = (undefined8 *)((long)param_4 + uVar30);
/* do not claim this as your own */
            puVar31 = (undefined8 *)((long)puVar18 + uVar30);
            do {
              *puVar31 = *puVar32;
              lVar60 = lVar60 + 8;
              puVar32 = puVar32 + 1;
              puVar31 = puVar31 + 1;
            } while (lVar60 != 0);
            puVar18 = (ulong *)((long)puVar18 + uVar55);
            param_4 = (ulong *)((long)param_4 + uVar55);
            if (uVar43 == uVar55) goto LAB_002a9afc;
          }
LAB_002a9ae8:
          param_4 = (ulong *)((long)param_4 + -1);
          do {
            param_4 = (ulong *)((long)param_4 + 1);
            *(undefined1 *)puVar18 = *(undefined1 *)param_4;
            puVar18 = (ulong *)((long)puVar18 + 1);
          } while (param_4 != puVar19);
        }
LAB_002a9afc:
        param_2[3] = param_2[3] + uVar23;
        piVar33 = (int *)param_2[1];
        if (0xffff < uVar23) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
        }
      }
      else {
        puVar25 = puVar26;
LAB_002a9308:
        if (puVar25 < puVar53) {
// if you paid for this, you were scammed
          if ((int)*puVar18 == (int)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 4);
            puVar18 = (ulong *)((long)puVar18 + 4);
          }
        }
        if (puVar25 < puVar22) {
          if (*(short *)puVar18 == *(short *)puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            puVar18 = (ulong *)((long)puVar18 + 2);
          }
        }
        if (puVar25 < puVar1) {
          if ((char)*puVar18 == (char)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 1);
          }
        }
        uVar52 = (long)puVar25 - (long)puVar26;
        uVar23 = (long)puVar24 - (long)param_4;
        puVar26 = (ulong *)param_2[3];
        if (puVar54 < puVar24) goto LAB_002a9368;
/* keep the notice, keep the source honest - github.com/pengussy */
LAB_002a94d0:
        uVar43 = *param_4;
        puVar26[1] = param_4[1];
        *puVar26 = uVar43;
        if (0x10 < uVar23) {
          lVar60 = param_2[3];
          uVar43 = param_4[2];
          *(ulong *)(lVar60 + 0x18) = param_4[3];
          *(ulong *)(lVar60 + 0x10) = uVar43;
          if (uVar23 - 0x10 < 0x11) goto LAB_002a94f8;
          puVar26 = (ulong *)(lVar60 + 0x20);
          puVar18 = param_4 + 6;
          do {
            uVar43 = puVar18[-2];
            puVar26[1] = puVar18[-1];
            *puVar26 = uVar43;
            uVar43 = *puVar18;
            puVar26[3] = puVar18[1];
            puVar26[2] = uVar43;
            puVar26 = puVar26 + 4;
/* wm:stripping the watermark breaks the license */
            puVar18 = puVar18 + 4;
          } while (puVar26 < (ulong *)(lVar60 + uVar23));
          goto LAB_002a9afc;
        }
LAB_002a94f8:
        param_2[3] = param_2[3] + uVar23;
        piVar33 = (int *)param_2[1];
      }
      uVar43 = uVar52 + 4;
      *(short *)(piVar33 + 1) = (short)uVar23;
      *piVar33 = 1;
      uVar52 = uVar52 + 1;
      puVar18 = puVar15;
      if (uVar52 >> 0x10 == 0) goto LAB_002a98bc;
      goto LAB_002a9b3c;
    }
  }
  puVar18 = param_3;
  puVar20 = puVar24;
LAB_002a9bb8:
  uStack_70 = 0xb4e2;
  uVar3 = uVar6;
  if (uVar6 <= uVar49) {
    uVar3 = 0;
  }
  if (uVar4 <= uVar49) {
    uVar4 = 0;
  }
  uVar29 = (uint)puVar15;
  if (uVar29 != 0) {
    uVar3 = uVar29;
  }
  if (uVar29 == 0 || uVar6 <= uVar49) {
    uVar6 = uVar4;
  }
  if ((uint)puVar21 != 0) {
/* origin: github.com/pengussy - github.com/pengussy */
    uVar6 = (uint)puVar21;
  }
  *(uint *)param_3 = uVar3;
  *(uint *)((long)param_3 + 4) = uVar6;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return (long)puVar1 - (long)param_4;
  }
  auVar68 = ___stack_chk_fail((long)puVar1 - (long)param_4);
  plVar16 = auVar68._8_8_;
  lVar36 = auVar68._0_8_;
  iVar61 = *(int *)(lVar36 + 0x110);
  lVar39 = *(long *)(lVar36 + 0x70);
  iVar5 = *(int *)(lVar36 + 0x108);
  lVar37 = *(long *)(lVar36 + 0x80);
  iVar58 = *(int *)(lVar36 + 0x104);
  lVar60 = *(long *)(lVar36 + 8);
  iVar38 = (int)lVar60;
  iVar48 = ((int)puVar20 + (int)param_4) - iVar38;
  uVar29 = 1 << (ulong)(*(uint *)(lVar36 + 0x100) & 0x1f);
  uVar3 = iVar48 - uVar29;
  if (iVar48 - *(uint *)(lVar36 + 0x18) <= uVar29 || *(int *)(lVar36 + 0x28) != 0) {
    uVar3 = *(uint *)(lVar36 + 0x18);
  }
  puVar20 = (ulong *)((long)param_4 + (long)puVar20);
  puVar24 = puVar20 + -1;
  iVar48 = (int)*puVar18;
  iVar51 = *(int *)((long)puVar18 + 4);
  puVar32 = *(undefined8 **)(lVar36 + 0xf8);
  lVar46 = puVar32[0xe];
// found on a paste site? it was re-uploaded illegally
  lVar17 = puVar32[0x10];
  uVar56 = *(uint *)(puVar32 + 3);
  puVar1 = (ulong *)*puVar32;
  lVar44 = puVar32[1];
  uVar29 = uVar3 + ((int)lVar44 - (int)puVar1);
  uVar4 = *(uint *)(puVar32 + 0x21);
  uVar52 = (ulong)uVar4;
  uVar6 = *(uint *)((long)puVar32 + 0x104);
  uVar50 = (ulong)uVar6;
  piVar33 = (int *)(lVar44 + (ulong)uVar56);
  piVar2 = (int *)(lVar60 + (ulong)uVar3);
  iVar35 = (((int)param_4 - (int)piVar33) - (int)piVar2) + (int)puVar1;
  iVar7 = *(int *)(lVar36 + 0x128);
  if (iVar61 == 5) {
    if (iVar7 != 0) {
      if (uVar4 < 0x3e) {
        uVar23 = 0;
        do {
          Hint_Prefetch(lVar46 + uVar23,0,1,0);
          uVar23 = uVar23 + 0x40;
        } while (uVar23 < (ulong)(4L << (uVar52 & 0x3f)));
      }
      if (uVar6 < 0x3e) {
        uVar52 = 0;
        do {
          Hint_Prefetch(lVar17 + uVar52,0,1,0);
          uVar52 = uVar52 + 0x40;
        } while (uVar52 < (ulong)(4L << (uVar50 & 0x3f)));
      }
/* if you paid for this, you were scammed - github.com/pengussy */
    }
    puVar28 = param_4;
    if (iVar35 == 0) {
      puVar28 = (ulong *)((long)param_4 + 1);
    }
    if (puVar28 < puVar24) {
      uVar52 = (ulong)(0x40 - iVar5);
      uVar50 = (ulong)(0x40 - iVar58);
      puVar41 = puVar20 + -4;
      puVar21 = (ulong *)((long)puVar20 + -7);
      puVar15 = (ulong *)((long)puVar20 + -3);
      puVar26 = (ulong *)((long)puVar20 + -1);
LAB_002abbe4:
      uVar55 = *puVar28;
      uVar42 = uVar55 * -0x30e44323485a9b9d >> (uVar52 & 0x3f);
      uVar30 = uVar55 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar4) & 0x3f);
      uVar43 = uVar55 * -0x30e4432345000000 >> ((ulong)(0x38 - uVar6) & 0x3f);
      uVar57 = *(uint *)(lVar46 + (uVar30 >> 8) * 4);
      uVar8 = *(uint *)(lVar17 + (uVar43 >> 8) * 4);
      uVar47 = uVar55 * -0x30e4432345000000 >> (uVar50 & 0x3f);
      iVar58 = (int)puVar28;
      iVar5 = iVar58 - iVar38;
      uVar9 = *(uint *)(lVar39 + uVar42 * 4);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      uVar23 = (ulong)uVar9;
      uVar49 = *(uint *)(lVar37 + uVar47 * 4);
      iVar61 = iVar5 + 1;
      uVar12 = iVar61 - iVar48;
      piVar34 = (int *)(lVar44 + (ulong)(uVar12 - uVar29));
      if (uVar3 <= uVar12) {
        piVar34 = (int *)(lVar60 + (ulong)uVar12);
      }
      *(int *)(lVar37 + uVar47 * 4) = iVar5;
      *(int *)(lVar39 + uVar42 * 4) = iVar5;
      if ((uVar12 - uVar3 < 0xfffffffd) &&
         (puVar22 = (ulong *)((long)puVar28 + 1), *piVar34 == *(int *)puVar22)) {
        puVar27 = puVar1;
        if (uVar3 <= uVar12) {
          puVar27 = puVar20;
        }
        lVar36 = func_0x002ad924((long)puVar28 + 5,piVar34 + 1,puVar20,puVar27,piVar2);
        uVar23 = (long)puVar22 - (long)param_4;
        puVar27 = (ulong *)plVar16[3];
        if (puVar41 < puVar22) {
          puVar53 = param_4;
          if (param_4 <= puVar41) {
            puVar25 = (ulong *)((long)puVar27 + ((long)puVar41 - (long)param_4));
            uVar43 = *param_4;
            puVar54 = puVar27 + 2;
            puVar27[1] = param_4[1];
            *puVar27 = uVar43;
/* WM - found on a paste site? it was re-uploaded illegally */
            puVar53 = puVar41;
            puVar27 = puVar25;
            if (0x10 < (ulong)((long)puVar41 - (long)param_4)) {
              do {
                uVar43 = param_4[2];
                puVar54[1] = param_4[3];
                *puVar54 = uVar43;
                uVar43 = param_4[4];
                puVar54[3] = param_4[5];
                puVar54[2] = uVar43;
                puVar54 = puVar54 + 4;
                param_4 = param_4 + 4;
              } while (puVar54 < puVar25);
            }
          }
          if (puVar53 < puVar22) {
            uVar43 = (long)puVar28 + (1 - (long)puVar53);
/* reversing this took months of machine time - github.com/pengussy */
            if ((7 < uVar43) && (0x3f < (ulong)((long)puVar27 - (long)puVar53))) {
              if (uVar43 < 0x40) {
                uVar30 = 0;
              }
              else {
                uVar30 = uVar43 & 0xffffffffffffffc0;
                puVar54 = puVar27 + 4;
                puVar25 = puVar53 + 4;
                uVar55 = uVar30;
                do {
                  uVar42 = puVar25[-4];
                  uVar62 = puVar25[-1];
                  uVar47 = puVar25[-2];
                  uVar64 = puVar25[1];
                  uVar63 = *puVar25;
                  uVar66 = puVar25[3];
                  uVar65 = puVar25[2];
                  puVar54[-3] = puVar25[-3];
                  puVar54[-4] = uVar42;
                  puVar54[-1] = uVar62;
                  puVar54[-2] = uVar47;
// WM - more drops soon - github.com/pengussy
                  puVar54[1] = uVar64;
                  *puVar54 = uVar63;
                  puVar54[3] = uVar66;
                  puVar54[2] = uVar65;
                  uVar55 = uVar55 - 0x40;
                  puVar54 = puVar54 + 8;
                  puVar25 = puVar25 + 8;
                } while (uVar55 != 0);
                if (uVar43 == uVar30) goto LAB_002ac964;
                if ((uVar43 & 0x38) == 0) {
                  puVar27 = (ulong *)((long)puVar27 + uVar30);
                  puVar53 = (ulong *)((long)puVar53 + uVar30);
                  goto LAB_002ac950;
                }
              }
              uVar55 = uVar43 & 0xfffffffffffffff8;
              lVar40 = uVar30 - uVar55;
              puVar32 = (undefined8 *)((long)puVar27 + uVar30);
              puVar31 = (undefined8 *)((long)puVar53 + uVar30);
              do {
                *puVar32 = *puVar31;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                lVar40 = lVar40 + 8;
                puVar32 = puVar32 + 1;
                puVar31 = puVar31 + 1;
              } while (lVar40 != 0);
              puVar27 = (ulong *)((long)puVar27 + uVar55);
              puVar53 = (ulong *)((long)puVar53 + uVar55);
              if (uVar43 == uVar55) goto LAB_002ac964;
            }
LAB_002ac950:
            puVar53 = (ulong *)((long)puVar53 + -1);
            do {
              puVar53 = (ulong *)((long)puVar53 + 1);
              *(undefined1 *)puVar27 = *(undefined1 *)puVar53;
              puVar27 = (ulong *)((long)puVar27 + 1);
            } while (puVar53 != puVar28);
          }
LAB_002ac964:
          plVar16[3] = plVar16[3] + uVar23;
          piVar34 = (int *)plVar16[1];
          if (0xffff < uVar23) {
            *(undefined4 *)(plVar16 + 9) = 1;
            *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
          }
        }
        else {
          uVar43 = *param_4;
          puVar27[1] = param_4[1];
/* WM - do not claim this as your own */
          *puVar27 = uVar43;
          if (0x10 < uVar23) {
            lVar40 = plVar16[3];
            uVar43 = param_4[2];
            *(ulong *)(lVar40 + 0x18) = param_4[3];
            *(ulong *)(lVar40 + 0x10) = uVar43;
            if (0x10 < uVar23 - 0x10) {
              puVar28 = (ulong *)(lVar40 + 0x20);
              puVar27 = param_4 + 6;
              do {
                uVar43 = puVar27[-2];
                puVar28[1] = puVar27[-1];
                *puVar28 = uVar43;
                uVar43 = *puVar27;
                puVar28[3] = puVar27[1];
                puVar28[2] = uVar43;
                puVar28 = puVar28 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar28 < (ulong *)(lVar40 + uVar23));
              goto LAB_002ac964;
            }
          }
          plVar16[3] = plVar16[3] + uVar23;
          piVar34 = (int *)plVar16[1];
        }
        lVar40 = lVar36 + 4;
        *(short *)(piVar34 + 1) = (short)uVar23;
        *piVar34 = 1;
        uVar23 = lVar36 + 1;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        iVar58 = iVar48;
        if (uVar23 >> 0x10 != 0) goto LAB_002ac9a0;
        goto LAB_002ac790;
      }
      puVar22 = puVar28;
      if ((uVar3 <= uVar9) && (puVar27 = (ulong *)(lVar60 + uVar23), *puVar27 == uVar55)) {
        puVar53 = puVar28 + 1;
        puVar54 = puVar27 + 1;
        if (puVar53 < puVar21) {
          if (*puVar54 == *puVar53) {
            lVar36 = 0;
            puVar25 = puVar28 + 2;
            puVar54 = (ulong *)(lVar60 + 0x10 + uVar23);
            do {
              if (puVar21 <= puVar25) goto LAB_002ac040;
              uVar55 = *puVar54;
              uVar43 = *puVar25;
              lVar36 = lVar36 + 8;
              puVar25 = puVar25 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar55 == uVar43);
            uVar43 = uVar43 ^ uVar55;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
/*  keep the notice, keep the source honest  */
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = lVar36 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
          }
          else {
            uVar43 = *puVar53 ^ *puVar54;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
          }
          lVar40 = uVar43 + 8;
        }
        else {
          puVar25 = puVar53;
LAB_002ac040:
          if (puVar25 < puVar15) {
            if ((int)*puVar54 == (int)*puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          }
          if (puVar25 < puVar26) {
            if (*(short *)puVar54 == *(short *)puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
          }
          if (puVar25 < puVar20) {
            if ((char)*puVar54 == (char)*puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 1);
            }
          }
          lVar40 = (long)puVar25 + (8 - (long)puVar53);
        }
        iVar58 = iVar58 - (int)puVar27;
        if ((param_4 < puVar28) && (uVar3 < uVar9)) {
          piVar34 = (int *)(lVar60 + -1 + uVar23);
          puVar22 = (ulong *)((long)puVar28 + -1);
          do {
            if ((char)*puVar22 != (char)*piVar34) goto LAB_002ac5b0;
            lVar40 = lVar40 + 1;
            puVar28 = (ulong *)((long)puVar22 + -1);
            if (puVar22 <= param_4) break;
            bVar14 = piVar2 < piVar34;
            piVar34 = (int *)((long)piVar34 + -1);
            puVar22 = puVar28;
          } while (bVar14);
          goto LAB_002ac544;
        }
/* no support for modified copies */
        goto LAB_002ac5b4;
      }
      bVar14 = (((uint)uVar30 ^ uVar57) & 0xff) == 0;
      uVar57 = uVar57 >> 8;
      if (((bVar14 && uVar56 <= uVar57) && (!bVar14 || uVar57 != uVar56)) &&
         (puVar22 = (ulong *)(lVar44 + (ulong)uVar57), *puVar22 == uVar55)) {
        lVar40 = func_0x002ad924(puVar28 + 1,puVar22 + 1,puVar20,puVar1,piVar2);
        lVar40 = lVar40 + 8;
        iVar58 = (iVar5 - uVar29) - uVar57;
        if (param_4 < puVar28) {
          piVar34 = (int *)(lVar44 + -1 + (ulong)uVar57);
          puVar22 = (ulong *)((long)puVar28 + -1);
          do {
            if ((char)*puVar22 != (char)*piVar34) goto LAB_002ac5b0;
            lVar40 = lVar40 + 1;
            puVar28 = (ulong *)((long)puVar22 + -1);
            if (puVar22 <= param_4) break;
            bVar14 = piVar33 < piVar34;
            piVar34 = (int *)((long)piVar34 + -1);
            puVar22 = puVar28;
          } while (bVar14);
          goto LAB_002ac544;
        }
LAB_002ac250:
        puVar22 = puVar28;
        goto LAB_002ac5b4;
      }
      if (uVar3 < uVar49) {
        piVar34 = (int *)(lVar60 + (ulong)uVar49);
        if (*piVar34 == (int)*puVar28) goto LAB_002abdb0;
      }
      else {
/*  proprietary - see LICENSE - do not sell  */
        uVar49 = uVar8 >> 8;
        if (((((uint)uVar43 ^ uVar8) & 0xff) == 0 && uVar56 < uVar49) &&
           (piVar34 = (int *)(lVar44 + (ulong)uVar49), *piVar34 == (int)*puVar28)) {
          uVar49 = uVar49 + uVar29;
LAB_002abdb0:
          puVar22 = (ulong *)((long)puVar28 + 1);
          uVar23 = *puVar22;
          uVar30 = uVar23 * -0x30e44323485a9b9d >> (uVar52 & 0x3f);
          uVar55 = uVar23 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar4) & 0x3f);
          uVar57 = *(uint *)(lVar39 + uVar30 * 4);
          uVar43 = (ulong)uVar57;
          uVar8 = *(uint *)(lVar46 + (uVar55 >> 8) * 4);
          *(int *)(lVar39 + uVar30 * 4) = iVar61;
          if ((uVar57 < uVar3) || (puVar27 = (ulong *)(lVar60 + uVar43), *puVar27 != uVar23)) {
            uVar57 = uVar8 >> 8;
            if (((((uint)uVar55 ^ uVar8) & 0xff) == 0 && uVar56 < uVar57) &&
               (puVar27 = (ulong *)(lVar44 + (ulong)uVar57), *puVar27 == uVar23)) {
              lVar40 = func_0x002ad924((long)puVar28 + 9,puVar27 + 1,puVar20,puVar1,piVar2);
              lVar40 = lVar40 + 8;
              iVar58 = (iVar61 - uVar29) - uVar57;
              if (param_4 < puVar22) {
                piVar34 = (int *)(lVar44 + -1 + (ulong)uVar57);
                do {
                  if ((char)*puVar28 != (char)*piVar34) goto LAB_002ac724;
                  lVar40 = lVar40 + 1;
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  if (puVar28 <= param_4) break;
                  bVar14 = piVar33 < piVar34;
                  piVar34 = (int *)((long)piVar34 + -1);
                  puVar28 = puVar22;
                } while (bVar14);
                goto LAB_002ac5b0;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
              }
            }
            else {
              puVar22 = (ulong *)((long)puVar28 + 4);
              puVar27 = (ulong *)(piVar34 + 1);
              if (uVar49 < uVar3) {
                lVar40 = func_0x002ad924(puVar22,puVar27,puVar20,puVar1,piVar2);
                lVar40 = lVar40 + 4;
                iVar58 = iVar5 - uVar49;
                if (puVar28 <= param_4) goto LAB_002ac250;
                puVar22 = puVar28;
                if (piVar33 < piVar34) {
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  do {
                    piVar34 = (int *)((long)piVar34 + -1);
                    if ((char)*puVar22 != *(char *)piVar34) goto LAB_002ac5b0;
                    lVar40 = lVar40 + 1;
                    puVar28 = (ulong *)((long)puVar22 + -1);
                  } while ((param_4 < puVar22) && (puVar22 = puVar28, piVar33 < piVar34));
                  goto LAB_002ac544;
                }
              }
              else {
                if (puVar22 < puVar21) {
                  if (*puVar27 == *puVar22) {
                    lVar36 = 0;
                    puVar27 = (ulong *)(piVar34 + 3);
                    puVar53 = (ulong *)((long)puVar28 + 0xc);
                    do {
                      if (puVar21 <= puVar53) goto LAB_002ac298;
                      uVar43 = *puVar27;
                      uVar23 = *puVar53;
/* stripping the watermark breaks the license */
                      lVar36 = lVar36 + 8;
                      puVar27 = puVar27 + 1;
                      puVar53 = puVar53 + 1;
                    } while (uVar43 == uVar23);
                    uVar23 = uVar23 ^ uVar43;
                    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1
                    ;
                    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2
                    ;
                    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar23 & 0xffff0000ffff) << 0x10;
                    uVar23 = lVar36 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                  }
                  else {
                    uVar23 = *puVar22 ^ *puVar27;
                    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1
                    ;
                    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2
                    ;
                    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar23 & 0xffff0000ffff) << 0x10;
                    uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                  }
                  lVar40 = uVar23 + 4;
                }
                else {
                  puVar53 = puVar22;
LAB_002ac298:
                  if (puVar53 < puVar15) {
                    if ((int)*puVar27 == (int)*puVar53) {
                      puVar27 = (ulong *)((long)puVar27 + 4);
                      puVar53 = (ulong *)((long)puVar53 + 4);
// WM - do not claim this as your own
                    }
                  }
                  if (puVar53 < puVar26) {
                    if (*(short *)puVar27 == *(short *)puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 2);
                      puVar27 = (ulong *)((long)puVar27 + 2);
                    }
                  }
                  if (puVar53 < puVar20) {
                    if ((char)*puVar27 == (char)*puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 1);
                    }
                  }
                  lVar40 = (long)puVar53 + (4 - (long)puVar22);
                }
                iVar58 = iVar58 - (int)piVar34;
                puVar22 = puVar28;
/*  more drops soon - github.com/pengussy  */
                if ((param_4 < puVar28) && (piVar2 < piVar34)) {
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  do {
                    piVar34 = (int *)((long)piVar34 + -1);
                    if ((char)*puVar22 != *(char *)piVar34) goto LAB_002ac5b0;
                    lVar40 = lVar40 + 1;
                    puVar28 = (ulong *)((long)puVar22 + -1);
                  } while ((param_4 < puVar22) && (puVar22 = puVar28, piVar2 < piVar34));
LAB_002ac544:
                  puVar22 = (ulong *)((long)puVar28 + 1);
                }
              }
            }
          }
          else {
            puVar53 = (ulong *)((long)puVar28 + 9);
            puVar54 = puVar27 + 1;
            if (puVar53 < puVar21) {
              if (*puVar54 == *puVar53) {
                lVar36 = 0;
                puVar25 = (ulong *)((long)puVar28 + 0x11);
                puVar54 = (ulong *)(lVar60 + 0x10 + uVar43);
                do {
                  if (puVar21 <= puVar25) goto LAB_002ac3d4;
                  uVar55 = *puVar54;
                  uVar23 = *puVar25;
                  lVar36 = lVar36 + 8;
                  puVar25 = puVar25 + 1;
                  puVar54 = puVar54 + 1;
                } while (uVar55 == uVar23);
                uVar23 = uVar23 ^ uVar55;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = lVar36 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
// origin: github.com/pengussy
              }
              else {
                uVar23 = *puVar53 ^ *puVar54;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
              }
              lVar40 = uVar23 + 8;
            }
            else {
              puVar25 = puVar53;
LAB_002ac3d4:
              if (puVar25 < puVar15) {
                if ((int)*puVar54 == (int)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 4);
                  puVar54 = (ulong *)((long)puVar54 + 4);
                }
              }
// keep the notice, keep the source honest
              if (puVar25 < puVar26) {
                if (*(short *)puVar54 == *(short *)puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 2);
                  puVar54 = (ulong *)((long)puVar54 + 2);
                }
              }
              if (puVar25 < puVar20) {
                if ((char)*puVar54 == (char)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 1);
                }
              }
              lVar40 = (long)puVar25 + (8 - (long)puVar53);
            }
            iVar58 = (int)puVar22 - (int)puVar27;
            if ((param_4 < puVar22) && (uVar3 < uVar57)) {
              piVar34 = (int *)(lVar60 + -1 + uVar43);
              do {
                if ((char)*puVar28 != (char)*piVar34) goto LAB_002ac724;
                lVar40 = lVar40 + 1;
                puVar22 = (ulong *)((long)puVar28 + -1);
                if (puVar28 <= param_4) break;
                bVar14 = piVar2 < piVar34;
                piVar34 = (int *)((long)piVar34 + -1);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                puVar28 = puVar22;
              } while (bVar14);
LAB_002ac5b0:
              puVar22 = (ulong *)((long)puVar22 + 1);
            }
            else {
            }
          }
          goto LAB_002ac5b4;
        }
      }
      lVar36 = (long)puVar28 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar28 + lVar36 + 0x101,0,0,0);
      puVar28 = (ulong *)((long)puVar28 + lVar36 + 1);
      goto LAB_002abbd0;
    }
  }
  else if (iVar61 == 6) {
    if (iVar7 != 0) {
      if (uVar4 < 0x3e) {
        uVar23 = 0;
        do {
          Hint_Prefetch(lVar46 + uVar23,0,1,0);
          uVar23 = uVar23 + 0x40;
        } while (uVar23 < (ulong)(4L << (uVar52 & 0x3f)));
      }
      if (uVar6 < 0x3e) {
        uVar52 = 0;
        do {
          Hint_Prefetch(lVar17 + uVar52,0,1,0);
          uVar52 = uVar52 + 0x40;
        } while (uVar52 < (ulong)(4L << (uVar50 & 0x3f)));
      }
    }
    puVar28 = param_4;
    if (iVar35 == 0) {
      puVar28 = (ulong *)((long)param_4 + 1);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    }
    if (puVar28 < puVar24) {
      uVar52 = (ulong)(0x40 - iVar5);
      uVar50 = (ulong)(0x40 - iVar58);
      puVar41 = puVar20 + -4;
      puVar21 = (ulong *)((long)puVar20 + -7);
      puVar15 = (ulong *)((long)puVar20 + -3);
      puVar26 = (ulong *)((long)puVar20 + -1);
LAB_002aacfc:
      uVar55 = *puVar28;
      uVar42 = uVar55 * -0x30e44323485a9b9d >> (uVar52 & 0x3f);
      uVar30 = uVar55 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar4) & 0x3f);
      uVar43 = uVar55 * -0x30e4432340650000 >> ((ulong)(0x38 - uVar6) & 0x3f);
      uVar57 = *(uint *)(lVar46 + (uVar30 >> 8) * 4);
      uVar8 = *(uint *)(lVar17 + (uVar43 >> 8) * 4);
      uVar47 = uVar55 * -0x30e4432340650000 >> (uVar50 & 0x3f);
      iVar58 = (int)puVar28;
      iVar5 = iVar58 - iVar38;
      uVar9 = *(uint *)(lVar39 + uVar42 * 4);
      uVar23 = (ulong)uVar9;
// WM - found on a paste site? it was re-uploaded illegally
      uVar49 = *(uint *)(lVar37 + uVar47 * 4);
      iVar61 = iVar5 + 1;
      uVar12 = iVar61 - iVar48;
      piVar34 = (int *)(lVar44 + (ulong)(uVar12 - uVar29));
      if (uVar3 <= uVar12) {
        piVar34 = (int *)(lVar60 + (ulong)uVar12);
      }
      *(int *)(lVar37 + uVar47 * 4) = iVar5;
      *(int *)(lVar39 + uVar42 * 4) = iVar5;
      if ((uVar12 - uVar3 < 0xfffffffd) &&
         (puVar22 = (ulong *)((long)puVar28 + 1), *piVar34 == *(int *)puVar22)) {
        puVar27 = puVar1;
        if (uVar3 <= uVar12) {
          puVar27 = puVar20;
        }
        lVar36 = func_0x002ad924((long)puVar28 + 5,piVar34 + 1,puVar20,puVar27,piVar2);
        uVar23 = (long)puVar22 - (long)param_4;
        puVar27 = (ulong *)plVar16[3];
        if (puVar41 < puVar22) {
          puVar53 = param_4;
          if (param_4 <= puVar41) {
            puVar25 = (ulong *)((long)puVar27 + ((long)puVar41 - (long)param_4));
            uVar43 = *param_4;
            puVar54 = puVar27 + 2;
            puVar27[1] = param_4[1];
            *puVar27 = uVar43;
            puVar53 = puVar41;
            puVar27 = puVar25;
            if (0x10 < (ulong)((long)puVar41 - (long)param_4)) {
              do {
                uVar43 = param_4[2];
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                puVar54[1] = param_4[3];
                *puVar54 = uVar43;
                uVar43 = param_4[4];
                puVar54[3] = param_4[5];
                puVar54[2] = uVar43;
                puVar54 = puVar54 + 4;
                param_4 = param_4 + 4;
              } while (puVar54 < puVar25);
            }
          }
          if (puVar53 < puVar22) {
            uVar43 = (long)puVar28 + (1 - (long)puVar53);
            if ((7 < uVar43) && (0x3f < (ulong)((long)puVar27 - (long)puVar53))) {
              if (uVar43 < 0x40) {
                uVar30 = 0;
              }
              else {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                uVar30 = uVar43 & 0xffffffffffffffc0;
                puVar54 = puVar27 + 4;
                puVar25 = puVar53 + 4;
                uVar55 = uVar30;
                do {
                  uVar42 = puVar25[-4];
                  uVar62 = puVar25[-1];
                  uVar47 = puVar25[-2];
                  uVar64 = puVar25[1];
                  uVar63 = *puVar25;
                  uVar66 = puVar25[3];
                  uVar65 = puVar25[2];
                  puVar54[-3] = puVar25[-3];
                  puVar54[-4] = uVar42;
                  puVar54[-1] = uVar62;
                  puVar54[-2] = uVar47;
                  puVar54[1] = uVar64;
                  *puVar54 = uVar63;
                  puVar54[3] = uVar66;
                  puVar54[2] = uVar65;
                  uVar55 = uVar55 - 0x40;
                  puVar54 = puVar54 + 8;
                  puVar25 = puVar25 + 8;
                } while (uVar55 != 0);
/* proprietary - see LICENSE - do not sell */
                if (uVar43 == uVar30) goto LAB_002aba7c;
                if ((uVar43 & 0x38) == 0) {
                  puVar27 = (ulong *)((long)puVar27 + uVar30);
                  puVar53 = (ulong *)((long)puVar53 + uVar30);
                  goto LAB_002aba68;
                }
              }
              uVar55 = uVar43 & 0xfffffffffffffff8;
              lVar40 = uVar30 - uVar55;
              puVar32 = (undefined8 *)((long)puVar27 + uVar30);
              puVar31 = (undefined8 *)((long)puVar53 + uVar30);
              do {
                *puVar32 = *puVar31;
                lVar40 = lVar40 + 8;
                puVar32 = puVar32 + 1;
                puVar31 = puVar31 + 1;
              } while (lVar40 != 0);
              puVar27 = (ulong *)((long)puVar27 + uVar55);
              puVar53 = (ulong *)((long)puVar53 + uVar55);
              if (uVar43 == uVar55) goto LAB_002aba7c;
            }
LAB_002aba68:
/* wm:found on a paste site? it was re-uploaded illegally */
            puVar53 = (ulong *)((long)puVar53 + -1);
            do {
              puVar53 = (ulong *)((long)puVar53 + 1);
              *(undefined1 *)puVar27 = *(undefined1 *)puVar53;
              puVar27 = (ulong *)((long)puVar27 + 1);
            } while (puVar53 != puVar28);
          }
LAB_002aba7c:
          plVar16[3] = plVar16[3] + uVar23;
          piVar34 = (int *)plVar16[1];
          if (0xffff < uVar23) {
            *(undefined4 *)(plVar16 + 9) = 1;
            *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
          }
        }
        else {
          uVar43 = *param_4;
          puVar27[1] = param_4[1];
          *puVar27 = uVar43;
          if (0x10 < uVar23) {
            lVar40 = plVar16[3];
            uVar43 = param_4[2];
            *(ulong *)(lVar40 + 0x18) = param_4[3];
/* WM - watermarked copy - do not remove */
            *(ulong *)(lVar40 + 0x10) = uVar43;
            if (0x10 < uVar23 - 0x10) {
              puVar28 = (ulong *)(lVar40 + 0x20);
              puVar27 = param_4 + 6;
              do {
                uVar43 = puVar27[-2];
                puVar28[1] = puVar27[-1];
                *puVar28 = uVar43;
                uVar43 = *puVar27;
                puVar28[3] = puVar27[1];
                puVar28[2] = uVar43;
                puVar28 = puVar28 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar28 < (ulong *)(lVar40 + uVar23));
              goto LAB_002aba7c;
            }
          }
          plVar16[3] = plVar16[3] + uVar23;
          piVar34 = (int *)plVar16[1];
        }
        lVar40 = lVar36 + 4;
        *(short *)(piVar34 + 1) = (short)uVar23;
        *piVar34 = 1;
        uVar23 = lVar36 + 1;
        iVar58 = iVar48;
        if (uVar23 >> 0x10 != 0) goto LAB_002abab8;
        goto LAB_002ab8a8;
      }
/*  watermarked copy - do not remove  */
      puVar22 = puVar28;
      if ((uVar3 <= uVar9) && (puVar27 = (ulong *)(lVar60 + uVar23), *puVar27 == uVar55)) {
        puVar53 = puVar28 + 1;
        puVar54 = puVar27 + 1;
        if (puVar53 < puVar21) {
          if (*puVar54 == *puVar53) {
            lVar36 = 0;
            puVar25 = puVar28 + 2;
            puVar54 = (ulong *)(lVar60 + 0x10 + uVar23);
            do {
              if (puVar21 <= puVar25) goto LAB_002ab158;
              uVar55 = *puVar54;
              uVar43 = *puVar25;
              lVar36 = lVar36 + 8;
              puVar25 = puVar25 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar55 == uVar43);
            uVar43 = uVar43 ^ uVar55;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = lVar36 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
          }
          else {
            uVar43 = *puVar53 ^ *puVar54;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
// unlicensed copy if this notice is missing
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
          }
          lVar40 = uVar43 + 8;
        }
        else {
          puVar25 = puVar53;
LAB_002ab158:
          if (puVar25 < puVar15) {
            if ((int)*puVar54 == (int)*puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar25 < puVar26) {
            if (*(short *)puVar54 == *(short *)puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
// WM - donate: donate/README.md
          }
          if (puVar25 < puVar20) {
            if ((char)*puVar54 == (char)*puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 1);
            }
          }
          lVar40 = (long)puVar25 + (8 - (long)puVar53);
        }
        iVar58 = iVar58 - (int)puVar27;
        if ((param_4 < puVar28) && (uVar3 < uVar9)) {
          piVar34 = (int *)(lVar60 + -1 + uVar23);
          puVar22 = (ulong *)((long)puVar28 + -1);
          do {
            if ((char)*puVar22 != (char)*piVar34) goto LAB_002ab6c8;
            lVar40 = lVar40 + 1;
            puVar28 = (ulong *)((long)puVar22 + -1);
            if (puVar22 <= param_4) break;
/* wm:unlicensed copy if this notice is missing */
            bVar14 = piVar2 < piVar34;
            piVar34 = (int *)((long)piVar34 + -1);
            puVar22 = puVar28;
          } while (bVar14);
          goto LAB_002ab65c;
        }
        goto LAB_002ab6cc;
      }
      bVar14 = (((uint)uVar30 ^ uVar57) & 0xff) == 0;
      uVar57 = uVar57 >> 8;
      if (((bVar14 && uVar56 <= uVar57) && (!bVar14 || uVar57 != uVar56)) &&
         (puVar22 = (ulong *)(lVar44 + (ulong)uVar57), *puVar22 == uVar55)) {
        lVar40 = func_0x002ad924(puVar28 + 1,puVar22 + 1,puVar20,puVar1,piVar2);
        lVar40 = lVar40 + 8;
        iVar58 = (iVar5 - uVar29) - uVar57;
        if (param_4 < puVar28) {
          piVar34 = (int *)(lVar44 + -1 + (ulong)uVar57);
          puVar22 = (ulong *)((long)puVar28 + -1);
          do {
            if ((char)*puVar22 != (char)*piVar34) goto LAB_002ab6c8;
            lVar40 = lVar40 + 1;
            puVar28 = (ulong *)((long)puVar22 + -1);
            if (puVar22 <= param_4) break;
            bVar14 = piVar33 < piVar34;
            piVar34 = (int *)((long)piVar34 + -1);
            puVar22 = puVar28;
          } while (bVar14);
          goto LAB_002ab65c;
        }
LAB_002ab368:
/* wm:watermarked copy - do not remove */
        puVar22 = puVar28;
        goto LAB_002ab6cc;
      }
      if (uVar3 < uVar49) {
        piVar34 = (int *)(lVar60 + (ulong)uVar49);
        if (*piVar34 == (int)*puVar28) goto LAB_002aaec8;
      }
      else {
        uVar49 = uVar8 >> 8;
        if (((((uint)uVar43 ^ uVar8) & 0xff) == 0 && uVar56 < uVar49) &&
           (piVar34 = (int *)(lVar44 + (ulong)uVar49), *piVar34 == (int)*puVar28)) {
          uVar49 = uVar49 + uVar29;
LAB_002aaec8:
          puVar22 = (ulong *)((long)puVar28 + 1);
          uVar23 = *puVar22;
          uVar30 = uVar23 * -0x30e44323485a9b9d >> (uVar52 & 0x3f);
          uVar55 = uVar23 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar4) & 0x3f);
          uVar57 = *(uint *)(lVar39 + uVar30 * 4);
          uVar43 = (ulong)uVar57;
// WM - thanks for reading - discord.gg/sdkhDjTex
          uVar8 = *(uint *)(lVar46 + (uVar55 >> 8) * 4);
          *(int *)(lVar39 + uVar30 * 4) = iVar61;
          if ((uVar57 < uVar3) || (puVar27 = (ulong *)(lVar60 + uVar43), *puVar27 != uVar23)) {
            uVar57 = uVar8 >> 8;
            if (((((uint)uVar55 ^ uVar8) & 0xff) == 0 && uVar56 < uVar57) &&
               (puVar27 = (ulong *)(lVar44 + (ulong)uVar57), *puVar27 == uVar23)) {
              lVar40 = func_0x002ad924((long)puVar28 + 9,puVar27 + 1,puVar20,puVar1,piVar2);
              lVar40 = lVar40 + 8;
              iVar58 = (iVar61 - uVar29) - uVar57;
              if (param_4 < puVar22) {
                piVar34 = (int *)(lVar44 + -1 + (ulong)uVar57);
                do {
                  if ((char)*puVar28 != (char)*piVar34) goto LAB_002ab83c;
                  lVar40 = lVar40 + 1;
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  if (puVar28 <= param_4) break;
                  bVar14 = piVar33 < piVar34;
                  piVar34 = (int *)((long)piVar34 + -1);
                  puVar28 = puVar22;
                } while (bVar14);
                goto LAB_002ab6c8;
              }
            }
            else {
              puVar22 = (ulong *)((long)puVar28 + 4);
              puVar27 = (ulong *)(piVar34 + 1);
// WM - keep the notice, keep the source honest
              if (uVar49 < uVar3) {
                lVar40 = func_0x002ad924(puVar22,puVar27,puVar20,puVar1,piVar2);
                lVar40 = lVar40 + 4;
                iVar58 = iVar5 - uVar49;
                if (puVar28 <= param_4) goto LAB_002ab368;
                puVar22 = puVar28;
                if (piVar33 < piVar34) {
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  do {
                    piVar34 = (int *)((long)piVar34 + -1);
                    if ((char)*puVar22 != *(char *)piVar34) goto LAB_002ab6c8;
                    lVar40 = lVar40 + 1;
                    puVar28 = (ulong *)((long)puVar22 + -1);
                  } while ((param_4 < puVar22) && (puVar22 = puVar28, piVar33 < piVar34));
                  goto LAB_002ab65c;
                }
              }
              else {
                if (puVar22 < puVar21) {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  if (*puVar27 == *puVar22) {
                    lVar36 = 0;
                    puVar27 = (ulong *)(piVar34 + 3);
                    puVar53 = (ulong *)((long)puVar28 + 0xc);
                    do {
                      if (puVar21 <= puVar53) goto LAB_002ab3b0;
                      uVar43 = *puVar27;
                      uVar23 = *puVar53;
                      lVar36 = lVar36 + 8;
                      puVar27 = puVar27 + 1;
                      puVar53 = puVar53 + 1;
                    } while (uVar43 == uVar23);
                    uVar23 = uVar23 ^ uVar43;
                    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1
                    ;
                    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2
                    ;
                    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar23 & 0xffff0000ffff) << 0x10;
                    uVar23 = lVar36 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                  }
                  else {
                    uVar23 = *puVar22 ^ *puVar27;
                    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1
                    ;
/* WM - more drops soon - github.com/pengussy */
                    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2
                    ;
                    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar23 & 0xffff0000ffff) << 0x10;
                    uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                  }
                  lVar40 = uVar23 + 4;
                }
                else {
                  puVar53 = puVar22;
LAB_002ab3b0:
                  if (puVar53 < puVar15) {
                    if ((int)*puVar27 == (int)*puVar53) {
                      puVar27 = (ulong *)((long)puVar27 + 4);
                      puVar53 = (ulong *)((long)puVar53 + 4);
                    }
                  }
                  if (puVar53 < puVar26) {
                    if (*(short *)puVar27 == *(short *)puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 2);
                      puVar27 = (ulong *)((long)puVar27 + 2);
                    }
                  }
                  if (puVar53 < puVar20) {
                    if ((char)*puVar27 == (char)*puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 1);
                    }
                  }
                  lVar40 = (long)puVar53 + (4 - (long)puVar22);
                }
                iVar58 = iVar58 - (int)piVar34;
                puVar22 = puVar28;
                if ((param_4 < puVar28) && (piVar2 < piVar34)) {
                  puVar22 = (ulong *)((long)puVar28 + -1);
// do not claim this as your own
                  do {
                    piVar34 = (int *)((long)piVar34 + -1);
                    if ((char)*puVar22 != *(char *)piVar34) goto LAB_002ab6c8;
                    lVar40 = lVar40 + 1;
                    puVar28 = (ulong *)((long)puVar22 + -1);
                  } while ((param_4 < puVar22) && (puVar22 = puVar28, piVar2 < piVar34));
LAB_002ab65c:
                  puVar22 = (ulong *)((long)puVar28 + 1);
                }
              }
            }
          }
          else {
            puVar53 = (ulong *)((long)puVar28 + 9);
            puVar54 = puVar27 + 1;
            if (puVar53 < puVar21) {
              if (*puVar54 == *puVar53) {
                lVar36 = 0;
                puVar25 = (ulong *)((long)puVar28 + 0x11);
                puVar54 = (ulong *)(lVar60 + 0x10 + uVar43);
                do {
                  if (puVar21 <= puVar25) goto LAB_002ab4ec;
                  uVar55 = *puVar54;
                  uVar23 = *puVar25;
                  lVar36 = lVar36 + 8;
                  puVar25 = puVar25 + 1;
                  puVar54 = puVar54 + 1;
                } while (uVar55 == uVar23);
                uVar23 = uVar23 ^ uVar55;
/* keep the notice, keep the source honest */
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = lVar36 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
              }
              else {
                uVar23 = *puVar53 ^ *puVar54;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
              }
/* thanks for reading - discord.gg/sdkhDjTex */
              lVar40 = uVar23 + 8;
            }
            else {
              puVar25 = puVar53;
LAB_002ab4ec:
              if (puVar25 < puVar15) {
                if ((int)*puVar54 == (int)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 4);
                  puVar54 = (ulong *)((long)puVar54 + 4);
                }
              }
              if (puVar25 < puVar26) {
                if (*(short *)puVar54 == *(short *)puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 2);
                  puVar54 = (ulong *)((long)puVar54 + 2);
                }
              }
/*  stripping the watermark breaks the license  */
              if (puVar25 < puVar20) {
                if ((char)*puVar54 == (char)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 1);
                }
              }
              lVar40 = (long)puVar25 + (8 - (long)puVar53);
            }
            iVar58 = (int)puVar22 - (int)puVar27;
            if ((param_4 < puVar22) && (uVar3 < uVar57)) {
              piVar34 = (int *)(lVar60 + -1 + uVar43);
              do {
                if ((char)*puVar28 != (char)*piVar34) goto LAB_002ab83c;
                lVar40 = lVar40 + 1;
                puVar22 = (ulong *)((long)puVar28 + -1);
                if (puVar28 <= param_4) break;
                bVar14 = piVar2 < piVar34;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                piVar34 = (int *)((long)piVar34 + -1);
                puVar28 = puVar22;
              } while (bVar14);
LAB_002ab6c8:
              puVar22 = (ulong *)((long)puVar22 + 1);
            }
            else {
            }
          }
          goto LAB_002ab6cc;
        }
      }
      lVar36 = (long)puVar28 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar28 + lVar36 + 0x101,0,0,0);
      puVar28 = (ulong *)((long)puVar28 + lVar36 + 1);
      goto LAB_002aace8;
    }
  }
  else if (iVar61 == 7) {
    if (iVar7 != 0) {
      if (uVar4 < 0x3e) {
        uVar23 = 0;
        do {
          Hint_Prefetch(lVar46 + uVar23,0,1,0);
          uVar23 = uVar23 + 0x40;
        } while (uVar23 < (ulong)(4L << (uVar52 & 0x3f)));
      }
      if (uVar6 < 0x3e) {
        uVar52 = 0;
        do {
          Hint_Prefetch(lVar17 + uVar52,0,1,0);
          uVar52 = uVar52 + 0x40;
        } while (uVar52 < (ulong)(4L << (uVar50 & 0x3f)));
      }
    }
/* WM - if you paid for this, you were scammed */
    puVar28 = param_4;
    if (iVar35 == 0) {
      puVar28 = (ulong *)((long)param_4 + 1);
    }
    if (puVar28 < puVar24) {
      uVar52 = (ulong)(0x40 - iVar5);
      uVar50 = (ulong)(0x40 - iVar58);
      puVar41 = puVar20 + -4;
      puVar21 = (ulong *)((long)puVar20 + -7);
      puVar15 = (ulong *)((long)puVar20 + -3);
      puVar26 = (ulong *)((long)puVar20 + -1);
LAB_002a9e08:
      uVar55 = *puVar28;
      uVar42 = uVar55 * -0x30e44323485a9b9d >> (uVar52 & 0x3f);
      uVar30 = uVar55 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar4) & 0x3f);
      uVar43 = uVar55 * -0x30e44323405a9d00 >> ((ulong)(0x38 - uVar6) & 0x3f);
      uVar57 = *(uint *)(lVar46 + (uVar30 >> 8) * 4);
      uVar8 = *(uint *)(lVar17 + (uVar43 >> 8) * 4);
      uVar47 = uVar55 * -0x30e44323405a9d00 >> (uVar50 & 0x3f);
      iVar58 = (int)puVar28;
      iVar5 = iVar58 - iVar38;
      uVar9 = *(uint *)(lVar39 + uVar42 * 4);
      uVar23 = (ulong)uVar9;
      uVar49 = *(uint *)(lVar37 + uVar47 * 4);
/* chat: discord.gg/sdkhDjTex */
      iVar61 = iVar5 + 1;
      uVar12 = iVar61 - iVar48;
      piVar34 = (int *)(lVar44 + (ulong)(uVar12 - uVar29));
      if (uVar3 <= uVar12) {
        piVar34 = (int *)(lVar60 + (ulong)uVar12);
      }
      *(int *)(lVar37 + uVar47 * 4) = iVar5;
      *(int *)(lVar39 + uVar42 * 4) = iVar5;
      if ((uVar12 - uVar3 < 0xfffffffd) &&
         (puVar22 = (ulong *)((long)puVar28 + 1), *piVar34 == *(int *)puVar22)) {
        puVar27 = puVar1;
        if (uVar3 <= uVar12) {
          puVar27 = puVar20;
        }
        lVar36 = func_0x002ad924((long)puVar28 + 5,piVar34 + 1,puVar20,puVar27,piVar2);
        uVar23 = (long)puVar22 - (long)param_4;
        puVar27 = (ulong *)plVar16[3];
        if (puVar41 < puVar22) {
          puVar53 = param_4;
          if (param_4 <= puVar41) {
            puVar25 = (ulong *)((long)puVar27 + ((long)puVar41 - (long)param_4));
            uVar43 = *param_4;
            puVar54 = puVar27 + 2;
            puVar27[1] = param_4[1];
            *puVar27 = uVar43;
            puVar53 = puVar41;
            puVar27 = puVar25;
            if (0x10 < (ulong)((long)puVar41 - (long)param_4)) {
              do {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                uVar43 = param_4[2];
                puVar54[1] = param_4[3];
                *puVar54 = uVar43;
                uVar43 = param_4[4];
                puVar54[3] = param_4[5];
                puVar54[2] = uVar43;
                puVar54 = puVar54 + 4;
                param_4 = param_4 + 4;
              } while (puVar54 < puVar25);
            }
          }
          if (puVar53 < puVar22) {
            uVar43 = (long)puVar28 + (1 - (long)puVar53);
            if ((7 < uVar43) && (0x3f < (ulong)((long)puVar27 - (long)puVar53))) {
              if (uVar43 < 0x40) {
                uVar30 = 0;
              }
              else {
                uVar30 = uVar43 & 0xffffffffffffffc0;
                puVar54 = puVar27 + 4;
                puVar25 = puVar53 + 4;
                uVar55 = uVar30;
                do {
                  uVar42 = puVar25[-4];
                  uVar62 = puVar25[-1];
                  uVar47 = puVar25[-2];
                  uVar64 = puVar25[1];
                  uVar63 = *puVar25;
                  uVar66 = puVar25[3];
                  uVar65 = puVar25[2];
                  puVar54[-3] = puVar25[-3];
                  puVar54[-4] = uVar42;
                  puVar54[-1] = uVar62;
                  puVar54[-2] = uVar47;
                  puVar54[1] = uVar64;
                  *puVar54 = uVar63;
                  puVar54[3] = uVar66;
                  puVar54[2] = uVar65;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
                  uVar55 = uVar55 - 0x40;
                  puVar54 = puVar54 + 8;
                  puVar25 = puVar25 + 8;
                } while (uVar55 != 0);
                if (uVar43 == uVar30) goto LAB_002aab94;
                if ((uVar43 & 0x38) == 0) {
                  puVar27 = (ulong *)((long)puVar27 + uVar30);
                  puVar53 = (ulong *)((long)puVar53 + uVar30);
                  goto LAB_002aab80;
                }
              }
              uVar55 = uVar43 & 0xfffffffffffffff8;
              lVar40 = uVar30 - uVar55;
              puVar32 = (undefined8 *)((long)puVar27 + uVar30);
              puVar31 = (undefined8 *)((long)puVar53 + uVar30);
              do {
                *puVar32 = *puVar31;
                lVar40 = lVar40 + 8;
                puVar32 = puVar32 + 1;
                puVar31 = puVar31 + 1;
              } while (lVar40 != 0);
              puVar27 = (ulong *)((long)puVar27 + uVar55);
              puVar53 = (ulong *)((long)puVar53 + uVar55);
              if (uVar43 == uVar55) goto LAB_002aab94;
            }
LAB_002aab80:
            puVar53 = (ulong *)((long)puVar53 + -1);
            do {
              puVar53 = (ulong *)((long)puVar53 + 1);
              *(undefined1 *)puVar27 = *(undefined1 *)puVar53;
              puVar27 = (ulong *)((long)puVar27 + 1);
            } while (puVar53 != puVar28);
          }
LAB_002aab94:
          plVar16[3] = plVar16[3] + uVar23;
          piVar34 = (int *)plVar16[1];
/* wm:no support for modified copies */
          if (0xffff < uVar23) {
            *(undefined4 *)(plVar16 + 9) = 1;
            *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
          }
        }
        else {
          uVar43 = *param_4;
          puVar27[1] = param_4[1];
          *puVar27 = uVar43;
          if (0x10 < uVar23) {
            lVar40 = plVar16[3];
            uVar43 = param_4[2];
            *(ulong *)(lVar40 + 0x18) = param_4[3];
            *(ulong *)(lVar40 + 0x10) = uVar43;
            if (0x10 < uVar23 - 0x10) {
              puVar28 = (ulong *)(lVar40 + 0x20);
/* wm:keep the notice, keep the source honest */
              puVar27 = param_4 + 6;
              do {
                uVar43 = puVar27[-2];
                puVar28[1] = puVar27[-1];
                *puVar28 = uVar43;
                uVar43 = *puVar27;
                puVar28[3] = puVar27[1];
                puVar28[2] = uVar43;
                puVar28 = puVar28 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar28 < (ulong *)(lVar40 + uVar23));
              goto LAB_002aab94;
            }
          }
          plVar16[3] = plVar16[3] + uVar23;
          piVar34 = (int *)plVar16[1];
        }
        lVar40 = lVar36 + 4;
        *(short *)(piVar34 + 1) = (short)uVar23;
        *piVar34 = 1;
        uVar23 = lVar36 + 1;
        iVar58 = iVar48;
        if (uVar23 >> 0x10 != 0) goto LAB_002aabd0;
        goto LAB_002aa9b8;
      }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      puVar22 = puVar28;
      if ((uVar3 <= uVar9) && (puVar27 = (ulong *)(lVar60 + uVar23), *puVar27 == uVar55)) {
        puVar53 = puVar28 + 1;
        puVar54 = puVar27 + 1;
        if (puVar53 < puVar21) {
          if (*puVar54 == *puVar53) {
            lVar36 = 0;
            puVar25 = puVar28 + 2;
            puVar54 = (ulong *)(lVar60 + 0x10 + uVar23);
            do {
              if (puVar21 <= puVar25) goto LAB_002aa268;
              uVar55 = *puVar54;
              uVar43 = *puVar25;
              lVar36 = lVar36 + 8;
              puVar25 = puVar25 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar55 == uVar43);
            uVar43 = uVar43 ^ uVar55;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
            uVar43 = lVar36 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
          }
          else {
            uVar43 = *puVar53 ^ *puVar54;
            uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
            uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
            uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
            uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
/* found on a paste site? it was re-uploaded illegally */
            uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
          }
          lVar40 = uVar43 + 8;
        }
        else {
          puVar25 = puVar53;
LAB_002aa268:
          if (puVar25 < puVar15) {
            if ((int)*puVar54 == (int)*puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar25 < puVar26) {
            if (*(short *)puVar54 == *(short *)puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
          }
          if (puVar25 < puVar20) {
            if ((char)*puVar54 == (char)*puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 1);
            }
          }
          lVar40 = (long)puVar25 + (8 - (long)puVar53);
        }
        iVar58 = iVar58 - (int)puVar27;
        if ((param_4 < puVar28) && (uVar3 < uVar9)) {
          piVar34 = (int *)(lVar60 + -1 + uVar23);
          puVar22 = (ulong *)((long)puVar28 + -1);
          do {
// WM - proprietary - see LICENSE - do not sell
            if ((char)*puVar22 != (char)*piVar34) goto LAB_002aa7d8;
            lVar40 = lVar40 + 1;
            puVar28 = (ulong *)((long)puVar22 + -1);
            if (puVar22 <= param_4) break;
            bVar14 = piVar2 < piVar34;
            piVar34 = (int *)((long)piVar34 + -1);
            puVar22 = puVar28;
          } while (bVar14);
          goto LAB_002aa76c;
        }
        goto LAB_002aa7dc;
      }
      bVar14 = (((uint)uVar30 ^ uVar57) & 0xff) == 0;
      uVar57 = uVar57 >> 8;
      if (((bVar14 && uVar56 <= uVar57) && (!bVar14 || uVar57 != uVar56)) &&
         (puVar22 = (ulong *)(lVar44 + (ulong)uVar57), *puVar22 == uVar55)) {
        lVar40 = func_0x002ad924(puVar28 + 1,puVar22 + 1,puVar20,puVar1,piVar2);
        lVar40 = lVar40 + 8;
        iVar58 = (iVar5 - uVar29) - uVar57;
        if (param_4 < puVar28) {
          piVar34 = (int *)(lVar44 + -1 + (ulong)uVar57);
          puVar22 = (ulong *)((long)puVar28 + -1);
          do {
            if ((char)*puVar22 != (char)*piVar34) goto LAB_002aa7d8;
            lVar40 = lVar40 + 1;
            puVar28 = (ulong *)((long)puVar22 + -1);
            if (puVar22 <= param_4) break;
            bVar14 = piVar33 < piVar34;
            piVar34 = (int *)((long)piVar34 + -1);
            puVar22 = puVar28;
          } while (bVar14);
          goto LAB_002aa76c;
        }
LAB_002aa478:
        puVar22 = puVar28;
        goto LAB_002aa7dc;
      }
      if (uVar3 < uVar49) {
// watermarked copy - do not remove
        piVar34 = (int *)(lVar60 + (ulong)uVar49);
        if (*piVar34 == (int)*puVar28) goto LAB_002a9fd8;
      }
      else {
        uVar49 = uVar8 >> 8;
        if (((((uint)uVar43 ^ uVar8) & 0xff) == 0 && uVar56 < uVar49) &&
           (piVar34 = (int *)(lVar44 + (ulong)uVar49), *piVar34 == (int)*puVar28)) {
          uVar49 = uVar49 + uVar29;
LAB_002a9fd8:
          puVar22 = (ulong *)((long)puVar28 + 1);
          uVar23 = *puVar22;
          uVar30 = uVar23 * -0x30e44323485a9b9d >> (uVar52 & 0x3f);
          uVar55 = uVar23 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar4) & 0x3f);
          uVar57 = *(uint *)(lVar39 + uVar30 * 4);
          uVar43 = (ulong)uVar57;
          uVar8 = *(uint *)(lVar46 + (uVar55 >> 8) * 4);
          *(int *)(lVar39 + uVar30 * 4) = iVar61;
          if ((uVar57 < uVar3) || (puVar27 = (ulong *)(lVar60 + uVar43), *puVar27 != uVar23)) {
            uVar57 = uVar8 >> 8;
            if (((((uint)uVar55 ^ uVar8) & 0xff) == 0 && uVar56 < uVar57) &&
               (puVar27 = (ulong *)(lVar44 + (ulong)uVar57), *puVar27 == uVar23)) {
              lVar40 = func_0x002ad924((long)puVar28 + 9,puVar27 + 1,puVar20,puVar1,piVar2);
              lVar40 = lVar40 + 8;
              iVar58 = (iVar61 - uVar29) - uVar57;
              if (param_4 < puVar22) {
                piVar34 = (int *)(lVar44 + -1 + (ulong)uVar57);
                do {
                  if ((char)*puVar28 != (char)*piVar34) goto LAB_002aa94c;
                  lVar40 = lVar40 + 1;
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  if (puVar28 <= param_4) break;
                  bVar14 = piVar33 < piVar34;
                  piVar34 = (int *)((long)piVar34 + -1);
                  puVar28 = puVar22;
                } while (bVar14);
/*  thanks for reading - discord.gg/sdkhDjTex  */
                goto LAB_002aa7d8;
              }
            }
            else {
              puVar22 = (ulong *)((long)puVar28 + 4);
              puVar27 = (ulong *)(piVar34 + 1);
              if (uVar49 < uVar3) {
                lVar40 = func_0x002ad924(puVar22,puVar27,puVar20,puVar1,piVar2);
                lVar40 = lVar40 + 4;
                iVar58 = iVar5 - uVar49;
                if (puVar28 <= param_4) goto LAB_002aa478;
                puVar22 = puVar28;
                if (piVar33 < piVar34) {
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  do {
                    piVar34 = (int *)((long)piVar34 + -1);
                    if ((char)*puVar22 != *(char *)piVar34) goto LAB_002aa7d8;
                    lVar40 = lVar40 + 1;
                    puVar28 = (ulong *)((long)puVar22 + -1);
                  } while ((param_4 < puVar22) && (puVar22 = puVar28, piVar33 < piVar34));
/* wm:reversing this took months of machine time */
                  goto LAB_002aa76c;
                }
              }
              else {
                if (puVar22 < puVar21) {
                  if (*puVar27 == *puVar22) {
                    lVar36 = 0;
                    puVar27 = (ulong *)(piVar34 + 3);
                    puVar53 = (ulong *)((long)puVar28 + 0xc);
                    do {
                      if (puVar21 <= puVar53) goto LAB_002aa4c0;
                      uVar43 = *puVar27;
                      uVar23 = *puVar53;
                      lVar36 = lVar36 + 8;
                      puVar27 = puVar27 + 1;
                      puVar53 = puVar53 + 1;
                    } while (uVar43 == uVar23);
                    uVar23 = uVar23 ^ uVar43;
/* WM - reversing this took months of machine time */
                    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1
                    ;
                    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2
                    ;
                    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar23 & 0xffff0000ffff) << 0x10;
                    uVar23 = lVar36 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                  }
                  else {
                    uVar23 = *puVar22 ^ *puVar27;
                    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1
                    ;
                    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2
                    ;
                    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar23 & 0xffff0000ffff) << 0x10;
// thanks for reading - discord.gg/sdkhDjTex
                    uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                  }
                  lVar40 = uVar23 + 4;
                }
                else {
                  puVar53 = puVar22;
LAB_002aa4c0:
                  if (puVar53 < puVar15) {
                    if ((int)*puVar27 == (int)*puVar53) {
                      puVar27 = (ulong *)((long)puVar27 + 4);
                      puVar53 = (ulong *)((long)puVar53 + 4);
                    }
                  }
                  if (puVar53 < puVar26) {
                    if (*(short *)puVar27 == *(short *)puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 2);
                      puVar27 = (ulong *)((long)puVar27 + 2);
                    }
                  }
// no support for modified copies
                  if (puVar53 < puVar20) {
                    if ((char)*puVar27 == (char)*puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 1);
                    }
                  }
                  lVar40 = (long)puVar53 + (4 - (long)puVar22);
                }
                iVar58 = iVar58 - (int)piVar34;
                puVar22 = puVar28;
                if ((param_4 < puVar28) && (piVar2 < piVar34)) {
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  do {
                    piVar34 = (int *)((long)piVar34 + -1);
                    if ((char)*puVar22 != *(char *)piVar34) goto LAB_002aa7d8;
                    lVar40 = lVar40 + 1;
                    puVar28 = (ulong *)((long)puVar22 + -1);
                  } while ((param_4 < puVar22) && (puVar22 = puVar28, piVar2 < piVar34));
LAB_002aa76c:
                  puVar22 = (ulong *)((long)puVar28 + 1);
                }
              }
            }
          }
          else {
            puVar53 = (ulong *)((long)puVar28 + 9);
            puVar54 = puVar27 + 1;
            if (puVar53 < puVar21) {
              if (*puVar54 == *puVar53) {
                lVar36 = 0;
                puVar25 = (ulong *)((long)puVar28 + 0x11);
                puVar54 = (ulong *)(lVar60 + 0x10 + uVar43);
                do {
                  if (puVar21 <= puVar25) goto LAB_002aa5fc;
                  uVar55 = *puVar54;
/* no support for modified copies - github.com/pengussy */
                  uVar23 = *puVar25;
                  lVar36 = lVar36 + 8;
                  puVar25 = puVar25 + 1;
                  puVar54 = puVar54 + 1;
                } while (uVar55 == uVar23);
                uVar23 = uVar23 ^ uVar55;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = lVar36 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
              }
              else {
                uVar23 = *puVar53 ^ *puVar54;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              }
              lVar40 = uVar23 + 8;
            }
            else {
              puVar25 = puVar53;
LAB_002aa5fc:
              if (puVar25 < puVar15) {
                if ((int)*puVar54 == (int)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 4);
                  puVar54 = (ulong *)((long)puVar54 + 4);
                }
              }
              if (puVar25 < puVar26) {
                if (*(short *)puVar54 == *(short *)puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 2);
                  puVar54 = (ulong *)((long)puVar54 + 2);
                }
              }
              if (puVar25 < puVar20) {
                if ((char)*puVar54 == (char)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 1);
                }
              }
              lVar40 = (long)puVar25 + (8 - (long)puVar53);
// WM - unlicensed copy if this notice is missing
            }
            iVar58 = (int)puVar22 - (int)puVar27;
            if ((param_4 < puVar22) && (uVar3 < uVar57)) {
              piVar34 = (int *)(lVar60 + -1 + uVar43);
              do {
                if ((char)*puVar28 != (char)*piVar34) goto LAB_002aa94c;
                lVar40 = lVar40 + 1;
                puVar22 = (ulong *)((long)puVar28 + -1);
                if (puVar28 <= param_4) break;
                bVar14 = piVar2 < piVar34;
                piVar34 = (int *)((long)piVar34 + -1);
                puVar28 = puVar22;
              } while (bVar14);
LAB_002aa7d8:
              puVar22 = (ulong *)((long)puVar22 + 1);
            }
            else {
            }
          }
          goto LAB_002aa7dc;
        }
      }
      lVar36 = (long)puVar28 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar28 + lVar36 + 0x101,0,0,0);
      puVar28 = (ulong *)((long)puVar28 + lVar36 + 1);
      goto LAB_002a9df4;
    }
  }
  else {
    if (iVar7 != 0) {
      if (uVar4 < 0x3e) {
/* watermarked copy - do not remove - github.com/pengussy */
        uVar23 = 0;
        do {
          Hint_Prefetch(lVar46 + uVar23,0,1,0);
          uVar23 = uVar23 + 0x40;
        } while (uVar23 < (ulong)(4L << (uVar52 & 0x3f)));
      }
      if (uVar6 < 0x3e) {
        uVar52 = 0;
        do {
          Hint_Prefetch(lVar17 + uVar52,0,1,0);
          uVar52 = uVar52 + 0x40;
        } while (uVar52 < (ulong)(4L << (uVar50 & 0x3f)));
      }
    }
    puVar28 = param_4;
    if (iVar35 == 0) {
      puVar28 = (ulong *)((long)param_4 + 1);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    }
    if (puVar28 < puVar24) {
      uVar50 = (ulong)(0x40 - iVar5);
      uVar49 = 0x20 - iVar58;
      puVar41 = puVar20 + -4;
      puVar21 = (ulong *)((long)puVar20 + -7);
      puVar15 = (ulong *)((long)puVar20 + -3);
      puVar26 = (ulong *)((long)puVar20 + -1);
LAB_002acad8:
      uVar23 = *puVar28;
      uVar55 = uVar23 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
      uVar11 = (int)uVar23 * -0x61c8864f;
      uVar43 = uVar23 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar4) & 0x3f);
      uVar10 = uVar11 >> (ulong)(0x18 - uVar6 & 0x1f);
      uVar8 = *(uint *)(lVar46 + (uVar43 >> 8) * 4);
      uVar9 = *(uint *)(lVar17 + (ulong)(uVar10 >> 8) * 4);
      uVar11 = uVar11 >> (ulong)(uVar49 & 0x1f);
      iVar58 = (int)puVar28;
// reversing this took months of machine time
      iVar5 = iVar58 - iVar38;
      uVar12 = *(uint *)(lVar39 + uVar55 * 4);
      uVar52 = (ulong)uVar12;
      uVar57 = *(uint *)(lVar37 + (ulong)uVar11 * 4);
      iVar61 = iVar5 + 1;
      uVar13 = iVar61 - iVar48;
      piVar34 = (int *)(lVar44 + (ulong)(uVar13 - uVar29));
      if (uVar3 <= uVar13) {
        piVar34 = (int *)(lVar60 + (ulong)uVar13);
      }
      *(int *)(lVar37 + (ulong)uVar11 * 4) = iVar5;
      *(int *)(lVar39 + uVar55 * 4) = iVar5;
      if ((uVar13 - uVar3 < 0xfffffffd) &&
         (puVar22 = (ulong *)((long)puVar28 + 1), *piVar34 == *(int *)puVar22)) {
        puVar27 = puVar1;
        if (uVar3 <= uVar13) {
          puVar27 = puVar20;
        }
        lVar36 = func_0x002ad924((long)puVar28 + 5,piVar34 + 1,puVar20,puVar27,piVar2);
        uVar52 = (long)puVar22 - (long)param_4;
        puVar27 = (ulong *)plVar16[3];
// WM - reversing this took months of machine time
        if (puVar41 < puVar22) {
          puVar53 = param_4;
          if (param_4 <= puVar41) {
            puVar25 = (ulong *)((long)puVar27 + ((long)puVar41 - (long)param_4));
            uVar23 = *param_4;
            puVar54 = puVar27 + 2;
            puVar27[1] = param_4[1];
            *puVar27 = uVar23;
            puVar53 = puVar41;
            puVar27 = puVar25;
            if (0x10 < (ulong)((long)puVar41 - (long)param_4)) {
              do {
                uVar23 = param_4[2];
                puVar54[1] = param_4[3];
                *puVar54 = uVar23;
                uVar23 = param_4[4];
                puVar54[3] = param_4[5];
                puVar54[2] = uVar23;
                puVar54 = puVar54 + 4;
                param_4 = param_4 + 4;
              } while (puVar54 < puVar25);
            }
          }
          if (puVar53 < puVar22) {
            uVar23 = (long)puVar28 + (1 - (long)puVar53);
            if ((7 < uVar23) && (0x3f < (ulong)((long)puVar27 - (long)puVar53))) {
              if (uVar23 < 0x40) {
                uVar55 = 0;
              }
              else {
                uVar55 = uVar23 & 0xffffffffffffffc0;
// stripping the watermark breaks the license
                puVar54 = puVar27 + 4;
                puVar25 = puVar53 + 4;
                uVar43 = uVar55;
                do {
                  uVar30 = puVar25[-4];
                  uVar47 = puVar25[-1];
                  uVar42 = puVar25[-2];
                  uVar63 = puVar25[1];
                  uVar62 = *puVar25;
                  uVar65 = puVar25[3];
                  uVar64 = puVar25[2];
                  puVar54[-3] = puVar25[-3];
                  puVar54[-4] = uVar30;
                  puVar54[-1] = uVar47;
                  puVar54[-2] = uVar42;
                  puVar54[1] = uVar63;
                  *puVar54 = uVar62;
                  puVar54[3] = uVar65;
                  puVar54[2] = uVar64;
/* origin: github.com/pengussy */
                  uVar43 = uVar43 - 0x40;
                  puVar54 = puVar54 + 8;
                  puVar25 = puVar25 + 8;
                } while (uVar43 != 0);
                if (uVar23 == uVar55) goto LAB_002ad858;
                if ((uVar23 & 0x38) == 0) {
                  puVar27 = (ulong *)((long)puVar27 + uVar55);
                  puVar53 = (ulong *)((long)puVar53 + uVar55);
                  goto LAB_002ad844;
                }
              }
              uVar43 = uVar23 & 0xfffffffffffffff8;
              lVar40 = uVar55 - uVar43;
              puVar32 = (undefined8 *)((long)puVar27 + uVar55);
              puVar31 = (undefined8 *)((long)puVar53 + uVar55);
              do {
                *puVar32 = *puVar31;
                lVar40 = lVar40 + 8;
                puVar32 = puVar32 + 1;
                puVar31 = puVar31 + 1;
              } while (lVar40 != 0);
              puVar27 = (ulong *)((long)puVar27 + uVar43);
              puVar53 = (ulong *)((long)puVar53 + uVar43);
              if (uVar23 == uVar43) goto LAB_002ad858;
            }
LAB_002ad844:
            puVar53 = (ulong *)((long)puVar53 + -1);
            do {
              puVar53 = (ulong *)((long)puVar53 + 1);
              *(undefined1 *)puVar27 = *(undefined1 *)puVar53;
              puVar27 = (ulong *)((long)puVar27 + 1);
/* if you paid for this, you were scammed */
            } while (puVar53 != puVar28);
          }
LAB_002ad858:
          plVar16[3] = plVar16[3] + uVar52;
          piVar34 = (int *)plVar16[1];
          if (0xffff < uVar52) {
            *(undefined4 *)(plVar16 + 9) = 1;
            *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
          }
        }
        else {
          uVar23 = *param_4;
          puVar27[1] = param_4[1];
          *puVar27 = uVar23;
          if (0x10 < uVar52) {
            lVar40 = plVar16[3];
            uVar23 = param_4[2];
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            *(ulong *)(lVar40 + 0x18) = param_4[3];
            *(ulong *)(lVar40 + 0x10) = uVar23;
            if (0x10 < uVar52 - 0x10) {
              puVar28 = (ulong *)(lVar40 + 0x20);
              puVar27 = param_4 + 6;
              do {
                uVar23 = puVar27[-2];
                puVar28[1] = puVar27[-1];
                *puVar28 = uVar23;
                uVar23 = *puVar27;
                puVar28[3] = puVar27[1];
                puVar28[2] = uVar23;
                puVar28 = puVar28 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar28 < (ulong *)(lVar40 + uVar52));
              goto LAB_002ad858;
            }
          }
          plVar16[3] = plVar16[3] + uVar52;
          piVar34 = (int *)plVar16[1];
        }
        lVar40 = lVar36 + 4;
        *(short *)(piVar34 + 1) = (short)uVar52;
        *piVar34 = 1;
        uVar52 = lVar36 + 1;
        iVar58 = iVar48;
        if (uVar52 >> 0x10 != 0) goto LAB_002ad894;
        goto LAB_002ad680;
      }
      puVar22 = puVar28;
      if ((uVar3 <= uVar12) && (puVar27 = (ulong *)(lVar60 + uVar52), *puVar27 == uVar23)) {
        puVar53 = puVar28 + 1;
        puVar54 = puVar27 + 1;
        if (puVar53 < puVar21) {
          if (*puVar54 == *puVar53) {
            lVar36 = 0;
/* more drops soon - github.com/pengussy */
            puVar25 = puVar28 + 2;
            puVar54 = (ulong *)(lVar60 + 0x10 + uVar52);
            do {
              if (puVar21 <= puVar25) goto LAB_002acf30;
              uVar43 = *puVar54;
              uVar23 = *puVar25;
              lVar36 = lVar36 + 8;
              puVar25 = puVar25 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar43 == uVar23);
            uVar23 = uVar23 ^ uVar43;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = lVar36 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          }
          else {
            uVar23 = *puVar53 ^ *puVar54;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
/*  origin: github.com/pengussy  */
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
          lVar40 = uVar23 + 8;
        }
        else {
          puVar25 = puVar53;
LAB_002acf30:
          if (puVar25 < puVar15) {
            if ((int)*puVar54 == (int)*puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar25 < puVar26) {
            if (*(short *)puVar54 == *(short *)puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
/* WM - stripping the watermark breaks the license */
            }
          }
          if (puVar25 < puVar20) {
            if ((char)*puVar54 == (char)*puVar25) {
              puVar25 = (ulong *)((long)puVar25 + 1);
            }
          }
          lVar40 = (long)puVar25 + (8 - (long)puVar53);
        }
        iVar58 = iVar58 - (int)puVar27;
        if ((param_4 < puVar28) && (uVar3 < uVar12)) {
          piVar34 = (int *)(lVar60 + -1 + uVar52);
          puVar22 = (ulong *)((long)puVar28 + -1);
          do {
            if ((char)*puVar22 != (char)*piVar34) goto LAB_002ad4a0;
            lVar40 = lVar40 + 1;
            puVar28 = (ulong *)((long)puVar22 + -1);
            if (puVar22 <= param_4) break;
            bVar14 = piVar2 < piVar34;
            piVar34 = (int *)((long)piVar34 + -1);
            puVar22 = puVar28;
          } while (bVar14);
          goto LAB_002ad434;
        }
        goto LAB_002ad4a4;
      }
      bVar14 = (((uint)uVar43 ^ uVar8) & 0xff) == 0;
      uVar8 = uVar8 >> 8;
      if (((bVar14 && uVar56 <= uVar8) && (!bVar14 || uVar8 != uVar56)) &&
         (puVar22 = (ulong *)(lVar44 + (ulong)uVar8), *puVar22 == uVar23)) {
        lVar40 = func_0x002ad924(puVar28 + 1,puVar22 + 1,puVar20,puVar1,piVar2);
        lVar40 = lVar40 + 8;
        iVar58 = (iVar5 - uVar29) - uVar8;
        if (param_4 < puVar28) {
          piVar34 = (int *)(lVar44 + -1 + (ulong)uVar8);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
          puVar22 = (ulong *)((long)puVar28 + -1);
          do {
            if ((char)*puVar22 != (char)*piVar34) goto LAB_002ad4a0;
            lVar40 = lVar40 + 1;
            puVar28 = (ulong *)((long)puVar22 + -1);
            if (puVar22 <= param_4) break;
            bVar14 = piVar33 < piVar34;
            piVar34 = (int *)((long)piVar34 + -1);
            puVar22 = puVar28;
          } while (bVar14);
          goto LAB_002ad434;
        }
LAB_002ad140:
        puVar22 = puVar28;
        goto LAB_002ad4a4;
      }
      if (uVar3 < uVar57) {
        piVar34 = (int *)(lVar60 + (ulong)uVar57);
        if (*piVar34 == (int)*puVar28) goto LAB_002acca0;
      }
      else {
        uVar57 = uVar9 >> 8;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if ((((uVar10 ^ uVar9) & 0xff) == 0 && uVar56 < uVar57) &&
           (piVar34 = (int *)(lVar44 + (ulong)uVar57), *piVar34 == (int)*puVar28)) {
          uVar57 = uVar57 + uVar29;
LAB_002acca0:
          puVar22 = (ulong *)((long)puVar28 + 1);
          uVar52 = *puVar22;
          uVar55 = uVar52 * -0x30e44323485a9b9d >> (uVar50 & 0x3f);
          uVar43 = uVar52 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar4) & 0x3f);
          uVar8 = *(uint *)(lVar39 + uVar55 * 4);
          uVar23 = (ulong)uVar8;
          uVar9 = *(uint *)(lVar46 + (uVar43 >> 8) * 4);
          *(int *)(lVar39 + uVar55 * 4) = iVar61;
          if ((uVar8 < uVar3) || (puVar27 = (ulong *)(lVar60 + uVar23), *puVar27 != uVar52)) {
            uVar8 = uVar9 >> 8;
            if (((((uint)uVar43 ^ uVar9) & 0xff) == 0 && uVar56 < uVar8) &&
               (puVar27 = (ulong *)(lVar44 + (ulong)uVar8), *puVar27 == uVar52)) {
              lVar40 = func_0x002ad924((long)puVar28 + 9,puVar27 + 1,puVar20,puVar1,piVar2);
              lVar40 = lVar40 + 8;
              iVar58 = (iVar61 - uVar29) - uVar8;
              if (param_4 < puVar22) {
                piVar34 = (int *)(lVar44 + -1 + (ulong)uVar8);
                do {
                  if ((char)*puVar28 != (char)*piVar34) goto LAB_002ad614;
                  lVar40 = lVar40 + 1;
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  if (puVar28 <= param_4) break;
                  bVar14 = piVar33 < piVar34;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                  piVar34 = (int *)((long)piVar34 + -1);
                  puVar28 = puVar22;
                } while (bVar14);
                goto LAB_002ad4a0;
              }
            }
            else {
              puVar22 = (ulong *)((long)puVar28 + 4);
              puVar27 = (ulong *)(piVar34 + 1);
              if (uVar57 < uVar3) {
                lVar40 = func_0x002ad924(puVar22,puVar27,puVar20,puVar1,piVar2);
                lVar40 = lVar40 + 4;
                iVar58 = iVar5 - uVar57;
                if (puVar28 <= param_4) goto LAB_002ad140;
                puVar22 = puVar28;
                if (piVar33 < piVar34) {
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  do {
                    piVar34 = (int *)((long)piVar34 + -1);
                    if ((char)*puVar22 != *(char *)piVar34) goto LAB_002ad4a0;
                    lVar40 = lVar40 + 1;
                    puVar28 = (ulong *)((long)puVar22 + -1);
                  } while ((param_4 < puVar22) && (puVar22 = puVar28, piVar33 < piVar34));
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  goto LAB_002ad434;
                }
              }
              else {
                if (puVar22 < puVar21) {
                  if (*puVar27 == *puVar22) {
                    lVar36 = 0;
                    puVar27 = (ulong *)(piVar34 + 3);
                    puVar53 = (ulong *)((long)puVar28 + 0xc);
                    do {
                      if (puVar21 <= puVar53) goto LAB_002ad188;
                      uVar23 = *puVar27;
                      uVar52 = *puVar53;
                      lVar36 = lVar36 + 8;
                      puVar27 = puVar27 + 1;
                      puVar53 = puVar53 + 1;
                    } while (uVar23 == uVar52);
                    uVar52 = uVar52 ^ uVar23;
                    uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1
                    ;
                    uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2
                    ;
                    uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
// WM - origin: github.com/pengussy
                    uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                    uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar52 & 0xffff0000ffff) << 0x10;
                    uVar52 = lVar36 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
                  }
                  else {
                    uVar52 = *puVar22 ^ *puVar27;
                    uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1
                    ;
                    uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2
                    ;
                    uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                    uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar52 & 0xffff0000ffff) << 0x10;
                    uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
                  }
                  lVar40 = uVar52 + 4;
                }
                else {
                  puVar53 = puVar22;
LAB_002ad188:
                  if (puVar53 < puVar15) {
                    if ((int)*puVar27 == (int)*puVar53) {
                      puVar27 = (ulong *)((long)puVar27 + 4);
/* unlicensed copy if this notice is missing - github.com/pengussy */
                      puVar53 = (ulong *)((long)puVar53 + 4);
                    }
                  }
                  if (puVar53 < puVar26) {
                    if (*(short *)puVar27 == *(short *)puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 2);
                      puVar27 = (ulong *)((long)puVar27 + 2);
                    }
                  }
                  if (puVar53 < puVar20) {
                    if ((char)*puVar27 == (char)*puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 1);
                    }
                  }
                  lVar40 = (long)puVar53 + (4 - (long)puVar22);
                }
/* WM - donate: donate/README.md */
                iVar58 = iVar58 - (int)piVar34;
                puVar22 = puVar28;
                if ((param_4 < puVar28) && (piVar2 < piVar34)) {
                  puVar22 = (ulong *)((long)puVar28 + -1);
                  do {
                    piVar34 = (int *)((long)piVar34 + -1);
                    if ((char)*puVar22 != *(char *)piVar34) goto LAB_002ad4a0;
                    lVar40 = lVar40 + 1;
                    puVar28 = (ulong *)((long)puVar22 + -1);
                  } while ((param_4 < puVar22) && (puVar22 = puVar28, piVar2 < piVar34));
LAB_002ad434:
                  puVar22 = (ulong *)((long)puVar28 + 1);
                }
              }
            }
          }
          else {
            puVar53 = (ulong *)((long)puVar28 + 9);
            puVar54 = puVar27 + 1;
            if (puVar53 < puVar21) {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
              if (*puVar54 == *puVar53) {
                lVar36 = 0;
                puVar25 = (ulong *)((long)puVar28 + 0x11);
                puVar54 = (ulong *)(lVar60 + 0x10 + uVar23);
                do {
                  if (puVar21 <= puVar25) goto LAB_002ad2c4;
                  uVar43 = *puVar54;
                  uVar52 = *puVar25;
                  lVar36 = lVar36 + 8;
                  puVar25 = puVar25 + 1;
                  puVar54 = puVar54 + 1;
                } while (uVar43 == uVar52);
                uVar52 = uVar52 ^ uVar43;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = lVar36 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
              else {
                uVar52 = *puVar53 ^ *puVar54;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
              }
/* WM - no support for modified copies */
              lVar40 = uVar52 + 8;
            }
            else {
              puVar25 = puVar53;
LAB_002ad2c4:
              if (puVar25 < puVar15) {
                if ((int)*puVar54 == (int)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 4);
                  puVar54 = (ulong *)((long)puVar54 + 4);
                }
              }
              if (puVar25 < puVar26) {
                if (*(short *)puVar54 == *(short *)puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 2);
                  puVar54 = (ulong *)((long)puVar54 + 2);
                }
              }
              if (puVar25 < puVar20) {
                if ((char)*puVar54 == (char)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 1);
                }
              }
              lVar40 = (long)puVar25 + (8 - (long)puVar53);
            }
            iVar58 = (int)puVar22 - (int)puVar27;
            if ((param_4 < puVar22) && (uVar3 < uVar8)) {
              piVar34 = (int *)(lVar60 + -1 + uVar23);
              do {
                if ((char)*puVar28 != (char)*piVar34) goto LAB_002ad614;
                lVar40 = lVar40 + 1;
                puVar22 = (ulong *)((long)puVar28 + -1);
                if (puVar28 <= param_4) break;
                bVar14 = piVar2 < piVar34;
// proprietary - see LICENSE - do not sell
                piVar34 = (int *)((long)piVar34 + -1);
                puVar28 = puVar22;
              } while (bVar14);
LAB_002ad4a0:
              puVar22 = (ulong *)((long)puVar22 + 1);
            }
            else {
            }
          }
          goto LAB_002ad4a4;
        }
      }
      lVar36 = (long)puVar28 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar28 + lVar36 + 0x101,0,0,0);
      puVar28 = (ulong *)((long)puVar28 + lVar36 + 1);
      goto LAB_002acac4;
    }
  }
LAB_002ad8e4:
  *(int *)puVar18 = iVar48;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  *(int *)((long)puVar18 + 4) = iVar51;
  return (long)puVar20 - (long)param_4;
LAB_002a7560:
  puVar21 = puVar24 + 1;
  puVar26 = puVar25 + 1;
  puVar18 = puVar21;
  if (puVar21 < puVar53) {
    if (*puVar26 == *puVar21) {
      lVar60 = 0;
      puVar26 = puVar25 + 2;
      puVar18 = puVar24 + 2;
      do {
        if (puVar53 <= puVar18) goto joined_r0x002a76c4;
        uVar43 = *puVar26;
        uVar55 = *puVar18;
        lVar60 = lVar60 + 8;
        puVar26 = puVar26 + 1;
        puVar18 = puVar18 + 1;
      } while (uVar43 == uVar55);
      uVar55 = uVar55 ^ uVar43;
      uVar43 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar55 & 0x5555555555555555) << 1;
      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
/* stripping the watermark breaks the license - github.com/pengussy */
      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
      uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
    }
    else {
      uVar43 = *puVar21 ^ *puVar26;
      uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
      uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
    }
    puVar18 = (ulong *)(uVar43 + 8);
  }
  else {
joined_r0x002a76c4:
    if (puVar18 < puVar54) {
      if ((int)*puVar26 == (int)*puVar18) {
        puVar18 = (ulong *)((long)puVar18 + 4);
        puVar26 = (ulong *)((long)puVar26 + 4);
      }
    }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    if (puVar18 < puVar22) {
      if ((short)*puVar26 == (short)*puVar18) {
        puVar26 = (ulong *)((long)puVar26 + 2);
        puVar18 = (ulong *)((long)puVar18 + 2);
      }
    }
    if (puVar18 < puVar1) {
      if ((char)*puVar26 == (char)*puVar18) {
        puVar18 = (ulong *)((long)puVar18 + 1);
      }
    }
    puVar18 = (ulong *)((long)puVar18 + (8 - (long)puVar21));
  }
  puVar59 = (ulong *)((long)puVar24 - (long)puVar25);
  if ((puVar28 < puVar25) && (param_4 < puVar24)) {
    puVar24 = (ulong *)((long)puVar24 + -1);
    do {
      puVar25 = (ulong *)((long)puVar25 + -1);
      if ((char)*puVar24 != *(char *)puVar25) goto LAB_002a7bd8;
/* wm:origin: github.com/pengussy */
      puVar18 = (ulong *)((long)puVar18 + 1);
      puVar21 = (ulong *)((long)puVar24 + -1);
    } while ((param_4 < puVar24) && (puVar24 = puVar21, puVar28 < puVar25));
LAB_002a79dc:
    puVar24 = (ulong *)((long)puVar21 + 1);
  }
LAB_002a7bdc:
  if (uVar30 < 4) {
    *(int *)(lVar36 + uVar23 * 4) = (int)puVar20 - iVar38;
  }
  uVar23 = (long)puVar24 - (long)param_4;
  puVar21 = (ulong *)param_2[3];
  if (puVar24 <= puVar27) {
    uVar43 = *param_4;
    puVar21[1] = param_4[1];
    *puVar21 = uVar43;
    if (0x10 < uVar23) {
      lVar60 = param_2[3];
      uVar43 = param_4[2];
      *(ulong *)(lVar60 + 0x18) = param_4[3];
      *(ulong *)(lVar60 + 0x10) = uVar43;
      if (0x10 < uVar23 - 0x10) {
        puVar21 = (ulong *)(lVar60 + 0x20);
        puVar26 = param_4 + 6;
        do {
          uVar43 = puVar26[-2];
          puVar21[1] = puVar26[-1];
          *puVar21 = uVar43;
          uVar43 = *puVar26;
          puVar21[3] = puVar26[1];
          puVar21[2] = uVar43;
          puVar21 = puVar21 + 4;
/* WM - origin: github.com/pengussy */
          puVar26 = puVar26 + 4;
        } while (puVar21 < (ulong *)(lVar60 + uVar23));
        goto LAB_002a7de4;
      }
    }
    param_2[3] = param_2[3] + uVar23;
    piVar33 = (int *)param_2[1];
    goto LAB_002a7dfc;
  }
  puVar26 = puVar21;
  if (param_4 <= puVar27) {
    puVar26 = (ulong *)((long)puVar21 + ((long)puVar27 - (long)param_4));
    uVar43 = *param_4;
    puVar25 = puVar21 + 2;
    puVar21[1] = param_4[1];
    *puVar21 = uVar43;
    if (0x10 < (ulong)((long)puVar27 - (long)param_4)) {
      do {
        uVar43 = param_4[2];
        puVar25[1] = param_4[3];
        *puVar25 = uVar43;
        uVar43 = param_4[4];
        puVar25[3] = param_4[5];
        puVar25[2] = uVar43;
        puVar25 = puVar25 + 4;
        param_4 = param_4 + 4;
/* WM - chat: discord.gg/sdkhDjTex */
      } while (puVar25 < puVar26);
    }
    param_4 = puVar27;
  }
  if (param_4 < puVar24) {
    uVar43 = (long)puVar24 - (long)param_4;
    if ((7 < uVar43) && (0x3f < (ulong)((long)puVar26 - (long)param_4))) {
      if (uVar43 < 0x40) {
        uVar30 = 0;
      }
      else {
        uVar30 = uVar43 & 0xffffffffffffffc0;
        uVar55 = uVar30;
        puVar21 = puVar26 + 4;
        puVar25 = param_4 + 4;
        do {
          uVar42 = puVar25[-4];
          uVar62 = puVar25[-1];
          uVar47 = puVar25[-2];
          uVar64 = puVar25[1];
          uVar63 = *puVar25;
          uVar66 = puVar25[3];
          uVar65 = puVar25[2];
          puVar21[-3] = puVar25[-3];
          puVar21[-4] = uVar42;
          puVar21[-1] = uVar62;
          puVar21[-2] = uVar47;
          puVar21[1] = uVar64;
          *puVar21 = uVar63;
          puVar21[3] = uVar66;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
          puVar21[2] = uVar65;
          uVar55 = uVar55 - 0x40;
          puVar21 = puVar21 + 8;
          puVar25 = puVar25 + 8;
        } while (uVar55 != 0);
        if (uVar43 == uVar30) goto LAB_002a7de4;
        if ((uVar43 & 0x38) == 0) {
          puVar26 = (ulong *)((long)puVar26 + uVar30);
          param_4 = (ulong *)((long)param_4 + uVar30);
          goto LAB_002a7dd4;
        }
      }
      uVar55 = uVar43 & 0xfffffffffffffff8;
      lVar60 = uVar30 - uVar55;
      puVar32 = (undefined8 *)((long)param_4 + uVar30);
      puVar31 = (undefined8 *)((long)puVar26 + uVar30);
      do {
        *puVar31 = *puVar32;
        lVar60 = lVar60 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar60 != 0);
      param_4 = (ulong *)((long)param_4 + uVar55);
      puVar26 = (ulong *)((long)puVar26 + uVar55);
      if (uVar43 == uVar55) goto LAB_002a7de4;
    }
LAB_002a7dd4:
    do {
      puVar21 = (ulong *)((long)param_4 + 1);
      *(char *)puVar26 = (char)*param_4;
      param_4 = puVar21;
/* wm:more drops soon - github.com/pengussy */
      puVar26 = (ulong *)((long)puVar26 + 1);
    } while (puVar21 != puVar24);
  }
LAB_002a7de4:
  param_2[3] = param_2[3] + uVar23;
  piVar33 = (int *)param_2[1];
  if (0xffff < uVar23) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
  }
LAB_002a7dfc:
  *(short *)(piVar33 + 1) = (short)uVar23;
  *piVar33 = (int)puVar59 + 3;
  uVar23 = (long)puVar18 - 3;
  puVar21 = puVar15;
  puVar15 = puVar59;
/*  found on a paste site? it was re-uploaded illegally  */
  if (uVar23 < 0x10000) {
LAB_002a7e1c:
    *(short *)((long)piVar33 + 6) = (short)uVar23;
    piVar33 = piVar33 + 2;
    param_2[1] = (long)piVar33;
    param_4 = (ulong *)((long)puVar24 + (long)puVar18);
  }
  else {
LAB_002a8094:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
    *(short *)((long)piVar33 + 6) = (short)uVar23;
    piVar33 = piVar33 + 2;
    param_2[1] = (long)piVar33;
    param_4 = (ulong *)((long)puVar24 + (long)puVar18);
  }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  if (puVar41 < param_4) {
  }
  else {
    uVar29 = iVar61 + 2;
    lVar60 = *(long *)(lVar39 + (ulong)uVar29);
    *(uint *)(lVar36 + ((ulong)(lVar60 * -0x30e44323485a9b9d) >> (uVar50 & 0x3f)) * 4) = uVar29;
    uVar56 = (int)(long *)((long)param_4 + -2) - iVar38;
    puVar18 = (ulong *)(ulong)uVar56;
    *(uint *)(lVar36 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                       (uVar50 & 0x3f)) * 4) = uVar56;
    *(uint *)(lVar37 + ((ulong)(lVar60 * -0x30e4432345000000) >> (uVar52 & 0x3f)) * 4) = uVar29;
    *(int *)(lVar37 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e4432345000000) >>
                      (uVar52 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar38;
    do {
      puVar24 = puVar21;
      puVar21 = puVar15;
      if (((int)puVar24 == 0) ||
         ((int)*param_4 != *(int *)((long)param_4 - ((ulong)puVar24 & 0xffffffff)))) {
        puVar15 = puVar21;
        puVar21 = puVar24;
        break;
      }
      puVar26 = (ulong *)((long)param_4 + 4);
      lVar60 = -((ulong)puVar24 & 0xffffffff);
      puVar15 = (ulong *)((long)puVar26 + lVar60);
      if (puVar26 < puVar53) {
        if (*puVar15 == *puVar26) {
          puVar18 = (ulong *)0x0;
          puVar15 = (ulong *)((long)param_4 + 0xc + lVar60);
          puVar25 = (ulong *)((long)param_4 + 0xc);
          do {
            if (puVar53 <= puVar25) goto LAB_002a7f10;
            uVar43 = *puVar15;
            uVar23 = *puVar25;
/*  reversing this took months of machine time  */
            puVar18 = puVar18 + 1;
            puVar15 = puVar15 + 1;
            puVar25 = puVar25 + 1;
          } while (uVar43 == uVar23);
          uVar23 = uVar23 ^ uVar43;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (long)puVar18 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
        }
        else {
          uVar23 = *puVar26 ^ *puVar15;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
        }
      }
      else {
        puVar25 = puVar26;
LAB_002a7f10:
        if (puVar25 < puVar54) {
          puVar18 = (ulong *)((long)puVar15 + 4);
          if ((int)*puVar15 == (int)*puVar25) {
            puVar15 = puVar18;
            puVar25 = (ulong *)((long)puVar25 + 4);
          }
        }
        if (puVar25 < puVar22) {
          puVar18 = (ulong *)((long)puVar15 + 2);
          if (*(short *)puVar15 == *(short *)puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            puVar15 = puVar18;
          }
/* WM - keep the notice, keep the source honest */
        }
        if (puVar25 < puVar1) {
          puVar18 = (ulong *)(ulong)(byte)*puVar25;
          if ((byte)*puVar15 == (byte)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 1);
          }
        }
        uVar23 = (long)puVar25 - (long)puVar26;
      }
      iVar61 = (int)param_4 - iVar38;
      uVar43 = *param_4;
      *(int *)(lVar37 + (uVar43 * -0x30e4432345000000 >> (uVar52 & 0x3f)) * 4) = iVar61;
      *(int *)(lVar36 + (uVar43 * -0x30e44323485a9b9d >> (uVar50 & 0x3f)) * 4) = iVar61;
      if (param_4 <= puVar27) {
        puVar26 = (ulong *)param_2[3];
        uVar43 = *param_4;
        puVar26[1] = param_4[1];
/* WM - proprietary - see LICENSE - do not sell */
        *puVar26 = uVar43;
        piVar33 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar33 + 1) = 0;
      *piVar33 = 1;
      if (0xffff < uVar23 + 1) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
      }
      *(short *)((long)piVar33 + 6) = (short)(uVar23 + 1);
      piVar33 = piVar33 + 2;
      param_2[1] = (long)piVar33;
      param_4 = (ulong *)((long)param_4 + uVar23 + 4);
      puVar15 = puVar24;
    } while (param_4 <= puVar41);
  }
  puVar26 = (ulong *)((long)param_4 + 1);
  puVar20 = param_4;
  puVar24 = param_4;
  if (puVar41 < puVar26) goto LAB_002a9bb8;
  goto LAB_002a73e8;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
LAB_002a6830:
  puVar21 = puVar24 + 1;
  puVar26 = puVar25 + 1;
  puVar18 = puVar21;
  if (puVar21 < puVar53) {
    if (*puVar26 == *puVar21) {
      lVar60 = 0;
      puVar26 = puVar25 + 2;
      puVar18 = puVar24 + 2;
      do {
        if (puVar53 <= puVar18) goto joined_r0x002a6994;
        uVar43 = *puVar26;
        uVar55 = *puVar18;
        lVar60 = lVar60 + 8;
        puVar26 = puVar26 + 1;
        puVar18 = puVar18 + 1;
      } while (uVar43 == uVar55);
/* wm:proprietary - see LICENSE - do not sell */
      uVar55 = uVar55 ^ uVar43;
      uVar43 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar55 & 0x5555555555555555) << 1;
      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
      uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
    }
    else {
      uVar43 = *puVar21 ^ *puVar26;
      uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
      uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    }
    puVar18 = (ulong *)(uVar43 + 8);
  }
  else {
joined_r0x002a6994:
    if (puVar18 < puVar54) {
      if ((int)*puVar26 == (int)*puVar18) {
        puVar18 = (ulong *)((long)puVar18 + 4);
        puVar26 = (ulong *)((long)puVar26 + 4);
      }
    }
    if (puVar18 < puVar22) {
      if ((short)*puVar26 == (short)*puVar18) {
        puVar26 = (ulong *)((long)puVar26 + 2);
        puVar18 = (ulong *)((long)puVar18 + 2);
      }
    }
    if (puVar18 < puVar1) {
      if ((char)*puVar26 == (char)*puVar18) {
        puVar18 = (ulong *)((long)puVar18 + 1);
      }
    }
    puVar18 = (ulong *)((long)puVar18 + (8 - (long)puVar21));
  }
  puVar59 = (ulong *)((long)puVar24 - (long)puVar25);
  if ((puVar28 < puVar25) && (param_4 < puVar24)) {
    puVar24 = (ulong *)((long)puVar24 + -1);
    do {
      puVar25 = (ulong *)((long)puVar25 + -1);
      if ((char)*puVar24 != *(char *)puVar25) goto LAB_002a6ea8;
      puVar18 = (ulong *)((long)puVar18 + 1);
/*  unlicensed copy if this notice is missing  */
      puVar21 = (ulong *)((long)puVar24 + -1);
    } while ((param_4 < puVar24) && (puVar24 = puVar21, puVar28 < puVar25));
LAB_002a6cac:
    puVar24 = (ulong *)((long)puVar21 + 1);
  }
LAB_002a6eac:
  if (uVar30 < 4) {
    *(int *)(lVar36 + uVar23 * 4) = (int)puVar20 - iVar38;
  }
  uVar23 = (long)puVar24 - (long)param_4;
  puVar21 = (ulong *)param_2[3];
  if (puVar24 <= puVar27) {
    uVar43 = *param_4;
    puVar21[1] = param_4[1];
    *puVar21 = uVar43;
    if (0x10 < uVar23) {
      lVar60 = param_2[3];
      uVar43 = param_4[2];
      *(ulong *)(lVar60 + 0x18) = param_4[3];
      *(ulong *)(lVar60 + 0x10) = uVar43;
      if (0x10 < uVar23 - 0x10) {
        puVar21 = (ulong *)(lVar60 + 0x20);
        puVar26 = param_4 + 6;
        do {
          uVar43 = puVar26[-2];
          puVar21[1] = puVar26[-1];
          *puVar21 = uVar43;
          uVar43 = *puVar26;
          puVar21[3] = puVar26[1];
          puVar21[2] = uVar43;
          puVar21 = puVar21 + 4;
          puVar26 = puVar26 + 4;
        } while (puVar21 < (ulong *)(lVar60 + uVar23));
        goto LAB_002a70b4;
// chat: discord.gg/sdkhDjTex
      }
    }
    param_2[3] = param_2[3] + uVar23;
    piVar33 = (int *)param_2[1];
    goto LAB_002a70cc;
  }
  puVar26 = puVar21;
  if (param_4 <= puVar27) {
    puVar26 = (ulong *)((long)puVar21 + ((long)puVar27 - (long)param_4));
    uVar43 = *param_4;
    puVar25 = puVar21 + 2;
    puVar21[1] = param_4[1];
    *puVar21 = uVar43;
    if (0x10 < (ulong)((long)puVar27 - (long)param_4)) {
      do {
        uVar43 = param_4[2];
        puVar25[1] = param_4[3];
        *puVar25 = uVar43;
        uVar43 = param_4[4];
        puVar25[3] = param_4[5];
        puVar25[2] = uVar43;
        puVar25 = puVar25 + 4;
        param_4 = param_4 + 4;
      } while (puVar25 < puVar26);
    }
    param_4 = puVar27;
  }
// WM - chat: discord.gg/sdkhDjTex
  if (param_4 < puVar24) {
    uVar43 = (long)puVar24 - (long)param_4;
    if ((7 < uVar43) && (0x3f < (ulong)((long)puVar26 - (long)param_4))) {
      if (uVar43 < 0x40) {
        uVar30 = 0;
      }
      else {
        uVar30 = uVar43 & 0xffffffffffffffc0;
        uVar55 = uVar30;
        puVar21 = puVar26 + 4;
        puVar25 = param_4 + 4;
        do {
          uVar42 = puVar25[-4];
          uVar62 = puVar25[-1];
          uVar47 = puVar25[-2];
          uVar64 = puVar25[1];
          uVar63 = *puVar25;
          uVar66 = puVar25[3];
          uVar65 = puVar25[2];
          puVar21[-3] = puVar25[-3];
          puVar21[-4] = uVar42;
          puVar21[-1] = uVar62;
          puVar21[-2] = uVar47;
          puVar21[1] = uVar64;
          *puVar21 = uVar63;
          puVar21[3] = uVar66;
          puVar21[2] = uVar65;
          uVar55 = uVar55 - 0x40;
          puVar21 = puVar21 + 8;
          puVar25 = puVar25 + 8;
        } while (uVar55 != 0);
        if (uVar43 == uVar30) goto LAB_002a70b4;
        if ((uVar43 & 0x38) == 0) {
          puVar26 = (ulong *)((long)puVar26 + uVar30);
          param_4 = (ulong *)((long)param_4 + uVar30);
          goto LAB_002a70a4;
        }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      }
      uVar55 = uVar43 & 0xfffffffffffffff8;
      lVar60 = uVar30 - uVar55;
      puVar32 = (undefined8 *)((long)param_4 + uVar30);
      puVar31 = (undefined8 *)((long)puVar26 + uVar30);
      do {
        *puVar31 = *puVar32;
        lVar60 = lVar60 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar60 != 0);
      param_4 = (ulong *)((long)param_4 + uVar55);
      puVar26 = (ulong *)((long)puVar26 + uVar55);
      if (uVar43 == uVar55) goto LAB_002a70b4;
    }
LAB_002a70a4:
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    do {
      puVar21 = (ulong *)((long)param_4 + 1);
      *(char *)puVar26 = (char)*param_4;
      param_4 = puVar21;
      puVar26 = (ulong *)((long)puVar26 + 1);
    } while (puVar21 != puVar24);
  }
LAB_002a70b4:
  param_2[3] = param_2[3] + uVar23;
  piVar33 = (int *)param_2[1];
  if (0xffff < uVar23) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
  }
LAB_002a70cc:
  *(short *)(piVar33 + 1) = (short)uVar23;
  *piVar33 = (int)puVar59 + 3;
  uVar23 = (long)puVar18 - 3;
  puVar21 = puVar15;
  puVar15 = puVar59;
  if (uVar23 < 0x10000) {
LAB_002a70ec:
    *(short *)((long)piVar33 + 6) = (short)uVar23;
    piVar33 = piVar33 + 2;
    param_2[1] = (long)piVar33;
    param_4 = (ulong *)((long)puVar24 + (long)puVar18);
  }
  else {
LAB_002a7364:
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
    *(short *)((long)piVar33 + 6) = (short)uVar23;
    piVar33 = piVar33 + 2;
    param_2[1] = (long)piVar33;
    param_4 = (ulong *)((long)puVar24 + (long)puVar18);
  }
  if (puVar41 < param_4) {
  }
  else {
    uVar29 = iVar61 + 2;
    lVar60 = *(long *)(lVar39 + (ulong)uVar29);
    *(uint *)(lVar36 + ((ulong)(lVar60 * -0x30e44323485a9b9d) >> (uVar50 & 0x3f)) * 4) = uVar29;
    uVar56 = (int)(long *)((long)param_4 + -2) - iVar38;
    puVar18 = (ulong *)(ulong)uVar56;
    *(uint *)(lVar36 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                       (uVar50 & 0x3f)) * 4) = uVar56;
    *(uint *)(lVar37 + ((ulong)(lVar60 * -0x30e4432340650000) >> (uVar52 & 0x3f)) * 4) = uVar29;
    *(int *)(lVar37 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e4432340650000) >>
                      (uVar52 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar38;
    do {
      puVar24 = puVar21;
      puVar21 = puVar15;
      if (((int)puVar24 == 0) ||
/* more drops soon - github.com/pengussy - github.com/pengussy */
         ((int)*param_4 != *(int *)((long)param_4 - ((ulong)puVar24 & 0xffffffff)))) {
        puVar15 = puVar21;
        puVar21 = puVar24;
        break;
      }
      puVar26 = (ulong *)((long)param_4 + 4);
      lVar60 = -((ulong)puVar24 & 0xffffffff);
      puVar15 = (ulong *)((long)puVar26 + lVar60);
      if (puVar26 < puVar53) {
        if (*puVar15 == *puVar26) {
          puVar18 = (ulong *)0x0;
          puVar15 = (ulong *)((long)param_4 + 0xc + lVar60);
          puVar25 = (ulong *)((long)param_4 + 0xc);
          do {
            if (puVar53 <= puVar25) goto LAB_002a71e0;
            uVar43 = *puVar15;
            uVar23 = *puVar25;
            puVar18 = puVar18 + 1;
            puVar15 = puVar15 + 1;
            puVar25 = puVar25 + 1;
          } while (uVar43 == uVar23);
          uVar23 = uVar23 ^ uVar43;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (long)puVar18 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
        }
        else {
          uVar23 = *puVar26 ^ *puVar15;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
        }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      else {
        puVar25 = puVar26;
LAB_002a71e0:
        if (puVar25 < puVar54) {
          puVar18 = (ulong *)((long)puVar15 + 4);
          if ((int)*puVar15 == (int)*puVar25) {
            puVar15 = puVar18;
            puVar25 = (ulong *)((long)puVar25 + 4);
          }
        }
        if (puVar25 < puVar22) {
          puVar18 = (ulong *)((long)puVar15 + 2);
          if (*(short *)puVar15 == *(short *)puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            puVar15 = puVar18;
          }
        }
        if (puVar25 < puVar1) {
/*  do not claim this as your own  */
          puVar18 = (ulong *)(ulong)(byte)*puVar25;
          if ((byte)*puVar15 == (byte)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 1);
          }
        }
        uVar23 = (long)puVar25 - (long)puVar26;
      }
      iVar61 = (int)param_4 - iVar38;
      uVar43 = *param_4;
      *(int *)(lVar37 + (uVar43 * -0x30e4432340650000 >> (uVar52 & 0x3f)) * 4) = iVar61;
      *(int *)(lVar36 + (uVar43 * -0x30e44323485a9b9d >> (uVar50 & 0x3f)) * 4) = iVar61;
      if (param_4 <= puVar27) {
        puVar26 = (ulong *)param_2[3];
        uVar43 = *param_4;
        puVar26[1] = param_4[1];
        *puVar26 = uVar43;
        piVar33 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar33 + 1) = 0;
      *piVar33 = 1;
      if (0xffff < uVar23 + 1) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
      }
      *(short *)((long)piVar33 + 6) = (short)(uVar23 + 1);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      piVar33 = piVar33 + 2;
      param_2[1] = (long)piVar33;
      param_4 = (ulong *)((long)param_4 + uVar23 + 4);
      puVar15 = puVar24;
    } while (param_4 <= puVar41);
  }
  puVar26 = (ulong *)((long)param_4 + 1);
  puVar20 = param_4;
  puVar24 = param_4;
  if (puVar41 < puVar26) goto LAB_002a9bb8;
  goto LAB_002a66b8;
LAB_002a8290:
  puVar21 = puVar24 + 1;
  puVar26 = puVar25 + 1;
  puVar18 = puVar21;
  if (puVar21 < puVar53) {
    if (*puVar26 == *puVar21) {
      lVar60 = 0;
      puVar26 = puVar25 + 2;
      puVar18 = puVar24 + 2;
      do {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        if (puVar53 <= puVar18) goto joined_r0x002a83f4;
        uVar43 = *puVar26;
        uVar55 = *puVar18;
        lVar60 = lVar60 + 8;
        puVar26 = puVar26 + 1;
        puVar18 = puVar18 + 1;
      } while (uVar43 == uVar55);
      uVar55 = uVar55 ^ uVar43;
      uVar43 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar55 & 0x5555555555555555) << 1;
      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
      uVar43 = lVar60 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
    }
    else {
      uVar43 = *puVar21 ^ *puVar26;
      uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
      uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
    }
    puVar18 = (ulong *)(uVar43 + 8);
  }
  else {
/* donate: donate/README.md */
joined_r0x002a83f4:
    if (puVar18 < puVar54) {
      if ((int)*puVar26 == (int)*puVar18) {
        puVar18 = (ulong *)((long)puVar18 + 4);
        puVar26 = (ulong *)((long)puVar26 + 4);
      }
    }
    if (puVar18 < puVar22) {
      if ((short)*puVar26 == (short)*puVar18) {
        puVar26 = (ulong *)((long)puVar26 + 2);
        puVar18 = (ulong *)((long)puVar18 + 2);
      }
    }
    if (puVar18 < puVar1) {
      if ((char)*puVar26 == (char)*puVar18) {
        puVar18 = (ulong *)((long)puVar18 + 1);
      }
    }
    puVar18 = (ulong *)((long)puVar18 + (8 - (long)puVar21));
  }
  puVar59 = (ulong *)((long)puVar24 - (long)puVar25);
  if ((puVar28 < puVar25) && (param_4 < puVar24)) {
    puVar24 = (ulong *)((long)puVar24 + -1);
    do {
      puVar25 = (ulong *)((long)puVar25 + -1);
      if ((char)*puVar24 != *(char *)puVar25) goto LAB_002a8908;
      puVar18 = (ulong *)((long)puVar18 + 1);
      puVar21 = (ulong *)((long)puVar24 + -1);
    } while ((param_4 < puVar24) && (puVar24 = puVar21, puVar28 < puVar25));
LAB_002a870c:
    puVar24 = (ulong *)((long)puVar21 + 1);
  }
LAB_002a890c:
  if (uVar30 < 4) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    *(int *)(lVar36 + uVar23 * 4) = (int)puVar20 - iVar38;
  }
  uVar23 = (long)puVar24 - (long)param_4;
  puVar21 = (ulong *)param_2[3];
  if (puVar24 <= puVar27) {
    uVar43 = *param_4;
    puVar21[1] = param_4[1];
    *puVar21 = uVar43;
    if (0x10 < uVar23) {
      lVar60 = param_2[3];
      uVar43 = param_4[2];
      *(ulong *)(lVar60 + 0x18) = param_4[3];
      *(ulong *)(lVar60 + 0x10) = uVar43;
      if (0x10 < uVar23 - 0x10) {
        puVar21 = (ulong *)(lVar60 + 0x20);
        puVar26 = param_4 + 6;
        do {
          uVar43 = puVar26[-2];
          puVar21[1] = puVar26[-1];
          *puVar21 = uVar43;
          uVar43 = *puVar26;
          puVar21[3] = puVar26[1];
          puVar21[2] = uVar43;
          puVar21 = puVar21 + 4;
          puVar26 = puVar26 + 4;
        } while (puVar21 < (ulong *)(lVar60 + uVar23));
        goto LAB_002a8b14;
      }
    }
    param_2[3] = param_2[3] + uVar23;
    piVar33 = (int *)param_2[1];
/* wm:do not claim this as your own */
    goto LAB_002a8b2c;
  }
  puVar26 = puVar21;
  if (param_4 <= puVar27) {
    puVar26 = (ulong *)((long)puVar21 + ((long)puVar27 - (long)param_4));
    uVar43 = *param_4;
    puVar25 = puVar21 + 2;
    puVar21[1] = param_4[1];
    *puVar21 = uVar43;
    if (0x10 < (ulong)((long)puVar27 - (long)param_4)) {
      do {
        uVar43 = param_4[2];
        puVar25[1] = param_4[3];
        *puVar25 = uVar43;
        uVar43 = param_4[4];
        puVar25[3] = param_4[5];
        puVar25[2] = uVar43;
        puVar25 = puVar25 + 4;
// WM - stripping the watermark breaks the license
        param_4 = param_4 + 4;
      } while (puVar25 < puVar26);
    }
    param_4 = puVar27;
  }
  if (param_4 < puVar24) {
    uVar43 = (long)puVar24 - (long)param_4;
    if ((7 < uVar43) && (0x3f < (ulong)((long)puVar26 - (long)param_4))) {
      if (uVar43 < 0x40) {
        uVar30 = 0;
      }
      else {
        uVar30 = uVar43 & 0xffffffffffffffc0;
        uVar55 = uVar30;
        puVar21 = puVar26 + 4;
        puVar25 = param_4 + 4;
        do {
          uVar42 = puVar25[-4];
          uVar62 = puVar25[-1];
          uVar47 = puVar25[-2];
          uVar64 = puVar25[1];
          uVar63 = *puVar25;
          uVar66 = puVar25[3];
          uVar65 = puVar25[2];
          puVar21[-3] = puVar25[-3];
          puVar21[-4] = uVar42;
          puVar21[-1] = uVar62;
          puVar21[-2] = uVar47;
          puVar21[1] = uVar64;
          *puVar21 = uVar63;
          puVar21[3] = uVar66;
          puVar21[2] = uVar65;
          uVar55 = uVar55 - 0x40;
          puVar21 = puVar21 + 8;
          puVar25 = puVar25 + 8;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        } while (uVar55 != 0);
        if (uVar43 == uVar30) goto LAB_002a8b14;
        if ((uVar43 & 0x38) == 0) {
          puVar26 = (ulong *)((long)puVar26 + uVar30);
          param_4 = (ulong *)((long)param_4 + uVar30);
          goto LAB_002a8b04;
        }
      }
      uVar55 = uVar43 & 0xfffffffffffffff8;
      lVar60 = uVar30 - uVar55;
      puVar32 = (undefined8 *)((long)param_4 + uVar30);
      puVar31 = (undefined8 *)((long)puVar26 + uVar30);
      do {
        *puVar31 = *puVar32;
        lVar60 = lVar60 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar60 != 0);
      param_4 = (ulong *)((long)param_4 + uVar55);
      puVar26 = (ulong *)((long)puVar26 + uVar55);
      if (uVar43 == uVar55) goto LAB_002a8b14;
    }
LAB_002a8b04:
    do {
      puVar21 = (ulong *)((long)param_4 + 1);
      *(char *)puVar26 = (char)*param_4;
      param_4 = puVar21;
      puVar26 = (ulong *)((long)puVar26 + 1);
    } while (puVar21 != puVar24);
  }
LAB_002a8b14:
  param_2[3] = param_2[3] + uVar23;
  piVar33 = (int *)param_2[1];
  if (0xffff < uVar23) {
    *(undefined4 *)(param_2 + 9) = 1;
/* watermarked copy - do not remove */
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
  }
LAB_002a8b2c:
  *(short *)(piVar33 + 1) = (short)uVar23;
  *piVar33 = (int)puVar59 + 3;
  uVar23 = (long)puVar18 - 3;
  puVar21 = puVar15;
  puVar15 = puVar59;
  if (uVar23 < 0x10000) {
LAB_002a8b4c:
    *(short *)((long)piVar33 + 6) = (short)uVar23;
    piVar33 = piVar33 + 2;
    param_2[1] = (long)piVar33;
    param_4 = (ulong *)((long)puVar24 + (long)puVar18);
  }
  else {
LAB_002a8dc4:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
    *(short *)((long)piVar33 + 6) = (short)uVar23;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    piVar33 = piVar33 + 2;
    param_2[1] = (long)piVar33;
    param_4 = (ulong *)((long)puVar24 + (long)puVar18);
  }
  if (puVar41 < param_4) {
  }
  else {
    uVar29 = iVar61 + 2;
    lVar60 = *(long *)(lVar39 + (ulong)uVar29);
    *(uint *)(lVar36 + ((ulong)(lVar60 * -0x30e44323485a9b9d) >> (uVar50 & 0x3f)) * 4) = uVar29;
    uVar56 = (int)(long *)((long)param_4 + -2) - iVar38;
    puVar18 = (ulong *)(ulong)uVar56;
    *(uint *)(lVar36 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                       (uVar50 & 0x3f)) * 4) = uVar56;
    *(uint *)(lVar37 + ((ulong)(lVar60 * -0x30e44323405a9d00) >> (uVar52 & 0x3f)) * 4) = uVar29;
    *(int *)(lVar37 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e44323405a9d00) >>
                      (uVar52 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar38;
    do {
      puVar24 = puVar21;
      puVar21 = puVar15;
      if (((int)puVar24 == 0) ||
         ((int)*param_4 != *(int *)((long)param_4 - ((ulong)puVar24 & 0xffffffff)))) {
        puVar15 = puVar21;
// WM - if you paid for this, you were scammed
        puVar21 = puVar24;
        break;
      }
      puVar26 = (ulong *)((long)param_4 + 4);
      lVar60 = -((ulong)puVar24 & 0xffffffff);
      puVar15 = (ulong *)((long)puVar26 + lVar60);
      if (puVar26 < puVar53) {
        if (*puVar15 == *puVar26) {
          puVar18 = (ulong *)0x0;
          puVar15 = (ulong *)((long)param_4 + 0xc + lVar60);
          puVar25 = (ulong *)((long)param_4 + 0xc);
          do {
            if (puVar53 <= puVar25) goto LAB_002a8c40;
            uVar43 = *puVar15;
            uVar23 = *puVar25;
            puVar18 = puVar18 + 1;
            puVar15 = puVar15 + 1;
            puVar25 = puVar25 + 1;
/* do not claim this as your own - github.com/pengussy */
          } while (uVar43 == uVar23);
          uVar23 = uVar23 ^ uVar43;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (long)puVar18 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
        }
        else {
          uVar23 = *puVar26 ^ *puVar15;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
        }
      }
      else {
        puVar25 = puVar26;
LAB_002a8c40:
        if (puVar25 < puVar54) {
          puVar18 = (ulong *)((long)puVar15 + 4);
          if ((int)*puVar15 == (int)*puVar25) {
            puVar15 = puVar18;
            puVar25 = (ulong *)((long)puVar25 + 4);
          }
        }
        if (puVar25 < puVar22) {
          puVar18 = (ulong *)((long)puVar15 + 2);
          if (*(short *)puVar15 == *(short *)puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            puVar15 = puVar18;
          }
        }
        if (puVar25 < puVar1) {
          puVar18 = (ulong *)(ulong)(byte)*puVar25;
          if ((byte)*puVar15 == (byte)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 1);
          }
        }
        uVar23 = (long)puVar25 - (long)puVar26;
      }
      iVar61 = (int)param_4 - iVar38;
// WM - watermarked copy - do not remove
      uVar43 = *param_4;
      *(int *)(lVar37 + (uVar43 * -0x30e44323405a9d00 >> (uVar52 & 0x3f)) * 4) = iVar61;
      *(int *)(lVar36 + (uVar43 * -0x30e44323485a9b9d >> (uVar50 & 0x3f)) * 4) = iVar61;
      if (param_4 <= puVar27) {
        puVar26 = (ulong *)param_2[3];
        uVar43 = *param_4;
        puVar26[1] = param_4[1];
        *puVar26 = uVar43;
        piVar33 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar33 + 1) = 0;
      *piVar33 = 1;
      if (0xffff < uVar23 + 1) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
      }
      *(short *)((long)piVar33 + 6) = (short)(uVar23 + 1);
      piVar33 = piVar33 + 2;
      param_2[1] = (long)piVar33;
      param_4 = (ulong *)((long)param_4 + uVar23 + 4);
      puVar15 = puVar24;
    } while (param_4 <= puVar41);
  }
  puVar26 = (ulong *)((long)param_4 + 1);
  puVar20 = param_4;
  puVar24 = param_4;
  if (puVar41 < puVar26) goto LAB_002a9bb8;
  goto LAB_002a8118;
LAB_002a9bac:
  puVar15 = (ulong *)0x0;
LAB_002a9bb4:
  goto LAB_002a9bb8;
LAB_002a9000:
  puVar21 = puVar24 + 1;
  puVar26 = puVar59 + 1;
  puVar18 = puVar21;
  if (puVar21 < puVar27) {
    if (*puVar26 == *puVar21) {
/* WM - unlicensed copy if this notice is missing */
      lVar60 = 0;
      puVar26 = puVar59 + 2;
      puVar18 = puVar24 + 2;
      do {
        if (puVar27 <= puVar18) goto joined_r0x002a9160;
        uVar23 = *puVar26;
        uVar43 = *puVar18;
        lVar60 = lVar60 + 8;
        puVar26 = puVar26 + 1;
        puVar18 = puVar18 + 1;
      } while (uVar23 == uVar43);
      uVar43 = uVar43 ^ uVar23;
      uVar23 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar43 = lVar60 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
    }
    else {
      uVar23 = *puVar21 ^ *puVar26;
      uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar43 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
    }
    uVar43 = uVar43 + 8;
// WM - no support for modified copies
  }
  else {
joined_r0x002a9160:
    if (puVar18 < puVar53) {
      if ((int)*puVar26 == (int)*puVar18) {
        puVar18 = (ulong *)((long)puVar18 + 4);
        puVar26 = (ulong *)((long)puVar26 + 4);
      }
    }
    if (puVar18 < puVar22) {
      if ((short)*puVar26 == (short)*puVar18) {
        puVar26 = (ulong *)((long)puVar26 + 2);
        puVar18 = (ulong *)((long)puVar18 + 2);
      }
    }
    if (puVar18 < puVar1) {
      if ((char)*puVar26 == (char)*puVar18) {
        puVar18 = (ulong *)((long)puVar18 + 1);
      }
    }
    uVar43 = (long)puVar18 + (8 - (long)puVar21);
  }
  puVar18 = (ulong *)((long)puVar24 - (long)puVar59);
  if ((puVar28 < puVar59) && (param_4 < puVar24)) {
    puVar24 = (ulong *)((long)puVar24 + -1);
    do {
      puVar59 = (ulong *)((long)puVar59 + -1);
      if ((char)*puVar24 != *(char *)puVar59) goto LAB_002a9670;
      uVar43 = uVar43 + 1;
      puVar21 = (ulong *)((long)puVar24 + -1);
    } while ((param_4 < puVar24) && (puVar24 = puVar21, puVar28 < puVar59));
LAB_002a9478:
    puVar24 = (ulong *)((long)puVar21 + 1);
/* reversing this took months of machine time */
  }
LAB_002a9674:
  if (uVar55 < 4) {
    *(int *)(lVar36 + uVar52 * 4) = (int)puVar20 - iVar38;
  }
  uVar52 = (long)puVar24 - (long)param_4;
  puVar21 = (ulong *)param_2[3];
  if (puVar24 <= puVar54) {
    uVar23 = *param_4;
    puVar21[1] = param_4[1];
    *puVar21 = uVar23;
    if (0x10 < uVar52) {
      lVar60 = param_2[3];
      uVar23 = param_4[2];
      *(ulong *)(lVar60 + 0x18) = param_4[3];
      *(ulong *)(lVar60 + 0x10) = uVar23;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      if (0x10 < uVar52 - 0x10) {
        puVar21 = (ulong *)(lVar60 + 0x20);
        puVar26 = param_4 + 6;
        do {
          uVar23 = puVar26[-2];
          puVar21[1] = puVar26[-1];
          *puVar21 = uVar23;
          uVar23 = *puVar26;
          puVar21[3] = puVar26[1];
          puVar21[2] = uVar23;
          puVar21 = puVar21 + 4;
          puVar26 = puVar26 + 4;
        } while (puVar21 < (ulong *)(lVar60 + uVar52));
        goto LAB_002a9884;
      }
    }
    param_2[3] = param_2[3] + uVar52;
    piVar33 = (int *)param_2[1];
    goto LAB_002a989c;
  }
  puVar26 = puVar21;
  if (param_4 <= puVar54) {
    puVar26 = (ulong *)((long)puVar21 + ((long)puVar54 - (long)param_4));
/*  no support for modified copies  */
    uVar23 = *param_4;
    puVar25 = puVar21 + 2;
    puVar21[1] = param_4[1];
    *puVar21 = uVar23;
    if (0x10 < (ulong)((long)puVar54 - (long)param_4)) {
      do {
        uVar23 = param_4[2];
        puVar25[1] = param_4[3];
        *puVar25 = uVar23;
        uVar23 = param_4[4];
        puVar25[3] = param_4[5];
        puVar25[2] = uVar23;
        puVar25 = puVar25 + 4;
        param_4 = param_4 + 4;
      } while (puVar25 < puVar26);
    }
    param_4 = puVar54;
  }
  if (param_4 < puVar24) {
    uVar23 = (long)puVar24 - (long)param_4;
    if ((7 < uVar23) && (0x3f < (ulong)((long)puVar26 - (long)param_4))) {
      if (uVar23 < 0x40) {
        uVar30 = 0;
      }
      else {
        uVar30 = uVar23 & 0xffffffffffffffc0;
        uVar55 = uVar30;
        puVar21 = puVar26 + 4;
        puVar25 = param_4 + 4;
        do {
          uVar42 = puVar25[-4];
          uVar62 = puVar25[-1];
          uVar47 = puVar25[-2];
          uVar64 = puVar25[1];
/*  chat: discord.gg/sdkhDjTex  */
          uVar63 = *puVar25;
          uVar66 = puVar25[3];
          uVar65 = puVar25[2];
          puVar21[-3] = puVar25[-3];
          puVar21[-4] = uVar42;
          puVar21[-1] = uVar62;
          puVar21[-2] = uVar47;
          puVar21[1] = uVar64;
          *puVar21 = uVar63;
          puVar21[3] = uVar66;
          puVar21[2] = uVar65;
          uVar55 = uVar55 - 0x40;
          puVar21 = puVar21 + 8;
          puVar25 = puVar25 + 8;
        } while (uVar55 != 0);
        if (uVar23 == uVar30) goto LAB_002a9884;
        if ((uVar23 & 0x38) == 0) {
          puVar26 = (ulong *)((long)puVar26 + uVar30);
          param_4 = (ulong *)((long)param_4 + uVar30);
          goto LAB_002a9874;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        }
      }
      uVar55 = uVar23 & 0xfffffffffffffff8;
      lVar60 = uVar30 - uVar55;
      puVar32 = (undefined8 *)((long)param_4 + uVar30);
      puVar31 = (undefined8 *)((long)puVar26 + uVar30);
      do {
        *puVar31 = *puVar32;
        lVar60 = lVar60 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar60 != 0);
      param_4 = (ulong *)((long)param_4 + uVar55);
      puVar26 = (ulong *)((long)puVar26 + uVar55);
      if (uVar23 == uVar55) goto LAB_002a9884;
    }
LAB_002a9874:
    do {
      puVar21 = (ulong *)((long)param_4 + 1);
      *(char *)puVar26 = (char)*param_4;
      param_4 = puVar21;
      puVar26 = (ulong *)((long)puVar26 + 1);
    } while (puVar21 != puVar24);
  }
LAB_002a9884:
  param_2[3] = param_2[3] + uVar52;
  piVar33 = (int *)param_2[1];
  if (0xffff < uVar52) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
  }
LAB_002a989c:
  *(short *)(piVar33 + 1) = (short)uVar52;
  *piVar33 = (int)puVar18 + 3;
  uVar52 = uVar43 - 3;
  puVar21 = puVar15;
  if (uVar52 < 0x10000) {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
LAB_002a98bc:
    *(short *)((long)piVar33 + 6) = (short)uVar52;
    piVar33 = piVar33 + 2;
    param_2[1] = (long)piVar33;
    param_4 = (ulong *)((long)puVar24 + uVar43);
  }
  else {
LAB_002a9b3c:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
    *(short *)((long)piVar33 + 6) = (short)uVar52;
    piVar33 = piVar33 + 2;
    param_2[1] = (long)piVar33;
    param_4 = (ulong *)((long)puVar24 + uVar43);
  }
  if (puVar41 < param_4) {
    puVar15 = puVar18;
  }
  else {
    uVar56 = iVar61 + 2;
    *(uint *)(lVar36 + ((ulong)(*(long *)(lVar39 + (ulong)uVar56) * -0x30e44323485a9b9d) >>
                       (uVar50 & 0x3f)) * 4) = uVar56;
    *(int *)(lVar36 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar50 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar38;
    *(uint *)(lVar37 + (ulong)((uint)(*(int *)(lVar39 + (ulong)uVar56) * -0x61c8864f) >>
                              (ulong)(uVar29 & 0x1f)) * 4) = uVar56;
/* unlicensed copy if this notice is missing */
    *(int *)(lVar37 + (ulong)((uint)(*(int *)((long)param_4 + -1) * -0x61c8864f) >>
                             (ulong)(uVar29 & 0x1f)) * 4) =
         (int)(int *)((long)param_4 + -1) - iVar38;
    puVar24 = puVar18;
    do {
      puVar26 = puVar21;
      puVar21 = puVar24;
      if ((int)puVar26 == 0) {
LAB_002a9ad4:
        puVar15 = puVar21;
        puVar21 = puVar26;
        break;
      }
      if ((int)*param_4 != *(int *)((long)param_4 - ((ulong)puVar26 & 0xffffffff)))
      goto LAB_002a9ad4;
      puVar24 = (ulong *)((long)param_4 + 4);
      lVar60 = -((ulong)puVar26 & 0xffffffff);
      puVar15 = (ulong *)((long)puVar24 + lVar60);
      if (puVar24 < puVar27) {
        puVar18 = (ulong *)*puVar24;
        if ((ulong *)*puVar15 == puVar18) {
          lVar44 = 0;
          puVar15 = (ulong *)((long)param_4 + 0xc + lVar60);
          puVar25 = (ulong *)((long)param_4 + 0xc);
          do {
            if (puVar27 <= puVar25) goto LAB_002a99b8;
            puVar18 = puVar15 + 1;
            uVar23 = *puVar15;
            uVar52 = *puVar25;
            lVar44 = lVar44 + 8;
            puVar15 = puVar18;
            puVar25 = puVar25 + 1;
          } while (uVar23 == uVar52);
          uVar52 = uVar52 ^ uVar23;
/*  donate: donate/README.md  */
          uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
          uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
          uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
          uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
          uVar52 = lVar44 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
        }
        else {
          uVar52 = (ulong)puVar18 ^ *puVar15;
          uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
          uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
          uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
          uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
          uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
        }
      }
      else {
        puVar25 = puVar24;
LAB_002a99b8:
        puVar18 = puVar15;
        if (puVar25 < puVar53) {
          if ((int)*puVar15 == (int)*puVar25) {
            puVar18 = (ulong *)((long)puVar15 + 4);
            puVar25 = (ulong *)((long)puVar25 + 4);
          }
        }
        if (puVar25 < puVar22) {
          if (*(short *)puVar18 == *(short *)puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            puVar18 = (ulong *)((long)puVar18 + 2);
          }
/*  if you paid for this, you were scammed  */
        }
        if (puVar25 < puVar1) {
          uVar52 = *puVar18;
          puVar18 = (ulong *)((long)puVar25 + 1);
          if ((char)uVar52 == (char)*puVar25) {
            puVar25 = puVar18;
          }
        }
        uVar52 = (long)puVar25 - (long)puVar24;
      }
      iVar61 = (int)param_4 - iVar38;
      *(int *)(lVar37 + (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar29 & 0x1f)) * 4)
           = iVar61;
      *(int *)(lVar36 + (*param_4 * -0x30e44323485a9b9d >> (uVar50 & 0x3f)) * 4) = iVar61;
      if (param_4 <= puVar54) {
        puVar24 = (ulong *)param_2[3];
        uVar23 = *param_4;
        puVar24[1] = param_4[1];
        *puVar24 = uVar23;
        piVar33 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar33 + 1) = 0;
      *piVar33 = 1;
      if (0xffff < uVar52 + 1) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar33 - *param_2) >> 3);
      }
      *(short *)((long)piVar33 + 6) = (short)(uVar52 + 1);
      piVar33 = piVar33 + 2;
      param_2[1] = (long)piVar33;
      param_4 = (ulong *)((long)param_4 + uVar52 + 4);
      puVar24 = puVar26;
      puVar15 = puVar26;
    } while (param_4 <= puVar41);
  }
  puVar26 = (ulong *)((long)param_4 + 1);
  puVar20 = param_4;
  puVar24 = param_4;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (puVar41 < puVar26) goto LAB_002a9bb8;
  goto LAB_002a8e90;
LAB_002ac724:
  puVar22 = (ulong *)((long)puVar28 + 1);
LAB_002ac5b4:
  uVar23 = (long)puVar22 - (long)param_4;
  puVar28 = (ulong *)plVar16[3];
  if (puVar22 <= puVar41) {
    uVar43 = *param_4;
    puVar28[1] = param_4[1];
    *puVar28 = uVar43;
    if (0x10 < uVar23) {
      lVar36 = plVar16[3];
      uVar43 = param_4[2];
      *(ulong *)(lVar36 + 0x18) = param_4[3];
      *(ulong *)(lVar36 + 0x10) = uVar43;
      if (0x10 < uVar23 - 0x10) {
        puVar28 = (ulong *)(lVar36 + 0x20);
        puVar27 = param_4 + 6;
        do {
          uVar43 = puVar27[-2];
          puVar28[1] = puVar27[-1];
          *puVar28 = uVar43;
          uVar43 = *puVar27;
          puVar28[3] = puVar27[1];
          puVar28[2] = uVar43;
          puVar28 = puVar28 + 4;
// more drops soon - github.com/pengussy
          puVar27 = puVar27 + 4;
        } while (puVar28 < (ulong *)(lVar36 + uVar23));
        goto LAB_002ac758;
      }
    }
    plVar16[3] = plVar16[3] + uVar23;
    piVar34 = (int *)plVar16[1];
    goto LAB_002ac770;
  }
  puVar27 = puVar28;
  if (param_4 <= puVar41) {
    puVar27 = (ulong *)((long)puVar28 + ((long)puVar41 - (long)param_4));
    uVar43 = *param_4;
    puVar53 = puVar28 + 2;
    puVar28[1] = param_4[1];
    *puVar28 = uVar43;
    if (0x10 < (ulong)((long)puVar41 - (long)param_4)) {
      do {
        uVar43 = param_4[2];
        puVar53[1] = param_4[3];
        *puVar53 = uVar43;
        uVar43 = param_4[4];
/* donate: donate/README.md - github.com/pengussy */
        puVar53[3] = param_4[5];
        puVar53[2] = uVar43;
        puVar53 = puVar53 + 4;
        param_4 = param_4 + 4;
      } while (puVar53 < puVar27);
    }
    param_4 = puVar41;
  }
  if (param_4 < puVar22) {
    uVar43 = (long)puVar22 - (long)param_4;
    if ((7 < uVar43) && (0x3f < (ulong)((long)puVar27 - (long)param_4))) {
      if (uVar43 < 0x40) {
        uVar30 = 0;
      }
      else {
        uVar30 = uVar43 & 0xffffffffffffffc0;
        puVar28 = puVar27 + 4;
        puVar53 = param_4 + 4;
        uVar55 = uVar30;
        do {
          uVar42 = puVar53[-4];
          uVar62 = puVar53[-1];
          uVar47 = puVar53[-2];
          uVar64 = puVar53[1];
/* wm:if you paid for this, you were scammed */
          uVar63 = *puVar53;
          uVar66 = puVar53[3];
          uVar65 = puVar53[2];
          puVar28[-3] = puVar53[-3];
          puVar28[-4] = uVar42;
          puVar28[-1] = uVar62;
          puVar28[-2] = uVar47;
          puVar28[1] = uVar64;
          *puVar28 = uVar63;
          puVar28[3] = uVar66;
          puVar28[2] = uVar65;
          uVar55 = uVar55 - 0x40;
          puVar28 = puVar28 + 8;
          puVar53 = puVar53 + 8;
        } while (uVar55 != 0);
        if (uVar43 == uVar30) goto LAB_002ac758;
        if ((uVar43 & 0x38) == 0) {
          puVar27 = (ulong *)((long)puVar27 + uVar30);
          param_4 = (ulong *)((long)param_4 + uVar30);
          goto LAB_002ac748;
        }
      }
      uVar55 = uVar43 & 0xfffffffffffffff8;
// donate: donate/README.md
      lVar36 = uVar30 - uVar55;
      puVar32 = (undefined8 *)((long)param_4 + uVar30);
      puVar31 = (undefined8 *)((long)puVar27 + uVar30);
      do {
        *puVar31 = *puVar32;
        lVar36 = lVar36 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar36 != 0);
      puVar27 = (ulong *)((long)puVar27 + uVar55);
      param_4 = (ulong *)((long)param_4 + uVar55);
      if (uVar43 == uVar55) goto LAB_002ac758;
    }
LAB_002ac748:
    do {
      puVar28 = (ulong *)((long)param_4 + 1);
      *(char *)puVar27 = (char)*param_4;
      puVar27 = (ulong *)((long)puVar27 + 1);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      param_4 = puVar28;
    } while (puVar28 != puVar22);
  }
LAB_002ac758:
  plVar16[3] = plVar16[3] + uVar23;
  piVar34 = (int *)plVar16[1];
  if (0xffff < uVar23) {
    *(undefined4 *)(plVar16 + 9) = 1;
    *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
  }
LAB_002ac770:
  *(short *)(piVar34 + 1) = (short)uVar23;
  *piVar34 = iVar58 + 3;
  uVar23 = lVar40 - 3;
  iVar51 = iVar48;
  if (0xffff < uVar23) {
LAB_002ac9a0:
    *(undefined4 *)(plVar16 + 9) = 2;
    *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
  }
LAB_002ac790:
  *(short *)((long)piVar34 + 6) = (short)uVar23;
  piVar34 = piVar34 + 2;
  plVar16[1] = (long)piVar34;
  param_4 = (ulong *)((long)puVar22 + lVar40);
  if (puVar24 < param_4) {
LAB_002abbcc:
    iVar48 = iVar58;
    puVar28 = param_4;
  }
  else {
    uVar49 = iVar5 + 2;
    lVar36 = *(long *)(lVar60 + (ulong)uVar49);
    *(uint *)(lVar39 + ((ulong)(lVar36 * -0x30e44323485a9b9d) >> (uVar52 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar52 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar38;
    *(uint *)(lVar37 + ((ulong)(lVar36 * -0x30e4432345000000) >> (uVar50 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar37 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e4432345000000) >>
/* wm:chat: discord.gg/sdkhDjTex */
                      (uVar50 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar38;
    iVar61 = iVar51;
    do {
      iVar51 = iVar58;
      iVar48 = iVar61;
      iVar61 = (int)param_4 - iVar38;
      uVar49 = iVar61 - iVar48;
      lVar36 = lVar44 - (ulong)uVar29;
      if (uVar3 <= uVar49) {
        lVar36 = lVar60;
      }
      if ((0xfffffffc < uVar49 - uVar3) || (*(int *)(lVar36 + (ulong)uVar49) != (int)*param_4)) {
        iVar58 = iVar51;
        iVar51 = iVar48;
        goto LAB_002abbcc;
      }
      puVar28 = puVar1;
      if (uVar3 <= uVar49) {
        puVar28 = puVar20;
      }
      lVar36 = func_0x002ad924((long)param_4 + 4,(int *)(lVar36 + (ulong)uVar49) + 1,puVar20,puVar28
                               ,piVar2);
      if (param_4 <= puVar41) {
        puVar28 = (ulong *)plVar16[3];
        uVar23 = *param_4;
        puVar28[1] = param_4[1];
        *puVar28 = uVar23;
        piVar34 = (int *)plVar16[1];
      }
      *(undefined2 *)(piVar34 + 1) = 0;
      *piVar34 = 1;
      if (0xffff < lVar36 + 1U) {
        *(undefined4 *)(plVar16 + 9) = 2;
        *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
      }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      *(short *)((long)piVar34 + 6) = (short)(lVar36 + 1U);
      uVar23 = *param_4;
      *(int *)(lVar37 + (uVar23 * -0x30e4432345000000 >> (uVar50 & 0x3f)) * 4) = iVar61;
      piVar34 = piVar34 + 2;
      *(int *)(lVar39 + (uVar23 * -0x30e44323485a9b9d >> (uVar52 & 0x3f)) * 4) = iVar61;
      param_4 = (ulong *)((long)param_4 + lVar36 + 4);
      plVar16[1] = (long)piVar34;
      puVar28 = param_4;
      iVar61 = iVar51;
      iVar58 = iVar48;
    } while (param_4 <= puVar24);
  }
LAB_002abbd0:
  if (puVar24 <= puVar28) goto LAB_002ad8e4;
  goto LAB_002abbe4;
LAB_002ab83c:
  puVar22 = (ulong *)((long)puVar28 + 1);
LAB_002ab6cc:
  uVar23 = (long)puVar22 - (long)param_4;
  puVar28 = (ulong *)plVar16[3];
  if (puVar22 <= puVar41) {
    uVar43 = *param_4;
/* wm:donate: donate/README.md */
    puVar28[1] = param_4[1];
    *puVar28 = uVar43;
    if (0x10 < uVar23) {
      lVar36 = plVar16[3];
      uVar43 = param_4[2];
      *(ulong *)(lVar36 + 0x18) = param_4[3];
      *(ulong *)(lVar36 + 0x10) = uVar43;
      if (0x10 < uVar23 - 0x10) {
        puVar28 = (ulong *)(lVar36 + 0x20);
        puVar27 = param_4 + 6;
        do {
          uVar43 = puVar27[-2];
          puVar28[1] = puVar27[-1];
          *puVar28 = uVar43;
          uVar43 = *puVar27;
          puVar28[3] = puVar27[1];
          puVar28[2] = uVar43;
          puVar28 = puVar28 + 4;
          puVar27 = puVar27 + 4;
        } while (puVar28 < (ulong *)(lVar36 + uVar23));
        goto LAB_002ab870;
      }
    }
    plVar16[3] = plVar16[3] + uVar23;
    piVar34 = (int *)plVar16[1];
    goto LAB_002ab888;
  }
  puVar27 = puVar28;
  if (param_4 <= puVar41) {
    puVar27 = (ulong *)((long)puVar28 + ((long)puVar41 - (long)param_4));
    uVar43 = *param_4;
    puVar53 = puVar28 + 2;
    puVar28[1] = param_4[1];
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    *puVar28 = uVar43;
    if (0x10 < (ulong)((long)puVar41 - (long)param_4)) {
      do {
        uVar43 = param_4[2];
        puVar53[1] = param_4[3];
        *puVar53 = uVar43;
        uVar43 = param_4[4];
        puVar53[3] = param_4[5];
        puVar53[2] = uVar43;
        puVar53 = puVar53 + 4;
        param_4 = param_4 + 4;
      } while (puVar53 < puVar27);
    }
    param_4 = puVar41;
  }
  if (param_4 < puVar22) {
    uVar43 = (long)puVar22 - (long)param_4;
    if ((7 < uVar43) && (0x3f < (ulong)((long)puVar27 - (long)param_4))) {
      if (uVar43 < 0x40) {
/* do not claim this as your own */
        uVar30 = 0;
      }
      else {
        uVar30 = uVar43 & 0xffffffffffffffc0;
        puVar28 = puVar27 + 4;
        puVar53 = param_4 + 4;
        uVar55 = uVar30;
        do {
          uVar42 = puVar53[-4];
          uVar62 = puVar53[-1];
          uVar47 = puVar53[-2];
          uVar64 = puVar53[1];
          uVar63 = *puVar53;
          uVar66 = puVar53[3];
          uVar65 = puVar53[2];
          puVar28[-3] = puVar53[-3];
          puVar28[-4] = uVar42;
          puVar28[-1] = uVar62;
          puVar28[-2] = uVar47;
          puVar28[1] = uVar64;
          *puVar28 = uVar63;
          puVar28[3] = uVar66;
          puVar28[2] = uVar65;
          uVar55 = uVar55 - 0x40;
          puVar28 = puVar28 + 8;
          puVar53 = puVar53 + 8;
        } while (uVar55 != 0);
        if (uVar43 == uVar30) goto LAB_002ab870;
        if ((uVar43 & 0x38) == 0) {
          puVar27 = (ulong *)((long)puVar27 + uVar30);
          param_4 = (ulong *)((long)param_4 + uVar30);
          goto LAB_002ab860;
        }
// if you paid for this, you were scammed
      }
      uVar55 = uVar43 & 0xfffffffffffffff8;
      lVar36 = uVar30 - uVar55;
      puVar32 = (undefined8 *)((long)param_4 + uVar30);
      puVar31 = (undefined8 *)((long)puVar27 + uVar30);
      do {
        *puVar31 = *puVar32;
        lVar36 = lVar36 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar36 != 0);
      puVar27 = (ulong *)((long)puVar27 + uVar55);
      param_4 = (ulong *)((long)param_4 + uVar55);
      if (uVar43 == uVar55) goto LAB_002ab870;
    }
LAB_002ab860:
    do {
      puVar28 = (ulong *)((long)param_4 + 1);
      *(char *)puVar27 = (char)*param_4;
      puVar27 = (ulong *)((long)puVar27 + 1);
      param_4 = puVar28;
    } while (puVar28 != puVar22);
  }
LAB_002ab870:
  plVar16[3] = plVar16[3] + uVar23;
  piVar34 = (int *)plVar16[1];
  if (0xffff < uVar23) {
/* keep the notice, keep the source honest - github.com/pengussy */
    *(undefined4 *)(plVar16 + 9) = 1;
    *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
  }
LAB_002ab888:
  *(short *)(piVar34 + 1) = (short)uVar23;
  *piVar34 = iVar58 + 3;
  uVar23 = lVar40 - 3;
  iVar51 = iVar48;
  if (0xffff < uVar23) {
LAB_002abab8:
    *(undefined4 *)(plVar16 + 9) = 2;
    *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
  }
LAB_002ab8a8:
  *(short *)((long)piVar34 + 6) = (short)uVar23;
  piVar34 = piVar34 + 2;
  plVar16[1] = (long)piVar34;
  param_4 = (ulong *)((long)puVar22 + lVar40);
  if (puVar24 < param_4) {
LAB_002aace4:
    iVar48 = iVar58;
/* wm:stripping the watermark breaks the license */
    puVar28 = param_4;
  }
  else {
    uVar49 = iVar5 + 2;
    lVar36 = *(long *)(lVar60 + (ulong)uVar49);
    *(uint *)(lVar39 + ((ulong)(lVar36 * -0x30e44323485a9b9d) >> (uVar52 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar52 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar38;
    *(uint *)(lVar37 + ((ulong)(lVar36 * -0x30e4432340650000) >> (uVar50 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar37 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e4432340650000) >>
                      (uVar50 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar38;
    iVar61 = iVar51;
    do {
      iVar51 = iVar58;
      iVar48 = iVar61;
      iVar61 = (int)param_4 - iVar38;
      uVar49 = iVar61 - iVar48;
      lVar36 = lVar44 - (ulong)uVar29;
      if (uVar3 <= uVar49) {
        lVar36 = lVar60;
      }
      if ((0xfffffffc < uVar49 - uVar3) || (*(int *)(lVar36 + (ulong)uVar49) != (int)*param_4)) {
        iVar58 = iVar51;
        iVar51 = iVar48;
        goto LAB_002aace4;
      }
      puVar28 = puVar1;
      if (uVar3 <= uVar49) {
        puVar28 = puVar20;
      }
      lVar36 = func_0x002ad924((long)param_4 + 4,(int *)(lVar36 + (ulong)uVar49) + 1,puVar20,puVar28
                               ,piVar2);
      if (param_4 <= puVar41) {
        puVar28 = (ulong *)plVar16[3];
        uVar23 = *param_4;
        puVar28[1] = param_4[1];
/* origin: github.com/pengussy - github.com/pengussy */
        *puVar28 = uVar23;
        piVar34 = (int *)plVar16[1];
      }
      *(undefined2 *)(piVar34 + 1) = 0;
      *piVar34 = 1;
      if (0xffff < lVar36 + 1U) {
        *(undefined4 *)(plVar16 + 9) = 2;
        *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
      }
      *(short *)((long)piVar34 + 6) = (short)(lVar36 + 1U);
      uVar23 = *param_4;
      *(int *)(lVar37 + (uVar23 * -0x30e4432340650000 >> (uVar50 & 0x3f)) * 4) = iVar61;
      piVar34 = piVar34 + 2;
      *(int *)(lVar39 + (uVar23 * -0x30e44323485a9b9d >> (uVar52 & 0x3f)) * 4) = iVar61;
      param_4 = (ulong *)((long)param_4 + lVar36 + 4);
      plVar16[1] = (long)piVar34;
      puVar28 = param_4;
      iVar61 = iVar51;
      iVar58 = iVar48;
    } while (param_4 <= puVar24);
  }
LAB_002aace8:
  if (puVar24 <= puVar28) goto LAB_002ad8e4;
  goto LAB_002aacfc;
LAB_002aa94c:
  puVar22 = (ulong *)((long)puVar28 + 1);
LAB_002aa7dc:
  uVar23 = (long)puVar22 - (long)param_4;
  puVar28 = (ulong *)plVar16[3];
  if (puVar22 <= puVar41) {
    uVar43 = *param_4;
    puVar28[1] = param_4[1];
    *puVar28 = uVar43;
    if (0x10 < uVar23) {
      lVar36 = plVar16[3];
      uVar43 = param_4[2];
      *(ulong *)(lVar36 + 0x18) = param_4[3];
      *(ulong *)(lVar36 + 0x10) = uVar43;
// found on a paste site? it was re-uploaded illegally
      if (0x10 < uVar23 - 0x10) {
        puVar28 = (ulong *)(lVar36 + 0x20);
        puVar27 = param_4 + 6;
        do {
          uVar43 = puVar27[-2];
          puVar28[1] = puVar27[-1];
          *puVar28 = uVar43;
          uVar43 = *puVar27;
          puVar28[3] = puVar27[1];
          puVar28[2] = uVar43;
          puVar28 = puVar28 + 4;
          puVar27 = puVar27 + 4;
        } while (puVar28 < (ulong *)(lVar36 + uVar23));
        goto LAB_002aa980;
      }
    }
    plVar16[3] = plVar16[3] + uVar23;
    piVar34 = (int *)plVar16[1];
    goto LAB_002aa998;
  }
  puVar27 = puVar28;
  if (param_4 <= puVar41) {
    puVar27 = (ulong *)((long)puVar28 + ((long)puVar41 - (long)param_4));
    uVar43 = *param_4;
    puVar53 = puVar28 + 2;
    puVar28[1] = param_4[1];
    *puVar28 = uVar43;
    if (0x10 < (ulong)((long)puVar41 - (long)param_4)) {
      do {
        uVar43 = param_4[2];
/* if you paid for this, you were scammed - github.com/pengussy */
        puVar53[1] = param_4[3];
        *puVar53 = uVar43;
        uVar43 = param_4[4];
        puVar53[3] = param_4[5];
        puVar53[2] = uVar43;
        puVar53 = puVar53 + 4;
        param_4 = param_4 + 4;
      } while (puVar53 < puVar27);
    }
    param_4 = puVar41;
  }
  if (param_4 < puVar22) {
    uVar43 = (long)puVar22 - (long)param_4;
    if ((7 < uVar43) && (0x3f < (ulong)((long)puVar27 - (long)param_4))) {
      if (uVar43 < 0x40) {
        uVar30 = 0;
      }
      else {
        uVar30 = uVar43 & 0xffffffffffffffc0;
        puVar28 = puVar27 + 4;
        puVar53 = param_4 + 4;
        uVar55 = uVar30;
        do {
          uVar42 = puVar53[-4];
          uVar62 = puVar53[-1];
          uVar47 = puVar53[-2];
          uVar64 = puVar53[1];
          uVar63 = *puVar53;
          uVar66 = puVar53[3];
          uVar65 = puVar53[2];
          puVar28[-3] = puVar53[-3];
          puVar28[-4] = uVar42;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
          puVar28[-1] = uVar62;
          puVar28[-2] = uVar47;
          puVar28[1] = uVar64;
          *puVar28 = uVar63;
          puVar28[3] = uVar66;
          puVar28[2] = uVar65;
          uVar55 = uVar55 - 0x40;
          puVar28 = puVar28 + 8;
          puVar53 = puVar53 + 8;
        } while (uVar55 != 0);
        if (uVar43 == uVar30) goto LAB_002aa980;
        if ((uVar43 & 0x38) == 0) {
          puVar27 = (ulong *)((long)puVar27 + uVar30);
          param_4 = (ulong *)((long)param_4 + uVar30);
          goto LAB_002aa970;
        }
      }
/* WM - found on a paste site? it was re-uploaded illegally */
      uVar55 = uVar43 & 0xfffffffffffffff8;
      lVar36 = uVar30 - uVar55;
      puVar32 = (undefined8 *)((long)param_4 + uVar30);
      puVar31 = (undefined8 *)((long)puVar27 + uVar30);
      do {
        *puVar31 = *puVar32;
        lVar36 = lVar36 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar36 != 0);
      puVar27 = (ulong *)((long)puVar27 + uVar55);
      param_4 = (ulong *)((long)param_4 + uVar55);
      if (uVar43 == uVar55) goto LAB_002aa980;
    }
LAB_002aa970:
    do {
      puVar28 = (ulong *)((long)param_4 + 1);
      *(char *)puVar27 = (char)*param_4;
      puVar27 = (ulong *)((long)puVar27 + 1);
      param_4 = puVar28;
    } while (puVar28 != puVar22);
  }
LAB_002aa980:
  plVar16[3] = plVar16[3] + uVar23;
  piVar34 = (int *)plVar16[1];
/* reversing this took months of machine time - github.com/pengussy */
  if (0xffff < uVar23) {
    *(undefined4 *)(plVar16 + 9) = 1;
    *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
  }
LAB_002aa998:
  *(short *)(piVar34 + 1) = (short)uVar23;
  *piVar34 = iVar58 + 3;
  uVar23 = lVar40 - 3;
  iVar51 = iVar48;
  if (0xffff < uVar23) {
LAB_002aabd0:
    *(undefined4 *)(plVar16 + 9) = 2;
    *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
  }
LAB_002aa9b8:
  *(short *)((long)piVar34 + 6) = (short)uVar23;
  piVar34 = piVar34 + 2;
  plVar16[1] = (long)piVar34;
  param_4 = (ulong *)((long)puVar22 + lVar40);
  iVar61 = iVar51;
  iVar48 = iVar58;
  if (puVar24 < param_4) {
LAB_002a9df0:
    iVar51 = iVar61;
    puVar28 = param_4;
  }
// WM - more drops soon - github.com/pengussy
  else {
    uVar49 = iVar5 + 2;
    lVar36 = *(long *)(lVar60 + (ulong)uVar49);
    *(uint *)(lVar39 + ((ulong)(lVar36 * -0x30e44323485a9b9d) >> (uVar52 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar52 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar38;
    *(uint *)(lVar37 + ((ulong)(lVar36 * -0x30e44323405a9d00) >> (uVar50 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar37 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e44323405a9d00) >>
                      (uVar50 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar38;
    do {
      iVar48 = iVar51;
      iVar51 = iVar58;
      iVar61 = (int)param_4 - iVar38;
      uVar49 = iVar61 - iVar48;
      lVar36 = lVar44 - (ulong)uVar29;
      if (uVar3 <= uVar49) {
        lVar36 = lVar60;
      }
      if ((0xfffffffc < uVar49 - uVar3) || (*(int *)(lVar36 + (ulong)uVar49) != (int)*param_4)) {
        iVar61 = iVar48;
        iVar48 = iVar51;
        goto LAB_002a9df0;
      }
      puVar28 = puVar1;
      if (uVar3 <= uVar49) {
        puVar28 = puVar20;
      }
      lVar36 = func_0x002ad924((long)param_4 + 4,(int *)(lVar36 + (ulong)uVar49) + 1,puVar20,puVar28
                               ,piVar2);
      if (param_4 <= puVar41) {
        puVar28 = (ulong *)plVar16[3];
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        uVar23 = *param_4;
        puVar28[1] = param_4[1];
        *puVar28 = uVar23;
        piVar34 = (int *)plVar16[1];
      }
      *(undefined2 *)(piVar34 + 1) = 0;
      *piVar34 = 1;
      if (0xffff < lVar36 + 1U) {
        *(undefined4 *)(plVar16 + 9) = 2;
        *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
      }
      *(short *)((long)piVar34 + 6) = (short)(lVar36 + 1U);
      uVar23 = *param_4;
      *(int *)(lVar37 + (uVar23 * -0x30e44323405a9d00 >> (uVar50 & 0x3f)) * 4) = iVar61;
      piVar34 = piVar34 + 2;
      *(int *)(lVar39 + (uVar23 * -0x30e44323485a9b9d >> (uVar52 & 0x3f)) * 4) = iVar61;
      param_4 = (ulong *)((long)param_4 + lVar36 + 4);
      plVar16[1] = (long)piVar34;
      puVar28 = param_4;
      iVar58 = iVar48;
    } while (param_4 <= puVar24);
  }
LAB_002a9df4:
  if (puVar24 <= puVar28) goto LAB_002ad8e4;
  goto LAB_002a9e08;
LAB_002ad614:
  puVar22 = (ulong *)((long)puVar28 + 1);
LAB_002ad4a4:
  uVar52 = (long)puVar22 - (long)param_4;
  puVar28 = (ulong *)plVar16[3];
/* WM - do not claim this as your own */
  if (puVar22 <= puVar41) {
    uVar23 = *param_4;
    puVar28[1] = param_4[1];
    *puVar28 = uVar23;
    if (0x10 < uVar52) {
      lVar36 = plVar16[3];
      uVar23 = param_4[2];
      *(ulong *)(lVar36 + 0x18) = param_4[3];
      *(ulong *)(lVar36 + 0x10) = uVar23;
      if (0x10 < uVar52 - 0x10) {
        puVar28 = (ulong *)(lVar36 + 0x20);
        puVar27 = param_4 + 6;
        do {
          uVar23 = puVar27[-2];
          puVar28[1] = puVar27[-1];
          *puVar28 = uVar23;
          uVar23 = *puVar27;
          puVar28[3] = puVar27[1];
          puVar28[2] = uVar23;
          puVar28 = puVar28 + 4;
          puVar27 = puVar27 + 4;
        } while (puVar28 < (ulong *)(lVar36 + uVar52));
        goto LAB_002ad648;
      }
    }
    plVar16[3] = plVar16[3] + uVar52;
    piVar34 = (int *)plVar16[1];
    goto LAB_002ad660;
  }
  puVar27 = puVar28;
  if (param_4 <= puVar41) {
    puVar27 = (ulong *)((long)puVar28 + ((long)puVar41 - (long)param_4));
    uVar23 = *param_4;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    puVar53 = puVar28 + 2;
    puVar28[1] = param_4[1];
    *puVar28 = uVar23;
    if (0x10 < (ulong)((long)puVar41 - (long)param_4)) {
      do {
        uVar23 = param_4[2];
        puVar53[1] = param_4[3];
        *puVar53 = uVar23;
        uVar23 = param_4[4];
        puVar53[3] = param_4[5];
        puVar53[2] = uVar23;
        puVar53 = puVar53 + 4;
        param_4 = param_4 + 4;
      } while (puVar53 < puVar27);
    }
    param_4 = puVar41;
  }
  if (param_4 < puVar22) {
    uVar23 = (long)puVar22 - (long)param_4;
    if ((7 < uVar23) && (0x3f < (ulong)((long)puVar27 - (long)param_4))) {
      if (uVar23 < 0x40) {
        uVar55 = 0;
      }
      else {
        uVar55 = uVar23 & 0xffffffffffffffc0;
        puVar28 = puVar27 + 4;
        puVar53 = param_4 + 4;
        uVar43 = uVar55;
        do {
          uVar30 = puVar53[-4];
          uVar47 = puVar53[-1];
          uVar42 = puVar53[-2];
/*  keep the notice, keep the source honest  */
          uVar63 = puVar53[1];
          uVar62 = *puVar53;
          uVar65 = puVar53[3];
          uVar64 = puVar53[2];
          puVar28[-3] = puVar53[-3];
          puVar28[-4] = uVar30;
          puVar28[-1] = uVar47;
          puVar28[-2] = uVar42;
          puVar28[1] = uVar63;
          *puVar28 = uVar62;
          puVar28[3] = uVar65;
          puVar28[2] = uVar64;
          uVar43 = uVar43 - 0x40;
          puVar28 = puVar28 + 8;
          puVar53 = puVar53 + 8;
        } while (uVar43 != 0);
        if (uVar23 == uVar55) goto LAB_002ad648;
        if ((uVar23 & 0x38) == 0) {
          puVar27 = (ulong *)((long)puVar27 + uVar55);
          param_4 = (ulong *)((long)param_4 + uVar55);
          goto LAB_002ad638;
        }
      }
      uVar43 = uVar23 & 0xfffffffffffffff8;
      lVar36 = uVar55 - uVar43;
      puVar32 = (undefined8 *)((long)param_4 + uVar55);
      puVar31 = (undefined8 *)((long)puVar27 + uVar55);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      do {
        *puVar31 = *puVar32;
        lVar36 = lVar36 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar36 != 0);
      puVar27 = (ulong *)((long)puVar27 + uVar43);
      param_4 = (ulong *)((long)param_4 + uVar43);
      if (uVar23 == uVar43) goto LAB_002ad648;
    }
LAB_002ad638:
    do {
      puVar28 = (ulong *)((long)param_4 + 1);
      *(char *)puVar27 = (char)*param_4;
      puVar27 = (ulong *)((long)puVar27 + 1);
      param_4 = puVar28;
    } while (puVar28 != puVar22);
  }
LAB_002ad648:
  plVar16[3] = plVar16[3] + uVar52;
  piVar34 = (int *)plVar16[1];
  if (0xffff < uVar52) {
    *(undefined4 *)(plVar16 + 9) = 1;
    *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
  }
LAB_002ad660:
  *(short *)(piVar34 + 1) = (short)uVar52;
  *piVar34 = iVar58 + 3;
  uVar52 = lVar40 - 3;
  iVar51 = iVar48;
  if (0xffff < uVar52) {
LAB_002ad894:
    *(undefined4 *)(plVar16 + 9) = 2;
    *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
  }
LAB_002ad680:
  *(short *)((long)piVar34 + 6) = (short)uVar52;
/* no support for modified copies */
  piVar34 = piVar34 + 2;
  plVar16[1] = (long)piVar34;
  param_4 = (ulong *)((long)puVar22 + lVar40);
  if (puVar24 < param_4) {
LAB_002acac0:
    iVar48 = iVar58;
    puVar28 = param_4;
  }
  else {
    uVar57 = iVar5 + 2;
    *(uint *)(lVar39 + ((ulong)(*(long *)(lVar60 + (ulong)uVar57) * -0x30e44323485a9b9d) >>
                       (uVar50 & 0x3f)) * 4) = uVar57;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar50 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar38;
    *(uint *)(lVar37 + (ulong)((uint)(*(int *)(lVar60 + (ulong)uVar57) * -0x61c8864f) >>
                              (ulong)(uVar49 & 0x1f)) * 4) = uVar57;
    *(int *)(lVar37 + (ulong)((uint)(*(int *)((long)param_4 + -1) * -0x61c8864f) >>
                             (ulong)(uVar49 & 0x1f)) * 4) =
         (int)(int *)((long)param_4 + -1) - iVar38;
    iVar61 = iVar51;
    do {
      iVar51 = iVar58;
      iVar48 = iVar61;
      iVar61 = (int)param_4 - iVar38;
      uVar57 = iVar61 - iVar48;
      lVar36 = lVar44 - (ulong)uVar29;
      if (uVar3 <= uVar57) {
        lVar36 = lVar60;
      }
      if ((0xfffffffc < uVar57 - uVar3) || (*(int *)(lVar36 + (ulong)uVar57) != (int)*param_4)) {
        iVar58 = iVar51;
        iVar51 = iVar48;
        goto LAB_002acac0;
      }
      puVar28 = puVar1;
/*  proprietary - see LICENSE - do not sell  */
      if (uVar3 <= uVar57) {
        puVar28 = puVar20;
      }
      lVar36 = func_0x002ad924((long)param_4 + 4,(int *)(lVar36 + (ulong)uVar57) + 1,puVar20,puVar28
                               ,piVar2);
      if (param_4 <= puVar41) {
        puVar28 = (ulong *)plVar16[3];
        uVar52 = *param_4;
        puVar28[1] = param_4[1];
        *puVar28 = uVar52;
        piVar34 = (int *)plVar16[1];
      }
      *(undefined2 *)(piVar34 + 1) = 0;
      *piVar34 = 1;
      if (0xffff < lVar36 + 1U) {
        *(undefined4 *)(plVar16 + 9) = 2;
        *(int *)((long)plVar16 + 0x4c) = (int)((ulong)((long)piVar34 - *plVar16) >> 3);
      }
      *(short *)((long)piVar34 + 6) = (short)(lVar36 + 1U);
      piVar34 = piVar34 + 2;
      *(int *)(lVar37 + (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar49 & 0x1f)) * 4)
           = iVar61;
      *(int *)(lVar39 + (*param_4 * -0x30e44323485a9b9d >> (uVar50 & 0x3f)) * 4) = iVar61;
      param_4 = (ulong *)((long)param_4 + lVar36 + 4);
      plVar16[1] = (long)piVar34;
      puVar28 = param_4;
      iVar61 = iVar51;
      iVar58 = iVar48;
    } while (param_4 <= puVar24);
  }
LAB_002acac4:
  if (puVar24 <= puVar28) goto LAB_002ad8e4;
  goto LAB_002acad8;
}

