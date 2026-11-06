/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x100002af0:dcc0e30921
 */

undefined8 entry(int param_1,long param_2)

{
  __uint32_t _Var1;
  undefined1 *puVar2;
  ulong uVar3;
  off_t oVar4;
  FILE *pFVar5;
  char *pcVar6;
  char *param1;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  __uint32_t *p_Var12;
  size_t sVar13;
  long lVar14;
  bool bVar15;
  undefined8 uStack_1d0;
/* if you paid for this, you were scammed */
  __uint32_t local_1c8;
  __uint32_t local_1c4;
  __uint32_t local_1c0;
  __uint32_t local_1bc;
  long local_1b8;
  long local_1b0;
  ulong local_1a8;
  FILE *local_1a0;
  __uint32_t local_198;
  __uint32_t local_194;
  uint local_190;
  __uint32_t local_18c;
  __uint32_t local_188;
  __uint32_t local_184;
  uint local_180;
  __uint32_t local_17c;
  uint local_178;
  __uint32_t local_174;
  __uint32_t local_170;
/* WM - reversing this took months of machine time */
  __uint32_t local_16c;
  ulong local_168;
  undefined1 *local_160;
  __uint32_t local_154;
  __uint32_t local_150;
  uint local_14c;
  int local_148;
  byte local_141;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  uint local_124;
  __uint32_t local_120;
  uint local_11c;
  ulong local_118;
  undefined1 *local_110;
  __uint32_t local_108;
  undefined1 local_104 [4];
  __uint32_t local_100;
  uint local_fc;
  off_t local_f8;
  byte local_e9;
  FILE *local_e8;
  char *local_e0;
  byte local_d1;
  undefined1 local_d0 [144];
  char *local_40;
  char *local_38;
  char *local_30;
  int local_28;
  undefined4 local_24;
  long local_20;
  int local_18;
  undefined4 local_14;
  long local_10;
/*  more drops soon - github.com/pengussy  */
  
  p_Var12 = &local_1c8;
  local_10 = *(long *)PTR____stack_chk_guard_100004000;
  local_14 = 0;
  local_20 = param_2;
  local_18 = param_1;
  while( true ) {
    local_24 = 0;
    uStack_1d0 = 0x100002b3c;
    local_28 = _getopt_long(local_18,local_20,"",&_long_options,&local_24);
    if (local_28 == -1) break;
    local_148 = local_28;
    if (local_28 != 0) {
      if (local_28 == 0x3f) {
        uStack_1d0 = 0x100002b82;
        _usage();
      }
      if (*(long *)PTR____stack_chk_guard_100004000 == local_10) {
                    /* WARNING: Subroutine does not return */
        uStack_1d0 = 0x100002b9e;
        _abort();
      }
      goto LAB_10000385d;
    }
    local_28 = 0;
  }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  local_20 = local_20 + (long)(*(int *)PTR__optind_100004018 + -1) * 8;
  local_18 = local_18 - (*(int *)PTR__optind_100004018 + -1);
  if ((local_18 < 3) || (4 < local_18)) {
    uStack_1d0 = 0x100002bee;
    _usage();
  }
  local_30 = "LC_LOAD_DYLIB";
  if (_weak_flag != 0) {
    local_30 = "LC_LOAD_WEAK_DYLIB";
  }
  local_38 = *(char **)(local_20 + 8);
  local_40 = *(char **)(local_20 + 0x10);
  uStack_1d0 = 0x100002c35;
  iVar7 = _stat_INODE64(local_40,local_d0);
  if (iVar7 == 0) {
    if (*local_38 != '@') {
      uStack_1d0 = 0x100002c88;
      iVar7 = _stat_INODE64(local_38,local_d0);
      if (iVar7 != 0) {
        uStack_1d0 = 0x100002c9f;
        uVar9 = _ask("The provided dylib path doesn\'t exist. Continue anyway?");
        if ((uVar9 & 1) == 0) {
          p_Var12 = &local_1c8;
          if (*(long *)PTR____stack_chk_guard_100004000 == local_10) {
                    /* WARNING: Subroutine does not return */
            uStack_1d0 = 0x100002cc8;
            _exit(1);
/* wm:more drops soon - github.com/pengussy */
          }
          goto LAB_10000385d;
        }
      }
    }
    local_d1 = 0;
    if (_inplace_flag == 0) {
      bVar15 = local_18 != 4;
      if (bVar15) {
        uStack_1d0 = 0x100002d18;
        _asprintf(&local_e0,"%s_patched",local_40);
      }
      else {
        local_e0 = *(char **)(local_20 + 0x18);
      }
      local_d1 = bVar15;
      if (_overwrite_flag == 0) {
        uStack_1d0 = 0x100002d3f;
        iVar7 = _stat_INODE64(local_e0,local_d0);
        if (iVar7 == 0) {
          uStack_1d0 = 0x100002d5d;
          uVar9 = _ask("%s already exists. Overwrite it?",local_e0);
          if ((uVar9 & 1) == 0) {
            p_Var12 = &local_1c8;
            if (*(long *)PTR____stack_chk_guard_100004000 == local_10) {
                    /* WARNING: Subroutine does not return */
              uStack_1d0 = 0x100002d86;
              _exit(1);
            }
            goto LAB_10000385d;
          }
        }
      }
      uStack_1d0 = 0x100002da4;
      iVar7 = _copyfile(local_40,local_e0,(copyfile_state_t)0x0,0x200008);
/*  watermarked copy - do not remove  */
      if (iVar7 != 0) {
        uStack_1d0 = 0x100002dc2;
        _printf("Failed to create %s\n",local_e0);
        p_Var12 = &local_1c8;
        if (*(long *)PTR____stack_chk_guard_100004000 == local_10) {
                    /* WARNING: Subroutine does not return */
          uStack_1d0 = 0x100002de3;
          _exit(1);
        }
        goto LAB_10000385d;
      }
      local_40 = local_e0;
    }
    uStack_1d0 = 0x100002dfe;
    local_e8 = _fopen(local_40,"r+");
    if (local_e8 == (FILE *)0x0) {
      uStack_1d0 = 0x100002e25;
      _printf("Couldn\'t open file %s\n",local_40);
      p_Var12 = &local_1c8;
      if (*(long *)PTR____stack_chk_guard_100004000 == local_10) {
                    /* WARNING: Subroutine does not return */
        uStack_1d0 = 0x100002e46;
        _exit(1);
      }
    }
    else {
      local_e9 = 1;
      uStack_1d0 = 0x100002e62;
      _fseeko(local_e8,0,2);
      uStack_1d0 = 0x100002e6e;
      local_f8 = _ftello(local_e8);
      uStack_1d0 = 0x100002e81;
      _rewind(local_e8);
      uStack_1d0 = 0x100002e9e;
      _fread(&local_fc,4,1,local_e8);
      local_14c = local_fc;
/* keep the notice, keep the source honest - github.com/pengussy */
      if ((local_fc == 0xbebafeca) || (local_fc == 0xcafebabe)) {
        uStack_1d0 = 0x100002f27;
        _fseeko(local_e8,0,0);
        uStack_1d0 = 0x100002f44;
        _fread(local_104,8,1,local_e8);
        if ((local_fc == 0xbebafeca) || ((local_fc == 0xcffaedfe || (local_fc == 0xcefaedfe)))) {
          uStack_1d0 = 0x100002f7f;
          local_154 = __OSSwapInt32(local_100);
          local_150 = local_154;
        }
        else {
          local_154 = local_100;
        }
        local_108 = local_154;
        uStack_1d0 = 0x100002fc2;
        _printf("Binary is a fat binary with %d archs.\n",local_154);
        local_168 = (ulong)local_108;
        uStack_1d0 = 0x100002fe6;
        local_110 = (undefined1 *)&local_1c8;
        lVar10 = ____chkstk_darwin();
        pFVar5 = local_e8;
        lVar10 = -(lVar10 + 0xfU & 0xfffffffffffffff0);
        local_160 = (undefined1 *)((long)&local_1c8 + lVar10);
        local_118 = local_168;
        sVar13 = local_168 * 0x14;
        *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x10000301e;
        _fread((void *)((long)&local_1c8 + lVar10),sVar13,1,pFVar5);
        local_11c = 0;
        local_120 = 0;
        if (local_108 != 0) {
          if (((local_fc == 0xbebafeca) || (local_fc == 0xcffaedfe)) || (local_fc == 0xcefaedfe)) {
/* WM - keep the notice, keep the source honest */
            _Var1 = *(__uint32_t *)(local_160 + 8);
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x10000307e;
            local_170 = __OSSwapInt32(_Var1);
            local_16c = local_170;
          }
          else {
            local_170 = *(__uint32_t *)(local_160 + 8);
          }
          local_120 = local_170;
        }
        for (local_124 = 0; pFVar5 = local_e8, local_124 < local_108; local_124 = local_124 + 1) {
          if (((local_fc == 0xbebafeca) || (local_fc == 0xcffaedfe)) || (local_fc == 0xcefaedfe)) {
            _Var1 = *(__uint32_t *)(local_160 + (long)(int)local_124 * 0x14 + 8);
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x10000311a;
            local_178 = __OSSwapInt32(_Var1);
            local_174 = local_178;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
          }
          else {
            local_178 = *(uint *)(local_160 + (long)(int)local_124 * 0x14 + 8);
          }
          local_130 = (ulong)local_178;
          if (((local_fc == 0xbebafeca) || (local_fc == 0xcffaedfe)) || (local_fc == 0xcefaedfe)) {
            _Var1 = *(__uint32_t *)(local_160 + (long)(int)local_124 * 0x14 + 0xc);
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x1000031ab;
            local_180 = __OSSwapInt32(_Var1);
            local_17c = local_180;
          }
          else {
            local_180 = *(uint *)(local_160 + (long)(int)local_124 * 0x14 + 0xc);
          }
          local_138 = (ulong)local_180;
          local_184 = local_120;
          if (((local_fc == 0xbebafeca) || (local_fc == 0xcffaedfe)) || (local_fc == 0xcefaedfe)) {
            _Var1 = *(__uint32_t *)(local_160 + (long)(int)local_124 * 0x14 + 0x10);
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x100003248;
            local_18c = __OSSwapInt32(_Var1);
            local_188 = local_18c;
          }
          else {
            local_18c = *(__uint32_t *)(local_160 + (long)(int)local_124 * 0x14 + 0x10);
          }
          local_190 = (local_184 + (1 << ((byte)local_18c & 0x1f))) - 1;
          if (((local_fc == 0xbebafeca) || (local_fc == 0xcffaedfe)) || (local_fc == 0xcefaedfe)) {
            _Var1 = *(__uint32_t *)(local_160 + (long)(int)local_124 * 0x14 + 0x10);
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x1000032ea;
            local_198 = __OSSwapInt32(_Var1);
            local_194 = local_198;
          }
          else {
            local_198 = *(__uint32_t *)(local_160 + (long)(int)local_124 * 0x14 + 0x10);
          }
          pFVar5 = local_e8;
          uVar3 = local_130;
          uVar9 = local_138;
/* do not claim this as your own */
          uVar8 = local_190 & -(1 << ((byte)local_198 & 0x1f));
          local_120 = uVar8;
          if (local_130 != uVar8) {
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x100003376;
            _fmemmove(pFVar5,uVar8,uVar3,uVar9);
            pFVar5 = local_e8;
            local_1a0 = local_e8;
            if ((long)(ulong)local_120 < (long)local_130) {
              local_1a8 = (ulong)local_120;
            }
            else {
              local_1a8 = local_130;
            }
            lVar11 = local_1a8 + local_138;
            if ((long)local_130 < (long)(ulong)local_120) {
              local_1b8 = local_120 - local_130;
            }
            else {
              local_1b8 = local_130 - local_120;
            }
            lVar14 = local_1b8;
            local_1b0 = lVar11;
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x100003429;
            _fbzero(pFVar5,lVar11,lVar14);
            _Var1 = local_120;
            if (((local_fc == 0xbebafeca) || (local_fc == 0xcffaedfe)) || (local_fc == 0xcefaedfe))
            {
              *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x100003464;
              local_1c0 = __OSSwapInt32(_Var1);
              local_1bc = local_1c0;
            }
            else {
              local_1c0 = local_120;
            }
/* if you paid for this, you were scammed - github.com/pengussy */
            *(__uint32_t *)(local_160 + (long)(int)local_124 * 0x14 + 8) = local_1c0;
          }
          pcVar6 = local_38;
          pFVar5 = local_e8;
          _Var1 = local_120;
          local_140 = local_138;
          *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x1000034d2;
          local_141 = _insert_dylib(pFVar5,_Var1,pcVar6,&local_140);
          pcVar6 = local_30;
          local_141 = local_141 & 1;
          if (local_141 == 0) {
            iVar7 = local_124 + 1;
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x100003502;
            _printf("Failed to add %s to arch #%d!\n",pcVar6,iVar7);
            local_11c = local_11c + 1;
          }
          pFVar5 = local_e8;
          if (((long)local_140 < (long)local_138) && (local_124 < local_108 - 1)) {
            lVar14 = local_120 + local_140;
            lVar11 = local_138 - local_140;
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x100003565;
            _fbzero(pFVar5,lVar14,lVar11);
          }
          local_f8 = local_120 + local_140;
          _Var1 = (__uint32_t)local_140;
          local_120 = local_120 + _Var1;
          if (((local_fc == 0xbebafeca) || (local_fc == 0xcffaedfe)) || (local_fc == 0xcefaedfe)) {
            *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x1000035cd;
            local_1c4 = __OSSwapInt32(_Var1);
            local_1c8 = local_1c4;
          }
          else {
            local_1c8 = _Var1;
          }
/*  thanks for reading - discord.gg/sdkhDjTex  */
          *(__uint32_t *)(local_160 + (long)(int)local_124 * 0x14 + 0xc) = local_1c8;
        }
        *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x10000362f;
        _rewind(pFVar5);
        pFVar5 = local_e8;
        *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x10000364c;
        _fwrite(local_104,8,1,pFVar5);
        pFVar5 = local_e8;
        puVar2 = local_160;
        sVar13 = local_168 * 0x14;
        *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x10000366f;
        _fwrite(puVar2,sVar13,1,pFVar5);
        pFVar5 = local_e8;
        *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x10000367b;
        _fflush(pFVar5);
        pFVar5 = local_e8;
        *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x100003687;
        iVar7 = _fileno(pFVar5);
        oVar4 = local_f8;
        *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x100003695;
        _ftruncate(iVar7,oVar4);
        param1 = local_30;
        pcVar6 = local_40;
        _Var1 = local_108;
// thanks for reading - discord.gg/sdkhDjTex
        if (local_11c == 0) {
          *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x1000036b8;
          _printf("Added %s to all archs in %s\n",param1,pcVar6);
        }
        else if (local_11c == local_108) {
          *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x1000036e1;
          _printf("Failed to add %s to any archs.\n",param1);
          local_e9 = 0;
        }
        else {
          iVar7 = local_108 - local_11c;
          *(undefined8 *)((long)&uStack_1d0 + lVar10) = 0x100003715;
          _printf("Added %s to %d/%d archs in %s\n",param1,iVar7,_Var1,pcVar6);
        }
        p_Var12 = (__uint32_t *)local_110;
      }
      else {
        if (((local_fc != 0xcefaedfe) && (local_fc != 0xcffaedfe)) && (1 < local_fc + 0x1120532)) {
          uStack_1d0 = 0x1000037b8;
          _printf("Unknown magic: 0x%x\n",local_fc);
          p_Var12 = &local_1c8;
          if (*(long *)PTR____stack_chk_guard_100004000 == local_10) {
                    /* WARNING: Subroutine does not return */
            uStack_1d0 = 0x1000037d9;
            _exit(1);
          }
          goto LAB_10000385d;
        }
        uStack_1d0 = 0x100003744;
        uVar9 = _insert_dylib(local_e8,0,local_38,&local_f8);
        if ((uVar9 & 1) == 0) {
          uStack_1d0 = 0x100003798;
          _printf("Failed to add %s!\n",local_30);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          local_e9 = 0;
        }
        else {
          uStack_1d0 = 0x10000375d;
          iVar7 = _fileno(local_e8);
          uStack_1d0 = 0x10000376b;
          _ftruncate(iVar7,local_f8);
          uStack_1d0 = 0x100003781;
          _printf("Added %s to %s\n",local_30,local_40);
        }
        p_Var12 = &local_1c8;
      }
      pFVar5 = local_e8;
      *(undefined8 *)((long)p_Var12 + -8) = 0x1000037e5;
      _fclose(pFVar5);
      pcVar6 = local_40;
      if ((local_e9 & 1) == 0) {
        if (_inplace_flag == 0) {
          *(undefined8 *)((long)p_Var12 + -8) = 0x100003808;
          _unlink(pcVar6);
        }
        if (*(long *)PTR____stack_chk_guard_100004000 == local_10) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)p_Var12 + -8) = 0x100003829;
          _exit(1);
        }
      }
      else {
        if ((local_d1 & 1) != 0) {
          *(undefined8 *)((long)p_Var12 + -8) = 0x10000383f;
          _free(pcVar6);
        }
        if (*(long *)PTR____stack_chk_guard_100004000 == local_10) {
          return 0;
        }
      }
/* wm:watermarked copy - do not remove */
    }
  }
  else {
    uStack_1d0 = 0x100002c47;
    _perror(local_40);
    p_Var12 = &local_1c8;
    if (*(long *)PTR____stack_chk_guard_100004000 == local_10) {
                    /* WARNING: Subroutine does not return */
      uStack_1d0 = 0x100002c68;
      _exit(1);
    }
  }
LAB_10000385d:
                    /* WARNING: Subroutine does not return */
  *(code **)((long)p_Var12 + -8) = ____chkstk_darwin;
  ___stack_chk_fail();
}
