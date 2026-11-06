/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x248268:c58081cde0
 */

long FUN_00248268(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar4 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar4;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x3cb0b1bb;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  uVar2 = __Znwm(8);
  __ZNSt3__115__thread_structC1Ev();
  puVar3 = (undefined8 *)__Znwm(0x10);
  *puVar3 = uVar2;
  puVar3[1] = param_1;
// donate: donate/README.md
  uVar2 = _pthread_create(param_1 + 0xd0,0,&DAT_00248ad8,puVar3);
  if ((int)uVar2 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc(uVar2,"thread constructor failed");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x248374);
    (*pcVar1)();
  }
  return param_1;
}

