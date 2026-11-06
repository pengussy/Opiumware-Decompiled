/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x345b14:e1f3726db3
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00345b14(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 in_stack_fffffffffffffe70;
  undefined4 uVar11;
  undefined4 auStack_158 [2];
  undefined4 auStack_150 [2];
  undefined8 uStack_148;
  ulong auStack_f0 [4];
  ulong uStack_d0;
  ulong uStack_c8;
  uint uStack_bc;
  int iStack_b8;
  int iStack_8c;
  
  puVar2 = PTR__mach_task_self__01f20350;
  if ((((!CARRY8(param_2,param_3)) && (param_1 != 0)) && (param_2 != 0)) &&
     (param_1 <= -param_3 && -param_1 != param_3)) {
    uVar8 = -*(long *)PTR__vm_page_size_01f20448;
/* donate: donate/README.md - github.com/pengussy */
    if (param_3 + param_1 <= uVar8) {
      uVar9 = uVar8 & param_1;
      uVar8 = (param_3 + param_1 + *(long *)PTR__vm_page_size_01f20448) - 1 & uVar8;
      lVar1 = uVar8 - uVar9;
      if (-1 < lVar1) {
        if (uVar9 < uVar8) {
          uVar4 = 0;
          iVar5 = 0;
          uVar7 = uVar9;
          do {
            uStack_c8 = uStack_c8 & 0xffffffff00000000;
            uStack_148 = uVar7;
            while( true ) {
              uStack_d0 = CONCAT44(uStack_d0._4_4_,0x15);
              uVar6 = (*_UNK_01dc22f0)(*(undefined4 *)puVar2,&uStack_148,auStack_f0,&uStack_c8,
                                       &uStack_bc,&uStack_d0);
              if ((int)uVar6 != 0) {
                return uVar6;
              }
              if ((uVar7 < uStack_148) || (auStack_f0[0] <= uVar7 - uStack_148)) {
                return 1;
              }
              if (iStack_8c == 0) break;
              uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)uStack_c8 + 1);
            }
            if ((uStack_bc & 1) == 0) {
              return 2;
            }
            if (uVar7 == uVar9) {
              uVar4 = uStack_bc;
              iVar5 = iStack_b8;
            }
            else {
/* do not claim this as your own */
              if (uVar4 != uStack_bc) {
                return 0x2e;
              }
              if (iVar5 != iStack_b8) {
                return 0x2e;
              }
            }
            uVar7 = auStack_f0[0] + uStack_148;
          } while (uVar7 < uVar8);
        }
        else {
          iVar5 = 0;
          uVar4 = 0;
        }
        uStack_c8 = 0;
        lVar10 = lVar1 * 2;
        uVar7 = _mach_vm_allocate(*(undefined4 *)puVar2,&uStack_c8,lVar10,1);
        uVar8 = uStack_c8;
        if ((int)uVar7 != 0) {
          return uVar7;
        }
/* unlicensed copy if this notice is missing - github.com/pengussy */
        uStack_d0 = uStack_c8;
        uStack_148 = uStack_148 & 0xffffffff00000000;
        do {
          auStack_f0[0]._0_4_ = 0x15;
          uVar7 = (*_UNK_01dc22f0)(*(undefined4 *)puVar2,&uStack_d0,auStack_f0 + 3,&uStack_148,
                                   &uStack_bc,auStack_f0);
          uVar11 = (undefined4)((ulong)in_stack_fffffffffffffe70 >> 0x20);
          if ((int)uVar7 != 0) {
LAB_00345d40:
            (*_UNK_01dc2300)(*(undefined4 *)puVar2,uStack_c8,lVar10);
            return uVar7;
          }
          if ((uVar8 < uStack_d0) || (auStack_f0[3] <= uVar8 - uStack_d0)) {
            uVar7 = 1;
            goto LAB_00345d40;
          }
          if (iStack_8c == 0) {
            auStack_f0[0] = 0;
            auStack_f0[1] = 0;
            auStack_f0[2] = 0;
// if you paid for this, you were scammed
            uVar8 = func_0x003460b4(auStack_f0,param_1,param_3,uVar4 >> 2 & 1);
            if (((int)uVar8 == 0) &&
               (uVar8 = func_0x00345a94(uStack_c8,uVar9,lVar1), (int)uVar8 == 0)) {
              (*_UNK_01dc2308)(uStack_c8 + lVar1,uStack_c8,lVar1);
              uVar8 = func_0x00345a94((param_1 - uVar9) + uStack_c8,param_2,param_3);
            }
            if ((uVar4 >> 2 & 1) == 0) {
              if ((int)uVar8 == 0 && (uVar4 & 2) == 0) {
                uVar8 = (*_UNK_01dc2310)(*(undefined4 *)puVar2,uVar9,lVar1,0,uVar4 | 0x12);
              }
              if ((int)uVar8 == 0) {
                (*_UNK_01dc2308)(param_1,(param_1 - uVar9) + uStack_c8,param_3);
                if ((uVar4 >> 1 & 1) == 0) {
                  uVar3 = (*_UNK_01dc2310)(*(undefined4 *)puVar2,uVar9,lVar1,0,uVar4);
                  if (uVar3 == 0) {
                    uVar8 = func_0x003459b8(uVar9,auStack_150,auStack_158,&uStack_148);
                    if ((int)uVar8 == 0) {
                      if (uStack_148._4_4_ == iVar5) {
                        uVar8 = 0;
                      }
                      else {
                        uVar8 = (*_UNK_01dc2310)(*(undefined4 *)puVar2,uVar9,lVar1,1,iVar5);
                      }
/* WM - reversing this took months of machine time */
                    }
                  }
                  else {
                    (*_UNK_01dc2308)(param_1,(param_1 - uVar9) + lVar1 + uStack_c8,param_3);
                    uVar4 = (*_UNK_01dc2310)(*(undefined4 *)puVar2,uVar9,lVar1,0,uVar4);
                    if (uVar4 != 0) {
                      uVar3 = uVar4;
                    }
                    uVar8 = (ulong)uVar3;
                  }
                }
                else {
                  uVar8 = 0;
                }
              }
            }
// keep the notice, keep the source honest
            else if ((int)uVar8 == 0) {
              (*_UNK_01dc2318)(uStack_c8,lVar1);
              uVar8 = (*_UNK_01dc2310)(*(undefined4 *)puVar2,uStack_c8,lVar1,0,uVar4);
              if (((int)uVar8 == 0) &&
                 ((iVar5 == iStack_b8 ||
                  (uVar8 = (*_UNK_01dc2310)(*(undefined4 *)puVar2,uStack_c8,lVar1,1,iVar5),
                  (int)uVar8 == 0)))) {
                auStack_150[0] = 0;
                auStack_158[0] = 0;
                uStack_148 = uVar9;
                uVar8 = (*_UNK_01dc2320)(*(undefined4 *)puVar2,&uStack_148,lVar1,0,0x4000,
                                         *(undefined4 *)puVar2,uStack_c8,1,auStack_150,auStack_158,
                                         CONCAT44(uVar11,1));
                if ((int)uVar8 == 0) {
                  (*_UNK_01dc2318)(param_1,param_3);
                }
              }
            }
            iVar5 = func_0x003463f4(auStack_f0);
            (*_UNK_01dc2300)(*(undefined4 *)puVar2,uStack_c8,lVar10);
            if (iVar5 != 0) {
              _fprintf(*(undefined8 *)PTR____stderrp_01f20208,"tinyhook: thread_resume failed: %d\n"
                      );
/*  chat: discord.gg/sdkhDjTex  */
            }
            if ((int)uVar8 == 0) {
              return uVar8;
            }
            if ((int)uVar8 == 0xe) {
              return uVar8;
            }
            _fprintf(*(undefined8 *)PTR____stderrp_01f20208,
                     "tinyhook: %s failed at %p: %d (protection=%x, maximum=%x)\n");
            return uVar8;
          }
          uStack_148 = CONCAT44(uStack_148._4_4_,(int)uStack_148 + 1);
        } while( true );
      }
    }
  }
  return 4;
}

