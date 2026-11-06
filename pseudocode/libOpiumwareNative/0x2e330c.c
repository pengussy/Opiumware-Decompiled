/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2e330c:6b18a4de31
 */

long FUN_002e330c(undefined8 param_1,undefined8 param_2,qword *param_3,qword *param_4,qword *param_5
                 ,ulong param_6)

{
  section *psVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  qword *pqVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  undefined2 uVar10;
  qword *pqVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  dword *pdVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  qword *pqVar20;
  qword *pqVar21;
  uint uVar22;
  uint uVar23;
  qword *pqVar24;
  undefined4 *puVar25;
  uint uVar26;
// WM - unlicensed copy if this notice is missing
  int *piVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  undefined *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int *piVar38;
  int *piVar39;
  ulong uVar40;
  uint uVar41;
  uint *puVar42;
  uint uVar43;
  ulong uVar44;
  byte *pbVar45;
  undefined8 *puVar46;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  uint *puVar47;
  qword *unaff_x21;
  qword *pqVar48;
  qword *unaff_x22;
  undefined8 uVar49;
  uint *puVar50;
  qword *pqVar51;
  qword *unaff_x23;
  qword *unaff_x24;
  undefined8 unaff_x25;
  qword *unaff_x26;
  qword *unaff_x27;
  qword *unaff_x28;
  qword *pqVar52;
/* wm:unlicensed copy if this notice is missing */
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong uVar53;
  int iVar54;
  qword qVar55;
  int iVar56;
  int iVar57;
  undefined8 uVar58;
  qword qVar59;
  int iVar60;
  undefined8 uVar61;
  qword qVar62;
  qword qVar63;
  qword qVar64;
  qword qVar65;
  qword qVar66;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  
/* do not claim this as your own */
  auVar68._8_8_ = param_2;
  auVar68._0_8_ = param_1;
  auVar12._8_8_ = unaff_x20;
  auVar12._0_8_ = unaff_x19;
  do {
    lVar30 = auVar68._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(qword **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(qword **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(qword **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(qword **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(qword **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(qword **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(qword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar12._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar12._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    *(qword **)((long)register0x00000008 + -0x128) = param_3;
    *(long *)((long)register0x00000008 + -0x150) = auVar68._8_8_;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_01f20200;
    *(qword **)((long)register0x00000008 + -0x130) = param_4;
    *(undefined **)((long)register0x00000008 + -0x118) =
         (undefined *)((long)param_4 + (long)param_5);
    *(undefined **)((long)register0x00000008 + -0x110) =
         (undefined *)((long)param_4 + (long)param_5) + -8;
    lVar28 = *(long *)(lVar30 + 8);
    uVar31 = *(uint *)(lVar30 + 0x18);
    uVar33 = *(uint *)(lVar30 + 0x110);
    uVar44 = 0;
    if (2 < uVar33) {
      uVar44 = 3;
    }
    uVar43 = 3;
    if (uVar33 - 3 != 0) {
      uVar43 = 4;
    }
    *(ulong *)((long)register0x00000008 + -0xf8) = (ulong)uVar43;
    if (0xfffffffc < uVar33 - 6) {
      uVar44 = (ulong)(uVar33 - 3);
    }
    *(undefined8 *)((long)register0x00000008 + -0x138) =
         *(undefined8 *)(&UNK_01dc1d38 + uVar44 * 8 + (param_6 & 0xffffffff) * 0x20);
// proprietary - see LICENSE - do not sell
    puVar47 = (uint *)(lVar28 + (ulong)uVar31);
    uVar31 = *(uint *)(lVar30 + 0x114);
    if (0xffe < uVar31) {
      uVar31 = 0xfff;
    }
    *(uint *)((long)register0x00000008 + -0x148) = uVar31;
    *(undefined4 *)((long)register0x00000008 + -0xa4) = *(undefined4 *)(lVar30 + 0x2c);
    unaff_x24 = *(qword **)(lVar30 + 0xb0);
    puVar18 = *(uint **)(lVar30 + 0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x88) = 0;
    puVar29 = *(undefined8 **)(lVar30 + 0x120);
    if (puVar29 == (undefined8 *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
// donate: donate/README.md
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    }
    else {
      uVar49 = *puVar29;
      uVar61 = puVar29[3];
      uVar58 = puVar29[2];
      *(undefined8 *)((long)register0x00000008 + -0xd8) = puVar29[1];
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar49;
      *(undefined8 *)((long)register0x00000008 + -200) = uVar61;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar58;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = puVar29[4];
    }
    *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    unaff_x26 = param_5;
    func_0x002e5e84((undefined1 *)((long)register0x00000008 + -0xe0),0,param_5);
    pqVar48 = *(qword **)((long)register0x00000008 + -0x130);
    pqVar21 = (qword *)0x0;
    pqVar20 = param_5;
    func_0x002e6014(lVar30 + 0x90,pqVar48);
    pqVar51 = pqVar48;
/* proprietary - see LICENSE - do not sell */
    if (pqVar48 == (qword *)puVar47) {
      pqVar51 = (qword *)((long)pqVar48 + 1);
    }
    if (pqVar51 < *(uint **)((long)register0x00000008 + -0x110)) {
      *(undefined4 *)((long)register0x00000008 + -0x15c) = 0;
      *(long *)((long)register0x00000008 + -0x170) =
           *(long *)((long)register0x00000008 + -0x118) + -0x20;
      *(long *)((long)register0x00000008 + -0x168) =
           *(long *)((long)register0x00000008 + -0xf8) + -1;
      *(uint **)((long)register0x00000008 + -0xf0) = puVar18 + 10;
      *(uint **)((long)register0x00000008 + -0xe8) = puVar18 + 0x11;
      pqVar48 = (qword *)&MACH_HEADER.reserved;
      unaff_d8 = 0x100000001;
      unaff_d9 = 0x1f0000001f00;
      param_5 = (qword *)((long)&MACH_HEADER.magic + 1);
      unaff_x25 = 0x40000000;
      unaff_x28 = *(qword **)((long)register0x00000008 + -0x130);
      puVar47 = *(uint **)((long)register0x00000008 + -0x150);
      *(qword **)((long)register0x00000008 + -0x158) = unaff_x24;
      do {
        *(qword **)((long)register0x00000008 + -0x100) = pqVar51;
        *(qword **)((long)register0x00000008 + -0x120) = unaff_x28;
        unaff_x27 = (qword *)((long)pqVar51 - (long)unaff_x28);
        uVar33 = (uint)unaff_x27;
        uVar49 = *(undefined8 *)((long)register0x00000008 + -0x118);
        uVar15 = (**(code **)((long)register0x00000008 + -0x138))
                           (unaff_x24,lVar30,(undefined1 *)((long)register0x00000008 + -0xa4),
                            pqVar51,uVar49,*(undefined8 *)((long)register0x00000008 + -0x128),
                            uVar33 == 0,*(undefined8 *)((long)register0x00000008 + -0xf8));
        *(undefined4 *)((long)register0x00000008 + -0xa0) = uVar15;
        pqVar21 = (qword *)(ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x100) -
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                        (int)*(undefined8 *)((long)register0x00000008 + -0x130));
        unaff_x26 = (qword *)(ulong)(uint)((int)uVar49 -
                                          (int)*(undefined8 *)((long)register0x00000008 + -0x100));
        lVar28 = *(long *)((long)register0x00000008 + -0x100);
        pqVar20 = (qword *)((long)register0x00000008 + -0xa0);
        func_0x002e6cd8((undefined1 *)((long)register0x00000008 + -0xe0),unaff_x24);
        uVar31 = *(uint *)((long)register0x00000008 + -0xa0);
        if (uVar31 == 0) {
          pqVar51 = (qword *)(lVar28 + 1);
          unaff_x28 = *(qword **)((long)register0x00000008 + -0x120);
        }
        else {
          puVar18[2] = 0;
          puVar18[3] = uVar33;
          piVar27 = *(int **)((long)register0x00000008 + -0xf0);
          unaff_x28 = *(qword **)((long)register0x00000008 + -0x120);
          if (*(int *)(lVar30 + 0xe0) == 1) {
            uVar33 = (int)LZCOUNT(uVar33 + 1) * -0x100 + 0x1f00;
          }
          else if (uVar33 == 0x20000) {
            uVar33 = (*(int *)(lVar30 + 0xd4) +
                     (int)LZCOUNT(*(int *)(*(long *)(lVar30 + 0x98) + 0x8c) + 1) * 0x100) - 0xe00;
          }
          else {
            if (uVar33 < 0x40) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
              uVar33 = (uint)(byte)(&UNK_01ade1dc)[(ulong)unaff_x27 & 0x3f];
            }
            else {
              uVar33 = 0x32 - (int)LZCOUNT(uVar33);
            }
            uVar33 = (*(int *)(lVar30 + 0xd4) +
                     ((int)LZCOUNT(*(int *)(*(long *)(lVar30 + 0x98) + (ulong)uVar33 * 4) + 1) +
                     (uint)(byte)(&UNK_01ade1b8)[uVar33]) * 0x100) - 0x1f00;
          }
          *puVar18 = uVar33;
          uVar49 = **(undefined8 **)((long)register0x00000008 + -0x128);
          puVar18[6] = *(uint *)(*(undefined8 **)((long)register0x00000008 + -0x128) + 1);
          *(undefined8 *)(puVar18 + 4) = uVar49;
          uVar33 = *(uint *)((long)(unaff_x24 + (uVar31 - 1)) + 4);
          if (*(uint *)((long)register0x00000008 + -0x148) < uVar33) {
            puVar50 = (uint *)0x0;
// WM - donate: donate/README.md
            uVar31 = (uint)unaff_x24[uVar31 - 1];
LAB_002e3ee8:
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)(puVar18 + (long)puVar50 * 7 + 4);
            *(uint *)((long)register0x00000008 + -0x98) = puVar18[(long)puVar50 * 7 + 6];
            if (uVar31 < 4) {
              uVar43 = uVar31;
              if ((int)unaff_x27 == 0) {
                uVar43 = uVar31 + 1;
              }
              uVar43 = uVar43 - 1;
              if (uVar43 == 3) {
                iVar32 = *(int *)((long)register0x00000008 + -0xa0);
                iVar54 = iVar32 + -1;
LAB_002e3f5c:
                puVar25 = (undefined4 *)((long)register0x00000008 + -0x98);
                if (uVar43 != 1) {
                  puVar25 = (undefined4 *)((ulong)((long)register0x00000008 + -0xa0) | 4);
                }
                uVar15 = *puVar25;
                *(int *)((long)register0x00000008 + -0x9c) = iVar32;
                goto LAB_002e3f74;
              }
              if (uVar43 != 0) {
                iVar54 = *(int *)((long)register0x00000008 + (ulong)uVar43 * 4 + -0xa0);
                iVar32 = *(int *)((long)register0x00000008 + -0xa0);
                goto LAB_002e3f5c;
              }
              uVar15 = *(undefined4 *)((long)register0x00000008 + -0x98);
            }
            else {
              uVar15 = *(undefined4 *)((long)register0x00000008 + -0x9c);
              *(undefined4 *)((long)register0x00000008 + -0x9c) =
                   *(undefined4 *)((long)register0x00000008 + -0xa0);
/* wm:watermarked copy - do not remove */
              iVar54 = uVar31 - 3;
LAB_002e3f74:
              *(int *)((long)register0x00000008 + -0xa0) = iVar54;
            }
            puVar29 = *(undefined8 **)((long)register0x00000008 + -0x128);
            *puVar29 = *(undefined8 *)((long)register0x00000008 + -0xa0);
            *(undefined4 *)(puVar29 + 1) = uVar15;
          }
          else {
            iVar32 = (int)lVar28 - (int)unaff_x28;
            lVar28 = *(long *)((long)register0x00000008 + -0x168);
            do {
              iVar32 = iVar32 + 1;
              piVar27[-3] = 0x40000000;
              piVar27[-1] = 0;
              *piVar27 = iVar32;
              piVar27 = piVar27 + 7;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            uVar40 = *(ulong *)((long)register0x00000008 + -0xf8);
            uVar44 = 0;
            do {
              uVar33 = *(uint *)((long)(unaff_x24 + uVar44) + 4);
              if ((uint)uVar40 <= uVar33) {
                uVar43 = (uint)unaff_x24[uVar44];
                uVar35 = 0x1f - (int)LZCOUNT(uVar43);
                if (*(int *)(lVar30 + 0xe0) == 1) {
                  do {
                    uVar36 = (uint)uVar40;
                    uVar37 = *puVar18;
                    puVar42 = puVar18 + (uVar40 & 0xffffffff) * 7;
                    puVar42[2] = uVar36;
                    puVar42[3] = 0;
                    *puVar42 = uVar37 + (uVar35 - (int)LZCOUNT(uVar36 - 2)) * 0x100 + 0x2f00;
                    puVar42[1] = uVar43;
                    uVar40 = (ulong)(uVar36 + 1);
                  } while (uVar36 + 1 <= uVar33);
/*  found on a paste site? it was re-uploaded illegally  */
                }
                else {
                  iVar32 = uVar35 * 0x200 + -0x63cd;
                  if (uVar35 < 0x14) {
                    iVar32 = -0x3dcd;
                  }
                  iVar54 = *(int *)(lVar30 + 0xd8);
                  iVar56 = *(int *)(lVar30 + 0xdc);
                  iVar57 = *(int *)(lVar30 + 0xd4);
                  lVar28 = *(long *)(lVar30 + 0xa0);
                  lVar8 = *(long *)(lVar30 + 0xa8);
                  piVar27 = *(int **)(lVar30 + 0x98);
                  do {
                    uVar36 = (uint)uVar40;
                    uVar37 = uVar36 - 3;
                    if (uVar37 < 0x80) {
                      uVar53 = (ulong)(byte)(&UNK_01ade251)[uVar37];
                    }
                    else {
                      uVar53 = (ulong)(0x43 - (int)LZCOUNT(uVar37));
                    }
                    iVar60 = *(int *)(lVar8 + (ulong)uVar35 * 4);
                    bVar9 = (&UNK_01ade21c)[uVar53];
                    iVar6 = *(int *)(lVar28 + uVar53 * 4);
                    uVar23 = *puVar18;
                    unaff_x26 = (qword *)(ulong)uVar23;
                    pqVar20 = (qword *)(puVar18 + (uVar40 & 0xffffffff) * 7);
                    *(uint *)((long)pqVar20 + 4) = uVar43;
                    *(uint *)(pqVar20 + 1) = uVar36;
                    *(uint *)((long)pqVar20 + 0xc) = 0;
                    uVar37 = iVar57 + -0x1f00 + (int)LZCOUNT(*piVar27 + 1) * 0x100;
                    pqVar21 = (qword *)(ulong)uVar37;
                    *(uint *)pqVar20 =
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                         uVar37 + iVar32 + iVar56 + iVar54 + uVar23 +
                                  ((int)LZCOUNT(iVar60 + 1) + uVar35 + (uint)bVar9 +
                                  (int)LZCOUNT(iVar6 + 1)) * 0x100;
                    uVar40 = (ulong)(uVar36 + 1);
                  } while (uVar36 + 1 <= uVar33);
                }
              }
              uVar44 = uVar44 + 1;
            } while (uVar44 != uVar31);
            puVar18[(uVar40 & 0xffffffff) * 7] = 0x40000000;
            uVar31 = (int)uVar40 - 1;
            puVar42 = (uint *)(ulong)uVar31;
            if (uVar31 != 0) {
              puVar50 = (uint *)((long)&MACH_HEADER.magic + 1);
              do {
                while( true ) {
                  uVar35 = (uint)puVar50;
                  puVar4 = (undefined *)
                           (*(long *)((long)register0x00000008 + -0x100) + (long)puVar50);
                  puVar19 = puVar18 + (ulong)(uVar35 - 1) * 7;
                  uVar33 = puVar19[3];
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                  uVar31 = uVar33 + 1;
                  uVar43 = *puVar19;
                  if (*(int *)(lVar30 + 0xf0) != 2) break;
                  iVar32 = uVar43 + 0x800;
                  if (*(int *)(lVar30 + 0xe0) == 1) goto LAB_002e38d0;
                  if (uVar31 != 0x20000) goto LAB_002e3958;
LAB_002e3808:
                  lVar28 = *(long *)(lVar30 + 0x98);
                  iVar56 = *(int *)(lVar30 + 0xd4) +
                           (int)LZCOUNT(*(int *)(lVar28 + 0x8c) + 1) * 0x100 + -0xe00;
                  iVar54 = *(int *)(lVar30 + 0xd4) + -0x1f00;
LAB_002e3828:
                  uVar33 = 0x32 - (int)LZCOUNT(uVar33);
LAB_002e3834:
                  uVar33 = iVar32 + (iVar56 - (iVar54 + ((int)LZCOUNT(*(int *)(lVar28 + (ulong)
                                                  uVar33 * 4) + 1) +
                                                  (uint)(byte)(&UNK_01ade1b8)[uVar33]) * 0x100));
                  puVar17 = puVar18 + (long)puVar50 * 7;
                  uVar43 = *puVar17;
                  if ((int)*puVar17 < (int)uVar33) goto LAB_002e3900;
LAB_002e386c:
                  uVar49 = *(undefined8 *)(puVar19 + 3);
/* stripping the watermark breaks the license - github.com/pengussy */
                  *(undefined8 *)(puVar17 + 5) = *(undefined8 *)(puVar19 + 5);
                  *(undefined8 *)(puVar17 + 3) = uVar49;
                  uVar49 = *(undefined8 *)puVar19;
                  *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar19 + 2);
                  *(undefined8 *)puVar17 = uVar49;
                  puVar17[3] = uVar31;
                  *puVar17 = uVar33;
                  if (uVar31 != 0) goto LAB_002e3908;
LAB_002e388c:
                  uVar43 = puVar17[1];
                  uVar36 = uVar35 - puVar17[2];
                  uVar37 = puVar18[(ulong)uVar36 * 7 + 3];
                  *(undefined8 *)((long)register0x00000008 + -0xa0) =
                       *(undefined8 *)(puVar18 + (ulong)uVar36 * 7 + 4);
                  *(uint *)((long)register0x00000008 + -0x98) = puVar18[(ulong)uVar36 * 7 + 6];
                  if (3 < uVar43) {
                    uVar37 = *(uint *)((long)register0x00000008 + -0x9c);
                    *(undefined4 *)((long)register0x00000008 + -0x9c) =
                         *(undefined4 *)((long)register0x00000008 + -0xa0);
                    iVar32 = uVar43 - 3;
LAB_002e3a64:
                    *(int *)((long)register0x00000008 + -0xa0) = iVar32;
                    *(undefined8 *)(puVar17 + 4) = *(undefined8 *)((long)register0x00000008 + -0xa0)
                    ;
                    puVar17[6] = uVar37;
                    puVar34 = *(undefined **)((long)register0x00000008 + -0x110);
                    goto joined_r0x002e3a7c;
                  }
                  if (uVar37 == 0) {
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                    uVar43 = uVar43 + 1;
                  }
                  uVar43 = uVar43 - 1;
                  if (uVar43 == 3) {
                    iVar54 = *(int *)((long)register0x00000008 + -0xa0);
                    iVar32 = iVar54 + -1;
LAB_002e3a4c:
                    puVar19 = (uint *)((long)register0x00000008 + -0x98);
                    if (uVar43 != 1) {
                      puVar19 = (uint *)((ulong)((long)register0x00000008 + -0xa0) | 4);
                    }
                    uVar37 = *puVar19;
                    *(int *)((long)register0x00000008 + -0x9c) = iVar54;
                    goto LAB_002e3a64;
                  }
                  if (uVar43 != 0) {
                    iVar32 = *(int *)((long)register0x00000008 + (ulong)uVar43 * 4 + -0xa0);
                    iVar54 = *(int *)((long)register0x00000008 + -0xa0);
                    goto LAB_002e3a4c;
                  }
                  uVar43 = *(uint *)((long)register0x00000008 + -0x98);
                  *(undefined8 *)(puVar17 + 4) = *(undefined8 *)((long)register0x00000008 + -0xa0);
/* donate: donate/README.md - github.com/pengussy */
                  puVar17[6] = uVar43;
                  if (puVar4 <= *(undefined **)((long)register0x00000008 + -0x110))
                  goto LAB_002e3a80;
LAB_002e37b4:
                  uVar31 = uVar35 + 1;
joined_r0x002e3e78:
                  puVar50 = (uint *)(ulong)(uVar35 + 1);
                  if ((uint)puVar42 < uVar31) goto LAB_002e3e88;
                }
                if (*(int *)(lVar30 + 0xe0) == 1) {
                  iVar32 = uVar43 + 0x600;
LAB_002e38d0:
                  uVar33 = iVar32 + (((int)LZCOUNT(uVar33 + 2) * -0x100 + 0x1f00) -
                                    ((int)LZCOUNT(uVar31) * -0x100 + 0x1f00));
                  puVar17 = puVar18 + (long)puVar50 * 7;
                  uVar43 = *puVar17;
                  if ((int)uVar33 <= (int)*puVar17) goto LAB_002e386c;
                }
                else {
                  uVar37 = (int)LZCOUNT(*(int *)(*(long *)(lVar30 + 0x90) +
                                                (ulong)(byte)puVar4[-1] * 4) + 1) * -0x100 + 0x1f00;
                  iVar32 = 0x100;
                  if (uVar37 <= *(int *)(lVar30 + 0xd0) - 0x100U) {
                    iVar32 = *(int *)(lVar30 + 0xd0) - uVar37;
                  }
// WM - more drops soon - github.com/pengussy
                  iVar32 = iVar32 + uVar43;
                  if (uVar31 == 0x20000) goto LAB_002e3808;
LAB_002e3958:
                  if (uVar31 < 0x40) {
                    uVar43 = (uint)(byte)(&UNK_01ade1dc)[uVar31];
                  }
                  else {
                    uVar43 = 0x32 - (int)LZCOUNT(uVar31);
                  }
                  lVar28 = *(long *)(lVar30 + 0x98);
                  iVar54 = *(int *)(lVar30 + 0xd4) + -0x1f00;
                  iVar56 = iVar54 + ((int)LZCOUNT(*(int *)(lVar28 + (ulong)uVar43 * 4) + 1) +
                                    (uint)(byte)(&UNK_01ade1b8)[uVar43]) * 0x100;
                  if (uVar33 != 0x20000) {
                    if (0x3f < uVar33) goto LAB_002e3828;
                    uVar33 = (uint)(byte)(&UNK_01ade1dc)[uVar33];
                    goto LAB_002e3834;
                  }
                  uVar33 = iVar32 + (iVar56 - (*(int *)(lVar30 + 0xd4) +
                                               (int)LZCOUNT(*(int *)(lVar28 + 0x8c) + 1) * 0x100 +
                                              -0xe00));
                  puVar17 = puVar18 + (long)puVar50 * 7;
                  uVar43 = *puVar17;
                  if ((int)uVar33 <= (int)*puVar17) goto LAB_002e386c;
                }
LAB_002e3900:
                uVar33 = uVar43;
                uVar31 = puVar17[3];
                if (uVar31 == 0) goto LAB_002e388c;
LAB_002e3908:
                puVar34 = *(undefined **)((long)register0x00000008 + -0x110);
joined_r0x002e3a7c:
                if (puVar34 < puVar4) goto LAB_002e37b4;
LAB_002e3a80:
// WM - chat: discord.gg/sdkhDjTex
                if (uVar35 == (uint)puVar42) {
                  puVar42 = puVar50;
                  break;
                }
                if ((int)puVar18[(ulong)(uVar35 + 1) * 7] <= (int)(uVar33 + 0x80))
                goto LAB_002e37b4;
                iVar32 = *(int *)(lVar30 + 0xe0);
                *(uint *)((long)register0x00000008 + -0x140) = uVar33;
                *(uint *)((long)register0x00000008 + -0x13c) = uVar35 + 1;
                if (iVar32 == 1) {
                  *(undefined4 *)((long)register0x00000008 + -0x144) = 0;
                }
                else {
                  *(int *)((long)register0x00000008 + -0x144) =
                       *(int *)(lVar30 + 0xd4) + (int)LZCOUNT(**(int **)(lVar30 + 0x98) + 1) * 0x100
                       + -0x1f00;
                }
                uVar49 = *(undefined8 *)((long)register0x00000008 + -0x118);
                uVar15 = (**(code **)((long)register0x00000008 + -0x138))
                                   (unaff_x24,lVar30,
                                    (undefined1 *)((long)register0x00000008 + -0xa4),puVar4,uVar49,
                                    puVar17 + 4,uVar31 == 0,
                                    *(undefined8 *)((long)register0x00000008 + -0xf8));
                *(undefined4 *)((long)register0x00000008 + -0xa0) = uVar15;
                pqVar21 = (qword *)(ulong)(uint)((int)puVar4 -
                                                (int)*(undefined8 *)
                                                      ((long)register0x00000008 + -0x130));
                *(undefined **)((long)register0x00000008 + -0x108) = puVar4;
                unaff_x26 = (qword *)(ulong)(uint)((int)uVar49 - (int)puVar4);
                unaff_x24 = *(qword **)((long)register0x00000008 + -0x158);
                pqVar20 = (qword *)((long)register0x00000008 + -0xa0);
                func_0x002e6cd8((undefined1 *)((long)register0x00000008 + -0xe0),unaff_x24);
                uVar31 = *(uint *)((long)register0x00000008 + -0xa0);
                if (uVar31 == 0) {
/* WM - proprietary - see LICENSE - do not sell */
                  puVar47 = *(uint **)((long)register0x00000008 + -0x150);
                  uVar31 = *(uint *)((long)register0x00000008 + -0x13c);
                  goto joined_r0x002e3e78;
                }
                uVar33 = *(dword *)((long)unaff_x24 + ((ulong)(uVar31 - 1) * 2 + 1) * 4);
                puVar19 = (uint *)(ulong)(uVar33 + uVar35);
                puVar47 = *(uint **)((long)register0x00000008 + -0x150);
                lVar28 = *(long *)((long)register0x00000008 + -0xf0);
                if (((*(uint *)((long)register0x00000008 + -0x148) < uVar33) ||
                    (0xfff < uVar33 + uVar35)) ||
                   (*(ulong *)((long)register0x00000008 + -0x118) <=
                    *(long *)((long)register0x00000008 + -0x108) + (ulong)uVar33)) {
                  if (uVar33 == 0) {
                    unaff_x27 = unaff_x24;
                    goto LAB_002e43d0;
                  }
                  uVar31 = (uint)unaff_x24[uVar31 - 1];
                  goto LAB_002e3edc;
                }
                uVar44 = 0;
                iVar32 = *(int *)((long)register0x00000008 + -0x144);
/*  more drops soon - github.com/pengussy  */
                iVar54 = *(int *)((long)register0x00000008 + -0x140);
                *(int *)((long)register0x00000008 + -0x108) = iVar32 + iVar54;
                do {
                  pqVar51 = unaff_x24 + uVar44;
                  uVar33 = (uint)*(undefined8 *)((long)register0x00000008 + -0xf8);
                  if (uVar44 != 0) {
                    uVar33 = *(dword *)((long)pqVar51 + -4) + 1;
                  }
                  uVar43 = *(uint *)((long)pqVar51 + 4);
                  if (uVar33 <= uVar43) {
                    uVar37 = (uint)*pqVar51;
                    uVar36 = 0x1f - (int)LZCOUNT(uVar37);
                    if (*(int *)(lVar30 + 0xe0) == 1) {
                      iVar56 = 0;
                      uVar23 = uVar35 + uVar43;
                      uVar22 = uVar23;
                      do {
                        uVar26 = iVar32 + iVar54 + 0x2f00 +
/*  do not claim this as your own  */
                                 (uVar36 - (int)LZCOUNT(uVar43 - 2)) * 0x100;
                        pqVar20 = (qword *)(ulong)(uVar43 + uVar35);
                        if ((uint)puVar42 < uVar43 + uVar35) {
                          puVar50 = (uint *)((ulong)puVar42 & 0xffffffff);
                          pqVar21 = (qword *)((ulong)(uVar23 - iVar56) - (long)puVar50);
                          if ((uint *)((long)&MACH_HEADER.magic + 3) < pqVar21) {
                            unaff_x26 = (qword *)((ulong)pqVar21 & 0xfffffffffffffffc);
                            puVar42 = (uint *)((long)unaff_x26 + (long)puVar50);
                            uVar40 = (ulong)uVar22 - (long)puVar50 & 0xfffffffffffffffc;
                            puVar25 = (undefined4 *)
                                      (*(long *)((long)register0x00000008 + -0xe8) +
                                      (long)puVar50 * 0x1c);
                            do {
                              puVar25[-10] = 0x40000000;
                              puVar25[-3] = 0x40000000;
                              puVar25[4] = 0x40000000;
                              puVar25[0xb] = 0x40000000;
                              puVar25[-7] = 1;
                              *puVar25 = 1;
                              puVar25[7] = 1;
                              puVar25[0xe] = 1;
                              puVar25 = puVar25 + 0x1c;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                              uVar40 = uVar40 - 4;
                            } while (uVar40 != 0);
                            if (pqVar21 == unaff_x26) goto LAB_002e3c14;
                          }
                          else {
                            puVar42 = puVar50;
                          }
                          pqVar51 = (qword *)(lVar28 + (long)puVar42 * 0x1c);
                          do {
                            puVar42 = (uint *)((long)puVar42 + 1);
                            *(uint *)((long)pqVar51 + -0xc) = 0x40000000;
                            pqVar21 = (qword *)((long)pqVar51 + 0x1c);
                            *(uint *)pqVar51 = 1;
                            pqVar51 = pqVar21;
                          } while (puVar42 < pqVar20);
                        }
                        else {
                          pqVar21 = (qword *)(ulong)puVar18[(long)pqVar20 * 7];
                          if ((int)puVar18[(long)pqVar20 * 7] <= (int)uVar26) break;
                        }
// WM - reversing this took months of machine time
LAB_002e3c14:
                        pqVar20 = (qword *)(puVar18 + (long)pqVar20 * 7);
                        *(uint *)(pqVar20 + 1) = uVar43;
                        *(uint *)((long)pqVar20 + 0xc) = 0;
                        *(uint *)pqVar20 = uVar26;
                        *(uint *)((long)pqVar20 + 4) = uVar37;
                        uVar43 = uVar43 - 1;
                        iVar56 = iVar56 + 1;
                        uVar22 = uVar22 - 1;
                      } while (uVar33 <= uVar43);
                    }
                    else {
                      iVar56 = 0;
                      iVar57 = uVar36 * 0x200 + -0x63cd;
                      if (uVar36 < 0x14) {
                        iVar57 = -0x3dcd;
                      }
                      iVar60 = *(int *)(lVar30 + 0xd8);
                      iVar6 = *(int *)(lVar30 + 0xdc);
                      lVar8 = *(long *)(lVar30 + 0xa0);
                      lVar7 = *(long *)(lVar30 + 0xa8);
                      iVar2 = *(int *)((long)register0x00000008 + -0x108);
                      uVar23 = uVar35 + uVar43;
                      pqVar20 = (qword *)(ulong)uVar23;
                      pqVar21 = pqVar20;
                      do {
                        uVar22 = uVar43 - 3;
                        if (uVar22 < 0x80) {
                          uVar22 = (uint)(byte)(&UNK_01ade251)[uVar22];
                        }
                        else {
                          uVar22 = 0x43 - (int)LZCOUNT(uVar22);
                        }
                        uVar22 = iVar57 + iVar6 + iVar60 + iVar2 +
                                 ((int)LZCOUNT(*(int *)(lVar7 + (ulong)uVar36 * 4) + 1) + uVar36 +
                                  (uint)(byte)(&UNK_01ade21c)[uVar22] +
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                                 (int)LZCOUNT(*(int *)(lVar8 + (ulong)uVar22 * 4) + 1)) * 0x100;
                        unaff_x26 = (qword *)(ulong)uVar22;
                        puVar50 = (uint *)(ulong)(uVar43 + uVar35);
                        if ((uint)puVar42 < uVar43 + uVar35) {
                          puVar19 = (uint *)((ulong)puVar42 & 0xffffffff);
                          uVar40 = (ulong)(uVar23 - iVar56) - (long)puVar19;
                          if (uVar40 < 4) {
                            puVar42 = puVar19;
                          }
                          else {
                            puVar42 = (uint *)((uVar40 & 0xfffffffffffffffc) + (long)puVar19);
                            uVar53 = (long)pqVar21 - (long)puVar19 & 0xfffffffffffffffc;
                            puVar25 = (undefined4 *)
                                      (*(long *)((long)register0x00000008 + -0xe8) +
                                      (long)puVar19 * 0x1c);
                            do {
                              puVar25[-10] = 0x40000000;
                              puVar25[-3] = 0x40000000;
                              puVar25[4] = 0x40000000;
                              puVar25[0xb] = 0x40000000;
                              puVar25[-7] = 1;
                              *puVar25 = 1;
                              puVar25[7] = 1;
                              puVar25[0xe] = 1;
/* reversing this took months of machine time */
                              puVar25 = puVar25 + 0x1c;
                              uVar53 = uVar53 - 4;
                            } while (uVar53 != 0);
                            lVar28 = *(long *)((long)register0x00000008 + -0xf0);
                            if (uVar40 == (uVar40 & 0xfffffffffffffffc)) goto LAB_002e3d24;
                          }
                          puVar25 = (undefined4 *)(lVar28 + (long)puVar42 * 0x1c);
                          do {
                            puVar42 = (uint *)((long)puVar42 + 1);
                            puVar25[-3] = 0x40000000;
                            *puVar25 = 1;
                            puVar25 = puVar25 + 7;
                          } while (puVar42 < puVar50);
                        }
                        else if ((int)puVar18[(long)puVar50 * 7] <= (int)uVar22) break;
LAB_002e3d24:
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                        puVar50 = puVar18 + (long)puVar50 * 7;
                        puVar50[2] = uVar43;
                        puVar50[3] = 0;
                        *puVar50 = uVar22;
                        puVar50[1] = uVar37;
                        uVar43 = uVar43 - 1;
                        iVar56 = iVar56 + 1;
                        pqVar21 = (qword *)(ulong)((int)pqVar21 - 1);
                      } while (uVar33 <= uVar43);
                    }
                  }
                  uVar44 = uVar44 + 1;
                } while (uVar44 != uVar31);
                puVar18[(ulong)((uint)puVar42 + 1) * 7] = 0x40000000;
                puVar50 = (uint *)(ulong)(uVar35 + 1);
              } while (*(uint *)((long)register0x00000008 + -0x13c) <= (uint)puVar42);
            }
LAB_002e3e88:
            puVar17 = puVar18 + ((ulong)puVar42 & 0xffffffff) * 7;
            uVar31 = puVar17[1];
            *(uint *)((long)register0x00000008 + -0x15c) = *puVar17;
            uVar33 = puVar17[2];
            uVar43 = puVar17[3];
            uVar35 = puVar17[6];
            *(undefined8 *)((long)register0x00000008 + -0x90) = *(undefined8 *)(puVar17 + 4);
            *(uint *)((long)register0x00000008 + -0x88) = uVar35;
            unaff_x27 = (qword *)((long)&segment_command_00000020.vmsize + 3);
            puVar19 = puVar42;
            if (uVar33 == 0) {
LAB_002e43d0:
              pqVar51 = (qword *)(*(long *)((long)register0x00000008 + -0x100) +
                                 ((ulong)puVar19 & 0xffffffff));
              unaff_x28 = *(qword **)((long)register0x00000008 + -0x120);
              goto LAB_002e34b8;
            }
            uVar35 = (int)puVar42 - uVar33;
/* more drops soon - github.com/pengussy - github.com/pengussy */
            puVar50 = (uint *)(ulong)uVar35;
            if (uVar43 == 0) {
LAB_002e3edc:
              unaff_x28 = *(qword **)((long)register0x00000008 + -0x120);
              unaff_x27 = (qword *)(ulong)puVar18[(long)puVar50 * 7 + 3];
              goto LAB_002e3ee8;
            }
            uVar49 = *(undefined8 *)(puVar17 + 4);
            puVar29 = *(undefined8 **)((long)register0x00000008 + -0x128);
            unaff_x28 = *(qword **)((long)register0x00000008 + -0x120);
            *(uint *)(puVar29 + 1) = puVar17[6];
            *puVar29 = uVar49;
            puVar50 = (uint *)(ulong)(uVar35 - uVar43);
          }
          unaff_x27 = (qword *)((long)&segment_command_00000020.vmsize + 3);
          uVar43 = (int)puVar50 + 2;
          puVar19 = puVar18 + (ulong)uVar43 * 7;
          *puVar19 = *(uint *)((long)register0x00000008 + -0x15c);
          puVar19[1] = uVar31;
          *(undefined8 *)(puVar19 + 4) = *(undefined8 *)((long)register0x00000008 + -0x90);
          puVar19[6] = *(uint *)((long)register0x00000008 + -0x88);
          puVar42 = puVar18 + (long)puVar50 * 7;
          uVar49 = *(undefined8 *)puVar42;
          uVar35 = puVar42[2];
          uVar37 = puVar42[3];
          puVar19[2] = uVar33;
          puVar19[3] = uVar37;
          uVar31 = uVar43;
          if (uVar35 == 0) {
LAB_002e4048:
            unaff_x26 = *(qword **)((long)register0x00000008 + -0x170);
            do {
              while( true ) {
                uVar33 = puVar18[(ulong)uVar31 * 7 + 2];
                uVar35 = puVar18[(ulong)uVar31 * 7 + 3];
                uVar44 = (ulong)uVar35;
                if (uVar33 == 0) break;
/* unlicensed copy if this notice is missing - github.com/pengussy */
                uVar37 = puVar18[(ulong)uVar31 * 7 + 1];
                if (*(int *)(lVar30 + 0xf0) != 2) {
                  if (uVar35 != 0) {
                    lVar28 = *(long *)(lVar30 + 0x90);
                    if (uVar35 == 1) {
                      uVar40 = 0;
                    }
                    else {
                      uVar40 = 0;
                      pbVar45 = (byte *)((long)unaff_x28 + 1);
                      do {
                        *(int *)(lVar28 + (ulong)pbVar45[-1] * 4) =
                             *(int *)(lVar28 + (ulong)pbVar45[-1] * 4) + 2;
                        *(int *)(lVar28 + (ulong)*pbVar45 * 4) =
                             *(int *)(lVar28 + (ulong)*pbVar45 * 4) + 2;
                        uVar40 = uVar40 + 2;
                        pbVar45 = pbVar45 + 2;
                      } while ((uVar44 & 0xfffffffe) != uVar40);
                    }
                    if ((uVar35 & 1) != 0) {
                      *(int *)(lVar28 + (ulong)*(byte *)((long)unaff_x28 + uVar40) * 4) =
                           *(int *)(lVar28 + (ulong)*(byte *)((long)unaff_x28 + uVar40) * 4) + 2;
                    }
                  }
                  *(uint *)(lVar30 + 0xc0) = *(int *)(lVar30 + 0xc0) + uVar35 * 2;
                }
                if (uVar35 < 0x40) {
                  uVar36 = (uint)(byte)(&UNK_01ade1dc)[uVar44];
                }
                else {
                  uVar36 = 0x32 - (int)LZCOUNT(uVar35);
                }
                *(int *)(*(long *)(lVar30 + 0x98) + (ulong)uVar36 * 4) =
                     *(int *)(*(long *)(lVar30 + 0x98) + (ulong)uVar36 * 4) + 1;
                *(int *)(lVar30 + 0xc4) = *(int *)(lVar30 + 0xc4) + 1;
                uVar36 = 0x1f - (int)LZCOUNT(uVar37);
                *(int *)(*(long *)(lVar30 + 0xa8) + (ulong)uVar36 * 4) =
/* stripping the watermark breaks the license */
                     *(int *)(*(long *)(lVar30 + 0xa8) + (ulong)uVar36 * 4) + 1;
                *(int *)(lVar30 + 0xcc) = *(int *)(lVar30 + 0xcc) + 1;
                uVar36 = uVar33 - 3;
                if (uVar36 < 0x80) {
                  uVar36 = (uint)(byte)(&UNK_01ade251)[uVar36];
                }
                else {
                  uVar36 = 0x43 - (int)LZCOUNT(uVar36);
                }
                *(int *)(*(long *)(lVar30 + 0xa0) + (ulong)uVar36 * 4) =
                     *(int *)(*(long *)(lVar30 + 0xa0) + (ulong)uVar36 * 4) + 1;
                *(int *)(lVar30 + 200) = *(int *)(lVar30 + 200) + 1;
                pqVar51 = *(qword **)(puVar47 + 6);
                puVar42 = (uint *)((long)unaff_x28 + uVar44);
                uVar10 = (undefined2)uVar35;
                if (unaff_x26 < puVar42) {
                  pqVar24 = unaff_x28;
                  if (unaff_x28 <= unaff_x26) {
                    pqVar5 = (qword *)((long)pqVar51 + ((long)unaff_x26 - (long)unaff_x28));
                    qVar55 = *unaff_x28;
                    pqVar52 = pqVar51 + 2;
                    pqVar51[1] = unaff_x28[1];
                    *pqVar51 = qVar55;
                    pqVar24 = unaff_x26;
                    pqVar51 = pqVar5;
                    if (0x10 < (ulong)((long)unaff_x26 - (long)unaff_x28)) {
                      pqVar11 = unaff_x28;
                      do {
                        qVar55 = pqVar11[2];
                        pqVar52[1] = pqVar11[3];
                        *pqVar52 = qVar55;
                        qVar55 = pqVar11[4];
                        pqVar52[3] = pqVar11[5];
                        pqVar52[2] = qVar55;
                        pqVar52 = pqVar52 + 4;
                        pqVar11 = pqVar11 + 4;
                      } while (pqVar52 < pqVar5);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                    }
                  }
                  if (pqVar24 < puVar42) {
                    puVar50 = (uint *)((long)unaff_x28 + (uVar44 - (long)pqVar24));
                    if ((&MACH_HEADER.cpusubtype <= puVar50) &&
                       (0x3f < (ulong)((long)pqVar51 - (long)pqVar24))) {
                      if ((uint *)((long)&segment_command_00000020.vmaddr + 7) < puVar50) {
                        puVar17 = (uint *)((ulong)puVar50 & 0xffffffffffffffc0);
                        pdVar16 = (dword *)(pqVar24 + 4);
                        puVar19 = puVar17;
                        pqVar20 = pqVar51 + 4;
                        do {
                          qVar55 = *(qword *)(pdVar16 + -8);
                          qVar62 = *(qword *)(pdVar16 + -2);
                          qVar59 = *(qword *)(pdVar16 + -4);
                          qVar64 = *(qword *)(pdVar16 + 2);
                          qVar63 = *(qword *)pdVar16;
                          qVar66 = *(qword *)(pdVar16 + 6);
                          qVar65 = *(qword *)(pdVar16 + 4);
/*  reversing this took months of machine time  */
                          pqVar20[-3] = *(qword *)(pdVar16 + -6);
                          pqVar20[-4] = qVar55;
                          pqVar20[-1] = qVar62;
                          pqVar20[-2] = qVar59;
                          pqVar20[1] = qVar64;
                          *pqVar20 = qVar63;
                          pqVar20[3] = qVar66;
                          pqVar20[2] = qVar65;
                          puVar19 = puVar19 + -0x10;
                          pdVar16 = pdVar16 + 0x10;
                          pqVar20 = pqVar20 + 8;
                        } while (puVar19 != (uint *)0x0);
                        pqVar20 = (qword *)0x0;
                        if (puVar50 == puVar17) goto LAB_002e4350;
                        if (((ulong)puVar50 & 0x38) == 0) {
                          pqVar51 = (qword *)((long)pqVar51 + (long)puVar17);
                          pqVar24 = (qword *)((long)pqVar24 + (long)puVar17);
                          goto LAB_002e4340;
                        }
                      }
                      else {
                        puVar17 = (uint *)0x0;
                      }
                      pqVar20 = (qword *)((ulong)puVar50 & 0xfffffffffffffff8);
                      lVar28 = (long)puVar17 - (long)pqVar20;
                      puVar29 = (undefined8 *)((long)pqVar51 + (long)puVar17);
                      puVar46 = (undefined8 *)((long)pqVar24 + (long)puVar17);
                      do {
                        *puVar29 = *puVar46;
                        lVar28 = lVar28 + 8;
                        puVar29 = puVar29 + 1;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                        puVar46 = puVar46 + 1;
                      } while (lVar28 != 0);
                      pqVar21 = (qword *)0x0;
                      pqVar24 = (qword *)((long)pqVar24 + (long)pqVar20);
                      pqVar51 = (qword *)((long)pqVar51 + (long)pqVar20);
                      if ((qword *)puVar50 == pqVar20) goto LAB_002e4350;
                    }
LAB_002e4340:
                    do {
                      pqVar52 = (qword *)((long)pqVar24 + 1);
                      *(char *)pqVar51 = (char)*pqVar24;
                      pqVar24 = pqVar52;
                      pqVar51 = (qword *)((long)pqVar51 + 1);
                    } while (pqVar52 != (qword *)puVar42);
                  }
LAB_002e4350:
                  *(ulong *)(puVar47 + 6) = *(long *)(puVar47 + 6) + uVar44;
                  puVar42 = *(uint **)(puVar47 + 2);
                  if (uVar35 < 0x10000) {
                    *(undefined2 *)(puVar42 + 1) = uVar10;
                    *puVar42 = uVar37;
                  }
                  else {
                    puVar47[0x12] = 1;
                    puVar47[0x13] = (uint)((ulong)((long)puVar42 - *(long *)puVar47) >> 3);
                    *(undefined2 *)(puVar42 + 1) = uVar10;
                    *puVar42 = uVar37;
                  }
                }
                else {
                  qVar55 = *unaff_x28;
/* WM - keep the notice, keep the source honest */
                  pqVar51[1] = unaff_x28[1];
                  *pqVar51 = qVar55;
                  if (0x10 < uVar35) {
                    lVar28 = *(long *)(puVar47 + 6);
                    uVar49 = unaff_x28[2];
                    *(qword *)(lVar28 + 0x18) = unaff_x28[3];
                    *(undefined8 *)(lVar28 + 0x10) = uVar49;
                    if (0x10 < uVar35 - 0x10) {
                      puVar29 = (undefined8 *)(lVar28 + 0x20);
                      puVar42 = (uint *)(unaff_x28 + 6);
                      do {
                        uVar49 = *(undefined8 *)(puVar42 + -4);
                        puVar29[1] = *(undefined8 *)(puVar42 + -2);
                        *puVar29 = uVar49;
                        uVar49 = *(undefined8 *)puVar42;
                        puVar29[3] = *(undefined8 *)(puVar42 + 2);
/* unlicensed copy if this notice is missing */
                        puVar29[2] = uVar49;
                        puVar29 = puVar29 + 4;
                        puVar42 = puVar42 + 8;
                      } while (puVar29 < (undefined8 *)(lVar28 + uVar44));
                      goto LAB_002e4350;
                    }
                  }
                  *(ulong *)(puVar47 + 6) = *(long *)(puVar47 + 6) + uVar44;
                  puVar42 = *(uint **)(puVar47 + 2);
                  *(undefined2 *)(puVar42 + 1) = uVar10;
                  *puVar42 = uVar37;
                }
                if (0xffff < (ulong)uVar33 - 3) {
                  puVar47[0x12] = 2;
                  puVar47[0x13] = (uint)((ulong)((long)puVar42 - *(long *)puVar47) >> 3);
                }
                *(short *)((long)puVar42 + 6) = (short)uVar33 + -3;
/* chat: discord.gg/sdkhDjTex */
                *(uint **)(puVar47 + 2) = puVar42 + 2;
                pqVar51 = (qword *)((long)unaff_x28 + (ulong)(uVar33 + uVar35));
                uVar31 = uVar31 + 1;
                unaff_x28 = pqVar51;
                if (uVar43 < uVar31) goto LAB_002e4014;
              }
              pqVar51 = (qword *)((long)unaff_x28 + uVar44);
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar43);
          }
          else {
            do {
              uVar31 = uVar31 - 1;
              puVar19 = puVar18 + (ulong)uVar31 * 7;
              *(undefined8 *)puVar19 = uVar49;
              puVar19[2] = uVar35;
              puVar19[3] = uVar37;
              uVar33 = puVar18[(long)puVar50 * 7 + 6];
              *(undefined8 *)(puVar19 + 4) = *(undefined8 *)(puVar18 + (long)puVar50 * 7 + 4);
              puVar19[6] = uVar33;
              puVar50 = (uint *)(ulong)((int)puVar50 - (uVar35 + uVar37));
              puVar42 = puVar18 + (long)puVar50 * 7;
              uVar49 = *(undefined8 *)puVar42;
              uVar35 = puVar42[2];
              uVar37 = puVar42[3];
              puVar19[3] = uVar37;
            } while (uVar35 != 0);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
            if (uVar31 <= uVar43) goto LAB_002e4048;
            pqVar51 = *(qword **)((long)register0x00000008 + -0x100);
          }
LAB_002e4014:
          if (*(int *)(lVar30 + 0xf0) != 2) {
            *(int *)(lVar30 + 0xd0) = (int)LZCOUNT(*(int *)(lVar30 + 0xc0) + 1) * -0x100 + 0x1f00;
          }
          *(ulong *)(lVar30 + 0xd4) =
               CONCAT44(LZCOUNT((int)((ulong)*(undefined8 *)(lVar30 + 0xc4) >> 0x20) + 1) * -0x100 +
                        0x1f00,LZCOUNT((int)*(undefined8 *)(lVar30 + 0xc4) + 1) * -0x100 + 0x1f00);
          *(int *)(lVar30 + 0xdc) = (int)LZCOUNT(*(int *)(lVar30 + 0xcc) + 1) * -0x100 + 0x1f00;
        }
LAB_002e34b8:
      } while (pqVar51 < *(uint **)((long)register0x00000008 + -0x110));
      *(qword **)((long)register0x00000008 + -0x130) = unaff_x28;
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x80)) {
      return *(long *)((long)register0x00000008 + -0x118) -
             *(long *)((long)register0x00000008 + -0x130);
    }
    auVar67 = ___stack_chk_fail();
    lVar28 = auVar67._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x1d8) = unaff_d8;
    *(qword **)((long)register0x00000008 + -0x1d0) = unaff_x28;
/* WM - donate: donate/README.md */
    *(qword **)((long)register0x00000008 + -0x1c8) = unaff_x27;
    *(qword **)((long)register0x00000008 + -0x1c0) = param_5;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = unaff_x25;
    *(qword **)((long)register0x00000008 + -0x1b0) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x1a8) = lVar30;
    *(qword **)((long)register0x00000008 + -0x1a0) = pqVar51;
    *(qword **)((long)register0x00000008 + -0x198) = pqVar48;
    *(uint **)((long)register0x00000008 + -400) = puVar47;
    *(uint **)((long)register0x00000008 + -0x188) = puVar18;
    *(undefined1 **)((long)register0x00000008 + -0x180) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x178) = &DAT_002e4430;
    *(qword **)((long)register0x00000008 + -0x2b8) = pqVar20;
    *(undefined8 *)((long)register0x00000008 + -0x1f0) =
         *(undefined8 *)PTR____stack_chk_guard_01f20200;
    *(qword **)((long)register0x00000008 + -0x290) = pqVar21;
    *(undefined **)((long)register0x00000008 + -0x288) =
         (undefined *)((long)pqVar21 + (long)unaff_x26);
    *(undefined **)((long)register0x00000008 + -0x280) =
         (undefined *)((long)pqVar21 + (long)unaff_x26) + -8;
    lVar30 = *(long *)(lVar28 + 8);
    uVar31 = *(uint *)(lVar28 + 0x18);
    uVar33 = *(uint *)(lVar28 + 0x110);
    uVar44 = 0;
    if (2 < uVar33) {
      uVar44 = 3;
    }
    uVar43 = 3;
    if (uVar33 - 3 != 0) {
      uVar43 = 4;
    }
    *(ulong *)((long)register0x00000008 + -0x268) = (ulong)uVar43;
    if (0xfffffffc < uVar33 - 6) {
/* if you paid for this, you were scammed - github.com/pengussy */
      uVar44 = (ulong)(uVar33 - 3);
    }
    *(undefined8 *)((long)register0x00000008 + -0x298) = *(undefined8 *)(&UNK_01dc1d38 + uVar44 * 8)
    ;
    puVar47 = (uint *)(lVar30 + (ulong)uVar31);
    uVar31 = *(uint *)(lVar28 + 0x114);
    if (0xffe < uVar31) {
      uVar31 = 0xfff;
    }
    *(uint *)((long)register0x00000008 + -700) = uVar31;
    *(undefined4 *)((long)register0x00000008 + -0x214) = *(undefined4 *)(lVar28 + 0x2c);
    unaff_x22 = *(qword **)(lVar28 + 0xb0);
    piVar27 = *(int **)(lVar28 + 0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x1f8) = 0;
    puVar29 = *(undefined8 **)(lVar28 + 0x120);
    if (puVar29 == (undefined8 *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
    }
    else {
      uVar49 = *puVar29;
      uVar61 = puVar29[3];
      uVar58 = puVar29[2];
      *(undefined8 *)((long)register0x00000008 + -0x248) = puVar29[1];
      *(undefined8 *)((long)register0x00000008 + -0x250) = uVar49;
/*  chat: discord.gg/sdkhDjTex  */
      *(undefined8 *)((long)register0x00000008 + -0x238) = uVar61;
      *(undefined8 *)((long)register0x00000008 + -0x240) = uVar58;
      *(undefined8 *)((long)register0x00000008 + -0x230) = puVar29[4];
    }
    *(undefined4 *)((long)register0x00000008 + -0x220) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
    param_5 = unaff_x26;
    func_0x002e5e84((undefined1 *)((long)register0x00000008 + -0x250),0,unaff_x26);
    unaff_x21 = *(qword **)((long)register0x00000008 + -0x290);
    param_4 = (qword *)((long)&MACH_HEADER.magic + 2);
    param_3 = unaff_x26;
    func_0x002e6014(lVar28 + 0x90,unaff_x21);
    pqVar51 = unaff_x21;
    if (unaff_x21 == (qword *)puVar47) {
      pqVar51 = (qword *)((long)unaff_x21 + 1);
    }
    if (pqVar51 < *(uint **)((long)register0x00000008 + -0x280)) {
      *(undefined4 *)((long)register0x00000008 + -0x2d4) = 0;
      pqVar20 = *(qword **)((long)register0x00000008 + -0x290);
/*  keep the notice, keep the source honest  */
      puVar47 = (uint *)(piVar27 + 10);
      *(long *)((long)register0x00000008 + -0x2e8) = auVar67._8_8_;
      *(long *)((long)register0x00000008 + -0x2e0) =
           *(long *)((long)register0x00000008 + -0x268) + -1;
      *(qword **)((long)register0x00000008 + -0x260) = unaff_x22;
      *(int **)((long)register0x00000008 + -600) = piVar27 + 0x11;
      unaff_x22 = (qword *)&MACH_HEADER.reserved;
      unaff_d8 = 0x100000001;
      unaff_d9 = 0x1f0000001f;
      unaff_x25 = 1;
      unaff_x24 = (qword *)0x40000000;
      *(long *)((long)register0x00000008 + -0x270) = lVar28;
      *(long *)((long)register0x00000008 + -0x2d0) =
           *(long *)((long)register0x00000008 + -0x288) + -0x20;
      *(uint **)((long)register0x00000008 + -0x2c8) = puVar47;
      do {
        *(qword **)((long)register0x00000008 + -0x2b0) = pqVar20;
        *(long *)((long)register0x00000008 + -0x2a0) = (long)pqVar51 - (long)pqVar20;
        pqVar21 = *(qword **)((long)register0x00000008 + -0x268);
        unaff_x26 = *(qword **)((long)register0x00000008 + -0x260);
        unaff_x21 = *(qword **)((long)register0x00000008 + -0x288);
        uVar15 = (**(code **)((long)register0x00000008 + -0x298))
                           (unaff_x26,lVar28,(undefined1 *)((long)register0x00000008 + -0x214),
                            pqVar51,unaff_x21,*(undefined8 *)((long)register0x00000008 + -0x2b8),
                            (int)((long)pqVar51 - (long)pqVar20) == 0,pqVar21);
        *(undefined4 *)((long)register0x00000008 + -0x210) = uVar15;
        param_4 = (qword *)(ulong)(uint)((int)pqVar51 -
                                        (int)*(undefined8 *)((long)register0x00000008 + -0x290));
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        param_5 = (qword *)(ulong)(uint)((int)unaff_x21 - (int)pqVar51);
        param_3 = (qword *)((long)register0x00000008 + -0x210);
        func_0x002e6cd8((undefined1 *)((long)register0x00000008 + -0x250),unaff_x26);
        uVar31 = *(uint *)((long)register0x00000008 + -0x210);
        if (uVar31 == 0) {
          pqVar48 = (qword *)((long)pqVar51 + 1);
          pqVar20 = *(qword **)((long)register0x00000008 + -0x2b0);
          unaff_x27 = pqVar51;
        }
        else {
          *(qword **)((long)register0x00000008 + -0x278) = pqVar51;
          uVar44 = *(ulong *)((long)register0x00000008 + -0x2a0);
          uVar33 = (uint)uVar44;
          piVar27[2] = 0;
          piVar27[3] = uVar33;
          unaff_x21 = (qword *)&UNK_00ffffe1;
          unaff_x26 = (qword *)0xffffe100;
          pqVar51 = (qword *)&dylib_command_000010f0.dylib.current_version;
          if (*(int *)(lVar28 + 0xe0) == 1) {
            uVar43 = (uint)LZCOUNT(uVar33 + 1);
            iVar32 = ((uVar33 + 1) * 0x100 >> (ulong)(~uVar43 & 0x1f)) + (0x1f - uVar43) * 0x100;
            pqVar24 = *(qword **)((long)register0x00000008 + -0x2d0);
          }
          else if (uVar33 == 0x20000) {
            iVar32 = *(int *)(*(long *)(lVar28 + 0x98) + 0x8c) + 1;
            uVar43 = (uint)LZCOUNT(iVar32);
            iVar32 = ((*(int *)(lVar28 + 0xd4) + uVar43 * 0x100) -
                     ((uint)(iVar32 * 0x100) >> (ulong)(~uVar43 & 0x1f))) + -0xe00;
            pqVar24 = *(qword **)((long)register0x00000008 + -0x2d0);
          }
          else {
            if (uVar33 < 0x40) {
              uVar43 = (uint)(byte)(&UNK_01ade1dc)[uVar44 & 0x3f];
            }
            else {
              uVar43 = 0x32 - (int)LZCOUNT(uVar33);
            }
            pqVar24 = *(qword **)((long)register0x00000008 + -0x2d0);
/* wm:donate: donate/README.md */
            iVar32 = *(int *)(*(long *)(lVar28 + 0x98) + (ulong)uVar43 * 4) + 1;
            uVar35 = (uint)LZCOUNT(iVar32);
            iVar32 = (*(int *)(lVar28 + 0xd4) - ((uint)(iVar32 * 0x100) >> (ulong)(~uVar35 & 0x1f)))
                     + (uVar35 + (byte)(&UNK_01ade1b8)[uVar43]) * 0x100 + -0x1f00;
          }
          *piVar27 = iVar32;
          uVar49 = **(undefined8 **)((long)register0x00000008 + -0x2b8);
          piVar27[6] = *(int *)(*(undefined8 **)((long)register0x00000008 + -0x2b8) + 1);
          *(undefined8 *)(piVar27 + 4) = uVar49;
          puVar18 = (uint *)(*(long *)((long)register0x00000008 + -0x260) + (ulong)(uVar31 - 1) * 8)
          ;
          uVar43 = puVar18[1];
          if (*(uint *)((long)register0x00000008 + -700) < uVar43) {
            pqVar52 = (qword *)0x0;
            uVar31 = *puVar18;
            pqVar20 = *(qword **)((long)register0x00000008 + -0x2b0);
            pqVar48 = *(qword **)((long)register0x00000008 + -0x278);
LAB_002e53f4:
            *(undefined8 *)((long)register0x00000008 + -0x210) =
                 *(undefined8 *)(piVar27 + (long)pqVar52 * 7 + 4);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
            *(int *)((long)register0x00000008 + -0x208) = piVar27[(long)pqVar52 * 7 + 6];
            if (uVar31 < 4) {
              uVar35 = uVar31;
              if (uVar33 == 0) {
                uVar35 = uVar31 + 1;
              }
              uVar35 = uVar35 - 1;
              if (uVar35 == 3) {
                iVar32 = *(int *)((long)register0x00000008 + -0x210);
                iVar54 = iVar32 + -1;
LAB_002e5460:
                puVar25 = (undefined4 *)((long)register0x00000008 + -0x208);
                if (uVar35 != 1) {
                  puVar25 = (undefined4 *)((ulong)((long)register0x00000008 + -0x210) | 4);
                }
                uVar15 = *puVar25;
                *(int *)((long)register0x00000008 + -0x20c) = iVar32;
                goto LAB_002e5478;
              }
              if (uVar35 != 0) {
                iVar54 = *(int *)((undefined1 *)((long)register0x00000008 + -0x210) +
                                 (ulong)uVar35 * 4);
                iVar32 = *(int *)((long)register0x00000008 + -0x210);
                goto LAB_002e5460;
              }
              uVar15 = *(undefined4 *)((long)register0x00000008 + -0x208);
            }
            else {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
              uVar15 = *(undefined4 *)((long)register0x00000008 + -0x20c);
              *(undefined4 *)((long)register0x00000008 + -0x20c) =
                   *(undefined4 *)((long)register0x00000008 + -0x210);
              iVar54 = uVar31 - 3;
LAB_002e5478:
              *(int *)((long)register0x00000008 + -0x210) = iVar54;
            }
            puVar29 = *(undefined8 **)((long)register0x00000008 + -0x2b8);
            *puVar29 = *(undefined8 *)((long)register0x00000008 + -0x210);
            *(undefined4 *)(puVar29 + 1) = uVar15;
            pqVar21 = pqVar51;
          }
          else {
            uVar33 = (int)*(undefined8 *)((long)register0x00000008 + -0x278) -
                     (int)*(undefined8 *)((long)register0x00000008 + -0x2b0);
            lVar30 = *(long *)((long)register0x00000008 + -0x2e0);
            puVar18 = puVar47;
            do {
              uVar33 = uVar33 + 1;
              puVar18[-3] = 0x40000000;
              puVar18[-1] = 0;
              *puVar18 = uVar33;
              puVar18 = puVar18 + 7;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            uVar40 = *(ulong *)((long)register0x00000008 + -0x268);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
            uVar44 = 0;
            do {
              uVar33 = ((uint *)(*(long *)((long)register0x00000008 + -0x260) + uVar44 * 8))[1];
              if ((uint)uVar40 <= uVar33) {
                uVar43 = *(uint *)(*(long *)((long)register0x00000008 + -0x260) + uVar44 * 8);
                uVar35 = 0x1f - (int)LZCOUNT(uVar43);
                if (*(int *)(lVar28 + 0xe0) == 1) {
                  uVar37 = (uint)uVar40 * 0x100 - 0x200;
                  do {
                    iVar54 = (int)uVar40;
                    uVar36 = (uint)LZCOUNT(iVar54 + -2);
                    iVar32 = *piVar27;
                    piVar39 = piVar27 + (uVar40 & 0xffffffff) * 7;
                    piVar39[2] = iVar54;
                    piVar39[3] = 0;
                    *piVar39 = (uVar37 >> (ulong)(~uVar36 & 0x1f)) +
                               ((0x1f - uVar36) + uVar35) * 0x100 + iVar32 + 0x1100;
                    piVar39[1] = uVar43;
                    uVar40 = (ulong)(iVar54 + 1U);
                    uVar37 = uVar37 + 0x100;
                  } while (iVar54 + 1U <= uVar33);
                }
                else {
                  iVar32 = *(int *)(lVar28 + 0xd8);
                  iVar54 = *(int *)(lVar28 + 0xdc);
                  iVar56 = *(int *)(lVar28 + 0xd4);
                  lVar30 = *(long *)(lVar28 + 0xa0);
                  lVar8 = *(long *)(lVar28 + 0xa8);
                  piVar39 = *(int **)(lVar28 + 0x98);
                  do {
                    uVar36 = (uint)uVar40;
                    uVar37 = uVar36 - 3;
                    if (uVar37 < 0x80) {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
                      uVar53 = (ulong)(byte)(&UNK_01ade251)[uVar37];
                    }
                    else {
                      uVar53 = (ulong)(0x43 - (int)LZCOUNT(uVar37));
                    }
                    iVar57 = *(int *)(lVar8 + (ulong)uVar35 * 4) + 1;
                    uVar23 = (uint)LZCOUNT(iVar57);
                    bVar9 = (&UNK_01ade21c)[uVar53];
                    iVar60 = *(int *)(lVar30 + uVar53 * 4) + 1;
                    uVar22 = (uint)LZCOUNT(iVar60);
                    iVar2 = *piVar27;
                    param_4 = (qword *)(piVar27 + (uVar40 & 0xffffffff) * 7);
                    *(uint *)((long)param_4 + 4) = uVar43;
                    *(uint *)(param_4 + 1) = uVar36;
                    *(uint *)((long)param_4 + 0xc) = 0;
                    iVar6 = *piVar39 + 1;
                    uVar37 = (uint)LZCOUNT(iVar6);
                    uVar37 = (iVar56 + -0x1f00 + uVar37 * 0x100) -
                             ((uint)(iVar6 * 0x100) >> (ulong)(~uVar37 & 0x1f));
                    param_5 = (qword *)(ulong)uVar37;
                    uVar37 = uVar37 + (((iVar54 + iVar32 + 0x33 + iVar2) -
                                       ((uint)(iVar57 * 0x100) >> (ulong)(~uVar23 & 0x1f))) -
                                      ((uint)(iVar60 * 0x100) >> (ulong)(~uVar22 & 0x1f))) +
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                                      ((uVar23 - (int)LZCOUNT(uVar43)) + (uint)bVar9 +
                                      uVar22 + 0xffffe1) * 0x100;
                    param_3 = (qword *)(ulong)uVar37;
                    *(uint *)param_4 = uVar37;
                    uVar40 = (ulong)(uVar36 + 1);
                  } while (uVar36 + 1 <= uVar33);
                }
              }
              uVar44 = uVar44 + 1;
            } while (uVar44 != uVar31);
            piVar27[(uVar40 & 0xffffffff) * 7] = 0x40000000;
            uVar31 = (int)uVar40 - 1;
            pqVar51 = (qword *)(ulong)uVar31;
            pqVar21 = pqVar51;
            if (uVar31 != 0) {
              pqVar52 = (qword *)((long)&MACH_HEADER.magic + 1);
              do {
                iVar56 = (int)pqVar52;
                unaff_x21 = (qword *)(*(long *)((long)register0x00000008 + -0x278) + (long)pqVar52);
                piVar39 = piVar27 + (ulong)(iVar56 - 1) * 7;
                uVar33 = piVar39[3];
                uVar31 = uVar33 + 1;
                iVar32 = *piVar39;
                iVar54 = *(int *)(*(long *)((long)register0x00000008 + -0x270) + 0xe0);
                if (*(int *)(*(long *)((long)register0x00000008 + -0x270) + 0xf0) == 2) {
                  iVar32 = iVar32 + 0x800;
                  if (iVar54 == 1) goto LAB_002e4a7c;
// WM - keep the notice, keep the source honest
                  if (uVar31 != 0x20000) goto LAB_002e4b24;
LAB_002e49e4:
                  iVar57 = *(int *)(*(long *)((long)register0x00000008 + -0x270) + 0xd4);
                  lVar30 = *(long *)(*(long *)((long)register0x00000008 + -0x270) + 0x98);
                  iVar54 = *(int *)(lVar30 + 0x8c) + 1;
                  uVar43 = (uint)LZCOUNT(iVar54);
                  iVar54 = ((iVar57 + uVar43 * 0x100) -
                           ((uint)(iVar54 * 0x100) >> (ulong)(~uVar43 & 0x1f))) + -0xe00;
                  iVar57 = iVar57 + -0x1f00;
LAB_002e4a18:
                  uVar43 = 0x32 - (int)LZCOUNT(uVar33);
LAB_002e4a24:
                  iVar60 = *(int *)(lVar30 + (ulong)uVar43 * 4) + 1;
                  uVar35 = (uint)LZCOUNT(iVar60);
                  uVar43 = iVar32 + (iVar54 - ((iVar57 - ((uint)(iVar60 * 0x100) >>
                                                         (ulong)(~uVar35 & 0x1f))) +
                                              (uVar35 + (byte)(&UNK_01ade1b8)[uVar43]) * 0x100));
                  pqVar21 = (qword *)(ulong)uVar43;
                  puVar18 = (uint *)(piVar27 + (long)pqVar52 * 7);
                  pqVar20 = (qword *)(ulong)*puVar18;
                  if ((int)uVar43 <= (int)*puVar18) goto LAB_002e4bcc;
LAB_002e4ac8:
                  uVar31 = puVar18[3];
                  pqVar21 = pqVar20;
                }
                else {
                  if (iVar54 == 1) {
                    iVar32 = iVar32 + 0x600;
LAB_002e4a7c:
                    uVar43 = (uint)LZCOUNT(uVar33 + 2);
                    uVar43 = iVar32 + ((((uVar33 + 2) * 0x100 >> (ulong)(~uVar43 & 0x1f)) +
                                       (0x1f - uVar43) * 0x100) -
                                      ((uVar31 * 0x100 >> (ulong)(~(uint)LZCOUNT(uVar31) & 0x1f)) +
// chat: discord.gg/sdkhDjTex
                                      (0x1f - (uint)LZCOUNT(uVar31)) * 0x100));
                    pqVar21 = (qword *)(ulong)uVar43;
                    puVar18 = (uint *)(piVar27 + (long)pqVar52 * 7);
                    pqVar20 = (qword *)(ulong)*puVar18;
                    if ((int)*puVar18 < (int)uVar43) goto LAB_002e4ac8;
                  }
                  else {
                    iVar57 = *(int *)(*(long *)((long)register0x00000008 + -0x270) + 0xd0);
                    iVar54 = *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x270) + 0x90)
                                     + (ulong)*(byte *)((long)unaff_x21 + -1) * 4) + 1;
                    uVar43 = (uint)LZCOUNT(iVar54);
                    uVar43 = ((uint)(iVar54 * 0x100) >> (ulong)(~uVar43 & 0x1f)) +
                             (0x1f - uVar43) * 0x100;
                    iVar54 = 0x100;
                    if (uVar43 <= iVar57 - 0x100U) {
                      iVar54 = iVar57 - uVar43;
                    }
                    iVar32 = iVar54 + iVar32;
                    if (uVar31 == 0x20000) goto LAB_002e49e4;
LAB_002e4b24:
/* reversing this took months of machine time - github.com/pengussy */
                    if (uVar31 < 0x40) {
                      uVar43 = (uint)(byte)(&UNK_01ade1dc)[uVar31];
                    }
                    else {
                      uVar43 = 0x32 - (int)LZCOUNT(uVar31);
                    }
                    iVar60 = *(int *)(*(long *)((long)register0x00000008 + -0x270) + 0xd4);
                    lVar30 = *(long *)(*(long *)((long)register0x00000008 + -0x270) + 0x98);
                    iVar54 = *(int *)(lVar30 + (ulong)uVar43 * 4) + 1;
                    uVar35 = (uint)LZCOUNT(iVar54);
                    iVar57 = iVar60 + -0x1f00;
                    iVar54 = (iVar57 - ((uint)(iVar54 * 0x100) >> (ulong)(~uVar35 & 0x1f))) +
                             (uVar35 + (byte)(&UNK_01ade1b8)[uVar43]) * 0x100;
                    if (uVar33 != 0x20000) {
                      if (0x3f < uVar33) goto LAB_002e4a18;
                      uVar43 = (uint)(byte)(&UNK_01ade1dc)[uVar33];
                      goto LAB_002e4a24;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                    }
                    iVar57 = *(int *)(lVar30 + 0x8c) + 1;
                    uVar43 = (uint)LZCOUNT(iVar57);
                    uVar43 = iVar32 + (iVar54 - (((iVar60 + uVar43 * 0x100) -
                                                 ((uint)(iVar57 * 0x100) >> (ulong)(~uVar43 & 0x1f))
                                                 ) + -0xe00));
                    pqVar21 = (qword *)(ulong)uVar43;
                    puVar18 = (uint *)(piVar27 + (long)pqVar52 * 7);
                    pqVar20 = (qword *)(ulong)*puVar18;
                    if ((int)*puVar18 < (int)uVar43) goto LAB_002e4ac8;
                  }
LAB_002e4bcc:
                  uVar43 = puVar18[1];
                  uVar35 = puVar18[2];
                  uVar37 = puVar18[3];
                  uVar49 = *(undefined8 *)(piVar39 + 3);
/* wm:keep the notice, keep the source honest */
                  *(undefined8 *)(puVar18 + 5) = *(undefined8 *)(piVar39 + 5);
                  *(undefined8 *)(puVar18 + 3) = uVar49;
                  uVar49 = *(undefined8 *)piVar39;
                  *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(piVar39 + 2);
                  *(undefined8 *)puVar18 = uVar49;
                  puVar18[3] = uVar31;
                  *puVar18 = (uint)pqVar21;
                  if (uVar37 == 0) {
                    lVar30 = *(long *)((long)register0x00000008 + -0x270);
                    if (*(int *)(lVar30 + 0xe0) != 1) {
                      iVar54 = *(int *)(lVar30 + 0xd4);
                      piVar39 = *(int **)(lVar30 + 0x98);
                      uVar26 = (uint)LZCOUNT(piVar39[1] + 1);
                      uVar37 = (uint)((piVar39[1] + 1) * 0x100) >> (ulong)(~uVar26 & 0x1f);
                      iVar32 = iVar54 + -0x1f00;
                      uVar23 = (iVar32 + uVar26 * 0x100) - uVar37;
                      param_3 = (qword *)(ulong)uVar23;
                      uVar41 = (uint)LZCOUNT(*piVar39 + 1);
                      uVar36 = (uint)((*piVar39 + 1) * 0x100) >> (ulong)(~uVar41 & 0x1f);
/* no support for modified copies - github.com/pengussy */
                      uVar22 = (iVar32 + uVar41 * 0x100) - uVar36;
                      param_5 = (qword *)(ulong)uVar22;
                      if ((int)uVar23 < (int)uVar22) {
                        param_3 = *(qword **)((long)register0x00000008 + -0x288);
                        if (unaff_x21 < param_3) {
                          lVar30 = *(long *)((long)register0x00000008 + -0x270);
                          if (*(int *)(lVar30 + 0xf0) == 2) {
                            iVar57 = (int)pqVar20 + 0x800;
                            param_3 = &section_000007d8.size;
                            if (uVar33 == 0x1fffe) goto LAB_002e4d00;
LAB_002e4c80:
                            uVar33 = uVar33 + 2;
                            if (uVar33 < 0x40) {
                              uVar33 = (uint)(byte)(&UNK_01ade1dc)[uVar33];
                            }
                            else {
                              uVar33 = 0x32 - (int)LZCOUNT(uVar33);
                            }
                            uVar23 = (uint)LZCOUNT(piVar39[uVar33] + 1);
                            param_5 = (qword *)(ulong)((iVar32 - ((uint)((piVar39[uVar33] + 1) *
                                                                        0x100) >>
                                                                 (ulong)(~uVar23 & 0x1f))) +
                                                      (uVar23 + (byte)(&UNK_01ade1b8)[uVar33]) *
                                                      0x100);
                            if (uVar31 != 0x20000) {
                              if (0x3f < uVar31) goto LAB_002e4d24;
                              uVar33 = (uint)(byte)(&UNK_01ade1dc)[uVar31];
                              goto LAB_002e4d30;
/* wm:if you paid for this, you were scammed */
                            }
                            uVar33 = (uint)LZCOUNT(piVar39[0x23] + 1);
                            iVar32 = (((uint)((piVar39[0x23] + 1) * 0x100) >>
                                      (ulong)(~uVar33 & 0x1f)) - (iVar54 + uVar33 * 0x100)) + 0xe00;
                          }
                          else {
                            iVar57 = *(int *)(*(long *)(lVar30 + 0x90) + (ulong)(byte)*unaff_x21 * 4
                                             ) + 1;
                            uVar23 = (uint)LZCOUNT(iVar57);
                            uVar23 = ((uint)(iVar57 * 0x100) >> (ulong)(~uVar23 & 0x1f)) +
                                     (0x1f - uVar23) * 0x100;
                            uVar22 = 0x100;
                            if (uVar23 <= *(int *)(lVar30 + 0xd0) - 0x100U) {
                              uVar22 = *(int *)(lVar30 + 0xd0) - uVar23;
                            }
                            param_3 = (qword *)(ulong)uVar22;
                            iVar57 = uVar22 + (int)pqVar20;
                            if (uVar33 != 0x1fffe) goto LAB_002e4c80;
LAB_002e4d00:
                            uVar33 = (uint)LZCOUNT(piVar39[0x23] + 1);
                            param_5 = (qword *)(ulong)(((iVar54 + uVar33 * 0x100) -
                                                       ((uint)((piVar39[0x23] + 1) * 0x100) >>
                                                       (ulong)(~uVar33 & 0x1f))) - 0xe00);
LAB_002e4d24:
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
                            uVar33 = 0x32 - (int)LZCOUNT(uVar31);
LAB_002e4d30:
                            uVar23 = (uint)LZCOUNT(piVar39[uVar33] + 1);
                            iVar32 = ((uint)((piVar39[uVar33] + 1) * 0x100) >>
                                     (ulong)(~uVar23 & 0x1f)) -
                                     (iVar32 + (uVar23 + (byte)(&UNK_01ade1b8)[uVar33]) * 0x100);
                          }
                          iVar54 = (iVar57 - uVar37) + uVar36 + (uVar26 - uVar41) * 0x100;
                          if (iVar54 < (int)((int)param_3 + (uint)pqVar21 + (int)param_5 + iVar32))
                          {
                            uVar33 = iVar56 + 1;
                            piVar39 = piVar27 + (ulong)uVar33 * 7;
                            if (iVar54 < *piVar39) {
                              uVar37 = iVar56 - uVar35;
                              iVar32 = piVar27[(ulong)uVar37 * 7 + 3];
                              *(undefined8 *)((long)register0x00000008 + -0x210) =
                                   *(undefined8 *)(piVar27 + (ulong)uVar37 * 7 + 4);
                              *(int *)((long)register0x00000008 + -0x208) =
                                   piVar27[(ulong)uVar37 * 7 + 6];
                              if (uVar43 < 4) {
                                uVar37 = uVar43;
                                if (iVar32 == 0) {
                                  uVar37 = uVar43 + 1;
                                }
                                uVar37 = uVar37 - 1;
                                if (uVar37 == 3) {
                                  iVar32 = *(int *)((long)register0x00000008 + -0x210);
                                  iVar57 = iVar32 + -1;
LAB_002e4e8c:
                                  piVar38 = (int *)((long)register0x00000008 + -0x208);
                                  if (uVar37 != 1) {
                                    piVar38 = (int *)((ulong)((long)register0x00000008 + -0x210) | 4
                                                     );
                                  }
                                  iVar60 = *piVar38;
/* found on a paste site? it was re-uploaded illegally */
                                  *(int *)((long)register0x00000008 + -0x20c) = iVar32;
                                  goto LAB_002e4ea4;
                                }
                                if (uVar37 != 0) {
                                  iVar57 = *(int *)((long)register0x00000008 +
                                                   (ulong)uVar37 * 4 + -0x210);
                                  iVar32 = *(int *)((long)register0x00000008 + -0x210);
                                  goto LAB_002e4e8c;
                                }
                                iVar60 = *(int *)((long)register0x00000008 + -0x208);
                              }
                              else {
                                iVar60 = *(int *)((long)register0x00000008 + -0x20c);
                                *(undefined4 *)((long)register0x00000008 + -0x20c) =
                                     *(undefined4 *)((long)register0x00000008 + -0x210);
                                iVar57 = uVar43 - 3;
LAB_002e4ea4:
                                *(int *)((long)register0x00000008 + -0x210) = iVar57;
                              }
                              *(undefined8 *)(piVar39 + 4) =
                                   *(undefined8 *)((long)register0x00000008 + -0x210);
                              piVar39[6] = iVar60;
                              piVar39[2] = uVar35;
                              piVar39[3] = 1;
                              *piVar39 = iVar54;
                              piVar39[1] = uVar43;
                              uVar43 = (uint)pqVar51;
                              if ((uint)pqVar51 <= uVar33) {
                                uVar43 = uVar33;
                              }
                              pqVar51 = (qword *)(ulong)uVar43;
                            }
                          }
                        }
                      }
                    }
                  }
                }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                if (uVar31 == 0) {
                  uVar33 = puVar18[1];
                  uVar43 = iVar56 - puVar18[2];
                  iVar32 = piVar27[(ulong)uVar43 * 7 + 3];
                  *(undefined8 *)((long)register0x00000008 + -0x210) =
                       *(undefined8 *)(piVar27 + (ulong)uVar43 * 7 + 4);
                  *(int *)((long)register0x00000008 + -0x208) = piVar27[(ulong)uVar43 * 7 + 6];
                  if (uVar33 < 4) {
                    if (iVar32 == 0) {
                      uVar33 = uVar33 + 1;
                    }
                    uVar33 = uVar33 - 1;
                    if (uVar33 == 3) {
                      iVar32 = *(int *)((long)register0x00000008 + -0x210);
                      iVar54 = iVar32 + -1;
LAB_002e4f4c:
                      puVar42 = (uint *)((long)register0x00000008 + -0x208);
                      if (uVar33 != 1) {
                        puVar42 = (uint *)((ulong)((long)register0x00000008 + -0x210) | 4);
                      }
                      uVar43 = *puVar42;
                      *(int *)((long)register0x00000008 + -0x20c) = iVar32;
                      goto LAB_002e4f64;
                    }
                    if (uVar33 != 0) {
                      iVar54 = *(int *)((long)register0x00000008 + (ulong)uVar33 * 4 + -0x210);
                      iVar32 = *(int *)((long)register0x00000008 + -0x210);
                      goto LAB_002e4f4c;
                    }
                    uVar43 = *(uint *)((long)register0x00000008 + -0x208);
                  }
                  else {
                    uVar43 = *(uint *)((long)register0x00000008 + -0x20c);
                    *(undefined4 *)((long)register0x00000008 + -0x20c) =
                         *(undefined4 *)((long)register0x00000008 + -0x210);
                    iVar54 = uVar33 - 3;
// WM - if you paid for this, you were scammed
LAB_002e4f64:
                    *(int *)((long)register0x00000008 + -0x210) = iVar54;
                  }
                  *(undefined8 *)(puVar18 + 4) = *(undefined8 *)((long)register0x00000008 + -0x210);
                  puVar18[6] = uVar43;
                  puVar42 = *(uint **)((long)register0x00000008 + -0x280);
                }
                else {
                  puVar42 = *(uint **)((long)register0x00000008 + -0x280);
                }
                param_4 = unaff_x21;
                if (unaff_x21 <= puVar42) {
                  if (iVar56 == (int)pqVar51) {
                    unaff_x21 = pqVar20;
                    pqVar21 = pqVar52;
                    break;
                  }
                  lVar30 = *(long *)((long)register0x00000008 + -0x270);
                  iVar32 = *(int *)(lVar30 + 0xe0);
                  *(int *)((long)register0x00000008 + -0x2a0) = (int)pqVar21;
                  if (iVar32 == 1) {
                    iVar32 = 0x100;
                  }
                  else {
                    iVar32 = **(int **)(lVar30 + 0x98) + 1;
                    uVar33 = (uint)LZCOUNT(iVar32);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
                    iVar32 = ((*(int *)(lVar30 + 0xd4) + uVar33 * 0x100) -
                             ((uint)(iVar32 * 0x100) >> (ulong)(~uVar33 & 0x1f))) + -0x1f00;
                  }
                  *(int *)((long)register0x00000008 + -0x2a4) = iVar32;
                  unaff_x26 = *(qword **)((long)register0x00000008 + -0x260);
                  uVar49 = *(undefined8 *)((long)register0x00000008 + -0x288);
                  uVar15 = (**(code **)((long)register0x00000008 + -0x298))
                                     (unaff_x26,lVar30,
                                      (undefined1 *)((long)register0x00000008 + -0x214),unaff_x21,
                                      uVar49,puVar18 + 4,uVar31 == 0,
                                      *(undefined8 *)((long)register0x00000008 + -0x268));
                  *(undefined4 *)((long)register0x00000008 + -0x210) = uVar15;
                  param_4 = (qword *)(ulong)(uint)((int)unaff_x21 -
                                                  (int)*(undefined8 *)
                                                        ((long)register0x00000008 + -0x290));
                  param_5 = (qword *)(ulong)(uint)((int)uVar49 - (int)unaff_x21);
                  param_3 = (qword *)((long)register0x00000008 + -0x210);
                  func_0x002e6cd8((undefined1 *)((long)register0x00000008 + -0x250),unaff_x26);
                  uVar31 = *(uint *)((long)register0x00000008 + -0x210);
                  if (uVar31 == 0) {
                    puVar47 = *(uint **)((long)register0x00000008 + -0x2c8);
                    pqVar20 = unaff_x21;
                  }
                  else {
                    uVar43 = *(dword *)((long)unaff_x26 + ((ulong)(uVar31 - 1) * 2 + 1) * 4);
                    pqVar21 = (qword *)(ulong)(uVar43 + iVar56);
                    puVar47 = *(uint **)((long)register0x00000008 + -0x2c8);
                    if (((*(uint *)((long)register0x00000008 + -700) < uVar43) ||
                        (0xfff < uVar43 + iVar56)) ||
                       (*(undefined **)((long)register0x00000008 + -0x288) <=
                        (undefined *)((long)unaff_x21 + (ulong)uVar43))) {
                      if (uVar43 == 0) goto LAB_002e58dc;
                      uVar31 = *(uint *)(*(long *)((long)register0x00000008 + -0x260) +
                                        (ulong)(uVar31 - 1) * 8);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                      pqVar24 = *(qword **)((long)register0x00000008 + -0x2d0);
                      pqVar20 = *(qword **)((long)register0x00000008 + -0x2b0);
                      pqVar48 = *(qword **)((long)register0x00000008 + -0x278);
                      goto LAB_002e53ec;
                    }
                    uVar44 = 0;
                    iVar32 = *(int *)((long)register0x00000008 + -0x2a4);
                    iVar54 = *(int *)((long)register0x00000008 + -0x2a0);
                    do {
                      puVar18 = (uint *)(*(long *)((long)register0x00000008 + -0x260) + uVar44 * 8);
                      uVar33 = (uint)*(undefined8 *)((long)register0x00000008 + -0x268);
                      if (uVar44 != 0) {
                        uVar33 = puVar18[-1] + 1;
                      }
                      uVar43 = puVar18[1];
                      if (uVar33 <= uVar43) {
                        uVar35 = *puVar18;
                        uVar37 = 0x1f - (int)LZCOUNT(uVar35);
                        lVar30 = *(long *)((long)register0x00000008 + -0x270);
                        if (*(int *)(lVar30 + 0xe0) == 1) {
                          iVar57 = 0;
                          uVar36 = iVar56 + uVar43;
                          uVar23 = uVar36;
                          do {
                            uVar22 = (uint)LZCOUNT(uVar43 - 2);
                            iVar60 = ((uVar43 - 2) * 0x100 >> (ulong)(~uVar22 & 0x1f)) +
                                     ((0x1f - uVar22) + uVar37) * 0x100 + iVar32 + iVar54 + 0x1000;
                            puVar18 = (uint *)(ulong)(uVar43 + iVar56);
                            if ((uint)pqVar51 < uVar43 + iVar56) {
                              pqVar20 = (qword *)((ulong)pqVar51 & 0xffffffff);
                              param_3 = (qword *)((ulong)(uVar36 - iVar57) - (long)pqVar20);
                              if ((uint *)((long)&MACH_HEADER.magic + 3) < param_3) {
                                param_4 = (qword *)((ulong)param_3 & 0xfffffffffffffffc);
                                pqVar51 = (qword *)((long)param_4 + (long)pqVar20);
                                uVar40 = (ulong)uVar23 - (long)pqVar20 & 0xfffffffffffffffc;
                                puVar25 = (undefined4 *)
                                          (*(long *)((long)register0x00000008 + -600) +
/* no support for modified copies */
                                          (long)pqVar20 * 0x1c);
                                do {
                                  puVar25[-10] = 0x40000000;
                                  puVar25[-3] = 0x40000000;
                                  puVar25[4] = 0x40000000;
                                  puVar25[0xb] = 0x40000000;
                                  puVar25[-7] = 1;
                                  *puVar25 = 1;
                                  puVar25[7] = 1;
                                  puVar25[0xe] = 1;
                                  puVar25 = puVar25 + 0x1c;
                                  uVar40 = uVar40 - 4;
                                } while (uVar40 != 0);
                                param_5 = (qword *)0x0;
                                if (param_3 == param_4) goto LAB_002e50e0;
                              }
                              else {
                                pqVar51 = pqVar20;
                              }
                              pqVar20 = (qword *)(puVar47 + (long)pqVar51 * 7);
                              do {
                                pqVar51 = (qword *)((long)pqVar51 + 1);
                                *(uint *)((long)pqVar20 + -0xc) = 0x40000000;
                                param_3 = (qword *)((long)pqVar20 + 0x1c);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                                *(uint *)pqVar20 = 1;
                                pqVar20 = param_3;
                              } while (pqVar51 < puVar18);
LAB_002e50e0:
                              piVar39 = piVar27 + (long)puVar18 * 7;
                              piVar39[2] = uVar43;
                              piVar39[3] = 0;
                              *piVar39 = iVar60;
                              piVar39[1] = uVar35;
                            }
                            else {
                              param_3 = (qword *)(ulong)(uint)piVar27[(long)puVar18 * 7];
                              if (iVar60 < piVar27[(long)puVar18 * 7]) goto LAB_002e50e0;
                            }
                            uVar43 = uVar43 - 1;
                            iVar57 = iVar57 + 1;
                            uVar23 = uVar23 - 1;
                          } while (uVar33 <= uVar43);
                        }
                        else {
                          iVar57 = 0;
                          iVar60 = *(int *)(lVar30 + 0xd8);
                          iVar6 = *(int *)(lVar30 + 0xdc);
                          lVar28 = *(long *)(lVar30 + 0xa0);
                          lVar30 = *(long *)(lVar30 + 0xa8);
                          uVar36 = iVar56 + uVar43;
                          param_3 = (qword *)(ulong)uVar36;
                          param_4 = param_3;
/* WM - more drops soon - github.com/pengussy */
                          do {
                            uVar23 = uVar43 - 3;
                            if (uVar23 < 0x80) {
                              uVar23 = (uint)(byte)(&UNK_01ade251)[uVar23];
                            }
                            else {
                              uVar23 = 0x43 - (int)LZCOUNT(uVar23);
                            }
                            iVar2 = *(int *)(lVar30 + (ulong)uVar37 * 4) + 1;
                            uVar22 = (uint)LZCOUNT(iVar2);
                            unaff_x21 = (qword *)(ulong)(byte)(&UNK_01ade21c)[uVar23];
                            iVar3 = *(int *)(lVar28 + (ulong)uVar23 * 4) + 1;
                            uVar26 = (uint)LZCOUNT(iVar3);
                            uVar23 = iVar32 + iVar54 +
                                     (((iVar6 + iVar60 + 0x33) -
                                      ((uint)(iVar2 * 0x100) >> (ulong)(~uVar22 & 0x1f))) -
                                     ((uint)(iVar3 * 0x100) >> (ulong)(~uVar26 & 0x1f))) +
                                     ((uVar22 - (int)LZCOUNT(uVar35)) +
                                      (uint)(byte)(&UNK_01ade21c)[uVar23] + uVar26 + 0xffffe1) *
                                     0x100;
                            param_5 = (qword *)(ulong)uVar23;
                            puVar18 = (uint *)(ulong)(uVar43 + iVar56);
                            if ((uint)pqVar51 < uVar43 + iVar56) {
                              unaff_x21 = (qword *)((ulong)pqVar51 & 0xffffffff);
                              uVar40 = (ulong)(uVar36 - iVar57) - (long)unaff_x21;
                              if (uVar40 < 4) {
                                pqVar51 = unaff_x21;
                              }
                              else {
                                pqVar51 = (qword *)((uVar40 & 0xfffffffffffffffc) + (long)unaff_x21)
                                ;
/* WM - if you paid for this, you were scammed */
                                uVar53 = (long)param_4 - (long)unaff_x21 & 0xfffffffffffffffc;
                                unaff_x21 = (qword *)(*(long *)((long)register0x00000008 + -600) +
                                                     (long)unaff_x21 * 0x1c);
                                do {
                                  psVar1 = (section *)(unaff_x21 + -5);
                                  psVar1->sectname[0] = '\0';
                                  psVar1->sectname[1] = '\0';
                                  psVar1->sectname[2] = '\0';
                                  psVar1->sectname[3] = '@';
                                  *(uint *)((long)unaff_x21 + -0xc) = 0x40000000;
                                  *(uint *)(unaff_x21 + 2) = 0x40000000;
                                  *(uint *)((long)unaff_x21 + 0x2c) = 0x40000000;
                                  ((mach_header *)((long)unaff_x21 + -0x1c))->magic = 1;
                                  *(uint *)unaff_x21 = 1;
                                  *(uint *)((long)unaff_x21 + 0x1c) = 1;
                                  *(uint *)(unaff_x21 + 7) = 1;
                                  unaff_x21 = unaff_x21 + 0xe;
                                  uVar53 = uVar53 - 4;
                                } while (uVar53 != 0);
                                if (uVar40 == (uVar40 & 0xfffffffffffffffc)) goto LAB_002e51f0;
                              }
                              puVar42 = puVar47 + (long)pqVar51 * 7;
                              do {
                                pqVar51 = (qword *)((long)pqVar51 + 1);
                                puVar42[-3] = 0x40000000;
                                *puVar42 = 1;
                                puVar42 = puVar42 + 7;
                              } while (pqVar51 < puVar18);
LAB_002e51f0:
                              puVar18 = (uint *)(piVar27 + (long)puVar18 * 7);
                              puVar18[2] = uVar43;
                              puVar18[3] = 0;
                              *puVar18 = uVar23;
                              puVar18[1] = uVar35;
                            }
                            else if ((int)uVar23 < piVar27[(long)puVar18 * 7]) goto LAB_002e51f0;
                            uVar43 = uVar43 - 1;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                            iVar57 = iVar57 + 1;
                            param_4 = (qword *)(ulong)((int)param_4 - 1);
                          } while (uVar33 <= uVar43);
                        }
                      }
                      uVar44 = uVar44 + 1;
                    } while (uVar44 != uVar31);
                    piVar27[(ulong)((int)pqVar51 + 1) * 7] = 0x40000000;
                    pqVar20 = unaff_x21;
                  }
                }
                pqVar52 = (qword *)(ulong)(iVar56 + 1U);
                unaff_x21 = pqVar20;
                pqVar21 = pqVar51;
              } while (iVar56 + 1U <= (uint)pqVar51);
            }
            unaff_x26 = (qword *)0xffffe100;
            piVar39 = piVar27 + ((ulong)pqVar21 & 0xffffffff) * 7;
            uVar31 = piVar39[1];
            *(int *)((long)register0x00000008 + -0x2d4) = *piVar39;
            uVar43 = piVar39[2];
            iVar32 = piVar39[3];
            iVar54 = piVar39[6];
            *(undefined8 *)((long)register0x00000008 + -0x200) = *(undefined8 *)(piVar39 + 4);
            *(int *)((long)register0x00000008 + -0x1f8) = iVar54;
            if (uVar43 == 0) {
LAB_002e58dc:
              pqVar20 = *(qword **)((long)register0x00000008 + -0x2b0);
              lVar28 = *(long *)((long)register0x00000008 + -0x270);
              pqVar48 = (qword *)(*(long *)((long)register0x00000008 + -0x278) +
                                 ((ulong)pqVar21 & 0xffffffff));
/* keep the notice, keep the source honest - github.com/pengussy */
              unaff_x27 = (qword *)((long)&MACH_HEADER.reserved + 3);
              goto LAB_002e45f8;
            }
            uVar33 = (int)pqVar21 - uVar43;
            pqVar52 = (qword *)(ulong)uVar33;
            pqVar20 = *(qword **)((long)register0x00000008 + -0x2b0);
            pqVar48 = *(qword **)((long)register0x00000008 + -0x278);
            if (iVar32 == 0) {
              pqVar24 = *(qword **)((long)register0x00000008 + -0x2d0);
              pqVar51 = pqVar21;
LAB_002e53ec:
              uVar33 = piVar27[(long)pqVar52 * 7 + 3];
              goto LAB_002e53f4;
            }
            uVar49 = *(undefined8 *)(piVar39 + 4);
            puVar29 = *(undefined8 **)((long)register0x00000008 + -0x2b8);
            *(int *)(puVar29 + 1) = piVar39[6];
            *puVar29 = uVar49;
            pqVar52 = (qword *)(ulong)(uVar33 - iVar32);
            pqVar24 = *(qword **)((long)register0x00000008 + -0x2d0);
          }
          uVar33 = (int)pqVar52 + 2;
          piVar38 = piVar27 + (ulong)uVar33 * 7;
          *piVar38 = *(int *)((long)register0x00000008 + -0x2d4);
          piVar38[1] = uVar31;
          *(undefined8 *)(piVar38 + 4) = *(undefined8 *)((long)register0x00000008 + -0x200);
          piVar38[6] = *(int *)((long)register0x00000008 + -0x1f8);
          piVar39 = piVar27 + (long)pqVar52 * 7;
          uVar49 = *(undefined8 *)piVar39;
          iVar32 = piVar39[2];
          iVar54 = piVar39[3];
          piVar38[2] = uVar43;
          piVar38[3] = iVar54;
          uVar31 = uVar33;
          if (iVar32 == 0) {
/* origin: github.com/pengussy - github.com/pengussy */
LAB_002e5558:
            param_5 = *(qword **)((long)register0x00000008 + -0x2e8);
            lVar28 = *(long *)((long)register0x00000008 + -0x270);
            do {
              while( true ) {
                uVar43 = piVar27[(ulong)uVar31 * 7 + 2];
                uVar35 = piVar27[(ulong)uVar31 * 7 + 3];
                uVar44 = (ulong)uVar35;
                if (uVar43 == 0) break;
                iVar32 = piVar27[(ulong)uVar31 * 7 + 1];
                if (*(int *)(lVar28 + 0xf0) != 2) {
                  if (uVar35 != 0) {
                    lVar30 = *(long *)(lVar28 + 0x90);
                    if (uVar35 == 1) {
                      uVar40 = 0;
                    }
                    else {
                      uVar40 = 0;
/*  stripping the watermark breaks the license  */
                      pbVar45 = (byte *)((long)pqVar20 + 1);
                      do {
                        *(int *)(lVar30 + (ulong)pbVar45[-1] * 4) =
                             *(int *)(lVar30 + (ulong)pbVar45[-1] * 4) + 2;
                        *(int *)(lVar30 + (ulong)*pbVar45 * 4) =
                             *(int *)(lVar30 + (ulong)*pbVar45 * 4) + 2;
                        uVar40 = uVar40 + 2;
                        pbVar45 = pbVar45 + 2;
                      } while ((uVar44 & 0xfffffffe) != uVar40);
                    }
                    if ((uVar35 & 1) != 0) {
                      *(int *)(lVar30 + (ulong)*(byte *)((long)pqVar20 + uVar40) * 4) =
                           *(int *)(lVar30 + (ulong)*(byte *)((long)pqVar20 + uVar40) * 4) + 2;
                    }
                  }
                  *(uint *)(lVar28 + 0xc0) = *(int *)(lVar28 + 0xc0) + uVar35 * 2;
                }
                if (uVar35 < 0x40) {
                  uVar37 = (uint)(byte)(&UNK_01ade1dc)[uVar44];
                }
                else {
                  uVar37 = 0x32 - (int)LZCOUNT(uVar35);
                }
                *(int *)(*(long *)(lVar28 + 0x98) + (ulong)uVar37 * 4) =
                     *(int *)(*(long *)(lVar28 + 0x98) + (ulong)uVar37 * 4) + 1;
                *(int *)(lVar28 + 0xc4) = *(int *)(lVar28 + 0xc4) + 1;
                uVar37 = 0x1f - (int)LZCOUNT(iVar32);
                *(int *)(*(long *)(lVar28 + 0xa8) + (ulong)uVar37 * 4) =
                     *(int *)(*(long *)(lVar28 + 0xa8) + (ulong)uVar37 * 4) + 1;
                *(int *)(lVar28 + 0xcc) = *(int *)(lVar28 + 0xcc) + 1;
// keep the notice, keep the source honest
                uVar37 = uVar43 - 3;
                if (uVar37 < 0x80) {
                  uVar37 = (uint)(byte)(&UNK_01ade251)[uVar37];
                }
                else {
                  uVar37 = 0x43 - (int)LZCOUNT(uVar37);
                }
                *(int *)(*(long *)(lVar28 + 0xa0) + (ulong)uVar37 * 4) =
                     *(int *)(*(long *)(lVar28 + 0xa0) + (ulong)uVar37 * 4) + 1;
                *(int *)(lVar28 + 200) = *(int *)(lVar28 + 200) + 1;
                pqVar51 = (qword *)param_5[3];
                puVar18 = (uint *)((long)pqVar20 + uVar44);
                uVar10 = (undefined2)uVar35;
                if (pqVar24 < puVar18) {
                  pqVar48 = pqVar20;
                  if (pqVar20 <= pqVar24) {
                    pqVar5 = (qword *)((long)pqVar51 + ((long)pqVar24 - (long)pqVar20));
                    qVar55 = *pqVar20;
                    pqVar52 = pqVar51 + 2;
                    pqVar51[1] = pqVar20[1];
                    *pqVar51 = qVar55;
                    pqVar51 = pqVar5;
                    pqVar48 = pqVar24;
                    if (0x10 < (ulong)((long)pqVar24 - (long)pqVar20)) {
// origin: github.com/pengussy
                      pqVar11 = pqVar20;
                      do {
                        qVar55 = pqVar11[2];
                        pqVar52[1] = pqVar11[3];
                        *pqVar52 = qVar55;
                        qVar55 = pqVar11[4];
                        pqVar52[3] = pqVar11[5];
                        pqVar52[2] = qVar55;
                        pqVar52 = pqVar52 + 4;
                        pqVar11 = pqVar11 + 4;
                      } while (pqVar52 < pqVar5);
                    }
                  }
                  if (pqVar48 < puVar18) {
                    puVar42 = (uint *)((long)pqVar20 + (uVar44 - (long)pqVar48));
                    if ((&MACH_HEADER.cpusubtype <= puVar42) &&
                       (0x3f < (ulong)((long)pqVar51 - (long)pqVar48))) {
                      if ((uint *)((long)&segment_command_00000020.vmaddr + 7) < puVar42) {
                        puVar19 = (uint *)((ulong)puVar42 & 0xffffffffffffffc0);
                        pdVar16 = (dword *)(pqVar48 + 4);
                        puVar50 = puVar19;
                        pqVar52 = pqVar51 + 4;
                        do {
                          qVar55 = *(qword *)(pdVar16 + -8);
                          qVar62 = *(qword *)(pdVar16 + -2);
                          qVar59 = *(qword *)(pdVar16 + -4);
                          qVar64 = *(qword *)(pdVar16 + 2);
                          qVar63 = *(qword *)pdVar16;
                          qVar66 = *(qword *)(pdVar16 + 6);
/*  if you paid for this, you were scammed  */
                          qVar65 = *(qword *)(pdVar16 + 4);
                          pqVar52[-3] = *(qword *)(pdVar16 + -6);
                          pqVar52[-4] = qVar55;
                          pqVar52[-1] = qVar62;
                          pqVar52[-2] = qVar59;
                          pqVar52[1] = qVar64;
                          *pqVar52 = qVar63;
                          pqVar52[3] = qVar66;
                          pqVar52[2] = qVar65;
                          puVar50 = puVar50 + -0x10;
                          pdVar16 = pdVar16 + 0x10;
                          pqVar52 = pqVar52 + 8;
                        } while (puVar50 != (uint *)0x0);
                        param_3 = (qword *)0x0;
                        if (puVar42 == puVar19) goto LAB_002e5848;
                        if (((ulong)puVar42 & 0x38) == 0) {
                          pqVar51 = (qword *)((long)pqVar51 + (long)puVar19);
                          pqVar48 = (qword *)((long)pqVar48 + (long)puVar19);
                          goto LAB_002e5838;
                        }
                      }
                      else {
                        puVar19 = (uint *)0x0;
                      }
                      param_3 = (qword *)((ulong)puVar42 & 0xfffffffffffffff8);
                      lVar30 = (long)puVar19 - (long)param_3;
                      puVar29 = (undefined8 *)((long)pqVar51 + (long)puVar19);
                      puVar46 = (undefined8 *)((long)pqVar48 + (long)puVar19);
                      do {
                        *puVar29 = *puVar46;
                        lVar30 = lVar30 + 8;
                        puVar29 = puVar29 + 1;
/* keep the notice, keep the source honest */
                        puVar46 = puVar46 + 1;
                      } while (lVar30 != 0);
                      param_4 = (qword *)0x0;
                      pqVar48 = (qword *)((long)pqVar48 + (long)param_3);
                      pqVar51 = (qword *)((long)pqVar51 + (long)param_3);
                      if ((qword *)puVar42 == param_3) goto LAB_002e5848;
                    }
LAB_002e5838:
                    do {
                      pqVar52 = (qword *)((long)pqVar48 + 1);
                      *(char *)pqVar51 = (char)*pqVar48;
                      pqVar48 = pqVar52;
                      pqVar51 = (qword *)((long)pqVar51 + 1);
                    } while (pqVar52 != (qword *)puVar18);
                  }
LAB_002e5848:
                  param_5[3] = param_5[3] + uVar44;
                  piVar39 = (int *)param_5[1];
                  if (uVar35 < 0x10000) {
                    *(undefined2 *)(piVar39 + 1) = uVar10;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    *piVar39 = iVar32;
                  }
                  else {
                    *(uint *)(param_5 + 9) = 1;
                    *(uint *)((long)param_5 + 0x4c) = (uint)((long)piVar39 - *param_5 >> 3);
                    *(undefined2 *)(piVar39 + 1) = uVar10;
                    *piVar39 = iVar32;
                  }
                }
                else {
                  qVar55 = *pqVar20;
                  pqVar51[1] = pqVar20[1];
                  *pqVar51 = qVar55;
                  if (0x10 < uVar35) {
                    lVar30 = param_5[3];
                    uVar49 = pqVar20[2];
                    *(qword *)(lVar30 + 0x18) = pqVar20[3];
                    *(undefined8 *)(lVar30 + 0x10) = uVar49;
                    if (0x10 < uVar35 - 0x10) {
                      puVar29 = (undefined8 *)(lVar30 + 0x20);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                      puVar18 = (uint *)(pqVar20 + 6);
                      do {
                        uVar49 = *(undefined8 *)(puVar18 + -4);
                        puVar29[1] = *(undefined8 *)(puVar18 + -2);
                        *puVar29 = uVar49;
                        uVar49 = *(undefined8 *)puVar18;
                        puVar29[3] = *(undefined8 *)(puVar18 + 2);
                        puVar29[2] = uVar49;
                        puVar29 = puVar29 + 4;
                        puVar18 = puVar18 + 8;
                      } while (puVar29 < (undefined8 *)(lVar30 + uVar44));
                      goto LAB_002e5848;
                    }
                  }
                  param_5[3] = param_5[3] + uVar44;
                  piVar39 = (int *)param_5[1];
                  *(undefined2 *)(piVar39 + 1) = uVar10;
                  *piVar39 = iVar32;
                }
                if (0xffff < (ulong)uVar43 - 3) {
                  *(uint *)(param_5 + 9) = 2;
                  *(uint *)((long)param_5 + 0x4c) = (uint)((long)piVar39 - *param_5 >> 3);
                }
                *(short *)((long)piVar39 + 6) = (short)uVar43 + -3;
                param_5[1] = (qword)(piVar39 + 2);
                pqVar20 = (qword *)((long)pqVar20 + (ulong)(uVar43 + uVar35));
                uVar31 = uVar31 + 1;
                pqVar48 = pqVar20;
                if (uVar33 < uVar31) goto LAB_002e5518;
              }
              uVar31 = uVar31 + 1;
              pqVar48 = (qword *)((long)pqVar20 + uVar44);
// WM - origin: github.com/pengussy
            } while (uVar31 <= uVar33);
          }
          else {
            do {
              uVar31 = uVar31 - 1;
              piVar38 = piVar27 + (ulong)uVar31 * 7;
              *(undefined8 *)piVar38 = uVar49;
              piVar38[2] = iVar32;
              piVar38[3] = iVar54;
              iVar56 = piVar27[(long)pqVar52 * 7 + 6];
              *(undefined8 *)(piVar38 + 4) = *(undefined8 *)(piVar27 + (long)pqVar52 * 7 + 4);
              piVar38[6] = iVar56;
              pqVar52 = (qword *)(ulong)(uint)((int)pqVar52 - (iVar32 + iVar54));
              piVar39 = piVar27 + (long)pqVar52 * 7;
              uVar49 = *(undefined8 *)piVar39;
              iVar32 = piVar39[2];
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
              iVar54 = piVar39[3];
              piVar38[3] = iVar54;
            } while (iVar32 != 0);
            if (uVar31 <= uVar33) goto LAB_002e5558;
            lVar28 = *(long *)((long)register0x00000008 + -0x270);
          }
LAB_002e5518:
          if (*(int *)(lVar28 + 0xf0) != 2) {
            iVar32 = *(int *)(lVar28 + 0xc0) + 1;
            uVar31 = (uint)LZCOUNT(iVar32);
            *(uint *)(lVar28 + 0xd0) =
                 ((uint)(iVar32 * 0x100) >> (ulong)(~uVar31 & 0x1f)) + (0x1f - uVar31) * 0x100;
          }
          iVar32 = *(int *)(lVar28 + 0xcc) + 1;
          uVar31 = (uint)LZCOUNT(iVar32);
          iVar54 = (int)*(undefined8 *)(lVar28 + 0xc4) + 1;
          iVar56 = (int)((ulong)*(undefined8 *)(lVar28 + 0xc4) >> 0x20) + 1;
          iVar57 = 0x1f - LZCOUNT(iVar54);
          iVar60 = 0x1f - LZCOUNT(iVar56);
          uVar49 = NEON_ushl(CONCAT44(iVar56 * 0x100,iVar54 * 0x100),CONCAT44(-iVar60,-iVar57),4);
          *(ulong *)(lVar28 + 0xd4) =
               CONCAT44(iVar60 * 0x100 + (int)((ulong)uVar49 >> 0x20),iVar57 * 0x100 + (int)uVar49);
/* donate: donate/README.md */
          *(uint *)(lVar28 + 0xdc) =
               ((uint)(iVar32 * 0x100) >> (ulong)(~uVar31 & 0x1f)) + (0x1f - uVar31) * 0x100;
          unaff_x27 = (qword *)((long)&MACH_HEADER.reserved + 3);
        }
LAB_002e45f8:
        auVar67._8_8_ = pqVar21;
        auVar67._0_8_ = lVar28;
        pqVar51 = pqVar48;
      } while (pqVar48 < *(uint **)((long)register0x00000008 + -0x280));
      *(qword **)((long)register0x00000008 + -0x290) = pqVar20;
    }
    auVar14._8_8_ = puVar47;
    auVar14._0_8_ = piVar27;
    auVar13._8_8_ = puVar47;
    auVar13._0_8_ = piVar27;
    auVar12._8_8_ = puVar47;
    auVar12._0_8_ = piVar27;
    unaff_x23 = auVar67._8_8_;
    unaff_x28 = auVar67._0_8_;
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x1f0)) {
      return *(long *)((long)register0x00000008 + -0x288) -
             *(long *)((long)register0x00000008 + -0x290);
    }
    auVar68 = ___stack_chk_fail();
    auVar68._8_8_ = auVar68._8_8_;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    lVar30 = auVar68._0_8_;
    *(qword **)((long)register0x00000008 + -0x330) = unaff_x24;
    *(qword **)((long)register0x00000008 + -0x328) = unaff_x23;
    *(qword **)((long)register0x00000008 + -800) = unaff_x22;
    *(qword **)((long)register0x00000008 + -0x318) = unaff_x21;
    *(uint **)((long)register0x00000008 + -0x310) = puVar47;
    *(int **)((long)register0x00000008 + -0x308) = piVar27;
    *(undefined1 **)((long)register0x00000008 + -0x300) =
         (undefined1 *)((long)register0x00000008 + -0x180);
    *(undefined **)((long)register0x00000008 + -0x2f8) = &DAT_002e5938;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x300);
    *(undefined8 *)((long)register0x00000008 + -0x338) =
         *(undefined8 *)PTR____stack_chk_guard_01f20200;
    if (*(int *)(lVar30 + 0xc4) == 0) {
      auVar12 = auVar13;
      if (auVar68._8_8_[1] == *auVar68._8_8_) {
        auVar12 = auVar14;
        if ((*(int *)(lVar30 + 0x18) == *(int *)(lVar30 + 0x1c) && &MACH_HEADER.cpusubtype < param_5
            ) && *(int *)(lVar30 + 0x18) == (int)param_4 - *(int *)(lVar30 + 8)) {
          *(qword *)((long)register0x00000008 + -0x348) = *param_3;
          *(uint *)((long)register0x00000008 + -0x340) = *(uint *)(param_3 + 1);
          FUN_002e4438(lVar30,auVar68._8_8_,(undefined1 *)((long)register0x00000008 + -0x348));
          func_0x0029d634(auVar68._8_8_);
          *(long *)(lVar30 + 8) = *(long *)(lVar30 + 8) - (long)param_5;
          iVar32 = *(int *)(lVar30 + 0x18) + (int)param_5;
          *(int *)(lVar30 + 0x18) = iVar32;
          *(int *)(lVar30 + 0x1c) = iVar32;
          *(int *)(lVar30 + 0x2c) = iVar32;
          unaff_x21 = param_4;
/* WM - chat: discord.gg/sdkhDjTex */
          unaff_x22 = param_5;
          unaff_x23 = param_3;
          auVar12 = auVar68;
        }
      }
    }
    lVar30 = FUN_002e4438(lVar30,auVar68._8_8_);
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x338)) {
      return lVar30;
    }
    unaff_x30 = &DAT_002e5a34;
    auVar68 = ___stack_chk_fail();
    param_6 = 2;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x350);
  } while( true );
}

