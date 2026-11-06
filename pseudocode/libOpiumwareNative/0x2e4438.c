/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2e4438:a1192fabc9
 */

long FUN_002e4438(undefined8 param_1,undefined8 param_2,qword *param_3,qword *param_4,qword *param_5
                 ,ulong param_6)

{
  section *psVar1;
  int iVar2;
  undefined *puVar3;
  qword *pqVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  undefined2 uVar9;
  qword *pqVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  dword *pdVar15;
  qword *pqVar16;
  uint *puVar17;
  uint *puVar18;
  qword *pqVar19;
  qword *pqVar20;
  uint uVar21;
  uint uVar22;
  qword *pqVar23;
  undefined4 *puVar24;
/* more drops soon - github.com/pengussy */
  uint uVar25;
  int *piVar26;
  qword *pqVar27;
  long lVar28;
  undefined8 *puVar29;
  int iVar30;
  uint uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  int *piVar41;
  int *piVar42;
  ulong uVar43;
  uint uVar44;
  qword *pqVar45;
  qword *pqVar46;
  byte *pbVar47;
  undefined8 *puVar48;
  ulong uVar49;
  uint *unaff_x19;
  uint *unaff_x20;
  qword *unaff_x21;
  qword *pqVar50;
  uint *puVar51;
  qword *unaff_x22;
  long unaff_x23;
// WM - if you paid for this, you were scammed
  qword *unaff_x24;
  undefined8 unaff_x25;
  qword *unaff_x26;
  ulong uVar52;
  qword *unaff_x27;
  qword *unaff_x28;
  qword *pqVar53;
  long lVar54;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  qword *pqVar55;
  int iVar56;
  qword qVar57;
  int iVar58;
  int iVar59;
  undefined8 uVar60;
  qword qVar61;
  int iVar62;
  undefined8 uVar63;
  qword qVar64;
  qword qVar65;
  qword qVar66;
  qword qVar67;
  qword qVar68;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar69 [16];
  
  auVar69._8_8_ = param_2;
  auVar69._0_8_ = param_1;
  do {
    lVar54 = auVar69._0_8_;
/*  more drops soon - github.com/pengussy  */
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(qword **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(qword **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(qword **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(qword **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(qword **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(qword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    *(qword **)((long)register0x00000008 + -0x148) = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_01f20200;
    *(qword **)((long)register0x00000008 + -0x120) = param_4;
    *(undefined **)((long)register0x00000008 + -0x118) =
         (undefined *)((long)param_4 + (long)param_5);
    *(undefined **)((long)register0x00000008 + -0x110) =
         (undefined *)((long)param_4 + (long)param_5) + -8;
    lVar28 = *(long *)(lVar54 + 8);
    uVar31 = *(uint *)(lVar54 + 0x18);
    uVar35 = *(uint *)(lVar54 + 0x110);
    uVar49 = 0;
    if (2 < uVar35) {
      uVar49 = 3;
    }
    uVar37 = 3;
    if (uVar35 - 3 != 0) {
      uVar37 = 4;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    }
    *(ulong *)((long)register0x00000008 + -0xf8) = (ulong)uVar37;
    if (0xfffffffc < uVar35 - 6) {
      uVar49 = (ulong)(uVar35 - 3);
    }
    *(undefined8 *)((long)register0x00000008 + -0x128) =
         *(undefined8 *)(&UNK_01dc1d38 + uVar49 * 8 + (param_6 & 0xffffffff) * 0x20);
    puVar40 = (uint *)(lVar28 + (ulong)uVar31);
    uVar31 = *(uint *)(lVar54 + 0x114);
    if (0xffe < uVar31) {
      uVar31 = 0xfff;
    }
    *(uint *)((long)register0x00000008 + -0x14c) = uVar31;
    *(undefined4 *)((long)register0x00000008 + -0xa4) = *(undefined4 *)(lVar54 + 0x2c);
    pqVar45 = *(qword **)(lVar54 + 0xb0);
    piVar26 = *(int **)(lVar54 + 0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x88) = 0;
    puVar29 = *(undefined8 **)(lVar54 + 0x120);
    if (puVar29 == (undefined8 *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
/* found on a paste site? it was re-uploaded illegally */
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    }
    else {
      uVar33 = *puVar29;
      uVar63 = puVar29[3];
      uVar60 = puVar29[2];
      *(undefined8 *)((long)register0x00000008 + -0xd8) = puVar29[1];
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar33;
      *(undefined8 *)((long)register0x00000008 + -200) = uVar63;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar60;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = puVar29[4];
    }
    *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    unaff_x26 = param_5;
    func_0x002e5e84((undefined1 *)((long)register0x00000008 + -0xe0),0,param_5);
    pqVar50 = *(qword **)((long)register0x00000008 + -0x120);
    pqVar20 = (qword *)((long)&MACH_HEADER.magic + 2);
    pqVar19 = param_5;
    func_0x002e6014(lVar54 + 0x90,pqVar50);
    pqVar16 = pqVar50;
    if (pqVar50 == (qword *)puVar40) {
      pqVar16 = (qword *)((long)pqVar50 + 1);
    }
    if (pqVar16 < *(uint **)((long)register0x00000008 + -0x110)) {
      *(undefined4 *)((long)register0x00000008 + -0x164) = 0;
      pqVar27 = *(qword **)((long)register0x00000008 + -0x120);
      puVar40 = (uint *)(piVar26 + 10);
      *(long *)((long)register0x00000008 + -0x178) = auVar69._8_8_;
      *(long *)((long)register0x00000008 + -0x170) =
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
           *(long *)((long)register0x00000008 + -0xf8) + -1;
      *(qword **)((long)register0x00000008 + -0xf0) = pqVar45;
      *(int **)((long)register0x00000008 + -0xe8) = piVar26 + 0x11;
      pqVar45 = (qword *)&MACH_HEADER.reserved;
      unaff_d8 = 0x100000001;
      unaff_d9 = 0x1f0000001f;
      unaff_x25 = 1;
      unaff_x24 = (qword *)0x40000000;
      *(long *)((long)register0x00000008 + -0x100) = lVar54;
      *(long *)((long)register0x00000008 + -0x160) =
           *(long *)((long)register0x00000008 + -0x118) + -0x20;
      *(uint **)((long)register0x00000008 + -0x158) = puVar40;
      do {
        *(qword **)((long)register0x00000008 + -0x140) = pqVar27;
        *(long *)((long)register0x00000008 + -0x130) = (long)pqVar16 - (long)pqVar27;
        pqVar55 = *(qword **)((long)register0x00000008 + -0xf8);
        param_5 = *(qword **)((long)register0x00000008 + -0xf0);
        pqVar50 = *(qword **)((long)register0x00000008 + -0x118);
        uVar14 = (**(code **)((long)register0x00000008 + -0x128))
                           (param_5,lVar54,(undefined1 *)((long)register0x00000008 + -0xa4),pqVar16,
// WM - origin: github.com/pengussy
                            pqVar50,*(undefined8 *)((long)register0x00000008 + -0x148),
                            (int)((long)pqVar16 - (long)pqVar27) == 0,pqVar55);
        *(undefined4 *)((long)register0x00000008 + -0xa0) = uVar14;
        pqVar20 = (qword *)(ulong)(uint)((int)pqVar16 -
                                        (int)*(undefined8 *)((long)register0x00000008 + -0x120));
        unaff_x26 = (qword *)(ulong)(uint)((int)pqVar50 - (int)pqVar16);
        pqVar19 = (qword *)((long)register0x00000008 + -0xa0);
        func_0x002e6cd8((undefined1 *)((long)register0x00000008 + -0xe0),param_5);
        uVar31 = *(uint *)((long)register0x00000008 + -0xa0);
        if (uVar31 == 0) {
          pqVar46 = (qword *)((long)pqVar16 + 1);
          pqVar27 = *(qword **)((long)register0x00000008 + -0x140);
          unaff_x27 = pqVar16;
        }
        else {
          *(qword **)((long)register0x00000008 + -0x108) = pqVar16;
          uVar49 = *(ulong *)((long)register0x00000008 + -0x130);
          uVar35 = (uint)uVar49;
          piVar26[2] = 0;
          piVar26[3] = uVar35;
          pqVar50 = (qword *)&UNK_00ffffe1;
          param_5 = (qword *)0xffffe100;
          pqVar16 = (qword *)&dylib_command_000010f0.dylib.current_version;
          if (*(int *)(lVar54 + 0xe0) == 1) {
            uVar37 = (uint)LZCOUNT(uVar35 + 1);
            iVar30 = ((uVar35 + 1) * 0x100 >> (ulong)(~uVar37 & 0x1f)) + (0x1f - uVar37) * 0x100;
            pqVar23 = *(qword **)((long)register0x00000008 + -0x160);
          }
          else if (uVar35 == 0x20000) {
            iVar30 = *(int *)(*(long *)(lVar54 + 0x98) + 0x8c) + 1;
            uVar37 = (uint)LZCOUNT(iVar30);
            iVar30 = ((*(int *)(lVar54 + 0xd4) + uVar37 * 0x100) -
                     ((uint)(iVar30 * 0x100) >> (ulong)(~uVar37 & 0x1f))) + -0xe00;
            pqVar23 = *(qword **)((long)register0x00000008 + -0x160);
          }
          else {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
            if (uVar35 < 0x40) {
              uVar37 = (uint)(byte)(&UNK_01ade1dc)[uVar49 & 0x3f];
            }
            else {
              uVar37 = 0x32 - (int)LZCOUNT(uVar35);
            }
            pqVar23 = *(qword **)((long)register0x00000008 + -0x160);
            iVar30 = *(int *)(*(long *)(lVar54 + 0x98) + (ulong)uVar37 * 4) + 1;
            uVar36 = (uint)LZCOUNT(iVar30);
            iVar30 = (*(int *)(lVar54 + 0xd4) - ((uint)(iVar30 * 0x100) >> (ulong)(~uVar36 & 0x1f)))
                     + (uVar36 + (byte)(&UNK_01ade1b8)[uVar37]) * 0x100 + -0x1f00;
          }
          *piVar26 = iVar30;
          uVar33 = **(undefined8 **)((long)register0x00000008 + -0x148);
          piVar26[6] = *(int *)(*(undefined8 **)((long)register0x00000008 + -0x148) + 1);
          *(undefined8 *)(piVar26 + 4) = uVar33;
          puVar51 = (uint *)(*(long *)((long)register0x00000008 + -0xf0) + (ulong)(uVar31 - 1) * 8);
          uVar37 = puVar51[1];
          if (*(uint *)((long)register0x00000008 + -0x14c) < uVar37) {
            pqVar53 = (qword *)0x0;
            uVar31 = *puVar51;
            pqVar27 = *(qword **)((long)register0x00000008 + -0x140);
            pqVar46 = *(qword **)((long)register0x00000008 + -0x108);
LAB_002e53f4:
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)(piVar26 + (long)pqVar53 * 7 + 4);
            *(int *)((long)register0x00000008 + -0x98) = piVar26[(long)pqVar53 * 7 + 6];
            if (uVar31 < 4) {
              uVar36 = uVar31;
              if (uVar35 == 0) {
                uVar36 = uVar31 + 1;
/* wm:chat: discord.gg/sdkhDjTex */
              }
              uVar36 = uVar36 - 1;
              if (uVar36 == 3) {
                iVar30 = *(int *)((long)register0x00000008 + -0xa0);
                iVar56 = iVar30 + -1;
LAB_002e5460:
                puVar24 = (undefined4 *)((long)register0x00000008 + -0x98);
                if (uVar36 != 1) {
                  puVar24 = (undefined4 *)((ulong)((long)register0x00000008 + -0xa0) | 4);
                }
                uVar14 = *puVar24;
                *(int *)((long)register0x00000008 + -0x9c) = iVar30;
                goto LAB_002e5478;
              }
              if (uVar36 != 0) {
                iVar56 = *(int *)((undefined1 *)((long)register0x00000008 + -0xa0) +
                                 (ulong)uVar36 * 4);
                iVar30 = *(int *)((long)register0x00000008 + -0xa0);
                goto LAB_002e5460;
              }
/* reversing this took months of machine time */
              uVar14 = *(undefined4 *)((long)register0x00000008 + -0x98);
            }
            else {
              uVar14 = *(undefined4 *)((long)register0x00000008 + -0x9c);
              *(undefined4 *)((long)register0x00000008 + -0x9c) =
                   *(undefined4 *)((long)register0x00000008 + -0xa0);
              iVar56 = uVar31 - 3;
LAB_002e5478:
              *(int *)((long)register0x00000008 + -0xa0) = iVar56;
            }
            puVar29 = *(undefined8 **)((long)register0x00000008 + -0x148);
            *puVar29 = *(undefined8 *)((long)register0x00000008 + -0xa0);
            *(undefined4 *)(puVar29 + 1) = uVar14;
            pqVar55 = pqVar16;
          }
          else {
            uVar35 = (int)*(undefined8 *)((long)register0x00000008 + -0x108) -
                     (int)*(undefined8 *)((long)register0x00000008 + -0x140);
            lVar28 = *(long *)((long)register0x00000008 + -0x170);
            puVar51 = puVar40;
            do {
              uVar35 = uVar35 + 1;
              puVar51[-3] = 0x40000000;
              puVar51[-1] = 0;
              *puVar51 = uVar35;
              puVar51 = puVar51 + 7;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            uVar43 = *(ulong *)((long)register0x00000008 + -0xf8);
            uVar49 = 0;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            do {
              uVar35 = ((uint *)(*(long *)((long)register0x00000008 + -0xf0) + uVar49 * 8))[1];
              if ((uint)uVar43 <= uVar35) {
                uVar37 = *(uint *)(*(long *)((long)register0x00000008 + -0xf0) + uVar49 * 8);
                uVar36 = 0x1f - (int)LZCOUNT(uVar37);
                if (*(int *)(lVar54 + 0xe0) == 1) {
                  uVar39 = (uint)uVar43 * 0x100 - 0x200;
                  do {
                    iVar56 = (int)uVar43;
                    uVar38 = (uint)LZCOUNT(iVar56 + -2);
                    iVar30 = *piVar26;
                    piVar42 = piVar26 + (uVar43 & 0xffffffff) * 7;
                    piVar42[2] = iVar56;
                    piVar42[3] = 0;
                    *piVar42 = (uVar39 >> (ulong)(~uVar38 & 0x1f)) +
                               ((0x1f - uVar38) + uVar36) * 0x100 + iVar30 + 0x1100;
                    piVar42[1] = uVar37;
                    uVar43 = (ulong)(iVar56 + 1U);
                    uVar39 = uVar39 + 0x100;
                  } while (iVar56 + 1U <= uVar35);
                }
                else {
                  iVar30 = *(int *)(lVar54 + 0xd8);
                  iVar56 = *(int *)(lVar54 + 0xdc);
                  iVar58 = *(int *)(lVar54 + 0xd4);
                  lVar28 = *(long *)(lVar54 + 0xa0);
                  lVar6 = *(long *)(lVar54 + 0xa8);
                  piVar42 = *(int **)(lVar54 + 0x98);
// chat: discord.gg/sdkhDjTex
                  do {
                    uVar38 = (uint)uVar43;
                    uVar39 = uVar38 - 3;
                    if (uVar39 < 0x80) {
                      uVar52 = (ulong)(byte)(&UNK_01ade251)[uVar39];
                    }
                    else {
                      uVar52 = (ulong)(0x43 - (int)LZCOUNT(uVar39));
                    }
                    iVar59 = *(int *)(lVar6 + (ulong)uVar36 * 4) + 1;
                    uVar22 = (uint)LZCOUNT(iVar59);
                    bVar8 = (&UNK_01ade21c)[uVar52];
                    iVar62 = *(int *)(lVar28 + uVar52 * 4) + 1;
                    uVar21 = (uint)LZCOUNT(iVar62);
                    iVar7 = *piVar26;
                    pqVar20 = (qword *)(piVar26 + (uVar43 & 0xffffffff) * 7);
                    *(uint *)((long)pqVar20 + 4) = uVar37;
                    *(uint *)(pqVar20 + 1) = uVar38;
                    *(uint *)((long)pqVar20 + 0xc) = 0;
                    iVar5 = *piVar42 + 1;
                    uVar39 = (uint)LZCOUNT(iVar5);
                    uVar39 = (iVar58 + -0x1f00 + uVar39 * 0x100) -
                             ((uint)(iVar5 * 0x100) >> (ulong)(~uVar39 & 0x1f));
                    unaff_x26 = (qword *)(ulong)uVar39;
                    uVar39 = uVar39 + (((iVar56 + iVar30 + 0x33 + iVar7) -
                                       ((uint)(iVar59 * 0x100) >> (ulong)(~uVar22 & 0x1f))) -
                                      ((uint)(iVar62 * 0x100) >> (ulong)(~uVar21 & 0x1f))) +
                                      ((uVar22 - (int)LZCOUNT(uVar37)) + (uint)bVar8 +
                                      uVar21 + 0xffffe1) * 0x100;
                    pqVar19 = (qword *)(ulong)uVar39;
                    *(uint *)pqVar20 = uVar39;
                    uVar43 = (ulong)(uVar38 + 1);
                  } while (uVar38 + 1 <= uVar35);
/* WM - watermarked copy - do not remove */
                }
              }
              uVar49 = uVar49 + 1;
            } while (uVar49 != uVar31);
            piVar26[(uVar43 & 0xffffffff) * 7] = 0x40000000;
            uVar31 = (int)uVar43 - 1;
            pqVar16 = (qword *)(ulong)uVar31;
            pqVar55 = pqVar16;
            if (uVar31 != 0) {
              pqVar53 = (qword *)((long)&MACH_HEADER.magic + 1);
              do {
                iVar58 = (int)pqVar53;
                pqVar50 = (qword *)(*(long *)((long)register0x00000008 + -0x108) + (long)pqVar53);
                piVar42 = piVar26 + (ulong)(iVar58 - 1) * 7;
                uVar35 = piVar42[3];
                uVar31 = uVar35 + 1;
                iVar30 = *piVar42;
                iVar56 = *(int *)(*(long *)((long)register0x00000008 + -0x100) + 0xe0);
                if (*(int *)(*(long *)((long)register0x00000008 + -0x100) + 0xf0) == 2) {
                  iVar30 = iVar30 + 0x800;
                  if (iVar56 == 1) goto LAB_002e4a7c;
                  if (uVar31 != 0x20000) goto LAB_002e4b24;
LAB_002e49e4:
                  iVar59 = *(int *)(*(long *)((long)register0x00000008 + -0x100) + 0xd4);
                  lVar54 = *(long *)(*(long *)((long)register0x00000008 + -0x100) + 0x98);
                  iVar56 = *(int *)(lVar54 + 0x8c) + 1;
                  uVar37 = (uint)LZCOUNT(iVar56);
                  iVar56 = ((iVar59 + uVar37 * 0x100) -
                           ((uint)(iVar56 * 0x100) >> (ulong)(~uVar37 & 0x1f))) + -0xe00;
                  iVar59 = iVar59 + -0x1f00;
LAB_002e4a18:
                  uVar37 = 0x32 - (int)LZCOUNT(uVar35);
/* origin: github.com/pengussy - github.com/pengussy */
LAB_002e4a24:
                  iVar62 = *(int *)(lVar54 + (ulong)uVar37 * 4) + 1;
                  uVar36 = (uint)LZCOUNT(iVar62);
                  uVar37 = iVar30 + (iVar56 - ((iVar59 - ((uint)(iVar62 * 0x100) >>
                                                         (ulong)(~uVar36 & 0x1f))) +
                                              (uVar36 + (byte)(&UNK_01ade1b8)[uVar37]) * 0x100));
                  pqVar55 = (qword *)(ulong)uVar37;
                  puVar51 = (uint *)(piVar26 + (long)pqVar53 * 7);
                  pqVar27 = (qword *)(ulong)*puVar51;
                  if ((int)uVar37 <= (int)*puVar51) goto LAB_002e4bcc;
LAB_002e4ac8:
                  uVar31 = puVar51[3];
                  pqVar55 = pqVar27;
                }
                else {
                  if (iVar56 == 1) {
                    iVar30 = iVar30 + 0x600;
LAB_002e4a7c:
                    uVar37 = (uint)LZCOUNT(uVar35 + 2);
                    uVar37 = iVar30 + ((((uVar35 + 2) * 0x100 >> (ulong)(~uVar37 & 0x1f)) +
                                       (0x1f - uVar37) * 0x100) -
                                      ((uVar31 * 0x100 >> (ulong)(~(uint)LZCOUNT(uVar31) & 0x1f)) +
/* WM - keep the notice, keep the source honest */
                                      (0x1f - (uint)LZCOUNT(uVar31)) * 0x100));
                    pqVar55 = (qword *)(ulong)uVar37;
                    puVar51 = (uint *)(piVar26 + (long)pqVar53 * 7);
                    pqVar27 = (qword *)(ulong)*puVar51;
                    if ((int)*puVar51 < (int)uVar37) goto LAB_002e4ac8;
                  }
                  else {
                    iVar59 = *(int *)(*(long *)((long)register0x00000008 + -0x100) + 0xd0);
                    iVar56 = *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x100) + 0x90)
                                     + (ulong)*(byte *)((long)pqVar50 + -1) * 4) + 1;
                    uVar37 = (uint)LZCOUNT(iVar56);
                    uVar37 = ((uint)(iVar56 * 0x100) >> (ulong)(~uVar37 & 0x1f)) +
                             (0x1f - uVar37) * 0x100;
                    iVar56 = 0x100;
                    if (uVar37 <= iVar59 - 0x100U) {
                      iVar56 = iVar59 - uVar37;
                    }
                    iVar30 = iVar56 + iVar30;
                    if (uVar31 == 0x20000) goto LAB_002e49e4;
LAB_002e4b24:
/* stripping the watermark breaks the license */
                    if (uVar31 < 0x40) {
                      uVar37 = (uint)(byte)(&UNK_01ade1dc)[uVar31];
                    }
                    else {
                      uVar37 = 0x32 - (int)LZCOUNT(uVar31);
                    }
                    iVar62 = *(int *)(*(long *)((long)register0x00000008 + -0x100) + 0xd4);
                    lVar54 = *(long *)(*(long *)((long)register0x00000008 + -0x100) + 0x98);
                    iVar56 = *(int *)(lVar54 + (ulong)uVar37 * 4) + 1;
                    uVar36 = (uint)LZCOUNT(iVar56);
                    iVar59 = iVar62 + -0x1f00;
                    iVar56 = (iVar59 - ((uint)(iVar56 * 0x100) >> (ulong)(~uVar36 & 0x1f))) +
                             (uVar36 + (byte)(&UNK_01ade1b8)[uVar37]) * 0x100;
                    if (uVar35 != 0x20000) {
                      if (0x3f < uVar35) goto LAB_002e4a18;
                      uVar37 = (uint)(byte)(&UNK_01ade1dc)[uVar35];
                      goto LAB_002e4a24;
                    }
                    iVar59 = *(int *)(lVar54 + 0x8c) + 1;
                    uVar37 = (uint)LZCOUNT(iVar59);
                    uVar37 = iVar30 + (iVar56 - (((iVar62 + uVar37 * 0x100) -
                                                 ((uint)(iVar59 * 0x100) >> (ulong)(~uVar37 & 0x1f))
                                                 ) + -0xe00));
                    pqVar55 = (qword *)(ulong)uVar37;
                    puVar51 = (uint *)(piVar26 + (long)pqVar53 * 7);
                    pqVar27 = (qword *)(ulong)*puVar51;
                    if ((int)*puVar51 < (int)uVar37) goto LAB_002e4ac8;
                  }
LAB_002e4bcc:
                  uVar37 = puVar51[1];
                  uVar36 = puVar51[2];
                  uVar39 = puVar51[3];
                  uVar33 = *(undefined8 *)(piVar42 + 3);
                  *(undefined8 *)(puVar51 + 5) = *(undefined8 *)(piVar42 + 5);
                  *(undefined8 *)(puVar51 + 3) = uVar33;
                  uVar33 = *(undefined8 *)piVar42;
                  *(undefined8 *)(puVar51 + 2) = *(undefined8 *)(piVar42 + 2);
                  *(undefined8 *)puVar51 = uVar33;
/* no support for modified copies */
                  puVar51[3] = uVar31;
                  *puVar51 = (uint)pqVar55;
                  if (uVar39 == 0) {
                    lVar54 = *(long *)((long)register0x00000008 + -0x100);
                    if (*(int *)(lVar54 + 0xe0) != 1) {
                      iVar56 = *(int *)(lVar54 + 0xd4);
                      piVar42 = *(int **)(lVar54 + 0x98);
                      uVar25 = (uint)LZCOUNT(piVar42[1] + 1);
                      uVar39 = (uint)((piVar42[1] + 1) * 0x100) >> (ulong)(~uVar25 & 0x1f);
                      iVar30 = iVar56 + -0x1f00;
                      uVar22 = (iVar30 + uVar25 * 0x100) - uVar39;
                      pqVar19 = (qword *)(ulong)uVar22;
                      uVar44 = (uint)LZCOUNT(*piVar42 + 1);
                      uVar38 = (uint)((*piVar42 + 1) * 0x100) >> (ulong)(~uVar44 & 0x1f);
                      uVar21 = (iVar30 + uVar44 * 0x100) - uVar38;
                      unaff_x26 = (qword *)(ulong)uVar21;
                      if ((int)uVar22 < (int)uVar21) {
                        pqVar19 = *(qword **)((long)register0x00000008 + -0x118);
                        if (pqVar50 < pqVar19) {
                          lVar54 = *(long *)((long)register0x00000008 + -0x100);
                          if (*(int *)(lVar54 + 0xf0) == 2) {
                            iVar59 = (int)pqVar27 + 0x800;
                            pqVar19 = &section_000007d8.size;
                            if (uVar35 == 0x1fffe) goto LAB_002e4d00;
LAB_002e4c80:
                            uVar35 = uVar35 + 2;
                            if (uVar35 < 0x40) {
                              uVar35 = (uint)(byte)(&UNK_01ade1dc)[uVar35];
                            }
                            else {
                              uVar35 = 0x32 - (int)LZCOUNT(uVar35);
                            }
                            uVar22 = (uint)LZCOUNT(piVar42[uVar35] + 1);
/* wm:proprietary - see LICENSE - do not sell */
                            unaff_x26 = (qword *)(ulong)((iVar30 - ((uint)((piVar42[uVar35] + 1) *
                                                                          0x100) >>
                                                                   (ulong)(~uVar22 & 0x1f))) +
                                                        (uVar22 + (byte)(&UNK_01ade1b8)[uVar35]) *
                                                        0x100);
                            if (uVar31 != 0x20000) {
                              if (0x3f < uVar31) goto LAB_002e4d24;
                              uVar35 = (uint)(byte)(&UNK_01ade1dc)[uVar31];
                              goto LAB_002e4d30;
                            }
                            uVar35 = (uint)LZCOUNT(piVar42[0x23] + 1);
                            iVar30 = (((uint)((piVar42[0x23] + 1) * 0x100) >>
                                      (ulong)(~uVar35 & 0x1f)) - (iVar56 + uVar35 * 0x100)) + 0xe00;
                          }
                          else {
                            iVar59 = *(int *)(*(long *)(lVar54 + 0x90) + (ulong)(byte)*pqVar50 * 4)
                                     + 1;
                            uVar22 = (uint)LZCOUNT(iVar59);
                            uVar22 = ((uint)(iVar59 * 0x100) >> (ulong)(~uVar22 & 0x1f)) +
                                     (0x1f - uVar22) * 0x100;
                            uVar21 = 0x100;
                            if (uVar22 <= *(int *)(lVar54 + 0xd0) - 0x100U) {
                              uVar21 = *(int *)(lVar54 + 0xd0) - uVar22;
                            }
                            pqVar19 = (qword *)(ulong)uVar21;
                            iVar59 = uVar21 + (int)pqVar27;
                            if (uVar35 != 0x1fffe) goto LAB_002e4c80;
LAB_002e4d00:
                            uVar35 = (uint)LZCOUNT(piVar42[0x23] + 1);
                            unaff_x26 = (qword *)(ulong)(((iVar56 + uVar35 * 0x100) -
                                                         ((uint)((piVar42[0x23] + 1) * 0x100) >>
                                                         (ulong)(~uVar35 & 0x1f))) - 0xe00);
LAB_002e4d24:
                            uVar35 = 0x32 - (int)LZCOUNT(uVar31);
LAB_002e4d30:
                            uVar22 = (uint)LZCOUNT(piVar42[uVar35] + 1);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                            iVar30 = ((uint)((piVar42[uVar35] + 1) * 0x100) >>
                                     (ulong)(~uVar22 & 0x1f)) -
                                     (iVar30 + (uVar22 + (byte)(&UNK_01ade1b8)[uVar35]) * 0x100);
                          }
                          iVar56 = (iVar59 - uVar39) + uVar38 + (uVar25 - uVar44) * 0x100;
                          if (iVar56 < (int)((int)pqVar19 + (uint)pqVar55 + (int)unaff_x26 + iVar30)
                             ) {
                            uVar35 = iVar58 + 1;
                            piVar42 = piVar26 + (ulong)uVar35 * 7;
                            if (iVar56 < *piVar42) {
                              uVar39 = iVar58 - uVar36;
                              iVar30 = piVar26[(ulong)uVar39 * 7 + 3];
                              *(undefined8 *)((long)register0x00000008 + -0xa0) =
                                   *(undefined8 *)(piVar26 + (ulong)uVar39 * 7 + 4);
                              *(int *)((long)register0x00000008 + -0x98) =
                                   piVar26[(ulong)uVar39 * 7 + 6];
                              if (uVar37 < 4) {
                                uVar39 = uVar37;
                                if (iVar30 == 0) {
                                  uVar39 = uVar37 + 1;
                                }
                                uVar39 = uVar39 - 1;
                                if (uVar39 == 3) {
                                  iVar30 = *(int *)((long)register0x00000008 + -0xa0);
                                  iVar59 = iVar30 + -1;
LAB_002e4e8c:
                                  piVar41 = (int *)((long)register0x00000008 + -0x98);
                                  if (uVar39 != 1) {
                                    piVar41 = (int *)((ulong)((long)register0x00000008 + -0xa0) | 4)
                                    ;
/*  unlicensed copy if this notice is missing  */
                                  }
                                  iVar62 = *piVar41;
                                  *(int *)((long)register0x00000008 + -0x9c) = iVar30;
                                  goto LAB_002e4ea4;
                                }
                                if (uVar39 != 0) {
                                  iVar59 = *(int *)((long)register0x00000008 +
                                                   (ulong)uVar39 * 4 + -0xa0);
                                  iVar30 = *(int *)((long)register0x00000008 + -0xa0);
                                  goto LAB_002e4e8c;
                                }
                                iVar62 = *(int *)((long)register0x00000008 + -0x98);
                              }
                              else {
                                iVar62 = *(int *)((long)register0x00000008 + -0x9c);
                                *(undefined4 *)((long)register0x00000008 + -0x9c) =
                                     *(undefined4 *)((long)register0x00000008 + -0xa0);
/* do not claim this as your own */
                                iVar59 = uVar37 - 3;
LAB_002e4ea4:
                                *(int *)((long)register0x00000008 + -0xa0) = iVar59;
                              }
                              *(undefined8 *)(piVar42 + 4) =
                                   *(undefined8 *)((long)register0x00000008 + -0xa0);
                              piVar42[6] = iVar62;
                              piVar42[2] = uVar36;
                              piVar42[3] = 1;
                              *piVar42 = iVar56;
                              piVar42[1] = uVar37;
                              uVar37 = (uint)pqVar16;
                              if ((uint)pqVar16 <= uVar35) {
                                uVar37 = uVar35;
                              }
                              pqVar16 = (qword *)(ulong)uVar37;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar31 == 0) {
                  uVar35 = puVar51[1];
                  uVar37 = iVar58 - puVar51[2];
                  iVar30 = piVar26[(ulong)uVar37 * 7 + 3];
                  *(undefined8 *)((long)register0x00000008 + -0xa0) =
                       *(undefined8 *)(piVar26 + (ulong)uVar37 * 7 + 4);
                  *(int *)((long)register0x00000008 + -0x98) = piVar26[(ulong)uVar37 * 7 + 6];
                  if (uVar35 < 4) {
                    if (iVar30 == 0) {
                      uVar35 = uVar35 + 1;
                    }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    uVar35 = uVar35 - 1;
                    if (uVar35 == 3) {
                      iVar30 = *(int *)((long)register0x00000008 + -0xa0);
                      iVar56 = iVar30 + -1;
LAB_002e4f4c:
                      puVar34 = (uint *)((long)register0x00000008 + -0x98);
                      if (uVar35 != 1) {
                        puVar34 = (uint *)((ulong)((long)register0x00000008 + -0xa0) | 4);
                      }
                      uVar37 = *puVar34;
                      *(int *)((long)register0x00000008 + -0x9c) = iVar30;
                      goto LAB_002e4f64;
                    }
                    if (uVar35 != 0) {
                      iVar56 = *(int *)((long)register0x00000008 + (ulong)uVar35 * 4 + -0xa0);
                      iVar30 = *(int *)((long)register0x00000008 + -0xa0);
                      goto LAB_002e4f4c;
                    }
                    uVar37 = *(uint *)((long)register0x00000008 + -0x98);
                  }
                  else {
                    uVar37 = *(uint *)((long)register0x00000008 + -0x9c);
                    *(undefined4 *)((long)register0x00000008 + -0x9c) =
                         *(undefined4 *)((long)register0x00000008 + -0xa0);
                    iVar56 = uVar35 - 3;
LAB_002e4f64:
                    *(int *)((long)register0x00000008 + -0xa0) = iVar56;
                  }
                  *(undefined8 *)(puVar51 + 4) = *(undefined8 *)((long)register0x00000008 + -0xa0);
                  puVar51[6] = uVar37;
                  puVar34 = *(uint **)((long)register0x00000008 + -0x110);
                }
/* unlicensed copy if this notice is missing - github.com/pengussy */
                else {
                  puVar34 = *(uint **)((long)register0x00000008 + -0x110);
                }
                pqVar20 = pqVar50;
                if (pqVar50 <= puVar34) {
                  if (iVar58 == (int)pqVar16) {
                    pqVar50 = pqVar27;
                    pqVar55 = pqVar53;
                    break;
                  }
                  lVar54 = *(long *)((long)register0x00000008 + -0x100);
                  iVar30 = *(int *)(lVar54 + 0xe0);
                  *(int *)((long)register0x00000008 + -0x130) = (int)pqVar55;
                  if (iVar30 == 1) {
                    iVar30 = 0x100;
                  }
                  else {
                    iVar30 = **(int **)(lVar54 + 0x98) + 1;
                    uVar35 = (uint)LZCOUNT(iVar30);
                    iVar30 = ((*(int *)(lVar54 + 0xd4) + uVar35 * 0x100) -
                             ((uint)(iVar30 * 0x100) >> (ulong)(~uVar35 & 0x1f))) + -0x1f00;
                  }
                  *(int *)((long)register0x00000008 + -0x134) = iVar30;
                  param_5 = *(qword **)((long)register0x00000008 + -0xf0);
// WM - thanks for reading - discord.gg/sdkhDjTex
                  uVar33 = *(undefined8 *)((long)register0x00000008 + -0x118);
                  uVar14 = (**(code **)((long)register0x00000008 + -0x128))
                                     (param_5,lVar54,
                                      (undefined1 *)((long)register0x00000008 + -0xa4),pqVar50,
                                      uVar33,puVar51 + 4,uVar31 == 0,
                                      *(undefined8 *)((long)register0x00000008 + -0xf8));
                  *(undefined4 *)((long)register0x00000008 + -0xa0) = uVar14;
                  pqVar20 = (qword *)(ulong)(uint)((int)pqVar50 -
                                                  (int)*(undefined8 *)
                                                        ((long)register0x00000008 + -0x120));
                  unaff_x26 = (qword *)(ulong)(uint)((int)uVar33 - (int)pqVar50);
                  pqVar19 = (qword *)((long)register0x00000008 + -0xa0);
                  func_0x002e6cd8((undefined1 *)((long)register0x00000008 + -0xe0),param_5);
                  uVar31 = *(uint *)((long)register0x00000008 + -0xa0);
                  if (uVar31 == 0) {
                    puVar40 = *(uint **)((long)register0x00000008 + -0x158);
                    pqVar27 = pqVar50;
                  }
                  else {
                    uVar37 = *(dword *)((long)param_5 + ((ulong)(uVar31 - 1) * 2 + 1) * 4);
                    pqVar55 = (qword *)(ulong)(uVar37 + iVar58);
                    puVar40 = *(uint **)((long)register0x00000008 + -0x158);
                    if (((*(uint *)((long)register0x00000008 + -0x14c) < uVar37) ||
                        (0xfff < uVar37 + iVar58)) ||
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                       (*(undefined **)((long)register0x00000008 + -0x118) <=
                        (undefined *)((long)pqVar50 + (ulong)uVar37))) {
                      if (uVar37 == 0) goto LAB_002e58dc;
                      uVar31 = *(uint *)(*(long *)((long)register0x00000008 + -0xf0) +
                                        (ulong)(uVar31 - 1) * 8);
                      pqVar23 = *(qword **)((long)register0x00000008 + -0x160);
                      pqVar27 = *(qword **)((long)register0x00000008 + -0x140);
                      pqVar46 = *(qword **)((long)register0x00000008 + -0x108);
                      goto LAB_002e53ec;
                    }
                    uVar49 = 0;
                    iVar30 = *(int *)((long)register0x00000008 + -0x134);
                    iVar56 = *(int *)((long)register0x00000008 + -0x130);
                    do {
                      puVar51 = (uint *)(*(long *)((long)register0x00000008 + -0xf0) + uVar49 * 8);
                      uVar35 = (uint)*(undefined8 *)((long)register0x00000008 + -0xf8);
                      if (uVar49 != 0) {
                        uVar35 = puVar51[-1] + 1;
                      }
                      uVar37 = puVar51[1];
                      if (uVar35 <= uVar37) {
                        uVar36 = *puVar51;
                        uVar39 = 0x1f - (int)LZCOUNT(uVar36);
                        lVar54 = *(long *)((long)register0x00000008 + -0x100);
                        if (*(int *)(lVar54 + 0xe0) == 1) {
                          iVar59 = 0;
                          uVar38 = iVar58 + uVar37;
                          uVar22 = uVar38;
                          do {
                            uVar21 = (uint)LZCOUNT(uVar37 - 2);
                            iVar62 = ((uVar37 - 2) * 0x100 >> (ulong)(~uVar21 & 0x1f)) +
                                     ((0x1f - uVar21) + uVar39) * 0x100 + iVar30 + iVar56 + 0x1000;
                            puVar51 = (uint *)(ulong)(uVar37 + iVar58);
                            if ((uint)pqVar16 < uVar37 + iVar58) {
                              pqVar27 = (qword *)((ulong)pqVar16 & 0xffffffff);
                              pqVar19 = (qword *)((ulong)(uVar38 - iVar59) - (long)pqVar27);
// stripping the watermark breaks the license
                              if ((uint *)((long)&MACH_HEADER.magic + 3) < pqVar19) {
                                pqVar20 = (qword *)((ulong)pqVar19 & 0xfffffffffffffffc);
                                pqVar16 = (qword *)((long)pqVar20 + (long)pqVar27);
                                uVar43 = (ulong)uVar22 - (long)pqVar27 & 0xfffffffffffffffc;
                                puVar24 = (undefined4 *)
                                          (*(long *)((long)register0x00000008 + -0xe8) +
                                          (long)pqVar27 * 0x1c);
                                do {
                                  puVar24[-10] = 0x40000000;
                                  puVar24[-3] = 0x40000000;
                                  puVar24[4] = 0x40000000;
                                  puVar24[0xb] = 0x40000000;
                                  puVar24[-7] = 1;
                                  *puVar24 = 1;
                                  puVar24[7] = 1;
                                  puVar24[0xe] = 1;
                                  puVar24 = puVar24 + 0x1c;
                                  uVar43 = uVar43 - 4;
                                } while (uVar43 != 0);
                                unaff_x26 = (qword *)0x0;
                                if (pqVar19 == pqVar20) goto LAB_002e50e0;
                              }
                              else {
                                pqVar16 = pqVar27;
                              }
                              pqVar27 = (qword *)(puVar40 + (long)pqVar16 * 7);
                              do {
                                pqVar16 = (qword *)((long)pqVar16 + 1);
/* wm:if you paid for this, you were scammed */
                                *(uint *)((long)pqVar27 + -0xc) = 0x40000000;
                                pqVar19 = (qword *)((long)pqVar27 + 0x1c);
                                *(uint *)pqVar27 = 1;
                                pqVar27 = pqVar19;
                              } while (pqVar16 < puVar51);
LAB_002e50e0:
                              piVar42 = piVar26 + (long)puVar51 * 7;
                              piVar42[2] = uVar37;
                              piVar42[3] = 0;
                              *piVar42 = iVar62;
                              piVar42[1] = uVar36;
                            }
                            else {
                              pqVar19 = (qword *)(ulong)(uint)piVar26[(long)puVar51 * 7];
                              if (iVar62 < piVar26[(long)puVar51 * 7]) goto LAB_002e50e0;
                            }
                            uVar37 = uVar37 - 1;
                            iVar59 = iVar59 + 1;
                            uVar22 = uVar22 - 1;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                          } while (uVar35 <= uVar37);
                        }
                        else {
                          iVar59 = 0;
                          iVar62 = *(int *)(lVar54 + 0xd8);
                          iVar5 = *(int *)(lVar54 + 0xdc);
                          lVar28 = *(long *)(lVar54 + 0xa0);
                          lVar54 = *(long *)(lVar54 + 0xa8);
                          uVar38 = iVar58 + uVar37;
                          pqVar19 = (qword *)(ulong)uVar38;
                          pqVar20 = pqVar19;
                          do {
                            uVar22 = uVar37 - 3;
                            if (uVar22 < 0x80) {
                              uVar22 = (uint)(byte)(&UNK_01ade251)[uVar22];
                            }
                            else {
                              uVar22 = 0x43 - (int)LZCOUNT(uVar22);
                            }
                            iVar7 = *(int *)(lVar54 + (ulong)uVar39 * 4) + 1;
                            uVar21 = (uint)LZCOUNT(iVar7);
                            pqVar50 = (qword *)(ulong)(byte)(&UNK_01ade21c)[uVar22];
                            iVar2 = *(int *)(lVar28 + (ulong)uVar22 * 4) + 1;
                            uVar25 = (uint)LZCOUNT(iVar2);
                            uVar22 = iVar30 + iVar56 +
                                     (((iVar5 + iVar62 + 0x33) -
                                      ((uint)(iVar7 * 0x100) >> (ulong)(~uVar21 & 0x1f))) -
                                     ((uint)(iVar2 * 0x100) >> (ulong)(~uVar25 & 0x1f))) +
                                     ((uVar21 - (int)LZCOUNT(uVar36)) +
                                      (uint)(byte)(&UNK_01ade21c)[uVar22] + uVar25 + 0xffffe1) *
                                     0x100;
                            unaff_x26 = (qword *)(ulong)uVar22;
// WM - no support for modified copies
                            puVar51 = (uint *)(ulong)(uVar37 + iVar58);
                            if ((uint)pqVar16 < uVar37 + iVar58) {
                              pqVar50 = (qword *)((ulong)pqVar16 & 0xffffffff);
                              uVar43 = (ulong)(uVar38 - iVar59) - (long)pqVar50;
                              if (uVar43 < 4) {
                                pqVar16 = pqVar50;
                              }
                              else {
                                pqVar16 = (qword *)((uVar43 & 0xfffffffffffffffc) + (long)pqVar50);
                                uVar52 = (long)pqVar20 - (long)pqVar50 & 0xfffffffffffffffc;
                                pqVar50 = (qword *)(*(long *)((long)register0x00000008 + -0xe8) +
                                                   (long)pqVar50 * 0x1c);
                                do {
                                  psVar1 = (section *)(pqVar50 + -5);
                                  psVar1->sectname[0] = '\0';
                                  psVar1->sectname[1] = '\0';
                                  psVar1->sectname[2] = '\0';
                                  psVar1->sectname[3] = '@';
                                  *(uint *)((long)pqVar50 + -0xc) = 0x40000000;
                                  *(uint *)(pqVar50 + 2) = 0x40000000;
                                  *(uint *)((long)pqVar50 + 0x2c) = 0x40000000;
                                  ((mach_header *)((long)pqVar50 + -0x1c))->magic = 1;
                                  *(uint *)pqVar50 = 1;
                                  *(uint *)((long)pqVar50 + 0x1c) = 1;
                                  *(uint *)(pqVar50 + 7) = 1;
                                  pqVar50 = pqVar50 + 0xe;
                                  uVar52 = uVar52 - 4;
                                } while (uVar52 != 0);
                                if (uVar43 == (uVar43 & 0xfffffffffffffffc)) goto LAB_002e51f0;
// WM - donate: donate/README.md
                              }
                              puVar34 = puVar40 + (long)pqVar16 * 7;
                              do {
                                pqVar16 = (qword *)((long)pqVar16 + 1);
                                puVar34[-3] = 0x40000000;
                                *puVar34 = 1;
                                puVar34 = puVar34 + 7;
                              } while (pqVar16 < puVar51);
LAB_002e51f0:
                              puVar51 = (uint *)(piVar26 + (long)puVar51 * 7);
                              puVar51[2] = uVar37;
                              puVar51[3] = 0;
                              *puVar51 = uVar22;
                              puVar51[1] = uVar36;
                            }
                            else if ((int)uVar22 < piVar26[(long)puVar51 * 7]) goto LAB_002e51f0;
                            uVar37 = uVar37 - 1;
                            iVar59 = iVar59 + 1;
/* WM - more drops soon - github.com/pengussy */
                            pqVar20 = (qword *)(ulong)((int)pqVar20 - 1);
                          } while (uVar35 <= uVar37);
                        }
                      }
                      uVar49 = uVar49 + 1;
                    } while (uVar49 != uVar31);
                    piVar26[(ulong)((int)pqVar16 + 1) * 7] = 0x40000000;
                    pqVar27 = pqVar50;
                  }
                }
                pqVar53 = (qword *)(ulong)(iVar58 + 1U);
                pqVar50 = pqVar27;
                pqVar55 = pqVar16;
              } while (iVar58 + 1U <= (uint)pqVar16);
            }
            param_5 = (qword *)0xffffe100;
            piVar42 = piVar26 + ((ulong)pqVar55 & 0xffffffff) * 7;
            uVar31 = piVar42[1];
            *(int *)((long)register0x00000008 + -0x164) = *piVar42;
            uVar37 = piVar42[2];
            iVar30 = piVar42[3];
            iVar56 = piVar42[6];
            *(undefined8 *)((long)register0x00000008 + -0x90) = *(undefined8 *)(piVar42 + 4);
            *(int *)((long)register0x00000008 + -0x88) = iVar56;
            if (uVar37 == 0) {
/* WM - stripping the watermark breaks the license */
LAB_002e58dc:
              pqVar27 = *(qword **)((long)register0x00000008 + -0x140);
              lVar54 = *(long *)((long)register0x00000008 + -0x100);
              pqVar46 = (qword *)(*(long *)((long)register0x00000008 + -0x108) +
                                 ((ulong)pqVar55 & 0xffffffff));
              unaff_x27 = (qword *)((long)&MACH_HEADER.reserved + 3);
              goto LAB_002e45f8;
            }
            uVar35 = (int)pqVar55 - uVar37;
            pqVar53 = (qword *)(ulong)uVar35;
            pqVar27 = *(qword **)((long)register0x00000008 + -0x140);
            pqVar46 = *(qword **)((long)register0x00000008 + -0x108);
            if (iVar30 == 0) {
              pqVar23 = *(qword **)((long)register0x00000008 + -0x160);
              pqVar16 = pqVar55;
LAB_002e53ec:
              uVar35 = piVar26[(long)pqVar53 * 7 + 3];
              goto LAB_002e53f4;
            }
            uVar33 = *(undefined8 *)(piVar42 + 4);
/* WM - origin: github.com/pengussy */
            puVar29 = *(undefined8 **)((long)register0x00000008 + -0x148);
            *(int *)(puVar29 + 1) = piVar42[6];
            *puVar29 = uVar33;
            pqVar53 = (qword *)(ulong)(uVar35 - iVar30);
            pqVar23 = *(qword **)((long)register0x00000008 + -0x160);
          }
          uVar35 = (int)pqVar53 + 2;
          piVar41 = piVar26 + (ulong)uVar35 * 7;
          *piVar41 = *(int *)((long)register0x00000008 + -0x164);
          piVar41[1] = uVar31;
          *(undefined8 *)(piVar41 + 4) = *(undefined8 *)((long)register0x00000008 + -0x90);
          piVar41[6] = *(int *)((long)register0x00000008 + -0x88);
          piVar42 = piVar26 + (long)pqVar53 * 7;
          uVar33 = *(undefined8 *)piVar42;
          iVar30 = piVar42[2];
          iVar56 = piVar42[3];
          piVar41[2] = uVar37;
          piVar41[3] = iVar56;
          uVar31 = uVar35;
          if (iVar30 == 0) {
LAB_002e5558:
            unaff_x26 = *(qword **)((long)register0x00000008 + -0x178);
            lVar54 = *(long *)((long)register0x00000008 + -0x100);
            do {
              while( true ) {
                uVar37 = piVar26[(ulong)uVar31 * 7 + 2];
                uVar36 = piVar26[(ulong)uVar31 * 7 + 3];
                uVar49 = (ulong)uVar36;
                if (uVar37 == 0) break;
                iVar30 = piVar26[(ulong)uVar31 * 7 + 1];
                if (*(int *)(lVar54 + 0xf0) != 2) {
                  if (uVar36 != 0) {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                    lVar28 = *(long *)(lVar54 + 0x90);
                    if (uVar36 == 1) {
                      uVar43 = 0;
                    }
                    else {
                      uVar43 = 0;
                      pbVar47 = (byte *)((long)pqVar27 + 1);
                      do {
                        *(int *)(lVar28 + (ulong)pbVar47[-1] * 4) =
                             *(int *)(lVar28 + (ulong)pbVar47[-1] * 4) + 2;
                        *(int *)(lVar28 + (ulong)*pbVar47 * 4) =
                             *(int *)(lVar28 + (ulong)*pbVar47 * 4) + 2;
                        uVar43 = uVar43 + 2;
                        pbVar47 = pbVar47 + 2;
                      } while ((uVar49 & 0xfffffffe) != uVar43);
                    }
                    if ((uVar36 & 1) != 0) {
                      *(int *)(lVar28 + (ulong)*(byte *)((long)pqVar27 + uVar43) * 4) =
                           *(int *)(lVar28 + (ulong)*(byte *)((long)pqVar27 + uVar43) * 4) + 2;
                    }
                  }
                  *(uint *)(lVar54 + 0xc0) = *(int *)(lVar54 + 0xc0) + uVar36 * 2;
                }
                if (uVar36 < 0x40) {
                  uVar39 = (uint)(byte)(&UNK_01ade1dc)[uVar49];
                }
                else {
                  uVar39 = 0x32 - (int)LZCOUNT(uVar36);
                }
                *(int *)(*(long *)(lVar54 + 0x98) + (ulong)uVar39 * 4) =
                     *(int *)(*(long *)(lVar54 + 0x98) + (ulong)uVar39 * 4) + 1;
                *(int *)(lVar54 + 0xc4) = *(int *)(lVar54 + 0xc4) + 1;
                uVar39 = 0x1f - (int)LZCOUNT(iVar30);
                *(int *)(*(long *)(lVar54 + 0xa8) + (ulong)uVar39 * 4) =
                     *(int *)(*(long *)(lVar54 + 0xa8) + (ulong)uVar39 * 4) + 1;
/* do not claim this as your own - github.com/pengussy */
                *(int *)(lVar54 + 0xcc) = *(int *)(lVar54 + 0xcc) + 1;
                uVar39 = uVar37 - 3;
                if (uVar39 < 0x80) {
                  uVar39 = (uint)(byte)(&UNK_01ade251)[uVar39];
                }
                else {
                  uVar39 = 0x43 - (int)LZCOUNT(uVar39);
                }
                *(int *)(*(long *)(lVar54 + 0xa0) + (ulong)uVar39 * 4) =
                     *(int *)(*(long *)(lVar54 + 0xa0) + (ulong)uVar39 * 4) + 1;
                *(int *)(lVar54 + 200) = *(int *)(lVar54 + 200) + 1;
                pqVar16 = (qword *)unaff_x26[3];
                puVar51 = (uint *)((long)pqVar27 + uVar49);
                uVar9 = (undefined2)uVar36;
                if (pqVar23 < puVar51) {
                  pqVar46 = pqVar27;
                  if (pqVar27 <= pqVar23) {
                    pqVar4 = (qword *)((long)pqVar16 + ((long)pqVar23 - (long)pqVar27));
                    qVar57 = *pqVar27;
                    pqVar53 = pqVar16 + 2;
                    pqVar16[1] = pqVar27[1];
                    *pqVar16 = qVar57;
                    pqVar16 = pqVar4;
                    pqVar46 = pqVar23;
                    if (0x10 < (ulong)((long)pqVar23 - (long)pqVar27)) {
                      pqVar10 = pqVar27;
                      do {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
                        qVar57 = pqVar10[2];
                        pqVar53[1] = pqVar10[3];
                        *pqVar53 = qVar57;
                        qVar57 = pqVar10[4];
                        pqVar53[3] = pqVar10[5];
                        pqVar53[2] = qVar57;
                        pqVar53 = pqVar53 + 4;
                        pqVar10 = pqVar10 + 4;
                      } while (pqVar53 < pqVar4);
                    }
                  }
                  if (pqVar46 < puVar51) {
                    puVar34 = (uint *)((long)pqVar27 + (uVar49 - (long)pqVar46));
                    if ((&MACH_HEADER.cpusubtype <= puVar34) &&
                       (0x3f < (ulong)((long)pqVar16 - (long)pqVar46))) {
                      if ((uint *)((long)&segment_command_00000020.vmaddr + 7) < puVar34) {
/* WM - no support for modified copies */
                        puVar18 = (uint *)((ulong)puVar34 & 0xffffffffffffffc0);
                        pdVar15 = (dword *)(pqVar46 + 4);
                        puVar17 = puVar18;
                        pqVar19 = pqVar16 + 4;
                        do {
                          qVar57 = *(qword *)(pdVar15 + -8);
                          qVar64 = *(qword *)(pdVar15 + -2);
                          qVar61 = *(qword *)(pdVar15 + -4);
                          qVar66 = *(qword *)(pdVar15 + 2);
                          qVar65 = *(qword *)pdVar15;
                          qVar68 = *(qword *)(pdVar15 + 6);
                          qVar67 = *(qword *)(pdVar15 + 4);
                          pqVar19[-3] = *(qword *)(pdVar15 + -6);
                          pqVar19[-4] = qVar57;
                          pqVar19[-1] = qVar64;
                          pqVar19[-2] = qVar61;
                          pqVar19[1] = qVar66;
                          *pqVar19 = qVar65;
                          pqVar19[3] = qVar68;
                          pqVar19[2] = qVar67;
                          puVar17 = puVar17 + -0x10;
                          pdVar15 = pdVar15 + 0x10;
                          pqVar19 = pqVar19 + 8;
                        } while (puVar17 != (uint *)0x0);
                        pqVar19 = (qword *)0x0;
                        if (puVar34 == puVar18) goto LAB_002e5848;
                        if (((ulong)puVar34 & 0x38) == 0) {
                          pqVar16 = (qword *)((long)pqVar16 + (long)puVar18);
                          pqVar46 = (qword *)((long)pqVar46 + (long)puVar18);
/* WM - unlicensed copy if this notice is missing */
                          goto LAB_002e5838;
                        }
                      }
                      else {
                        puVar18 = (uint *)0x0;
                      }
                      pqVar19 = (qword *)((ulong)puVar34 & 0xfffffffffffffff8);
                      lVar28 = (long)puVar18 - (long)pqVar19;
                      puVar29 = (undefined8 *)((long)pqVar16 + (long)puVar18);
                      puVar48 = (undefined8 *)((long)pqVar46 + (long)puVar18);
                      do {
                        *puVar29 = *puVar48;
                        lVar28 = lVar28 + 8;
                        puVar29 = puVar29 + 1;
                        puVar48 = puVar48 + 1;
                      } while (lVar28 != 0);
                      pqVar20 = (qword *)0x0;
                      pqVar46 = (qword *)((long)pqVar46 + (long)pqVar19);
                      pqVar16 = (qword *)((long)pqVar16 + (long)pqVar19);
                      if ((qword *)puVar34 == pqVar19) goto LAB_002e5848;
                    }
LAB_002e5838:
                    do {
                      pqVar53 = (qword *)((long)pqVar46 + 1);
/* WM - found on a paste site? it was re-uploaded illegally */
                      *(char *)pqVar16 = (char)*pqVar46;
                      pqVar46 = pqVar53;
                      pqVar16 = (qword *)((long)pqVar16 + 1);
                    } while (pqVar53 != (qword *)puVar51);
                  }
LAB_002e5848:
                  unaff_x26[3] = unaff_x26[3] + uVar49;
                  piVar42 = (int *)unaff_x26[1];
                  if (uVar36 < 0x10000) {
                    *(undefined2 *)(piVar42 + 1) = uVar9;
                    *piVar42 = iVar30;
                  }
                  else {
                    *(uint *)(unaff_x26 + 9) = 1;
                    *(uint *)((long)unaff_x26 + 0x4c) = (uint)((long)piVar42 - *unaff_x26 >> 3);
                    *(undefined2 *)(piVar42 + 1) = uVar9;
                    *piVar42 = iVar30;
                  }
                }
                else {
                  qVar57 = *pqVar27;
                  pqVar16[1] = pqVar27[1];
                  *pqVar16 = qVar57;
                  if (0x10 < uVar36) {
// WM - reversing this took months of machine time
                    lVar28 = unaff_x26[3];
                    uVar33 = pqVar27[2];
                    *(qword *)(lVar28 + 0x18) = pqVar27[3];
                    *(undefined8 *)(lVar28 + 0x10) = uVar33;
                    if (0x10 < uVar36 - 0x10) {
                      puVar29 = (undefined8 *)(lVar28 + 0x20);
                      puVar51 = (uint *)(pqVar27 + 6);
                      do {
                        uVar33 = *(undefined8 *)(puVar51 + -4);
                        puVar29[1] = *(undefined8 *)(puVar51 + -2);
                        *puVar29 = uVar33;
                        uVar33 = *(undefined8 *)puVar51;
                        puVar29[3] = *(undefined8 *)(puVar51 + 2);
                        puVar29[2] = uVar33;
                        puVar29 = puVar29 + 4;
                        puVar51 = puVar51 + 8;
                      } while (puVar29 < (undefined8 *)(lVar28 + uVar49));
                      goto LAB_002e5848;
                    }
                  }
                  unaff_x26[3] = unaff_x26[3] + uVar49;
                  piVar42 = (int *)unaff_x26[1];
                  *(undefined2 *)(piVar42 + 1) = uVar9;
                  *piVar42 = iVar30;
                }
                if (0xffff < (ulong)uVar37 - 3) {
                  *(uint *)(unaff_x26 + 9) = 2;
/* wm:watermarked copy - do not remove */
                  *(uint *)((long)unaff_x26 + 0x4c) = (uint)((long)piVar42 - *unaff_x26 >> 3);
                }
                *(short *)((long)piVar42 + 6) = (short)uVar37 + -3;
                unaff_x26[1] = (qword)(piVar42 + 2);
                pqVar27 = (qword *)((long)pqVar27 + (ulong)(uVar37 + uVar36));
                uVar31 = uVar31 + 1;
                pqVar46 = pqVar27;
                if (uVar35 < uVar31) goto LAB_002e5518;
              }
              uVar31 = uVar31 + 1;
              pqVar46 = (qword *)((long)pqVar27 + uVar49);
            } while (uVar31 <= uVar35);
          }
          else {
            do {
              uVar31 = uVar31 - 1;
              piVar41 = piVar26 + (ulong)uVar31 * 7;
              *(undefined8 *)piVar41 = uVar33;
              piVar41[2] = iVar30;
              piVar41[3] = iVar56;
/* keep the notice, keep the source honest - github.com/pengussy */
              iVar58 = piVar26[(long)pqVar53 * 7 + 6];
              *(undefined8 *)(piVar41 + 4) = *(undefined8 *)(piVar26 + (long)pqVar53 * 7 + 4);
              piVar41[6] = iVar58;
              pqVar53 = (qword *)(ulong)(uint)((int)pqVar53 - (iVar30 + iVar56));
              piVar42 = piVar26 + (long)pqVar53 * 7;
              uVar33 = *(undefined8 *)piVar42;
              iVar30 = piVar42[2];
              iVar56 = piVar42[3];
              piVar41[3] = iVar56;
            } while (iVar30 != 0);
            if (uVar31 <= uVar35) goto LAB_002e5558;
            lVar54 = *(long *)((long)register0x00000008 + -0x100);
          }
LAB_002e5518:
          if (*(int *)(lVar54 + 0xf0) != 2) {
            iVar30 = *(int *)(lVar54 + 0xc0) + 1;
            uVar31 = (uint)LZCOUNT(iVar30);
            *(uint *)(lVar54 + 0xd0) =
                 ((uint)(iVar30 * 0x100) >> (ulong)(~uVar31 & 0x1f)) + (0x1f - uVar31) * 0x100;
          }
          iVar30 = *(int *)(lVar54 + 0xcc) + 1;
          uVar31 = (uint)LZCOUNT(iVar30);
          iVar56 = (int)*(undefined8 *)(lVar54 + 0xc4) + 1;
          iVar58 = (int)((ulong)*(undefined8 *)(lVar54 + 0xc4) >> 0x20) + 1;
          iVar59 = 0x1f - LZCOUNT(iVar56);
          iVar62 = 0x1f - LZCOUNT(iVar58);
          uVar33 = NEON_ushl(CONCAT44(iVar58 * 0x100,iVar56 * 0x100),CONCAT44(-iVar62,-iVar59),4);
          *(ulong *)(lVar54 + 0xd4) =
               CONCAT44(iVar62 * 0x100 + (int)((ulong)uVar33 >> 0x20),iVar59 * 0x100 + (int)uVar33);
          *(uint *)(lVar54 + 0xdc) =
               ((uint)(iVar30 * 0x100) >> (ulong)(~uVar31 & 0x1f)) + (0x1f - uVar31) * 0x100;
          unaff_x27 = (qword *)((long)&MACH_HEADER.reserved + 3);
        }
LAB_002e45f8:
/*  do not claim this as your own  */
        auVar69._8_8_ = pqVar55;
        auVar69._0_8_ = lVar54;
        pqVar16 = pqVar46;
      } while (pqVar46 < *(uint **)((long)register0x00000008 + -0x110));
      *(qword **)((long)register0x00000008 + -0x120) = pqVar27;
    }
    auVar13._8_8_ = puVar40;
    auVar13._0_8_ = piVar26;
    auVar12._8_8_ = puVar40;
    auVar12._0_8_ = piVar26;
    auVar11._8_8_ = puVar40;
    auVar11._0_8_ = piVar26;
    pqVar16 = auVar69._8_8_;
    unaff_x28 = auVar69._0_8_;
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x80)) {
      return *(long *)((long)register0x00000008 + -0x118) -
             *(long *)((long)register0x00000008 + -0x120);
    }
    auVar69 = ___stack_chk_fail();
    auVar69._8_8_ = auVar69._8_8_;
    lVar54 = auVar69._0_8_;
    *(qword **)((long)register0x00000008 + -0x1c0) = unaff_x24;
    *(qword **)((long)register0x00000008 + -0x1b8) = pqVar16;
    *(qword **)((long)register0x00000008 + -0x1b0) = pqVar45;
// donate: donate/README.md
    *(qword **)((long)register0x00000008 + -0x1a8) = pqVar50;
    *(uint **)((long)register0x00000008 + -0x1a0) = puVar40;
    *(int **)((long)register0x00000008 + -0x198) = piVar26;
    *(undefined1 **)((long)register0x00000008 + -400) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x188) = &DAT_002e5938;
    *(undefined8 *)((long)register0x00000008 + -0x1c8) =
         *(undefined8 *)PTR____stack_chk_guard_01f20200;
    if (*(int *)(lVar54 + 0xc4) == 0) {
      auVar11 = auVar12;
      if (auVar69._8_8_[1] == *auVar69._8_8_) {
        auVar11 = auVar13;
        if ((*(int *)(lVar54 + 0x18) == *(int *)(lVar54 + 0x1c) &&
            &MACH_HEADER.cpusubtype < unaff_x26) &&
            *(int *)(lVar54 + 0x18) == (int)pqVar20 - *(int *)(lVar54 + 8)) {
          *(qword *)((long)register0x00000008 + -0x1d8) = *pqVar19;
          *(uint *)((long)register0x00000008 + -0x1d0) = *(uint *)(pqVar19 + 1);
          FUN_002e4438(lVar54,auVar69._8_8_,(undefined1 *)((long)register0x00000008 + -0x1d8));
          func_0x0029d634(auVar69._8_8_);
          *(long *)(lVar54 + 8) = *(long *)(lVar54 + 8) - (long)unaff_x26;
          iVar30 = *(int *)(lVar54 + 0x18) + (int)unaff_x26;
          *(int *)(lVar54 + 0x18) = iVar30;
          *(int *)(lVar54 + 0x1c) = iVar30;
          *(int *)(lVar54 + 0x2c) = iVar30;
          pqVar50 = pqVar20;
          pqVar45 = unaff_x26;
          pqVar16 = pqVar19;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          auVar11 = auVar69;
        }
      }
    }
    lVar54 = FUN_002e4438(lVar54,auVar69._8_8_);
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x1c8)) {
      return lVar54;
    }
    auVar69 = ___stack_chk_fail();
    unaff_x23 = auVar69._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x250) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x248) = unaff_d8;
    *(qword **)((long)register0x00000008 + -0x240) = unaff_x28;
    *(qword **)((long)register0x00000008 + -0x238) = unaff_x27;
    *(qword **)((long)register0x00000008 + -0x230) = param_5;
    *(undefined8 *)((long)register0x00000008 + -0x228) = unaff_x25;
    *(qword **)((long)register0x00000008 + -0x220) = unaff_x24;
    *(qword **)((long)register0x00000008 + -0x218) = pqVar16;
    *(qword **)((long)register0x00000008 + -0x210) = pqVar45;
    *(qword **)((long)register0x00000008 + -0x208) = pqVar50;
    *(long *)((long)register0x00000008 + -0x200) = auVar11._8_8_;
    *(long *)((long)register0x00000008 + -0x1f8) = auVar11._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x1f0) =
         (undefined1 *)((long)register0x00000008 + -400);
    *(undefined **)((long)register0x00000008 + -0x1e8) = &DAT_002e5a34;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x1f0);
    *(qword **)((long)register0x00000008 + -0x308) = pqVar19;
    *(long *)((long)register0x00000008 + -0x330) = auVar69._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x260) =
         *(undefined8 *)PTR____stack_chk_guard_01f20200;
    *(qword **)((long)register0x00000008 + -0x310) = pqVar20;
    *(undefined **)((long)register0x00000008 + -0x2f8) =
         (undefined *)((long)pqVar20 + (long)unaff_x26);
    *(undefined **)((long)register0x00000008 + -0x2f0) =
         (undefined *)((long)pqVar20 + (long)unaff_x26) + -8;
    lVar54 = *(long *)(unaff_x23 + 8);
    uVar31 = *(uint *)(unaff_x23 + 0x18);
    uVar35 = *(uint *)(unaff_x23 + 0x110);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uVar49 = 0;
    if (2 < uVar35) {
      uVar49 = 3;
    }
    uVar37 = 3;
    if (uVar35 - 3 != 0) {
      uVar37 = 4;
    }
    *(ulong *)((long)register0x00000008 + -0x2d8) = (ulong)uVar37;
    if (0xfffffffc < uVar35 - 6) {
      uVar49 = (ulong)(uVar35 - 3);
    }
    *(undefined8 *)((long)register0x00000008 + -0x318) = *(undefined8 *)(&UNK_01dc1d78 + uVar49 * 8)
    ;
    unaff_x20 = (uint *)(lVar54 + (ulong)uVar31);
    uVar31 = *(uint *)(unaff_x23 + 0x114);
    if (0xffe < uVar31) {
      uVar31 = 0xfff;
    }
    *(uint *)((long)register0x00000008 + -0x328) = uVar31;
    *(undefined4 *)((long)register0x00000008 + -0x284) = *(undefined4 *)(unaff_x23 + 0x2c);
    unaff_x24 = *(qword **)(unaff_x23 + 0xb0);
    unaff_x19 = *(uint **)(unaff_x23 + 0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x268) = 0;
    puVar29 = *(undefined8 **)(unaff_x23 + 0x120);
    if (puVar29 == (undefined8 *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
// reversing this took months of machine time
      *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
    }
    else {
      uVar33 = *puVar29;
      uVar63 = puVar29[3];
      uVar60 = puVar29[2];
      *(undefined8 *)((long)register0x00000008 + -0x2b8) = puVar29[1];
      *(undefined8 *)((long)register0x00000008 + -0x2c0) = uVar33;
      *(undefined8 *)((long)register0x00000008 + -0x2a8) = uVar63;
      *(undefined8 *)((long)register0x00000008 + -0x2b0) = uVar60;
      *(undefined8 *)((long)register0x00000008 + -0x2a0) = puVar29[4];
    }
    *(undefined4 *)((long)register0x00000008 + -0x290) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x298) = 0;
    param_5 = unaff_x26;
    func_0x002e5e84((undefined1 *)((long)register0x00000008 + -0x2c0),0,unaff_x26);
    unaff_x21 = *(qword **)((long)register0x00000008 + -0x310);
    param_4 = (qword *)0x0;
    param_3 = unaff_x26;
/* origin: github.com/pengussy */
    func_0x002e6014(unaff_x23 + 0x90,unaff_x21);
    unaff_x22 = unaff_x21;
    if (unaff_x21 == (qword *)unaff_x20) {
      unaff_x22 = (qword *)((long)unaff_x21 + 1);
    }
    if (unaff_x22 < *(uint **)((long)register0x00000008 + -0x2f0)) {
      *(undefined4 *)((long)register0x00000008 + -0x33c) = 0;
      *(long *)((long)register0x00000008 + -0x350) =
           *(long *)((long)register0x00000008 + -0x2f8) + -0x20;
      *(long *)((long)register0x00000008 + -0x348) =
           *(long *)((long)register0x00000008 + -0x2d8) + -1;
      *(uint **)((long)register0x00000008 + -0x2d0) = unaff_x19 + 10;
      *(uint **)((long)register0x00000008 + -0x2c8) = unaff_x19 + 0x11;
      unaff_x21 = (qword *)&MACH_HEADER.reserved;
      unaff_d8 = 0x100000001;
      unaff_d9 = 0x1f0000001f00;
      unaff_x26 = (qword *)((long)&MACH_HEADER.magic + 1);
      unaff_x25 = 0x40000000;
      unaff_x28 = *(qword **)((long)register0x00000008 + -0x310);
      unaff_x20 = *(uint **)((long)register0x00000008 + -0x330);
      *(qword **)((long)register0x00000008 + -0x338) = unaff_x24;
      do {
        *(qword **)((long)register0x00000008 + -0x2e0) = unaff_x22;
        *(qword **)((long)register0x00000008 + -0x300) = unaff_x28;
        unaff_x27 = (qword *)((long)unaff_x22 - (long)unaff_x28);
        uVar35 = (uint)unaff_x27;
        uVar33 = *(undefined8 *)((long)register0x00000008 + -0x2f8);
        uVar14 = (**(code **)((long)register0x00000008 + -0x318))
                           (unaff_x24,unaff_x23,(undefined1 *)((long)register0x00000008 + -0x284),
                            unaff_x22,uVar33,*(undefined8 *)((long)register0x00000008 + -0x308),
                            uVar35 == 0,*(undefined8 *)((long)register0x00000008 + -0x2d8));
        *(undefined4 *)((long)register0x00000008 + -0x280) = uVar14;
// found on a paste site? it was re-uploaded illegally
        param_4 = (qword *)(ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x2e0) -
                                        (int)*(undefined8 *)((long)register0x00000008 + -0x310));
        param_5 = (qword *)(ulong)(uint)((int)uVar33 -
                                        (int)*(undefined8 *)((long)register0x00000008 + -0x2e0));
        lVar54 = *(long *)((long)register0x00000008 + -0x2e0);
        param_3 = (qword *)((long)register0x00000008 + -0x280);
        func_0x002e6cd8((undefined1 *)((long)register0x00000008 + -0x2c0),unaff_x24);
        uVar31 = *(uint *)((long)register0x00000008 + -0x280);
        if (uVar31 == 0) {
          unaff_x22 = (qword *)(lVar54 + 1);
          unaff_x28 = *(qword **)((long)register0x00000008 + -0x300);
        }
        else {
          unaff_x19[2] = 0;
          unaff_x19[3] = uVar35;
          piVar26 = *(int **)((long)register0x00000008 + -0x2d0);
          unaff_x28 = *(qword **)((long)register0x00000008 + -0x300);
          if (*(int *)(unaff_x23 + 0xe0) == 1) {
            uVar35 = (int)LZCOUNT(uVar35 + 1) * -0x100 + 0x1f00;
          }
          else if (uVar35 == 0x20000) {
            uVar35 = (*(int *)(unaff_x23 + 0xd4) +
                     (int)LZCOUNT(*(int *)(*(long *)(unaff_x23 + 0x98) + 0x8c) + 1) * 0x100) - 0xe00
            ;
          }
          else {
            if (uVar35 < 0x40) {
              uVar35 = (uint)(byte)(&UNK_01ade1dc)[(ulong)unaff_x27 & 0x3f];
            }
            else {
              uVar35 = 0x32 - (int)LZCOUNT(uVar35);
            }
            uVar35 = (*(int *)(unaff_x23 + 0xd4) +
                     ((int)LZCOUNT(*(int *)(*(long *)(unaff_x23 + 0x98) + (ulong)uVar35 * 4) + 1) +
                     (uint)(byte)(&UNK_01ade1b8)[uVar35]) * 0x100) - 0x1f00;
          }
          *unaff_x19 = uVar35;
/* if you paid for this, you were scammed */
          uVar33 = **(undefined8 **)((long)register0x00000008 + -0x308);
          unaff_x19[6] = *(uint *)(*(undefined8 **)((long)register0x00000008 + -0x308) + 1);
          *(undefined8 *)(unaff_x19 + 4) = uVar33;
          uVar35 = *(uint *)((long)(unaff_x24 + (uVar31 - 1)) + 4);
          if (*(uint *)((long)register0x00000008 + -0x328) < uVar35) {
            puVar51 = (uint *)0x0;
            uVar31 = (uint)unaff_x24[uVar31 - 1];
code_r0x002e3ee8:
            *(undefined8 *)((long)register0x00000008 + -0x280) =
                 *(undefined8 *)(unaff_x19 + (long)puVar51 * 7 + 4);
            *(uint *)((long)register0x00000008 + -0x278) = unaff_x19[(long)puVar51 * 7 + 6];
            if (uVar31 < 4) {
              uVar37 = uVar31;
              if ((int)unaff_x27 == 0) {
                uVar37 = uVar31 + 1;
              }
              uVar37 = uVar37 - 1;
              if (uVar37 == 3) {
                iVar30 = *(int *)((long)register0x00000008 + -0x280);
                iVar56 = iVar30 + -1;
code_r0x002e3f5c:
                puVar24 = (undefined4 *)((long)register0x00000008 + -0x278);
                if (uVar37 != 1) {
                  puVar24 = (undefined4 *)((ulong)((long)register0x00000008 + -0x280) | 4);
                }
                uVar14 = *puVar24;
                *(int *)((long)register0x00000008 + -0x27c) = iVar30;
                goto code_r0x002e3f74;
              }
/*  stripping the watermark breaks the license  */
              if (uVar37 != 0) {
                iVar56 = *(int *)((long)register0x00000008 + (ulong)uVar37 * 4 + -0x280);
                iVar30 = *(int *)((long)register0x00000008 + -0x280);
                goto code_r0x002e3f5c;
              }
              uVar14 = *(undefined4 *)((long)register0x00000008 + -0x278);
            }
            else {
              uVar14 = *(undefined4 *)((long)register0x00000008 + -0x27c);
              *(undefined4 *)((long)register0x00000008 + -0x27c) =
                   *(undefined4 *)((long)register0x00000008 + -0x280);
              iVar56 = uVar31 - 3;
code_r0x002e3f74:
              *(int *)((long)register0x00000008 + -0x280) = iVar56;
            }
            puVar29 = *(undefined8 **)((long)register0x00000008 + -0x308);
            *puVar29 = *(undefined8 *)((long)register0x00000008 + -0x280);
            *(undefined4 *)(puVar29 + 1) = uVar14;
          }
          else {
            iVar30 = (int)lVar54 - (int)unaff_x28;
            lVar54 = *(long *)((long)register0x00000008 + -0x348);
            do {
              iVar30 = iVar30 + 1;
              piVar26[-3] = 0x40000000;
              piVar26[-1] = 0;
              *piVar26 = iVar30;
              piVar26 = piVar26 + 7;
              lVar54 = lVar54 + -1;
            } while (lVar54 != 0);
            uVar43 = *(ulong *)((long)register0x00000008 + -0x2d8);
            uVar49 = 0;
            do {
              uVar35 = *(uint *)((long)(unaff_x24 + uVar49) + 4);
              if ((uint)uVar43 <= uVar35) {
                uVar37 = (uint)unaff_x24[uVar49];
                uVar36 = 0x1f - (int)LZCOUNT(uVar37);
/*  keep the notice, keep the source honest  */
                if (*(int *)(unaff_x23 + 0xe0) == 1) {
                  do {
                    uVar38 = (uint)uVar43;
                    uVar39 = *unaff_x19;
                    puVar40 = unaff_x19 + (uVar43 & 0xffffffff) * 7;
                    puVar40[2] = uVar38;
                    puVar40[3] = 0;
                    *puVar40 = uVar39 + (uVar36 - (int)LZCOUNT(uVar38 - 2)) * 0x100 + 0x2f00;
                    puVar40[1] = uVar37;
                    uVar43 = (ulong)(uVar38 + 1);
                  } while (uVar38 + 1 <= uVar35);
                }
                else {
                  iVar30 = uVar36 * 0x200 + -0x63cd;
                  if (uVar36 < 0x14) {
                    iVar30 = -0x3dcd;
                  }
                  iVar56 = *(int *)(unaff_x23 + 0xd8);
                  iVar58 = *(int *)(unaff_x23 + 0xdc);
                  iVar59 = *(int *)(unaff_x23 + 0xd4);
                  lVar54 = *(long *)(unaff_x23 + 0xa0);
                  lVar28 = *(long *)(unaff_x23 + 0xa8);
                  piVar26 = *(int **)(unaff_x23 + 0x98);
                  do {
                    uVar38 = (uint)uVar43;
                    uVar39 = uVar38 - 3;
                    if (uVar39 < 0x80) {
                      uVar52 = (ulong)(byte)(&UNK_01ade251)[uVar39];
                    }
                    else {
                      uVar52 = (ulong)(0x43 - (int)LZCOUNT(uVar39));
                    }
                    iVar62 = *(int *)(lVar28 + (ulong)uVar36 * 4);
                    bVar8 = (&UNK_01ade21c)[uVar52];
                    iVar5 = *(int *)(lVar54 + uVar52 * 4);
                    uVar22 = *unaff_x19;
                    param_5 = (qword *)(ulong)uVar22;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                    param_3 = (qword *)(unaff_x19 + (uVar43 & 0xffffffff) * 7);
                    *(uint *)((long)param_3 + 4) = uVar37;
                    *(uint *)(param_3 + 1) = uVar38;
                    *(uint *)((long)param_3 + 0xc) = 0;
                    uVar39 = iVar59 + -0x1f00 + (int)LZCOUNT(*piVar26 + 1) * 0x100;
                    param_4 = (qword *)(ulong)uVar39;
                    *(uint *)param_3 =
                         uVar39 + iVar30 + iVar58 + iVar56 + uVar22 +
                                  ((int)LZCOUNT(iVar62 + 1) + uVar36 + (uint)bVar8 +
                                  (int)LZCOUNT(iVar5 + 1)) * 0x100;
                    uVar43 = (ulong)(uVar38 + 1);
                  } while (uVar38 + 1 <= uVar35);
                }
              }
              uVar49 = uVar49 + 1;
            } while (uVar49 != uVar31);
            unaff_x19[(uVar43 & 0xffffffff) * 7] = 0x40000000;
            uVar31 = (int)uVar43 - 1;
            puVar40 = (uint *)(ulong)uVar31;
            if (uVar31 != 0) {
              puVar51 = (uint *)((long)&MACH_HEADER.magic + 1);
              do {
// WM - keep the notice, keep the source honest
                while( true ) {
                  uVar36 = (uint)puVar51;
                  puVar3 = (undefined *)
                           (*(long *)((long)register0x00000008 + -0x2e0) + (long)puVar51);
                  puVar34 = unaff_x19 + (ulong)(uVar36 - 1) * 7;
                  uVar35 = puVar34[3];
                  uVar31 = uVar35 + 1;
                  uVar37 = *puVar34;
                  if (*(int *)(unaff_x23 + 0xf0) != 2) break;
                  iVar30 = uVar37 + 0x800;
                  if (*(int *)(unaff_x23 + 0xe0) == 1) goto code_r0x002e38d0;
                  if (uVar31 != 0x20000) goto code_r0x002e3958;
code_r0x002e3808:
                  lVar54 = *(long *)(unaff_x23 + 0x98);
                  iVar58 = *(int *)(unaff_x23 + 0xd4) +
                           (int)LZCOUNT(*(int *)(lVar54 + 0x8c) + 1) * 0x100 + -0xe00;
                  iVar56 = *(int *)(unaff_x23 + 0xd4) + -0x1f00;
code_r0x002e3828:
                  uVar35 = 0x32 - (int)LZCOUNT(uVar35);
/*  if you paid for this, you were scammed  */
code_r0x002e3834:
                  uVar35 = iVar30 + (iVar58 - (iVar56 + ((int)LZCOUNT(*(int *)(lVar54 + (ulong)
                                                  uVar35 * 4) + 1) +
                                                  (uint)(byte)(&UNK_01ade1b8)[uVar35]) * 0x100));
                  puVar17 = unaff_x19 + (long)puVar51 * 7;
                  uVar37 = *puVar17;
                  if ((int)*puVar17 < (int)uVar35) goto code_r0x002e3900;
code_r0x002e386c:
                  uVar33 = *(undefined8 *)(puVar34 + 3);
                  *(undefined8 *)(puVar17 + 5) = *(undefined8 *)(puVar34 + 5);
                  *(undefined8 *)(puVar17 + 3) = uVar33;
                  uVar33 = *(undefined8 *)puVar34;
                  *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar34 + 2);
                  *(undefined8 *)puVar17 = uVar33;
                  puVar17[3] = uVar31;
                  *puVar17 = uVar35;
                  if (uVar31 != 0) goto code_r0x002e3908;
code_r0x002e388c:
                  uVar37 = puVar17[1];
                  uVar38 = uVar36 - puVar17[2];
                  uVar39 = unaff_x19[(ulong)uVar38 * 7 + 3];
                  *(undefined8 *)((long)register0x00000008 + -0x280) =
                       *(undefined8 *)(unaff_x19 + (ulong)uVar38 * 7 + 4);
                  *(uint *)((long)register0x00000008 + -0x278) = unaff_x19[(ulong)uVar38 * 7 + 6];
                  if (3 < uVar37) {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
                    uVar39 = *(uint *)((long)register0x00000008 + -0x27c);
                    *(undefined4 *)((long)register0x00000008 + -0x27c) =
                         *(undefined4 *)((long)register0x00000008 + -0x280);
                    iVar30 = uVar37 - 3;
code_r0x002e3a64:
                    *(int *)((long)register0x00000008 + -0x280) = iVar30;
                    *(undefined8 *)(puVar17 + 4) =
                         *(undefined8 *)((long)register0x00000008 + -0x280);
                    puVar17[6] = uVar39;
                    puVar32 = *(undefined **)((long)register0x00000008 + -0x2f0);
                    goto joined_r0x002e3a7c;
                  }
                  if (uVar39 == 0) {
                    uVar37 = uVar37 + 1;
                  }
                  uVar37 = uVar37 - 1;
                  if (uVar37 == 3) {
                    iVar56 = *(int *)((long)register0x00000008 + -0x280);
                    iVar30 = iVar56 + -1;
code_r0x002e3a4c:
                    puVar34 = (uint *)((long)register0x00000008 + -0x278);
                    if (uVar37 != 1) {
                      puVar34 = (uint *)((ulong)((long)register0x00000008 + -0x280) | 4);
                    }
                    uVar39 = *puVar34;
                    *(int *)((long)register0x00000008 + -0x27c) = iVar56;
                    goto code_r0x002e3a64;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                  }
                  if (uVar37 != 0) {
                    iVar30 = *(int *)((long)register0x00000008 + (ulong)uVar37 * 4 + -0x280);
                    iVar56 = *(int *)((long)register0x00000008 + -0x280);
                    goto code_r0x002e3a4c;
                  }
                  uVar37 = *(uint *)((long)register0x00000008 + -0x278);
                  *(undefined8 *)(puVar17 + 4) = *(undefined8 *)((long)register0x00000008 + -0x280);
                  puVar17[6] = uVar37;
                  if (puVar3 <= *(undefined **)((long)register0x00000008 + -0x2f0))
                  goto code_r0x002e3a80;
code_r0x002e37b4:
                  uVar31 = uVar36 + 1;
joined_r0x002e3e78:
                  puVar51 = (uint *)(ulong)(uVar36 + 1);
                  if ((uint)puVar40 < uVar31) goto code_r0x002e3e88;
                }
                if (*(int *)(unaff_x23 + 0xe0) == 1) {
                  iVar30 = uVar37 + 0x600;
code_r0x002e38d0:
                  uVar35 = iVar30 + (((int)LZCOUNT(uVar35 + 2) * -0x100 + 0x1f00) -
                                    ((int)LZCOUNT(uVar31) * -0x100 + 0x1f00));
                  puVar17 = unaff_x19 + (long)puVar51 * 7;
                  uVar37 = *puVar17;
                  if ((int)uVar35 <= (int)*puVar17) goto code_r0x002e386c;
                }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                else {
                  uVar39 = (int)LZCOUNT(*(int *)(*(long *)(unaff_x23 + 0x90) +
                                                (ulong)(byte)puVar3[-1] * 4) + 1) * -0x100 + 0x1f00;
                  iVar30 = 0x100;
                  if (uVar39 <= *(int *)(unaff_x23 + 0xd0) - 0x100U) {
                    iVar30 = *(int *)(unaff_x23 + 0xd0) - uVar39;
                  }
                  iVar30 = iVar30 + uVar37;
                  if (uVar31 == 0x20000) goto code_r0x002e3808;
code_r0x002e3958:
                  if (uVar31 < 0x40) {
                    uVar37 = (uint)(byte)(&UNK_01ade1dc)[uVar31];
                  }
                  else {
                    uVar37 = 0x32 - (int)LZCOUNT(uVar31);
                  }
                  lVar54 = *(long *)(unaff_x23 + 0x98);
                  iVar56 = *(int *)(unaff_x23 + 0xd4) + -0x1f00;
                  iVar58 = iVar56 + ((int)LZCOUNT(*(int *)(lVar54 + (ulong)uVar37 * 4) + 1) +
                                    (uint)(byte)(&UNK_01ade1b8)[uVar37]) * 0x100;
                  if (uVar35 != 0x20000) {
                    if (0x3f < uVar35) goto code_r0x002e3828;
                    uVar35 = (uint)(byte)(&UNK_01ade1dc)[uVar35];
/* wm:reversing this took months of machine time */
                    goto code_r0x002e3834;
                  }
                  uVar35 = iVar30 + (iVar58 - (*(int *)(unaff_x23 + 0xd4) +
                                               (int)LZCOUNT(*(int *)(lVar54 + 0x8c) + 1) * 0x100 +
                                              -0xe00));
                  puVar17 = unaff_x19 + (long)puVar51 * 7;
                  uVar37 = *puVar17;
                  if ((int)uVar35 <= (int)*puVar17) goto code_r0x002e386c;
                }
code_r0x002e3900:
                uVar35 = uVar37;
                uVar31 = puVar17[3];
                if (uVar31 == 0) goto code_r0x002e388c;
code_r0x002e3908:
                puVar32 = *(undefined **)((long)register0x00000008 + -0x2f0);
joined_r0x002e3a7c:
                if (puVar32 < puVar3) goto code_r0x002e37b4;
code_r0x002e3a80:
                if (uVar36 == (uint)puVar40) {
                  puVar40 = puVar51;
                  break;
                }
                if ((int)unaff_x19[(ulong)(uVar36 + 1) * 7] <= (int)(uVar35 + 0x80))
                goto code_r0x002e37b4;
                iVar30 = *(int *)(unaff_x23 + 0xe0);
                *(uint *)((long)register0x00000008 + -800) = uVar35;
                *(uint *)((long)register0x00000008 + -0x31c) = uVar36 + 1;
                if (iVar30 == 1) {
                  *(undefined4 *)((long)register0x00000008 + -0x324) = 0;
                }
                else {
                  *(int *)((long)register0x00000008 + -0x324) =
                       *(int *)(unaff_x23 + 0xd4) +
                       (int)LZCOUNT(**(int **)(unaff_x23 + 0x98) + 1) * 0x100 + -0x1f00;
                }
                uVar33 = *(undefined8 *)((long)register0x00000008 + -0x2f8);
                uVar14 = (**(code **)((long)register0x00000008 + -0x318))
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
                                   (unaff_x24,unaff_x23,
                                    (undefined1 *)((long)register0x00000008 + -0x284),puVar3,uVar33,
                                    puVar17 + 4,uVar31 == 0,
                                    *(undefined8 *)((long)register0x00000008 + -0x2d8));
                *(undefined4 *)((long)register0x00000008 + -0x280) = uVar14;
                param_4 = (qword *)(ulong)(uint)((int)puVar3 -
                                                (int)*(undefined8 *)
                                                      ((long)register0x00000008 + -0x310));
                *(undefined **)((long)register0x00000008 + -0x2e8) = puVar3;
                param_5 = (qword *)(ulong)(uint)((int)uVar33 - (int)puVar3);
                unaff_x24 = *(qword **)((long)register0x00000008 + -0x338);
                param_3 = (qword *)((long)register0x00000008 + -0x280);
                func_0x002e6cd8((undefined1 *)((long)register0x00000008 + -0x2c0),unaff_x24);
                uVar31 = *(uint *)((long)register0x00000008 + -0x280);
                if (uVar31 == 0) {
                  unaff_x20 = *(uint **)((long)register0x00000008 + -0x330);
                  uVar31 = *(uint *)((long)register0x00000008 + -0x31c);
                  goto joined_r0x002e3e78;
                }
                uVar35 = *(dword *)((long)unaff_x24 + ((ulong)(uVar31 - 1) * 2 + 1) * 4);
                puVar34 = (uint *)(ulong)(uVar35 + uVar36);
                unaff_x20 = *(uint **)((long)register0x00000008 + -0x330);
                lVar54 = *(long *)((long)register0x00000008 + -0x2d0);
                if (((*(uint *)((long)register0x00000008 + -0x328) < uVar35) ||
/* reversing this took months of machine time - github.com/pengussy */
                    (0xfff < uVar35 + uVar36)) ||
                   (*(ulong *)((long)register0x00000008 + -0x2f8) <=
                    *(long *)((long)register0x00000008 + -0x2e8) + (ulong)uVar35)) {
                  if (uVar35 == 0) {
                    unaff_x27 = unaff_x24;
                    goto code_r0x002e43d0;
                  }
                  uVar31 = (uint)unaff_x24[uVar31 - 1];
                  goto code_r0x002e3edc;
                }
                uVar49 = 0;
                iVar30 = *(int *)((long)register0x00000008 + -0x324);
                iVar56 = *(int *)((long)register0x00000008 + -800);
                *(int *)((long)register0x00000008 + -0x2e8) = iVar30 + iVar56;
                do {
                  pqVar45 = unaff_x24 + uVar49;
                  uVar35 = (uint)*(undefined8 *)((long)register0x00000008 + -0x2d8);
                  if (uVar49 != 0) {
                    uVar35 = *(dword *)((long)pqVar45 + -4) + 1;
                  }
                  uVar37 = *(uint *)((long)pqVar45 + 4);
                  if (uVar35 <= uVar37) {
                    uVar39 = (uint)*pqVar45;
                    uVar38 = 0x1f - (int)LZCOUNT(uVar39);
                    if (*(int *)(unaff_x23 + 0xe0) == 1) {
                      iVar58 = 0;
                      uVar22 = uVar36 + uVar37;
                      uVar21 = uVar22;
                      do {
                        uVar25 = iVar30 + iVar56 + 0x2f00 +
                                 (uVar38 - (int)LZCOUNT(uVar37 - 2)) * 0x100;
                        param_3 = (qword *)(ulong)(uVar37 + uVar36);
/* thanks for reading - discord.gg/sdkhDjTex */
                        if ((uint)puVar40 < uVar37 + uVar36) {
                          puVar51 = (uint *)((ulong)puVar40 & 0xffffffff);
                          param_4 = (qword *)((ulong)(uVar22 - iVar58) - (long)puVar51);
                          if ((uint *)((long)&MACH_HEADER.magic + 3) < param_4) {
                            param_5 = (qword *)((ulong)param_4 & 0xfffffffffffffffc);
                            puVar40 = (uint *)((long)param_5 + (long)puVar51);
                            uVar43 = (ulong)uVar21 - (long)puVar51 & 0xfffffffffffffffc;
                            puVar24 = (undefined4 *)
                                      (*(long *)((long)register0x00000008 + -0x2c8) +
                                      (long)puVar51 * 0x1c);
                            do {
                              puVar24[-10] = 0x40000000;
                              puVar24[-3] = 0x40000000;
                              puVar24[4] = 0x40000000;
                              puVar24[0xb] = 0x40000000;
                              puVar24[-7] = 1;
                              *puVar24 = 1;
                              puVar24[7] = 1;
                              puVar24[0xe] = 1;
                              puVar24 = puVar24 + 0x1c;
                              uVar43 = uVar43 - 4;
                            } while (uVar43 != 0);
                            if (param_4 == param_5) goto code_r0x002e3c14;
                          }
/* donate: donate/README.md - github.com/pengussy */
                          else {
                            puVar40 = puVar51;
                          }
                          pqVar45 = (qword *)(lVar54 + (long)puVar40 * 0x1c);
                          do {
                            puVar40 = (uint *)((long)puVar40 + 1);
                            *(uint *)((long)pqVar45 + -0xc) = 0x40000000;
                            param_4 = (qword *)((long)pqVar45 + 0x1c);
                            *(uint *)pqVar45 = 1;
                            pqVar45 = param_4;
                          } while (puVar40 < param_3);
                        }
                        else {
                          param_4 = (qword *)(ulong)unaff_x19[(long)param_3 * 7];
                          if ((int)unaff_x19[(long)param_3 * 7] <= (int)uVar25) break;
                        }
code_r0x002e3c14:
                        param_3 = (qword *)(unaff_x19 + (long)param_3 * 7);
                        *(uint *)(param_3 + 1) = uVar37;
                        *(uint *)((long)param_3 + 0xc) = 0;
                        *(uint *)param_3 = uVar25;
                        *(uint *)((long)param_3 + 4) = uVar39;
                        uVar37 = uVar37 - 1;
                        iVar58 = iVar58 + 1;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                        uVar21 = uVar21 - 1;
                      } while (uVar35 <= uVar37);
                    }
                    else {
                      iVar58 = 0;
                      iVar59 = uVar38 * 0x200 + -0x63cd;
                      if (uVar38 < 0x14) {
                        iVar59 = -0x3dcd;
                      }
                      iVar62 = *(int *)(unaff_x23 + 0xd8);
                      iVar5 = *(int *)(unaff_x23 + 0xdc);
                      lVar28 = *(long *)(unaff_x23 + 0xa0);
                      lVar6 = *(long *)(unaff_x23 + 0xa8);
                      iVar7 = *(int *)((long)register0x00000008 + -0x2e8);
                      uVar22 = uVar36 + uVar37;
                      param_3 = (qword *)(ulong)uVar22;
                      param_4 = param_3;
                      do {
                        uVar21 = uVar37 - 3;
                        if (uVar21 < 0x80) {
                          uVar21 = (uint)(byte)(&UNK_01ade251)[uVar21];
                        }
                        else {
                          uVar21 = 0x43 - (int)LZCOUNT(uVar21);
                        }
/*  chat: discord.gg/sdkhDjTex  */
                        uVar21 = iVar59 + iVar5 + iVar62 + iVar7 +
                                 ((int)LZCOUNT(*(int *)(lVar6 + (ulong)uVar38 * 4) + 1) + uVar38 +
                                  (uint)(byte)(&UNK_01ade21c)[uVar21] +
                                 (int)LZCOUNT(*(int *)(lVar28 + (ulong)uVar21 * 4) + 1)) * 0x100;
                        param_5 = (qword *)(ulong)uVar21;
                        puVar51 = (uint *)(ulong)(uVar37 + uVar36);
                        if ((uint)puVar40 < uVar37 + uVar36) {
                          puVar34 = (uint *)((ulong)puVar40 & 0xffffffff);
                          uVar43 = (ulong)(uVar22 - iVar58) - (long)puVar34;
                          if (uVar43 < 4) {
                            puVar40 = puVar34;
                          }
                          else {
                            puVar40 = (uint *)((uVar43 & 0xfffffffffffffffc) + (long)puVar34);
                            uVar52 = (long)param_4 - (long)puVar34 & 0xfffffffffffffffc;
                            puVar24 = (undefined4 *)
                                      (*(long *)((long)register0x00000008 + -0x2c8) +
                                      (long)puVar34 * 0x1c);
                            do {
                              puVar24[-10] = 0x40000000;
                              puVar24[-3] = 0x40000000;
                              puVar24[4] = 0x40000000;
                              puVar24[0xb] = 0x40000000;
                              puVar24[-7] = 1;
                              *puVar24 = 1;
                              puVar24[7] = 1;
                              puVar24[0xe] = 1;
                              puVar24 = puVar24 + 0x1c;
                              uVar52 = uVar52 - 4;
                            } while (uVar52 != 0);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                            lVar54 = *(long *)((long)register0x00000008 + -0x2d0);
                            if (uVar43 == (uVar43 & 0xfffffffffffffffc)) goto code_r0x002e3d24;
                          }
                          puVar24 = (undefined4 *)(lVar54 + (long)puVar40 * 0x1c);
                          do {
                            puVar40 = (uint *)((long)puVar40 + 1);
                            puVar24[-3] = 0x40000000;
                            *puVar24 = 1;
                            puVar24 = puVar24 + 7;
                          } while (puVar40 < puVar51);
                        }
                        else if ((int)unaff_x19[(long)puVar51 * 7] <= (int)uVar21) break;
code_r0x002e3d24:
                        puVar51 = unaff_x19 + (long)puVar51 * 7;
                        puVar51[2] = uVar37;
                        puVar51[3] = 0;
                        *puVar51 = uVar21;
                        puVar51[1] = uVar39;
                        uVar37 = uVar37 - 1;
                        iVar58 = iVar58 + 1;
                        param_4 = (qword *)(ulong)((int)param_4 - 1);
                      } while (uVar35 <= uVar37);
                    }
                  }
                  uVar49 = uVar49 + 1;
                } while (uVar49 != uVar31);
                unaff_x19[(ulong)((uint)puVar40 + 1) * 7] = 0x40000000;
                puVar51 = (uint *)(ulong)(uVar36 + 1);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
              } while (*(uint *)((long)register0x00000008 + -0x31c) <= (uint)puVar40);
            }
code_r0x002e3e88:
            puVar17 = unaff_x19 + ((ulong)puVar40 & 0xffffffff) * 7;
            uVar31 = puVar17[1];
            *(uint *)((long)register0x00000008 + -0x33c) = *puVar17;
            uVar35 = puVar17[2];
            uVar37 = puVar17[3];
            uVar36 = puVar17[6];
            *(undefined8 *)((long)register0x00000008 + -0x270) = *(undefined8 *)(puVar17 + 4);
            *(uint *)((long)register0x00000008 + -0x268) = uVar36;
            unaff_x27 = (qword *)((long)&segment_command_00000020.vmsize + 3);
            puVar34 = puVar40;
            if (uVar35 == 0) {
code_r0x002e43d0:
              unaff_x22 = (qword *)(*(long *)((long)register0x00000008 + -0x2e0) +
                                   ((ulong)puVar34 & 0xffffffff));
              unaff_x28 = *(qword **)((long)register0x00000008 + -0x300);
              goto code_r0x002e34b8;
            }
            uVar36 = (int)puVar40 - uVar35;
            puVar51 = (uint *)(ulong)uVar36;
            if (uVar37 == 0) {
code_r0x002e3edc:
              unaff_x28 = *(qword **)((long)register0x00000008 + -0x300);
              unaff_x27 = (qword *)(ulong)unaff_x19[(long)puVar51 * 7 + 3];
              goto code_r0x002e3ee8;
            }
            uVar33 = *(undefined8 *)(puVar17 + 4);
            puVar29 = *(undefined8 **)((long)register0x00000008 + -0x308);
            unaff_x28 = *(qword **)((long)register0x00000008 + -0x300);
            *(uint *)(puVar29 + 1) = puVar17[6];
            *puVar29 = uVar33;
            puVar51 = (uint *)(ulong)(uVar36 - uVar37);
          }
          unaff_x27 = (qword *)((long)&segment_command_00000020.vmsize + 3);
          uVar37 = (int)puVar51 + 2;
/* proprietary - see LICENSE - do not sell */
          puVar34 = unaff_x19 + (ulong)uVar37 * 7;
          *puVar34 = *(uint *)((long)register0x00000008 + -0x33c);
          puVar34[1] = uVar31;
          *(undefined8 *)(puVar34 + 4) = *(undefined8 *)((long)register0x00000008 + -0x270);
          puVar34[6] = *(uint *)((long)register0x00000008 + -0x268);
          puVar40 = unaff_x19 + (long)puVar51 * 7;
          uVar33 = *(undefined8 *)puVar40;
          uVar36 = puVar40[2];
          uVar39 = puVar40[3];
          puVar34[2] = uVar35;
          puVar34[3] = uVar39;
          uVar31 = uVar37;
          if (uVar36 == 0) {
code_r0x002e4048:
            param_5 = *(qword **)((long)register0x00000008 + -0x350);
            do {
              while( true ) {
                uVar35 = unaff_x19[(ulong)uVar31 * 7 + 2];
                uVar36 = unaff_x19[(ulong)uVar31 * 7 + 3];
                uVar49 = (ulong)uVar36;
                if (uVar35 == 0) break;
                uVar39 = unaff_x19[(ulong)uVar31 * 7 + 1];
                if (*(int *)(unaff_x23 + 0xf0) != 2) {
                  if (uVar36 != 0) {
                    lVar54 = *(long *)(unaff_x23 + 0x90);
                    if (uVar36 == 1) {
                      uVar43 = 0;
                    }
                    else {
                      uVar43 = 0;
                      pbVar47 = (byte *)((long)unaff_x28 + 1);
                      do {
                        *(int *)(lVar54 + (ulong)pbVar47[-1] * 4) =
                             *(int *)(lVar54 + (ulong)pbVar47[-1] * 4) + 2;
                        *(int *)(lVar54 + (ulong)*pbVar47 * 4) =
                             *(int *)(lVar54 + (ulong)*pbVar47 * 4) + 2;
/* wm:no support for modified copies */
                        uVar43 = uVar43 + 2;
                        pbVar47 = pbVar47 + 2;
                      } while ((uVar49 & 0xfffffffe) != uVar43);
                    }
                    if ((uVar36 & 1) != 0) {
                      *(int *)(lVar54 + (ulong)*(byte *)((long)unaff_x28 + uVar43) * 4) =
                           *(int *)(lVar54 + (ulong)*(byte *)((long)unaff_x28 + uVar43) * 4) + 2;
                    }
                  }
                  *(uint *)(unaff_x23 + 0xc0) = *(int *)(unaff_x23 + 0xc0) + uVar36 * 2;
                }
                if (uVar36 < 0x40) {
                  uVar38 = (uint)(byte)(&UNK_01ade1dc)[uVar49];
                }
                else {
                  uVar38 = 0x32 - (int)LZCOUNT(uVar36);
                }
                *(int *)(*(long *)(unaff_x23 + 0x98) + (ulong)uVar38 * 4) =
                     *(int *)(*(long *)(unaff_x23 + 0x98) + (ulong)uVar38 * 4) + 1;
                *(int *)(unaff_x23 + 0xc4) = *(int *)(unaff_x23 + 0xc4) + 1;
                uVar38 = 0x1f - (int)LZCOUNT(uVar39);
// keep the notice, keep the source honest
                *(int *)(*(long *)(unaff_x23 + 0xa8) + (ulong)uVar38 * 4) =
                     *(int *)(*(long *)(unaff_x23 + 0xa8) + (ulong)uVar38 * 4) + 1;
                *(int *)(unaff_x23 + 0xcc) = *(int *)(unaff_x23 + 0xcc) + 1;
                uVar38 = uVar35 - 3;
                if (uVar38 < 0x80) {
                  uVar38 = (uint)(byte)(&UNK_01ade251)[uVar38];
                }
                else {
                  uVar38 = 0x43 - (int)LZCOUNT(uVar38);
                }
                *(int *)(*(long *)(unaff_x23 + 0xa0) + (ulong)uVar38 * 4) =
                     *(int *)(*(long *)(unaff_x23 + 0xa0) + (ulong)uVar38 * 4) + 1;
                *(int *)(unaff_x23 + 200) = *(int *)(unaff_x23 + 200) + 1;
                pqVar45 = *(qword **)(unaff_x20 + 6);
                puVar40 = (uint *)((long)unaff_x28 + uVar49);
                uVar9 = (undefined2)uVar36;
                if (param_5 < puVar40) {
                  pqVar50 = unaff_x28;
                  if (unaff_x28 <= param_5) {
                    pqVar19 = (qword *)((long)pqVar45 + ((long)param_5 - (long)unaff_x28));
                    qVar57 = *unaff_x28;
                    pqVar16 = pqVar45 + 2;
                    pqVar45[1] = unaff_x28[1];
                    *pqVar45 = qVar57;
                    pqVar50 = param_5;
                    pqVar45 = pqVar19;
                    if (0x10 < (ulong)((long)param_5 - (long)unaff_x28)) {
                      pqVar20 = unaff_x28;
                      do {
                        qVar57 = pqVar20[2];
                        pqVar16[1] = pqVar20[3];
/*  found on a paste site? it was re-uploaded illegally  */
                        *pqVar16 = qVar57;
                        qVar57 = pqVar20[4];
                        pqVar16[3] = pqVar20[5];
                        pqVar16[2] = qVar57;
                        pqVar16 = pqVar16 + 4;
                        pqVar20 = pqVar20 + 4;
                      } while (pqVar16 < pqVar19);
                    }
                  }
                  if (pqVar50 < puVar40) {
                    puVar51 = (uint *)((long)unaff_x28 + (uVar49 - (long)pqVar50));
                    if ((&MACH_HEADER.cpusubtype <= puVar51) &&
                       (0x3f < (ulong)((long)pqVar45 - (long)pqVar50))) {
                      if ((uint *)((long)&segment_command_00000020.vmaddr + 7) < puVar51) {
                        puVar17 = (uint *)((ulong)puVar51 & 0xffffffffffffffc0);
                        pdVar15 = (dword *)(pqVar50 + 4);
                        puVar34 = puVar17;
                        pqVar16 = pqVar45 + 4;
                        do {
                          qVar57 = *(qword *)(pdVar15 + -8);
                          qVar64 = *(qword *)(pdVar15 + -2);
                          qVar61 = *(qword *)(pdVar15 + -4);
                          qVar66 = *(qword *)(pdVar15 + 2);
                          qVar65 = *(qword *)pdVar15;
                          qVar68 = *(qword *)(pdVar15 + 6);
                          qVar67 = *(qword *)(pdVar15 + 4);
                          pqVar16[-3] = *(qword *)(pdVar15 + -6);
                          pqVar16[-4] = qVar57;
                          pqVar16[-1] = qVar64;
                          pqVar16[-2] = qVar61;
/* WM - reversing this took months of machine time */
                          pqVar16[1] = qVar66;
                          *pqVar16 = qVar65;
                          pqVar16[3] = qVar68;
                          pqVar16[2] = qVar67;
                          puVar34 = puVar34 + -0x10;
                          pdVar15 = pdVar15 + 0x10;
                          pqVar16 = pqVar16 + 8;
                        } while (puVar34 != (uint *)0x0);
                        param_3 = (qword *)0x0;
                        if (puVar51 == puVar17) goto code_r0x002e4350;
                        if (((ulong)puVar51 & 0x38) == 0) {
                          pqVar45 = (qword *)((long)pqVar45 + (long)puVar17);
                          pqVar50 = (qword *)((long)pqVar50 + (long)puVar17);
                          goto code_r0x002e4340;
                        }
                      }
                      else {
                        puVar17 = (uint *)0x0;
                      }
                      param_3 = (qword *)((ulong)puVar51 & 0xfffffffffffffff8);
                      lVar54 = (long)puVar17 - (long)param_3;
                      puVar29 = (undefined8 *)((long)pqVar45 + (long)puVar17);
                      puVar48 = (undefined8 *)((long)pqVar50 + (long)puVar17);
                      do {
                        *puVar29 = *puVar48;
                        lVar54 = lVar54 + 8;
                        puVar29 = puVar29 + 1;
                        puVar48 = puVar48 + 1;
                      } while (lVar54 != 0);
                      param_4 = (qword *)0x0;
                      pqVar50 = (qword *)((long)pqVar50 + (long)param_3);
                      pqVar45 = (qword *)((long)pqVar45 + (long)param_3);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                      if ((qword *)puVar51 == param_3) goto code_r0x002e4350;
                    }
code_r0x002e4340:
                    do {
                      pqVar16 = (qword *)((long)pqVar50 + 1);
                      *(char *)pqVar45 = (char)*pqVar50;
                      pqVar50 = pqVar16;
                      pqVar45 = (qword *)((long)pqVar45 + 1);
                    } while (pqVar16 != (qword *)puVar40);
                  }
code_r0x002e4350:
                  *(ulong *)(unaff_x20 + 6) = *(long *)(unaff_x20 + 6) + uVar49;
                  puVar40 = *(uint **)(unaff_x20 + 2);
                  if (uVar36 < 0x10000) {
                    *(undefined2 *)(puVar40 + 1) = uVar9;
                    *puVar40 = uVar39;
                  }
                  else {
                    unaff_x20[0x12] = 1;
                    unaff_x20[0x13] = (uint)((ulong)((long)puVar40 - *(long *)unaff_x20) >> 3);
                    *(undefined2 *)(puVar40 + 1) = uVar9;
                    *puVar40 = uVar39;
                  }
                }
                else {
                  qVar57 = *unaff_x28;
                  pqVar45[1] = unaff_x28[1];
                  *pqVar45 = qVar57;
                  if (0x10 < uVar36) {
                    lVar54 = *(long *)(unaff_x20 + 6);
                    uVar33 = unaff_x28[2];
                    *(qword *)(lVar54 + 0x18) = unaff_x28[3];
                    *(undefined8 *)(lVar54 + 0x10) = uVar33;
                    if (0x10 < uVar36 - 0x10) {
// WM - unlicensed copy if this notice is missing
                      puVar29 = (undefined8 *)(lVar54 + 0x20);
                      puVar40 = (uint *)(unaff_x28 + 6);
                      do {
                        uVar33 = *(undefined8 *)(puVar40 + -4);
                        puVar29[1] = *(undefined8 *)(puVar40 + -2);
                        *puVar29 = uVar33;
                        uVar33 = *(undefined8 *)puVar40;
                        puVar29[3] = *(undefined8 *)(puVar40 + 2);
                        puVar29[2] = uVar33;
                        puVar29 = puVar29 + 4;
                        puVar40 = puVar40 + 8;
                      } while (puVar29 < (undefined8 *)(lVar54 + uVar49));
                      goto code_r0x002e4350;
                    }
                  }
                  *(ulong *)(unaff_x20 + 6) = *(long *)(unaff_x20 + 6) + uVar49;
                  puVar40 = *(uint **)(unaff_x20 + 2);
                  *(undefined2 *)(puVar40 + 1) = uVar9;
                  *puVar40 = uVar39;
                }
                if (0xffff < (ulong)uVar35 - 3) {
// do not claim this as your own
                  unaff_x20[0x12] = 2;
                  unaff_x20[0x13] = (uint)((ulong)((long)puVar40 - *(long *)unaff_x20) >> 3);
                }
                *(short *)((long)puVar40 + 6) = (short)uVar35 + -3;
                *(uint **)(unaff_x20 + 2) = puVar40 + 2;
                unaff_x22 = (qword *)((long)unaff_x28 + (ulong)(uVar35 + uVar36));
                uVar31 = uVar31 + 1;
                unaff_x28 = unaff_x22;
                if (uVar37 < uVar31) goto code_r0x002e4014;
              }
              unaff_x22 = (qword *)((long)unaff_x28 + uVar49);
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar37);
          }
          else {
            do {
              uVar31 = uVar31 - 1;
              puVar34 = unaff_x19 + (ulong)uVar31 * 7;
              *(undefined8 *)puVar34 = uVar33;
              puVar34[2] = uVar36;
              puVar34[3] = uVar39;
              uVar35 = unaff_x19[(long)puVar51 * 7 + 6];
              *(undefined8 *)(puVar34 + 4) = *(undefined8 *)(unaff_x19 + (long)puVar51 * 7 + 4);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
              puVar34[6] = uVar35;
              puVar51 = (uint *)(ulong)((int)puVar51 - (uVar36 + uVar39));
              puVar40 = unaff_x19 + (long)puVar51 * 7;
              uVar33 = *(undefined8 *)puVar40;
              uVar36 = puVar40[2];
              uVar39 = puVar40[3];
              puVar34[3] = uVar39;
            } while (uVar36 != 0);
            if (uVar31 <= uVar37) goto code_r0x002e4048;
            unaff_x22 = *(qword **)((long)register0x00000008 + -0x2e0);
          }
code_r0x002e4014:
          if (*(int *)(unaff_x23 + 0xf0) != 2) {
            *(int *)(unaff_x23 + 0xd0) =
                 (int)LZCOUNT(*(int *)(unaff_x23 + 0xc0) + 1) * -0x100 + 0x1f00;
          }
          *(ulong *)(unaff_x23 + 0xd4) =
               CONCAT44(LZCOUNT((int)((ulong)*(undefined8 *)(unaff_x23 + 0xc4) >> 0x20) + 1) *
                        -0x100 + 0x1f00,
                        LZCOUNT((int)*(undefined8 *)(unaff_x23 + 0xc4) + 1) * -0x100 + 0x1f00);
          *(int *)(unaff_x23 + 0xdc) =
               (int)LZCOUNT(*(int *)(unaff_x23 + 0xcc) + 1) * -0x100 + 0x1f00;
        }
code_r0x002e34b8:
/* watermarked copy - do not remove - github.com/pengussy */
      } while (unaff_x22 < *(uint **)((long)register0x00000008 + -0x2f0));
      *(qword **)((long)register0x00000008 + -0x310) = unaff_x28;
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x260)) {
      return *(long *)((long)register0x00000008 + -0x2f8) -
             *(long *)((long)register0x00000008 + -0x310);
    }
    unaff_x30 = &DAT_002e4430;
    auVar69 = ___stack_chk_fail();
    param_6 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x350);
  } while( true );
}

