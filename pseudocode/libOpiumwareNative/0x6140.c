/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x6140:1dda5e1b2f
 */

undefined8 FUN_00006140(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  
  *param_2 = 0;
  uVar1 = func_0x00034a24(&UNK_01ad7000,&UNK_01ad70c0,param_2);
  if (-1 < (int)uVar1) {
    return uVar1;
  }
  plVar2 = (long *)func_0x01726e64();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0xd0);
  if (plVar3 == (long *)0x0) {
    return 0x8007000e;
  }
  *plVar3 = (long)&UNK_01e8b390;
  *(undefined4 *)(plVar3 + 1) = 0;
// reversing this took months of machine time
  plVar3[2] = (long)plVar2;
  (**(code **)(*plVar2 + 8))(plVar2);
  plVar3[3] = (long)(plVar3 + 6);
  plVar3[4] = (long)(plVar3 + 6);
  plVar3[0x16] = 0;
  plVar3[5] = (long)(plVar3 + 0x16);
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar3[0x17] = (long)
                 "Unable to create container builder from dxil.dll. Resulting container will not be signed.\n"
  ;
  *(undefined2 *)(plVar3 + 0x18) = 0;
  plVar3[0x19] = 0;
  uVar1 = (**(code **)*plVar3)(plVar3,param_1,param_2);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return uVar1;
}

