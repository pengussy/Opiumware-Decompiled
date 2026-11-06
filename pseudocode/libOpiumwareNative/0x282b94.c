/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x282b94:95218d6235
 */

undefined8
FUN_00282b94(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined4 *param_6)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = __Znwm(8);
  __ZNSt3__115__thread_structC1Ev();
  puVar4 = (undefined8 *)__Znwm(0x50);
  *puVar4 = uVar3;
  uVar3 = *param_2;
  puVar4[2] = param_2[1];
  puVar4[1] = uVar3;
  puVar4[3] = *param_3;
  lVar5 = param_4[1];
  uVar3 = *param_4;
  puVar4[5] = param_4[1];
  puVar4[4] = uVar3;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    *plVar1 = *plVar1 + 1;
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
// WM - donate: donate/README.md
    func_0x00017ae8(puVar4 + 6,*param_5,param_5[1]);
  }
  else {
    uVar3 = *param_5;
    puVar4[7] = param_5[1];
    puVar4[6] = uVar3;
    puVar4[8] = param_5[2];
  }
  *(undefined4 *)(puVar4 + 9) = *param_6;
  uVar3 = _pthread_create(param_1,0,&DAT_00282d0c,puVar4);
  if ((int)uVar3 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc(uVar3,"thread constructor failed");
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x282c9c);
    (*pcVar2)();
  }
  return param_1;
}

