/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x34657c:ecd9388857
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0034657c(undefined8 param_1,segment_command *param_2,segment_command *param_3,byte *param_4,
            segment_command *param_5)

{
  segment_command *psVar1;
  segment_command *psVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  segment_command *psVar13;
  segment_command *psVar14;
  byte *pbVar15;
  segment_command *psVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_148;
/* unlicensed copy if this notice is missing */
  byte *pbStack_130;
  byte abStack_124 [84];
  segment_command sStack_d0;
  undefined8 uStack_88;
  long lStack_80;
  segment_command *psStack_78;
  long lStack_70;
  
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = param_1;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_148 = 4;
  if (param_2 == param_3) goto LAB_00346a30;
  if (param_2 == (segment_command *)0x0) goto LAB_00346a30;
  if (param_3 == (segment_command *)0x0) goto LAB_00346a30;
  psVar13 = param_3;
  pbVar15 = param_4;
  psVar16 = param_5;
  if ((((uint)param_3 | (uint)param_2) & 3) == 0) goto LAB_003465ec;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return 4;
  }
LAB_003465e8:
  do {
    while( true ) {
      auVar21 = ___stack_chk_fail();
      psVar13 = param_3;
      pbVar15 = param_4;
      psVar16 = param_5;
LAB_003465ec:
      lVar11 = auVar21._8_8_;
      plVar9 = auVar21._0_8_;
      lStack_80 = 0;
      psStack_78 = (segment_command *)0x0;
      sStack_d0.maxprot = 0;
      sStack_d0.initprot = 0;
      sStack_d0.filesize = 0;
      uStack_88 = 0;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      sStack_d0.nsects = 0;
      sStack_d0.flags = 0;
      sStack_d0.fileoff = 0;
      sStack_d0.vmsize = 0;
      param_3 = &sStack_d0;
      param_4 = abStack_124;
      param_5 = psVar16;
      uVar10 = func_0x003459b8(lVar11,sStack_d0.segname);
      if ((int)uVar10 == 0) break;
LAB_00346628:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar10;
      }
    }
    if ((abStack_124[0] >> 2 & 1) == 0) {
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return 2;
      }
      goto LAB_003465e8;
    }
    psVar1 = (segment_command *)((sStack_d0.segname._0_8_ - lVar11) + sStack_d0._0_8_);
    psVar2 = psVar1;
/*  if you paid for this, you were scammed  */
    if ((segment_command *)((long)&MACH_HEADER.reserved + 3) < psVar1) {
      psVar2 = &segment_command_00000020;
    }
    if (psVar1 < &MACH_HEADER.cputype) {
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return 1;
      }
      goto LAB_003465e8;
    }
    param_3 = psVar2;
    uVar10 = func_0x00345a94(&sStack_d0.vmsize,lVar11);
    if ((int)uVar10 != 0) goto LAB_00346628;
    pbStack_130 = (byte *)0x0;
    uVar17 = (long)psVar13 - lVar11;
    uVar19 = uVar17 + 0x8000000 >> 0x1c;
    bVar3 = (uVar17 & 3) == 0;
    bVar4 = uVar19 == 0;
    bVar6 = bVar3 && bVar4;
    if (!((uVar17 & 3) == 0 && uVar19 == 0)) {
      bVar7 = pbVar15 == (byte *)0x0;
LAB_00346718:
      uStack_148 = func_0x00346aa8(lVar11,&pbStack_130);
      psVar14 = (segment_command *)&MACH_HEADER.cputype;
      if ((((ulong)psVar16 & 1) == 0) && ((int)uStack_148 == 3)) {
        if ((segment_command *)((long)&MACH_HEADER.filetype + 3) < psVar1 || bVar3 && bVar4) {
          if (bVar3 && bVar4) {
            psVar14 = (segment_command *)&MACH_HEADER.cputype;
          }
          else {
            lStack_80 = _UNK_01ae5c90;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
            psVar14 = (segment_command *)&MACH_HEADER.ncmds;
            psStack_78 = psVar13;
          }
          pbStack_130 = (byte *)0x0;
          if (bVar7) goto LAB_00346958;
          param_3 = *(segment_command **)PTR__vm_page_size_01f20448;
          bVar6 = true;
          param_4 = (byte *)((long)&MACH_HEADER.magic + 1);
          uStack_148 = _mach_vm_allocate(*(undefined4 *)PTR__mach_task_self__01f20350,&pbStack_130);
          goto LAB_003467b4;
        }
        uStack_148 = 3;
      }
      else {
LAB_003467b4:
        if ((int)uStack_148 == 0) {
          if (pbStack_130 == (byte *)0x0) {
            if (bVar7) goto LAB_00346958;
            pbVar18 = (byte *)0x0;
LAB_00346954:
            *(byte **)pbVar15 = pbVar18;
            goto LAB_00346958;
          }
          _memcpy(pbStack_130 + 0x600,&sStack_d0.vmsize,psVar2);
          sStack_d0.segname[8] = '\0';
          sStack_d0.segname[9] = '\0';
          sStack_d0.segname[10] = '\0';
          sStack_d0.segname[0xb] = '\0';
          sStack_d0.segname[0xc] = '\0';
          sStack_d0.segname[0xd] = '\0';
          sStack_d0.segname[0xe] = '\0';
          sStack_d0.segname[0xf] = '\0';
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          if (bVar7) {
            if (!bVar6) goto LAB_00346870;
LAB_003468c8:
            puVar5 = PTR__vm_page_size_01f20448;
            _sys_icache_invalidate(pbStack_130,*(undefined8 *)PTR__vm_page_size_01f20448);
            param_4 = (byte *)0x0;
            param_5 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
            uVar10 = _mach_vm_protect(*(undefined4 *)PTR__mach_task_self__01f20350,pbStack_130,
                                      *(undefined8 *)puVar5);
            if ((int)uVar10 == 0) {
              if (bVar7) goto LAB_00346958;
              pbVar18 = pbStack_130;
              goto LAB_00346954;
            }
          }
          else {
            param_4 = pbStack_130;
            param_5 = psVar14;
            uVar10 = func_0x00346ba0(lVar11,&sStack_d0.vmsize,psVar2,pbStack_130,psVar14,
// watermarked copy - do not remove
                                     sStack_d0.segname + 8);
            if ((int)uVar10 != 0) {
              bVar6 = true;
            }
            if (!bVar6) {
LAB_00346870:
              *(long *)(pbStack_130 + 0x400) = _UNK_01ae5c90;
              *(segment_command **)(pbStack_130 + 0x408) = psVar13;
              uVar19 = (long)pbStack_130 - lVar11;
              uVar10 = 0x2e;
              if (((uVar19 & 3) == 0) && (uVar19 + 0x8000400 >> 0x1c == 0)) {
                uVar20 = 0x94000000;
                if ((int)psVar16 == 0) {
                  uVar20 = 0x14000000;
                }
                lStack_80 = CONCAT44(lStack_80._4_4_,uVar20 | (int)uVar19 + 0x400U >> 2 & 0x3ffffff)
                ;
                goto LAB_003468c8;
              }
            }
            else if ((int)uVar10 == 0) goto LAB_003468c8;
          }
/* WM - no support for modified copies */
          param_3 = *(segment_command **)PTR__vm_page_size_01f20448;
          _mach_vm_deallocate(*(undefined4 *)PTR__mach_task_self__01f20350,pbStack_130);
          if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
            return uVar10;
          }
          goto LAB_003465e8;
        }
      }
      uVar10 = *(undefined8 *)PTR____stderrp_01f20208;
      pcVar12 = "tinyhook: trampoline allocation failed %p: %d\n";
LAB_003467d8:
      _fprintf(uVar10,pcVar12);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uStack_148;
      }
      goto LAB_003465e8;
    }
    uVar20 = 0x94000000;
    if ((int)psVar16 == 0) {
      uVar20 = 0x14000000;
    }
    lStack_80 = CONCAT44(lStack_80._4_4_,uVar20 | (uint)uVar17 >> 2 & 0x3ffffff);
    if (pbVar15 != (byte *)0x0) {
      bVar7 = false;
      goto LAB_00346718;
    }
    psVar14 = (segment_command *)&MACH_HEADER.cputype;
LAB_00346958:
    uStack_148 = FUN_00345b14(lVar11,&lStack_80,psVar14);
    param_3 = psVar14;
    if ((int)uStack_148 == 0) {
      uStack_148 = func_0x00345a94(sStack_d0.segname + 8,lVar11,psVar14);
      if ((int)uStack_148 != 0) {
LAB_003469c8:
/* WM - keep the notice, keep the source honest */
        param_3 = psVar14;
        iVar8 = FUN_00345b14(lVar11,&sStack_d0.vmsize);
        if (iVar8 == 0) {
          param_3 = psVar14;
          iVar8 = func_0x00345a94(sStack_d0.segname + 8,lVar11);
          if (iVar8 == 0) goto LAB_00346984;
          goto LAB_00346a14;
        }
        uVar10 = *(undefined8 *)PTR____stderrp_01f20208;
        pcVar12 = "tinyhook: patch failed at %p: %d / %d\n";
        goto LAB_003467d8;
      }
      iVar8 = _memcmp(sStack_d0.segname + 8,&lStack_80);
      if (iVar8 != 0) {
        uStack_148 = 5;
        goto LAB_003469c8;
      }
      if (plVar9 != (long *)0x0) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        *plVar9 = lVar11;
        *(int *)(plVar9 + 1) = (int)psVar14;
        _memcpy((long)plVar9 + 0xc,&sStack_d0.vmsize);
        param_3 = psVar14;
      }
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return 0;
      }
    }
    else {
      iVar8 = func_0x00345a94(sStack_d0.segname + 8,lVar11);
      if (iVar8 == 0) {
LAB_00346984:
        iVar8 = _memcmp(sStack_d0.segname + 8,&sStack_d0.vmsize);
        param_3 = psVar14;
        if (iVar8 != 0) goto LAB_00346a14;
      }
      else {
LAB_00346a14:
        _fprintf(*(undefined8 *)PTR____stderrp_01f20208,
                 "tinyhook: patch failed at %p, trampoline at %d\n");
      }
LAB_00346a30:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uStack_148;
      }
    }
  } while( true );
}

