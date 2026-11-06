/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3c874:9bc52d85c4
 */

/* WARNING: Possible PIC construction at 0x0003c9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00017c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00017cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00017c54) */
/* WARNING: Removing unreachable block (ram,0x00017cb8) */
/* WARNING: Removing unreachable block (ram,0x0003cec8) */
/* WARNING: Removing unreachable block (ram,0x0003d390) */
/* WARNING: Removing unreachable block (ram,0x00017d14) */

qword * FUN_0003c874(char *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  qword qVar2;
  uint uVar3;
  byte bVar4;
  undefined8 ****ppppuVar5;
  undefined1 auVar6 [16];
  char **ppcVar7;
  int iVar8;
  undefined8 uVar9;
  code *pcVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  char *pcVar14;
  qword *pqVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  undefined8 unaff_x19;
  ulong unaff_x20;
  char *unaff_x21;
  undefined8 uVar21;
  undefined1 *unaff_x22;
  char *unaff_x23;
  ulong unaff_x24;
  ulong *puVar22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char *pcStack_230;
  char *pcStack_228;
  undefined *apuStack_220 [2];
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  ulong auStack_1f8 [4];
  ulong uStack_1d8;
  undefined8 uStack_1c8;
  char cStack_1b1;
  ulong uStack_1b0;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  uint uStack_1a8;
  undefined *apuStack_1a0 [4];
  int aiStack_180 [30];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 ****ppppuStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [11];
  undefined1 auStack_d5 [48];
  undefined1 auStack_a5 [37];
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  uVar9 = uRam0000000002097058;
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = param_2;
  auVar24._8_8_ = uRam0000000002097058;
  auVar24._0_8_ = param_2;
  auVar23._8_8_ = unaff_x22;
// found on a paste site? it was re-uploaded illegally
  auVar23._0_8_ = unaff_x19;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  if (cRam000000000209706f < '\0') {
    if (qRam0000000002097060 != 0) {
      if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_0003d3ac;
      ppcVar7 = (char **)register0x00000008;
      uVar16 = qRam0000000002097060;
code_r0x00017ae8:
      do {
        uVar21 = auVar23._8_8_;
        uVar20 = auVar23._0_8_;
        *(undefined8 *)((long)ppcVar7 + -0x30) = uVar21;
        *(char **)((long)ppcVar7 + -0x28) = unaff_x21;
        *(ulong *)((long)ppcVar7 + -0x20) = unaff_x20;
        *(undefined8 *)((long)ppcVar7 + -0x18) = uVar20;
        *(undefined1 **)((long)ppcVar7 + -0x10) = unaff_x29;
        *(undefined **)((long)ppcVar7 + -8) = unaff_x30;
        if (uVar16 < 0x7ffffffffffffff7) {
          if (uVar16 < 0x17) {
            param_1[0x17] = (char)uVar16;
            pcVar14 = param_1;
          }
          else {
// WM - if you paid for this, you were scammed
            uVar18 = (uVar16 & 0x7ffffffffffffff8) + 8;
            uVar19 = 0x19;
            if (uVar18 != 0x18) {
              uVar19 = uVar18;
            }
            pcVar14 = (char *)__Znwm(uVar19);
            *(char **)param_1 = pcVar14;
            *(ulong *)(param_1 + 8) = uVar16;
            *(ulong *)(param_1 + 0x10) = uVar19 | 0x8000000000000000;
          }
                    /* WARNING: Could not recover jumptable at 0x01a17b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pqVar15 = (qword *)(*(code *)PTR__memmove_01f24c10)(pcVar14,uVar9,uVar16 + 1);
          return pqVar15;
        }
        auVar23 = FUN_0000aa50(param_1,uVar9);
        auVar23._8_8_ = auVar23._8_8_;
        puVar22 = auVar23._0_8_;
        *(ulong *)((long)ppcVar7 + -0x70) = unaff_x24;
        *(char **)((long)ppcVar7 + -0x68) = unaff_x23;
        *(undefined8 *)((long)ppcVar7 + -0x60) = uVar21;
        *(char **)((long)ppcVar7 + -0x58) = unaff_x21;
        *(ulong *)((long)ppcVar7 + -0x50) = unaff_x20;
        *(undefined8 *)((long)ppcVar7 + -0x48) = uVar20;
        *(undefined1 **)((long)ppcVar7 + -0x40) = (undefined1 *)((long)ppcVar7 + -0x10);
        *(undefined **)((long)ppcVar7 + -0x38) = &SUB_00017b78;
        unaff_x29 = (undefined1 *)((long)ppcVar7 + -0x40);
        unaff_x20 = *puVar22;
        unaff_x21 = (char *)(puVar22[1] - unaff_x20);
        uVar16 = ((long)unaff_x21 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar16) {
          FUN_0000abb4();
code_r0x00017ca8:
/* wm:found on a paste site? it was re-uploaded illegally */
          uVar9 = func_0x0000a888();
          *(ulong *)((long)ppcVar7 + -0xc0) = unaff_x20;
          *(undefined8 *)((long)ppcVar7 + -0xb8) = uVar9;
          *(undefined1 **)((long)ppcVar7 + -0xb0) = unaff_x29;
          *(undefined **)((long)ppcVar7 + -0xa8) = &UNK_00017cb8;
          lVar12 = *(long *)((long)ppcVar7 + -0x88);
          while (*(long *)((long)ppcVar7 + -0x90) != lVar12) {
            lVar12 = lVar12 + -0x18;
            *(long *)((long)ppcVar7 + -0x88) = lVar12;
          }
          if (*(qword *)((long)ppcVar7 + -0x98) != 0) {
            __ZdlPv();
          }
          return (qword *)((long)ppcVar7 + -0x98);
        }
        lVar12 = (long)(puVar22[2] - unaff_x20) >> 3;
        uVar18 = lVar12 * 0x5555555555555556;
        if (uVar18 <= uVar16) {
          uVar18 = uVar16;
        }
        if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
          uVar18 = 0xaaaaaaaaaaaaaaa;
/* donate: donate/README.md */
        }
        *(ulong **)((long)ppcVar7 + -0x78) = puVar22 + 2;
        if (uVar18 == 0) {
          lVar12 = 0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar18) goto code_r0x00017ca8;
          lVar12 = __Znwm(uVar18 * 0x18);
        }
        param_1 = unaff_x21 + lVar12;
        *(long *)((long)ppcVar7 + -0x98) = lVar12;
        *(char **)((long)ppcVar7 + -0x90) = param_1;
        unaff_x24 = lVar12 + uVar18 * 0x18;
        *(char **)((long)ppcVar7 + -0x88) = param_1;
        *(ulong *)((long)ppcVar7 + -0x80) = unaff_x24;
        if (-1 < *(char *)((long)auVar23._8_8_ + 0x17)) {
          uVar9 = *auVar23._8_8_;
          *(undefined8 *)(param_1 + 8) = auVar23._8_8_[1];
          *(undefined8 *)param_1 = uVar9;
          *(undefined8 *)(param_1 + 0x10) = auVar23._8_8_[2];
          _memcpy((long)param_1 - (long)unaff_x21,unaff_x20,unaff_x21);
          *puVar22 = (long)param_1 - (long)unaff_x21;
          puVar22[1] = (ulong)(param_1 + 0x18);
          puVar22[2] = unaff_x24;
          if (unaff_x20 != 0) {
            __ZdlPv(unaff_x20);
          }
          return (qword *)(param_1 + 0x18);
        }
        uVar9 = *auVar23._8_8_;
        uVar16 = auVar23._8_8_[1];
/* wm:donate: donate/README.md */
        unaff_x30 = &UNK_00017c54;
        ppcVar7 = (char **)((long)ppcVar7 + -0xa0);
        unaff_x23 = param_1;
      } while( true );
    }
  }
  else if (cRam000000000209706f != '\0') {
    *(qword *)(param_1 + 8) = qRam0000000002097060;
    *(undefined8 *)param_1 = uVar9;
    *(qword *)(param_1 + 0x10) = CONCAT17(cRam000000000209706f,uRam0000000002097068);
    auVar24 = auVar6;
    goto LAB_0003c8d0;
  }
  if ((bRam000000000208ece0 & 1) == 0) goto LAB_0003d3b0;
  do {
    auVar23._8_8_ = unaff_x22;
    auVar23._0_8_ = param_1;
    if ((bRam000000000208ece8 & 1) == 0) {
      func_0x0199606c();
    }
    auVar24 = __ZNSt3__15mutex4lockEv(0x1f26d70);
    if ((long)qRam000000000208fca0 < 0) {
      if (qRam000000000208fc98 != 0) {
        unaff_x30 = (undefined *)0x3c9cc;
        ppcVar7 = &pcStack_230;
// origin: github.com/pengussy
        uVar9 = uRam000000000208fc90;
        uVar16 = qRam000000000208fc98;
        unaff_x29 = auStack_68 + 0x58;
        goto code_r0x00017ae8;
      }
LAB_0003ca0c:
      __ZNSt3__15mutex6unlockEv(0x1f26d70);
      ppppuStack_f8 = (undefined8 ****)0x0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      pcVar10 = (code *)func_0x0011ab24(PTR__gethostuuid_01f20320);
      iVar8 = (*pcVar10)(auStack_80,&uStack_108);
      if (iVar8 == 0) {
        pcVar10 = (code *)func_0x0011ab24(PTR__uuid_unparse_01f20438);
        (*pcVar10)(auStack_80,auStack_a5);
        func_0x001284e8(&ppppuStack_f8,auStack_a5);
        pcVar10 = (code *)func_0x0011ab24(&SUB_004c40a4);
        uVar16 = uStack_f0;
        ppppuVar5 = ppppuStack_f8;
        if (-1 < (long)uStack_e8) {
          uVar16 = uStack_e8 >> 0x38;
          ppppuVar5 = &ppppuStack_f8;
        }
        lVar12 = (*pcVar10)(ppppuVar5,uVar16,auStack_d5);
// unlicensed copy if this notice is missing
        if (lVar12 == 0) {
          pbVar11 = (byte *)(*pcRam00000000020623a0)();
          if ((*pbVar11 & 1) == 0) {
            func_0x019960fc();
          }
          pcStack_230 = (char *)(*pcRam0000000002062388)();
          if (*pcStack_230 == '\x01') {
            uVar3 = (byte)pcStack_230[1] ^ 0xce4a3512;
            uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) + 0xeefaff9d ^ 0x58c441;
            pcStack_230[7] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) + 0x2f;
            uVar16 = (((ulong)(byte)pcStack_230[1] ^ 0x298ac85b914a2e64) << 0x11 | 0x5315) +
                     0x9e3779b97f4a7c15;
            uVar18 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar18 ^ uVar18 >> 0x21;
            uVar3 = (uint)(byte)pcStack_230[2] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar18 >> 0x29) | 1);
            pcStack_230[8] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar19;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_230[2]) << 0x11) + 0x9e3779b97f4a7c16
            ;
// WM - stripping the watermark breaks the license
            uVar18 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar18 ^ uVar18 >> 0x21;
            uVar3 = (uint)(byte)pcStack_230[3] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar18 >> 0x29) | 1);
            pcStack_230[9] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar19;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_230[3]) << 0x11) + 0x9e3779b97f4a7c17
            ;
            uVar18 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar18 ^ uVar18 >> 0x21;
            uVar3 = (uint)(byte)pcStack_230[4] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar18 >> 0x29) | 1);
            pcStack_230[10] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar19;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_230[4]) << 0x11) + 0x9e3779b97f4a7c18
            ;
            uVar18 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar18 ^ uVar18 >> 0x21;
            uVar3 = (uint)(byte)pcStack_230[5] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar19 >> 0x17) ^
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                    ((uint)(uVar18 >> 0x29) | 1);
            pcStack_230[0xb] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar19;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_230[5]) << 0x11) + 0x9e3779b97f4a7c19
            ;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar16 ^ uVar16 >> 0x21;
            uVar3 = (uint)(byte)pcStack_230[6] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar18 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_230[0xc] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar18;
            *pcStack_230 = '\0';
          }
          pcStack_230 = pcStack_230 + 7;
          unaff_x20 = func_0x0011ab24(&pcStack_230);
          unaff_x21 = (char *)_strlen();
          if ((char *)0x7ffffffffffffff6 < unaff_x21) {
            FUN_0000aa50();
            goto LAB_0003d3d4;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
          }
          if ((undefined8 *)((long)&MACH_HEADER.sizeofcmds + 2) < unaff_x21) {
            puVar1 = (undefined1 *)(((ulong)unaff_x21 & 0x7ffffffffffffff8) + 8);
            unaff_x22 = (undefined1 *)((long)&MACH_HEADER.flags + 1);
            if ((dword *)puVar1 != &MACH_HEADER.flags) {
              unaff_x22 = puVar1;
            }
            pcVar14 = (char *)__Znwm(unaff_x22);
            goto LAB_0003ce9c;
          }
LAB_0003cd4c:
          param_1[0x17] = (char)unaff_x21;
          goto LAB_0003ceac;
        }
        func_0x0003d474(apuStack_220);
        lVar12 = 0;
        puVar22 = auStack_1f8;
        do {
          *(uint *)(auStack_200 + *(long *)(puStack_210 + -0x18) + -8) =
               *(uint *)(auStack_200 + *(long *)(puStack_210 + -0x18) + -8) & 0xffffffb5 | 8;
          *(undefined8 *)((long)puVar22 + *(long *)(puStack_210 + -0x18)) = 2;
          lVar17 = *(long *)(puStack_210 + -0x18);
          unaff_x22 = (undefined1 *)((long)&puStack_210 + lVar17);
          if (*(int *)((long)aiStack_180 + lVar17) == -1) {
// thanks for reading - discord.gg/sdkhDjTex
            __ZNKSt3__18ios_base6getlocEv(auStack_e0,unaff_x22);
            plVar13 = (long *)__ZNKSt3__16locale9use_facetERNS0_2idE
                                        (auStack_e0,PTR___ZNSt3__15ctypeIcE2idE_01f204b0);
            (**(code **)(*plVar13 + 0x38))(plVar13,0x20);
            __ZNSt3__16localeD1Ev(auStack_e0);
          }
          *(undefined4 *)((long)aiStack_180 + lVar17) = 0x30;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&puStack_210,auStack_d5[lVar12]);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x30);
        if ((uStack_1a8 >> 4 & 1) == 0) {
          if ((uStack_1a8 >> 3 & 1) != 0) {
            uVar16 = auStack_1f8[2];
            goto LAB_0003d21c;
          }
          pcVar14 = (char *)0x0;
          unaff_x20 = 0;
LAB_0003d240:
          param_1[0x17] = (char)unaff_x20;
          unaff_x21 = param_1;
          unaff_x23 = segment_command_00000020.segname + 8;
        }
        else {
          if (uStack_1b0 < uStack_1d8) {
            uStack_1b0 = uStack_1d8;
          }
          puVar22 = auStack_1f8 + 3;
          uVar16 = uStack_1b0;
LAB_0003d21c:
          pcVar14 = (char *)*puVar22;
          unaff_x20 = uVar16 - (long)pcVar14;
          if (0x7ffffffffffffff6 < unaff_x20) {
            FUN_0000aa50();
LAB_0003d3d4:
                    /* WARNING: Does not return */
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x3d3d8);
            (*pcVar10)();
          }
          if (unaff_x20 < 0x17) goto LAB_0003d240;
          puVar1 = (undefined1 *)((unaff_x20 & 0x7ffffffffffffff8) + 8);
          unaff_x22 = (undefined1 *)((long)&MACH_HEADER.flags + 1);
          if ((dword *)puVar1 != &MACH_HEADER.flags) {
            unaff_x22 = puVar1;
          }
          unaff_x21 = (char *)__Znwm(unaff_x22);
          *(char **)param_1 = unaff_x21;
          *(ulong *)(param_1 + 8) = unaff_x20;
          *(ulong *)(param_1 + 0x10) = (ulong)unaff_x22 | 0x8000000000000000;
          unaff_x23 = pcVar14;
        }
        unaff_x24 = 0x208f000;
        _memmove(unaff_x21,pcVar14,unaff_x20);
        unaff_x21[unaff_x20] = '\0';
        __ZNSt3__15mutex4lockEv(0x1f26d70);
        if (param_1 != (char *)0x208fc90) {
          bVar4 = param_1[0x17];
          if ((long)qRam000000000208fca0 < 0) {
            qVar2 = *(qword *)(param_1 + 8);
            pcVar14 = *(char **)param_1;
            if (-1 < (char)bVar4) {
              qVar2 = (ulong)bVar4;
              pcVar14 = param_1;
/*  no support for modified copies  */
            }
            func_0x001286c0(0x208fc90,pcVar14,qVar2);
          }
          else if ((char)bVar4 < '\0') {
            func_0x001287e0(0x208fc90,*(undefined8 *)param_1,*(qword *)(param_1 + 8));
          }
          else {
            qRam000000000208fc98 = *(qword *)(param_1 + 8);
            uRam000000000208fc90 = *(undefined8 *)param_1;
            qRam000000000208fca0 = *(qword *)(param_1 + 0x10);
          }
        }
        __ZNSt3__15mutex6unlockEv(0x1f26d70);
        param_1 = (char *)apuStack_220;
        apuStack_220[0] = &UNK_01dbed58;
        puStack_210 = &UNK_01dbed80;
        apuStack_1a0[0] = &UNK_01dbeda8;
/* if you paid for this, you were scammed - github.com/pengussy */
        puStack_208 = &UNK_01dbef48;
        if (cStack_1b1 < '\0') {
          __ZdlPv(uStack_1c8);
        }
        puStack_208 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
        __ZNSt3__16localeD1Ev(auStack_200);
        __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(apuStack_220,&UNK_01dbedc0);
        auVar24 = __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_1a0);
      }
      else {
        pbVar11 = (byte *)(*pcRam0000000002062370)();
        if ((*pbVar11 & 1) == 0) {
          func_0x019960c0();
        }
        pcStack_228 = (char *)(*pcRam0000000002062358)();
        if (*pcStack_228 == '\x01') {
          uVar3 = (byte)pcStack_228[1] ^ 0x7e8caa9a;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) + 0xd6ed3efe;
          pcStack_228[7] = ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') + 0xbb ^ 0x59;
          uVar16 = (((ulong)(byte)pcStack_228[1] ^ 0xde67042950ca965c) << 0x11 | 0x1bcce) +
                   0x9e3779b97f4a7c15;
          uVar18 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar3 = (uint)(byte)pcStack_228[2] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar19 >> 0x17);
          pcStack_228[8] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar18 >> 0x29) | 1) ^
               (byte)uVar19;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_228[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar18 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar3 = (uint)(byte)pcStack_228[3] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar19 >> 0x17);
          pcStack_228[9] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar18 >> 0x29) | 1) ^
/* WM - stripping the watermark breaks the license */
               (byte)uVar19;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_228[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar18 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar3 = (uint)(byte)pcStack_228[4] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar19 >> 0x17);
          pcStack_228[10] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar18 >> 0x29) | 1) ^
               (byte)uVar19;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_228[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar18 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar3 = (uint)(byte)pcStack_228[5] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar19 >> 0x17);
          pcStack_228[0xb] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar18 >> 0x29) | 1) ^
               (byte)uVar19;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_228[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar16 ^ uVar16 >> 0x21;
          uVar3 = (uint)(byte)pcStack_228[6] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar18 >> 0x17);
          pcStack_228[0xc] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar18;
          *pcStack_228 = '\0';
        }
        pcStack_228 = pcStack_228 + 7;
        unaff_x20 = func_0x0011ab24(&pcStack_228);
        unaff_x21 = (char *)_strlen();
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        if ((char *)0x7ffffffffffffff6 < unaff_x21) {
          FUN_0000aa50();
          goto LAB_0003d3d4;
        }
        if (unaff_x21 < (undefined8 *)((long)&MACH_HEADER.sizeofcmds + 3)) goto LAB_0003cd4c;
        puVar1 = (undefined1 *)(((ulong)unaff_x21 & 0x7ffffffffffffff8) + 8);
        unaff_x22 = (undefined1 *)((long)&MACH_HEADER.flags + 1);
        if ((dword *)puVar1 != &MACH_HEADER.flags) {
          unaff_x22 = puVar1;
        }
        pcVar14 = (char *)__Znwm(unaff_x22);
LAB_0003ce9c:
        *(char **)param_1 = pcVar14;
        *(char **)(param_1 + 8) = unaff_x21;
        *(ulong *)(param_1 + 0x10) = (ulong)unaff_x22 | 0x8000000000000000;
        param_1 = pcVar14;
LAB_0003ceac:
        auVar24 = _memmove(param_1,unaff_x20,unaff_x21);
        param_1[(long)unaff_x21] = '\0';
/* keep the notice, keep the source honest */
      }
LAB_0003c8d0:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return auVar24._0_8_;
      }
    }
    else {
      if (qRam000000000208fca0._7_1_ == '\0') goto LAB_0003ca0c;
      *(qword *)(param_1 + 8) = qRam000000000208fc98;
      *(undefined8 *)param_1 = uRam000000000208fc90;
      *(qword *)(param_1 + 0x10) = qRam000000000208fca0;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x01a171bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pqVar15 = (qword *)(*(code *)PTR___ZNSt3__15mutex6unlockEv_01f245f0)(0x1f26d70);
        return pqVar15;
      }
    }
LAB_0003d3ac:
    ___stack_chk_fail(auVar24._0_8_,auVar24._8_8_);
LAB_0003d3b0:
    func_0x01996020();
  } while( true );
}

