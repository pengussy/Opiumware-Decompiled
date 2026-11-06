/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x118380:5d867c202a
   =========================================================================== */

undefined8 FUN_00118380(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  byte *pbVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
/* WM - chat: discord.gg/sdkhDjTex */
  byte *pbVar28;
  int iVar29;
  undefined8 unaff_x25;
  undefined *puVar30;
  char *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  int aiStack_130 [6];
  long lStack_118;
  long *plStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  char *pcStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
/*  more drops soon - github.com/pengussy  */
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  pcVar8 = (char *)(*pcRam000000000206e2c8)();
  pcVar17 = pcVar8 + 0x22;
  puVar30 = &UNK_000020c6;
  pcStack_a0 = pcRam000000000206e2e0;
  do {
    uVar9 = _socket(2,1,0);
    uVar10 = uVar9;
    if ((int)uVar9 != -1) {
      uStack_8c = 1;
      _setsockopt(uVar9,0xffff,4,&uStack_8c,4);
      uStack_70 = 0;
      uStack_78 = CONCAT44(0x100007f,
                           CONCAT22((ushort)((ulong)puVar30 >> 8) & 0xff |
                                    (ushort)(((uint)puVar30 & 0xff00ff) << 8),0x200));
      iVar3 = _bind(uVar9,&uStack_78,0x10);
      if (iVar3 == 0) {
        iVar3 = _listen(uVar9,0x80);
        if (iVar3 < 0) {
          uVar10 = _close(uVar9);
        }
        else {
          while( true ) {
            while( true ) {
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_90 = 0x10;
              unaff_x25 = _accept(uVar9,&uStack_88,&uStack_90);
              if ((int)unaff_x25 < 0) break;
              __ZNSt3__15mutex4lockEv(0x20971f8);
/* wm:watermarked copy - do not remove */
              if (((bRam0000000002097268 & 1) == 0) && (uRam00000000020971f0 < 0x400)) {
                uVar22 = 0;
                if (lRam00000000020971d8 != lRam00000000020971d0) {
                  uVar22 = (lRam00000000020971d8 - lRam00000000020971d0) * 0x10 - 1;
                }
                uVar23 = lRam00000000020971e8 + uRam00000000020971f0;
                if (uVar22 == uVar23) {
                  FUN_0012d4cc(0x20971c8);
                  uVar23 = lRam00000000020971e8 + uRam00000000020971f0;
                }
                puVar19 = (undefined8 *)
                          (*(long *)(lRam00000000020971d0 + (uVar23 >> 7) * 8) +
                          (uVar23 & 0x7f) * 0x20);
                *puVar19 = &UNK_01dbfec0;
                *(int *)(puVar19 + 1) = (int)unaff_x25;
                puVar19[3] = puVar19;
                uRam00000000020971f0 = uRam00000000020971f0 + 1;
                __ZNSt3__15mutex6unlockEv(0x20971f8);
                __ZNSt3__118condition_variable10notify_oneEv(0x2097238);
              }
              else {
                __ZNSt3__15mutex6unlockEv(0x20971f8);
                _close(unaff_x25);
              }
            }
// WM - chat: discord.gg/sdkhDjTex
            piVar11 = (int *)___error();
            if ((*piVar11 == 0x18) || (piVar11 = (int *)___error(), *piVar11 == 0x17)) break;
            pbVar15 = (byte *)(*pcStack_a0)(0x206e2e0);
            if ((*pbVar15 & 1) == 0) {
              func_0x019c9eec();
            }
            if (*pcVar8 == '\x01') {
              func_0x019c9f28(pcVar8,pcVar8 + 1,pcVar8 + 0x22);
            }
            pcStack_98 = pcVar17;
            func_0x0011ab24(&pcStack_98,pcVar17);
            _perror();
          }
          uVar10 = _close(uVar9);
        }
      }
      else {
        uVar10 = _close(uVar9);
      }
    }
    uVar4 = (uint)puVar30 + 1;
    puVar30 = (undefined *)(ulong)uVar4;
  } while (uVar4 != 0x20e5);
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
/* keep the notice, keep the source honest - github.com/pengussy */
    return uVar10;
  }
  uVar10 = ___stack_chk_fail();
  __ZNSt3__15mutex6unlockEv(0x20971f8);
  __Unwind_Resume(uVar10);
  lVar12 = __Unwind_Resume();
  uStack_100 = 0x2097000;
  uStack_f8 = 0x10;
  puStack_d8 = &UNK_000020e5;
  uStack_d0 = 0x20971f8;
  uStack_c8 = 0x20971d0;
  pcStack_a8 = FUN_00118654;
  puStack_f0 = puVar30;
  uStack_e8 = unaff_x25;
  uStack_e0 = uVar9;
  pcStack_c0 = pcVar17;
  uStack_b8 = uVar10;
  lStack_b0 = (long)register0x00000008 + -0x10;
  iVar3 = func_0x00159078(lVar12,1);
  if (((((iVar3 != 0) && (uVar4 = func_0x00792558(lVar12,1), 7 < uVar4)) &&
       (plVar13 = (long *)func_0x007926a8(lVar12,1), plVar13 != (long *)0x0)) &&
      ((iVar3 = func_0x0003c0e8(*plVar13), iVar3 != 0 &&
       (lVar25 = *plVar13, *(long *)(lVar25 + 0x20) != 0)))) &&
     (plVar14 = (long *)__ZNSt3__119__shared_weak_count4lockEv(), plVar14 != (long *)0x0)) {
    lVar27 = *(long *)(lVar25 + 0x18);
    lVar26 = *(long *)*plVar13;
    LOAcquire();
    lVar25 = plVar14[1];
    plVar14[1] = lVar25 + -1;
    LORelease();
    if (lVar25 == 0) {
      (**(code **)(*plVar14 + 0x10))();
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    }
    if ((lVar27 != 0) && (lVar26 != 0)) {
      pbVar15 = (byte *)(*pcRam000000000206e3a0)();
      if ((*pbVar15 & 1) == 0) {
        func_0x019c9fe0();
      }
      pcStack_138 = (char *)(*pcRam000000000206e388)();
      if (*pcStack_138 == '\x01') {
        lVar25 = 0;
        uVar22 = 0x2b001efb7e749050;
        do {
          uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
          uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
          uVar24 = uVar23 ^ uVar23 >> 0x21;
          uVar4 = (uint)(byte)pcStack_138[lVar25 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
          uVar4 = (uVar4 >> 6 & 3 | uVar4 << 2) -
                  (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
          pcStack_138[lVar25 + 0x10] =
               ((byte)(uVar4 >> 4) & 0xf | (char)uVar4 * '\x10') ^ (byte)uVar24;
          uVar22 = lVar25 + -0x61c8864680b583eb +
                   (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_138[lVar25 + 1]) << 0x11);
          lVar25 = lVar25 + 1;
        } while (lVar25 != 0xf);
        *pcStack_138 = '\0';
      }
      pcStack_138 = pcStack_138 + 0x10;
      uVar10 = func_0x0011ab24(&pcStack_138);
      func_0x007930d0(lVar12,FUN_000f1584,uVar10,0,0);
      func_0x00791ab0(lVar12,1);
      iVar3 = func_0x00794a14(lVar12,1,1,0);
      if (iVar3 != 0) goto LAB_00119c08;
      uVar10 = func_0x00791624(lVar12,0xffffffff);
      func_0x00157ab0(lVar12,lVar26,lVar27,1);
      uVar9 = func_0x00791624(lVar12,0xffffffff);
      func_0x00793a78(lVar12,uVar9,lVar27,0);
      iVar3 = func_0x00791be4(lVar12,0xffffffff);
      if (iVar3 == 7) {
        func_0x00157cc8(lVar12,0xffffffff);
/* WM - no support for modified copies */
      }
      func_0x00791660(lVar12,0xfffffffe);
      func_0x00793bd0(lVar12,0,0);
      uVar16 = func_0x00791624(lVar12,0xffffffff);
      func_0x00791ab0(lVar12,uVar16);
      func_0x007945e4(lVar12,uVar9,lVar27,0);
      func_0x00791ab0(lVar12,2);
      func_0x00794504(lVar12,uVar16,1);
      func_0x00791ab0(lVar12,1);
      func_0x00794504(lVar12,uVar16,2);
      func_0x007933b8(lVar12,uRam0000000001f26d30,0);
      func_0x00794504(lVar12,uVar16,3);
      func_0x007932d0(lVar12,1);
      func_0x00794504(lVar12,uVar16,5);
      func_0x00793bd0(lVar12,0,0);
      uVar5 = func_0x00791624(lVar12,0xffffffff);
      func_0x00791ab0(lVar12);
      func_0x00794504(lVar12,uVar16,4);
      iVar3 = func_0x00792558(lVar12,uVar10);
      if (0 < iVar3) {
        pcVar17 = (char *)(*pcRam000000000206e3b8)();
        pcVar8 = (char *)(*pcRam000000000206e3e8)();
        pcVar18 = (char *)(*pcRam000000000206e418)();
        iVar29 = 1;
        do {
          while( true ) {
            func_0x00793928(lVar12,uVar10,iVar29);
            uVar9 = func_0x00791624(lVar12,0xffffffff);
            iVar6 = func_0x00791be4(lVar12,uVar9);
            if ((((iVar6 == 9) && (uVar4 = func_0x00792558(lVar12,uVar9), 0x17 < uVar4)) &&
                (puVar19 = (undefined8 *)func_0x007926a8(lVar12,uVar9), puVar19 != (undefined8 *)0x0
                )) && (iVar6 = func_0x0003c0e8(*puVar19), iVar6 != 0)) break;
LAB_00118ba0:
            func_0x00791660(lVar12,0xfffffffe);
joined_r0x00118b98:
            iVar3 = iVar3 + -1;
            iVar29 = iVar29 + 1;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            if (iVar3 == 0) {
              return 0;
            }
          }
          FUN_000e2390(aiStack_130,*puVar19);
          if (((aiStack_130[0] == 1) && (lStack_118 != 0)) &&
             ((iVar6 = func_0x0003c0e8(*(undefined8 *)(lStack_118 + 0x28)), iVar6 != 0 &&
              (*(long *)(*(long *)(lStack_118 + 0x28) + 0x38) == *(long *)(lVar12 + 0x38))))) {
            iVar6 = *(int *)(lStack_118 + 0x34);
            plVar13 = plStack_110;
            uVar2 = uStack_108;
          }
          else {
            iVar6 = 0;
            plVar13 = plStack_110;
            uVar2 = 0;
          }
          plStack_110 = plVar13;
          if (plVar13 != (long *)0x0) {
            LOAcquire();
            lVar25 = plVar13[1];
            plVar13[1] = lVar25 + -1;
            LORelease();
/* WM - proprietary - see LICENSE - do not sell */
            if (lVar25 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          if (iVar6 < 1) goto LAB_00118ba0;
          func_0x00793928(lVar12,0xffffd8f0,iVar6);
          iVar7 = func_0x00791be4(lVar12,0xffffffff);
          if ((iVar7 != 8) || (iVar7 = func_0x00791c98(lVar12,0xffffffff), iVar7 != 0)) {
            func_0x00791660(lVar12,0xfffffffd);
            goto joined_r0x00118b98;
          }
          uVar20 = func_0x00791624(lVar12,0xffffffff);
          func_0x00794054(lVar12);
          pbVar15 = (byte *)(*pcRam000000000206e3d0)();
          if ((*pbVar15 & 1) == 0) {
            func_0x019ca01c();
            cVar1 = *pcVar17;
          }
          else {
            cVar1 = *pcVar17;
          }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          if (cVar1 == '\x01') {
            uVar4 = (byte)pcVar17[1] ^ 0xcf5a00c4;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) + 0x5386f9f;
            pcVar17[8] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') + 0x4f ^ 7;
            uVar22 = (((ulong)(byte)pcVar17[1] ^ 0xc712128158137494) << 0x11 | 0x18e24) +
                     0x9e3779b97f4a7c15;
            uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
            uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
            uVar24 = uVar23 ^ uVar23 >> 0x21;
            uVar4 = (uint)(byte)pcVar17[2] ^ (uint)uVar24 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar24 >> 0x17);
            pcVar17[9] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                         ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
            uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar17[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
            uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
            uVar24 = uVar23 ^ uVar23 >> 0x21;
            uVar4 = (uint)(byte)pcVar17[3] ^ (uint)uVar24 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar24 >> 0x17);
            pcVar17[10] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                          ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
            uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar17[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
            uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
            uVar24 = uVar23 ^ uVar23 >> 0x21;
            uVar4 = (uint)(byte)pcVar17[4] ^ (uint)uVar24 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar24 >> 0x17);
            pcVar17[0xb] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                           ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
            uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar17[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
            uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
            uVar24 = uVar23 ^ uVar23 >> 0x21;
            uVar4 = (uint)(byte)pcVar17[5] ^ (uint)uVar24 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar24 >> 0x17);
            pcVar17[0xc] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                           ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
            uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar17[5]) << 0x11) + 0x9e3779b97f4a7c19;
            uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
            uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
            uVar24 = uVar23 ^ uVar23 >> 0x21;
            uVar4 = (uint)(byte)pcVar17[6] ^ (uint)uVar24 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar24 >> 0x17);
            pcVar17[0xd] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                           ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
            uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar17[6]) << 0x11) + 0x9e3779b97f4a7c1a;
            uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
            uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
            uVar23 = uVar22 ^ uVar22 >> 0x21;
            uVar4 = (uint)(byte)pcVar17[7] ^ (uint)uVar23 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar23 >> 0x17);
            pcVar17[0xe] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                           ((byte)(uVar22 >> 0x29) | 1) ^ (byte)uVar23;
            *pcVar17 = '\0';
          }
          pcStack_140 = pcVar17 + 8;
          uVar21 = func_0x0011ab24(&pcStack_140);
          func_0x00793714(lVar12,0xffffffff,uVar21);
          iVar7 = func_0x00791efc(lVar12,0xffffffff);
          if (iVar7 == 0) {
LAB_001198a0:
            func_0x00791660(lVar12,0xfffffffd);
LAB_001198ac:
            func_0x00793bd0(lVar12,0,0);
            uVar21 = func_0x00791624(lVar12,0xffffffff);
            func_0x00792bf4(lVar12,iVar6);
            func_0x00794504(lVar12,uVar21,1);
/*  thanks for reading - discord.gg/sdkhDjTex  */
            func_0x00791ab0(lVar12,uVar20);
            func_0x00794504(lVar12,uVar21,2);
            func_0x00791ab0(lVar12,uVar9);
            func_0x00794504(lVar12,uVar21,4);
            func_0x00792bf4(lVar12,iVar29);
            func_0x00794504(lVar12,uVar21,5);
            func_0x007932d0(lVar12,uVar2);
            func_0x00794504(lVar12,uVar21,6);
            func_0x00791ab0(lVar12,uVar16);
            func_0x00791ab0(lVar12,uVar21);
            func_0x007930d0(lVar12,FUN_00157e90,0,2,&DAT_00159064);
            puVar19 = (undefined8 *)func_0x00790f58(lVar12,0xffffffff);
            pbVar28 = (byte *)*puVar19;
            plVar13 = (long *)func_0x00790f58(lVar12,uVar20);
            pbVar15 = *(byte **)(*plVar13 + 0x10);
            *(byte **)(pbVar28 + 0x10) = pbVar15;
            if (((*pbVar28 >> 2 & 1) != 0) && ((*pbVar15 & 3) != 0)) {
              func_0x0081b3dc(lVar12,pbVar28);
            }
            func_0x0080dc58(lVar12,pbVar28,1);
            func_0x00791ab0(lVar12,0xffffffff);
            func_0x00794504(lVar12,uVar21,3);
            func_0x00791ab0(lVar12,uVar21);
            func_0x00794504(lVar12,uVar5);
            func_0x00794504(lVar12,0xffffd8f0,iVar6);
            uVar9 = 0xfffffffc;
          }
          else {
// reversing this took months of machine time
            pbVar15 = (byte *)(*pcRam000000000206e400)();
            if ((*pbVar15 & 1) == 0) {
              func_0x019ca058();
              cVar1 = *pcVar8;
            }
            else {
              cVar1 = *pcVar8;
            }
            if (cVar1 == '\x01') {
              uVar4 = (byte)pcVar8[1] ^ 0xbb5d9e09;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) + 0xeeb8b377;
              pcVar8[0xb] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') + 0xaf ^ 0xca;
              uVar22 = (((ulong)(byte)pcVar8[1] ^ 0x3b6b49e6f0376c9e) << 0x11 | 0x76d6) +
                       0x9e3779b97f4a7c15;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar8[2] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar24 >> 0x17);
              pcVar8[0xc] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                            ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar8[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* if you paid for this, you were scammed */
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar8[3] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar24 >> 0x17);
              pcVar8[0xd] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                            ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar8[3]) << 0x11) + 0x9e3779b97f4a7c17;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar8[4] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar24 >> 0x17);
              pcVar8[0xe] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                            ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar8[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar8[5] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar24 >> 0x17);
              pcVar8[0xf] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                            ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar8[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar8[6] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar24 >> 0x17);
              pcVar8[0x10] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                             ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar8[7] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar24 >> 0x17);
              pcVar8[0x11] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
// found on a paste site? it was re-uploaded illegally
                             ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar8[8] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar24 >> 0x17);
              pcVar8[0x12] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                             ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar8[9] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar24 >> 0x17);
              pcVar8[0x13] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                             ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
              uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
              uVar23 = uVar22 ^ uVar22 >> 0x21;
/* do not claim this as your own */
              uVar4 = (uint)(byte)pcVar8[10] ^ (uint)uVar23 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar23 >> 0x17);
              pcVar8[0x14] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                             ((byte)(uVar22 >> 0x29) | 1) ^ (byte)uVar23;
              *pcVar8 = '\0';
            }
            pcStack_148 = pcVar8 + 0xb;
            uVar21 = func_0x0011ab24(&pcStack_148);
            func_0x007935a0(lVar12,0xffffffff,uVar21);
            lVar25 = func_0x00792368(lVar12,0xffffffff,0);
            if (lVar25 == 0) {
              func_0x00791660(lVar12,0xfffffffe);
              goto LAB_001198a0;
            }
            pbVar15 = (byte *)(*pcRam000000000206e430)();
            if ((*pbVar15 & 1) == 0) {
              func_0x019ca094();
              cVar1 = *pcVar18;
            }
            else {
              cVar1 = *pcVar18;
            }
            if (cVar1 == '\x01') {
              uVar4 = (byte)pcVar18[1] ^ 0x4093b657;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) + 0xe4632682 ^ 0x2406e7;
              pcVar18[0xc] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) + 0x6c;
              uVar22 = (((ulong)(byte)pcVar18[1] ^ 0xdda9d97420cbe1f3) << 0x11 | 0x1bb53) +
                       0x9e3779b97f4a7c15;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[2] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar24 >> 0x17) ^
                      ((uint)(uVar23 >> 0x29) | 1);
              pcVar18[0xd] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar18[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* wm:proprietary - see LICENSE - do not sell */
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[3] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar24 >> 0x17) ^
                      ((uint)(uVar23 >> 0x29) | 1);
              pcVar18[0xe] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar18[3]) << 0x11) + 0x9e3779b97f4a7c17;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[4] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar24 >> 0x17) ^
                      ((uint)(uVar23 >> 0x29) | 1);
              pcVar18[0xf] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar18[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[5] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar24 >> 0x17) ^
                      ((uint)(uVar23 >> 0x29) | 1);
              pcVar18[0x10] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar18[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[6] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar24 >> 0x17) ^
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                      ((uint)(uVar23 >> 0x29) | 1);
              pcVar18[0x11] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar18[6]) << 0x11) + 0x9e3779b97f4a7c1a;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[7] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar24 >> 0x17) ^
                      ((uint)(uVar23 >> 0x29) | 1);
              pcVar18[0x12] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar18[7]) << 0x11) + 0x9e3779b97f4a7c1b;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[8] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar24 >> 0x17) ^
                      ((uint)(uVar23 >> 0x29) | 1);
              pcVar18[0x13] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar18[8]) << 0x11) + 0x9e3779b97f4a7c1c;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[9] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar24 >> 0x17) ^
                      ((uint)(uVar23 >> 0x29) | 1);
              pcVar18[0x14] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar18[9]) << 0x11) + 0x9e3779b97f4a7c1d;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[10] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar24 >> 0x17) ^
                      ((uint)(uVar23 >> 0x29) | 1);
              pcVar18[0x15] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar18[10]) << 0x11) + 0x9e3779b97f4a7c1e;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
              uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
              uVar23 = uVar22 ^ uVar22 >> 0x21;
              uVar4 = (uint)(byte)pcVar18[0xb] ^ (uint)uVar23 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar23 >> 0x17) ^
                      ((uint)(uVar22 >> 0x29) | 1);
              pcVar18[0x16] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar23;
              *pcVar18 = '\0';
            }
            pcStack_150 = pcVar18 + 0xc;
            uVar21 = func_0x0011ab24(&pcStack_150);
            iVar7 = _strcmp(lVar25,uVar21);
            func_0x00791660(lVar12,0xfffffffe);
            func_0x00791660(lVar12,0xfffffffd);
            if (iVar7 != 0) goto LAB_001198ac;
            uVar9 = 0xfffffffd;
          }
          func_0x00791660(lVar12,uVar9);
          iVar29 = iVar29 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      return 0;
    }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  }
  pbVar15 = (byte *)(*pcRam000000000206e370)();
  if ((*pbVar15 & 1) == 0) goto LAB_00119c10;
  do {
    pcStack_158 = (char *)(*pcRam000000000206e358)();
    if (*pcStack_158 == '\x01') {
      lVar25 = 0;
      uVar22 = 0x254c36daacfb9bb2;
      do {
        uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
        uVar24 = uVar23 ^ uVar23 >> 0x21;
        uVar4 = (uint)(byte)pcStack_158[lVar25 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar24 >> 0x17) ^
                ((uint)(uVar23 >> 0x29) | 1);
        pcStack_158[lVar25 + 0x19] = ((byte)(uVar4 >> 7) & 1 | (byte)(uVar4 << 1)) - (char)uVar24;
        uVar22 = lVar25 + -0x61c8864680b583eb +
                 (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_158[lVar25 + 1]) << 0x11);
        lVar25 = lVar25 + 1;
      } while (lVar25 != 0x18);
      *pcStack_158 = '\0';
    }
    pcStack_158 = pcStack_158 + 0x19;
    uVar10 = func_0x0011ab24(&pcStack_158);
    func_0x007a1abc(lVar12,1,uVar10);
LAB_00119c08:
    func_0x00791198(lVar12);
LAB_00119c10:
    func_0x019ca0d0();
  } while( true );
}

