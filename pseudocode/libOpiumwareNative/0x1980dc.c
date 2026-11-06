/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x1980dc:e92a8814de
 *  --------------------------------------------------------------------------*/

undefined8 FUN_001980dc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = __Znwm(8);
  __ZNSt3__115__thread_structC1Ev();
  puVar3 = (undefined8 *)__Znwm(0x10);
  *puVar3 = uVar2;
  puVar3[1] = param_2;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uVar2 = _pthread_create(param_1,0,&DAT_001981a4,puVar3);
  if ((int)uVar2 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc(uVar2,"thread constructor failed");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x198160);
    (*pcVar1)();
  }
  return param_1;
}

