/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x353890:eb0785fc83
 *  --------------------------------------------------------------------------*/

undefined * FUN_00353890(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = func_0x004a07e8(6);
  iVar1 = func_0x0045fb1c(param_1,uVar2);
  if (iVar1 == 0) {
    uVar2 = func_0x004a0804(6);
    iVar1 = func_0x0045fb1c(param_1,uVar2);
    if (iVar1 == 0) {
      uVar2 = func_0x004a07e8(0x390);
      iVar1 = func_0x0045fb1c(param_1,uVar2);
      if (iVar1 == 0) {
        uVar2 = func_0x004a0804(0x390);
/*  found on a paste site? it was re-uploaded illegally  */
        iVar1 = func_0x0045fb1c(param_1,uVar2);
        if (iVar1 == 0) {
          uVar2 = func_0x004a07e8(0x74);
          iVar1 = func_0x0045fb1c(param_1,uVar2);
          if (iVar1 == 0) {
            uVar2 = func_0x004a0804(0x74);
            iVar1 = func_0x0045fb1c(param_1,uVar2);
            if (iVar1 == 0) {
              uVar2 = func_0x004a07e8(0x198);
              iVar1 = func_0x0045fb1c(param_1,uVar2);
              if (iVar1 == 0) {
                uVar2 = func_0x004a0804(0x198);
                iVar1 = func_0x0045fb1c(param_1,uVar2);
                if (iVar1 == 0) {
                  uVar2 = func_0x004a07e8(0x32b);
                  iVar1 = func_0x0045fb1c(param_1,uVar2);
                  if (iVar1 == 0) {
                    uVar2 = func_0x004a0804(0x32b);
                    iVar1 = func_0x0045fb1c(param_1,uVar2);
                    if (iVar1 == 0) {
                      uVar2 = func_0x004a07e8(0x3d3);
                      iVar1 = func_0x0045fb1c(param_1,uVar2);
                      if (iVar1 == 0) {
                        uVar2 = func_0x004a0804(0x3d3);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                        iVar1 = func_0x0045fb1c(param_1,uVar2);
                        if (iVar1 == 0) {
                          uVar2 = func_0x004a07e8(0x3d4);
                          iVar1 = func_0x0045fb1c(param_1,uVar2);
                          if (iVar1 == 0) {
                            uVar2 = func_0x004a0804(0x3d4);
                            iVar1 = func_0x0045fb1c(param_1,uVar2);
                            if (iVar1 == 0) {
                              uVar2 = func_0x004a07e8(0x43f);
                              iVar1 = func_0x0045fb1c(param_1,uVar2);
                              if (iVar1 == 0) {
                                uVar2 = func_0x004a0804(0x43f);
                                iVar1 = func_0x0045fb1c(param_1,uVar2);
                                if (iVar1 == 0) {
                                  uVar2 = func_0x004a07e8(0x440);
                                  iVar1 = func_0x0045fb1c(param_1,uVar2);
                                  if (iVar1 == 0) {
                                    uVar2 = func_0x004a0804(0x440);
                                    iVar1 = func_0x0045fb1c(param_1,uVar2);
                                    if (iVar1 == 0) {
                                      if (*(long *)(param_3 + 0x6d0) == 0) {
                                        return (undefined *)0x0;
                                      }
                                      lVar6 = 0;
                                      lVar4 = 9;
                                      while( true ) {
                                        lVar7 = *(long *)(param_3 + 0x160);
                                        uVar2 = func_0x004a07e8(*(undefined4 *)(lVar7 + lVar6));
                                        iVar1 = func_0x0045fb1c(param_1,uVar2);
                                        if (iVar1 != 0) break;
/* no support for modified copies - github.com/pengussy */
                                        uVar2 = func_0x004a0804(*(undefined4 *)(lVar7 + lVar6));
                                        iVar1 = func_0x0045fb1c(param_1,uVar2);
                                        if (iVar1 != 0) break;
                                        uVar5 = lVar4 - 8;
                                        lVar4 = lVar4 + 1;
                                        lVar6 = lVar6 + 8;
                                        if (*(ulong *)(param_3 + 0x6d0) <= uVar5) {
                                          return (undefined *)0x0;
                                        }
                                      }
                                      if (param_2 != (long *)0x0) {
                                        *param_2 = lVar4;
                                      }
                                      return (undefined *)(*(long *)(param_3 + 0x160) + lVar6);
                                    }
                                  }
                                  puVar3 = &UNK_01ae5f90;
                                  lVar4 = 8;
                                  goto LAB_003538ec;
                                }
                              }
                              puVar3 = &UNK_01ae5f88;
                              lVar4 = 7;
                              goto LAB_003538ec;
                            }
                          }
                          puVar3 = &UNK_01ae5f80;
                          lVar4 = 6;
                          goto LAB_003538ec;
                        }
                      }
                      puVar3 = &UNK_01ae5f78;
                      lVar4 = 5;
                      goto LAB_003538ec;
// WM - thanks for reading - discord.gg/sdkhDjTex
                    }
                  }
                  puVar3 = &UNK_01ae5f70;
                  lVar4 = 4;
                  goto LAB_003538ec;
                }
              }
              puVar3 = &UNK_01ae5f68;
              lVar4 = 3;
              goto LAB_003538ec;
            }
          }
          puVar3 = &UNK_01ae5f60;
          lVar4 = 2;
          goto LAB_003538ec;
        }
      }
      puVar3 = &UNK_01ae5f58;
      lVar4 = 1;
      goto LAB_003538ec;
    }
  }
  lVar4 = 0;
  puVar3 = &UNK_01ae5f50;
LAB_003538ec:
  if (param_2 != (long *)0x0) {
    *param_2 = lVar4;
  }
  return puVar3;
}
// found on a paste site? it was re-uploaded illegally

