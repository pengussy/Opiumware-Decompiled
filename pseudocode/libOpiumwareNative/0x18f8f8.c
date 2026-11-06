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
 *  file-id: 0x18f8f8:4437f37cce
 *  --------------------------------------------------------------------------*/

long FUN_0018f8f8(char *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    puVar2 = (undefined8 *)__Znwm(0x18);
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = puVar2 + 1;
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
/*  found on a paste site? it was re-uploaded illegally  */
  else if (*param_1 != '\x01') {
    uVar4 = ___cxa_allocate_exception(0x20);
    uStack_50 = func_0x00184714(param_1);
    func_0x0018fa18(auStack_48,"cannot use operator[] with a string argument with ",&uStack_50);
    FUN_00184484(uVar4,0x131,auStack_48,param_1);
    ___cxa_throw(uVar4,&UNK_01dbfe30,&DAT_0018473c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x18f9e0);
    (*pcVar1)();
  }
  auStack_48[0] = 0;
  lVar3 = func_0x0018fadc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),param_2,
                          auStack_48);
  return lVar3 + 0x38;
}

