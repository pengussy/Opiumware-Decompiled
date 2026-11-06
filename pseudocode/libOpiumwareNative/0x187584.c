/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x187584:20f0137c1a
   =========================================================================== */

long FUN_00187584(long *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1[1] == param_1[2]) {
    uStack_48 = 0;
    uStack_50 = 3;
    puVar3 = (undefined8 *)__Znwm(0x18);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x00017ae8(puVar3,*param_2,param_2[1]);
      uVar4 = (undefined1)uStack_50;
    }
    else {
      uVar8 = *param_2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar8;
      puVar3[2] = param_2[2];
      uVar4 = 3;
    }
    puVar6 = (undefined1 *)*param_1;
    uVar1 = *puVar6;
    *puVar6 = uVar4;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    uStack_50 = CONCAT71(uStack_50._1_7_,uVar1);
    uStack_48 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 **)(puVar6 + 8) = puVar3;
    FUN_00183bbc(&uStack_48);
    return *param_1;
  }
  pcVar5 = *(char **)(param_1[2] + -8);
  if (*pcVar5 != '\x02') {
    uStack_58 = 0;
    puVar3 = (undefined8 *)__Znwm(0x18);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x00017ae8(puVar3,*param_2,param_2[1]);
    }
    else {
      uVar8 = *param_2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar8;
      puVar3[2] = param_2[2];
    }
    puVar6 = (undefined1 *)param_1[4];
    *puVar6 = 3;
    uStack_58 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 **)(puVar6 + 8) = puVar3;
    FUN_00183bbc(&uStack_58);
    return param_1[4];
  }
  lVar7 = *(long *)(pcVar5 + 8);
  puVar3 = *(undefined8 **)(lVar7 + 8);
  if (puVar3 < *(undefined8 **)(lVar7 + 0x10)) {
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined1 *)puVar3 = 3;
    puVar2 = (undefined8 *)__Znwm(0x18);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
/* WM - more drops soon - github.com/pengussy */
      func_0x00017ae8(puVar2,*param_2,param_2[1]);
    }
    else {
      uVar8 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar8;
      puVar2[2] = param_2[2];
    }
    puVar3[1] = puVar2;
    puVar3 = puVar3 + 2;
    *(undefined8 **)(lVar7 + 8) = puVar3;
  }
  else {
    puVar3 = (undefined8 *)func_0x00187818(lVar7,param_2);
  }
  *(undefined8 **)(lVar7 + 8) = puVar3;
  return *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
}

