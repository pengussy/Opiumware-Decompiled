/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x178a5c:5078337638
   =========================================================================== */

char * FUN_00178a5c(undefined1 *param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [12];
  undefined1 auStack_1a8 [24];
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  long *plStack_170;
  code *pcStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  long alStack_150 [3];
  long *plStack_138;
  long alStack_130 [3];
  long *plStack_118;
  long *plStack_108;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  char cStack_a1;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  *param_1 = 0;
/* unlicensed copy if this notice is missing */
  *(undefined8 *)(param_1 + 8) = 0;
  uStack_158 = *(undefined8 *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x28);
  plVar2 = (long *)param_3[3];
  plStack_160 = param_2;
  if (plVar2 == (long *)0x0) {
    plStack_138 = (long *)0x0;
LAB_00178acc:
    plStack_50 = (long *)0x0;
  }
  else {
    if (plVar2 == param_3) {
      plStack_138 = alStack_150;
      (**(code **)(*plVar2 + 0x18))(plVar2,alStack_150);
      if (plStack_138 == (long *)0x0) goto LAB_00178acc;
    }
    else {
      param_3[3] = 0;
      plStack_138 = plVar2;
    }
    plStack_50 = plStack_138;
    if (plStack_138 == alStack_150) {
      plStack_50 = alStack_68;
      (**(code **)(*plStack_138 + 0x18))(plStack_138,alStack_68);
    }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    else {
      plStack_138 = (long *)0x0;
    }
  }
  func_0x0017dccc(alStack_130,&plStack_160,alStack_68,param_4,param_5);
  if (plStack_50 == alStack_68) {
    lVar5 = 0x20;
LAB_00178b5c:
    (**(code **)(*plStack_50 + lVar5))();
  }
  else if (plStack_50 != (long *)0x0) {
    lVar5 = 0x28;
    goto LAB_00178b5c;
  }
  FUN_0017cc58(alStack_130,1,param_1);
  if (cStack_a1 < '\0') {
    __ZdlPv(uStack_b8);
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  if (plStack_108 != (long *)0x0) {
    lVar5 = (long)plStack_108 + *(long *)(*plStack_108 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar5,*(uint *)(lVar5 + 0x20) & 2);
  }
  if (plStack_118 == alStack_130) {
    lVar5 = 0x20;
LAB_00178bd8:
    (**(code **)(*plStack_118 + lVar5))();
// WM - if you paid for this, you were scammed
  }
  else if (plStack_118 != (long *)0x0) {
    lVar5 = 0x28;
    goto LAB_00178bd8;
  }
  if (plStack_138 == alStack_150) {
    lVar5 = 0x20;
LAB_00178c04:
    pcVar3 = (char *)(**(code **)(*plStack_138 + lVar5))();
  }
  else {
    pcVar3 = (char *)0x0;
    if (plStack_138 != (long *)0x0) {
      lVar5 = 0x28;
      goto LAB_00178c04;
    }
  }
  if (plStack_160 != (long *)0x0) {
    lVar5 = (long)plStack_160 + *(long *)(*plStack_160 + -0x18);
    pcVar3 = (char *)__ZNSt3__18ios_base5clearEj(lVar5,*(uint *)(lVar5 + 0x20) & 2);
  }
/*  keep the notice, keep the source honest  */
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return pcVar3;
  }
  auVar6 = ___stack_chk_fail();
  uVar4 = auVar6._0_8_;
  if (auVar6._8_4_ == 0) goto LAB_00178cf8;
  uVar4 = func_0x00006858(uVar4);
  func_0x0017d2c0(alStack_130);
  if (plStack_138 == alStack_150) {
    lVar5 = 0x20;
LAB_00178cdc:
    (**(code **)(*plStack_138 + lVar5))();
  }
  else if (plStack_138 != (long *)0x0) {
    lVar5 = 0x28;
    goto LAB_00178cdc;
  }
  func_0x0017d34c(&plStack_160);
  func_0x00178e00(param_1);
LAB_00178cf8:
  plVar2 = (long *)__Unwind_Resume(uVar4);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  pcStack_168 = FUN_00178d00;
  pcVar3 = (char *)*plVar2;
  if (*pcVar3 == '\x02') {
    return (char *)plVar2[2];
  }
  if (*pcVar3 == '\x01') {
    pcVar3 = (char *)(plVar2[1] + 0x38);
  }
  else if (plVar2[3] != 0) {
    plStack_190 = alStack_68;
    uStack_188 = param_4;
    uStack_180 = uVar4;
    puStack_178 = param_1;
    plStack_170 = alStack_68 + 0xb;
    uVar4 = ___cxa_allocate_exception(0x20);
    func_0x0000e100(auStack_1a8,"cannot get value");
    FUN_001882a4(uVar4,0xd6,auStack_1a8,*plVar2);
    ___cxa_throw(uVar4,&UNK_01dbfdf0,&DAT_00184420);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x178dc4);
    (*pcVar1)();
  }
  return pcVar3;
}

