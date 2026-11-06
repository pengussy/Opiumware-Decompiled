/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1912c:f3d2ef67a5
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x000193f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00019410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000193fc) */
/* WARNING: Removing unreachable block (ram,0x00019414) */
/* WARNING: Removing unreachable block (ram,0x00019470) */
/* WARNING: Removing unreachable block (ram,0x000191ac) */
/* WARNING: Removing unreachable block (ram,0x000192cc) */

long * FUN_0001912c(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  byte bStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plStack_80 = param_1 + 2;
  lVar1 = *plStack_80;
  plVar3 = (long *)*param_1;
  if (param_4 <= (ulong)((lVar1 - (long)plVar3 >> 3) * -0x5555555555555555)) {
    plVar4 = (long *)param_1[1];
    lVar1 = (long)plVar4 - (long)plVar3;
    if ((ulong)((lVar1 >> 3) * -0x5555555555555555) < param_4) {
      plVar5 = param_2;
/* chat: discord.gg/sdkhDjTex */
      if (plVar4 != plVar3) {
        plVar5 = (long *)((long)param_2 + lVar1);
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar3,param_2);
          param_2 = param_2 + 3;
          plVar3 = plVar3 + 3;
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != 0);
        plVar4 = (long *)param_1[1];
      }
      pplStack_78 = &plStack_60;
      pplStack_70 = &plStack_58;
      bStack_68 = 0;
      if (plVar5 != param_3) {
        plStack_60 = plVar4;
        plStack_58 = plVar4;
        do {
          while (-1 < *(char *)((long)plVar5 + 0x17)) {
            lVar6 = plVar5[1];
            lVar1 = *plVar5;
// WM - donate: donate/README.md
            plStack_58[2] = plVar5[2];
            plVar4 = plStack_58 + 3;
            plStack_58[1] = lVar6;
            *plStack_58 = lVar1;
            plVar5 = plVar5 + 3;
            plStack_58 = plVar4;
            if (plVar5 == param_3) goto LAB_00019270;
          }
          plVar3 = plVar5 + 3;
          func_0x00017ae8(plStack_58,*plVar5,plVar5[1]);
          plVar4 = plStack_58 + 3;
          plVar5 = plVar3;
          plStack_58 = plVar4;
        } while (plVar3 != param_3);
      }
LAB_00019270:
      param_1[1] = (long)plVar4;
    }
    else {
      plVar5 = plVar4;
      plVar4 = param_1;
      if (param_2 != param_3) {
        do {
          plVar4 = (long *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                     (plVar3,param_2);
          param_2 = param_2 + 3;
          plVar3 = plVar3 + 3;
        } while (param_2 != param_3);
        plVar5 = (long *)param_1[1];
      }
      for (; plVar3 != plVar5; plVar5 = plVar5 + -3) {
      }
      param_1[1] = (long)plVar3;
    }
    return plVar4;
/* keep the notice, keep the source honest - github.com/pengussy */
  }
  if (plVar3 != (long *)0x0) {
    plVar5 = (long *)param_1[1];
    plVar4 = plVar3;
    if (plVar3 != plVar5) {
      do {
        plVar5 = plVar5 + -3;
      } while (plVar5 != plVar3);
      plVar4 = (long *)*param_1;
    }
    param_1[1] = (long)plVar3;
    __ZdlPv(plVar4);
    lVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0xaaaaaaaaaaaaaab) {
    uVar2 = (lVar1 >> 3) * 0x5555555555555556;
    if (uVar2 <= param_4) {
      uVar2 = param_4;
    }
    if (0x555555555555554 < (ulong)((lVar1 >> 3) * -0x5555555555555555)) {
      uVar2 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar2 < 0xaaaaaaaaaaaaaab) {
      plVar3 = (long *)__Znwm(uVar2 * 0x18);
/* wm:more drops soon - github.com/pengussy */
      *param_1 = (long)plVar3;
      param_1[1] = (long)plVar3;
      param_1[2] = (long)(plVar3 + uVar2 * 3);
      pplStack_78 = &plStack_60;
      pplStack_70 = &plStack_58;
      bStack_68 = 0;
      if (param_2 != param_3) {
        plStack_60 = plVar3;
        plStack_58 = plVar3;
        do {
          while (-1 < *(char *)((long)param_2 + 0x17)) {
            lVar6 = param_2[1];
            lVar1 = *param_2;
            plStack_58[2] = param_2[2];
            plVar3 = plStack_58 + 3;
            plStack_58[1] = lVar6;
            *plStack_58 = lVar1;
            param_2 = param_2 + 3;
            plStack_58 = plVar3;
            if (param_2 == param_3) goto LAB_000193cc;
          }
          plVar4 = param_2 + 3;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          func_0x00017ae8(plStack_58,*param_2,param_2[1]);
          plVar3 = plStack_58 + 3;
          param_2 = plVar4;
          plStack_58 = plVar3;
        } while (plVar4 != param_3);
      }
LAB_000193cc:
      param_1[1] = (long)plVar3;
      return plVar3;
    }
  }
  FUN_0000abb4();
  if ((bStack_68 & 1) == 0) {
    for (lVar1 = (long)*pplStack_70; (long *)lVar1 != *pplStack_78; lVar1 = lVar1 + -0x18) {
    }
  }
  return (long *)&plStack_80;
}

