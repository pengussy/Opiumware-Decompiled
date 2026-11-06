/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x43cdc:599de3a628
 */

undefined8 FUN_00043cdc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  code *pcVar8;
  ulong extraout_x1;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  int iStack_e4;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_70;
  ulong uStack_68;
// do not claim this as your own
  
  func_0x00793bd0(param_1,0,0);
  puVar3 = PTR__vm_region_64_01f20450;
  puVar2 = PTR__mach_task_self__01f20350;
  uStack_c8 = 0;
  lStack_d0 = 0;
  uStack_b8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_b0 = 0x3f800000;
  if (uRam0000000001f26780 != 0) {
    uVar9 = 0;
    lVar1 = lRam0000000001f267f0 + *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x18) + 0x10);
    iStack_e4 = 1;
    uVar11 = uRam0000000001f26780;
    do {
      plVar10 = *(long **)(lVar1 + lRam0000000001f26790 * uVar9 + lRam0000000001f267b0 + 0x10);
      if (plVar10 != (long *)0x0) {
        do {
          uStack_d8 = plVar10[2];
          if (uStack_d8 != 0) {
            plStack_a0 = &lStack_d0;
// thanks for reading - discord.gg/sdkhDjTex
            func_0x0016e2d0(&plStack_a0,&uStack_d8,&uStack_d8);
            uVar11 = uStack_d8;
            if (((extraout_x1 & 1) != 0) && (uStack_d8 - 0x10001 < 0x7ffffffefffe)) {
              lStack_70 = 0;
              uStack_68 = uStack_d8;
              uStack_80 = 0;
              plStack_98 = (long *)0x0;
              plStack_a0 = (long *)0x0;
              uStack_88 = 0;
              uStack_90 = 0;
              iStack_a8 = 0;
              uStack_a4 = 9;
              pcVar8 = (code *)func_0x0011ab24(puVar3);
              iVar7 = (*pcVar8)(*(undefined4 *)puVar2,&uStack_68,&lStack_70,9,&plStack_a0,&uStack_a4
                                ,&iStack_a8);
              if (iVar7 == 0) {
                if (iStack_a8 != 0) {
                  pcVar8 = (code *)func_0x0011ab24(PTR__mach_port_deallocate_01f20348);
                  (*pcVar8)(*(undefined4 *)puVar2,iStack_a8);
                }
                if (((((uStack_68 <= uVar11) && (uVar11 < lStack_70 + uStack_68)) &&
                     (((ulong)plStack_a0 & 1) != 0)) &&
                    ((uVar11 = *(ulong *)(uStack_d8 + 8), uVar11 != 0 && (0x10000 < uVar11)))) &&
                   (uVar11 < 0x7fffffffffff)) {
                  lStack_70 = 0;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  uStack_80 = 0;
                  plStack_98 = (long *)0x0;
                  plStack_a0 = (long *)0x0;
                  uStack_88 = 0;
                  uStack_90 = 0;
                  iStack_a8 = 0;
                  uStack_a4 = 9;
                  uStack_68 = uVar11;
                  pcVar8 = (code *)func_0x0011ab24(puVar3);
                  iVar7 = (*pcVar8)(*(undefined4 *)puVar2,&uStack_68,&lStack_70,9,&plStack_a0,
                                    &uStack_a4,&iStack_a8);
                  if (iVar7 == 0) {
                    if (iStack_a8 != 0) {
                      pcVar8 = (code *)func_0x0011ab24(PTR__mach_port_deallocate_01f20348);
                      (*pcVar8)(*(undefined4 *)puVar2,iStack_a8);
                    }
                    uVar4 = uStack_d8;
                    if (((uStack_68 <= uVar11) && (uVar11 < lStack_70 + uStack_68)) &&
                       (((ulong)plStack_a0 & 1) != 0)) {
                      plStack_a0 = (long *)0x0;
                      plStack_98 = (long *)0x0;
                      if (*(long *)(uStack_d8 + 0x10) != 0) {
                        plStack_98 = (long *)__ZNSt3__119__shared_weak_count4lockEv();
                        if (plStack_98 != (long *)0x0) {
                          plStack_a0 = *(long **)(uVar4 + 8);
                        }
                        if (plStack_a0 != (long *)0x0) {
/* WM - donate: donate/README.md */
                          (*pcRam0000000001f26db8)(param_1,&plStack_a0);
                          iVar7 = func_0x00791be4(param_1,0xffffffff);
                          if (iVar7 == 0) {
                            func_0x00791660(param_1,0xfffffffe);
                          }
                          else {
                            func_0x00794504(param_1,0xfffffffe,iStack_e4);
                            iStack_e4 = iStack_e4 + 1;
                          }
                        }
                      }
                      plVar5 = plStack_98;
                      if (plStack_98 != (long *)0x0) {
                        LOAcquire();
                        lVar6 = plStack_98[1];
                        plStack_98[1] = lVar6 + -1;
                        LORelease();
                        if (lVar6 == 0) {
                          (**(code **)(*plStack_98 + 0x10))(plStack_98);
/* wm:do not claim this as your own */
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
        uVar11 = uRam0000000001f26780;
      }
      uVar9 = uVar9 + 1;
      lVar6 = lStack_d0;
      plVar10 = plStack_c0;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    } while (uVar9 < uVar11);
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      lStack_d0 = lVar6;
      __ZdlPv();
      lVar6 = lStack_d0;
    }
    lStack_d0 = 0;
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  return 1;
}

