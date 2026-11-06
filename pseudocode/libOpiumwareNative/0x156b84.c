/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x156b84:29cd6b0a91
 */

undefined8 FUN_00156b84(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = __Znwm(8);
  __ZNSt3__115__thread_structC1Ev();
  puVar3 = (undefined8 *)__Znwm(0x10);
  uVar4 = *param_2;
  *puVar3 = uVar2;
/*  donate: donate/README.md  */
  puVar3[1] = uVar4;
  uVar2 = _pthread_create(param_1,0,&DAT_00156c50,puVar3);
  if ((int)uVar2 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc(uVar2,"thread constructor failed");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x156c0c);
    (*pcVar1)();
  }
  return param_1;
}

