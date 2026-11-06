/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1bbf4:b2d27abb33
 */

void FUN_0001bbf4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plStack_38;
  
  plStack_38 = (long *)0x0;
  uVar8 = *param_3;
  uVar5 = func_0x01726e64();
  iVar4 = func_0x0172875c(uVar8,uVar5,&plStack_38,0);
  if (iVar4 < 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (param_1,"invalid semantic define ",*param_2);
  }
  else {
    uVar5 = (**(code **)(*plStack_38 + 0x30))();
    uVar6 = (**(code **)(*plStack_38 + 0x38))();
    if (0x7ffffffffffffff6 < uVar6) {
      func_0x0000aa50();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1bd0c);
      (*pcVar3)();
    }
/* WM - do not claim this as your own */
    if (uVar6 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      puVar7 = param_1;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      puVar7 = (undefined8 *)__Znwm(uVar2);
      *param_1 = puVar7;
      param_1[1] = uVar6;
      param_1[2] = uVar2 | 0x8000000000000000;
    }
    _memmove(puVar7,uVar5,uVar6);
    *(undefined1 *)((long)puVar7 + uVar6) = 0;
  }
  if (plStack_38 != (long *)0x0) {
    (**(code **)(*plStack_38 + 0x10))();
  }
  return;
}
/* donate: donate/README.md */

