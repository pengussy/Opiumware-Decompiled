/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2904e0:ec9db052c2
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x002906a0) */
/* WARNING: Removing unreachable block (ram,0x002906a8) */
/* WARNING: Removing unreachable block (ram,0x002906cc) */
/* WARNING: Removing unreachable block (ram,0x002906d0) */
/* WARNING: Removing unreachable block (ram,0x002906d4) */
/* WARNING: Removing unreachable block (ram,0x002906d8) */
/* WARNING: Removing unreachable block (ram,0x002906dc) */
/* WARNING: Removing unreachable block (ram,0x002906e0) */
/* WARNING: Removing unreachable block (ram,0x002906e8) */
/* WARNING: Removing unreachable block (ram,0x0029070c) */
/* WARNING: Removing unreachable block (ram,0x00290710) */
/* WARNING: Removing unreachable block (ram,0x00290714) */
/* WARNING: Removing unreachable block (ram,0x00290718) */
/* WARNING: Removing unreachable block (ram,0x0029071c) */
/* WARNING: Removing unreachable block (ram,0x00290724) */
/* WARNING: Removing unreachable block (ram,0x00290764) */
/* WARNING: Removing unreachable block (ram,0x00290768) */
/* WARNING: Removing unreachable block (ram,0x00290644) */
/* WARNING: Removing unreachable block (ram,0x00290650) */
/* WARNING: Removing unreachable block (ram,0x002909a0) */
/* WARNING: Removing unreachable block (ram,0x002909a8) */
/* WARNING: Removing unreachable block (ram,0x00290bf8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_002904e0(undefined4 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  byte bVar9;
  int iVar10;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  long *plVar11;
  char *pcVar12;
  undefined1 **ppuVar13;
  byte bVar14;
  char *pcVar15;
  char *******pppppppcVar16;
  ulong uVar17;
  char *******pppppppcVar18;
  undefined1 *puStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [56];
  undefined8 uStack_140;
  char cStack_129;
  undefined *apuStack_118 [19];
  char *******pppppppcStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  
  func_0x00290c88(&puStack_198,param_2);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __ZdlPv(*param_2);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = uStack_190;
  *param_2 = puStack_198;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  param_2[2] = puStack_188;
  *param_1 = 0xf000000;
  *(undefined1 *)(param_1 + 1) = 0xf;
  pppppppcStack_80 = (char *******)0x0;
  pcStack_78 = (char *)0x0;
  uStack_70 = 0;
  func_0x00283400(&puStack_198,param_2,0x18);
  do {
    do {
      plVar11 = (long *)func_0x0028353c(&puStack_198,&pppppppcStack_80,0x3b);
      if ((*(byte *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 0x20) & 5) != 0) {
        puStack_198 = &UNK_01dbed58;
        puStack_188 = &UNK_01dbed80;
        apuStack_118[0] = &UNK_01dbeda8;
        puStack_180 = &UNK_01dbef48;
        if (cStack_129 < '\0') {
          __ZdlPv(uStack_140);
        }
        puStack_180 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
/* do not claim this as your own - github.com/pengussy */
        __ZNSt3__16localeD1Ev(auStack_178);
        __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&puStack_198,&UNK_01dbedc0);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_118);
        return param_1;
      }
      bVar9 = uStack_70._7_1_;
      if ((uStack_70._7_1_ == 0x12) &&
         ((pppppppcStack_80 == (char *******)0x617373656d726570 &&
          pcStack_78 == (char *)0x616c6665642d6567) && (short)uStack_70 == 0x6574)) {
        *(undefined1 *)param_1 = 1;
      }
      pcVar12 = (char *)__Znwm(0x19);
      uVar6 = s_server_max_window_bits__01c2dee7._0_8_;
      *(ulong *)(pcVar12 + 8) =
           CONCAT17(s_server_max_window_bits__01c2dee7[0xf],s_server_max_window_bits__01c2dee7._8_7_
                   );
      *(undefined8 *)pcVar12 = uVar6;
      *(ulong *)(pcVar12 + 0xf) =
           CONCAT71(s_server_max_window_bits__01c2dee7._16_7_,
                    s_server_max_window_bits__01c2dee7[0xf]);
      pcVar12[0x17] = '\0';
      if (0x16 < bVar9) {
        bVar9 = 0x17;
      }
      iVar10 = _memcmp(&pppppppcStack_80,pcVar12,bVar9);
      __ZdlPv(pcVar12);
      if ((iVar10 == 0) && (bVar9 == 0x17)) {
        pcVar4 = (char *)(uStack_70 >> 0x38);
        pcVar12 = pcStack_78;
        pppppppcVar18 = pppppppcStack_80;
        if (-1 < (long)uStack_70) {
          pcVar12 = pcVar4;
          pppppppcVar18 = (char *******)&pppppppcStack_80;
        }
        if (pcVar12 == (char *)0x0) {
LAB_002907ec:
          pcVar15 = (char *)0x0;
        }
/* wm:if you paid for this, you were scammed */
        else {
          pcVar15 = (char *)((long)pppppppcVar18 + (long)pcVar12);
          uVar17 = (ulong)pcVar12 & 3;
          if (uVar17 != 0) {
            do {
              pcVar15 = pcVar15 + -1;
              if (*pcVar15 == '=') goto LAB_00290878;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          if (pcVar12 < "\f") goto LAB_002907ec;
          pcVar15 = pcVar15 + -2;
LAB_0029081c:
          if (pcVar15[1] == '=') {
            lVar5 = 2 - (long)pppppppcVar18;
joined_r0x0029086c:
            pcVar15 = pcVar15 + lVar5;
            goto joined_r0x0029086c;
          }
          if (*pcVar15 == '=') goto LAB_00290878;
          if (pcVar15[-1] != '=') {
            if (pcVar15[-2] == '=') {
              lVar5 = -1 - (long)pppppppcVar18;
              goto joined_r0x0029086c;
            }
            pppppppcVar16 = (char *******)(pcVar15 + -2);
            pcVar15 = pcVar15 + -4;
            if (pppppppcVar16 == pppppppcVar18) goto LAB_002907ec;
            goto LAB_0029081c;
          }
          pcVar15 = pcVar15 + -1;
LAB_00290878:
          pcVar15 = pcVar15 + (1 - (long)pppppppcVar18);
        }
// WM - if you paid for this, you were scammed
joined_r0x0029086c:
        if ((long)uStack_70 < 0) {
          if (pcVar15 <= pcStack_78) {
            uVar17 = (long)pcStack_78 - (long)pcVar15;
            pppppppcVar18 = pppppppcStack_80;
            goto joined_r0x0029089c;
          }
        }
        else if (pcVar15 <= pcVar4) {
          pppppppcVar18 = (char *******)&pppppppcStack_80;
          uVar17 = (long)pcVar4 - (long)pcVar15;
joined_r0x0029089c:
          if (0x7ffffffffffffff6 < uVar17) {
            func_0x0000aa50();
            goto LAB_00290c40;
          }
          if (uVar17 < 0x17) {
            uStack_1a0 = CONCAT17((char)uVar17,(undefined7)uStack_1a0);
            ppuVar13 = &puStack_1b0;
          }
          else {
            uVar1 = (uVar17 & 0x7ffffffffffffff8) + 8;
            uVar3 = 0x19;
            if (uVar1 != 0x18) {
              uVar3 = uVar1;
            }
            ppuVar13 = (undefined1 **)__Znwm(uVar3);
            uStack_1a0 = uVar3 | 0x8000000000000000;
            puStack_1b0 = (undefined1 *)ppuVar13;
            uStack_1a8 = uVar17;
          }
          _memmove(ppuVar13,(char *)((long)pppppppcVar18 + (long)pcVar15),uVar17);
          *(undefined1 *)((long)ppuVar13 + uVar17) = 0;
          puVar7 = puStack_1b0;
          if ((long)uStack_1a0 < 0) {
            bVar9 = _strtol(puStack_1b0,0,10);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
            __ZdlPv(puVar7);
          }
          else {
            bVar9 = _strtol(&puStack_1b0,0,10);
          }
          if (bVar9 < 9) {
            bVar9 = 8;
          }
          if (0xe < bVar9) {
            bVar9 = 0xf;
          }
          *(byte *)(param_1 + 1) = bVar9;
          goto LAB_00290968;
        }
        func_0x0001c430();
        goto LAB_00290c40;
      }
LAB_00290968:
      pcVar12 = (char *)__Znwm(0x19);
      uVar6 = s_client_max_window_bits__01c2deff._0_8_;
      *(ulong *)(pcVar12 + 8) =
           CONCAT17(s_client_max_window_bits__01c2deff[0xf],s_client_max_window_bits__01c2deff._8_7_
                   );
      *(undefined8 *)pcVar12 = uVar6;
      *(ulong *)(pcVar12 + 0xf) =
           CONCAT71(s_client_max_window_bits__01c2deff._16_7_,
                    s_client_max_window_bits__01c2deff[0xf]);
      pcVar12[0x17] = '\0';
      bVar9 = uStack_70._7_1_;
      if (0x16 < uStack_70._7_1_) {
        bVar9 = 0x17;
      }
// WM - chat: discord.gg/sdkhDjTex
      iVar10 = _memcmp(&pppppppcStack_80,pcVar12,bVar9);
      __ZdlPv(pcVar12);
    } while ((iVar10 != 0) || (bVar9 != 0x17));
    pcVar4 = (char *)(uStack_70 >> 0x38);
    pcVar12 = pcStack_78;
    pppppppcVar18 = pppppppcStack_80;
    if (-1 < (long)uStack_70) {
      pcVar12 = pcVar4;
      pppppppcVar18 = (char *******)&pppppppcStack_80;
    }
    if (pcVar12 == (char *)0x0) {
LAB_00290a28:
      pcVar15 = (char *)0x0;
      if (-1 < (long)uStack_70) goto LAB_00290a30;
LAB_00290ac0:
      if (pcStack_78 < pcVar15) goto LAB_00290c24;
      uVar17 = (long)pcStack_78 - (long)pcVar15;
      pppppppcVar18 = pppppppcStack_80;
    }
    else {
      pcVar15 = (char *)((long)pppppppcVar18 + (long)pcVar12);
      uVar17 = (ulong)pcVar12 & 3;
      if (uVar17 != 0) {
        do {
          pcVar15 = pcVar15 + -1;
          if (*pcVar15 == '=') goto LAB_00290ab4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      if (pcVar12 < "\f") goto LAB_00290a28;
      pcVar15 = pcVar15 + -2;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
LAB_00290a58:
      if (pcVar15[1] == '=') {
        lVar5 = 2 - (long)pppppppcVar18;
joined_r0x00290aa8:
        pcVar15 = pcVar15 + lVar5;
        goto joined_r0x00290aa8;
      }
      if (*pcVar15 == '=') goto LAB_00290ab4;
      if (pcVar15[-1] != '=') {
        if (pcVar15[-2] == '=') {
          lVar5 = -1 - (long)pppppppcVar18;
          goto joined_r0x00290aa8;
        }
        pppppppcVar16 = (char *******)(pcVar15 + -2);
        pcVar15 = pcVar15 + -4;
        if (pppppppcVar16 == pppppppcVar18) goto LAB_00290a28;
        goto LAB_00290a58;
      }
      pcVar15 = pcVar15 + -1;
LAB_00290ab4:
      pcVar15 = pcVar15 + (1 - (long)pppppppcVar18);
joined_r0x00290aa8:
      if ((long)uStack_70 < 0) goto LAB_00290ac0;
LAB_00290a30:
      if (pcVar4 < pcVar15) {
LAB_00290c24:
        func_0x0001c430();
        goto LAB_00290c40;
      }
      uVar17 = (long)pcVar4 - (long)pcVar15;
      pppppppcVar18 = (char *******)&pppppppcStack_80;
    }
    if (0x7ffffffffffffff6 < uVar17) {
      func_0x0000aa50();
LAB_00290c40:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x290c44);
      (*pcVar8)();
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    }
    if (uVar17 < 0x17) {
      uStack_1a0 = CONCAT17((char)uVar17,(undefined7)uStack_1a0);
      ppuVar13 = &puStack_1b0;
    }
    else {
      uVar1 = (uVar17 & 0x7ffffffffffffff8) + 8;
      uVar3 = 0x19;
      if (uVar1 != 0x18) {
        uVar3 = uVar1;
      }
      ppuVar13 = (undefined1 **)__Znwm(uVar3);
      uStack_1a0 = uVar3 | 0x8000000000000000;
      puStack_1b0 = (undefined1 *)ppuVar13;
      uStack_1a8 = uVar17;
    }
    _memmove(ppuVar13,(char *)((long)pppppppcVar18 + (long)pcVar15),uVar17);
    *(undefined1 *)((long)ppuVar13 + uVar17) = 0;
    puVar7 = puStack_1b0;
    if ((long)uStack_1a0 < 0) {
      bVar9 = _strtol(puStack_1b0,0,10);
      __ZdlPv(puVar7);
    }
    else {
      bVar9 = _strtol(&puStack_1b0,0,10);
    }
    bVar14 = bVar9;
    if (bVar9 < 9) {
      bVar14 = 8;
/*  stripping the watermark breaks the license  */
    }
    if (0xe < bVar14) {
      bVar14 = 0xf;
    }
    bVar2 = 9;
    if (8 < bVar9) {
      bVar2 = bVar14;
    }
    *(byte *)((long)param_1 + 3) = bVar2;
  } while( true );
}

