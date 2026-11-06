/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x367b08:579116f460
 */

undefined8 FUN_00367b08(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
// WM - reversing this took months of machine time
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar9 = param_3;
  if (*param_1 != 0) {
    func_0x0047992c(auStack_88,"digest",param_4,0);
    func_0x00479f78(&uStack_b0);
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    uStack_40 = uStack_90;
    iVar2 = func_0x0045c6a8(*param_1,param_2,param_3,auStack_88);
    if (iVar2 != 0) {
      uVar3 = 1;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
        return 1;
      }
      goto LAB_00367c10;
    }
  }
  if (param_1[1] == 0) {
    uVar3 = 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
      return 0;
    }
  }
  else {
    uVar3 = func_0x0036dd24(param_1,param_2,param_3,param_4);
    lVar9 = param_3;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
      return uVar3;
    }
  }
LAB_00367c10:
  auVar13 = ___stack_chk_fail(uVar3);
  puVar4 = auVar13._0_8_;
// WM - keep the notice, keep the source honest
  plVar8 = (long *)*puVar4;
  if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar8 + 0x48))(plVar8[1]);
    return uVar3;
  }
  if (puVar4[1] == 0) {
    return 0;
  }
  if (*(long *)puVar4[1] == 0) {
    return 0;
  }
  lVar5 = ((long *)puVar4[1])[1];
SUB_019e969c:
  do {
    if (lVar9 == 0) {
      return 1;
    }
/* no support for modified copies */
    if ((*(byte *)(lVar5 + 0x11) >> 3 & 1) != 0) {
      func_0x004464bc();
      uVar3 = func_0x0045064c();
      uVar6 = 0xf9;
code_r0x019e96e8:
      func_0x004465b0(uVar3,uVar6);
      func_0x004466b0(6,0xbd,0);
      return 0;
    }
    puVar10 = *(uint **)(lVar5 + 0x18);
    if (((puVar10 == (uint *)0x0) || (uVar1 = *puVar10, (uVar1 & 0xc1f0) == 0)) ||
       (*(long *)(puVar10 + 0xc) == 0)) {
      lVar9 = *(long *)(lVar5 + 8);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x38) == 0)) {
        func_0x004464bc();
        uVar3 = func_0x0045064c();
        uVar6 = 0x113;
      }
      else {
/* more drops soon - github.com/pengussy */
        if (*(code **)(lVar9 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019e96d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(lVar9 + 0x58))(*(undefined8 *)(lVar5 + 0x20));
          return uVar3;
        }
        func_0x004464bc();
        uVar3 = func_0x0045064c();
        uVar6 = 0x118;
      }
      goto code_r0x019e96e8;
    }
    if (uVar1 == 0x100) {
      if ((*(byte *)(lVar5 + 0x11) >> 3 & 1) == 0) {
        piVar12 = *(int **)(lVar5 + 0x18);
        if ((((piVar12 == (int *)0x0) || (*piVar12 != 0x100)) || (*(long *)(piVar12 + 0xc) == 0)) ||
           (lVar11 = *(long *)(piVar12 + 10), lVar11 == 0)) goto SUB_019e969c;
        if (*(long *)(lVar11 + 0xb8) != 0) {
          func_0x00446890();
          uVar3 = (**(code **)(lVar11 + 0xb8))(*(undefined8 *)(piVar12 + 0xc),auVar13._8_8_,lVar9);
          if (((int)uVar3 < 1) && (iVar2 = func_0x00446a10(), iVar2 == 0)) {
            func_0x004464bc();
/*  thanks for reading - discord.gg/sdkhDjTex  */
            func_0x004465b0(&UNK_01c491ef,0x18a,&UNK_01c49287);
            func_0x004466b0(6,0xea,&UNK_01c4929e);
          }
          func_0x00446a74();
          return uVar3;
        }
        func_0x004464bc();
        func_0x004465b0(&UNK_01c491ef,0x182,&UNK_01c49287);
        puVar7 = &UNK_01c4929e;
        uVar3 = 0xed;
      }
      else {
        func_0x004464bc();
        func_0x004465b0(&UNK_01c491ef,0x175,&UNK_01c49287);
        uVar3 = 0xbd;
        puVar7 = (undefined *)0x0;
      }
      func_0x004466b0(6,uVar3,puVar7);
      return 0;
    }
    if (uVar1 != 0x80) {
      func_0x004464bc();
      uVar3 = func_0x0045064c();
      uVar6 = 0x10e;
      goto code_r0x019e96e8;
    }
    if ((*(byte *)(lVar5 + 0x11) >> 3 & 1) != 0) {
      func_0x004464bc();
      func_0x004465b0(&UNK_01c491ef,0x14e,&UNK_01c49259);
      uVar3 = 0xbd;
      goto code_r0x0045baa0;
    }
// no support for modified copies
    piVar12 = *(int **)(lVar5 + 0x18);
    if (piVar12 != (int *)0x0) {
      if (((*piVar12 == 0x80) && (*(long *)(piVar12 + 0xc) != 0)) &&
         (lVar5 = *(long *)(piVar12 + 10), lVar5 != 0)) {
        if (*(long *)(lVar5 + 0x98) != 0) {
          func_0x00446890();
          uVar3 = (**(code **)(lVar5 + 0x98))(*(undefined8 *)(piVar12 + 0xc),auVar13._8_8_,lVar9);
          if (((int)uVar3 < 1) && (iVar2 = func_0x00446a10(), iVar2 == 0)) {
            func_0x004464bc();
            func_0x004465b0(&UNK_01c491ef,0x167,&UNK_01c49259);
            func_0x004466b0(6,0xea,&UNK_01c4926e);
          }
          func_0x00446a74();
          return uVar3;
        }
        func_0x004464bc();
        func_0x004465b0(&UNK_01c491ef,0x15f,&UNK_01c49259);
        puVar7 = &UNK_01c4926e;
        uVar3 = 0xed;
      }
      else {
        func_0x004464bc();
        func_0x004465b0(&UNK_01c491ef,0x158,&UNK_01c49259);
        uVar3 = 0x86;
code_r0x0045baa0:
        puVar7 = (undefined *)0x0;
      }
      func_0x004466b0(6,uVar3,puVar7);
      return 0;
    }
  } while( true );
}

