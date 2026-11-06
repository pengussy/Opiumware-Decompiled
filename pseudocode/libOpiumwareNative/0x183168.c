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
 *  file-id: 0x183168:018b8cbeaf
 *  --------------------------------------------------------------------------*/

char * FUN_00183168(long *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x02') {
    return (char *)param_1[2];
  }
  if (*pcVar2 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x38);
  }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  else if (param_1[3] != 0) {
    uVar3 = ___cxa_allocate_exception(0x20);
    func_0x0000e100(auStack_48,"cannot get value");
    FUN_0018425c(uVar3,0xd6,auStack_48,*param_1);
    ___cxa_throw(uVar3,&UNK_01dbfdf0,&DAT_00184420);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x18322c);
    (*pcVar1)();
  }
  return pcVar2;
}

