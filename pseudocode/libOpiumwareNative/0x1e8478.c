/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1e8478:92a10e0f9e
 */

/* WARNING: Removing unreachable block (ram,0x001e8620) */
/* WARNING: Removing unreachable block (ram,0x001e88b0) */
/* WARNING: Removing unreachable block (ram,0x001e88b8) */

void FUN_001e8478(long param_1)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long alStack_130 [3];
  long *plStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  byte bStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long alStack_d8 [3];
  long *plStack_c0;
  long lStack_b8;
/* do not claim this as your own */
  long alStack_b0 [2];
  long *plStack_a0;
  long *plStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  byte bStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((lRam0000000001f26d30 == *(long *)(param_1 + 0x38)) &&
     (lRam0000000002097038 == *(long *)(param_1 + 0x40))) {
    plStack_c0 = (long *)0x0;
    if (*(long **)(param_1 + 0x28) == (long *)0x0) goto LAB_001e8960;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x30))(&lStack_b8);
    plVar2 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar2 == alStack_d8) {
      lVar6 = 0x20;
LAB_001e851c:
      (**(code **)(*plVar2 + lVar6))();
    }
    else if (plVar2 != (long *)0x0) {
      lVar6 = 0x28;
      goto LAB_001e851c;
    }
    if (plStack_a0 == (long *)0x0) {
/* wm:donate: donate/README.md */
      plStack_c0 = (long *)0x0;
    }
    else if (plStack_a0 == &lStack_b8) {
      plStack_c0 = alStack_d8;
      (**(code **)(*plStack_a0 + 0x18))(plStack_a0,alStack_d8);
      if (plStack_a0 == &lStack_b8) {
        lVar6 = 0x20;
      }
      else {
        if (plStack_a0 == (long *)0x0) goto LAB_001e8590;
        lVar6 = 0x28;
      }
      (**(code **)(*plStack_a0 + lVar6))();
    }
    else {
      plStack_c0 = plStack_a0;
    }
LAB_001e8590:
    if ((lRam0000000001f26d30 == *(long *)(param_1 + 0x38)) &&
       (lRam0000000002097038 == *(long *)(param_1 + 0x40))) {
      if ((bRam0000000002092db0 & 1) == 0) {
        func_0x019d5b84();
      }
      lVar6 = *(long *)(param_1 + 8);
      if (plStack_c0 == (long *)0x0) {
        plStack_118 = (long *)0x0;
      }
      else if (plStack_c0 == alStack_d8) {
        plStack_118 = alStack_130;
        (**(code **)(*plStack_c0 + 0x18))(plStack_c0,alStack_130);
      }
      else {
        plStack_118 = plStack_c0;
        plStack_c0 = (long *)0x0;
      }
      uStack_110 = uStack_110 & 0xffffffffffffff00;
      bStack_f8 = 0;
      uStack_f0 = *(undefined4 *)(param_1 + 0x30);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      uStack_e0 = *(undefined8 *)(param_1 + 0x40);
      uStack_e8 = *(undefined8 *)(param_1 + 0x38);
      __ZNSt3__15mutex4lockEv(0x2092df0);
      lVar1 = 0;
      if (lRam0000000002092dd0 != lRam0000000002092dc8) {
        lVar1 = (lRam0000000002092dd0 - lRam0000000002092dc8) * 0x10 + -1;
      }
      if (lVar1 == lRam0000000002092de8 + lRam0000000002092de0) {
        func_0x0012d4cc(0x2092dc0);
      }
      plVar2 = plStack_118;
      lStack_b8 = lVar6;
      if (lRam0000000002092dd0 == lRam0000000002092dc8) {
        lVar6 = 0;
        if (plStack_118 == (long *)0x0) goto LAB_001e870c;
LAB_001e86dc:
        plStack_98 = alStack_b0;
        if (plStack_118 == alStack_130) {
          (**(code **)(*plStack_118 + 0x18))(plStack_118,plStack_98);
        }
        else {
          plStack_118 = (long *)0x0;
          plStack_98 = plVar2;
        }
      }
      else {
        lVar6 = *(long *)(lRam0000000002092dc8 +
                         ((ulong)(lRam0000000002092de8 + lRam0000000002092de0) >> 7) * 8) +
                (lRam0000000002092de8 + lRam0000000002092de0 & 0x7fU) * 0x20;
        if (plStack_118 != (long *)0x0) goto LAB_001e86dc;
LAB_001e870c:
        plStack_98 = (long *)0x0;
      }
      bVar3 = bStack_f8;
      uStack_90 = uStack_90 & 0xffffffffffffff00;
      bStack_78 = bStack_f8 == 1;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      if ((bool)bStack_78) {
        uStack_88 = uStack_108;
        uStack_90 = uStack_110;
        lStack_80 = lStack_100;
        uStack_108 = 0;
        lStack_100 = 0;
        uStack_110 = 0;
      }
      uStack_70 = CONCAT44(uStack_ec,uStack_f0);
      uStack_68 = uStack_e8;
      uStack_60 = uStack_e0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      puVar5 = (undefined8 *)__Znwm(0x68);
      *puVar5 = &UNK_01dc0358;
      puVar5[1] = lStack_b8;
      if (plStack_98 == (long *)0x0) {
        *(undefined1 *)(puVar5 + 6) = 0;
        puVar5[5] = 0;
        *(undefined1 *)(puVar5 + 9) = 0;
        if (bVar3 != 0) goto LAB_001e87e8;
LAB_001e8808:
        puVar5[0xb] = uStack_68;
        puVar5[10] = uStack_70;
        puVar5[0xc] = uStack_60;
        *(undefined8 **)(lVar6 + 0x18) = puVar5;
        if (plStack_98 == alStack_b0) {
          lVar6 = 0x20;
        }
        else {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          if (plStack_98 == (long *)0x0) goto LAB_001e8848;
          lVar6 = 0x28;
        }
        (**(code **)(*plStack_98 + lVar6))(plStack_98);
      }
      else {
        if (plStack_98 == alStack_b0) {
          puVar5[5] = puVar5 + 2;
          (**(code **)(*plStack_98 + 0x18))(plStack_98);
          *(undefined1 *)(puVar5 + 6) = 0;
          *(undefined1 *)(puVar5 + 9) = 0;
          if ((bStack_78 & 1) == 0) goto LAB_001e8808;
LAB_001e87e8:
          puVar5[7] = uStack_88;
          puVar5[6] = uStack_90;
          puVar5[8] = lStack_80;
          uStack_88 = 0;
          lStack_80 = 0;
          uStack_90 = 0;
          *(undefined1 *)(puVar5 + 9) = 1;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
          goto LAB_001e8808;
        }
        *(undefined1 *)(puVar5 + 6) = 0;
        puVar5[5] = plStack_98;
        plStack_98 = (long *)0x0;
        *(undefined1 *)(puVar5 + 9) = 0;
        if ((bVar3 & 1) != 0) goto LAB_001e87e8;
        puVar5[0xb] = uStack_68;
        puVar5[10] = uStack_70;
        puVar5[0xc] = uStack_60;
        *(undefined8 **)(lVar6 + 0x18) = puVar5;
      }
LAB_001e8848:
      lRam0000000002092de8 = lRam0000000002092de8 + 1;
      __ZNSt3__15mutex6unlockEv(0x2092df0);
      if ((bStack_f8 == 1) && (lStack_100 < 0)) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        __ZdlPv(uStack_110);
      }
      if (plStack_118 == alStack_130) {
        lVar6 = 0x20;
      }
      else {
        if (plStack_118 == (long *)0x0) goto LAB_001e88a4;
        lVar6 = 0x28;
      }
      (**(code **)(*plStack_118 + lVar6))();
    }
LAB_001e88a4:
    if (plStack_c0 == alStack_d8) {
      lVar6 = 0x20;
    }
    else {
      if (plStack_c0 == (long *)0x0) goto LAB_001e88ec;
      lVar6 = 0x28;
    }
    (**(code **)(*plStack_c0 + lVar6))();
  }
LAB_001e88ec:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_001e8960:
  func_0x001717b4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1e8968);
  (*pcVar4)();
}

