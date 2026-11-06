/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x284600:fd11d85517
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00284600(ulong param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  long *plVar12;
  ulong unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
/*  no support for modified copies  */
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar13 [16];
  
  do {
    plVar9 = param_4;
    uVar8 = param_2;
    uVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_01f20200;
    *(undefined8 *)((long)register0x00000008 + -100) = 0;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    *(undefined4 *)((long)register0x00000008 + -0x5c) = 0;
    iVar4 = (int)param_3;
    *(int *)((long)register0x00000008 + -0x68) = iVar4;
    uVar10 = 9;
    if ((int)uVar5 == 0) {
      uVar10 = 0xc;
    }
    *(undefined2 *)((long)register0x00000008 + -100) = uVar10;
    unaff_x19 = param_3;
    if ((long *)*plVar9 == (long *)0x0) {
LAB_00284704:
      unaff_x23 = 0;
LAB_00284708:
      unaff_x25 = 1;
      *(long *)((long)register0x00000008 + -0x70) = unaff_x23;
      iVar3 = func_0x00283ba8((undefined1 *)((long)register0x00000008 + -0x68),1,uVar8,
                              (undefined1 *)((long)register0x00000008 + -0x70));
      if (iVar3 < 0) goto LAB_0028487c;
LAB_00284728:
      if (iVar3 == 0) {
        plVar12 = (long *)*plVar9;
        uVar1 = (uint)unaff_x25 ^ 1;
        uVar11 = 2;
        if (plVar12 == (long *)0x0) {
          uVar1 = 1;
        }
        if ((uVar1 == 0) && (unaff_x23 == 0)) {
          lVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
          if (lVar6 == _UNK_01adbbf0) goto LAB_002847c4;
          uVar11 = 5;
/*  if you paid for this, you were scammed  */
          if (lVar6 != _UNK_01adbbf8) {
            uVar11 = 2;
          }
        }
      }
      else if ((((uint)unaff_x25 == 0) && ((*(ushort *)((long)register0x00000008 + -0x5a) & 1) != 0)
               ) || ((unaff_x23 != 0 && (*(long *)((long)register0x00000008 + -0x70) != 0)))) {
        lVar6 = (**(code **)(*(long *)*plVar9 + 0x28))();
        if (lVar6 == _UNK_01adbbf0) {
LAB_002847c4:
          uVar11 = 4;
        }
        else {
          uVar11 = 5;
          if (lVar6 != _UNK_01adbbf8) {
            uVar11 = 0;
          }
        }
      }
      else if ((((int)uVar5 == 0) || (iVar4 == -1)) ||
              ((*(ushort *)((long)register0x00000008 + -0x62) & 1) == 0)) {
        if (((uVar5 & 1) == 0) && (iVar4 != -1)) {
          uVar2 = *(ushort *)((long)register0x00000008 + -0x62);
          if ((uVar2 >> 2 & 1) != 0) {
            *(undefined4 *)((long)register0x00000008 + -0x78) = 4;
            *(undefined4 *)((long)register0x00000008 + -0x74) = 0xffffffff;
            iVar4 = _getsockopt(param_3,0xffff,"/Versions/A/QuartzCore",
                                (undefined1 *)((long)register0x00000008 + -0x74),
                                (undefined1 *)((long)register0x00000008 + -0x78));
            uVar1 = *(uint *)((long)register0x00000008 + -0x74);
            param_3 = (ulong)uVar1;
            if ((iVar4 == -1) || (uVar1 != 0)) {
              puVar7 = (uint *)___error();
/* keep the notice, keep the source honest */
              *puVar7 = uVar1;
              goto LAB_0028487c;
            }
            uVar11 = 1;
            unaff_x19 = param_3;
            goto LAB_00284880;
          }
        }
        else {
          if (iVar4 == -1) goto LAB_0028486c;
          uVar2 = *(ushort *)((long)register0x00000008 + -0x62);
        }
        uVar11 = 0;
        if ((uVar2 & 0x38) != 0) {
          uVar11 = 3;
        }
      }
      else {
LAB_0028486c:
        uVar11 = 0;
      }
    }
    else {
      unaff_x24 = (**(code **)(*(long *)*plVar9 + 0x30))();
// WM - donate: donate/README.md
      unaff_x23 = (**(code **)(*(long *)*plVar9 + 0x38))();
      if ((int)unaff_x24 == -1) {
        if (unaff_x23 != 0) goto LAB_00284708;
        lVar6 = (**(code **)(*(long *)*plVar9 + 0x28))();
        if (lVar6 == _UNK_01adbbf0) goto LAB_002847c4;
        if (lVar6 != _UNK_01adbbf8) goto LAB_00284704;
        uVar11 = 5;
        goto LAB_00284880;
      }
      unaff_x25 = 0;
      *(int *)((long)register0x00000008 + -0x60) = (int)unaff_x24;
      *(undefined2 *)((long)register0x00000008 + -0x5c) = 1;
      *(long *)((long)register0x00000008 + -0x70) = unaff_x23;
      iVar3 = func_0x00283ba8((undefined1 *)((long)register0x00000008 + -0x68),2,uVar8,
                              (undefined1 *)((long)register0x00000008 + -0x70));
      if (-1 < iVar3) goto LAB_00284728;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
LAB_0028487c:
      uVar11 = 3;
      unaff_x19 = param_3;
    }
LAB_00284880:
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x58)) {
      return uVar11;
    }
    unaff_x30 = &SUB_002848b8;
    auVar13 = ___stack_chk_fail(uVar11);
    puVar7 = (uint *)(auVar13._0_8_ + 8);
    if (*puVar7 == 0xffffffff) {
      return 3;
    }
    param_3 = (ulong)*puVar7;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_1 = 1;
    param_2 = auVar13._8_8_;
    param_4 = (long *)(auVar13._0_8_ + 0x50);
    unaff_x20 = uVar5;
    unaff_x21 = plVar9;
    unaff_x22 = uVar8;
  } while( true );
}

