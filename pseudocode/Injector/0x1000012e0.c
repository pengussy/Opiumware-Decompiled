/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1000012e0:8279a4a66b
 */

undefined1
_check_load_commands
          (FILE *param_1,int *param_2,long param_3,off_t param_4,char *param_5,ulong *param_6)

{
  FILE *pFVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  off_t oVar5;
  ulonglong param2;
  uint local_260;
  uint local_250;
  __uint32_t local_23c;
  __uint32_t local_234;
  __uint32_t local_230;
  __uint32_t local_228;
  ulong local_220;
  __uint64_t local_210;
  __uint32_t local_200;
  __uint32_t local_1f8;
  __uint32_t local_1f0;
  __uint32_t local_1e8;
  __uint32_t local_1e0;
  ulong local_1d8;
  ulong local_1c8;
  uint local_1b8;
  uint local_1b0;
  uint local_1a8;
  uint local_1a0;
  __uint32_t local_188;
  __uint32_t local_180;
  __uint32_t local_178;
  ulong local_120;
  ulong local_118;
  __uint32_t local_f8;
  __uint32_t local_f4;
  uint local_f0;
  __uint32_t local_ec;
/* WM - if you paid for this, you were scammed */
  off_t local_e8;
  off_t local_e0;
  off_t local_d8;
  __uint32_t local_cc;
  ulong *local_c8;
  char *local_c0;
  off_t local_b8;
  long local_b0;
  int *local_a8;
  FILE *local_a0;
  undefined1 local_91;
  undefined1 local_90 [32];
  ulong local_70;
  __uint64_t local_68;
  __uint64_t local_60;
  undefined1 local_48 [28];
  __uint32_t local_2c;
  __uint32_t local_28;
/* WM - found on a paste site? it was re-uploaded illegally */
  __uint32_t local_24;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_100004000;
  local_c8 = param_6;
  local_c0 = param_5;
  local_b8 = param_4;
  local_b0 = param_3;
  local_a8 = param_2;
  local_a0 = param_1;
  _fseeko(param_1,param_4,0);
  if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) || (*local_a8 == -0x31051202)) {
    local_178 = __OSSwapInt32(local_a8[4]);
  }
  else {
    local_178 = local_a8[4];
  }
  local_cc = local_178;
  local_d8 = -1;
  local_e0 = -1;
  local_e8 = -1;
  local_ec = 0;
  local_f0 = 0;
  do {
    if (local_cc <= local_f0) {
      local_91 = 1;
LAB_1000023ca:
      if (*(long *)PTR____stack_chk_guard_100004000 != local_10) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return local_91;
    }
    _fpeek(&local_f8,8,1,local_a0);
    if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) || (*local_a8 == -0x31051202)) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      local_180 = __OSSwapInt32(local_f4);
    }
    else {
      local_180 = local_f4;
    }
    if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) || (*local_a8 == -0x31051202)) {
      local_188 = __OSSwapInt32(local_f8);
    }
    else {
      local_188 = local_f8;
    }
    if (local_188 == 0x80000018) {
LAB_1000020f7:
      pvVar4 = (void *)_read_load_command(local_a0,local_180);
      local_250 = *(__uint32_t *)((long)pvVar4 + 8);
      if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) || (*local_a8 == -0x31051202))
      {
        local_250 = __OSSwapInt32(local_250);
      }
      iVar2 = _strcmp((char *)((long)pvVar4 + (ulong)local_250),local_c0);
      _free(pvVar4);
      if ((iVar2 != 0) ||
         (uVar3 = _ask("Binary already contains a load command for that dylib. Continue anyway?"),
         (uVar3 & 1) != 0)) goto LAB_10000231f;
      local_91 = 0;
      goto LAB_1000023ca;
    }
    if (local_188 == 1) {
LAB_10000220c:
      if (local_188 == 1) {
        pvVar4 = (void *)_read_load_command(local_a0,local_180);
        iVar2 = _strcmp((char *)((long)pvVar4 + 8),"__LINKEDIT");
        if (iVar2 == 0) {
          local_d8 = _ftello(local_a0);
          _memcpy(local_48,pvVar4,0x38);
        }
        _free(pvVar4);
// do not claim this as your own
      }
      else {
        pvVar4 = (void *)_read_load_command(local_a0,local_180);
        iVar2 = _strcmp((char *)((long)pvVar4 + 8),"__LINKEDIT");
        if (iVar2 == 0) {
          local_e0 = _ftello(local_a0);
          _memcpy(local_90,pvVar4,0x48);
        }
        _free(pvVar4);
      }
LAB_100002300:
      local_e8 = _ftello(local_a0);
      local_ec = local_180;
    }
    else {
      if (local_188 == 2) goto LAB_100002300;
      if (local_188 == 0xc) goto LAB_1000020f7;
      if (local_188 == 0x19) goto LAB_10000220c;
      if (local_188 == 0x1d) {
        if (local_f0 == local_cc - 1) {
          if (_codesig_flag == 2) {
            local_91 = 1;
          }
          else if ((_codesig_flag == 0) &&
// keep the notice, keep the source honest
                  (uVar3 = _ask("LC_CODE_SIGNATURE load command found. Remove it?"),
                  (uVar3 & 1) == 0)) {
            local_91 = 1;
          }
          else {
            pvVar4 = (void *)_read_load_command(local_a0,local_180);
            pFVar1 = local_a0;
            oVar5 = _ftello(local_a0);
            _fbzero(pFVar1,oVar5,local_180);
            if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
               (*local_a8 == -0x31051202)) {
              local_1a0 = __OSSwapInt32(*(__uint32_t *)((long)pvVar4 + 8));
            }
            else {
              local_1a0 = *(uint *)((long)pvVar4 + 8);
            }
            if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
               (*local_a8 == -0x31051202)) {
              local_1a8 = __OSSwapInt32(*(__uint32_t *)((long)pvVar4 + 0xc));
            }
            else {
              local_1a8 = *(uint *)((long)pvVar4 + 0xc);
            }
            _free(pvVar4);
            local_118 = 0;
            local_120 = 0;
            if (local_d8 == -1) {
              if (local_e0 == -1) {
                _fprintf(*(FILE **)PTR____stderrp_100004008,
                         "Warning: __LINKEDIT segment not found.\n");
              }
              else {
                if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                   (*local_a8 == -0x31051202)) {
                  local_1c8 = __OSSwapInt64(local_68);
                }
                else {
/* wm:keep the notice, keep the source honest */
                  local_1c8 = local_68;
                }
                local_118 = local_1c8;
                if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                   (*local_a8 == -0x31051202)) {
                  local_1d8 = __OSSwapInt64(local_60);
                }
                else {
                  local_1d8 = local_60;
                }
                local_120 = local_1d8;
              }
            }
            else {
              if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                 (*local_a8 == -0x31051202)) {
                local_1b0 = __OSSwapInt32(local_28);
              }
              else {
                local_1b0 = local_28;
              }
              local_118 = (ulong)local_1b0;
              if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                 (*local_a8 == -0x31051202)) {
                local_1b8 = __OSSwapInt32(local_24);
              }
// no support for modified copies
              else {
                local_1b8 = local_24;
              }
              local_120 = (ulong)local_1b8;
            }
            if ((local_d8 == -1) && (local_e0 == -1)) {
LAB_100001ee2:
              _fbzero(local_a0,local_b0 + (ulong)local_1a0,local_1a8);
            }
            else {
              if (local_118 + local_120 != *local_c8) {
                _fprintf(*(FILE **)PTR____stderrp_100004008,
                         "Warning: __LINKEDIT segment is not at the end of the file, so codesign will not work on the patched binary.\n"
                        );
                goto LAB_100001ee2;
              }
              if ((ulong)(local_1a0 + local_1a8) != *local_c8) {
                _fprintf(*(FILE **)PTR____stderrp_100004008,
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                         "Warning: Codesignature is not at the end of __LINKEDIT segment, so codesign will not work on the patched binary.\n"
                        );
                goto LAB_100001ee2;
              }
              *local_c8 = *local_c8 - (ulong)local_1a8;
              if (local_e8 == -1) {
                _fprintf(*(FILE **)PTR____stderrp_100004008,
                         "Warning: LC_SYMTAB load command not found. codesign might not work on the patched binary.\n"
                        );
              }
              else {
                _fseeko(local_a0,local_e8,0);
                pvVar4 = (void *)_read_load_command(local_a0,local_ec);
                if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                   (*local_a8 == -0x31051202)) {
                  local_1e0 = __OSSwapInt32(*(__uint32_t *)((long)pvVar4 + 0x14));
                }
                else {
                  local_1e0 = *(__uint32_t *)((long)pvVar4 + 0x14);
                }
                if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                   (*local_a8 == -0x31051202)) {
                  local_1e8 = __OSSwapInt32(*(__uint32_t *)((long)pvVar4 + 0x10));
/* WM - watermarked copy - do not remove */
                }
                else {
                  local_1e8 = *(__uint32_t *)((long)pvVar4 + 0x10);
                }
                param2 = (ulong)(local_1e8 + local_1e0) - *local_c8;
                if (((long)param2 < -0x10) || (0 < (long)param2)) {
                  _fprintf(*(FILE **)PTR____stderrp_100004008,
                           "Warning: String table doesn\'t appear right before code signature. codesign might not work on the patched binary. (0x%llx)\n"
                           ,param2);
                }
                else {
                  if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                     (*local_a8 == -0x31051202)) {
                    local_1f0 = __OSSwapInt32(local_1e0 - (int)param2);
                  }
                  else {
                    local_1f0 = local_1e0 - (int)param2;
                  }
                  *(__uint32_t *)((long)pvVar4 + 0x14) = local_1f0;
                  _fwrite(pvVar4,(ulong)local_ec,1,local_a0);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                }
                _free(pvVar4);
              }
              local_210 = local_120 - local_1a8;
              local_220 = local_210 + 0xfff & 0xfffffffffffff000;
              if (local_d8 == -1) {
                if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                   (*local_a8 == -0x31051202)) {
                  local_210 = __OSSwapInt64(local_210);
                }
                local_60 = local_210;
                if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                   (*local_a8 == -0x31051202)) {
                  local_220 = __OSSwapInt64(local_220);
                }
                local_70 = local_220;
                _fseeko(local_a0,local_e0,0);
                _fwrite(local_90,0x48,1,local_a0);
              }
              else {
                local_1f8 = (__uint32_t)local_210;
                if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                   (*local_a8 == -0x31051202)) {
                  local_1f8 = __OSSwapInt32(local_1f8);
                }
/* thanks for reading - discord.gg/sdkhDjTex */
                local_24 = local_1f8;
                local_200 = (__uint32_t)local_220;
                if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                   (*local_a8 == -0x31051202)) {
                  local_200 = __OSSwapInt32(local_200);
                }
                local_2c = local_200;
                _fseeko(local_a0,local_d8,0);
                _fwrite(local_48,0x38,1,local_a0);
              }
            }
            if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
               (*local_a8 == -0x31051202)) {
              local_228 = __OSSwapInt32(local_cc - 1);
            }
            else {
              local_228 = local_cc - 1;
            }
            local_a8[4] = local_228;
            if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
/*  proprietary - see LICENSE - do not sell  */
               (*local_a8 == -0x31051202)) {
              if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                 (*local_a8 == -0x31051202)) {
                local_230 = __OSSwapInt32(local_a8[5]);
              }
              else {
                local_230 = local_a8[5];
              }
              local_234 = __OSSwapInt32(local_230 - local_180);
            }
            else {
              if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) ||
                 (*local_a8 == -0x31051202)) {
                local_23c = __OSSwapInt32(local_a8[5]);
              }
              else {
                local_23c = local_a8[5];
              }
              local_234 = local_23c - local_180;
            }
            local_a8[5] = local_234;
            local_91 = 1;
          }
          goto LAB_1000023ca;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        _printf("LC_CODE_SIGNATURE is not the last load command, so couldn\'t remove.\n");
      }
    }
LAB_10000231f:
    pFVar1 = local_a0;
    if (((*local_a8 == -0x41450136) || (*local_a8 == -0x30051202)) || (*local_a8 == -0x31051202)) {
      local_260 = __OSSwapInt32(local_f4);
    }
    else {
      local_260 = local_f4;
    }
    _fseeko(pFVar1,(ulong)local_260,1);
    local_f0 = local_f0 + 1;
  } while( true );
}
