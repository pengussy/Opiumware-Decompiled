/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35b7c4:de5f510bf4
   =========================================================================== */

uint * FUN_0035b7c4(uint *param_1,undefined8 param_2,ulong param_3,long *param_4,int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint extraout_w1;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  uint *puVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
/* keep the notice, keep the source honest - github.com/pengussy */
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar11 = param_1;
  if (param_1 == (uint *)0x0) goto LAB_0035bbc4;
  if (*param_1 == 0) {
LAB_0035b804:
    if (param_5 != 0) goto LAB_0035b848;
LAB_0035b840:
    puVar7 = param_1;
    if (-1 < (char)*param_1) goto LAB_0035b848;
LAB_0035bc08:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0035bc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar11 = (uint *)(**(code **)(*(long *)(puVar7 + 6) + 0x98))(puVar7,param_2);
      return puVar11;
    }
    goto LAB_0035bc50;
  }
  if ((*param_1 >> 7 & 1) == 0) {
    puVar11 = (uint *)0x0;
    goto LAB_0035b804;
  }
  puVar11 = (uint *)func_0x00380678();
  if (param_5 == 0) goto LAB_0035b840;
LAB_0035b848:
/*  do not claim this as your own  */
  puVar7 = puVar11;
  if (puVar7 == (uint *)0x0) {
LAB_0035bbc0:
    puVar11 = (uint *)0x0;
  }
  else {
    iVar3 = (int)param_2 + -0x21;
    uVar8 = (uint)param_3;
    puVar5 = puVar7;
    switch(iVar3) {
    case 0:
code_r0x0035b874:
      puVar5[0x26e] = puVar5[0x26e] | uVar8;
      func_0x004784a8(auStack_98,"mode",puVar5 + 0x26e);
      func_0x00479f78(&uStack_c0);
      uStack_68 = uStack_b8;
      uStack_70 = uStack_c0;
      uStack_58 = uStack_a8;
      uStack_60 = uStack_b0;
      uStack_50 = uStack_a0;
// WM - keep the notice, keep the source honest
      (**(code **)(*(long *)(puVar5 + 0x38a) + 0x90))(*(undefined8 *)(puVar5 + 0x38e),auStack_98);
      puVar11 = (uint *)(ulong)puVar5[0x26e];
      break;
    default:
      if ((char)*param_1 < '\0') {
        if (*puVar7 != 0) {
          if ((*puVar7 >> 7 & 1) == 0) goto LAB_0035bbc0;
          puVar5 = (uint *)func_0x00380678(puVar7);
        }
        if ((char)*puVar7 < '\0') goto LAB_0035bc08;
        if (puVar5 == (uint *)0x0) goto LAB_0035bbc0;
        puVar11 = puVar7;
        switch(iVar3) {
        case 0:
          goto code_r0x0035b874;
        case 0x11:
          goto code_r0x0035b98c;
        case 0x12:
          goto code_r0x0035ba6c;
        case 0x13:
/* WM - no support for modified copies */
          goto code_r0x0035ba84;
        case 0x2b:
          goto code_r0x0035ba24;
        case 0x2d:
          goto code_r0x0035bad0;
        case 0x42:
          goto code_r0x0035bb10;
        case 0x43:
          goto code_r0x0035babc;
        case 0x4d:
          goto code_r0x0035bba8;
        case 0x59:
          goto code_r0x0035ba48;
        case 0x5a:
          goto code_r0x0035bb24;
        case 0x5b:
          goto code_r0x0035b9ac;
        case 0x5c:
          goto code_r0x0035ba2c;
// chat: discord.gg/sdkhDjTex
        case 0x5d:
          goto code_r0x0035bae0;
        case 0x61:
          goto code_r0x0035b9a4;
        case 0x62:
          goto code_r0x0035ba7c;
        case 0x67:
          goto code_r0x0035b994;
        }
      }
      else {
        puVar11 = param_1;
      }
      puVar7 = param_1;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0035b920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar11 = (uint *)(**(code **)(*(long *)(puVar11 + 6) + 0x98))(puVar11);
        return puVar11;
      }
      goto LAB_0035bc50;
    case 7:
      puVar11 = (uint *)(long)(int)puVar7[0x396];
      break;
/* wm:found on a paste site? it was re-uploaded illegally */
    case 8:
      puVar11 = (uint *)(long)(int)puVar7[0x396];
      puVar7[0x396] = uVar8;
      break;
    case 0x11:
code_r0x0035b98c:
      puVar11 = *(uint **)(puVar5 + 0x272);
      break;
    case 0x12:
code_r0x0035ba6c:
      if ((long)param_3 < 0) goto LAB_0035bbc0;
      puVar11 = *(uint **)(puVar5 + 0x272);
      *(ulong *)(puVar5 + 0x272) = param_3;
      break;
    case 0x13:
code_r0x0035ba84:
      if (param_3 - 0x4001 < 0xffffffffffffc1ff) goto LAB_0035bbc0;
      *(ulong *)(puVar5 + 0x278) = param_3;
      if (param_3 < *(ulong *)(puVar5 + 0x276)) {
        *(ulong *)(puVar5 + 0x276) = param_3;
      }
      pcVar10 = *(code **)(*(long *)(puVar5 + 0x38c) + 0xa0);
      uVar6 = *(undefined8 *)(puVar5 + 0x390);
LAB_0035bb00:
      (*pcVar10)(uVar6,param_3);
      puVar11 = (uint *)((long)&MACH_HEADER.magic + 1);
      break;
/* WM - more drops soon - github.com/pengussy */
    case 0x2b:
code_r0x0035ba24:
      puVar11 = (uint *)(long)(int)puVar5[300];
      break;
    case 0x2d:
code_r0x0035bad0:
      uVar8 = puVar5[0x26e] & (uVar8 ^ 0xffffffff);
      puVar11 = (uint *)(ulong)uVar8;
      puVar5[0x26e] = uVar8;
      break;
    case 0x42:
code_r0x0035bb10:
      uVar8 = *(uint *)(*(long *)(puVar5 + 0x220) + 0x1c) | uVar8;
      puVar11 = (uint *)(ulong)uVar8;
      *(uint *)(*(long *)(puVar5 + 0x220) + 0x1c) = uVar8;
      break;
    case 0x43:
code_r0x0035babc:
      uVar8 = *(uint *)(*(long *)(puVar5 + 0x220) + 0x1c) & (uVar8 ^ 0xffffffff);
      puVar11 = (uint *)(ulong)uVar8;
      *(uint *)(*(long *)(puVar5 + 0x220) + 0x1c) = uVar8;
      break;
    case 0x4d:
code_r0x0035bba8:
      if (param_4 == (long *)0x0) {
        puVar11 = (uint *)((long)&MACH_HEADER.magic + 2);
      }
      else {
        if (*(long *)(puVar5 + 0xe8) == 0) goto LAB_0035bbc0;
/* WM - watermarked copy - do not remove */
        *param_4 = *(long *)(puVar5 + 0xe8);
        puVar11 = (uint *)(long)(int)puVar5[0xea];
      }
      break;
    case 0x59:
code_r0x0035ba48:
      if (((*(long *)(puVar5 + 0x240) == 0) || (iVar3 = func_0x003a934c(), iVar3 != 0)) ||
         (iVar3 = func_0x003a9624(puVar5), iVar3 != 0)) {
        puVar11 = (uint *)0xffffffffffffffff;
      }
      else {
        puVar11 = (uint *)((ulong)*(uint *)(*(long *)(puVar5 + 0x240) + 0x378) & 1);
      }
      break;
    case 0x5a:
code_r0x0035bb24:
      puVar11 = (uint *)0x0;
      uVar4 = puVar5[0x270];
      uVar6 = nzcv;
      bVar2 = uVar4 >> 8 == 0xfe;
      nzcv = uVar6;
      if (((uVar4 == 0x100 || bVar2) || (uVar4 == 0 || uVar8 != 0x100 && uVar8 >> 8 != 0xfe)) &&
         (uVar8 == 0 || (uVar8 == 0 || uVar4 != 0x100 && !bVar2))) {
// WM - thanks for reading - discord.gg/sdkhDjTex
        uVar1 = **(undefined4 **)(param_1 + 4);
        puVar5 = puVar5 + 0x26f;
LAB_0035bb98:
        iVar3 = func_0x003b5fcc(uVar1,param_3,puVar5);
        puVar11 = (uint *)(ulong)(iVar3 != 0);
      }
      break;
    case 0x5b:
code_r0x0035b9ac:
      puVar11 = (uint *)0x0;
      uVar4 = puVar5[0x26f];
      uVar6 = nzcv;
      bVar2 = uVar8 >> 8 != 0xfe;
      nzcv = uVar6;
      if ((uVar4 == 0 || (uVar4 == 0 || uVar8 != 0x100 && bVar2)) &&
         ((uVar8 == 0x100 || !bVar2) || (uVar8 == 0 || uVar4 != 0x100 && uVar4 >> 8 != 0xfe))) {
        uVar1 = **(undefined4 **)(param_1 + 4);
        puVar5 = puVar5 + 0x270;
        goto LAB_0035bb98;
      }
      break;
    case 0x5c:
code_r0x0035ba2c:
      if (*(ulong *)(puVar5 + 0x278) <= param_3 - 1) goto LAB_0035bbc0;
      *(ulong *)(puVar5 + 0x276) = param_3;
      puVar11 = (uint *)((long)&MACH_HEADER.magic + 1);
      break;
    case 0x5d:
code_r0x0035bae0:
      if (param_3 - 0x21 < 0xffffffffffffffe0) goto LAB_0035bbc0;
      *(ulong *)(puVar5 + 0x27a) = param_3;
      pcVar10 = *(code **)(*(long *)(puVar5 + 0x38a) + 0x78);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (pcVar10 != (code *)0x0) {
        uVar6 = *(undefined8 *)(puVar5 + 0x38e);
        goto LAB_0035bb00;
      }
      puVar11 = (uint *)((long)&MACH_HEADER.magic + 1);
      break;
    case 0x61:
code_r0x0035b9a4:
      puVar11 = (uint *)(long)(int)puVar5[0x26f];
      break;
    case 0x62:
code_r0x0035ba7c:
      puVar11 = (uint *)(long)(int)puVar5[0x270];
      break;
    case 0x67:
code_r0x0035b994:
      puVar5[0x1a] = 8;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      puVar11 = (uint *)((long)&MACH_HEADER.magic + 1);
    }
  }
LAB_0035bbc4:
  puVar7 = puVar11;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return puVar11;
  }
LAB_0035bc50:
  uVar4 = ___stack_chk_fail(puVar7);
  uVar9 = (uint)(extraout_w1 == 0x100 || extraout_w1 >> 8 == 0xfe);
  uVar8 = uVar9 ^ 1;
  if (uVar4 == 0) {
    uVar8 = 1;
  }
  bVar2 = uVar4 >> 8 == 0xfe;
  if (uVar4 == 0x100 || bVar2) {
    uVar8 = 1;
  }
  return (uint *)(ulong)(((uint)(extraout_w1 == 0) | (uVar4 == 0x100 || bVar2) ^ 0xffffffff | uVar9)
                        & uVar8);
}

